/* f_0x101febb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101febb0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint8_t)arg2 == 0u) goto L_101febe6;
    g->edx = in_edx;
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x101fd1f0u), arg1, rd32(COW_IMG(0x10663aacu)), g->edx, 0, 2, arg1, 1u);
    t1 = g->edx;
    t2 = rd32(COW_IMG(0x10663ab4u));
    wr8(t2 + 0x10u, 1u);
    wr8(t2 + 0x12u, 1u);
    t3 = rd32(COW_IMG(0x10663ab4u));
    wr8(t3 + 0x11u, 0xffu);
    g->edx = t1;
    return cow_tailcall(g, COW_IMG(0x10037b90u), t2, t3, t1);
L_101febe6: ;
    return (in_eax & 0xffffff00u) | (uint8_t)arg2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101febb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101febb0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
