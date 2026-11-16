/* f_0x102c46a3 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_102c46a3(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_3c;
    uint32_t loc_4;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t loc_48;
    uint32_t loc_4c;
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
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 104u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x3cu, in_ebx);
    if (rd32(sp0 + 8u) != 0u)
    {
        t75 = rd32(sp0 + 8u);
        wr32(sp0 - 0x40u, t75);
        wr32(sp0 - 0x44u, COW_IMG(0x103c86b0u));
        wr32(sp0 - 0x48u, sp0 - 0x38u);
        g->ebx = 0u;
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 0x34u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x38u, COW_IMG(0x103c86b0u), t75, in_ebx, rd32(sp0 - 0x38u));
        t76 = g->ecx;
        t77 = g->edx;
        wr32(sp0 - 0x4cu, sp0 - 0x38u);
        t78 = rd32(sp0 + 4u);
        wr32(sp0 - 0x50u, t78);
        g->esp = sp0 - 0x48u;
        cow_cdecl(g, COW_IMG(0x102bca0au), 2, t78, sp0 - 0x38u);
        wr8(arg5 + arg3, 0u);
        wr32(arg6, arg5);
        ebx = arg3;
        esi = in_esi;
        edi = in_edi;
    }
    else
    {
        wr32(sp0 - 0x40u, in_esi);
        wr32(sp0 - 0x44u, in_edi);
        t1 = rd32(sp0 + 4u);
        wr32(t1 + 0x74u, arg5 + arg3);
        wr32(t1 + 0x78u, arg4 - arg5);
        t2 = rd32(t1 + 0xacu);
        wr32(t1 + 0x80u, t2);
        t3 = rd32(t1 + 0xb0u);
        wr32(t1 + 0x84u, t3);
        if (arg4 == arg5)
        {
            ecx = arg5;
            edx = in_edx;
            ebx = 0u;
            esi = t1;
            goto L_102c48ff;
        }
        ecx = arg5;
        edx = in_edx;
        ebx = 0u;
        esi = t1;
        edi = 0u;
L_102c46ed: ;
        wr32(sp0 - 0x48u, 1u);
        wr32(sp0 - 0x4cu, esi + 0x74u);
        g->eax = esi + 0x74u;
        g->edx = edx;
        g->esp = sp0 - 0x40u;
        t4 = cow_cdecl(g, COW_IMG(0x102c3e9eu), 3, esi + 0x74u, 1u, in_edi);
        t5 = g->edx;
        wr32(sp0 + 8u, t4);
        if (t4 == 0u)
        {
            ecx = t4;
            edx = t5;
            goto L_102c470c;
        }
        ecx = t4;
        edx = t5;
        if (ecx != 1u) goto L_102c4836;
L_102c470c: ;
        if (rd32(esi + 0x84u) == 0u)
        {
            eax = rd32(esi + 0x84u);
            goto L_102c471f;
        }
        eax = rd32(esi + 0x84u);
        if (ecx != 1u) goto L_102c4827;
L_102c471f: ;
        if (ebx != 0u)
        {
            wr32(sp0 + 4u, ebx);
            t33 = edi + rd32(esi + 0xb0u) - eax + 1u;
            wr32(sp0 - 0x48u, t33);
            wr32(sp0 - 0x4cu, esi);
            g->eax = t33;
            g->edx = edx;
            g->esp = sp0 - 0x34u;
            t34 = cow_cdecl(g, COW_IMG(0x102c44bfu), 6, esi, t33, rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u));
            t35 = g->edx;
            if (t34 != 0u)
            {
                eax = t34;
                ecx = rd32(sp0 - 0x48u);
                edx = t35;
                ebx = t34;
            }
            else
            {
                eax = t34;
                ecx = rd32(sp0 - 0x48u);
                edx = t35;
                ebx = t34;
                t36 = rd32(sp0 + 4u);
                wr32(sp0 - 0x48u, t36);
                wr32(sp0 - 0x4cu, esi);
                g->eax = eax;
                g->ecx = ecx;
                g->esp = sp0 - 0x44u;
                t37 = cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, edx, 1, 2, esi, t36);
                t38 = g->ecx;
                t39 = g->edx;
                wr32(sp0 - 0x50u, arg3);
                wr32(sp0 - 0x54u, esi);
                g->ecx = t38;
                g->esp = sp0 - 0x4cu;
                t40 = cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, t39, 1, 2, esi, arg3);
                t41 = g->ecx;
                t42 = g->edx;
                wr32(sp0 - 0x58u, COW_IMG(0x103c87acu));
                wr32(sp0 - 0x5cu, esi);
                g->ecx = t41;
                t43 = cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, t42, 1, 4, esi, COW_IMG(0x103c87acu), rd32(sp0 - 0x54u), arg3);
                t44 = g->ecx;
                t45 = g->edx;
                eax = t43;
                ecx = t44;
                edx = t45;
            }
            wr32(sp0 - 0x48u, edi);
            t46 = rd32(sp0 + 4u);
            wr32(sp0 - 0x4cu, t46);
            wr32(sp0 - 0x50u, ebx);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x3cu;
            t47 = cow_cdecl(g, COW_IMG(0x103169e0u), 5, ebx, t46, edi, rd32(sp0 - 0x44u), rd32(sp0 - 0x40u));
            t48 = g->ecx;
            t49 = g->edx;
            t50 = rd32(sp0 + 4u);
            wr32(sp0 - 0x54u, t50);
            wr32(sp0 - 0x58u, esi);
            g->ecx = t48;
            g->esp = sp0 - 0x50u;
            cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, t49, 1, 2, esi, t50);
            t51 = g->ecx;
            t52 = g->edx;
            t53 = rd32(esi + 0xb0u) - rd32(esi + 0x84u);
            wr32(sp0 - 0x5cu, t53);
            t54 = rd32(esi + 0xacu);
            wr32(sp0 - 0x60u, t54);
            wr32(sp0 - 0x64u, ebx + edi);
            g->ecx = t51;
            g->edx = t52;
            cow_cdecl(g, COW_IMG(0x103169e0u), 5, ebx + edi, t54, t53, rd32(sp0 - 0x58u), rd32(sp0 - 0x54u));
            t55 = g->ecx;
            t56 = g->edx;
            ecx = t55;
            edx = t56;
            edi = edi + rd32(esi + 0xb0u) - rd32(esi + 0x84u);
        }
        else
        {
            t19 = arg5 + rd32(esi + 0xb0u) - eax + 1u;
            wr32(sp0 - 0x48u, t19);
            wr32(sp0 - 0x4cu, esi);
            g->eax = t19;
            g->edx = edx;
            t20 = rd32(esi + 0xb0u);
            g->esp = sp0 - 0x34u;
            t21 = cow_cdecl(g, COW_IMG(0x102c44bfu), 6, esi, t19, rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u));
            t22 = g->edx;
            if (t21 != 0u)
            {
                edx = t22;
                ebx = t21;
                edi = arg5 + t20 - eax;
            }
            else
            {
                ecx = rd32(sp0 - 0x48u);
                edx = t22;
                ebx = t21;
                edi = arg5 + t20 - eax;
                eax = t21;
                wr32(sp0 - 0x48u, arg3);
                wr32(sp0 - 0x4cu, esi);
                g->eax = eax;
                g->ecx = ecx;
                g->esp = sp0 - 0x44u;
                t23 = cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, edx, 1, 2, esi, arg3);
                t24 = g->ecx;
                t25 = g->edx;
                wr32(sp0 - 0x50u, COW_IMG(0x103c87d4u));
                wr32(sp0 - 0x54u, esi);
                cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, t25, 1, 4, esi, COW_IMG(0x103c87d4u), rd32(sp0 - 0x4cu), arg3);
                t26 = g->edx;
                edx = t26;
            }
            wr32(sp0 - 0x48u, edi - arg5);
            t27 = rd32(esi + 0xacu);
            wr32(sp0 - 0x4cu, t27);
            wr32(sp0 - 0x50u, arg5 + ebx);
            g->eax = arg5 + ebx;
            g->ecx = edi - arg5;
            g->edx = edx;
            g->esp = sp0 - 0x3cu;
            t28 = cow_cdecl(g, COW_IMG(0x103169e0u), 5, arg5 + ebx, t27, edi - arg5, rd32(sp0 - 0x44u), rd32(sp0 - 0x40u));
            t29 = g->ecx;
            t30 = g->edx;
            wr32(sp0 - 0x54u, arg5);
            wr32(sp0 - 0x58u, arg3);
            wr32(sp0 - 0x5cu, ebx);
            g->ecx = t29;
            g->edx = t30;
            g->esp = sp0 - 0x48u;
            cow_cdecl(g, COW_IMG(0x103169e0u), 5, ebx, arg3, arg5, rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu));
            t31 = g->ecx;
            t32 = g->edx;
            ecx = t31;
            edx = t32;
        }
        wr8(ebx + edi, 0u);
        if (rd32(sp0 + 8u) == 1u) goto L_102c4969;
        t57 = rd32(esi + 0xacu);
        wr32(esi + 0x80u, t57);
        t58 = rd32(esi + 0xb0u);
        wr32(esi + 0x84u, t58);
L_102c4827: ;
        if (rd32(esi + 0x78u) != 0u) goto L_102c46ed;
L_102c48cd: ;
        if (rd32(sp0 + 8u) == 1u) goto L_102c4969;
        if (rd32(sp0 + 8u) != 0xfffffffbu) goto L_102c48eb;
        wr32(sp0 - 0x48u, esi + 0x11cu);
        wr32(sp0 - 0x4cu, COW_IMG(0x103c8750u));
        loc_4c = COW_IMG(0x103c8750u);
        loc_48 = esi + 0x11cu;
L_102c490b: ;
        wr32(sp0 - 0x50u, sp0 - 0x38u);
        g->ebx = ebx;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x3cu;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x38u, loc_4c, loc_48, loc_44, loc_40);
        t59 = g->ecx;
        t60 = g->edx;
        wr32(sp0 - 0x48u, sp0 - 0x38u);
        wr32(sp0 - 0x4cu, esi);
        g->edx = t60;
        g->esp = sp0 - 0x44u;
        cow_cdecl(g, COW_IMG(0x102bca0au), 2, esi, sp0 - 0x38u);
        t61 = g->edx;
        if (ebx != 0u)
        {
            ecx = sp0 - 0x38u;
            edx = t61;
        }
        else
        {
            edx = t61;
            wr32(sp0 - 0x48u, arg5 + 1u);
            wr32(sp0 - 0x4cu, esi);
            g->eax = arg5 + 1u;
            g->edx = edx;
            g->esp = sp0 - 0x34u;
            t62 = cow_cdecl(g, COW_IMG(0x102c44bfu), 6, esi, arg5 + 1u, rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u));
            t63 = g->edx;
            if (t62 != 0u)
            {
                eax = t62;
                ecx = arg5 + 1u;
                edx = t63;
                ebx = t62;
            }
            else
            {
                eax = t62;
                edx = t63;
                ebx = t62;
                wr32(sp0 - 0x48u, arg3);
                wr32(sp0 - 0x4cu, esi);
                g->eax = eax;
                g->ecx = arg5 + 1u;
                g->esp = sp0 - 0x44u;
                t64 = cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, edx, 1, 2, esi, arg3);
                t65 = g->ecx;
                t66 = g->edx;
                wr32(sp0 - 0x50u, COW_IMG(0x103c86d4u));
                wr32(sp0 - 0x54u, esi);
                g->ecx = t65;
                t67 = cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, t66, 1, 4, esi, COW_IMG(0x103c86d4u), rd32(sp0 - 0x4cu), arg3);
                t68 = g->ecx;
                t69 = g->edx;
                eax = t67;
                ecx = t68;
                edx = t69;
            }
            wr32(sp0 - 0x48u, arg5);
            wr32(sp0 - 0x4cu, arg3);
            wr32(sp0 - 0x50u, ebx);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x3cu;
            cow_cdecl(g, COW_IMG(0x103169e0u), 5, ebx, arg3, arg5, rd32(sp0 - 0x44u), rd32(sp0 - 0x40u));
            t70 = g->ecx;
            t71 = g->edx;
            ecx = t70;
            edx = t71;
        }
        wr8(arg5 + ebx, 0u);
        edi = arg5;
L_102c4969: ;
        wr32(sp0 - 0x48u, esi + 0x74u);
        g->eax = esi + 0x74u;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x44u;
        t72 = cow_cdecl(g, COW_IMG(0x102c3d20u), 1, esi + 0x74u);
        t73 = g->ecx;
        t74 = g->edx;
        wr32(sp0 - 0x4cu, arg3);
        wr32(esi + 0x78u, 0u);
        wr32(sp0 - 0x50u, esi);
        g->esp = sp0 - 0x48u;
        cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, t74, 1, 2, esi, arg3);
        wr32(arg6, edi);
        esi = rd32(sp0 - 0x40u);
        edi = rd32(sp0 - 0x44u);
    }
    g->ebx = rd32(sp0 - 0x3cu);
    g->esi = esi;
    g->edi = edi;
    g->ebp = rd32(sp0 - 4u);
    return ebx;
L_102c4836: ;
    if (rd32(esi + 0x8cu) == 0u)
    {
        eax = rd32(esi + 0x8cu);
        wr32(sp0 - 0x48u, COW_IMG(0x103c8684u));
        loc_48 = COW_IMG(0x103c8684u);
    }
    else
    {
        eax = rd32(esi + 0x8cu);
        wr32(sp0 - 0x48u, eax);
        loc_48 = eax;
    }
    wr32(sp0 - 0x4cu, esi);
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    cow_cdecl(g, COW_IMG(0x102bca0au), 2, esi, loc_48);
    t6 = g->edx;
    wr32(sp0 - 0x48u, esi + 0x74u);
    g->edx = t6;
    cow_cdecl(g, COW_IMG(0x102c3d20u), 1, esi + 0x74u);
    t7 = g->edx;
    wr32(esi + 0x78u, 0u);
    if (ebx != 0u)
    {
        edx = t7;
    }
    else
    {
        ecx = rd32(sp0 - 0x48u);
        edx = t7;
        wr32(sp0 - 0x48u, arg5 + 0x20u);
        wr32(sp0 - 0x4cu, esi);
        g->eax = arg5;
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t8 = cow_cdecl(g, COW_IMG(0x102c44bfu), 6, esi, arg5 + 0x20u, rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u));
        t9 = g->edx;
        if (t8 != 0u)
        {
            eax = t8;
            ecx = arg5 + 0x20u;
            edx = t9;
            ebx = t8;
        }
        else
        {
            eax = t8;
            edx = t9;
            ebx = t8;
            wr32(sp0 - 0x48u, arg3);
            wr32(sp0 - 0x4cu, esi);
            g->eax = eax;
            g->ecx = arg5 + 0x20u;
            g->esp = sp0 - 0x44u;
            t10 = cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, edx, 1, 2, esi, arg3);
            t11 = g->ecx;
            t12 = g->edx;
            wr32(sp0 - 0x50u, COW_IMG(0x103c8784u));
            wr32(sp0 - 0x54u, esi);
            g->ecx = t11;
            t13 = cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, t12, 1, 4, esi, COW_IMG(0x103c8784u), rd32(sp0 - 0x4cu), arg3);
            t14 = g->ecx;
            t15 = g->edx;
            eax = t13;
            ecx = t14;
            edx = t15;
        }
        wr32(sp0 - 0x48u, arg5);
        wr32(sp0 - 0x4cu, arg3);
        wr32(sp0 - 0x50u, ebx);
        g->edx = edx;
        g->esp = sp0 - 0x3cu;
        cow_cdecl(g, COW_IMG(0x103169e0u), 5, ebx, arg3, arg5, rd32(sp0 - 0x44u), rd32(sp0 - 0x40u));
        t16 = g->edx;
        edx = t16;
        edi = arg5 + 0x20u;
    }
    wr8(ebx + edi - 1u, 0u);
    if (arg4 + arg3 - ebx - 1u < 0x1fu)
    {
        edi = arg4 + arg3 - ebx - 1u;
    }
    else
    {
        wr32(sp0 - 0x48u, 0x1fu);
        edi = 0x1fu;
    }
    wr32(sp0 - 0x48u, edi + 1u);
    wr32(sp0 - 0x4cu, COW_IMG(0x103c8684u));
    wr32(sp0 - 0x50u, arg5 + ebx);
    g->ecx = arg4;
    g->edx = edx;
    g->esp = sp0 - 0x3cu;
    cow_cdecl(g, COW_IMG(0x103169e0u), 5, arg5 + ebx, COW_IMG(0x103c8684u), edi + 1u, rd32(sp0 - 0x44u), rd32(sp0 - 0x40u));
    t17 = g->ecx;
    t18 = g->edx;
    ecx = t17;
    edx = t18;
    goto L_102c48cd;
L_102c48eb: ;
    if (rd32(sp0 + 8u) != 0xfffffffdu) goto L_102c48ff;
    wr32(sp0 - 0x48u, esi + 0x11cu);
    wr32(sp0 - 0x4cu, COW_IMG(0x103c8720u));
    loc_4c = COW_IMG(0x103c8720u);
    loc_48 = esi + 0x11cu;
    goto L_102c490b;
L_102c48ff: ;
    wr32(sp0 - 0x48u, esi + 0x11cu);
    wr32(sp0 - 0x4cu, COW_IMG(0x103c86f0u));
    loc_4c = COW_IMG(0x103c86f0u);
    loc_48 = esi + 0x11cu;
    loc_4 = in_ebp;
    loc_3c = in_ebx;
    loc_40 = in_esi;
    loc_44 = in_edi;
    goto L_102c490b;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c46a3(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102c46a3(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
