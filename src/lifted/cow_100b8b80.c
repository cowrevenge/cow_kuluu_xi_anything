/* f_0x100b8b80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b8b80(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
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
    cow_frame(g, sp0, 60u);

    wr32(sp0 - 0x20u, in_ebx);
    wr32(sp0 - 0x24u, in_ebp);
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, in_edi);
    t1 = rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 1u);
    if (t1 > 8u)
    {
        edx = t1;
        goto L_100b8bc5;
    }
    eax = t1;
    edx = t1;
    t2 = rd32(COW_IMG(0x100b8e44u) + eax * 4u);
    switch (t2 - RD)
    {
    case 0x100b8ba9u: goto L_100b8ba9;
    case 0x100b8bb0u: goto L_100b8bb0;
    case 0x100b8bb7u: goto L_100b8bb7;
    case 0x100b8bbeu: goto L_100b8bbe;
    default: rt_fatal(g, COW_IMG(0x100b8ba2u), "switch");
    }
    return;
L_100b8ba9: ;
    ebp = 6u;
L_100b8bc9: ;
    wr32(sp0 - 0x30u, sp0 - 0x1cu);
    wr32(sp0 - 0x34u, sp0 - 0x18u);
    wr32(sp0 - 0x38u, 2u);
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t3 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 2u);
    t4 = g->edx;
    wr32(sp0 - 0x38u, t3);
    g->esp = sp0 - 0x2cu;
    t5 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t4, 3, t3, sp0 - 0x18u, sp0 - 0x1cu);
    if ((uint8_t)t5 != 1u) goto L_100b8e34;
    if (rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0x1cu) * 4u) == 0u) goto L_100b8e34;
    eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0x1cu) * 4u);
    edi = COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0x1cu) * 4u;
    if (!(rd32(eax + 0x120u) >> 9u & 1u)) goto L_100b8e34;
    t6 = rd16(self + 0x256u);
    t7 = rd32(self + 0x20u);
    wr8(self + 0x25au, 1u);
    if (rd8(t6 + t7 + 1u) > 8u) goto L_100b8e34;
    eax = rd8(t6 + t7 + 1u);
    edx = t7;
    t8 = rd32(COW_IMG(0x100b8e68u) + eax * 4u);
    switch (t8 - RD)
    {
    case 0x100b8c48u: goto L_100b8c48;
    case 0x100b8c6cu: goto L_100b8c6c;
    case 0x100b8c99u: goto L_100b8c99;
    case 0x100b8cc1u: goto L_100b8cc1;
    case 0x100b8cf7u: goto L_100b8cf7;
    case 0x100b8d31u: goto L_100b8d31;
    case 0x100b8da4u: goto L_100b8da4;
    case 0x100b8e34u: goto L_100b8e34;
    default: rt_fatal(g, COW_IMG(0x100b8c41u), "switch");
    }
    return;
L_100b8bb0: ;
    ebp = 0x10u;
    goto L_100b8bc9;
L_100b8bb7: ;
    ebp = 0x12u;
    goto L_100b8bc9;
L_100b8bbe: ;
    ebp = 8u;
    goto L_100b8bc9;
L_100b8bc5: ;
    ebp = rd32(sp0 - 0x1cu);
    goto L_100b8bc9;
L_100b8c48: ;
    if ((rd8(rd32(edi) + 0x120u) & 4u) != 0u) goto L_100b8e34;
    edi = rd32(edi);
    wr32(edi + 0x174u, 0u);
    wr16(self + 0x256u, (uint16_t)((uint16_t)ebp + rd16(self + 0x256u)));
    g->ebx = rd32(sp0 - 0x20u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    g->ebp = rd32(sp0 - 0x24u);
    return;
L_100b8c6c: ;
    if ((rd8(rd32(edi) + 0x120u) & 4u) != 0u)
    {
        eax = rd32(edi);
    }
    else
    {
        eax = rd32(edi);
        wr32(eax + 0x174u, 5u);
    }
    wr32(sp0 - 0x30u, 1u);
    g->esp = sp0 - 0x2cu;
    cow_thiscall(g, COW_IMG(0x10097a20u), rd32(edi), 1, 1u);
    wr16(self + 0x256u, (uint16_t)((uint16_t)ebp + rd16(self + 0x256u)));
    g->ebx = rd32(sp0 - 0x20u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    g->ebp = rd32(sp0 - 0x24u);
    return;
L_100b8c99: ;
    if ((rd8(rd32(edi) + 0x120u) & 4u) == 0u)
    {
        eax = rd32(edi);
        wr32(eax + 0x174u, 0u);
    }
    t44 = rd32(sp0 - 0x2cu);
    wr8(rd32(edi) + 0x1dbu, 0u);
    wr16(self + 0x256u, (uint16_t)((uint16_t)ebp + rd16(self + 0x256u)));
    g->ebx = rd32(sp0 - 0x20u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = t44;
    g->ebp = rd32(sp0 - 0x24u);
    return;
L_100b8cc1: ;
    if ((rd8(rd32(edi) + 0x120u) & 4u) != 0u)
    {
        eax = rd32(edi);
    }
    else
    {
        eax = rd32(edi);
        wr32(eax + 0x174u, 0x55u);
    }
    wr32(sp0 - 0x30u, 6u);
    g->eax = eax;
    g->esp = sp0 - 0x2cu;
    t42 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
    t43 = rd32(sp0 - 0x2cu);
    wr8(rd32(edi) + 0x1dbu, (uint8_t)(t42 + 1u));
    wr16(self + 0x256u, (uint16_t)((uint16_t)ebp + rd16(self + 0x256u)));
    g->ebx = rd32(sp0 - 0x20u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = t43;
    g->ebp = rd32(sp0 - 0x24u);
    return;
L_100b8cf7: ;
    if (!(rd32(rd32(edi) + 0x120u) >> 0xau & 1u)) goto L_100b8e3b;
    edx = rd32(rd32(edi) + 0x120u) >> 0xau;
    edi = rd32(edi);
    if (rd32(edi + 0xa4u) == 0u) goto L_100b8e3b;
    ecx = rd32(edi + 0xa4u);
    g->eax = rd32(ecx);
    t40 = rd32(ecx);
    g->esp = sp0 - 0x2cu;
    t41 = cow_thiscall(g, rd32(t40 + 0x1e4u), ecx, 0);
    if ((uint8_t)t41 != 0u) goto L_100b8e34;
    g->ebx = rd32(sp0 - 0x20u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    g->ebp = rd32(sp0 - 0x24u);
    return;
L_100b8d31: ;
    if ((rd8(rd32(edi) + 0x120u) & 4u) != 0u)
    {
        eax = rd32(edi);
    }
    else
    {
        eax = rd32(edi);
        wr32(eax + 0x174u, 5u);
    }
    wr32(sp0 - 0x30u, 2u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t25 = cow_thiscall(g, COW_IMG(0x10097a20u), rd32(edi), 1, 2u);
    t26 = g->edx;
    wr32(sp0 - 0x30u, 6u);
    g->edx = t26;
    t27 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
    t28 = g->edx;
    wr32(sp0 - 0x30u, 8u);
    g->eax = t27 + 0x20u;
    g->edx = t28;
    t29 = rd32(sp0 - 0x14u);
    t30 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 8u);
    t31 = g->edx;
    wr32(sp0 - 0x30u, 0xau);
    g->edx = t31;
    t32 = rd32(sp0 - 0x10u);
    t33 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0xau);
    t34 = g->edx;
    wr32(sp0 - 0x30u, 0xcu);
    g->edx = t34;
    t35 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0xcu);
    t36 = g->edx;
    wr32(sp0 - 0x30u, 0xeu);
    g->edx = t36;
    t37 = rd32(sp0 - 0xcu);
    t38 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0xeu);
    t39 = g->edx;
    wr32(sp0 - 0x30u, sp0 - 0x14u);
    eax = t38;
    edx = t39;
L_100b8e1e: ;
    g->esp = sp0 - 0x2cu;
    cow_call_regs(g, COW_IMG(0x1009ac10u), eax, rd32(edi), g->edx, 0, 1, sp0 - 0x14u);
L_100b8e34: ;
    wr16(self + 0x256u, (uint16_t)((uint16_t)ebp + rd16(self + 0x256u)));
L_100b8e3b: ;
    g->ebx = rd32(sp0 - 0x20u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    g->ebp = rd32(sp0 - 0x24u);
    return;
L_100b8da4: ;
    if ((rd8(rd32(edi) + 0x120u) & 4u) != 0u)
    {
        eax = rd32(edi);
    }
    else
    {
        eax = rd32(edi);
        wr32(eax + 0x174u, 5u);
    }
    wr32(sp0 - 0x30u, 2u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t9 = cow_thiscall(g, COW_IMG(0x10097a20u), rd32(edi), 1, 2u);
    t10 = g->edx;
    wr32(sp0 - 0x30u, 6u);
    g->edx = t10;
    t11 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
    t12 = g->edx;
    wr32(sp0 - 0x30u, 8u);
    g->eax = t11 + 0x20u;
    g->edx = t12;
    t13 = rd32(sp0 - 0x14u);
    t14 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 8u);
    t15 = g->edx;
    wr32(sp0 - 0x30u, 0xau);
    g->edx = t15;
    t16 = rd32(sp0 - 0x10u);
    t17 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0xau);
    t18 = g->edx;
    wr32(sp0 - 0x30u, 0xcu);
    g->edx = t18;
    t19 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0xcu);
    t20 = g->edx;
    wr32(sp0 - 0x30u, 0xeu);
    g->edx = t20;
    t21 = rd32(sp0 - 0xcu);
    t22 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0xeu);
    t23 = g->edx;
    wr32(sp0 - 0x30u, 0x10u);
    t24 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0x10u);
    wr32(sp0 - 0x30u, sp0 - 0x14u);
    eax = t24;
    edx = sp0 - 0x14u;
    goto L_100b8e1e;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b8b80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b8b80(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
