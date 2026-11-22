/* f_0x102bbf50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
uint32_t cow_fn_102bbf50(Guest* g)
{
    double d1;
    double d12;
    double d15;
    double d16;
    double d17;
    double d18;
    double d19;
    double d2;
    double d20;
    double d21;
    double d25;
    double d28;
    double d29;
    double d30;
    double d31;
    double d32;
    double d33;
    double d36;
    double d37;
    double d39;
    double d40;
    double d41;
    double d42;
    double d5;
    double d6;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_f8;
    uint32_t t10;
    uint32_t t11;
    uint32_t t13;
    uint32_t t14;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t26;
    uint32_t t27;
    uint32_t t3;
    uint32_t t34;
    uint32_t t35;
    uint32_t t38;
    uint32_t t4;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t50;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    double x1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 288u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102bbf77u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x108u); in_esi = rd32(sp0 - 0x104u); in_ebp = rd32(sp0 - 0x100u); in_ebx = rd32(sp0 - 0xfcu); g->ebp = rd32(sp0 - 0x100u); g->ebx = rd32(sp0 - 0xfcu); g->edi = rd32(sp0 - 0x108u); g->esi = rd32(sp0 - 0x104u); goto E_102bbf77;
    case 0x102bbf7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x108u); in_esi = rd32(sp0 - 0x104u); in_ebp = rd32(sp0 - 0x100u); in_ebx = rd32(sp0 - 0xfcu); g->ebp = rd32(sp0 - 0x100u); g->ebx = rd32(sp0 - 0xfcu); g->edi = rd32(sp0 - 0x108u); g->esi = rd32(sp0 - 0x104u); goto E_102bbf7c;
    case 0x102bbfa5u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x108u); in_esi = rd32(sp0 - 0x104u); in_ebp = rd32(sp0 - 0x100u); in_ebx = rd32(sp0 - 0xfcu); g->ebp = rd32(sp0 - 0x100u); g->ebx = rd32(sp0 - 0xfcu); g->edi = rd32(sp0 - 0x108u); g->esi = rd32(sp0 - 0x104u); goto E_102bbfa5;
    case 0x102bbfb2u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x108u); in_esi = rd32(sp0 - 0x104u); in_ebp = rd32(sp0 - 0x100u); in_ebx = rd32(sp0 - 0xfcu); g->ebp = rd32(sp0 - 0x100u); g->ebx = rd32(sp0 - 0xfcu); g->edi = rd32(sp0 - 0x108u); g->esi = rd32(sp0 - 0x104u); goto E_102bbfb2;
    case 0x102bbfb7u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x108u); in_esi = rd32(sp0 - 0x104u); in_ebp = rd32(sp0 - 0x100u); in_ebx = rd32(sp0 - 0xfcu); g->ebp = rd32(sp0 - 0x100u); g->ebx = rd32(sp0 - 0xfcu); g->edi = rd32(sp0 - 0x108u); g->esi = rd32(sp0 - 0x104u); goto E_102bbfb7;
    case 0x102bbfc2u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x108u); in_esi = rd32(sp0 - 0x104u); in_ebp = rd32(sp0 - 0x100u); in_ebx = rd32(sp0 - 0xfcu); g->ebp = rd32(sp0 - 0x100u); g->ebx = rd32(sp0 - 0xfcu); g->edi = rd32(sp0 - 0x108u); g->esi = rd32(sp0 - 0x104u); goto E_102bbfc2;
    case 0x102bbfd9u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x108u); in_esi = rd32(sp0 - 0x104u); in_ebp = rd32(sp0 - 0x100u); in_ebx = rd32(sp0 - 0xfcu); g->ebp = rd32(sp0 - 0x100u); g->ebx = rd32(sp0 - 0xfcu); g->edi = rd32(sp0 - 0x108u); g->esi = rd32(sp0 - 0x104u); goto E_102bbfd9;
    case 0x102bbfe6u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x108u); in_esi = rd32(sp0 - 0x104u); in_ebp = rd32(sp0 - 0x100u); in_ebx = rd32(sp0 - 0xfcu); g->ebp = rd32(sp0 - 0x100u); g->ebx = rd32(sp0 - 0xfcu); g->edi = rd32(sp0 - 0x108u); g->esi = rd32(sp0 - 0x104u); goto E_102bbfe6;
    case 0x102bbff1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x108u); in_esi = rd32(sp0 - 0x104u); in_ebp = rd32(sp0 - 0x100u); in_ebx = rd32(sp0 - 0xfcu); loc_f8 = rd32(sp0 - 0xf8u); g->ebp = rd32(sp0 - 0x100u); g->ebx = rd32(sp0 - 0xfcu); g->edi = rd32(sp0 - 0x108u); g->esi = rd32(sp0 - 0x104u); goto E_102bbff1;
    case 0x102bbffbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102bbffb;
    case 0x102bc019u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102bc019;
    case 0x102bc03du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102bc03d;
    case 0x102bc059u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102bc059;
    case 0x102bc076u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_102bc076;
    case 0x102bc07du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_102bc07d;
    case 0x102bc088u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_102bc088;
    case 0x102bc097u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102bc097;
    case 0x102bc0a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102bc0a5;
    case 0x102bc0acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102bc0ac;
    case 0x102bc0b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102bc0b3;
    case 0x102bc0f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102bc0f0;
    case 0x102bc101u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102bc101;
    case 0x102bc10du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102bc10d;
    case 0x102bc141u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102bc141;
    case 0x102bc14fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102bc14f;
    case 0x102bc157u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102bc157;
    case 0x102bc181u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102bc181;
    case 0x102bc18fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102bc18f;
    case 0x102bc1a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102bc1a1;
    case 0x102bc1b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102bc1b3;
    case 0x102bc1b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102bc1b8;
    case 0x102bc1cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102bc1cd;
    case 0x102bc1d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102bc1d2;
    case 0x102bc1e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102bc1e4;
    case 0x102bc213u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102bc213;
    case 0x102bc21fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102bc21f;
    case 0x102bc236u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_102bc236;
    case 0x102bc249u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_102bc249;
    case 0x102bc27fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102bc27f;
    case 0x102bc28au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102bc28a;
    case 0x102bc2b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102bc2b4;
    case 0x102bc2b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102bc2b7;
    default: break;
    }
#endif

    COW_AT(102bbf50)
    d1 = (double)rdf32(sp0 + 8u);
    wr32(sp0 - 0xfcu, in_ebx);
    wr32(sp0 - 0x100u, in_ebp);
    d2 = (double)rdf32(sp0 + 0xcu);
    wr32(sp0 - 0x104u, in_esi);
    wr32(sp0 - 0x108u, in_edi);
    if (d1 != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_102bbfb2;
    }
    eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(102bbf77)
    if (PARITY(eax >> 8u & 0x44u)) goto L_102bbfa5;
    COW_AT(102bbf7c)
    wr32(arg5, rd32(arg4));
    t3 = rd32(arg4 + 4u);
    wr32(arg5 + 4u, t3);
    t4 = rd32(arg4 + 8u);
    wr32(arg5 + 8u, t4);
    g->ebx = rd32(sp0 - 0xfcu);
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = t3;
    return t4;
L_102bbfa5: ;
    COW_AT(102bbfa5)
    wr32(sp0 + 8u, 0x34000000u);
L_102bbfc2: ;
    COW_AT(102bbfc2)
    d5 = (double)rdf32(sp0 + 8u);
    d6 = (double)rdf32(sp0 + 0xcu);
    if ((cow_fsw(g, d5, d6, 0u) & 0x4100u) != 0u)
    {
    COW_AT(102bbfe6)
        t8 = rd32(sp0 + 0xcu);
        wr32(sp0 - 0xf8u, t8);
        ecx = self;
        edx = t8;
        loc_f8 = t8;
    }
    else
    {
    COW_AT(102bbfd9)
        t7 = rd32(sp0 + 8u);
        wr32(sp0 - 0xf8u, t7);
        ecx = t7;
        edx = in_edx;
        loc_f8 = t7;
    }
    COW_AT(102bbff1)
    wr32(sp0 - 0x10cu, loc_f8);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x108u;
    t9 = cow_call_regs(g, COW_IMG(0x102b4470u), loc_f8, g->ecx, g->edx, 1, 1, loc_f8);
    t10 = g->ecx;
    t11 = g->edx;
    eax = t9;
    ecx = t10;
    edx = t11;
    COW_AT(102bbffb)
    wr32(sp0 - 0xf8u, eax);
    wrf64(sp0 - 0xf8u, (double)(int32_t)eax);
    g->eax = eax;
    g->edx = edx;
    d12 = rdf64(COW_IMG(0x1032abc8u));
    fpush(g, d12);
    fpush(g, (double)(int32_t)eax);
    g->esp = sp0 - 0xecu;
    t13 = cow_cdecl(g, COW_IMG(0x10312cd0u), 7, rd32(sp0 - 0x108u), rd32(sp0 - 0x104u), rd32(sp0 - 0x100u), rd32(sp0 - 0xfcu), cow_dlo((double)(int32_t)eax), cow_dhi((double)(int32_t)eax), rd32(sp0 - 0xf0u));
    t14 = g->edx;
    d15 = cow_take_float(g);
    eax = t13;
    edx = t14;
    x0 = d15;
    COW_AT(102bc019)
    d16 = fr(g, (double)rdf32(sp0 + 8u) * x0);
    wrf32(sp0 + 8u, (float)d16);
    d17 = fr(g, x0 * (double)rdf32(sp0 + 0xcu));
    if (!(d17 < rdf64(COW_IMG(0x1032ab90u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d17, rdf64(COW_IMG(0x1032ab90u)), 1u);
        x0 = d17;
    COW_AT(102bc059)
        d20 = (double)rdf32(sp0 + 8u);
        d21 = (double)rdf32(sp0 + 8u);
        if (!(d20 < rdf64(COW_IMG(0x1032ab90u))))
        {
            x1 = fr(g, d21 + d21);
    COW_AT(102bc07d)
            ebp = 1u;
            x1 = fr(g, x1 - (double)rdf32(COW_IMG(0x1032961cu)));
        }
        else
        {
            x1 = fr(g, d21 + d21);
    COW_AT(102bc076)
            ebp = 2u;
        }
    COW_AT(102bc088)
        wrf32(sp0 + 8u, (float)x1);
        x0 = fr(g, fr(g, x0 + x0) - (double)rdf32(COW_IMG(0x1032961cu)));
    }
    else
    {
        x0 = d17;
    COW_AT(102bc03d)
        d18 = (double)rdf32(sp0 + 8u);
        d19 = fr(g, fr(g, d18 + d18) - (double)rdf32(COW_IMG(0x1032961cu)));
        wrf32(sp0 + 8u, (float)d19);
        ebp = 0u;
        x0 = fr(g, x0 + x0);
    }
    COW_AT(102bc097)
    wrf32(sp0 + 0xcu, (float)x0);
    if (ebp == 0u) goto L_102bc0b3;
    eax = ebp;
    COW_AT(102bc0a5)
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_102bc18f;
    }
    eax = eax - 1u;
    COW_AT(102bc0ac)
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_102bc2b7;
    }
L_102bc0b3: ;
    COW_AT(102bc0b3)
    edi = sp0 - 0x90u;
    eax = 0u;
    ecx = 0x24u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x90u, rd32(arg4));
    t34 = rd32(arg4 + 4u);
    wr32(sp0 - 0x8cu, t34);
    t35 = rd32(arg4 + 8u);
    wr32(sp0 - 0x88u, t35);
    ecx = rd32(arg4);
    edx = t34;
    ebx = 0u;
    esi = ebp * 0x240u + rd32(COW_IMG(0x109f8260u));
    edi = arg4 + 8u;
L_102bc0f0: ;
    COW_AT(102bc0f0)
    g->edx = edx;
    d36 = rdf64(sp0 - 0xf8u);
    d37 = (double)rdf32(ebx * 4u + rd32(COW_IMG(0x109f825cu)));
    fpush(g, d37);
    fpush(g, d36);
    g->esp = sp0 - 0xecu;
    cow_cdecl(g, COW_IMG(0x10312cd0u), 7, rd32(sp0 - 0x108u), rd32(sp0 - 0x104u), rd32(sp0 - 0x100u), rd32(sp0 - 0xfcu), rd32(sp0 - 0xf8u), rd32(sp0 - 0xf4u), rd32(sp0 - 0xf0u));
    t38 = g->edx;
    d39 = cow_take_float(g);
    edx = t38;
    x0 = d39;
    COW_AT(102bc101)
    eax = sp0 - 0x7cu;
    ecx = 1u;
L_102bc10d: ;
    COW_AT(102bc10d)
    d40 = fr(g, fr(g, fr(g, (double)rdf32(edi - 8u) * (double)rdf32(ecx * 4u + esi)) * x0) + (double)rdf32(eax - 8u));
    wrf32(eax - 8u, (float)d40);
    d41 = fr(g, fr(g, fr(g, x0 * (double)rdf32(ecx * 4u + esi)) * (double)rdf32(edi - 4u)) + (double)rdf32(eax - 4u));
    wrf32(eax - 4u, (float)d41);
    d42 = fr(g, fr(g, fr(g, x0 * (double)rdf32(ecx * 4u + esi)) * (double)rdf32(edi)) + (double)rdf32(eax));
    wrf32(eax, (float)d42);
    if ((int32_t)(ecx + 1u) < 12)
    {
        eax = eax + 0xcu;
        ecx = ecx + 1u;
        goto L_102bc10d;
    }
    ecx = ecx + 1u;
    COW_AT(102bc141)
    if ((int32_t)(ebx + 1u) < 9)
    {
        ebx = ebx + 1u;
        esi = esi + 0x40u;
        edi = edi + 0xcu;
        goto L_102bc0f0;
    }
    COW_AT(102bc14f)
    if (ebp != 0u) goto L_102bc28a;
    COW_AT(102bc157)
    wr32(sp0 - 0x10cu, arg5);
    wr32(sp0 - 0x110u, sp0 - 0x90u);
    t43 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x114u, t43);
    t44 = rd32(sp0 + 8u);
    wr32(sp0 - 0x118u, t44);
    wr32(sp0 - 0x11cu, arg1);
    g->eax = t43;
    g->edx = arg1;
    g->esp = sp0 - 0x108u;
    t45 = cow_cdecl(g, COW_IMG(0x102bb300u), 5, arg1, t44, t43, sp0 - 0x90u, arg5);
    t46 = g->edx;
    eax = t45;
    edx = t46;
    COW_AT(102bc181)
    g->ebx = rd32(sp0 - 0xfcu);
    g->esi = rd32(sp0 - 0x104u);
    g->edi = rd32(sp0 - 0x108u);
    g->ebp = rd32(sp0 - 0x100u);
    g->edx = edx;
    return eax;
L_102bbfb2: ;
    COW_AT(102bbfb2)
    if (!PARITY(eax >> 8u & 0x44u))
    {
    COW_AT(102bbfb7)
        wr32(sp0 + 0xcu, 0x34000000u);
    }
    goto L_102bbfc2;
L_102bc18f: ;
    COW_AT(102bc18f)
    wr32(sp0 - 0x10cu, sp0 - 0xf0u);
    t22 = rd32(sp0 + 8u);
    wr32(sp0 - 0x110u, t22);
    g->edx = t22;
    g->esp = sp0 - 0x108u;
    cow_call_regs(g, COW_IMG(0x102bc2d0u), eax, g->ecx, g->edx, 1, 2, t22, sp0 - 0xf0u);
    t23 = g->edx;
    edx = t23;
    COW_AT(102bc1a1)
    wr32(sp0 - 0x114u, sp0 - 0xe0u);
    t24 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x118u, t24);
    g->esp = sp0 - 0x110u;
    cow_call_regs(g, COW_IMG(0x102bc2d0u), sp0 - 0xe0u, g->ecx, g->edx, 1, 2, t24, sp0 - 0xe0u);
    COW_AT(102bc1b3)
    ecx = 0u;
L_102bc1b8: ;
    COW_AT(102bc1b8)
    if ((int32_t)(ecx & 0x80000003u) >= 0)
    {
        eax = (uint32_t)((int32_t)(ecx + ((uint32_t)((int32_t)ecx >> 0x1fu) & 3u)) >> 2u);
        edx = ecx & 0x80000003u;
    }
    else
    {
        eax = (uint32_t)((int32_t)(ecx + ((uint32_t)((int32_t)ecx >> 0x1fu) & 3u)) >> 2u);
        edx = ecx & 0x80000003u;
    COW_AT(102bc1cd)
        edx = (edx - 1u | 0xfffffffcu) + 1u;
    }
    COW_AT(102bc1d2)
    d25 = fr(g, (double)rdf32(eax * 4u + sp0 - 0xe0u) * (double)rdf32(edx * 4u + sp0 - 0xf0u));
    wrf32(ecx * 4u + sp0 - 0xd0u, (float)d25);
    if ((int32_t)(ecx + 1u) < 16)
    {
        ecx = ecx + 1u;
        goto L_102bc1b8;
    }
    COW_AT(102bc1e4)
    wr32(arg5, rd32(arg4));
    t26 = rd32(arg4 + 4u);
    wr32(arg5 + 4u, t26);
    t27 = rd32(arg4 + 8u);
    wr32(arg5 + 8u, t27);
    eax = arg4;
    ecx = rd32(COW_IMG(0x109f825cu));
    edx = t26;
    ebx = 0x280u;
    ebp = rd32(COW_IMG(0x109f825cu)) + 4u;
    edi = arg4 + 0x14u;
L_102bc213: ;
    COW_AT(102bc213)
    d28 = rdf64(sp0 - 0xf8u);
    d29 = (double)rdf32(ebp);
    fpush(g, d29);
    fpush(g, d28);
    g->esp = sp0 - 0xecu;
    cow_cdecl(g, COW_IMG(0x10312cd0u), 7, rd32(sp0 - 0x108u), rd32(sp0 - 0x104u), rd32(sp0 - 0x100u), rd32(sp0 - 0xfcu), rd32(sp0 - 0xf8u), rd32(sp0 - 0xf4u), rd32(sp0 - 0xf0u));
    d30 = cow_take_float(g);
    x0 = d30;
    COW_AT(102bc21f)
    eax = 0u;
    ecx = ebx + rd32(COW_IMG(0x109f8260u)) - (sp0 - 0xd0u);
    x1 = (double)rdf32(COW_IMG(0x103295d8u));
L_102bc236: ;
    COW_AT(102bc236)
    if ((int32_t)(eax + 1u) < 16)
    {
        x1 = fr(g, x1 + fr(g, (double)rdf32(eax * 4u + ecx + sp0 - 0xd0u) * (double)rdf32(eax * 4u + sp0 - 0xd0u)));
        eax = eax + 1u;
        goto L_102bc236;
    }
    edx = eax * 4u + ecx;
    x1 = fr(g, x1 + fr(g, (double)rdf32(eax * 4u + ecx + sp0 - 0xd0u) * (double)rdf32(eax * 4u + sp0 - 0xd0u)));
    eax = eax + 1u;
    COW_AT(102bc249)
    d31 = fr(g, fr(g, fr(g, x1 * (double)rdf32(edi - 8u)) * x0) + (double)rdf32(arg5));
    wrf32(arg5, (float)d31);
    d32 = fr(g, fr(g, fr(g, x1 * (double)rdf32(edi - 4u)) * x0) + (double)rdf32(arg5 + 4u));
    wrf32(arg5 + 4u, (float)d32);
    d33 = fr(g, fr(g, fr(g, x1 * (double)rdf32(edi)) * x0) + (double)rdf32(arg5 + 8u));
    wrf32(arg5 + 8u, (float)d33);
    if ((int32_t)(ebx + 0x40u) < 1152)
    {
        ebx = ebx + 0x40u;
        ebp = ebp + 4u;
        edi = edi + 0xcu;
        goto L_102bc213;
    }
    COW_AT(102bc27f)
    g->ebx = rd32(sp0 - 0xfcu);
    g->esi = rd32(sp0 - 0x104u);
    g->edi = rd32(sp0 - 0x108u);
    g->ebp = rd32(sp0 - 0x100u);
    g->edx = edx;
    return eax;
L_102bc28a: ;
    COW_AT(102bc28a)
    wr32(sp0 - 0x10cu, arg5);
    wr32(sp0 - 0x110u, sp0 - 0x90u);
    t47 = rd32(sp0 + 8u);
    wr32(sp0 - 0x114u, t47);
    t48 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x118u, t48);
    wr32(sp0 - 0x11cu, arg1);
    g->eax = t48;
    g->edx = t47;
    g->esp = sp0 - 0x108u;
    t49 = cow_cdecl(g, COW_IMG(0x102bb300u), 5, arg1, t48, t47, sp0 - 0x90u, arg5);
    t50 = g->edx;
    eax = t49;
    edx = t50;
    COW_AT(102bc2b4)
L_102bc2b7: ;
    COW_AT(102bc2b7)
    g->ebx = rd32(sp0 - 0xfcu);
    g->esi = rd32(sp0 - 0x104u);
    g->edi = rd32(sp0 - 0x108u);
    g->ebp = rd32(sp0 - 0x100u);
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102bbf50(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102bbf77u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x108u);
        in_esi = rd32(sp0 - 0x104u);
        in_ebp = rd32(sp0 - 0x100u);
        in_ebx = rd32(sp0 - 0xfcu);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102bbf7cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x108u);
        in_esi = rd32(sp0 - 0x104u);
        in_ebp = rd32(sp0 - 0x100u);
        in_ebx = rd32(sp0 - 0xfcu);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102bbfa5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x108u);
        in_esi = rd32(sp0 - 0x104u);
        in_ebp = rd32(sp0 - 0x100u);
        in_ebx = rd32(sp0 - 0xfcu);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102bbfb2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x108u);
        in_esi = rd32(sp0 - 0x104u);
        in_ebp = rd32(sp0 - 0x100u);
        in_ebx = rd32(sp0 - 0xfcu);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102bbfb7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x108u);
        in_esi = rd32(sp0 - 0x104u);
        in_ebp = rd32(sp0 - 0x100u);
        in_ebx = rd32(sp0 - 0xfcu);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102bbfc2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x108u);
        in_esi = rd32(sp0 - 0x104u);
        in_ebp = rd32(sp0 - 0x100u);
        in_ebx = rd32(sp0 - 0xfcu);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102bbfd9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x108u);
        in_esi = rd32(sp0 - 0x104u);
        in_ebp = rd32(sp0 - 0x100u);
        in_ebx = rd32(sp0 - 0xfcu);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102bbfe6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x108u);
        in_esi = rd32(sp0 - 0x104u);
        in_ebp = rd32(sp0 - 0x100u);
        in_ebx = rd32(sp0 - 0xfcu);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102bbff1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_f8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x108u);
        in_esi = rd32(sp0 - 0x104u);
        in_ebp = rd32(sp0 - 0x100u);
        in_ebx = rd32(sp0 - 0xfcu);
        loc_f8 = rd32(sp0 - 0xf8u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102bbffbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10cu;
        (void)sp0;
        return 1;
    }
    case 0x102bc019u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102bc03du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102bc059u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102bc076u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102bc07du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102bc088u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102bc097u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102bc0a5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102bc0acu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102bc0b3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102bc0f0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102bc101u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102bc10du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102bc141u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102bc14fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102bc157u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102bc181u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x11cu;
        wr32(sp0 - 0x110u, sp0 - 0x90u);
        (void)sp0;
        return 1;
    }
    case 0x102bc18fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102bc1a1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x110u;
        wr32(sp0 - 0x10cu, sp0 - 0xf0u);
        (void)sp0;
        return 1;
    }
    case 0x102bc1b3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x118u;
        wr32(sp0 - 0x114u, sp0 - 0xe0u);
        wr32(sp0 - 0x10cu, sp0 - 0xf0u);
        (void)sp0;
        return 1;
    }
    case 0x102bc1b8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102bc1cdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102bc1d2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102bc1e4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102bc213u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x108u;
        g->esi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x102bc21fu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x108u;
        g->esi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x102bc236u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x108u;
        g->esi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x102bc249u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x108u;
        g->esi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x102bc27fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102bc28au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102bc2b4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x11cu;
        wr32(sp0 - 0x110u, sp0 - 0x90u);
        (void)sp0;
        return 1;
    }
    case 0x102bc2b7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102bbf50(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102bbf50(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
