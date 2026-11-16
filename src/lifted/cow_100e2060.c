/* f_0x100e2060 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100e2060(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_19c;
    uint32_t loc_26c;
    uint32_t loc_274;
    uint32_t loc_28c;
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
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 708u);

    wr32(sp0 - 0x290u, in_ebx);
    wr32(sp0 - 0x294u, in_ebp);
    wr32(sp0 - 0x298u, in_esi);
    wr32(sp0 - 0x29cu, in_edi);
    if (arg3 == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_100e2805;
    }
    wr32(sp0 - 0x2a0u, sp0 - 0x270u);
    wr32(sp0 - 0x2a4u, rd32(arg3));
    t1 = rd32(arg3);
    g->esp = sp0 - 0x298u;
    t2 = cow_call_regs(g, COW_IMG(0x100d92a0u), g->eax, t1, in_edx, 1, 3, t1, sp0 - 0x270u, in_edi);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 != 0u)
    {
        eax = t2;
        edx = t4;
        goto L_100e2805;
    }
    ecx = t3;
    wr32(sp0 - 0x2a0u, rd32(arg3));
    t5 = rd32(arg3);
    g->esp = sp0 - 0x294u;
    t6 = cow_call_regs(g, COW_IMG(0x100d8aa0u), g->eax, ecx, t5, 1, 3, t5, rd32(sp0 - 0x29cu), rd32(sp0 - 0x298u));
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 - 0x26cu, t6);
    if (t6 == 0u)
    {
        edx = t8;
        goto L_100e27ba;
    }
    ecx = t7;
    edx = t8;
    ebx = t6;
    loc_26c = t6;
    wr32(sp0 - 0x2a0u, ebx);
    wr32(sp0 - 0x2a4u, arg3);
    g->edx = edx;
    t9 = rd32(sp0 - 0x28cu);
    g->esp = sp0 - 0x2a4u;
    t10 = cow_thiscall(g, COW_IMG(0x100e2860u), ecx, 0);
    t11 = g->ecx;
    t12 = g->edx;
    if ((uint8_t)t10 == 0u)
    {
        ecx = t11;
        goto L_100e26ca;
    }
    eax = t10;
    ecx = t11;
    edx = t12;
    if (rd8(arg2 + 5u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(arg2 + 5u);
        edi = in_edi;
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(arg2 + 5u);
        t13 = rd8(arg2 + 4u);
        wr8(arg2 + 4u, (uint8_t)(t13 + 1u));
        if ((uint8_t)t13 != 0u)
        {
            eax = (eax & 0xffffff00u) | t13;
            edx = (edx & 0xffffff00u) | (uint8_t)(t13 + 1u);
            edi = in_edi;
        }
        else
        {
            eax = (eax & 0xffffff00u) | t13;
            edx = (edx & 0xffffff00u) | (uint8_t)(t13 + 1u);
            if (rd32(arg2 + 0x14u) == 0u)
            {
                ecx = rd32(arg2 + 0x14u);
                edi = in_edi;
            }
            else
            {
                ecx = rd32(arg2 + 0x14u);
                if (rd32(arg2 + 0x10u) == 2u)
                {
                    eax = rd32(arg2 + 0x10u) - 2u;
                }
                else
                {
                    eax = rd32(arg2 + 0x10u) - 2u;
                    if (rd16(arg2 + 8u) == 0u)
                    {
                        wr32(sp0 - 0x2a0u, sp0 - 0x288u);
                        t14 = rd32(arg2 + 0x18u);
                        wr32(sp0 - 0x2a4u, t14);
                        wr32(sp0 - 0x288u, 0u);
                        wr32(sp0 - 0x284u, 0u);
                        g->eax = t14;
                        g->edx = sp0 - 0x288u;
                        g->esp = sp0 - 0x29cu;
                        t15 = cow_thiscall_cdecl(g, ecx, ecx, 2, t14, sp0 - 0x288u);
                        t16 = g->edx;
                        eax = t15;
                        edx = t16;
                    }
                    wr32(sp0 - 0x288u, 1u);
                    wr32(sp0 - 0x284u, 0u);
                    t17 = rd16(ebx + 0xeu);
                    wr32(sp0 - 0x280u, t17);
                    wr32(sp0 - 0x2a0u, sp0 - 0x288u);
                    t18 = rd32(arg2 + 0x18u);
                    wr32(sp0 - 0x2a4u, t18);
                    g->eax = sp0 - 0x288u;
                    g->edx = (edx & 0xffff0000u) | rd16(ebx + 0x16u);
                    t19 = rd16(ebx + 0x16u);
                    g->esp = sp0 - 0x29cu;
                    t20 = cow_thiscall_cdecl(g, rd32(arg2 + 0x14u), t18, 2, t18, sp0 - 0x288u);
                    t21 = g->ecx;
                    t22 = g->edx;
                    eax = t20;
                    ecx = t21;
                    edx = t22;
                }
                if (rd16(arg2 + 8u) != 3u)
                {
                    edi = in_edi;
                }
                else
                {
                    edi = arg2 + 0x20u;
                    eax = 0u;
                    ecx = 0x3du;
                    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                }
            }
        }
        if ((int8_t)rd8(ebx + 0xau) >= 0)
        {
            eax = (eax & 0xffffff00u) | rd8(ebx + 0xau);
            wr16(arg2 + 0x1eu, 1u);
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(ebx + 0xau);
            wr16(arg1 + 2u, 3u);
            edx = arg1;
        }
    }
    if (rd16(arg2 + 8u) >= 3u)
    {
        eax = (eax & 0xffff0000u) | rd16(arg2 + 8u);
        ebp = ebx + 0x18u;
        goto L_100e21d8;
    }
    ebp = ebx + 0x18u;
    if (rd8(arg2 + 5u) == 0u)
    {
        eax = 0u;
        goto L_100e21eb;
    }
    edi = (edi & 0xffff0000u) | rd8(arg2 + 5u);
    eax = 0u;
    ecx = rd16(ebx + 8u);
L_100e21bf: ;
    if ((int32_t)(ebp - ebx) >= (int32_t)ecx) goto L_100e21e9;
    if ((uint16_t)(eax + 1u) < (uint16_t)edi)
    {
        eax = eax + 1u;
        ebp = ebp + rd8(ebp) + 1u;
        goto L_100e21bf;
    }
    eax = eax + 1u;
    ebp = ebp + rd8(ebp) + 1u;
L_100e21eb: ;
    if (ebp == 0u)
    {
        ecx = ecx & 0xffffff00u;
        goto L_100e26c3;
    }
    ecx = ecx & 0xffffff00u;
L_100e21f5: ;
    if ((int32_t)(ebp - ebx) >= (int32_t)rd16(ebx + 8u))
    {
        edx = rd16(ebx + 8u);
        goto L_100e2697;
    }
    edx = rd16(ebx + 8u);
    edi = ebp - ebx;
    if (rd16(arg2 + 8u) >= 3u)
    {
        eax = (eax & 0xffff0000u) | rd16(arg2 + 8u);
        goto L_100e221b;
    }
    eax = (eax & 0xffff0000u) | rd16(arg2 + 8u);
    if (rd8(ebp) == 0u) goto L_100e2697;
L_100e221b: ;
    if ((uint8_t)ecx >= rd16(arg2 + 0x1cu))
    {
        edx = (edx & 0xffff0000u) | (uint8_t)ecx;
        ecx = (ecx & 0xffffff00u) | (uint8_t)((uint8_t)ecx + 1u);
        goto L_100e2697;
    }
    edx = (edx & 0xffff0000u) | (uint8_t)ecx;
    loc_274 = (loc_274 & 0xffffffu) | (uint8_t)((uint8_t)ecx + 1u) << 0x18u;
    ecx = (ecx & 0xffffff00u) | (uint8_t)((uint8_t)ecx + 1u);
    t32 = rd8(arg2 + 5u);
    wr8(arg2 + 5u, (uint8_t)(t32 + 1u));
    if ((uint16_t)eax >= 3u)
    {
        edx = (edx & 0xffffff00u) | (uint8_t)(t32 + 1u);
        goto L_100e23d7;
    }
    edx = (edx & 0xffffff00u) | (uint8_t)(t32 + 1u);
    if ((int32_t)(ebp + rd8(ebp) - ebx) >= (int32_t)rd16(ebx + 8u))
    {
        eax = ebp + rd8(ebp) - ebx;
        ecx = rd16(ebx + 8u);
        goto L_100e26c3;
    }
    ecx = rd16(ebx + 8u);
    t33 = rd32(arg2 + 0x14u);
    wr16(arg2 + 6u, (uint16_t)(rd16(arg2 + 6u) + 1u));
    if (t33 == 0u)
    {
        eax = t33;
        goto L_100e23c9;
    }
    if (rd32(arg2 + 0x10u) == 2u)
    {
        eax = rd32(arg2 + 0x10u) - 2u;
        goto L_100e2383;
    }
    eax = rd32(arg2 + 0x10u) - 2u;
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_100e23c9;
    }
    eax = eax - 1u;
    wr32(sp0 - 0x2a0u, 1u);
    wr32(sp0 - 0x2a4u, arg2 + 0x20u);
    wr32(sp0 - 0x2a8u, ebp);
    g->ebx = ebx;
    g->ecx = ecx;
    g->esp = sp0 - 0x29cu;
    cow_cdecl(g, COW_IMG(0x101061b0u), 3, ebp, arg2 + 0x20u, 1u);
    t34 = g->ecx;
    wr32(sp0 - 0x2acu, sp0 - 0x288u);
    t35 = rd32(arg2 + 0x18u);
    wr32(sp0 - 0x2b0u, t35);
    wr32(sp0 - 0x288u, 3u);
    wr32(sp0 - 0x284u, 1u);
    wr32(sp0 - 0x280u, arg2 + 0x20u);
    g->eax = t35;
    g->esp = sp0 - 0x2a8u;
    t36 = cow_thiscall_cdecl(g, rd32(arg2 + 0x14u), t34, 2, t35, sp0 - 0x288u);
    t37 = g->ecx;
    eax = t36;
    ecx = t37;
    ebp = ebp + rd8(ebp) + 1u;
L_100e268a: ;
    if (ebp == 0u) goto L_100e26c3;
    ecx = (ecx & 0xffffff00u) | loc_274 >> 0x18u;
    goto L_100e21f5;
L_100e21d8: ;
    if ((uint16_t)eax != 4u) goto L_100e22b8;
    if (rd8(arg2 + 5u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(arg2 + 5u);
        goto L_100e21eb;
    }
    eax = (eax & 0xffffff00u) | rd8(arg2 + 5u);
L_100e21e9: ;
    ebp = 0u;
    goto L_100e21eb;
L_100e22b8: ;
    if ((uint16_t)eax != 3u) goto L_100e21e9;
    if ((rd8(ebx + 0xbu) & 0x1fu) - 4u > 0x11u)
    {
        eax = (rd8(ebx + 0xbu) & 0x1fu) - 4u;
        goto L_100e21eb;
    }
    eax = (rd8(ebx + 0xbu) & 0x1fu) - 4u;
    t23 = rd32(COW_IMG(0x100e2814u) + rd8(COW_IMG(0x100e2820u) + eax) * 4u);
    ecx = rd8(COW_IMG(0x100e2820u) + eax);
    switch (t23 - RD)
    {
    case 0x100e21ebu: goto L_100e21eb;
    case 0x100e22e3u: goto L_100e22e3;
    case 0x100e2333u: goto L_100e2333;
    default: rt_fatal(g, COW_IMG(0x100e22dcu), "switch");
    }
    return 0;
L_100e22e3: ;
    if (ebp == 0u) goto L_100e21eb;
    edi = 0u;
    loc_19c = rd32(sp0 - 0x19cu) & 0xffff0000u;
L_100e22f5: ;
    if ((uint16_t)edi >= rd8(arg2 + 5u)) goto L_100e21eb;
    edx = (edx & 0xffff0000u) | rd8(arg2 + 5u);
    wr32(sp0 - 0x2a0u, sp0 - 0x19cu);
    t28 = ebx + rd16(ebx + 8u);
    wr32(sp0 - 0x2a4u, t28);
    wr32(sp0 - 0x2a8u, ebp);
    g->esi = arg2;
    g->ecx = t28;
    g->edx = edx;
    g->esp = sp0 - 0x29cu;
    t29 = cow_call_regs(g, COW_IMG(0x10106cd0u), sp0 - 0x19cu, g->ecx, g->edx, 1, 3, ebp, t28, sp0 - 0x19cu);
    t30 = g->ecx;
    t31 = g->edx;
    if (t29 != 0u)
    {
        eax = t29;
        ecx = t30;
        edx = t31;
        ebp = t29;
        edi = edi + 1u;
        loc_19c = rd32(sp0 - 0x19cu) & 0xffff0000u;
        goto L_100e22f5;
    }
    eax = t29;
    ecx = t30;
    ebp = t29;
    goto L_100e21eb;
L_100e2333: ;
    if (ebp == 0u) goto L_100e21eb;
    edi = 0u;
    loc_19c = rd32(sp0 - 0x19cu) & 0xffff0000u;
L_100e2345: ;
    if ((uint16_t)edi >= rd8(arg2 + 5u)) goto L_100e21eb;
    edx = (edx & 0xffff0000u) | rd8(arg2 + 5u);
    wr32(sp0 - 0x2a0u, sp0 - 0x19cu);
    t24 = ebx + rd16(ebx + 8u);
    wr32(sp0 - 0x2a4u, t24);
    wr32(sp0 - 0x2a8u, ebp);
    g->eax = sp0 - 0x19cu;
    g->ecx = t24;
    g->esp = sp0 - 0x29cu;
    t25 = cow_call_regs(g, COW_IMG(0x10106de0u), g->eax, g->ecx, edx, 1, 3, ebp, t24, sp0 - 0x19cu);
    t26 = g->ecx;
    t27 = g->edx;
    if (t25 != 0u)
    {
        eax = t25;
        ecx = t26;
        edx = t27;
        ebp = t25;
        edi = edi + 1u;
        loc_19c = rd32(sp0 - 0x19cu) & 0xffff0000u;
        goto L_100e2345;
    }
    eax = t25;
    ecx = t26;
    ebp = t25;
    goto L_100e21eb;
L_100e2383: ;
    wr32(sp0 - 0x2a0u, 0u);
    wr32(sp0 - 0x2a4u, sp0 - 0x1e4u);
    wr32(sp0 - 0x2a8u, ebp);
    g->ebx = ebx;
    g->ecx = sp0 - 0x1e4u;
    g->esp = sp0 - 0x29cu;
    cow_cdecl(g, COW_IMG(0x101061b0u), 3, ebp, sp0 - 0x1e4u, 0u);
    t38 = g->ecx;
    wr32(sp0 - 0x2acu, sp0 - 0x1e4u);
    wr32(sp0 - 0x2b0u, 1u);
    wr32(sp0 - 0x2b4u, arg2 + 0x20u);
    wr32(sp0 - 0x288u, 2u);
    wr32(sp0 - 0x284u, 0u);
    wr32(sp0 - 0x280u, arg2 + 0x20u);
    g->edx = sp0 - 0x1e4u;
    g->esp = sp0 - 0x288u;
    cow_thiscall_cdecl(g, COW_IMG(0x10107370u), t38, 11, arg2 + 0x20u, 1u, sp0 - 0x1e4u, rd32(sp0 - 0x2a8u), sp0 - 0x1e4u, 0u, rd32(sp0 - 0x29cu), rd32(sp0 - 0x298u), rd32(sp0 - 0x294u), rd32(sp0 - 0x290u), rd32(sp0 - 0x28cu));
    t39 = g->edx;
    wr32(sp0 - 0x2b8u, sp0 - 0x288u);
    t40 = rd32(arg2 + 0x18u);
    wr32(sp0 - 0x2bcu, t40);
    g->eax = sp0 - 0x288u;
    g->esp = sp0 - 0x2b4u;
    t41 = cow_thiscall_cdecl(g, rd32(arg2 + 0x14u), t40, 2, t40, sp0 - 0x288u);
    t42 = g->ecx;
    eax = t41;
    ecx = t42;
L_100e23c9: ;
    ebp = ebp + rd8(ebp) + 1u;
    goto L_100e268a;
L_100e23d7: ;
    if ((uint16_t)eax != 4u) goto L_100e24b7;
    if ((int32_t)edi >= (int32_t)rd16(ebx + 8u))
    {
        eax = rd16(ebx + 8u);
    }
    else
    {
        t43 = rd32(arg2 + 0x14u);
        wr16(arg2 + 6u, (uint16_t)(rd16(arg2 + 6u) + 1u));
        if (t43 == 0u)
        {
            eax = t43;
        }
        else
        {
            if (rd32(arg2 + 0x10u) == 2u)
            {
                wr32(sp0 - 0x288u, 2u);
                wr32(sp0 - 0x284u, 4u);
                wr32(sp0 - 0x280u, arg2 + 0x20u);
                wr32(sp0 - 0x2a0u, sp0 - 0x268u);
                t50 = ebx + rd16(ebx + 8u);
                wr32(sp0 - 0x2a4u, t50);
                wr32(sp0 - 0x2a8u, ebp);
                wr32(sp0 - 0x268u, 0u);
                g->edx = t50;
                t51 = rd32(sp0 - 0x264u);
                g->esp = sp0 - 0x298u;
                t52 = cow_cdecl(g, COW_IMG(0x10106eb0u), 4, ebp, t50, sp0 - 0x268u, rd32(sp0 - 0x29cu));
                t53 = g->edx;
                wr32(sp0 - 0x2acu, sp0 - 0x264u);
                wr32(sp0 - 0x2b0u, 0u);
                wr32(sp0 - 0x2b4u, COW_IMG(0x10361d70u));
                wr32(sp0 - 0x2b8u, arg2 + 0x20u);
                g->ebx = ebx;
                g->ecx = 0u;
                g->esp = sp0 - 0x2a4u;
                cow_cdecl(g, COW_IMG(0x10312031u), 5, arg2 + 0x20u, COW_IMG(0x10361d70u), 0u, sp0 - 0x264u, rd32(sp0 - 0x2a8u));
                t54 = g->ecx;
                wr32(sp0 - 0x2bcu, sp0 - 0x288u);
                t55 = rd32(arg2 + 0x18u);
                wr32(sp0 - 0x2c0u, t55);
                g->eax = t55;
                g->esp = sp0 - 0x2b8u;
                t56 = cow_thiscall_cdecl(g, rd32(arg2 + 0x14u), t54, 2, t55, sp0 - 0x288u);
                t57 = g->ecx;
                eax = t56;
                ecx = t57;
                ebp = t52;
            }
            else
            {
                eax = rd32(arg2 + 0x10u) - 2u;
                if (eax != 1u)
                {
                    eax = eax - 1u;
                }
                else
                {
                    wr8(arg2 + 0x24u, 0u);
                    wr32(sp0 - 0x2a0u, arg2 + 0x20u);
                    wr32(arg2 + 0x20u, 0u);
                    t44 = ebx + rd16(ebx + 8u);
                    wr32(sp0 - 0x2a4u, t44);
                    wr32(sp0 - 0x2a8u, ebp);
                    g->ecx = t44;
                    g->esp = sp0 - 0x298u;
                    t45 = cow_cdecl(g, COW_IMG(0x10106eb0u), 4, ebp, t44, arg2 + 0x20u, rd32(sp0 - 0x29cu));
                    t46 = g->ecx;
                    wr32(sp0 - 0x288u, 3u);
                    wr32(sp0 - 0x2acu, sp0 - 0x288u);
                    t47 = rd32(arg2 + 0x18u);
                    wr32(sp0 - 0x2b0u, t47);
                    wr32(sp0 - 0x284u, 4u);
                    wr32(sp0 - 0x280u, arg2 + 0x20u);
                    g->eax = t47;
                    g->esp = sp0 - 0x2a8u;
                    t48 = cow_thiscall_cdecl(g, rd32(arg2 + 0x14u), t46, 2, t47, sp0 - 0x288u);
                    t49 = g->ecx;
                    eax = t48;
                    ecx = t49;
                    ebp = t45;
                }
            }
        }
    }
    goto L_100e268a;
L_100e24b7: ;
    if ((uint16_t)eax != 3u) goto L_100e26c3;
    if ((int32_t)edi >= (int32_t)rd16(ebx + 8u))
    {
        ecx = rd16(ebx + 8u);
        goto L_100e268a;
    }
    ecx = rd16(ebx + 8u);
    wr16(arg2 + 6u, (uint16_t)(rd16(arg2 + 6u) + 1u));
    if ((rd8(ebx + 0xbu) & 0x1fu) - 4u > 0x11u)
    {
        eax = (rd8(ebx + 0xbu) & 0x1fu) - 4u;
        goto L_100e268a;
    }
    eax = (rd8(ebx + 0xbu) & 0x1fu) - 4u;
    edx = rd8(ebx + 0xbu) & 0x1fu;
    t58 = rd32(COW_IMG(0x100e2834u) + rd8(COW_IMG(0x100e2840u) + eax) * 4u);
    switch (t58 - RD)
    {
    case 0x100e24f4u: ecx = rd8(COW_IMG(0x100e2840u) + eax); goto L_100e24f4;
    case 0x100e25c9u: goto L_100e25c9;
    case 0x100e268au: ecx = rd8(COW_IMG(0x100e2840u) + eax); goto L_100e268a;
    default: rt_fatal(g, COW_IMG(0x100e24edu), "switch");
    }
    return 0;
L_100e24f4: ;
    if (rd32(arg2 + 0x10u) == 2u)
    {
        wr32(sp0 - 0x2a0u, arg2 + 0x20u);
        wr16(arg2 + 0x20u, 0u);
        t73 = ebx + rd16(ebx + 8u);
        wr32(sp0 - 0x2a4u, t73);
        wr32(sp0 - 0x2a8u, ebp);
        g->esi = arg2;
        g->ecx = ecx;
        g->esp = sp0 - 0x29cu;
        t74 = cow_call_regs(g, COW_IMG(0x10106cd0u), t73, g->ecx, g->edx, 1, 3, ebp, t73, arg2 + 0x20u);
        t75 = g->ecx;
        if (rd32(arg2 + 0x14u) == 0u)
        {
            eax = rd32(arg2 + 0x14u);
            ecx = t75;
            ebp = t74;
        }
        else
        {
            ebp = t74;
            t76 = rd32(arg2 + 0x2cu);
            wr32(sp0 - 0x2a0u, t76);
            t77 = rd32(arg2 + 0x28u);
            wr32(sp0 - 0x2a4u, t77);
            t78 = rd16(arg2 + 0x24u);
            wr32(sp0 - 0x2a8u, t78);
            wr32(sp0 - 0x2acu, COW_IMG(0x10361d60u));
            wr32(sp0 - 0x2b0u, arg2 + 0x20u);
            wr32(sp0 - 0x288u, 2u);
            wr32(sp0 - 0x284u, 0u);
            wr32(sp0 - 0x280u, arg2 + 0x20u);
            g->ebx = ebx;
            g->esp = sp0 - 0x29cu;
            t79 = cow_cdecl(g, COW_IMG(0x10312031u), 5, arg2 + 0x20u, COW_IMG(0x10361d60u), t78, t77, t76);
            wr32(sp0 - 0x2b4u, sp0 - 0x288u);
            t80 = rd32(arg2 + 0x18u);
            wr32(sp0 - 0x2b8u, t80);
            g->esp = sp0 - 0x2b0u;
            t81 = cow_thiscall_cdecl(g, rd32(arg2 + 0x14u), sp0 - 0x288u, 2, t80, sp0 - 0x288u);
            t82 = g->ecx;
            eax = t81;
            ecx = t82;
        }
    }
    else
    {
        eax = rd32(arg2 + 0x10u) - 2u;
        if (eax != 1u)
        {
            eax = eax - 1u;
        }
        else
        {
            if (rd16(arg2 + 0x20u) < 0x14u)
            {
                ecx = arg2 + 0x20u;
            }
            else
            {
                if (rd32(arg2 + 0x14u) != 0u)
                {
                    eax = rd32(arg2 + 0x14u);
                    wr32(sp0 - 0x280u, arg2 + 0x20u);
                    wr32(sp0 - 0x288u, 3u);
                    wr32(sp0 - 0x2a0u, sp0 - 0x288u);
                    t69 = rd32(arg2 + 0x18u);
                    wr32(sp0 - 0x2a4u, t69);
                    wr32(sp0 - 0x284u, 2u);
                    g->esp = sp0 - 0x29cu;
                    cow_thiscall_cdecl(g, eax, t69, 2, t69, sp0 - 0x288u);
                }
                edi = arg2 + 0x20u;
                eax = 0u;
                ecx = 0x3du;
                while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            }
            wr32(sp0 - 0x2a0u, arg2 + 0x20u);
            t70 = ebx + rd16(ebx + 8u);
            wr32(sp0 - 0x2a4u, t70);
            wr32(sp0 - 0x2a8u, ebp);
            g->esi = arg2;
            g->ecx = ecx;
            g->esp = sp0 - 0x29cu;
            t71 = cow_call_regs(g, COW_IMG(0x10106cd0u), arg2 + 0x20u, g->ecx, g->edx, 1, 3, ebp, t70, arg2 + 0x20u);
            t72 = g->ecx;
            eax = t71;
            ecx = t72;
            ebp = t71;
        }
    }
    goto L_100e268a;
L_100e25c9: ;
    edi = arg2 + 0x20u;
    eax = 0u;
    ecx = 0x67u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x2a0u, arg2 + 0x20u);
    t59 = rd32(sp0 - 0x26cu) + rd16(rd32(sp0 - 0x26cu) + 8u);
    wr32(sp0 - 0x2a4u, t59);
    wr32(sp0 - 0x2a8u, ebp);
    g->eax = rd32(sp0 - 0x26cu);
    t60 = rd32(sp0 - 0x26cu);
    g->esp = sp0 - 0x29cu;
    t61 = cow_call_regs(g, COW_IMG(0x10106de0u), g->eax, g->ecx, edx, 1, 3, ebp, t59, arg2 + 0x20u);
    if (rd32(arg2 + 0x14u) == 0u)
    {
        ebp = t61;
    }
    else
    {
        eax = rd32(arg2 + 0x14u);
        ebp = t61;
        if (rd32(arg2 + 0x10u) == 2u)
        {
            if (rd16(arg2 + 0x20u) == 0u) goto L_100e267b;
            edi = 0u;
L_100e262e: ;
            wr32(sp0 - 0x288u, 2u);
            wr32(sp0 - 0x284u, 0u);
            wr32(sp0 - 0x280u, arg2 + 0x20u);
            t63 = arg2 + (uint16_t)edi * 0x28u + 0x44u;
            wr32(sp0 - 0x2a0u, t63);
            t64 = arg2 + (uint16_t)edi * 0x28u + 0x34u;
            wr32(sp0 - 0x2a4u, t64);
            t65 = rd32(arg2 + (uint16_t)edi * 0x28u + 0x2cu);
            wr32(sp0 - 0x2a8u, t65);
            wr32(sp0 - 0x2acu, COW_IMG(0x10361d4cu));
            wr32(sp0 - 0x2b0u, arg2 + 0x20u);
            g->ebx = arg2 + 0x20u;
            g->esp = sp0 - 0x29cu;
            t66 = cow_cdecl(g, COW_IMG(0x10312031u), 5, arg2 + 0x20u, COW_IMG(0x10361d4cu), t65, t64, t63);
            wr32(sp0 - 0x2b4u, sp0 - 0x288u);
            t67 = rd32(arg2 + 0x18u);
            wr32(sp0 - 0x2b8u, t67);
            g->esp = sp0 - 0x2b0u;
            cow_thiscall_cdecl(g, rd32(arg2 + 0x14u), sp0 - 0x288u, 2, t67, sp0 - 0x288u);
            if ((uint16_t)(edi + 1u) < rd16(arg2 + 0x20u))
            {
                edi = edi + 1u;
                goto L_100e262e;
            }
        }
        else
        {
            ecx = rd32(arg2 + 0x10u) - 2u;
            if (ecx == 1u)
            {
                wr32(sp0 - 0x288u, 3u);
                wr32(sp0 - 0x284u, 3u);
                wr32(sp0 - 0x2a0u, sp0 - 0x288u);
                t62 = rd32(arg2 + 0x18u);
                wr32(sp0 - 0x2a4u, t62);
                wr32(sp0 - 0x280u, arg2 + 0x20u);
                g->esp = sp0 - 0x29cu;
                cow_thiscall_cdecl(g, eax, t62, 2, t62, sp0 - 0x288u);
            }
        }
    }
L_100e267b: ;
    t68 = rd32(sp0 - 0x26cu);
    edi = arg2 + 0x20u;
    eax = 0u;
    ecx = 0x67u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ebx = t68;
    goto L_100e268a;
L_100e2697: ;
    if (ebp == 0u) goto L_100e26c3;
    if ((int32_t)(ebp - ebx) >= (int32_t)rd16(ebx + 8u))
    {
        eax = ebp - ebx;
        ecx = rd16(ebx + 8u);
        goto L_100e26c3;
    }
    eax = ebp - ebx;
    ecx = rd16(ebx + 8u);
    if (rd16(arg2 + 8u) == 3u) goto L_100e26b6;
    if (rd8(ebp) == 0u) goto L_100e26c3;
L_100e26b6: ;
    g->ebx = rd32(sp0 - 0x290u);
    g->esi = rd32(sp0 - 0x298u);
    g->edi = rd32(sp0 - 0x29cu);
    g->ebp = rd32(sp0 - 0x294u);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_100e26c3: ;
    if ((int8_t)rd8(ebx + 0xau) >= 0) goto L_100e26cf;
L_100e26ca: ;
    loc_28c = (rd32(sp0 - 0x28cu) & 0xffffffu) | 0x1000000u;
L_100e26cf: ;
    wr32(sp0 - 0x2a0u, rd32(arg3));
    g->eax = rd32(arg3);
    t83 = rd32(arg3);
    g->esp = sp0 - 0x294u;
    t84 = cow_call_regs(g, COW_IMG(0x100d8ae0u), g->eax, ecx, arg3, 1, 3, t83, rd32(sp0 - 0x29cu), rd32(sp0 - 0x298u));
    t85 = g->edx;
    if (rd8(sp0 - 0x289u) == 0u)
    {
        eax = (t84 & 0xffffff00u) | rd8(sp0 - 0x289u);
        edx = t85;
        goto L_100e27a9;
    }
    edx = t85;
    if (rd32(arg2 + 0x14u) != 0u)
    {
        ecx = rd32(arg2 + 0x14u);
        if (rd32(arg2 + 0x10u) == 2u)
        {
            wr32(sp0 - 0x288u, 2u);
            wr32(sp0 - 0x284u, 0u);
            wr32(sp0 - 0x280u, arg2 + 0x20u);
            g->esp = sp0 - 0x29cu;
            t89 = cow_stdcall(g, COW_IMG(0x100e1b50u), 0);
            wr32(sp0 - 0x2a0u, (uint16_t)t89);
            t90 = rd16(ebx + 0xeu);
            wr32(sp0 - 0x2a4u, t90);
            t91 = rd16(arg2 + 6u);
            wr32(sp0 - 0x2a8u, t91);
            wr32(sp0 - 0x2acu, COW_IMG(0x10361d3cu));
            wr32(sp0 - 0x2b0u, arg2 + 0x20u);
            g->ebx = ebx;
            g->edx = t91;
            cow_cdecl(g, COW_IMG(0x10312031u), 5, arg2 + 0x20u, COW_IMG(0x10361d3cu), t91, t90, (uint16_t)t89);
            t92 = g->edx;
            wr32(sp0 - 0x2b4u, sp0 - 0x288u);
            t93 = rd32(arg2 + 0x18u);
            wr32(sp0 - 0x2b8u, t93);
            g->eax = sp0 - 0x288u;
            g->esp = sp0 - 0x2b0u;
            t94 = cow_thiscall_cdecl(g, rd32(arg2 + 0x14u), t93, 2, t93, sp0 - 0x288u);
            t95 = g->ecx;
            eax = t94;
            ecx = t95;
        }
        else
        {
            eax = rd32(arg2 + 0x10u) - 2u;
            if (eax != 1u)
            {
                eax = eax - 1u;
            }
            else
            {
                eax = eax - 1u;
                if ((rd8(ebx + 0xbu) & 0x1fu) == 4u) goto L_100e2719;
                ebx = (ebx & 0xffffff00u) | (rd8(ebx + 0xbu) & 0x1fu);
                if ((uint8_t)ebx != 0x15u) goto L_100e2784;
L_100e2719: ;
                if (rd16(arg2 + 0x20u) == 0u)
                {
                    eax = arg2 + 0x20u;
                }
                else
                {
                    wr32(sp0 - 0x284u, 2u);
                    wr32(sp0 - 0x280u, arg2 + 0x20u);
                    wr32(sp0 - 0x2a0u, sp0 - 0x288u);
                    t86 = rd32(arg2 + 0x18u);
                    wr32(sp0 - 0x2a4u, t86);
                    wr32(sp0 - 0x288u, 3u);
                    g->eax = t86;
                    g->esp = sp0 - 0x29cu;
                    t87 = cow_thiscall_cdecl(g, ecx, ecx, 2, t86, sp0 - 0x288u);
                    t88 = g->ecx;
                    eax = t87;
                    ecx = t88;
                }
            }
        }
L_100e2784: ;
        wr32(sp0 - 0x2a0u, 0u);
        t96 = rd32(arg2 + 0x18u);
        wr32(sp0 - 0x2a4u, t96);
        g->edx = t96;
        g->esp = sp0 - 0x29cu;
        cow_thiscall_cdecl(g, rd32(arg2 + 0x14u), ecx, 2, t96, 0u);
        t97 = g->edx;
        wr32(arg2 + 0x14u, 0u);
        edx = t97;
    }
    t98 = rd32(sp0 - 0x294u);
    t99 = rd32(sp0 - 0x298u);
    t100 = rd32(sp0 - 0x29cu);
    wr16(arg1, (uint16_t)(rd16(arg1) + 1u));
    g->ebx = rd32(sp0 - 0x290u);
    g->esi = t99;
    g->edi = t100;
    g->ebp = t98;
    g->edx = edx;
    return (arg1 & 0xffffff00u) | 1u;
L_100e27a9: ;
    wr8(arg2 + 5u, 0u);
    g->ebx = rd32(sp0 - 0x290u);
    g->esi = rd32(sp0 - 0x298u);
    g->edi = rd32(sp0 - 0x29cu);
    g->ebp = rd32(sp0 - 0x294u);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_100e27ba: ;
    wr32(sp0 - 0x2a0u, sp0 - 0x270u);
    wr32(sp0 - 0x2a4u, rd32(arg3));
    t101 = rd32(arg3);
    g->esp = sp0 - 0x298u;
    t102 = cow_call_regs(g, COW_IMG(0x100d92a0u), g->eax, t101, edx, 1, 3, t101, sp0 - 0x270u, rd32(sp0 - 0x29cu));
    t103 = g->ecx;
    t104 = g->edx;
    if (t102 != 0u)
    {
        eax = t102;
        edx = t104;
        goto L_100e2805;
    }
    ecx = t103;
    edx = t104;
    if ((int32_t)rd32(sp0 - 0x270u) < 0)
    {
        eax = rd32(sp0 - 0x270u);
        goto L_100e2805;
    }
    eax = rd32(sp0 - 0x270u);
    zf = rd32(sp0 - 0x270u) == 0u;
    if (zf)
    {
        if (rd16(arg2 + 0x1eu) != 0u)
        {
            wr32(sp0 - 0x2a0u, rd32(arg3));
            t105 = rd32(arg3);
            g->esp = sp0 - 0x294u;
            t106 = cow_call_regs(g, COW_IMG(0x100d9320u), g->eax, ecx, t105, 1, 3, t105, rd32(sp0 - 0x29cu), rd32(sp0 - 0x298u));
            t107 = g->edx;
            if (t106 != 0u)
            {
                eax = t106;
                edx = t107;
            }
            else
            {
                eax = t106;
                edx = t107;
                wr16(arg2 + 0x1eu, 0u);
            }
        }
    }
    g->ebx = rd32(sp0 - 0x290u);
    g->esi = rd32(sp0 - 0x298u);
    g->edi = rd32(sp0 - 0x29cu);
    g->ebp = rd32(sp0 - 0x294u);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_100e2805: ;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e2060(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e2060(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
