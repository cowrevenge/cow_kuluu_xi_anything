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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 60u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100b8ba2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_100b8ba2;
    case 0x100b8ba9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_100b8ba9;
    case 0x100b8bb0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_100b8bb0;
    case 0x100b8bb7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_100b8bb7;
    case 0x100b8bbeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_100b8bbe;
    case 0x100b8bc5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_100b8bc5;
    case 0x100b8bc9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_100b8bc9;
    case 0x100b8becu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100b8bec;
    case 0x100b8c0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100b8c0e;
    case 0x100b8c1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100b8c1f;
    case 0x100b8c41u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100b8c41;
    case 0x100b8c48u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100b8c48;
    case 0x100b8c57u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100b8c57;
    case 0x100b8c6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100b8c6c;
    case 0x100b8c77u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100b8c77;
    case 0x100b8c81u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100b8c81;
    case 0x100b8c99u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100b8c99;
    case 0x100b8ca4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100b8ca4;
    case 0x100b8caau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100b8caa;
    case 0x100b8cc1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100b8cc1;
    case 0x100b8cccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100b8ccc;
    case 0x100b8cd6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100b8cd6;
    case 0x100b8cf7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100b8cf7;
    case 0x100b8d0bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100b8d0b;
    case 0x100b8d19u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100b8d19;
    case 0x100b8d29u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_100b8d29;
    case 0x100b8d31u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100b8d31;
    case 0x100b8d3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100b8d3c;
    case 0x100b8d46u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100b8d46;
    case 0x100b8da4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100b8da4;
    case 0x100b8dafu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100b8daf;
    case 0x100b8db9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100b8db9;
    case 0x100b8e1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100b8e1e;
    case 0x100b8e34u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100b8e34;
    case 0x100b8e3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_100b8e3b;
    default: break;
    }
#endif

    COW_AT(100b8b80)
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
    COW_AT(100b8ba2)
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
    COW_AT(100b8ba9)
    ebp = 6u;
L_100b8bc9: ;
    COW_AT(100b8bc9)
    wr32(sp0 - 0x30u, sp0 - 0x1cu);
    wr32(sp0 - 0x34u, sp0 - 0x18u);
    wr32(sp0 - 0x38u, 2u);
    g->eax = sp0 - 0x1cu;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t3 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 2u);
    t4 = g->edx;
    wr32(sp0 - 0x38u, t3);
    g->esp = sp0 - 0x2cu;
    t5 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t4, 3, t3, sp0 - 0x18u, sp0 - 0x1cu);
    if ((uint8_t)t5 != 1u) goto L_100b8e34;
    COW_AT(100b8bec)
    if (rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0x1cu) * 4u) == 0u) goto L_100b8e34;
    eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0x1cu) * 4u);
    edi = COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0x1cu) * 4u;
    COW_AT(100b8c0e)
    if (!(rd32(eax + 0x120u) >> 9u & 1u)) goto L_100b8e34;
    COW_AT(100b8c1f)
    t6 = rd16(self + 0x256u);
    t7 = rd32(self + 0x20u);
    wr8(self + 0x25au, 1u);
    if (rd8(t6 + t7 + 1u) > 8u) goto L_100b8e34;
    eax = rd8(t6 + t7 + 1u);
    edx = t7;
    COW_AT(100b8c41)
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
    COW_AT(100b8bb0)
    ebp = 0x10u;
    goto L_100b8bc9;
L_100b8bb7: ;
    COW_AT(100b8bb7)
    ebp = 0x12u;
    goto L_100b8bc9;
L_100b8bbe: ;
    COW_AT(100b8bbe)
    ebp = 8u;
    goto L_100b8bc9;
L_100b8bc5: ;
    COW_AT(100b8bc5)
    ebp = rd32(sp0 - 0x1cu);
    goto L_100b8bc9;
