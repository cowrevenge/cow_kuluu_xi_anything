/* f_0x10183da0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10183da0(Guest* g)
{
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_4;
    double loc_4_f;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t101;
    uint32_t t102;
    uint32_t t103;
    uint32_t t104;
    uint32_t t105;
    uint32_t t106;
    uint32_t t107;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
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
    uint32_t t75;
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
    uint32_t t79;
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
    uint32_t t98;
    uint32_t t99;
    double x0;
    double x1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 60u);

    wr32(sp0 - 0x1cu, in_ebx);
    wr32(sp0 - 0x20u, in_ebp);
    wr32(sp0 - 0x24u, in_esi);
    wr32(sp0 - 0x28u, in_edi);
    t1 = rd32(arg2 + 0x18u);
    wr32(sp0 - 0x18u, t1);
    if (rd32(arg2 + 0x18u) != 0u)
    {
        eax = t1;
        loc_18 = t1;
        d2 = fr(g, (double)rdf32(arg2 + 0x24u) - (double)rdf32(self + 0x390f8u));
        d3 = fr(g, (double)rdf32(arg2 + 0x20u) - (double)rdf32(self + 0x390f4u));
        d4 = fr(g, (double)rdf32(arg2 + 0x1cu) - (double)rdf32(self + 0x390f0u));
        if (rd8(arg2 + 0xbu) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(arg2 + 0xbu);
            x1 = (double)rdf32(self + 0x39424u);
            x0 = fr(g, fr(g, fr(g, d2 * d2) + fr(g, d3 * d3)) + fr(g, d4 * d4));
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(arg2 + 0xbu);
            x1 = (double)rdf32(self + 0x39424u);
            x0 = fr(g, fr(g, fr(g, d2 * d2) + fr(g, d3 * d3)) + fr(g, d4 * d4));
            d5 = (double)(float)fr(g, (double)rdf32(self + 0x39428u) * (double)rdf32(arg2 + 0xd0u));
            wrf32(sp0 - 4u, (float)d5);
            d6 = fr(g, (double)rdf32(self + 0x39428u) * (double)rdf32(arg2 + 0xd0u));
            if (!(d6 < x1))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d6, x1, 2u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d6, x1, 2u);
                loc_4_f = d5;
                x1 = loc_4_f;
            }
        }
        if ((cow_fsw(g, x0, x1, 0u) & 0x4100u) != 0u)
        {
            wr32(sp0 - 0x2cu, arg2 + 0xf4u);
            wr32(sp0 - 0x30u, self + 0x38fdcu);
            g->esp = sp0 - 0x28u;
            t7 = cow_call_regs(g, COW_IMG(0x10181bb0u), arg2 + 0xf4u, g->ecx, g->edx, 0, 2, self + 0x38fdcu, arg2 + 0xf4u);
            if (t7 == 0u)
            {
                if (rd32(arg2 + 0xe4u) == 0u)
                {
                    ebx = rd32(sp0 + 4u);
                    wr32(sp0 - 0x2cu, 0u);
                    t12 = rd32(self + 0x394b0u);
                    wr32(sp0 - 0x30u, t12);
                    t13 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                    wr32(sp0 - 0x34u, t13);
                    g->esp = sp0 - 0x28u;
                    cow_thiscall(g, rd32(rd32(t13) + 0xb8u), rd32(t13), 3, t13, t12, 0u);
                }
                else
                {
                    eax = rd32(arg2 + 0xe4u);
                    ebx = rd32(sp0 + 4u);
                    if (rd32(eax * 0x4cu + ebx - 0x48u) != 0u)
                    {
                        edi = rd32(eax * 0x4cu + ebx - 0x48u);
                        wr32(sp0 - 0x2cu, 1u);
                        t8 = rd32(self + 0x394b0u);
                        wr32(sp0 - 0x30u, t8);
                        t9 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                        wr32(sp0 - 0x34u, t9);
                        g->eax = t9;
                        g->esp = sp0 - 0x28u;
                        t10 = cow_thiscall(g, rd32(rd32(t9) + 0xb8u), t8, 3, t9, t8, 1u);
                        wr32(sp0 - 0x2cu, edi + 8u);
                        t11 = rd32(self + 0x394b0u);
                        wr32(sp0 - 0x30u, t11);
                        cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, t11, edi + 8u);
                    }
                }
                if (rd32(arg2 + 0xe8u) == 0u)
                {
                    wr32(sp0 - 0x2cu, 0u);
                    t18 = rd32(self + 0x394b4u);
                    wr32(sp0 - 0x30u, t18);
                    t19 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                    wr32(sp0 - 0x34u, t19);
                    g->esp = sp0 - 0x28u;
                    cow_thiscall(g, rd32(rd32(t19) + 0xb8u), t18, 3, t19, t18, 0u);
                }
                else
                {
                    eax = rd32(arg2 + 0xe8u);
                    if (rd32(eax * 0x4cu + ebx - 0x48u) != 0u)
                    {
                        edi = rd32(eax * 0x4cu + ebx - 0x48u);
                        wr32(sp0 - 0x2cu, 1u);
                        t14 = rd32(self + 0x394b4u);
                        wr32(sp0 - 0x30u, t14);
                        t15 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                        wr32(sp0 - 0x34u, t15);
                        g->edx = t14;
                        g->esp = sp0 - 0x28u;
                        cow_thiscall(g, rd32(rd32(t15) + 0xb8u), rd32(t15), 3, t15, t14, 1u);
                        t16 = g->edx;
                        wr32(sp0 - 0x2cu, edi + 8u);
                        t17 = rd32(self + 0x394b4u);
                        wr32(sp0 - 0x30u, t17);
                        cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, t17, edi + 8u);
                    }
                }
                if (rd32(arg2 + 0xecu) == 0u)
                {
                    wr32(sp0 - 0x2cu, 0u);
                    t24 = rd32(self + 0x394b8u);
                    wr32(sp0 - 0x30u, t24);
                    t25 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                    wr32(sp0 - 0x34u, t25);
                    g->esp = sp0 - 0x28u;
                    cow_thiscall(g, rd32(rd32(t25) + 0xb8u), rd32(t25), 3, t25, t24, 0u);
                }
                else
                {
                    eax = rd32(arg2 + 0xecu);
                    if (rd32(eax * 0x4cu + ebx - 0x48u) != 0u)
                    {
                        edi = rd32(eax * 0x4cu + ebx - 0x48u);
                        wr32(sp0 - 0x2cu, 1u);
                        t20 = rd32(self + 0x394b8u);
                        wr32(sp0 - 0x30u, t20);
                        t21 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                        wr32(sp0 - 0x34u, t21);
                        g->eax = t21;
                        g->esp = sp0 - 0x28u;
                        t22 = cow_thiscall(g, rd32(rd32(t21) + 0xb8u), t20, 3, t21, t20, 1u);
                        wr32(sp0 - 0x2cu, edi + 8u);
                        t23 = rd32(self + 0x394b8u);
                        wr32(sp0 - 0x30u, t23);
                        cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, t23, edi + 8u);
                    }
                }
                if (rd32(arg2 + 0xf0u) == 0u)
                {
                    wr32(sp0 - 0x2cu, 0u);
                    t30 = rd32(self + 0x394bcu);
                    wr32(sp0 - 0x30u, t30);
                    t31 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                    wr32(sp0 - 0x34u, t31);
                    g->esp = sp0 - 0x28u;
                    cow_thiscall(g, rd32(rd32(t31) + 0xb8u), t30, 3, t31, t30, 0u);
                }
                else
                {
                    eax = rd32(arg2 + 0xf0u);
                    if (rd32(eax * 0x4cu + ebx - 0x48u) != 0u)
                    {
                        edi = rd32(eax * 0x4cu + ebx - 0x48u);
                        wr32(sp0 - 0x2cu, 1u);
                        t26 = rd32(self + 0x394bcu);
                        wr32(sp0 - 0x30u, t26);
                        t27 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                        wr32(sp0 - 0x34u, t27);
                        g->edx = t26;
                        g->esp = sp0 - 0x28u;
                        cow_thiscall(g, rd32(rd32(t27) + 0xb8u), rd32(t27), 3, t27, t26, 1u);
                        t28 = g->edx;
                        wr32(sp0 - 0x2cu, edi + 8u);
                        t29 = rd32(self + 0x394bcu);
                        wr32(sp0 - 0x30u, t29);
                        cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, t29, edi + 8u);
                    }
                }
                wr32(sp0 - 0x14u, 0u);
                if (rd16(arg2 + 0xd4u) == 0u)
                {
                    eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                    ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
                    edx = rd32(COW_IMG(0x1045666cu));
                    wr32(sp0 - 0x2cu, 3u);
                    wr32(sp0 - 0x30u, 0x16u);
                    wr32(sp0 - 0x34u, eax);
                    g->esp = sp0 - 0x28u;
                    cow_thiscall(g, rd32(ecx + 0xc8u), ecx, 3, eax, 0x16u, 3u);
                    wr32(sp0 - 0x10u, 0u);
                    loc_10 = 0u;
                }
                else
                {
                    eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                    ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
                    edx = rd32(COW_IMG(0x1045666cu));
                    wr32(sp0 - 0x2cu, 2u);
                    wr32(sp0 - 0x30u, 0x16u);
                    wr32(sp0 - 0x34u, eax);
                    g->esp = sp0 - 0x28u;
                    cow_thiscall(g, rd32(ecx + 0xc8u), ecx, 3, eax, 0x16u, 2u);
                    wr32(sp0 - 0x10u, 1u);
                    loc_10 = 1u;
                }
                if (rd16(arg2 + 0xd6u) != 0u)
                {
                    eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                    ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
                    edx = rd32(COW_IMG(0x1045666cu));
                    wr32(sp0 - 0x2cu, 1u);
                    loc_2c = 1u;
                }
                else
                {
                    eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                    ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
                    edx = rd32(COW_IMG(0x1045666cu));
                    wr32(sp0 - 0x2cu, 0u);
                    loc_2c = 0u;
                }
                wr32(sp0 - 0x30u, 0xfu);
                wr32(sp0 - 0x34u, eax);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x28u;
                t32 = cow_thiscall(g, rd32(ecx + 0xc8u), ecx, 3, eax, 0xfu, loc_2c);
                t33 = g->edx;
                wr32(sp0 - 0x2cu, arg2 + 0x40u);
                wr32(sp0 - 0x30u, 0x100u);
                g->edx = t33;
                cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(COW_IMG(0x1045666cu)), 2, 0x100u, arg2 + 0x40u);
                t34 = g->edx;
                t35 = rd32(rd32(sp0 - 0x18u) + 0x60u);
                t36 = rd32(sp0 - 0x18u);
                t37 = rd32(rd32(sp0 - 0x18u) + 0x60u);
                wr32(sp0 + 4u, t35);
                if (t37 != 0u)
                {
                    eax = t36;
                    edx = t34;
                    ebx = t35;
                    wr32(sp0 - 4u, 0u);
                    if ((int32_t)rd32(eax + 0x44u) > 0)
                    {
                        loc_4 = 0u;
L_10184079: ;
                        wr32(sp0 - 0xcu, 0u);
                        if ((int32_t)rd32(ebx) > 0)
                        {
                            eax = rd32(ebx + 4u);
                            wr32(sp0 - 8u, eax + 4u);
                            ebp = eax + 4u;
                            loc_c = 0u;
                            loc_8 = eax + 4u;
L_10184091: ;
                            if (rd32(ebp + 0x24u) != 0u)
                            {
                                if (rd16(ebp + 0x22u) == 0u) goto L_101841bf;
                                if (rd32(self + 0x50u) == 0u) goto L_101841bf;
                                ecx = rd32(self + 0x50u);
                                if (rd32(self + 0x394a4u) == 0u)
                                {
                                    eax = rd32(self + 0x394a4u);
                                    wr32(sp0 - 0x2cu, 0u);
                                    wr32(sp0 - 0x30u, self + 0x39340u);
                                    g->eax = eax;
                                    g->edx = edx;
                                    g->esp = sp0 - 0x28u;
                                    t44 = cow_thiscall(g, COW_IMG(0x10188ca0u), ecx, 2, self + 0x39340u, 0u);
                                    t45 = g->edx;
                                    wr32(sp0 - 0x2cu, self + 0x39340u);
                                    t46 = rd32(self + 0x394a8u);
                                    wr32(sp0 - 0x30u, t46);
                                    g->edx = t45;
                                    t47 = cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, t46, self + 0x39340u);
                                    t48 = g->edx;
                                    eax = t47;
                                    edx = t48;
                                }
                                else
                                {
                                    eax = rd32(self + 0x394a4u);
                                    wr32(sp0 - 0x2cu, self + 0x393a8u);
                                    wr32(sp0 - 0x30u, self + 0x39340u);
                                    g->eax = eax;
                                    g->esp = sp0 - 0x28u;
                                    t38 = cow_thiscall(g, COW_IMG(0x10188b70u), ecx, 2, self + 0x39340u, self + 0x393a8u);
                                    wr32(sp0 - 0x2cu, self + 0x39340u);
                                    t39 = rd32(self + 0x394a8u);
                                    wr32(sp0 - 0x30u, t39);
                                    g->edx = t39;
                                    cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, t39, self + 0x39340u);
                                    t40 = g->edx;
                                    wr32(sp0 - 0x2cu, self + 0x393a8u);
                                    t41 = rd32(self + 0x394acu);
                                    wr32(sp0 - 0x30u, t41);
                                    g->eax = t41;
                                    g->edx = t40;
                                    t42 = cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, t41, self + 0x393a8u);
                                    t43 = g->edx;
                                    eax = t42;
                                    edx = t43;
                                    ebx = rd32(sp0 + 4u);
                                }
                                wr32(sp0 - 0x2cu, 0u);
                                wr32(sp0 - 0x30u, self + 0x39410u);
                                g->esp = sp0 - 0x28u;
                                cow_thiscall(g, COW_IMG(0x10188e00u), rd32(self + 0x50u), 2, self + 0x39410u, 0u);
                                t49 = rd32(self + 0x39410u);
                                wr32(sp0 - 0x2cu, t49);
                                wr32(sp0 - 0x30u, 0x8bu);
                                t50 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0x34u, t50);
                                g->edx = t49;
                                cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xc8u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t50, 0x8bu, t49);
                                t51 = g->edx;
                                wr32(sp0 - 0x2cu, 0u);
                                wr32(sp0 - 0x30u, self + 0x3941cu);
                                wr32(sp0 - 0x34u, self + 0x39418u);
                                wr32(sp0 - 0x38u, self + 0x39414u);
                                cow_thiscall(g, COW_IMG(0x10189120u), rd32(self + 0x50u), 4, self + 0x39414u, self + 0x39418u, self + 0x3941cu, 0u);
                                t52 = rd32(self + 0x39414u);
                                wr32(sp0 - 0x2cu, t52);
                                wr32(sp0 - 0x30u, 0x22u);
                                t53 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0x34u, t53);
                                cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xc8u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t53, 0x22u, t52);
                                t54 = rd32(self + 0x3925cu);
                                wr32(sp0 - 0x2cu, t54);
                                wr32(sp0 - 0x30u, 0x24u);
                                t55 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0x34u, t55);
                                cow_thiscall(g, rd32(rd32(t55) + 0xc8u), rd32(t55), 3, t55, 0x24u, t54);
                                t56 = rd32(self + 0x39258u);
                                wr32(sp0 - 0x2cu, t56);
                                wr32(sp0 - 0x30u, 0x25u);
                                t57 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0x34u, t57);
                                g->edx = t56;
                                cow_thiscall(g, rd32(rd32(t57) + 0xc8u), rd32(t57), 3, t57, 0x25u, t56);
                                t58 = g->edx;
                                t59 = rd32(self + 0x50u);
                                wr32(self + 0x39138u, t59);
                                edx = t58;
L_10184389: ;
                                if (rd32(ebp) == 0u)
                                {
                                    wr32(sp0 - 0x2cu, 0u);
                                    wr32(sp0 - 0x30u, 0u);
                                    t92 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                    wr32(sp0 - 0x34u, t92);
                                    g->esp = sp0 - 0x28u;
                                    cow_thiscall(g, rd32(rd32(t92) + 0xf4u), rd32(t92), 3, t92, 0u, 0u);
                                }
                                else
                                {
                                    eax = rd32(ebp);
                                    if (rd32(eax + 0x40u) == 0u)
                                    {
                                        eax = rd32(eax + 0x44u);
                                    }
                                    else
                                    {
                                        ecx = rd32(eax + 0x40u);
                                        eax = ecx;
                                    }
                                    wr32(sp0 - 0x2cu, eax);
                                    wr32(sp0 - 0x30u, 0u);
                                    t91 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                    wr32(sp0 - 0x34u, t91);
                                    g->esp = sp0 - 0x28u;
                                    cow_thiscall(g, rd32(rd32(t91) + 0xf4u), t91, 3, t91, 0u, eax);
                                }
                                t93 = (uint32_t)(int16_t)rd16(ebp + 0x1cu);
                                wr32(sp0 - 0x2cu, t93);
                                wr32(sp0 - 0x30u, 0x1bu);
                                t94 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0x34u, t94);
                                g->edx = t93;
                                g->esp = sp0 - 0x28u;
                                cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xc8u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t94, 0x1bu, t93);
                                t95 = g->edx;
                                if ((uint32_t)(int16_t)rd16(ebp + 0x20u) != rd32(sp0 - 0x14u))
                                {
                                    eax = (uint32_t)(int16_t)rd16(ebp + 0x20u);
                                    edx = t95;
                                    wr32(sp0 - 0x14u, eax);
                                    if (eax == 0u)
                                    {
                                        loc_14 = eax;
                                        if (rd32(sp0 - 0x10u) == 0u)
                                        {
                                            eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                            edx = rd32(COW_IMG(0x1045666cu));
                                            wr32(sp0 - 0x2cu, 3u);
                                            loc_2c = 3u;
                                        }
                                        else
                                        {
                                            eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                            edx = rd32(COW_IMG(0x1045666cu));
                                            wr32(sp0 - 0x2cu, 2u);
                                            loc_2c = 2u;
                                        }
                                    }
                                    else
                                    {
                                        loc_14 = eax;
                                        wr32(sp0 - 0x2cu, 1u);
                                        eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                        loc_2c = 1u;
                                    }
                                    wr32(sp0 - 0x30u, 0x16u);
                                    wr32(sp0 - 0x34u, eax);
                                    g->esp = sp0 - 0x28u;
                                    cow_thiscall(g, rd32(rd32(eax) + 0xc8u), rd32(eax), 3, eax, 0x16u, loc_2c);
                                }
                                t96 = rd32(rd32(sp0 - 0x18u) + 0x20u);
                                wr32(sp0 - 0x2cu, t96);
                                t97 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0x30u, t97);
                                t98 = rd32(sp0 - 0x18u);
                                g->esp = sp0 - 0x28u;
                                cow_thiscall(g, rd32(rd32(t97) + 0x130u), rd32(t97), 2, t97, t96);
                                t99 = rd32(t98 + 0x24u);
                                wr32(sp0 - 0x2cu, t99);
                                t100 = rd32(ebp + 0x24u);
                                wr32(sp0 - 0x30u, t100);
                                wr32(sp0 - 0x34u, 0u);
                                t101 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                wr32(sp0 - 0x38u, t101);
                                g->edx = t100;
                                cow_thiscall(g, rd32(rd32(t101) + 0x14cu), rd32(t101), 4, t101, 0u, t100, t99);
                                t102 = g->edx;
                                t103 = rd32(ebp + 0x14u);
                                wr32(sp0 - 0x2cu, t103);
                                wr32(sp0 - 0x30u, 0u);
                                t104 = rd32(t98 + 0x2cu);
                                wr32(sp0 - 0x34u, t104);
                                g->ebx = ebx;
                                g->edx = t102;
                                cow_thiscall(g, COW_IMG(0x1000cb20u), rd32(COW_IMG(0x1045666cu)), 3, t104, 0u, t103);
                                t105 = g->edx;
                                edx = t105;
                            }
                            wr32(sp0 - 0xcu, loc_c + 1u);
                            wr32(sp0 - 8u, ebp + 0xc0u);
                            if ((int32_t)(loc_c + 1u) < (int32_t)rd32(ebx))
                            {
                                loc_c = loc_c + 1u;
                                loc_8 = ebp + 0xc0u;
                                ebp = ebp + 0xc0u;
                                goto L_10184091;
                            }
                        }
                        wr32(sp0 - 4u, loc_4 + 1u);
                        t106 = rd32(sp0 - 0x18u);
                        t107 = rd32(rd32(sp0 - 0x18u) + 0x44u);
                        wr32(sp0 + 4u, ebx + 0x24u);
                        if ((int32_t)(loc_4 + 1u) < (int32_t)t107)
                        {
                            edx = t106;
                            ebx = ebx + 0x24u;
                            loc_4 = loc_4 + 1u;
                            goto L_10184077;
                        }
                    }
                }
            }
        }
    }
    g->ebx = in_ebx;
    return;
L_10184077: ;
    goto L_10184079;
L_101841bf: ;
    if (rd32(self + 0x39138u) != rd32(arg2 + 0xe0u))
    {
        ecx = rd32(arg2 + 0xe0u);
        wr32(self + 0x39138u, ecx);
        if (ecx == 0u)
        {
            wr32(sp0 - 0x2cu, self + 0x39180u);
            t80 = rd32(self + 0x394a8u);
            wr32(sp0 - 0x30u, t80);
            g->esp = sp0 - 0x28u;
            cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, t80, self + 0x39180u);
            if (rd32(self + 0x394a4u) != 0u)
            {
                wr32(sp0 - 0x2cu, self + 0x391e8u);
                t81 = rd32(self + 0x394acu);
                wr32(sp0 - 0x30u, t81);
                g->esp = sp0 - 0x28u;
                cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, t81, self + 0x391e8u);
            }
            t82 = rd32(self + 0x39250u);
            wr32(sp0 - 0x2cu, t82);
            wr32(sp0 - 0x30u, 0x8bu);
            t83 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x34u, t83);
            g->esp = sp0 - 0x28u;
            cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xc8u), t82, 3, t83, 0x8bu, t82);
            t84 = rd32(self + 0x39254u);
            wr32(sp0 - 0x2cu, t84);
            wr32(sp0 - 0x30u, 0x22u);
            t85 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x34u, t85);
            cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xc8u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t85, 0x22u, t84);
            t86 = rd32(self + 0x3925cu);
            wr32(sp0 - 0x2cu, t86);
            wr32(sp0 - 0x30u, 0x24u);
            t87 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x34u, t87);
            cow_thiscall(g, rd32(rd32(t87) + 0xc8u), rd32(t87), 3, t87, 0x24u, t86);
            t88 = rd32(self + 0x39258u);
            wr32(sp0 - 0x2cu, t88);
            wr32(sp0 - 0x30u, 0x25u);
            t89 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x34u, t89);
            g->edx = t88;
            cow_thiscall(g, rd32(rd32(t89) + 0xc8u), rd32(t89), 3, t89, 0x25u, t88);
            t90 = g->edx;
            edx = t90;
        }
        else
        {
            if (rd32(self + 0x394a4u) == 0u)
            {
                eax = rd32(self + 0x394a4u);
                wr32(sp0 - 0x2cu, 0u);
                wr32(sp0 - 0x30u, self + 0x39260u);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x28u;
                t64 = cow_thiscall(g, COW_IMG(0x10188ca0u), ecx, 2, self + 0x39260u, 0u);
                t65 = g->edx;
                wr32(sp0 - 0x2cu, self + 0x39260u);
                t66 = rd32(self + 0x394a8u);
                wr32(sp0 - 0x30u, t66);
                eax = t64;
                edx = t65;
                loc_2c = self + 0x39260u;
                loc_30 = t66;
            }
            else
            {
                eax = rd32(self + 0x394a4u);
                wr32(sp0 - 0x2cu, self + 0x392c8u);
                wr32(sp0 - 0x30u, self + 0x39260u);
                g->eax = eax;
                g->esp = sp0 - 0x28u;
                t60 = cow_thiscall(g, COW_IMG(0x10188b70u), ecx, 2, self + 0x39260u, self + 0x392c8u);
                wr32(sp0 - 0x2cu, self + 0x39260u);
                t61 = rd32(self + 0x394a8u);
                wr32(sp0 - 0x30u, t61);
                g->edx = t61;
                cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, t61, self + 0x39260u);
                t62 = g->edx;
                wr32(sp0 - 0x2cu, self + 0x392c8u);
                t63 = rd32(self + 0x394acu);
                wr32(sp0 - 0x30u, t63);
                eax = t63;
                edx = t62;
                loc_2c = self + 0x392c8u;
                loc_30 = t63;
            }
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x28u;
            t67 = cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, loc_30, loc_2c);
            t68 = g->edx;
            wr32(sp0 - 0x2cu, 0u);
            wr32(sp0 - 0x30u, self + 0x39330u);
            cow_thiscall(g, COW_IMG(0x10188e00u), rd32(self + 0x39138u), 2, self + 0x39330u, 0u);
            t69 = rd32(self + 0x39330u);
            wr32(sp0 - 0x2cu, t69);
            wr32(sp0 - 0x30u, 0x8bu);
            t70 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x34u, t70);
            g->eax = t70;
            g->edx = t69;
            t71 = cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xc8u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t70, 0x8bu, t69);
            t72 = g->edx;
            wr32(sp0 - 0x2cu, 0u);
            wr32(sp0 - 0x30u, self + 0x3933cu);
            wr32(sp0 - 0x34u, self + 0x39338u);
            wr32(sp0 - 0x38u, self + 0x39334u);
            cow_thiscall(g, COW_IMG(0x10189120u), rd32(self + 0x39138u), 4, self + 0x39334u, self + 0x39338u, self + 0x3933cu, 0u);
            t73 = rd32(self + 0x39334u);
            wr32(sp0 - 0x2cu, t73);
            wr32(sp0 - 0x30u, 0x22u);
            t74 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x34u, t74);
            cow_thiscall(g, rd32(rd32(t74) + 0xc8u), rd32(t74), 3, t74, 0x22u, t73);
            t75 = rd32(self + 0x3933cu);
            wr32(sp0 - 0x2cu, t75);
            wr32(sp0 - 0x30u, 0x24u);
            t76 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x34u, t76);
            cow_thiscall(g, rd32(rd32(t76) + 0xc8u), rd32(t76), 3, t76, 0x24u, t75);
            t77 = rd32(self + 0x39338u);
            wr32(sp0 - 0x2cu, t77);
            wr32(sp0 - 0x30u, 0x25u);
            t78 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x34u, t78);
            g->edx = t77;
            cow_thiscall(g, rd32(rd32(t78) + 0xc8u), rd32(t78), 3, t78, 0x25u, t77);
            t79 = g->edx;
            edx = t79;
            ebx = rd32(sp0 + 4u);
            ebp = rd32(sp0 - 8u);
        }
    }
    goto L_10184389;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10183da0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10183da0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
