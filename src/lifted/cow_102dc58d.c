/* f_0x102dc58d - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102dc58d(Guest* g)
{
    double d107;
    double d108;
    double d109;
    double d110;
    double d114;
    double d46;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_15c;
    uint32_t loc_160;
    uint32_t loc_164;
    uint32_t loc_18;
    uint32_t loc_20;
    uint32_t loc_4;
    double loc_50_d;
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
    uint32_t t11;
    uint32_t t111;
    uint32_t t112;
    uint32_t t113;
    uint32_t t115;
    uint32_t t116;
    uint32_t t117;
    uint32_t t118;
    uint32_t t119;
    uint32_t t12;
    uint32_t t120;
    uint32_t t121;
    uint32_t t122;
    uint32_t t123;
    uint32_t t124;
    uint32_t t125;
    uint32_t t126;
    uint32_t t127;
    uint32_t t128;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 416u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x15cu, in_ebx);
    wr32(sp0 - 0x160u, in_esi);
    wr32(sp0 - 0x164u, in_edi);
    wr32(sp0 - 0x168u, arg2);
    wr32(sp0 - 0x16cu, 0u);
    wr32(sp0 - 0x170u, arg1);
    wr32(sp0 - 0x38u, self);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x20u, 0u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x164u;
    t1 = cow_cdecl(g, COW_IMG(0x102f2029u), 3, arg1, 0u, arg2);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        edx = t3;
        goto L_102dc6b8;
    }
    ecx = t2;
    edx = t3;
    wr32(sp0 - 0x168u, COW_IMG(0x102dc58cu));
    wr32(sp0 - 0x16cu, COW_IMG(0x102dc580u));
    wr32(sp0 - 0x170u, 0u);
    wr32(sp0 - 0x174u, COW_IMG(0x10346138u));
    g->esi = 0u;
    g->edx = edx;
    g->esp = sp0 - 0x164u;
    t4 = cow_thiscall_cdecl(g, COW_IMG(0x102ef2b1u), ecx, 4, COW_IMG(0x10346138u), 0u, COW_IMG(0x102dc580u), COW_IMG(0x102dc58cu));
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 8u, t4);
    if (t4 == 0u)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        loc_8 = t4;
        loc_20 = 0u;
        goto L_102dc9f0;
    }
    eax = t4;
    ecx = t5;
    edx = t6;
    loc_8 = t4;
    wr32(sp0 - 0x168u, eax);
    g->edx = edx;
    g->esp = sp0 - 0x164u;
    t7 = cow_cdecl(g, COW_IMG(0x102f2163u), 1, eax);
    t8 = g->edx;
    wr32(sp0 - 0xcu, t7);
    if (t7 == 0u)
    {
        eax = t7;
        ecx = rd32(sp0 - 0x168u);
        edx = t8;
        goto L_102dc9f0;
    }
    ecx = rd32(sp0 - 0x168u);
    edx = t8;
    loc_c = t7;
    wr32(sp0 - 0x168u, 0u);
    t9 = rd32(sp0 - 8u);
    wr32(sp0 - 0x16cu, t9);
    g->esi = 0u;
    g->ebp = sp0 - 4u;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t10 = cow_cdecl(g, COW_IMG(0x10316224u), 1, t9);
    t11 = g->edx;
    if (t10 != 0u)
    {
        eax = t10;
        ecx = 0u;
        edx = t11;
        goto L_102dc834;
    }
    edx = t11;
    wr32(sp0 - 0x48u, arg1);
    wr32(sp0 - 0x44u, arg2);
    wr32(sp0 - 0x168u, COW_IMG(0x102dc53du));
    wr32(sp0 - 0x16cu, sp0 - 0x48u);
    t12 = rd32(sp0 - 8u);
    wr32(sp0 - 0x170u, t12);
    g->eax = sp0 - 0x48u;
    g->ecx = 0u;
    g->esp = sp0 - 0x15cu;
    t13 = cow_call_regs(g, COW_IMG(0x102f1fb7u), g->eax, g->ecx, edx, 1, 5, t12, sp0 - 0x48u, COW_IMG(0x102dc53du), rd32(sp0 - 0x164u), rd32(sp0 - 0x160u));
    t14 = g->ecx;
    t15 = g->edx;
    t16 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x174u, t16);
    t17 = rd32(sp0 - 8u);
    wr32(sp0 - 0x178u, t17);
    g->ecx = t14;
    g->esp = sp0 - 0x16cu;
    cow_call_regs(g, COW_IMG(0x102ef474u), t13, g->ecx, t15, 1, 3, t17, t16, rd32(sp0 - 0x170u));
    t18 = g->ecx;
    t19 = g->edx;
    wr32(sp0 - 0x17cu, 0u);
    wr32(sp0 - 0x180u, 0u);
    wr32(sp0 - 0x184u, 0u);
    wr32(sp0 - 0x188u, sp0 - 0x30u);
    wr32(sp0 - 0x18cu, sp0 - 0x28u);
    wr32(sp0 - 0x190u, sp0 - 0x1cu);
    wr32(sp0 - 0x194u, sp0 - 0x34u);
    t20 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x198u, t20);
    t21 = rd32(sp0 - 8u);
    wr32(sp0 - 0x19cu, t21);
    g->ecx = t18;
    g->edx = t19;
    g->esp = sp0 - 0x178u;
    cow_cdecl(g, COW_IMG(0x102efdeau), 9, t21, t20, sp0 - 0x34u, sp0 - 0x1cu, sp0 - 0x28u, sp0 - 0x30u, 0u, 0u, 0u);
    t22 = g->ecx;
    t23 = g->edx;
    if (rd32(sp0 - 0x30u) == 0u)
    {
        eax = rd32(sp0 - 0x30u);
        ecx = t22;
        edx = t23;
        esi = rd32(sp0 - 0x38u);
        wr32(esi, 0x32u);
    }
    else
    {
        eax = rd32(sp0 - 0x30u);
        ecx = t22;
        edx = t23;
        esi = rd32(sp0 - 0x38u);
        if (eax == 2u)
        {
            eax = eax - 2u;
            wr32(esi, 0x14u);
        }
        else
        {
            eax = eax - 2u;
            if (eax == 1u)
            {
                eax = eax - 1u;
                wr32(esi, 0x29u);
            }
            else
            {
                eax = eax - 1u;
                if (eax == 1u)
                {
                    eax = eax - 1u;
                    wr32(esi, 0x33u);
                }
                else
                {
                    eax = eax - 1u;
                    if (eax != 2u)
                    {
                        eax = eax - 2u;
                    }
                    else
                    {
                        eax = eax - 2u;
                        wr32(esi, 0x15u);
                    }
                }
            }
        }
    }
    if (rd32(sp0 - 0x28u) != 0x10u) goto L_102dc6d8;
    t24 = rd32(sp0 - 8u);
    wr32(sp0 - 0x168u, t24);
    g->edx = edx;
    g->esp = sp0 - 0x164u;
    cow_cdecl(g, COW_IMG(0x102eff5eu), 1, t24);
    t25 = g->edx;
    if (rd32(esi) == 0x14u)
    {
        eax = rd32(esi) - 0x14u;
        ecx = rd32(sp0 - 0x168u);
        edx = t25;
        goto L_102dc6d6;
    }
    eax = rd32(esi) - 0x14u;
    ecx = rd32(sp0 - 0x168u);
    edx = t25;
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_102dc6ce;
    }
    eax = eax - 1u;
    if (eax == 0x1du)
    {
        eax = eax - 0x1du;
        goto L_102dc6c6;
    }
    eax = eax - 0x1du;
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_102dc6c2;
    }
L_102dc6b8: ;
    eax = 0x80004005u;
    loc_4 = in_ebp;
    loc_15c = in_ebx;
    loc_160 = in_esi;
    loc_164 = in_edi;
L_102dcb1c: ;
    g->ebx = loc_15c;
    g->esi = loc_160;
    g->edi = loc_164;
    g->ebp = loc_4;
    g->edx = edx;
    return eax;
L_102dc6c2: ;
    wr32(esi, 0x36314c41u);
L_102dc6d8: ;
    if ((int32_t)rd32(sp0 - 0x28u) < 8)
    {
        t26 = rd32(sp0 - 8u);
        wr32(sp0 - 0x168u, t26);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x164u;
        t27 = cow_cdecl(g, COW_IMG(0x102eff70u), 1, t26);
        t28 = g->edx;
        eax = t27;
        ecx = rd32(sp0 - 0x168u);
        edx = t28;
    }
    if (rd32(sp0 - 0x30u) == 0u)
    {
        if ((int32_t)rd32(sp0 - 0x28u) < 8)
        {
            t29 = rd32(sp0 - 8u);
            wr32(sp0 - 0x168u, t29);
            g->edx = edx;
            g->esp = sp0 - 0x164u;
            cow_cdecl(g, COW_IMG(0x102f0817u), 1, t29);
            t30 = g->edx;
            ecx = rd32(sp0 - 0x168u);
            edx = t30;
        }
    }
    wr32(sp0 - 0x168u, sp0 - 0x3cu);
    t31 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x16cu, t31);
    t32 = rd32(sp0 - 8u);
    wr32(sp0 - 0x170u, t32);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x164u;
    t33 = cow_cdecl(g, COW_IMG(0x102efdbfu), 3, t32, t31, sp0 - 0x3cu);
    t34 = g->ecx;
    t35 = g->edx;
    if (t33 == 0u)
    {
        ecx = t34;
        edx = t35;
        wr32(sp0 - 0x168u, sp0 - 0x58u);
        t41 = rd32(sp0 - 0xcu);
        wr32(sp0 - 0x16cu, t41);
        t42 = rd32(sp0 - 8u);
        wr32(sp0 - 0x170u, t42);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x164u;
        t43 = cow_cdecl(g, COW_IMG(0x102efd96u), 3, t42, t41, sp0 - 0x58u);
        t44 = g->ecx;
        t45 = g->edx;
        if (t43 == 0u)
        {
            ecx = t44;
            edx = t45;
        }
        else
        {
            eax = t43;
            ecx = t44;
            edx = t45;
            d46 = rdf64(sp0 - 0x58u);
            wrf64(sp0 - 0x16cu, d46);
            wrf64(sp0 - 0x174u, rdf64(COW_IMG(0x10346130u)));
            t47 = rd32(sp0 - 8u);
            wr32(sp0 - 0x178u, t47);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x168u;
            cow_call_regs(g, COW_IMG(0x102f07cfu), eax, g->ecx, g->edx, 1, 4, t47, cow_dlo(rdf64(COW_IMG(0x10346130u))), cow_dhi(rdf64(COW_IMG(0x10346130u))), cow_dlo(d46));
            t48 = g->ecx;
            t49 = g->edx;
            ecx = t48;
            edx = t49;
        }
    }
    else
    {
        eax = t33;
        ecx = t34;
        edx = t35;
        t36 = rd32(sp0 - 0x3cu);
        wr32(sp0 - 0x168u, t36);
        t37 = rd32(sp0 - 0xcu);
        wr32(sp0 - 0x16cu, t37);
        t38 = rd32(sp0 - 8u);
        wr32(sp0 - 0x170u, t38);
        g->edx = edx;
        g->esp = sp0 - 0x164u;
        cow_thiscall_cdecl(g, COW_IMG(0x102f1ee1u), ecx, 3, t38, t37, t36);
        t39 = g->ecx;
        t40 = g->edx;
        ecx = t39;
        edx = t40;
    }
    if (rd32(esi) != 0x29u)
    {
        wr32(sp0 - 0x168u, 0x10u);
        t50 = rd32(sp0 - 0xcu);
        wr32(sp0 - 0x16cu, t50);
        t51 = rd32(sp0 - 8u);
        wr32(sp0 - 0x170u, t51);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x164u;
        t52 = cow_cdecl(g, COW_IMG(0x102efd3au), 3, t51, t50, 0x10u);
        t53 = g->ecx;
        t54 = g->edx;
        if (t52 == 0u)
        {
            ecx = t53;
            edx = t54;
        }
        else
        {
            eax = t52;
            ecx = t53;
            edx = t54;
            t55 = rd32(sp0 - 8u);
            wr32(sp0 - 0x168u, t55);
            g->edx = edx;
            g->esp = sp0 - 0x164u;
            cow_cdecl(g, COW_IMG(0x102f0820u), 1, t55);
            t56 = g->edx;
            if (rd32(esi) == 0x14u)
            {
                ecx = rd32(sp0 - 0x168u);
                edx = t56;
                wr32(esi, 0x15u);
            }
            else
            {
                eax = rd32(esi);
                ecx = rd32(sp0 - 0x168u);
                edx = t56;
                if (eax == 0x32u)
                {
                    wr32(esi, 0x33u);
                }
                else
                {
                    if (eax == 0x36314c20u)
                    {
                        wr32(esi, 0x36314c41u);
                    }
                    else
                    {
                        if (eax == 0x36315220u)
                        {
                            wr32(esi, 0x36315241u);
                        }
                    }
                }
            }
        }
    }
    if (rd32(esi) == 0x14u)
    {
        eax = rd32(esi);
        goto L_102dc7c3;
    }
    eax = rd32(esi);
    if (eax == 0x36315220u) goto L_102dc7c3;
    if (eax == 0x15u) goto L_102dc7c3;
    if (eax != 0x36315241u) goto L_102dc7cc;
L_102dc7c3: ;
    t57 = rd32(sp0 - 8u);
    wr32(sp0 - 0x168u, t57);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x164u;
    t58 = cow_cdecl(g, COW_IMG(0x102eff55u), 1, t57);
    t59 = g->edx;
    eax = t58;
    ecx = rd32(sp0 - 0x168u);
    edx = t59;
L_102dc7cc: ;
    if (rd32(esi) == 0x14u)
    {
        wr32(sp0 - 0x168u, 1u);
        wr32(sp0 - 0x16cu, 0xffu);
        t60 = rd32(sp0 - 8u);
        wr32(sp0 - 0x170u, t60);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x164u;
        t61 = cow_thiscall_cdecl(g, COW_IMG(0x102effbbu), ecx, 3, t60, 0xffu, 1u);
        t62 = g->ecx;
        t63 = g->edx;
        wr32(esi, 0x16u);
        eax = t61;
        ecx = t62;
        edx = t63;
    }
    t64 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x168u, t64);
    t65 = rd32(sp0 - 8u);
    wr32(sp0 - 0x16cu, t65);
    g->esp = sp0 - 0x160u;
    cow_call_regs(g, COW_IMG(0x102ef5e7u), g->eax, ecx, edx, 1, 3, t65, t64, rd32(sp0 - 0x164u));
    wr32(sp0 - 0x168u, 4u);
    wr32(sp0 - 0x168u, 3u);
    if ((int32_t)rd32(esi) > 51)
    {
        eax = rd32(esi);
        goto L_102dc83e;
    }
    eax = rd32(esi);
    zf = rd32(esi) == 0x33u;
    if (zf) goto L_102dc860;
    if (eax == 0x14u) goto L_102dc85b;
    eax = eax - 0x14u;
    if (eax == 1u) goto L_102dc856;
    eax = eax - 1u;
    if (eax == 1u) goto L_102dc856;
    eax = eax - 1u;
    if (eax == 0x13u) goto L_102dc81c;
    eax = eax - 0x13u;
    if (eax != 9u) goto L_102dc81f;
L_102dc81c: ;
    wr32(sp0 - 0x10u, 1u);
    loc_10 = 1u;
L_102dc81f: ;
    t66 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x168u, t66);
    t67 = rd32(sp0 - 8u);
    wr32(sp0 - 0x16cu, t67);
    g->edx = 4u;
    g->esp = sp0 - 0x164u;
    t68 = cow_cdecl(g, COW_IMG(0x102efd6au), 2, t67, t66);
    t69 = g->edx;
    if (rd32(sp0 - 0x10u) == (uint8_t)t68)
    {
        ecx = rd32(sp0 - 0x168u);
        edx = t69;
        goto L_102dc869;
    }
    eax = (uint8_t)t68;
    ecx = rd32(sp0 - 0x168u);
    edx = t69;
L_102dc834: ;
    esi = 0x80004005u;
L_102dcaf4: ;
    if (loc_8 != 0u)
    {
        wr32(sp0 - 0x168u, 0u);
        wr32(sp0 - 0x16cu, sp0 - 0xcu);
        wr32(sp0 - 0x170u, sp0 - 8u);
        g->eax = sp0 - 8u;
        g->esp = sp0 - 0x164u;
        t125 = cow_call_regs(g, COW_IMG(0x102efcb9u), g->eax, ecx, edx, 1, 3, sp0 - 8u, sp0 - 0xcu, 0u);
        t126 = g->ecx;
        t127 = g->edx;
        eax = t125;
        ecx = t126;
        edx = t127;
    }
    if (loc_20 != 0u)
    {
        wr32(sp0 - 0x168u, loc_20);
        g->esp = sp0 - 0x164u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, loc_20);
        t128 = g->edx;
        edx = t128;
    }
    eax = esi;
    goto L_102dcb1c;
L_102dc6c6: ;
    wr32(esi, 0x36314c20u);
    goto L_102dc6d8;
L_102dc6ce: ;
    wr32(esi, 0x36315241u);
    goto L_102dc6d8;
L_102dc6d6: ;
    wr32(esi, 0x36315220u);
    goto L_102dc6d8;
L_102dc83e: ;
    if (eax == 0x36314c20u) goto L_102dc81c;
    eax = eax - 0x36314c20u;
    if (eax == 0x21u) goto L_102dc860;
    eax = eax - 0x21u;
    if (eax == 0x5dfu) goto L_102dc85b;
    eax = eax - 0x5dfu;
    if (eax != 0x21u) goto L_102dc81f;
L_102dc856: ;
    wr32(sp0 - 0x10u, 4u);
    loc_10 = 4u;
    goto L_102dc81f;
L_102dc85b: ;
    wr32(sp0 - 0x10u, 3u);
    loc_10 = 3u;
    goto L_102dc81f;
L_102dc860: ;
    wr32(sp0 - 0x10u, 2u);
    loc_10 = 2u;
    goto L_102dc81f;
L_102dc869: ;
    t70 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x168u, t70);
    t71 = rd32(sp0 - 0x34u);
    wr32(esi + 0xcu, t71);
    t72 = rd32(sp0 - 8u);
    wr32(sp0 - 0x16cu, t72);
    t73 = rd32(sp0 - 0x1cu);
    wr32(esi + 0x10u, t73);
    wr32(esi + 0x14u, 1u);
    g->edx = edx;
    g->esp = sp0 - 0x164u;
    t74 = cow_cdecl(g, COW_IMG(0x102efd54u), 2, t72, t70);
    t75 = g->edx;
    t76 = rd32(sp0 - 0x168u);
    t77 = rd32(esi + 0x40u);
    wr32(esi + 0x30u, t74);
    wr32(esi + 0x34u, 0u);
    if (t77 == 0u)
    {
        eax = t74;
        ecx = t76;
        edx = t75;
        goto L_102dcaf2;
    }
    eax = t74;
    ecx = t76;
    edx = t75;
    t78 = eax * rd32(sp0 - 0x1cu);
    wr32(sp0 - 0x168u, t78);
    g->esp = sp0 - 0x15cu;
    t79 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, t78, rd32(sp0 - 0x164u), rd32(sp0 - 0x160u));
    t80 = g->edx;
    t81 = rd32(sp0 - 0x168u);
    wr32(esi + 4u, t79);
    if (t79 == 0u)
    {
        eax = t79;
        ecx = t81;
        edx = t80;
        goto L_102dc9f0;
    }
    ecx = t81;
    edx = t80;
    t82 = rd32(sp0 - 0x1cu) << 2u;
    wr32(sp0 - 0x168u, t82);
    wr32(esi + 0x38u, 1u);
    g->esp = sp0 - 0x15cu;
    t83 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, t82, rd32(sp0 - 0x164u), rd32(sp0 - 0x160u));
    t84 = g->edx;
    wr32(sp0 - 0x20u, t83);
    if (t83 == 0u)
    {
        eax = t83;
        ecx = rd32(sp0 - 0x168u);
        edx = t84;
        loc_20 = t83;
        goto L_102dc9f0;
    }
    ecx = rd32(sp0 - 0x168u);
    edx = t84;
    loc_20 = t83;
    if (rd32(sp0 - 0x1cu) == 0u)
    {
        eax = 0u;
        goto L_102dc8e3;
    }
    eax = 0u;
L_102dc8ce: ;
    t85 = rd32(esi + 4u) + rd32(esi + 0x30u) * eax;
    wr32(eax * 4u + loc_20, t85);
    if (eax + 1u < rd32(sp0 - 0x1cu))
    {
        eax = eax + 1u;
        goto L_102dc8ce;
    }
    eax = eax + 1u;
    ecx = t85;
    edx = loc_20;
L_102dc8e3: ;
    wr32(sp0 - 0x168u, loc_20);
    t86 = rd32(sp0 - 8u);
    wr32(sp0 - 0x16cu, t86);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x160u;
    t87 = cow_thiscall_cdecl(g, COW_IMG(0x102efa3au), ecx, 3, t86, loc_20, rd32(sp0 - 0x164u));
    t88 = g->edx;
    if (rd32(esi) != 0x29u)
    {
        eax = t87;
        ecx = rd32(sp0 - 0x168u);
        edx = t88;
        goto L_102dcaf2;
    }
    ecx = rd32(sp0 - 0x168u);
    edx = t88;
    wr32(sp0 - 0x168u, 8u);
    t89 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x16cu, t89);
    wr32(sp0 - 0x2cu, 0u);
    t90 = rd32(sp0 - 8u);
    wr32(sp0 - 0x170u, t90);
    wr32(sp0 - 0x24u, 0u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x164u;
    t91 = cow_cdecl(g, COW_IMG(0x102efd3au), 3, t90, t89, 8u);
    t92 = g->ecx;
    t93 = g->edx;
    if (t91 == 0u)
    {
        ecx = t92;
        edx = t93;
    }
    else
    {
        ecx = t92;
        edx = t93;
        wr32(sp0 - 0x168u, sp0 - 0x24u);
        wr32(sp0 - 0x16cu, sp0 - 0x14u);
        t94 = rd32(sp0 - 0xcu);
        wr32(sp0 - 0x170u, t94);
        t95 = rd32(sp0 - 8u);
        wr32(sp0 - 0x174u, t95);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x164u;
        cow_cdecl(g, COW_IMG(0x102efebbu), 4, t95, t94, sp0 - 0x14u, sp0 - 0x24u);
        t96 = g->ecx;
        t97 = g->edx;
        ecx = t96;
        edx = t97;
    }
    wr32(sp0 - 0x168u, 0x10u);
    t98 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x16cu, t98);
    t99 = rd32(sp0 - 8u);
    wr32(sp0 - 0x170u, t99);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x164u;
    t100 = cow_cdecl(g, COW_IMG(0x102efd3au), 3, t99, t98, 0x10u);
    t101 = g->ecx;
    t102 = g->edx;
    if (t100 == 0u)
    {
        eax = t100;
        ecx = t101;
    }
    else
    {
        ecx = t101;
        edx = t102;
        wr32(sp0 - 0x168u, 0u);
        wr32(sp0 - 0x16cu, sp0 - 0x2cu);
        wr32(sp0 - 0x170u, sp0 - 0x40u);
        t103 = rd32(sp0 - 0xcu);
        wr32(sp0 - 0x174u, t103);
        t104 = rd32(sp0 - 8u);
        wr32(sp0 - 0x178u, t104);
        g->ecx = ecx;
        g->esp = sp0 - 0x164u;
        t105 = cow_cdecl(g, COW_IMG(0x102efeeeu), 5, t104, t103, sp0 - 0x40u, sp0 - 0x2cu, 0u);
        t106 = g->ecx;
        eax = t105;
        ecx = t106;
    }
    d107 = (double)rdf32(rd32(sp0 - 8u) + 0x130u);
    if ((cow_fsw(g, d107, rdf64(COW_IMG(0x10340b18u)), 0u) >> 8u & 0x41u) != 0u)
    {
        edx = rd32(sp0 - 8u);
        goto L_102dc9cd;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d107, rdf64(COW_IMG(0x10340b18u)), 0u);
    edx = rd32(sp0 - 8u);
    d108 = (double)rdf32(edx + 0x134u);
    if ((cow_fsw(g, d108, rdf64(COW_IMG(0x10340b18u)), 0u) >> 8u & 0x41u) != 0u)
    {
        ecx = edx + 0x134u;
        goto L_102dc9cd;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d108, rdf64(COW_IMG(0x10340b18u)), 0u);
    ecx = edx + 0x134u;
    wr32(sp0 - 0x18u, 0u);
    d109 = fr(g, rdf64(COW_IMG(0x1032a100u)) / fr(g, (double)rdf32(ecx) * (double)rdf32(edx + 0x130u)));
    wrf64(sp0 - 0x50u, d109);
    loc_18 = 0u;
    loc_50_d = d109;
L_102dc993: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    d110 = fr(g, (double)(int32_t)loc_18 * rdf64(COW_IMG(0x1033cd88u)));
    fpush(g, loc_50_d);
    g->esp = sp0 - 0x148u;
    t111 = cow_cdecl(g, COW_IMG(0x10312cd0u), 7, rd32(sp0 - 0x164u), rd32(sp0 - 0x160u), rd32(sp0 - 0x15cu), rd32(sp0 - 0x158u), rd32(sp0 - 0x154u), rd32(sp0 - 0x150u), rd32(sp0 - 0x14cu));
    t112 = g->ecx;
    t113 = g->edx;
    g->edx = t113;
    d114 = fr(g, fr(g, d110 * rdf64(COW_IMG(0x10342dc8u))) + rdf64(COW_IMG(0x1032ab90u)));
    fpush(g, d114);
    g->esp = sp0 - 0x164u;
    t115 = cow_call_regs(g, COW_IMG(0x10311c6cu), t111, g->ecx, g->edx, 1, 0);
    t116 = g->edx;
    t117 = rd32(sp0 - 0x18u) + 1u;
    wr32(sp0 - 0x18u, t117);
    t118 = rd32(sp0 - 0x18u);
    wr8(sp0 + t118 - 0x158u, (uint8_t)t115);
    if ((int32_t)t117 < 256)
    {
        eax = t115;
        ecx = t118;
        edx = t116;
        loc_18 = t117;
        goto L_102dc993;
    }
    ecx = t118;
    edx = t116;
L_102dc9de: ;
    wr32(sp0 - 0x168u, 0x400u);
    g->esp = sp0 - 0x15cu;
    t119 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x400u, rd32(sp0 - 0x164u), rd32(sp0 - 0x160u));
    t120 = g->edx;
    wr32(esi + 8u, t119);
    if (t119 != 0u)
    {
        edx = t120;
        goto L_102dc9fa;
    }
    eax = t119;
    ecx = 0x400u;
    edx = t120;
L_102dc9f0: ;
    esi = 0x8007000eu;
    goto L_102dcaf4;
L_102dc9cd: ;
    eax = 0u;
L_102dc9cf: ;
    wr8(eax + sp0 - 0x158u, (uint8_t)eax);
    if ((int32_t)(eax + 1u) < 256)
    {
        eax = eax + 1u;
        goto L_102dc9cf;
    }
    goto L_102dc9de;
L_102dc9fa: ;
    t121 = rd32(sp0 - 0x2cu);
    wr32(esi + 0x3cu, 1u);
    if ((int32_t)t121 <= 0)
    {
        eax = 0u;
        ecx = 0x400u;
    }
    else
    {
        eax = 0u;
        edi = 0u;
L_102dca06: ;
        wr8(eax * 4u + rd32(esi + 8u), rd8(sp0 + rd8(edi + rd32(sp0 - 0x14u)) - 0x158u));
        wr8(eax * 4u + rd32(esi + 8u) + 1u, rd8(sp0 + rd8(edi + rd32(sp0 - 0x14u) + 1u) - 0x158u));
        wr8(eax * 4u + rd32(esi + 8u) + 2u, rd8(sp0 + rd8(edi + rd32(sp0 - 0x14u) + 2u) - 0x158u));
        t122 = rd32(esi + 8u);
        wr8(eax * 4u + t122 + 3u, rd8(eax + rd32(sp0 - 0x40u)));
        if ((int32_t)(eax + 1u) < (int32_t)rd32(sp0 - 0x2cu))
        {
            eax = eax + 1u;
            edi = edi + 3u;
            goto L_102dca06;
        }
        ecx = eax << 2u;
        eax = eax + 1u;
        edx = t122;
    }
    if ((int32_t)eax < (int32_t)rd32(sp0 - 0x24u))
    {
        edi = eax * 3u;
L_102dca69: ;
        wr8(eax * 4u + rd32(esi + 8u), rd8(sp0 + rd8(edi + rd32(sp0 - 0x14u)) - 0x158u));
        wr8(eax * 4u + rd32(esi + 8u) + 1u, rd8(sp0 + rd8(edi + rd32(sp0 - 0x14u) + 1u) - 0x158u));
        wr8(eax * 4u + rd32(esi + 8u) + 2u, rd8(sp0 + rd8(edi + rd32(sp0 - 0x14u) + 2u) - 0x158u));
        t123 = rd32(esi + 8u);
        wr8(eax * 4u + t123 + 3u, rd8(eax * 4u + t123 + 3u) | 0xffu);
        if ((int32_t)(eax + 1u) < (int32_t)rd32(sp0 - 0x24u))
        {
            eax = eax + 1u;
            edi = edi + 3u;
            goto L_102dca69;
        }
        ecx = eax << 2u;
        eax = eax + 1u;
        edx = t123;
    }
    if ((int32_t)eax < 256)
    {
        eax = eax << 2u;
L_102dcac9: ;
        wr8(eax + rd32(esi + 8u), rd8(eax + rd32(esi + 8u)) | 0xffu);
        wr8(eax + rd32(esi + 8u) + 1u, rd8(eax + rd32(esi + 8u) + 1u) | 0xffu);
        wr8(eax + rd32(esi + 8u) + 2u, rd8(eax + rd32(esi + 8u) + 2u) | 0xffu);
        t124 = rd32(esi + 8u);
        wr8(eax + t124 + 3u, rd8(eax + t124 + 3u) | 0xffu);
        if ((int32_t)(eax + 4u) < 1024)
        {
            eax = eax + 4u;
            goto L_102dcac9;
        }
        eax = eax + 4u;
        ecx = t124;
    }
L_102dcaf2: ;
    esi = 0u;
    goto L_102dcaf4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102dc58d(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102dc58d(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
