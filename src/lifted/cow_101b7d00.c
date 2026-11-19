/* f_0x101b7d00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101b7d00(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_424;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 1092u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101b7d18u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x430u); in_esi = rd32(sp0 - 0x42cu); in_ebx = rd32(sp0 - 0x428u); g->ebx = rd32(sp0 - 0x428u); g->edi = rd32(sp0 - 0x430u); g->esi = rd32(sp0 - 0x42cu); goto E_101b7d18;
    case 0x101b7d23u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x430u); in_esi = rd32(sp0 - 0x42cu); in_ebx = rd32(sp0 - 0x428u); g->ebx = rd32(sp0 - 0x428u); g->edi = rd32(sp0 - 0x430u); g->esi = rd32(sp0 - 0x42cu); goto E_101b7d23;
    case 0x101b7d41u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b7d41;
    case 0x101b7d51u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b7d51;
    case 0x101b7d5bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b7d5b;
    case 0x101b7d73u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; self = g->edi - 0x7e30u; goto E_101b7d73;
    case 0x101b7d86u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b7d86;
    case 0x101b7da2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; self = g->edi - 0x7e30u; goto E_101b7da2;
    case 0x101b7da4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b7da4;
    case 0x101b7db1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b7db1;
    case 0x101b7db3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b7db3;
    case 0x101b7dddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b7ddd;
    case 0x101b7df9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b7df9;
    case 0x101b7e07u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_424 = rd32(sp0 - 0x424u); goto E_101b7e07;
    case 0x101b7e40u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_424 = rd32(sp0 - 0x424u); goto E_101b7e40;
    default: break;
    }
#endif

    COW_AT(101b7d00)
    wr32(sp0 - 0x428u, in_ebx);
    wr32(sp0 - 0x42cu, in_esi);
    wr32(sp0 - 0x430u, in_edi);
    wr32(sp0 - 0x424u, self);
    g->edx = in_edx;
    g->esp = sp0 - 0x430u;
    t1 = cow_call_regs(g, COW_IMG(0x101b6e90u), in_eax, self, g->edx, 1, 0);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        edx = t2;
    }
    else
    {
        eax = t1;
        edx = t2;
    COW_AT(101b7d18)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x430u;
        t3 = cow_thiscall(g, COW_IMG(0x101ad0d0u), self + 0x7e30u, 0);
        t4 = g->edx;
        eax = t3;
        edx = t4;
    }
    COW_AT(101b7d23)
    wr32(sp0 - 0x420u, self + 0x7e30u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x430u;
    t5 = cow_thiscall(g, COW_IMG(0x101ac200u), self + 0x7e30u, 0);
    t6 = g->ecx;
    t7 = g->edx;
    if ((int32_t)t5 <= (int32_t)arg2)
    {
        edx = t7;
        ebx = t5;
        goto L_101b7d73;
    }
    ecx = t6;
    COW_AT(101b7d41)
    eax = COW_IMG(0x1037c7f0u);
L_101b7d51: ;
    COW_AT(101b7d51)
    t8 = rd8(eax);
    wr8(arg1 + eax - COW_IMG(0x1037c7f0u), (uint8_t)t8);
    if ((uint8_t)t8 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t8;
        goto L_101b7d51;
    }
    ecx = (ecx & 0xffffff00u) | t8;
    COW_AT(101b7d5b)
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
    g->ebx = rd32(sp0 - 0x428u);
    g->esi = rd32(sp0 - 0x42cu);
    g->edi = rd32(sp0 - 0x430u);
    g->ebp = in_ebp;
    return t9;
L_101b7d73: ;
    COW_AT(101b7d73)
    wr32(sp0 - 0x434u, in_ebp);
    g->eax = arg2;
    g->edx = edx;
    g->esp = sp0 - 0x434u;
    t10 = cow_thiscall(g, COW_IMG(0x101ac1b0u), self + 0x7e30u, 0);
    t11 = g->edx;
    if ((int32_t)ebx <= 0)
    {
        eax = t10;
        edx = t11;
    COW_AT(101b7da2)
        esi = 0u;
        edi = self + 0x7e30u;
    }
    else
    {
        eax = t10;
        edx = t11;
    COW_AT(101b7d86)
        esi = eax;
        edi = arg1;
        ecx = ebx >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = ebx & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        eax = ebx;
        esi = ebx;
        edi = rd32(sp0 - 0x420u);
    }
    COW_AT(101b7da4)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x434u;
    t12 = cow_thiscall(g, COW_IMG(0x101ac560u), edi, 0);
    t13 = g->edx;
    if ((int32_t)t12 > (int32_t)esi)
    {
        eax = t12;
        goto L_101b7db3;
    }
    eax = t12;
    edx = t13;
    ebx = t12;
    zf = t12 == esi;
    COW_AT(101b7db1)
    if (!zf) goto L_101b7ddd;
L_101b7db3: ;
    COW_AT(101b7db3)
    wr32(sp0 - 0x438u, 0x41au - esi);
    wr32(sp0 - 0x43cu, arg1 + esi);
    g->esp = sp0 - 0x434u;
    t20 = cow_call_regs(g, COW_IMG(0x101b72f0u), eax, rd32(sp0 - 0x424u), g->edx, 0, 2, arg1 + esi, 0x41au - esi);
    wr8(arg1 + esi + t20, 0u);
    g->ebx = rd32(sp0 - 0x428u);
    g->esi = rd32(sp0 - 0x42cu);
    g->edi = rd32(sp0 - 0x430u);
    g->ebp = rd32(sp0 - 0x434u);
    return esi + t20;
L_101b7ddd: ;
    COW_AT(101b7ddd)
    wr32(sp0 - 0x438u, 0x41au - esi);
    wr32(sp0 - 0x43cu, sp0 - 0x41cu);
    t14 = rd32(sp0 - 0x424u);
    g->esp = sp0 - 0x434u;
    t15 = cow_call_regs(g, COW_IMG(0x101b72f0u), 0x41au - esi, t14, g->edx, 0, 2, sp0 - 0x41cu, 0x41au - esi);
    t16 = g->ecx;
    if ((int32_t)ebx < (int32_t)esi)
    {
        ecx = t16;
        edi = t15;
    COW_AT(101b7df9)
        wr32(sp0 - 0x424u, edi + esi);
        if ((int32_t)(edi + esi) < 1050)
        {
            loc_424 = edi + esi;
    COW_AT(101b7e07)
            wr32(sp0 - 0x438u, esi - ebx);
            wr32(sp0 - 0x43cu, arg1 + ebx);
            t17 = arg1 + ebx + edi;
            wr32(sp0 - 0x440u, t17);
            wr32(sp0 - 0x420u, arg1 + ebx);
            g->esp = sp0 - 0x42cu;
            cow_cdecl(g, COW_IMG(0x10314a10u), 5, t17, arg1 + ebx, esi - ebx, rd32(sp0 - 0x434u), rd32(sp0 - 0x430u));
            t18 = rd32(sp0 - 0x420u);
            esi = sp0 - 0x41cu;
            edi = t18;
            ecx = edi >> 2u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            ecx = edi & 3u;
            while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
            t19 = rd32(sp0 - 0x424u);
            wr8(arg1 + t19, 0u);
            esi = t19;
        }
    }
    COW_AT(101b7e40)
    g->ebx = rd32(sp0 - 0x428u);
    g->esi = rd32(sp0 - 0x42cu);
    g->edi = rd32(sp0 - 0x430u);
    g->ebp = rd32(sp0 - 0x434u);
    return esi;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101b7d00(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101b7d18u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
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
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x430u);
        in_esi = rd32(sp0 - 0x42cu);
        in_ebx = rd32(sp0 - 0x428u);
        g->esp = sp0 - 0x430u;
        wr32(sp0 - 0x424u, self);
        (void)sp0;
        return 1;
    }
    case 0x101b7d23u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
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
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x430u);
        in_esi = rd32(sp0 - 0x42cu);
        in_ebx = rd32(sp0 - 0x428u);
        g->esp = sp0 - 0x430u;
        wr32(sp0 - 0x424u, self);
        (void)sp0;
        return 1;
    }
    case 0x101b7d41u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x430u;
        (void)sp0;
        return 1;
    }
    case 0x101b7d51u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x430u;
        g->edx = arg1 - COW_IMG(0x1037c7f0u);
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b7d5bu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x430u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b7d73u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        self = g->edi - 0x7e30u;
        g->esp = sp0 - 0x430u;
        g->eax = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101b7d86u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x434u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b7da2u:
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        self = g->edi - 0x7e30u;
        g->esp = sp0 - 0x434u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b7da4u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x434u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b7db1u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x434u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b7db3u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x434u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b7dddu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x434u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b7df9u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x434u;
        g->ebp = arg1;
        wr32(sp0 - 0x43cu, sp0 - 0x41cu);
        (void)sp0;
        return 1;
    }
    case 0x101b7e07u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_424;
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
        loc_424 = rd32(sp0 - 0x424u);
        g->esp = sp0 - 0x434u;
        g->ebp = arg1;
        wr32(sp0 - 0x43cu, sp0 - 0x41cu);
        (void)sp0;
        return 1;
    }
    case 0x101b7e40u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_424;
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
        loc_424 = rd32(sp0 - 0x424u);
        g->esp = sp0 - 0x434u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101b7d00(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101b7d00(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
