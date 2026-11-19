/* f_0x100f63c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=2 */
uint32_t cow_fn_100f63c0(Guest* g)
{
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_6c;
    uint32_t loc_70;
    uint32_t loc_74;
    uint32_t loc_78;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 132u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100f63d1u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_100f63d1;
    case 0x100f63e1u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_100f63e1;
    case 0x100f63e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_100f63e3;
    case 0x100f63f3u: ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_100f63f3;
    case 0x100f63fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_100f63fa;
    case 0x100f6407u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_100f6407;
    case 0x100f6414u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_100f6414;
    case 0x100f6426u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_100f6426;
    case 0x100f642bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_100f642b;
    case 0x100f642du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); goto E_100f642d;
    case 0x100f643fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100f643f;
    case 0x100f6446u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100f6446;
    case 0x100f6452u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100f6452;
    case 0x100f6458u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100f6458;
    case 0x100f6460u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100f6460;
    case 0x100f6464u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100f6464;
    case 0x100f646eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100f646e;
    case 0x100f6478u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100f6478;
    case 0x100f647cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100f647c;
    case 0x100f6481u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100f6481;
    case 0x100f6485u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100f6485;
    case 0x100f648bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100f648b;
    case 0x100f648du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100f648d;
    case 0x100f649eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); goto E_100f649e;
    case 0x100f64abu: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; goto E_100f64ab;
    case 0x100f64c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100f64c5;
    case 0x100f64e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_100f64e0;
    case 0x100f64edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x78u); in_esi = rd32(sp0 - 0x74u); in_ebp = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebp = rd32(sp0 - 0x70u); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x78u); g->esi = rd32(sp0 - 0x74u); goto E_100f64ed;
    default: break;
    }
#endif

    COW_AT(100f63c0)
    wr32(sp0 - 0x6cu, in_ebx);
    wr32(sp0 - 0x70u, in_ebp);
    wr32(sp0 - 0x74u, in_esi);
    wr32(sp0 - 0x78u, in_edi);
    if (rd32(COW_IMG(0x103601bcu)) == 0u)
    {
        ecx = rd32(COW_IMG(0x103601bcu));
    COW_AT(100f63e1)
        edx = in_edx;
        edi = 0u;
    }
    else
    {
        ecx = rd32(COW_IMG(0x103601bcu));
    COW_AT(100f63d1)
        t1 = rd32(ecx + 0x80u);
        wr32(sp0 - 0x7cu, t1);
        g->eax = t1;
        g->ecx = ecx;
        g->edx = in_edx;
        g->esp = sp0 - 0x78u;
        t2 = cow_stdcall(g, COW_IMG(0x100db6d0u), 1, t1);
        t3 = g->ecx;
        t4 = g->edx;
        ecx = t3;
        edx = t4;
        edi = t2;
    }
    COW_AT(100f63e3)
    if (arg2 > 3u) goto L_100f64ed;
    COW_AT(100f63f3)
    t5 = rd32(COW_IMG(0x100f64fcu) + arg2 * 4u);
    switch (t5 - RD)
    {
    case 0x100f63fau: goto L_100f63fa;
    case 0x100f6407u: goto L_100f6407;
    case 0x100f6414u: goto L_100f6414;
    case 0x100f64e0u: goto L_100f64e0;
    default: rt_fatal(g, COW_IMG(0x100f63f3u), "switch");
    }
    return 0;
L_100f63fa: ;
    COW_AT(100f63fa)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return 3u;
L_100f6407: ;
    COW_AT(100f6407)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return 0x16u;
L_100f6414: ;
    COW_AT(100f6414)
    wr32(arg1 + 0xd8u, 0xfffffffeu);
    if (edi == 0u)
    {
        loc_6c = in_ebx;
        loc_70 = in_ebp;
        loc_74 = in_esi;
        loc_78 = in_edi;
        goto L_100f649e;
    }
    COW_AT(100f6426)
    if (rd8(edi) == 0u)
    {
        loc_6c = in_ebx;
        loc_70 = in_ebp;
        loc_74 = in_esi;
        loc_78 = in_edi;
        goto L_100f649e;
    }
    COW_AT(100f642b)
    ebp = 0u;
    loc_6c = in_ebx;
    loc_70 = in_ebp;
    loc_74 = in_esi;
    loc_78 = in_edi;
