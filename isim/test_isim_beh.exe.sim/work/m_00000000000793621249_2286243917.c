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
static const char *ng0 = "E:/code/hardware/flyppybird/vga_640x480.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {800U, 0U};
static int ng4[] = {96, 0};
static unsigned int ng5[] = {521U, 0U};
static int ng6[] = {2, 0};
static unsigned int ng7[] = {784U, 0U};
static unsigned int ng8[] = {144U, 0U};
static unsigned int ng9[] = {511U, 0U};
static unsigned int ng10[] = {31U, 0U};



static void Always_45_0(char *t0)
{
    char t6[8];
    char t30[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
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
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t31;

LAB0:    t1 = (t0 + 2384U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 3156);
    *((int *)t2) = 1;
    t3 = (t0 + 2412);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(46, ng0);

LAB5:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 1172U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(50, ng0);

LAB13:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1584);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    t7 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t5, 10, t7, 32);
    memset(t30, 0, 8);
    t8 = (t4 + 4);
    t21 = (t6 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t6);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t21);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t21);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB17;

LAB14:    if (t18 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t30) = 1;

LAB17:    t28 = (t30 + 4);
    t23 = *((unsigned int *)t28);
    t24 = (~(t23));
    t25 = *((unsigned int *)t30);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(57, ng0);

LAB22:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1584);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 10, t5, 32);
    t7 = (t0 + 1584);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 10, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1860);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB20:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(48, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 1584);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 10, 0LL);
    goto LAB12;

LAB16:    t22 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(52, ng0);

LAB21:    xsi_set_current_line(53, ng0);
    t29 = ((char*)((ng2)));
    t31 = (t0 + 1584);
    xsi_vlogvar_wait_assign_value(t31, t29, 0, 0, 10, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1860);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB20;

}

static void Always_64_1(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;

LAB0:    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 3164);
    *((int *)t2) = 1;
    t3 = (t0 + 2556);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(65, ng0);

LAB5:    xsi_set_current_line(66, ng0);
    t4 = (t0 + 1584);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB7;

LAB6:    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t6) < *((unsigned int *)t7))
        goto LAB8;

LAB9:    t12 = (t8 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t8);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1400);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB13:    goto LAB2;

LAB7:    t11 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB9;

LAB8:    *((unsigned int *)t8) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(67, ng0);
    t18 = ((char*)((ng2)));
    t19 = (t0 + 1400);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 1);
    goto LAB13;

}

static void Always_72_2(char *t0)
{
    char t6[8];
    char t33[8];
    char t34[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
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
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;

LAB0:    t1 = (t0 + 2672U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 3172);
    *((int *)t2) = 1;
    t3 = (t0 + 2700);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(73, ng0);

LAB5:    xsi_set_current_line(74, ng0);
    t4 = (t0 + 1172U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1860);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB16;

LAB13:    if (t18 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t6) = 1;

LAB16:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB17;

LAB18:
LAB19:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(75, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 1676);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 10, 0LL);
    goto LAB12;

LAB15:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB16;

LAB17:    xsi_set_current_line(78, ng0);

LAB20:    xsi_set_current_line(79, ng0);
    t28 = (t0 + 1676);
    t29 = (t28 + 36U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng5)));
    t32 = ((char*)((ng1)));
    memset(t33, 0, 8);
    xsi_vlog_unsigned_minus(t33, 32, t31, 10, t32, 32);
    memset(t34, 0, 8);
    t35 = (t30 + 4);
    t36 = (t33 + 4);
    t37 = *((unsigned int *)t30);
    t38 = *((unsigned int *)t33);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t36);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB24;

LAB21:    if (t46 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t34) = 1;

LAB24:    t50 = (t34 + 4);
    t51 = *((unsigned int *)t50);
    t52 = (~(t51));
    t53 = *((unsigned int *)t34);
    t54 = (t53 & t52);
    t55 = (t54 != 0);
    if (t55 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1676);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 10, t5, 32);
    t7 = (t0 + 1676);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 10, 0LL);

LAB27:    goto LAB19;

LAB23:    t49 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB24;

LAB25:    xsi_set_current_line(80, ng0);
    t56 = ((char*)((ng2)));
    t57 = (t0 + 1676);
    xsi_vlogvar_wait_assign_value(t57, t56, 0, 0, 10, 0LL);
    goto LAB27;

}

