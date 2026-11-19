/* f_0x10008020 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10008020(Guest* g)
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
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 796u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10008312u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x30cu); in_esi = rd32(sp0 - 0x308u); in_ebp = rd32(sp0 - 0x304u); in_ebx = rd32(sp0 - 0x300u); self = rd32(sp0 - 0x2fcu); g->ebp = rd32(sp0 - 0x304u); g->ebx = rd32(sp0 - 0x300u); g->edi = rd32(sp0 - 0x30cu); g->esi = rd32(sp0 - 0x308u); goto E_10008312;
    case 0x10008325u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10008325;
    case 0x1000832bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1000832b;
    case 0x1000832fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1000832f;
    case 0x1000834au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1000834a;
    case 0x10008351u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10008351;
    case 0x1000835cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1000835c;
    case 0x10008376u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10008376;
    default: break;
    }
#endif

    COW_AT(10008020)
    wr32(sp0 - 0x300u, in_ebx);
    wr32(sp0 - 0x304u, in_ebp);
    wr32(sp0 - 0x308u, in_esi);
    wr32(sp0 - 0x30cu, in_edi);
    wr32(sp0 - 0x2fcu, self);
    wr32(sp0 - 0x2f8u, 0u);
    esi = COW_IMG(0x1034fa98u);
    edi = sp0 - 0x2f4u;
    ecx = 7u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x2d8u, 0u);
    wr32(sp0 - 0x2d4u, 1u);
    t1 = rd32(COW_IMG(0x1034fa74u));
    esi = COW_IMG(0x1034fa7cu);
    edi = sp0 - 0x2d0u;
    ecx = 7u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x2b4u, 0u);
    wr32(sp0 - 0x2b0u, 2u);
    t2 = rd8(COW_IMG(0x1034fa7au));
    esi = COW_IMG(0x1034fa58u);
    edi = sp0 - 0x2acu;
    ecx = 7u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x290u, 0u);
    wr32(sp0 - 0x28cu, 3u);
    esi = COW_IMG(0x1034fa38u);
    edi = sp0 - 0x288u;
    ecx = 7u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t3 = rd16(COW_IMG(0x1034fa78u));
    wr16(edi, rd16(esi)); esi += (g->df ? (uint32_t)-2 : 2u); edi += (g->df ? (uint32_t)-2 : 2u);
    wr32(sp0 - 0x264u, t1);
    wr16(sp0 - 0x260u, (uint16_t)t3);
    wr16(sp0 - 0x26au, 0u);
    wr32(sp0 - 0x268u, 4u);
    wr8(sp0 - 0x25eu, (uint8_t)t2);
    edi = sp0 - 0x25du;
    eax = 0u;
    ecx = 6u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t4 = rd16(COW_IMG(0x1034fa34u));
    t5 = rd8(COW_IMG(0x1034fa36u));
    wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u);
    t6 = rd32(COW_IMG(0x1034fa30u));
    wr16(sp0 - 0x23cu, (uint16_t)t4);
    wr32(sp0 - 0x240u, t6);
    wr32(sp0 - 0x244u, 5u);
    wr8(sp0 - 0x23au, (uint8_t)t5);
    edi = sp0 - 0x239u;
    eax = 0u;
    ecx = 6u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t7 = rd16(COW_IMG(0x1034fa2cu));
    t8 = rd8(COW_IMG(0x1034fa2eu));
    wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u);
    t9 = rd32(COW_IMG(0x1034fa28u));
    wr16(sp0 - 0x218u, (uint16_t)t7);
    wr32(sp0 - 0x21cu, t9);
    wr32(sp0 - 0x220u, 6u);
    wr8(sp0 - 0x216u, (uint8_t)t8);
    edi = sp0 - 0x215u;
    eax = 0u;
    ecx = 6u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t10 = rd16(COW_IMG(0x1034fa24u));
    t11 = rd8(COW_IMG(0x1034fa26u));
    wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u);
    t12 = rd32(COW_IMG(0x1034fa20u));
    wr16(sp0 - 0x1f4u, (uint16_t)t10);
    wr32(sp0 - 0x1f8u, t12);
    wr32(sp0 - 0x1fcu, 7u);
    wr8(sp0 - 0x1f2u, (uint8_t)t11);
    edi = sp0 - 0x1f1u;
    eax = 0u;
    ecx = 6u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u);
    wr32(sp0 - 0x1d8u, 8u);
    wr32(sp0 - 0x1d4u, rd32(COW_IMG(0x1034fa18u)));
    t13 = rd8(COW_IMG(0x1034fa1eu));
    wr16(sp0 - 0x1d0u, rd16(COW_IMG(0x1034fa1cu)));
    wr8(sp0 - 0x1ceu, (uint8_t)t13);
    edi = sp0 - 0x1cdu;
    eax = 0u;
    ecx = 6u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t14 = rd16(COW_IMG(0x1034fa14u));
    t15 = rd8(COW_IMG(0x1034fa16u));
    wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u);
    t16 = rd32(COW_IMG(0x1034fa10u));
    wr16(sp0 - 0x1acu, (uint16_t)t14);
    wr32(sp0 - 0x1b0u, t16);
    wr32(sp0 - 0x1b4u, 9u);
    wr8(sp0 - 0x1aau, (uint8_t)t15);
    edi = sp0 - 0x1a9u;
    eax = 0u;
    ecx = 6u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t17 = rd16(COW_IMG(0x1034fa0cu));
    t18 = rd8(COW_IMG(0x1034fa0eu));
    wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u);
    t19 = rd32(COW_IMG(0x1034fa08u));
    wr16(sp0 - 0x188u, (uint16_t)t17);
    wr32(sp0 - 0x18cu, t19);
    wr32(sp0 - 0x190u, 0xau);
    wr8(sp0 - 0x186u, (uint8_t)t18);
    edi = sp0 - 0x185u;
    eax = 0u;
    ecx = 6u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u);
    wr32(sp0 - 0x16cu, 0xcu);
    esi = COW_IMG(0x1034f9f0u);
    edi = sp0 - 0x168u;
    ecx = 5u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr16(edi, rd16(esi)); esi += (g->df ? (uint32_t)-2 : 2u); edi += (g->df ? (uint32_t)-2 : 2u);
    t20 = rd8(COW_IMG(0x103d3c84u));
    wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u);
    wr32(sp0 - 0x151u, 0u);
    wr32(sp0 - 0x14du, 0u);
    wr8(sp0 - 0x149u, 0u);
    wr32(sp0 - 0x148u, 0xdu);
    wr8(sp0 - 0x144u, (uint8_t)t20);
    edi = sp0 - 0x143u;
    eax = 0u;
    ecx = 7u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr16(edi, (uint16_t)(uint16_t)eax); edi += (g->df ? (uint32_t)-2 : 2u);
    wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u);
    wr32(sp0 - 0x124u, 0xfu);
    wr8(sp0 - 0x120u, (uint8_t)t20);
    wr32(sp0 - 0x310u, 0u);
    edi = sp0 - 0x11fu;
    eax = 0u;
    ecx = 7u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr16(edi, (uint16_t)(uint16_t)eax); edi += (g->df ? (uint32_t)-2 : 2u);
    wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u);
    g->eax = eax;
    g->edx = ((in_edx | t2 | t5 | t8 | t11 | t13 | t15 | t18) & 0xffffff00u) | t20;
    g->esp = sp0 - 0x30cu;
    t21 = cow_stdcall(g, rd32(COW_IMG(0x10329384u)), 1, 0u);   /* user32.dll!GetKeyboardLayout */
    t22 = g->edx;
    eax = t21;
    edx = t22;
    COW_AT(10008312)
    wr32(sp0 - 0x310u, 0x100u);
    wr32(sp0 - 0x314u, sp0 - 0x100u);
    wr32(sp0 - 0x318u, eax);
    g->ecx = sp0 - 0x100u;
    g->esp = sp0 - 0x30cu;
    cow_stdcall(g, COW_IMG(0x102bc846u), 3, eax, sp0 - 0x100u, 0x100u);
    t23 = g->ecx;
    ecx = t23;
    COW_AT(10008325)
    if ((int32_t)rd32(sp0 - 0x2f8u) >= 15) goto L_1000835c;
    COW_AT(1000832b)
    ebx = 0u;
    esi = sp0 - 0x2f4u;
