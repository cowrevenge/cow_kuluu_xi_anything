/* f_0x101ed810 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101ed810(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_104;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
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
    uint32_t t34;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_esi = g->esi;
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 284u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101ed828u: eax = g->eax; ecx = g->ecx; in_esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101ed828;
    case 0x101ed835u: eax = g->eax; ecx = g->ecx; in_esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101ed835;
    case 0x101ed838u: eax = g->eax; ecx = g->ecx; in_esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101ed838;
    case 0x101ed84au: eax = g->eax; ecx = g->ecx; in_esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101ed84a;
    case 0x101ed851u: eax = g->eax; ecx = g->ecx; in_esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101ed851;
    case 0x101ed85cu: eax = g->eax; ecx = g->ecx; in_esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101ed85c;
    case 0x101ed869u: eax = g->eax; ecx = g->ecx; in_esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101ed869;
    case 0x101ed8a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101ed8a5;
    case 0x101ed8b7u: eax = g->eax; ecx = g->ecx; in_esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101ed8b7;
    case 0x101ed8beu: eax = g->eax; ecx = g->ecx; in_esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101ed8be;
    case 0x101ed8c9u: eax = g->eax; ecx = g->ecx; in_esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101ed8c9;
    case 0x101ed8ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101ed8ce;
    case 0x101ed8d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101ed8d9;
    case 0x101ed8dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101ed8df;
    case 0x101ed8e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101ed8e5;
    case 0x101ed8e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101ed8e7;
    case 0x101ed8efu: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x108u); g->esi = rd32(sp0 - 0x108u); goto E_101ed8ef;
    case 0x101ed8fau: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x108u); g->esi = rd32(sp0 - 0x108u); goto E_101ed8fa;
    case 0x101ed900u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x108u); g->esi = rd32(sp0 - 0x108u); goto E_101ed900;
    case 0x101ed902u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x108u); g->esi = rd32(sp0 - 0x108u); goto E_101ed902;
    case 0x101ed906u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); g->esi = rd32(sp0 - 0x108u); goto E_101ed906;
    case 0x101ed94fu: eax = g->eax; ecx = g->ecx; in_esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101ed94f;
    case 0x101ed962u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101ed962;
    case 0x101ed96eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101ed96e;
    case 0x101ed978u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101ed978;
    case 0x101ed982u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101ed982;
    case 0x101ed9bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101ed9bb;
    case 0x101ed9c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_101ed9c4;
    default: break;
    }
#endif

    COW_AT(101ed810)
    if (rd8(arg3 + 4u) == 0u)
    {
        eax = rd8(arg3 + 4u);
        goto L_101ed94f;
    }
    eax = rd8(arg3 + 4u);
    COW_AT(101ed828)
    if (eax == 1u)
    {
        ecx = rd32(COW_IMG(0x106636acu));
        goto L_101ed8b7;
    }
    eax = eax - 1u;
    ecx = rd32(COW_IMG(0x106636acu));
    COW_AT(101ed835)
    if (eax == 1u) goto L_101ed84a;
    COW_AT(101ed838)
    wr32(sp0 - 0x108u, 0u);
    wr32(sp0 - 0x10cu, 6u);
    g->eax = rd32(ecx);
    g->edx = arg3;
    t1 = rd32(ecx);
    g->esp = sp0 - 0x104u;
    t2 = cow_thiscall(g, rd32(t1 + 0x18u), ecx, 2, 6u, 0u);
    t3 = g->edx;
    g->esi = in_esi;
    g->edx = t3;
    return t2 & 0xffffff00u;
L_101ed84a: ;
    COW_AT(101ed84a)
    if (rd32(ecx + 8u) != 0u) goto L_101ed85c;
    COW_AT(101ed851)
    if ((int32_t)rd32(arg3 + 8u) < 0)
    {
        eax = rd32(arg3 + 8u);
        edx = arg3;
        goto L_101ed9bb;
    }
L_101ed85c: ;
    COW_AT(101ed85c)
    if ((int32_t)(rd32(arg3 + 8u) & 0x7fffffffu) >= 8)
    {
        edx = arg3;
    }
    else
    {
        eax = rd32(arg3 + 8u) & 0x7fffffffu;
    COW_AT(101ed869)
        wr32(sp0 - 0x108u, eax);
        wr32(sp0 - 0x10cu, 0x10u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = arg3;
        g->esp = sp0 - 0x104u;
        t4 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0x10u, eax);
        t5 = g->ecx;
        t6 = g->edx;
        wr32(sp0 - 0x108u, t4);
        wr32(sp0 - 0x10cu, 0x1au);
        wr32(sp0 - 0x110u, 0xau);
        g->edx = t6;
        g->esp = sp0 - 0x108u;
        t7 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x1au);
        t8 = g->edx;
        wr32(sp0 - 0x10cu, t7);
        wr32(sp0 - 0x110u, sp0 - 0x100u);
        g->esp = sp0 - 0xfcu;
        t9 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, t7, rd32(sp0 - 0x108u), rd32(sp0 - 0x104u), rd32(sp0 - 0x100u));
        wr32(sp0 - 0x108u, sp0 - 0x100u);
        g->edx = sp0 - 0x100u;
        g->esp = sp0 - 0x104u;
        cow_thiscall(g, COW_IMG(0x10129e80u), rd32(COW_IMG(0x10578158u)), 1, sp0 - 0x100u);
        t10 = g->edx;
        ecx = rd32(COW_IMG(0x106636acu));
        edx = t10;
    }
    COW_AT(101ed8a5)
    wr32(sp0 - 0x108u, 0u);
    wr32(sp0 - 0x10cu, 6u);
    g->eax = rd32(ecx);
    g->edx = edx;
    t11 = rd32(ecx);
    g->esp = sp0 - 0x104u;
    t12 = cow_thiscall(g, rd32(t11 + 0x18u), ecx, 2, 6u, 0u);
    t13 = g->edx;
    g->esi = in_esi;
    g->edx = t13;
    return (t12 & 0xffffff00u) | 1u;
L_101ed8b7: ;
    COW_AT(101ed8b7)
    if (rd32(ecx + 8u) != 0u) goto L_101ed8c9;
    COW_AT(101ed8be)
    if ((int32_t)rd32(arg3 + 8u) < 0)
    {
        eax = rd32(arg3 + 8u);
        edx = arg3;
        goto L_101ed9bb;
    }
L_101ed8c9: ;
    COW_AT(101ed8c9)
    ecx = 0u;
    edx = rd32(arg3 + 8u);
    cf = 0u;
    pf = PARITY(0u);
    zf = 1u;
    sf = 0u;
    of = 0u;
L_101ed8ce: ;
    COW_AT(101ed8ce)
    if ((edx & 1u << (ecx & 0x1fu)) != 0u) goto L_101ed8e5;
    COW_AT(101ed8d9)
    if ((int32_t)(ecx + 1u) < 24)
    {
        cf = ecx + 1u < 0x18u;
        pf = PARITY((uint8_t)(ecx - 0x17u));
        zf = ecx == 0x17u;
        sf = (int32_t)(ecx - 0x17u) < 0;
        of = ((ecx + 1u ^ 0x18u) & (ecx + 1u ^ ecx - 0x17u)) >> 0x1fu;
        ecx = ecx + 1u;
        goto L_101ed8ce;
    }
    COW_AT(101ed8df)
    eax = rd32(sp0 - 0x104u);
L_101ed8e7: ;
    COW_AT(101ed8e7)
    wr32(sp0 - 0x108u, in_esi);
    if ((int32_t)eax >= 24)
    {
        loc_104 = rd32(sp0 - 0x104u);
        goto L_101ed906;
    }
    ecx = eax;
    cf = eax < 0x18u;
    pf = PARITY((uint8_t)(eax - 0x18u));
    zf = eax == 0x18u;
    sf = (int32_t)(eax - 0x18u) < 0;
    of = ((eax ^ 0x18u) & (eax ^ eax - 0x18u)) >> 0x1fu;
L_101ed8ef: ;
    COW_AT(101ed8ef)
    if ((edx & 1u << (ecx & 0x1fu)) == 0u) goto L_101ed902;
    COW_AT(101ed8fa)
    if ((int32_t)(ecx + 1u) < 24)
    {
        cf = ecx + 1u < 0x18u;
        pf = PARITY((uint8_t)(ecx - 0x17u));
        zf = ecx == 0x17u;
        sf = (int32_t)(ecx - 0x17u) < 0;
        of = ((ecx + 1u ^ 0x18u) & (ecx + 1u ^ ecx - 0x17u)) >> 0x1fu;
        ecx = ecx + 1u;
        goto L_101ed8ef;
    }
    COW_AT(101ed900)
    loc_104 = rd32(sp0 - 0x104u);
L_101ed906: ;
    COW_AT(101ed906)
    wr32(sp0 - 0x10cu, loc_104);
    wr32(sp0 - 0x110u, eax);
    wr32(sp0 - 0x114u, 0x19u);
    wr32(sp0 - 0x118u, 0xau);
    g->eax = eax;
    g->ecx = loc_104;
    g->esp = sp0 - 0x110u;
    t14 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x19u);
    t15 = g->ecx;
    wr32(sp0 - 0x114u, t14);
    wr32(sp0 - 0x118u, sp0 - 0x100u);
    g->edx = sp0 - 0x100u;
    g->esp = sp0 - 0x104u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, t14, rd32(sp0 - 0x110u), rd32(sp0 - 0x10cu), in_esi);
    t16 = g->edx;
    wr32(sp0 - 0x10cu, sp0 - 0x100u);
    g->eax = sp0 - 0x100u;
    g->esp = sp0 - 0x108u;
    t17 = cow_thiscall(g, COW_IMG(0x10129e80u), rd32(COW_IMG(0x10578158u)), 1, sp0 - 0x100u);
    wr32(sp0 - 0x10cu, 0u);
    wr32(sp0 - 0x110u, 6u);
    g->edx = rd32(rd32(COW_IMG(0x106636acu)));
    t18 = rd32(rd32(COW_IMG(0x106636acu)));
    t19 = cow_thiscall(g, rd32(t18 + 0x18u), rd32(COW_IMG(0x106636acu)), 2, 6u, 0u);
    t20 = g->edx;
    g->esi = in_esi;
    g->edx = t20;
    return (t19 & 0xffffff00u) | 1u;
L_101ed8e5: ;
    COW_AT(101ed8e5)
    eax = ecx;
    goto L_101ed8e7;
L_101ed902: ;
    COW_AT(101ed902)
    wr32(sp0 - 0x104u, ecx);
    loc_104 = ecx;
    goto L_101ed906;
L_101ed94f: ;
    COW_AT(101ed94f)
    wr32(sp0 - 0x108u, 0x20000u);
    g->eax = eax;
    g->edx = arg3;
    g->esp = sp0 - 0x104u;
    t21 = cow_thiscall(g, COW_IMG(0x1015ecc0u), COW_IMG(0x10621838u), 1, 0x20000u);
    t22 = g->ecx;
    t23 = g->edx;
    if ((uint8_t)t21 != 0u)
    {
        eax = t21;
        edx = t23;
        goto L_101ed9c4;
    }
    ecx = t22;
    edx = t23;
    COW_AT(101ed962)
    if (rd8(rd32(COW_IMG(0x1057876cu)) + 0x59u) != 0u)
    {
        eax = rd32(COW_IMG(0x1057876cu));
        goto L_101ed9c4;
    }
    eax = rd32(COW_IMG(0x1057876cu));
    COW_AT(101ed96e)
    if (rd32(eax + 0xc4u) != 0u) goto L_101ed9c4;
    ecx = rd32(eax + 0xc4u);
    COW_AT(101ed978)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x104u;
    t24 = cow_stdcall(g, COW_IMG(0x100fc2e0u), 0);
    t25 = g->edx;
    if ((uint16_t)t24 == 0u)
    {
        eax = t24;
        edx = t25;
    }
    else
    {
        eax = t24;
    COW_AT(101ed982)
        wr32(sp0 - 0x108u, 0u);
        wr32(sp0 - 0x10cu, 1u);
        wr32(sp0 - 0x110u, COW_IMG(0x1038206cu));
        t26 = rd32(rd32(COW_IMG(0x10480af0u) + (uint16_t)eax * 4u) + 4u);
        t27 = rd32(COW_IMG(0x10480af0u) + (uint16_t)eax * 4u);
        t28 = rd32(COW_IMG(0x106636acu));
        wr32(t28 + 0x14u, t26);
        t29 = rd32(t27 + 8u);
        wr32(t28 + 0x18u, t29);
        t30 = rd32(t27 + 0xcu);
        wr32(t28 + 0x1cu, t30);
        g->eax = t30;
        g->edx = t29;
        g->esp = sp0 - 0x104u;
        t31 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1038206cu), 1u, 0u);
        t32 = g->edx;
        eax = t31;
        edx = t32;
    }
L_101ed9bb: ;
    COW_AT(101ed9bb)
    g->esi = in_esi;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_101ed9c4: ;
    COW_AT(101ed9c4)
    wr32(sp0 - 0x108u, 3u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x104u;
    t33 = cow_thiscall(g, COW_IMG(0x10129d90u), rd32(COW_IMG(0x10578158u)), 1, 3u);
    t34 = g->edx;
    g->esi = in_esi;
    g->edx = t34;
    return t33 & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101ed810(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101ed828u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        g->edx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101ed835u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        g->edx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101ed838u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        g->edx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101ed84au:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        g->edx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101ed851u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        g->edx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101ed85cu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        g->edx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101ed869u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        g->edx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101ed8a5u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x101ed8b7u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        g->edx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101ed8beu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        g->edx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101ed8c9u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        g->edx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101ed8ceu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x101ed8d9u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x101ed8dfu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x101ed8e5u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x101ed8e7u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x101ed8efu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x101ed8fau:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x101ed900u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x101ed902u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x101ed906u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_104;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x101ed94fu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        g->edx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101ed962u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x101ed96eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x101ed978u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x101ed982u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x101ed9bbu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x101ed9c4u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101ed810(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101ed810(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
