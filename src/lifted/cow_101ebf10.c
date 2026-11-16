/* f_0x101ebf10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_101ebf10(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 != 0u)
    {
        wr32(self + 0x58u, arg1);
        wr32(self + 0x54u, arg3);
        wr32(self + 0x50u, arg2);
        g->esp = sp0 - 8u;
        t1 = cow_call_regs(g, COW_IMG(0x101f6700u), arg2, self, in_edx, 0, 1, 0xau);
        g->edx = rd32(rd32(self + 0x58u));
        t2 = rd32(rd32(self + 0x58u));
        t3 = cow_thiscall(g, rd32(t2 + 0xcu), rd32(self + 0x58u), 0);
        t4 = g->edx;
        g->eax = rd32(rd32(self + 0x58u));
        t5 = rd32(rd32(self + 0x58u));
        t6 = cow_thiscall(g, rd32(t5 + 0x10u), rd32(self + 0x58u), 0);
        t7 = rd32(self + 0x58u);
        wr16(self + 0x16u, (uint16_t)t6);
        wr32(self + 0x30u, t3);
        wr16(self + 0x26u, 0x12u);
        g->edx = rd32(t7);
        t8 = rd32(t7);
        t9 = cow_thiscall(g, rd32(t8 + 4u), t7, 0);
        t10 = g->edx;
        t11 = rd32(self + 0x58u);
        wr32(self + 0x40u, t9);
        g->eax = rd32(t11);
        g->edx = t10;
        t12 = rd32(t11);
        t13 = cow_thiscall(g, rd32(t12 + 8u), t11, 0);
        t14 = g->ecx;
        t15 = g->edx;
        if ((uint8_t)t13 == 0u)
        {
            edx = t15;
        }
        else
        {
            ecx = t14;
            edx = t15;
            g->esp = sp0 - 4u;
            t16 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 2u);
            t17 = rd32(rd32(t16) + 0x6b0u);
            wr8(self + 0x49u, 1u);
            wr32(self + 0x34u, t17);
            wr8(self + 0x2eu, 0u);
            wr8(self + 0x2fu, 6u);
            edx = t17;
        }
        wr8(self + 0x2cu, 0u);
        wr8(self + 0x2du, 3u);
        wr8(self + 0x47u, 1u);
        g->esp = sp0 - 4u;
        t18 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10382040u), 1u, 0u);
        if (rd32(self + 8u) != 0u)
        {
            eax = t18;
            esi = rd32(self + 8u);
            wr16(esi + 0x38u, (uint16_t)arg4);
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ebf10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101ebf10(g);
    g->esp = sp0;
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
