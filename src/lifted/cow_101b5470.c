/* f_0x101b5470 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101b5470(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_840;
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 2156u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101b548eu: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x850u); in_esi = rd32(sp0 - 0x84cu); in_ebp = rd32(sp0 - 0x848u); in_ebx = rd32(sp0 - 0x844u); g->ebp = rd32(sp0 - 0x848u); g->ebx = rd32(sp0 - 0x844u); g->edi = rd32(sp0 - 0x850u); g->esi = rd32(sp0 - 0x84cu); goto E_101b548e;
    case 0x101b54a6u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b54a6;
    case 0x101b54a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b54a9;
    case 0x101b54b8u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x850u); in_esi = rd32(sp0 - 0x84cu); in_ebp = rd32(sp0 - 0x848u); in_ebx = rd32(sp0 - 0x844u); g->ebp = rd32(sp0 - 0x848u); g->ebx = rd32(sp0 - 0x844u); g->edi = rd32(sp0 - 0x850u); g->esi = rd32(sp0 - 0x84cu); goto E_101b54b8;
    case 0x101b54c3u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x850u); in_esi = rd32(sp0 - 0x84cu); in_ebp = rd32(sp0 - 0x848u); in_ebx = rd32(sp0 - 0x844u); g->ebp = rd32(sp0 - 0x848u); g->ebx = rd32(sp0 - 0x844u); g->edi = rd32(sp0 - 0x850u); g->esi = rd32(sp0 - 0x84cu); goto E_101b54c3;
    case 0x101b54d2u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x850u); in_esi = rd32(sp0 - 0x84cu); in_ebp = rd32(sp0 - 0x848u); in_ebx = rd32(sp0 - 0x844u); g->ebp = rd32(sp0 - 0x848u); g->ebx = rd32(sp0 - 0x844u); g->edi = rd32(sp0 - 0x850u); g->esi = rd32(sp0 - 0x84cu); goto E_101b54d2;
    case 0x101b54dbu: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x850u); in_esi = rd32(sp0 - 0x84cu); in_ebp = rd32(sp0 - 0x848u); in_ebx = rd32(sp0 - 0x844u); g->ebp = rd32(sp0 - 0x848u); g->ebx = rd32(sp0 - 0x844u); g->edi = rd32(sp0 - 0x850u); g->esi = rd32(sp0 - 0x84cu); goto E_101b54db;
    case 0x101b5508u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x850u); in_esi = rd32(sp0 - 0x84cu); in_ebp = rd32(sp0 - 0x848u); in_ebx = rd32(sp0 - 0x844u); g->ebp = rd32(sp0 - 0x848u); g->ebx = rd32(sp0 - 0x844u); g->edi = rd32(sp0 - 0x850u); g->esi = rd32(sp0 - 0x84cu); goto E_101b5508;
    case 0x101b5516u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x850u); in_esi = rd32(sp0 - 0x84cu); in_ebp = rd32(sp0 - 0x848u); in_ebx = rd32(sp0 - 0x844u); g->ebp = rd32(sp0 - 0x848u); g->ebx = rd32(sp0 - 0x844u); g->edi = rd32(sp0 - 0x850u); g->esi = rd32(sp0 - 0x84cu); goto E_101b5516;
    case 0x101b552du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b552d;
    case 0x101b5536u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5536;
    case 0x101b5540u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5540;
    case 0x101b5559u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5559;
    case 0x101b5564u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5564;
    case 0x101b5568u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5568;
    case 0x101b5582u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5582;
    case 0x101b5589u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5589;
    case 0x101b559au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b559a;
    case 0x101b559cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b559c;
    case 0x101b55b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b55b2;
    case 0x101b55b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_840 = rd32(sp0 - 0x840u); goto E_101b55b7;
    case 0x101b55beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_840 = rd32(sp0 - 0x840u); goto E_101b55be;
    case 0x101b55e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b55e4;
    case 0x101b55eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b55ee;
    case 0x101b55f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b55f2;
    case 0x101b55f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b55f6;
    case 0x101b5613u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5613;
    case 0x101b5621u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_840 = rd32(sp0 - 0x840u); goto E_101b5621;
    case 0x101b5661u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x850u); in_esi = rd32(sp0 - 0x84cu); in_ebp = rd32(sp0 - 0x848u); in_ebx = rd32(sp0 - 0x844u); g->ebp = rd32(sp0 - 0x848u); g->ebx = rd32(sp0 - 0x844u); g->edi = rd32(sp0 - 0x850u); g->esi = rd32(sp0 - 0x84cu); goto E_101b5661;
    case 0x101b567cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b567c;
    case 0x101b5688u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b5688;
    case 0x101b568cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b568c;
    default: break;
    }
#endif

    COW_AT(101b5470)
    wr32(sp0 - 0x844u, in_ebx);
    wr32(sp0 - 0x848u, in_ebp);
    wr32(sp0 - 0x84cu, in_esi);
    wr32(sp0 - 0x850u, in_edi);
    t1 = rd32(self + 0xf108u);
    wr8(self + 0xf11du, 0u);
    if (t1 != 1u)
    {
        eax = t1;
        goto L_101b54b8;
    }
    eax = t1;
    COW_AT(101b548e)
    wr32(sp0 - 0x854u, COW_IMG(0x1037c7f8u));
    g->edx = in_edx;
    g->esp = sp0 - 0x854u;
    cow_stdcall(g, COW_IMG(0x101908d0u), 0);
    t2 = g->edx;
    if (arg1 == 0u)
    {
        edx = t2;
    }
    else
    {
        edx = t2;
    COW_AT(101b54a6)
        wr8(arg1, 0u);
    }
    COW_AT(101b54a9)
    g->ebx = rd32(sp0 - 0x844u);
    g->esi = rd32(sp0 - 0x84cu);
    g->edi = rd32(sp0 - 0x850u);
    g->ebp = rd32(sp0 - 0x848u);
    g->edx = edx;
    return 0u;
L_101b54b8: ;
    COW_AT(101b54b8)
    if (arg1 != 0u) goto L_101b54d2;
    COW_AT(101b54c3)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return 0u;
L_101b54d2: ;
    COW_AT(101b54d2)
    if (rd8(self + 0xef22u) != 1u) goto L_101b5508;
    COW_AT(101b54db)
    eax = self + 0xec34u;
    ecx = self;
L_101b54e5: ;
    COW_AT(101b54e5)
    t3 = rd8(eax);
    wr8(arg1 + eax - self - 0xec34u, (uint8_t)t3);
    if ((uint8_t)t3 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t3;
        goto L_101b54e5;
    }
    ecx = (ecx & 0xffffff00u) | t3;
    COW_AT(101b54ef)
    edi = arg1;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t4 = ~ecx - 1u;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = arg1 - (self + 0xec34u);
    return t4;
L_101b5508: ;
    COW_AT(101b5508)
    if (rd8(self + 0xf0ecu) != 0u) goto L_101b5661;
    eax = (eax & 0xffffff00u) | rd8(self + 0xf0ecu);
    COW_AT(101b5516)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x850u;
    t5 = cow_thiscall(g, COW_IMG(0x101ac200u), self + 0x7e30u, 0);
    t6 = g->ecx;
    t7 = g->edx;
    if ((int32_t)t5 <= 1050)
    {
        eax = t5;
        edx = t7;
        ebx = t5;
        goto L_101b5559;
    }
    ecx = t6;
    COW_AT(101b552d)
    eax = COW_IMG(0x1037c7f0u);
L_101b5536: ;
    COW_AT(101b5536)
    t8 = rd8(eax);
    wr8(arg1 + eax - COW_IMG(0x1037c7f0u), (uint8_t)t8);
    if ((uint8_t)t8 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t8;
        goto L_101b5536;
    }
    ecx = (ecx & 0xffffff00u) | t8;
    COW_AT(101b5540)
    edi = arg1;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t9 = ~ecx - 1u;
    g->ebx = rd32(sp0 - 0x844u);
    g->esi = rd32(sp0 - 0x84cu);
    g->edi = rd32(sp0 - 0x850u);
    g->ebp = rd32(sp0 - 0x848u);
    g->edx = arg1 - COW_IMG(0x1037c7f0u);
    return t9;
L_101b5559: ;
    COW_AT(101b5559)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x850u;
    t10 = cow_thiscall(g, COW_IMG(0x101ac1b0u), self + 0x7e30u, 0);
    t11 = g->edx;
    if ((int32_t)ebx <= 0)
    {
        eax = t10;
        edx = t11;
        goto L_101b5582;
    }
    eax = t10;
    edx = t11;
    COW_AT(101b5564)
    if (eax == 0u) goto L_101b5582;
    COW_AT(101b5568)
    esi = eax;
    edi = sp0 - 0x838u;
    ecx = ebx >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = ebx & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    eax = ebx;
    esi = ebx;
L_101b5589: ;
    COW_AT(101b5589)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x850u;
    t12 = cow_thiscall(g, COW_IMG(0x101ac560u), self + 0x7e30u, 0);
    t13 = g->edx;
    if ((int32_t)t12 > (int32_t)esi)
    {
        eax = t12;
        goto L_101b559c;
    }
    eax = t12;
    edx = t13;
    edi = t12;
    zf = t12 == esi;
    COW_AT(101b559a)
    if (!zf) goto L_101b55ee;
L_101b559c: ;
    COW_AT(101b559c)
    wr32(sp0 - 0x854u, 0x41au - esi);
    t20 = esi + sp0 - 0x838u;
    wr32(sp0 - 0x858u, t20);
    g->esp = sp0 - 0x850u;
    t21 = cow_call_regs(g, COW_IMG(0x101b72f0u), eax, self, g->edx, 0, 2, t20, 0x41au - esi);
    eax = t21;
    esi = esi + t21;
L_101b55b2: ;
    COW_AT(101b55b2)
    wr8(esi + sp0 - 0x838u, 0u);
L_101b55b7: ;
    COW_AT(101b55b7)
L_101b55be: ;
    COW_AT(101b55be)
    wr32(sp0 - 0x854u, 1u);
    wr32(sp0 - 0x858u, 0u);
    wr32(sp0 - 0x85cu, esi);
    wr32(sp0 - 0x860u, sp0 - 0x838u);
    wr32(sp0 - 0x864u, arg2);
    wr32(sp0 - 0x868u, arg1);
    g->esp = sp0 - 0x850u;
    t23 = cow_call_regs(g, COW_IMG(0x101ac990u), eax, self + 0x7e30u, g->edx, 0, 6, arg1, arg2, sp0 - 0x838u, esi, 0u, 1u);
    if ((int32_t)t23 >= 0)
    {
        eax = t23;
    COW_AT(101b5688)
        wr8(arg1 + eax, 0u);
    }
    else
    {
    COW_AT(101b55e4)
        wr8(arg1, 0u);
        eax = 0u;
    }
    COW_AT(101b568c)
    esi = arg1;
    edi = self + 0xec34u;
    ecx = eax >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = eax & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    wr8(eax + self + 0xec34u, 0u);
    t24 = rd32(sp0 - 0x850u);
    wr8(self + 0xef22u, 1u);
    g->ebx = rd32(sp0 - 0x844u);
    g->esi = rd32(sp0 - 0x84cu);
    g->edi = t24;
    g->ebp = rd32(sp0 - 0x848u);
    g->edx = eax;
    return eax;
L_101b5582: ;
    COW_AT(101b5582)
    wr8(sp0 - 0x838u, 0u);
    esi = 0u;
    goto L_101b5589;
L_101b55ee: ;
    COW_AT(101b55ee)
    if ((int32_t)edi >= (int32_t)esi) goto L_101b55b7;
    COW_AT(101b55f2)
    if ((int32_t)edi < 0) goto L_101b55b7;
    COW_AT(101b55f6)
    wr32(sp0 - 0x854u, 0x41au - esi);
    wr32(sp0 - 0x858u, sp0 - 0x41cu);
    g->esp = sp0 - 0x850u;
    t14 = cow_call_regs(g, COW_IMG(0x101b72f0u), 0x41au - esi, self, g->edx, 0, 2, sp0 - 0x41cu, 0x41au - esi);
    t15 = g->ecx;
    if ((int32_t)t14 <= 0)
    {
        eax = t14;
        goto L_101b55b7;
    }
    ecx = t15;
    ebx = t14;
    COW_AT(101b5613)
    wr32(sp0 - 0x840u, ebx + esi);
    if ((int32_t)(ebx + esi) >= 1050)
    {
        eax = ebx + esi;
        goto L_101b55b7;
    }
    loc_840 = ebx + esi;
    COW_AT(101b5621)
    wr32(sp0 - 0x854u, esi - edi);
    t16 = edi + sp0 - 0x838u;
    wr32(sp0 - 0x83cu, t16);
    wr32(sp0 - 0x858u, t16);
    t17 = ebx + edi + sp0 - 0x838u;
    wr32(sp0 - 0x85cu, t17);
    g->eax = t17;
    g->esp = sp0 - 0x848u;
    t18 = cow_cdecl(g, COW_IMG(0x10314a10u), 5, t17, t16, esi - edi, rd32(sp0 - 0x850u), rd32(sp0 - 0x84cu));
    t19 = rd32(sp0 - 0x83cu);
    esi = sp0 - 0x41cu;
    edi = t19;
    ecx = ebx >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = ebx & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    eax = t18;
    esi = rd32(sp0 - 0x840u);
    goto L_101b55b2;
L_101b5661: ;
    COW_AT(101b5661)
    wr32(sp0 - 0x854u, 0x41au);
    wr32(sp0 - 0x858u, sp0 - 0x838u);
    g->esp = sp0 - 0x850u;
    t22 = cow_call_regs(g, COW_IMG(0x101b7d00u), sp0 - 0x838u, self, g->edx, 0, 2, sp0 - 0x838u, 0x41au);
    if ((int32_t)t22 >= 0)
    {
        eax = t22;
        esi = t22;
    }
    else
    {
        eax = t22;
    COW_AT(101b567c)
        wr8(sp0 - 0x838u, 0u);
        esi = 0u;
    }
    goto L_101b55be;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101b5470(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101b548eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x850u);
        in_esi = rd32(sp0 - 0x84cu);
        in_ebp = rd32(sp0 - 0x848u);
        in_ebx = rd32(sp0 - 0x844u);
        g->esp = sp0 - 0x850u;
        (void)sp0;
        return 1;
    }
    case 0x101b54a6u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x850u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b54a9u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
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
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x850u;
        (void)sp0;
        return 1;
    }
    case 0x101b54b8u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x850u);
        in_esi = rd32(sp0 - 0x84cu);
        in_ebp = rd32(sp0 - 0x848u);
        in_ebx = rd32(sp0 - 0x844u);
        g->esp = sp0 - 0x850u;
        g->ebp = self;
        (void)sp0;
        return 1;
    }
    case 0x101b54c3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
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
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x850u);
        in_esi = rd32(sp0 - 0x84cu);
        in_ebp = rd32(sp0 - 0x848u);
        in_ebx = rd32(sp0 - 0x844u);
        g->esp = sp0 - 0x850u;
        (void)sp0;
        return 1;
    }
    case 0x101b54d2u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x850u);
        in_esi = rd32(sp0 - 0x84cu);
        in_ebp = rd32(sp0 - 0x848u);
        in_ebx = rd32(sp0 - 0x844u);
        g->esp = sp0 - 0x850u;
        g->ebp = self;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b54dbu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x850u);
        in_esi = rd32(sp0 - 0x84cu);
        in_ebp = rd32(sp0 - 0x848u);
        in_ebx = rd32(sp0 - 0x844u);
        g->esp = sp0 - 0x850u;
        g->ebp = self;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b5508u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
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
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x850u);
        in_esi = rd32(sp0 - 0x84cu);
        in_ebp = rd32(sp0 - 0x848u);
        in_ebx = rd32(sp0 - 0x844u);
        g->esp = sp0 - 0x850u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b5516u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
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
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x850u);
        in_esi = rd32(sp0 - 0x84cu);
        in_ebp = rd32(sp0 - 0x848u);
        in_ebx = rd32(sp0 - 0x844u);
        g->esp = sp0 - 0x850u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b552du:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x850u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b5536u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x850u;
        g->edx = arg1 - COW_IMG(0x1037c7f0u);
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b5540u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x850u;
        g->edx = arg1 - COW_IMG(0x1037c7f0u);
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b5559u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x850u;
        g->esi = self + 0x7e30u;
        (void)sp0;
        return 1;
    }
    case 0x101b5564u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x850u;
        (void)sp0;
        return 1;
    }
    case 0x101b5568u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x850u;
        (void)sp0;
        return 1;
    }
    case 0x101b5582u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x850u;
        (void)sp0;
        return 1;
    }
    case 0x101b5589u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x850u;
        (void)sp0;
        return 1;
    }
    case 0x101b559au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x850u;
        (void)sp0;
        return 1;
    }
    case 0x101b559cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x850u;
        (void)sp0;
        return 1;
    }
    case 0x101b55b2u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x850u;
        (void)sp0;
        return 1;
    }
    case 0x101b55b7u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_840;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_840 = rd32(sp0 - 0x840u);
        g->esp = sp0 - 0x850u;
        (void)sp0;
        return 1;
    }
    case 0x101b55beu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_840;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_840 = rd32(sp0 - 0x840u);
        g->esp = sp0 - 0x850u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b55e4u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x850u;
        g->edi = arg1;
        wr32(sp0 - 0x860u, sp0 - 0x838u);
        (void)sp0;
        return 1;
    }
    case 0x101b55eeu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x850u;
        (void)sp0;
        return 1;
    }
    case 0x101b55f2u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x850u;
        (void)sp0;
        return 1;
    }
    case 0x101b55f6u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x850u;
        (void)sp0;
        return 1;
    }
    case 0x101b5613u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x850u;
        wr32(sp0 - 0x858u, sp0 - 0x41cu);
        (void)sp0;
        return 1;
    }
    case 0x101b5621u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_840;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_840 = rd32(sp0 - 0x840u);
        g->esp = sp0 - 0x850u;
        wr32(sp0 - 0x858u, sp0 - 0x41cu);
        (void)sp0;
        return 1;
    }
    case 0x101b5661u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
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
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x850u);
        in_esi = rd32(sp0 - 0x84cu);
        in_ebp = rd32(sp0 - 0x848u);
        in_ebx = rd32(sp0 - 0x844u);
        g->esp = sp0 - 0x850u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b567cu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x850u;
        g->edi = arg1;
        wr32(sp0 - 0x858u, sp0 - 0x838u);
        (void)sp0;
        return 1;
    }
    case 0x101b5688u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x850u;
        g->edi = arg1;
        wr32(sp0 - 0x860u, sp0 - 0x838u);
        (void)sp0;
        return 1;
    }
    case 0x101b568cu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x850u;
        g->edi = arg1;
        wr32(sp0 - 0x860u, sp0 - 0x838u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
/* blocks no state can start at, and why (the gittable lists their sites):
     101b54e5: holds self, which no location here says
     101b54ef: holds self, which no location here says
*/
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101b5470(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101b5470(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
