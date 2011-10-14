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
static const char *ng0 = "D:/FPGA-SVN/fpga/parquimetro/fsm.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {10U, 0U};
static unsigned int ng4[] = {4U, 0U};
static unsigned int ng5[] = {14U, 0U};
static unsigned int ng6[] = {11U, 0U};
static int ng7[] = {1, 0};
static unsigned int ng8[] = {12U, 0U};
static unsigned int ng9[] = {8U, 0U};



static void A_42_0(char *t0)
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

LAB0:    t1 = (t0 + 2556U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 3040);
    *((int *)t2) = 1;
    t3 = (t0 + 2584);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 1252U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1940);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1848);
    xsi_vlogvar_generic_wait_assign_value(t5, t4, 2, 0, 0, 4, 0LL);

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(44, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1848);
    xsi_vlogvar_generic_wait_assign_value(t12, t11, 2, 0, 0, 4, 0LL);
    goto LAB7;

}

static void A_48_1(char *t0)
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

LAB0:    t1 = (t0 + 2700U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 3048);
    *((int *)t2) = 1;
    t3 = (t0 + 2728);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 1252U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2032);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1756);
    xsi_vlogvar_generic_wait_assign_value(t5, t4, 2, 0, 0, 8, 0LL);

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(50, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 1756);
    xsi_vlogvar_generic_wait_assign_value(t12, t11, 1, 0, 0, 8, 0LL);
    goto LAB7;

}

static void A_57_2(char *t0)
{
    char t14[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;

LAB0:    t1 = (t0 + 2844U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 3056);
    *((int *)t2) = 1;
    t3 = (t0 + 2872);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(58, ng0);

LAB5:    xsi_set_current_line(59, ng0);
    t4 = (t0 + 1848);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t0 + 1940);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1756);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2032);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1664);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1848);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);

LAB6:    t5 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t5, 4);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB19;

LAB20:
LAB22:
LAB21:    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1940);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(64, ng0);

LAB24:    xsi_set_current_line(65, ng0);
    t6 = ((char*)((ng2)));
    t7 = (t0 + 1664);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1344U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(69, ng0);

LAB28:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1436U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB29;

LAB30:
LAB31:
LAB27:    goto LAB23;

LAB9:    xsi_set_current_line(75, ng0);

LAB32:    xsi_set_current_line(76, ng0);
    t3 = (t0 + 1344U);
    t5 = *((char **)t3);
    memset(t14, 0, 8);
    t3 = (t14 + 4);
    t6 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    *((unsigned int *)t14) = t10;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t6) != 0)
        goto LAB34;

LAB33:    t16 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t16 & 1U);
    t17 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t17 & 1U);
    t7 = (t14 + 4);
    t18 = *((unsigned int *)t7);
    t19 = (~(t18));
    t20 = *((unsigned int *)t14);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB35;

LAB36:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1436U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB38;

LAB39:
LAB40:
LAB37:    goto LAB23;

LAB11:    xsi_set_current_line(83, ng0);

LAB41:    xsi_set_current_line(84, ng0);
    t3 = (t0 + 1344U);
    t5 = *((char **)t3);
    memset(t14, 0, 8);
    t3 = (t14 + 4);
    t6 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    *((unsigned int *)t14) = t10;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t6) != 0)
        goto LAB43;

LAB42:    t16 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t16 & 1U);
    t17 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t17 & 1U);
    t7 = (t14 + 4);
    t18 = *((unsigned int *)t7);
    t19 = (~(t18));
    t20 = *((unsigned int *)t14);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB44;

LAB45:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 1436U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t5 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    *((unsigned int *)t14) = t10;
    *((unsigned int *)t2) = 0;
    if (*((unsigned int *)t5) != 0)
        goto LAB48;

LAB47:    t16 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t16 & 1U);
    t17 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t17 & 1U);
    t6 = (t14 + 4);
    t18 = *((unsigned int *)t6);
    t19 = (~(t18));
    t20 = *((unsigned int *)t14);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB49;

LAB50:
LAB51:
LAB46:    goto LAB23;

LAB13:    xsi_set_current_line(91, ng0);

LAB52:    xsi_set_current_line(92, ng0);
    t3 = (t0 + 1344U);
    t5 = *((char **)t3);
    memset(t14, 0, 8);
    t3 = (t14 + 4);
    t6 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    *((unsigned int *)t14) = t10;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t6) != 0)
        goto LAB54;

