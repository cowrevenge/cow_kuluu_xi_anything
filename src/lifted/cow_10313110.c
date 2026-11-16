/* f_0x10313110 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10313110(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_28;
    uint32_t loc_2c;
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 100u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, 0xffffffffu);
    wr32(sp0 - 0xcu, COW_IMG(0x1034a1c0u));
    wr32(sp0 - 0x10u, COW_IMG(0x1031d0acu));
    wr32(sp0 - 0x14u, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0x14u);
    wr32(sp0 - 0x40u, in_ebx);
    wr32(sp0 - 0x44u, in_esi);
    wr32(sp0 - 0x48u, in_edi);
    if (arg1 != 0u)
    {
        eax = t1;
        loc_14 = t1;
        if (rd32(sp0 + 8u) != 0u)
        {
            esi = rd32(sp0 + 8u);
            goto L_1031315d;
        }
        wr32(sp0 - 0x4cu, arg1);
        g->esp = sp0 - 0x40u;
        cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, self, in_edx, 1, 3, arg1, in_edi, in_esi);
        t5 = g->edx;
        edx = t5;
L_1031342e: ;
        eax = 0u;
    }
    else
    {
        eax = t1;
        loc_14 = t1;
        t2 = rd32(sp0 + 8u);
        wr32(sp0 - 0x4cu, t2);
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 0x40u;
        t3 = cow_cdecl(g, COW_IMG(0x10312fd6u), 3, t2, in_edi, in_esi);
        t4 = g->edx;
        eax = t3;
        edx = t4;
    }
L_10313430: ;
    wr32(g->fs_base, loc_14);
    g->esi = in_esi;
    g->edx = edx;
    return eax;
L_1031315d: ;
    if (rd32(COW_IMG(0x109f8408u)) != 3u)
    {
        eax = rd32(COW_IMG(0x109f8408u));
        goto L_103132a4;
    }
    eax = rd32(COW_IMG(0x109f8408u));
    ecx = self;
    edx = in_edx;
L_1031316b: ;
    wr32(sp0 - 0x28u, 0u);
    if (esi > 0xffffffe0u)
    {
        loc_28 = 0u;
    }
    else
    {
        wr32(sp0 - 0x4cu, 9u);
        g->eax = eax;
        g->esp = sp0 - 0x40u;
        t6 = cow_call_regs(g, COW_IMG(0x1031d016u), g->eax, ecx, edx, 1, 3, 9u, in_edi, in_esi);
        t7 = g->edx;
        wr32(sp0 - 8u, 0u);
        wr32(sp0 - 0x4cu, arg1);
        g->edx = t7;
        g->esp = sp0 - 0x48u;
        t8 = cow_cdecl(g, COW_IMG(0x1031b835u), 1, arg1);
        t9 = g->edx;
        wr32(sp0 - 0x2cu, t8);
        if (t8 == 0u)
        {
            eax = t8;
            ecx = arg1;
            edx = t9;
            loc_2c = t8;
            loc_28 = 0u;
        }
        else
        {
            eax = t8;
            edx = t9;
            loc_2c = t8;
            if (esi > rd32(COW_IMG(0x109f8400u)))
            {
                ecx = arg1;
            }
            else
            {
                wr32(sp0 - 0x4cu, esi);
                wr32(sp0 - 0x50u, arg1);
                wr32(sp0 - 0x54u, eax);
                g->eax = eax;
                g->ecx = arg1;
                g->edx = edx;
                g->esp = sp0 - 0x40u;
                t10 = cow_cdecl(g, COW_IMG(0x1031c03eu), 5, eax, arg1, esi, rd32(sp0 - 0x48u), rd32(sp0 - 0x44u));
                t11 = g->ecx;
                t12 = g->edx;
                if (t10 == 0u)
                {
                    eax = t10;
                    ecx = t11;
                    edx = t12;
                    wr32(sp0 - 0x4cu, esi);
                    g->esi = esi;
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x40u;
                    t13 = cow_cdecl(g, COW_IMG(0x1031bb89u), 3, esi, rd32(sp0 - 0x48u), rd32(sp0 - 0x44u));
                    t14 = g->edx;
                    wr32(sp0 - 0x28u, t13);
                    if (t13 == 0u)
                    {
                        eax = t13;
                        ecx = rd32(sp0 - 0x4cu);
                        edx = t14;
                        loc_28 = t13;
                    }
                    else
                    {
                        ecx = rd32(sp0 - 0x4cu);
                        edx = t14;
                        loc_28 = t13;
                        t15 = rd32(arg1 - 4u) - 1u;
                        wr32(sp0 - 0x24u, t15);
                        if (t15 < esi)
                        {
                            eax = t15;
                        }
                        else
                        {
                            eax = esi;
                        }
                        wr32(sp0 - 0x4cu, eax);
                        wr32(sp0 - 0x50u, arg1);
                        wr32(sp0 - 0x54u, loc_28);
                        g->eax = eax;
                        g->ecx = ecx;
                        g->edx = edx;
                        g->esp = sp0 - 0x40u;
                        t16 = cow_cdecl(g, COW_IMG(0x103169e0u), 5, loc_28, arg1, eax, rd32(sp0 - 0x48u), rd32(sp0 - 0x44u));
                        t17 = g->ecx;
                        t18 = g->edx;
                        wr32(sp0 - 0x58u, arg1);
                        g->ecx = t17;
                        g->edx = t18;
                        g->esp = sp0 - 0x54u;
                        t19 = cow_cdecl(g, COW_IMG(0x1031b835u), 1, arg1);
                        t20 = g->ecx;
                        t21 = g->edx;
                        wr32(sp0 - 0x2cu, t19);
                        wr32(sp0 - 0x5cu, arg1);
                        wr32(sp0 - 0x60u, t19);
                        g->ecx = t20;
                        g->edx = t21;
                        g->esp = sp0 - 0x50u;
                        t22 = cow_cdecl(g, COW_IMG(0x1031b860u), 4, t19, arg1, arg1, rd32(sp0 - 0x54u));
                        t23 = g->ecx;
                        t24 = g->edx;
                        eax = t22;
                        ecx = t23;
                        edx = t24;
                    }
                }
                else
                {
                    eax = t10;
                    ecx = t11;
                    edx = t12;
                    wr32(sp0 - 0x28u, arg1);
                    loc_28 = arg1;
                }
            }
            if (loc_28 == 0u)
            {
                if (esi == 0u)
                {
                    wr32(sp0 - 0x4cu, 1u);
                    wr32(sp0 + 8u, 1u);
                    esi = 1u;
                }
                t25 = esi + 0xfu & 0xfffffff0u;
                wr32(sp0 + 8u, t25);
                wr32(sp0 - 0x4cu, t25);
                wr32(sp0 - 0x50u, 0u);
                wr32(sp0 - 0x54u, rd32(COW_IMG(0x109f8404u)));
                g->eax = eax;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x48u;
                t26 = cow_stdcall(g, rd32(COW_IMG(0x1032928cu)), 3, rd32(COW_IMG(0x109f8404u)), 0u, t25);   /* kernel32.dll!HeapAlloc */
                t27 = g->ecx;
                t28 = g->edx;
                wr32(sp0 - 0x28u, t26);
                if (t26 == 0u)
                {
                    eax = t26;
                    ecx = t27;
                    edx = t28;
                    esi = t25;
                    loc_28 = t26;
                }
                else
                {
                    ecx = t27;
                    edx = t28;
                    esi = t25;
                    loc_28 = t26;
                    t29 = rd32(arg1 - 4u) - 1u;
                    wr32(sp0 - 0x24u, t29);
                    if (t29 < esi)
                    {
                        eax = t29;
                    }
                    else
                    {
                        eax = esi;
                    }
                    wr32(sp0 - 0x4cu, eax);
                    wr32(sp0 - 0x50u, arg1);
                    wr32(sp0 - 0x54u, loc_28);
                    g->eax = eax;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0x40u;
                    t30 = cow_cdecl(g, COW_IMG(0x103169e0u), 5, loc_28, arg1, eax, rd32(sp0 - 0x48u), rd32(sp0 - 0x44u));
                    t31 = g->ecx;
                    t32 = g->edx;
                    wr32(sp0 - 0x58u, arg1);
                    t33 = rd32(sp0 - 0x2cu);
                    wr32(sp0 - 0x5cu, t33);
                    g->ecx = t31;
                    g->edx = t32;
                    g->esp = sp0 - 0x4cu;
                    t34 = cow_cdecl(g, COW_IMG(0x1031b860u), 4, t33, arg1, rd32(sp0 - 0x54u), arg1);
                    t35 = g->ecx;
                    t36 = g->edx;
                    eax = t34;
                    ecx = t35;
                    edx = t36;
                }
            }
        }
        wr32(sp0 - 8u, 0xffffffffu);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x48u;
        t37 = cow_stdcall(g, COW_IMG(0x1031329bu), 0);
        t38 = g->ecx;
        t39 = g->edx;
        if (rd32(sp0 - 0x2cu) != 0u)
        {
            ecx = t38;
            edx = t39;
        }
        else
        {
            eax = t37;
            ecx = t38;
            edx = t39;
            if (esi == 0u)
            {
                wr32(sp0 - 0x4cu, 1u);
                esi = 1u;
            }
            t40 = esi + 0xfu & 0xfffffff0u;
            wr32(sp0 + 8u, t40);
            wr32(sp0 - 0x4cu, t40);
            wr32(sp0 - 0x50u, arg1);
            wr32(sp0 - 0x54u, 0u);
            wr32(sp0 - 0x58u, rd32(COW_IMG(0x109f8404u)));
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x48u;
            t41 = cow_stdcall(g, rd32(COW_IMG(0x10329288u)), 4, rd32(COW_IMG(0x109f8404u)), 0u, arg1, t40);   /* kernel32.dll!HeapReAlloc */
            t42 = g->ecx;
            t43 = g->edx;
            wr32(sp0 - 0x28u, t41);
            ecx = t42;
            edx = t43;
            esi = t40;
            loc_28 = t41;
        }
    }
    if (loc_28 != 0u)
    {
        eax = loc_28;
        goto L_10313430;
    }
    eax = loc_28;
    if (rd32(COW_IMG(0x109b27a8u)) == 0u) goto L_10313430;
    wr32(sp0 - 0x4cu, esi);
    g->eax = eax;
    g->esp = sp0 - 0x48u;
    t44 = cow_call_regs(g, COW_IMG(0x1031d1aeu), g->eax, ecx, edx, 1, 1, esi);
    t45 = g->edx;
    if (t44 != 0u)
    {
        eax = t44;
        ecx = rd32(sp0 - 0x4cu);
        edx = t45;
        goto L_1031316b;
    }
    edx = t45;
    goto L_1031342e;
