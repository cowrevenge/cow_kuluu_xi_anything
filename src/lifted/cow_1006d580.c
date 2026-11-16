/* f_0x1006d580 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=1 */
uint32_t cow_fn_1006d580(Guest* g)
{
    double d1;
    double d2;
    double d3;
    uint32_t eax;
    double x0;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    d1 = (double)rdf32(arg1 + 4u);
    d2 = (double)rdf32(arg1 + 8u);
    d3 = fr(g, fr(g, fr(g, (double)rdf32(arg1) * (double)rdf32(arg1)) + fr(g, d1 * d1)) + fr(g, d2 * d2));
    if (d3 != rdf64(COW_IMG(0x1032a108u)))
    {
        eax = (arg1 & 0xffff0000u) | (uint16_t)cow_fsw(g, d3, rdf64(COW_IMG(0x1032a108u)), 1u);
        x0 = d3;
        goto L_1006d5bc;
    }
    eax = (arg1 & 0xffff0000u) | (uint16_t)cow_fsw(g, d3, rdf64(COW_IMG(0x1032a108u)), 1u);
    x0 = d3;
    fpush(g, (double)rdf32(COW_IMG(0x103295d8u)));
    return eax;
L_1006d5bc: ;
    fpush(g, fr(g, sqrt(x0)));
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006d580(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1006d580(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