L_1000832f: ;
    COW_AT(1000832f)
    edi = esi;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t24 = ~ecx - 1u;
    wr32(sp0 - 0x310u, t24);
    wr32(sp0 - 0x314u, sp0 - 0x100u);
    wr32(sp0 - 0x318u, esi);
    g->eax = eax;
    g->ecx = t24;
    g->esp = sp0 - 0x304u;
    t25 = cow_cdecl(g, COW_IMG(0x10312980u), 5, esi, sp0 - 0x100u, t24, rd32(sp0 - 0x30cu), rd32(sp0 - 0x308u));
    t26 = g->ecx;
    eax = t25;
    ecx = t26;
    COW_AT(1000834a)
    if (eax == 0u) goto L_10008376;
    COW_AT(10008351)
    if ((int32_t)rd32(esi + 0x20u) < 15)
    {
        ebx = ebx + 1u;
        esi = esi + 0x24u;
        goto L_1000832f;
    }
L_1000835c: ;
    COW_AT(1000835c)
    t31 = rd32(sp0 - 0x304u);
    t32 = rd32(sp0 - 0x308u);
    t33 = rd32(sp0 - 0x30cu);
    wr32(rd32(sp0 - 0x2fcu) + 0xda8u, 0xeu);
    g->ebx = rd32(sp0 - 0x300u);
    g->esi = t32;
    g->edi = t33;
    g->ebp = t31;
    return;
