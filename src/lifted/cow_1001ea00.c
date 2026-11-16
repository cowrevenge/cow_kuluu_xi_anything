/* f_0x1001ea00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1001ea00(Guest* g)
{
    double d16;
    double d17;
    double d21;
    double d22;
    double d23;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
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
    cow_frame(g, sp0, 116u);

    wr32(sp0 - 0x5cu, in_esi);
    wr32(sp0 - 0x60u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x60u;
    cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t1 = g->edx;
    g->edx = t1;
    t2 = cow_thiscall(g, COW_IMG(0x10021c10u), self, 0);
    t3 = g->edx;
    wr32(sp0 - 0x64u, t2);
    g->edx = t3;
    t4 = cow_thiscall(g, COW_IMG(0x100279f0u), sp0 - 0x40u, 1, t2);
    t5 = g->edx;
    g->edx = t5;
    cow_thiscall(g, COW_IMG(0x100283c0u), sp0 - 0x40u, 0);
    t6 = g->ecx;
    t7 = g->edx;
    wr32(sp0 - 0x64u, COW_IMG(0x10456dc4u));
    wr32(sp0 - 0x68u, sp0 - 0x58u);
    g->eax = sp0 - 0x58u;
    g->edx = t7;
    t8 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x58u, COW_IMG(0x10456dc4u));
    t9 = g->edx;
    wr32(sp0 - 0x64u, sp0 - 0x58u);
    t10 = cow_thiscall(g, COW_IMG(0x10027cf0u), sp0 - 0x40u, 1, sp0 - 0x58u);
    t11 = g->ecx;
    wr32(sp0 - 0x64u, self + 0x50u);
    wr32(sp0 - 0x68u, sp0 - 0x4cu);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 4u, 0x3f800000u);
    g->edx = sp0 - 0x4cu;
    cow_cdecl(g, COW_IMG(0x10026e90u), 2, sp0 - 0x4cu, self + 0x50u);
    t12 = g->edx;
    wr32(sp0 - 0x6cu, self + 0x44u);
    wr32(sp0 - 0x70u, sp0 - 0x4cu);
    g->ecx = sp0 - 0x4cu;
    g->esp = sp0 - 0x68u;
    cow_cdecl(g, COW_IMG(0x10027070u), 2, sp0 - 0x4cu, self + 0x44u);
    t13 = g->ecx;
    wr32(sp0 - 0x64u, 0u);
    wr32(sp0 - 0x68u, sp0 - 0x4cu);
    g->ecx = t13;
    g->edx = sp0 - 0x4cu;
    g->esp = sp0 - 0x64u;
    cow_cdecl(g, COW_IMG(0x10027600u), 1, sp0 - 0x4cu);
    t14 = g->ecx;
    t15 = g->edx;
    d16 = cow_take_float(g);
    d17 = (double)(float)fr(g, d16 * (double)rdf32(sp0 + 4u));
    wrf32(sp0 - 0x68u, (float)d17);
    wr32(sp0 - 0x6cu, 0u);
    wr32(sp0 - 0x70u, sp0 - 0x58u);
    g->eax = sp0 - 0x58u;
    g->edx = t15;
    g->esp = sp0 - 0x60u;
    t18 = cow_cdecl(g, COW_IMG(0x10026e50u), 4, sp0 - 0x58u, 0u, cow_f2bits(d17), 0u);
    t19 = g->edx;
    wr32(sp0 - 0x64u, sp0 - 0x58u);
    g->edx = t19;
    cow_thiscall(g, COW_IMG(0x10028140u), sp0 - 0x40u, 1, sp0 - 0x58u);
    t20 = g->edx;
    d21 = fr(g, (double)rdf32(sp0 - 0x58u) + (double)rdf32(self + 0x50u));
    wrf32(self + 0x50u, (float)d21);
    d22 = fr(g, (double)rdf32(sp0 - 0x54u) + (double)rdf32(self + 0x54u));
    wrf32(self + 0x54u, (float)d22);
    d23 = fr(g, (double)rdf32(sp0 - 0x50u) + (double)rdf32(self + 0x58u));
    wrf32(self + 0x58u, (float)d23);
    g->edx = t20;
    t24 = cow_thiscall(g, COW_IMG(0x10021c10u), self, 0);
    t25 = g->edx;
    g->edx = t25;
    t26 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t27 = g->edx;
    g->edx = t27;
    return t26;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1001ea00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1001ea00(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
