/* f_0x102a34f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102a34f0(Guest* g)
{
    double d4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t2;
    uint32_t t3;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 0x14u, in_esi);
    t1 = rd32(arg1 + 0x14u);
    wr32(sp0 - 0x10u, t1);
    t2 = rd32(arg1 + 0x18u);
    wr32(sp0 - 0xcu, t2);
    wr32(sp0 - 0x18u, sp0 - 0x10u);
    t3 = rd32(arg1 + 0x1cu);
    wr32(sp0 - 8u, t3);
    d4 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(arg1 + 0x30u));
    wrf32(sp0 - 4u, (float)d4);
    g->eax = sp0 - 0x10u;
    g->edx = t3;
    g->esp = sp0 - 0x14u;
    t5 = cow_cdecl(g, COW_IMG(0x10283350u), 1, sp0 - 0x10u);
    t6 = g->edx;
    t7 = rd32(arg1 + 0x20u);
    wr32(sp0 - 0x1cu, t7);
    g->ecx = t7;
    g->esp = sp0 - 0x18u;
    t8 = cow_cdecl(g, COW_IMG(0x102833a0u), 1, t7);
    t9 = g->ecx;
    t10 = rd32(arg1 + 0x24u);
    wr32(sp0 - 0x20u, t10);
    g->esp = sp0 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x102833c0u), 1, t10);
    t11 = rd8(arg1 + 0x34u);
    wr32(sp0 - 0x24u, t11);
    t12 = rd32(arg1 + 0x2cu);
    wr32(sp0 - 0x28u, t12);
    t13 = rd32(arg1 + 0x28u);
    wr32(sp0 - 0x2cu, t13);
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x102833e0u), 3, t13, t12, t11);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a34f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102a34f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
