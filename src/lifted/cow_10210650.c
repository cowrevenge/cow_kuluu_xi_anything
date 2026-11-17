/* f_0x10210650 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10210650(Guest* g)
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
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    wr32(sp0 - 0x14u, sp0 - 8u);
    t1 = rd32(self + 8u);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t2 = cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 8u, t1, g->edx, 0, 1, sp0 - 8u);
    t3 = g->edx;
    if ((int32_t)rd32(COW_IMG(0x10385b88u)) >= 0)
    {
        eax = t2;
        edx = t3;
    }
    else
    {
        eax = t2;
        t4 = (uint32_t)(int16_t)rd16(sp0 - 4u) - (uint32_t)(int16_t)rd16(sp0 - 8u);
        wr32(COW_IMG(0x10385b88u), t4);
        edx = t4;
    }
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, 1u);
    g->esp = sp0 - 0x10u;
    t5 = cow_call_regs(g, COW_IMG(0x1013e3b0u), eax, rd32(COW_IMG(0x10578204u)), edx, 0, 4, 1u, 1u, 0u, 0u);
    t6 = g->edx;
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, COW_IMG(0x1036f718u));
    g->edx = t6;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1036f718u), 1u, 0u);
    t7 = g->edx;
    g->eax = rd32(rd32(self + 0x54u));
    g->edx = t7;
    t8 = rd32(rd32(self + 0x54u));
    t9 = cow_thiscall(g, rd32(t8 + 4u), rd32(self + 0x54u), 0);
    t10 = g->edx;
    if (rd32(COW_IMG(0x1057847cu)) == 0u)
    {
        eax = t9;
        edx = t10;
    }
    else
    {
        eax = t9;
        wr32(sp0 - 0x14u, 2u);
        g->eax = eax;
        g->edx = rd32(rd32(self + 0x54u));
        t11 = rd32(rd32(self + 0x54u));
        g->esp = sp0 - 0x14u;
        t12 = cow_thiscall(g, rd32(t11 + 0x10u), rd32(self + 0x54u), 0);
        t13 = g->edx;
        wr32(sp0 - 0x18u, t12);
        g->edx = t13;
        g->esp = sp0 - 0x10u;
        t14 = cow_thiscall(g, COW_IMG(0x10150cc0u), rd32(COW_IMG(0x1057847cu)), 2, t12, 2u);
        t15 = g->edx;
        eax = t14;
        edx = t15;
    }
    if (rd32(COW_IMG(0x105781f8u)) != 0u)
    {
        wr32(sp0 - 0x14u, 2u);
        g->eax = rd32(rd32(self + 0x54u));
        g->edx = edx;
        t16 = rd32(rd32(self + 0x54u));
        g->esp = sp0 - 0x14u;
        t17 = cow_thiscall(g, rd32(t16 + 0x14u), rd32(self + 0x54u), 0);
        t18 = g->edx;
        wr32(sp0 - 0x18u, t17);
        g->esp = sp0 - 0x10u;
        t19 = cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, t17, 2u);
        eax = t19;
    }
    wr32(sp0 - 0x14u, 0u);
    t20 = rd32(rd32(COW_IMG(0x10664508u)) + 8u);
    wr32(sp0 - 0x18u, t20);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t21 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t20, 2, t20, 0u);
    t22 = g->edx;
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->edx = t22;
    return t21;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10210650(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10210650(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
