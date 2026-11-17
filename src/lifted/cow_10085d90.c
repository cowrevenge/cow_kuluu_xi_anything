/* f_0x10085d90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10085d90(Guest* g)
{
    double d11;
    double d24;
    uint32_t t1;
    uint32_t t10;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0x14u, in_esi);
    g->eax = rd32(self);
    t1 = rd32(self);
    g->esp = sp0 - 0x14u;
    t2 = cow_thiscall(g, rd32(t1 + 0x1bcu), self, 0);
    wr32(sp0 - 0x10u, rd32(t2));
    t3 = cow_thiscall(g, rd32(rd32(self) + 0x1bcu), self, 0);
    t4 = rd32(t3 + 4u);
    wr32(sp0 - 0xcu, t4);
    g->eax = t4;
    t5 = cow_thiscall(g, rd32(rd32(self) + 0x1bcu), self, 0);
    t6 = rd32(t5 + 8u);
    wr32(sp0 - 8u, t6);
    g->eax = t6;
    g->edx = rd32(self);
    t7 = rd32(self);
    t8 = cow_thiscall(g, rd32(t7 + 0x1bcu), self, 0);
    t9 = g->edx;
    wr32(sp0 - 0x18u, sp0 - 0x10u);
    t10 = rd32(t8 + 0xcu);
    wr32(sp0 - 4u, t10);
    d11 = (double)(float)fr(g, (double)rdf32(sp0 - 0xcu) - (double)rdf32(COW_IMG(0x1032961cu)));
    wrf32(sp0 - 0xcu, (float)d11);
    g->eax = t10;
    g->edx = t9;
    g->esp = sp0 - 0x18u;
    t12 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t13 = g->edx;
    g->edx = t13;
    g->esp = sp0 - 0x14u;
    t14 = cow_thiscall(g, COW_IMG(0x1001e780u), t12, 1, sp0 - 0x10u);
    t15 = g->ecx;
    t16 = g->edx;
    wr32(sp0 - 0x18u, 0x40400000u);
    g->edx = t16;
    g->esp = sp0 - 0x18u;
    t17 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t18 = g->edx;
    g->esp = sp0 - 0x14u;
    t19 = cow_thiscall(g, COW_IMG(0x1001ecb0u), t17, 1, 0x40400000u);
    wr32(sp0 - 0x18u, 0u);
    g->edx = rd32(self);
    t20 = rd32(self);
    t21 = cow_thiscall_cdecl(g, rd32(t20 + 0x1c0u), self, 1, 0u);
    t22 = g->ecx;
    t23 = g->edx;
    wr32(sp0 - 0x1cu, t22);
    d24 = (double)(float)fr(g, (double)rdf32(t21 + 4u) + (double)rdf32(COW_IMG(0x1032d430u)));
    wrf32(sp0 - 0x1cu, (float)d24);
    wr32(sp0 - 0x20u, 0u);
    g->edx = t23;
    g->esp = sp0 - 0x20u;
    t25 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t26 = g->edx;
    g->edx = t26;
    g->esp = sp0 - 0x14u;
    t27 = cow_thiscall(g, COW_IMG(0x1001edf0u), t25, 3, 0u, rd32(sp0 - 0x1cu), 0u);
    t28 = g->edx;
    g->edx = t28;
    return t27;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10085d90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10085d90(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
