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
static const char *ng0 = "C:/Users/xi b_ReAL ix/Documents/Dropbox/EE Major/EE 361L/PMIPSL/Subproject1/MIPS-Parts.V";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};



static void Always_254_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 1536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(254, ng0);
    t2 = (t0 + 1732);
    *((int *)t2) = 1;
    t3 = (t0 + 1564);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(255, ng0);
    t4 = (t0 + 784U);
    t5 = *((char **)t4);

LAB5:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 1, t4, 32);
    if (t6 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 1, t2, 32);
    if (t6 == 1)
        goto LAB8;

LAB9:
LAB10:    goto LAB2;

LAB6:    xsi_set_current_line(256, ng0);
    t7 = (t0 + 600U);
    t8 = *((char **)t7);
    t7 = (t0 + 1012);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 3);
    goto LAB10;

LAB8:    xsi_set_current_line(257, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 3);
    goto LAB10;

}


extern void work_m_00000000001088398038_3924674351_init()
{
	static char *pe[] = {(void *)Always_254_0};
	xsi_register_didat("work_m_00000000001088398038_3924674351", "isim/testbench_isim_beh.exe.sim/work/m_00000000001088398038_3924674351.didat");
	xsi_register_executes(pe);
}
