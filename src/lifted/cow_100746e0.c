/* f_0x100746e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_100746e0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    cow_frame(g, sp0, 12u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, sp0 + 4u);
    g->eax = sp0 + 4u;
    g->edx = rd32(rd32(COW_IMG(0x1047cf7cu)));
    t1 = rd32(rd32(COW_IMG(0x1047cf7cu)));
    g->esp = sp0;
    t2 = cow_thiscall(g, rd32(t1 + 0xbcu), rd32(COW_IMG(0x1047cf7cu)), 2, sp0 + 4u, self);
    t3 = g->edx;
    g->edx = t3;
    return t2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100746e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100746e0(g);
    g->esp = sp0;
    rt_return(g, r, 64u);
}
/* COW_ADAPTER END */