L_100f642d: ;
    COW_AT(100f642d)
    wr32(sp0 - 0x7cu, sp0 - 0x68u);
    wr32(sp0 - 0x80u, ebp);
    g->eax = sp0 - 0x68u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x78u;
    t6 = cow_cdecl(g, COW_IMG(0x1030ffe1u), 2, ebp, sp0 - 0x68u);
    t7 = g->ecx;
    t8 = g->edx;
    if ((int32_t)t6 < 0)
    {
        ecx = t7;
        edx = t8;
        goto L_100f6485;
    }
    eax = t6;
    ecx = t7;
    edx = t8;
    COW_AT(100f643f)
    if (!(rd8(sp0 - 0x68u) & 1u)) goto L_100f6485;
    COW_AT(100f6446)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x78u;
    t9 = cow_stdcall(g, COW_IMG(0x1031012bu), 0);
    t10 = g->ecx;
    t11 = g->edx;
    if ((uint16_t)t9 != rd16(sp0 - 0x66u))
    {
        ecx = t10;
        edx = t11;
        goto L_100f6485;
    }
    ecx = t10;
    edx = t11;
    COW_AT(100f6452)
    eax = sp0 - 0x50u;
    esi = edi;
L_100f6458: ;
    COW_AT(100f6458)
    if (rd8(eax) != rd8(esi))
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax);
        edx = (edx & 0xffffff00u) | rd8(eax);
        cf = rd8(eax) < rd8(esi);
        goto L_100f647c;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    edx = (edx & 0xffffff00u) | rd8(eax);
    COW_AT(100f6460)
    if ((uint8_t)ecx == 0u) goto L_100f6478;
    COW_AT(100f6464)
    if (rd8(eax + 1u) != rd8(esi + 1u))
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
        edx = (edx & 0xffffff00u) | rd8(eax + 1u);
        cf = rd8(eax + 1u) < rd8(esi + 1u);
        goto L_100f647c;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
    edx = (edx & 0xffffff00u) | rd8(eax + 1u);
    COW_AT(100f646e)
    if ((uint8_t)ecx != 0u)
    {
        eax = eax + 2u;
        esi = esi + 2u;
        goto L_100f6458;
    }
L_100f6478: ;
    COW_AT(100f6478)
    eax = 0u;
L_100f6481: ;
    COW_AT(100f6481)
    if (eax == 0u) goto L_100f648d;