LAB53:    t16 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t16 & 1U);
    t17 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t17 & 1U);
    t7 = (t14 + 4);
    t18 = *((unsigned int *)t7);
    t19 = (~(t18));
    t20 = *((unsigned int *)t14);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB55;

LAB56:    xsi_set_current_line(98, ng0);

LAB59:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 1436U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB60;

LAB61:
LAB62:
LAB57:    goto LAB23;

LAB15:    xsi_set_current_line(104, ng0);

LAB63:    xsi_set_current_line(105, ng0);
    t3 = (t0 + 1344U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB64;

LAB65:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 1436U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t5 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    *((unsigned int *)t14) = t10;
    *((unsigned int *)t2) = 0;
    if (*((unsigned int *)t5) != 0)
        goto LAB68;

LAB67:    t16 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t16 & 1U);
    t17 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t17 & 1U);
    t6 = (t14 + 4);
    t18 = *((unsigned int *)t6);
    t19 = (~(t18));
    t20 = *((unsigned int *)t14);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB69;

LAB70:
LAB71:
LAB66:    goto LAB23;

LAB17:    xsi_set_current_line(112, ng0);

LAB72:    xsi_set_current_line(113, ng0);
    t3 = (t0 + 1344U);
    t5 = *((char **)t3);
    memset(t14, 0, 8);
    t3 = (t14 + 4);
    t6 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    *((unsigned int *)t14) = t10;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t6) != 0)
        goto LAB74;

LAB73:    t16 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t16 & 1U);
    t17 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t17 & 1U);
    t7 = (t14 + 4);
    t18 = *((unsigned int *)t7);
    t19 = (~(t18));
    t20 = *((unsigned int *)t14);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB75;

LAB76:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 1436U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB78;

LAB79:
LAB80:
LAB77:    goto LAB23;

LAB19:    xsi_set_current_line(120, ng0);

LAB81:    xsi_set_current_line(121, ng0);
    t3 = (t0 + 1344U);
    t5 = *((char **)t3);
    memset(t14, 0, 8);
    t3 = (t14 + 4);
    t6 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    *((unsigned int *)t14) = t10;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t6) != 0)
        goto LAB83;

LAB82:    t16 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t16 & 1U);
    t17 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t17 & 1U);
    t7 = (t14 + 4);
    t18 = *((unsigned int *)t7);
    t19 = (~(t18));
    t20 = *((unsigned int *)t14);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB84;

LAB85:    xsi_set_current_line(124, ng0);
    t2 = (t0 + 1436U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t5 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    *((unsigned int *)t14) = t10;
    *((unsigned int *)t2) = 0;
    if (*((unsigned int *)t5) != 0)
        goto LAB88;

LAB87:    t16 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t16 & 1U);
    t17 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t17 & 1U);
    t6 = (t14 + 4);
    t18 = *((unsigned int *)t6);
    t19 = (~(t18));
    t20 = *((unsigned int *)t14);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB89;

LAB90:
LAB91:
LAB86:    goto LAB23;

LAB25:    xsi_set_current_line(67, ng0);
    t5 = ((char*)((ng3)));
    t6 = (t0 + 1940);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);
    goto LAB27;

LAB29:    xsi_set_current_line(71, ng0);
    t5 = ((char*)((ng4)));
    t6 = (t0 + 1940);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);
    goto LAB31;

LAB34:    t11 = *((unsigned int *)t14);
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t14) = (t11 | t12);
    t13 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t6);
    *((unsigned int *)t3) = (t13 | t15);
    goto LAB33;

LAB35:    xsi_set_current_line(77, ng0);
    t23 = ((char*)((ng1)));
    t24 = (t0 + 1940);
    xsi_vlogvar_assign_value(t24, t23, 0, 0, 4);
    goto LAB37;

LAB38:    xsi_set_current_line(80, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t0 + 1940);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);
    goto LAB40;

LAB43:    t11 = *((unsigned int *)t14);
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t14) = (t11 | t12);
    t13 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t6);
    *((unsigned int *)t3) = (t13 | t15);
    goto LAB42;

