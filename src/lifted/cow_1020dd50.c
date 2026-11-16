/* f_0x1020dd50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1020dd50(Guest* g)
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
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(COW_IMG(0x10664494u)) == 0u)
    {
        eax = in_eax;
        edx = rd32(COW_IMG(0x10664494u));
        goto L_1020de8c;
    }
    edx = rd32(COW_IMG(0x10664494u));
    if ((uint32_t)(int16_t)arg1 - 1u > 5u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        goto L_1020de8c;
    }
    t1 = rd32(COW_IMG(0x1020de90u) + (uint32_t)(int16_t)arg1 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x1020dd77u: goto L_1020dd77;
    case 0x1020dd84u: goto L_1020dd84;
    case 0x1020dd91u: goto L_1020dd91;
    case 0x1020ddd0u: goto L_1020ddd0;
    case 0x1020de6au: goto L_1020de6a;
    default: rt_fatal(g, COW_IMG(0x1020dd70u), "switch");
    }
    return 0;
L_1020dd77: ;
    g->esp = sp0 - 4u;
    t36 = cow_call_regs(g, COW_IMG(0x1020db80u), (uint32_t)(int16_t)arg1 - 1u, self, edx, 0, 1, 1u);
    t37 = g->edx;
    g->esi = in_esi;
    g->edx = t37;
    return t36;
L_1020dd84: ;
    g->esp = sp0 - 4u;
    t34 = cow_call_regs(g, COW_IMG(0x1020db80u), (uint32_t)(int16_t)arg1 - 1u, self, edx, 0, 1, 0xffffffffu);
    t35 = g->edx;
    g->esi = in_esi;
    g->edx = t35;
    return t34;
L_1020dd91: ;
    if (rd8(self + 0x14u) == 0u)
    {
        eax = ((uint32_t)(int16_t)arg1 - 1u & 0xffffff00u) | rd8(self + 0x14u);
        goto L_1020de8c;
    }
    eax = ((uint32_t)(int16_t)arg1 - 1u & 0xffffff00u) | rd8(self + 0x14u);
    g->eax = eax;
    g->esp = sp0 - 4u;
    t27 = cow_fastcall(g, COW_IMG(0x1020dc20u), self, edx, 0);
    t28 = g->ecx;
    t29 = g->edx;
    if ((uint16_t)arg2 != 1u)
    {
        eax = (t27 & 0xffff0000u) | (uint16_t)arg2;
        edx = t29;
        goto L_1020ddb9;
    }
    eax = (t27 & 0xffff0000u) | (uint16_t)arg2;
    ecx = t28;
    edx = t29;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t30 = cow_call_regs(g, COW_IMG(0x1020dbe0u), eax, ecx, g->edx, 0, 1, 1u);
    t31 = g->edx;
    g->esi = in_esi;
    g->edx = t31;
    return t30;
L_1020ddb9: ;
    if ((uint16_t)eax != 2u) goto L_1020de8c;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t32 = cow_call_regs(g, COW_IMG(0x1020dbe0u), eax, self, g->edx, 0, 1, 0u);
    t33 = g->edx;
    g->esi = in_esi;
    g->edx = t33;
    return t32;
L_1020ddd0: ;
    if ((uint32_t)(int16_t)arg2 - 1u > 3u)
    {
        eax = ((uint32_t)(int16_t)arg1 - 1u & 0xffff0000u) | (uint16_t)arg2;
        goto L_1020de8c;
    }
    t5 = rd32(COW_IMG(0x1020dea8u) + (uint32_t)(int16_t)arg2 * 4u - 4u);
    switch (t5 - RD)
    {
    case 0x1020dde9u: goto L_1020dde9;
    case 0x1020de02u: goto L_1020de02;
    case 0x1020de56u: goto L_1020de56;
    default: rt_fatal(g, COW_IMG(0x1020dde2u), "switch");
    }
    return 0;
L_1020dde9: ;
    if (rd8(self + 0x14u) != 0u)
    {
        eax = ((uint32_t)(int16_t)arg1 - 1u & 0xffff0000u) | (uint16_t)arg2;
        goto L_1020de87;
    }
    t22 = ((((uint32_t)(int16_t)arg1 - 1u & 0xffff0000u) | (uint16_t)arg2) & 0xffffff00u) | (uint8_t)((uint8_t)arg2 - 1u);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t23 = cow_call_regs(g, COW_IMG(0x1020dbe0u), t22, self, g->edx, 0, 1, t22);
    t24 = g->edx;
    g->esi = in_esi;
    g->edx = t24;
    return t23;
L_1020de02: ;
    g->ecx = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t9 = cow_cdecl(g, COW_IMG(0x10107830u), 1, edx + 0x5cu);
    t10 = g->ecx;
    t11 = g->edx;
    t12 = (t9 & 0xffffff00u) | rd8(self + 0x1au);
    t13 = (t10 & 0xffffff00u) | rd8(self + 0x18u);
    g->esi = self;
    g->edx = t11;
    g->esp = sp0 - 0xcu;
    t14 = cow_cdecl(g, COW_IMG(0x101077e0u), 3, edx + 0x5cu, t13, t12);
    t15 = g->edx;
    g->edx = t15;
    g->esp = sp0 - 8u;
    t16 = cow_call_regs(g, COW_IMG(0x1020a9d0u), t14, rd32(COW_IMG(0x10664494u)), g->edx, 0, 6, 1u, edx + 0x5cu, 1u, 0u, 0u, 0u);
    t17 = g->edx;
    g->edx = t17;
    t18 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385aa0u));
    t19 = g->edx;
    g->edx = t19;
    t20 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385a64u));
    t21 = g->edx;
    g->esi = in_esi;
    g->edx = t21;
    return t20;
L_1020de56: ;
    t6 = rd32(self + 8u);
    g->edx = t6;
    g->esp = sp0 - 4u;
    t7 = cow_call_regs(g, COW_IMG(0x1015e790u), ((uint32_t)(int16_t)arg1 - 1u & 0xffff0000u) | (uint16_t)arg2, COW_IMG(0x10621838u), g->edx, 0, 2, t6, 1u);
    t8 = g->edx;
    g->edx = t8;
    return t7;
L_1020de6a: ;
    if (rd8(self + 0x14u) != 0u)
    {
        eax = ((uint32_t)(int16_t)arg1 - 1u & 0xffffff00u) | rd8(self + 0x14u);
        goto L_1020de85;
    }
    t2 = rd32(self + 8u);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t3 = cow_call_regs(g, COW_IMG(0x1015e790u), t2, COW_IMG(0x10621838u), g->edx, 0, 2, t2, 1u);
    t4 = g->edx;
    g->edx = t4;
    return t3;
L_1020de85: ;
L_1020de87: ;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t25 = cow_fastcall(g, COW_IMG(0x1020dc20u), self, edx, 0);
    t26 = g->edx;
    eax = t25;
    edx = t26;
L_1020de8c: ;
    g->esi = in_esi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1020dd50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1020dd50(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
