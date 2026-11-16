/* f_0x101951f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101951f0(Guest* g)
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    t1 = rd32(self + 4u);
    wr32(self, COW_IMG(0x10336a08u));
    if (t1 == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        ecx = t1;
        g->eax = rd32(ecx);
        g->edx = in_edx;
        t2 = rd32(ecx);
        g->esp = sp0 - 4u;
        t3 = cow_thiscall(g, rd32(t2), ecx, 1, 3u);
        t4 = g->edx;
        wr32(self + 4u, 0u);
        eax = t3;
        edx = t4;
    }
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10196300u), eax, self + 0xcu, edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101951f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101951f0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
