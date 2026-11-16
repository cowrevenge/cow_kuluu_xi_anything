/* f_0x1001ed40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1001ed40(Guest* g)
{
    double d13;
    double d20;
    double d21;
    double d22;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
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
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 104u);

    wr32(sp0 - 0x50u, in_esi);
    wr32(sp0 - 0x54u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x54u;
    t1 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t2 = g->edx;
    g->edx = t2;
    cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x40u, 0);
    t3 = g->edx;
    wr32(sp0 - 0x58u, rd32(arg1));
    g->eax = rd32(arg1);
    g->edx = t3;
    t4 = rd32(arg1);
    t5 = cow_thiscall(g, COW_IMG(0x10027b80u), sp0 - 0x40u, 1, t4);
    t6 = g->edx;
    t7 = rd32(arg1 + 4u);
    wr32(sp0 - 0x58u, t7);
    t8 = cow_thiscall(g, COW_IMG(0x10027bd0u), sp0 - 0x40u, 1, t7);
    t9 = rd32(arg1 + 8u);
    wr32(sp0 - 0x58u, t9);
    g->edx = t9;
    cow_thiscall(g, COW_IMG(0x10027c20u), sp0 - 0x40u, 1, t9);
    t10 = g->edx;
    wr32(sp0 - 0x58u, 0u);
    wr32(sp0 - 0x5cu, 0u);
    g->edx = t10;
    g->esp = sp0 - 0x5cu;
    cow_thiscall(g, COW_IMG(0x1001ee30u), self, 0);
    t11 = g->ecx;
    t12 = g->edx;
    d13 = cow_take_float(g);
    wr32(sp0 - 0x60u, t11);
    wrf32(sp0 - 0x60u, (float)(double)(float)d13);
    wr32(sp0 - 0x64u, sp0 - 0x4cu);
    g->eax = sp0 - 0x4cu;
    g->edx = t12;
    g->esp = sp0 - 0x54u;
    t14 = cow_cdecl(g, COW_IMG(0x10026e50u), 4, sp0 - 0x4cu, cow_f2bits((double)(float)d13), 0u, 0u);
    t15 = g->edx;
    wr32(sp0 - 0x58u, sp0 - 0x4cu);
    t16 = cow_thiscall(g, COW_IMG(0x10028200u), sp0 - 0x40u, 1, sp0 - 0x4cu);
    t17 = g->ecx;
    wr32(sp0 - 0x58u, self + 0x50u);
    wr32(sp0 - 0x5cu, self + 0x44u);
    g->edx = self + 0x50u;
    t18 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, self + 0x44u, self + 0x50u);
    t19 = g->edx;
    d20 = fr(g, (double)rdf32(sp0 - 0x4cu) + (double)rdf32(self + 0x44u));
    wrf32(self + 0x44u, (float)d20);
    d21 = fr(g, (double)rdf32(sp0 - 0x48u) + (double)rdf32(self + 0x48u));
    wrf32(self + 0x48u, (float)d21);
    d22 = fr(g, (double)rdf32(sp0 - 0x44u) + (double)rdf32(self + 0x4cu));
    wrf32(self + 0x4cu, (float)d22);
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1001ed40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1001ed40(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
