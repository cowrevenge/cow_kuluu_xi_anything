/* f_0x10283440 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10283440(Guest* g)
{
    double d1;
    double d10;
    double d17;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_b0;
    uint32_t loc_b4;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t18;
    uint32_t t19;
    uint32_t t20;
    uint32_t t21;
    uint32_t t8;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 192u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102834e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; loc_b0 = rd32(sp0 - 0xb0u); goto E_102834e5;
    case 0x102834f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; loc_b0 = rd32(sp0 - 0xb0u); goto E_102834f7;
    case 0x10283500u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; loc_b0 = rd32(sp0 - 0xb0u); goto E_10283500;
    case 0x10283508u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; loc_b0 = rd32(sp0 - 0xb0u); goto E_10283508;
    case 0x1028353au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); goto E_1028353a;
    case 0x1028354du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_1028354d;
    case 0x1028355fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_1028355f;
    case 0x10283563u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_10283563;
    case 0x1028356cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_1028356c;
    case 0x10283570u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_10283570;
    case 0x10283585u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); goto E_10283585;
    case 0x10283587u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_10283587;
    case 0x1028358du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_1028358d;
    case 0x102835a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); goto E_102835a0;
    case 0x102835b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); goto E_102835b5;
    case 0x102835b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_102835b7;
    case 0x102835bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); goto E_102835bc;
    case 0x102835cau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); goto E_102835ca;
    case 0x102835cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); goto E_102835cd;
    case 0x102835e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); goto E_102835e1;
    case 0x102835f6u: eax = g->eax; edx = g->edx; esi = g->esi; in_edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); goto E_102835f6;
    case 0x10283607u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); goto E_10283607;
    case 0x1028361bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_1028361b;
    case 0x10283665u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_10283665;
    case 0x10283685u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_10283685;
    case 0x1028369du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_1028369d;
    case 0x102836b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_102836b9;
    case 0x102836bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); goto E_102836bb;
    case 0x102836ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); goto E_102836cc;
    case 0x102836d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; loc_b4 = rd32(sp0 - 0xb4u); goto E_102836d6;
    default: break;
    }
#endif

    COW_AT(10283440)
    wr32(sp0 - 0xb0u, in_edi);
    edi = sp0 - 0xacu;
    eax = 0u;
    ecx = 0x11u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    d1 = fr(g, (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x758u) * (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x768u));
    wrf32(sp0 - 0x7cu, (float)(double)(float)d1);
    d2 = fr(g, (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x75cu) * (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x768u));
    wrf32(sp0 - 0x78u, (float)(double)(float)d2);
    d3 = fr(g, (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x760u) * (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x768u));
    wrf32(sp0 - 0x74u, (float)(double)(float)d3);
    d4 = fr(g, (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x764u) * (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x768u));
    wrf32(sp0 - 0x70u, (float)(double)(float)d4);
    d5 = fr(g, (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x76cu) * (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x758u));
    wrf32(sp0 - 0xacu, (float)(double)(float)d5);
    d6 = fr(g, (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x76cu) * (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x75cu));
    wrf32(sp0 - 0xa8u, (float)(double)(float)d6);
    d7 = fr(g, (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x76cu) * (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x760u));
    wrf32(sp0 - 0xa4u, (float)(double)(float)d7);
    t8 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x764u);
    wr32(sp0 - 0xa0u, t8);
    d9 = (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x14u);
    if (d9 < rdf64(COW_IMG(0x10340b68u)))
    {
        ecx = rd32(COW_IMG(0x1099d200u));
        goto L_10283500;
    }
    eax = (t8 & 0xffff0000u) | (uint16_t)cow_fsw(g, d9, rdf64(COW_IMG(0x10340b68u)), 0u);
    ecx = rd32(COW_IMG(0x1099d200u));
    COW_AT(102834e5)
    d10 = (double)rdf32(ecx + 0x14u);
    if ((cow_fsw(g, d10, rdf64(COW_IMG(0x10340b60u)), 0u) & 0x4100u) == 0u) goto L_10283500;
    COW_AT(102834f7)
    t11 = rd32(ecx + 0x14u);
    wr32(sp0 - 0x6cu, t11);
    ecx = t11;
L_10283508: ;
    COW_AT(10283508)
    wr32(sp0 - 0x8cu, 0u);
    wr32(sp0 - 0x88u, 0u);
    wr32(sp0 - 0x84u, 0u);
    wr32(sp0 - 0x80u, 0u);
    wr32(sp0 - 0xb0u, 0u);
    wr32(sp0 - 0xb4u, 0x1du);
    wr32(sp0 - 0xb8u, rd32(COW_IMG(0x1066941cu)));
    g->esp = sp0 - 0xacu;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0xc8u), ecx, 3, rd32(COW_IMG(0x1066941cu)), 0x1du, 0u);
    COW_AT(1028353a)
    wr32(sp0 - 0xb0u, sp0 - 0xacu);
    wr32(sp0 - 0xb4u, rd32(COW_IMG(0x1066941cu)));
    g->edx = sp0 - 0xacu;
    g->esp = sp0 - 0xacu;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0xa8u), rd32(rd32(COW_IMG(0x1066941cu))), 2, rd32(COW_IMG(0x1066941cu)), sp0 - 0xacu);
    t12 = g->edx;
    edx = t12;
    COW_AT(1028354d)
    t13 = rd32(rd32(COW_IMG(0x1099d200u)) + 0xa30u);
    if ((t13 & 8u) == 0u)
    {
        eax = t13;
        ecx = t13 & 8u;
        goto L_1028356c;
    }
    eax = t13;
    ecx = t13 & 8u;
    COW_AT(1028355f)
    if ((eax & 2u) != 0u) goto L_1028356c;
    COW_AT(10283563)
    wr32(sp0 - 0xb0u, 1u);
    wr32(sp0 - 0xb4u, 0x94u);
    loc_b0 = 1u;
    loc_b4 = 0x94u;
L_102835bc: ;
    COW_AT(102835bc)
    wr32(sp0 - 0xb8u, rd32(COW_IMG(0x1066941cu)));
    g->esp = sp0 - 0xacu;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0xc8u), rd32(rd32(COW_IMG(0x1066941cu))), 3, rd32(COW_IMG(0x1066941cu)), loc_b4, loc_b0);
L_102835ca: ;
    COW_AT(102835ca)
    wr32(sp0 - 0xb0u, in_esi);
    esi = 0u;
    loc_b0 = in_esi;
L_102835cd: ;
    COW_AT(102835cd)
    if (rd32(esi * 4u + rd32(COW_IMG(0x1099d200u)) + 0x854u) == 0u)
    {
        ecx = rd32(esi * 4u + rd32(COW_IMG(0x1099d200u)) + 0x854u);
        goto L_102836bb;
    }
    eax = rd32(COW_IMG(0x1099d200u));
    COW_AT(102835e1)
    if ((rd32(eax + 0xa20u) & 0x40000u) != 0u)
    {
        ecx = 0u;
        goto L_102836bb;
    }
    COW_AT(102835f6)
    wr32(sp0 - 0xb4u, 1u);
    wr32(sp0 - 0xb8u, esi);
    wr32(sp0 - 0xbcu, rd32(COW_IMG(0x1066941cu)));
    g->esp = sp0 - 0xb0u;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0xb8u), 0u, 3, rd32(COW_IMG(0x1066941cu)), esi, 1u);
    COW_AT(10283607)
    wr32(sp0 - 0xb4u, sp0 - 0x68u);
    wr32(sp0 - 0xb8u, esi);
    wr32(sp0 - 0xbcu, rd32(COW_IMG(0x1066941cu)));
    g->esp = sp0 - 0xb0u;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0xb4u), rd32(rd32(COW_IMG(0x1066941cu))), 3, rd32(COW_IMG(0x1066941cu)), esi, sp0 - 0x68u);
    COW_AT(1028361b)
    wr32(sp0 - 0x44u, 0u);
    wr32(sp0 - 0x40u, 0u);
    wr32(sp0 - 0x3cu, 0u);
    t16 = rd32(esi * 0xcu + rd32(COW_IMG(0x1099d200u)) + 0x794u);
    wr32(sp0 - 0x64u, t16);
    d17 = (double)(float)(double)rdf32(esi * 0xcu + rd32(COW_IMG(0x1099d200u)) + 0x798u);
    wrf32(sp0 - 0x60u, (float)d17);
    t18 = rd32(esi * 0xcu + rd32(COW_IMG(0x1099d200u)) + 0x79cu);
    wr32(sp0 - 0x5cu, t18);
    if (esi != 0u)
    {
    COW_AT(10283685)
        wr32(sp0 - 0x54u, 0u);
        wr32(sp0 - 0x50u, 0u);
        wr32(sp0 - 0x4cu, 0u);
    }
    else
    {
        ecx = rd32(COW_IMG(0x1099d200u));
    COW_AT(10283665)
        t19 = rd32(ecx + 0x794u);
        wr32(sp0 - 0x54u, t19);
        t20 = rd32(ecx + 0x798u);
        wr32(sp0 - 0x50u, t20);
        t21 = rd32(ecx + 0x79cu);
        wr32(sp0 - 0x4cu, t21);
    }
    COW_AT(1028369d)
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0xb4u, sp0 - 0x68u);
    wr32(sp0 - 0xb8u, esi);
    wr32(sp0 - 0xbcu, rd32(COW_IMG(0x1066941cu)));
    g->esp = sp0 - 0xb0u;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0xb0u), sp0 - 0x68u, 3, rd32(COW_IMG(0x1066941cu)), esi, sp0 - 0x68u);
    COW_AT(102836b9)
L_102836cc: ;
    COW_AT(102836cc)
    if ((int32_t)(esi + 1u) < 4)
    {
        esi = esi + 1u;
        loc_b0 = rd32(sp0 - 0xb0u);
        goto L_102835cd;
    }
    COW_AT(102836d6)
    wr32(COW_IMG(0x109a2720u), 0u);
    g->esi = rd32(sp0 - 0xb0u);
    g->edi = in_edi;
    return;
L_10283500: ;
    COW_AT(10283500)
    wr32(sp0 - 0x6cu, 0u);
    goto L_10283508;
L_1028356c: ;
    COW_AT(1028356c)
    if (ecx == 0u) goto L_10283587;
    COW_AT(10283570)
    wr32(sp0 - 0xb0u, 1u);
    wr32(sp0 - 0xb4u, 0x91u);
    wr32(sp0 - 0xb8u, rd32(COW_IMG(0x1066941cu)));
    g->esp = sp0 - 0xacu;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0xc8u), ecx, 3, rd32(COW_IMG(0x1066941cu)), 0x91u, 1u);
    COW_AT(10283585)
    goto L_102835ca;
L_10283587: ;
    COW_AT(10283587)
    wr32(sp0 - 0xb0u, 0u);
    if ((eax & 2u) != 0u) goto L_102835b7;
    COW_AT(1028358d)
    wr32(sp0 - 0xb4u, 0x94u);
    wr32(sp0 - 0xb8u, rd32(COW_IMG(0x1066941cu)));
    t14 = rd32(rd32(COW_IMG(0x1066941cu)));
    g->esp = sp0 - 0xb0u;
    cow_thiscall(g, rd32(t14 + 0xc8u), t14, 2, rd32(COW_IMG(0x1066941cu)), 0x94u);
    t15 = g->ecx;
    ecx = t15;
    COW_AT(102835a0)
    wr32(sp0 - 0xb4u, 0u);
    wr32(sp0 - 0xb8u, 0x91u);
    wr32(sp0 - 0xbcu, rd32(COW_IMG(0x1066941cu)));
    g->esp = sp0 - 0xacu;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0xc8u), ecx, 4, rd32(COW_IMG(0x1066941cu)), 0x91u, 0u, rd32(sp0 - 0xb0u));
    COW_AT(102835b5)
    goto L_102835ca;
L_102835b7: ;
    COW_AT(102835b7)
    wr32(sp0 - 0xb4u, 0x91u);
    loc_b0 = 0u;
    loc_b4 = 0x91u;
    goto L_102835bc;
L_102836bb: ;
    COW_AT(102836bb)
    wr32(sp0 - 0xb4u, 0u);
    wr32(sp0 - 0xb8u, esi);
    wr32(sp0 - 0xbcu, rd32(COW_IMG(0x1066941cu)));
    g->esp = sp0 - 0xb0u;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0xb8u), ecx, 3, rd32(COW_IMG(0x1066941cu)), esi, 0u);
    goto L_102836cc;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10283440(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102834e5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_b0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x102834f7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_b0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x10283500u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_b0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x10283508u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_b0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x1028353au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_b0;
        uint32_t loc_b4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x1028354du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xacu;
        wr32(sp0 - 0xb0u, sp0 - 0xacu);
        (void)sp0;
        return 1;
    }
    case 0x1028355fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xacu;
        wr32(sp0 - 0xb0u, sp0 - 0xacu);
        (void)sp0;
        return 1;
    }
    case 0x10283563u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xacu;
        wr32(sp0 - 0xb0u, sp0 - 0xacu);
        (void)sp0;
        return 1;
    }
    case 0x1028356cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xacu;
        wr32(sp0 - 0xb0u, sp0 - 0xacu);
        (void)sp0;
        return 1;
    }
    case 0x10283570u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xacu;
        wr32(sp0 - 0xb0u, sp0 - 0xacu);
        (void)sp0;
        return 1;
    }
    case 0x10283585u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_b0;
        uint32_t loc_b4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x10283587u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xacu;
        wr32(sp0 - 0xb0u, sp0 - 0xacu);
        (void)sp0;
        return 1;
    }
    case 0x1028358du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xb0u;
        wr32(sp0 - 0xb0u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102835a0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_b4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xb0u;
        (void)sp0;
        return 1;
    }
    case 0x102835b5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_b4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x102835b7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xb0u;
        wr32(sp0 - 0xb0u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102835bcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_b0;
        uint32_t loc_b4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
    case 0x102835cau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_b0;
        uint32_t loc_b4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x102835cdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t loc_b0;
        uint32_t loc_b4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0xb0u;
        (void)sp0;
        return 1;
    }
    case 0x102835e1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t loc_b0;
        uint32_t loc_b4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0xb0u;
        (void)sp0;
        return 1;
    }
    case 0x102835f6u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t loc_b0;
        uint32_t loc_b4;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0xb0u;
        g->ecx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10283607u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t loc_b4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xb0u;
        (void)sp0;
        return 1;
    }
    case 0x1028361bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xb0u;
        wr32(sp0 - 0xb4u, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x10283665u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xb0u;
        wr32(sp0 - 0xb4u, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x10283685u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xb0u;
        wr32(sp0 - 0xb4u, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x1028369du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xb0u;
        wr32(sp0 - 0xb4u, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x102836b9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xb0u;
        wr32(sp0 - 0xb4u, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x102836bbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t loc_b0;
        uint32_t loc_b4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0xb0u;
        (void)sp0;
        return 1;
    }
    case 0x102836ccu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t loc_b4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xb0u;
        (void)sp0;
        return 1;
    }
    case 0x102836d6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t loc_b4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xb0u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10283440(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10283440(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
