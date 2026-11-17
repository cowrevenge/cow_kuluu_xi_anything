/* f_0x10061450 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10061450(Guest* g)
{
    double d3;
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x10061110u), self, 0);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        edx = t2;
        goto L_10061462;
    }
    eax = t1;
    edx = t2;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_10061462: ;
    d3 = (double)(float)fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, (double)rdf32(self + 0x74u) / (double)rdf32(self + 0x80u))) * fr(g, (double)rdf32(self + 0x7cu) - (double)rdf32(self + 0x78u))) + (double)rdf32(self + 0x78u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_thiscall(g, COW_IMG(0x10061370u), self, 0);
    t5 = g->ecx;
    t6 = g->edx;
    g->edx = t6;
    t7 = rd32(t4);
    fpush(g, d3);
    t8 = cow_call_regs(g, COW_IMG(0x10311c6cu), t4, g->ecx, g->edx, 1, 0);
    t9 = g->edx;
    g->edx = t9;
    t10 = cow_thiscall(g, rd32(t7 + 0x34u), t4, 1, t8);
    t11 = g->edx;
    g->edx = t11;
    return t10 & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10061450(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10061450(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
