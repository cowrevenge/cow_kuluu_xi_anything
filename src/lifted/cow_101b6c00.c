/* f_0x101b6c00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101b6c00(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t loc_8;
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
    uint32_t t4;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 28u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101b6c2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_101b6c2f;
    case 0x101b6c48u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101b6c48;
    case 0x101b6c63u: eax = g->eax; self = g->ecx; edx = g->edx; goto E_101b6c63;
    case 0x101b6c6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_101b6c6f;
    case 0x101b6c7au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_101b6c7a;
    case 0x101b6cc2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; goto E_101b6cc2;
    case 0x101b6ce0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101b6ce0;
    case 0x101b6ce6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_101b6ce6;
    case 0x101b6ceeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_101b6cee;
    case 0x101b6cf6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_101b6cf6;
    case 0x101b6d00u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_101b6d00;
    case 0x101b6d0au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_101b6d0a;
    case 0x101b6d1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_101b6d1b;
    case 0x101b6d34u: eax = g->eax; self = g->ecx; edx = g->edx; goto E_101b6d34;
    case 0x101b6d40u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_101b6d40;
    default: break;
    }
#endif

    COW_AT(101b6c00)
    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x10124050u), COW_IMG(0x104e1c40u), 0);
    t2 = g->edx;
    wr32(self + 0xec30u, 0u);
    wr8(self + 0xf11du, 1u);
    g->edx = t2;
    t3 = cow_call_regs(g, COW_IMG(0x101b6e90u), t1, self, g->edx, 1, 0);
    t4 = g->ecx;
    t5 = g->edx;
    if ((uint8_t)t3 == 0u)
    {
        eax = t3;
        ecx = t4;
        edx = t5;
        goto L_101b6ce6;
    }
    eax = t3;
    edx = t5;
    COW_AT(101b6c2f)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t6 = cow_thiscall(g, COW_IMG(0x101b6ec0u), self, 0);
    t7 = g->edx;
    wr32(sp0 - 0x10u, t6);
    t8 = cow_fastcall(g, COW_IMG(0x101acc30u), self + 0x7e30u, t7, 1, t6);
    t9 = g->edx;
    if ((int32_t)t8 >= 0)
    {
        eax = t8;
        edx = t9;
        goto L_101b6c6f;
    }
    edx = t9;
    COW_AT(101b6c48)
    wr32(sp0 - 0x10u, 0u);
    g->eax = rd32(self);
    g->edx = edx;
    t10 = rd32(self);
    g->esp = sp0 - 0xcu;
    t11 = cow_thiscall(g, rd32(t10 + 0x60u), self, 1, 0u);
    t12 = g->edx;
    g->edx = t12;
    t13 = cow_thiscall(g, COW_IMG(0x101abe50u), self + 0x7e30u, 0);
    t14 = g->edx;
    t15 = cow_thiscall(g, COW_IMG(0x101acf90u), self + 0x7e30u, 0);
    eax = t15;
    edx = rd32(self);
L_101b6c63: ;
    COW_AT(101b6c63)
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t34 = cow_thiscall(g, rd32(edx + 0x70u), self, 0);
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return 0xffffffffu;
L_101b6c6f: ;
    COW_AT(101b6c6f)
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t16 = cow_call_regs(g, COW_IMG(0x101abe40u), eax, self + 0x7e30u, g->edx, 1, 0);
    t17 = g->edx;
    if ((uint8_t)t16 == 0u)
    {
        eax = t16;
        goto L_101b6ce0;
    }
    edx = t17;
    COW_AT(101b6c7a)
    wr32(sp0 - 0x10u, sp0 + 4u);
    g->eax = sp0 + 4u;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t18 = cow_thiscall(g, COW_IMG(0x101abe80u), self + 0x7e30u, 1, sp0 + 4u);
    t19 = g->ecx;
    t20 = g->edx;
    t21 = rd8(t18);
    wr8(self + 0xec2cu, (uint8_t)t21);
    t22 = rd8(t18 + 1u);
    wr8(self + 0xec2du, (uint8_t)t22);
    wr8(self + 0xec2eu, rd8(t18 + 2u));
    t23 = rd8(t18 + 3u);
    wr8(self + 0xec2fu, (uint8_t)t23);
    g->eax = rd32(self);
    g->edx = ((t20 | t22) & 0xffffff00u) | t23;
    t24 = rd32(self);
    t25 = cow_thiscall(g, rd32(t24 + 0x5cu), self, 0);
    t26 = g->edx;
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, COW_IMG(0x103d3c84u));
    g->edx = t26;
    t27 = cow_thiscall(g, COW_IMG(0x101b6ee0u), self, 2, COW_IMG(0x103d3c84u), 0u);
    t28 = g->edx;
    if ((int32_t)t27 < 0)
    {
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        goto L_101b6d40;
    }
    eax = t27;
    edx = t28;
    COW_AT(101b6cc2)
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, COW_IMG(0x10377cbcu));
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10377cbcu), 0u, 0u);
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return 1u;
L_101b6ce0: ;
    COW_AT(101b6ce0)
    edx = rd32(self);
L_101b6d34: ;
    COW_AT(101b6d34)
    wr32(sp0 - 0x10u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, rd32(edx + 0x60u), self, 1, 0u);
    t33 = g->edx;
    cow_thiscall(g, rd32(rd32(self) + 0x70u), self, 0);
    loc_4 = rd32(sp0 - 4u);
    loc_8 = rd32(sp0 - 8u);
    loc_c = rd32(sp0 - 0xcu);
L_101b6d40: ;
    COW_AT(101b6d40)
    g->ebx = loc_4;
    g->esi = loc_8;
    g->edi = loc_c;
    return 1u;
L_101b6ce6: ;
    COW_AT(101b6ce6)
    if (arg1 == 0u)
    {
        loc_4 = in_ebx;
        loc_8 = in_esi;
        loc_c = in_edi;
        goto L_101b6d40;
    }
    COW_AT(101b6cee)
    if ((int32_t)arg2 <= 0)
    {
        loc_4 = in_ebx;
        loc_8 = in_esi;
        loc_c = in_edi;
        goto L_101b6d40;
    }
    COW_AT(101b6cf6)
    if (rd8(self + 0xf0ecu) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0xf0ecu);
        goto L_101b6d1b;
    }
    COW_AT(101b6d00)
    if (rd32(self + 0xf10cu) == 0u)
    {
        eax = rd32(self + 0xf10cu);
        goto L_101b6d1b;
    }
    eax = rd32(self + 0xf10cu);
    COW_AT(101b6d0a)
    wr32(sp0 - 0x10u, arg2);
    t29 = (ecx & 0xffff0000u) | rd8(arg1);
    wr32(sp0 - 0x14u, t29);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t30 = cow_call_regs(g, COW_IMG(0x101b6d50u), eax, self, g->edx, 0, 2, t29, arg2);
    t31 = g->edx;
    if ((uint8_t)t30 == 0u)
    {
        loc_4 = in_ebx;
        loc_8 = in_esi;
        loc_c = in_edi;
        goto L_101b6d40;
    }
    eax = t30;
    edx = t31;
L_101b6d1b: ;
    COW_AT(101b6d1b)
    wr32(sp0 - 0x10u, arg2);
    wr32(sp0 - 0x14u, arg1);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t32 = cow_thiscall(g, COW_IMG(0x101abc50u), self + 0x7e30u, 2, arg1, arg2);
    if ((uint8_t)t32 == 0u)
    {
        eax = t32;
        edx = rd32(self);
        goto L_101b6c63;
    }
    eax = t32;
    edx = rd32(self);
    goto L_101b6d34;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101b6c00(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101b6c2fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 4u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101b6c48u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        g->edi = self + 0x7e30u;
        (void)sp0;
        return 1;
    }
    case 0x101b6c63u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101b6c6fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        g->edi = self + 0x7e30u;
        (void)sp0;
        return 1;
    }
    case 0x101b6c7au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        g->edi = self + 0x7e30u;
        (void)sp0;
        return 1;
    }
    case 0x101b6cc2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101b6ce0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101b6ce6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101b6ceeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b6cf6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101b6d00u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101b6d0au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101b6d1bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101b6d34u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x101b6d40u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101b6c00(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101b6c00(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