LAB44:    xsi_set_current_line(85, ng0);
    t23 = ((char*)((ng4)));
    t24 = (t0 + 1940);
    xsi_vlogvar_assign_value(t24, t23, 0, 0, 4);
    goto LAB46;

LAB48:    t11 = *((unsigned int *)t14);
    t12 = *((unsigned int *)t5);
    *((unsigned int *)t14) = (t11 | t12);
    t13 = *((unsigned int *)t2);
    t15 = *((unsigned int *)t5);
    *((unsigned int *)t2) = (t13 | t15);
    goto LAB47;

LAB49:    xsi_set_current_line(88, ng0);
    t7 = ((char*)((ng6)));
    t23 = (t0 + 1940);
    xsi_vlogvar_assign_value(t23, t7, 0, 0, 4);
    goto LAB51;

LAB54:    t11 = *((unsigned int *)t14);
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t14) = (t11 | t12);
    t13 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t6);
    *((unsigned int *)t3) = (t13 | t15);
    goto LAB53;

LAB55:    xsi_set_current_line(93, ng0);

LAB58:    xsi_set_current_line(94, ng0);
    t23 = ((char*)((ng1)));
    t24 = (t0 + 1940);
    xsi_vlogvar_assign_value(t24, t23, 0, 0, 4);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 1756);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng7)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t5, 8, t6, 32);
    t7 = (t0 + 2032);
    xsi_vlogvar_assign_value(t7, t14, 0, 0, 8);
    goto LAB57;

LAB60:    xsi_set_current_line(100, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t0 + 1940);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);
    goto LAB62;

LAB64:    xsi_set_current_line(106, ng0);
    t6 = ((char*)((ng8)));
    t7 = (t0 + 1940);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    goto LAB66;

LAB68:    t11 = *((unsigned int *)t14);
    t12 = *((unsigned int *)t5);
    *((unsigned int *)t14) = (t11 | t12);
    t13 = *((unsigned int *)t2);
    t15 = *((unsigned int *)t5);
    *((unsigned int *)t2) = (t13 | t15);
    goto LAB67;

LAB69:    xsi_set_current_line(109, ng0);
    t7 = ((char*)((ng1)));
    t23 = (t0 + 1940);
    xsi_vlogvar_assign_value(t23, t7, 0, 0, 4);
    goto LAB71;

LAB74:    t11 = *((unsigned int *)t14);
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t14) = (t11 | t12);
    t13 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t6);
    *((unsigned int *)t3) = (t13 | t15);
    goto LAB73;

LAB75:    xsi_set_current_line(114, ng0);
    t23 = ((char*)((ng1)));
    t24 = (t0 + 1940);
    xsi_vlogvar_assign_value(t24, t23, 0, 0, 4);
    goto LAB77;

LAB78:    xsi_set_current_line(117, ng0);
    t5 = ((char*)((ng8)));
    t6 = (t0 + 1940);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);
    goto LAB80;

LAB83:    t11 = *((unsigned int *)t14);
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t14) = (t11 | t12);
    t13 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t6);
    *((unsigned int *)t3) = (t13 | t15);
    goto LAB82;

LAB84:    xsi_set_current_line(122, ng0);
    t23 = ((char*)((ng4)));
    t24 = (t0 + 1940);
    xsi_vlogvar_assign_value(t24, t23, 0, 0, 4);
    goto LAB86;

LAB88:    t11 = *((unsigned int *)t14);
    t12 = *((unsigned int *)t5);
    *((unsigned int *)t14) = (t11 | t12);
    t13 = *((unsigned int *)t2);
    t15 = *((unsigned int *)t5);
    *((unsigned int *)t2) = (t13 | t15);
    goto LAB87;

LAB89:    xsi_set_current_line(125, ng0);
    t7 = ((char*)((ng9)));
    t23 = (t0 + 1940);
    xsi_vlogvar_assign_value(t23, t7, 0, 0, 4);
    goto LAB91;

}


extern void work_m_00000000003685596543_2030911003_init()
{
	static char *pe[] = {(void *)A_42_0,(void *)A_48_1,(void *)A_57_2};
	xsi_register_didat("work_m_00000000003685596543_2030911003", "isim/testparq3_isim_beh.exe.sim/work/m_00000000003685596543_2030911003.didat");
	xsi_register_executes(pe);
}
