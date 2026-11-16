/* f_0x10181fe0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=2 */
uint32_t cow_fn_10181fe0(Guest* g)
{
    double d1;
    double d10;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    d1 = (double)rdf32(sp0 + 8u);
    if (!(d1 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    }
    else
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        d2 = (double)rdf32(sp0 + 8u);
        wrf32(sp0 + 8u, (float)-d2);
    }
    d3 = (double)rdf32(sp0 + 8u);
    if ((cow_fsw(g, (double)rdf32(arg1), d3, 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, (double)rdf32(arg1), d3, 0u) & 0x4100u;
        ecx = 0u;
    }
    else
    {
        eax = cow_fsw(g, (double)rdf32(arg1), d3, 0u) & 0x4100u;
        ecx = 1u;
    }
    d4 = -(double)rdf32(sp0 + 8u);
    if ((cow_fsw(g, d4, (double)rdf32(arg1), 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d4, (double)rdf32(arg1), 1u) & 0x4100u;
        x0 = d4;
    }
    else
    {
        eax = cow_fsw(g, d4, (double)rdf32(arg1), 1u) & 0x4100u;
        x0 = d4;
        ecx = ecx | 2u;
    }
    d5 = (double)rdf32(arg1 + 4u);
    d6 = (double)rdf32(sp0 + 8u);
    if ((cow_fsw(g, d5, d6, 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d5, d6, 1u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d5, d6, 1u) & 0x4100u;
        ecx = ecx | 4u;
    }
    d7 = (double)rdf32(arg1 + 4u);
    if ((cow_fsw(g, x0, d7, 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, x0, d7, 1u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, x0, d7, 1u) & 0x4100u;
        ecx = ecx | 8u;
    }
    d8 = (double)rdf32(arg1 + 8u);
    d9 = (double)rdf32(sp0 + 8u);
    if ((cow_fsw(g, d8, d9, 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d8, d9, 1u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d8, d9, 1u) & 0x4100u;
        ecx = ecx | 0x10u;
    }
    d10 = (double)rdf32(arg1 + 8u);
    if ((cow_fsw(g, x0, d10, 0u) & 0x4100u) == 0u)
    {
        ecx = ecx | 0x20u;
    }
    return ecx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10181fe0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10181fe0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
