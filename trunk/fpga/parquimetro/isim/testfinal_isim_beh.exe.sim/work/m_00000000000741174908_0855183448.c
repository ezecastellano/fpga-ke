/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2007 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/

/* This file is designed for use with ISim build 0xecc70214 */

#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/FPGA-SVN/fpga/disp-mux.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {14U, 0U};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {13U, 0U};
static unsigned int ng7[] = {2U, 0U};
static unsigned int ng8[] = {11U, 0U};
static unsigned int ng9[] = {7U, 0U};



static void A_20_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 2168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20, ng0);
    t2 = (t0 + 2652);
    *((int *)t2) = 1;
    t3 = (t0 + 2196);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(21, ng0);
    t4 = (t0 + 772U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 1232U);
    t3 = *((char **)t2);
    t2 = (t0 + 1644);
    xsi_vlogvar_generic_wait_assign_value(t2, t3, 2, 0, 0, 18, 0LL);

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(22, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1644);
    xsi_vlogvar_generic_wait_assign_value(t12, t11, 1, 0, 0, 18, 0LL);
    goto LAB7;

}

static void C_27_1(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;

LAB0:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1644);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 18, t5, 32);
    t7 = (t0 + 2712);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    t12 = (t11 + 4);
    t13 = 262143U;
    t14 = t13;
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t13 = (t13 & t16);
    t17 = *((unsigned int *)t15);
    t14 = (t14 & t17);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 & 4294705152U);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t19 | t13);
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t20 & 4294705152U);
    t21 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t21 | t14);
    xsi_driver_vfirst_trans(t7, 0, 17);
    t22 = (t0 + 2660);
    *((int *)t22) = 1;

LAB1:    return;
}

static void A_31_2(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    int t17;
    char *t18;
    char *t19;

LAB0:    t1 = (t0 + 2456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 2668);
    *((int *)t2) = 1;
    t3 = (t0 + 2484);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);
    t5 = (t0 + 1644);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 16);
    *((unsigned int *)t4) = t11;
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 16);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 3U);
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 3U);

LAB5:    t16 = ((char*)((ng3)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 2, t16, 2);
    if (t17 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng5)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t17 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng7)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t17 == 1)
        goto LAB10;

LAB11:
LAB13:
LAB12:    xsi_set_current_line(49, ng0);

LAB18:    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1460);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 864U);
    t3 = *((char **)t2);
    t2 = (t0 + 1552);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);

LAB14:    goto LAB2;

LAB6:    xsi_set_current_line(34, ng0);

LAB15:    xsi_set_current_line(35, ng0);
    t18 = ((char*)((ng4)));
    t19 = (t0 + 1460);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 4);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1140U);
    t3 = *((char **)t2);
    t2 = (t0 + 1552);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    goto LAB14;

LAB8:    xsi_set_current_line(39, ng0);

LAB16:    xsi_set_current_line(40, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 1460);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 4);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1552);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    goto LAB14;

LAB10:    xsi_set_current_line(44, ng0);

LAB17:    xsi_set_current_line(45, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 1460);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 4);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 956U);
    t3 = *((char **)t2);
    t2 = (t0 + 1552);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    goto LAB14;

}


extern void work_m_00000000000741174908_0855183448_init()
{
	static char *pe[] = {(void *)A_20_0,(void *)C_27_1,(void *)A_31_2};
	xsi_register_didat("work_m_00000000000741174908_0855183448", "isim/testfinal_isim_beh.exe.sim/work/m_00000000000741174908_0855183448.didat");
	xsi_register_executes(pe);
}
