/* f_0x101cd060 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101cd060(Guest* g)
{
    double d2;
    double d3;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x10193850u), in_eax, g->ecx, g->edx, 1, 1, 0xc1u);
    if (t1 == 1u) goto L_101cd097;
    d2 = (double)rdf32(rd32(rd32(COW_IMG(0x104568fcu)) + 0x50u) + 0x4cu);
    d3 = (double)rdf32(rd32(rd32(COW_IMG(0x104568fcu)) + 0x50u) + 0x58u);
    if ((cow_fsw(g, d2, d3, 0u) & 0x100u) != 0u) goto L_101cd097;
    return (uint32_t)(int8_t)rd8(COW_IMG(0x10337e04u) + arg1);
L_101cd097: ;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101cd060(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101cd060(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
