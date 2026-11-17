/* f_0x10253850 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10253850(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    if (rd32(rd32(sp0 + 4u) + 0x50u) == 0u)
    {
        eax = rd32(rd32(sp0 + 4u) + 0x50u);
        ecx = rd32(sp0 + 4u);
        goto L_10253861;
    }
    eax = rd32(rd32(sp0 + 4u) + 0x50u);
    ecx = rd32(sp0 + 4u);
    wr32(sp0 + 4u, ecx);
    g->esp = sp0;
    cow_tailcall(g, eax, eax, ecx, in_edx);
    return;
L_10253861: ;
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, in_edx, 1, 2, ecx, COW_IMG(0x10389d70u));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10253850(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10253850(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
