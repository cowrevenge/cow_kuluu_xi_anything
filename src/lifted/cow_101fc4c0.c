/* f_0x101fc4c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101fc4c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 2u);
    wr32(sp0 - 0x20u, sp0 - 8u);
    t1 = rd32(self + 8u);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    g->edi = 0u;
    g->eax = sp0 - 8u;
    g->esp = sp0 - 0x10u;
    t2 = cow_thiscall(g, COW_IMG(0x10118900u), t1, 4, sp0 - 8u, 2u, 1u, 1u);
    if (rd16(rd32(self + 8u) + 0x4cu) != 2u) goto L_101fc553;
    eax = t2;
    ecx = rd32(self + 8u);
    if ((int16_t)rd16(ecx + 0x5eu) <= 0) goto L_101fc523;
    eax = (eax & 0xffff0000u) | rd16(ecx + 0x5eu);
    wr32(sp0 - 0x14u, eax);
    wr32(sp0 - 0x18u, 0x1eu);
    t3 = rd32(sp0 - 6u);
    wr32(sp0 - 0x1cu, t3);
    t4 = rd32(sp0 - 8u);
    wr32(sp0 - 0x20u, t4);
    t5 = rd32(self + rd32(self + 0x14u) * 4u + 0x18u);
    wr32(sp0 - 0x24u, t5);
    g->eax = t5;
    g->edx = rd32(self + 0x14u);
    t6 = rd32(self + 0x14u);
    g->esp = sp0 - 0x10u;
    t7 = cow_thiscall(g, COW_IMG(0x10119f80u), ecx, 5, t5, t4, t3, 0x1eu, eax);
    t8 = g->edx;
    g->edi = in_edi;
    g->edx = t8;
    return t7;
L_101fc523: ;
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 0x80805020u);
    wr32(sp0 - 0x24u, 0x3f800000u);
    wr32(sp0 - 0x28u, 0x3f800000u);
    t9 = (uint32_t)(int16_t)rd16(sp0 - 6u);
    wr32(sp0 - 0x2cu, t9);
    t10 = (uint32_t)(int16_t)rd16(sp0 - 8u);
    wr32(sp0 - 0x30u, t10);
    g->eax = rd32(self + 0x14u);
    g->edx = t10;
    t11 = rd32(self + 0x14u);
    g->esp = sp0 - 0x10u;
    t12 = cow_thiscall(g, COW_IMG(0x1011fc80u), rd32(self + t11 * 4u + 0x18u), 8, t10, t9, 0x3f800000u, 0x3f800000u, 0x80805020u, 0u, 0u, 0u);
    t13 = g->edx;
    g->edi = in_edi;
    g->edx = t13;
    return t12;
L_101fc553: ;
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0x80808080u);
    t14 = (uint32_t)(int16_t)rd16(sp0 - 6u);
    wr32(sp0 - 0x20u, t14);
    t15 = (uint32_t)(int16_t)rd16(sp0 - 8u);
    wr32(sp0 - 0x24u, t15);
    g->eax = rd32(self + 0x14u);
    g->edx = t15;
    t16 = rd32(self + 0x14u);
    g->esp = sp0 - 0x10u;
    t17 = cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(self + t16 * 4u + 0x18u), 5, t15, t14, 0x80808080u, 0u, 0u);
    t18 = g->edx;
    g->edi = in_edi;
    g->edx = t18;
    return t17;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fc4c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101fc4c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
