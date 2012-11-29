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
static const char *ng0 = "C:/Users/xi b_ReAL ix/Documents/Dropbox/EE Major/EE 361L/PMIPSL/Subproject1/IM2.V";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {49409U, 0U};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {49648U, 0U};
static int ng5[] = {2, 0};
static unsigned int ng6[] = {49680U, 0U};
static int ng7[] = {3, 0};
static unsigned int ng8[] = {49918U, 0U};
static int ng9[] = {4, 0};
static unsigned int ng10[] = {37510U, 0U};
static int ng11[] = {5, 0};
static unsigned int ng12[] = {49840U, 0U};
static int ng13[] = {6, 0};
static unsigned int ng14[] = {37512U, 0U};
static int ng15[] = {7, 0};
static unsigned int ng16[] = {28288U, 0U};
static int ng17[] = {8, 0};
static unsigned int ng18[] = {63105U, 0U};
static int ng19[] = {9, 0};
static unsigned int ng20[] = {46082U, 0U};
static int ng21[] = {10, 0};
static unsigned int ng22[] = {29320U, 0U};
static int ng23[] = {11, 0};
static unsigned int ng24[] = {65549U, 0U};
static int ng25[] = {12, 0};
static unsigned int ng26[] = {29318U, 0U};
static int ng27[] = {13, 0};
static unsigned int ng28[] = {36490U, 0U};
static int ng29[] = {14, 0};
static unsigned int ng30[] = {65543U, 0U};



static void Always_12_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    int t15;
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12, ng0);
    t2 = (t0 + 1548);
    *((int *)t2) = 1;
    t3 = (t0 + 1380);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(13, ng0);
    t5 = (t0 + 600U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 1);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 31U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 31U);

LAB5:    t14 = ((char*)((ng1)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t14, 32);
    if (t15 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng3)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng5)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng7)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng9)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng11)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng13)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng15)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng17)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng19)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng21)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng23)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng25)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng27)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng29)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB34;

LAB35:
LAB37:
LAB36:    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 17);

LAB38:    goto LAB2;

LAB6:    xsi_set_current_line(15, ng0);
    t16 = ((char*)((ng2)));
    t17 = (t0 + 828);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 17);
    goto LAB38;

LAB8:    xsi_set_current_line(16, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 828);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 17);
    goto LAB38;

LAB10:    xsi_set_current_line(17, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 828);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 17);
    goto LAB38;

LAB12:    xsi_set_current_line(18, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 828);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 17);
    goto LAB38;

LAB14:    xsi_set_current_line(19, ng0);
    t3 = ((char*)((ng10)));
    t5 = (t0 + 828);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 17);
    goto LAB38;

LAB16:    xsi_set_current_line(20, ng0);
    t3 = ((char*)((ng12)));
    t5 = (t0 + 828);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 17);
    goto LAB38;

LAB18:    xsi_set_current_line(21, ng0);
    t3 = ((char*)((ng14)));
    t5 = (t0 + 828);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 17);
    goto LAB38;

LAB20:    xsi_set_current_line(23, ng0);
    t3 = ((char*)((ng16)));
    t5 = (t0 + 828);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 17);
    goto LAB38;

LAB22:    xsi_set_current_line(24, ng0);
    t3 = ((char*)((ng18)));
    t5 = (t0 + 828);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 17);
    goto LAB38;

LAB24:    xsi_set_current_line(25, ng0);
    t3 = ((char*)((ng20)));
    t5 = (t0 + 828);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 17);
    goto LAB38;

LAB26:    xsi_set_current_line(26, ng0);
    t3 = ((char*)((ng22)));
    t5 = (t0 + 828);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 17);
    goto LAB38;

LAB28:    xsi_set_current_line(27, ng0);
    t3 = ((char*)((ng24)));
    t5 = (t0 + 828);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 17);
    goto LAB38;

LAB30:    xsi_set_current_line(29, ng0);
    t3 = ((char*)((ng26)));
    t5 = (t0 + 828);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 17);
    goto LAB38;

LAB32:    xsi_set_current_line(31, ng0);
    t3 = ((char*)((ng28)));
    t5 = (t0 + 828);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 17);
    goto LAB38;

LAB34:    xsi_set_current_line(32, ng0);
    t3 = ((char*)((ng30)));
    t5 = (t0 + 828);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 17);
    goto LAB38;

}


extern void work_m_00000000002341459213_0467708899_init()
{
	static char *pe[] = {(void *)Always_12_0};
	xsi_register_didat("work_m_00000000002341459213_0467708899", "isim/testbench_isim_beh.exe.sim/work/m_00000000002341459213_0467708899.didat");
	xsi_register_executes(pe);
}
