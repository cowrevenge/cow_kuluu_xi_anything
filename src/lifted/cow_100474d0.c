/* f_0x100474d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_100474d0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t in_edx = g->edx;

    t1 = rd32(COW_IMG(0x1047bfa8u));
    wr32(COW_IMG(0x1047bbc8u), 0u);
    wr32(COW_IMG(0x1047bbccu), 0u);
    g->edx = in_edx;
    t2 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(t1 + 0xdc8u), 0);
    t3 = g->edx;
    t4 = rd32(COW_IMG(0x1047bfa8u));
    t5 = rd32(t2 + 8u);
    wrf32(COW_IMG(0x1047bbd0u), (float)(double)(int32_t)t5);
    g->edx = t3;
    t6 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(t4 + 0xdc8u), 0);
    t7 = g->edx;
    t8 = rd32(t6 + 0xcu);
    wrf32(COW_IMG(0x1047bbd4u), (float)(double)(int32_t)t8);
    g->edx = t7;
    return t6;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100474d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100474d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
