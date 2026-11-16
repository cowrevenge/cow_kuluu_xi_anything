/* f_0x1032157c - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_1032157c(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_14;
    uint32_t loc_34;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, 0xffffffffu);
    wr32(sp0 - 0xcu, COW_IMG(0x1034a5b0u));
    wr32(sp0 - 0x10u, COW_IMG(0x1031d0acu));
    wr32(sp0 - 0x14u, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0x14u);
    wr32(sp0 - 0x24u, in_ebx);
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, in_edi);
    wr32(sp0 - 0x1cu, sp0 - 0x2cu);
    if (rd32(arg3 + 4u) == 0u)
    {
        loc_14 = t1;
    }
    else
    {
        eax = rd32(arg3 + 4u);
        loc_14 = t1;
        if (rd8(eax + 8u) != 0u)
        {
            if (rd32(arg3 + 8u) != 0u)
            {
                eax = rd32(arg3 + 8u);
                wr32(sp0 - 8u, 0u);
                if ((rd8(arg3) & 8u) == 0u)
                {
                    edi = arg2 + eax + 0xcu;
                    goto L_10321619;
                }
                edi = arg2 + eax + 0xcu;
                wr32(sp0 - 0x30u, 1u);
                t2 = rd32(arg1 + 0x18u);
                wr32(sp0 - 0x34u, t2);
                g->eax = eax;
                g->esp = sp0 - 0x20u;
                t3 = cow_call_regs(g, COW_IMG(0x10324c86u), g->eax, arg3, arg2, 1, 5, t2, 1u, in_edi, in_esi, in_ebx);
                t4 = g->edx;
                if (t3 == 0u)
                {
                    eax = t3;
                    ecx = 1u;
                    edx = t4;
                    goto L_1032171c;
                }
                eax = t3;
                edx = t4;
                wr32(sp0 - 0x30u, 1u);
                wr32(sp0 - 0x34u, edi);
                g->eax = eax;
                g->esp = sp0 - 0x20u;
                t5 = cow_call_regs(g, COW_IMG(0x10324ca2u), g->eax, 1u, edx, 1, 5, edi, 1u, rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
                t6 = g->edx;
                if (t5 == 0u)
                {
                    eax = t5;
                    ecx = 1u;
                    edx = t6;
                    goto L_1032171c;
                }
                edx = t6;
                t7 = rd32(arg1 + 0x18u);
                wr32(edi, t7);
                wr32(sp0 - 0x30u, arg4 + 8u);
                eax = t7;
                ecx = arg4 + 8u;
L_1032160a: ;
                wr32(sp0 - 0x34u, eax);
                g->eax = eax;
                g->esp = sp0 - 0x28u;
                t17 = cow_cdecl(g, COW_IMG(0x103217a7u), 3, eax, arg4 + 8u, rd32(sp0 - 0x2cu));
                wr32(edi, t17);
L_10321721: ;
                wr32(sp0 - 8u, 0xffffffffu);
            }
        }
    }
    wr32(g->fs_base, loc_14);
    return;
L_10321619: ;
    if (!(rd8(arg4) & 1u)) goto L_10321673;
    wr32(sp0 - 0x30u, 1u);
    t8 = rd32(arg1 + 0x18u);
    wr32(sp0 - 0x34u, t8);
    g->eax = eax;
    g->esp = sp0 - 0x20u;
    t9 = cow_call_regs(g, COW_IMG(0x10324c86u), g->eax, arg3, arg2, 1, 5, t8, 1u, in_edi, in_esi, in_ebx);
    t10 = g->edx;
    if (t9 == 0u)
    {
        eax = t9;
        ecx = 1u;
        edx = t10;
        goto L_1032171c;
    }
    eax = t9;
    edx = t10;
    wr32(sp0 - 0x30u, 1u);
    wr32(sp0 - 0x34u, edi);
    g->eax = eax;
    g->esp = sp0 - 0x20u;
    t11 = cow_call_regs(g, COW_IMG(0x10324ca2u), g->eax, 1u, edx, 1, 5, edi, 1u, rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
    t12 = g->edx;
    if (t11 == 0u)
    {
        eax = t11;
        ecx = 1u;
        edx = t12;
        goto L_1032171c;
    }
    eax = t11;
    edx = t12;
    t13 = rd32(arg4 + 0x14u);
    wr32(sp0 - 0x30u, t13);
    t14 = rd32(arg1 + 0x18u);
    wr32(sp0 - 0x34u, t14);
    wr32(sp0 - 0x38u, edi);
    g->ecx = 1u;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    cow_cdecl(g, COW_IMG(0x10314a10u), 5, edi, t14, t13, rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u));
    t15 = g->ecx;
    t16 = g->edx;
    if (rd32(arg4 + 0x14u) != 4u) goto L_10321721;
    ecx = t15;
    edx = t16;
    if (rd32(edi) == 0u) goto L_10321721;
    eax = rd32(edi);
    wr32(sp0 - 0x30u, arg4 + 8u);
    goto L_1032160a;
L_10321673: ;
    wr32(sp0 - 0x30u, 1u);
    t18 = rd32(arg1 + 0x18u);
    wr32(sp0 - 0x34u, t18);
    if (rd32(arg4 + 0x18u) != 0u)
    {
        loc_34 = t18;
        goto L_103216bb;
    }
    loc_34 = t18;
    g->eax = eax;
    g->esp = sp0 - 0x20u;
    t19 = cow_call_regs(g, COW_IMG(0x10324c86u), g->eax, arg3, arg2, 1, 5, loc_34, 1u, in_edi, in_esi, in_ebx);
    t20 = g->edx;
    if (t19 == 0u)
    {
        eax = t19;
        ecx = 1u;
        edx = t20;
        goto L_1032171c;
    }
    eax = t19;
    edx = t20;
    wr32(sp0 - 0x30u, 1u);
    wr32(sp0 - 0x34u, edi);
    g->eax = eax;
    g->esp = sp0 - 0x20u;
    t21 = cow_call_regs(g, COW_IMG(0x10324ca2u), g->eax, 1u, edx, 1, 5, edi, 1u, rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
    t22 = g->edx;
    if (t21 == 0u)
    {
        eax = t21;
        ecx = 1u;
        edx = t22;
        goto L_1032171c;
    }
    eax = t21;
    edx = t22;
    t23 = rd32(arg4 + 0x14u);
    wr32(sp0 - 0x30u, t23);
    wr32(sp0 - 0x34u, arg4 + 8u);
    t24 = rd32(arg1 + 0x18u);
    wr32(sp0 - 0x38u, t24);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t25 = cow_cdecl(g, COW_IMG(0x103217a7u), 3, t24, arg4 + 8u, t23);
    t26 = g->edx;
    wr32(sp0 - 0x34u, t25);
    wr32(sp0 - 0x38u, edi);
    g->esp = sp0 - 0x24u;
    cow_cdecl(g, COW_IMG(0x10314a10u), 5, edi, t25, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u));
    goto L_10321721;
L_103216bb: ;
    g->eax = eax;
    g->esp = sp0 - 0x20u;
    t27 = cow_call_regs(g, COW_IMG(0x10324c86u), g->eax, arg3, arg2, 1, 5, loc_34, 1u, in_edi, in_esi, in_ebx);
    t28 = g->edx;
    if (t27 == 0u)
    {
        eax = t27;
        ecx = 1u;
        edx = t28;
        goto L_1032171c;
    }
    eax = t27;
    edx = t28;
    wr32(sp0 - 0x30u, 1u);
    wr32(sp0 - 0x34u, edi);
    g->eax = eax;
    g->esp = sp0 - 0x20u;
    t29 = cow_call_regs(g, COW_IMG(0x10324ca2u), g->eax, 1u, edx, 1, 5, edi, 1u, rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
    t30 = g->edx;
    if (t29 == 0u)
    {
        eax = t29;
        ecx = 1u;
        edx = t30;
        goto L_1032171c;
    }
    eax = t29;
    edx = t30;
    t31 = rd32(arg4 + 0x18u);
    wr32(sp0 - 0x30u, t31);
    g->eax = eax;
    g->esp = sp0 - 0x24u;
    t32 = cow_call_regs(g, COW_IMG(0x10324cbeu), g->eax, 1u, edx, 1, 3, t31, rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u));
    t33 = g->edx;
    if (t32 == 0u)
    {
        eax = t32;
        ecx = rd32(sp0 - 0x30u);
        edx = t33;
        goto L_1032171c;
    }
    ecx = rd32(sp0 - 0x30u);
    edx = t33;
    if ((rd8(arg4) & 4u) == 0u)
    {
        wr32(sp0 - 0x30u, arg4 + 8u);
        t38 = rd32(arg1 + 0x18u);
        wr32(sp0 - 0x34u, t38);
        g->eax = arg4 + 8u;
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        t39 = cow_cdecl(g, COW_IMG(0x103217a7u), 3, t38, arg4 + 8u, rd32(sp0 - 0x2cu));
        t40 = g->edx;
        wr32(sp0 - 0x30u, t39);
        t41 = rd32(arg4 + 0x18u);
        wr32(sp0 - 0x34u, t41);
        wr32(sp0 - 0x38u, edi);
        g->esp = sp0 - 0x2cu;
        cow_stdcall(g, COW_IMG(0x103162dau), 3, edi, t41, t39);
    }
    else
    {
        wr32(sp0 - 0x30u, 1u);
        wr32(sp0 - 0x34u, arg4 + 8u);
        t34 = rd32(arg1 + 0x18u);
        wr32(sp0 - 0x38u, t34);
        g->eax = arg4 + 8u;
        g->edx = edx;
        g->esp = sp0 - 0x2cu;
        t35 = cow_cdecl(g, COW_IMG(0x103217a7u), 3, t34, arg4 + 8u, 1u);
        t36 = g->edx;
        wr32(sp0 - 0x34u, t35);
        t37 = rd32(arg4 + 0x18u);
        wr32(sp0 - 0x38u, t37);
        wr32(sp0 - 0x3cu, edi);
        cow_stdcall(g, COW_IMG(0x103162e1u), 4, edi, t37, t35, 1u);
    }
    goto L_10321721;
L_1032171c: ;
    g->esp = sp0 - 0x2cu;
    cow_fastcall(g, COW_IMG(0x10321895u), ecx, edx, 0);
    goto L_10321721;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1032157c(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1032157c(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
