/* f_0x101f0a10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_101f0a10(Guest* g)
{
    double d25;
    double d34;
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
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint32_t)(int16_t)arg1 == 5u) goto L_101f0a31;
    if ((uint32_t)(int16_t)arg1 != 6u)
    {
        eax = (uint32_t)(int16_t)arg1 - 6u;
        edx = in_edx;
        goto L_101f0b24;
    }
    g->eax = (uint32_t)(int16_t)arg1 - 6u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x101f2600u), rd32(COW_IMG(0x10663740u)), 0);
    t2 = g->edx;
    g->edx = t2;
    return t1;
L_101f0a31: ;
    g->edx = in_edx;
    t3 = rd16(arg4);
    g->esp = sp0 - 4u;
    t4 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, t3);
    t5 = g->edx;
    if (t4 == 0u)
    {
        eax = t4;
        edx = t5;
        goto L_101f0b24;
    }
    eax = t4;
    edx = t5;
    if (rd16(rd32(eax + 0x14b4u)) != 0x16u)
    {
        ecx = (rd32(eax + 0x14b4u) & 0xffff0000u) | rd16(rd32(eax + 0x14b4u));
        goto L_101f0a79;
    }
    t6 = rd8(arg4 + 2u);
    g->eax = eax;
    g->edx = t6;
    t7 = rd32(COW_IMG(0x10663aacu));
    g->esp = sp0 - 4u;
    t8 = cow_thiscall(g, COW_IMG(0x101fcf60u), t7, 2, 0u, t6);
    t9 = g->ecx;
    t10 = g->edx;
    g->edx = t10;
    t11 = cow_thiscall(g, COW_IMG(0x10037b90u), t9, 0);
    t12 = g->edx;
    g->edx = t12;
    return t11;
L_101f0a79: ;
    if ((uint16_t)ecx != 0x17u) goto L_101f0a9b;
    t13 = rd8(arg4 + 2u);
    g->eax = t13;
    g->edx = edx;
    t14 = rd32(COW_IMG(0x10663aacu));
    g->esp = sp0 - 4u;
    t15 = cow_thiscall(g, COW_IMG(0x101fcf60u), t14, 2, 1u, t13);
    t16 = g->ecx;
    t17 = g->edx;
    g->edx = t17;
    t18 = cow_thiscall(g, COW_IMG(0x10037b90u), t16, 0);
    t19 = g->edx;
    g->edx = t19;
    return t18;
L_101f0a9b: ;
    if ((uint16_t)ecx != 8u) goto L_101f0adc;
    g->ecx = ecx;
    g->esp = sp0 - 4u;
    t20 = cow_call_regs(g, COW_IMG(0x101cc0d0u), eax, g->ecx, edx, 1, 2, 0x77u, 0u);
    t21 = g->ecx;
    t22 = g->edx;
    if ((uint8_t)t20 != 0u)
    {
        ecx = t21;
        edx = t22;
        goto L_101f0aba;
    }
    eax = t20;
    ecx = t21;
    edx = t22;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t23 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t24 = g->edx;
    d25 = cow_take_float(g);
    g->edx = t24;
    fpush(g, d25);
    return t23;
L_101f0aba: ;
    t26 = (ecx & 0xffff0000u) | rd16(arg4);
    t27 = (edx & 0xffffff00u) | rd8(arg4 + 2u);
    g->edx = t27;
    t28 = rd32(COW_IMG(0x106634acu));
    g->esp = sp0 - 4u;
    t29 = cow_thiscall(g, COW_IMG(0x101e0e30u), t28, 3, t27, t26, 0u);
    t30 = g->ecx;
    t31 = g->edx;
    if ((uint8_t)t29 != 0u)
    {
        eax = t29;
        ecx = t30;
        edx = t31;
        goto L_101f0b1f;
    }
    eax = t29;
    ecx = t30;
    edx = t31;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t32 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t33 = g->edx;
    d34 = cow_take_float(g);
    g->edx = t33;
    fpush(g, d34);
    return t32;
L_101f0adc: ;
    if ((rd8(rd32(eax + 0x14bcu)) & 8u) == 0u)
    {
        eax = rd32(eax + 0x14bcu);
        goto L_101f0b0a;
    }
    eax = rd32(eax + 0x14bcu);
    g->ecx = ecx;
    g->esp = sp0 - 4u;
    t35 = cow_call_regs(g, COW_IMG(0x101cc0d0u), eax, g->ecx, edx, 1, 2, 0x80u, 1u);
    t36 = g->ecx;
    t37 = g->edx;
    if ((uint8_t)t35 != 0u)
    {
        eax = t35;
        ecx = t36;
        edx = t37;
        goto L_101f0b0a;
    }
    eax = t35;
    ecx = t36;
    edx = t37;
    g->ecx = ecx;
    g->esp = sp0 - 4u;
    t38 = cow_call_regs(g, COW_IMG(0x101cc0d0u), eax, g->ecx, edx, 1, 2, 0x77u, 1u);
    t39 = g->ecx;
    t40 = g->edx;
    if ((uint8_t)t38 != 0u)
    {
        eax = t38;
        ecx = t39;
        edx = t40;
        goto L_101f0b1a;
    }
    eax = t38;
    ecx = t39;
    edx = t40;
L_101f0b0a: ;
    g->ecx = ecx;
    g->esp = sp0 - 4u;
    t41 = cow_call_regs(g, COW_IMG(0x101cc0d0u), eax, g->ecx, edx, 1, 2, 0x7fu, 0u);
    t42 = g->ecx;
    t43 = g->edx;
    if ((uint8_t)t41 == 0u)
    {
        eax = t41;
        ecx = t42;
        edx = t43;
        goto L_101f0b1f;
    }
    eax = t41;
    ecx = t42;
    edx = t43;
L_101f0b1a: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t44 = cow_stdcall(g, COW_IMG(0x101f32a0u), 0);
    t45 = g->ecx;
    t46 = g->edx;
    eax = t44;
    ecx = t45;
    edx = t46;
L_101f0b1f: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t47 = cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t48 = g->edx;
    eax = t47;
    edx = t48;
L_101f0b24: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f0a10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101f0a10(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
