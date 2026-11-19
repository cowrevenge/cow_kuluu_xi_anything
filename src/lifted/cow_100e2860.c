/* f_0x100e2860 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100e2860(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t loc_10b4;
    uint32_t loc_10b8;
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
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 4332u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100e287au: eax = g->eax; ecx = g->ecx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x10b8u); in_ebx = rd32(sp0 - 0x10b4u); g->ebx = rd32(sp0 - 0x10b4u); g->esi = rd32(sp0 - 0x10b8u); goto E_100e287a;
    case 0x100e2886u: eax = g->eax; ecx = g->ecx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x10b8u); in_ebx = rd32(sp0 - 0x10b4u); g->ebx = rd32(sp0 - 0x10b4u); g->esi = rd32(sp0 - 0x10b8u); goto E_100e2886;
    case 0x100e288du: eax = g->eax; ecx = g->ecx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x10b8u); in_ebx = rd32(sp0 - 0x10b4u); g->ebx = rd32(sp0 - 0x10b4u); g->esi = rd32(sp0 - 0x10b8u); goto E_100e288d;
    case 0x100e2898u: eax = g->eax; ecx = g->ecx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x10b8u); in_ebx = rd32(sp0 - 0x10b4u); g->ebx = rd32(sp0 - 0x10b4u); g->esi = rd32(sp0 - 0x10b8u); goto E_100e2898;
    case 0x100e28a3u: eax = g->eax; ecx = g->ecx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x10b8u); in_ebx = rd32(sp0 - 0x10b4u); g->ebx = rd32(sp0 - 0x10b4u); g->esi = rd32(sp0 - 0x10b8u); goto E_100e28a3;
    case 0x100e291cu: eax = g->eax; ecx = g->ecx; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100e291c;
    case 0x100e2923u: eax = g->eax; ecx = g->ecx; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100e2923;
    case 0x100e2962u: ecx = g->ecx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100e2962;
    case 0x100e2967u: eax = g->eax; ecx = g->ecx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100e2967;
    case 0x100e296bu: eax = g->eax; ecx = g->ecx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100e296b;
    case 0x100e2979u: eax = g->eax; ecx = g->ecx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_10b8 = rd32(sp0 - 0x10b8u); loc_10b4 = rd32(sp0 - 0x10b4u); goto E_100e2979;
    default: break;
    }
#endif

    COW_AT(100e2860)
    wr32(sp0 - 0x10b4u, in_ebx);
    wr32(sp0 - 0x10b8u, in_esi);
    if (rd32(arg2 + 4u) != 0u) goto L_100e2898;
    COW_AT(100e287a)
    if (rd16(arg2 + 8u) < rd32(arg2))
    {
        eax = rd16(arg2 + 8u);
        goto L_100e288d;
    }
    eax = rd16(arg2 + 8u);
    ecx = rd32(arg2);
    COW_AT(100e2886)
    if (ecx < eax + 0x14u) goto L_100e2898;
    eax = eax + 0x14u;
L_100e288d: ;
    COW_AT(100e288d)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return (eax & 0xffffff00u) | 1u;
L_100e2898: ;
    COW_AT(100e2898)
    if (rd32(arg2) <= 0x1cu)
    {
        eax = rd32(arg2);
        loc_10b4 = in_ebx;
        loc_10b8 = in_esi;
        goto L_100e2979;
    }
    eax = rd32(arg2);
    COW_AT(100e28a3)
    wr32(sp0 - 0x10bcu, sp0 - 0x10b0u);
    t1 = rd32(arg2 + eax - 4u);
    wr32(arg1 + 0x1e84u, t1);
    g->eax = t1;
    g->ecx = sp0 - 0x10b0u;
    g->esp = sp0 - 0x10b8u;
    t2 = cow_cdecl(g, COW_IMG(0x100dde90u), 1, sp0 - 0x10b0u);
    t3 = g->ecx;
    wr32(sp0 - 0x10c0u, 0x18u);
    wr32(sp0 - 0x10c4u, arg1 + 0x1e74u);
    wr32(sp0 - 0x10c8u, sp0 - 0x10b0u);
    g->ecx = t3;
    g->edx = sp0 - 0x10b0u;
    g->esp = sp0 - 0x1034u;
    cow_bridge_indirect(g, COW_IMG(0x100ddec0u), 0u, 37u, (const uint32_t[]){sp0 - 0x10b0u, arg1 + 0x1e74u, 0x18u, sp0 - 0x10b0u, in_esi, in_ebx, rd32(sp0 - 0x10b0u), rd32(sp0 - 0x10acu), rd32(sp0 - 0x10a8u), rd32(sp0 - 0x10a4u), rd32(sp0 - 0x10a0u), rd32(sp0 - 0x109cu), rd32(sp0 - 0x1098u), rd32(sp0 - 0x1094u), rd32(sp0 - 0x1090u), rd32(sp0 - 0x108cu), rd32(sp0 - 0x1088u), rd32(sp0 - 0x1084u), rd32(sp0 - 0x1080u), rd32(sp0 - 0x107cu), rd32(sp0 - 0x1078u), rd32(sp0 - 0x1074u), rd32(sp0 - 0x1070u), rd32(sp0 - 0x106cu), rd32(sp0 - 0x1068u), rd32(sp0 - 0x1064u), rd32(sp0 - 0x1060u), rd32(sp0 - 0x105cu), rd32(sp0 - 0x1058u), rd32(sp0 - 0x1054u), rd32(sp0 - 0x1050u), rd32(sp0 - 0x104cu), rd32(sp0 - 0x1048u), rd32(sp0 - 0x1044u), rd32(sp0 - 0x1040u), rd32(sp0 - 0x103cu), rd32(sp0 - 0x1038u)}, g->ecx, g->edx, g->eax, 148u);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(sp0 - 0x10ccu, sp0 - 0x10b0u);
    g->eax = sp0 - 0x10b0u;
    g->esp = sp0 - 0x1038u;
    t6 = cow_bridge_indirect(g, COW_IMG(0x100ddf60u), 0u, 37u, (const uint32_t[]){sp0 - 0x10b0u, sp0 - 0x10b0u, arg1 + 0x1e74u, 0x18u, sp0 - 0x10b0u, in_esi, in_ebx, rd32(sp0 - 0x10b0u), rd32(sp0 - 0x10acu), rd32(sp0 - 0x10a8u), rd32(sp0 - 0x10a4u), rd32(sp0 - 0x10a0u), rd32(sp0 - 0x109cu), rd32(sp0 - 0x1098u), rd32(sp0 - 0x1094u), rd32(sp0 - 0x1090u), rd32(sp0 - 0x108cu), rd32(sp0 - 0x1088u), rd32(sp0 - 0x1084u), rd32(sp0 - 0x1080u), rd32(sp0 - 0x107cu), rd32(sp0 - 0x1078u), rd32(sp0 - 0x1074u), rd32(sp0 - 0x1070u), rd32(sp0 - 0x106cu), rd32(sp0 - 0x1068u), rd32(sp0 - 0x1064u), rd32(sp0 - 0x1060u), rd32(sp0 - 0x105cu), rd32(sp0 - 0x1058u), rd32(sp0 - 0x1054u), rd32(sp0 - 0x1050u), rd32(sp0 - 0x104cu), rd32(sp0 - 0x1048u), rd32(sp0 - 0x1044u), rd32(sp0 - 0x1040u), rd32(sp0 - 0x103cu)}, g->ecx, g->edx, g->eax, 148u);
    wr32(sp0 - 0x10d0u, 0x10u);
    wr32(sp0 - 0x10d4u, sp0 - 0x1058u);
    wr32(sp0 - 0x10d8u, 0x1048u);
    wr32(sp0 - 0x10dcu, sp0 - 0x1048u);
    g->edx = sp0 - 0x1048u;
    g->esp = sp0 - 0x10ccu;
    cow_thiscall_cdecl(g, COW_IMG(0x100dc710u), sp0 - 0x1058u, 4, sp0 - 0x1048u, 0x1048u, sp0 - 0x1058u, 0x10u);
    t7 = g->edx;
    t8 = rd32(arg2) - 0xcu;
    wr32(sp0 - 0x10e0u, t8);
    wr32(sp0 - 0x10e4u, arg2 + 8u);
    wr32(sp0 - 0x10e8u, sp0 - 0x1048u);
    g->eax = t8;
    g->esp = sp0 - 0x10d4u;
    t9 = cow_cdecl(g, COW_IMG(0x100dcf60u), 5, sp0 - 0x1048u, arg2 + 8u, t8, sp0 - 0x1048u, 0x1048u);
    if (rd16(arg2 + 8u) >= rd32(arg2))
    {
        eax = rd16(arg2 + 8u);
        loc_10b4 = in_ebx;
        loc_10b8 = in_esi;
        goto L_100e2979;
    }
    eax = rd16(arg2 + 8u);
    ecx = rd32(arg2);
    COW_AT(100e291c)
    if (ecx < eax + 0x14u)
    {
        eax = eax + 0x14u;
        loc_10b4 = rd32(sp0 - 0x10b4u);
        loc_10b8 = rd32(sp0 - 0x10b8u);
        goto L_100e2979;
    }
    eax = eax + 0x14u;
    COW_AT(100e2923)
    wr32(sp0 - 0x10bcu, in_edi);
    wr32(sp0 - 0x10c0u, sp0 - 0x10b0u);
    g->edx = sp0 - 0x10b0u;
    g->esp = sp0 - 0x10bcu;
    cow_cdecl(g, COW_IMG(0x100dde90u), 1, sp0 - 0x10b0u);
    t10 = g->edx;
    t11 = rd32(arg2) - 0x1cu;
    wr32(sp0 - 0x10c4u, t11);
    wr32(sp0 - 0x10c8u, arg2 + 8u);
    wr32(sp0 - 0x10ccu, sp0 - 0x10b0u);
    g->eax = t11;
    g->ecx = sp0 - 0x10b0u;
    g->esp = sp0 - 0x1038u;
    t12 = cow_bridge_indirect(g, COW_IMG(0x100ddec0u), 0u, 37u, (const uint32_t[]){sp0 - 0x10b0u, arg2 + 8u, t11, sp0 - 0x10b0u, in_edi, rd32(sp0 - 0x10b8u), rd32(sp0 - 0x10b4u), rd32(sp0 - 0x10b0u), rd32(sp0 - 0x10acu), rd32(sp0 - 0x10a8u), rd32(sp0 - 0x10a4u), rd32(sp0 - 0x10a0u), rd32(sp0 - 0x109cu), rd32(sp0 - 0x1098u), rd32(sp0 - 0x1094u), rd32(sp0 - 0x1090u), rd32(sp0 - 0x108cu), rd32(sp0 - 0x1088u), rd32(sp0 - 0x1084u), rd32(sp0 - 0x1080u), rd32(sp0 - 0x107cu), rd32(sp0 - 0x1078u), rd32(sp0 - 0x1074u), rd32(sp0 - 0x1070u), rd32(sp0 - 0x106cu), rd32(sp0 - 0x1068u), rd32(sp0 - 0x1064u), rd32(sp0 - 0x1060u), rd32(sp0 - 0x105cu), rd32(sp0 - 0x1058u), rd32(sp0 - 0x1054u), rd32(sp0 - 0x1050u), rd32(sp0 - 0x104cu), rd32(sp0 - 0x1048u), rd32(sp0 - 0x1044u), rd32(sp0 - 0x1040u), rd32(sp0 - 0x103cu)}, g->ecx, g->edx, g->eax, 148u);
    t13 = g->ecx;
    wr32(sp0 - 0x10d0u, sp0 - 0x10b0u);
    g->esp = sp0 - 0x103cu;
    cow_bridge_indirect(g, COW_IMG(0x100ddf60u), 0u, 37u, (const uint32_t[]){sp0 - 0x10b0u, sp0 - 0x10b0u, arg2 + 8u, rd32(sp0 - 0x10c4u), sp0 - 0x10b0u, in_edi, rd32(sp0 - 0x10b8u), rd32(sp0 - 0x10b4u), rd32(sp0 - 0x10b0u), rd32(sp0 - 0x10acu), rd32(sp0 - 0x10a8u), rd32(sp0 - 0x10a4u), rd32(sp0 - 0x10a0u), rd32(sp0 - 0x109cu), rd32(sp0 - 0x1098u), rd32(sp0 - 0x1094u), rd32(sp0 - 0x1090u), rd32(sp0 - 0x108cu), rd32(sp0 - 0x1088u), rd32(sp0 - 0x1084u), rd32(sp0 - 0x1080u), rd32(sp0 - 0x107cu), rd32(sp0 - 0x1078u), rd32(sp0 - 0x1074u), rd32(sp0 - 0x1070u), rd32(sp0 - 0x106cu), rd32(sp0 - 0x1068u), rd32(sp0 - 0x1064u), rd32(sp0 - 0x1060u), rd32(sp0 - 0x105cu), rd32(sp0 - 0x1058u), rd32(sp0 - 0x1054u), rd32(sp0 - 0x1050u), rd32(sp0 - 0x104cu), rd32(sp0 - 0x1048u), rd32(sp0 - 0x1044u), rd32(sp0 - 0x1040u)}, g->ecx, g->edx, g->eax, 148u);
    esi = arg2 + rd32(arg2) - 0x14u;
    edi = sp0 - 0x1058u;
    ecx = 0x10u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (zf)
    {
        eax = 0u;
    }
    else
    {
    COW_AT(100e2962)
        eax = -cf + 1u - cf;
    }
    COW_AT(100e2967)
    if (eax != 0u)
    {
        loc_10b4 = rd32(sp0 - 0x10b4u);
        loc_10b8 = rd32(sp0 - 0x10b8u);
        goto L_100e2979;
    }
    COW_AT(100e296b)
    wr32(arg2 + 4u, eax);
    g->ebx = rd32(sp0 - 0x10b4u);
    g->esi = rd32(sp0 - 0x10b8u);
    g->edi = in_edi;
    return (eax & 0xffffff00u) | 1u;
L_100e2979: ;
    COW_AT(100e2979)
    g->ebx = loc_10b4;
    g->esi = loc_10b8;
    g->edi = in_edi;
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100e2860(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100e287au:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x10b8u);
        in_ebx = rd32(sp0 - 0x10b4u);
        g->esp = sp0 - 0x10b8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e2886u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x10b8u);
        in_ebx = rd32(sp0 - 0x10b4u);
        g->esp = sp0 - 0x10b8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e288du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x10b8u);
        in_ebx = rd32(sp0 - 0x10b4u);
        g->esp = sp0 - 0x10b8u;
        (void)sp0;
        return 1;
    }
    case 0x100e2898u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x10b8u);
        in_ebx = rd32(sp0 - 0x10b4u);
        g->esp = sp0 - 0x10b8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e28a3u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x10b8u);
        in_ebx = rd32(sp0 - 0x10b4u);
        g->esp = sp0 - 0x10b8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e291cu:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10b8u;
        g->ebx = arg2;
        g->esi = arg2 + 8u;
        wr32(sp0 - 0x10e8u, sp0 - 0x1048u);
        wr32(sp0 - 0x10dcu, sp0 - 0x1048u);
        wr32(sp0 - 0x10d4u, sp0 - 0x1058u);
        wr32(sp0 - 0x10ccu, sp0 - 0x10b0u);
        wr32(sp0 - 0x10c8u, sp0 - 0x10b0u);
        wr32(sp0 - 0x10bcu, sp0 - 0x10b0u);
        (void)sp0;
        return 1;
    }
    case 0x100e2923u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10b8u;
        g->ebx = arg2;
        g->esi = arg2 + 8u;
        wr32(sp0 - 0x10e8u, sp0 - 0x1048u);
        wr32(sp0 - 0x10dcu, sp0 - 0x1048u);
        wr32(sp0 - 0x10d4u, sp0 - 0x1058u);
        wr32(sp0 - 0x10ccu, sp0 - 0x10b0u);
        wr32(sp0 - 0x10c8u, sp0 - 0x10b0u);
        wr32(sp0 - 0x10bcu, sp0 - 0x10b0u);
        (void)sp0;
        return 1;
    }
    case 0x100e2962u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10b8u;
        g->eax = 0u;
        g->ebx = arg2;
        wr32(sp0 - 0x10e8u, sp0 - 0x1048u);
        wr32(sp0 - 0x10dcu, sp0 - 0x1048u);
        wr32(sp0 - 0x10d4u, sp0 - 0x1058u);
        wr32(sp0 - 0x10d0u, sp0 - 0x10b0u);
        wr32(sp0 - 0x10ccu, sp0 - 0x10b0u);
        wr32(sp0 - 0x10c0u, sp0 - 0x10b0u);
        (void)sp0;
        return 1;
    }
    case 0x100e2967u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10b8u;
        g->ebx = arg2;
        wr32(sp0 - 0x10e8u, sp0 - 0x1048u);
        wr32(sp0 - 0x10dcu, sp0 - 0x1048u);
        wr32(sp0 - 0x10d4u, sp0 - 0x1058u);
        wr32(sp0 - 0x10d0u, sp0 - 0x10b0u);
        wr32(sp0 - 0x10ccu, sp0 - 0x10b0u);
        wr32(sp0 - 0x10c0u, sp0 - 0x10b0u);
        (void)sp0;
        return 1;
    }
    case 0x100e296bu:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x10b8u;
        g->ebx = arg2;
        wr32(sp0 - 0x10e8u, sp0 - 0x1048u);
        wr32(sp0 - 0x10dcu, sp0 - 0x1048u);
        wr32(sp0 - 0x10d4u, sp0 - 0x1058u);
        wr32(sp0 - 0x10d0u, sp0 - 0x10b0u);
        wr32(sp0 - 0x10ccu, sp0 - 0x10b0u);
        wr32(sp0 - 0x10c0u, sp0 - 0x10b0u);
        (void)sp0;
        return 1;
    }
    case 0x100e2979u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t loc_10b4;
        uint32_t loc_10b8;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_10b8 = rd32(sp0 - 0x10b8u);
        loc_10b4 = rd32(sp0 - 0x10b4u);
        g->esp = sp0 - 0x10b8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100e2860(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100e2860(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
