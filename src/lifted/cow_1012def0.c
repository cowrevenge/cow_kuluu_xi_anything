/* f_0x1012def0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1012def0(Guest* g)
{
    uint32_t ecx;
    uint32_t edx;
    int64_t q1;
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
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0x14u, in_esi);
    q1 = (int64_t)cow_muls(0x88888889u, rd32(self + 0x20u));
    t2 = (uint32_t)((int32_t)(cow_qhi(q1) + rd32(self + 0x20u)) >> 5u);
    t3 = t2 + (t2 >> 0x1fu);
    t4 = cow_divs(g, t3, 0x3cu);
    t5 = cow_mods(g, t3, 0x3cu);
    wr32(sp0 - 0x18u, t5);
    wr32(sp0 - 0x1cu, t4);
    wr32(sp0 - 0x20u, COW_IMG(0x1036f6d0u));
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    g->edx = sp0 - 0x10u;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x10u, COW_IMG(0x1036f6d0u), t4, t5, in_esi);
    t6 = g->edx;
    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) < 0)
    {
        ecx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        edx = (t6 & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
        goto L_1012df73;
    }
    ecx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    edx = (t6 & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
    if (ecx != 3u) goto L_1012df73;
    wr32(sp0 - 0x18u, 0x3f800000u);
    wr32(sp0 - 0x1cu, 0x3f800000u);
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, 0x80808080u);
    wr32(sp0 - 0x28u, sp0 - 0x10u);
    t7 = (ecx & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 6u);
    wr32(sp0 - 0x2cu, t7);
    t8 = (edx & 0xffff0000u) | (uint16_t)(rd16(self + 0x18u) - 4u);
    wr32(sp0 - 0x30u, t8);
    g->edx = t8;
    g->esp = sp0 - 0x14u;
    t9 = cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t7, 7, t8, t7, sp0 - 0x10u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
    t10 = g->edx;
    g->edx = t10;
    return t9;
L_1012df73: ;
    wr32(sp0 - 0x18u, 0x80808080u);
    wr32(sp0 - 0x1cu, sp0 - 0x10u);
    t11 = (ecx & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 6u);
    wr32(sp0 - 0x20u, t11);
    t12 = (edx & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 0x4bu);
    wr32(sp0 - 0x24u, t12);
    g->eax = sp0 - 0x10u;
    g->edx = t12;
    g->esp = sp0;
    t13 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, t12, t11, sp0 - 0x10u, 0x80808080u, in_esi, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u), rd32(sp0 - 4u));
    t14 = g->edx;
    g->edx = t14;
    return t13;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012def0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1012def0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
