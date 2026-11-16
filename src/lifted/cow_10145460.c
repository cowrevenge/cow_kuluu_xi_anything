/* f_0x10145460 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10145460(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_c;
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
    uint32_t t42;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint16_t)arg1 != 6u) goto L_10145482;
    t1 = rd32(self + 8u);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_call_regs(g, COW_IMG(0x1015e790u), t1, COW_IMG(0x10621838u), g->edx, 0, 2, t1, 1u);
    t3 = g->edx;
    g->edx = t3;
    return t2;
L_10145482: ;
    if ((uint16_t)arg1 != 5u)
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)arg1;
        edx = in_edx;
        goto L_101455b7;
    }
    g->ecx = self;
    g->esp = sp0 - 4u;
    t4 = cow_call_regs(g, COW_IMG(0x101cc0d0u), (in_eax & 0xffff0000u) | (uint16_t)arg1, g->ecx, in_edx, 1, 2, 4u, 0u);
    t5 = g->ecx;
    t6 = g->edx;
    if ((uint8_t)t4 != 0u)
    {
        ecx = t5;
        edx = t6;
        goto L_101454a5;
    }
    eax = t4;
    ecx = t5;
    edx = t6;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t7 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t8 = g->edx;
    g->edx = t8;
    return t7;
L_101454a5: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t9 = cow_stdcall(g, COW_IMG(0x101039e0u), 0);
    t10 = g->ecx;
    t11 = g->edx;
    if (rd32(self + 0x18u) < t9)
    {
        ecx = t10;
        edx = t11;
        goto L_101454b8;
    }
    eax = t9;
    ecx = t10;
    edx = t11;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t12 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t13 = g->edx;
    g->edx = t13;
    return t12;
L_101454b8: ;
    if ((uint32_t)(int16_t)arg2 - 1u > 6u)
    {
        eax = (uint32_t)(int16_t)arg2 - 1u;
        goto L_101455b7;
    }
    t14 = rd32(COW_IMG(0x101455bcu) + (uint32_t)(int16_t)arg2 * 4u - 4u);
    switch (t14 - RD)
    {
    case 0x101454ceu: goto L_101454ce;
    case 0x101454e7u: goto L_101454e7;
    case 0x101454feu: goto L_101454fe;
    case 0x10145517u: goto L_10145517;
    case 0x10145541u: goto L_10145541;
    case 0x1014554au: goto L_1014554a;
    case 0x1014556cu: goto L_1014556c;
    default: rt_fatal(g, COW_IMG(0x101454c7u), "switch");
    }
    return 0;
L_101454ce: ;
    if (rd32(COW_IMG(0x105782ccu)) == 0u)
    {
        eax = (uint32_t)(int16_t)arg2 - 1u;
        goto L_101455b7;
    }
    ecx = rd32(COW_IMG(0x105782ccu));
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t41 = cow_thiscall(g, COW_IMG(0x10145c70u), ecx, 1, 0u);
    t42 = g->edx;
    g->edx = t42;
    return t41;
L_101454e7: ;
    if (rd32(COW_IMG(0x106631e0u)) == 0u)
    {
        eax = (uint32_t)(int16_t)arg2 - 1u;
        goto L_101455b7;
    }
    ecx = rd32(COW_IMG(0x106631e0u));
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->esp = sp0 - 4u;
    t39 = cow_fastcall(g, COW_IMG(0x101d6890u), ecx, edx, 0);
    t40 = g->edx;
    g->edx = t40;
    return t39;
L_101454fe: ;
    if (rd32(COW_IMG(0x105782c8u)) == 0u)
    {
        eax = (uint32_t)(int16_t)arg2 - 1u;
        goto L_101455b7;
    }
    ecx = rd32(COW_IMG(0x105782c8u));
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t37 = cow_thiscall(g, COW_IMG(0x10145ba0u), ecx, 1, 0u);
    t38 = g->edx;
    g->edx = t38;
    return t37;
L_10145517: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t31 = cow_call_regs(g, COW_IMG(0x10097b40u), (uint32_t)(int16_t)arg2 - 1u, g->ecx, g->edx, 1, 0);
    t32 = g->ecx;
    t33 = g->edx;
    if ((uint8_t)t31 == 0u)
    {
        edx = t33;
    }
    else
    {
        eax = t31;
        ecx = t32;
        edx = t33;
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x100a1860u), 1, 0x32u);
        t34 = g->edx;
        edx = t34;
    }
    g->edx = edx;
    g->esp = sp0 - 4u;
    t35 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x103715f8u), 1u, 0u);
    t36 = g->edx;
    g->edx = t36;
    return t35;
L_10145541: ;
    loc_c = COW_IMG(0x103715f0u);
L_10145551: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t27 = cow_cdecl(g, COW_IMG(0x10080dc0u), 2, loc_c, 0u);
    t28 = g->edx;
    g->edx = t28;
    t29 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1036fff0u));
    t30 = g->edx;
    g->edx = t30;
    return t29;
L_1014554a: ;
    loc_c = COW_IMG(0x103715e8u);
    goto L_10145551;
L_1014556c: ;
    g->ecx = rd32(COW_IMG(0x104dfd98u));
    t15 = rd32(COW_IMG(0x104dfd98u));
    g->esp = sp0 - 4u;
    t16 = cow_call_regs(g, COW_IMG(0x100f96e0u), g->eax, g->ecx, edx, 1, 1, t15);
    t17 = g->ecx;
    t18 = g->edx;
    if ((uint8_t)t16 == 0u)
    {
        ecx = t17;
        edx = t18;
        goto L_10145591;
    }
    ecx = t17;
    edx = t18;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t19 = cow_cdecl(g, COW_IMG(0x100f0a40u), 3, 2u, 0u, 0u);
    t20 = g->edx;
    g->edx = t20;
    return t19;
L_10145591: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t21 = cow_cdecl(g, COW_IMG(0x100f0a40u), 3, 1u, 0u, 0u);
    t22 = g->edx;
    g->edx = t22;
    t23 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 5u);
    t24 = g->edx;
    g->edx = t24;
    t25 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 7u);
    t26 = g->edx;
    wr8(self + 0x16u, 1u);
    eax = t25;
    edx = t26;
L_101455b7: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10145460(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10145460(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
