/* f_0x1028d050 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1028d050(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
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

    if (rd32(arg1 + 0x44u) != 0u)
    {
        eax = rd32(arg1 + 0x44u);
        if ((int32_t)eax > 0)
        {
            ecx = self;
            edx = in_edx;
            ebp = 0u;
L_1028d071: ;
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t1 = cow_cdecl(g, COW_IMG(0x10279890u), 2, arg1, ebp);
            t2 = g->ecx;
            t3 = g->edx;
            if (rd32(t1) != 0x1c0002u)
            {
                ecx = t2;
                edx = t3;
            }
            else
            {
                eax = t1;
                ecx = t2;
                edx = t3;
                edi = t1;
                g->eax = eax;
                g->esp = sp0 - 0x10u;
                t4 = cow_cdecl(g, COW_IMG(0x10279b80u), 2, arg1, ebp);
                t5 = rd32(edi + 0x1cu);
                if (t5 == 0u)
                {
                    eax = t4;
                    ecx = t5;
                    edx = t5;
                    g->edx = edx;
                    g->esp = sp0 - 8u;
                    cow_cdecl(g, COW_IMG(0x10314d95u), 5, arg2, COW_IMG(0x103ba2e0u), eax, in_edi, in_esi);
                    t61 = g->edx;
                    t62 = rd32(edi + 0x24u);
                    g->ecx = t62;
                    g->edx = t61;
                    t63 = cow_cdecl(g, COW_IMG(0x10279fd0u), 7, arg1, t62, arg2, COW_IMG(0x103ba2e0u), eax, in_edi, in_esi);
                    t64 = g->ecx;
                    t65 = g->edx;
                    g->ecx = t64;
                    g->esp = sp0 - 0x1cu;
                    cow_cdecl(g, COW_IMG(0x10314d95u), 5, arg2, COW_IMG(0x103ba380u), t63, arg1, t62);
                    t66 = g->ecx;
                    t67 = rd32(edi + 0x28u);
                    g->ecx = t66;
                    g->edx = t67;
                    t68 = cow_cdecl(g, COW_IMG(0x10279fd0u), 7, arg1, t67, arg2, COW_IMG(0x103ba380u), t63, arg1, t62);
                    t69 = g->ecx;
                    t70 = g->edx;
                    g->ecx = t69;
                    g->edx = t70;
                    g->esp = sp0 - 0x30u;
                    cow_cdecl(g, COW_IMG(0x10314d95u), 5, arg2, COW_IMG(0x103ba368u), t68, arg1, t67);
                    t71 = g->ecx;
                    t72 = g->edx;
                    t73 = rd32(edi + 0x20u);
                    g->ecx = t71;
                    g->edx = t72;
                    g->esp = sp0 - 0x3cu;
                    cow_cdecl(g, COW_IMG(0x10314d95u), 5, arg2, COW_IMG(0x103ba348u), t73, arg2, COW_IMG(0x103ba368u));
                    t74 = g->ecx;
                    t75 = g->edx;
                    g->esp = sp0 - 4u;
                    t76 = cow_cdecl(g, COW_IMG(0x10314d95u), 5, arg2, COW_IMG(0x103ba32cu), in_edi, in_esi, in_ebp);
                    t77 = rd32(edi + 0x2cu);
                    t78 = rd32(edi + 0x20u);
                    g->ecx = t77;
                    g->edx = t78;
                    g->esp = sp0 - 8u;
                    cow_cdecl(g, COW_IMG(0x1028d280u), 7, arg2, t78, t77, arg2, COW_IMG(0x103ba32cu), in_edi, in_esi);
                    t79 = g->ecx;
                    t80 = g->edx;
                    g->edx = t80;
                    g->esp = sp0 - 0x18u;
                    cow_cdecl(g, COW_IMG(0x10314d95u), 5, arg2, COW_IMG(0x103ba314u), arg2, t78, t77);
                    t81 = g->edx;
                    t82 = rd32(edi + 0x30u);
                    t83 = rd32(edi + 0x20u);
                    g->ecx = t83;
                    g->edx = t81;
                    g->esp = sp0 - 0x1cu;
                    cow_cdecl(g, COW_IMG(0x1028d280u), 7, arg2, t83, t82, arg2, COW_IMG(0x103ba314u), arg2, t78);
                    t84 = g->ecx;
                    t85 = g->edx;
                    g->ecx = t84;
                    g->edx = t85;
                    g->esp = sp0 - 0x2cu;
                    cow_cdecl(g, COW_IMG(0x10314d95u), 5, arg2, COW_IMG(0x103b3238u), arg2, t83, t82);
                    t86 = g->ecx;
                    t87 = g->edx;
                    ecx = t86;
                    edx = t87;
                }
                else
                {
                    eax = t4;
                    ecx = t5;
                    edx = t5;
                    if (ecx == 1u)
                    {
                        ecx = ecx - 1u;
                        g->edx = edx;
                        g->esp = sp0 - 8u;
                        cow_cdecl(g, COW_IMG(0x10314d95u), 5, arg2, COW_IMG(0x103ba39cu), eax, in_edi, in_esi);
                        t28 = g->edx;
                        t29 = rd32(edi + 0x24u);
                        g->ecx = t29;
                        g->edx = t28;
                        t30 = cow_cdecl(g, COW_IMG(0x10279fd0u), 7, arg1, t29, arg2, COW_IMG(0x103ba39cu), eax, in_edi, in_esi);
                        t31 = g->ecx;
                        t32 = g->edx;
                        g->ecx = t31;
                        g->esp = sp0 - 0x1cu;
                        cow_cdecl(g, COW_IMG(0x10314d95u), 5, arg2, COW_IMG(0x103ba380u), t30, arg1, t29);
                        t33 = g->ecx;
                        t34 = rd32(edi + 0x28u);
                        g->ecx = t33;
                        g->edx = t34;
                        t35 = cow_cdecl(g, COW_IMG(0x10279fd0u), 7, arg1, t34, arg2, COW_IMG(0x103ba380u), t30, arg1, t29);
                        t36 = g->ecx;
                        t37 = g->edx;
                        g->ecx = t36;
                        g->edx = t37;
                        g->esp = sp0 - 0x30u;
                        cow_cdecl(g, COW_IMG(0x10314d95u), 5, arg2, COW_IMG(0x103ba368u), t35, arg1, t34);
                        t38 = g->ecx;
                        t39 = g->edx;
                        t40 = rd32(edi + 0x20u);
                        g->ecx = t38;
                        g->edx = t39;
                        g->esp = sp0 - 0x3cu;
                        cow_cdecl(g, COW_IMG(0x10314d95u), 5, arg2, COW_IMG(0x103ba348u), t40, arg2, COW_IMG(0x103ba368u));
                        t41 = g->ecx;
                        t42 = g->edx;
                        g->esp = sp0 - 4u;
                        t43 = cow_cdecl(g, COW_IMG(0x10314d95u), 5, arg2, COW_IMG(0x103ba32cu), in_edi, in_esi, in_ebp);
                        t44 = rd32(edi + 0x2cu);
                        t45 = rd32(edi + 0x20u);
                        g->ecx = t44;
                        g->edx = t45;
                        g->esp = sp0 - 8u;
                        cow_cdecl(g, COW_IMG(0x1028d280u), 7, arg2, t45, t44, arg2, COW_IMG(0x103ba32cu), in_edi, in_esi);
                        t46 = g->ecx;
                        t47 = g->edx;
                        g->edx = t47;
                        g->esp = sp0 - 0x18u;
                        cow_cdecl(g, COW_IMG(0x10314d95u), 5, arg2, COW_IMG(0x103ba314u), arg2, t45, t44);
                        t48 = g->edx;
                        t49 = rd32(edi + 0x30u);
                        t50 = rd32(edi + 0x20u);
                        g->ecx = t50;
                        g->esp = sp0 - 0x1cu;
                        cow_cdecl(g, COW_IMG(0x1028d280u), 7, arg2, t50, t49, arg2, COW_IMG(0x103ba314u), arg2, t45);
                        t51 = g->ecx;
                        t52 = rd32(edi + 0x3cu);
                        t53 = rd32(edi + 0x38u);
                        g->ecx = t51;
                        g->edx = t52;
                        g->esp = sp0;
                        t54 = cow_cdecl(g, COW_IMG(0x10279f60u), 7, arg1, t53, t52, in_edi, in_esi, in_ebp, in_ebx);
                        t55 = g->ecx;
                        t56 = g->edx;
                        g->ecx = t55;
                        g->edx = t56;
                        g->esp = sp0 - 0xcu;
                        cow_cdecl(g, COW_IMG(0x10314d95u), 5, arg2, COW_IMG(0x103ba2f8u), t54, t52, in_edi);
                        t57 = g->ecx;
                        t58 = g->edx;
                        g->ecx = t57;
                        g->edx = t58;
                        g->esp = sp0 - 0x14u;
                        cow_cdecl(g, COW_IMG(0x10314d95u), 5, arg2, COW_IMG(0x103b3238u), arg2, COW_IMG(0x103ba2f8u), t54);
                        t59 = g->ecx;
                        t60 = g->edx;
                        ecx = t59;
                        edx = t60;
                    }
                    else
                    {
                        ecx = ecx - 1u;
                        if (ecx == 1u)
                        {
                            ecx = ecx - 1u;
                            g->ecx = ecx;
                            g->edx = edx;
                            g->esp = sp0 - 8u;
                            cow_cdecl(g, COW_IMG(0x10314d95u), 5, arg2, COW_IMG(0x103ba424u), eax, in_edi, in_esi);
                            t8 = g->ecx;
                            t9 = g->edx;
                            t10 = rd32(edi + 0x24u);
                            g->ecx = t8;
                            g->edx = t9;
                            t11 = cow_cdecl(g, COW_IMG(0x10279f60u), 7, arg1, t10, arg2, COW_IMG(0x103ba424u), eax, in_edi, in_esi);
                            t12 = g->ecx;
                            t13 = g->edx;
                            g->edx = t13;
                            g->esp = sp0 - 0x1cu;
                            cow_cdecl(g, COW_IMG(0x10314d95u), 5, arg2, COW_IMG(0x103ba404u), t11, arg1, t10);
                            t14 = g->edx;
                            t15 = rd32(edi + 0x28u);
                            g->ecx = t15;
                            g->edx = t14;
                            t16 = cow_cdecl(g, COW_IMG(0x10279f60u), 7, arg1, t15, arg2, COW_IMG(0x103ba404u), t11, arg1, t10);
                            t17 = g->ecx;
                            t18 = g->edx;
                            g->ecx = t17;
                            g->esp = sp0 - 0x30u;
                            cow_cdecl(g, COW_IMG(0x10314d95u), 5, arg2, COW_IMG(0x103ba3e8u), t16, arg1, t15);
                            t19 = g->ecx;
                            t20 = rd32(edi + 0x40u);
                            g->ecx = t19;
                            g->edx = t20;
                            g->esp = sp0 - 0x3cu;
                            cow_cdecl(g, COW_IMG(0x10314d95u), 5, arg2, COW_IMG(0x103ba3ccu), t20, arg2, COW_IMG(0x103ba3e8u));
                            t21 = g->ecx;
                            t22 = g->edx;
                            t23 = rd32(edi + 0x44u);
                            g->ecx = t21;
                            g->edx = t22;
                            g->esp = sp0 - 8u;
                            cow_cdecl(g, COW_IMG(0x10314d95u), 5, arg2, COW_IMG(0x103ba3b4u), t23, in_edi, in_esi);
                            t24 = g->ecx;
                            t25 = g->edx;
                            g->ecx = t24;
                            g->edx = t25;
                            g->esp = sp0 - 0x10u;
                            cow_cdecl(g, COW_IMG(0x10314d95u), 5, arg2, COW_IMG(0x103b3238u), arg2, COW_IMG(0x103ba3b4u), t23);
                            t26 = g->ecx;
                            t27 = g->edx;
                            ecx = t26;
                            edx = t27;
                        }
                        else
                        {
                            ecx = ecx - 1u;
                            g->ecx = ecx;
                            g->edx = edx;
                            g->esp = sp0 - 8u;
                            cow_cdecl(g, COW_IMG(0x10314d95u), 5, arg2, COW_IMG(0x103ba43cu), edx, in_edi, in_esi);
                            t6 = g->ecx;
                            t7 = g->edx;
                            ecx = t6;
                            edx = t7;
                        }
                    }
                }
            }
            if ((int32_t)(ebp + 1u) < (int32_t)rd32(arg1 + 0x44u))
            {
                eax = rd32(arg1 + 0x44u);
                ebp = ebp + 1u;
                goto L_1028d071;
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1028d050(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1028d050(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
