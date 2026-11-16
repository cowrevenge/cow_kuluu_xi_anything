/* f_0x101fb3d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_101fb3d0(Guest* g)
{
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    wr16(self + 0x6cu, (uint16_t)arg1);
    wr16(self + 0x6eu, (uint16_t)arg2);
    wr16(self + 0x70u, (uint16_t)(arg3 * arg3));
    wr8(self + 0x64u, 1u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fb3d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101fb3d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
