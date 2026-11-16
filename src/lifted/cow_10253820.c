/* f_0x10253820 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10253820(Guest* g)
{
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;

    t1 = rd32(rd32(sp0 + 4u) + 0x1cu);
    g->eax = t1;
    t2 = rd32(sp0 + 4u);
    g->esp = sp0 - 4u;
    t3 = cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, self, in_edx, 1, 1, t1);
    t4 = g->edx;
    t5 = rd32(t2 + 0x20u);
    g->esp = sp0;
    t6 = cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, t5, t4, 1, 3, t5, t1, in_esi);
    t7 = g->ecx;
    t8 = rd32(t2 + 0x24u);
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, t7, t8, 1, 3, t8, t5, t1);
    t9 = g->ecx;
    t10 = g->edx;
    t11 = rd32(t2 + 0x28u);
    wr32(sp0 + 4u, t11);
    g->esp = sp0;
    g->edx = t10;
    cow_tailcall(g, COW_IMG(0x10312eedu), t11, t9, t10);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10253820(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10253820(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
