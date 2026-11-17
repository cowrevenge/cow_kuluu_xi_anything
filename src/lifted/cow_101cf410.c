/* f_0x101cf410 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_101cf410(Guest* g)
{
    double d1;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t t10;
    const uint32_t sp0 = g->esp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 108u);

    wr32(sp0 - 0x54u, 0u);
    wr32(sp0 - 0x4cu, arg4);
    wr32(sp0 - 0x2cu, arg4);
    wr32(sp0 - 0x3cu, arg4);
    wr32(sp0 - 0x1cu, arg4);
    wr32(sp0 - 0x44u, 0x3f800000u);
    wr32(sp0 - 0x34u, 0x3f800000u);
    wr32(sp0 - 0x24u, 0x3f800000u);
    d1 = (double)(float)fr(g, fr(g, (double)(int32_t)arg1 * (double)rdf32(COW_IMG(0x10329a30u))) + (double)rdf32(sp0 + 0x14u));
    wrf32(sp0 - 0x50u, (float)d1);
    wr32(sp0 - 0x14u, 0x3f800000u);
    d2 = (double)(float)fr(g, fr(g, (double)(int32_t)arg2 * (double)rdf32(COW_IMG(0x10329a30u))) + (double)rdf32(sp0 + 0x14u));
    wrf32(sp0 - 0x48u, (float)d2);
    d3 = (double)rdf32(sp0 + 0x14u);
    wr32(sp0 - 0x38u, cow_f2bits(d2));
    wr32(sp0 - 0x58u, arg3 >> 0x18u);
    d4 = fr(g, (double)rdf32(COW_IMG(0x10329a30u)) - fr(g, d3 + d3));
    wr32(sp0 - 0x5cu, arg3 >> 0x10u);
    wr32(sp0 - 0x60u, arg3 >> 8u);
    wr32(sp0 - 0x64u, arg3);
    d5 = (double)(float)fr(g, d4 + fr(g, fr(g, (double)(int32_t)arg1 * (double)rdf32(COW_IMG(0x10329a30u))) + (double)rdf32(sp0 + 0x14u)));
    wrf32(sp0 - 0x40u, (float)d5);
    d6 = (double)(float)fr(g, d4 + fr(g, fr(g, (double)(int32_t)arg1 * (double)rdf32(COW_IMG(0x10329a30u))) + (double)rdf32(sp0 + 0x14u)));
    wrf32(sp0 - 0x30u, (float)d6);
    wr32(sp0 - 0x68u, sp0 - 0x50u);
    d7 = (double)(float)fr(g, d4 + d2);
    wrf32(sp0 - 0x28u, (float)d7);
    d8 = (double)(float)fr(g, fr(g, (double)(int32_t)arg1 * (double)rdf32(COW_IMG(0x10329a30u))) + (double)rdf32(sp0 + 0x14u));
    wrf32(sp0 - 0x20u, (float)d8);
    d9 = (double)(float)fr(g, d4 + d2);
    wrf32(sp0 - 0x18u, (float)d9);
    g->edx = arg3 >> 8u;
    g->esp = sp0 - 0x10u;
    cow_bridge_indirect(g, COW_IMG(0x10177b40u), 0u, 22u, (const uint32_t[]){sp0 - 0x50u, arg3, arg3 >> 8u, arg3 >> 0x10u, arg3 >> 0x18u, 0u, cow_f2bits(d1), arg4, cow_f2bits(d2), 0x3f800000u, cow_f2bits(d5), arg4, cow_f2bits(d2), 0x3f800000u, cow_f2bits(d6), arg4, cow_f2bits(d7), 0x3f800000u, cow_f2bits(d8), arg4, cow_f2bits(d9), 0x3f800000u}, g->ecx, g->edx, g->eax, 88u);
    t10 = g->edx;
    g->edx = t10;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101cf410(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101cf410(g);
    g->esp = sp0;
    rt_return(g, g->eax, 20u);
}
/* COW_ADAPTER END */
