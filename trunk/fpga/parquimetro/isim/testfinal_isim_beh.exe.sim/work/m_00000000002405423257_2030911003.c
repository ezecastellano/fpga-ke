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



static void A_41_0(char *t0)
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

LAB0:    t1 = (t0 + 2464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2948);
    *((int *)t2) = 1;
    t3 = (t0 + 2492);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);
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

LAB6:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1848);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1756);
    xsi_vlogvar_generic_wait_assign_value(t5, t4, 2, 0, 0, 4, 0LL);

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(43, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1756);
    xsi_vlogvar_generic_wait_assign_value(t12, t11, 2, 0, 0, 4, 0LL);
    goto LAB7;

}

static void A_47_1(char *t0)
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

LAB0:    t1 = (t0 + 2608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2956);
    *((int *)t2) = 1;
    t3 = (t0 + 2636);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(48, ng0);
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

LAB6:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1940);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1664);
    xsi_vlogvar_generic_wait_assign_value(t5, t4, 2, 0, 0, 4, 0LL);

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(49, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 1664);
    xsi_vlogvar_generic_wait_assign_value(t12, t11, 1, 0, 0, 4, 0LL);
    goto LAB7;

}

static void A_56_2(char *t0)
{
    char t16[8];
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
    char *t14;
    char *t15;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;

LAB0:    t1 = (t0 + 2752U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2964);
    *((int *)t2) = 1;
    t3 = (t0 + 2780);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(57, ng0);

LAB5:    xsi_set_current_line(58, ng0);
    t4 = (t0 + 1756);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t0 + 1848);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1664);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1940);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1756);
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
LAB21:    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1848);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(62, ng0);

LAB24:    xsi_set_current_line(63, ng0);
    t6 = (t0 + 1344U);
    t7 = *((char **)t6);
    t6 = (t7 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(66, ng0);

LAB28:    xsi_set_current_line(67, ng0);
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

LAB9:    xsi_set_current_line(72, ng0);

LAB32:    xsi_set_current_line(73, ng0);
    t3 = (t0 + 1344U);
    t5 = *((char **)t3);
    memset(t16, 0, 8);
    t3 = (t16 + 4);
    t6 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    *((unsigned int *)t16) = t10;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t6) != 0)
        goto LAB34;

LAB33:    t18 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t18 & 1U);
    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 1U);
    t7 = (t16 + 4);
    t20 = *((unsigned int *)t7);
    t21 = (~(t20));
    t22 = *((unsigned int *)t16);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB35;

LAB36:    xsi_set_current_line(76, ng0);
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

LAB11:    xsi_set_current_line(80, ng0);

LAB41:    xsi_set_current_line(81, ng0);
    t3 = (t0 + 1344U);
    t5 = *((char **)t3);
    memset(t16, 0, 8);
    t3 = (t16 + 4);
    t6 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    *((unsigned int *)t16) = t10;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t6) != 0)
        goto LAB43;

LAB42:    t18 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t18 & 1U);
    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 1U);
    t7 = (t16 + 4);
    t20 = *((unsigned int *)t7);
    t21 = (~(t20));
    t22 = *((unsigned int *)t16);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB44;

LAB45:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 1436U);
    t3 = *((char **)t2);
    memset(t16, 0, 8);
    t2 = (t16 + 4);
    t5 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    *((unsigned int *)t16) = t10;
    *((unsigned int *)t2) = 0;
    if (*((unsigned int *)t5) != 0)
        goto LAB48;

LAB47:    t18 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t18 & 1U);
    t19 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t19 & 1U);
    t6 = (t16 + 4);
    t20 = *((unsigned int *)t6);
    t21 = (~(t20));
    t22 = *((unsigned int *)t16);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB49;

LAB50:
LAB51:
LAB46:    goto LAB23;

LAB13:    xsi_set_current_line(88, ng0);

LAB52:    xsi_set_current_line(89, ng0);
    t3 = (t0 + 1344U);
    t5 = *((char **)t3);
    memset(t16, 0, 8);
    t3 = (t16 + 4);
    t6 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    *((unsigned int *)t16) = t10;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t6) != 0)
        goto LAB54;

