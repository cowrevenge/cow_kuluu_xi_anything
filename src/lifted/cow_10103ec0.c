/* f_0x10103ec0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10103ec0(Guest* g)
{
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    wr32(arg1, 0u);
    wr16(arg1 + 0x20u, 0u);
    wr16(arg1 + 0x22u, 0xffffu);
    wr16(arg1 + 0x24u, 0xffffu);
    wr16(arg1 + 0x44u, 0xffffu);
    wr16(arg1 + 0x46u, 0xffffu);
    wr16(arg1 + 0x48u, 0xffffu);
    wr16(arg1 + 0x1cu, 0xffffu);
    wr16(arg1 + 0x1eu, 0xffffu);
    wr8(arg1 + 0xcu, 0u);
    wr16(arg1 + 0x4au, 0u);
    wr32(arg1 + 0x60u, 0u);
    wr16(arg1 + 0x4eu, 0u);
    wr32(arg1 + 0x50u, 0u);
    wr32(arg1 + 0x54u, 0u);
    wr32(arg1 + 0x58u, 0u);
    wr8(arg1 + 0x4cu, 0xffu);
    wr8(arg1 + 0x4du, 0xffu);
    wr32(arg1 + 0x5cu, 0u);
    wr32(arg1 + 0x64u, 0u);
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10103ec0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10103ec0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
