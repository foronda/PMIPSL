/*
** Authors: Brylian Foronda, John Barret
** Date: November 28, 2012
** Fall 2012, EE 361L Final Lab Project
** Pipeline MIPS Lite
*/

module PMIPSL0(
	imemaddr, 	// Instruction memory addr
	dmemaddr,	// Data memory addr
	dmemwdata,	// Data memory write-data
	dmemwrite,	// Data memory write enable
	dmemread,	// Data memory read enable
	aluresult,	// Output from the ALU:  for debugging
	clock,
	imemrdata,	// Instruction memory read data
	dmemrdata,	// Data memory read data
	reset,		// Reset
	probe1,
   probe2,
   probe3
	);
   
// PMIPS Outputs
output [15:0] imemaddr;    // 16-Bit Register for Instruction Memory (PC)
output [15:0] dmemaddr;    // DMem Address, calculated using ALU Results (EXMEM Stage)
output [15:0] dmemwdata;   // DMem Data, read data from data memory
output [15:0] aluresult;   
output dmemwrite;	         // DMem Write enable
output dmemread;	         // DMem Read enable

// PMIPS Inputs
input [16:0] imemrdata;	   // 17-bit Instructions
input [15:0] dmemrdata;
input clock;
input reset; 

// 16-bit Debug Probes
output [15:0] probe1, probe2, probe3;


// ***** Variables at each stage of the pipeline *****


//     --- Variables in IF stage and PC logic ---

reg	[31:0] PC; 
wire 	[31:0] PCPlus2;

 //    --- Variables in the IF/ID pipeline register ---
reg [16:0] IFIDInstr; 
reg [15:0] IFIDPCPlus2;
wire [3:0] IFIDOpcode;
wire [2:0] IFIDReadAddr1;
wire [2:0] IFIDReadAddr2;
wire [2:0] IFIDReadAddr3;
wire [6:0] IFIDConst;
wire [15:0] IFIDJumpwire;

//     --- Variables in the ID stage ---

wire [15:0] rdata1; // Variables connected to reg file
wire [15:0] rdata2;
wire [15:0] wdata;
wire [2:0] waddr;
wire negclock;
wire [15:0] IDSignExt; // Sign extension

// Variables from the controller
wire [1:0] PCControl;	// Control signals to the PC logic
wire RegWrite;
wire RegDst;
wire [2:0] ALU_Select;
wire ALUSrc;
wire Branch;
wire Jump;
wire MemWrite;
wire MemRead;
wire MemtoReg;

 //  --- Variables in the ID/EX pipeline register ---

reg [15:0] IDEXPCPlus2; 
reg [15:0] IDEXRegRead1;
reg [15:0] IDEXRegRead2;
reg [2:0] IDEXRegfield2;
reg [2:0] IDEXRegfield3;
reg [16:0] IDEXInstr; //connect to IFIDInstr
reg [15:0] IDEXSignExtend;
reg [2:0] IDEXALU_Select;
reg [15:0] IDEXJumpwire;
reg IDEXALUSrc;
reg IDEXRegDst;
reg IDEXJump;
reg IDEXBranch;
reg IDEXMemRead;
reg IDEXMemtoReg;
reg IDEXMemWrite;
reg IDEXRegWrite;

//   --- Variables in the EX stage ---
wire [15:0] alusrc2;
wire [15:0] aluout1;
wire aluzero;
wire [2:0] aluselect;

wire [15:0] branchaddr;
wire [2:0] writeaddr;

//   --- Variables in the EX/MEM pipeline register ---
reg [15:0] EXMEMALUOut;
reg EXMEMALUZero;
reg [15:0] EXMEMbranchaddr;
reg EXMEMBranch;
reg EXMEMRegWrite;
reg EXMEMJump;
reg EXMEMMemWrite;
reg EXMEMMemRead;
reg EXMEMMemtoReg;
reg [15:0] EXMEMRegRead2;
reg [2:0] EXMEMwriteaddr;
reg [15:0] EXMEMJumpwire;
reg [15:0] EXMEMPCPlus2;

//   --- Variables in the MEM stage ---
wire wbbranch;
wire [15:0] memread;
wire [15:0] pc2;

//   --- Variables in the MEM/WB pipeline register ---
reg [15:0] MEMWBmemread;
reg [2:0] MEMWBwriteaddr;
reg [15:0] MEMWBALUOut;
reg MEMWBRegWrite;
reg MEMWBMemtoReg;

//   --- Variables in the WB stage ---
wire [15:0] wbdata;

// ***** Logic at each stage of the pipeline *****

//---- IF Stage and PC logic --------------------
assign PCPlus2 = PC + 2; // This is the adder circuit near the PC

always @(posedge clock)
	begin
	if (reset==1) 	PC <= 0;
	else if (PCControl == 0) PC <= PC;
	else if (PCControl == 1) PC <= PCPlus2;
	else if (PCControl == 2)
		begin
			if(wbbranch == 1)
				PC <= EXMEMbranchaddr;
			else if (EXMEMJump == 1)
				PC <= EXMEMJumpwire;
			else
				PC <= PC;
		end
	end

assign imemaddr = PC; // PC = instruction memory address

always @(posedge clock)
	begin
	if (reset == 1)
		begin
		IFIDInstr <= 0;
		IFIDPCPlus2 <= 0;
		end
	else
		begin
		IFIDPCPlus2 <= PCPlus2;
		IFIDInstr <= imemrdata;
		end
	end

