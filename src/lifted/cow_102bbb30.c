/* f_0x102bbb30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_102bbb30(Guest* g)
{
    double d1;
    double d12;
    double d14;
    double d15;
    double d16;
    double d17;
    double d19;
    double d2;
    double d24;
    double d25;
    double d27;
    double d28;
    double d29;
    double d30;
    double d33;
    double d34;
    double d36;
    double d39;
    double d42;
    double d43;
    double d44;
    double d45;
    double d46;
    double d47;
    double d5;
    double d6;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_fc;
    uint32_t t10;
    uint32_t t11;
    uint32_t t13;
    uint32_t t18;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t26;
    uint32_t t3;
    uint32_t t31;
    uint32_t t32;
    uint32_t t35;
    uint32_t t37;
    uint32_t t38;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
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
    cow_frame(g, sp0, 292u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102bbb57u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10cu); in_esi = rd32(sp0 - 0x108u); in_ebp = rd32(sp0 - 0x104u); in_ebx = rd32(sp0 - 0x100u); g->ebp = rd32(sp0 - 0x104u); g->ebx = rd32(sp0 - 0x100u); g->edi = rd32(sp0 - 0x10cu); g->esi = rd32(sp0 - 0x108u); goto E_102bbb57;
    case 0x102bbb5cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10cu); in_esi = rd32(sp0 - 0x108u); in_ebp = rd32(sp0 - 0x104u); in_ebx = rd32(sp0 - 0x100u); g->ebp = rd32(sp0 - 0x104u); g->ebx = rd32(sp0 - 0x100u); g->edi = rd32(sp0 - 0x10cu); g->esi = rd32(sp0 - 0x108u); goto E_102bbb5c;
    case 0x102bbb85u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10cu); in_esi = rd32(sp0 - 0x108u); in_ebp = rd32(sp0 - 0x104u); in_ebx = rd32(sp0 - 0x100u); g->ebp = rd32(sp0 - 0x104u); g->ebx = rd32(sp0 - 0x100u); g->edi = rd32(sp0 - 0x10cu); g->esi = rd32(sp0 - 0x108u); goto E_102bbb85;
    case 0x102bbb92u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10cu); in_esi = rd32(sp0 - 0x108u); in_ebp = rd32(sp0 - 0x104u); in_ebx = rd32(sp0 - 0x100u); g->ebp = rd32(sp0 - 0x104u); g->ebx = rd32(sp0 - 0x100u); g->edi = rd32(sp0 - 0x10cu); g->esi = rd32(sp0 - 0x108u); goto E_102bbb92;
    case 0x102bbb97u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10cu); in_esi = rd32(sp0 - 0x108u); in_ebp = rd32(sp0 - 0x104u); in_ebx = rd32(sp0 - 0x100u); g->ebp = rd32(sp0 - 0x104u); g->ebx = rd32(sp0 - 0x100u); g->edi = rd32(sp0 - 0x10cu); g->esi = rd32(sp0 - 0x108u); goto E_102bbb97;
    case 0x102bbba2u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10cu); in_esi = rd32(sp0 - 0x108u); in_ebp = rd32(sp0 - 0x104u); in_ebx = rd32(sp0 - 0x100u); g->ebp = rd32(sp0 - 0x104u); g->ebx = rd32(sp0 - 0x100u); g->edi = rd32(sp0 - 0x10cu); g->esi = rd32(sp0 - 0x108u); goto E_102bbba2;
    case 0x102bbbb9u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10cu); in_esi = rd32(sp0 - 0x108u); in_ebp = rd32(sp0 - 0x104u); in_ebx = rd32(sp0 - 0x100u); g->ebp = rd32(sp0 - 0x104u); g->ebx = rd32(sp0 - 0x100u); g->edi = rd32(sp0 - 0x10cu); g->esi = rd32(sp0 - 0x108u); goto E_102bbbb9;
    case 0x102bbbc6u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10cu); in_esi = rd32(sp0 - 0x108u); in_ebp = rd32(sp0 - 0x104u); in_ebx = rd32(sp0 - 0x100u); g->ebp = rd32(sp0 - 0x104u); g->ebx = rd32(sp0 - 0x100u); g->edi = rd32(sp0 - 0x10cu); g->esi = rd32(sp0 - 0x108u); goto E_102bbbc6;
    case 0x102bbbd1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10cu); in_esi = rd32(sp0 - 0x108u); in_ebp = rd32(sp0 - 0x104u); in_ebx = rd32(sp0 - 0x100u); loc_fc = rd32(sp0 - 0xfcu); g->ebp = rd32(sp0 - 0x104u); g->ebx = rd32(sp0 - 0x100u); g->edi = rd32(sp0 - 0x10cu); g->esi = rd32(sp0 - 0x108u); goto E_102bbbd1;
    case 0x102bbbdbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102bbbdb;
    case 0x102bbbf9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102bbbf9;
    case 0x102bbc21u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102bbc21;
    case 0x102bbc7eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102bbc7e;
    case 0x102bbc8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102bbc8b;
    case 0x102bbc97u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102bbc97;
    case 0x102bbccbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102bbccb;
    case 0x102bbcd9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102bbcd9;
    case 0x102bbd03u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102bbd03;
    case 0x102bbd11u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102bbd11;
    case 0x102bbd2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_102bbd2e;
    case 0x102bbd35u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_102bbd35;
    case 0x102bbd40u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_102bbd40;
    case 0x102bbd68u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102bbd68;
    case 0x102bbd7au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102bbd7a;
    case 0x102bbd7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102bbd7f;
    case 0x102bbd94u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102bbd94;
    case 0x102bbd99u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102bbd99;
    case 0x102bbdabu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102bbdab;
    case 0x102bbdeau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_fc = rd32(sp0 - 0xfcu); goto E_102bbdea;
    case 0x102bbdfau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102bbdfa;
    case 0x102bbe10u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_102bbe10;
    case 0x102bbe23u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_102bbe23;
    case 0x102bbe54u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102bbe54;
    default: break;
    }
#endif

    COW_AT(102bbb30)
    d1 = (double)rdf32(sp0 + 8u);
    wr32(sp0 - 0x100u, in_ebx);
    wr32(sp0 - 0x104u, in_ebp);
    d2 = (double)rdf32(sp0 + 0xcu);
    wr32(sp0 - 0x108u, in_esi);
    wr32(sp0 - 0x10cu, in_edi);
    if (d1 != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_102bbb92;
    }
    eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(102bbb57)
    if (PARITY(eax >> 8u & 0x44u)) goto L_102bbb85;
    COW_AT(102bbb5c)
    wr32(arg5, rd32(arg4));
    t3 = rd32(arg4 + 4u);
    wr32(arg5 + 4u, t3);
    t4 = rd32(arg4 + 8u);
    wr32(arg5 + 8u, t4);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return;
L_102bbb85: ;
    COW_AT(102bbb85)
    wr32(sp0 + 8u, 0x34000000u);
L_102bbba2: ;
    COW_AT(102bbba2)
    d5 = (double)rdf32(sp0 + 8u);
    d6 = (double)rdf32(sp0 + 0xcu);
    if ((cow_fsw(g, d5, d6, 0u) & 0x4100u) != 0u)
    {
    COW_AT(102bbbc6)
        t8 = rd32(sp0 + 0xcu);
        wr32(sp0 - 0xfcu, t8);
        ecx = self;
        edx = t8;
        loc_fc = t8;
    }
    else
    {
    COW_AT(102bbbb9)
        t7 = rd32(sp0 + 8u);
        wr32(sp0 - 0xfcu, t7);
        ecx = t7;
        edx = in_edx;
        loc_fc = t7;
    }
    COW_AT(102bbbd1)
    wr32(sp0 - 0x110u, loc_fc);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10cu;
    t9 = cow_call_regs(g, COW_IMG(0x102b4470u), loc_fc, g->ecx, g->edx, 1, 1, loc_fc);
    t10 = g->ecx;
    t11 = g->edx;
    eax = t9;
    ecx = t10;
    edx = t11;
    COW_AT(102bbbdb)
    wr32(sp0 - 0xfcu, eax);
    wrf64(sp0 - 0xf8u, (double)(int32_t)eax);
    g->eax = eax;
    d12 = rdf64(COW_IMG(0x1032abc8u));
    fpush(g, d12);
    fpush(g, (double)(int32_t)eax);
    g->esp = sp0 - 0xf0u;
    t13 = cow_cdecl(g, COW_IMG(0x10312cd0u), 7, rd32(sp0 - 0x10cu), rd32(sp0 - 0x108u), rd32(sp0 - 0x104u), rd32(sp0 - 0x100u), eax, cow_dlo((double)(int32_t)eax), cow_dhi((double)(int32_t)eax));
    d14 = cow_take_float(g);
    eax = t13;
    x0 = d14;
    COW_AT(102bbbf9)
    d15 = fr(g, (double)rdf32(sp0 + 8u) * x0);
    wrf32(sp0 + 8u, (float)d15);
    d16 = fr(g, x0 * (double)rdf32(sp0 + 0xcu));
    if (!(d16 < rdf64(COW_IMG(0x1032ab90u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d16, rdf64(COW_IMG(0x1032ab90u)), 1u);
        x0 = d16;
        goto L_102bbd11;
    }
    x0 = d16;
    COW_AT(102bbc21)
    d17 = (double)rdf32(sp0 + 8u);
    t18 = rd32(COW_IMG(0x109f8250u));
    d19 = fr(g, fr(g, d17 + d17) - (double)rdf32(COW_IMG(0x1032961cu)));
    edi = sp0 - 0x90u;
    eax = 0u;
    ecx = 0x24u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wrf32(sp0 + 8u, (float)d19);
    t20 = rd32(arg4);
    t21 = rd32(arg4 + 4u);
    t22 = rd32(COW_IMG(0x109f8254u));
    wrf32(sp0 + 0xcu, (float)fr(g, x0 + x0));
    wr32(sp0 - 0x90u, t20);
    wr32(sp0 - 0x8cu, t21);
    t23 = rd32(arg4 + 8u);
    wr32(sp0 - 0x88u, t23);
    eax = t23;
    ecx = t20;
    edx = t21;
    ebx = 0u;
    ebp = t18;
    esi = t22;
    edi = arg4 + 8u;
L_102bbc7e: ;
    COW_AT(102bbc7e)
    g->edx = edx;
    d24 = rdf64(sp0 - 0xf8u);
    d25 = (double)rdf32(ebp + ebx * 4u);
    fpush(g, d25);
    fpush(g, d24);
    g->esp = sp0 - 0xf0u;
    cow_cdecl(g, COW_IMG(0x10312cd0u), 7, rd32(sp0 - 0x10cu), rd32(sp0 - 0x108u), rd32(sp0 - 0x104u), rd32(sp0 - 0x100u), rd32(sp0 - 0xfcu), rd32(sp0 - 0xf8u), rd32(sp0 - 0xf4u));
    t26 = g->edx;
    d27 = cow_take_float(g);
    edx = t26;
    x0 = d27;
    COW_AT(102bbc8b)
    eax = sp0 - 0x7cu;
    ecx = 1u;
L_102bbc97: ;
    COW_AT(102bbc97)
    d28 = fr(g, fr(g, fr(g, (double)rdf32(ecx * 4u + esi) * (double)rdf32(edi - 8u)) * x0) + (double)rdf32(eax - 8u));
    wrf32(eax - 8u, (float)d28);
    d29 = fr(g, fr(g, fr(g, (double)rdf32(edi - 4u) * (double)rdf32(ecx * 4u + esi)) * x0) + (double)rdf32(eax - 4u));
    wrf32(eax - 4u, (float)d29);
    d30 = fr(g, fr(g, fr(g, (double)rdf32(ecx * 4u + esi) * (double)rdf32(edi)) * x0) + (double)rdf32(eax));
    wrf32(eax, (float)d30);
    if ((int32_t)(ecx + 1u) < 12)
    {
        eax = eax + 0xcu;
        ecx = ecx + 1u;
        goto L_102bbc97;
    }
    eax = eax + 0xcu;
    ecx = ecx + 1u;
    COW_AT(102bbccb)
    if ((int32_t)(ebx + 1u) < 14)
    {
        ebx = ebx + 1u;
        esi = esi + 0x40u;
        edi = edi + 0xcu;
        goto L_102bbc7e;
    }
    COW_AT(102bbcd9)
    wr32(sp0 - 0x110u, arg5);
    wr32(sp0 - 0x114u, sp0 - 0x90u);
    t31 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x118u, t31);
    t32 = rd32(sp0 + 8u);
    wr32(sp0 - 0x11cu, t32);
    wr32(sp0 - 0x120u, arg1);
    g->esp = sp0 - 0x10cu;
    cow_cdecl(g, COW_IMG(0x102bb300u), 5, arg1, t32, t31, sp0 - 0x90u, arg5);
    COW_AT(102bbd03)
    g->ebx = rd32(sp0 - 0x100u);
    g->esi = rd32(sp0 - 0x108u);
    g->edi = rd32(sp0 - 0x10cu);
    g->ebp = rd32(sp0 - 0x104u);
    return;
L_102bbb92: ;
    COW_AT(102bbb92)
    if (!PARITY(eax >> 8u & 0x44u))
    {
    COW_AT(102bbb97)
        wr32(sp0 + 0xcu, 0x34000000u);
    }
    goto L_102bbba2;
L_102bbd11: ;
    COW_AT(102bbd11)
    d33 = (double)rdf32(sp0 + 8u);
    d34 = (double)rdf32(sp0 + 8u);
    if (!(d33 < rdf64(COW_IMG(0x1032ab90u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d33, rdf64(COW_IMG(0x1032ab90u)), 2u);
        x1 = fr(g, d34 + d34);
    COW_AT(102bbd35)
        ebx = 1u;
        x1 = fr(g, x1 - (double)rdf32(COW_IMG(0x1032961cu)));
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d33, rdf64(COW_IMG(0x1032ab90u)), 2u);
        x1 = fr(g, d34 + d34);
    COW_AT(102bbd2e)
        ebx = 2u;
    }
    COW_AT(102bbd40)
    wrf32(sp0 + 8u, (float)x1);
    wr32(sp0 - 0x110u, sp0 - 0xe0u);
    t35 = rd32(sp0 + 8u);
    wr32(sp0 - 0x114u, t35);
    d36 = fr(g, fr(g, x0 + x0) - (double)rdf32(COW_IMG(0x1032961cu)));
    wrf32(sp0 + 0xcu, (float)d36);
    g->edx = t35;
    g->esp = sp0 - 0x10cu;
    cow_call_regs(g, COW_IMG(0x102bc2d0u), eax, g->ecx, g->edx, 1, 2, t35, sp0 - 0xe0u);
    t37 = g->edx;
    edx = t37;
    COW_AT(102bbd68)
    wr32(sp0 - 0x118u, sp0 - 0xf0u);
    t38 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x11cu, t38);
    g->esp = sp0 - 0x114u;
    cow_call_regs(g, COW_IMG(0x102bc2d0u), sp0 - 0xf0u, g->ecx, g->edx, 1, 2, t38, sp0 - 0xf0u);
    COW_AT(102bbd7a)
    ecx = 0u;
L_102bbd7f: ;
    COW_AT(102bbd7f)
    if ((int32_t)(ecx & 0x80000003u) >= 0)
    {
        eax = (uint32_t)((int32_t)(ecx + ((uint32_t)((int32_t)ecx >> 0x1fu) & 3u)) >> 2u);
        edx = ecx & 0x80000003u;
    }
    else
    {
        eax = (uint32_t)((int32_t)(ecx + ((uint32_t)((int32_t)ecx >> 0x1fu) & 3u)) >> 2u);
        edx = ecx & 0x80000003u;
    COW_AT(102bbd94)
        edx = (edx - 1u | 0xfffffffcu) + 1u;
    }
    COW_AT(102bbd99)
    d39 = fr(g, (double)rdf32(eax * 4u + sp0 - 0xf0u) * (double)rdf32(edx * 4u + sp0 - 0xe0u));
    wrf32(ecx * 4u + sp0 - 0xd0u, (float)d39);
    if ((int32_t)(ecx + 1u) < 16)
    {
        ecx = ecx + 1u;
        goto L_102bbd7f;
    }
    COW_AT(102bbdab)
    wr32(arg5, rd32(arg4));
    t40 = rd32(arg4 + 4u);
    wr32(arg5 + 4u, t40);
    t41 = rd32(arg4 + 8u);
    wr32(arg5 + 8u, t41);
    wr32(sp0 - 0xfcu, rd32(COW_IMG(0x109f8250u)));
    ecx = t41;
    edx = rd32(COW_IMG(0x109f8250u));
    ebp = 1u;
    edi = ebx * 0x380u + 0x40u;
    ebx = arg4 + 0x14u;
    loc_fc = rd32(COW_IMG(0x109f8250u));
L_102bbdea: ;
    COW_AT(102bbdea)
    d42 = rdf64(sp0 - 0xf8u);
    d43 = (double)rdf32(ebp * 4u + loc_fc);
    fpush(g, d43);
    fpush(g, d42);
    g->esp = sp0 - 0xf0u;
    cow_cdecl(g, COW_IMG(0x10312cd0u), 7, rd32(sp0 - 0x10cu), rd32(sp0 - 0x108u), rd32(sp0 - 0x104u), rd32(sp0 - 0x100u), loc_fc, rd32(sp0 - 0xf8u), rd32(sp0 - 0xf4u));
    d44 = cow_take_float(g);
    x0 = d44;
    COW_AT(102bbdfa)
    eax = 0u;
    ecx = edi + rd32(COW_IMG(0x109f8254u)) - (sp0 - 0xd0u);
    x1 = (double)rdf32(COW_IMG(0x103295d8u));
L_102bbe10: ;
    COW_AT(102bbe10)
    if ((int32_t)(eax + 1u) < 16)
    {
        x1 = fr(g, x1 + fr(g, (double)rdf32(eax * 4u + ecx + sp0 - 0xd0u) * (double)rdf32(eax * 4u + sp0 - 0xd0u)));
        eax = eax + 1u;
        goto L_102bbe10;
    }
    edx = eax * 4u + ecx;
    x1 = fr(g, x1 + fr(g, (double)rdf32(eax * 4u + ecx + sp0 - 0xd0u) * (double)rdf32(eax * 4u + sp0 - 0xd0u)));
    COW_AT(102bbe23)
    d45 = fr(g, fr(g, fr(g, x1 * (double)rdf32(ebx - 8u)) * x0) + (double)rdf32(arg5));
    wrf32(arg5, (float)d45);
    d46 = fr(g, fr(g, fr(g, x1 * (double)rdf32(ebx - 4u)) * x0) + (double)rdf32(arg5 + 4u));
    wrf32(arg5 + 4u, (float)d46);
    d47 = fr(g, fr(g, fr(g, x1 * (double)rdf32(ebx)) * x0) + (double)rdf32(arg5 + 8u));
    wrf32(arg5 + 8u, (float)d47);
    if ((int32_t)(ebp + 1u) < 14)
    {
        ebx = ebx + 0xcu;
        ebp = ebp + 1u;
        edi = edi + 0x40u;
        loc_fc = rd32(sp0 - 0xfcu);
        goto L_102bbdea;
    }
    COW_AT(102bbe54)
    g->ebx = rd32(sp0 - 0x100u);
    g->esi = rd32(sp0 - 0x108u);
    g->edi = rd32(sp0 - 0x10cu);
    g->ebp = rd32(sp0 - 0x104u);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102bbb30(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102bbb57u:
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
        in_edi = rd32(sp0 - 0x10cu);
        in_esi = rd32(sp0 - 0x108u);
        in_ebp = rd32(sp0 - 0x104u);
        in_ebx = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0x10cu;
        (void)sp0;
        return 1;
    }
    case 0x102bbb5cu:
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
        in_edi = rd32(sp0 - 0x10cu);
        in_esi = rd32(sp0 - 0x108u);
        in_ebp = rd32(sp0 - 0x104u);
        in_ebx = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0x10cu;
        (void)sp0;
        return 1;
    }
    case 0x102bbb85u:
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
        in_edi = rd32(sp0 - 0x10cu);
        in_esi = rd32(sp0 - 0x108u);
        in_ebp = rd32(sp0 - 0x104u);
        in_ebx = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0x10cu;
        (void)sp0;
        return 1;
    }
    case 0x102bbb92u:
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
        in_edi = rd32(sp0 - 0x10cu);
        in_esi = rd32(sp0 - 0x108u);
        in_ebp = rd32(sp0 - 0x104u);
        in_ebx = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0x10cu;
        (void)sp0;
        return 1;
    }
    case 0x102bbb97u:
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
        in_edi = rd32(sp0 - 0x10cu);
        in_esi = rd32(sp0 - 0x108u);
        in_ebp = rd32(sp0 - 0x104u);
        in_ebx = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0x10cu;
        (void)sp0;
        return 1;
    }
    case 0x102bbba2u:
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
        in_edi = rd32(sp0 - 0x10cu);
        in_esi = rd32(sp0 - 0x108u);
        in_ebp = rd32(sp0 - 0x104u);
        in_ebx = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0x10cu;
        (void)sp0;
        return 1;
    }
    case 0x102bbbb9u:
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
        in_edi = rd32(sp0 - 0x10cu);
        in_esi = rd32(sp0 - 0x108u);
        in_ebp = rd32(sp0 - 0x104u);
        in_ebx = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0x10cu;
        (void)sp0;
        return 1;
    }
    case 0x102bbbc6u:
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
        in_edi = rd32(sp0 - 0x10cu);
        in_esi = rd32(sp0 - 0x108u);
        in_ebp = rd32(sp0 - 0x104u);
        in_ebx = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0x10cu;
        (void)sp0;
        return 1;
    }
    case 0x102bbbd1u:
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
        uint32_t loc_fc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10cu);
        in_esi = rd32(sp0 - 0x108u);
        in_ebp = rd32(sp0 - 0x104u);
        in_ebx = rd32(sp0 - 0x100u);
        loc_fc = rd32(sp0 - 0xfcu);
        g->esp = sp0 - 0x10cu;
        (void)sp0;
        return 1;
    }
    case 0x102bbbdbu:
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
        (void)sp0;
        return 1;
    }
    case 0x102bbbf9u:
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
        g->esp = sp0 - 0x10cu;
        (void)sp0;
        return 1;
    }
    case 0x102bbc21u:
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
        g->esp = sp0 - 0x10cu;
        (void)sp0;
        return 1;
    }
    case 0x102bbc7eu:
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
    case 0x102bbc8bu:
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
        g->esp = sp0 - 0x10cu;
        (void)sp0;
        return 1;
    }
    case 0x102bbc97u:
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
        g->esp = sp0 - 0x10cu;
        (void)sp0;
        return 1;
    }
    case 0x102bbccbu:
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
        g->esp = sp0 - 0x10cu;
        (void)sp0;
        return 1;
    }
    case 0x102bbcd9u:
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
    case 0x102bbd03u:
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
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x114u, sp0 - 0x90u);
        (void)sp0;
        return 1;
    }
    case 0x102bbd11u:
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
        g->esp = sp0 - 0x10cu;
        (void)sp0;
        return 1;
    }
    case 0x102bbd2eu:
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
        g->esp = sp0 - 0x10cu;
        (void)sp0;
        return 1;
    }
    case 0x102bbd35u:
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
        g->esp = sp0 - 0x10cu;
        (void)sp0;
        return 1;
    }
    case 0x102bbd40u:
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
        g->esp = sp0 - 0x10cu;
        (void)sp0;
        return 1;
    }
    case 0x102bbd68u:
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
        g->esp = sp0 - 0x114u;
        wr32(sp0 - 0x110u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x102bbd7au:
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
        wr32(sp0 - 0x118u, sp0 - 0xf0u);
        wr32(sp0 - 0x110u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x102bbd7fu:
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
        wr32(sp0 - 0x118u, sp0 - 0xf0u);
        wr32(sp0 - 0x110u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x102bbd94u:
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
        wr32(sp0 - 0x118u, sp0 - 0xf0u);
        wr32(sp0 - 0x110u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x102bbd99u:
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
        wr32(sp0 - 0x118u, sp0 - 0xf0u);
        wr32(sp0 - 0x110u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x102bbdabu:
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
        wr32(sp0 - 0x118u, sp0 - 0xf0u);
        wr32(sp0 - 0x110u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x102bbdeau:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_fc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_fc = rd32(sp0 - 0xfcu);
        g->esp = sp0 - 0x10cu;
        g->esi = arg5;
        wr32(sp0 - 0x118u, sp0 - 0xf0u);
        wr32(sp0 - 0x110u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x102bbdfau:
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
        g->esp = sp0 - 0x10cu;
        g->esi = arg5;
        wr32(sp0 - 0x118u, sp0 - 0xf0u);
        wr32(sp0 - 0x110u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x102bbe10u:
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
        g->esp = sp0 - 0x10cu;
        g->esi = arg5;
        wr32(sp0 - 0x118u, sp0 - 0xf0u);
        wr32(sp0 - 0x110u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x102bbe23u:
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
        g->esp = sp0 - 0x10cu;
        g->esi = arg5;
        wr32(sp0 - 0x118u, sp0 - 0xf0u);
        wr32(sp0 - 0x110u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x102bbe54u:
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
        wr32(sp0 - 0x118u, sp0 - 0xf0u);
        wr32(sp0 - 0x110u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102bbb30(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102bbb30(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
