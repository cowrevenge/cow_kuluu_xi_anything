/* f_0x102bde94 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102bde94(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 148u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x48u, in_ebx);
    wr32(sp0 - 0x4cu, in_esi);
    wr32(sp0 - 0x50u, in_edi);
    if (rd32(sp0 + 8u) == 0u)
    {
        eax = in_eax;
        ecx = self;
        edx = in_edx;
        esi = rd32(sp0 + 4u);
    }
    else
    {
        esi = rd32(sp0 + 4u);
        t1 = rd32(sp0 + 8u);
        wr32(sp0 - 0x54u, t1);
        wr32(sp0 - 0x58u, esi);
        g->eax = in_eax;
        g->esp = sp0 - 0x30u;
        t2 = cow_call_regs(g, COW_IMG(0x102c3afbu), g->eax, self, in_edx, 1, 10, esi, t1, in_edi, in_esi, in_ebx, rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u));
        t3 = g->edx;
        eax = t2;
        ecx = rd32(sp0 - 0x54u);
        edx = t3;
    }
    if (rd32(sp0 + 0xcu) != 0u)
    {
        t4 = rd32(sp0 + 0xcu);
        wr32(sp0 - 0x54u, t4);
        wr32(sp0 - 0x58u, esi);
        g->eax = eax;
        g->esp = sp0 - 0x30u;
        t5 = cow_call_regs(g, COW_IMG(0x102c3afbu), g->eax, ecx, edx, 1, 10, esi, t4, in_edi, in_esi, in_ebx, rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u));
        t6 = g->edx;
        eax = t5;
        ecx = rd32(sp0 - 0x54u);
        edx = t6;
    }
    t7 = rd32(esi + 0xacu);
    wr32(sp0 - 0x54u, t7);
    wr32(sp0 - 0x58u, esi);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x50u;
    t8 = cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, edx, 1, 2, esi, t7);
    t9 = g->ecx;
    t10 = g->edx;
    t11 = rd32(esi + 0x250u);
    wr32(sp0 - 0x5cu, t11);
    wr32(sp0 - 0x60u, esi);
    g->ecx = t9;
    g->esp = sp0 - 0x58u;
    t12 = cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, t10, 1, 2, esi, t11);
    t13 = g->ecx;
    t14 = g->edx;
    t15 = rd32(esi + 0xe8u);
    wr32(sp0 - 0x64u, t15);
    wr32(sp0 - 0x68u, esi);
    g->ecx = t13;
    g->esp = sp0 - 0x60u;
    t16 = cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, t14, 1, 2, esi, t15);
    t17 = g->ecx;
    t18 = g->edx;
    t19 = rd32(esi + 0x1ecu);
    wr32(sp0 - 0x6cu, t19);
    wr32(sp0 - 0x70u, esi);
    g->ecx = t17;
    g->esp = sp0 - 0x68u;
    t20 = cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, t18, 1, 2, esi, t19);
    t21 = g->ecx;
    t22 = g->edx;
    t23 = rd32(esi + 0x1f0u);
    wr32(sp0 - 0x74u, t23);
    wr32(sp0 - 0x78u, esi);
    g->ecx = t21;
    g->esp = sp0 - 0x70u;
    t24 = cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, t22, 1, 2, esi, t23);
    t25 = g->ecx;
    t26 = g->edx;
    t27 = rd32(esi + 0x164u);
    wr32(sp0 - 0x7cu, t27);
    wr32(sp0 - 0x80u, esi);
    g->ecx = t25;
    g->esp = sp0 - 0x78u;
    t28 = cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, t26, 1, 2, esi, t27);
    t29 = g->ecx;
    t30 = g->edx;
    t31 = rd32(esi + 0x168u);
    wr32(sp0 - 0x84u, t31);
    wr32(sp0 - 0x88u, esi);
    g->ecx = t29;
    g->esp = sp0 - 0x80u;
    t32 = cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, t30, 1, 2, esi, t31);
    t33 = g->ecx;
    t34 = g->edx;
    t35 = rd32(esi + 0x16cu);
    wr32(sp0 - 0x8cu, t35);
    wr32(sp0 - 0x90u, esi);
    g->ecx = t33;
    g->esp = sp0 - 0x88u;
    t36 = cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, t34, 1, 2, esi, t35);
    t37 = g->ecx;
    t38 = g->edx;
    if ((rd8(esi + 0x215u) & 0x10u) == 0u)
    {
        eax = t36;
        ecx = t37;
        edx = t38;
    }
    else
    {
        eax = t36;
        ecx = t37;
        edx = t38;
        t39 = rd32(esi + 0x114u);
        wr32(sp0 - 0x54u, t39);
        wr32(sp0 - 0x58u, esi);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x50u;
        t40 = cow_cdecl(g, COW_IMG(0x102c3642u), 2, esi, t39);
        t41 = g->edx;
        eax = t40;
        ecx = rd32(sp0 - 0x54u);
        edx = t41;
    }
    wr8(esi + 0x215u, rd8(esi + 0x215u) & 0xefu);
    if ((rd8(esi + 0x215u) & 0x20u) != 0u)
    {
        t42 = rd32(esi + 0x188u);
        wr32(sp0 - 0x54u, t42);
        wr32(sp0 - 0x58u, esi);
        g->esp = sp0 - 0x50u;
        cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, edx, 1, 2, esi, t42);
        t43 = g->edx;
        ecx = rd32(sp0 - 0x54u);
        edx = t43;
    }
    wr8(esi + 0x215u, rd8(esi + 0x215u) & 0xdfu);
    if ((rd32(esi + 0x214u) & 8u) == 0u)
    {
        eax = rd32(esi + 0x214u);
    }
    else
    {
        eax = rd32(esi + 0x214u);
        t44 = rd32(esi + 0x1f4u);
        wr32(sp0 - 0x54u, t44);
        wr32(sp0 - 0x58u, esi);
        g->eax = eax;
        g->esp = sp0 - 0x50u;
        t45 = cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, edx, 1, 2, esi, t44);
        t46 = g->edx;
        eax = t45;
        ecx = rd32(sp0 - 0x54u);
        edx = t46;
    }
    wr32(esi + 0x214u, rd32(esi + 0x214u) & 0xfffffff7u);
    if (rd32(esi + 0x170u) != 0u)
    {
        wr32(sp0 - 0x54u, 8u);
        if ((int32_t)(1u << (8u - rd32(esi + 0x158u) & 0x1fu)) <= 0)
        {
            ecx = 8u - rd32(esi + 0x158u);
            goto L_102bdfb0;
        }
        ecx = 8u - rd32(esi + 0x158u);
        ebx = 0u;
        edi = 1u << (8u - rd32(esi + 0x158u) & 0x1fu);
L_102bdf9a: ;
        t47 = rd32(ebx * 4u + rd32(esi + 0x170u));
        wr32(sp0 - 0x54u, t47);
        wr32(sp0 - 0x58u, esi);
        g->eax = rd32(esi + 0x170u);
        t48 = rd32(esi + 0x170u);
        g->esp = sp0 - 0x50u;
        t49 = cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, edx, 1, 2, esi, t47);
        t50 = g->edx;
        if ((int32_t)(ebx + 1u) < (int32_t)edi)
        {
            ecx = rd32(sp0 - 0x54u);
            edx = t50;
            ebx = ebx + 1u;
            goto L_102bdf9a;
        }
        eax = t49;
        ecx = rd32(sp0 - 0x54u);
        edx = t50;
L_102bdfb0: ;
        t51 = rd32(esi + 0x170u);
        wr32(sp0 - 0x54u, t51);
        wr32(sp0 - 0x58u, esi);
        g->eax = eax;
        g->esp = sp0 - 0x50u;
        t52 = cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, edx, 1, 2, esi, t51);
        t53 = g->edx;
        eax = t52;
        ecx = rd32(sp0 - 0x54u);
        edx = t53;
    }
    if (rd32(esi + 0x174u) != 0u)
    {
        wr32(sp0 - 0x54u, 8u);
        if ((int32_t)(1u << (8u - rd32(esi + 0x158u) & 0x1fu)) <= 0)
        {
            ecx = 8u - rd32(esi + 0x158u);
            goto L_102bdff0;
        }
        ecx = 8u - rd32(esi + 0x158u);
        ebx = 0u;
        edi = 1u << (8u - rd32(esi + 0x158u) & 0x1fu);
L_102bdfda: ;
        t54 = rd32(ebx * 4u + rd32(esi + 0x174u));
        wr32(sp0 - 0x54u, t54);
        wr32(sp0 - 0x58u, esi);
        g->eax = rd32(esi + 0x174u);
        t55 = rd32(esi + 0x174u);
        g->esp = sp0 - 0x50u;
        t56 = cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, edx, 1, 2, esi, t54);
        t57 = g->edx;
        if ((int32_t)(ebx + 1u) < (int32_t)edi)
        {
            ecx = rd32(sp0 - 0x54u);
            edx = t57;
            ebx = ebx + 1u;
            goto L_102bdfda;
        }
        eax = t56;
        ecx = rd32(sp0 - 0x54u);
        edx = t57;
L_102bdff0: ;
        t58 = rd32(esi + 0x174u);
        wr32(sp0 - 0x54u, t58);
        wr32(sp0 - 0x58u, esi);
        g->eax = eax;
        g->esp = sp0 - 0x50u;
        t59 = cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, edx, 1, 2, esi, t58);
        t60 = g->edx;
        eax = t59;
        ecx = rd32(sp0 - 0x54u);
        edx = t60;
    }
    if (rd32(esi + 0x178u) != 0u)
    {
        wr32(sp0 - 0x54u, 8u);
        if ((int32_t)(1u << (8u - rd32(esi + 0x158u) & 0x1fu)) <= 0)
        {
            ecx = 8u - rd32(esi + 0x158u);
            goto L_102be030;
        }
        ecx = 8u - rd32(esi + 0x158u);
        ebx = 0u;
        edi = 1u << (8u - rd32(esi + 0x158u) & 0x1fu);
L_102be01a: ;
        t61 = rd32(ebx * 4u + rd32(esi + 0x178u));
        wr32(sp0 - 0x54u, t61);
        wr32(sp0 - 0x58u, esi);
        g->eax = rd32(esi + 0x178u);
        t62 = rd32(esi + 0x178u);
        g->esp = sp0 - 0x50u;
        t63 = cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, edx, 1, 2, esi, t61);
        t64 = g->edx;
        if ((int32_t)(ebx + 1u) < (int32_t)edi)
        {
            ecx = rd32(sp0 - 0x54u);
            edx = t64;
            ebx = ebx + 1u;
            goto L_102be01a;
        }
        eax = t63;
        ecx = rd32(sp0 - 0x54u);
        edx = t64;
L_102be030: ;
        t65 = rd32(esi + 0x178u);
        wr32(sp0 - 0x54u, t65);
        wr32(sp0 - 0x58u, esi);
        g->eax = eax;
        g->esp = sp0 - 0x50u;
        t66 = cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, edx, 1, 2, esi, t65);
        t67 = g->edx;
        eax = t66;
        ecx = rd32(sp0 - 0x54u);
        edx = t67;
    }
    t68 = rd32(esi + 0x210u);
    wr32(sp0 - 0x54u, t68);
    wr32(sp0 - 0x58u, esi);
    g->ecx = ecx;
    g->esp = sp0 - 0x50u;
    cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, edx, 1, 2, esi, t68);
    t69 = g->ecx;
    t70 = g->edx;
    wr32(sp0 - 0x5cu, esi + 0x74u);
    g->eax = esi + 0x74u;
    t71 = cow_call_regs(g, COW_IMG(0x102c3d5fu), g->eax, t69, t70, 1, 3, esi + 0x74u, rd32(sp0 - 0x58u), rd32(sp0 - 0x54u));
    t72 = g->ecx;
    t73 = g->edx;
    t74 = rd32(esi + 0x1b0u);
    wr32(sp0 - 0x60u, t74);
    wr32(sp0 - 0x64u, esi);
    g->ecx = t72;
    g->esp = sp0 - 0x5cu;
    t75 = cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, t73, 1, 2, esi, t74);
    t76 = g->ecx;
    t77 = g->edx;
    t78 = rd32(esi + 0x1e4u);
    wr32(sp0 - 0x68u, t78);
    wr32(sp0 - 0x6cu, esi);
    g->ecx = t76;
    g->esp = sp0 - 0x64u;
    cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, t77, 1, 2, esi, t78);
    t79 = g->ecx;
    t80 = g->edx;
    wr32(sp0 - 0x70u, 0x40u);
    wr32(sp0 - 0x74u, esi);
    wr32(sp0 - 0x78u, sp0 - 0x44u);
    g->ecx = t79;
    g->edx = t80;
    cow_cdecl(g, COW_IMG(0x103169e0u), 5, sp0 - 0x44u, esi, 0x40u, rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u));
    t81 = g->ecx;
    t82 = g->edx;
    t83 = rd32(esi + 0x44u);
    t84 = rd32(esi + 0x40u);
    wr32(sp0 + 8u, t83);
    t85 = rd32(esi + 0x48u);
    wr32(sp0 + 0xcu, t85);
    wr32(sp0 - 0x7cu, 0x260u);
    wr32(sp0 - 0x80u, 0u);
    wr32(sp0 - 0x84u, esi);
    t86 = rd32(esi + 0x24cu);
    wr32(sp0 + 4u, t86);
    g->ecx = t81;
    g->edx = t82;
    g->esp = sp0 - 0x78u;
    cow_cdecl(g, COW_IMG(0x10316dd0u), 3, esi, 0u, 0x260u);
    t87 = g->ecx;
    t88 = g->edx;
    wr32(sp0 - 0x88u, 0x40u);
    t89 = rd32(sp0 + 8u);
    wr32(esi + 0x44u, t89);
    t90 = rd32(sp0 + 0xcu);
    wr32(esi + 0x48u, t90);
    t91 = rd32(sp0 + 4u);
    wr32(esi + 0x24cu, t91);
    wr32(sp0 - 0x8cu, sp0 - 0x44u);
    wr32(sp0 - 0x90u, esi);
    wr32(esi + 0x40u, t84);
    g->esp = sp0 - 0x7cu;
    cow_cdecl(g, COW_IMG(0x103169e0u), 5, esi, sp0 - 0x44u, 0x40u, rd32(sp0 - 0x84u), 0u);
    g->ebx = rd32(sp0 - 0x48u);
    g->esi = rd32(sp0 - 0x4cu);
    g->edi = rd32(sp0 - 0x50u);
    g->ebp = rd32(sp0 - 4u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102bde94(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102bde94(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
