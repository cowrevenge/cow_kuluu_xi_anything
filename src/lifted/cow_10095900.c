/* f_0x10095900 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10095900(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t108;
    uint32_t t109;
    uint32_t t11;
    uint32_t t110;
    uint32_t t111;
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;

    t1 = rd32(COW_IMG(0x1035af38u));
    wr32(COW_IMG(0x10487e4cu), 0u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t2 = cow_call_regs(g, COW_IMG(0x10095d80u), t1, g->ecx, g->edx, 1, 1, t1);
    t3 = g->ecx;
    t4 = g->edx;
    wr32(COW_IMG(0x1035af38u), t2);
    if (rd32(COW_IMG(0x1035af3cu)) == 0xffffffffu)
    {
        eax = rd32(COW_IMG(0x1035af3cu));
        ecx = t3;
        edx = t4;
    }
    else
    {
        eax = rd32(COW_IMG(0x1035af3cu));
        ecx = t3;
        edx = t4;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t5 = cow_call_regs(g, COW_IMG(0x10087060u), eax, g->ecx, g->edx, 1, 0);
        t6 = g->ecx;
        t7 = g->edx;
        if ((uint8_t)t5 != 0u)
        {
            eax = t5;
            ecx = t6;
            edx = t7;
            goto L_10095997;
        }
        eax = t5;
        edx = t7;
        edi = 0u;
L_10095933: ;
        if ((uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) == edi)
        {
            ecx = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
        }
        else
        {
            ecx = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
            if (rd32(COW_IMG(0x10480af0u) + edi * 4u) == 0u)
            {
                eax = rd32(COW_IMG(0x10480af0u) + edi * 4u);
            }
            else
            {
                eax = rd32(COW_IMG(0x10480af0u) + edi * 4u);
                if (!(rd32(eax + 0x120u) >> 9u & 1u))
                {
                    edx = rd32(eax + 0x120u) >> 9u;
                    goto L_1009597c;
                }
                edx = rd32(eax + 0x120u) >> 9u;
                if (rd32(eax + 0xa0u) == 0u) goto L_1009597c;
                esi = rd32(eax + 0xa0u);
                g->eax = eax;
                g->esp = sp0 - 0xcu;
                t8 = cow_fastcall(g, COW_IMG(0x1002c8f0u), esi, edx, 1, COW_IMG(0x10330684u));
                t9 = g->edx;
                if ((uint8_t)t8 == 0u)
                {
                    eax = t8;
                    edx = t9;
                    goto L_1009597c;
                }
                eax = t8;
                edx = t9;
                g->edx = edx;
                g->esp = sp0 - 0xcu;
                t10 = cow_call_regs(g, COW_IMG(0x100c4400u), eax, esi, g->edx, 1, 0);
                t11 = g->ecx;
                t12 = g->edx;
                if ((uint8_t)t10 != 0u)
                {
                    eax = t10;
                    ecx = t11;
                    edx = t12;
                    goto L_10095988;
                }
                eax = t10;
                edx = t12;
L_1009597c: ;
                g->eax = eax;
                g->edx = edx;
                t13 = rd32(COW_IMG(0x10480af0u) + edi * 4u);
                g->esp = sp0 - 0xcu;
                t14 = cow_thiscall(g, COW_IMG(0x10092900u), t13, 0);
                t15 = g->ecx;
                t16 = g->edx;
                eax = t14;
                ecx = t15;
                edx = t16;
            }
        }
L_10095988: ;
        if ((int32_t)(edi + 1u) < 2304)
        {
            edi = edi + 1u;
            goto L_10095933;
        }
        wr32(COW_IMG(0x1035af3cu), 0xffffffffu);
    }
L_10095997: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t17 = cow_call_regs(g, COW_IMG(0x101cc510u), eax, g->ecx, g->edx, 1, 0);
    t18 = g->ecx;
    t19 = g->edx;
    eax = t17;
    ecx = t18;
    edx = t19;
    ebp = t17;
    edi = COW_IMG(0x10486020u);
L_100959a9: ;
    if (rd32(edi) == 0u) goto L_10095a85;
    esi = rd32(edi);
L_100959b3: ;
    t20 = rd32(esi + 0x12cu) & 0xdfffffffu;
    wr32(esi + 0x12cu, t20);
    if (t20 >> 0x1bu & 1u)
    {
        eax = t20;
        ecx = t20 >> 0x1bu;
        goto L_100959e6;
    }
    eax = t20;
    ecx = t20 >> 0x1bu;
    if (eax >> 0x1cu & 1u)
    {
        edx = eax >> 0x1cu;
        goto L_100959e6;
    }
    edx = eax >> 0x1cu;
    if ((rd8(esi + 0x1d0u) & 4u) != 0u) goto L_100959e6;
    if (esi != ebp) goto L_10095a77;
L_100959e6: ;
    wr32(esi + 0x12cu, eax | 0x20000000u);
    if (!(rd32(esi + 0x120u) >> 0x17u & 1u)) goto L_10095a38;
    eax = rd32(esi + 0x120u) >> 0x17u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t21 = cow_cdecl(g, COW_IMG(0x100961d0u), 1, esi);
    t22 = g->ecx;
    t23 = g->edx;
    if ((uint8_t)t21 != 1u)
    {
        ecx = t22;
        goto L_10095a33;
    }
    eax = t21;
    ecx = t22;
    edx = t23;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t24 = cow_cdecl(g, COW_IMG(0x10096200u), 1, esi);
    t25 = g->ecx;
    t26 = g->edx;
    if ((uint8_t)t24 != 1u)
    {
        ecx = t25;
        goto L_10095a33;
    }
    eax = t24;
    edx = t26;
    if (((uint8_t)eax & (uint8_t)(rd32(esi + 0x130u) >> 3u)) != 0u)
    {
        ecx = rd32(esi + 0x130u) >> 3u;
        goto L_10095a33;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t27 = cow_thiscall(g, COW_IMG(0x10092900u), esi, 0);
    t28 = g->ecx;
    t29 = g->edx;
    eax = t27;
    ecx = t28;
    edx = t29;
L_10095a77: ;
    if (rd32(esi + 0xe8u) != 0u)
    {
        esi = rd32(esi + 0xe8u);
        goto L_100959b3;
    }
L_10095a85: ;
    if ((int32_t)(edi + 4u) < (int32_t)COW_IMG(0x10487020u))
    {
        edi = edi + 4u;
        goto L_100959a9;
    }
    edi = COW_IMG(0x10486020u);
L_10095a9a: ;
    if (rd32(edi) == 0u) goto L_10095b0b;
    esi = rd32(edi);
L_10095aa0: ;
    if (rd32(esi + 0x12cu) >> 0x1du & 1u)
    {
        eax = rd32(esi + 0x12cu) >> 0x1du;
    }
    else
    {
        eax = rd32(esi + 0x12cu) >> 0x1du;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t44 = cow_cdecl(g, COW_IMG(0x100961d0u), 1, esi);
        t45 = g->ecx;
        t46 = g->edx;
        if ((uint8_t)t44 == 0u)
        {
            eax = t44;
            edx = t46;
            goto L_10095ac7;
        }
        eax = t44;
        ecx = t45;
        edx = t46;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t47 = cow_cdecl(g, COW_IMG(0x10096200u), 1, esi);
        t48 = g->ecx;
        t49 = g->edx;
        if ((uint8_t)t47 != 0u)
        {
            eax = t47;
            ecx = t48;
            edx = t49;
            goto L_10095b01;
        }
        eax = t47;
        edx = t49;
L_10095ac7: ;
        t50 = rd32(esi + 0x12cu) | 0x20000000u;
        wr32(esi + 0x12cu, t50);
        g->ebx = 0xdfffffffu;
        g->edi = edi;
        g->ebp = in_ebp;
        g->eax = eax;
        g->ecx = t50;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t51 = cow_cdecl(g, COW_IMG(0x10095da0u), 3, esi, in_edi, in_esi);
        t52 = g->ecx;
        t53 = g->edx;
        g->ecx = t52;
        g->edx = t53;
        g->esp = sp0 - 8u;
        t54 = cow_call_regs(g, COW_IMG(0x10095dd0u), t51, g->ecx, g->edx, 1, 3, esi, esi, in_edi);
        t55 = g->ecx;
        t56 = g->edx;
        g->ecx = t55;
        g->edx = t56;
        g->esp = sp0 - 0xcu;
        t57 = cow_cdecl(g, COW_IMG(0x10095e30u), 3, esi, esi, esi);
        t58 = g->ecx;
        t59 = g->edx;
        g->edx = t59;
        g->esp = sp0;
        t60 = cow_thiscall_cdecl(g, COW_IMG(0x10095e90u), t58, 7, esi, esi, esi, esi, in_edi, in_esi, in_ebx);
        t61 = g->edx;
        g->ebx = 0xdfffffffu;
        g->esi = esi;
        g->edi = edi;
        g->ebp = in_ebp;
        g->esp = sp0 - 0xcu;
        t62 = cow_call_regs(g, COW_IMG(0x1008f740u), t60, esi, t61, 1, 0);
        t63 = g->ecx;
        t64 = g->edx;
        wr32(COW_IMG(0x10487e4cu), rd32(COW_IMG(0x10487e4cu)) + 1u);
        eax = t62;
        ecx = t63;
        edx = t64;
    }
L_10095b01: ;
    if (rd32(esi + 0xe8u) != 0u)
    {
        esi = rd32(esi + 0xe8u);
        goto L_10095aa0;
    }
L_10095b0b: ;
    if ((int32_t)(edi + 4u) < (int32_t)COW_IMG(0x10487020u))
    {
        edi = edi + 4u;
        goto L_10095a9a;
    }
    edi = 0u;
L_10095b18: ;
    if (rd32(COW_IMG(0x10486020u) + edi * 4u) == 0u) goto L_10095bda;
    esi = rd32(COW_IMG(0x10486020u) + edi * 4u);
L_10095b27: ;
    if (!(rd32(esi + 0x12cu) >> 0x1du & 1u))
    {
        ecx = rd32(esi + 0x12cu) >> 0x1du;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t65 = cow_thiscall_cdecl(g, COW_IMG(0x100960f0u), ecx, 3, esi, edi, in_edi);
        t66 = g->ecx;
        t67 = g->edx;
        if ((uint8_t)t65 != 0u) goto L_10095b54;
        eax = t65;
        ecx = t66;
        edx = t67;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t68 = cow_cdecl(g, COW_IMG(0x10096200u), 1, esi);
        t69 = g->edx;
        if ((uint8_t)t68 != 0u)
        {
            eax = t68;
            edx = t69;
            goto L_10095bcc;
        }
L_10095b54: ;
        t70 = rd32(esi + 0x12cu) | 0x20000000u;
        t71 = rd32(esi + 0x120u);
        wr32(esi + 0x12cu, t70);
        if (!(t71 >> 0x17u & 1u))
        {
            eax = t70;
            goto L_10095b8a;
        }
        eax = t70;
        edx = t71 >> 0x17u;
        if (rd32(esi + 0x130u) >> 3u & 1u) goto L_10095b8a;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t72 = cow_thiscall(g, COW_IMG(0x10092900u), esi, 0);
        t73 = g->edx;
        eax = t72;
        edx = t73;
    }
L_10095bcc: ;
    if (rd32(esi + 0xe8u) != 0u)
    {
        esi = rd32(esi + 0xe8u);
        goto L_10095b27;
    }
L_10095bda: ;
    if ((int32_t)(edi + 1u) < 1024)
    {
        edi = edi + 1u;
        goto L_10095b18;
    }
    t87 = rd32(COW_IMG(0x1035af38u));
    t88 = rd32(COW_IMG(0x10487e4cu));
    wr32(COW_IMG(0x10487e50u), t88);
    if ((int32_t)t88 < (int32_t)t87)
    {
        ecx = t87;
        edi = COW_IMG(0x10486020u);
        goto L_10095cb7;
    }
    edi = COW_IMG(0x10486020u);
L_10095c04: ;
    if (rd32(edi) == 0u) goto L_10095ca4;
    esi = rd32(edi);
L_10095c0e: ;
    t89 = rd32(esi + 0x12cu);
    if (!(t89 >> 0x1du & 1u))
    {
        eax = t89;
        ecx = t89 >> 0x1du;
        t90 = rd32(esi + 0x120u);
        wr32(esi + 0x12cu, eax | 0x20000000u);
        if (!(t90 >> 0x17u & 1u))
        {
            eax = eax | 0x20000000u;
            edx = t90 >> 0x17u;
            goto L_10095c44;
        }
        edx = t90 >> 0x17u;
        if (!(rd32(esi + 0x130u) >> 3u & 1u))
        {
            eax = rd32(esi + 0x130u) >> 3u;
            goto L_10095c8f;
        }
        eax = rd32(esi + 0x130u) >> 3u;
L_10095c44: ;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t91 = cow_call_regs(g, COW_IMG(0x10095dd0u), eax, g->ecx, g->edx, 1, 3, esi, in_edi, in_esi);
        t92 = g->ecx;
        t93 = g->edx;
        g->ecx = t92;
        g->edx = t93;
        g->esp = sp0 - 8u;
        t94 = cow_cdecl(g, COW_IMG(0x10095e30u), 3, esi, esi, in_edi);
        t95 = g->ecx;
        t96 = g->edx;
        g->edx = t96;
        g->esp = sp0 - 0x14u;
        cow_thiscall_cdecl(g, COW_IMG(0x10095e90u), t95, 1, esi);
        t97 = g->edx;
        if ((int32_t)rd32(COW_IMG(0x10487e4cu)) >= (int32_t)rd32(COW_IMG(0x1035af38u)))
        {
            eax = rd32(COW_IMG(0x10487e4cu));
            edx = t97;
            goto L_10095c76;
        }
        eax = rd32(COW_IMG(0x10487e4cu));
        ecx = rd32(COW_IMG(0x1035af38u));
        edx = t97;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t98 = cow_cdecl(g, COW_IMG(0x10096040u), 1, esi);
        t99 = g->edx;
        if ((uint8_t)t98 == 0u) goto L_10095c87;
        eax = t98;
        edx = t99;
L_10095c76: ;
        if ((rd32(esi + 0x130u) >> 3u & 1u) != 1u) goto L_10095c8f;
L_10095c87: ;
        wr32(esi + 0x12cu, rd32(esi + 0x12cu) & 0xdfffffffu);
    }
L_10095c96: ;
    if (rd32(esi + 0xe8u) != 0u)
    {
        esi = rd32(esi + 0xe8u);
        goto L_10095c0e;
    }
L_10095ca4: ;
    if ((int32_t)(edi + 4u) < (int32_t)COW_IMG(0x10487020u))
    {
        edi = edi + 4u;
        goto L_10095c04;
    }
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return;
L_10095a33: ;
L_10095a38: ;
    if ((int32_t)rd32(COW_IMG(0x10487e4cu)) >= (int32_t)rd32(COW_IMG(0x1035af38u)))
    {
        eax = rd32(COW_IMG(0x1035af38u));
        edx = rd32(COW_IMG(0x10487e4cu));
        wr32(esi + 0x12cu, rd32(esi + 0x12cu) & 0xdfffffffu);
    }
    else
    {
        eax = rd32(COW_IMG(0x1035af38u));
        edx = rd32(COW_IMG(0x10487e4cu));
        g->ebx = 0xdfffffffu;
        g->edi = edi;
        g->ebp = ebp;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t30 = cow_cdecl(g, COW_IMG(0x10095da0u), 3, esi, in_ebp, in_edi);
        t31 = g->ecx;
        t32 = g->edx;
        g->ecx = t31;
        g->edx = t32;
        g->esp = sp0 - 0xcu;
        t33 = cow_call_regs(g, COW_IMG(0x10095dd0u), t30, g->ecx, g->edx, 1, 3, esi, esi, in_ebp);
        t34 = g->ecx;
        t35 = g->edx;
        g->ecx = t34;
        g->edx = t35;
        g->esp = sp0 - 0x10u;
        t36 = cow_cdecl(g, COW_IMG(0x10095e30u), 3, esi, esi, esi);
        t37 = g->ecx;
        t38 = g->edx;
        g->edx = t38;
        g->esp = sp0 - 4u;
        t39 = cow_thiscall_cdecl(g, COW_IMG(0x10095e90u), t37, 7, esi, esi, esi, esi, in_ebp, in_edi, in_esi);
        t40 = g->edx;
        g->ebx = 0xdfffffffu;
        g->esi = esi;
        g->edi = edi;
        g->ebp = ebp;
        g->esp = sp0 - 0x10u;
        t41 = cow_call_regs(g, COW_IMG(0x1008f740u), t39, esi, t40, 1, 0);
        t42 = g->ecx;
        t43 = g->edx;
        wr32(COW_IMG(0x10487e4cu), rd32(COW_IMG(0x10487e4cu)) + 1u);
        eax = t41;
        ecx = t42;
        edx = t43;
    }
    goto L_10095a77;
L_10095b8a: ;
    if ((int32_t)rd32(COW_IMG(0x10487e4cu)) >= (int32_t)rd32(COW_IMG(0x1035af38u)))
    {
        edx = rd32(COW_IMG(0x10487e4cu));
        wr32(esi + 0x12cu, eax & 0xdfffffffu);
        eax = eax & 0xdfffffffu;
    }
    else
    {
        ecx = rd32(COW_IMG(0x1035af38u));
        edx = rd32(COW_IMG(0x10487e4cu));
        g->ebx = 0xdfffffffu;
        g->edi = edi;
        g->ebp = in_ebp;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t74 = cow_cdecl(g, COW_IMG(0x10095da0u), 3, esi, in_edi, in_esi);
        t75 = g->ecx;
        t76 = g->edx;
        g->ecx = t75;
        g->edx = t76;
        g->esp = sp0 - 8u;
        t77 = cow_call_regs(g, COW_IMG(0x10095dd0u), t74, g->ecx, g->edx, 1, 3, esi, esi, in_edi);
        t78 = g->ecx;
        t79 = g->edx;
        g->ecx = t78;
        g->edx = t79;
        g->esp = sp0 - 0xcu;
        t80 = cow_cdecl(g, COW_IMG(0x10095e30u), 3, esi, esi, esi);
        t81 = g->ecx;
        t82 = g->edx;
        g->edx = t82;
        g->esp = sp0;
        t83 = cow_thiscall_cdecl(g, COW_IMG(0x10095e90u), t81, 7, esi, esi, esi, esi, in_edi, in_esi, in_ebx);
        t84 = g->edx;
        g->ebx = 0xdfffffffu;
        g->esi = esi;
        g->edi = edi;
        g->ebp = in_ebp;
        g->esp = sp0 - 0xcu;
        t85 = cow_call_regs(g, COW_IMG(0x1008f740u), t83, esi, t84, 1, 0);
        t86 = g->edx;
        wr32(COW_IMG(0x10487e4cu), rd32(COW_IMG(0x10487e4cu)) + 1u);
        eax = t85;
        edx = t86;
    }
    goto L_10095bcc;
L_10095c8f: ;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x10092900u), esi, 0);
    goto L_10095c96;
L_10095cb7: ;
    if (rd32(edi) == 0u) goto L_10095d5e;
    esi = rd32(edi);
L_10095cc1: ;
    t100 = rd32(esi + 0x12cu);
    if (!(t100 >> 0x1du & 1u))
    {
        eax = t100;
        edx = t100 >> 0x1du;
        wr32(esi + 0x12cu, eax | 0x20000000u);
        if (!(rd32(esi + 0x120u) >> 0x17u & 1u))
        {
            eax = rd32(esi + 0x120u) >> 0x17u;
            goto L_10095cf7;
        }
        eax = rd32(esi + 0x120u) >> 0x17u;
        if (!(rd32(esi + 0x130u) >> 3u & 1u)) goto L_10095d49;
        ecx = rd32(esi + 0x130u) >> 3u;
L_10095cf7: ;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t101 = cow_call_regs(g, COW_IMG(0x10095dd0u), eax, g->ecx, g->edx, 1, 3, esi, in_edi, in_esi);
        t102 = g->ecx;
        t103 = g->edx;
        g->ecx = t102;
        g->edx = t103;
        g->esp = sp0 - 8u;
        t104 = cow_cdecl(g, COW_IMG(0x10095e30u), 3, esi, esi, in_edi);
        t105 = g->ecx;
        t106 = g->edx;
        g->edx = t106;
        g->esp = sp0 - 0x14u;
        cow_thiscall_cdecl(g, COW_IMG(0x10095e90u), t105, 1, esi);
        t107 = g->edx;
        if ((int32_t)rd32(COW_IMG(0x10487e4cu)) >= (int32_t)rd32(COW_IMG(0x1035af38u)))
        {
            eax = rd32(COW_IMG(0x10487e4cu));
            goto L_10095d29;
        }
        eax = rd32(COW_IMG(0x10487e4cu));
        ecx = rd32(COW_IMG(0x1035af38u));
        edx = t107;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t108 = cow_cdecl(g, COW_IMG(0x10096040u), 1, esi);
        t109 = g->edx;
        if ((uint8_t)t108 == 0u)
        {
            eax = t108;
            edx = t109;
            goto L_10095d3a;
        }
        eax = t108;
L_10095d29: ;
        if ((rd32(esi + 0x130u) >> 3u & 1u) != 1u)
        {
            edx = (rd32(esi + 0x130u) >> 3u & 0xffffff00u) | (rd32(esi + 0x130u) >> 3u & 1u);
            goto L_10095d49;
        }
        edx = (rd32(esi + 0x130u) >> 3u & 0xffffff00u) | (rd32(esi + 0x130u) >> 3u & 1u);
L_10095d3a: ;
        g->ebx = 0xdfffffffu;
        g->esi = esi;
        g->edi = edi;
        g->ebp = in_ebp;
        g->esp = sp0 - 0xcu;
        cow_call_regs(g, COW_IMG(0x1008f740u), eax, esi, edx, 1, 0);
        t110 = g->ecx;
        wr32(COW_IMG(0x10487e4cu), rd32(COW_IMG(0x10487e4cu)) + 1u);
        ecx = t110;
    }
L_10095d50: ;
    if (rd32(esi + 0xe8u) != 0u)
    {
        esi = rd32(esi + 0xe8u);
        goto L_10095cc1;
    }
L_10095d5e: ;
    if ((int32_t)(edi + 4u) < (int32_t)COW_IMG(0x10487020u))
    {
        edi = edi + 4u;
        goto L_10095cb7;
    }
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return;
L_10095d49: ;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x10092900u), esi, 0);
    t111 = g->ecx;
    ecx = t111;
    goto L_10095d50;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10095900(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10095900(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
