/* f_0x100132b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100132b0(Guest* g)
{
    double d75;
    double d77;
    double d78;
    double d79;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t69;
    uint32_t t7;
    uint32_t t70;
    uint32_t t71;
    uint32_t t72;
    uint32_t t73;
    uint32_t t74;
    uint32_t t76;
    uint32_t t8;
    uint32_t t80;
    uint32_t t81;
    uint32_t t82;
    uint32_t t83;
    uint32_t t84;
    uint32_t t85;
    uint32_t t86;
    uint32_t t87;
    uint32_t t88;
    uint32_t t89;
    uint32_t t9;
    uint32_t t90;
    uint32_t t91;
    uint32_t t92;
    uint32_t t93;
    uint32_t t94;
    uint32_t t95;
    uint32_t t96;
    uint32_t t97;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 72u);

    wr32(sp0 - 0x24u, in_ebx);
    wr32(sp0 - 0x28u, in_ebp);
    if (rd8(self + 0x326u) != 0u) goto L_100132d5;
    if (rd8(self + 0x325u) != 0u) goto L_100132d5;
    if (rd8(self + 0x324u) == 0u)
    {
        edx = in_edx;
        goto L_100135bd;
    }
L_100132d5: ;
    g->esp = sp0 - 0x28u;
    t1 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(COW_IMG(0x1045666cu)), 0);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, rd32(t1));
    wr32(sp0 - 0x1cu, 0u);
    t2 = rd32(t1);
    wrf32(COW_IMG(0x103501a8u), (float)(double)(int64_t)cow_i64(t2, 0u));
    t3 = rd32(t1 + 4u);
    wr32(sp0 - 0x20u, t3);
    wr32(sp0 - 0x1cu, 0u);
    wrf32(COW_IMG(0x103501acu), (float)(double)(int64_t)cow_i64(t3, 0u));
    t4 = rd32(t1 + 8u);
    wr32(sp0 - 0x20u, t4);
    wr32(sp0 - 0x1cu, 0u);
    wrf32(COW_IMG(0x103501bcu), (float)(double)(int64_t)cow_i64(t4, 0u));
    t5 = rd32(t1 + 4u);
    wr32(sp0 - 0x20u, t5);
    wr32(sp0 - 0x1cu, 0u);
    wrf32(COW_IMG(0x103501c0u), (float)(double)(int64_t)cow_i64(t5, 0u));
    wr32(sp0 - 0x20u, rd32(t1));
    wr32(sp0 - 0x1cu, 0u);
    t6 = rd32(t1);
    wrf32(COW_IMG(0x103501d0u), (float)(double)(int64_t)cow_i64(t6, 0u));
    t7 = rd32(t1 + 0xcu);
    wr32(sp0 - 0x20u, t7);
    wr32(sp0 - 0x1cu, 0u);
    wrf32(COW_IMG(0x103501d4u), (float)(double)(int64_t)cow_i64(t7, 0u));
    t8 = rd32(t1 + 8u);
    wr32(sp0 - 0x20u, t8);
    wr32(sp0 - 0x1cu, 0u);
    wrf32(COW_IMG(0x103501e4u), (float)(double)(int64_t)cow_i64(t8, 0u));
    t9 = rd32(t1 + 0xcu);
    wr32(sp0 - 0x20u, t9);
    wrf32(COW_IMG(0x103501e8u), (float)(double)(int64_t)cow_i64(t9, 0u));
    if (rd8(self + 0x327u) * 2u <= 0xffu)
    {
        eax = rd8(self + 0x327u) * 2u;
    }
    else
    {
        eax = 0xffu;
    }
    wr8(self + 0x327u, (uint8_t)eax);
    eax = COW_IMG(0x103501b8u);
L_100133a7: ;
    t10 = rd32(self + 0x324u);
    wr32(eax, t10);
    if ((int32_t)(eax + 0x14u) < (int32_t)COW_IMG(0x10350208u))
    {
        eax = eax + 0x14u;
        goto L_100133a7;
    }
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, 7u);
    t11 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x34u, t11);
    g->esp = sp0 - 0x28u;
    cow_thiscall(g, rd32(rd32(t11) + 0xc8u), rd32(t11), 3, t11, 7u, 0u);
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, 0xeu);
    t12 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x34u, t12);
    cow_thiscall(g, rd32(rd32(t12) + 0xc8u), rd32(t12), 3, t12, 0xeu, 0u);
    wr32(sp0 - 0x2cu, 1u);
    wr32(sp0 - 0x30u, 9u);
    t13 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x34u, t13);
    cow_thiscall(g, rd32(rd32(t13) + 0xc8u), rd32(t13), 3, t13, 9u, 1u);
    wr32(sp0 - 0x2cu, 2u);
    wr32(sp0 - 0x30u, 1u);
    wr32(sp0 - 0x34u, 0u);
    t14 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x38u, t14);
    cow_thiscall(g, rd32(rd32(t14) + 0xfcu), rd32(t14), 4, t14, 0u, 1u, 2u);
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, 2u);
    wr32(sp0 - 0x34u, 0u);
    t15 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x38u, t15);
    cow_thiscall(g, rd32(rd32(t15) + 0xfcu), rd32(t15), 4, t15, 0u, 2u, 0u);
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, 3u);
    wr32(sp0 - 0x34u, 0u);
    t16 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x38u, t16);
    cow_thiscall(g, rd32(rd32(t16) + 0xfcu), rd32(t16), 4, t16, 0u, 3u, 0u);
    wr32(sp0 - 0x2cu, 2u);
    wr32(sp0 - 0x30u, 4u);
    wr32(sp0 - 0x34u, 0u);
    t17 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x38u, t17);
    cow_thiscall(g, rd32(rd32(t17) + 0xfcu), rd32(t17), 4, t17, 0u, 4u, 2u);
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, 5u);
    wr32(sp0 - 0x34u, 0u);
    t18 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x38u, t18);
    cow_thiscall(g, rd32(rd32(t18) + 0xfcu), rd32(t18), 4, t18, 0u, 5u, 0u);
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, 6u);
    wr32(sp0 - 0x34u, 0u);
    t19 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x38u, t19);
    cow_thiscall(g, rd32(rd32(t19) + 0xfcu), rd32(t19), 4, t19, 0u, 6u, 0u);
    wr32(sp0 - 0x2cu, 1u);
    wr32(sp0 - 0x30u, 4u);
    wr32(sp0 - 0x34u, 1u);
    t20 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x38u, t20);
    cow_thiscall(g, rd32(rd32(t20) + 0xfcu), rd32(t20), 4, t20, 1u, 4u, 1u);
    wr32(sp0 - 0x2cu, 1u);
    wr32(sp0 - 0x30u, 1u);
    wr32(sp0 - 0x34u, 1u);
    t21 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x38u, t21);
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xfcu), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 4, t21, 1u, 1u, 1u);
    wr32(sp0 - 0x2cu, 1u);
    wr32(sp0 - 0x30u, 0x1bu);
    t22 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x34u, t22);
    cow_thiscall(g, rd32(rd32(t22) + 0xc8u), rd32(t22), 3, t22, 0x1bu, 1u);
    wr32(sp0 - 0x2cu, 5u);
    wr32(sp0 - 0x30u, 0x13u);
    t23 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x34u, t23);
    cow_thiscall(g, rd32(rd32(t23) + 0xc8u), rd32(t23), 3, t23, 0x13u, 5u);
    wr32(sp0 - 0x2cu, 2u);
    wr32(sp0 - 0x30u, 0x14u);
    t24 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x34u, t24);
    cow_thiscall(g, rd32(rd32(t24) + 0xc8u), rd32(t24), 3, t24, 0x14u, 2u);
    wr32(sp0 - 0x2cu, 0x44u);
    t25 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x30u, t25);
    g->edx = rd32(COW_IMG(0x1045666cu));
    t26 = rd32(COW_IMG(0x1045666cu));
    cow_thiscall(g, rd32(rd32(t25) + 0x130u), rd32(t25), 2, t25, 0x44u);
    t27 = g->edx;
    wr32(sp0 - 0x2cu, 0x14u);
    wr32(sp0 - 0x30u, COW_IMG(0x103501a8u));
    wr32(sp0 - 0x34u, 2u);
    wr32(sp0 - 0x38u, 5u);
    g->ebx = 0u;
    g->edx = t27;
    cow_thiscall(g, COW_IMG(0x1000cd00u), rd32(COW_IMG(0x1045666cu)), 4, 5u, 2u, COW_IMG(0x103501a8u), 0x14u);
    t28 = g->edx;
    t29 = cow_thiscall(g, COW_IMG(0x1000d660u), rd32(COW_IMG(0x104566e8u)), 0);
    if ((uint8_t)t29 != 0u)
    {
        wr32(sp0 - 0x2cu, 0u);
        t30 = rd32(rd32(COW_IMG(0x1045666cu)) + 0x1a0u);
        wr32(sp0 - 0x30u, t30);
        t31 = rd32(rd32(COW_IMG(0x1045666cu)) + 0x198u);
        wr32(sp0 - 0x34u, t31);
        g->ebx = 0u;
        g->edx = t30;
        g->esp = sp0 - 0x28u;
        cow_thiscall(g, COW_IMG(0x10009e20u), rd32(COW_IMG(0x1045666cu)), 3, t31, t30, 0u);
        t32 = g->edx;
        wr32(sp0 - 0x2cu, 0x14u);
        wr32(sp0 - 0x30u, COW_IMG(0x103501a8u));
        wr32(sp0 - 0x34u, 2u);
        wr32(sp0 - 0x38u, 5u);
        g->ebx = 0u;
        g->edx = t32;
        t33 = cow_thiscall(g, COW_IMG(0x1000cd00u), rd32(COW_IMG(0x1045666cu)), 4, 5u, 2u, COW_IMG(0x103501a8u), 0x14u);
        t34 = g->edx;
        wr32(sp0 - 0x2cu, 0u);
        wr32(sp0 - 0x30u, 0u);
        cow_fastcall(g, COW_IMG(0x1000a1d0u), rd32(COW_IMG(0x1045666cu)), t34, 2, 0u, 0u);
    }
    wr32(sp0 - 0x2cu, 1u);
    wr32(sp0 - 0x30u, 7u);
    t35 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x34u, t35);
    g->edx = rd32(t35);
    t36 = rd32(t35);
    g->esp = sp0 - 0x28u;
    cow_thiscall(g, rd32(t36 + 0xc8u), rd32(COW_IMG(0x1045666cu)), 3, t35, 7u, 1u);
    t37 = g->edx;
    wr32(sp0 - 0x2cu, 1u);
    wr32(sp0 - 0x30u, 0xeu);
    t38 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x34u, t38);
    cow_thiscall(g, rd32(rd32(t38) + 0xc8u), rd32(t38), 3, t38, 0xeu, 1u);
    wr32(sp0 - 0x2cu, 2u);
    wr32(sp0 - 0x30u, 9u);
    t39 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x34u, t39);
    cow_thiscall(g, rd32(rd32(t39) + 0xc8u), rd32(t39), 3, t39, 9u, 2u);
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, 0x1bu);
    t40 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x34u, t40);
    g->edx = rd32(COW_IMG(0x1045666cu));
    t41 = rd32(COW_IMG(0x1045666cu));
    cow_thiscall(g, rd32(rd32(t40) + 0xc8u), rd32(t40), 3, t40, 0x1bu, 0u);
    t42 = g->edx;
    edx = t42;
L_100135bd: ;
    if (rd32(COW_IMG(0x10456938u)) == 0u)
    {
        esi = in_esi;
        edi = in_edi;
    }
    else
    {
        if (rd8(self + 0x32fu) == 0u)
        {
            esi = in_esi;
            edi = in_edi;
        }
        else
        {
            if (rd32(COW_IMG(0x1045692cu)) == 0u) goto L_100135e6;
            eax = rd32(COW_IMG(0x1045692cu));
            ecx = rd32(COW_IMG(0x1045692cu));
            if (eax == 1u) goto L_100135f7;
L_1001361c: ;
            wr32(sp0 - 0x2cu, in_esi);
            wr32(sp0 - 0x30u, in_edi);
            esi = 0u;
L_10013620: ;
            wr32(sp0 - 0x34u, 0u);
            wr32(sp0 - 0x38u, 7u);
            t44 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x3cu, t44);
            g->esp = sp0 - 0x30u;
            cow_thiscall(g, rd32(rd32(t44) + 0xc8u), rd32(t44), 3, t44, 7u, 0u);
            wr32(sp0 - 0x34u, 0u);
            wr32(sp0 - 0x38u, 0xeu);
            t45 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x3cu, t45);
            cow_thiscall(g, rd32(rd32(t45) + 0xc8u), rd32(t45), 3, t45, 0xeu, 0u);
            wr32(sp0 - 0x34u, 1u);
            wr32(sp0 - 0x38u, 9u);
            t46 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x3cu, t46);
            cow_thiscall(g, rd32(rd32(t46) + 0xc8u), rd32(t46), 3, t46, 9u, 1u);
            wr32(sp0 - 0x34u, 0u);
            wr32(sp0 - 0x38u, 0xbu);
            wr32(sp0 - 0x3cu, 0u);
            t47 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x40u, t47);
            cow_thiscall(g, rd32(rd32(t47) + 0xfcu), rd32(t47), 4, t47, 0u, 0xbu, 0u);
            wr32(sp0 - 0x34u, 2u);
            wr32(sp0 - 0x38u, 0x10u);
            wr32(sp0 - 0x3cu, 0u);
            t48 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x40u, t48);
            cow_thiscall(g, rd32(rd32(t48) + 0xfcu), rd32(t48), 4, t48, 0u, 0x10u, 2u);
            wr32(sp0 - 0x34u, 2u);
            wr32(sp0 - 0x38u, 0x11u);
            wr32(sp0 - 0x3cu, 0u);
            t49 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x40u, t49);
            cow_thiscall(g, rd32(rd32(t49) + 0xfcu), rd32(t49), 4, t49, 0u, 0x11u, 2u);
            wr32(sp0 - 0x34u, 3u);
            wr32(sp0 - 0x38u, 0xdu);
            wr32(sp0 - 0x3cu, 0u);
            t50 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x40u, t50);
            cow_thiscall(g, rd32(rd32(t50) + 0xfcu), rd32(t50), 4, t50, 0u, 0xdu, 3u);
            wr32(sp0 - 0x34u, 3u);
            wr32(sp0 - 0x38u, 0xeu);
            wr32(sp0 - 0x3cu, 0u);
            t51 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x40u, t51);
            cow_thiscall(g, rd32(rd32(t51) + 0xfcu), rd32(t51), 4, t51, 0u, 0xeu, 3u);
            wr32(sp0 - 0x34u, 5u);
            wr32(sp0 - 0x38u, 1u);
            wr32(sp0 - 0x3cu, 0u);
            t52 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x40u, t52);
            cow_thiscall(g, rd32(rd32(t52) + 0xfcu), rd32(t52), 4, t52, 0u, 1u, 5u);
            wr32(sp0 - 0x34u, 2u);
            wr32(sp0 - 0x38u, 2u);
            wr32(sp0 - 0x3cu, 0u);
            t53 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x40u, t53);
            cow_thiscall(g, rd32(rd32(t53) + 0xfcu), rd32(t53), 4, t53, 0u, 2u, 2u);
            wr32(sp0 - 0x34u, 0u);
            wr32(sp0 - 0x38u, 3u);
            wr32(sp0 - 0x3cu, 0u);
            t54 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x40u, t54);
            cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xfcu), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 4, t54, 0u, 3u, 0u);
            wr32(sp0 - 0x34u, 2u);
            wr32(sp0 - 0x38u, 4u);
            wr32(sp0 - 0x3cu, 0u);
            t55 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x40u, t55);
            cow_thiscall(g, rd32(rd32(t55) + 0xfcu), rd32(t55), 4, t55, 0u, 4u, 2u);
            wr32(sp0 - 0x34u, 0u);
            wr32(sp0 - 0x38u, 5u);
            wr32(sp0 - 0x3cu, 0u);
            t56 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x40u, t56);
            cow_thiscall(g, rd32(rd32(t56) + 0xfcu), rd32(t56), 4, t56, 0u, 5u, 0u);
            wr32(sp0 - 0x34u, 1u);
            wr32(sp0 - 0x38u, 4u);
            wr32(sp0 - 0x3cu, 1u);
            t57 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x40u, t57);
            cow_thiscall(g, rd32(rd32(t57) + 0xfcu), rd32(t57), 4, t57, 1u, 4u, 1u);
            wr32(sp0 - 0x34u, 1u);
            wr32(sp0 - 0x38u, 1u);
            wr32(sp0 - 0x3cu, 1u);
            t58 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x40u, t58);
            g->edx = rd32(COW_IMG(0x1045666cu));
            t59 = rd32(COW_IMG(0x1045666cu));
            cow_thiscall(g, rd32(rd32(t58) + 0xfcu), rd32(t58), 4, t58, 1u, 1u, 1u);
            t60 = g->edx;
            if (rd32(COW_IMG(0x10456930u) + esi * 4u) == 1u)
            {
                edx = t60;
                goto L_10013785;
            }
            eax = rd32(COW_IMG(0x10456930u) + esi * 4u) - 1u;
            edx = t60;
            if (eax == 1u) goto L_100137e0;
L_10013973: ;
            if ((int32_t)(esi + 1u) < 2)
            {
                esi = esi + 1u;
                goto L_10013620;
            }
            wr32(sp0 - 0x34u, 1u);
            wr32(sp0 - 0x38u, 7u);
            t95 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x3cu, t95);
            g->esp = sp0 - 0x30u;
            cow_thiscall(g, rd32(rd32(t95) + 0xc8u), rd32(t95), 3, t95, 7u, 1u);
            wr32(sp0 - 0x34u, 1u);
            wr32(sp0 - 0x38u, 0xeu);
            t96 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x3cu, t96);
            cow_thiscall(g, rd32(rd32(t96) + 0xc8u), rd32(t96), 3, t96, 0xeu, 1u);
            wr32(sp0 - 0x34u, 2u);
            wr32(sp0 - 0x38u, 9u);
            t97 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x3cu, t97);
            cow_thiscall(g, rd32(rd32(t97) + 0xc8u), rd32(t97), 3, t97, 9u, 2u);
            esi = rd32(sp0 - 0x2cu);
            edi = rd32(sp0 - 0x30u);
        }
    }
    g->ebx = in_ebx;
    g->esi = esi;
    g->edi = edi;
    return;
L_100135e6: ;
    wr32(COW_IMG(0x10456934u), 0u);
    wr32(COW_IMG(0x1045692cu), 1u);
    ecx = 1u;
L_100135f7: ;
    wr32(COW_IMG(0x10456930u), ecx);
    g->esp = sp0 - 0x28u;
    t43 = cow_thiscall(g, COW_IMG(0x1000d660u), rd32(COW_IMG(0x104566e8u)), 0);
    if ((uint8_t)t43 != 0u)
    {
        wr32(COW_IMG(0x10456934u), 1u);
    }
    wr32(COW_IMG(0x1045692cu), rd32(COW_IMG(0x1045692cu)) + 1u);
    goto L_1001361c;
L_10013785: ;
    if (rd32(COW_IMG(0x10456938u) + esi * 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x10456938u) + esi * 4u);
        if (rd32(esi * 4u + rd32(COW_IMG(0x1045666cu)) + 0x194u) != 0u)
        {
            ecx = rd32(COW_IMG(0x1045666cu));
            wr32(sp0 - 0x34u, 0u);
            t61 = rd32(COW_IMG(0x10456940u) + esi * 4u);
            wr32(sp0 - 0x38u, t61);
            wr32(sp0 - 0x3cu, eax);
            g->ebx = 0u;
            g->edx = t61;
            g->esp = sp0 - 0x30u;
            cow_thiscall(g, COW_IMG(0x10009e20u), ecx, 3, eax, t61, 0u);
            t62 = g->edx;
            wr32(sp0 - 0x34u, 0xffffffffu);
            wr32(sp0 - 0x38u, 0x80808080u);
            t63 = rd32(esi * 4u + rd32(COW_IMG(0x1045666cu)) + 0x194u);
            wr32(sp0 - 0x3cu, t63);
            g->eax = t63;
            g->edx = t62;
            t64 = cow_thiscall(g, COW_IMG(0x1000a4f0u), rd32(COW_IMG(0x1045666cu)), 3, t63, 0x80808080u, 0xffffffffu);
            t65 = g->edx;
            wr32(sp0 - 0x34u, 0u);
            wr32(sp0 - 0x38u, 0u);
            cow_fastcall(g, COW_IMG(0x1000a1d0u), rd32(COW_IMG(0x1045666cu)), t65, 2, 0u, 0u);
            t66 = g->edx;
            edx = t66;
        }
    }
    wr32(COW_IMG(0x10456930u) + esi * 4u, 2u);
L_100137e0: ;
    if (rd32(COW_IMG(0x10456938u) + esi * 4u) != 0u)
    {
        if (rd32(esi * 4u + rd32(COW_IMG(0x1045666cu)) + 0x194u) != 0u)
        {
            eax = rd32(COW_IMG(0x1045666cu));
            wr32(sp0 - 0x34u, 1u);
            wr32(sp0 - 0x38u, 0x1bu);
            t67 = rd32(eax + 0xcu);
            wr32(sp0 - 0x3cu, t67);
            g->esp = sp0 - 0x30u;
            cow_thiscall(g, rd32(rd32(t67) + 0xc8u), rd32(t67), 3, t67, 0x1bu, 1u);
            wr32(sp0 - 0x34u, 5u);
            wr32(sp0 - 0x38u, 0x13u);
            t68 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x3cu, t68);
            cow_thiscall(g, rd32(rd32(t68) + 0xc8u), rd32(t68), 3, t68, 0x13u, 5u);
            wr32(sp0 - 0x34u, 6u);
            wr32(sp0 - 0x38u, 0x14u);
            t69 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x3cu, t69);
            g->edx = rd32(COW_IMG(0x1045666cu));
            t70 = rd32(COW_IMG(0x1045666cu));
            cow_thiscall(g, rd32(rd32(t69) + 0xc8u), rd32(t69), 3, t69, 0x14u, 6u);
            t71 = g->edx;
            t72 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(COW_IMG(0x1045666cu)), 0);
            wr32(sp0 - 0x10u, rd32(t72));
            t73 = rd32(t72 + 4u);
            wr32(sp0 - 0xcu, t73);
            t74 = rd32(t72 + 8u);
            wr32(sp0 - 8u, t74);
            d75 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(self + 0x330u));
            wrf32(sp0 - 0x20u, (float)d75);
            t76 = rd32(t72 + 0xcu);
            wr32(sp0 - 4u, t76);
            d77 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(self + 0x330u)));
            wrf32(sp0 - 0x1cu, (float)d77);
            d78 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(self + 0x330u));
            wrf32(sp0 - 0x18u, (float)d78);
            d79 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(self + 0x330u)));
            wrf32(sp0 - 0x14u, (float)d79);
            if (rd8(self + 0x32fu) * 2u <= 0xffu)
            {
                eax = rd8(self + 0x32fu) * 2u;
            }
            else
            {
                eax = 0xffu;
            }
            if (esi != 0u)
            {
                edi = (rd32(self + 0x32cu) & 0xffffffu) | eax << 0x18u;
                wr32(sp0 - 0x34u, 0u);
                t80 = rd32(esi * 4u + rd32(COW_IMG(0x1045666cu)) + 0x19cu);
                wr32(sp0 - 0x38u, t80);
                t81 = rd32(esi * 4u + rd32(COW_IMG(0x1045666cu)) + 0x194u);
                wr32(sp0 - 0x3cu, t81);
                g->ebx = 0u;
                g->esp = sp0 - 0x30u;
                cow_thiscall(g, COW_IMG(0x10009e20u), rd32(COW_IMG(0x1045666cu)), 3, t81, t80, 0u);
                wr32(sp0 - 0x34u, 0xffffffffu);
                wr32(sp0 - 0x38u, sp0 - 0x20u);
                wr32(sp0 - 0x3cu, sp0 - 0x10u);
                wr32(sp0 - 0x40u, edi);
                t82 = rd32(COW_IMG(0x10456938u) + esi * 4u);
                wr32(sp0 - 0x44u, t82);
                g->eax = t82;
                g->edx = sp0 - 0x10u;
                t83 = cow_thiscall(g, COW_IMG(0x1000a5a0u), rd32(COW_IMG(0x1045666cu)), 5, t82, edi, sp0 - 0x10u, sp0 - 0x20u, 0xffffffffu);
                t84 = g->edx;
                wr32(sp0 - 0x34u, 0u);
                wr32(sp0 - 0x38u, 0u);
                cow_fastcall(g, COW_IMG(0x1000a1d0u), rd32(COW_IMG(0x1045666cu)), t84, 2, 0u, 0u);
            }
            else
            {
                edi = (rd32(self + 0x32cu) & 0xffffffu) | eax << 0x18u;
                wr32(sp0 - 0x34u, 0xffffffffu);
                wr32(sp0 - 0x38u, sp0 - 0x20u);
                wr32(sp0 - 0x3cu, sp0 - 0x10u);
                wr32(sp0 - 0x40u, edi);
                wr32(sp0 - 0x44u, rd32(COW_IMG(0x10456938u)));
                g->esp = sp0 - 0x30u;
                cow_thiscall(g, COW_IMG(0x1000a5a0u), rd32(COW_IMG(0x1045666cu)), 5, rd32(COW_IMG(0x10456938u)), edi, sp0 - 0x10u, sp0 - 0x20u, 0xffffffffu);
            }
            wr32(sp0 - 0x34u, 0u);
            wr32(sp0 - 0x38u, 0x1bu);
            t85 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x3cu, t85);
            g->edx = rd32(t85);
            t86 = rd32(t85);
            g->esp = sp0 - 0x30u;
            cow_thiscall(g, rd32(t86 + 0xc8u), rd32(COW_IMG(0x1045666cu)), 3, t85, 0x1bu, 0u);
            t87 = g->edx;
            wr32(sp0 - 0x34u, 0u);
            t88 = rd32(COW_IMG(0x10456940u) + esi * 4u);
            wr32(sp0 - 0x38u, t88);
            t89 = rd32(COW_IMG(0x10456938u) + esi * 4u);
            wr32(sp0 - 0x3cu, t89);
            g->ebx = 0u;
            g->eax = t88;
            t90 = cow_thiscall(g, COW_IMG(0x10009e20u), rd32(COW_IMG(0x1045666cu)), 3, t89, t88, 0u);
            wr32(sp0 - 0x34u, 0xffffffffu);
            wr32(sp0 - 0x38u, 0x80808080u);
            t91 = rd32(esi * 4u + rd32(COW_IMG(0x1045666cu)) + 0x194u);
            wr32(sp0 - 0x3cu, t91);
            g->edx = t91;
            t92 = cow_thiscall(g, COW_IMG(0x1000a4f0u), rd32(COW_IMG(0x1045666cu)), 3, t91, 0x80808080u, 0xffffffffu);
            t93 = g->edx;
            wr32(sp0 - 0x34u, 0u);
            wr32(sp0 - 0x38u, 0u);
            cow_fastcall(g, COW_IMG(0x1000a1d0u), rd32(COW_IMG(0x1045666cu)), t93, 2, 0u, 0u);
            t94 = g->edx;
            edx = t94;
        }
    }
    goto L_10013973;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100132b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100132b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
