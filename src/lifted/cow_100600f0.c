/* f_0x100600f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100600f0(Guest* g)
{
    double d1;
    double d14;
    double d3;
    uint32_t eax;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t2;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    d1 = fr(g, (double)rdf32(self + 0x74u) - (double)rdf32(rd32(COW_IMG(0x1047bfa8u)) + 0xeb0u));
    t2 = rd32(COW_IMG(0x1047bfa8u));
    d3 = (double)rdf32(COW_IMG(0x103295d8u));
    wrf32(self + 0x74u, (float)d1);
    if (!(d1 < d3))
    {
        eax = (t2 & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, d3, 1u);
        x0 = d1;
        goto L_1006014f;
    }
    eax = (t2 & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, d3, 1u);
    x0 = d1;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
    t5 = g->edx;
    t6 = rd32(self + 0x80u);
    g->edx = t5;
    t7 = cow_thiscall(g, COW_IMG(0x100c3920u), t4, 1, t6);
    t8 = g->edx;
    t9 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
    t10 = rd32(self + 0x84u);
    wr32(t9 + 0x5f8u, t10);
    g->eax = rd32(self);
    g->edx = t10;
    t11 = rd32(self);
    t12 = cow_thiscall(g, rd32(t11 + 0x18u), self, 1, 1u);
    t13 = g->edx;
    g->edx = t13;
    return (t12 & 0xffffff00u) | 1u;
L_1006014f: ;
    d14 = (double)(float)fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, x0 / (double)rdf32(self + 0x78u))) * fr(g, (double)rdf32(self + 0x80u) - (double)rdf32(self + 0x7cu))) + (double)rdf32(self + 0x7cu));
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t15 = cow_thiscall_cdecl(g, COW_IMG(0x1003b6d0u), self + 0x34u, 1, cow_f2bits(d14));
    t16 = g->edx;
    g->edx = t16;
    t17 = cow_thiscall(g, COW_IMG(0x100c3920u), t15, 1, cow_f2bits(d14));
    t18 = g->edx;
    g->edx = t18;
    return t17 & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100600f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100600f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
