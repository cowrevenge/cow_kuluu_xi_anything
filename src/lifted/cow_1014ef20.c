/* f_0x1014ef20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1014ef20(Guest* g)
{
    uint32_t eax;
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, sp0 - 8u);
    wr16(self + 0x15cu, 0u);
    wr32(sp0 - 8u, 0x10u);
    wr32(sp0 - 4u, 0x90u);
    g->eax = sp0 - 8u;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x101602f0u), COW_IMG(0x10621838u), 3, sp0 - 8u, 0u, 0u);
    wr32(sp0 - 0x14u, 0x90u);
    wr32(sp0 - 0x18u, 0x10u);
    g->edx = 0x10u;
    t2 = rd32(self + 8u);
    t3 = cow_call_regs(g, COW_IMG(0x10119110u), t1, t2, g->edx, 0, 2, 0x10u, 0x90u);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(sp0 - 0x14u, 0x6b4u);
    g->esp = sp0 - 8u;
    t6 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t4, t5, 1, 3, 0x6b4u, in_edi, in_esi);
    t7 = g->edx;
    if (t6 == 0u)
    {
        edx = t7;
        eax = 0u;
    }
    else
    {
        eax = t6;
        edx = t7;
        wr32(sp0 - 0x14u, 0x114u);
        wr32(sp0 - 0x18u, 0xfu);
        wr32(sp0 - 0x1cu, 0x14au);
        wr32(sp0 - 0x20u, COW_IMG(0x103d3c84u));
        wr32(sp0 - 0x24u, COW_IMG(0x1014f830u));
        wr32(sp0 - 0x28u, self);
        wr32(sp0 - 0x2cu, 0xfu);
        wr32(sp0 - 0x30u, 1u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t8 = cow_thiscall(g, COW_IMG(0x101c5be0u), eax, 8, 1u, 0xfu, self, COW_IMG(0x1014f830u), COW_IMG(0x103d3c84u), 0x14au, 0xfu, 0x114u);
        t9 = g->edx;
        eax = t8;
        edx = t9;
    }
    wr32(sp0 - 0x14u, self + 0x20u);
    t10 = rd32(self + 8u);
    wr32(self + 0x160u, eax);
    wr8(self + 0x164u, 0u);
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x10118f70u), eax, t10, g->edx, 0, 1, self + 0x20u);
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, 1u);
    t11 = rd16(self + 0x20u);
    wr16(self + 0x30u, (uint16_t)(((self + 0x20u & 0xffff0000u) | t11) + 0x14u));
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, self + 0x28u);
    t12 = rd16(self + 0x22u);
    wr16(self + 0x32u, (uint16_t)(((((self + 0x20u & 0xffff0000u) | t11) + 0x14u & 0xffff0000u) | t12) + 0x1eu));
    t13 = rd32(self + 8u);
    wr16(self + 0x38u, (uint16_t)(((self + 0x20u & 0xffff0000u) | t11) + 0x12u));
    wr16(self + 0x3au, (uint16_t)(((((self + 0x20u & 0xffff0000u) | t11) + 0x14u & 0xffff0000u) | t12) + 8u));
    g->edi = ((self + 0x20u & 0xffff0000u) | t11) + 0x12u;
    g->eax = ((((self + 0x20u & 0xffff0000u) | t11) + 0x14u & 0xffff0000u) | t12) + 8u;
    g->edx = self + 0x28u;
    t14 = cow_thiscall(g, COW_IMG(0x10118900u), t13, 4, self + 0x28u, 1u, 1u, 1u);
    t15 = g->edx;
    wr32(sp0 - 0x14u, 1u);
    wr32(self + 0x16cu, 0x90u);
    g->edx = t15;
    cow_thiscall(g, COW_IMG(0x1014f250u), self, 1, 1u);
    t16 = g->edx;
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 2u);
    wr32(sp0 - 0x20u, self + 0x48u);
    g->edi = ((self + 0x20u & 0xffff0000u) | t11) + 0x12u;
    g->eax = self + 0x48u;
    g->edx = t16;
    t17 = cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, self + 0x48u, 2u, 1u, 1u);
    t18 = g->edx;
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 2u);
    g->edi = ((self + 0x20u & 0xffff0000u) | t11) + 0x12u;
    g->edx = t18;
    t19 = cow_thiscall(g, COW_IMG(0x101192b0u), rd32(self + 8u), 2, 2u, 0u);
    t20 = g->edx;
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 3u);
    wr32(sp0 - 0x20u, self + 0x50u);
    g->edi = ((self + 0x20u & 0xffff0000u) | t11) + 0x12u;
    g->edx = t20;
    t21 = cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, self + 0x50u, 3u, 1u, 1u);
    t22 = g->edx;
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 3u);
    g->edi = ((self + 0x20u & 0xffff0000u) | t11) + 0x12u;
    g->edx = t22;
    t23 = cow_thiscall(g, COW_IMG(0x101192b0u), rd32(self + 8u), 2, 3u, 0u);
    t24 = g->edx;
    g->edi = in_edi;
    g->edx = t24;
    return t23;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014ef20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1014ef20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
