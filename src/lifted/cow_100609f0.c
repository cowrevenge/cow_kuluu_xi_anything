/* f_0x100609f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100609f0(Guest* g)
{
    double d1;
    double d3;
    uint32_t eax;
    uint32_t t2;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    d1 = fr(g, (double)rdf32(self + 0x34u) - (double)rdf32(rd32(COW_IMG(0x1047bfa8u)) + 0xeb0u));
    t2 = rd32(COW_IMG(0x1047bfa8u));
    d3 = (double)rdf32(COW_IMG(0x103295d8u));
    wrf32(self + 0x34u, (float)d1);
    if (!(d1 < d3))
    {
        eax = (t2 & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, d3, 1u);
        x0 = d1;
        goto L_10060a1a;
    }
    eax = (t2 & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, d3, 1u);
    x0 = d1;
    g->eax = eax;
    g->edx = rd32(self);
    t4 = rd32(self);
    g->esp = sp0;
    t5 = cow_thiscall(g, rd32(t4 + 0x18u), self, 1, 1u);
    t6 = g->edx;
    g->edx = t6;
    return (t5 & 0xffffff00u) | 1u;
L_10060a1a: ;
    if (rd8(self + 0x48u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x48u);
        x0 = fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, x0 / (double)rdf32(self + 0x38u))) * fr(g, (double)rdf32(self + 0x40u) - (double)rdf32(self + 0x3cu))) + (double)rdf32(self + 0x3cu));
        goto L_10060a41;
    }
    x0 = fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, x0 / (double)rdf32(self + 0x38u))) * fr(g, (double)rdf32(self + 0x40u) - (double)rdf32(self + 0x3cu))) + (double)rdf32(self + 0x3cu));
    t7 = rd32(self + 0x44u);
    wrf32(t7 + 0x1a4u, (float)x0);
    return t7 & 0xffffff00u;
L_10060a41: ;
    wrf32(rd32(self + 0x44u) + 0x1a8u, (float)x0);
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100609f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100609f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
