/* f_0x1008b270 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1008b270(Guest* g)
{
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(self + 0x78u) == 0u)
    {
        edx = in_edx;
        goto L_1008b29b;
    }
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x1008b2b0u), g->eax, self + 0x7cu, arg1, 1, 3, arg1, self + 0x7cu, arg2);
    t2 = g->edx;
    if ((uint8_t)t1 != 1u)
    {
        edx = t2;
        goto L_1008b29b;
    }
    edx = t2;
    g->edx = edx;
    return self + 0x74u;
L_1008b29b: ;
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1008b270(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1008b270(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