L_103132a4: ;
    if (eax != 2u)
    {
        ecx = self;
        edx = in_edx;
        goto L_103133f4;
    }
    if (esi > 0xffffffe0u)
    {
        ecx = self;
        edx = in_edx;
        edi = 0u;
    }
    else
    {
        if (esi == 0u)
        {
            wr32(sp0 - 0x4cu, 0x10u);
            esi = 0x10u;
        }
        else
        {
            esi = esi + 0xfu & 0xfffffff0u;
        }
        wr32(sp0 + 8u, esi);
        ecx = self;
        edx = in_edx;
        edi = 0u;
    }
L_103132c4: ;
    wr32(sp0 - 0x28u, edi);
    if (esi > 0xffffffe0u)
    {
        loc_28 = edi;
    }
    else
    {
        loc_28 = edi;
        wr32(sp0 - 0x4cu, 9u);
        g->esp = sp0 - 0x40u;
        cow_call_regs(g, COW_IMG(0x1031d016u), g->eax, ecx, edx, 1, 3, 9u, in_edi, in_esi);
        t46 = g->edx;
        wr32(sp0 - 8u, 1u);
        wr32(sp0 - 0x4cu, sp0 - 0x30u);
        wr32(sp0 - 0x50u, sp0 - 0x3cu);
        wr32(sp0 - 0x54u, arg1);
        g->eax = sp0 - 0x3cu;
        g->ecx = 9u;
        g->edx = t46;
        g->esp = sp0 - 0x48u;
        t47 = cow_cdecl(g, COW_IMG(0x1031c9b2u), 3, arg1, sp0 - 0x3cu, sp0 - 0x30u);
        t48 = g->ecx;
        t49 = g->edx;
        wr32(sp0 - 0x34u, t47);
        if (t47 == 0u)
        {
            eax = t47;
            ecx = t48;
            edx = t49;
            edi = t47;
            wr32(sp0 - 0x4cu, esi);
            wr32(sp0 - 0x50u, arg1);
            wr32(sp0 - 0x54u, 0u);
            wr32(sp0 - 0x58u, rd32(COW_IMG(0x109f8404u)));
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x48u;
            t78 = cow_stdcall(g, rd32(COW_IMG(0x10329288u)), 4, rd32(COW_IMG(0x109f8404u)), 0u, arg1, esi);   /* kernel32.dll!HeapReAlloc */
            t79 = g->ecx;
            t80 = g->edx;
            wr32(sp0 - 0x28u, t78);
            eax = t78;
            ecx = t79;
            edx = t80;
            loc_28 = t78;
        }
        else
        {
            eax = t47;
            ecx = t48;
            edx = t49;
            edi = t47;
            if (esi < rd32(COW_IMG(0x103d29dcu)))
            {
                wr32(sp0 - 0x4cu, esi >> 4u);
                wr32(sp0 - 0x50u, edi);
                t50 = rd32(sp0 - 0x30u);
                wr32(sp0 - 0x54u, t50);
                t51 = rd32(sp0 - 0x3cu);
                wr32(sp0 - 0x58u, t51);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x40u;
                t52 = cow_thiscall_cdecl(g, COW_IMG(0x1031cd7au), ecx, 6, t51, t50, edi, esi >> 4u, rd32(sp0 - 0x48u), rd32(sp0 - 0x44u));
                t53 = g->ecx;
                t54 = g->edx;
                if (t52 == 0u)
                {
                    eax = t52;
                    ecx = t53;
                    edx = t54;
                    ebx = esi >> 4u;
                    wr32(sp0 - 0x4cu, ebx);
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x48u;
                    t55 = cow_thiscall_cdecl(g, COW_IMG(0x1031ca4eu), ecx, 1, ebx);
                    t56 = g->edx;
                    wr32(sp0 - 0x28u, t55);
                    if (t55 == 0u)
                    {
                        eax = t55;
                        ecx = rd32(sp0 - 0x4cu);
                        edx = t56;
                        loc_28 = t55;
                    }
                    else
                    {
                        ecx = rd32(sp0 - 0x4cu);
                        edx = t56;
                        loc_28 = t55;
                        t57 = rd8(edi) << 4u;
                        wr32(sp0 - 0x38u, t57);
                        if (t57 < esi)
                        {
                            eax = t57;
                        }
                        else
                        {
                            eax = esi;
                        }
                        wr32(sp0 - 0x4cu, eax);
                        wr32(sp0 - 0x50u, arg1);
                        wr32(sp0 - 0x54u, loc_28);
                        g->eax = eax;
                        g->ecx = ecx;
                        g->edx = edx;
                        g->esp = sp0 - 0x40u;
                        t58 = cow_cdecl(g, COW_IMG(0x103169e0u), 5, loc_28, arg1, eax, rd32(sp0 - 0x48u), rd32(sp0 - 0x44u));
                        t59 = g->ecx;
                        t60 = g->edx;
                        wr32(sp0 - 0x58u, edi);
                        t61 = rd32(sp0 - 0x30u);
                        wr32(sp0 - 0x5cu, t61);
                        t62 = rd32(sp0 - 0x3cu);
                        wr32(sp0 - 0x60u, t62);
                        g->ecx = t59;
                        g->edx = t60;
                        g->esp = sp0 - 0x54u;
                        t63 = cow_cdecl(g, COW_IMG(0x1031ca09u), 3, t62, t61, edi);
                        t64 = g->ecx;
                        t65 = g->edx;
                        eax = t63;
                        ecx = t64;
                        edx = t65;
                    }
                }
                else
                {
                    ecx = t53;
                    edx = t54;
                    wr32(sp0 - 0x28u, arg1);
                    eax = arg1;
                    loc_28 = arg1;
                }
            }
            if (loc_28 == 0u)
            {
                wr32(sp0 - 0x4cu, esi);
                wr32(sp0 - 0x50u, 0u);
                wr32(sp0 - 0x54u, rd32(COW_IMG(0x109f8404u)));
                g->eax = eax;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x48u;
                t66 = cow_stdcall(g, rd32(COW_IMG(0x1032928cu)), 3, rd32(COW_IMG(0x109f8404u)), 0u, esi);   /* kernel32.dll!HeapAlloc */
                t67 = g->ecx;
                t68 = g->edx;
                wr32(sp0 - 0x28u, t66);
                if (t66 == 0u)
                {
                    eax = t66;
                    ecx = t67;
                    edx = t68;
                    loc_28 = t66;
                }
                else
                {
                    ecx = t67;
                    edx = t68;
                    loc_28 = t66;
                    t69 = rd8(edi) << 4u;
                    wr32(sp0 - 0x38u, t69);
                    if (t69 < esi)
                    {
                        eax = t69;
                    }
                    else
                    {
                        eax = esi;
                    }
                    wr32(sp0 - 0x4cu, eax);
                    wr32(sp0 - 0x50u, arg1);
                    wr32(sp0 - 0x54u, loc_28);
                    g->eax = eax;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0x40u;
                    t70 = cow_cdecl(g, COW_IMG(0x103169e0u), 5, loc_28, arg1, eax, rd32(sp0 - 0x48u), rd32(sp0 - 0x44u));
                    t71 = g->ecx;
                    t72 = g->edx;
                    wr32(sp0 - 0x58u, edi);
                    t73 = rd32(sp0 - 0x30u);
                    wr32(sp0 - 0x5cu, t73);
                    t74 = rd32(sp0 - 0x3cu);
                    wr32(sp0 - 0x60u, t74);
                    g->ecx = t71;
                    g->edx = t72;
                    g->esp = sp0 - 0x54u;
                    t75 = cow_cdecl(g, COW_IMG(0x1031ca09u), 3, t74, t73, edi);
                    t76 = g->ecx;
                    t77 = g->edx;
                    eax = t75;
                    ecx = t76;
                    edx = t77;
                }
            }
        }
        wr32(sp0 - 8u, 0xffffffffu);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x48u;
        cow_stdcall(g, COW_IMG(0x103133e9u), 0);
        t81 = g->ecx;
        t82 = g->edx;
        ecx = t81;
        edx = t82;
    }
    if (loc_28 != edi)
    {
        eax = loc_28;
        goto L_10313430;
    }
    eax = loc_28;
    if (rd32(COW_IMG(0x109b27a8u)) == edi) goto L_10313430;
    wr32(sp0 - 0x4cu, esi);
    g->eax = eax;
    g->esp = sp0 - 0x48u;
    t83 = cow_call_regs(g, COW_IMG(0x1031d1aeu), g->eax, ecx, edx, 1, 1, esi);
    t84 = g->edx;
    if (t83 != 0u)
    {
        eax = t83;
        ecx = rd32(sp0 - 0x4cu);
        edx = t84;
        goto L_103132c4;
    }
    edx = t84;
    goto L_1031342e;