L_100f6485: ;
    COW_AT(100f6485)
    if ((int32_t)(ebp + 1u) < 64)
    {
        ebp = ebp + 1u;
        loc_6c = rd32(sp0 - 0x6cu);
        loc_70 = rd32(sp0 - 0x70u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_78 = rd32(sp0 - 0x78u);
        goto L_100f642d;
    }
    COW_AT(100f648b)
L_100f64c5: ;
    COW_AT(100f64c5)
    g->ebx = rd32(sp0 - 0x6cu);
    g->esi = rd32(sp0 - 0x74u);
    g->edi = rd32(sp0 - 0x78u);
    g->ebp = rd32(sp0 - 0x70u);
    g->edx = edx;
    return (-(rd32(arg1 + 0xd8u) + 2u != 0u) & 0x10u) + 7u;
L_100f647c: ;
    COW_AT(100f647c)
    eax = -cf + 1u - cf;
    goto L_100f6481;
L_100f648d: ;
    COW_AT(100f648d)
    t12 = rd32(sp0 - 0x58u);
    if ((t12 & 0x8000u) != 0u)
    {
        ecx = t12;
        zf = (t12 & 0x8000u) == 0u;
        sf = (int32_t)(t12 & 0x8000u) < 0;
        goto L_100f64ab;
    }
    edx = 0u;
    loc_6c = rd32(sp0 - 0x6cu);
    loc_70 = rd32(sp0 - 0x70u);
    loc_74 = rd32(sp0 - 0x74u);
    loc_78 = rd32(sp0 - 0x78u);
L_100f649e: ;
    COW_AT(100f649e)
    g->ebx = loc_6c;
    g->esi = loc_74;
    g->edi = loc_78;
    g->ebp = loc_70;
    g->edx = edx;
    return 7u;
L_100f64ab: ;
    COW_AT(100f64ab)
    t13 = rd32(sp0 - 0x54u);
    wr32(arg1 + 0xd8u, ebp);
    eax = t13;
    cf = 0u;
    pf = PARITY(0u);
    of = 0u;
    { /* shrd ecx, eax, 0x10 */ { unsigned c = (unsigned)(0x10u) & 31u; if (c) { uint32_t a = ecx, b = eax, r; r = (a >> c) | (b << (32 - c)); cf = (a >> (c - 1)) & 1u; of = ((r ^ a) >> 31) & 1u; zf = (uint32_t)r == 0; sf = ((r) >> 31) & 1u; pf = PARITY(r); ecx = (uint32_t)(r); } } }
    wr32(arg1 + 0xd4u, ecx & 0x3fu);
    edx = 0u;
    goto L_100f64c5;
L_100f64e0: ;
    COW_AT(100f64e0)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return 6u;
L_100f64ed: ;
    COW_AT(100f64ed)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return 0x15u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100f63c0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100f63d1u:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x100f63e1u:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x100f63e3u:
    {
        unsigned cf;
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
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x100f63f3u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        g->eax = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100f63fau:
    {
        unsigned cf;
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
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x100f6407u:
    {
        unsigned cf;
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
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x100f6414u:
    {
        unsigned cf;
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
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x100f6426u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
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
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100f642bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
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
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100f642du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_78;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100f643fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x78u;
        g->ebx = arg1;
        wr32(sp0 - 0x7cu, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x100f6446u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x78u;
        g->ebx = arg1;
        wr32(sp0 - 0x7cu, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x100f6452u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x78u;
        g->ebx = arg1;
        wr32(sp0 - 0x7cu, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x100f6458u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x78u;
        g->ebx = arg1;
        wr32(sp0 - 0x7cu, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x100f6460u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x78u;
        g->ebx = arg1;
        wr32(sp0 - 0x7cu, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x100f6464u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x78u;
        g->ebx = arg1;
        wr32(sp0 - 0x7cu, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x100f646eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x78u;
        g->ebx = arg1;
        wr32(sp0 - 0x7cu, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x100f6478u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x78u;
        g->ebx = arg1;
        wr32(sp0 - 0x7cu, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x100f647cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x78u;
        g->ebx = arg1;
        wr32(sp0 - 0x7cu, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x100f6481u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x78u;
        g->ebx = arg1;
        wr32(sp0 - 0x7cu, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x100f6485u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x78u;
        g->ebx = arg1;
        wr32(sp0 - 0x7cu, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x100f648bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x78u;
        g->ebx = arg1;
        wr32(sp0 - 0x7cu, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x100f648du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x78u;
        g->ebx = arg1;
        wr32(sp0 - 0x7cu, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x100f649eu:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_78;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x100f64abu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x78u;
        g->edx = 0u;
        g->ebx = arg1;
        g->cf = (uint8_t)(0u);
        g->pf = (uint8_t)(PARITY(0u));
        g->of = (uint8_t)(0u);
        wr32(sp0 - 0x7cu, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x100f64c5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x78u;
        g->ebx = arg1;
        wr32(sp0 - 0x7cu, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x100f64e0u:
    {
        unsigned cf;
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
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x100f64edu:
    {
        unsigned cf;
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
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x78u);
        in_esi = rd32(sp0 - 0x74u);
        in_ebp = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100f63c0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100f63c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
