/* f_0x100b2280 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b2280(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 72u);

    wr32(sp0 - 0x24u, in_ebx);
    wr32(sp0 - 0x28u, in_ebp);
    wr32(sp0 - 0x2cu, in_esi);
    wr32(sp0 - 0x30u, in_edi);
    t1 = (in_ebp & 0xffff0000u) | rd16(self + 0x256u);
    t2 = rd8((uint16_t)t1 + rd32(self + 0x20u) + 1u);
    if (t2 > 5u)
    {
        ebp = t1;
        goto L_100b2525;
    }
    eax = t2;
    ecx = rd32(self + 0x20u);
    edx = t2;
    ebp = t1;
    t3 = rd32(COW_IMG(0x100b2534u) + eax * 4u);
    switch (t3 - RD)
    {
    case 0x100b22b2u: goto L_100b22b2;
    case 0x100b2351u: goto L_100b2351;
    case 0x100b23b8u: goto L_100b23b8;
    case 0x100b2416u: goto L_100b2416;
    case 0x100b2485u: goto L_100b2485;
    default: rt_fatal(g, COW_IMG(0x100b22abu), "switch");
    }
    return;
L_100b22b2: ;
    wr32(sp0 - 0x34u, 6u);
    wr16(self + 0x256u, (uint16_t)(ebp + 1u));
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t37 = cow_call_regs(g, COW_IMG(0x100b2550u), ebp + 1u, g->ecx, g->edx, 1, 1, 6u);
    t38 = g->edx;
    if ((uint8_t)t37 != 0u)
    {
        eax = t37;
        edx = t38;
        goto L_100b22e0;
    }
    wr8(self + 0x25au, 1u);
    wr16(self + 0x256u, (uint16_t)ebp);
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    return;
L_100b22e0: ;
    g->esp = sp0 - 0x30u;
    t39 = cow_call_regs(g, COW_IMG(0x100b25f0u), eax, self, edx, 1, 0);
    if ((uint8_t)t39 != 0u)
    {
        eax = t39;
        goto L_100b2301;
    }
    wr8(self + 0x25au, 1u);
    wr16(self + 0x256u, (uint16_t)ebp);
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    return;
L_100b2301: ;
    wr32(sp0 - 0x34u, 1u);
    wr32(sp0 - 0x38u, 1u);
    wr32(sp0 - 0x3cu, 0xffffffffu);
    t40 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c350u);
    wr32(sp0 - 0x40u, t40);
    wr32(sp0 - 0x44u, 6u);
    g->eax = eax;
    g->edx = t40;
    g->esp = sp0 - 0x30u;
    t41 = cow_cdecl(g, COW_IMG(0x100b2570u), 5, 6u, t40, 0xffffffffu, 1u, 1u);
    t42 = g->edx;
    t43 = cow_fastcall(g, COW_IMG(0x1015ea30u), COW_IMG(0x10621838u), t42, 0);
    wr32(COW_IMG(0x1047d3e8u), t43);
    if (t43 != 0u)
    {
        eax = t43;
        wr32(eax + 0x53cu, COW_IMG(0x101f9510u));
    }
    t44 = rd32(sp0 - 0x30u);
    wr16(self + 0x256u, rd16(self + 0x256u));
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = t44;
    g->ebp = rd32(sp0 - 0x28u);
    return;
L_100b2351: ;
    wr32(sp0 - 0x34u, 2u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t28 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
    t29 = g->edx;
    edi = sp0 - 0x20u;
    eax = 0xffffffffu;
    ecx = 8u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x34u, 4u);
    g->eax = eax;
    g->edx = t29;
    t30 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 4u);
    t31 = g->edx;
    wr32(sp0 - 0x34u, 6u);
    wr16(sp0 - 0x20u, (uint16_t)t30);
    g->edx = t31;
    t32 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
    t33 = g->edx;
    wr16(sp0 - 0x1eu, (uint16_t)t32);
    t34 = cow_fastcall(g, COW_IMG(0x1015ea30u), COW_IMG(0x10621838u), t33, 0);
    t35 = g->edx;
    wr32(COW_IMG(0x1047d3e8u), t34);
    if (t34 != 0u)
    {
        eax = t34;
        edx = t35;
        ebx = t28;
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        wr32(sp0 - 0x38u, ebx);
        g->esp = sp0 - 0x30u;
        cow_thiscall(g, COW_IMG(0x1014e070u), eax, 2, ebx, sp0 - 0x20u);
    }
    t36 = rd32(sp0 - 0x30u);
    wr16(self + 0x256u, (uint16_t)(ebp + 8u));
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = t36;
    g->ebp = rd32(sp0 - 0x28u);
    return;
L_100b23b8: ;
    wr16(self + 0x256u, (uint16_t)(ebp + 1u));
    g->esp = sp0 - 0x30u;
    t24 = cow_call_regs(g, COW_IMG(0x100b25f0u), eax, self, ebp + 1u, 1, 0);
    t25 = g->edx;
    if ((uint8_t)t24 != 0u)
    {
        eax = t24;
        edx = t25;
        goto L_100b23e3;
    }
    wr8(self + 0x25au, 1u);
    wr16(self + 0x256u, (uint16_t)ebp);
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    return;
L_100b23e3: ;
    g->eax = eax;
    g->esp = sp0 - 0x30u;
    t26 = cow_fastcall(g, COW_IMG(0x1015ea30u), COW_IMG(0x10621838u), edx, 0);
    wr32(COW_IMG(0x1047d3e8u), t26);
    if (t26 != 0u)
    {
        eax = t26;
        wr32(eax + 0x53cu, COW_IMG(0x1013e6a0u));
    }
    t27 = rd32(sp0 - 0x30u);
    wr16(self + 0x256u, rd16(self + 0x256u));
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = t27;
    g->ebp = rd32(sp0 - 0x28u);
    return;
L_100b2416: ;
    wr32(sp0 - 0x34u, 2u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t17 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
    t18 = g->edx;
    edi = sp0 - 0x20u;
    eax = 0xffffffffu;
    ecx = 8u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x34u, 4u);
    edi = sp0 - 0x1cu;
    eax = 0u;
    ecx = 7u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr8(sp0 - 0x1eu, (uint8_t)eax);
    g->eax = eax;
    g->edx = t18;
    t19 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 4u);
    t20 = g->edx;
    wr16(sp0 - 0x20u, (uint16_t)t19);
    wr8(sp0 - 0x1du, 0u);
    t21 = cow_fastcall(g, COW_IMG(0x1015ea30u), COW_IMG(0x10621838u), t20, 0);
    t22 = g->edx;
    wr32(COW_IMG(0x1047d3e8u), t21);
    if (t21 != 0u)
    {
        eax = t21;
        edx = t22;
        ebx = t17;
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        wr32(sp0 - 0x38u, ebx);
        g->esp = sp0 - 0x30u;
        cow_thiscall(g, COW_IMG(0x1014e070u), eax, 2, ebx, sp0 - 0x20u);
    }
    t23 = rd32(sp0 - 0x30u);
    wr16(self + 0x256u, (uint16_t)(ebp + 6u));
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = t23;
    g->ebp = rd32(sp0 - 0x28u);
    return;
L_100b2485: ;
    wr32(sp0 - 0x34u, 2u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t4 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
    t5 = g->edx;
    edi = sp0 - 0x20u;
    eax = 0xffffffffu;
    ecx = 8u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x34u, 4u);
    edi = sp0 - 0x1cu;
    eax = 0u;
    ecx = 7u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr8(sp0 - 0x1eu, 1u);
    g->eax = eax;
    t6 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 4u);
    t7 = g->ecx;
    wr16(sp0 - 0x20u, (uint16_t)t6);
    wr32(sp0 - 0x34u, 6u);
    t8 = rd32(self + 0x20u);
    t9 = rd16(self + 0x256u);
    wr8(sp0 - 0x1du, (rd8(t9 + t8 + 1u) != 5u) - 1u & 2u);
    g->eax = t8;
    g->edx = t9;
    t10 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
    t11 = g->edx;
    wr32(sp0 - 0x34u, 8u);
    wr32(sp0 - 0x1cu, t10);
    g->edx = t11;
    t12 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 8u);
    t13 = g->edx;
    wr32(sp0 - 0x34u, 0xau);
    wr32(sp0 - 0x18u, t12);
    g->edx = t13;
    t14 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0xau);
    t15 = g->edx;
    wr32(sp0 - 0x14u, t14);
    t16 = cow_fastcall(g, COW_IMG(0x1015ea30u), COW_IMG(0x10621838u), t15, 0);
    wr32(COW_IMG(0x1047d3e8u), t16);
    if (t16 != 0u)
    {
        eax = t16;
        ebx = t4;
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        wr32(sp0 - 0x38u, ebx);
        g->esp = sp0 - 0x30u;
        cow_thiscall(g, COW_IMG(0x1014e070u), eax, 2, ebx, sp0 - 0x20u);
    }
    ebp = ebp + 0xcu;
L_100b2525: ;
    wr16(self + 0x256u, (uint16_t)ebp);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b2280(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b2280(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
