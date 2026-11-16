/* f_0x101a6180 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101a6180(Guest* g)
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
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint32_t)(int16_t)arg1 == 5u) goto L_101a61ae;
    if ((uint32_t)(int16_t)arg1 == 6u)
    {
        eax = (uint32_t)(int16_t)arg1 - 6u;
        goto L_101a6199;
    }
    if ((uint32_t)(int16_t)arg1 - 6u != 2u)
    {
        eax = (uint32_t)(int16_t)arg1 - 8u;
        edx = in_edx;
        goto L_101a62b0;
    }
    eax = (uint32_t)(int16_t)arg1 - 8u;
L_101a6199: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10037e90u), self, 0);
    t1 = g->edx;
    t2 = (uint32_t)(int8_t)rd8(self + 0x1cu);
    g->eax = t2;
    t3 = cow_call_regs(g, COW_IMG(0x101a6100u), g->eax, g->ecx, t1, 0, 1, t2);
    t4 = g->edx;
    g->edx = t4;
    return t3;
L_101a61ae: ;
    if (rd8(self + 0x1du) == 0u) goto L_101a6257;
    if ((uint32_t)(int16_t)arg2 == 1u) goto L_101a623f;
    if ((uint32_t)(int16_t)arg2 == 2u) goto L_101a6205;
    if ((uint32_t)(int16_t)arg2 != 3u)
    {
        eax = (uint32_t)(int16_t)arg2 - 3u;
        edx = in_edx;
        goto L_101a62a4;
    }
    g->eax = (uint32_t)(int16_t)arg2 - 3u;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t5 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0xeeu);
    t6 = g->edx;
    g->edx = t6;
    g->esp = sp0 - 4u;
    t7 = cow_thiscall(g, COW_IMG(0x10210e30u), rd32(COW_IMG(0x10664520u)), 7, COW_IMG(0x101a6160u), 0u, t5, 0u, 0u, 1u, 0u);
    t8 = g->edx;
    t9 = (uint32_t)(int8_t)rd8(self + 0x1cu);
    t10 = cow_call_regs(g, COW_IMG(0x101a6100u), g->eax, g->ecx, t8, 0, 1, t9);
    t11 = g->edx;
    g->edx = t11;
    return t10;
L_101a6205: ;
    g->eax = (uint32_t)(int16_t)arg2 - 2u;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t12 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0xedu);
    t13 = g->edx;
    g->edx = t13;
    g->esp = sp0 - 4u;
    t14 = cow_thiscall(g, COW_IMG(0x10210e30u), rd32(COW_IMG(0x10664520u)), 7, COW_IMG(0x101a6140u), 0u, t12, 0u, 0u, 1u, 0u);
    t15 = g->edx;
    t16 = (uint32_t)(int8_t)rd8(self + 0x1cu);
    t17 = cow_call_regs(g, COW_IMG(0x101a6100u), g->eax, g->ecx, t15, 0, 1, t16);
    t18 = g->edx;
    g->edx = t18;
    return t17;
L_101a623f: ;
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t19 = cow_thiscall(g, COW_IMG(0x101a2bc0u), rd32(self + 0x14u), 0);
    t20 = g->edx;
    t21 = (uint32_t)(int8_t)rd8(self + 0x1cu);
    t22 = cow_call_regs(g, COW_IMG(0x101a6100u), g->eax, g->ecx, t20, 0, 1, t21);
    t23 = g->edx;
    g->edx = t23;
    return t22;
L_101a6257: ;
    if ((uint32_t)(int16_t)arg2 == 1u) goto L_101a6298;
    if ((uint32_t)(int16_t)arg2 == 2u) goto L_101a627c;
    if ((uint32_t)(int16_t)arg2 != 3u)
    {
        eax = (uint32_t)(int16_t)arg2 - 3u;
        edx = in_edx;
        goto L_101a62a4;
    }
    t24 = rd32(self + 0x18u);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t25 = cow_thiscall(g, COW_IMG(0x101a2a90u), rd32(self + 0x14u), 1, t24);
    t26 = g->edx;
    t27 = (uint32_t)(int8_t)rd8(self + 0x1cu);
    t28 = cow_call_regs(g, COW_IMG(0x101a6100u), g->eax, g->ecx, t26, 0, 1, t27);
    t29 = g->edx;
    g->edx = t29;
    return t28;
L_101a627c: ;
    t30 = rd32(self + 0x18u);
    g->edx = t30;
    g->esp = sp0 - 4u;
    t31 = cow_thiscall(g, COW_IMG(0x101a2ac0u), rd32(self + 0x14u), 1, t30);
    t32 = g->edx;
    t33 = (uint32_t)(int8_t)rd8(self + 0x1cu);
    t34 = cow_call_regs(g, COW_IMG(0x101a6100u), g->eax, g->ecx, t32, 0, 1, t33);
    t35 = g->edx;
    g->edx = t35;
    return t34;
L_101a6298: ;
    t36 = rd32(self + 0x18u);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t37 = cow_thiscall(g, COW_IMG(0x101a2af0u), rd32(self + 0x14u), 1, t36);
    t38 = g->edx;
    eax = t37;
    edx = t38;
L_101a62a4: ;
    t39 = (uint32_t)(int8_t)rd8(self + 0x1cu);
    g->eax = eax;
    g->esp = sp0 - 4u;
    t40 = cow_call_regs(g, COW_IMG(0x101a6100u), g->eax, g->ecx, edx, 0, 1, t39);
    t41 = g->edx;
    eax = t40;
    edx = t41;
L_101a62b0: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a6180(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a6180(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
