/* f_0x1022fa10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1022fa10(Guest* g)
{
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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
    uint32_t t24;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 36u);

    COW_AT(1022fa10)
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    g->esp = sp0 - 0x10u;
    t1 = cow_fastcall(g, COW_IMG(0x10221a30u), self, in_edx, 0);
    t2 = g->edx;
    wr32(sp0 - 0x14u, 2u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 0u);
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x10221900u), self, 4, 0u, 0u, 0u, 2u);
    t4 = g->edx;
    wr32(sp0 - 0x14u, 3u);
    wr32(sp0 - 0x18u, 0x10u);
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 0x10u, 3u);
    t6 = g->edx;
    wr32(sp0 - 0x14u, 4u);
    wr32(sp0 - 0x18u, 0x10u);
    g->edx = t6;
    t7 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 0x10u, 4u);
    t8 = g->edx;
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 2u);
    t9 = cow_fastcall(g, COW_IMG(0x10221a80u), self, t8, 2, 2u, 0u);
    t10 = g->edx;
    wr32(sp0 - 0x14u, 1u);
    t11 = rd32(self + 8u);
    wr32(self + 0x1cu, COW_IMG(0x1022faf0u));
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    g->edi = 0u;
    g->edx = t10;
    t12 = cow_thiscall(g, COW_IMG(0x101188e0u), t11, 1, 1u);
    t13 = g->edx;
    wr32(sp0 - 0x14u, sp0 - 8u);
    g->edi = t12;
    g->eax = sp0 - 8u;
    g->edx = t13;
    t14 = cow_thiscall(g, COW_IMG(0x10117020u), t12, 1, sp0 - 8u);
    t15 = g->edx;
    wr16(sp0 - 6u, 0x64u);
    wr32(sp0 - 0x14u, sp0 - 8u);
    wr16(sp0 - 2u, 0x76u);
    g->edx = t15;
    t16 = cow_thiscall(g, COW_IMG(0x10117070u), t12, 1, sp0 - 8u);
    t17 = g->edx;
    wr32(sp0 - 0x14u, 2u);
    g->edi = t12;
    t18 = cow_thiscall(g, COW_IMG(0x101188e0u), rd32(self + 8u), 1, 2u);
    wr32(sp0 - 0x14u, sp0 - 8u);
    g->edi = t12;
    g->edx = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10117020u), t18, 1, sp0 - 8u);
    t19 = g->edx;
    wr32(sp0 - 0x14u, sp0 - 8u);
    wr16(sp0 - 6u, 0x82u);
    wr16(sp0 - 2u, 0x94u);
    g->eax = sp0 - 8u;
    g->edx = t19;
    t20 = cow_thiscall(g, COW_IMG(0x10117070u), t18, 1, sp0 - 8u);
    t21 = g->ecx;
    t22 = g->edx;
    wr32(sp0 - 0x14u, 2u);
    wr32(sp0 - 0x18u, 0x18cu);
    wr32(sp0 - 0x1cu, 0xcu);
    g->edx = t22;
    g->esp = sp0 - 0x14u;
    t23 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x18cu);
    t24 = g->edx;
    wr32(sp0 - 0x18u, t23);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10150cc0u), rd32(COW_IMG(0x1057847cu)), 2, t23, 2u);
    g->esi = in_esi;
    g->edi = in_edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022fa10(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1022fa10(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
