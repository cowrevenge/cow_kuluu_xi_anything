/* f_0x100458f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100458f0(Guest* g)
{
    double d1;
    double d2;
    uint32_t eax;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    d1 = (double)rdf32(self + 0x138u);
    if ((cow_fsw(g, d1, (double)rdf32(COW_IMG(0x10329a18u)), 0u) & 0x100u) != 0u) goto L_10045915;
    eax = cow_fsw(g, d1, (double)rdf32(COW_IMG(0x10329a18u)), 0u) & 0x100u;
    d2 = (double)(float)(double)rdf32(self + 0x12cu);
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x100555b0u), self, 1, cow_f2bits(d2));
    return;
L_10045915: ;
    wr32(self + 0x138u, 0x3f800000u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100458f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100458f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
