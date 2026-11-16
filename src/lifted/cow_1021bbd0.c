/* f_0x1021bbd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1021bbd0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x106646a0u)) == 0u)
    {
        eax = in_eax;
        ecx = rd32(COW_IMG(0x106646a0u));
        edx = in_edx;
    }
    else
    {
        ecx = rd32(COW_IMG(0x106646a0u));
        g->eax = rd32(ecx);
        g->edx = in_edx;
        t1 = rd32(ecx);
        g->esp = sp0;
        t2 = cow_thiscall(g, rd32(t1), ecx, 1, 1u);
        t3 = g->ecx;
        t4 = g->edx;
        eax = t2;
        ecx = t3;
        edx = t4;
    }
    wr32(COW_IMG(0x106646a0u), 0u);
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10217520u), eax, ecx, edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1021bbd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1021bbd0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
