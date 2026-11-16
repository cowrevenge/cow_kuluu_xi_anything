/* f_0x1008f2a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1008f2a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if ((rd32(self + 0x120u) >> 8u & 2u) == 0u) goto L_1008f2d8;
    if ((uint32_t)(int8_t)rd8(self + 0xeeu) > 8u) goto L_1008f2d8;
    eax = (uint32_t)(int8_t)rd8(self + 0xeeu);
    t1 = rd32(COW_IMG(0x1008f2dcu) + rd8(COW_IMG(0x1008f2e4u) + eax) * 4u);
    switch (t1 - RD)
    {
    case 0x1008f2c6u: edx = rd8(COW_IMG(0x1008f2e4u) + eax); goto L_1008f2c6;
    case 0x1008f2d8u: goto L_1008f2d8;
    default: rt_fatal(g, COW_IMG(0x1008f2bfu), "switch");
    }
    return;
L_1008f2c6: ;
    if (rd32(self + 0xa0u) == 0u) goto L_1008f2d8;
    ecx = rd32(self + 0xa0u);
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, rd32(rd32(ecx) + 0x180u), rd32(ecx), ecx, edx);
    return;
L_1008f2d8: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1008f2a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1008f2a0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