LAB53:    t18 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t18 & 1U);
    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 1U);
    t7 = (t16 + 4);
    t20 = *((unsigned int *)t7);
    t21 = (~(t20));
    t22 = *((unsigned int *)t16);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB55;

LAB56:    xsi_set_current_line(95, ng0);

LAB59:    xsi_set_current_line(96, ng0);
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

LAB15:    xsi_set_current_line(101, ng0);

LAB63:    xsi_set_current_line(102, ng0);
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

LAB65:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 1436U);
    t3 = *((char **)t2);
    memset(t16, 0, 8);
    t2 = (t16 + 4);
    t5 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    *((unsigned int *)t16) = t10;
    *((unsigned int *)t2) = 0;
    if (*((unsigned int *)t5) != 0)
        goto LAB68;

LAB67:    t18 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t18 & 1U);
    t19 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t19 & 1U);
    t6 = (t16 + 4);
    t20 = *((unsigned int *)t6);
    t21 = (~(t20));
    t22 = *((unsigned int *)t16);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB69;

LAB70:
LAB71:
LAB66:    goto LAB23;

LAB17:    xsi_set_current_line(109, ng0);

LAB72:    xsi_set_current_line(110, ng0);
    t3 = (t0 + 1344U);
    t5 = *((char **)t3);
    memset(t16, 0, 8);
    t3 = (t16 + 4);
    t6 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    *((unsigned int *)t16) = t10;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t6) != 0)
        goto LAB74;

LAB73:    t18 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t18 & 1U);
    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 1U);
    t7 = (t16 + 4);
    t20 = *((unsigned int *)t7);
    t21 = (~(t20));
    t22 = *((unsigned int *)t16);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB75;

LAB76:    xsi_set_current_line(113, ng0);
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

LAB19:    xsi_set_current_line(117, ng0);

LAB81:    xsi_set_current_line(118, ng0);
    t3 = (t0 + 1344U);
    t5 = *((char **)t3);
    memset(t16, 0, 8);
    t3 = (t16 + 4);
    t6 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    *((unsigned int *)t16) = t10;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t6) != 0)
        goto LAB83;

LAB82:    t18 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t18 & 1U);
    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 1U);
    t7 = (t16 + 4);
    t20 = *((unsigned int *)t7);
    t21 = (~(t20));
    t22 = *((unsigned int *)t16);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB84;

LAB85:    xsi_set_current_line(121, ng0);
    t2 = (t0 + 1436U);
    t3 = *((char **)t2);
    memset(t16, 0, 8);
    t2 = (t16 + 4);
    t5 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    *((unsigned int *)t16) = t10;
    *((unsigned int *)t2) = 0;
    if (*((unsigned int *)t5) != 0)
        goto LAB88;

LAB87:    t18 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t18 & 1U);
    t19 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t19 & 1U);
    t6 = (t16 + 4);
    t20 = *((unsigned int *)t6);
    t21 = (~(t20));
    t22 = *((unsigned int *)t16);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB89;

LAB90:
LAB91:
LAB86:    goto LAB23;

LAB25:    xsi_set_current_line(64, ng0);
    t14 = ((char*)((ng3)));
    t15 = (t0 + 1848);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 4);
    goto LAB27;

LAB29:    xsi_set_current_line(68, ng0);
    t5 = ((char*)((ng4)));
    t6 = (t0 + 1848);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);
    goto LAB31;

LAB34:    t11 = *((unsigned int *)t16);
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t16) = (t11 | t12);
    t13 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t6);
    *((unsigned int *)t3) = (t13 | t17);
    goto LAB33;

LAB35:    xsi_set_current_line(74, ng0);
    t14 = ((char*)((ng1)));
    t15 = (t0 + 1848);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 4);
    goto LAB37;

LAB38:    xsi_set_current_line(77, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t0 + 1848);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);
    goto LAB40;

