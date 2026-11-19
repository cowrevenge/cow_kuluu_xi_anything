/* f_0x1027ddb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1027ddb0(Guest* g)
{
    double d1;
    double d10;
    double d11;
    double d12;
    double d15;
    double d16;
    double d17;
    double d18;
    double d2;
    double d27;
    double d3;
    double d30;
    double d4;
    double d7;
    double d8;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t t13;
    uint32_t t14;
    uint32_t t19;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t28;
    uint32_t t29;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t5;
    uint32_t t6;
    uint32_t t9;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 20u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1027ddbeu: self = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1027ddbe;
    case 0x1027ddccu: self = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1027ddcc;
    case 0x1027dddcu: self = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1027dddc;
    case 0x1027ddfdu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1027ddfd;
    case 0x1027de03u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1027de03;
    case 0x1027de20u: eax = g->eax; ecx = g->ecx; edx = g->edx; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1027de20;
    case 0x1027de33u: eax = g->eax; ecx = g->ecx; edx = g->edx; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1027de33;
    case 0x1027de45u: eax = g->eax; ecx = g->ecx; edx = g->edx; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1027de45;
    case 0x1027de5au: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1027de5a;
    case 0x1027de68u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1027de68;
    case 0x1027de7fu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1027de7f;
    case 0x1027de85u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1027de85;
    case 0x1027dea2u: eax = g->eax; ecx = g->ecx; edx = g->edx; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1027dea2;
    case 0x1027deb1u: eax = g->eax; ecx = g->ecx; edx = g->edx; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1027deb1;
    case 0x1027dec3u: eax = g->eax; ecx = g->ecx; edx = g->edx; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1027dec3;
    case 0x1027ded1u: eax = g->eax; self = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1027ded1;
    case 0x1027deddu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1027dedd;
    case 0x1027deebu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1027deeb;
    case 0x1027def3u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1027def3;
    case 0x1027def6u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1027def6;
    case 0x1027defbu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1027defb;
    case 0x1027df07u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1027df07;
    case 0x1027df10u: eax = g->eax; edx = g->edx; loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1027df10;
    case 0x1027df25u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1027df25;
    case 0x1027df27u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1027df27;
    case 0x1027df3au: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1027df3a;
    case 0x1027df4au: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1027df4a;
    case 0x1027df50u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1027df50;
    case 0x1027df60u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1027df60;
    case 0x1027df74u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1027df74;
    case 0x1027df83u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1027df83;
    case 0x1027df8du: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1027df8d;
    default: break;
    }
#endif

    COW_AT(1027ddb0)
    wr32(sp0 - 4u, in_esi);
    wr32(sp0 - 8u, in_edi);
    if ((int32_t)arg2 >= 0)
    {
    COW_AT(1027ddcc)
        x0 = fr(g, fr(g, (double)(int32_t)arg2 * (double)rdf32(arg1 + 0xa0u)) * (double)rdf32(COW_IMG(0x1032a42cu)));
    }
    else
    {
    COW_AT(1027ddbe)
        x0 = fr(g, (double)rdf32(arg1 + 0xb0u) * (double)rdf32(arg1 + 0xa0u));
    }
    COW_AT(1027dddc)
    d1 = fr(g, x0 + (double)rdf32(arg1 + 0xacu));
    wrf32(arg1 + 0xacu, (float)d1);
    d2 = (double)rdf32(arg1 + 0xacu);
    d3 = (double)rdf32(arg1 + 0xa8u);
    if ((cow_fsw(g, d2, d3, 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d2, d3, 0u) & 0x4100u;
        goto L_1027de68;
    }
    COW_AT(1027ddfd)
    if ((rd32(arg1) & 4u) == 0u)
    {
        eax = rd32(arg1);
        goto L_1027de5a;
    }
    eax = rd32(arg1);
    COW_AT(1027de03)
    d4 = fr(g, fr(g, (double)rdf32(arg1 + 0xacu) - (double)rdf32(arg1 + 0xa8u)) * (double)rdf32(COW_IMG(0x1032d68cu)));
    wrf64(sp0 - 0x10u, d4);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t5 = cow_thiscall_cdecl(g, COW_IMG(0x10316efbu), self, 1, cow_dlo(d4));
    t6 = g->edx;
    d7 = cow_take_float(g);
    eax = t5;
    edx = t6;
    x0 = d7;
    COW_AT(1027de20)
    if ((rd8(arg1) & 8u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(arg1);
        x0 = fr(g, x0 * (double)rdf32(COW_IMG(0x1032a1a8u)));
        goto L_1027dec3;
    }
    eax = (eax & 0xffffff00u) | rd8(arg1);
    x0 = fr(g, x0 * (double)rdf32(COW_IMG(0x1032a1a8u)));
    COW_AT(1027de33)
    d8 = fr(g, (double)rdf32(arg1 + 0xa0u) * (double)rdf32(COW_IMG(0x1032a3f0u)));
    wrf32(arg1 + 0xa0u, (float)d8);
L_1027de45: ;
    COW_AT(1027de45)
    d18 = fr(g, (double)rdf32(arg1 + 0xa8u) - x0);
    wrf32(arg1 + 0xacu, (float)d18);
    loc_4 = rd32(sp0 - 4u);
    loc_8 = rd32(sp0 - 8u);
L_1027df07: ;
    COW_AT(1027df07)
    if ((int32_t)arg2 <= 0)
    {
        ecx = 1u;
    }
    else
    {
    COW_AT(1027df10)
        g->edx = edx;
        d27 = fr(g, fr(g, (double)(int32_t)arg2 * (double)rdf32(COW_IMG(0x10340b48u))) + (double)rdf32(COW_IMG(0x10329a08u)));
        fpush(g, d27);
        g->esp = sp0 - 8u;
        t28 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        t29 = g->edx;
        eax = t28;
        edx = t29;
    COW_AT(1027df25)
        ecx = eax;
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
    }
    COW_AT(1027df27)
    d30 = (double)rdf32(arg1 + 0xa0u);
    if (!(d30 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d30, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_1027df60;
    }
    COW_AT(1027df3a)
    t31 = rd32(arg1 + 0x98u) - ecx;
    t32 = rd32(arg1 + 0x98u);
    wr32(arg1 + 0x98u, t31);
    if ((int32_t)(t32 - ecx) >= 0) goto L_1027df8d;
    eax = t31;
    COW_AT(1027df4a)
    wr32(sp0 - 0xcu, arg1);
    g->esp = sp0 - 8u;
    t33 = cow_call_regs(g, COW_IMG(0x1027df90u), eax, g->ecx, g->edx, 1, 1, arg1);
    eax = t33;
    COW_AT(1027df50)
    t34 = eax * 2u - 2u;
    wr32(arg1 + 0x98u, t34);
    g->esi = rd32(sp0 - 4u);
    g->edi = rd32(sp0 - 8u);
    return;
L_1027de5a: ;
    COW_AT(1027de5a)
    t9 = rd32(arg1 + 0xa4u);
    wr32(arg1 + 0xacu, t9);
    ecx = t9;
    edx = in_edx;
L_1027dedd: ;
    COW_AT(1027dedd)
    t20 = (eax & 0xffffff00u) | (eax & 0xfdu);
    wr32(arg1, t20);
    if (rd32(arg1 + 0xbcu) == 0u)
    {
        eax = rd32(arg1 + 0xbcu);
        loc_4 = in_esi;
        loc_8 = in_edi;
    }
    else
    {
        eax = rd32(arg1 + 0xbcu);
    COW_AT(1027deeb)
        wr32(sp0 - 0xcu, 0u);
        wr32(sp0 - 0x10u, eax);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t21 = cow_call_regs(g, COW_IMG(0x10285800u), eax, g->ecx, g->edx, 1, 2, eax, 0u);
        t22 = g->ecx;
        t23 = g->edx;
        eax = t21;
        ecx = t22;
        edx = t23;
    COW_AT(1027def3)
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
    }
    COW_AT(1027def6)
    g->eax = eax;
    g->esp = sp0 - 8u;
    t24 = cow_fastcall(g, COW_IMG(0x102750b0u), ecx, edx, 0);
    t25 = g->edx;
    eax = t24;
    edx = t25;
    COW_AT(1027defb)
    t26 = eax - rd32(arg1 + 0x8cu);
    wr32(arg1 + 0x8cu, t26);
    eax = t26;
    loc_4 = rd32(sp0 - 4u);
    loc_8 = rd32(sp0 - 8u);
    goto L_1027df07;
L_1027de68: ;
    COW_AT(1027de68)
    d10 = (double)rdf32(arg1 + 0xacu);
    d11 = (double)rdf32(arg1 + 0xa4u);
    if (!(d10 < d11))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d10, d11, 0u);
        edx = in_edx;
        loc_4 = in_esi;
        loc_8 = in_edi;
        goto L_1027df07;
    }
    COW_AT(1027de7f)
    if ((rd32(arg1) & 4u) == 0u)
    {
        eax = rd32(arg1);
        goto L_1027ded1;
    }
    eax = rd32(arg1);
    COW_AT(1027de85)
    d12 = fr(g, fr(g, (double)rdf32(arg1 + 0xa4u) - (double)rdf32(arg1 + 0xacu)) * (double)rdf32(COW_IMG(0x1032d68cu)));
    wrf64(sp0 - 0x10u, d12);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t13 = cow_thiscall_cdecl(g, COW_IMG(0x10316efbu), self, 1, cow_dlo(d12));
    t14 = g->edx;
    d15 = cow_take_float(g);
    eax = t13;
    edx = t14;
    x0 = d15;
    COW_AT(1027dea2)
    if ((rd8(arg1) & 8u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(arg1);
        x0 = fr(g, x0 * (double)rdf32(COW_IMG(0x1032a1a8u)));
        goto L_1027de45;
    }
    eax = (eax & 0xffffff00u) | rd8(arg1);
    x0 = fr(g, x0 * (double)rdf32(COW_IMG(0x1032a1a8u)));
    COW_AT(1027deb1)
    d16 = fr(g, (double)rdf32(arg1 + 0xa0u) * (double)rdf32(COW_IMG(0x1032a3f0u)));
    wrf32(arg1 + 0xa0u, (float)d16);
L_1027dec3: ;
    COW_AT(1027dec3)
    d17 = fr(g, x0 + (double)rdf32(arg1 + 0xa4u));
    wrf32(arg1 + 0xacu, (float)d17);
    loc_4 = rd32(sp0 - 4u);
    loc_8 = rd32(sp0 - 8u);
    goto L_1027df07;
L_1027ded1: ;
    COW_AT(1027ded1)
    t19 = rd32(arg1 + 0xa8u);
    wr32(arg1 + 0xacu, t19);
    ecx = self;
    edx = t19;
    goto L_1027dedd;
L_1027df60: ;
    COW_AT(1027df60)
    wr32(sp0 - 0xcu, arg1);
    t35 = ecx + rd32(arg1 + 0x98u);
    wr32(arg1 + 0x98u, t35);
    g->esp = sp0 - 8u;
    t36 = cow_call_regs(g, COW_IMG(0x1027df90u), eax, g->ecx, g->edx, 1, 1, arg1);
    eax = t36;
    COW_AT(1027df74)
    if ((int32_t)rd32(arg1 + 0x98u) < (int32_t)(eax * 2u))
    {
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
    }
    else
    {
    COW_AT(1027df83)
        wr32(arg1 + 0x98u, 0u);
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
    }
L_1027df8d: ;
    COW_AT(1027df8d)
    g->esi = loc_4;
    g->edi = loc_8;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1027ddb0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1027ddbeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027ddccu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027dddcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        double x0;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 8u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027ddfdu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027de03u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027de20u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x10u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027de33u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 8u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027de45u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 8u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027de5au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027de68u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027de7fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027de85u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027dea2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x10u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027deb1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 8u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027dec3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 8u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027ded1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027deddu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027deebu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027def3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x10u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027def6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027defbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027df07u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027df10u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ecx = 1u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1027df25u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1027df27u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1027df3au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1027df4au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1027df50u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1027df60u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1027df74u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1027df83u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1027df8du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1027ddb0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1027ddb0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
