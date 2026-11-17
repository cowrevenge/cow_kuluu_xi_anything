/* f_0x10210880 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10210880(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
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
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 0x20u;
    t1 = cow_cdecl(g, COW_IMG(0x100eb490u), 2, 0u, 0u);
    t2 = g->edx;
    if (t1 == 0u)
    {
        edx = t2;
        eax = 0u;
    }
    else
    {
        eax = t1;
        edx = t2;
        eax = rd32(eax + 4u);
    }
    wr32(self + 0x50u, eax);
    if (rd32(COW_IMG(0x105781f8u)) != 0u)
    {
        wr32(sp0 - 0x24u, 2u);
        g->eax = rd32(rd32(self + 0x54u));
        g->edx = edx;
        t3 = rd32(rd32(self + 0x54u));
        g->esp = sp0 - 0x20u;
        t4 = cow_thiscall_cdecl(g, rd32(t3 + 0x14u), rd32(self + 0x54u), 1, 2u);
        t5 = g->edx;
        wr32(sp0 - 0x28u, t4);
        cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, t4, 2u);
    }
    t6 = rd32(self + 0x50u);
    wr32(sp0 - 0x24u, t6);
    wr32(sp0 - 0x28u, self);
    g->eax = t6;
    g->edx = rd32(rd32(self + 0x54u));
    t7 = rd32(rd32(self + 0x54u));
    g->esp = sp0 - 0x20u;
    t8 = cow_thiscall(g, rd32(t7 + 0x1cu), rd32(self + 0x54u), 2, self, t6);
    t9 = g->edx;
    t10 = rd32(rd32(self + 0x54u));
    t11 = cow_thiscall(g, COW_IMG(0x101f7100u), self, 0);
    wr32(sp0 - 0x24u, t11);
    wr32(sp0 - 0x28u, arg1);
    cow_thiscall(g, rd32(t10 + 0xcu), rd32(self + 0x54u), 2, arg1, t11);
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x28u, sp0 - 0x14u);
    g->eax = rd32(rd32(self + 0x54u));
    g->edx = sp0 - 0x14u;
    t12 = rd32(rd32(self + 0x54u));
    t13 = cow_thiscall(g, rd32(t12 + 0x18u), rd32(self + 0x54u), 2, sp0 - 0x14u, sp0 - 0x10u);
    t14 = g->edx;
    if (rd32(self + 8u) == 0u)
    {
        ecx = rd32(self + 8u);
        edx = t14;
        goto L_1021090d;
    }
    eax = t13;
    ecx = rd32(self + 8u);
    edx = t14;
    if (rd32(sp0 - 0x14u) != 0u) goto L_10210919;
L_1021090d: ;
    if (rd8(rd32(self + 0x54u) + 0xcu) != 0u)
    {
        eax = rd32(self + 0x54u);
        goto L_102109b8;
    }
    eax = rd32(self + 0x54u);
L_10210919: ;
    wr16(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x24u, sp0 - 0xcu);
    wr16(sp0 - 0xau, 0u);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    g->esp = sp0 - 0x20u;
    cow_call_regs(g, COW_IMG(0x10118f70u), eax, ecx, g->edx, 0, 1, sp0 - 0xcu);
    if ((uint32_t)(int16_t)rd16(sp0 - 8u) - (uint32_t)(int16_t)rd16(sp0 - 0xcu) != rd32(COW_IMG(0x10385b88u)) + rd32(sp0 - 0x14u))
    {
        ecx = rd32(COW_IMG(0x10385b88u));
        edx = (uint32_t)(int16_t)rd16(sp0 - 8u) - (uint32_t)(int16_t)rd16(sp0 - 0xcu);
        edi = rd32(sp0 - 0x14u);
        goto L_1021095c;
    }
    eax = rd32(COW_IMG(0x10385b88u)) + rd32(sp0 - 0x14u);
    ecx = rd32(COW_IMG(0x10385b88u));
    edi = rd32(sp0 - 0x14u);
    if (rd8(rd32(self + 0x54u) + 0xcu) == 0u)
    {
        edx = rd32(self + 0x54u);
        goto L_102109b8;
    }
    edx = rd32(self + 0x54u);
L_1021095c: ;
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 1u);
    wr32(sp0 - 0x2cu, 1u);
    t15 = rd32(sp0 - 6u);
    wr16(COW_IMG(0x10385b84u), (uint16_t)(rd32(sp0 - 0x10u) + ((rd32(self + 0x54u) & 0xffff0000u) | (uint16_t)(rd16(COW_IMG(0x10385b82u)) - (uint16_t)((-((uint8_t)(rd8(rd32(self + 0x54u) + 0xdu) - 1u) != 0u) & 8u) - 8u)))));
    t16 = t15 - rd32(sp0 - 0xau);
    wr32(sp0 - 0x30u, t16);
    wr32(sp0 - 0x34u, ecx + edi);
    t17 = rd32(sp0 - 0xau);
    wr32(sp0 - 0x38u, t17);
    t18 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x3cu, t18);
    g->eax = t18;
    g->edx = t16;
    g->esp = sp0 - 0x20u;
    t19 = cow_thiscall(g, COW_IMG(0x1011a5a0u), rd32(self + 8u), 7, t18, t17, ecx + edi, t16, 1u, 1u, 0u);
    t20 = g->edx;
    t21 = rd32(self + 0x54u);
    wr16(self + 0x16u, 4u);
    wr32(self + 0x30u, COW_IMG(0x10385b7cu));
    wr8(t21 + 0xcu, 1u);
    eax = t19;
    edx = t20;
L_102109b8: ;
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10210880(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10210880(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
