/* f_0x10060960 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10060960(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    t1 = rd8(self + 0x48u);
    wr32(self, COW_IMG(0x1032bb80u));
    if ((uint8_t)t1 == 0u)
    {
        eax = (in_eax & 0xffffff00u) | t1;
        x0 = (double)rdf32(self + 0x40u);
        goto L_1006097e;
    }
    x0 = (double)rdf32(self + 0x40u);
    t2 = rd32(self + 0x44u);
    wrf32(t2 + 0x1a4u, (float)x0);
    g->esp = sp0;
    cow_tailcall(g, COW_IMG(0x100747c0u), t2, self, in_edx);
    return;
L_1006097e: ;
    t3 = rd32(self + 0x44u);
    wrf32(t3 + 0x1a8u, (float)x0);
    g->esp = sp0;
    g->edx = t3;
    cow_tailcall(g, COW_IMG(0x100747c0u), eax, self, t3);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10060960(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10060960(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
