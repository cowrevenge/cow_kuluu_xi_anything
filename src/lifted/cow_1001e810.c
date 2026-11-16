/* f_0x1001e810 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1001e810(Guest* g)
{
    double d15;
    double d16;
    double d17;
    double d18;
    double d19;
    double d20;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
    uint32_t t21;
    uint32_t t22;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 100u);

    wr32(sp0 - 0x50u, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 0x50u;
    cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t1 = g->edx;
    g->edx = t1;
    t2 = cow_thiscall(g, COW_IMG(0x10021c10u), self, 0);
    t3 = g->edx;
    wr32(sp0 - 0x54u, t2);
    g->edx = t3;
    t4 = cow_thiscall(g, COW_IMG(0x100279f0u), sp0 - 0x40u, 1, t2);
    t5 = g->edx;
    g->edx = t5;
    cow_thiscall(g, COW_IMG(0x100283c0u), sp0 - 0x40u, 0);
    t6 = g->ecx;
    t7 = g->edx;
    wr32(sp0 - 0x54u, COW_IMG(0x10456db8u));
    wr32(sp0 - 0x58u, sp0 - 0x4cu);
    g->eax = sp0 - 0x4cu;
    g->edx = t7;
    t8 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x4cu, COW_IMG(0x10456db8u));
    t9 = g->edx;
    wr32(sp0 - 0x54u, sp0 - 0x4cu);
    cow_thiscall(g, COW_IMG(0x10027cf0u), sp0 - 0x40u, 1, sp0 - 0x4cu);
    t10 = g->ecx;
    wr32(sp0 - 0x54u, 0u);
    wr32(sp0 - 0x58u, 0u);
    wr32(sp0 - 0x5cu, arg1);
    wr32(sp0 - 0x60u, sp0 - 0x4cu);
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 4u, 0x3f800000u);
    g->eax = sp0 - 0x4cu;
    g->edx = arg1;
    t11 = cow_cdecl(g, COW_IMG(0x10026e50u), 4, sp0 - 0x4cu, arg1, 0u, 0u);
    t12 = g->edx;
    wr32(sp0 - 0x54u, sp0 - 0x4cu);
    g->edx = t12;
    t13 = cow_thiscall(g, COW_IMG(0x10028200u), sp0 - 0x40u, 1, sp0 - 0x4cu);
    t14 = g->edx;
    d15 = fr(g, (double)rdf32(sp0 - 0x4cu) + (double)rdf32(self + 0x44u));
    wrf32(self + 0x44u, (float)d15);
    d16 = fr(g, (double)rdf32(sp0 - 0x48u) + (double)rdf32(self + 0x48u));
    wrf32(self + 0x48u, (float)d16);
    d17 = fr(g, (double)rdf32(sp0 - 0x44u) + (double)rdf32(self + 0x4cu));
    wrf32(self + 0x4cu, (float)d17);
    d18 = fr(g, (double)rdf32(sp0 - 0x4cu) + (double)rdf32(self + 0x50u));
    wrf32(self + 0x50u, (float)d18);
    d19 = fr(g, (double)rdf32(sp0 - 0x48u) + (double)rdf32(self + 0x54u));
    wrf32(self + 0x54u, (float)d19);
    d20 = fr(g, (double)rdf32(sp0 - 0x44u) + (double)rdf32(self + 0x58u));
    wrf32(self + 0x58u, (float)d20);
    g->edx = t14;
    t21 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t22 = g->edx;
    g->edx = t22;
    return t21;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1001e810(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1001e810(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
