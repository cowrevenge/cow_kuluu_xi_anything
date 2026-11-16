/* f_0x1031f627 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=2 */
uint32_t cow_fn_1031f627(Guest* g)
{
    double d1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 16u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, self);
    wr32(sp0 - 0xcu, self);
    d1 = rdf64(sp0 + 4u);
    wrf64(sp0 - 0xcu, d1);
    t2 = rd32(sp0 + 0xau);
    wr16(sp0 - 6u, (uint16_t)(arg3 << 4u | (t2 & 0x800fu)));
    fpush(g, rdf64(sp0 - 0xcu));
    return arg3 << 4u | (t2 & 0xffff0000u) | (t2 & 0x800fu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031f627(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1031f627(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
