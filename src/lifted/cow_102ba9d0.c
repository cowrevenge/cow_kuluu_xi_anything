/* f_0x102ba9d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102ba9d0(Guest* g)
{
    double d10;
    double d2;
    double d6;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t t1;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->ecx = rd32(arg1 + 0xcu);
    g->edx = in_edx;
    t1 = rd32(arg1 + 0xcu);
    d2 = fr(g, fr(g, fr(g, (double)rdf32(arg3 * 0xcu + rd32(arg1 + 0xcu)) - (double)rdf32(arg1 + 0x28u)) / (double)rdf32(arg1 + 0x1cu)) * (double)rdf32(COW_IMG(0x1033678cu)));
    fpush(g, d2);
    g->esp = sp0 - 0x10u;
    t3 = cow_call_regs(g, COW_IMG(0x10311c6cu), arg3 * 3u, g->ecx, g->edx, 1, 0);
    t4 = g->ecx;
    t5 = g->edx;
    g->ecx = t4;
    g->edx = t5;
    d6 = fr(g, fr(g, fr(g, (double)rdf32(arg3 * 0xcu + t1 + 4u) - (double)rdf32(arg1 + 0x2cu)) / (double)rdf32(arg1 + 0x20u)) * (double)rdf32(COW_IMG(0x1033678cu)));
    fpush(g, d6);
    t7 = cow_call_regs(g, COW_IMG(0x10311c6cu), t3, g->ecx, g->edx, 1, 0);
    t8 = g->ecx;
    t9 = g->edx;
    d10 = fr(g, fr(g, fr(g, (double)rdf32(arg3 * 0xcu + t1 + 8u) - (double)rdf32(arg1 + 0x30u)) / (double)rdf32(arg1 + 0x24u)) * (double)rdf32(COW_IMG(0x1033678cu)));
    fpush(g, d10);
    t11 = cow_call_regs(g, COW_IMG(0x10311c6cu), t7, g->ecx, g->edx, 1, 0);
    if ((int32_t)t3 >= 0)
    {
        eax = t11;
        ebx = t3;
        ebp = t7;
        if ((int32_t)ebx > 14)
        {
            ebx = 0xeu;
        }
    }
    else
    {
        eax = t11;
        ebp = t7;
        ebx = 0u;
    }
    if ((int32_t)ebp >= 0)
    {
        if ((int32_t)ebp > 14)
        {
            ebp = 0xeu;
        }
    }
    else
    {
        ebp = 0u;
    }
    if ((int32_t)eax >= 0)
    {
        if ((int32_t)eax > 14)
        {
            eax = 0xeu;
        }
    }
    else
    {
        eax = 0u;
    }
    t12 = rd32(eax * 0x384u + ebp * 0x3cu + ebx * 4u + rd32(arg1));
    t13 = rd32(arg1 + 4u);
    wr32(arg2 * 0xcu + t13 + 8u, t12);
    t14 = arg2 * 0xcu + t13;
    wr32(eax * 0x384u + ebp * 0x3cu + ebx * 4u + rd32(arg1), t14);
    wr32(t14, arg3);
    wr32(t14 + 4u, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ba9d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102ba9d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
