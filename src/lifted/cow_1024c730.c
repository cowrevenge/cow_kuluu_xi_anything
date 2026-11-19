/* f_0x1024c730 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1024c730(Guest* g)
{
    double d12;
    double d16;
    double d29;
    double d33;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
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
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
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
    cow_frame(g, sp0, 40u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1024c74au: eax = g->eax; self = g->ecx; in_edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_1024c74a;
    case 0x1024c75cu: eax = g->eax; self = g->ecx; in_edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1024c75c;
    case 0x1024c763u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1024c763;
    case 0x1024c76cu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1024c76c;
    case 0x1024c787u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1024c787;
    case 0x1024c794u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1024c794;
    case 0x1024c796u: eax = g->eax; self = g->ecx; in_edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1024c796;
    case 0x1024c79fu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1024c79f;
    case 0x1024c7b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1024c7b6;
    case 0x1024c7bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1024c7bf;
    case 0x1024c7deu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1024c7de;
    case 0x1024c7f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1024c7f6;
    case 0x1024c817u: eax = g->eax; self = g->ecx; in_edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1024c817;
    case 0x1024c847u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1024c847;
    case 0x1024c866u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1024c866;
    case 0x1024c86du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1024c86d;
    case 0x1024c88au: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1024c88a;
    case 0x1024c893u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1024c893;
    case 0x1024c8abu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1024c8ab;
    case 0x1024c8bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1024c8bf;
    case 0x1024c8ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_1024c8ce;
    default: break;
    }
#endif

    COW_AT(1024c730)
    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    if (rd32(COW_IMG(0x10669130u)) != 1u)
    {
        eax = rd32(COW_IMG(0x10669130u));
        edx = in_edx;
        loc_c = in_ebx;
        loc_10 = in_esi;
        loc_14 = in_edi;
        goto L_1024c8ce;
    }
    COW_AT(1024c74a)
    if ((uint32_t)(int16_t)rd16(sp0 + 4u) - 1u > 5u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
        edx = in_edx;
        loc_c = in_ebx;
        loc_10 = in_esi;
        loc_14 = in_edi;
        goto L_1024c8ce;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
    edi = (in_edi & 0xffff0000u) | rd16(sp0 + 4u);
    COW_AT(1024c75c)
    t1 = rd32(COW_IMG(0x1024c8d8u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x1024c763u: goto L_1024c763;
    case 0x1024c787u: goto L_1024c787;
    case 0x1024c796u: goto L_1024c796;
    case 0x1024c88au: goto L_1024c88a;
    default: rt_fatal(g, COW_IMG(0x1024c75cu), "switch");
    }
    return 0;
L_1024c763: ;
    COW_AT(1024c763)
    if (rd32(COW_IMG(0x10669134u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10669134u));
        goto L_1024c79f;
    }
    eax = rd32(COW_IMG(0x10669134u));
    COW_AT(1024c76c)
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, COW_IMG(0x103715f8u));
    g->ebx = 1u;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t21 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x103715f8u), 1u, 0u);
    t22 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t22;
    return t21;
L_1024c787: ;
    COW_AT(1024c787)
    if (rd32(COW_IMG(0x10669134u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10669134u));
        edx = in_edx;
        loc_c = in_ebx;
        loc_10 = in_esi;
        loc_14 = in_edi;
        goto L_1024c8ce;
    }
    eax = rd32(COW_IMG(0x10669134u));
    COW_AT(1024c794)
L_1024c79f: ;
    COW_AT(1024c79f)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t23 = cow_thiscall(g, COW_IMG(0x10251990u), rd32(COW_IMG(0x106693fcu)), 0);
    t24 = g->edx;
    wr32(sp0 + 4u, t23);
    if ((int32_t)t23 < 1)
    {
        eax = t23;
        edx = t24;
        loc_c = in_ebx;
        loc_10 = in_esi;
        loc_14 = in_edi;
        goto L_1024c8ce;
    }
    eax = t23;
    edx = t24;
    COW_AT(1024c7b6)
    if ((int32_t)eax >= 24)
    {
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        goto L_1024c8ce;
    }
    COW_AT(1024c7bf)
    wr32(sp0 - 0x18u, sp0 - 8u);
    wr32(sp0 - 0x1cu, sp0 + 4u);
    wr32(self + 0x18u, eax);
    wr32(sp0 - 0x20u, eax);
    wr32(sp0 - 0x24u, 0u);
    g->esi = self;
    g->edx = sp0 + 4u;
    t25 = rd32(COW_IMG(0x106693fcu));
    g->esp = sp0 - 0x14u;
    t26 = cow_call_regs(g, COW_IMG(0x102519c0u), eax, t25, g->edx, 0, 4, 0u, eax, sp0 + 4u, sp0 - 8u);
    t27 = g->ecx;
    t28 = g->edx;
    if (t26 != 0u)
    {
        eax = t26;
        edx = t28;
    }
    else
    {
        eax = t26;
        ecx = t27;
        edx = t28;
    COW_AT(1024c7de)
        g->ecx = ecx;
        g->edx = edx;
        d29 = (double)rdf32(sp0 - 8u);
        fpush(g, d29);
        g->esp = sp0 - 0x14u;
        t30 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        t31 = g->ecx;
        t32 = g->edx;
        d33 = (double)rdf32(sp0 - 4u);
        wr32(self + 0x2cu, t30);
        g->edx = t32;
        fpush(g, d33);
        t34 = cow_call_regs(g, COW_IMG(0x10311c6cu), t30, g->ecx, g->edx, 1, 0);
        t35 = g->edx;
        wr32(self + 0x30u, t34);
        eax = t34;
        edx = t35;
    }
    COW_AT(1024c7f6)
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, COW_IMG(0x1035bad8u));
    wr32(COW_IMG(0x10669134u), 1u);
    g->ebx = 1u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t36 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1035bad8u), 1u, 0u);
    t37 = g->edx;
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->edx = t37;
    return t36;
L_1024c796: ;
    COW_AT(1024c796)
    if (rd32(COW_IMG(0x10669134u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10669134u));
        goto L_1024c817;
    }
    eax = rd32(COW_IMG(0x10669134u));
    goto L_1024c79f;
L_1024c817: ;
    COW_AT(1024c817)
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x10037d70u), self, 0);
    wr32(sp0 - 0x18u, sp0 - 8u);
    wr32(sp0 - 0x1cu, sp0 + 4u);
    t7 = rd32(self + 0x18u);
    wr32(sp0 - 0x20u, t7);
    t8 = ((uint16_t)edi != 4u) * 2u - 1u;
    wr32(sp0 - 0x24u, t8);
    g->esi = self;
    g->edx = t7;
    t9 = cow_call_regs(g, COW_IMG(0x102519c0u), t8, rd32(COW_IMG(0x106693fcu)), g->edx, 0, 4, t8, t7, sp0 + 4u, sp0 - 8u);
    t10 = g->edx;
    if (t9 != 0u)
    {
        edx = t10;
    }
    else
    {
        eax = t9;
        edx = t10;
    COW_AT(1024c847)
        t11 = rd32(sp0 + 4u);
        d12 = (double)rdf32(sp0 - 8u);
        wr32(self + 0x18u, t11);
        g->ecx = t11;
        g->edx = edx;
        fpush(g, d12);
        g->esp = sp0 - 0x14u;
        t13 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        t14 = g->ecx;
        t15 = g->edx;
        d16 = (double)rdf32(sp0 - 4u);
        wr32(self + 0x2cu, t13);
        g->edx = t15;
        fpush(g, d16);
        t17 = cow_call_regs(g, COW_IMG(0x10311c6cu), t13, g->ecx, g->edx, 1, 0);
        t18 = g->edx;
        wr32(self + 0x30u, t17);
        edx = t18;
    }
    COW_AT(1024c866)
    if (rd32(self + 0x20u) == 0u)
    {
        eax = rd32(self + 0x20u);
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        goto L_1024c8ce;
    }
    eax = rd32(self + 0x20u);
    COW_AT(1024c86d)
    wr32(sp0 - 0x18u, 0u);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t19 = cow_fastcall(g, COW_IMG(0x102518b0u), rd32(COW_IMG(0x106693fcu)), edx, 1, 0u);
    t20 = g->edx;
    wr32(self + 0x20u, 0u);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->edx = t20;
    return t19;
L_1024c88a: ;
    COW_AT(1024c88a)
    if (rd32(COW_IMG(0x10669134u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10669134u));
        edx = in_edx;
        loc_c = in_ebx;
        loc_10 = in_esi;
        loc_14 = in_edi;
    }
    else
    {
    COW_AT(1024c893)
        wr32(COW_IMG(0x10669134u), 0u);
        t2 = rd32(self + 0x20u);
        wr32(self + 0x18u, 0u);
        if (t2 == 0u)
        {
            eax = t2;
            edx = in_edx;
        }
        else
        {
            eax = t2;
    COW_AT(1024c8ab)
            wr32(sp0 - 0x18u, 0u);
            g->eax = eax;
            g->esp = sp0 - 0x14u;
            t3 = cow_fastcall(g, COW_IMG(0x102518b0u), rd32(COW_IMG(0x106693fcu)), in_edx, 1, 0u);
            t4 = g->edx;
            wr32(self + 0x20u, 0u);
            eax = t3;
            edx = t4;
        }
    COW_AT(1024c8bf)
        wr32(sp0 - 0x18u, COW_IMG(0x1035bad8u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t5 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1035bad8u));
        t6 = g->edx;
        eax = t5;
        edx = t6;
        loc_c = in_ebx;
        loc_10 = in_esi;
        loc_14 = in_edi;
    }
L_1024c8ce: ;
    COW_AT(1024c8ce)
    g->ebx = loc_c;
    g->esi = loc_10;
    g->edi = loc_14;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1024c730(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1024c74au:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        g->esi = self;
        wr32(sp0 - 0x14u, in_edi);
        (void)sp0;
        return 1;
    }
    case 0x1024c75cu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x1024c763u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1024c76cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1024c787u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1024c794u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1024c796u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x1024c79fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1024c7b6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1024c7bfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1024c7deu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        wr32(sp0 - 0x1cu, sp0 + 4u);
        wr32(sp0 - 0x18u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1024c7f6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        wr32(sp0 - 0x1cu, sp0 + 4u);
        wr32(sp0 - 0x18u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1024c817u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x1024c847u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x1cu, sp0 + 4u);
        wr32(sp0 - 0x18u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1024c866u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x1cu, sp0 + 4u);
        wr32(sp0 - 0x18u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1024c86du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x1cu, sp0 + 4u);
        wr32(sp0 - 0x18u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1024c88au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1024c893u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1024c8abu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1024c8bfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1024c8ceu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1024c730(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1024c730(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
