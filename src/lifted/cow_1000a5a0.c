/* f_0x1000a5a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1000a5a0(Guest* g)
{
    double d10;
    double d13;
    double d14;
    double d3;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t t1;
    uint32_t t11;
    uint32_t t12;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t2;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 144u);

    wr32(sp0 - 0x78u, in_esi);
    wr32(sp0 - 0x7cu, in_edi);
    wr32(sp0 - 0x60u, arg2);
    wr32(sp0 - 0x5cu, rd32(arg4));
    t1 = rd32(arg4 + 8u);
    wr32(sp0 - 0x58u, t1);
    wr32(sp0 - 0x44u, arg2);
    t2 = rd32(arg4 + 4u);
    wr32(sp0 - 0x40u, t2);
    wr32(sp0 - 0x28u, arg2);
    d3 = (double)(float)fr(g, (double)(int32_t)rd32(arg3) - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0x70u, (float)d3);
    wr32(sp0 - 0xcu, arg2);
    t4 = rd32(arg4 + 4u);
    wr32(sp0 - 8u, t4);
    wr32(sp0 - 0x68u, 0u);
    wr32(sp0 - 0x64u, 0x3f800000u);
    wr32(sp0 - 0x4cu, 0u);
    wr32(sp0 - 0x48u, 0x3f800000u);
    t5 = rd32(arg4 + 8u);
    wr32(sp0 - 0x3cu, t5);
    wr32(sp0 - 0x30u, 0u);
    d6 = (double)(float)fr(g, (double)(int32_t)rd32(arg3 + 4u) - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0x6cu, (float)d6);
    wr32(sp0 - 0x2cu, 0x3f800000u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x10u, 0x3f800000u);
    wr32(sp0 - 0x80u, arg1);
    wr32(sp0 - 0x84u, 0u);
    d7 = (double)(float)fr(g, (double)(int32_t)rd32(arg3 + 8u) - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0x74u, (float)d7);
    d8 = (double)(float)fr(g, (double)(int32_t)rd32(arg3 + 8u) - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0x54u, (float)d8);
    d9 = (double)(float)fr(g, (double)(int32_t)rd32(arg3 + 4u) - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0x50u, (float)d9);
    d10 = (double)(float)fr(g, (double)(int32_t)rd32(arg3) - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0x38u, (float)d10);
    wr32(sp0 - 0x24u, rd32(arg4));
    t11 = rd32(arg4 + 0xcu);
    wr32(sp0 - 0x20u, t11);
    t12 = rd32(arg4 + 0xcu);
    wr32(sp0 - 4u, t12);
    wr32(sp0 - 0x1cu, cow_f2bits(d7));
    d13 = (double)(float)fr(g, (double)(int32_t)rd32(arg3 + 0xcu) - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0x34u, (float)d13);
    d14 = (double)(float)fr(g, (double)(int32_t)rd32(arg3 + 0xcu) - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0x18u, (float)d14);
    t15 = rd32(self + 0xcu);
    wr32(sp0 - 0x88u, t15);
    g->edx = arg1;
    g->esp = sp0 - 0x7cu;
    cow_thiscall(g, rd32(rd32(rd32(self + 0xcu)) + 0xf4u), rd32(rd32(self + 0xcu)), 3, t15, 0u, arg1);
    t16 = g->edx;
    wr32(sp0 - 0x80u, 0x144u);
    t17 = rd32(self + 0xcu);
    wr32(sp0 - 0x84u, t17);
    g->eax = t17;
    t18 = cow_thiscall(g, rd32(rd32(t17) + 0x130u), rd32(t17), 2, t17, 0x144u);
    wr32(sp0 - 0x80u, 0x1cu);
    wr32(sp0 - 0x84u, sp0 - 0x70u);
    wr32(sp0 - 0x88u, 2u);
    wr32(sp0 - 0x8cu, 5u);
    cow_thiscall(g, COW_IMG(0x1000cd00u), self, 4, 5u, 2u, sp0 - 0x70u, 0x1cu);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1000a5a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1000a5a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 20u);
}
/* COW_ADAPTER END */