LAB43:    t11 = *((unsigned int *)t16);
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t16) = (t11 | t12);
    t13 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t6);
    *((unsigned int *)t3) = (t13 | t17);
    goto LAB42;

LAB44:    xsi_set_current_line(82, ng0);
    t14 = ((char*)((ng4)));
    t15 = (t0 + 1848);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 4);
    goto LAB46;

LAB48:    t11 = *((unsigned int *)t16);
    t12 = *((unsigned int *)t5);
    *((unsigned int *)t16) = (t11 | t12);
    t13 = *((unsigned int *)t2);
    t17 = *((unsigned int *)t5);
    *((unsigned int *)t2) = (t13 | t17);
    goto LAB47;

LAB49:    xsi_set_current_line(85, ng0);
    t7 = ((char*)((ng6)));
    t14 = (t0 + 1848);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 4);
    goto LAB51;

LAB54:    t11 = *((unsigned int *)t16);
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t16) = (t11 | t12);
    t13 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t6);
    *((unsigned int *)t3) = (t13 | t17);
    goto LAB53;

LAB55:    xsi_set_current_line(90, ng0);

LAB58:    xsi_set_current_line(91, ng0);
    t14 = ((char*)((ng1)));
    t15 = (t0 + 1848);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 4);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 1664);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng7)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t5, 4, t6, 32);
    t7 = (t0 + 1940);
    xsi_vlogvar_assign_value(t7, t16, 0, 0, 4);
    goto LAB57;

LAB60:    xsi_set_current_line(97, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t0 + 1848);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);
    goto LAB62;

LAB64:    xsi_set_current_line(103, ng0);
    t6 = ((char*)((ng8)));
    t7 = (t0 + 1848);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    goto LAB66;

LAB68:    t11 = *((unsigned int *)t16);
    t12 = *((unsigned int *)t5);
    *((unsigned int *)t16) = (t11 | t12);
    t13 = *((unsigned int *)t2);
    t17 = *((unsigned int *)t5);
    *((unsigned int *)t2) = (t13 | t17);
    goto LAB67;

LAB69:    xsi_set_current_line(106, ng0);
    t7 = ((char*)((ng1)));
    t14 = (t0 + 1848);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 4);
    goto LAB71;

LAB74:    t11 = *((unsigned int *)t16);
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t16) = (t11 | t12);
    t13 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t6);
    *((unsigned int *)t3) = (t13 | t17);
    goto LAB73;

LAB75:    xsi_set_current_line(111, ng0);
    t14 = ((char*)((ng1)));
    t15 = (t0 + 1848);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 4);
    goto LAB77;

LAB78:    xsi_set_current_line(114, ng0);
    t5 = ((char*)((ng8)));
    t6 = (t0 + 1848);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);
    goto LAB80;

LAB83:    t11 = *((unsigned int *)t16);
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t16) = (t11 | t12);
    t13 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t6);
    *((unsigned int *)t3) = (t13 | t17);
    goto LAB82;

LAB84:    xsi_set_current_line(119, ng0);
    t14 = ((char*)((ng4)));
    t15 = (t0 + 1848);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 4);
    goto LAB86;

LAB88:    t11 = *((unsigned int *)t16);
    t12 = *((unsigned int *)t5);
    *((unsigned int *)t16) = (t11 | t12);
    t13 = *((unsigned int *)t2);
    t17 = *((unsigned int *)t5);
    *((unsigned int *)t2) = (t13 | t17);
    goto LAB87;

LAB89:    xsi_set_current_line(122, ng0);
    t7 = ((char*)((ng9)));
    t14 = (t0 + 1848);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 4);
    goto LAB91;

}


extern void work_m_00000000002405423257_2030911003_init()
{
	static char *pe[] = {(void *)A_41_0,(void *)A_47_1,(void *)A_56_2};
	xsi_register_didat("work_m_00000000002405423257_2030911003", "isim/testfinal_isim_beh.exe.sim/work/m_00000000002405423257_2030911003.didat");
	xsi_register_executes(pe);
}
