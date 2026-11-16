/* f_0x101530c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101530c0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int16_t)rd16(rd32(sp0 + 4u) + 0xau) >= 2)
    {
        edx = rd32(sp0 + 4u);
        goto L_101530d4;
    }
    edx = rd32(sp0 + 4u);
    wr32(sp0 + 4u, edx);
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x10153090u), in_eax, self, edx);
L_101530d4: ;
    if ((int32_t)arg2 < 0) goto L_101530f5;
    if ((int32_t)arg2 >= (int32_t)rd32(edx + 0x24u)) goto L_101530f5;
    eax = rd32(edx + 0x24u);
    g->edx = edx;
    return eax * 0xcu + edx + rd32(arg2 * 0xcu + edx + 0x38u) + 0x38u;
L_101530f5: ;
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101530c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101530c0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
