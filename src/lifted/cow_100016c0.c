/* f_0x100016c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_100016c0(Guest* g)
{
    double d79;
    double d81;
    double d88;
    double d93;
    double d98;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_24;
    uint32_t loc_28;
    int64_t q54;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t101;
    uint32_t t102;
    uint32_t t103;
    uint32_t t104;
    uint32_t t105;
    uint32_t t106;
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
    uint32_t t75;
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
    uint32_t t8;
    uint32_t t80;
    uint32_t t82;
    uint32_t t83;
    uint32_t t84;
    uint32_t t85;
    uint32_t t86;
    uint32_t t87;
    uint32_t t89;
    uint32_t t9;
    uint32_t t90;
    uint32_t t91;
    uint32_t t92;
    uint32_t t94;
    uint32_t t95;
    uint32_t t96;
    uint32_t t97;
    uint32_t t99;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 76u);

    wr32(sp0 - 0x30u, in_ebx);
    wr32(sp0 - 0x34u, in_ebp);
    wr32(sp0 - 0x38u, in_esi);
    wr32(sp0 - 0x3cu, in_edi);
    if (arg2 > 0x10fu) goto L_10001816;
    if (arg2 == 0x10fu)
    {
        if (rd32(COW_IMG(0x10662d40u)) == 0u)
        {
            eax = in_eax;
            ecx = rd32(COW_IMG(0x10662d40u));
            edx = in_edx;
        }
        else
        {
            ecx = rd32(COW_IMG(0x10662d40u));
            wr32(sp0 - 0x40u, arg4);
            wr32(sp0 - 0x44u, arg3);
            g->edx = in_edx;
            g->esp = sp0 - 0x3cu;
            t21 = cow_call_regs(g, COW_IMG(0x101b20e0u), in_eax, ecx, g->edx, 0, 2, arg3, arg4);
            t22 = g->ecx;
            t23 = g->edx;
            eax = t21;
            ecx = t22;
            edx = t23;
        }
    }
    else
    {
        if (arg2 > 0x102u)
        {
            if (arg2 == 0x105u)
            {
                g->ecx = self;
                g->edx = in_edx;
                g->esp = sp0 - 0x3cu;
                t15 = cow_call_regs(g, COW_IMG(0x100164b0u), arg2 - 0x105u, g->ecx, g->edx, 1, 0);
                t16 = g->ecx;
                t17 = g->edx;
                if ((uint8_t)t15 != 1u)
                {
                    eax = t15;
                    ecx = t16;
                    edx = t17;
                }
                else
                {
                    eax = t15;
                    ecx = t16;
                    edx = t17;
                    if (arg3 == 0x79u)
                    {
                        if (rd32(COW_IMG(0x10662d40u)) == 0u)
                        {
                            ecx = rd32(COW_IMG(0x10662d40u));
                        }
                        else
                        {
                            ecx = rd32(COW_IMG(0x10662d40u));
                            wr32(sp0 - 0x40u, arg4);
                            wr32(sp0 - 0x44u, arg3);
                            g->edx = edx;
                            g->esp = sp0 - 0x3cu;
                            t18 = cow_call_regs(g, COW_IMG(0x101b20e0u), eax, ecx, g->edx, 0, 2, arg3, arg4);
                            t19 = g->ecx;
                            t20 = g->edx;
                            eax = t18;
                            ecx = t19;
                            edx = t20;
                        }
                    }
                }
            }
            else
            {
                if (arg2 - 0x105u != 8u)
                {
                    eax = arg2 - 0x10du;
                    ecx = self;
                    edx = in_edx;
                }
                else
                {
                    if (rd32(COW_IMG(0x10662d40u)) == 0u)
                    {
                        eax = arg2 - 0x10du;
                        ecx = rd32(COW_IMG(0x10662d40u));
                        edx = in_edx;
                    }
                    else
                    {
                        ecx = rd32(COW_IMG(0x10662d40u));
                        wr32(sp0 - 0x40u, arg4);
                        wr32(sp0 - 0x44u, arg3);
                        g->eax = arg2 - 0x10du;
                        g->ecx = ecx;
                        g->edx = in_edx;
                        g->esp = sp0 - 0x3cu;
                        t12 = cow_stdcall(g, COW_IMG(0x101b2800u), 2, arg3, arg4);
                        t13 = g->ecx;
                        t14 = g->edx;
                        eax = t12;
                        ecx = t13;
                        edx = t14;
                    }
                }
            }
        }
        else
        {
            if (arg2 == 0x102u)
            {
                if (rd32(COW_IMG(0x10455c20u)) == 0u)
                {
                    eax = in_eax;
                    ecx = rd32(COW_IMG(0x10455c20u));
                    edx = in_edx;
                }
                else
                {
                    ecx = rd32(COW_IMG(0x10455c20u));
                    wr32(sp0 - 0x40u, arg4);
                    wr32(sp0 - 0x44u, arg3);
                    g->ebx = arg2;
                    g->ecx = ecx;
                    g->esp = sp0 - 0x3cu;
                    t9 = cow_call_regs(g, COW_IMG(0x10007860u), in_eax, g->ecx, in_edx, 0, 2, arg3, arg4);
                    t10 = g->ecx;
                    t11 = g->edx;
                    eax = t9;
                    ecx = t10;
                    edx = t11;
                }
            }
            else
            {
                if (arg2 == 6u)
                {
                    if (rd32(COW_IMG(0x10455c20u)) == 0u)
                    {
                        eax = in_eax;
                        ecx = rd32(COW_IMG(0x10455c20u));
                        edx = in_edx;
                    }
                    else
                    {
                        ecx = rd32(COW_IMG(0x10455c20u));
                        wr32(sp0 - 0x40u, arg4);
                        wr32(sp0 - 0x44u, arg3);
                        wr32(sp0 - 0x48u, 6u);
                        g->eax = in_eax;
                        g->esp = sp0 - 0x3cu;
                        t6 = cow_fastcall(g, COW_IMG(0x100087d0u), ecx, in_edx, 3, 6u, arg3, arg4);
                        t7 = g->ecx;
                        t8 = g->edx;
                        eax = t6;
                        ecx = t7;
                        edx = t8;
                    }
                }
                else
                {
                    if (arg2 != 0x100u)
                    {
                        eax = in_eax;
                        ecx = self;
                        edx = in_edx;
                    }
                    else
                    {
                        if (rd32(COW_IMG(0x104566e8u)) == 0u)
                        {
                            eax = rd32(COW_IMG(0x104566e8u));
                            edx = in_edx;
                        }
                        else
                        {
                            eax = rd32(COW_IMG(0x104566e8u));
                            if (arg3 != 0xe5u)
                            {
                                if (arg3 != 0xffu)
                                {
                                    edx = in_edx;
                                }
                                else
                                {
                                    wr8(eax + 0x14u, 1u);
                                    edx = in_edx;
                                }
                            }
                            else
                            {
                                if (rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u) == 0u)
                                {
                                    eax = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
                                    edx = in_edx;
                                }
                                else
                                {
                                    eax = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
                                    wr32(sp0 - 0x40u, eax);
                                    g->edx = in_edx;
                                    g->esp = sp0 - 0x3cu;
                                    t1 = cow_stdcall(g, COW_IMG(0x102bc840u), 1, eax);
                                    t2 = g->edx;
                                    if (t1 != 0xffu)
                                    {
                                        eax = t1;
                                        edx = t2;
                                    }
                                    else
                                    {
                                        eax = t1;
                                        edx = t2;
                                        wr8(rd32(COW_IMG(0x104566e8u)) + 0x14u, 1u);
                                    }
                                }
                            }
                        }
                        if (rd32(COW_IMG(0x10662d40u)) == 0u)
                        {
                            ecx = rd32(COW_IMG(0x10662d40u));
                        }
                        else
                        {
                            ecx = rd32(COW_IMG(0x10662d40u));
                            if (arg3 != 0xdu)
                            {
                                if (arg3 != 0x1bu)
                                {
                                    if (arg3 != 0x6cu)
                                    {
                                        wr32(sp0 - 0x40u, arg4);
                                        wr32(sp0 - 0x44u, arg3);
                                        g->ebx = arg2;
                                        g->esp = sp0 - 0x3cu;
                                        t3 = cow_fastcall(g, COW_IMG(0x101b29f0u), ecx, edx, 2, arg3, arg4);
                                        t4 = g->ecx;
                                        t5 = g->edx;
                                        eax = t3;
                                        ecx = t4;
                                        edx = t5;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
L_1000185b: ;
    if (rd8(COW_IMG(0x1034f92cu)) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1034f92cu));
        goto L_10001aff;
    }
    if (arg2 - 0x200u > 0xau)
    {
        eax = arg2 - 0x200u;
        goto L_10001aff;
    }
    t35 = rd32(COW_IMG(0x10001b20u) + arg2 * 4u - 0x800u);
    switch (t35 - RD)
    {
    case 0x1000187eu: goto L_1000187e;
    case 0x1000189bu: goto L_1000189b;
    case 0x10001a95u: goto L_10001a95;
    case 0x10001aa8u: goto L_10001aa8;
    case 0x10001abbu: goto L_10001abb;
    case 0x10001aceu: goto L_10001ace;
    case 0x10001ae1u: goto L_10001ae1;
    case 0x10001af4u: goto L_10001af4;
    case 0x10001affu: eax = arg2 - 0x200u; goto L_10001aff;
    default: rt_fatal(g, COW_IMG(0x10001877u), "switch");
    }
    return 0;
L_10001816: ;
    if (arg2 - 0x281u > 5u)
    {
        eax = arg2 - 0x281u;
        ecx = self;
        edx = in_edx;
        goto L_1000185b;
    }
    t24 = rd32(COW_IMG(0x10001b08u) + arg2 * 4u - 0xa04u);
    switch (t24 - RD)
    {
    case 0x10001828u: goto L_10001828;
    case 0x1000183bu: goto L_1000183b;
    case 0x1000185bu: eax = arg2 - 0x281u; ecx = self; edx = in_edx; goto L_1000185b;
    case 0x10001affu: eax = arg2 - 0x281u; edx = in_edx; goto L_10001aff;
    default: rt_fatal(g, COW_IMG(0x10001821u), "switch");
    }
    return 0;
L_10001828: ;
    if (rd32(COW_IMG(0x10662d40u)) == 0u)
    {
        eax = arg2 - 0x281u;
        ecx = rd32(COW_IMG(0x10662d40u));
        edx = in_edx;
    }
    else
    {
        ecx = rd32(COW_IMG(0x10662d40u));
        wr32(sp0 - 0x40u, arg4);
        wr32(sp0 - 0x44u, arg3);
        g->eax = arg2 - 0x281u;
        g->ecx = ecx;
        g->edx = in_edx;
        g->esp = sp0 - 0x3cu;
        t32 = cow_stdcall(g, COW_IMG(0x101b27f0u), 2, arg3, arg4);
        t33 = g->ecx;
        t34 = g->edx;
        eax = t32;
        ecx = t33;
        edx = t34;
    }
    goto L_1000185b;
L_1000183b: ;
    if (rd32(COW_IMG(0x10662d40u)) == 0u)
    {
        eax = arg2 - 0x281u;
        ecx = rd32(COW_IMG(0x10662d40u));
        edx = in_edx;
    }
    else
    {
        ecx = rd32(COW_IMG(0x10662d40u));
        g->edx = in_edx;
        g->esp = sp0 - 0x3cu;
        t25 = cow_thiscall(g, COW_IMG(0x101b5c90u), ecx, 0);
        t26 = g->ecx;
        t27 = g->edx;
        if ((uint8_t)t25 == 0u)
        {
            eax = t25;
            ecx = t26;
            edx = t27;
        }
        else
        {
            eax = t25;
            edx = t27;
            wr32(sp0 - 0x40u, arg4);
            wr32(sp0 - 0x44u, arg3);
            g->edx = edx;
            t28 = rd32(COW_IMG(0x10662d40u));
            g->esp = sp0 - 0x3cu;
            t29 = cow_call_regs(g, COW_IMG(0x101b2710u), eax, t28, g->edx, 0, 2, arg3, arg4);
            t30 = g->ecx;
            t31 = g->edx;
            eax = t29;
            ecx = t30;
            edx = t31;
        }
    }
    goto L_1000185b;
L_1000187e: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x3cu;
    t48 = cow_stdcall(g, COW_IMG(0x1025e070u), 0);
    t49 = g->ecx;
    t50 = g->edx;
    if ((uint8_t)t48 == 0u) goto L_1000189b;
    eax = t48;
    ecx = t49;
    edx = t50;
    wr32(sp0 - 0x40u, arg3 >> 0x10u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x3cu;
    t51 = cow_cdecl(g, COW_IMG(0x10001d90u), 1, arg3 >> 0x10u);
    t52 = g->edx;
    g->ebx = rd32(sp0 - 0x30u);
    g->esi = rd32(sp0 - 0x38u);
    g->edi = rd32(sp0 - 0x3cu);
    g->ebp = rd32(sp0 - 0x34u);
    g->edx = t52;
    return t51;
L_1000189b: ;
    t53 = rd32(COW_IMG(0x104e1d4cu));
    wr16(t53 + 0x84u, arg3 >> 0x10u);
    q54 = (int64_t)cow_muls(0x88888889u, (uint32_t)(int16_t)(arg3 >> 0x10u));
    t55 = (uint32_t)((int32_t)(cow_qhi(q54) + (uint32_t)(int16_t)(arg3 >> 0x10u)) >> 6u);
    t56 = t55 + (t55 >> 0x1fu);
    t57 = rd32(rd32(COW_IMG(0x104e1d4cu)) + 4u);
    wr32(sp0 - 0x20u, t57);
    t58 = rd32(rd32(COW_IMG(0x104e1d4cu)) + 8u);
    wr32(sp0 - 0x1cu, t58);
    g->edx = t56;
    t59 = rd32(COW_IMG(0x104e1d4cu));
    g->esp = sp0 - 0x3cu;
    t60 = cow_stdcall(g, COW_IMG(0x1025e070u), 0);
    t61 = g->edx;
    if ((uint8_t)t60 == 0u)
    {
        edx = t61;
        ebx = t56;
        ebp = t57;
        eax = arg4 >> 0x10u;
        esi = (uint16_t)arg4;
    }
    else
    {
        edx = t61;
        ebx = t56;
        ebp = t57;
        eax = (uint32_t)(int16_t)(arg4 >> 0x10u);
        esi = (uint32_t)(int16_t)arg4;
    }
    wr32(sp0 - 0x28u, esi);
    wr32(sp0 - 0x24u, eax);
    if (rd32(COW_IMG(0x10456a7cu)) != 0u)
    {
        loc_28 = esi;
        loc_24 = eax;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        t62 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
        wr32(sp0 - 0x44u, t62);
        g->eax = rd32(COW_IMG(0x103d3c64u));
        g->edx = sp0 - 0x10u;
        t63 = rd32(COW_IMG(0x103d3c64u));
        g->esp = sp0 - 0x3cu;
        t64 = cow_thiscall(g, rd32(COW_IMG(0x103293e4u)), t62, 2, t62, sp0 - 0x10u);
        t65 = g->ecx;
        t66 = g->edx;
        wr32(sp0 - 0x40u, 0x20u);
        g->edx = t66;
        t67 = rd32(COW_IMG(0x103293a0u));
        t68 = cow_thiscall(g, t67, t65, 1, 0x20u);
        t69 = g->ecx;
        t70 = g->edx;
        wr32(sp0 - 0x40u, 0x21u);
        g->edx = t70;
        t71 = cow_thiscall(g, t67, t69, 1, 0x21u);
        t72 = g->ecx;
        t73 = g->edx;
        wr32(sp0 - 0x40u, 4u);
        t74 = cow_thiscall(g, t67, t72, 1, 4u);
        if (rd32(COW_IMG(0x10456a7cu)) != 3u)
        {
            ebp = t74;
            esi = t68;
            edi = t71;
        }
        else
        {
            ebp = 0u;
            esi = 0u;
            edi = 0u;
        }
        t75 = rd32(sp0 - 8u);
        t76 = t75 - rd32(sp0 - 0x10u);
        t77 = rd32(sp0 - 0x10u);
        wr32(sp0 + 4u, t76);
        t78 = t75 - esi * 2u - t77;
        d79 = fr(g, (double)(int32_t)rd32(sp0 - 0x28u) * (double)(int32_t)rd32(sp0 + 4u));
        t80 = rd32(sp0 + 4u);
        wr32(sp0 + 4u, t78);
        d81 = fr(g, d79 / (double)(int32_t)rd32(sp0 + 4u));
        fpush(g, d81);
        g->esp = sp0 - 0x3cu;
        t82 = cow_call_regs(g, COW_IMG(0x10311c6cu), t78, g->ecx, g->edx, 1, 0);
        wr32(sp0 - 0x28u, t82);
        t83 = rd32(sp0 - 4u);
        t84 = t83 - rd32(sp0 - 0xcu);
        t85 = rd32(sp0 - 0xcu);
        wr32(sp0 + 4u, t84);
        t86 = rd32(sp0 + 4u);
        wrf32(sp0 + 4u, (float)(double)(int32_t)t86);
        t87 = t83 - edi * 2u - t85 - ebp;
        wr32(sp0 - 0x2cu, t87);
        g->edx = edi * 2u;
        d88 = fr(g, fr(g, (double)(int32_t)rd32(sp0 - 0x24u) * (double)rdf32(sp0 + 4u)) / (double)(int32_t)t87);
        fpush(g, d88);
        t89 = cow_call_regs(g, COW_IMG(0x10311c6cu), t87, g->ecx, g->edx, 1, 0);
        t90 = g->edx;
        wr32(sp0 - 0x24u, t89);
        t91 = (uint32_t)(int16_t)rd16(COW_IMG(0x106218b8u)) - (uint32_t)(int16_t)rd16(COW_IMG(0x106218b4u));
        wr32(sp0 - 0x2cu, t91);
        g->ecx = t91;
        t92 = rd16(COW_IMG(0x106218b4u));
        d93 = fr(g, (double)(int32_t)t91 * fr(g, (double)(int32_t)rd32(sp0 - 0x28u) / (double)(int32_t)t80));
        fpush(g, d93);
        t94 = cow_call_regs(g, COW_IMG(0x10311c6cu), (uint32_t)(int16_t)t92, g->ecx, g->edx, 1, 0);
        t95 = g->ecx;
        wr32(sp0 - 0x28u, t94);
        t96 = (uint32_t)(int16_t)rd16(COW_IMG(0x106218bau)) - (uint32_t)(int16_t)rd16(COW_IMG(0x106218b6u));
        wr32(sp0 - 0x2cu, t96);
        g->edx = (uint32_t)(int16_t)rd16(COW_IMG(0x106218b6u));
        t97 = rd16(COW_IMG(0x106218b6u));
        d98 = fr(g, (double)(int32_t)t96 * fr(g, (double)(int32_t)rd32(sp0 - 0x24u) / (double)rdf32(sp0 + 4u)));
        fpush(g, d98);
        t99 = cow_call_regs(g, COW_IMG(0x10311c6cu), t96, g->ecx, g->edx, 1, 0);
        t100 = g->edx;
        wr32(sp0 - 0x24u, t99);
        eax = t99;
        edx = t100;
        ebp = rd32(sp0 - 0x20u);
        esi = t94;
    }
    if (rd32(COW_IMG(0x104e1d4cu)) == 0u) goto L_10001aff;
    ecx = rd32(COW_IMG(0x104e1d4cu));
    if (esi != ebp) goto L_10001a32;
    if (eax != rd32(sp0 - 0x1cu)) goto L_10001a32;
    if ((uint16_t)ebx == 0u) goto L_10001aff;
L_10001a32: ;
    wr32(sp0 - 0x18u, esi - ebp);
    t101 = eax - rd32(sp0 - 0x1cu);
    wr32(sp0 - 0x14u, t101);
    if ((uint16_t)ebx != 0u)
    {
        edx = rd32(sp0 - 0x1cu);
        goto L_10001a5f;
    }
    eax = t101;
    edx = rd32(sp0 - 0x1cu);
    esi = esi - ebp;
    if ((int32_t)esi < -2) goto L_10001a5f;
    if ((int32_t)esi > 2) goto L_10001a5f;
    if ((int32_t)eax < -2) goto L_10001a5f;
    if ((int32_t)eax <= 2) goto L_10001aff;
L_10001a5f: ;
    g->esp = sp0 - 0x3cu;
    t102 = cow_stdcall(g, COW_IMG(0x1025e070u), 0);
    if ((uint8_t)t102 == 0u)
    {
        eax = t102;
    }
    else
    {
        eax = t102;
        ebx = 0u;
    }
    wr32(sp0 - 0x40u, sp0 - 0x28u);
    wr32(sp0 - 0x44u, ebx);
    wr32(sp0 - 0x48u, sp0 - 0x18u);
    g->eax = eax;
    g->edx = sp0 - 0x18u;
    g->esp = sp0 - 0x3cu;
    t103 = cow_thiscall(g, COW_IMG(0x101245d0u), rd32(COW_IMG(0x104e1d4cu)), 3, sp0 - 0x18u, ebx, sp0 - 0x28u);
    t104 = g->edx;
    wr32(sp0 - 0x40u, 1u);
    t105 = cow_fastcall(g, COW_IMG(0x101252f0u), rd32(COW_IMG(0x104e1d4cu)), t104, 1, 1u);
    t106 = g->edx;
    g->ebx = rd32(sp0 - 0x30u);
    g->esi = rd32(sp0 - 0x38u);
    g->edi = rd32(sp0 - 0x3cu);
    g->ebp = rd32(sp0 - 0x34u);
    g->edx = t106;
    return t105;
L_10001a95: ;
    g->eax = arg2 - 0x200u;
    g->edx = edx;
    g->esp = sp0 - 0x3cu;
    t46 = cow_thiscall(g, COW_IMG(0x10124930u), rd32(COW_IMG(0x104e1d4cu)), 0);
    t47 = g->edx;
    g->ebx = in_ebx;
    g->edx = t47;
    return t46;
L_10001aa8: ;
    g->eax = arg2 - 0x200u;
    g->edx = edx;
    g->esp = sp0 - 0x3cu;
    t44 = cow_thiscall(g, COW_IMG(0x101249e0u), rd32(COW_IMG(0x104e1d4cu)), 0);
    t45 = g->edx;
    g->ebx = in_ebx;
    g->edx = t45;
    return t44;
L_10001abb: ;
    g->eax = arg2 - 0x200u;
    g->edx = edx;
    g->esp = sp0 - 0x3cu;
    t42 = cow_thiscall(g, COW_IMG(0x10124a00u), rd32(COW_IMG(0x104e1d4cu)), 0);
    t43 = g->edx;
    g->ebx = in_ebx;
    g->edx = t43;
    return t42;
L_10001ace: ;
    g->eax = arg2 - 0x200u;
    g->edx = edx;
    g->esp = sp0 - 0x3cu;
    t40 = cow_thiscall(g, COW_IMG(0x10124ab0u), rd32(COW_IMG(0x104e1d4cu)), 0);
    t41 = g->edx;
    g->ebx = in_ebx;
    g->edx = t41;
    return t40;
L_10001ae1: ;
    g->eax = arg2 - 0x200u;
    g->edx = edx;
    g->esp = sp0 - 0x3cu;
    t38 = cow_thiscall(g, COW_IMG(0x10124ad0u), rd32(COW_IMG(0x104e1d4cu)), 0);
    t39 = g->edx;
    g->ebx = in_ebx;
    g->edx = t39;
    return t38;
L_10001af4: ;
    g->eax = arg2 - 0x200u;
    g->edx = edx;
    g->esp = sp0 - 0x3cu;
    t36 = cow_thiscall(g, COW_IMG(0x10124b50u), rd32(COW_IMG(0x104e1d4cu)), 0);
    t37 = g->edx;
    eax = t36;
    edx = t37;
L_10001aff: ;
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100016c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100016c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
