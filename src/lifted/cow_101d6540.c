/* f_0x101d6540 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101d6540(Guest* g)
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_stdcall(g, COW_IMG(0x100f1080u), 0);
    t1 = g->ecx;
    t2 = g->edx;
    if ((uint32_t)(int16_t)arg1 - 1u > 8u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        edx = t2;
        goto L_101d66fb;
    }
    ecx = t1;
    edx = t2;
    t3 = rd32(COW_IMG(0x101d6700u) + (uint32_t)(int16_t)arg1 * 4u - 4u);
    switch (t3 - RD)
    {
    case 0x101d655fu: goto L_101d655f;
    case 0x101d666eu: goto L_101d666e;
    case 0x101d669fu: goto L_101d669f;
    case 0x101d66d4u: goto L_101d66d4;
    case 0x101d66fbu: eax = (uint32_t)(int16_t)arg1 - 1u; goto L_101d66fb;
    default: rt_fatal(g, COW_IMG(0x101d6558u), "switch");
    }
    return 0;
L_101d655f: ;
    g->ecx = ecx;
    g->esp = sp0 - 8u;
    t14 = cow_call_regs(g, COW_IMG(0x101cc0d0u), (uint32_t)(int16_t)arg1 - 1u, g->ecx, edx, 1, 2, 4u, 0u);
    t15 = g->ecx;
    t16 = g->edx;
    if ((uint8_t)t14 == 0u)
    {
        eax = t14;
        edx = t16;
        goto L_101d66fb;
    }
    eax = t14;
    ecx = t15;
    edx = t16;
    if (rd8(self + 0x18u) == 0u) goto L_101d65ba;
    eax = (eax & 0xffffff00u) | rd8(self + 0x18u);
    if (rd16((uint32_t)(int16_t)arg2 * 2u + rd32(self + 0x1cu) - 2u) != 0x118u)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)arg2;
        edx = rd32(self + 0x1cu);
        goto L_101d65b5;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)arg2;
    edx = rd32(self + 0x1cu);
    if (rd8(self + 0x19u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x19u);
        goto L_101d65af;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x19u);
    g->ebx = 1u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t17 = cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0xbeu);
    t18 = g->edx;
    g->ebx = in_ebx;
    g->edx = t18;
    return t17;
L_101d65af: ;
    wr8(self + 0x15u, 0x7fu);
L_101d6626: ;
    if ((int8_t)rd8(self + 0x15u) < 0)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x15u);
        goto L_101d66fb;
    }
    if (rd32(rd32(COW_IMG(0x106631d4u)) + 0x38u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x106631d4u)) + 0x38u);
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x106631d4u)) + 0x38u);
        wr32(eax + 0x880u, COW_IMG(0x101d6190u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t30 = cow_thiscall(g, COW_IMG(0x100ad1e0u), rd32(rd32(COW_IMG(0x106631d4u)) + 0x38u), 1, 0u);
        t31 = g->edx;
        eax = t30;
        edx = t31;
    }
    wr8(COW_IMG(0x106631d0u), 1u);
    wr8(COW_IMG(0x106218e6u), 1u);
    wr8(COW_IMG(0x10482f18u), 1u);
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
L_101d65b5: ;
    wr8(self + 0x15u, (uint8_t)eax);
    goto L_101d6626;
L_101d65ba: ;
    if ((uint32_t)(int16_t)arg2 - 1u > 3u)
    {
        eax = (uint32_t)(int16_t)arg2 - 1u;
        goto L_101d6626;
    }
    t19 = rd32(COW_IMG(0x101d6724u) + (uint32_t)(int16_t)arg2 * 4u - 4u);
    switch (t19 - RD)
    {
    case 0x101d65ccu: goto L_101d65cc;
    case 0x101d65e1u: goto L_101d65e1;
    case 0x101d65e7u: goto L_101d65e7;
    case 0x101d6604u: goto L_101d6604;
    default: rt_fatal(g, COW_IMG(0x101d65c5u), "switch");
    }
    return 0;
L_101d65cc: ;
    t27 = rd32(self + 8u);
    wr8(self + 0x15u, 0xffu);
    g->edx = edx;
    g->esp = sp0 - 8u;
    t28 = cow_call_regs(g, COW_IMG(0x1015e790u), t27, COW_IMG(0x10621838u), g->edx, 0, 2, t27, 1u);
    t29 = g->edx;
    eax = t28;
    edx = t29;
    goto L_101d6626;
L_101d65e1: ;
    wr8(self + 0x15u, 0u);
    eax = (uint32_t)(int16_t)arg2 - 1u;
    goto L_101d6626;
L_101d65e7: ;
    t24 = rd32(self + 8u);
    wr8(self + 0x15u, 0xffu);
    wr8(self + 0x18u, 1u);
    g->edx = edx;
    g->esp = sp0 - 8u;
    t25 = cow_call_regs(g, COW_IMG(0x10118db0u), (uint32_t)(int16_t)arg2 - 1u, t24, g->edx, 0, 2, 1u, 0u);
    t26 = g->edx;
    wr16(rd32(self + 8u) + 0x5eu, 0u);
    eax = t25;
    edx = t26;
    goto L_101d6626;
L_101d6604: ;
    if (rd8(self + 0x1au) != 0u)
    {
        eax = ((uint32_t)(int16_t)arg2 - 1u & 0xffffff00u) | rd8(self + 0x1au);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t22 = cow_stdcall(g, COW_IMG(0x100f1080u), 0);
        t23 = g->edx;
        wr8(self + 0x15u, (uint8_t)((t22 != 0u) + 0x7du));
        eax = t22;
        edx = (t23 & 0xffffff00u) | (uint8_t)((t22 != 0u) + 0x7du);
    }
    else
    {
        eax = ((uint32_t)(int16_t)arg2 - 1u & 0xffffff00u) | rd8(self + 0x1au);
        wr8(self + 0x15u, 0xffu);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t20 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
        t21 = g->edx;
        eax = t20;
        edx = t21;
    }
    goto L_101d6626;
L_101d666e: ;
    if (rd8(self + 0x18u) == 0u)
    {
        eax = ((uint32_t)(int16_t)arg1 - 1u & 0xffffff00u) | rd8(self + 0x18u);
        goto L_101d668a;
    }
    eax = ((uint32_t)(int16_t)arg1 - 1u & 0xffffff00u) | rd8(self + 0x18u);
    t8 = rd32(self + 8u);
    wr8(self + 0x18u, 0u);
    g->edx = edx;
    g->esp = sp0 - 8u;
    t9 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, t8, g->edx, 0, 2, 4u, 0u);
    t10 = g->edx;
    g->edx = t10;
    return t9;
L_101d668a: ;
    t11 = rd32(self + 8u);
    g->edx = t11;
    g->esp = sp0 - 8u;
    t12 = cow_call_regs(g, COW_IMG(0x1015e790u), eax, COW_IMG(0x10621838u), g->edx, 0, 2, t11, 1u);
    t13 = g->edx;
    g->edx = t13;
    return t12;
L_101d669f: ;
    if (rd8(self + 0x18u) == 0u)
    {
        eax = 4u;
    }
    else
    {
        eax = (uint32_t)(int8_t)rd8(self + 0x16u);
    }
    if ((int16_t)arg2 <= (int32_t)eax) goto L_101d66fb;
    g->esp = sp0 - 8u;
    t6 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, rd32(self + 8u), g->edx, 0, 2, eax, 0u);
    t7 = rd32(COW_IMG(0x104e1d4cu));
    wr8(t7 + 0x4cu, 0u);
    g->edx = t7;
    return t6;
L_101d66d4: ;
    if (rd8(self + 0x18u) == 0u)
    {
        eax = 4u;
    }
    else
    {
        eax = (uint32_t)(int8_t)rd8(self + 0x16u);
    }
    if ((int16_t)arg2 > (int32_t)eax)
    {
        g->edx = edx;
        g->esp = sp0 - 8u;
        t4 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, rd32(self + 8u), g->edx, 0, 2, 1u, 0u);
        t5 = g->edx;
        eax = t4;
        edx = t5;
    }
L_101d66fb: ;
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d6540(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101d6540(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