static void Always_86_3(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;

LAB0:    t1 = (t0 + 2816U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 3180);
    *((int *)t2) = 1;
    t3 = (t0 + 2844);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(87, ng0);

LAB5:    xsi_set_current_line(88, ng0);
    t4 = (t0 + 1676);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng6)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB7;

LAB6:    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t6) < *((unsigned int *)t7))
        goto LAB8;

LAB9:    t12 = (t8 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t8);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1492);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB13:    goto LAB2;

LAB7:    t11 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB9;

LAB8:    *((unsigned int *)t8) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(89, ng0);
    t18 = ((char*)((ng2)));
    t19 = (t0 + 1492);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 1);
    goto LAB13;

}

static void Always_94_4(char *t0)
{
    char t8[8];
    char t12[8];
    char t28[8];
    char t32[8];
    char t40[8];
    char t72[8];
    char t88[8];
    char t92[8];
    char t100[8];
    char t132[8];
    char t148[8];
    char t152[8];
    char t160[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    char *t31;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    int t64;
    int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t89;
    char *t90;
    char *t91;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    char *t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    int t124;
    int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    char *t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    char *t139;
    char *t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    char *t144;
    char *t145;
    char *t146;
    char *t147;
    char *t149;
    char *t150;
    char *t151;
    char *t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    char *t159;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    char *t164;
    char *t165;
    char *t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    char *t174;
    char *t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    int t184;
    int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    char *t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    char *t198;
    char *t199;

LAB0:    t1 = (t0 + 2960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 3188);
    *((int *)t2) = 1;
    t3 = (t0 + 2988);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(95, ng0);

LAB5:    xsi_set_current_line(96, ng0);
    t4 = (t0 + 1584);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng7)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB7;

LAB6:    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t6) < *((unsigned int *)t7))
        goto LAB8;

LAB9:    memset(t12, 0, 8);
    t13 = (t8 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t8);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t13) != 0)
        goto LAB13;

LAB14:    t20 = (t12 + 4);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t20);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB15;

LAB16:    memcpy(t40, t12, 8);

LAB17:    memset(t72, 0, 8);
    t73 = (t40 + 4);
    t74 = *((unsigned int *)t73);
    t75 = (~(t74));
    t76 = *((unsigned int *)t40);
    t77 = (t76 & t75);
    t78 = (t77 & 1U);
    if (t78 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t73) != 0)
        goto LAB32;

LAB33:    t80 = (t72 + 4);
    t81 = *((unsigned int *)t72);
    t82 = *((unsigned int *)t80);
    t83 = (t81 || t82);
    if (t83 > 0)
        goto LAB34;

LAB35:    memcpy(t100, t72, 8);

LAB36:    memset(t132, 0, 8);
    t133 = (t100 + 4);
    t134 = *((unsigned int *)t133);
    t135 = (~(t134));
    t136 = *((unsigned int *)t100);
    t137 = (t136 & t135);
    t138 = (t137 & 1U);
    if (t138 != 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t133) != 0)
        goto LAB51;

LAB52:    t140 = (t132 + 4);
    t141 = *((unsigned int *)t132);
    t142 = *((unsigned int *)t140);
    t143 = (t141 || t142);
    if (t143 > 0)
        goto LAB53;

LAB54:    memcpy(t160, t132, 8);

LAB55:    t192 = (t160 + 4);
    t193 = *((unsigned int *)t192);
    t194 = (~(t193));
    t195 = *((unsigned int *)t160);
    t196 = (t195 & t194);
    t197 = (t196 != 0);
    if (t197 > 0)
        goto LAB68;

LAB69:    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB70:    goto LAB2;

LAB7:    t11 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB9;

LAB8:    *((unsigned int *)t8) = 1;
    goto LAB9;

LAB11:    *((unsigned int *)t12) = 1;
    goto LAB14;

LAB13:    t19 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB14;

LAB15:    t24 = (t0 + 1584);
    t25 = (t24 + 36U);
    t26 = *((char **)t25);
    t27 = ((char*)((ng8)));
    memset(t28, 0, 8);
    t29 = (t26 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB19;

LAB18:    t30 = (t27 + 4);
    if (*((unsigned int *)t30) != 0)
        goto LAB19;

LAB22:    if (*((unsigned int *)t26) > *((unsigned int *)t27))
        goto LAB20;

LAB21:    memset(t32, 0, 8);
    t33 = (t28 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t28);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t33) != 0)
        goto LAB25;

