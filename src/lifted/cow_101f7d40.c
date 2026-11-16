/* f_0x101f7d40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101f7d40(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint8_t)arg2 == 0u) goto L_101f7d65;
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_stdcall(g, COW_IMG(0x100f9430u), 0);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x101f8ea0u), rd32(COW_IMG(0x10663888u)), 1, 0u);
    t4 = g->edx;
    g->edx = t4;
    return cow_tailcall(g, COW_IMG(0x101fb910u), t3, rd32(COW_IMG(0x10663894u)), t4);
L_101f7d65: ;
    return (in_eax & 0xffffff00u) | (uint8_t)arg2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f7d40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101f7d40(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
