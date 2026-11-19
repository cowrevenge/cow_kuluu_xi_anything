/* f_0x102af920 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
uint32_t cow_fn_102af920(Guest* g)
{
    double d13;
    double d14;
    double d15;
    double d18;
    double d21;
    double d22;
    double d27;
    double d28;
    double d29;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_11c;
    uint32_t loc_120;
    uint32_t loc_124;
    uint32_t loc_12c;
    uint32_t loc_130;
    uint32_t loc_134;
    uint32_t loc_138;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t16;
    uint32_t t17;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 352u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102af939u: eax = g->eax; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x138u); in_esi = rd32(sp0 - 0x134u); in_ebp = rd32(sp0 - 0x130u); in_ebx = rd32(sp0 - 0x12cu); g->ebp = rd32(sp0 - 0x130u); g->ebx = rd32(sp0 - 0x12cu); g->edi = rd32(sp0 - 0x138u); g->esi = rd32(sp0 - 0x134u); goto E_102af939;
    case 0x102af944u: eax = g->eax; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x138u); in_esi = rd32(sp0 - 0x134u); in_ebp = rd32(sp0 - 0x130u); in_ebx = rd32(sp0 - 0x12cu); g->ebp = rd32(sp0 - 0x130u); g->ebx = rd32(sp0 - 0x12cu); g->edi = rd32(sp0 - 0x138u); g->esi = rd32(sp0 - 0x134u); goto E_102af944;
    case 0x102af94fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x138u); in_esi = rd32(sp0 - 0x134u); in_ebp = rd32(sp0 - 0x130u); in_ebx = rd32(sp0 - 0x12cu); g->ebp = rd32(sp0 - 0x130u); g->ebx = rd32(sp0 - 0x12cu); g->edi = rd32(sp0 - 0x138u); g->esi = rd32(sp0 - 0x134u); goto E_102af94f;
    case 0x102af99fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102af99f;
    case 0x102af9ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102af9dd;
    case 0x102af9fcu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_124 = rd32(sp0 - 0x124u); goto E_102af9fc;
    case 0x102afa07u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_124 = rd32(sp0 - 0x124u); goto E_102afa07;
    case 0x102afa39u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102afa39;
    case 0x102afa4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_124 = rd32(sp0 - 0x124u); loc_120 = rd32(sp0 - 0x120u); goto E_102afa4f;
    case 0x102afa57u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_124 = rd32(sp0 - 0x124u); loc_120 = rd32(sp0 - 0x120u); loc_11c = rd32(sp0 - 0x11cu); goto E_102afa57;
    case 0x102afb18u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_124 = rd32(sp0 - 0x124u); loc_120 = rd32(sp0 - 0x120u); goto E_102afb18;
    case 0x102afb23u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_124 = rd32(sp0 - 0x124u); goto E_102afb23;
    case 0x102afb27u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_124 = rd32(sp0 - 0x124u); goto E_102afb27;
    case 0x102afb33u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102afb33;
    case 0x102afb37u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_124 = rd32(sp0 - 0x124u); loc_11c = rd32(sp0 - 0x11cu); goto E_102afb37;
    case 0x102afb97u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_134 = rd32(sp0 - 0x134u); loc_130 = rd32(sp0 - 0x130u); loc_12c = rd32(sp0 - 0x12cu); loc_124 = rd32(sp0 - 0x124u); goto E_102afb97;
    default: break;
    }
#endif

    COW_AT(102af920)
    wr32(sp0 - 0x12cu, in_ebx);
    wr32(sp0 - 0x130u, in_ebp);
    wr32(sp0 - 0x134u, in_esi);
    wr32(sp0 - 0x138u, in_edi);
    if (arg1 == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        loc_12c = in_ebx;
        loc_130 = in_ebp;
        loc_134 = in_esi;
        loc_138 = in_edi;
        goto L_102afb97;
    }
    COW_AT(102af939)
    if (rd32(arg1 + 0x58u) == 0u)
    {
        eax = rd32(arg1 + 0x58u);
        edx = in_edx;
        loc_12c = in_ebx;
        loc_130 = in_ebp;
        loc_134 = in_esi;
        loc_138 = in_edi;
        goto L_102afb97;
    }
    eax = rd32(arg1 + 0x58u);
    COW_AT(102af944)
    if (rd8(arg1 + 0x14u) == 0u)
    {
        edx = in_edx;
        loc_12c = in_ebx;
        loc_130 = in_ebp;
        loc_134 = in_esi;
        loc_138 = in_edi;
        goto L_102afb97;
    }
    COW_AT(102af94f)
    wr32(sp0 - 0x13cu, arg1 + 0x5cu);
    wr32(sp0 - 0x140u, eax);
    wr32(sp0 - 0x144u, sp0 - 0xc0u);
    g->esp = sp0 - 0x138u;
    cow_cdecl(g, COW_IMG(0x102afbb0u), 3, sp0 - 0xc0u, eax, arg1 + 0x5cu);
    wr32(sp0 - 0x148u, sp0 - 0xc0u);
    wr32(sp0 - 0x14cu, arg2);
    wr32(sp0 - 0x150u, sp0 - 0x80u);
    g->edx = sp0 - 0x80u;
    g->esp = sp0 - 0x144u;
    cow_cdecl(g, COW_IMG(0x102afbb0u), 3, sp0 - 0x80u, arg2, sp0 - 0xc0u);
    t1 = g->edx;
    wr32(sp0 - 0x154u, COW_IMG(0x103bf540u));
    wr32(sp0 - 0x158u, sp0 - 0x80u);
    wr32(sp0 - 0x15cu, sp0 - 0x100u);
    g->esp = sp0 - 0x150u;
    cow_cdecl(g, COW_IMG(0x10280020u), 3, sp0 - 0x100u, sp0 - 0x80u, COW_IMG(0x103bf540u));
    if (rd32(rd32(arg1 + 0x54u) + 0x3cu) == 0u)
    {
        ecx = rd32(arg1 + 0x54u);
        goto L_102af9dd;
    }
    ecx = rd32(arg1 + 0x54u);
    COW_AT(102af99f)
    wr32(sp0 - 0x13cu, sp0 - 0x100u);
    wr32(sp0 - 0x140u, sp0 - 0xc0u);
    g->esp = sp0 - 0x138u;
    cow_cdecl(g, COW_IMG(0x1027f090u), 2, sp0 - 0xc0u, sp0 - 0x100u);
    t2 = rd32(rd32(arg1 + 0x54u) + 0x38u);
    esi = sp0 - 0xc0u;
    edi = arg5 * 0x40u + rd32(rd32(rd32(arg1 + 0x54u) + 0x38u) + 0x78u) + 0x40u;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->ebx = rd32(sp0 - 0x12cu);
    g->esi = rd32(sp0 - 0x134u);
    g->edi = rd32(sp0 - 0x138u);
    g->ebp = rd32(sp0 - 0x130u);
    g->edx = t2;
    return arg5 * 0x40u + 0x40u;
L_102af9dd: ;
    COW_AT(102af9dd)
    t3 = rd32(arg1 + 0x30u);
    wr32(sp0 - 0x124u, t3);
    if (arg4 == 0u)
    {
        eax = t3;
        ebp = rd32(arg1 + 0x38u);
        esi = rd32(arg1 + 0x50u);
        edi = rd32(ecx + 0x18u);
        goto L_102afb23;
    }
    eax = t3;
    ebp = rd32(arg1 + 0x38u);
    esi = rd32(arg1 + 0x50u);
    edi = rd32(ecx + 0x18u);
    loc_124 = t3;
    COW_AT(102af9fc)
    if (rd32(ecx + 0x20u) == 0u) goto L_102afb23;
    ebx = rd32(ecx + 0x20u);
    COW_AT(102afa07)
    wr32(sp0 - 0x13cu, sp0 - 0x80u);
    wr32(sp0 - 0x140u, sp0 - 0x40u);
    g->ecx = sp0 - 0x80u;
    g->edx = sp0 - 0x40u;
    g->esp = sp0 - 0x68u;
    cow_bridge_indirect(g, COW_IMG(0x1027f670u), 0u, 54u, (const uint32_t[]){sp0 - 0x40u, sp0 - 0x80u, rd32(sp0 - 0x138u), rd32(sp0 - 0x134u), rd32(sp0 - 0x130u), rd32(sp0 - 0x12cu), rd32(sp0 - 0x128u), loc_124, rd32(sp0 - 0x120u), rd32(sp0 - 0x11cu), rd32(sp0 - 0x118u), rd32(sp0 - 0x114u), rd32(sp0 - 0x110u), rd32(sp0 - 0x10cu), rd32(sp0 - 0x108u), rd32(sp0 - 0x104u), rd32(sp0 - 0x100u), rd32(sp0 - 0xfcu), rd32(sp0 - 0xf8u), rd32(sp0 - 0xf4u), rd32(sp0 - 0xf0u), rd32(sp0 - 0xecu), rd32(sp0 - 0xe8u), rd32(sp0 - 0xe4u), rd32(sp0 - 0xe0u), rd32(sp0 - 0xdcu), rd32(sp0 - 0xd8u), rd32(sp0 - 0xd4u), rd32(sp0 - 0xd0u), rd32(sp0 - 0xccu), rd32(sp0 - 0xc8u), rd32(sp0 - 0xc4u), rd32(sp0 - 0xc0u), rd32(sp0 - 0xbcu), rd32(sp0 - 0xb8u), rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u), rd32(sp0 - 0xacu), rd32(sp0 - 0xa8u), rd32(sp0 - 0xa4u), rd32(sp0 - 0xa0u), rd32(sp0 - 0x9cu), rd32(sp0 - 0x98u), rd32(sp0 - 0x94u), rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u), rd32(sp0 - 0x84u), rd32(sp0 - 0x80u), rd32(sp0 - 0x7cu), rd32(sp0 - 0x78u), rd32(sp0 - 0x74u), rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu)}, g->ecx, g->edx, g->eax, 216u);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(sp0 - 0x144u, COW_IMG(0x103bf540u));
    wr32(sp0 - 0x148u, sp0 - 0x40u);
    g->eax = sp0 - 0x40u;
    g->edx = t5;
    g->esp = sp0 - 0x140u;
    t6 = cow_cdecl(g, COW_IMG(0x102800c0u), 2, sp0 - 0x40u, COW_IMG(0x103bf540u));
    t7 = g->edx;
    if ((int32_t)esi <= 0)
    {
        eax = t6;
        edx = t7;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_130 = rd32(sp0 - 0x130u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_138 = rd32(sp0 - 0x138u);
        goto L_102afb97;
    }
    COW_AT(102afa39)
    wr32(sp0 - 0x120u, ebp);
    t8 = rd32(sp0 - 0x124u) - ebp;
    wr32(sp0 - 0x11cu, t8);
    wr32(sp0 - 0x124u, esi);
    eax = ebp;
    ecx = t8;
    loc_120 = ebp;
    loc_11c = t8;
    loc_124 = esi;
L_102afa57: ;
    COW_AT(102afa57)
    wr32(sp0 - 0x128u, rd32(eax));
    t9 = arg3 + rd32(eax + ecx) * 0xcu;
    wr32(sp0 - 0x13cu, t9);
    wr32(sp0 - 0x140u, sp0 - 0x100u);
    wr32(sp0 - 0x144u, sp0 - 0x118u);
    t10 = rd32(eax + ecx);
    t11 = rd32(eax);
    g->esp = sp0 - 0x138u;
    cow_cdecl(g, COW_IMG(0x1027ef40u), 3, sp0 - 0x118u, sp0 - 0x100u, t9);
    t12 = arg4 + t10 * 0xcu;
    d13 = fr(g, fr(g, (double)rdf32(sp0 - 0x118u) * (double)rdf32(sp0 - 0x128u)) + (double)rdf32(edi + t10 * 0xcu));
    wr32(sp0 - 0x148u, t12);
    wr32(sp0 - 0x14cu, sp0 - 0x40u);
    wr32(sp0 - 0x150u, sp0 - 0x10cu);
    wrf32(edi + t10 * 0xcu, (float)d13);
    d14 = fr(g, fr(g, (double)rdf32(sp0 - 0x114u) * (double)rdf32(sp0 - 0x128u)) + (double)rdf32(edi + t10 * 0xcu + 4u));
    wrf32(edi + t10 * 0xcu + 4u, (float)d14);
    d15 = fr(g, fr(g, (double)rdf32(sp0 - 0x110u) * (double)rdf32(sp0 - 0x128u)) + (double)rdf32(edi + t10 * 0xcu + 8u));
    wrf32(edi + t10 * 0xcu + 8u, (float)d15);
    g->edx = sp0 - 0x10cu;
    g->esp = sp0 - 0x144u;
    cow_cdecl(g, COW_IMG(0x1027ef40u), 3, sp0 - 0x10cu, sp0 - 0x40u, t12);
    t16 = g->edx;
    t17 = rd32(sp0 - 0x120u) + 4u;
    d18 = fr(g, fr(g, (double)rdf32(sp0 - 0x10cu) * (double)rdf32(sp0 - 0x128u)) + (double)rdf32(ebx + t10 * 0xcu));
    wr32(sp0 - 0x120u, t17);
    t19 = rd32(sp0 - 0x124u) - 1u;
    t20 = rd32(sp0 - 0x124u);
    wr32(sp0 - 0x124u, t19);
    wrf32(ebx + t10 * 0xcu, (float)d18);
    d21 = fr(g, fr(g, (double)rdf32(sp0 - 0x108u) * (double)rdf32(sp0 - 0x128u)) + (double)rdf32(ebx + t10 * 0xcu + 4u));
    wrf32(ebx + t10 * 0xcu + 4u, (float)d21);
    d22 = fr(g, fr(g, (double)rdf32(sp0 - 0x104u) * (double)rdf32(sp0 - 0x128u)) + (double)rdf32(ebx + t10 * 0xcu + 8u));
    wrf32(ebx + t10 * 0xcu + 8u, (float)d22);
    if (t20 != 1u)
    {
        loc_120 = t17;
        loc_124 = t19;
        goto L_102afa4f;
    }
    eax = t19;
    edx = t16;
    COW_AT(102afb18)
    g->ebx = rd32(sp0 - 0x12cu);
    g->esi = rd32(sp0 - 0x134u);
    g->edi = rd32(sp0 - 0x138u);
    g->ebp = rd32(sp0 - 0x130u);
    g->edx = edx;
    return eax;
L_102afa4f: ;
    COW_AT(102afa4f)
    eax = loc_120;
    ecx = rd32(sp0 - 0x11cu);
    loc_11c = rd32(sp0 - 0x11cu);
    goto L_102afa57;
L_102afb23: ;
    COW_AT(102afb23)
    if ((int32_t)esi <= 0)
    {
        edx = arg4;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_130 = rd32(sp0 - 0x130u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_138 = rd32(sp0 - 0x138u);
    }
    else
    {
    COW_AT(102afb27)
        wr32(sp0 - 0x11cu, eax - ebp);
        ebx = ebp;
        loc_11c = eax - ebp;
        eax = eax - ebp;
        ebp = esi;
L_102afb37: ;
    COW_AT(102afb37)
        wr32(sp0 - 0x128u, rd32(ebx));
        t23 = arg3 + rd32(eax + ebx) * 0xcu;
        wr32(sp0 - 0x13cu, t23);
        wr32(sp0 - 0x140u, sp0 - 0x100u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        g->edx = sp0 - 0x118u;
        t24 = rd32(eax + ebx);
        t25 = rd32(ebx);
        g->esp = sp0 - 0x138u;
        cow_cdecl(g, COW_IMG(0x1027ef40u), 3, sp0 - 0x118u, sp0 - 0x100u, t23);
        t26 = g->edx;
        d27 = fr(g, fr(g, (double)rdf32(sp0 - 0x118u) * (double)rdf32(sp0 - 0x128u)) + (double)rdf32(edi + t24 * 0xcu));
        wrf32(edi + t24 * 0xcu, (float)d27);
        d28 = fr(g, fr(g, (double)rdf32(sp0 - 0x114u) * (double)rdf32(sp0 - 0x128u)) + (double)rdf32(edi + t24 * 0xcu + 4u));
        wrf32(edi + t24 * 0xcu + 4u, (float)d28);
        d29 = fr(g, fr(g, (double)rdf32(sp0 - 0x110u) * (double)rdf32(sp0 - 0x128u)) + (double)rdf32(edi + t24 * 0xcu + 8u));
        wrf32(edi + t24 * 0xcu + 8u, (float)d29);
        if (ebp != 1u)
        {
            ebx = ebx + 4u;
            ebp = ebp - 1u;
            goto L_102afb33;
        }
        eax = t24 * 3u;
        edx = t26;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_130 = rd32(sp0 - 0x130u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_138 = rd32(sp0 - 0x138u);
    }
L_102afb97: ;
    COW_AT(102afb97)
    g->ebx = loc_12c;
    g->esi = loc_134;
    g->edi = loc_138;
    g->ebp = loc_130;
    g->edx = edx;
    return eax;
L_102afb33: ;
    COW_AT(102afb33)
    eax = rd32(sp0 - 0x11cu);
    loc_11c = rd32(sp0 - 0x11cu);
    goto L_102afb37;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102af920(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102af939u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x138u);
        in_esi = rd32(sp0 - 0x134u);
        in_ebp = rd32(sp0 - 0x130u);
        in_ebx = rd32(sp0 - 0x12cu);
        g->esp = sp0 - 0x138u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102af944u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x138u);
        in_esi = rd32(sp0 - 0x134u);
        in_ebp = rd32(sp0 - 0x130u);
        in_ebx = rd32(sp0 - 0x12cu);
        g->esp = sp0 - 0x138u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102af94fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x138u);
        in_esi = rd32(sp0 - 0x134u);
        in_ebp = rd32(sp0 - 0x130u);
        in_ebx = rd32(sp0 - 0x12cu);
        g->esp = sp0 - 0x138u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102af99fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x138u;
        g->esi = arg1;
        wr32(sp0 - 0x15cu, sp0 - 0x100u);
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0xc0u);
        wr32(sp0 - 0x144u, sp0 - 0xc0u);
        (void)sp0;
        return 1;
    }
    case 0x102af9ddu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x138u;
        g->esi = arg1;
        wr32(sp0 - 0x15cu, sp0 - 0x100u);
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0xc0u);
        wr32(sp0 - 0x144u, sp0 - 0xc0u);
        (void)sp0;
        return 1;
    }
    case 0x102af9fcu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_124;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x138u;
        g->edx = arg4;
        wr32(sp0 - 0x15cu, sp0 - 0x100u);
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0xc0u);
        wr32(sp0 - 0x144u, sp0 - 0xc0u);
        (void)sp0;
        return 1;
    }
    case 0x102afa07u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_124;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x138u;
        wr32(sp0 - 0x15cu, sp0 - 0x100u);
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0xc0u);
        wr32(sp0 - 0x144u, sp0 - 0xc0u);
        (void)sp0;
        return 1;
    }
    case 0x102afa39u:
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
        g->esp = sp0 - 0x138u;
        wr32(sp0 - 0x15cu, sp0 - 0x100u);
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0x40u);
        wr32(sp0 - 0x140u, sp0 - 0x40u);
        wr32(sp0 - 0x13cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x102afa4fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_120;
        uint32_t loc_124;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_124 = rd32(sp0 - 0x124u);
        loc_120 = rd32(sp0 - 0x120u);
        g->esp = sp0 - 0x138u;
        wr32(sp0 - 0x15cu, sp0 - 0x100u);
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x10cu);
        wr32(sp0 - 0x14cu, sp0 - 0x40u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x102afa57u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_11c;
        uint32_t loc_120;
        uint32_t loc_124;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_124 = rd32(sp0 - 0x124u);
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c = rd32(sp0 - 0x11cu);
        g->esp = sp0 - 0x138u;
        wr32(sp0 - 0x15cu, sp0 - 0x100u);
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x102afb18u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_120;
        uint32_t loc_124;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_124 = rd32(sp0 - 0x124u);
        loc_120 = rd32(sp0 - 0x120u);
        g->esp = sp0 - 0x138u;
        wr32(sp0 - 0x15cu, sp0 - 0x100u);
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x10cu);
        wr32(sp0 - 0x14cu, sp0 - 0x40u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x102afb23u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_124;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x138u;
        g->edx = arg4;
        wr32(sp0 - 0x15cu, sp0 - 0x100u);
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0xc0u);
        wr32(sp0 - 0x144u, sp0 - 0xc0u);
        (void)sp0;
        return 1;
    }
    case 0x102afb27u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_124;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x138u;
        wr32(sp0 - 0x15cu, sp0 - 0x100u);
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0xc0u);
        wr32(sp0 - 0x144u, sp0 - 0xc0u);
        (void)sp0;
        return 1;
    }
    case 0x102afb33u:
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
        g->esp = sp0 - 0x138u;
        wr32(sp0 - 0x15cu, sp0 - 0x100u);
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0xc0u);
        wr32(sp0 - 0x144u, sp0 - 0x118u);
        wr32(sp0 - 0x140u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x102afb37u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_11c;
        uint32_t loc_124;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_124 = rd32(sp0 - 0x124u);
        loc_11c = rd32(sp0 - 0x11cu);
        g->esp = sp0 - 0x138u;
        wr32(sp0 - 0x15cu, sp0 - 0x100u);
        wr32(sp0 - 0x158u, sp0 - 0x80u);
        wr32(sp0 - 0x150u, sp0 - 0x80u);
        wr32(sp0 - 0x148u, sp0 - 0xc0u);
        (void)sp0;
        return 1;
    }
    case 0x102afb97u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_124;
        uint32_t loc_12c;
        uint32_t loc_130;
        uint32_t loc_134;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_134 = rd32(sp0 - 0x134u);
        loc_130 = rd32(sp0 - 0x130u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x138u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102af920(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102af920(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
