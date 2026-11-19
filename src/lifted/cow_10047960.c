/* f_0x10047960 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10047960(Guest* g)
{
    double d32;
    double d33;
    double d34;
    double d35;
    double d36;
    double d37;
    double d38;
    double d39;
    double d40;
    double d41;
    double d42;
    uint32_t eax;
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
    uint32_t t4;
    uint32_t t5;
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
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 44u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100479aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_100479ae;
    case 0x100479b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_100479b8;
    case 0x100479bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_100479ba;
    case 0x10047a81u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10047a81;
    case 0x10047aa6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10047aa6;
    case 0x10047ab0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10047ab0;
    case 0x10047abfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10047abf;
    case 0x10047ac9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10047ac9;
    case 0x10047adeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10047ade;
    case 0x10047af0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10047af0;
    case 0x10047b03u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10047b03;
    case 0x10047b15u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10047b15;
    case 0x10047b2au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10047b2a;
    case 0x10047b3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10047b3c;
    case 0x10047b51u: self = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_10047b51;
    case 0x10047b6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10047b6c;
    case 0x10047b6eu: self = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_10047b6e;
    default: break;
    }
#endif

    COW_AT(10047960)
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    t1 = cow_call_regs(g, COW_IMG(0x10044890u), in_eax, self, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(self, COW_IMG(0x1032b090u));
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 4u);
    wr32(sp0 - 0x24u, 0xa0cu);
    wr8(self + 0x1d4u, 0u);
    wr16(self + 0x176u, 0x1d9u);
    wr32(self + 0x1d5u, 0u);
    g->edx = t3;
    g->esp = sp0 - 0x1cu;
    t4 = cow_cdecl(g, COW_IMG(0x10028fd0u), 2, 0xa0cu, 4u);
    t5 = g->edx;
    g->esp = sp0 - 0x18u;
    t6 = cow_fastcall(g, COW_IMG(0x100748f0u), t4, t5, 0);
    t7 = g->edx;
    wr8(COW_IMG(0x1047d13cu), 1u);
    if (t4 == 0u)
    {
        edx = t7;
    COW_AT(100479b8)
        eax = 0u;
    }
    else
    {
        eax = t6;
        edx = t7;
        edi = t4;
    COW_AT(100479ae)
        wr32(sp0 - 0x1cu, 0u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t8 = cow_thiscall(g, COW_IMG(0x100c52a0u), edi, 1, 0u);
        t9 = g->edx;
        eax = t8;
        edx = t9;
    }
    COW_AT(100479ba)
    wr32(sp0 - 0x1cu, 4u);
    wr32(self + 0x1d5u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t10 = cow_thiscall(g, COW_IMG(0x100749b0u), eax, 1, 4u);
    t11 = g->edx;
    g->edx = t11;
    t12 = cow_call_regs(g, COW_IMG(0x10071e90u), t10, rd32(arg2), g->edx, 1, 0);
    t13 = g->edx;
    wr32(sp0 - 0x1cu, arg2);
    g->edx = t13;
    cow_thiscall(g, COW_IMG(0x10085010u), rd32(self + 0x1d5u), 1, arg2);
    t14 = g->edx;
    wr32(sp0 - 0x1cu, arg2);
    g->eax = rd32(rd32(self + 0x1d5u));
    t15 = rd32(rd32(self + 0x1d5u));
    t16 = cow_thiscall(g, rd32(t15 + 0x290u), rd32(self + 0x1d5u), 1, arg2);
    wr32(sp0 - 0x1cu, sp0 - 0xcu);
    t17 = rd32(self + 0x1d5u) + 0x34u;
    wr32(sp0 - 0x20u, t17);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 4u, 0u);
    g->edx = t17;
    cow_cdecl(g, COW_IMG(0x10026e90u), 2, t17, sp0 - 0xcu);
    t18 = g->edx;
    wr32(sp0 - 0x1cu, sp0 - 0xcu);
    g->eax = sp0 - 0xcu;
    t19 = cow_thiscall(g, COW_IMG(0x100a57c0u), rd32(self + 0x1d5u), 1, sp0 - 0xcu);
    wr32(sp0 - 0x1cu, sp0 - 0xcu);
    t20 = rd32(self + 0x1d5u) + 0x5c4u;
    wr32(sp0 - 0x20u, t20);
    g->edx = t20;
    cow_cdecl(g, COW_IMG(0x10026e90u), 2, t20, sp0 - 0xcu);
    t21 = g->edx;
    wr32(sp0 - 0x24u, sp0 - 0xcu);
    t22 = rd32(self + 0x1d5u) + 0x5fcu;
    wr32(sp0 - 0x28u, t22);
    g->eax = sp0 - 0xcu;
    t23 = rd32(self + 0x1d5u);
    g->esp = sp0 - 0x20u;
    t24 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, t22, sp0 - 0xcu);
    wr32(t23 + 0x608u, 0x3f800000u);
    t25 = rd32(self + 0x1d5u);
    g->edx = rd32(t25);
    t26 = rd32(t25);
    g->esp = sp0 - 0x18u;
    t27 = cow_thiscall(g, rd32(t26 + 0x318u), t25, 0);
    t28 = g->ecx;
    t29 = g->edx;
    if (t27 != 0u)
    {
        edx = t29;
        goto L_10047b6c;
    }
    ecx = t28;
    edx = t29;
    edi = t25;
    COW_AT(10047a81)
    wr32(sp0 - 0x1cu, sp0 - 0xcu);
    wr32(sp0 - 0x20u, edi + 0x61cu);
    g->eax = sp0 - 0xcu;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t30 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, edi + 0x61cu, sp0 - 0xcu);
    t31 = g->edx;
    d32 = (double)rdf32(edi + 0x61cu);
    if ((cow_fsw(g, d32, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d32, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        edx = t31;
        ebx = edi + 0x61cu;
    }
    else
    {
        eax = cow_fsw(g, d32, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        edx = t31;
        ebx = edi + 0x61cu;
    COW_AT(10047aa6)
        d33 = fr(g, (double)rdf32(ebx) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ebx, (float)d33);
    }
    COW_AT(10047ab0)
    if (!((double)rdf32(ebx) < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebx), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebx), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    COW_AT(10047abf)
        d34 = fr(g, (double)rdf32(ebx) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(ebx, (float)d34);
    }
    COW_AT(10047ac9)
    d35 = (double)rdf32(edi + 0x620u);
    if ((cow_fsw(g, d35, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d35, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d35, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    COW_AT(10047ade)
        d36 = fr(g, (double)rdf32(edi + 0x620u) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x620u, (float)d36);
    }
    COW_AT(10047af0)
    d37 = (double)rdf32(edi + 0x620u);
    if (!(d37 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d37, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d37, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    COW_AT(10047b03)
        d38 = fr(g, (double)rdf32(edi + 0x620u) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x620u, (float)d38);
    }
    COW_AT(10047b15)
    d39 = (double)rdf32(edi + 0x624u);
    if ((cow_fsw(g, d39, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d39, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d39, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    COW_AT(10047b2a)
        d40 = fr(g, (double)rdf32(edi + 0x624u) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi + 0x624u, (float)d40);
    }
    COW_AT(10047b3c)
    d41 = (double)rdf32(edi + 0x624u);
    if (!(d41 < (double)rdf32(COW_IMG(0x10329d28u)))) goto L_10047b6e;
    COW_AT(10047b51)
    d42 = fr(g, (double)rdf32(edi + 0x624u) + (double)rdf32(COW_IMG(0x10329d2cu)));
    wrf32(edi + 0x624u, (float)d42);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->edx = edx;
    return self;
L_10047b6c: ;
    COW_AT(10047b6c)
L_10047b6e: ;
    COW_AT(10047b6e)
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->edx = edx;
    return self;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10047960(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100479aeu:
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
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100479b8u:
    {
        uint32_t eax;
        uint32_t ebx;
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
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x100479bau:
    {
        uint32_t eax;
        uint32_t ebx;
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
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10047a81u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        wr32(sp0 - 0x1cu, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10047aa6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        wr32(sp0 - 0x1cu, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10047ab0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        wr32(sp0 - 0x1cu, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10047abfu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        wr32(sp0 - 0x1cu, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10047ac9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        wr32(sp0 - 0x1cu, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10047adeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        wr32(sp0 - 0x1cu, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10047af0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        wr32(sp0 - 0x1cu, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10047b03u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        wr32(sp0 - 0x1cu, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10047b15u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        wr32(sp0 - 0x1cu, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10047b2au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        wr32(sp0 - 0x1cu, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10047b3cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        wr32(sp0 - 0x1cu, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10047b51u:
    {
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        self = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        wr32(sp0 - 0x1cu, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10047b6cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        wr32(sp0 - 0x1cu, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10047b6eu:
    {
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        self = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        wr32(sp0 - 0x1cu, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10047960(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10047960(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
