/* f_0x1020ac30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1020ac30(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_84;
    uint32_t loc_88;
    uint32_t loc_8c;
    uint32_t loc_90;
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 184u);

    wr32(sp0 - 0x94u, in_ebx);
    wr32(sp0 - 0x98u, in_ebp);
    wr32(sp0 - 0x9cu, in_esi);
    wr32(sp0 - 0xa0u, in_edi);
    if (rd32(COW_IMG(0x105781f8u)) == 0u)
    {
        eax = rd32(COW_IMG(0x105781f8u));
        edx = in_edx;
    }
    else
    {
        eax = rd32(COW_IMG(0x105781f8u));
        wr32(sp0 - 0xa4u, 8u);
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 0xa0u;
        t1 = cow_thiscall(g, COW_IMG(0x10221300u), eax + 0x20u, 1, 8u);
        t2 = g->edx;
        eax = t1;
        edx = t2;
    }
    if (arg2 != 0u) goto L_1020ada7;
    if (rd16(COW_IMG(0x10385a04u)) != 1u)
    {
        if (rd32(COW_IMG(0x106644e4u)) != 0u)
        {
            ecx = rd32(COW_IMG(0x106644e4u));
            if (rd32(ecx + 0x1cu) != 0u)
            {
                eax = rd32(ecx + 0x1cu);
                t8 = rd32(ecx + 8u);
                wr32(sp0 - 0xa4u, t8);
                wr32(sp0 - 0xa8u, eax);
                g->ebx = arg2;
                g->edx = edx;
                g->esp = sp0 - 0xa0u;
                cow_cdecl(g, COW_IMG(0x1020b330u), 2, eax, t8);
                t9 = g->edx;
                wr32(sp0 - 0xa4u, 1u);
                t10 = (t9 & 0xffff0000u) | rd16(rd32(COW_IMG(0x106644e4u)) + 8u);
                wr32(sp0 - 0xa8u, t10);
                t11 = rd32(rd32(COW_IMG(0x106644e4u)) + 0x1cu);
                wr32(sp0 - 0xacu, t11);
                g->esi = arg1;
                g->edx = t10;
                cow_thiscall(g, COW_IMG(0x101f7020u), arg1, 3, t11, t10, 1u);
                t12 = g->ecx;
                t13 = g->edx;
                if (rd32(rd32(COW_IMG(0x106644e4u)) + 8u) != 0u)
                {
                    eax = rd32(COW_IMG(0x106644e4u));
                    ecx = t12;
                    edx = t13;
                }
                else
                {
                    eax = rd32(COW_IMG(0x106644e4u));
                    ecx = t12;
                    edx = t13;
                    wr32(sp0 - 0xa4u, 0x6bu);
                    wr32(sp0 - 0xa8u, 7u);
                    g->eax = eax;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0xa0u;
                    t14 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 7u, 0x6bu);
                    t15 = g->ecx;
                    t16 = g->edx;
                    wr32(arg1 + 0x3cu, t14);
                    wr8(arg1 + 0x44u, 0x20u);
                    wr8(arg1 + 0x45u, 0x18u);
                    eax = rd32(COW_IMG(0x106644e4u));
                    ecx = t15;
                    edx = t16;
                }
                if (rd8(eax + 0x17u) != 0u)
                {
                    if (rd8(eax + 0x16u) == 1u)
                    {
                        ecx = 0x35u;
                    }
                    else
                    {
                        ecx = rd8(eax + 0x16u) - 1u;
                        if (ecx == 1u)
                        {
                            ecx = 6u;
                        }
                        else
                        {
                            ecx = 5u;
                        }
                    }
                    t17 = rd32(eax + 0xcu) - rd32(COW_IMG(0x106644f0u));
                    wr32(sp0 - 0xa4u, t17);
                    wr32(sp0 - 0xa8u, ecx);
                    wr32(sp0 - 0xacu, 0xau);
                    wr32(sp0 - 0xb0u, 0x80u);
                    wr32(sp0 - 0xb4u, sp0 - 0x80u);
                    g->eax = sp0 - 0x80u;
                    g->edx = t17;
                    t18 = rd32(COW_IMG(0x106644f0u));
                    g->esp = sp0 - 0xa0u;
                    t19 = cow_cdecl(g, COW_IMG(0x10153150u), 5, sp0 - 0x80u, 0x80u, 0xau, ecx, t17);
                    t20 = g->edx;
                    wr32(sp0 - 0xa4u, sp0 - 0x80u);
                    g->ebx = t18;
                    cow_thiscall(g, COW_IMG(0x10129e80u), rd32(COW_IMG(0x10578158u)), 1, sp0 - 0x80u);
                    if (rd32(COW_IMG(0x106644f0u)) + rd32(rd32(COW_IMG(0x106644e4u)) + 8u) - 1u >= rd32(rd32(COW_IMG(0x106644e4u)) + 0xcu))
                    {
                        edx = rd32(COW_IMG(0x106644f0u)) + rd32(rd32(COW_IMG(0x106644e4u)) + 8u) - 1u;
                    }
                    else
                    {
                        edx = rd32(COW_IMG(0x106644f0u)) + rd32(rd32(COW_IMG(0x106644e4u)) + 8u) - 1u;
                        ebx = t18;
                        wr32(sp0 - 0xa4u, 0xbfu);
                        g->ebx = ebx;
                        g->edx = edx;
                        g->esp = sp0 - 0xa0u;
                        cow_thiscall(g, COW_IMG(0x10129de0u), rd32(COW_IMG(0x10578158u)), 1, 0xbfu);
                        t21 = g->edx;
                        edx = t21;
                    }
                }
            }
        }
    }
    else
    {
        wr32(sp0 - 0xa4u, 1u);
        wr32(sp0 - 0xa8u, 0u);
        wr32(sp0 - 0xacu, 0u);
        g->esi = arg1;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xa0u;
        t3 = cow_thiscall(g, COW_IMG(0x101f7020u), arg1, 3, 0u, 0u, 1u);
        t4 = g->ecx;
        t5 = g->edx;
        wr32(sp0 - 0xa4u, 0x65u);
        wr32(sp0 - 0xa8u, 7u);
        g->edx = t5;
        t6 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 7u, 0x65u);
        t7 = g->edx;
        wr32(arg1 + 0x3cu, t6);
        wr8(arg1 + 0x44u, 0x20u);
        wr8(arg1 + 0x45u, 0x18u);
        edx = t7;
    }
    g->edx = edx;
    g->esp = sp0 - 0xa0u;
    cow_thiscall(g, rd32(rd32(arg1) + 0x84u), arg1, 0);
    t22 = g->edx;
    t23 = rd32(COW_IMG(0x106644e4u));
    wr16(COW_IMG(0x10385a04u), 4u);
    if (t23 == 0u)
    {
        eax = t23;
        edx = t22;
        goto L_1020b325;
    }
    eax = t23;
    edx = t22;
    t24 = rd32(sp0 - 0x98u);
    t25 = rd32(sp0 - 0x9cu);
    t26 = rd32(sp0 - 0xa0u);
    wr8(eax + 0x16u, 0u);
    g->ebx = rd32(sp0 - 0x94u);
    g->esi = t25;
    g->edi = t26;
    g->ebp = t24;
    g->edx = edx;
    return eax;
L_1020ada7: ;
    if (rd32(COW_IMG(0x106644e4u)) == 0u)
    {
        eax = rd32(COW_IMG(0x106644e4u));
        goto L_1020b325;
    }
    eax = rd32(COW_IMG(0x106644e4u));
    if (rd32(arg2) == 0u) goto L_1020b2f7;
    ecx = rd32(arg2);
    if (ecx == 1u)
    {
        ecx = ecx - 1u;
        goto L_1020b164;
    }
    ecx = ecx - 1u;
    if (ecx != 2u) goto L_1020b325;
    if (rd32(eax + 0x1cu) == 0u) goto L_1020b325;
    edi = rd32(eax + 0x1cu);
    if (rd32(arg2 + 4u) == 2u)
    {
        ecx = rd32(arg2 + 4u) - 2u;
        if (rd32(arg1 + 0x58u) != 5u)
        {
            esi = in_esi;
        }
        else
        {
            wr32(sp0 - 0x8cu, 0u);
            t49 = rd32(arg2 + 8u);
            wr32(sp0 - 0x88u, t49);
            if (rd16(t49) == 0u)
            {
                esi = in_esi;
            }
            else
            {
                ebx = t49;
                loc_88 = t49;
                wr32(sp0 - 0x90u, ebx + 4u);
                loc_8c = 0u;
                loc_90 = ebx + 4u;
                ebx = ebx + 4u;
L_1020b06a: ;
                if ((int32_t)rd32(ebx + 4u) >= 0)
                {
                    if ((int32_t)rd32(eax + 8u) < (int32_t)rd32(eax))
                    {
                        ecx = rd32(eax + 8u);
                        t50 = ecx * 0x4cu + rd32(eax + 0x20u);
                        wr32(sp0 - 0xa4u, t50);
                        t51 = ecx * 0x54u + rd32(eax + 0x1cu);
                        wr32(sp0 - 0xa8u, t51);
                        wr32(t50 + 4u, rd32(ebx));
                        t52 = rd32(ebx + 4u);
                        wr32(t50 + 8u, t52);
                        t53 = rd32(ebx + 8u);
                        wr32(t50, 3u);
                        wr32(t50 + 0xcu, t53);
                        g->eax = t50 + 4u;
                        g->esp = sp0 - 0xa0u;
                        t54 = cow_thiscall(g, rd32(rd32(arg1) + 0x78u), arg1, 2, t51, t50);
                        if ((uint8_t)t54 != 0u)
                        {
                            esi = t50;
                            edi = t51;
                            wr32(edi + 0x48u, esi);
                            wr32(rd32(COW_IMG(0x106644e4u)) + 8u, rd32(rd32(COW_IMG(0x106644e4u)) + 8u) + 1u);
                        }
                        eax = rd32(COW_IMG(0x106644e4u));
                    }
                }
                if ((int32_t)rd32(loc_90 + 8u) >= 0)
                {
                    ebx = loc_90;
                    if ((int32_t)rd32(eax + 8u) < (int32_t)rd32(eax))
                    {
                        ecx = rd32(eax + 8u);
                        t55 = ecx * 0x4cu + rd32(eax + 0x20u);
                        wr32(sp0 - 0xa4u, t55);
                        t56 = ecx * 0x54u + rd32(eax + 0x1cu);
                        wr32(sp0 - 0xa8u, t56);
                        wr32(t55 + 4u, rd32(ebx));
                        t57 = rd32(ebx + 4u);
                        wr32(t55 + 8u, t57);
                        t58 = rd32(ebx + 8u);
                        wr32(t55, 4u);
                        wr32(t55 + 0xcu, t58);
                        g->eax = t55 + 4u;
                        g->esp = sp0 - 0xa0u;
                        t59 = cow_thiscall(g, rd32(rd32(arg1) + 0x78u), arg1, 2, t56, t55);
                        if ((uint8_t)t59 != 0u)
                        {
                            esi = t55;
                            edi = t56;
                            wr32(edi + 0x48u, esi);
                            wr32(rd32(COW_IMG(0x106644e4u)) + 8u, rd32(rd32(COW_IMG(0x106644e4u)) + 8u) + 1u);
                        }
                        eax = rd32(COW_IMG(0x106644e4u));
                    }
                }
                wr32(sp0 - 0x8cu, loc_8c + 1u);
                wr32(sp0 - 0x90u, loc_90 + 0xcu);
                if ((int32_t)(loc_8c + 1u) < (int32_t)rd16(loc_88))
                {
                    ebx = loc_90 + 0xcu;
                    loc_8c = loc_8c + 1u;
                    loc_90 = loc_90 + 0xcu;
                    goto L_1020b06a;
                }
                ecx = loc_8c + 1u;
                esi = loc_88;
            }
        }
    }
    else
    {
        ecx = rd32(arg2 + 4u) - 2u;
        if (ecx == 1u)
        {
            if (rd32(arg1 + 0x58u) == 6u) goto L_1020af12;
            ecx = rd32(arg1 + 0x58u);
            if (ecx != 7u)
            {
                esi = in_esi;
                goto L_1020aedf;
            }
L_1020af12: ;
            t36 = rd32(arg2 + 8u);
            wr32(sp0 - 0x88u, t36);
            wr32(sp0 - 0xa4u, rd16(t36));
            wr32(sp0 - 0xa8u, t36);
            g->esp = sp0 - 0xa0u;
            cow_thiscall(g, rd32(rd32(arg1) + 0x88u), arg1, 2, t36, rd16(t36));
            if (rd32(rd32(COW_IMG(0x106644e4u)) + 8u) != 0u)
            {
                eax = rd32(COW_IMG(0x106644e4u));
                esi = t36;
                edi = 0u;
            }
            else
            {
                eax = rd32(COW_IMG(0x106644e4u));
                esi = t36;
                t37 = rd32(sp0 - 0x88u);
                wr32(sp0 - 0xa4u, t37);
                t38 = rd32(eax + 0x1cu);
                wr32(sp0 - 0xa8u, t38);
                g->eax = t38;
                g->esp = sp0 - 0xa0u;
                t39 = cow_thiscall(g, rd32(rd32(arg1) + 0x8cu), arg1, 2, t38, t37);
                if ((uint8_t)t39 == 0u)
                {
                    eax = rd32(COW_IMG(0x106644e4u));
                    edi = 0u;
                }
                else
                {
                    eax = rd32(COW_IMG(0x106644e4u));
                    wr32(sp0 - 0xa4u, 1u);
                    t40 = rd32(eax + 8u) + 1u;
                    wr32(eax + 8u, t40);
                    t41 = (t40 & 0xffff0000u) | rd16(rd32(COW_IMG(0x106644e4u)) + 8u);
                    wr32(sp0 - 0xa8u, t41);
                    t42 = rd32(rd32(COW_IMG(0x106644e4u)) + 0x1cu);
                    wr32(sp0 - 0xacu, t42);
                    g->esi = esi;
                    g->esp = sp0 - 0xa0u;
                    cow_thiscall(g, COW_IMG(0x101f7020u), arg1, 3, t42, t41, 1u);
                    if ((int32_t)(rd16(esi) + rd32(rd32(COW_IMG(0x106644e4u)) + 8u)) < 10)
                    {
                        eax = rd32(COW_IMG(0x106644e4u));
                        edi = 0u;
                    }
                    else
                    {
                        eax = rd32(COW_IMG(0x106644e4u));
                        ecx = rd16(esi) + rd32(rd32(COW_IMG(0x106644e4u)) + 8u);
                        edi = ecx - 0xau;
                    }
                }
            }
            wr32(sp0 - 0x8cu, edi);
            if ((int32_t)edi >= (int32_t)rd16(esi))
            {
                ecx = rd16(esi);
            }
            else
            {
                loc_8c = edi;
                t43 = edi * 0x28u + esi + 0xcu;
                wr32(sp0 - 0x90u, t43);
                loc_90 = t43;
L_1020afa9: ;
                if ((int32_t)rd32(eax + 8u) < (int32_t)rd32(eax))
                {
                    ecx = rd32(eax + 8u);
                    t44 = ecx * 0x54u + rd32(eax + 0x1cu);
                    wr32(sp0 - 0x84u, t44);
                    t45 = ecx * 0x4cu + rd32(eax + 0x20u);
                    wr32(sp0 - 0xa4u, t45);
                    wr32(sp0 - 0xa8u, t44);
                    t46 = rd32(eax + 0x20u);
                    wr32(t45, 5u);
                    esi = loc_90;
                    edi = t45 + 4u;
                    ecx = 0xau;
                    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                    wr16(t45 + 0x2cu, rd16(rd32(sp0 - 0x88u) + 2u));
                    g->eax = rd32(arg1);
                    t47 = rd32(arg1);
                    g->esp = sp0 - 0xa0u;
                    t48 = cow_thiscall(g, rd32(t47 + 0x78u), arg1, 2, t44, t45);
                    if ((uint8_t)t48 != 0u)
                    {
                        ebx = t45;
                        wr32(rd32(sp0 - 0x84u) + 0x48u, ebx);
                        wr32(rd32(COW_IMG(0x106644e4u)) + 8u, rd32(rd32(COW_IMG(0x106644e4u)) + 8u) + 1u);
                    }
                    eax = rd32(COW_IMG(0x106644e4u));
                }
                wr32(sp0 - 0x8cu, loc_8c + 1u);
                wr32(sp0 - 0x90u, loc_90 + 0x28u);
                if ((int32_t)(loc_8c + 1u) < (int32_t)rd16(rd32(sp0 - 0x88u)))
                {
                    loc_8c = loc_8c + 1u;
                    loc_90 = loc_90 + 0x28u;
                    goto L_1020afa9;
                }
                ecx = loc_8c + 1u;
                esi = rd32(sp0 - 0x88u);
            }
        }
        else
        {
            if ((int32_t)rd32(eax + 8u) >= (int32_t)rd32(eax))
            {
                ecx = rd32(eax + 8u);
                esi = in_esi;
            }
            else
            {
                ecx = rd32(eax + 8u);
                t27 = ecx * 0x54u + edi;
                wr32(sp0 - 0x84u, t27);
                if (rd32(COW_IMG(0x106644e8u)) == 0u)
                {
                    ebx = ecx * 0x4cu + rd32(eax + 0x20u);
                    eax = rd32(COW_IMG(0x106644e8u));
                    esi = rd32(arg2 + 8u);
                    loc_84 = t27;
                    goto L_1020aea4;
                }
                edx = t27;
                ebx = ecx * 0x4cu + rd32(eax + 0x20u);
                eax = rd32(COW_IMG(0x106644e8u));
                esi = rd32(arg2 + 8u);
                loc_84 = t27;
                if (eax == rd32(esi + 0x34u)) goto L_1020aea4;
                wr32(ebx, 2u);
                t28 = rd32(esi + 0x34u);
                wr32(ebx + 0x44u, t28);
                if (rd8(COW_IMG(0x106644ecu)) != 0u) goto L_1020ae94;
                wr32(sp0 - 0xa4u, ebx);
                wr32(sp0 - 0xa8u, edx);
                g->eax = rd32(arg1);
                t29 = rd32(arg1);
                g->esp = sp0 - 0xa0u;
                t30 = cow_thiscall(g, rd32(t29 + 0x80u), arg1, 2, edx, ebx);
                if ((uint8_t)t30 == 0u) goto L_1020ae9c;
                t31 = rd32(rd32(COW_IMG(0x106644e4u)) + 8u) + 1u;
                wr32(rd32(COW_IMG(0x106644e4u)) + 8u, t31);
                if ((int32_t)rd32(rd32(COW_IMG(0x106644e4u)) + 8u) >= (int32_t)rd32(rd32(COW_IMG(0x106644e4u))))
                {
                    eax = rd32(COW_IMG(0x106644e4u));
                    ecx = rd32(rd32(COW_IMG(0x106644e4u)) + 8u);
                    goto L_1020aedf;
                }
                eax = rd32(COW_IMG(0x106644e4u));
                ecx = rd32(rd32(COW_IMG(0x106644e4u)) + 8u);
                t32 = ecx * 0x54u + rd32(eax + 0x1cu);
                wr32(sp0 - 0x84u, t32);
                ebx = ecx * 0x4cu + rd32(eax + 0x20u);
                loc_84 = t32;
L_1020ae9c: ;
                t33 = rd32(esi + 0x34u);
                wr32(COW_IMG(0x106644e8u), t33);
                eax = t33;
L_1020aea4: ;
                wr32(ebx, 0u);
                edi = ebx + 4u;
                ecx = 0x12u;
                while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                if (rd8(COW_IMG(0x106644ecu)) != 0u) goto L_1020aed2;
                eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x106644ecu));
                wr32(sp0 - 0xa4u, ebx);
                wr32(sp0 - 0xa8u, loc_84);
                g->eax = eax;
                g->esp = sp0 - 0xa0u;
                t34 = cow_thiscall(g, rd32(rd32(arg1) + 0x78u), arg1, 2, loc_84, ebx);
                t35 = g->ecx;
                if ((uint8_t)t34 == 0u)
                {
                    ecx = t35;
                    esi = loc_84;
                    goto L_1020aeda;
                }
                ecx = t35;
                esi = loc_84;
                wr32(esi + 0x48u, ebx);
L_1020aed2: ;
                wr32(rd32(COW_IMG(0x106644e4u)) + 8u, rd32(rd32(COW_IMG(0x106644e4u)) + 8u) + 1u);
L_1020aeda: ;
                eax = rd32(COW_IMG(0x106644e4u));
            }
        }
    }
L_1020aedf: ;
    wr32(sp0 - 0xa4u, 1u);
    t60 = (ecx & 0xffff0000u) | rd16(eax + 8u);
    wr32(sp0 - 0xa8u, t60);
    t61 = rd32(eax + 0x1cu);
    wr32(sp0 - 0xacu, t61);
    g->esi = esi;
    g->eax = eax;
    g->edx = t61;
    g->esp = sp0 - 0xa0u;
    t62 = cow_thiscall(g, COW_IMG(0x101f7020u), arg1, 3, t61, t60, 1u);
    t63 = g->edx;
    wr16(COW_IMG(0x10385a04u), 3u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = t63;
    return t62;
L_1020ae94: ;
    wr32(rd32(COW_IMG(0x106644e4u)) + 8u, rd32(rd32(COW_IMG(0x106644e4u)) + 8u) + 1u);
    goto L_1020ae9c;
L_1020b164: ;
    if (rd32(eax + 0x1cu) != 0u)
    {
        if (rd32(eax + 0x1cu) == 0u)
        {
            esi = eax;
        }
        else
        {
            esi = eax;
            eax = rd32(eax + 0x1cu);
            wr32(sp0 - 0xa4u, eax);
            g->esp = sp0 - 0xa0u;
            cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
            t64 = g->ecx;
            t65 = g->edx;
            wr32(esi + 0x1cu, 0u);
            ecx = t64;
            edx = t65;
        }
        if (rd32(esi + 0x20u) != 0u)
        {
            eax = rd32(esi + 0x20u);
            wr32(sp0 - 0xa4u, eax);
            g->esp = sp0 - 0xa0u;
            cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
            wr32(esi + 0x20u, 0u);
        }
        wr32(esi, 0xffffffffu);
        eax = rd32(COW_IMG(0x106644e4u));
    }
    t66 = rd32(eax + 4u);
    wr32(eax, t66);
    if (rd32(rd32(COW_IMG(0x106644e4u)) + 0x1cu) != 0u)
    {
        eax = rd32(COW_IMG(0x106644e4u));
        ecx = t66;
    }
    else
    {
        eax = rd32(COW_IMG(0x106644e4u));
        ecx = t66;
        t67 = rd32(eax) * 0x54u;
        wr32(sp0 - 0xa4u, t67);
        t68 = rd32(eax);
        g->esp = sp0 - 0x98u;
        t69 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, t67, 1, 3, t67, in_edi, in_esi);
        t70 = g->ecx;
        t71 = g->edx;
        if (t69 == 0u)
        {
            ecx = t70;
            ebp = 0u;
        }
        else
        {
            ecx = t70;
            edx = t71;
            ebp = t69;
            esi = t68;
            if ((int32_t)(esi - 1u) >= 0)
            {
                eax = esi - 1u;
                edi = ebp;
                esi = eax + 1u;
L_1020b1d7: ;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0xa0u;
                t72 = cow_thiscall(g, COW_IMG(0x101f4af0u), edi, 0);
                t73 = g->ecx;
                t74 = g->edx;
                if (esi != 1u)
                {
                    eax = t72;
                    edx = t74;
                    esi = esi - 1u;
                    edi = edi + 0x54u;
                    goto L_1020b1d7;
                }
                ecx = t73;
            }
        }
        wr32(rd32(COW_IMG(0x106644e4u)) + 0x1cu, ebp);
        eax = rd32(COW_IMG(0x106644e4u));
    }
    if (rd32(eax + 0x20u) == 0u)
    {
        t75 = rd32(eax) * 0x4cu;
        wr32(sp0 - 0xa4u, t75);
        t76 = rd32(eax);
        g->esp = sp0 - 0x98u;
        t77 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t76 * 9u, t75, 1, 3, t75, in_edi, in_esi);
        t78 = rd32(COW_IMG(0x106644e4u));
        wr32(t78 + 0x20u, t77);
        eax = rd32(COW_IMG(0x106644e4u));
        ecx = t78;
    }
    wr32(COW_IMG(0x106644f0u), 0u);
    t79 = rd32(arg2 + 8u);
    wr32(eax + 0xcu, t79);
    t80 = rd32(COW_IMG(0x106644e4u));
    wr32(t80 + 8u, 0u);
    if (rd16(arg2 + 0xcu) != 0u)
    {
        eax = t80;
        t81 = rd32(COW_IMG(0x106644e4u));
        wr16(t81 + 0x10u, rd16(arg2 + 0xeu));
        wr16(rd32(COW_IMG(0x106644e4u)) + 0x12u, rd16(arg2 + 0x10u));
        wr16(rd32(COW_IMG(0x106644e4u)) + 0x14u, rd16(arg2 + 0x12u));
        wr32(COW_IMG(0x106644e8u), 0xffffffffu);
    }
    t82 = rd32(rd32(COW_IMG(0x106644e4u)) + 0x20u) + rd32(rd32(COW_IMG(0x106644e4u)) + 8u) * 0x4cu;
    wr32(sp0 - 0xa4u, t82);
    wr32(t82, 1u);
    wr32(arg1 + 0x3cu, 0u);
    wr8(arg1 + 0x44u, 0x20u);
    wr8(arg1 + 0x45u, 0x18u);
    t83 = rd32(rd32(COW_IMG(0x106644e4u)) + 0x1cu) + rd32(rd32(COW_IMG(0x106644e4u)) + 8u) * 0x54u;
    wr32(sp0 - 0xa8u, t83);
    g->eax = rd32(rd32(COW_IMG(0x106644e4u)) + 8u) * 0x15u;
    g->edx = t83;
    t84 = rd32(rd32(COW_IMG(0x106644e4u)) + 8u);
    g->esp = sp0 - 0xa0u;
    t85 = cow_thiscall(g, rd32(rd32(arg1) + 0x7cu), arg1, 2, t83, t82);
    t86 = g->ecx;
    t87 = g->edx;
    if ((uint8_t)t85 == 0u)
    {
        eax = t85;
        edx = t87;
    }
    else
    {
        ecx = t86;
        wr32(sp0 - 0xa4u, 1u);
        t88 = rd32(rd32(COW_IMG(0x106644e4u)) + 8u) + 1u;
        wr32(rd32(COW_IMG(0x106644e4u)) + 8u, t88);
        t89 = (ecx & 0xffff0000u) | rd16(rd32(COW_IMG(0x106644e4u)) + 8u);
        wr32(sp0 - 0xa8u, t89);
        t90 = rd32(rd32(COW_IMG(0x106644e4u)) + 0x1cu);
        wr32(sp0 - 0xacu, t90);
        g->esi = arg1;
        g->eax = rd32(COW_IMG(0x106644e4u));
        g->edx = t90;
        t91 = rd32(COW_IMG(0x106644e4u));
        g->esp = sp0 - 0xa0u;
        t92 = cow_thiscall(g, COW_IMG(0x101f7020u), arg1, 3, t90, t89, 1u);
        t93 = g->edx;
        eax = t92;
        edx = t93;
    }
    t94 = rd32(sp0 - 0x98u);
    t95 = rd32(sp0 - 0x9cu);
    t96 = rd32(sp0 - 0xa0u);
    wr16(COW_IMG(0x10385a04u), 2u);
    g->ebx = rd32(sp0 - 0x94u);
    g->esi = t95;
    g->edi = t96;
    g->ebp = t94;
    g->edx = edx;
    return eax;
L_1020b2f7: ;
    if (rd16(arg2 + 8u) != 0u) goto L_1020b30c;
    wr8(eax + 0x16u, 2u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = edx;
    return eax;
L_1020b30c: ;
    if (rd16(arg2 + 0xau) != 0u) goto L_1020b321;
    wr8(eax + 0x16u, 0u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = edx;
    return eax;
L_1020b321: ;
    wr8(eax + 0x16u, 1u);
L_1020b325: ;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1020ac30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1020ac30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
