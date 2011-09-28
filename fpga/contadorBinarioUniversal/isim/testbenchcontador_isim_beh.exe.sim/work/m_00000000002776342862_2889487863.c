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
static const char *ng0 = "D:/FPGA/contadorBinarioUniversal/testbench2.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {3U, 0U};
static int ng4[] = {2, 0};
static int ng5[] = {10, 0};



static void A_41_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 2168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);

LAB4:    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1092);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2068);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1092);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2068);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    goto LAB2;

}

static void I_43_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);

LAB4:    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1184);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2212);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1184);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB1;

}

static void I_45_2(char *t0)
{
    char t12[8];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 2456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);

LAB4:    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1276);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1460);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1552);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1644);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2652);
    *((int *)t2) = 1;
    t3 = (t0 + 2484);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2660);
    *((int *)t2) = 1;
    t3 = (t0 + 2484);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1644);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2668);
    *((int *)t2) = 1;
    t3 = (t0 + 2484);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 4024);
    *((int *)t8) = t7;

LAB8:    t9 = (t0 + 4024);
    if (*((int *)t9) > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1276);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2684);
    *((int *)t2) = 1;
    t3 = (t0 + 2484);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB9:    xsi_set_current_line(57, ng0);
    t10 = (t0 + 2676);
    *((int *)t10) = 1;
    t11 = (t0 + 2484);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    t2 = (t0 + 4024);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB8;

LAB12:    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1276);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1460);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1552);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 4028);
    *((int *)t8) = t7;

LAB13:    t9 = (t0 + 4028);
    if (*((int *)t9) > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1460);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 4032);
    *((int *)t8) = t7;

LAB17:    t9 = (t0 + 4032);
    if (*((int *)t9) > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1460);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 4036);
    *((int *)t8) = t7;

LAB21:    t9 = (t0 + 4036);
    if (*((int *)t9) > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1552);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 4040);
    *((int *)t8) = t7;

LAB25:    t9 = (t0 + 4040);
    if (*((int *)t9) > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(70, ng0);

LAB29:    t2 = (t0 + 864U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t12, 0, 8);
    t8 = (t12 + 4);
    t9 = (t3 + 4);
    t10 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = *((unsigned int *)t2);
    t6 = (t4 ^ t5);
    t13 = *((unsigned int *)t9);
    t14 = *((unsigned int *)t10);
    t15 = (t13 ^ t14);
    t16 = (t6 | t15);
    t17 = *((unsigned int *)t9);
    t18 = *((unsigned int *)t10);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB33;

LAB30:    if (t19 != 0)
        goto LAB32;

LAB31:    *((unsigned int *)t12) = 1;

LAB33:    t11 = (t12 + 4);
    t22 = *((unsigned int *)t11);
    t23 = (~(t22));
    t24 = *((unsigned int *)t12);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB35;

LAB34:    t27 = (t0 + 2724);
    *((int *)t27) = 1;
    t28 = (t0 + 2456U);
    *((char **)t28) = &&LAB29;
    goto LAB1;

LAB14:    xsi_set_current_line(63, ng0);
    t10 = (t0 + 2692);
    *((int *)t10) = 1;
    t11 = (t0 + 2484);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB16:    t2 = (t0 + 4028);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB13;

LAB18:    xsi_set_current_line(65, ng0);
    t10 = (t0 + 2700);
    *((int *)t10) = 1;
    t11 = (t0 + 2484);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB20:    t2 = (t0 + 4032);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB17;

LAB22:    xsi_set_current_line(67, ng0);
    t10 = (t0 + 2708);
    *((int *)t10) = 1;
    t11 = (t0 + 2484);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB24:    t2 = (t0 + 4036);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB21;

LAB26:    xsi_set_current_line(69, ng0);
    t10 = (t0 + 2716);
    *((int *)t10) = 1;
    t11 = (t0 + 2484);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB28;
    goto LAB1;

LAB28:    t2 = (t0 + 4040);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB25;

LAB32:    *((unsigned int *)t12) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB33;

LAB35:    t29 = (t0 + 2724);
    *((int *)t29) = 0;
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2732);
    *((int *)t2) = 1;
    t3 = (t0 + 2484);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB36;
    goto LAB1;

LAB36:    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1552);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2740);
    *((int *)t2) = 1;
    t3 = (t0 + 2484);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB37;
    goto LAB1;

LAB37:    xsi_set_current_line(74, ng0);

LAB38:    t2 = (t0 + 772U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t4 = *((unsigned int *)t2);
    t5 = (~(t4));
    t6 = *((unsigned int *)t3);
    t13 = (t6 & t5);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB40;

LAB39:    t8 = (t0 + 2748);
    *((int *)t8) = 1;
    t9 = (t0 + 2456U);
    *((char **)t9) = &&LAB38;
    goto LAB1;

LAB40:    t10 = (t0 + 2748);
    *((int *)t10) = 0;
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2756);
    *((int *)t2) = 1;
    t3 = (t0 + 2484);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB41;
    goto LAB1;

LAB41:    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1552);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 2356);
    xsi_process_wait(t2, 80000LL);
    *((char **)t1) = &&LAB42;
    goto LAB1;

LAB42:    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1460);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 2356);
    xsi_process_wait(t2, 80000LL);
    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB43:    xsi_set_current_line(80, ng0);
    xsi_vlog_stop(1);
    goto LAB1;

}


extern void work_m_00000000002776342862_2889487863_init()
{
	static char *pe[] = {(void *)A_41_0,(void *)I_43_1,(void *)I_45_2};
	xsi_register_didat("work_m_00000000002776342862_2889487863", "isim/testbenchcontador_isim_beh.exe.sim/work/m_00000000002776342862_2889487863.didat");
	xsi_register_executes(pe);
}
