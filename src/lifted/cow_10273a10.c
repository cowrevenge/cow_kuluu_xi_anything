/* f_0x10273a10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_10273a10(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
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
    uint32_t t92;
    uint32_t t93;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = rd32(sp0 + 0xcu);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t2 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, t1, in_edi, in_esi);
    t3 = g->ecx;
    t4 = g->edx;
    g->ecx = t3;
    g->edx = t4;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b2634u), arg1);
    t5 = g->ecx;
    t6 = g->edx;
    if ((int32_t)arg2 < 1)
    {
        eax = arg2;
        edx = t6;
    }
    else
    {
        ecx = t5;
        edx = t6;
        esi = t1;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, esi + 1u, in_edi, in_esi);
        t7 = g->ecx;
        t8 = g->edx;
        g->eax = rd32(arg1);
        g->ecx = t7;
        g->edx = t8;
        t9 = rd32(arg1);
        g->esp = sp0 - 0x14u;
        t10 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b2618u), t9);
        t11 = g->ecx;
        t12 = g->edx;
        g->edx = t12;
        t13 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, esi + 1u, COW_IMG(0x103b2618u), t9);
        t14 = g->edx;
        t15 = rd32(arg1 + 4u);
        g->ecx = t15;
        g->edx = t14;
        g->esp = sp0 - 0x20u;
        t16 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b2600u), t15);
        t17 = g->ecx;
        t18 = g->edx;
        g->ecx = t17;
        t19 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, esi + 1u, COW_IMG(0x103b2600u), t15);
        t20 = g->ecx;
        t21 = rd32(arg1 + 8u);
        g->ecx = t20;
        g->edx = t21;
        g->esp = sp0 - 0x2cu;
        t22 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b25e8u), t21);
        t23 = g->ecx;
        t24 = g->edx;
        g->ecx = t23;
        g->edx = t24;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, esi + 1u, COW_IMG(0x103b25e8u), t21);
        t25 = g->ecx;
        t26 = g->edx;
        t27 = rd32(arg1 + 0xcu);
        g->eax = t27;
        g->ecx = t25;
        g->edx = t26;
        g->esp = sp0 - 0x38u;
        t28 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b25d0u), t27);
        t29 = g->ecx;
        t30 = g->edx;
        g->edx = t30;
        t31 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, esi + 1u, COW_IMG(0x103b25d0u), t27);
        t32 = g->edx;
        t33 = rd32(arg1 + 0x14u);
        g->ecx = t33;
        g->edx = t32;
        g->esp = sp0 - 0x44u;
        t34 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b25b8u), t33);
        t35 = g->ecx;
        t36 = g->edx;
        g->ecx = t35;
        t37 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, esi + 1u, COW_IMG(0x103b25b8u), t33);
        t38 = g->ecx;
        t39 = rd32(arg1 + 0x18u);
        g->ecx = t38;
        g->edx = t39;
        g->esp = sp0 - 0x10u;
        t40 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b25a0u), t39);
        t41 = g->ecx;
        t42 = g->edx;
        g->ecx = t41;
        g->edx = t42;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, esi + 1u, COW_IMG(0x103b25a0u), t39);
        t43 = g->ecx;
        t44 = g->edx;
        t45 = rd32(arg1 + 0x1cu);
        g->ecx = t43;
        g->edx = t44;
        g->esp = sp0 - 0x1cu;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b2588u), t45);
        t46 = g->ecx;
        t47 = g->edx;
        if ((int32_t)rd32(arg1 + 8u) <= 0)
        {
            ecx = t46;
            edx = t47;
            esi = esi + 1u;
        }
        else
        {
            eax = rd32(arg1 + 8u);
            edx = t47;
            esi = esi + 1u;
            wr32(sp0 + 0xcu, 0u);
            ebp = 0u;
L_10273adc: ;
            g->eax = eax;
            g->ecx = rd32(sp0 + 0xcu);
            g->edx = edx;
            t48 = rd32(sp0 + 0xcu);
            t49 = rd32(arg1 + 0x10u);
            g->esp = sp0 - 8u;
            t50 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, esi, in_edi, in_esi);
            t51 = g->ecx;
            t52 = g->edx;
            g->ecx = t51;
            g->edx = t52;
            g->esp = sp0 - 0x14u;
            t53 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b257cu), ebp);
            t54 = g->ecx;
            t55 = g->edx;
            g->edx = t55;
            t56 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, esi, COW_IMG(0x103b257cu), ebp);
            t57 = g->edx;
            t58 = rd32(t49 + t48);
            g->ecx = t58;
            g->edx = t57;
            g->esp = sp0 - 0x20u;
            t59 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b2568u), t58);
            t60 = g->ecx;
            t61 = g->edx;
            g->ecx = t60;
            t62 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, esi, COW_IMG(0x103b2568u), t58);
            t63 = g->ecx;
            t64 = rd32(t49 + t48 + 4u);
            g->ecx = t63;
            g->edx = t64;
            g->esp = sp0 - 0x2cu;
            t65 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b2558u), t64);
            t66 = g->ecx;
            t67 = g->edx;
            g->ecx = t66;
            g->edx = t67;
            cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, esi, COW_IMG(0x103b2558u), t64);
            t68 = g->ecx;
            t69 = g->edx;
            t70 = rd32(t49 + t48 + 8u);
            g->edx = t69;
            g->esp = sp0 - 0x38u;
            cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b2548u), t70);
            t71 = g->edx;
            t72 = rd32(sp0 + 0xcu) + 0xcu;
            t73 = rd32(arg1 + 8u);
            wr32(sp0 + 0xcu, t72);
            if ((int32_t)(ebp + 1u) < (int32_t)t73)
            {
                eax = t73;
                edx = t71;
                ebp = ebp + 1u;
                goto L_10273adc;
            }
            ecx = t72;
            edx = t71;
        }
        if ((int32_t)rd32(arg1 + 0x18u) <= 0)
        {
            eax = rd32(arg1 + 0x18u);
        }
        else
        {
            eax = rd32(arg1 + 0x18u);
            wr32(sp0 + 0xcu, 0u);
            ebp = 0u;
L_10273b54: ;
            g->eax = eax;
            g->ecx = ecx;
            g->edx = rd32(sp0 + 0xcu);
            t74 = rd32(sp0 + 0xcu);
            t75 = rd32(arg1 + 0x20u);
            g->esp = sp0 - 8u;
            t76 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, esi, in_edi, in_esi);
            t77 = g->ecx;
            t78 = g->edx;
            g->ecx = t77;
            g->edx = t78;
            g->esp = sp0 - 0x14u;
            t79 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b253cu), ebp);
            t80 = g->ecx;
            t81 = g->edx;
            g->edx = t81;
            t82 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, esi, COW_IMG(0x103b253cu), ebp);
            t83 = g->edx;
            t84 = rd32(t75 + t74);
            g->ecx = t84;
            g->edx = t83;
            g->esp = sp0 - 0x20u;
            t85 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b252cu), t84);
            t86 = g->ecx;
            t87 = g->edx;
            g->ecx = t86;
            t88 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, esi, COW_IMG(0x103b252cu), t84);
            t89 = g->ecx;
            t90 = rd32(t75 + t74 + 4u);
            g->edx = t90;
            g->esp = sp0 - 0x2cu;
            cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b251cu), t90);
            t91 = g->edx;
            t92 = rd32(sp0 + 0xcu) + 0xd8u;
            t93 = rd32(arg1 + 0x18u);
            wr32(sp0 + 0xcu, t92);
            if ((int32_t)(ebp + 1u) < (int32_t)t93)
            {
                eax = t93;
                ecx = t92;
                ebp = ebp + 1u;
                goto L_10273b54;
            }
            eax = t93;
            edx = t91;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10273a10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10273a10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