L_103133f4: ;
    if (esi > 0xffffffe0u)
    {
        eax = 0u;
    }
    else
    {
        if (esi == 0u)
        {
            wr32(sp0 - 0x4cu, 1u);
            esi = 1u;
        }
        t85 = esi + 0xfu & 0xfffffff0u;
        wr32(sp0 - 0x4cu, t85);
        wr32(sp0 - 0x50u, arg1);
        wr32(sp0 - 0x54u, 0u);
        wr32(sp0 - 0x58u, rd32(COW_IMG(0x109f8404u)));
        g->eax = 0u;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x48u;
        t86 = cow_stdcall(g, rd32(COW_IMG(0x10329288u)), 4, rd32(COW_IMG(0x109f8404u)), 0u, arg1, t85);   /* kernel32.dll!HeapReAlloc */
        t87 = g->ecx;
        t88 = g->edx;
        eax = t86;
        ecx = t87;
        edx = t88;
        esi = t85;
    }
    if (eax != 0u) goto L_10313430;
    if (rd32(COW_IMG(0x109b27a8u)) == 0u) goto L_10313430;
    wr32(sp0 - 0x4cu, esi);
    g->eax = eax;
    g->esp = sp0 - 0x48u;
    t89 = cow_call_regs(g, COW_IMG(0x1031d1aeu), g->eax, ecx, edx, 1, 1, esi);
    t90 = g->edx;
    if (t89 != 0u)
    {
        ecx = rd32(sp0 - 0x4cu);
        edx = t90;
        goto L_103133f4;
    }
    edx = t90;
    goto L_1031342e;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10313110(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10313110(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
