/* f_0x1019aa10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1019aa10(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_14;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd8(self + 0x20u) != 0u) goto L_1019ab94;
    eax = (in_eax & 0xffffff00u) | rd8(self + 0x20u);
    if (rd8(self + 0x21u) != 0u) goto L_1019ab8c;
    if ((uint16_t)arg1 != 5u)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)arg1;
        goto L_1019ab6d;
    }
    if ((uint32_t)(int16_t)arg2 - 1u > 0xeu)
    {
        eax = (uint32_t)(int16_t)arg2 - 1u;
        edx = in_edx;
        goto L_1019ac2a;
    }
    t1 = rd32(COW_IMG(0x1019ac30u) + (uint32_t)(int16_t)arg2 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x1019aa50u: goto L_1019aa50;
    case 0x1019aa61u: goto L_1019aa61;
    case 0x1019aa73u: goto L_1019aa73;
    case 0x1019aa85u: goto L_1019aa85;
    case 0x1019aa92u: goto L_1019aa92;
    case 0x1019aaa3u: goto L_1019aaa3;
    case 0x1019aab5u: goto L_1019aab5;
    case 0x1019aac6u: goto L_1019aac6;
    case 0x1019aad8u: goto L_1019aad8;
    case 0x1019aaeau: goto L_1019aaea;
    case 0x1019aafbu: goto L_1019aafb;
    case 0x1019ab21u: goto L_1019ab21;
    case 0x1019ab33u: goto L_1019ab33;
    case 0x1019ab44u: goto L_1019ab44;
    case 0x1019ab58u: goto L_1019ab58;
    default: rt_fatal(g, COW_IMG(0x1019aa49u), "switch");
    }
    return 0;
L_1019aa50: ;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t28 = cow_call_regs(g, COW_IMG(0x10193830u), (uint32_t)(int16_t)arg2 - 1u, g->ecx, g->edx, 1, 2, 0x13u, 0u);
    t29 = g->edx;
    g->edx = t29;
    return t28;
L_1019aa61: ;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t26 = cow_call_regs(g, COW_IMG(0x10193830u), (uint32_t)(int16_t)arg2 - 1u, g->ecx, g->edx, 1, 2, 0x13u, 1u);
    t27 = g->edx;
    g->edx = t27;
    return t26;
L_1019aa73: ;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t24 = cow_call_regs(g, COW_IMG(0x10193830u), (uint32_t)(int16_t)arg2 - 1u, g->ecx, g->edx, 1, 2, 0x13u, 2u);
    t25 = g->edx;
    g->edx = t25;
    return t24;
L_1019aa85: ;
    wr32(self + 0x38u, 0u);
    wr8(self + 0x3cu, 1u);
    return (uint32_t)(int16_t)arg2 - 1u;
L_1019aa92: ;
    wr32(self + 0x38u, 1u);
    wr8(self + 0x3cu, 1u);
    return 1u;
L_1019aaa3: ;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t22 = cow_call_regs(g, COW_IMG(0x10193830u), (uint32_t)(int16_t)arg2 - 1u, g->ecx, g->edx, 1, 2, 0x3au, 2u);
    t23 = g->edx;
    g->edx = t23;
    return t22;
L_1019aab5: ;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t20 = cow_call_regs(g, COW_IMG(0x10193830u), (uint32_t)(int16_t)arg2 - 1u, g->ecx, g->edx, 1, 2, 0x3au, 0u);
    t21 = g->edx;
    g->edx = t21;
    return t20;
L_1019aac6: ;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t18 = cow_call_regs(g, COW_IMG(0x10193830u), (uint32_t)(int16_t)arg2 - 1u, g->ecx, g->edx, 1, 2, 0x3au, 1u);
    t19 = g->edx;
    g->edx = t19;
    return t18;
L_1019aad8: ;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t16 = cow_call_regs(g, COW_IMG(0x10193830u), (uint32_t)(int16_t)arg2 - 1u, g->ecx, g->edx, 1, 2, 0x3bu, 1u);
    t17 = g->edx;
    g->edx = t17;
    return t16;
L_1019aaea: ;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t14 = cow_call_regs(g, COW_IMG(0x10193830u), (uint32_t)(int16_t)arg2 - 1u, g->ecx, g->edx, 1, 2, 0x3bu, 0u);
    t15 = g->edx;
    g->edx = t15;
    return t14;
L_1019aafb: ;
    t10 = rd32(self + 0x48u);
    t11 = rd32(self + 8u);
    wr8(self + 0x20u, 1u);
    wr32(self + 0x24u, t10);
    wr8(t11 + 0x62u, 0u);
    t12 = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu);
    t13 = rd32(self + 8u);
    wr32(self + 0x2cu, t12);
    wr8(t13 + 0x85u, 0u);
    g->edx = t12;
    return t13;
L_1019ab21: ;
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t8 = cow_cdecl(g, COW_IMG(0x101938f0u), 2, 2u, 1u);
    t9 = g->edx;
    g->edx = t9;
    return t8;
L_1019ab33: ;
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t6 = cow_cdecl(g, COW_IMG(0x101938f0u), 2, 2u, 0u);
    t7 = g->edx;
    g->edx = t7;
    return t6;
L_1019ab44: ;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_call_regs(g, COW_IMG(0x10193830u), (uint32_t)(int16_t)arg2 - 1u, g->ecx, g->edx, 1, 2, 0xa5u, 0u);
    t5 = g->edx;
    g->edx = t5;
    return t4;
L_1019ab58: ;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t2 = cow_call_regs(g, COW_IMG(0x10193830u), (uint32_t)(int16_t)arg2 - 1u, g->ecx, g->edx, 1, 2, 0xa5u, 1u);
    t3 = g->edx;
    g->edx = t3;
    return t2;
L_1019ab6d: ;
    if ((uint16_t)eax != 6u)
    {
        edx = in_edx;
        goto L_1019ac2a;
    }
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t30 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037a668u));
    t31 = g->edx;
    g->edx = t31;
    return t30;
L_1019ab8c: ;
    if ((uint8_t)eax == 0u)
    {
        edx = in_edx;
        goto L_1019ac2a;
    }
L_1019ab94: ;
    if ((uint32_t)(int16_t)arg1 - 1u > 5u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        edx = in_edx;
        goto L_1019ac2a;
    }
    t32 = rd32(COW_IMG(0x1019ac6cu) + (uint32_t)(int16_t)arg1 * 4u - 4u);
    switch (t32 - RD)
    {
    case 0x1019abaau: goto L_1019abaa;
    case 0x1019abd5u: goto L_1019abd5;
    case 0x1019abf4u: goto L_1019abf4;
    case 0x1019ac13u: goto L_1019ac13;
    default: rt_fatal(g, COW_IMG(0x1019aba3u), "switch");
    }
    return 0;
L_1019abaa: ;
    t46 = rd32(self + 0x24u);
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10193830u), t46, g->ecx, g->edx, 1, 2, 0x3cu, t46);
    t47 = rd32(self + 8u);
    wr8(self + 0x20u, 0u);
    wr8(t47 + 0x62u, 1u);
    t48 = rd32(self + 8u);
    wr8(t48 + 0x85u, 1u);
    g->ebx = in_ebx;
    g->edx = t48;
    return 1u;
L_1019abd5: ;
    if ((int32_t)rd32(self + 0x24u) <= 25)
    {
        eax = rd32(self + 0x24u);
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x24u);
        wr32(self + 0x24u, eax - 1u);
        g->edx = in_edx;
        g->esp = sp0 - 0xcu;
        t38 = cow_call_regs(g, COW_IMG(0x10193830u), eax - 1u, g->ecx, g->edx, 1, 2, 0x3cu, eax - 1u);
        t39 = g->edx;
        eax = t38;
        edx = t39;
    }
    t40 = (eax & 0xffff0000u) | rd16(self + 0x2cu);
    eax = t40;
    loc_14 = t40;
L_1019ac19: ;
    t41 = rd32(self + 8u);
    g->ebx = 0u;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t42 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, t41, g->edx, 0, 2, loc_14, 0u);
    t43 = g->edx;
    g->edx = t43;
    t44 = cow_thiscall(g, COW_IMG(0x101186a0u), t41, 0);
    t45 = g->edx;
    eax = t44;
    edx = t45;
L_1019ac2a: ;
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
L_1019abf4: ;
    if ((int32_t)rd32(self + 0x24u) >= 50)
    {
        eax = rd32(self + 0x24u);
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x24u);
        wr32(self + 0x24u, eax + 1u);
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 0xcu;
        t34 = cow_call_regs(g, COW_IMG(0x10193830u), eax + 1u, g->ecx, g->edx, 1, 2, 0x3cu, eax + 1u);
        t35 = g->ecx;
        t36 = g->edx;
        eax = t34;
        ecx = t35;
        edx = t36;
    }
    t37 = (ecx & 0xffff0000u) | rd16(self + 0x2cu);
    loc_14 = t37;
    goto L_1019ac19;
L_1019ac13: ;
    t33 = (in_edx & 0xffff0000u) | rd16(self + 0x2cu);
    eax = (uint32_t)(int16_t)arg1 - 1u;
    edx = t33;
    loc_14 = t33;
    goto L_1019ac19;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019aa10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1019aa10(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
