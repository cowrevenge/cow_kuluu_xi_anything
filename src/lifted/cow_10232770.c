/* f_0x10232770 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10232770(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
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
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 72u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10232787u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); self = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_10232787;
    case 0x10232795u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); self = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_10232795;
    case 0x102327a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_102327a6;
    case 0x102327c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_102327c1;
    case 0x102327d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_102327d8;
    case 0x102327efu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_102327ef;
    case 0x10232805u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); self = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_10232805;
    case 0x1023280au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); self = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_1023280a;
    case 0x10232825u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10232825;
    case 0x1023283cu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1023283c;
    case 0x10232864u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10232864;
    case 0x10232872u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10232872;
    case 0x10232874u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); self = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_10232874;
    case 0x1023287du: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); self = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_1023287d;
    case 0x102328afu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_102328af;
    case 0x102328c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_102328c3;
    case 0x102328d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_102328d5;
    case 0x102328d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_102328d9;
    case 0x1023295eu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); goto E_1023295e;
    default: break;
    }
#endif

    COW_AT(10232770)
    wr32(sp0 - 0x20u, in_ebx);
    wr32(sp0 - 0x24u, in_esi);
    wr32(sp0 - 0x28u, in_edi);
    wr32(sp0 - 0x14u, self);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x28u;
    t1 = cow_call_regs(g, COW_IMG(0x10232760u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        loc_20 = in_ebx;
        loc_24 = in_esi;
        loc_28 = in_edi;
    }
    else
    {
        ecx = t2;
        edx = t3;
    COW_AT(10232787)
        t4 = rd32(ecx + 0x68u);
        wr8(sp0 - 0x1cu, 0u);
        if (t4 != 2u)
        {
            eax = t4;
            goto L_10232805;
        }
        eax = t4;
    COW_AT(10232795)
        wr32(sp0 - 0x2cu, arg1);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        t5 = cow_call_regs(g, COW_IMG(0x10230930u), eax, g->ecx, g->edx, 1, 1, arg1);
        t6 = g->ecx;
        t7 = g->edx;
        if ((uint8_t)t5 == 0u)
        {
            eax = t5;
            ecx = t6;
            edx = t7;
            goto L_102327c1;
        }
        eax = t5;
        ecx = t6;
        edx = t7;
    COW_AT(102327a6)
        wr32(sp0 - 0x2cu, 0x75u);
        wr32(sp0 - 0x30u, 0xcu);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        t8 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x75u);
        t9 = g->edx;
        wr8(sp0 - 0x1cu, 1u);
        eax = t8;
        edx = t9;
        edi = COW_IMG(0x10232ae0u);
L_102328d9: ;
    COW_AT(102328d9)
        wr32(sp0 - 0x2cu, 0u);
        wr32(sp0 - 0x30u, 1u);
        wr32(sp0 - 0x34u, 0u);
        t43 = rd32(sp0 - 0x1cu);
        wr32(sp0 - 0x38u, t43);
        wr32(sp0 - 0x3cu, eax);
        wr32(sp0 - 0x40u, arg1 - 0xe000u);
        wr32(sp0 - 0x44u, edi);
        g->ebx = 0u;
        g->esp = sp0 - 0x28u;
        cow_thiscall(g, COW_IMG(0x10210e30u), rd32(COW_IMG(0x10664520u)), 7, edi, arg1 - 0xe000u, eax, t43, 0u, 1u, 0u);
        wr32(sp0 - 0x2cu, sp0 - 8u);
        t44 = rd32(sp0 - 0x14u);
        wr16(sp0 - 8u, 0u);
        t45 = rd32(t44 + 8u);
        wr16(sp0 - 6u, 0u);
        wr16(sp0 - 4u, 0u);
        wr16(sp0 - 2u, 0u);
        wr16(sp0 - 0x10u, 0u);
        wr16(sp0 - 0xeu, 0u);
        wr16(sp0 - 0xcu, 0u);
        wr16(sp0 - 0xau, 0u);
        t46 = cow_call_regs(g, COW_IMG(0x10118f70u), t44, t45, g->edx, 0, 1, sp0 - 8u);
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        g->edx = rd32(COW_IMG(0x10664520u));
        t47 = rd32(COW_IMG(0x10664520u));
        cow_call_regs(g, COW_IMG(0x10118f70u), t46, rd32(t47 + 8u), g->edx, 0, 1, sp0 - 0x10u);
        t48 = g->edx;
        t49 = (uint32_t)(int16_t)rd16(sp0 - 2u) + 2u;
        wr32(sp0 - 0x2cu, t49);
        t50 = (uint32_t)(int16_t)rd16(sp0 - 0x10u);
        wr32(sp0 - 0x30u, t50);
        cow_call_regs(g, COW_IMG(0x10119110u), rd32(COW_IMG(0x10664520u)), rd32(rd32(COW_IMG(0x10664520u)) + 8u), g->edx, 0, 2, t50, t49);
        loc_20 = rd32(sp0 - 0x20u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_28 = rd32(sp0 - 0x28u);
    }
L_1023295e: ;
    COW_AT(1023295e)
    g->ebx = loc_20;
    g->esi = loc_24;
    g->edi = loc_28;
    return;
L_102327c1: ;
    COW_AT(102327c1)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t10 = cow_stdcall(g, COW_IMG(0x100990c0u), 0);
    t11 = g->ecx;
    t12 = g->edx;
    if (arg1 == (uint16_t)t10 + 0xe000u)
    {
        loc_20 = rd32(sp0 - 0x20u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_28 = rd32(sp0 - 0x28u);
        goto L_1023295e;
    }
    eax = (uint16_t)t10 + 0xe000u;
    ecx = t11;
    edx = t12;
    COW_AT(102327d8)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t13 = cow_stdcall(g, COW_IMG(0x100990d0u), 0);
    t14 = g->ecx;
    t15 = g->edx;
    if (arg1 == (uint16_t)t13 + 0xe000u)
    {
        loc_20 = rd32(sp0 - 0x20u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_28 = rd32(sp0 - 0x28u);
        goto L_1023295e;
    }
    eax = (uint16_t)t13 + 0xe000u;
    ecx = t14;
    edx = t15;
    COW_AT(102327ef)
    wr32(sp0 - 0x2cu, 0x73u);
    wr32(sp0 - 0x30u, 0xcu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t16 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x73u);
    t17 = g->edx;
    eax = t16;
    edx = t17;
    edi = COW_IMG(0x10232970u);
    goto L_102328d9;
L_10232805: ;
    COW_AT(10232805)
    if (eax != 3u) goto L_10232874;
    COW_AT(1023280a)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t18 = cow_stdcall(g, COW_IMG(0x100990c0u), 0);
    t19 = g->ecx;
    t20 = g->edx;
    if (arg1 == (uint16_t)t18 + 0xe000u)
    {
        loc_20 = in_ebx;
        loc_24 = in_esi;
        loc_28 = in_edi;
        goto L_1023295e;
    }
    eax = (uint16_t)t18 + 0xe000u;
    ecx = t19;
    edx = t20;
    COW_AT(10232825)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t21 = cow_stdcall(g, COW_IMG(0x100990d0u), 0);
    t22 = g->ecx;
    t23 = g->edx;
    if (arg1 == (uint16_t)t21 + 0xe000u)
    {
        loc_20 = rd32(sp0 - 0x20u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_28 = rd32(sp0 - 0x28u);
        goto L_1023295e;
    }
    eax = (uint16_t)t21 + 0xe000u;
    ecx = t22;
    edx = t23;
    COW_AT(1023283c)
    wr32(sp0 - 0x2cu, 0x6fu);
    wr32(sp0 - 0x30u, 0xcu);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t24 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x6fu);
    t25 = g->ecx;
    t26 = g->edx;
    wr32(sp0 - 0x34u, arg1);
    wr32(sp0 - 0x18u, t24);
    wr8(sp0 - 0x1cu, 1u);
    g->ecx = t25;
    g->edx = t26;
    g->esp = sp0 - 0x30u;
    t27 = cow_cdecl(g, COW_IMG(0x102308a0u), 1, arg1);
    t28 = g->ecx;
    t29 = g->edx;
    if ((uint8_t)t27 != 0u)
    {
        loc_20 = rd32(sp0 - 0x20u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_28 = rd32(sp0 - 0x28u);
        goto L_1023295e;
    }
    eax = t27;
    ecx = t28;
    edx = t29;
    COW_AT(10232864)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t30 = cow_stdcall(g, COW_IMG(0x10230ad0u), 0);
    t31 = g->edx;
    if ((int32_t)t30 >= 30)
    {
        loc_20 = rd32(sp0 - 0x20u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_28 = rd32(sp0 - 0x28u);
        goto L_1023295e;
    }
    eax = t30;
    edx = t31;
    COW_AT(10232872)
    edi = COW_IMG(0x10232ab0u);
L_102328af: ;
    COW_AT(102328af)
    wr32(sp0 - 0x2cu, arg1);
    g->eax = eax;
    g->edx = edx;
    t37 = rd32(COW_IMG(0x10621808u));
    g->esp = sp0 - 0x28u;
    t38 = cow_thiscall(g, COW_IMG(0x1015b9e0u), t37, 1, arg1);
    t39 = g->ecx;
    t40 = g->edx;
    if (t38 == 0u)
    {
        loc_20 = rd32(sp0 - 0x20u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_28 = rd32(sp0 - 0x28u);
        goto L_1023295e;
    }
    eax = t38;
    ecx = t39;
    edx = t40;
    COW_AT(102328c3)
    wr32(sp0 - 0x2cu, eax);
    wr32(sp0 - 0x30u, arg1);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t41 = cow_cdecl(g, COW_IMG(0x102309d0u), 4, arg1, eax, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
    t42 = g->edx;
    if ((uint8_t)t41 != 0u)
    {
        loc_20 = rd32(sp0 - 0x20u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_28 = rd32(sp0 - 0x28u);
        goto L_1023295e;
    }
    edx = t42;
    COW_AT(102328d5)
    eax = rd32(sp0 - 0x18u);
    goto L_102328d9;
L_10232874: ;
    COW_AT(10232874)
    if (eax != 4u)
    {
        loc_20 = in_ebx;
        loc_24 = in_esi;
        loc_28 = in_edi;
        goto L_1023295e;
    }
    COW_AT(1023287d)
    wr32(sp0 - 0x2cu, 0x73u);
    wr32(sp0 - 0x30u, 0xcu);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t32 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x73u);
    t33 = g->ecx;
    t34 = g->edx;
    wr32(sp0 - 0x18u, t32);
    wr8(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x34u, arg1 + 0x2000u);
    g->eax = arg1 + 0x2000u;
    g->edx = t34;
    g->esp = sp0 - 0x30u;
    t35 = cow_cdecl(g, COW_IMG(0x10230ba0u), 1, arg1 + 0x2000u);
    t36 = g->edx;
    if ((uint8_t)t35 == 0u)
    {
        loc_20 = in_ebx;
        loc_24 = in_esi;
        loc_28 = in_edi;
        goto L_1023295e;
    }
    eax = t35;
    edx = t36;
    edi = COW_IMG(0x10232970u);
    goto L_102328af;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10232770(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10232787u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        self = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10232795u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        self = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102327a6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102327c1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102327d8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102327efu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10232805u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        self = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023280au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        self = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10232825u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1023283cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10232864u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        g->esi = arg1;
        g->edi = COW_IMG(0x10232ab0u);
        (void)sp0;
        return 1;
    }
    case 0x10232872u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        g->esi = arg1;
        g->edi = COW_IMG(0x10232ab0u);
        (void)sp0;
        return 1;
    }
    case 0x10232874u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        self = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023287du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        self = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102328afu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102328c3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102328d5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102328d9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1023295eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10232770(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10232770(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
