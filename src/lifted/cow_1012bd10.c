/* f_0x1012bd10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1012bd10(Guest* g)
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint32_t)(int16_t)arg1 - 1u > 8u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        edx = in_edx;
        goto L_1012be39;
    }
    t1 = rd32(COW_IMG(0x1012be40u) + (uint32_t)(int16_t)arg1 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x1012bd29u: goto L_1012bd29;
    case 0x1012bd44u: goto L_1012bd44;
    case 0x1012bd64u: goto L_1012bd64;
    case 0x1012bd8du: goto L_1012bd8d;
    case 0x1012bdb8u: goto L_1012bdb8;
    case 0x1012bdceu: goto L_1012bdce;
    case 0x1012be2fu: goto L_1012be2f;
    case 0x1012be39u: eax = (uint32_t)(int16_t)arg1 - 1u; edx = in_edx; goto L_1012be39;
    default: rt_fatal(g, COW_IMG(0x1012bd22u), "switch");
    }
    return 0;
L_1012bd29: ;
    if ((int16_t)rd8(self + 0x53u) < (int16_t)arg2)
    {
        eax = rd8(self + 0x53u);
    }
    else
    {
        eax = rd8(self + 0x53u);
        wr8(self + 0x52u, 1u);
    }
    wr32(self + 0x60u, 0x42700000u);
    return eax;
L_1012bd44: ;
    if ((int16_t)rd8(self + 0x53u) >= (int16_t)arg2)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        edx = in_edx;
    }
    else
    {
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t25 = cow_call_regs(g, COW_IMG(0x10118db0u), (uint32_t)(int16_t)arg1 - 1u, rd32(self + 8u), g->edx, 0, 2, 1u, 0u);
        t26 = g->edx;
        eax = t25;
        edx = t26;
    }
    wr8(self + 0x52u, 1u);
    g->edx = edx;
    return eax;
L_1012bd64: ;
    t21 = ((uint32_t)(int16_t)arg1 - 1u & 0xffffff00u) | rd8(self + 0x53u);
    if ((int16_t)(uint8_t)t21 >= (int16_t)arg2)
    {
        eax = t21;
        edx = (uint8_t)t21;
    }
    else
    {
        eax = t21;
        edx = (uint8_t)t21;
        t22 = (eax & 0xffff0000u) | (uint8_t)eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t23 = cow_call_regs(g, COW_IMG(0x10118db0u), t22, rd32(self + 8u), g->edx, 0, 2, t22, 0u);
        t24 = g->edx;
        eax = t23;
        edx = t24;
    }
    wr8(self + 0x52u, 1u);
    g->edx = edx;
    return eax;
L_1012bd8d: ;
    if (rd32(COW_IMG(0x1036f248u) + (uint32_t)(int16_t)rd16(self + (uint32_t)(int16_t)arg2 * 2u + 0x1au) * 0xcu) == 0u)
    {
        eax = rd32(COW_IMG(0x1036f248u) + (uint32_t)(int16_t)rd16(self + (uint32_t)(int16_t)arg2 * 2u + 0x1au) * 0xcu);
        edx = (uint32_t)(int16_t)rd16(self + (uint32_t)(int16_t)arg2 * 2u + 0x1au) * 3u;
        goto L_1012be39;
    }
    eax = rd32(COW_IMG(0x1036f248u) + (uint32_t)(int16_t)rd16(self + (uint32_t)(int16_t)arg2 * 2u + 0x1au) * 0xcu);
    edx = (uint32_t)(int16_t)rd16(self + (uint32_t)(int16_t)arg2 * 2u + 0x1au) * 3u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t16 = cow_thiscall(g, eax, (uint32_t)(int16_t)arg2, 0);
    t17 = g->ecx;
    t18 = g->edx;
    wr8(self + 0x52u, 1u);
    g->edx = t18;
    t19 = cow_stdcall(g, COW_IMG(0x10123e80u), 0);
    t20 = g->edx;
    g->edx = t20;
    return t19;
L_1012bdb8: ;
    t13 = (uint32_t)(int16_t)rd16(self + (uint32_t)(int16_t)arg2 * 2u + 0x1au);
    g->esp = sp0 - 4u;
    t14 = cow_call_regs(g, COW_IMG(0x1012b880u), (uint32_t)(int16_t)arg2, g->ecx, in_edx, 0, 1, t13);
    t15 = g->edx;
    g->edx = t15;
    return t14;
L_1012bdce: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t4 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    t5 = g->edx;
    if (t4 == 0u)
    {
        eax = t4;
        goto L_1012bded;
    }
    eax = t4;
    edx = t5;
    if (rd32(rd32(eax + 0x70u) + 0x170u) == 1u)
    {
        ecx = rd32(rd32(eax + 0x70u) + 0x170u) - 1u;
        goto L_1012be01;
    }
    ecx = rd32(rd32(eax + 0x70u) + 0x170u) - 1u;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t6 = cow_thiscall(g, COW_IMG(0x10037bf0u), ecx, 0);
    eax = t6;
L_1012bded: ;
    t10 = rd32(self + 8u);
    g->edx = t10;
    g->esp = sp0 - 4u;
    t11 = cow_call_regs(g, COW_IMG(0x1015e790u), eax, COW_IMG(0x10621838u), g->edx, 0, 2, t10, 1u);
    t12 = g->edx;
    g->edx = t12;
    return t11;
L_1012be01: ;
    if (rd8(COW_IMG(0x10487f81u)) == 0u) goto L_1012be18;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t7 = cow_call_regs(g, COW_IMG(0x100a6070u), eax, g->ecx, g->edx, 0, 1, 0u);
    t8 = g->edx;
    g->edx = t8;
    return t7;
L_1012be18: ;
    t9 = rd32(COW_IMG(0x1062193cu));
    wr8(t9 + 0x59u, 1u);
    wr8(rd32(COW_IMG(0x10621940u)) + 0x59u, 1u);
    g->edx = edx;
    return t9;
L_1012be2f: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, COW_IMG(0x1015ee40u), COW_IMG(0x10621838u), 0);
    t3 = g->edx;
    eax = t2;
    edx = t3;
L_1012be39: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012bd10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1012bd10(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
