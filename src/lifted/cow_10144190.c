/* f_0x10144190 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10144190(Guest* g)
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

    if ((uint32_t)(int16_t)arg1 - 1u > 5u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        edx = in_edx;
        goto L_101442a0;
    }
    t1 = rd32(COW_IMG(0x101442a4u) + (uint32_t)(int16_t)arg1 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x101441a9u: goto L_101441a9;
    case 0x101441c5u: goto L_101441c5;
    case 0x101441e1u: goto L_101441e1;
    case 0x101441fdu: goto L_101441fd;
    case 0x10144219u: goto L_10144219;
    case 0x10144283u: goto L_10144283;
    default: rt_fatal(g, COW_IMG(0x101441a2u), "switch");
    }
    return 0;
L_101441a9: ;
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t37 = cow_thiscall(g, COW_IMG(0x10144360u), self, 0);
    t38 = g->edx;
    if ((uint8_t)t37 == 0u)
    {
        eax = t37;
        edx = t38;
        goto L_101442a0;
    }
    eax = t37;
    edx = t38;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t39 = cow_fastcall(g, COW_IMG(0x101443c0u), self, edx, 1, 1u);
    t40 = g->edx;
    g->edx = t40;
    return t39;
L_101441c5: ;
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t33 = cow_thiscall(g, COW_IMG(0x10144360u), self, 0);
    t34 = g->edx;
    if ((uint8_t)t33 == 0u)
    {
        eax = t33;
        edx = t34;
        goto L_101442a0;
    }
    eax = t33;
    edx = t34;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t35 = cow_fastcall(g, COW_IMG(0x10144420u), self, edx, 1, 1u);
    t36 = g->edx;
    g->edx = t36;
    return t35;
L_101441e1: ;
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t29 = cow_thiscall(g, COW_IMG(0x10144360u), self, 0);
    t30 = g->edx;
    if ((uint8_t)t29 == 0u)
    {
        eax = t29;
        edx = t30;
        goto L_101442a0;
    }
    eax = t29;
    edx = t30;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t31 = cow_fastcall(g, COW_IMG(0x10144420u), self, edx, 1, 0xau);
    t32 = g->edx;
    g->edx = t32;
    return t31;
L_101441fd: ;
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t25 = cow_thiscall(g, COW_IMG(0x10144360u), self, 0);
    t26 = g->edx;
    if ((uint8_t)t25 == 0u)
    {
        eax = t25;
        edx = t26;
        goto L_101442a0;
    }
    eax = t25;
    edx = t26;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t27 = cow_fastcall(g, COW_IMG(0x101443c0u), self, edx, 1, 0xau);
    t28 = g->edx;
    g->edx = t28;
    return t27;
L_10144219: ;
    if ((uint32_t)(int16_t)arg2 - 1u > 4u)
    {
        eax = (uint32_t)(int16_t)arg2 - 1u;
        edx = in_edx;
        goto L_101442a0;
    }
    t6 = rd32(COW_IMG(0x101442bcu) + (uint32_t)(int16_t)arg2 * 4u - 4u);
    switch (t6 - RD)
    {
    case 0x1014422bu: goto L_1014422b;
    case 0x1014424cu: goto L_1014424c;
    case 0x1014426du: goto L_1014426d;
    case 0x10144278u: goto L_10144278;
    case 0x10144299u: eax = (uint32_t)(int16_t)arg2 - 1u; edx = in_edx; goto L_10144299;
    default: rt_fatal(g, COW_IMG(0x10144224u), "switch");
    }
    return 0;
L_1014422b: ;
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t19 = cow_thiscall(g, COW_IMG(0x10144360u), self, 0);
    t20 = g->edx;
    if ((uint8_t)t19 == 0u)
    {
        eax = t19;
        edx = t20;
        goto L_10144241;
    }
    eax = t19;
    edx = t20;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t21 = cow_fastcall(g, COW_IMG(0x101443a0u), self, edx, 0);
    t22 = g->edx;
    g->edx = t22;
    return t21;
L_10144241: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t23 = cow_thiscall(g, COW_IMG(0x10144370u), self, 1, 1u);
    t24 = g->edx;
    g->edx = t24;
    return t23;
L_1014424c: ;
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t13 = cow_thiscall(g, COW_IMG(0x10144360u), self, 0);
    t14 = g->edx;
    if ((uint8_t)t13 == 0u)
    {
        eax = t13;
        edx = t14;
        goto L_10144262;
    }
    eax = t13;
    edx = t14;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t15 = cow_fastcall(g, COW_IMG(0x101443a0u), self, edx, 0);
    t16 = g->edx;
    g->edx = t16;
    return t15;
L_10144262: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t17 = cow_thiscall(g, COW_IMG(0x10144370u), self, 1, 2u);
    t18 = g->edx;
    g->edx = t18;
    return t17;
L_1014426d: ;
    g->esp = sp0 - 4u;
    t11 = cow_call_regs(g, COW_IMG(0x101442d0u), (uint32_t)(int16_t)arg2 - 1u, self, in_edx, 1, 0);
    t12 = g->edx;
    g->edx = t12;
    return t11;
L_10144278: ;
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t9 = cow_thiscall(g, COW_IMG(0x10144310u), self, 0);
    t10 = g->edx;
    g->edx = t10;
    return t9;
L_10144283: ;
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, COW_IMG(0x10144360u), self, 0);
    t3 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        eax = t2;
        edx = t3;
        goto L_10144299;
    }
    eax = t2;
    edx = t3;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t4 = cow_fastcall(g, COW_IMG(0x101443a0u), self, edx, 0);
    t5 = g->edx;
    g->edx = t5;
    return t4;
L_10144299: ;
    g->esp = sp0 - 4u;
    t7 = cow_call_regs(g, COW_IMG(0x101442f0u), eax, self, edx, 1, 0);
    t8 = g->edx;
    eax = t7;
    edx = t8;
L_101442a0: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10144190(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10144190(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
