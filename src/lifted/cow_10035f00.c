/* f_0x10035f00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10035f00(Guest* g)
{
    uint32_t eax;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x1046392cu)) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        ecx = rd32(COW_IMG(0x1046392cu));
        g->eax = rd32(ecx);
        g->edx = in_edx;
        t1 = rd32(ecx);
        g->esp = sp0 - 4u;
        t2 = cow_thiscall(g, rd32(t1 + 0x18u), ecx, 1, 1u);
        t3 = g->edx;
        wr32(COW_IMG(0x1046392cu), 0u);
        eax = t2;
        edx = t3;
    }
    if (rd32(COW_IMG(0x10463928u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10463928u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t4 = rd32(ecx);
        g->esp = sp0 - 4u;
        t5 = cow_thiscall(g, rd32(t4 + 0x18u), ecx, 1, 1u);
        t6 = g->edx;
        wr32(COW_IMG(0x10463928u), 0u);
        eax = t5;
        edx = t6;
    }
    if (rd32(COW_IMG(0x10463930u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10463930u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t7 = rd32(ecx);
        g->esp = sp0 - 4u;
        t8 = cow_thiscall(g, rd32(t7 + 0x18u), ecx, 1, 1u);
        t9 = g->edx;
        wr32(COW_IMG(0x10463930u), 0u);
        eax = t8;
        edx = t9;
    }
    if (rd32(COW_IMG(0x10463934u)) == 0u)
    {
        ecx = rd32(COW_IMG(0x10463934u));
    }
    else
    {
        ecx = rd32(COW_IMG(0x10463934u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t10 = rd32(ecx);
        g->esp = sp0 - 4u;
        t11 = cow_thiscall(g, rd32(t10 + 0x18u), ecx, 1, 1u);
        t12 = g->ecx;
        t13 = g->edx;
        wr32(COW_IMG(0x10463934u), 0u);
        eax = t11;
        ecx = t12;
        edx = t13;
    }
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 4u;
    t14 = cow_call_regs(g, COW_IMG(0x10036020u), g->eax, g->ecx, edx, 1, 1, arg1);
    t15 = g->ecx;
    t16 = g->edx;
    g->ecx = t15;
    g->esp = sp0 - 8u;
    t17 = cow_call_regs(g, COW_IMG(0x10035f80u), g->eax, g->ecx, t16, 1, 1, arg1);
    t18 = g->ecx;
    t19 = g->edx;
    g->ecx = t18;
    g->esp = sp0 - 0xcu;
    t20 = cow_call_regs(g, COW_IMG(0x10036070u), g->eax, g->ecx, t19, 1, 1, arg1);
    t21 = g->ecx;
    t22 = g->edx;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x100360c0u), t20, g->ecx, t22, 1, 1, arg1);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10035f00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10035f00(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
