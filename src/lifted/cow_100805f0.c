/* f_0x100805f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100805f0(Guest* g)
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
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 556u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10080621u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x218u); in_esi = rd32(sp0 - 0x214u); g->edi = rd32(sp0 - 0x218u); g->esi = rd32(sp0 - 0x214u); goto E_10080621;
    case 0x10080629u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x218u); in_esi = rd32(sp0 - 0x214u); g->edi = rd32(sp0 - 0x218u); g->esi = rd32(sp0 - 0x214u); goto E_10080629;
    case 0x1008063au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x218u); in_esi = rd32(sp0 - 0x214u); in_ebx = rd32(sp0 - 0x210u); g->ebx = rd32(sp0 - 0x210u); g->edi = rd32(sp0 - 0x218u); g->esi = rd32(sp0 - 0x214u); goto E_1008063a;
    case 0x10080645u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x218u); in_esi = rd32(sp0 - 0x214u); in_ebx = rd32(sp0 - 0x210u); g->ebx = rd32(sp0 - 0x210u); g->edi = rd32(sp0 - 0x218u); g->esi = rd32(sp0 - 0x214u); goto E_10080645;
    case 0x1008066cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x218u); in_esi = rd32(sp0 - 0x214u); in_ebx = rd32(sp0 - 0x210u); g->ebx = rd32(sp0 - 0x210u); g->edi = rd32(sp0 - 0x218u); g->esi = rd32(sp0 - 0x214u); goto E_1008066c;
    case 0x10080675u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x218u); in_esi = rd32(sp0 - 0x214u); in_ebx = rd32(sp0 - 0x210u); g->ebx = rd32(sp0 - 0x210u); g->edi = rd32(sp0 - 0x218u); g->esi = rd32(sp0 - 0x214u); goto E_10080675;
    case 0x10080691u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x218u); in_esi = rd32(sp0 - 0x214u); in_ebx = rd32(sp0 - 0x210u); g->ebx = rd32(sp0 - 0x210u); g->edi = rd32(sp0 - 0x218u); g->esi = rd32(sp0 - 0x214u); goto E_10080691;
    case 0x10080696u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x218u); in_esi = rd32(sp0 - 0x214u); in_ebx = rd32(sp0 - 0x210u); g->ebx = rd32(sp0 - 0x210u); g->edi = rd32(sp0 - 0x218u); g->esi = rd32(sp0 - 0x214u); goto E_10080696;
    case 0x100806bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x218u); in_esi = rd32(sp0 - 0x214u); in_ebx = rd32(sp0 - 0x210u); g->ebx = rd32(sp0 - 0x210u); g->edi = rd32(sp0 - 0x218u); g->esi = rd32(sp0 - 0x214u); goto E_100806bb;
    case 0x100806d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x218u); in_esi = rd32(sp0 - 0x214u); in_ebx = rd32(sp0 - 0x210u); g->ebx = rd32(sp0 - 0x210u); g->edi = rd32(sp0 - 0x218u); g->esi = rd32(sp0 - 0x214u); goto E_100806d0;
    case 0x100806d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x218u); in_esi = rd32(sp0 - 0x214u); in_ebx = rd32(sp0 - 0x210u); g->ebx = rd32(sp0 - 0x210u); g->edi = rd32(sp0 - 0x218u); g->esi = rd32(sp0 - 0x214u); goto E_100806d4;
    case 0x100806e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x218u); in_esi = rd32(sp0 - 0x214u); in_ebx = rd32(sp0 - 0x210u); g->ebx = rd32(sp0 - 0x210u); g->edi = rd32(sp0 - 0x218u); g->esi = rd32(sp0 - 0x214u); goto E_100806e6;
    case 0x100806edu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x218u); in_esi = rd32(sp0 - 0x214u); in_ebx = rd32(sp0 - 0x210u); g->ebx = rd32(sp0 - 0x210u); g->edi = rd32(sp0 - 0x218u); g->esi = rd32(sp0 - 0x214u); goto E_100806ed;
    case 0x10080703u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x218u); in_esi = rd32(sp0 - 0x214u); in_ebx = rd32(sp0 - 0x210u); g->ebx = rd32(sp0 - 0x210u); g->edi = rd32(sp0 - 0x218u); g->esi = rd32(sp0 - 0x214u); goto E_10080703;
    case 0x10080708u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x218u); in_esi = rd32(sp0 - 0x214u); in_ebx = rd32(sp0 - 0x210u); g->ebx = rd32(sp0 - 0x210u); g->edi = rd32(sp0 - 0x218u); g->esi = rd32(sp0 - 0x214u); goto E_10080708;
    case 0x1008072eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x218u); in_esi = rd32(sp0 - 0x214u); in_ebx = rd32(sp0 - 0x210u); g->ebx = rd32(sp0 - 0x210u); g->edi = rd32(sp0 - 0x218u); g->esi = rd32(sp0 - 0x214u); goto E_1008072e;
    case 0x10080748u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x218u); in_esi = rd32(sp0 - 0x214u); in_ebx = rd32(sp0 - 0x210u); g->ebx = rd32(sp0 - 0x210u); g->edi = rd32(sp0 - 0x218u); g->esi = rd32(sp0 - 0x214u); goto E_10080748;
    case 0x10080769u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x218u); in_esi = rd32(sp0 - 0x214u); in_ebx = rd32(sp0 - 0x210u); g->ebx = rd32(sp0 - 0x210u); g->edi = rd32(sp0 - 0x218u); g->esi = rd32(sp0 - 0x214u); goto E_10080769;
    case 0x10080777u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x218u); in_esi = rd32(sp0 - 0x214u); in_ebx = rd32(sp0 - 0x210u); g->ebx = rd32(sp0 - 0x210u); g->edi = rd32(sp0 - 0x218u); g->esi = rd32(sp0 - 0x214u); goto E_10080777;
    case 0x10080789u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x218u); in_esi = rd32(sp0 - 0x214u); in_ebx = rd32(sp0 - 0x210u); g->ebx = rd32(sp0 - 0x210u); g->edi = rd32(sp0 - 0x218u); g->esi = rd32(sp0 - 0x214u); goto E_10080789;
    case 0x100807afu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x218u); in_esi = rd32(sp0 - 0x214u); g->edi = rd32(sp0 - 0x218u); g->esi = rd32(sp0 - 0x214u); goto E_100807af;
    case 0x100807bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x218u); in_esi = rd32(sp0 - 0x214u); in_ebx = rd32(sp0 - 0x210u); g->ebx = rd32(sp0 - 0x210u); g->edi = rd32(sp0 - 0x218u); g->esi = rd32(sp0 - 0x214u); goto E_100807bc;
    default: break;
    }
#endif

    COW_AT(100805f0)
    wr32(sp0 - 0x210u, in_ebx);
    wr32(sp0 - 0x214u, in_esi);
    wr32(sp0 - 0x218u, in_edi);
    g->esp = sp0 - 0x218u;
    t1 = cow_call_regs(g, COW_IMG(0x101cc4f0u), in_eax, g->ecx, g->edx, 1, 0);
    wr32(sp0 - 0x21cu, 1u);
    wr32(sp0 - 0x220u, sp0 - 0x20cu);
    wr32(sp0 - 0x224u, sp0 - 0x208u);
    wr32(sp0 - 0x228u, sp0 - 0x204u);
    g->eax = sp0 - 0x20cu;
    g->edx = sp0 - 0x204u;
    t2 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), sp0 - 0x208u, 4, sp0 - 0x204u, sp0 - 0x208u, sp0 - 0x20cu, 1u);
    t3 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        eax = t2;
        edx = t3;
        goto L_100807af;
    }
    eax = t2;
    edx = t3;
    esi = t1;
    COW_AT(10080621)
    if (esi == 0u) goto L_100807af;
    COW_AT(10080629)
    if (!(rd32(esi + 0x124u) >> 0x1bu & 1u))
    {
        eax = rd32(esi + 0x124u) >> 0x1bu;
        goto L_100807af;
    }
    eax = rd32(esi + 0x124u) >> 0x1bu;
    COW_AT(1008063a)
    if (rd32(COW_IMG(0x1047d490u)) != 1u)
    {
        edx = rd32(COW_IMG(0x1047d490u));
        goto L_1008066c;
    }
    COW_AT(10080645)
    wr32(sp0 - 0x21cu, 0u);
    t4 = rd32(sp0 - 0x208u);
    wr32(sp0 - 0x220u, t4);
    t5 = rd32(sp0 - 0x20cu);
    wr32(sp0 - 0x224u, t5);
    wr32(sp0 - 0x228u, 1u);
    g->edx = t5;
    g->esp = sp0 - 0x214u;
    cow_cdecl(g, COW_IMG(0x100eaab0u), 5, 1u, t5, t4, 0u, in_edi);
    t6 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t6;
    return arg3;
L_1008066c: ;
    COW_AT(1008066c)
    if ((int32_t)edx < 2) goto L_100807bc;
    COW_AT(10080675)
    t7 = rd32(COW_IMG(0x103551e0u));
    esi = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    edi = COW_IMG(0x10358144u);
    ecx = 6u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf)
    {
        eax = t7;
        goto L_1008072e;
    }
    eax = t7;
    COW_AT(10080691)
    if (edx != 2u) goto L_100806bb;
    COW_AT(10080696)
    t8 = rd32(sp0 - 0x208u);
    wr32(sp0 - 0x21cu, t8);
    t9 = rd32(sp0 - 0x20cu);
    wr32(sp0 - 0x220u, t9);
    wr32(sp0 - 0x224u, 1u);
    g->edx = edx;
    g->esp = sp0 - 0x218u;
    cow_cdecl(g, COW_IMG(0x100eabc0u), 3, 1u, t9, t8);
    t10 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t10;
    return arg3;
L_100806bb: ;
    COW_AT(100806bb)
    t11 = rd32(eax + 8u);
    esi = t11;
    edi = COW_IMG(0x10358140u);
    ecx = 3u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf)
    {
        eax = t11;
        goto L_100806d4;
    }
    COW_AT(100806d0)
    eax = 0u;
L_10080708: ;
    COW_AT(10080708)
    wr32(sp0 - 0x21cu, eax);
    t12 = rd32(sp0 - 0x208u);
    wr32(sp0 - 0x220u, t12);
    t13 = rd32(sp0 - 0x20cu);
    wr32(sp0 - 0x224u, t13);
    wr32(sp0 - 0x228u, 1u);
    g->edx = t13;
    g->esp = sp0 - 0x218u;
    cow_cdecl(g, COW_IMG(0x100ead60u), 4, 1u, t13, t12, eax);
    t14 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t14;
    return arg3;
L_100806d4: ;
    COW_AT(100806d4)
    esi = eax;
    edi = COW_IMG(0x1035813cu);
    ecx = 3u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_100806ed;
    COW_AT(100806e6)
    eax = 1u;
    goto L_10080708;
L_100806ed: ;
    COW_AT(100806ed)
    esi = eax;
    edi = COW_IMG(0x103580c8u);
    ecx = 4u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf)
    {
        edx = 0u;
        goto L_100807bc;
    }
    COW_AT(10080703)
    eax = 2u;
    goto L_10080708;
L_1008072e: ;
    COW_AT(1008072e)
    t15 = rd32(eax + 4u);
    esi = t15;
    edi = COW_IMG(0x10357d98u);
    ecx = 6u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (zf)
    {
        edx = 0u;
        ebx = COW_IMG(0x103d3c84u);
    }
    else
    {
        eax = t15;
    COW_AT(10080748)
        esi = eax;
        edi = COW_IMG(0x103580bcu);
        ecx = 4u;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
        if (rd32(zf * 4u + rd32(COW_IMG(0x103551e4u)) + 4u) == 0u)
        {
            edx = rd32(zf * 4u + rd32(COW_IMG(0x103551e4u)) + 4u);
            ebx = COW_IMG(0x103d3c84u);
        }
        else
        {
            ecx = rd32(COW_IMG(0x103551e4u));
            edx = rd32(zf * 4u + rd32(COW_IMG(0x103551e4u)) + 4u);
    COW_AT(10080769)
            edi = edx;
            eax = 0u;
            ecx = 0xffffffffu;
            cf = 0u;
            pf = PARITY(0u);
            af = 0u;
            zf = 1u;
            sf = 0u;
            of = 0u;
            while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
            if (~ecx == 1u)
            {
                ebx = COW_IMG(0x103d3c84u);
            }
            else
            {
                ecx = ~ecx - 1u;
    COW_AT(10080777)
                wr32(sp0 - 0x21cu, edx);
                wr32(sp0 - 0x220u, sp0 - 0x200u);
                g->edx = sp0 - 0x200u;
                g->esp = sp0 - 0x204u;
                cow_thiscall_cdecl(g, COW_IMG(0x1018fb30u), ecx, 7, sp0 - 0x200u, edx, in_edi, in_esi, in_ebx, rd32(sp0 - 0x20cu), rd32(sp0 - 0x208u));
                t16 = g->edx;
                edx = t16;
                ebx = sp0 - 0x200u;
            }
        }
    }
    COW_AT(10080789)
    wr32(sp0 - 0x21cu, ebx);
    t17 = rd32(sp0 - 0x208u);
    wr32(sp0 - 0x220u, t17);
    t18 = rd32(sp0 - 0x20cu);
    wr32(sp0 - 0x224u, t18);
    wr32(sp0 - 0x228u, 1u);
    g->edx = edx;
    g->esp = sp0 - 0x218u;
    cow_call_regs(g, COW_IMG(0x100eace0u), t17, g->ecx, g->edx, 1, 4, 1u, t18, t17, ebx);
    t19 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t19;
    return arg3;
L_100807af: ;
    COW_AT(100807af)
    wr32(sp0 - 0x21cu, 0x71u);
    g->edx = edx;
    g->esp = sp0 - 0x218u;
    cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x71u);
    t20 = g->edx;
    edx = t20;
L_100807bc: ;
    COW_AT(100807bc)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return arg3;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100805f0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10080621u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
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
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x218u);
        in_esi = rd32(sp0 - 0x214u);
        g->esp = sp0 - 0x218u;
        wr32(sp0 - 0x228u, sp0 - 0x204u);
        wr32(sp0 - 0x224u, sp0 - 0x208u);
        wr32(sp0 - 0x220u, sp0 - 0x20cu);
        wr32(sp0 - 0x210u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x10080629u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
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
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x218u);
        in_esi = rd32(sp0 - 0x214u);
        g->esp = sp0 - 0x218u;
        wr32(sp0 - 0x228u, sp0 - 0x204u);
        wr32(sp0 - 0x224u, sp0 - 0x208u);
        wr32(sp0 - 0x220u, sp0 - 0x20cu);
        wr32(sp0 - 0x210u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1008063au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
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
        in_edi = rd32(sp0 - 0x218u);
        in_esi = rd32(sp0 - 0x214u);
        in_ebx = rd32(sp0 - 0x210u);
        g->esp = sp0 - 0x218u;
        wr32(sp0 - 0x228u, sp0 - 0x204u);
        wr32(sp0 - 0x224u, sp0 - 0x208u);
        wr32(sp0 - 0x220u, sp0 - 0x20cu);
        (void)sp0;
        return 1;
    }
    case 0x10080645u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
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
        in_edi = rd32(sp0 - 0x218u);
        in_esi = rd32(sp0 - 0x214u);
        in_ebx = rd32(sp0 - 0x210u);
        g->esp = sp0 - 0x218u;
        wr32(sp0 - 0x228u, sp0 - 0x204u);
        wr32(sp0 - 0x224u, sp0 - 0x208u);
        wr32(sp0 - 0x220u, sp0 - 0x20cu);
        (void)sp0;
        return 1;
    }
    case 0x1008066cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
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
        in_edi = rd32(sp0 - 0x218u);
        in_esi = rd32(sp0 - 0x214u);
        in_ebx = rd32(sp0 - 0x210u);
        g->esp = sp0 - 0x218u;
        wr32(sp0 - 0x228u, sp0 - 0x204u);
        wr32(sp0 - 0x224u, sp0 - 0x208u);
        wr32(sp0 - 0x220u, sp0 - 0x20cu);
        (void)sp0;
        return 1;
    }
    case 0x10080675u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
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
        in_edi = rd32(sp0 - 0x218u);
        in_esi = rd32(sp0 - 0x214u);
        in_ebx = rd32(sp0 - 0x210u);
        g->esp = sp0 - 0x218u;
        wr32(sp0 - 0x228u, sp0 - 0x204u);
        wr32(sp0 - 0x224u, sp0 - 0x208u);
        wr32(sp0 - 0x220u, sp0 - 0x20cu);
        (void)sp0;
        return 1;
    }
    case 0x10080691u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
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
        in_edi = rd32(sp0 - 0x218u);
        in_esi = rd32(sp0 - 0x214u);
        in_ebx = rd32(sp0 - 0x210u);
        g->esp = sp0 - 0x218u;
        wr32(sp0 - 0x228u, sp0 - 0x204u);
        wr32(sp0 - 0x224u, sp0 - 0x208u);
        wr32(sp0 - 0x220u, sp0 - 0x20cu);
        (void)sp0;
        return 1;
    }
    case 0x10080696u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
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
        in_edi = rd32(sp0 - 0x218u);
        in_esi = rd32(sp0 - 0x214u);
        in_ebx = rd32(sp0 - 0x210u);
        g->esp = sp0 - 0x218u;
        wr32(sp0 - 0x228u, sp0 - 0x204u);
        wr32(sp0 - 0x224u, sp0 - 0x208u);
        wr32(sp0 - 0x220u, sp0 - 0x20cu);
        (void)sp0;
        return 1;
    }
    case 0x100806bbu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
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
        in_edi = rd32(sp0 - 0x218u);
        in_esi = rd32(sp0 - 0x214u);
        in_ebx = rd32(sp0 - 0x210u);
        g->esp = sp0 - 0x218u;
        wr32(sp0 - 0x228u, sp0 - 0x204u);
        wr32(sp0 - 0x224u, sp0 - 0x208u);
        wr32(sp0 - 0x220u, sp0 - 0x20cu);
        (void)sp0;
        return 1;
    }
    case 0x100806d0u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
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
        in_edi = rd32(sp0 - 0x218u);
        in_esi = rd32(sp0 - 0x214u);
        in_ebx = rd32(sp0 - 0x210u);
        g->esp = sp0 - 0x218u;
        wr32(sp0 - 0x228u, sp0 - 0x204u);
        wr32(sp0 - 0x224u, sp0 - 0x208u);
        wr32(sp0 - 0x220u, sp0 - 0x20cu);
        (void)sp0;
        return 1;
    }
    case 0x100806d4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
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
        in_edi = rd32(sp0 - 0x218u);
        in_esi = rd32(sp0 - 0x214u);
        in_ebx = rd32(sp0 - 0x210u);
        g->esp = sp0 - 0x218u;
        wr32(sp0 - 0x228u, sp0 - 0x204u);
        wr32(sp0 - 0x224u, sp0 - 0x208u);
        wr32(sp0 - 0x220u, sp0 - 0x20cu);
        (void)sp0;
        return 1;
    }
    case 0x100806e6u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
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
        in_edi = rd32(sp0 - 0x218u);
        in_esi = rd32(sp0 - 0x214u);
        in_ebx = rd32(sp0 - 0x210u);
        g->esp = sp0 - 0x218u;
        wr32(sp0 - 0x228u, sp0 - 0x204u);
        wr32(sp0 - 0x224u, sp0 - 0x208u);
        wr32(sp0 - 0x220u, sp0 - 0x20cu);
        (void)sp0;
        return 1;
    }
    case 0x100806edu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
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
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x218u);
        in_esi = rd32(sp0 - 0x214u);
        in_ebx = rd32(sp0 - 0x210u);
        g->esp = sp0 - 0x218u;
        g->edx = 0u;
        wr32(sp0 - 0x228u, sp0 - 0x204u);
        wr32(sp0 - 0x224u, sp0 - 0x208u);
        wr32(sp0 - 0x220u, sp0 - 0x20cu);
        (void)sp0;
        return 1;
    }
    case 0x10080703u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
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
        in_edi = rd32(sp0 - 0x218u);
        in_esi = rd32(sp0 - 0x214u);
        in_ebx = rd32(sp0 - 0x210u);
        g->esp = sp0 - 0x218u;
        wr32(sp0 - 0x228u, sp0 - 0x204u);
        wr32(sp0 - 0x224u, sp0 - 0x208u);
        wr32(sp0 - 0x220u, sp0 - 0x20cu);
        (void)sp0;
        return 1;
    }
    case 0x10080708u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
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
        in_edi = rd32(sp0 - 0x218u);
        in_esi = rd32(sp0 - 0x214u);
        in_ebx = rd32(sp0 - 0x210u);
        g->esp = sp0 - 0x218u;
        wr32(sp0 - 0x228u, sp0 - 0x204u);
        wr32(sp0 - 0x224u, sp0 - 0x208u);
        wr32(sp0 - 0x220u, sp0 - 0x20cu);
        (void)sp0;
        return 1;
    }
    case 0x1008072eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
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
        in_edi = rd32(sp0 - 0x218u);
        in_esi = rd32(sp0 - 0x214u);
        in_ebx = rd32(sp0 - 0x210u);
        g->esp = sp0 - 0x218u;
        wr32(sp0 - 0x228u, sp0 - 0x204u);
        wr32(sp0 - 0x224u, sp0 - 0x208u);
        wr32(sp0 - 0x220u, sp0 - 0x20cu);
        (void)sp0;
        return 1;
    }
    case 0x10080748u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
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
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x218u);
        in_esi = rd32(sp0 - 0x214u);
        in_ebx = rd32(sp0 - 0x210u);
        g->esp = sp0 - 0x218u;
        g->ebx = COW_IMG(0x103d3c84u);
        wr32(sp0 - 0x228u, sp0 - 0x204u);
        wr32(sp0 - 0x224u, sp0 - 0x208u);
        wr32(sp0 - 0x220u, sp0 - 0x20cu);
        (void)sp0;
        return 1;
    }
    case 0x10080769u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
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
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x218u);
        in_esi = rd32(sp0 - 0x214u);
        in_ebx = rd32(sp0 - 0x210u);
        g->esp = sp0 - 0x218u;
        g->ebx = COW_IMG(0x103d3c84u);
        wr32(sp0 - 0x228u, sp0 - 0x204u);
        wr32(sp0 - 0x224u, sp0 - 0x208u);
        wr32(sp0 - 0x220u, sp0 - 0x20cu);
        (void)sp0;
        return 1;
    }
    case 0x10080777u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
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
        in_edi = rd32(sp0 - 0x218u);
        in_esi = rd32(sp0 - 0x214u);
        in_ebx = rd32(sp0 - 0x210u);
        g->esp = sp0 - 0x218u;
        wr32(sp0 - 0x228u, sp0 - 0x204u);
        wr32(sp0 - 0x224u, sp0 - 0x208u);
        wr32(sp0 - 0x220u, sp0 - 0x20cu);
        (void)sp0;
        return 1;
    }
    case 0x10080789u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
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
        in_edi = rd32(sp0 - 0x218u);
        in_esi = rd32(sp0 - 0x214u);
        in_ebx = rd32(sp0 - 0x210u);
        g->esp = sp0 - 0x218u;
        wr32(sp0 - 0x228u, sp0 - 0x204u);
        wr32(sp0 - 0x224u, sp0 - 0x208u);
        (void)sp0;
        return 1;
    }
    case 0x100807afu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
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
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x218u);
        in_esi = rd32(sp0 - 0x214u);
        g->esp = sp0 - 0x218u;
        wr32(sp0 - 0x228u, sp0 - 0x204u);
        wr32(sp0 - 0x224u, sp0 - 0x208u);
        wr32(sp0 - 0x220u, sp0 - 0x20cu);
        wr32(sp0 - 0x210u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x100807bcu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
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
        in_edi = rd32(sp0 - 0x218u);
        in_esi = rd32(sp0 - 0x214u);
        in_ebx = rd32(sp0 - 0x210u);
        g->esp = sp0 - 0x218u;
        wr32(sp0 - 0x228u, sp0 - 0x204u);
        wr32(sp0 - 0x224u, sp0 - 0x208u);
        wr32(sp0 - 0x220u, sp0 - 0x20cu);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100805f0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100805f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
