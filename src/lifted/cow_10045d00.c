/* f_0x10045d00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=0 */
uint32_t cow_fn_10045d00(Guest* g)
{
    double d1;
    uint32_t eax;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    d1 = (double)rdf32(self + 0x190u);
    if ((cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u) goto L_10045d1c;
    eax = cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
    fpush(g, (double)rdf32(COW_IMG(0x103295d8u)));
    return eax;
L_10045d1c: ;
    g->eax = rd32(COW_IMG(0x1047cf7cu));
    g->edx = rd32(rd32(COW_IMG(0x1047cf7cu)));
    t2 = rd32(COW_IMG(0x1047cf7cu));
    t3 = rd32(rd32(COW_IMG(0x1047cf7cu)));
    g->esp = sp0;
    t4 = cow_thiscall(g, rd32(t3 + 0x94u), t2, 1, self + 0x188u);
    t5 = g->edx;
    g->edx = t5;
    return t4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10045d00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10045d00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