assign IFIDOpcode = IFIDInstr[16:13];
assign IFIDReadAddr1 = IFIDInstr[12:10];
assign IFIDReadAddr2 = IFIDInstr[9:7];
assign IFIDReadAddr3 = IFIDInstr[6:4];
assign IFIDConst = IFIDInstr[6:0];

//--- ID Stage ----------

// Since the datapath is incomplete, the next three
// lines are used to set inputs of the reg file.
// You should replace this in your final implementation.
// Note that these lines will set register $3 to the
// value 5

assign negclock = ~clock;  // Reg file is synchronized
						   // to pos clock edge, so we
						   // supply inverted clock
						   // signal to the reg file.

 RegFile rfile1(
 	rdata1,			// read data output 1
	rdata2,			// read data output 2
	negclock,		
	wbdata,			// write data input
	MEMWBwriteaddr,			// write address
	IFIDReadAddr1,	// read address 1
	IFIDReadAddr2,	// read address 2
	MEMWBRegWrite,
	reset
	);			

assign IDSignExt = {{9{IFIDInstr[6]}},IFIDInstr[6:0]};
assign IFIDJumpwire = {IFIDPCPlus2[15:14],IFIDInstr[12:0]<<1};

Control cntrol1(
	PCControl,					
	RegWrite,
	RegDst,
	ALUSrc,
	ALU_Select,
	Branch,
	Jump,
	MemWrite,
	MemRead,
	MemtoReg,
	clock,			
	IFIDOpcode,	// from the IFID pipeline register
	reset
	);

assign probe1 = ALU_Select;
//---- ID/EX Pipeline Register --------


always @(posedge clock)
	begin
	IDEXPCPlus2 <= IFIDPCPlus2;	//pc?
	IDEXRegRead1 <= rdata1;			//register val 1
	IDEXRegRead2 <= rdata2;			//register val 2
	IDEXInstr <= IFIDInstr; 		//sasaki said un-needed?
	IDEXSignExtend <= IDSignExt;	//sign extension
	IDEXALU_Select <= ALU_Select;	//alu select = aluop?
	IDEXRegfield2 <= IFIDReadAddr2;
	IDEXRegfield3 <= IFIDReadAddr3;
	IDEXBranch <= Branch;
	IDEXJump <= Jump;
	IDEXALUSrc <= ALUSrc;
	IDEXRegDst <= RegDst;
	IDEXRegWrite <= RegWrite;
	IDEXMemWrite <= MemWrite;
	IDEXMemRead <= MemRead;
	IDEXMemWrite <= MemWrite;
	IDEXMemtoReg <= MemtoReg;
	IDEXJumpwire <= IFIDJumpwire;
	end


//---- EX Stage --------

MUX2S regmux(
	writeaddr,
	IDEXRegfield2,
	IDEXRegfield3,
	IDEXRegDst
	);

MUX2 alumux( // ALU multiplexer
	alusrc2,		
	IDEXRegRead2,	
	IDEXSignExtend,	
	IDEXALUSrc		
	);	

ALU alu1(
	aluout1,	// 16-bit output from the ALU
	aluzero,	// equals 1 if the result is 0, and 0 otherwise
	IDEXRegRead1,	// data input
	alusrc2,		// data input
	IDEXALU_Select		// 3-bit select
	);		

assign aluresult = aluout1; // Connect the alu with the outside world
assign branchaddr = (IDEXSignExtend << 1) + IDEXPCPlus2;
//------ EX/MEM pipeline register ---


always @(posedge clock)
 	begin
	EXMEMALUOut <= aluout1;
	EXMEMALUZero <= aluzero;
	EXMEMMemtoReg <= IDEXMemtoReg;
	EXMEMMemRead <= IDEXMemRead;
	EXMEMMemWrite <= IDEXMemWrite;
	EXMEMJump <= IDEXJump;
	EXMEMRegWrite <= IDEXRegWrite;
	EXMEMBranch <= IDEXBranch;
	EXMEMbranchaddr <= branchaddr;
	EXMEMRegRead2 <= IDEXRegRead2;
	EXMEMwriteaddr <= writeaddr;
	EXMEMJumpwire <= IDEXJumpwire;
	EXMEMPCPlus2 <= IDEXPCPlus2;
	end


//------- MEM Stage ----------------

assign pc2 = EXMEMPCPlus2;
assign Jwire = EXMEMJumpwire;
assign wbbranch = (EXMEMBranch&EXMEMALUZero);

//dmem out
assign dmemaddr = EXMEMALUOut;
assign dmemwdata = EXMEMRegRead2;
assign dmemwrite = EXMEMMemWrite;	
assign dmemread = EXMEMMemRead;		
//attach wires

//------- MEM/WB pipeline register ----

always @(posedge clock)
 	begin
	MEMWBmemread <= dmemrdata;
	MEMWBALUOut <= EXMEMALUOut;
	MEMWBwriteaddr <= EXMEMwriteaddr;
	MEMWBMemtoReg <= EXMEMMemtoReg;
	MEMWBRegWrite <= EXMEMRegWrite;
	end

//------- WB Stage ------------------
MUX2 wbmux( // ALU multiplexer
	wbdata,		
	MEMWBALUOut,
	MEMWBmemread,		
	MEMWBMemtoReg		
	);	
	
endmodule