L_10008376: ;
    COW_AT(10008376)
    t27 = rd32(ebx * 0x24u + sp0 - 0x2f8u);
    t28 = rd32(sp0 - 0x304u);
    t29 = rd32(sp0 - 0x308u);
    t30 = rd32(sp0 - 0x30cu);
    wr32(rd32(sp0 - 0x2fcu) + 0xda8u, t27);
    g->ebx = rd32(sp0 - 0x300u);
    g->esi = t29;
    g->edi = t30;
    g->ebp = t28;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10008020(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10008312u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
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
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x30cu);
        in_esi = rd32(sp0 - 0x308u);
        in_ebp = rd32(sp0 - 0x304u);
        in_ebx = rd32(sp0 - 0x300u);
        self = rd32(sp0 - 0x2fcu);
        g->esp = sp0 - 0x30cu;
        g->ebx = 0u;
        g->ebp = 0xfu;
        wr32(sp0 - 0x2f8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10008325u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x30cu;
        g->ebx = 0u;
        g->ebp = 0xfu;
        wr32(sp0 - 0x314u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x1000832bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x30cu;
        g->ebx = 0u;
        g->ebp = 0xfu;
        wr32(sp0 - 0x314u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x1000832fu:
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
        g->esp = sp0 - 0x30cu;
        g->ebp = 0xfu;
        wr32(sp0 - 0x314u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x1000834au:
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
        g->esp = sp0 - 0x318u;
        g->ebp = 0xfu;
        wr32(sp0 - 0x314u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x10008351u:
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
        g->esp = sp0 - 0x30cu;
        g->ebp = 0xfu;
        wr32(sp0 - 0x314u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x1000835cu:
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
        g->esp = sp0 - 0x30cu;
        wr32(sp0 - 0x314u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x10008376u:
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
        g->esp = sp0 - 0x30cu;
        wr32(sp0 - 0x314u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10008020(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10008020(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
