/* f_0x1004e4a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=0 */
void cow_fn_1004e4a0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self) == 0u) goto L_1004e4ce;
    eax = rd32(self);
    if ((rd8(self + 4u) & 0xfu) == 0u)
    {
        eax = rd32(eax);
        goto L_1004e4bf;
    }
    eax = rd32(eax);
    edx = (in_edx & 0xffffff00u) | rd8(self + 4u);
    t1 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t1);
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x100547a0u), eax, eax, edx);
    return;
L_1004e4bf: ;
    t2 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t2);
    g->esp = sp0;
    g->edx = t2;
    cow_tailcall(g, COW_IMG(0x10054500u), eax, eax, t2);
    return;
L_1004e4ce: ;
    fpush(g, (double)rdf32(COW_IMG(0x103295d8u)));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1004e4a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1004e4a0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
