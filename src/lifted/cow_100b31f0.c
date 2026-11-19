/* f_0x100b31f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b31f0(Guest* g)
{
    double d11;
    double d12;
    double d15;
    double d16;
    double d17;
    double d2;
    double d20;
    double d21;
    double d24;
    double d25;
    double d26;
    double d27;
    double d28;
    double d3;
    double d36;
    double d39;
    double d4;
    double d41;
    double d7;
    double d8;
    uint32_t eax;
    uint32_t ecx;
    double loc_10_f;
    double loc_14_f;
    double loc_18_f;
    double loc_c_f;
    uint32_t t1;
    uint32_t t10;
    uint32_t t13;
    uint32_t t14;
    uint32_t t18;
    uint32_t t19;
    uint32_t t22;
    uint32_t t23;
    uint32_t t29;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t37;
    uint32_t t38;
    uint32_t t40;
    uint32_t t5;
    uint32_t t6;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100b3213u: eax = g->eax; ecx = g->ecx; self = g->esi; in_esi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x1cu); goto E_100b3213;
    case 0x100b321au: eax = g->eax; ecx = g->ecx; self = g->esi; in_esi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x1cu); goto E_100b321a;
    case 0x100b3298u: eax = g->eax; ecx = g->ecx; self = g->esi; in_esi = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x1cu); goto E_100b3298;
    case 0x100b32c8u: eax = g->eax; ecx = g->ecx; self = g->esi; in_esi = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x1cu); goto E_100b32c8;
    case 0x100b33a1u: eax = g->eax; ecx = g->ecx; self = g->esi; in_esi = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x1cu); goto E_100b33a1;
    case 0x100b33fdu: eax = g->eax; ecx = g->ecx; self = g->esi; in_esi = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x1cu); goto E_100b33fd;
    case 0x100b3428u: eax = g->eax; ecx = g->ecx; self = g->esi; in_esi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x1cu); goto E_100b3428;
    case 0x100b34b7u: eax = g->eax; ecx = g->ecx; in_esi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x1cu); goto E_100b34b7;
    default: break;
    }
#endif

    COW_AT(100b31f0)
    t1 = rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 1u);
    if (t1 == 0u)
    {
        eax = t1;
        goto L_100b3428;
    }
    eax = t1;
    COW_AT(100b3213)
    if (eax != 1u) goto L_100b34b7;
    COW_AT(100b321a)
    d2 = (double)(float)fr(g, (double)rdf32(self + rd16(self + 0x258u) * 0x20u + 0x28u) - (double)rdf32(rd32(self + 0x260u) + 0x140u));
    d3 = (double)(float)fr(g, (double)rdf32(self + rd16(self + 0x258u) * 0x20u + 0x2cu) - (double)rdf32(rd32(self + 0x260u) + 0x144u));
    d4 = (double)(float)fr(g, (double)rdf32(self + rd16(self + 0x258u) * 0x20u + 0x30u) - (double)rdf32(rd32(self + 0x260u) + 0x148u));
    t5 = rd16(self + 0x258u);
    t6 = rd32(rd32(COW_IMG(0x1065cb04u)) + 0x1acu);
    d7 = fr(g, atan2(-fr(g, (double)rdf32(self + rd16(self + 0x258u) * 0x20u + 0x30u) - (double)rdf32(rd32(self + 0x260u) + 0x148u)), d2));
    wrf32(rd32(self + 0x260u) + 0x154u, (float)d7);
    d8 = (double)(float)fr(g, sqrt(fr(g, fr(g, fr(g, d4 * d4) + fr(g, d3 * d3)) + fr(g, d2 * d2))));
    if (t6 == 0u) goto L_100b33a1;
    ecx = self + t5 * 0x20u;
    loc_18_f = d2;
    loc_10_f = d3;
    loc_14_f = d4;
    loc_c_f = d8;
    COW_AT(100b3298)
    t9 = rd32(rd32(self + 0x260u) + 0x168u);
    g->esp = sp0 - 0x1cu;
    t10 = cow_call_regs(g, COW_IMG(0x10014cf0u), t9, g->ecx, g->edx, 1, 0);
    d11 = cow_take_float(g);
    d12 = fr(g, fr(g, d11 * cow_bits2f(t9)) * (double)rdf32(COW_IMG(0x1032b160u)));
    if ((cow_fsw(g, d12, loc_c_f, 0u) & 0x100u) == 0u) goto L_100b33a1;
    COW_AT(100b32c8)
    t13 = rd32(rd32(self + 0x260u) + 0x140u);
    t14 = rd32(rd32(self + 0x260u) + 0x168u);
    d15 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / loc_c_f);
    g->esp = sp0 - 0x1cu;
    cow_call_regs(g, COW_IMG(0x10014cf0u), rd32(self + 0x260u), g->ecx, g->edx, 1, 0);
    d16 = cow_take_float(g);
    d17 = fr(g, fr(g, fr(g, fr(g, d16 * cow_bits2f(t14)) * (double)rdf32(COW_IMG(0x1032b160u))) * fr(g, d15 * loc_18_f)) + cow_bits2f(t13));
    wrf32(rd32(self + 0x260u) + 0x140u, (float)d17);
    t18 = rd32(rd32(self + 0x260u) + 0x144u);
    t19 = rd32(rd32(self + 0x260u) + 0x168u);
    cow_call_regs(g, COW_IMG(0x10014cf0u), rd32(self + 0x260u), g->ecx, g->edx, 1, 0);
    d20 = cow_take_float(g);
    d21 = fr(g, fr(g, fr(g, fr(g, d20 * cow_bits2f(t19)) * (double)rdf32(COW_IMG(0x1032b160u))) * fr(g, d15 * loc_10_f)) + cow_bits2f(t18));
    wrf32(rd32(self + 0x260u) + 0x144u, (float)d21);
    t22 = rd32(rd32(self + 0x260u) + 0x148u);
    t23 = rd32(rd32(self + 0x260u) + 0x168u);
    cow_call_regs(g, COW_IMG(0x10014cf0u), rd32(self + 0x260u), g->ecx, g->edx, 1, 0);
    d24 = cow_take_float(g);
    d25 = fr(g, fr(g, fr(g, fr(g, d24 * cow_bits2f(t23)) * (double)rdf32(COW_IMG(0x1032b160u))) * fr(g, d15 * loc_14_f)) + cow_bits2f(t22));
    wrf32(rd32(self + 0x260u) + 0x148u, (float)d25);
L_100b33fd: ;
    COW_AT(100b33fd)
    t29 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x124u) | 0x20000u;
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x124u, t29);
    wr8(self + 0x25au, 1u);
    g->esi = in_esi;
    return;
L_100b33a1: ;
    COW_AT(100b33a1)
    d26 = (double)rdf32(self + rd16(self + 0x258u) * 0x20u + 0x28u);
    wrf32(rd32(self + 0x260u) + 0x140u, (float)d26);
    d27 = (double)rdf32(self + rd16(self + 0x258u) * 0x20u + 0x2cu);
    wrf32(rd32(self + 0x260u) + 0x144u, (float)d27);
    d28 = (double)rdf32(self + rd16(self + 0x258u) * 0x20u + 0x30u);
    wrf32(rd32(self + 0x260u) + 0x148u, (float)d28);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 2u));
    goto L_100b33fd;
L_100b3428: ;
    COW_AT(100b3428)
    g->eax = eax;
    t30 = rd16(self + 2u);
    g->esp = sp0 - 0x1cu;
    t31 = cow_fastcall(g, COW_IMG(0x1008af20u), rd32(COW_IMG(0x10480af0u) + t30 * 4u), t30, 0);
    t32 = g->edx;
    g->edx = t32;
    t33 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
    t34 = g->edx;
    t35 = rd16(self + 0x258u);
    d36 = fr(g, (double)(int32_t)t33 * (double)rdf32(COW_IMG(0x1032a22cu)));
    wrf32(self + t35 * 0x20u + 0x28u, (float)d36);
    g->eax = t35 << 5u;
    g->edx = t34;
    t37 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 4u);
    t38 = g->edx;
    d39 = fr(g, (double)(int32_t)t37 * (double)rdf32(COW_IMG(0x1032a22cu)));
    wrf32(self + rd16(self + 0x258u) * 0x20u + 0x30u, (float)d39);
    t40 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
    d41 = fr(g, (double)(int32_t)t40 * (double)rdf32(COW_IMG(0x1032a22cu)));
    wrf32(self + rd16(self + 0x258u) * 0x20u + 0x2cu, (float)d41);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 8u));
L_100b34b7: ;
    COW_AT(100b34b7)
    g->esi = in_esi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100b31f0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100b3213u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b321au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b3298u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b32c8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b33a1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b33fdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b3428u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100b34b7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100b31f0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_100b31f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