LAB26:    t41 = *((unsigned int *)t12);
    t42 = *((unsigned int *)t32);
    t43 = (t41 & t42);
    *((unsigned int *)t40) = t43;
    t44 = (t12 + 4);
    t45 = (t32 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t44);
    t48 = *((unsigned int *)t45);
    t49 = (t47 | t48);
    *((unsigned int *)t46) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB27;

LAB28:
LAB29:    goto LAB17;

LAB19:    t31 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB21;

LAB20:    *((unsigned int *)t28) = 1;
    goto LAB21;

LAB23:    *((unsigned int *)t32) = 1;
    goto LAB26;

LAB25:    t39 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB26;

LAB27:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t40) = (t52 | t53);
    t54 = (t12 + 4);
    t55 = (t32 + 4);
    t56 = *((unsigned int *)t12);
    t57 = (~(t56));
    t58 = *((unsigned int *)t54);
    t59 = (~(t58));
    t60 = *((unsigned int *)t32);
    t61 = (~(t60));
    t62 = *((unsigned int *)t55);
    t63 = (~(t62));
    t64 = (t57 & t59);
    t65 = (t61 & t63);
    t66 = (~(t64));
    t67 = (~(t65));
    t68 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t68 & t66);
    t69 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t69 & t67);
    t70 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t70 & t66);
    t71 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t71 & t67);
    goto LAB29;

LAB30:    *((unsigned int *)t72) = 1;
    goto LAB33;

LAB32:    t79 = (t72 + 4);
    *((unsigned int *)t72) = 1;
    *((unsigned int *)t79) = 1;
    goto LAB33;

LAB34:    t84 = (t0 + 1676);
    t85 = (t84 + 36U);
    t86 = *((char **)t85);
    t87 = ((char*)((ng9)));
    memset(t88, 0, 8);
    t89 = (t86 + 4);
    if (*((unsigned int *)t89) != 0)
        goto LAB38;

LAB37:    t90 = (t87 + 4);
    if (*((unsigned int *)t90) != 0)
        goto LAB38;

LAB41:    if (*((unsigned int *)t86) < *((unsigned int *)t87))
        goto LAB39;

LAB40:    memset(t92, 0, 8);
    t93 = (t88 + 4);
    t94 = *((unsigned int *)t93);
    t95 = (~(t94));
    t96 = *((unsigned int *)t88);
    t97 = (t96 & t95);
    t98 = (t97 & 1U);
    if (t98 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t93) != 0)
        goto LAB44;

LAB45:    t101 = *((unsigned int *)t72);
    t102 = *((unsigned int *)t92);
    t103 = (t101 & t102);
    *((unsigned int *)t100) = t103;
    t104 = (t72 + 4);
    t105 = (t92 + 4);
    t106 = (t100 + 4);
    t107 = *((unsigned int *)t104);
    t108 = *((unsigned int *)t105);
    t109 = (t107 | t108);
    *((unsigned int *)t106) = t109;
    t110 = *((unsigned int *)t106);
    t111 = (t110 != 0);
    if (t111 == 1)
        goto LAB46;

LAB47:
LAB48:    goto LAB36;

LAB38:    t91 = (t88 + 4);
    *((unsigned int *)t88) = 1;
    *((unsigned int *)t91) = 1;
    goto LAB40;

LAB39:    *((unsigned int *)t88) = 1;
    goto LAB40;

LAB42:    *((unsigned int *)t92) = 1;
    goto LAB45;

LAB44:    t99 = (t92 + 4);
    *((unsigned int *)t92) = 1;
    *((unsigned int *)t99) = 1;
    goto LAB45;

LAB46:    t112 = *((unsigned int *)t100);
    t113 = *((unsigned int *)t106);
    *((unsigned int *)t100) = (t112 | t113);
    t114 = (t72 + 4);
    t115 = (t92 + 4);
    t116 = *((unsigned int *)t72);
    t117 = (~(t116));
    t118 = *((unsigned int *)t114);
    t119 = (~(t118));
    t120 = *((unsigned int *)t92);
    t121 = (~(t120));
    t122 = *((unsigned int *)t115);
    t123 = (~(t122));
    t124 = (t117 & t119);
    t125 = (t121 & t123);
    t126 = (~(t124));
    t127 = (~(t125));
    t128 = *((unsigned int *)t106);
    *((unsigned int *)t106) = (t128 & t126);
    t129 = *((unsigned int *)t106);
    *((unsigned int *)t106) = (t129 & t127);
    t130 = *((unsigned int *)t100);
    *((unsigned int *)t100) = (t130 & t126);
    t131 = *((unsigned int *)t100);
    *((unsigned int *)t100) = (t131 & t127);
    goto LAB48;

