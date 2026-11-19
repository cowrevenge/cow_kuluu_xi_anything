/* f_0x1025cb10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1025cb10(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 64u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1025cb29u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x18u); goto E_1025cb29;
    case 0x1025cb61u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; goto E_1025cb61;
    case 0x1025cb6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; goto E_1025cb6b;
    case 0x1025cb78u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; goto E_1025cb78;
    case 0x1025cb96u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1025cb96;
    case 0x1025cba6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1025cba6;
    case 0x1025cbb0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1025cbb0;
    case 0x1025cbb6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1025cbb6;
    case 0x1025cbc3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1025cbc3;
    case 0x1025cbefu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1025cbef;
    case 0x1025cbfcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1025cbfc;
    case 0x1025cc1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1025cc1b;
    case 0x1025cc1du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1025cc1d;
    case 0x1025cc5cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1025cc5c;
    case 0x1025cc8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1025cc8c;
    case 0x1025cc90u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1025cc90;
    case 0x1025ccb8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1025ccb8;
    case 0x1025ccc7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; goto E_1025ccc7;
    default: break;
    }
#endif

    COW_AT(1025cb10)
    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_esi);
    wr32(self + 0xcu, 0x3f800000u);
    wr32(self, COW_IMG(0x1033cf58u));
    g->esp = sp0 - 0x18u;
    cow_fastcall(g, COW_IMG(0x1025cab0u), self, in_edx, 0);
    t1 = g->edx;
    edx = t1;
    COW_AT(1025cb29)
    wr8(sp0 - 0xcu, 1u);
    wr32(sp0 - 0x10u, rd32(arg3));
    t2 = rd32(arg3);
    t3 = rd8(arg3 + 6u);
    t4 = rd8(arg3 + 4u);
    wr8(sp0 - 0xbu, (uint8_t)t4);
    t5 = rd8(arg3 + 5u);
    wr8(sp0 - 9u, (uint8_t)t3);
    wr8(sp0 - 0xau, (uint8_t)t5);
    wr32(sp0 - 0x1cu, sp0 - 0x10u);
    wr32(sp0 - 0x20u, arg2);
    wr32(sp0 - 0x24u, arg1);
    g->eax = sp0 - 0x10u;
    g->ecx = arg2;
    g->edx = arg1;
    g->esp = sp0 - 0x18u;
    t6 = cow_cdecl(g, COW_IMG(0x1025cb00u), 3, arg1, arg2, sp0 - 0x10u);
    t7 = g->ecx;
    t8 = g->edx;
    eax = t6;
    ecx = t7;
    edx = t8;
    COW_AT(1025cb61)
    wr32(sp0 - 0x28u, 0x50u);
    wr32(self + 4u, eax);
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t9 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x50u, arg1, arg2);
    t10 = g->ecx;
    t11 = g->edx;
    eax = t9;
    ecx = t10;
    edx = t11;
    COW_AT(1025cb6b)
    if (eax == 0u) goto L_1025ccc7;
    esi = eax;
    COW_AT(1025cb78)
    wr32(sp0 - 0x1cu, in_ebp);
    wr32(sp0 - 0x20u, in_edi);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 1u);
    wr32(sp0 - 0x2cu, 0x1au);
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x34u, 1u);
    wr32(sp0 - 0x38u, 0x400u);
    wr32(sp0 - 0x3cu, 0x400u);
    g->eax = eax;
    g->edx = edx;
    t12 = rd32(self + 4u);
    g->esp = sp0 - 0x24u;
    t13 = cow_thiscall_cdecl(g, COW_IMG(0x1025d780u), ecx, 6, 0x400u, 0x400u, 1u, 0u, 0x1au, 1u);
    t14 = g->edx;
    eax = t13;
    edx = t14;
    edi = t12;
    COW_AT(1025cb96)
    wr32(sp0 - 0x28u, eax);
    wr32(sp0 - 0x2cu, 0x6000u);
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, COW_IMG(0x1025c1d0u), esi, 3, 0x6000u, eax, 0u);
    t15 = g->edx;
    edx = t15;
    COW_AT(1025cba6)
    wr32(esi + 0x2cu, edi);
    g->eax = rd32(edi);
    g->edx = edx;
    t16 = rd32(edi);
    g->esp = sp0 - 0x20u;
    t17 = cow_thiscall(g, rd32(t16 + 0x14u), edi, 0);
    t18 = g->ecx;
    t19 = g->edx;
    eax = t17;
    ecx = t18;
    edx = t19;
    COW_AT(1025cbb0)
    wr32(sp0 - 0x24u, eax);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t20 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, eax, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    eax = t20;
    COW_AT(1025cbb6)
    wr32(esi + 0x30u, eax);
    g->eax = eax;
    g->esp = sp0 - 0x20u;
    t21 = cow_thiscall(g, rd32(rd32(edi) + 4u), edi, 0);
    eax = t21;
    COW_AT(1025cbc3)
    wr32(esi + 0x3cu, 0x400u);
    t22 = cow_divs(g, 0x400u, eax * 2u);
    t23 = cow_mods(g, 0x400u, eax * 2u);
    wr32(esi + 0x34u, eax * 2u);
    wr8(esi + 0x40u, 0u);
    wr32(esi + 0x38u, t22);
    t24 = t22 * t22 * 0x24u;
    wr32(sp0 - 0x24u, t24);
    g->eax = t24;
    g->esp = sp0 - 0x18u;
    t25 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, eax * 2u, t23, 1, 3, t24, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t26 = g->ecx;
    t27 = g->edx;
    eax = t25;
    ecx = t26;
    edx = t27;
    COW_AT(1025cbef)
    wr32(sp0 - 0x28u, 0x200000u);
    wr32(esi + 0x44u, eax);
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t28 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x200000u, rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
    eax = t28;
    COW_AT(1025cbfc)
    t29 = rd32(esi + 0x38u);
    wr32(esi + 0x48u, eax);
    wr32(esi + 0x4cu, 0u);
    wr32(esi, COW_IMG(0x1033cf38u));
    if ((int32_t)(t29 * t29) > 0)
    {
        ebp = t29 * t29;
    COW_AT(1025cc1b)
        ecx = 0u;
        edi = 0u;
L_1025cc1d: ;
    COW_AT(1025cc1d)
        wr16(ecx + rd32(esi + 0x44u) + 8u, 0u);
        t30 = cow_divs(g, edi, rd32(esi + 0x38u));
        t31 = cow_mods(g, edi, rd32(esi + 0x38u));
        wr32(ecx + rd32(esi + 0x44u), t31);
        t32 = cow_divs(g, edi, rd32(esi + 0x38u));
        t33 = cow_mods(g, edi, rd32(esi + 0x38u));
        wr32(ecx + rd32(esi + 0x44u) + 4u, t32);
        t34 = rd32(esi + 0x44u);
        wr32(ecx + t34 + 0x1cu, 0xffffffffu);
        wr8(ecx + rd32(esi + 0x44u) + 0x20u, 0u);
        if ((int32_t)(edi + 1u) < (int32_t)ebp)
        {
            ecx = ecx + 0x24u;
            edi = edi + 1u;
            goto L_1025cc1d;
        }
        eax = t34;
    }
    COW_AT(1025cc5c)
    t35 = rd32(esi + 0x3cu) * rd32(esi + 0x3cu) * 2u;
    wr32(sp0 - 0x24u, 0u);
    t36 = rd32(esi + 0x48u);
    edi = t36;
    eax = 0xffffffffu;
    ecx = t35 >> 2u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x28u, 0u);
    ecx = t35 & 3u;
    while (ecx) { wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    wr32(sp0 - 0x2cu, sp0 - 8u);
    wr32(sp0 - 0x30u, 0u);
    t37 = rd32(esi + 8u);
    wr32(sp0 - 0x34u, t37);
    g->eax = t37;
    g->esp = sp0 - 0x20u;
    t38 = cow_thiscall(g, rd32(rd32(t37) + 0x40u), rd32(t37), 5, t37, 0u, sp0 - 8u, 0u, 0u);
    eax = t38;
    COW_AT(1025cc8c)
    if ((int32_t)eax >= 0)
    {
    COW_AT(1025cc90)
        t39 = rd32(esi + 0x3cu) * rd32(esi + 0x3cu) * 2u;
        wr32(sp0 - 0x24u, 0u);
        t40 = rd32(sp0 - 4u);
        edi = t40;
        eax = 0xffffffffu;
        ecx = t39 >> 2u;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = t39 & 3u;
        while (ecx) { wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        t41 = rd32(esi + 8u);
        wr32(sp0 - 0x28u, t41);
        g->esp = sp0 - 0x20u;
        cow_thiscall(g, rd32(rd32(t41) + 0x44u), rd32(t41), 2, t41, 0u);
    }
    COW_AT(1025ccb8)
    t42 = rd32(sp0 - 0x20u);
    wr32(self + 8u, esi);
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = t42;
    g->ebp = rd32(sp0 - 0x1cu);
    return self;
L_1025ccc7: ;
    COW_AT(1025ccc7)
    t43 = rd32(sp0 - 0x18u);
    wr32(self + 8u, 0u);
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = t43;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return self;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1025cb10(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1025cb29u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1025cb61u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x24u, arg1);
        wr32(sp0 - 0x20u, arg2);
        wr32(sp0 - 0x1cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1025cb6bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x1cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1025cb78u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x1cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1025cb96u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x24u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1025cba6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1025cbb0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1025cbb6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1025cbc3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1025cbefu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1025cbfcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1025cc1bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x20u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1025cc1du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1025cc5cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1025cc8cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x2cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1025cc90u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x2cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1025ccb8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x2cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1025ccc7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x1cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1025cb10(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1025cb10(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
