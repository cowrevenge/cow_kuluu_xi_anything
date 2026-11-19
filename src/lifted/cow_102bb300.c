/* f_0x102bb300 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_102bb300(Guest* g)
{
    double d10;
    double d15;
    double d20;
    double d21;
    double d22;
    double d23;
    double d26;
    double d29;
    double d3;
    double d31;
    double d32;
    double d33;
    double d34;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    double loc_1c_f;
    double loc_20_f;
    double loc_24_f;
    double loc_4c_d;
    uint32_t t1;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t24;
    uint32_t t25;
    uint32_t t27;
    uint32_t t28;
    uint32_t t30;
    uint32_t t4;
    double x0;
    double x1;
    double x2;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 104u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102bb313u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 0x50u); g->ebx = rd32(sp0 - 0x50u); goto E_102bb313;
    case 0x102bb329u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 0x50u); g->ebx = rd32(sp0 - 0x50u); goto E_102bb329;
    case 0x102bb33eu: ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 0x50u); g->ebx = rd32(sp0 - 0x50u); goto E_102bb33e;
    case 0x102bb36cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 0x50u); g->ebx = rd32(sp0 - 0x50u); goto E_102bb36c;
    case 0x102bb371u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 0x50u); g->ebx = rd32(sp0 - 0x50u); goto E_102bb371;
    case 0x102bb388u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x5cu); in_esi = rd32(sp0 - 0x58u); in_ebp = rd32(sp0 - 0x54u); in_ebx = rd32(sp0 - 0x50u); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); g->ebp = rd32(sp0 - 0x54u); g->ebx = rd32(sp0 - 0x50u); g->edi = rd32(sp0 - 0x5cu); g->esi = rd32(sp0 - 0x58u); goto E_102bb388;
    case 0x102bb392u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x5cu); in_esi = rd32(sp0 - 0x58u); in_ebp = rd32(sp0 - 0x54u); in_ebx = rd32(sp0 - 0x50u); g->ebp = rd32(sp0 - 0x54u); g->ebx = rd32(sp0 - 0x50u); g->edi = rd32(sp0 - 0x5cu); g->esi = rd32(sp0 - 0x58u); goto E_102bb392;
    case 0x102bb3c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x5cu); in_esi = rd32(sp0 - 0x58u); in_ebp = rd32(sp0 - 0x54u); in_ebx = rd32(sp0 - 0x50u); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); g->ebp = rd32(sp0 - 0x54u); g->ebx = rd32(sp0 - 0x50u); g->edi = rd32(sp0 - 0x5cu); g->esi = rd32(sp0 - 0x58u); goto E_102bb3c0;
    case 0x102bb3c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x5cu); in_esi = rd32(sp0 - 0x58u); in_ebp = rd32(sp0 - 0x54u); in_ebx = rd32(sp0 - 0x50u); loc_24_f = rdf32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); g->ebp = rd32(sp0 - 0x54u); g->ebx = rd32(sp0 - 0x50u); g->edi = rd32(sp0 - 0x5cu); g->esi = rd32(sp0 - 0x58u); goto E_102bb3c9;
    case 0x102bb3d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102bb3d3;
    case 0x102bb3ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102bb3dd;
    case 0x102bb3fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_102bb3fd;
    case 0x102bb410u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102bb410;
    case 0x102bb441u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_4c_d = rdf64(sp0 - 0x4cu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102bb441;
    case 0x102bb44cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_102bb44c;
    case 0x102bb459u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_102bb459;
    case 0x102bb46au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_102bb46a;
    case 0x102bb4a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102bb4a0;
    default: break;
    }
#endif

    COW_AT(102bb300)
    wr32(sp0 - 0x50u, in_ebx);
    wr32(sp0 - 0x54u, sp0 - 0x44u);
    t1 = rd32(sp0 + 8u);
    wr32(sp0 - 0x58u, t1);
    g->esp = sp0 - 0x50u;
    t2 = cow_call_regs(g, COW_IMG(0x102bc2d0u), sp0 - 0x44u, g->ecx, g->edx, 1, 2, t1, sp0 - 0x44u);
    eax = t2;
    COW_AT(102bb313)
    d3 = (double)rdf32(sp0 + 0xcu);
    if (d3 != (double)rdf32(COW_IMG(0x103295d8u))) goto L_102bb371;
    COW_AT(102bb329)
    t4 = rd32(sp0 + 0x10u);
    wr32(arg5, 0u);
    wr32(arg5 + 4u, 0u);
    wr32(arg5 + 8u, 0u);
    ecx = t4 + 8u;
    edx = 0u;
L_102bb33e: ;
    COW_AT(102bb33e)
    d5 = fr(g, fr(g, (double)rdf32(ecx - 8u) * (double)rdf32(edx * 4u + sp0 - 0x44u)) + (double)rdf32(arg5));
    wrf32(arg5, (float)d5);
    d6 = fr(g, fr(g, (double)rdf32(ecx - 4u) * (double)rdf32(edx * 4u + sp0 - 0x44u)) + (double)rdf32(arg5 + 4u));
    wrf32(arg5 + 4u, (float)d6);
    d7 = fr(g, fr(g, (double)rdf32(ecx) * (double)rdf32(edx * 4u + sp0 - 0x44u)) + (double)rdf32(arg5 + 8u));
    wrf32(arg5 + 8u, (float)d7);
    if ((int32_t)(edx + 1u) < 4)
    {
        ecx = ecx + 0xcu;
        edx = edx + 1u;
        goto L_102bb33e;
    }
    COW_AT(102bb36c)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return;
L_102bb371: ;
    COW_AT(102bb371)
    wr32(sp0 - 0x54u, in_ebp);
    wr32(sp0 - 0x58u, in_esi);
    wr32(sp0 - 0x5cu, in_edi);
    eax = sp0 - 0x1cu;
    ecx = rd32(sp0 + 0x10u) + 8u;
    esi = sp0 - 0x20u;
    edi = 3u;
    loc_24_f = (double)rdf32(sp0 - 0x24u);
    loc_20_f = (double)rdf32(sp0 - 0x20u);
    loc_1c_f = (double)rdf32(sp0 - 0x1cu);
L_102bb388: ;
    COW_AT(102bb388)
    wr32(esi - 4u, 0u);
    wr32(esi, 0u);
    wr32(esi + 4u, 0u);
    edx = 0u;
L_102bb392: ;
    COW_AT(102bb392)
    d8 = fr(g, fr(g, (double)rdf32(ecx - 8u) * (double)rdf32(edx * 4u + sp0 - 0x44u)) + (double)rdf32(eax - 8u));
    wrf32(eax - 8u, (float)d8);
    d9 = fr(g, fr(g, (double)rdf32(ecx - 4u) * (double)rdf32(edx * 4u + sp0 - 0x44u)) + (double)rdf32(eax - 4u));
    wrf32(eax - 4u, (float)d9);
    d10 = fr(g, fr(g, (double)rdf32(ecx) * (double)rdf32(edx * 4u + sp0 - 0x44u)) + (double)rdf32(eax));
    wrf32(eax, (float)d10);
    if ((int32_t)(edx + 1u) < 4)
    {
        ecx = ecx + 0xcu;
        edx = edx + 1u;
        goto L_102bb392;
    }
    ecx = ecx + 0xcu;
    edx = edx + 1u;
    loc_24_f = (double)rdf32(sp0 - 0x24u);
    loc_20_f = (double)rdf32(sp0 - 0x20u);
    loc_1c_f = (double)rdf32(sp0 - 0x1cu);
    COW_AT(102bb3c0)
    if (edi != 1u)
    {
        eax = eax + 0xcu;
        esi = esi + 0xcu;
        edi = edi - 1u;
        goto L_102bb388;
    }
    COW_AT(102bb3c9)
    wr32(sp0 - 0x60u, sp0 - 0x24u);
    g->eax = sp0 - 0x24u;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t11 = cow_cdecl(g, COW_IMG(0x102bb4b0u), 1, sp0 - 0x24u);
    t12 = g->edx;
    eax = t11;
    edx = t12;
    COW_AT(102bb3d3)
    wr32(sp0 - 0x64u, arg3);
    g->ecx = arg3;
    g->esp = sp0 - 0x60u;
    t13 = cow_call_regs(g, COW_IMG(0x102b4470u), eax, g->ecx, g->edx, 1, 1, arg3);
    t14 = g->ecx;
    eax = t13;
    ecx = t14;
    COW_AT(102bb3dd)
    d15 = rdf64(COW_IMG(0x1032abc8u));
    wr32(sp0 + 8u, eax);
    wr32(sp0 + 0x10u, eax + 1u);
    wr32(sp0 - 0x60u, sp0 - 0x34u);
    g->eax = eax + 1u;
    g->ecx = ecx;
    g->edx = sp0 - 0x34u;
    t16 = rd32(sp0 + 0x10u);
    fpush(g, d15);
    fpush(g, (double)(int32_t)t16);
    g->esp = sp0 - 0x44u;
    t17 = cow_cdecl(g, COW_IMG(0x10312cd0u), 7, sp0 - 0x34u, rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u));
    t18 = g->ecx;
    t19 = g->edx;
    d20 = cow_take_float(g);
    d21 = cow_take_float(g);
    eax = t17;
    ecx = t18;
    edx = t19;
    x1 = d20;
    x0 = d21;
    COW_AT(102bb3fd)
    d22 = fr(g, x1 * (double)rdf32(sp0 + 0xcu));
    wr32(sp0 - 0x64u, ecx);
    d23 = fr(g, d22 - (double)rdf32(COW_IMG(0x1032961cu)));
    wrf32(sp0 - 0x64u, (float)(double)(float)d23);
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    cow_call_regs(g, COW_IMG(0x102bc2d0u), eax, g->ecx, g->edx, 1, 2, cow_f2bits((double)(float)d23), sp0 - 0x34u);
    t24 = g->edx;
    edx = t24;
    COW_AT(102bb410)
    t25 = rd32(sp0 - 0x20u);
    d26 = (double)rdf32(sp0 - 0x24u);
    wrf32(arg5, (float)d26);
    t27 = rd32(sp0 + 8u);
    wr32(arg5 + 4u, t25);
    t28 = rd32(sp0 - 0x1cu);
    wr32(arg5 + 8u, t28);
    wrf64(sp0 - 0x4cu, (double)(int32_t)t27);
    eax = t25;
    ecx = t28;
    ebx = COW_IMG(0x103c7b28u);
    ebp = COW_IMG(0x103c7b44u);
    edi = sp0 - 0x10u;
    loc_4c_d = (double)(int32_t)t27;
L_102bb441: ;
    COW_AT(102bb441)
    g->edx = edx;
    d29 = (double)rdf32(ebx);
    fpush(g, d29);
    fpush(g, loc_4c_d);
    g->esp = sp0 - 0x40u;
    cow_cdecl(g, COW_IMG(0x10312cd0u), 7, rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), cow_dlo(loc_4c_d), cow_dhi(loc_4c_d), rd32(sp0 - 0x44u));
    t30 = g->edx;
    d31 = cow_take_float(g);
    edx = t30;
    x1 = d31;
    COW_AT(102bb44c)
    eax = 1u;
    ecx = ebp;
    x2 = (double)rdf32(COW_IMG(0x103295d8u));
L_102bb459: ;
    COW_AT(102bb459)
    if ((int32_t)(eax + 1u) < 4)
    {
        x2 = fr(g, x2 + fr(g, (double)rdf32(eax * 4u + sp0 - 0x34u) * (double)rdf32(ecx)));
        eax = eax + 1u;
        ecx = ecx + 4u;
        goto L_102bb459;
    }
    x2 = fr(g, x2 + fr(g, (double)rdf32(eax * 4u + sp0 - 0x34u) * (double)rdf32(ecx)));
    eax = eax + 1u;
    ecx = ecx + 4u;
    COW_AT(102bb46a)
    d32 = fr(g, fr(g, fr(g, x2 * (double)rdf32(edi - 8u)) * x1) + (double)rdf32(arg5));
    wrf32(arg5, (float)d32);
    d33 = fr(g, fr(g, fr(g, x2 * (double)rdf32(edi - 4u)) * x1) + (double)rdf32(arg5 + 4u));
    wrf32(arg5 + 4u, (float)d33);
    d34 = fr(g, fr(g, fr(g, x2 * x1) * (double)rdf32(edi)) + (double)rdf32(arg5 + 8u));
    wrf32(arg5 + 8u, (float)d34);
    if ((int32_t)(ebx + 4u) < (int32_t)COW_IMG(0x103c7b30u))
    {
        ebx = ebx + 4u;
        ebp = ebp + 0x10u;
        edi = edi + 0xcu;
        loc_4c_d = rdf64(sp0 - 0x4cu);
        goto L_102bb441;
    }
    COW_AT(102bb4a0)
    g->ebx = rd32(sp0 - 0x50u);
    g->esi = rd32(sp0 - 0x58u);
    g->edi = rd32(sp0 - 0x5cu);
    g->ebp = rd32(sp0 - 0x54u);
    fpush(g, x0);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102bb300(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102bb313u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x54u, sp0 - 0x44u);
        (void)sp0;
        return 1;
    }
    case 0x102bb329u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x50u;
        g->ebx = 0u;
        wr32(sp0 - 0x54u, sp0 - 0x44u);
        (void)sp0;
        return 1;
    }
    case 0x102bb33eu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x50u;
        g->eax = arg5;
        wr32(sp0 - 0x54u, sp0 - 0x44u);
        (void)sp0;
        return 1;
    }
    case 0x102bb36cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x54u, sp0 - 0x44u);
        (void)sp0;
        return 1;
    }
    case 0x102bb371u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x50u;
        g->ebx = 0u;
        wr32(sp0 - 0x54u, sp0 - 0x44u);
        (void)sp0;
        return 1;
    }
    case 0x102bb388u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x5cu);
        in_esi = rd32(sp0 - 0x58u);
        in_ebp = rd32(sp0 - 0x54u);
        in_ebx = rd32(sp0 - 0x50u);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102bb392u:
    {
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x5cu);
        in_esi = rd32(sp0 - 0x58u);
        in_ebp = rd32(sp0 - 0x54u);
        in_ebx = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102bb3c0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x5cu);
        in_esi = rd32(sp0 - 0x58u);
        in_ebp = rd32(sp0 - 0x54u);
        in_ebx = rd32(sp0 - 0x50u);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        g->esp = sp0 - 0x5cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102bb3c9u:
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
        double loc_1c_f;
        double loc_20_f;
        double loc_24_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x5cu);
        in_esi = rd32(sp0 - 0x58u);
        in_ebp = rd32(sp0 - 0x54u);
        in_ebx = rd32(sp0 - 0x50u);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x102bb3d3u:
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
        g->esp = sp0 - 0x60u;
        wr32(sp0 - 0x60u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x102bb3ddu:
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
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x60u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x102bb3fdu:
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
        g->esp = sp0 - 0x60u;
        wr32(sp0 - 0x60u, sp0 - 0x34u);
        (void)sp0;
        return 1;
    }
    case 0x102bb410u:
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
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x60u, sp0 - 0x34u);
        (void)sp0;
        return 1;
    }
    case 0x102bb441u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_4c_d;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_4c_d = rdf64(sp0 - 0x4cu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x5cu;
        g->esi = arg5;
        wr32(sp0 - 0x60u, sp0 - 0x34u);
        (void)sp0;
        return 1;
    }
    case 0x102bb44cu:
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
        g->esp = sp0 - 0x5cu;
        g->esi = arg5;
        wr32(sp0 - 0x60u, sp0 - 0x34u);
        (void)sp0;
        return 1;
    }
    case 0x102bb459u:
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
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp0 - 0x5cu;
        g->esi = arg5;
        wr32(sp0 - 0x60u, sp0 - 0x34u);
        (void)sp0;
        return 1;
    }
    case 0x102bb46au:
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
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp0 - 0x5cu;
        g->esi = arg5;
        wr32(sp0 - 0x60u, sp0 - 0x34u);
        (void)sp0;
        return 1;
    }
    case 0x102bb4a0u:
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
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x60u, sp0 - 0x34u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102bb300(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102bb300(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
