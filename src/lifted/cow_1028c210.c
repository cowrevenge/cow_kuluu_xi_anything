/* f_0x1028c210 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1028c210(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
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
    uint32_t t4;
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = rd32(rd32(sp0 + 4u) + 0x24u);
    t2 = rd32(rd32(sp0 + 4u) + 0x34u);
    t3 = rd32(rd32(sp0 + 4u) + 0x44u);
    t4 = rd32(rd32(sp0 + 4u) + 0x7cu);
    t5 = rd32(rd32(sp0 + 4u) + 0x90u);
    t6 = rd32(rd32(sp0 + 4u) + 0x68u);
    t7 = rd32(rd32(sp0 + 4u) + 0x58u);
    t8 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, 0u);
    if ((int32_t)t7 <= 0)
    {
        ecx = t5;
        edx = t6;
        ebx = 0u;
        ebp = t7;
        loc_18 = t1;
        loc_14 = t2;
        loc_10 = t3;
        loc_c = t4;
        loc_8 = t5;
        loc_4 = t6;
        loc_1c = 0u;
        goto L_1028c296;
    }
    eax = t4;
    ecx = t5;
    edx = t6;
    ebx = 0u;
    ebp = t7;
    esi = t8;
    edi = 0u;
    loc_18 = t1;
    loc_14 = t2;
    loc_10 = t3;
    loc_c = t4;
    loc_8 = t5;
    loc_4 = t6;
    loc_1c = 0u;
L_1028c25b: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t9 = cow_cdecl(g, COW_IMG(0x102798b0u), 2, esi, edi);
    t10 = g->edx;
    if (rd32(t9 + 0x34u) == 0u)
    {
        eax = t9;
        edx = t10;
    }
    else
    {
        eax = t9;
        ecx = rd32(t9 + 0x34u);
        t11 = loc_1c + rd32(ecx + 0x14u);
        edx = t11;
        loc_1c = t11;
    }
    if (rd32(eax) == 0xa0002u)
    {
        ecx = rd32(eax) - 0xa0002u;
        wr32(sp0 + 4u, rd32(sp0 + 4u) + 1u);
    }
    else
    {
        ecx = rd32(eax) - 0xa0002u;
        if (ecx != 7u)
        {
            ecx = ecx - 7u;
        }
        else
        {
            ecx = ecx - 7u;
            ebx = ebx + rd32(eax + 0x44u);
        }
    }
    if ((int32_t)(edi + 1u) < (int32_t)ebp)
    {
        edi = edi + 1u;
        goto L_1028c25b;
    }
L_1028c296: ;
    g->ebx = ebx;
    g->ecx = ecx;
    g->esp = sp0 - 0x20u;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x103b9afcu), in_edi, in_esi, in_ebp);
    t12 = g->ecx;
    t13 = g->edx;
    if (ebp == 0u)
    {
        ecx = t12;
        edx = t13;
    }
    else
    {
        ecx = t12;
        edx = t13;
        g->ebx = ebx;
        g->ecx = ecx;
        g->esp = sp0 - 0x24u;
        cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x103b9ae8u), ebp, in_edi, in_esi);
        t14 = g->ecx;
        t15 = g->edx;
        ecx = t14;
        edx = t15;
    }
    if (ebx != 0u)
    {
        g->ebx = ebx;
        g->ecx = ecx;
        g->esp = sp0 - 0x24u;
        cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x103b9ad4u), ebx, in_edi, in_esi);
        t16 = g->ecx;
        t17 = g->edx;
        ecx = t16;
        edx = t17;
    }
    if (rd32(sp0 + 4u) != 0u)
    {
        eax = rd32(sp0 + 4u);
        g->ebx = ebx;
        g->ecx = ecx;
        g->esp = sp0 - 0x24u;
        cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x103b9ac0u), eax, in_edi, in_esi);
        t18 = g->ecx;
        t19 = g->edx;
        ecx = t18;
        edx = t19;
    }
    if (loc_1c != 0u)
    {
        eax = loc_1c;
        g->ebx = ebx;
        g->ecx = ecx;
        g->esp = sp0 - 0x24u;
        cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x103b9aacu), eax, in_edi, in_esi);
        t20 = g->ecx;
        t21 = g->edx;
        ecx = t20;
        edx = t21;
    }
    g->ebx = ebx;
    g->ecx = ecx;
    g->esp = sp0 - 0x20u;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x103b9afcu), in_edi, in_esi, in_ebp);
    t22 = g->ecx;
    t23 = g->edx;
    g->ebx = ebx;
    g->esp = sp0 - 0x28u;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t23, 1, 5, arg2, COW_IMG(0x10350e4cu), arg2, COW_IMG(0x103b9afcu), in_edi);
    t24 = g->edx;
    if (loc_18 == 0u)
    {
        edx = t24;
    }
    else
    {
        ecx = loc_18;
        edx = t24;
        if ((int32_t)ecx > 1)
        {
            eax = COW_IMG(0x1034f7b0u);
        }
        else
        {
            eax = COW_IMG(0x103d3c84u);
        }
        g->ebx = ebx;
        g->esp = sp0 - 0x28u;
        cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x103b9a94u), ecx, eax, in_edi);
        t25 = g->edx;
        edx = t25;
    }
    if (loc_14 == 0u)
    {
        ecx = loc_14;
    }
    else
    {
        ecx = loc_14;
        if ((int32_t)ecx > 1)
        {
            eax = COW_IMG(0x1034f7b0u);
        }
        else
        {
            eax = COW_IMG(0x103d3c84u);
        }
        g->ebx = ebx;
        g->ecx = ecx;
        g->esp = sp0 - 0x28u;
        cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x103b9a7cu), ecx, eax, in_edi);
        t26 = g->ecx;
        t27 = g->edx;
        ecx = t26;
        edx = t27;
    }
    if (ebp != 0u)
    {
        if ((int32_t)ebp > 1)
        {
            eax = COW_IMG(0x1034f7b0u);
        }
        else
        {
            eax = COW_IMG(0x103d3c84u);
        }
        g->ebx = ebx;
        g->esp = sp0 - 0x28u;
        cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x103b9a64u), ebp, eax, in_edi);
        t28 = g->edx;
        edx = t28;
    }
    if (loc_10 != 0u)
    {
        ecx = loc_10;
        if ((int32_t)ecx > 1)
        {
            eax = COW_IMG(0x1034f7b0u);
        }
        else
        {
            eax = COW_IMG(0x103d3c84u);
        }
        g->ebx = ebx;
        g->esp = sp0 - 0x28u;
        cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x103b9a4cu), ecx, eax, in_edi);
        t29 = g->edx;
        edx = t29;
    }
    if (loc_c != 0u)
    {
        ecx = loc_c;
        if ((int32_t)ecx > 1)
        {
            eax = COW_IMG(0x1034f7b0u);
        }
        else
        {
            eax = COW_IMG(0x103d3c84u);
        }
        g->ebx = ebx;
        g->esp = sp0 - 0x28u;
        cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x103b9a38u), ecx, eax, in_edi);
        t30 = g->edx;
        edx = t30;
    }
    if (loc_8 == 0u)
    {
        ecx = loc_8;
    }
    else
    {
        ecx = loc_8;
        if ((int32_t)ecx > 1)
        {
            eax = COW_IMG(0x1034f7b0u);
        }
        else
        {
            eax = COW_IMG(0x103d3c84u);
        }
        g->ebx = ebx;
        g->ecx = ecx;
        g->esp = sp0 - 0x28u;
        cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x103b9a24u), ecx, eax, in_edi);
        t31 = g->ecx;
        t32 = g->edx;
        ecx = t31;
        edx = t32;
    }
    if (loc_4 != 0u)
    {
        eax = loc_4;
        g->ebx = ebx;
        g->ecx = ecx;
        g->esp = sp0 - 0x24u;
        cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x103b9a10u), eax, in_edi, in_esi);
        t33 = g->ecx;
        t34 = g->edx;
        ecx = t33;
        edx = t34;
    }
    g->ebx = ebx;
    g->esp = sp0 - 0x20u;
    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, edx, 1, 5, arg2, COW_IMG(0x10350e4cu), in_edi, in_esi, in_ebp);
    g->ebx = in_ebx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1028c210(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1028c210(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
