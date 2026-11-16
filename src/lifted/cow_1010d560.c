/* f_0x1010d560 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1010d560(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x1010d220u), self, 0);
    t2 = g->edx;
    if (t1 == 0u) goto L_1010d5a1;
    eax = t1;
    edx = t2;
    if (arg1 == 0u) goto L_1010d591;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t3 = cow_thiscall(g, COW_IMG(0x10111650u), eax, 1, arg1);
    t4 = g->edx;
    if (t3 == 0u) goto L_1010d5a1;
    eax = t3;
    edx = t4;
    g->esp = sp0 - 4u;
    t5 = cow_thiscall(g, COW_IMG(0x1010d3e0u), self, 2, eax, arg2);
    return t5;
L_1010d591: ;
    g->esp = sp0 - 4u;
    t6 = cow_thiscall(g, COW_IMG(0x1010d5b0u), self, 1, arg2);
    return t6;
L_1010d5a1: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010d560(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1010d560(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
