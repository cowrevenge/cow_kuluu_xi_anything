/* f_0x10154040 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10154040(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    t1 = rd32(self + 4u);
    g->eax = t1;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, t1);
    t3 = g->edx;
    t4 = rd32(self + 0x7cu);
    g->edx = t3;
    g->esp = sp0 - 8u;
    t5 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, t4);
    t6 = g->edx;
    g->edx = t6;
    g->esp = sp0 - 4u;
    t7 = cow_call_regs(g, COW_IMG(0x10257b40u), t5, self + 0x64u, g->edx, 1, 0);
    t8 = g->edx;
    g->esp = sp0;
    g->edx = t8;
    cow_tailcall(g, COW_IMG(0x1022ecf0u), t7, self + 8u, t8);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10154040(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10154040(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
