/* f_0x1030afcb - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
uint32_t cow_fn_1030afcb(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd16(rd32(arg2 + 0x50u));
    t2 = rd16(arg3);
    t3 = rd8(rd32(arg1 + 0x11cu) + ((uint32_t)((int32_t)((uint32_t)(int16_t)rd16(rd32(arg2 + 0x50u)) * (uint32_t)(int16_t)rd16(arg3) + 4u) >> 3u) & 0x3ffu) + 0x80u);
    t4 = rd32(arg4);
    wr8(arg5 + t4, (uint8_t)t3);
    g->edx = t4;
    return ((uint32_t)((int32_t)((uint32_t)(int16_t)t1 * (uint32_t)(int16_t)t2 + 4u) >> 3u) & 0x300u) | t3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1030afcb(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1030afcb(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