L_100b8c48: ;
    COW_AT(100b8c48)
    if ((rd8(rd32(edi) + 0x120u) & 4u) != 0u) goto L_100b8e34;
    edi = rd32(edi);
    COW_AT(100b8c57)
    wr32(edi + 0x174u, 0u);
    wr16(self + 0x256u, (uint16_t)((uint16_t)ebp + rd16(self + 0x256u)));
    g->ebx = rd32(sp0 - 0x20u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    g->ebp = rd32(sp0 - 0x24u);
    return;
L_100b8c6c: ;
    COW_AT(100b8c6c)
    if ((rd8(rd32(edi) + 0x120u) & 4u) != 0u)
    {
        eax = rd32(edi);
    }
    else
    {
        eax = rd32(edi);
    COW_AT(100b8c77)
        wr32(eax + 0x174u, 5u);
    }
    COW_AT(100b8c81)
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
    COW_AT(100b8c99)
    if ((rd8(rd32(edi) + 0x120u) & 4u) == 0u)
    {
        eax = rd32(edi);
    COW_AT(100b8ca4)
        wr32(eax + 0x174u, 0u);
    }
    COW_AT(100b8caa)
    t39 = rd32(sp0 - 0x2cu);
    wr8(rd32(edi) + 0x1dbu, 0u);
    wr16(self + 0x256u, (uint16_t)((uint16_t)ebp + rd16(self + 0x256u)));
    g->ebx = rd32(sp0 - 0x20u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = t39;
    g->ebp = rd32(sp0 - 0x24u);
    return;
L_100b8cc1: ;
    COW_AT(100b8cc1)
    if ((rd8(rd32(edi) + 0x120u) & 4u) != 0u)
    {
        eax = rd32(edi);
    }
    else
    {
        eax = rd32(edi);
    COW_AT(100b8ccc)
        wr32(eax + 0x174u, 0x55u);
    }
    COW_AT(100b8cd6)
    wr32(sp0 - 0x30u, 6u);
    g->eax = eax;
    g->esp = sp0 - 0x2cu;
    t37 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
    t38 = rd32(sp0 - 0x2cu);
    wr8(rd32(edi) + 0x1dbu, (uint8_t)(t37 + 1u));
    wr16(self + 0x256u, (uint16_t)((uint16_t)ebp + rd16(self + 0x256u)));
    g->ebx = rd32(sp0 - 0x20u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = t38;
    g->ebp = rd32(sp0 - 0x24u);
    return;
L_100b8cf7: ;
    COW_AT(100b8cf7)
    if (!(rd32(rd32(edi) + 0x120u) >> 0xau & 1u)) goto L_100b8e3b;
    edx = rd32(rd32(edi) + 0x120u) >> 0xau;
    edi = rd32(edi);
    COW_AT(100b8d0b)
    if (rd32(edi + 0xa4u) == 0u) goto L_100b8e3b;
    ecx = rd32(edi + 0xa4u);
    COW_AT(100b8d19)
    g->eax = rd32(ecx);
    t35 = rd32(ecx);
    g->esp = sp0 - 0x2cu;
    t36 = cow_thiscall(g, rd32(t35 + 0x1e4u), ecx, 0);
    if ((uint8_t)t36 != 0u) goto L_100b8e34;
    COW_AT(100b8d29)
    g->ebx = rd32(sp0 - 0x20u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    g->ebp = rd32(sp0 - 0x24u);
    return;
L_100b8d31: ;
    COW_AT(100b8d31)
    if ((rd8(rd32(edi) + 0x120u) & 4u) != 0u)
    {
        eax = rd32(edi);
    }
    else
    {
        eax = rd32(edi);
    COW_AT(100b8d3c)
        wr32(eax + 0x174u, 5u);
    }
    COW_AT(100b8d46)
    wr32(sp0 - 0x30u, 2u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t22 = cow_thiscall(g, COW_IMG(0x10097a20u), rd32(edi), 1, 2u);
    t23 = g->edx;
    wr32(sp0 - 0x30u, 6u);
    g->edx = t23;
    t24 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
    t25 = g->edx;
    wr32(sp0 - 0x30u, 8u);
    wr16(sp0 - 0x14u, (uint16_t)(t24 + 0x20u));
    g->eax = t24 + 0x20u;
    g->edx = t25;
    t26 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 8u);
    t27 = g->edx;
    wr32(sp0 - 0x30u, 0xau);
    wr16(sp0 - 0x10u, (uint16_t)t26);
    g->edx = t27;
    t28 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0xau);
    t29 = g->edx;
    wr32(sp0 - 0x30u, 0xcu);
    wr16(sp0 - 0x12u, (uint16_t)t28);
    g->edx = t29;
    t30 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0xcu);
    t31 = g->edx;
    wr32(sp0 - 0x30u, 0xeu);
    wr16(sp0 - 0xau, (uint16_t)t30);
    g->edx = t31;
    t32 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0xeu);
    t33 = g->edx;
    wr16(sp0 - 0xeu, (uint16_t)t32);
    wr16(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x30u, sp0 - 0x14u);
    eax = t32;
    edx = t33;
L_100b8e1e: ;
    COW_AT(100b8e1e)
    t34 = rd32(edi);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 8u, 0u);
    g->esp = sp0 - 0x2cu;
    cow_call_regs(g, COW_IMG(0x1009ac10u), eax, t34, g->edx, 0, 1, sp0 - 0x14u);
L_100b8e34: ;
    COW_AT(100b8e34)
    wr16(self + 0x256u, (uint16_t)((uint16_t)ebp + rd16(self + 0x256u)));
