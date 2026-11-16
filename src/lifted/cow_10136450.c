/* f_0x10136450 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10136450(Guest* g)
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
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    wr32(sp0 - 0x14u, self + 0x38u);
    t1 = rd32(self + 8u);
    g->esp = sp0 - 0x10u;
    t2 = cow_thiscall(g, COW_IMG(0x1011a710u), t1, 1, self + 0x38u);
    t3 = g->ecx;
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 1u);
    t4 = (t3 & 0xffff0000u) | (uint16_t)(rd16(self + 0x3eu) - rd16(self + 0x3au));
    wr32(sp0 - 0x20u, t4);
    t5 = (t4 & 0xffff0000u) | (uint16_t)(rd16(rd32(COW_IMG(0x1062193cu)) + 0x32u) + 0xeu);
    wr32(sp0 - 0x24u, t5);
    t6 = (t2 & 0xffff0000u) | rd16(self + 0x3au);
    wr32(sp0 - 0x28u, t6);
    t7 = (rd32(COW_IMG(0x1062193cu)) & 0xffff0000u) | rd16(self + 0x38u);
    wr32(sp0 - 0x2cu, t7);
    g->eax = t6;
    g->edx = t7;
    t8 = cow_thiscall(g, COW_IMG(0x1011a5a0u), rd32(self + 8u), 7, t7, t6, t5, t4, 1u, 0u, 0u);
    t9 = g->edx;
    t10 = rd8(self + 0x48u);
    wr16(self + 0x54u, 0u);
    if ((uint8_t)t10 == 0u)
    {
        eax = (t8 & 0xffffff00u) | t10;
        edx = t9;
    }
    else
    {
        wr32(sp0 - 0x14u, 0u);
        t11 = (uint32_t)(int16_t)rd16(self + 0x4cu);
        wr32(sp0 - 4u, t11);
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x1cu, sp0 - 8u);
        t12 = (uint32_t)(int16_t)rd16(self + 0x4au);
        wr32(sp0 - 8u, t12);
        g->edx = sp0 - 8u;
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, COW_IMG(0x101602f0u), COW_IMG(0x10621838u), 3, sp0 - 8u, 0u, 0u);
        t13 = g->edx;
        t14 = rd32(sp0 - 4u);
        wr32(sp0 - 0x14u, t14);
        t15 = rd32(sp0 - 8u);
        wr32(sp0 - 0x18u, t15);
        cow_call_regs(g, COW_IMG(0x10119110u), t14, rd32(self + 8u), g->edx, 0, 2, t15, t14);
        t16 = rd32(self + 8u);
        wr8(t16 + 0x86u, 0u);
        t17 = rd32(self + 8u);
        wr8(t17 + 0x84u, 0u);
        eax = t17;
        edx = t16;
    }
    g->edi = self + 0x38u;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t18 = cow_call_regs(g, COW_IMG(0x10136510u), eax, self, g->edx, 1, 0);
    t19 = g->edx;
    wr32(sp0 - 0x14u, self + 0x30u);
    cow_call_regs(g, COW_IMG(0x10118f70u), t18, rd32(self + 8u), g->edx, 0, 1, self + 0x30u);
    g->edi = in_edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10136450(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10136450(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
