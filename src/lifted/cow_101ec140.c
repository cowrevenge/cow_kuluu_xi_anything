/* f_0x101ec140 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101ec140(Guest* g)
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
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 56u);

    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 0x1cu, sp0 - 0xcu);
    t1 = rd32(self + 8u);
    wr16(sp0 - 0xcu, 0u);
    wr16(sp0 - 0xau, 0u);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    g->esp = sp0 - 0x18u;
    cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 0xcu, t1, g->edx, 0, 1, sp0 - 0xcu);
    t2 = g->ecx;
    t3 = rd32(sp0 - 6u);
    t4 = rd32(sp0 - 0xau);
    t5 = rd8(self + 0x44u);
    wr16(self + 0x28u, (uint16_t)(t3 - t4));
    if ((uint8_t)t5 == 0u)
    {
        eax = t3 - t4;
        edx = t4;
        if (rd8(self + 0x40u) == 0u)
        {
            wr16(self + 0x42u, (uint16_t)(rd32(sp0 - 8u) - rd32(sp0 - 0xcu)));
        }
        else
        {
            wr32(sp0 - 0x1cu, 0u);
            wr32(sp0 - 0x20u, 1u);
            wr32(sp0 - 0x24u, 1u);
            wr32(sp0 - 0x28u, eax);
            wr32(sp0 - 0x2cu, 0xfdu);
            wr32(sp0 - 0x30u, edx);
            t13 = rd32(sp0 - 0xcu);
            wr32(sp0 - 0x34u, t13);
            t14 = rd32(self + 8u);
            wr16(self + 0x42u, 0xfdu);
            g->edx = t13;
            g->esp = sp0 - 0x18u;
            cow_thiscall(g, COW_IMG(0x1011a5a0u), t14, 7, t13, edx, 0xfdu, eax, 1u, 1u, 0u);
            t15 = g->edx;
            edx = t15;
        }
    }
    else
    {
        eax = t3 - t4;
        ecx = (t2 & 0xffffff00u) | t5;
        edx = t4;
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0x20u, 1u);
        wr32(sp0 - 0x24u, 1u);
        t6 = rd16(self + 0x48u);
        t7 = rd16(self + 0x4cu);
        wr16(self + 0x28u, (uint16_t)t7);
        t8 = (ecx & 0xffff0000u) | t7;
        wr32(sp0 - 0x28u, t8);
        t9 = (eax & 0xffff0000u) | t6;
        wr32(sp0 - 0x2cu, t9);
        wr32(sp0 - 0x30u, edx);
        t10 = rd32(sp0 - 0xcu);
        wr32(sp0 - 0x34u, t10);
        t11 = rd32(self + 8u);
        wr16(self + 0x42u, (uint16_t)t9);
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        cow_thiscall(g, COW_IMG(0x1011a5a0u), t11, 7, t10, edx, t9, t8, 1u, 1u, 0u);
        t12 = g->edx;
        edx = t12;
    }
    if (rd32(self + 0x14u) != 0xfffffc19u)
    {
        eax = rd32(self + 0x14u);
        goto L_101ec1f1;
    }
    eax = rd32(self + 0x14u);
    if (rd32(self + 0x18u) == 0xfffffc19u) goto L_101ec212;
L_101ec1f1: ;
    if (rd8(self + 0x44u) == 0u)
    {
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x24u, self + 0x14u);
        g->eax = eax;
        g->esp = sp0 - 0x18u;
        t16 = cow_thiscall(g, COW_IMG(0x101602f0u), COW_IMG(0x10621838u), 3, self + 0x14u, 0u, 0u);
        eax = t16;
    }
    t17 = rd32(self + 0x18u);
    wr32(sp0 - 0x1cu, t17);
    t18 = rd32(self + 0x14u);
    wr32(sp0 - 0x20u, t18);
    g->edx = t18;
    g->esp = sp0 - 0x18u;
    t19 = cow_call_regs(g, COW_IMG(0x10119110u), eax, rd32(self + 8u), g->edx, 0, 2, t18, t17);
    t20 = g->edx;
    eax = t19;
    edx = t20;
L_101ec212: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ec140(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ec140(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
