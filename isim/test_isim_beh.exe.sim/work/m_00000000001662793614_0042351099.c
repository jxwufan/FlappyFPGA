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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "E:/code/hardware/flyppybird/tubes.v";
static int ng1[] = {740, 0};
static int ng2[] = {270, 0};
static int ng3[] = {220, 0};
static int ng4[] = {330, 0};
static int ng5[] = {210, 0};
static int ng6[] = {0, 0};
static int ng7[] = {1, 0};



static void Initial_28_0(char *t0)
{
    char t3[8];
    char t5[8];
    char *t1;
    char *t2;
    char *t4;
    char *t6;

LAB0:    xsi_set_current_line(29, ng0);

LAB2:    xsi_set_current_line(30, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 920);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 13, 0LL);
    xsi_set_current_line(31, ng0);
    t1 = ((char*)((ng1)));
    t2 = ((char*)((ng2)));
    memset(t3, 0, 8);
    xsi_vlog_signed_add(t3, 32, t1, 32, t2, 32);
    t4 = (t0 + 1012);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 13, 0LL);
    xsi_set_current_line(32, ng0);
    t1 = ((char*)((ng1)));
    t2 = ((char*)((ng2)));
    memset(t3, 0, 8);
    xsi_vlog_signed_add(t3, 32, t1, 32, t2, 32);
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 13, 0LL);
    xsi_set_current_line(33, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 1196);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 10, 0LL);
    xsi_set_current_line(34, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 1288);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 10, 0LL);
    xsi_set_current_line(35, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 1380);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 10, 0LL);

LAB1:    return;
}

static void Always_38_1(char *t0)
{
    char t8[8];
    char t34[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
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
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t35;

LAB0:    t1 = (t0 + 2048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 2244);
    *((int *)t2) = 1;
    t3 = (t0 + 2076);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(39, ng0);

LAB5:    xsi_set_current_line(40, ng0);
    t4 = (t0 + 920);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng6)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 920);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_minus(t8, 32, t4, 13, t5, 32);
    t6 = (t0 + 920);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 13, 0LL);

LAB12:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB17;

LAB14:    if (t20 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t8) = 1;

LAB17:    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_minus(t8, 32, t4, 13, t5, 32);
    t6 = (t0 + 1012);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 13, 0LL);

LAB20:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1104);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB25;

LAB22:    if (t20 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t8) = 1;

LAB25:    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1104);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_minus(t8, 32, t4, 13, t5, 32);
    t6 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 13, 0LL);

LAB28:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(41, ng0);

LAB13:    xsi_set_current_line(42, ng0);
    t30 = (t0 + 1104);
    t31 = (t30 + 36U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng2)));
    memset(t34, 0, 8);
    xsi_vlog_unsigned_add(t34, 32, t32, 13, t33, 32);
    t35 = (t0 + 920);
    xsi_vlogvar_wait_assign_value(t35, t34, 0, 0, 13, 0LL);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = (t0 + 1196);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 10, 0LL);
    goto LAB12;

LAB16:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(48, ng0);

LAB21:    xsi_set_current_line(49, ng0);
    t23 = (t0 + 920);
    t24 = (t23 + 36U);
    t30 = *((char **)t24);
    t31 = ((char*)((ng2)));
    memset(t34, 0, 8);
    xsi_vlog_unsigned_add(t34, 32, t30, 13, t31, 32);
    t32 = (t0 + 1012);
    xsi_vlogvar_wait_assign_value(t32, t34, 0, 0, 13, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = (t0 + 1288);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 10, 0LL);
    goto LAB20;

LAB24:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(55, ng0);

LAB29:    xsi_set_current_line(56, ng0);
    t23 = (t0 + 1012);
    t24 = (t23 + 36U);
    t30 = *((char **)t24);
    t31 = ((char*)((ng2)));
    memset(t34, 0, 8);
    xsi_vlog_unsigned_add(t34, 32, t30, 13, t31, 32);
    t32 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t32, t34, 0, 0, 13, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = (t0 + 1380);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 10, 0LL);
    goto LAB28;

}


extern void work_m_00000000001662793614_0042351099_init()
{
	static char *pe[] = {(void *)Initial_28_0,(void *)Always_38_1};
	xsi_register_didat("work_m_00000000001662793614_0042351099", "isim/test_isim_beh.exe.sim/work/m_00000000001662793614_0042351099.didat");
	xsi_register_executes(pe);
}
