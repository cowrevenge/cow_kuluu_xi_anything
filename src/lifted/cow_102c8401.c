/* f_0x102c8401 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_102c8401(Guest* g)
{
    double d1;
    double d2;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 != 0u)
    {
        if (arg2 != 0u)
        {
            d1 = rdf64(sp0 + 0x10u);
            wr8(arg2 + 9u, rd8(arg2 + 9u) | 0x40u);
            wrf64(arg2 + 0xe0u, d1);
            d2 = rdf64(sp0 + 0x18u);
            wr8(arg2 + 0xdcu, (uint8_t)arg3);
            wrf64(arg2 + 0xe8u, d2);
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c8401(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102c8401(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
