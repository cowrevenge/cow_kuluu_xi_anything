/* f_0x10043b00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10043b00(Guest* g)
{
    double d1;
    double d3;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t2;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 0x10u, in_esi);
    d1 = fr(g, (double)rdf32(self + 0x74u) - (double)rdf32(rd32(COW_IMG(0x1047bfa8u)) + 0xeb0u));
    t2 = rd32(COW_IMG(0x1047bfa8u));
    d3 = (double)rdf32(COW_IMG(0x103295d8u));
    wrf32(self + 0x74u, (float)d1);
    if (!(d1 < d3))
    {
        eax = (t2 & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, d3, 1u);
        x0 = d1;
        goto L_10043b34;
    }
    eax = (t2 & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, d3, 1u);
    x0 = d1;
    wr32(sp0 - 0x14u, 1u);
    g->eax = eax;
    g->edx = rd32(self);
    t4 = rd32(self);
    g->esp = sp0 - 0x10u;
    t5 = cow_thiscall(g, rd32(t4 + 0x18u), self, 1, 1u);
    t6 = g->edx;
    g->edx = t6;
    return (t5 & 0xffffff00u) | 1u;
L_10043b34: ;
    d7 = (double)(float)fr(g, fr(g, fr(g, (double)rdf32(self + 0x8cu) - (double)rdf32(self + 0x80u)) * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, x0 / (double)rdf32(self + 0x78u)))) + (double)rdf32(self + 0x80u));
    wrf32(sp0 - 0xcu, (float)d7);
    d8 = (double)(float)fr(g, fr(g, fr(g, (double)rdf32(self + 0x90u) - (double)rdf32(self + 0x84u)) * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, x0 / (double)rdf32(self + 0x78u)))) + (double)rdf32(self + 0x84u));
    wrf32(sp0 - 8u, (float)d8);
    d9 = (double)(float)fr(g, fr(g, fr(g, (double)rdf32(self + 0x94u) - (double)rdf32(self + 0x88u)) * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, x0 / (double)rdf32(self + 0x78u)))) + (double)rdf32(self + 0x88u));
    wrf32(sp0 - 4u, (float)d9);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t10 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
    wr32(sp0 - 0x14u, sp0 - 0xcu);
    t11 = rd32(self + 0x7cu);
    wr32(sp0 - 0x18u, t11);
    g->edx = t11;
    t12 = cow_call_regs(g, COW_IMG(0x100acdb0u), t10, t10, g->edx, 0, 2, t11, sp0 - 0xcu);
    t13 = g->edx;
    g->edx = t13;
    return t12 & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10043b00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10043b00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
