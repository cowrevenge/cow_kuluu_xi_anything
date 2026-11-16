/* f_0x10274bc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10274bc0(Guest* g)
{
    double d1;
    double d11;
    double d2;
    double d3;
    double d7;
    uint32_t eax;
    uint32_t t10;
    uint32_t t12;
    uint32_t t13;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t8;
    uint32_t t9;
    double x0;
    double x1;
    double x2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((cow_fsw(g, (double)rdf32(arg2), (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, (double)rdf32(arg2), (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
        x0 = (double)rdf32(COW_IMG(0x10340b20u));
    }
    else
    {
        eax = cow_fsw(g, (double)rdf32(arg2), (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
        x0 = (double)rdf32(COW_IMG(0x10340b24u));
    }
    d1 = (double)rdf32(arg2 + 4u);
    if ((cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 1u) & 0x4100u;
        x1 = (double)rdf32(COW_IMG(0x10340b20u));
    }
    else
    {
        eax = cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 1u) & 0x4100u;
        x1 = (double)rdf32(COW_IMG(0x10340b24u));
    }
    d2 = (double)rdf32(arg2 + 8u);
    if ((cow_fsw(g, d2, (double)rdf32(COW_IMG(0x103295d8u)), 2u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d2, (double)rdf32(COW_IMG(0x103295d8u)), 2u) & 0x4100u;
        x2 = (double)rdf32(COW_IMG(0x10340b20u));
    }
    else
    {
        eax = cow_fsw(g, d2, (double)rdf32(COW_IMG(0x103295d8u)), 2u) & 0x4100u;
        x2 = (double)rdf32(COW_IMG(0x10340b24u));
    }
    g->ecx = self;
    g->edx = in_edx;
    d3 = fr(g, fr(g, x0 + (double)rdf32(arg2)) * (double)(int32_t)rd32(COW_IMG(0x103b27acu)));
    fpush(g, d3);
    g->esp = sp0 - 8u;
    t4 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t5 = g->ecx;
    t6 = g->edx;
    wr16(arg1, (uint16_t)t4);
    g->ecx = t5;
    g->edx = t6;
    d7 = fr(g, fr(g, x1 + (double)rdf32(arg2 + 4u)) * (double)(int32_t)rd32(COW_IMG(0x103b27acu)));
    fpush(g, d7);
    t8 = cow_call_regs(g, COW_IMG(0x10311c6cu), t4, g->ecx, g->edx, 1, 0);
    t9 = g->ecx;
    t10 = g->edx;
    wr16(arg1 + 2u, (uint16_t)t8);
    g->edx = t10;
    d11 = fr(g, fr(g, x2 + (double)rdf32(arg2 + 8u)) * (double)(int32_t)rd32(COW_IMG(0x103b27acu)));
    fpush(g, d11);
    t12 = cow_call_regs(g, COW_IMG(0x10311c6cu), t8, g->ecx, g->edx, 1, 0);
    t13 = g->edx;
    wr16(arg1 + 4u, (uint16_t)t12);
    g->edx = t13;
    return t12;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10274bc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10274bc0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
