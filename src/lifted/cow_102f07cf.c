/* f_0x102f07cf - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102f07cf(Guest* g)
{
    double d1;
    double d2;
    double x0;
    double x1;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    d1 = rdf64(sp0 + 8u);
    d2 = fabs(fr(g, fr(g, d1 * rdf64(sp0 + 0x10u)) - rdf64(COW_IMG(0x1032a100u))));
    if ((cow_fsw(g, d2, rdf64(COW_IMG(0x1033cd90u)), 2u) >> 8u & 0x41u) != 0u)
    {
        x1 = rdf64(sp0 + 0x10u);
        x0 = d1;
    }
    else
    {
        x1 = rdf64(sp0 + 0x10u);
        x0 = d1;
        wr8(arg1 + 0x61u, rd8(arg1 + 0x61u) | 0x20u);
    }
    wrf32(arg1 + 0x130u, (float)x1);
    wrf32(arg1 + 0x134u, (float)x0);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f07cf(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102f07cf(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
