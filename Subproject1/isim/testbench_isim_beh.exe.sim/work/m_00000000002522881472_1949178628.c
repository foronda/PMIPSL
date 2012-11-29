/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x2f00eba5 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "IO[%b,%b,%b] IMEM[%d,%b] DMEM[%d,%d,%d] ALU[%d] Signals[%b,%b,%0d]";
static const char *ng1 = "C:/Users/xi b_ReAL ix/Documents/Dropbox/EE Major/EE 361L/PMIPSL/Subproject1/testbenchSubproject2.V";
static int ng2[] = {0, 0};
static const char *ng3 = "\nIO[display,switch0,switch1]\n";
static const char *ng4 = "IMEM[PC,Instr]\n";
static const char *ng5 = "DMEM[address, rdata, wdata]\n";
static const char *ng6 = "ALU[result]\n";
static const char *ng7 = "Signals[clock,reset,time]";
static int ng8[] = {1, 0};

void Monitor_56_4(char *);
void Monitor_56_4(char *);


static void Monitor_56_4_Func(char *t0)
{
    char t20[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t21;

LAB0:    t1 = (t0 + 1428U);
    t2 = *((char **)t1);
    t1 = (t0 + 1656);
    t3 = (t1 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1748);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    t8 = (t0 + 600U);
    t9 = *((char **)t8);
    t8 = (t0 + 1244U);
    t10 = *((char **)t8);
    t8 = (t0 + 692U);
    t11 = *((char **)t8);
    t8 = (t0 + 1336U);
    t12 = *((char **)t8);
    t8 = (t0 + 784U);
    t13 = *((char **)t8);
    t8 = (t0 + 1060U);
    t14 = *((char **)t8);
    t8 = (t0 + 1840);
    t15 = (t8 + 36U);
    t16 = *((char **)t15);
    t17 = (t0 + 1932);
    t18 = (t17 + 36U);
    t19 = *((char **)t18);
    t21 = xsi_vlog_time(t20, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(1, 0, 3, ng0, 13, t0, (char)118, t2, 7, (char)118, t4, 1, (char)118, t7, 1, (char)118, t9, 16, (char)118, t10, 17, (char)118, t11, 16, (char)118, t12, 16, (char)118, t13, 16, (char)118, t14, 16, (char)118, t16, 1, (char)118, t19, 1, (char)118, t20, 64);

LAB1:    return;
}

static void Initial_31_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(31, ng1);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 1840);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_32_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 2600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng1);
    t2 = (t0 + 2500);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng1);
    t4 = (t0 + 1840);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 1840);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Initial_35_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 2744U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng1);

LAB4:    xsi_set_current_line(37, ng1);
    xsi_vlogfile_write(1, 0, 0, ng3, 1, t0);
    xsi_set_current_line(38, ng1);
    xsi_vlogfile_write(1, 0, 0, ng4, 1, t0);
    xsi_set_current_line(39, ng1);
    xsi_vlogfile_write(1, 0, 0, ng5, 1, t0);
    xsi_set_current_line(40, ng1);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t0);
    xsi_set_current_line(41, ng1);
    xsi_vlogfile_write(1, 0, 0, ng7, 1, t0);
    xsi_set_current_line(42, ng1);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1932);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(43, ng1);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(44, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1748);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(45, ng1);
    t2 = (t0 + 2644);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(46, ng1);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1932);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(47, ng1);
    t2 = (t0 + 2644);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(48, ng1);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1656);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(49, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1748);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(50, ng1);
    t2 = (t0 + 2644);
    xsi_process_wait(t2, 200000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(51, ng1);
    xsi_vlog_finish(1);
    goto LAB1;

}

static void Initial_55_3(char *t0)
{

LAB0:    xsi_set_current_line(56, ng1);
    Monitor_56_4(t0);

LAB1:    return;
}

void Monitor_56_4(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 2932);
    t2 = (t0 + 3228);
    xsi_vlogfile_monitor((void *)Monitor_56_4_Func, t1, t2);

LAB1:    return;
}


extern void work_m_00000000002522881472_1949178628_init()
{
	static char *pe[] = {(void *)Initial_31_0,(void *)Always_32_1,(void *)Initial_35_2,(void *)Initial_55_3,(void *)Monitor_56_4};
	xsi_register_didat("work_m_00000000002522881472_1949178628", "isim/testbench_isim_beh.exe.sim/work/m_00000000002522881472_1949178628.didat");
	xsi_register_executes(pe);
}
