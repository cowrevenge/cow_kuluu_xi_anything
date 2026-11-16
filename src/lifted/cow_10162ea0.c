/* f_0x10162ea0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10162ea0(Guest* g)
{
    double d1;
    double d2;
    uint32_t eax;
    uint32_t edx;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    d1 = (double)rdf32(sp0 + 4u);
    if (!(d1 < (double)rdf32(COW_IMG(0x10329d38u))))
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, (double)rdf32(COW_IMG(0x10329d38u)), 0u);
    }
    else
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, (double)rdf32(COW_IMG(0x10329d38u)), 0u);
        wr32(sp0 + 4u, 0x40400000u);
    }
    g->edx = in_edx;
    d2 = fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(COW_IMG(0x10329ce8u)));
    fpush(g, d2);
    g->esp = sp0 - 4u;
    t3 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t4 = g->edx;
    wr16(self + 0x54u, (uint16_t)t3);
    if ((int16_t)t3 > 0)
    {
        eax = t3;
        edx = t4;
    }
    else
    {
        eax = t3;
        edx = t4;
        wr16(self + 0x54u, 0x14u);
    }
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10162ef0u), self, 0);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10162ea0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10162ea0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
