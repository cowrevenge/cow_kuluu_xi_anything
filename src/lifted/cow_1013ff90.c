/* f_0x1013ff90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1013ff90(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 0xcu);
    wr32(sp0 - 0x20u, sp0 - 8u);
    t1 = rd32(self + 8u);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    g->ebx = 0u;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10118900u), t1, 4, sp0 - 8u, 0xcu, 1u, 1u);
    t2 = g->edx;
    if (rd8(self + 0x25u) == 0u)
    {
        edx = t2;
        eax = 2u;
    }
    else
    {
        edx = t2;
        eax = rd32(self + 0x14u);
    }
    if (rd16(rd32(self + 8u) + 0x4cu) != 0xcu) goto L_1014002c;
    ecx = rd32(self + 8u);
    if ((int16_t)rd16(ecx + 0x5eu) <= 0) goto L_1013ffff;
    edx = (edx & 0xffff0000u) | rd16(ecx + 0x5eu);
    wr32(sp0 - 0x14u, edx);
    wr32(sp0 - 0x18u, 0x1eu);
    t3 = rd32(sp0 - 6u);
    wr32(sp0 - 0x1cu, t3);
    t4 = rd32(sp0 - 8u);
    wr32(sp0 - 0x20u, t4);
    t5 = rd32(eax * 4u + self + 0x18u);
    wr32(sp0 - 0x24u, t5);
    g->eax = t5;
    g->edx = t4;
    g->esp = sp0 - 0x10u;
    t6 = cow_thiscall(g, COW_IMG(0x10119f80u), ecx, 5, t5, t4, t3, 0x1eu, edx);
    t7 = g->edx;
    g->ebx = in_ebx;
    g->edx = t7;
    return t6;
L_1013ffff: ;
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 0x80805020u);
    wr32(sp0 - 0x24u, 0x3f800000u);
    wr32(sp0 - 0x28u, 0x3f800000u);
    t8 = (uint32_t)(int16_t)rd16(sp0 - 6u);
    wr32(sp0 - 0x2cu, t8);
    t9 = (uint32_t)(int16_t)rd16(sp0 - 8u);
    wr32(sp0 - 0x30u, t9);
    g->eax = eax;
    g->edx = t9;
    g->esp = sp0 - 0x10u;
    t10 = cow_thiscall(g, COW_IMG(0x1011fc80u), rd32(eax * 4u + self + 0x18u), 8, t9, t8, 0x3f800000u, 0x3f800000u, 0x80805020u, 0u, 0u, 0u);
    t11 = g->edx;
    g->ebx = in_ebx;
    g->edx = t11;
    return t10;
L_1014002c: ;
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0x80808080u);
    t12 = (uint32_t)(int16_t)rd16(sp0 - 6u);
    wr32(sp0 - 0x20u, t12);
    t13 = (uint32_t)(int16_t)rd16(sp0 - 8u);
    wr32(sp0 - 0x24u, t13);
    g->eax = eax;
    g->edx = t13;
    g->esp = sp0 - 0x10u;
    t14 = cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(eax * 4u + self + 0x18u), 5, t13, t12, 0x80808080u, 0u, 0u);
    t15 = g->edx;
    g->ebx = in_ebx;
    g->edx = t15;
    return t14;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013ff90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1013ff90(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
