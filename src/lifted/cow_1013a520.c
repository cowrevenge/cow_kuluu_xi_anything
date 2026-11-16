/* f_0x1013a520 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1013a520(Guest* g)
{
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 92u);

    wr32(sp0 - 0x14u, in_esi);
    t1 = (uint32_t)(int8_t)rd8(self + 0x23u);
    wr32(sp0 - 0x18u, t1);
    wr32(sp0 - 0x1cu, COW_IMG(0x1036f9fcu));
    wr32(sp0 - 0x20u, sp0 - 0x10u);
    g->eax = t1;
    g->ecx = sp0 - 0x10u;
    g->esp = sp0 - 0xcu;
    t2 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x10u, COW_IMG(0x1036f9fcu), t1, in_esi, rd32(sp0 - 0x10u));
    t3 = g->ecx;
    wr32(sp0 - 0x24u, 0x3f800000u);
    wr32(sp0 - 0x28u, 0x3f800000u);
    wr32(sp0 - 0x2cu, 1u);
    wr32(sp0 - 0x30u, 0x80808080u);
    wr32(sp0 - 0x34u, sp0 - 0x10u);
    t4 = (t2 & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x16u);
    wr32(sp0 - 0x38u, t4);
    t5 = (t3 & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 0x34u);
    wr32(sp0 - 0x3cu, t5);
    g->esp = sp0 - 0x20u;
    cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t5, 7, t5, t4, sp0 - 0x10u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
    t6 = g->ecx;
    t7 = (uint32_t)(int8_t)rd8(self + 0x22u);
    wr32(sp0 - 0x40u, t7);
    wr32(sp0 - 0x44u, COW_IMG(0x1036f9f4u));
    wr32(sp0 - 0x48u, sp0 - 0x10u);
    g->eax = sp0 - 0x10u;
    g->edx = t7;
    g->esp = sp0 - 0x34u;
    t8 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x10u, COW_IMG(0x1036f9f4u), t7, rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u));
    t9 = g->edx;
    wr32(sp0 - 0x4cu, 0x80808080u);
    wr32(sp0 - 0x50u, sp0 - 0x10u);
    t10 = (t9 & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x16u);
    wr32(sp0 - 0x54u, t10);
    t11 = (t8 & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 0x3au);
    wr32(sp0 - 0x58u, t11);
    g->eax = t11;
    g->edx = t10;
    t12 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, t11, t10, sp0 - 0x10u, 0x80808080u, sp0 - 0x10u, COW_IMG(0x1036f9f4u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u));
    t13 = g->edx;
    g->edx = t13;
    return t12;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013a520(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1013a520(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
