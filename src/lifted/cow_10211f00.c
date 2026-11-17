/* f_0x10211f00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10211f00(Guest* g)
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
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
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
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 60u);

    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    g->eax = rd32(self);
    g->edx = in_edx;
    t1 = rd32(self);
    g->esp = sp0 - 0x18u;
    t2 = cow_thiscall(g, rd32(t1 + 8u), self, 0);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 == 0u)
    {
        eax = t2;
        ecx = t3;
        edx = t4;
    }
    else
    {
        eax = t2;
        t5 = rd32(sp0 + 8u);
        wr32(sp0 - 0x1cu, t5);
        wr32(sp0 - 0x20u, arg1);
        wr32(sp0 - 0x24u, eax);
        g->eax = eax;
        g->edx = arg1;
        g->esp = sp0 - 0x18u;
        t6 = cow_thiscall(g, COW_IMG(0x102173e0u), self + 0x10u, 3, eax, arg1, t5);
        t7 = g->ecx;
        t8 = g->edx;
        eax = t6;
        ecx = t7;
        edx = t8;
    }
    t9 = rd16(self + 0x1au);
    wr16(self + 0x2cu, 0x10u);
    wr16(self + 0x2eu, (uint16_t)t9);
    t10 = rd16(self + 0x10u);
    wr8(sp0 + 8u, 0u);
    wr16(self + 0x28u, (uint16_t)(t10 + 0x10u));
    t11 = rd16(self + 0x12u);
    wr16(self + 0x2au, (uint16_t)((uint16_t)t9 + t11));
    t12 = rd16(self + 0x18u);
    wr16(self + 0x30u, (uint16_t)t12);
    wr16(self + 0x32u, 0xeu);
    if ((uint8_t)arg3 == 0u)
    {
        eax = ((((eax | t9) & 0xffff0000u) | t12) & 0xffffff00u) | (uint8_t)arg3;
        ecx = (ecx & 0xffff0000u) | (uint16_t)(t10 + 0x10u);
        edx = (edx & 0xffff0000u) | (uint16_t)((uint16_t)t9 + t11);
    }
    else
    {
        eax = ((((eax | t9) & 0xffff0000u) | t12) & 0xffffff00u) | (uint8_t)arg3;
        ecx = (ecx & 0xffff0000u) | (uint16_t)(t10 + 0x10u);
        edx = (edx & 0xffff0000u) | (uint16_t)((uint16_t)t9 + t11);
        wr8(sp0 + 8u, 1u);
    }
    wr32(sp0 - 0x1cu, in_ebx);
    wr32(sp0 - 0x20u, in_ebp);
    t13 = rd32(sp0 + 8u);
    wr32(sp0 - 0x24u, t13);
    t14 = rd16(self + 0x30u);
    wr32(sp0 - 0x28u, t14);
    t15 = (uint32_t)(int16_t)rd16(self + 0x2au);
    wr32(sp0 - 0x2cu, t15);
    t16 = (uint32_t)(int16_t)rd16(self + 0x28u);
    wr32(sp0 - 0x30u, t16);
    t17 = rd32(self + 0x24u);
    g->edx = t16;
    g->esp = sp0 - 0x20u;
    t18 = cow_call_regs(g, COW_IMG(0x101c6060u), t14, t17, g->edx, 1, 4, t16, t15, t14, t13);
    t19 = g->edx;
    wr32(sp0 - 0x34u, t18);
    g->edx = t19;
    g->esp = sp0 - 0x30u;
    t20 = cow_call_regs(g, COW_IMG(0x101c6020u), t18, t17, g->edx, 1, 1, t18);
    t21 = g->edx;
    wr32(sp0 - 0x38u, t20);
    g->edx = t21;
    g->esp = sp0 - 0x20u;
    t22 = cow_thiscall(g, COW_IMG(0x101c60e0u), t17, 6, t20, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
    t23 = g->edx;
    t24 = cow_thiscall(g, COW_IMG(0x10216c20u), sp0 - 0x10u, 0);
    t25 = g->ecx;
    t26 = rd16(self + 0x28u);
    t27 = rd16(self + 0x2au);
    wr16(sp0 - 0x10u, (uint16_t)(t26 - 0x10u));
    t28 = rd8(self + 0x36u);
    wr16(sp0 - 0xcu, 0xfff0u);
    wr16(sp0 - 0xau, 0u);
    wr16(sp0 - 0xeu, (uint16_t)t27);
    if (!(t28 & 1u))
    {
        eax = (((t24 & 0xffff0000u) | (uint16_t)(t26 - 0x10u)) & 0xffffff00u) | t28;
        ecx = (t25 & 0xffff0000u) | t27;
    }
    else
    {
        wr32(sp0 - 0x1cu, arg1);
        wr32(sp0 - 0x20u, 1u);
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, sp0 - 0x10u);
        g->eax = sp0 - 0x10u;
        t29 = rd32(COW_IMG(0x10664530u));
        g->esp = sp0 - 0x18u;
        t30 = cow_thiscall(g, COW_IMG(0x102167d0u), t29, 4, sp0 - 0x10u, 0u, 1u, arg1);
        t31 = g->ecx;
        eax = t30;
        ecx = t31;
    }
    if ((rd8(self + 0x36u) & 2u) == 0u) goto L_10212022;
    wr32(sp0 - 0x1cu, arg1);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 1u);
    wr32(sp0 - 0x28u, sp0 - 0x10u);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t32 = cow_thiscall(g, COW_IMG(0x102167d0u), rd32(COW_IMG(0x10664530u)), 4, sp0 - 0x10u, 1u, 0u, arg1);
    wr16(self + 0x1au, (uint16_t)(rd16(self + 0x1au) + rd16(self + 0x32u)));
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    return;
L_10212022: ;
    wr16(self + 0x1au, (uint16_t)(rd16(self + 0x1au) + rd16(self + 0x32u)));
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10211f00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10211f00(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
