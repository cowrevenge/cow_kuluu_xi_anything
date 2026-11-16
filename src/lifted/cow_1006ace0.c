/* f_0x1006ace0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1006ace0(Guest* g)
{
    double d1;
    double d2;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    d1 = fr(g, cos((double)rdf32(sp0 + 8u)));
    wrf32(arg1, (float)d1);
    d2 = fr(g, sin((double)rdf32(sp0 + 8u)));
    wrf32(arg1 + 4u, (float)d2);
    wr32(arg1 + 8u, 0u);
    wr32(arg1 + 0xcu, 0u);
    wrf32(arg1 + 0x10u, (float)-d2);
    wrf32(arg1 + 0x14u, (float)d1);
    wr32(arg1 + 0x18u, 0u);
    wr32(arg1 + 0x1cu, 0u);
    wr32(arg1 + 0x20u, 0u);
    wr32(arg1 + 0x24u, 0u);
    wr32(arg1 + 0x28u, 0x3f800000u);
    wr32(arg1 + 0x2cu, 0u);
    wr32(arg1 + 0x30u, 0u);
    wr32(arg1 + 0x34u, 0u);
    wr32(arg1 + 0x38u, 0u);
    wr32(arg1 + 0x3cu, 0x3f800000u);
    g->edx = 0x3f800000u;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006ace0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1006ace0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
