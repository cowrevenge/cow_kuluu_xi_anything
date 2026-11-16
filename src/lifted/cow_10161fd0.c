/* f_0x10161fd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10161fd0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if ((int32_t)(((uint32_t)(int16_t)rd16(sp0 + 4u) ^ (uint32_t)((int32_t)(uint32_t)(int16_t)rd16(sp0 + 4u) >> 0x1fu)) - (uint32_t)((int32_t)(uint32_t)(int16_t)rd16(sp0 + 4u) >> 0x1fu)) >= 17)
    {
        eax = ((uint32_t)(int16_t)rd16(sp0 + 4u) ^ (uint32_t)((int32_t)(uint32_t)(int16_t)rd16(sp0 + 4u) >> 0x1fu)) - (uint32_t)((int32_t)(uint32_t)(int16_t)rd16(sp0 + 4u) >> 0x1fu);
        edx = (uint32_t)((int32_t)(uint32_t)(int16_t)rd16(sp0 + 4u) >> 0x1fu);
        goto L_10161fe7;
    }
    eax = ((uint32_t)(int16_t)rd16(sp0 + 4u) ^ (uint32_t)((int32_t)(uint32_t)(int16_t)rd16(sp0 + 4u) >> 0x1fu)) - (uint32_t)((int32_t)(uint32_t)(int16_t)rd16(sp0 + 4u) >> 0x1fu);
    return rd32(COW_IMG(0x103353c8u) + eax * 4u);
L_10161fe7: ;
    wr32(sp0 + 4u, eax);
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x10129d00u), eax, self, edx);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10161fd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10161fd0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
