/* f_0x10177420 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10177420(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d8;
    double d9;
    uint32_t t1;
    uint32_t t13;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 108u);

    wr32(sp0 - 0x54u, in_esi);
    wr32(sp0 - 0x58u, 0u);
    t1 = rd32(rd32(COW_IMG(0x104568fcu)) + 0x2f4u);
    wr32(sp0 - 0x44u, t1);
    t2 = rd32(rd32(COW_IMG(0x104568fcu)) + 0x2e8u);
    wr32(sp0 - 0x48u, t2);
    t3 = rd32(rd32(COW_IMG(0x104568fcu)) + 0x2dcu);
    wr32(sp0 - 0x4cu, t3);
    wr32(sp0 - 0x5cu, 0x2fu);
    t4 = rd32(rd32(COW_IMG(0x104568fcu)) + 0x2e0u);
    wr32(sp0 - 0x50u, t4);
    t5 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x60u, t5);
    t6 = rd32(t5);
    g->esp = sp0 - 0x54u;
    cow_thiscall(g, rd32(t6 + 0xc8u), t6, 3, t5, 0x2fu, 0u);
    t7 = g->ecx;
    d8 = (double)(float)fr(g, (double)rdf32(sp0 - 0x50u) + (double)rdf32(self + 0x39590u));
    wrf32(sp0 - 0x58u, (float)d8);
    d9 = (double)(float)fr(g, (double)rdf32(sp0 - 0x4cu) + (double)rdf32(self + 0x39590u));
    wrf32(sp0 - 0x5cu, (float)d9);
    d10 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, (double)rdf32(sp0 - 0x48u) * (double)rdf32(rd32(COW_IMG(0x104568fcu)) + 0x2f0u)));
    wrf32(sp0 - 0x60u, (float)d10);
    d11 = fr(g, atan2(rdf64(COW_IMG(0x10329d40u)), (double)rdf32(sp0 - 0x44u)));
    d12 = (double)(float)fr(g, d11 + d11);
    wrf32(sp0 - 0x64u, (float)d12);
    wr32(sp0 - 0x68u, sp0 - 0x40u);
    cow_stdcall(g, COW_IMG(0x102d83e6u), 5, sp0 - 0x40u, cow_f2bits(d12), cow_f2bits(d10), cow_f2bits(d9), cow_f2bits(d8));
    wr32(sp0 - 0x58u, sp0 - 0x40u);
    wr32(sp0 - 0x5cu, 3u);
    t13 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x60u, t13);
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x94u), sp0 - 0x40u, 3, t13, 3u, sp0 - 0x40u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10177420(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10177420(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
