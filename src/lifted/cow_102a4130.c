/* f_0x102a4130 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102a4130(Guest* g)
{
    double d34;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->eax = arg3;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 0x10u;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bdb5cu), arg1);
    t5 = g->ecx;
    t6 = g->edx;
    if ((int32_t)arg2 >= 1)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, in_ebp, in_edi);
        t7 = g->ecx;
        t8 = g->edx;
        g->eax = rd32(arg1);
        g->ecx = t7;
        g->edx = t8;
        t9 = rd32(arg1);
        g->esp = sp0 - 0x14u;
        t10 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bda40u), t9);
        t11 = g->ecx;
        t12 = g->edx;
        g->edx = t12;
        t13 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bda40u), t9);
        t14 = g->edx;
        t15 = rd32(arg1 + 0xcu);
        g->ecx = t15;
        g->edx = t14;
        g->esp = sp0 - 0x20u;
        t16 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bda30u), t15);
        t17 = g->ecx;
        t18 = g->edx;
        g->ecx = t17;
        t19 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bda30u), t15);
        t20 = g->ecx;
        t21 = rd32(arg1 + 0x10u);
        g->ecx = t20;
        g->edx = t21;
        g->esp = sp0 - 0x2cu;
        t22 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bda20u), t21);
        t23 = g->ecx;
        t24 = g->edx;
        g->ecx = t23;
        g->edx = t24;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bda20u), t21);
        t25 = g->ecx;
        t26 = g->edx;
        t27 = rd32(arg1 + 0x1cu);
        g->eax = t27;
        g->ecx = t25;
        g->edx = t26;
        g->esp = sp0 - 0x38u;
        t28 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bda10u), t27);
        t29 = g->ecx;
        t30 = g->edx;
        g->ecx = t29;
        g->edx = t30;
        t31 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bda10u), t27);
        t32 = g->ecx;
        t33 = g->edx;
        d34 = (double)rdf32(arg1 + 0x20u);
        g->ecx = t32;
        g->edx = t33;
        g->esp = sp0 - 0x14u;
        t35 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bda00u), cow_dlo(d34));
        t36 = g->ecx;
        t37 = g->edx;
        g->edx = t37;
        t38 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bda00u), cow_dlo(d34));
        t39 = g->edx;
        t40 = rd32(arg1 + 0x24u);
        g->ecx = t40;
        g->edx = t39;
        g->esp = sp0 - 0x20u;
        t41 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bdb50u), t40);
        t42 = g->ecx;
        t43 = g->edx;
        g->ecx = t42;
        t44 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bdb50u), t40);
        t45 = g->ecx;
        t46 = rd32(arg1 + 0x28u);
        g->ecx = t45;
        g->edx = t46;
        g->esp = sp0 - 0x2cu;
        t47 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bdb3cu), t46);
        t48 = g->ecx;
        t49 = g->edx;
        g->ecx = t48;
        g->edx = t49;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bdb3cu), t46);
        t50 = g->ecx;
        t51 = g->edx;
        t52 = rd32(arg1 + 0x2cu);
        g->eax = t52;
        g->ecx = t50;
        g->edx = t51;
        g->esp = sp0 - 0x38u;
        t53 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bdb2cu), t52);
        t54 = g->ecx;
        t55 = g->edx;
        g->edx = t55;
        t56 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bdb2cu), t52);
        t57 = g->edx;
        t58 = rd32(arg1 + 0x30u);
        g->ecx = t58;
        g->edx = t57;
        g->esp = sp0 - 0x44u;
        t59 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bdb1cu), t58);
        t60 = g->ecx;
        t61 = g->edx;
        g->ecx = t60;
        t62 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bdb1cu), t58);
        t63 = g->ecx;
        t64 = rd32(arg1 + 0x34u);
        g->ecx = t63;
        g->edx = t64;
        g->esp = sp0 - 0x10u;
        t65 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bdb08u), t64);
        t66 = g->ecx;
        t67 = g->edx;
        g->ecx = t66;
        g->edx = t67;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bdb08u), t64);
        t68 = g->ecx;
        t69 = g->edx;
        t70 = rd32(arg1 + 0x38u);
        g->eax = t70;
        g->ecx = t68;
        g->edx = t69;
        g->esp = sp0 - 0x1cu;
        t71 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bdaf8u), t70);
        t72 = g->ecx;
        t73 = g->edx;
        if ((int32_t)arg2 < 2)
        {
            eax = t71;
            ecx = t72;
            edx = t73;
        }
        else
        {
            ecx = t72;
            edx = t73;
            if ((int32_t)rd32(arg1 + 0x34u) <= 0)
            {
                eax = rd32(arg1 + 0x34u);
            }
            else
            {
                ebx = 0u;
                ebp = 0u;
L_102a4256: ;
                t74 = ebx + rd32(arg1 + 0x38u);
                g->ecx = arg2;
                g->edx = t74;
                g->esp = sp0;
                cow_cdecl(g, COW_IMG(0x102a3f10u), 7, t74, arg2, arg3 + 2u, in_ebp, in_edi, in_esi, in_ebx);
                t75 = g->ecx;
                t76 = g->edx;
                if ((int32_t)(ebp + 1u) < (int32_t)rd32(arg1 + 0x34u))
                {
                    ebx = ebx + 0x30u;
                    ebp = ebp + 1u;
                    goto L_102a4256;
                }
                eax = rd32(arg1 + 0x34u);
                ecx = t75;
                edx = t76;
            }
        }
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, in_ebp, in_edi);
        t77 = g->ecx;
        t78 = g->edx;
        t79 = rd32(arg1 + 0x3cu);
        g->eax = t79;
        g->ecx = t77;
        g->edx = t78;
        g->esp = sp0 - 0x14u;
        t80 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bdaecu), t79);
        t81 = g->ecx;
        t82 = g->edx;
        if ((int32_t)arg2 < 2)
        {
            eax = t80;
            ecx = t81;
            edx = t82;
        }
        else
        {
            eax = t80;
            t83 = rd32(arg1 + 0x3cu);
            g->eax = eax;
            g->ecx = arg3 + 2u;
            g->edx = t83;
            g->esp = sp0 - 0xcu;
            t84 = cow_cdecl(g, COW_IMG(0x102940c0u), 3, t83, arg2, arg3 + 2u);
            t85 = g->ecx;
            t86 = g->edx;
            eax = t84;
            ecx = t85;
            edx = t86;
        }
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t87 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, in_edi, in_esi);
        t88 = g->ecx;
        t89 = g->edx;
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bbd84u), arg1 + 0x40u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a4130(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102a4130(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
