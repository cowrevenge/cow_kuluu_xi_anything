/* f_0x10033490 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10033490(Guest* g)
{
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 104u);

    wr32(sp0 - 0x54u, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 0x54u;
    cow_thiscall(g, COW_IMG(0x10032a40u), sp0 - 0x40u, 0);
    t1 = g->edx;
    g->edx = t1;
    cow_thiscall(g, COW_IMG(0x10032a40u), sp0 - 0x30u, 0);
    t2 = g->edx;
    cow_thiscall(g, COW_IMG(0x10032a40u), sp0 - 0x50u, 0);
    wr32(sp0 - 0x40u, rd32(self));
    t3 = rd32(self + 4u);
    wr32(sp0 - 0x3cu, t3);
    t4 = rd32(self + 0xcu);
    wr32(sp0 - 0x34u, t4);
    wr32(sp0 - 0x30u, rd32(self));
    t5 = rd32(self + 8u);
    wr32(sp0 - 0x38u, t5);
    wr32(sp0 - 0x24u, t4);
    wr32(sp0 - 0x2cu, t3);
    wr32(sp0 - 0x28u, t5);
    cow_thiscall(g, COW_IMG(0x10032e10u), sp0 - 0x30u, 0);
    wr32(sp0 - 0x44u, 0u);
    wr32(sp0 - 0x50u, rd32(arg2));
    t6 = rd32(arg2 + 4u);
    wr32(sp0 - 0x4cu, t6);
    t7 = rd32(arg2 + 8u);
    wr32(sp0 - 0x48u, t7);
    wr32(sp0 - 0x58u, sp0 - 0x40u);
    wr32(sp0 - 0x5cu, sp0 - 0x20u);
    wr32(sp0 - 0x60u, sp0 - 0x50u);
    wr32(sp0 - 0x64u, sp0 - 0x10u);
    g->eax = sp0 - 0x10u;
    g->edx = sp0 - 0x50u;
    g->esp = sp0 - 0x5cu;
    t8 = cow_thiscall(g, COW_IMG(0x10032b50u), sp0 - 0x30u, 2, sp0 - 0x10u, sp0 - 0x50u);
    t9 = g->edx;
    g->esp = sp0 - 0x54u;
    t10 = cow_thiscall(g, COW_IMG(0x10032b50u), t8, 2, sp0 - 0x20u, sp0 - 0x40u);
    wr32(sp0 - 0x50u, rd32(t10));
    t11 = rd32(t10 + 4u);
    wr32(sp0 - 0x4cu, t11);
    t12 = rd32(t10 + 8u);
    wr32(sp0 - 0x48u, t12);
    t13 = rd32(t10 + 0xcu);
    wr32(sp0 - 0x44u, t13);
    t14 = rd32(t10);
    wrf32(arg1, (float)cow_bits2f(t14));
    wr32(arg1 + 4u, t11);
    wr32(arg1 + 8u, t12);
    wr32(arg1 + 0xcu, t13);
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10033490(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10033490(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