LAB49:    *((unsigned int *)t132) = 1;
    goto LAB52;

LAB51:    t139 = (t132 + 4);
    *((unsigned int *)t132) = 1;
    *((unsigned int *)t139) = 1;
    goto LAB52;

LAB53:    t144 = (t0 + 1676);
    t145 = (t144 + 36U);
    t146 = *((char **)t145);
    t147 = ((char*)((ng10)));
    memset(t148, 0, 8);
    t149 = (t146 + 4);
    if (*((unsigned int *)t149) != 0)
        goto LAB57;

LAB56:    t150 = (t147 + 4);
    if (*((unsigned int *)t150) != 0)
        goto LAB57;

LAB60:    if (*((unsigned int *)t146) > *((unsigned int *)t147))
        goto LAB58;

LAB59:    memset(t152, 0, 8);
    t153 = (t148 + 4);
    t154 = *((unsigned int *)t153);
    t155 = (~(t154));
    t156 = *((unsigned int *)t148);
    t157 = (t156 & t155);
    t158 = (t157 & 1U);
    if (t158 != 0)
        goto LAB61;

LAB62:    if (*((unsigned int *)t153) != 0)
        goto LAB63;

LAB64:    t161 = *((unsigned int *)t132);
    t162 = *((unsigned int *)t152);
    t163 = (t161 & t162);
    *((unsigned int *)t160) = t163;
    t164 = (t132 + 4);
    t165 = (t152 + 4);
    t166 = (t160 + 4);
    t167 = *((unsigned int *)t164);
    t168 = *((unsigned int *)t165);
    t169 = (t167 | t168);
    *((unsigned int *)t166) = t169;
    t170 = *((unsigned int *)t166);
    t171 = (t170 != 0);
    if (t171 == 1)
        goto LAB65;

LAB66:
LAB67:    goto LAB55;

LAB57:    t151 = (t148 + 4);
    *((unsigned int *)t148) = 1;
    *((unsigned int *)t151) = 1;
    goto LAB59;

LAB58:    *((unsigned int *)t148) = 1;
    goto LAB59;

LAB61:    *((unsigned int *)t152) = 1;
    goto LAB64;

LAB63:    t159 = (t152 + 4);
    *((unsigned int *)t152) = 1;
    *((unsigned int *)t159) = 1;
    goto LAB64;

LAB65:    t172 = *((unsigned int *)t160);
    t173 = *((unsigned int *)t166);
    *((unsigned int *)t160) = (t172 | t173);
    t174 = (t132 + 4);
    t175 = (t152 + 4);
    t176 = *((unsigned int *)t132);
    t177 = (~(t176));
    t178 = *((unsigned int *)t174);
    t179 = (~(t178));
    t180 = *((unsigned int *)t152);
    t181 = (~(t180));
    t182 = *((unsigned int *)t175);
    t183 = (~(t182));
    t184 = (t177 & t179);
    t185 = (t181 & t183);
    t186 = (~(t184));
    t187 = (~(t185));
    t188 = *((unsigned int *)t166);
    *((unsigned int *)t166) = (t188 & t186);
    t189 = *((unsigned int *)t166);
    *((unsigned int *)t166) = (t189 & t187);
    t190 = *((unsigned int *)t160);
    *((unsigned int *)t160) = (t190 & t186);
    t191 = *((unsigned int *)t160);
    *((unsigned int *)t160) = (t191 & t187);
    goto LAB67;

LAB68:    xsi_set_current_line(97, ng0);
    t198 = ((char*)((ng1)));
    t199 = (t0 + 1768);
    xsi_vlogvar_assign_value(t199, t198, 0, 0, 1);
    goto LAB70;

}


extern void work_m_00000000000793621249_2286243917_init()
{
	static char *pe[] = {(void *)Always_45_0,(void *)Always_64_1,(void *)Always_72_2,(void *)Always_86_3,(void *)Always_94_4};
	xsi_register_didat("work_m_00000000000793621249_2286243917", "isim/test_isim_beh.exe.sim/work/m_00000000000793621249_2286243917.didat");
	xsi_register_executes(pe);
}
