/* f_0x101ed6d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101ed6d0(Guest* g)
{
    double d3;
    double d4;
    double d5;
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_stdcall(g, COW_IMG(0x100fc2e0u), 0);
    t2 = g->edx;
    if ((uint16_t)t1 == 0u)
    {
        eax = t1;
        edx = t2;
    }
    else
    {
        eax = t1;
        edx = t2;
        d3 = (double)(float)fr(g, (double)rdf32(rd32(COW_IMG(0x10480af0u) + (uint16_t)eax * 4u) + 4u) - (double)rdf32(self + 0x14u));
        d4 = fr(g, (double)rdf32(rd32(COW_IMG(0x10480af0u) + (uint16_t)eax * 4u) + 0xcu) - (double)rdf32(self + 0x1cu));
        d5 = fr(g, fr(g, d4 * d4) + fr(g, d3 * d3));
        if ((cow_fsw(g, d5, (double)rdf32(COW_IMG(0x103344b4u)), 1u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d5, (double)rdf32(COW_IMG(0x103344b4u)), 1u) & 0x4100u;
        }
        else
        {
            g->eax = rd32(self);
            g->edx = edx;
            t6 = rd32(self);
            g->esp = sp0 - 0x14u;
            t7 = cow_thiscall(g, rd32(t6 + 0x18u), self, 2, 6u, 0u);
            t8 = g->edx;
            eax = t7;
            edx = t8;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ed6d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ed6d0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
