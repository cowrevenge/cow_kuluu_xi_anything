/* f_0x1008e3f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1008e3f0(Guest* g)
{
    double d2;
    double d4;
    double d7;
    uint32_t eax;
    uint32_t t1;
    uint32_t t3;
    uint32_t t5;
    uint32_t t6;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if ((int8_t)rd32(self + 0x120u) >= 0)
    {
        eax = rd32(self + 0x120u);
        goto L_1008e466;
    }
    eax = rd32(self + 0x120u);
    if (rd8(COW_IMG(0x104807f5u)) == 0u) goto L_1008e466;
    if ((eax >> 8u & 2u) == 0u) goto L_1008e4a1;
    t1 = rd32(self + 0xa0u);
    d2 = (double)(float)fr(g, (double)rdf32(rd32(rd32(self + 0xd4u) + 0x260u) + 0x16cu) * (double)rdf32(COW_IMG(0x10329a34u)));
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(rd32(t1) + 0x1acu), t1, 1, cow_f2bits(d2));
    t3 = rd32(self + 0xa0u);
    d4 = (double)(float)fr(g, (double)rdf32(rd32(rd32(self + 0xd4u) + 0x260u) + 0x168u) * (double)rdf32(COW_IMG(0x10329a34u)));
    cow_thiscall(g, rd32(rd32(t3) + 0x1a4u), t3, 1, cow_f2bits(d4));
    return;
L_1008e466: ;
    if ((eax >> 8u & 2u) != 0u)
    {
        t5 = rd32(self + 0xa0u);
        t6 = rd32(self + 0x9cu);
        d7 = (double)rdf32(self + 0x15cu);
        wrf32(self + 0x98u, (float)d7);
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(rd32(t5) + 0x1acu), t5, 1, t6);
        t8 = rd32(self + 0x98u);
        cow_thiscall(g, rd32(rd32(rd32(self + 0xa0u)) + 0x1a4u), rd32(self + 0xa0u), 1, t8);
    }
L_1008e4a1: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1008e3f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1008e3f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