L_100b8e3b: ;
    COW_AT(100b8e3b)
    g->ebx = rd32(sp0 - 0x20u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    g->ebp = rd32(sp0 - 0x24u);
    return;
L_100b8da4: ;
    COW_AT(100b8da4)
    if ((rd8(rd32(edi) + 0x120u) & 4u) != 0u)
    {
        eax = rd32(edi);
    }
    else
    {
        eax = rd32(edi);
    COW_AT(100b8daf)
        wr32(eax + 0x174u, 5u);
    }
    COW_AT(100b8db9)
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
    wr16(sp0 - 0x14u, (uint16_t)(t11 + 0x20u));
    g->eax = t11 + 0x20u;
    g->edx = t12;
    t13 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 8u);
    t14 = g->edx;
    wr32(sp0 - 0x30u, 0xau);
    wr16(sp0 - 0x10u, (uint16_t)t13);
    g->edx = t14;
    t15 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0xau);
    t16 = g->edx;
    wr32(sp0 - 0x30u, 0xcu);
    wr16(sp0 - 0x12u, (uint16_t)t15);
    g->edx = t16;
    t17 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0xcu);
    t18 = g->edx;
    wr32(sp0 - 0x30u, 0xeu);
    wr16(sp0 - 0xau, (uint16_t)t17);
    g->edx = t18;
    t19 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0xeu);
    t20 = g->edx;
    wr32(sp0 - 0x30u, 0x10u);
    wr16(sp0 - 0xeu, (uint16_t)t19);
    t21 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0x10u);
    wr16(sp0 - 0xcu, (uint16_t)t21);
    wr32(sp0 - 0x30u, sp0 - 0x14u);
    eax = t21;
    edx = sp0 - 0x14u;
    goto L_100b8e1e;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100b8b80(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100b8ba2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x100b8ba9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x100b8bb0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x100b8bb7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x100b8bbeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x100b8bc5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x100b8bc9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x100b8becu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x34u, sp0 - 0x18u);
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x100b8c0eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        g->ebx = 0u;
        wr32(sp0 - 0x34u, sp0 - 0x18u);
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x100b8c1fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        g->ebx = 0u;
        wr32(sp0 - 0x34u, sp0 - 0x18u);
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x100b8c41u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        g->ebx = 0u;
        wr32(sp0 - 0x34u, sp0 - 0x18u);
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x100b8c48u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        g->ebx = 0u;
        wr32(sp0 - 0x34u, sp0 - 0x18u);
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x100b8c57u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        g->ebx = 0u;
        wr32(sp0 - 0x34u, sp0 - 0x18u);
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x100b8c6cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x34u, sp0 - 0x18u);
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x100b8c77u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x34u, sp0 - 0x18u);
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x100b8c81u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x34u, sp0 - 0x18u);
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x100b8c99u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        g->ebx = 0u;
        wr32(sp0 - 0x34u, sp0 - 0x18u);
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x100b8ca4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        g->ebx = 0u;
        wr32(sp0 - 0x34u, sp0 - 0x18u);
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x100b8caau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        g->ebx = 0u;
        wr32(sp0 - 0x34u, sp0 - 0x18u);
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x100b8cc1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x34u, sp0 - 0x18u);
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x100b8cccu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x34u, sp0 - 0x18u);
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x100b8cd6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x34u, sp0 - 0x18u);
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x100b8cf7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        g->ebx = 0u;
        wr32(sp0 - 0x34u, sp0 - 0x18u);
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x100b8d0bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        g->ebx = 0u;
        wr32(sp0 - 0x34u, sp0 - 0x18u);
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x100b8d19u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x34u, sp0 - 0x18u);
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x100b8d29u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x34u, sp0 - 0x18u);
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x100b8d31u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        g->ebx = 0u;
        wr32(sp0 - 0x34u, sp0 - 0x18u);
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x100b8d3cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        g->ebx = 0u;
        wr32(sp0 - 0x34u, sp0 - 0x18u);
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x100b8d46u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        g->ebx = 0u;
        wr32(sp0 - 0x34u, sp0 - 0x18u);
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x100b8da4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        g->ebx = 0u;
        wr32(sp0 - 0x34u, sp0 - 0x18u);
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x100b8dafu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        g->ebx = 0u;
        wr32(sp0 - 0x34u, sp0 - 0x18u);
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x100b8db9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        g->ebx = 0u;
        wr32(sp0 - 0x34u, sp0 - 0x18u);
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x100b8e1eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0u;
        wr32(sp0 - 0x34u, sp0 - 0x18u);
        wr32(sp0 - 0x30u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x100b8e34u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x34u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100b8e3bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x34u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100b8b80(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_100b8b80(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
