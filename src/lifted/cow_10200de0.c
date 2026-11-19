/* f_0x10200de0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_10200de0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_1b8;
    uint32_t loc_1bc;
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
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 472u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10200dfbu: eax = g->eax; in_edx = g->edx; ebp = g->ebp; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x1bcu); in_ebp = rd32(sp0 - 0x1b8u); g->ebp = rd32(sp0 - 0x1b8u); g->esi = rd32(sp0 - 0x1bcu); goto E_10200dfb;
    case 0x10200e1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10200e1b;
    case 0x10200e33u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10200e33;
    case 0x10200e84u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10200e84;
    case 0x10200e93u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10200e93;
    case 0x10200eaau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10200eaa;
    case 0x10200ee2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10200ee2;
    case 0x10200efdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10200efd;
    case 0x10200f2cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10200f2c;
    case 0x10200f2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10200f2e;
    case 0x10200f3du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10200f3d;
    case 0x10200f74u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10200f74;
    case 0x10200f7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10200f7f;
    case 0x10200f8du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10200f8d;
    case 0x10200f94u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10200f94;
    case 0x10200f9eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_10200f9e;
    case 0x10200fbau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10200fba;
    case 0x10200fc4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_10200fc4;
    case 0x10200fe0u: ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x1bcu); in_ebp = rd32(sp0 - 0x1b8u); g->ebp = rd32(sp0 - 0x1b8u); g->esi = rd32(sp0 - 0x1bcu); goto E_10200fe0;
    case 0x10200fe5u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x1bcu); in_ebp = rd32(sp0 - 0x1b8u); g->ebp = rd32(sp0 - 0x1b8u); g->esi = rd32(sp0 - 0x1bcu); goto E_10200fe5;
    case 0x10200feeu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x1bcu); in_ebp = rd32(sp0 - 0x1b8u); g->ebp = rd32(sp0 - 0x1b8u); g->esi = rd32(sp0 - 0x1bcu); goto E_10200fee;
    case 0x10200ff8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1bc = rd32(sp0 - 0x1bcu); loc_1b8 = rd32(sp0 - 0x1b8u); goto E_10200ff8;
    default: break;
    }
#endif

    COW_AT(10200de0)
    wr32(sp0 - 0x1b8u, in_ebp);
    wr32(sp0 - 0x1bcu, in_esi);
    wr8(COW_IMG(0x10663ac8u), 0u);
    if (arg3 != 0u) goto L_10200fe0;
    COW_AT(10200dfb)
    wr32(sp0 - 0x1c0u, (uint16_t)arg2);
    wr32(sp0 - 0x1b0u, (uint16_t)arg2);
    g->eax = (uint16_t)arg2;
    g->edx = in_edx;
    g->esp = sp0 - 0x1bcu;
    t1 = cow_cdecl(g, COW_IMG(0x10200aa0u), 1, (uint16_t)arg2);
    t2 = g->edx;
    if (t1 != 0xbu)
    {
        edx = t2;
        ebp = t1;
        goto L_10200e33;
    }
    eax = t1;
    edx = t2;
    COW_AT(10200e1b)
    wr32(sp0 - 0x1c0u, 0x60u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1bcu;
    t3 = cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x60u);
    t4 = g->edx;
    g->esi = rd32(sp0 - 0x1bcu);
    g->edi = in_edi;
    g->ebp = rd32(sp0 - 0x1b8u);
    g->edx = t4;
    return t3 & 0xffffff00u;
L_10200e33: ;
    COW_AT(10200e33)
    wr32(sp0 - 0x1c0u, in_edi);
    wr8(sp0 - 0x1b4u, 0x12u);
    t5 = rd32(arg5 + 8u);
    wr8(sp0 - 0x1b3u, 0u);
    wr32(sp0 - 0x1c4u, t5);
    wr32(sp0 - 0x1c8u, COW_IMG(0x10385260u));
    wr32(sp0 - 0x1ccu, sp0 - 0x1acu);
    wr8(sp0 - 0x1b2u, 0u);
    g->esp = sp0 - 0x1b8u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x1acu, COW_IMG(0x10385260u), t5, in_edi, rd32(sp0 - 0x1bcu));
    wr32(sp0 - 0x1c4u, 0u);
    wr32(sp0 - 0x1c8u, 1u);
    wr32(sp0 - 0x1ccu, 0u);
    wr32(sp0 - 0x1d0u, sp0 - 0x1b4u);
    wr32(sp0 - 0x1d4u, sp0 - 0x1acu);
    t6 = rd32(COW_IMG(0x10578158u));
    g->esp = sp0 - 0x1c0u;
    cow_thiscall(g, COW_IMG(0x10127c00u), t6, 5, sp0 - 0x1acu, sp0 - 0x1b4u, 0u, 1u, 0u);
    t7 = g->ecx;
    if (ebp > 0xcu)
    {
        ecx = t7;
        goto L_10200f2c;
    }
    COW_AT(10200e84)
    t8 = rd32(COW_IMG(0x10201004u) + rd8(COW_IMG(0x1020100cu) + ebp) * 4u);
    ecx = rd8(COW_IMG(0x1020100cu) + ebp);
    switch (t8 - RD)
    {
    case 0x10200e93u: goto L_10200e93;
    case 0x10200f2cu: goto L_10200f2c;
    default: rt_fatal(g, COW_IMG(0x10200e8cu), "switch");
    }
    return 0;
L_10200e93: ;
    COW_AT(10200e93)
    t9 = rd32(arg5 + 0x10u);
    edi = t9;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx - 1u > 0x12cu)
    {
        ecx = ~ecx - 1u;
    }
    else
    {
        ecx = ~ecx - 1u;
        edx = t9;
    COW_AT(10200eaa)
        wr32(sp0 - 0x1c4u, edx);
        wr32(sp0 - 0x1c8u, COW_IMG(0x10385254u));
        wr32(sp0 - 0x1ccu, sp0 - 0x1acu);
        g->ecx = ecx;
        g->edx = sp0 - 0x1acu;
        g->esp = sp0 - 0x1b8u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x1acu, COW_IMG(0x10385254u), edx, rd32(sp0 - 0x1c0u), rd32(sp0 - 0x1bcu));
        t10 = g->ecx;
        t11 = g->edx;
        wr32(sp0 - 0x1d0u, sp0 - 0x1acu);
        g->esp = sp0 - 0x1ccu;
        t12 = cow_call_regs(g, COW_IMG(0x101ba200u), sp0 - 0x1acu, g->ecx, g->edx, 1, 1, sp0 - 0x1acu);
        wr32(sp0 - 0x1c4u, 0u);
        wr32(sp0 - 0x1c8u, 1u);
        wr32(sp0 - 0x1ccu, 0u);
        wr32(sp0 - 0x1d0u, sp0 - 0x1b4u);
        wr32(sp0 - 0x1d4u, sp0 - 0x1acu);
        t13 = rd32(COW_IMG(0x10578158u));
        g->esp = sp0 - 0x1c0u;
        cow_thiscall(g, COW_IMG(0x10127c00u), t13, 5, sp0 - 0x1acu, sp0 - 0x1b4u, 0u, 1u, 0u);
        t14 = g->ecx;
        ecx = t14;
    }
    COW_AT(10200ee2)
    t15 = rd32(arg5 + 0x14u);
    edi = t15;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx - 1u > 0x12cu) goto L_10200f7f;
    ecx = ~ecx - 1u;
    edx = t15;
    COW_AT(10200efd)
    wr32(sp0 - 0x1c4u, edx);
    wr32(sp0 - 0x1c8u, COW_IMG(0x10385248u));
    wr32(sp0 - 0x1ccu, sp0 - 0x1acu);
    g->eax = sp0 - 0x1acu;
    g->edx = edx;
    g->esp = sp0 - 0x1b8u;
    t16 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x1acu, COW_IMG(0x10385248u), edx, rd32(sp0 - 0x1c0u), rd32(sp0 - 0x1bcu));
    t17 = g->edx;
    wr32(sp0 - 0x1d0u, sp0 - 0x1acu);
    g->esp = sp0 - 0x1ccu;
    cow_call_regs(g, COW_IMG(0x101ba200u), t16, g->ecx, g->edx, 1, 1, sp0 - 0x1acu);
    wr32(sp0 - 0x1c4u, 0u);
    wr32(sp0 - 0x1c8u, 1u);
    wr32(sp0 - 0x1ccu, 0u);
    wr32(sp0 - 0x1d0u, sp0 - 0x1b4u);
    wr32(sp0 - 0x1d4u, sp0 - 0x1acu);
    eax = sp0 - 0x1acu;
    edx = sp0 - 0x1b4u;
L_10200f74: ;
    COW_AT(10200f74)
    g->esp = sp0 - 0x1c0u;
    cow_thiscall(g, COW_IMG(0x10127c00u), rd32(COW_IMG(0x10578158u)), 5, sp0 - 0x1acu, sp0 - 0x1b4u, 0u, 1u, 0u);
L_10200f7f: ;
    COW_AT(10200f7f)
    if (rd32(rd32(COW_IMG(0x10663abcu)) + 8u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x10663abcu)) + 8u);
        edx = rd32(COW_IMG(0x10663abcu));
        edi = rd32(sp0 - 0x1c0u);
        loc_1b8 = rd32(sp0 - 0x1b8u);
        loc_1bc = rd32(sp0 - 0x1bcu);
        goto L_10200ff8;
    }
    edx = rd32(COW_IMG(0x10663abcu));
    edi = rd32(sp0 - 0x1c0u);
    COW_AT(10200f8d)
    if (rd32(sp0 - 0x1b0u) == 1u)
    {
        eax = rd32(sp0 - 0x1b0u) - 1u;
        goto L_10200fba;
    }
    eax = rd32(sp0 - 0x1b0u) - 1u;
    COW_AT(10200f94)
    if (rd32(COW_IMG(0x10663ac0u)) == 0u)
    {
        loc_1b8 = rd32(sp0 - 0x1b8u);
        loc_1bc = rd32(sp0 - 0x1bcu);
        goto L_10200ff8;
    }
    ecx = rd32(COW_IMG(0x10663ac0u));
    pf = PARITY((uint8_t)rd32(COW_IMG(0x10663ac0u)));
    zf = rd32(COW_IMG(0x10663ac0u)) == 0u;
    sf = (int32_t)rd32(COW_IMG(0x10663ac0u)) < 0;
    COW_AT(10200f9e)
    wr32(sp0 - 0x1c0u, ebp);
    t22 = rd32(arg5 + 0x18u);
    wr32(sp0 - 0x1c4u, t22);
    t23 = rd32(arg5 + 4u);
    wr32(sp0 - 0x1c8u, t23);
    wr32(sp0 - 0x1ccu, rd32(arg5));
    g->cf = 0u;
    g->pf = pf;
    g->af = 0u;
    g->zf = zf;
    g->sf = sf;
    g->of = 0u;
    g->eax = rd32(arg5);
    g->edx = t23;
    t24 = rd32(arg5);
    g->esp = sp0 - 0x1bcu;
    t25 = cow_thiscall(g, COW_IMG(0x10200160u), ecx, 4, t24, t23, t22, ebp);
    t26 = g->edx;
    g->esi = rd32(sp0 - 0x1bcu);
    g->edi = edi;
    g->ebp = rd32(sp0 - 0x1b8u);
    g->edx = t26;
    return t25 & 0xffffff00u;
L_10200f2c: ;
    COW_AT(10200f2c)
    eax = 0u;
L_10200f2e: ;
    COW_AT(10200f2e)
    t18 = rd8(COW_IMG(0x10385240u) + eax);
    wr8(eax + sp0 - 0x1acu, (uint8_t)t18);
    if ((uint8_t)t18 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t18;
        goto L_10200f2e;
    }
    ecx = (ecx & 0xffffff00u) | t18;
    COW_AT(10200f3d)
    t19 = rd32(sp0 - 0x1b0u);
    edi = sp0 - 0x1acu;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    wr32(sp0 - 0x1c4u, 0u);
    wr32(sp0 - 0x1c8u, 0x12cu);
    t20 = sp0 + ~ecx - 0x1adu;
    wr32(sp0 - 0x1ccu, t20);
    wr32(sp0 - 0x1d0u, t19);
    g->edx = t19;
    g->esp = sp0 - 0x1c0u;
    cow_cdecl(g, COW_IMG(0x10311ab1u), 4, t19, t20, 0x12cu, 0u);
    t21 = g->edx;
    wr32(sp0 - 0x1c4u, 0u);
    wr32(sp0 - 0x1c8u, 1u);
    wr32(sp0 - 0x1ccu, 0u);
    wr32(sp0 - 0x1d0u, sp0 - 0x1b4u);
    wr32(sp0 - 0x1d4u, sp0 - 0x1acu);
    eax = sp0 - 0x1b4u;
    edx = t21;
    goto L_10200f74;
L_10200fba: ;
    COW_AT(10200fba)
    if (rd32(COW_IMG(0x10663ac4u)) == 0u)
    {
        loc_1b8 = rd32(sp0 - 0x1b8u);
        loc_1bc = rd32(sp0 - 0x1bcu);
        goto L_10200ff8;
    }
    ecx = rd32(COW_IMG(0x10663ac4u));
    pf = PARITY((uint8_t)rd32(COW_IMG(0x10663ac4u)));
    zf = rd32(COW_IMG(0x10663ac4u)) == 0u;
    sf = (int32_t)rd32(COW_IMG(0x10663ac4u)) < 0;
    COW_AT(10200fc4)
    wr32(sp0 - 0x1c0u, ebp);
    t27 = rd32(arg5 + 0x18u);
    wr32(sp0 - 0x1c4u, t27);
    t28 = rd32(arg5 + 4u);
    wr32(sp0 - 0x1c8u, t28);
    wr32(sp0 - 0x1ccu, rd32(arg5));
    g->cf = 0u;
    g->pf = pf;
    g->af = 0u;
    g->zf = zf;
    g->sf = sf;
    g->of = 0u;
    g->eax = t28;
    g->edx = rd32(arg5);
    t29 = rd32(arg5);
    g->esp = sp0 - 0x1bcu;
    t30 = cow_thiscall(g, COW_IMG(0x10200160u), ecx, 4, t29, t28, t27, ebp);
    t31 = g->edx;
    g->esi = rd32(sp0 - 0x1bcu);
    g->edi = edi;
    g->ebp = rd32(sp0 - 0x1b8u);
    g->edx = t31;
    return t30 & 0xffffff00u;
L_10200fe0: ;
    COW_AT(10200fe0)
    if (arg3 != 1u)
    {
        eax = arg3;
        edx = in_edx;
        edi = in_edi;
        loc_1b8 = in_ebp;
        loc_1bc = in_esi;
    }
    else
    {
    COW_AT(10200fe5)
        if (rd32(COW_IMG(0x105781f8u)) == 0u)
        {
            eax = rd32(COW_IMG(0x105781f8u));
            edx = in_edx;
            edi = in_edi;
            loc_1b8 = in_ebp;
            loc_1bc = in_esi;
        }
        else
        {
            eax = rd32(COW_IMG(0x105781f8u));
    COW_AT(10200fee)
            wr32(sp0 - 0x1c0u, 0x10u);
            g->eax = eax;
            g->edx = in_edx;
            g->esp = sp0 - 0x1bcu;
            t32 = cow_thiscall(g, COW_IMG(0x10221300u), eax + 0x20u, 1, 0x10u);
            t33 = g->edx;
            eax = t32;
            edx = t33;
            edi = in_edi;
            loc_1b8 = in_ebp;
            loc_1bc = in_esi;
        }
    }
L_10200ff8: ;
    COW_AT(10200ff8)
    g->esi = loc_1bc;
    g->edi = edi;
    g->ebp = loc_1b8;
    g->edx = edx;
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10200de0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10200dfbu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        in_edx = g->edx;
        ebp = g->ebp;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x1bcu);
        in_ebp = rd32(sp0 - 0x1b8u);
        g->esp = sp0 - 0x1bcu;
        (void)sp0;
        return 1;
    }
    case 0x10200e1bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1bcu;
        (void)sp0;
        return 1;
    }
    case 0x10200e33u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1bcu;
        wr32(sp0 - 0x1b0u, (uint16_t)arg2);
        (void)sp0;
        return 1;
    }
    case 0x10200e84u:
    {
        unsigned af;
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1c0u;
        g->esi = arg5;
        wr32(sp0 - 0x1d4u, sp0 - 0x1acu);
        wr32(sp0 - 0x1d0u, sp0 - 0x1b4u);
        (void)sp0;
        return 1;
    }
    case 0x10200e93u:
    {
        unsigned af;
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1c0u;
        g->esi = arg5;
        wr32(sp0 - 0x1d4u, sp0 - 0x1acu);
        wr32(sp0 - 0x1d0u, sp0 - 0x1b4u);
        (void)sp0;
        return 1;
    }
    case 0x10200eaau:
    {
        unsigned af;
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1c0u;
        g->esi = arg5;
        wr32(sp0 - 0x1d4u, sp0 - 0x1acu);
        wr32(sp0 - 0x1d0u, sp0 - 0x1b4u);
        (void)sp0;
        return 1;
    }
    case 0x10200ee2u:
    {
        unsigned af;
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1c0u;
        g->esi = arg5;
        wr32(sp0 - 0x1d4u, sp0 - 0x1acu);
        wr32(sp0 - 0x1d0u, sp0 - 0x1b4u);
        (void)sp0;
        return 1;
    }
    case 0x10200efdu:
    {
        unsigned af;
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1c0u;
        g->esi = arg5;
        wr32(sp0 - 0x1d4u, sp0 - 0x1acu);
        wr32(sp0 - 0x1d0u, sp0 - 0x1b4u);
        (void)sp0;
        return 1;
    }
    case 0x10200f2cu:
    {
        unsigned af;
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1c0u;
        g->esi = arg5;
        wr32(sp0 - 0x1d4u, sp0 - 0x1acu);
        wr32(sp0 - 0x1d0u, sp0 - 0x1b4u);
        (void)sp0;
        return 1;
    }
    case 0x10200f2eu:
    {
        unsigned af;
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1c0u;
        g->esi = arg5;
        wr32(sp0 - 0x1d4u, sp0 - 0x1acu);
        wr32(sp0 - 0x1d0u, sp0 - 0x1b4u);
        (void)sp0;
        return 1;
    }
    case 0x10200f3du:
    {
        unsigned af;
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1c0u;
        g->esi = arg5;
        wr32(sp0 - 0x1d4u, sp0 - 0x1acu);
        wr32(sp0 - 0x1d0u, sp0 - 0x1b4u);
        (void)sp0;
        return 1;
    }
    case 0x10200f74u:
    {
        unsigned af;
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1d4u;
        g->esi = arg5;
        wr32(sp0 - 0x1d4u, sp0 - 0x1acu);
        wr32(sp0 - 0x1d0u, sp0 - 0x1b4u);
        wr32(sp0 - 0x1ccu, 0u);
        wr32(sp0 - 0x1c8u, 1u);
        wr32(sp0 - 0x1c4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10200f7fu:
    {
        unsigned af;
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1c0u;
        g->esi = arg5;
        wr32(sp0 - 0x1d4u, sp0 - 0x1acu);
        wr32(sp0 - 0x1d0u, sp0 - 0x1b4u);
        (void)sp0;
        return 1;
    }
    case 0x10200f8du:
    {
        unsigned af;
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1bcu;
        g->esi = arg5;
        wr32(sp0 - 0x1d4u, sp0 - 0x1acu);
        wr32(sp0 - 0x1d0u, sp0 - 0x1b4u);
        (void)sp0;
        return 1;
    }
    case 0x10200f94u:
    {
        unsigned af;
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1bcu;
        g->esi = arg5;
        wr32(sp0 - 0x1d4u, sp0 - 0x1acu);
        wr32(sp0 - 0x1d0u, sp0 - 0x1b4u);
        (void)sp0;
        return 1;
    }
    case 0x10200f9eu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x1bcu;
        g->esi = arg5;
        g->cf = (uint8_t)(0u);
        g->af = (uint8_t)(0u);
        g->of = (uint8_t)(0u);
        wr32(sp0 - 0x1d4u, sp0 - 0x1acu);
        wr32(sp0 - 0x1d0u, sp0 - 0x1b4u);
        (void)sp0;
        return 1;
    }
    case 0x10200fbau:
    {
        unsigned af;
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1bcu;
        g->esi = arg5;
        wr32(sp0 - 0x1d4u, sp0 - 0x1acu);
        wr32(sp0 - 0x1d0u, sp0 - 0x1b4u);
        (void)sp0;
        return 1;
    }
    case 0x10200fc4u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x1bcu;
        g->esi = arg5;
        g->cf = (uint8_t)(0u);
        g->af = (uint8_t)(0u);
        g->of = (uint8_t)(0u);
        wr32(sp0 - 0x1d4u, sp0 - 0x1acu);
        wr32(sp0 - 0x1d0u, sp0 - 0x1b4u);
        (void)sp0;
        return 1;
    }
    case 0x10200fe0u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x1bcu);
        in_ebp = rd32(sp0 - 0x1b8u);
        g->esp = sp0 - 0x1bcu;
        g->eax = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10200fe5u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t in_ebp;
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
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x1bcu);
        in_ebp = rd32(sp0 - 0x1b8u);
        g->esp = sp0 - 0x1bcu;
        (void)sp0;
        return 1;
    }
    case 0x10200feeu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t in_ebp;
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
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x1bcu);
        in_ebp = rd32(sp0 - 0x1b8u);
        g->esp = sp0 - 0x1bcu;
        (void)sp0;
        return 1;
    }
    case 0x10200ff8u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1b8;
        uint32_t loc_1bc;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1bc = rd32(sp0 - 0x1bcu);
        loc_1b8 = rd32(sp0 - 0x1b8u);
        g->esp = sp0 - 0x1bcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10200de0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10200de0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
