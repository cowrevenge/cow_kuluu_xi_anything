/* f_0x10205790 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10205790(Guest* g)
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
    uint32_t t16;
    uint32_t t17;
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
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    if (rd32(self + 0x14u) == 0xffffffffu)
    {
        eax = rd32(self + 0x14u);
        edx = in_edx;
        goto L_10205851;
    }
    eax = rd32(self + 0x14u);
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, eax);
    wr32(sp0 - 0x20u, sp0 - 8u);
    t1 = rd32(self + 8u);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    g->edi = 0u;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10118900u), t1, 4, sp0 - 8u, eax, 1u, 1u);
    if ((uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) != rd32(self + 0x14u)) goto L_10205832;
    eax = rd32(self + 0x14u);
    ecx = rd32(self + 8u);
    if ((int16_t)rd16(ecx + 0x5eu) <= 0) goto L_10205802;
    eax = (eax & 0xffff0000u) | rd16(ecx + 0x5eu);
    wr32(sp0 - 0x14u, eax);
    wr32(sp0 - 0x18u, 0x1eu);
    t2 = rd32(sp0 - 6u);
    wr32(sp0 - 0x1cu, t2);
    t3 = rd32(sp0 - 8u);
    wr32(sp0 - 0x20u, t3);
    t4 = rd32(self + rd32(self + 0x18u) * 4u + 0x20u);
    wr32(sp0 - 0x24u, t4);
    g->eax = rd32(self + 0x18u);
    g->edx = t4;
    t5 = rd32(self + 0x18u);
    g->esp = sp0 - 0x10u;
    t6 = cow_thiscall(g, COW_IMG(0x10119f80u), ecx, 5, t4, t3, t2, 0x1eu, eax);
    t7 = g->edx;
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->edx = t7;
    return t6;
L_10205802: ;
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
    g->eax = t8;
    g->edx = rd32(self + 0x18u);
    t10 = rd32(self + 0x18u);
    g->esp = sp0 - 0x10u;
    t11 = cow_thiscall(g, COW_IMG(0x1011fc80u), rd32(self + t10 * 4u + 0x20u), 8, t9, t8, 0x3f800000u, 0x3f800000u, 0x80805020u, 0u, 0u, 0u);
    t12 = g->edx;
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->edx = t12;
    return t11;
L_10205832: ;
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0x80808080u);
    t13 = (uint32_t)(int16_t)rd16(sp0 - 6u);
    wr32(sp0 - 0x20u, t13);
    t14 = (uint32_t)(int16_t)rd16(sp0 - 8u);
    wr32(sp0 - 0x24u, t14);
    g->eax = t13;
    g->edx = rd32(self + 0x18u);
    t15 = rd32(self + 0x18u);
    g->esp = sp0 - 0x10u;
    t16 = cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(self + t15 * 4u + 0x20u), 5, t14, t13, 0x80808080u, 0u, 0u);
    t17 = g->edx;
    eax = t16;
    edx = t17;
L_10205851: ;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10205790(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10205790(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
