/* f_0x10080390 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_10080390(Guest* g)
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
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
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
    cow_frame(g, sp0, 1584u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100803bfu: ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100803bf;
    case 0x100803cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100803cf;
    case 0x100803d9u: ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_ebx = rd32(sp0 - 0x608u); g->ebx = rd32(sp0 - 0x608u); goto E_100803d9;
    case 0x100803e4u: ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_ebx = rd32(sp0 - 0x608u); g->ebx = rd32(sp0 - 0x608u); goto E_100803e4;
    case 0x100803f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100803f4;
    case 0x100803feu: ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_ebx = rd32(sp0 - 0x608u); g->ebx = rd32(sp0 - 0x608u); goto E_100803fe;
    case 0x10080408u: edx = g->edx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_ebx = rd32(sp0 - 0x608u); g->ebx = rd32(sp0 - 0x608u); goto E_10080408;
    case 0x1008040bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_ebx = rd32(sp0 - 0x608u); g->ebx = rd32(sp0 - 0x608u); goto E_1008040b;
    case 0x10080412u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_ebx = rd32(sp0 - 0x608u); g->ebx = rd32(sp0 - 0x608u); goto E_10080412;
    case 0x10080417u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_ebx = rd32(sp0 - 0x608u); g->ebx = rd32(sp0 - 0x608u); goto E_10080417;
    case 0x10080427u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10080427;
    case 0x10080443u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10080443;
    case 0x10080454u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10080454;
    case 0x100804a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100804a0;
    case 0x100804c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100804c7;
    case 0x100804d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100804d1;
    case 0x100804ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100804ff;
    case 0x1008055bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1008055b;
    default: break;
    }
#endif

    COW_AT(10080390)
    wr32(sp0 - 0x608u, in_ebx);
    wr8(sp0 - 0x603u, 3u);
    wr8(sp0 - 0x602u, 0u);
    t1 = rd8(COW_IMG(0x1032cf40u) + (uint8_t)arg1 * 4u);
    wr8(sp0 - 0x604u, (uint8_t)t1);
    if ((uint8_t)arg1 != 7u)
    {
        edx = (in_edx & 0xffffff00u) | t1;
        goto L_100803d9;
    }
    edx = (in_edx & 0xffffff00u) | t1;
    COW_AT(100803bf)
    wr32(sp0 - 0x60cu, 0x9cu);
    g->eax = (uint8_t)arg1;
    g->edx = edx;
    g->esp = sp0 - 0x608u;
    t2 = cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x9cu);
    t3 = g->edx;
    eax = t2;
    edx = t3;
    COW_AT(100803cf)
    g->ebx = rd32(sp0 - 0x608u);
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_100803d9: ;
    COW_AT(100803d9)
    if (arg5 != 0u) goto L_100803fe;
    COW_AT(100803e4)
    wr32(sp0 - 0x60cu, 0x9du);
    g->ebx = arg5;
    g->eax = (uint8_t)arg1;
    g->edx = edx;
    g->esp = sp0 - 0x608u;
    t4 = cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x9du);
    t5 = g->edx;
    eax = t4;
    edx = t5;
    COW_AT(100803f4)
    g->ebx = rd32(sp0 - 0x608u);
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_100803fe: ;
    COW_AT(100803fe)
    if ((uint8_t)arg1 == 2u)
    {
    COW_AT(10080412)
        ecx = 0x1bu;
    }
    else
    {
    COW_AT(10080408)
        if ((uint8_t)arg1 != 3u)
        {
            ecx = 5u;
        }
        else
        {
    COW_AT(1008040b)
            ecx = 0x1eu;
        }
    }
    COW_AT(10080417)
    wr32(sp0 - 0x60cu, in_ebp);
    wr32(sp0 - 0x610u, in_esi);
    wr32(sp0 - 0x614u, in_edi);
    wr32(sp0 - 0x618u, 0u);
    wr32(sp0 - 0x61cu, ecx);
    wr32(sp0 - 0x620u, sp0 - 0x600u);
    g->ebx = arg5;
    g->eax = sp0 - 0x600u;
    g->esp = sp0 - 0x614u;
    t6 = cow_thiscall_cdecl(g, COW_IMG(0x100e3750u), ecx, 3, sp0 - 0x600u, ecx, 0u);
    eax = t6;
    COW_AT(10080427)
    wr32(sp0 - 0x618u, arg4);
    wr32(sp0 - 0x61cu, arg3);
    wr32(sp0 - 0x620u, 0x34u);
    wr32(sp0 - 0x624u, 0xau);
    g->eax = eax;
    g->ecx = arg4;
    g->edx = arg3;
    g->esp = sp0 - 0x61cu;
    t7 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x34u);
    t8 = g->ecx;
    t9 = g->edx;
    eax = t7;
    ecx = t8;
    edx = t9;
    COW_AT(10080443)
    wr32(sp0 - 0x620u, eax);
    wr32(sp0 - 0x624u, sp0 - 0x300u);
    g->ebx = arg5;
    g->ecx = ecx;
    g->esp = sp0 - 0x610u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x300u, eax, arg3, arg4, rd32(sp0 - 0x614u));
    t10 = g->ecx;
    ecx = t10;
    COW_AT(10080454)
    edi = sp0 - 0x300u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = sp0 - 0x614u < sp0 - 0x624u;
    pf = PARITY((uint8_t)(sp0 - 0x614u));
    af = (sp0 - 0x624u ^ 0x10u ^ sp0 - 0x614u) >> 4u & 1u;
    zf = sp0 == 0x614u;
    sf = (int32_t)(sp0 - 0x614u) < 0;
    of = ((sp0 - 0x624u ^ sp0 - 0x614u) & (sp0 - 0x614u ^ 0x10u)) >> 0x1fu;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t11 = edi - ~ecx;
    t12 = ecx;
    edi = sp0 - 0x600u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0xffu);
    af = 0u;
    zf = 0u;
    sf = 1u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t13 = edi;
    esi = t11;
    edi = t13 - 1u;
    ecx = ~t12 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x618u, eax);
    wr32(sp0 - 0x61cu, 1u);
    ecx = ~t12 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    wr32(sp0 - 0x620u, eax);
    wr32(sp0 - 0x624u, sp0 - 0x604u);
    wr32(sp0 - 0x628u, sp0 - 0x600u);
    g->ebx = arg5;
    t14 = rd32(COW_IMG(0x10578158u));
    g->esp = sp0 - 0x614u;
    cow_thiscall(g, COW_IMG(0x10127c00u), t14, 5, sp0 - 0x600u, sp0 - 0x604u, eax, rd32(sp0 - 0x61cu), rd32(sp0 - 0x618u));
    t15 = g->ecx;
    ecx = t15;
    COW_AT(100804a0)
    wr32(sp0 - 0x618u, 0u);
    edi = arg5;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    wr32(sp0 - 0x61cu, 1u);
    wr32(sp0 - 0x620u, 0x280u);
    wr32(sp0 - 0x624u, sp0 - 0x600u);
    t16 = ~ecx - 1u;
    wr32(sp0 - 0x628u, t16);
    wr32(sp0 - 0x62cu, arg5);
    g->edx = sp0 - 0x600u;
    t17 = rd32(COW_IMG(0x10662d40u));
    g->esp = sp0 - 0x614u;
    cow_thiscall(g, COW_IMG(0x101b7280u), t17, 6, arg5, t16, sp0 - 0x600u, 0x280u, 1u, 0u);
    t18 = g->ecx;
    t19 = g->edx;
    ecx = t18;
    edx = t19;
    COW_AT(100804c7)
    wr32(sp0 - 0x618u, sp0 - 0x600u);
    g->edx = edx;
    g->esp = sp0 - 0x614u;
    cow_thiscall_cdecl(g, COW_IMG(0x101c8f40u), ecx, 1, sp0 - 0x600u);
    t20 = g->ecx;
    t21 = g->edx;
    ecx = t20;
    edx = t21;
    COW_AT(100804d1)
    t22 = rd8(COW_IMG(0x1035813au));
    edi = sp0 - 0x600u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    wr32(sp0 - 0x61cu, 1u);
    wr32(sp0 - 0x620u, arg2);
    t23 = rd16(COW_IMG(0x10358138u));
    wr16(edi - 1u, (uint16_t)t23);
    wr8(edi + 1u, (uint8_t)t22);
    g->edi = edi - 1u;
    g->eax = arg2;
    g->ecx = (ecx & 0xffff0000u) | t23;
    g->esp = sp0 - 0x618u;
    t24 = cow_cdecl(g, COW_IMG(0x101c8fd0u), 2, rd32(sp0 - 0x620u), rd32(sp0 - 0x61cu));
    t25 = g->ecx;
    eax = t24;
    ecx = t25;
    COW_AT(100804ff)
    t26 = eax;
    edi = t26;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = sp0 - 0x614u < sp0 - 0x620u;
    pf = PARITY((uint8_t)(sp0 - 0x614u));
    af = (sp0 - 0x620u ^ sp0 - 0x614u) >> 4u & 1u;
    zf = sp0 == 0x614u;
    sf = (int32_t)(sp0 - 0x614u) < 0;
    of = ((sp0 - 0x620u ^ sp0 - 0x614u) & (sp0 - 0x614u ^ 0xcu)) >> 0x1fu;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t27 = edi - ~ecx;
    t28 = ecx;
    edi = sp0 - 0x600u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0xffu);
    af = 0u;
    zf = 0u;
    sf = 1u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t29 = edi;
    esi = t27;
    edi = t29 - 1u;
    ecx = ~t28 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x618u, 0u);
    wr32(sp0 - 0x61cu, 1u);
    ecx = ~t28 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    t30 = ecx;
    edi = sp0 - 0x600u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0xffu);
    af = 0u;
    zf = 0u;
    sf = 1u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    wr32(sp0 - 0x620u, 1u);
    wr32(sp0 - 0x624u, sp0 - 0x604u);
    wr32(sp0 - 0x628u, sp0 - 0x600u);
    t31 = rd16(COW_IMG(0x10353e10u));
    t32 = rd32(COW_IMG(0x10578158u));
    wr16(edi - 1u, (uint16_t)t31);
    g->ebx = ~t28;
    g->eax = (eax & 0xffff0000u) | t31;
    g->edx = sp0 - 0x600u;
    g->esp = sp0 - 0x614u;
    t33 = cow_thiscall(g, COW_IMG(0x10127c00u), t32, 5, rd32(sp0 - 0x628u), rd32(sp0 - 0x624u), rd32(sp0 - 0x620u), rd32(sp0 - 0x61cu), rd32(sp0 - 0x618u));
    t34 = g->edx;
    eax = t33;
    edx = t34;
    COW_AT(1008055b)
    g->ebx = rd32(sp0 - 0x608u);
    g->esi = rd32(sp0 - 0x610u);
    g->edi = rd32(sp0 - 0x614u);
    g->ebp = rd32(sp0 - 0x60cu);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10080390(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100803bfu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t ecx;
        uint32_t edx;
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
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x608u;
        g->eax = (uint8_t)arg1;
        wr32(sp0 - 0x608u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x100803cfu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x608u;
        (void)sp0;
        return 1;
    }
    case 0x100803d9u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t ecx;
        uint32_t edx;
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
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x608u);
        g->esp = sp0 - 0x608u;
        g->eax = (uint8_t)arg1;
        (void)sp0;
        return 1;
    }
    case 0x100803e4u:
    {
        unsigned af;
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t ecx;
        uint32_t edx;
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
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x608u);
        g->esp = sp0 - 0x608u;
        g->eax = (uint8_t)arg1;
        g->ebx = arg5;
        (void)sp0;
        return 1;
    }
    case 0x100803f4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x608u;
        (void)sp0;
        return 1;
    }
    case 0x100803feu:
    {
        unsigned af;
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t ecx;
        uint32_t edx;
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
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x608u);
        g->esp = sp0 - 0x608u;
        g->eax = (uint8_t)arg1;
        g->ebx = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10080408u:
    {
        unsigned af;
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        edx = g->edx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x608u);
        g->esp = sp0 - 0x608u;
        g->eax = (uint8_t)arg1 - 2u;
        g->ecx = 5u;
        g->ebx = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1008040bu:
    {
        unsigned af;
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
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
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x608u);
        g->esp = sp0 - 0x608u;
        g->ebx = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10080412u:
    {
        unsigned af;
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
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
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x608u);
        g->esp = sp0 - 0x608u;
        g->ebx = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10080417u:
    {
        unsigned af;
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
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
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x608u);
        g->esp = sp0 - 0x608u;
        g->ebx = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10080427u:
    {
        unsigned af;
        const uint32_t arg5 = rd32(sp0 + 0x14u);
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
        g->esp = sp0 - 0x620u;
        g->ebx = arg5;
        wr32(sp0 - 0x620u, sp0 - 0x600u);
        (void)sp0;
        return 1;
    }
    case 0x10080443u:
    {
        unsigned af;
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x624u;
        g->ebx = arg5;
        wr32(sp0 - 0x61cu, arg3);
        wr32(sp0 - 0x618u, arg4);
        (void)sp0;
        return 1;
    }
    case 0x10080454u:
    {
        unsigned af;
        const uint32_t arg5 = rd32(sp0 + 0x14u);
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
        g->esp = sp0 - 0x624u;
        g->ebx = arg5;
        wr32(sp0 - 0x624u, sp0 - 0x300u);
        (void)sp0;
        return 1;
    }
    case 0x100804a0u:
    {
        unsigned af;
        const uint32_t arg5 = rd32(sp0 + 0x14u);
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
        g->esp = sp0 - 0x614u;
        g->ebx = arg5;
        wr32(sp0 - 0x628u, sp0 - 0x600u);
        wr32(sp0 - 0x624u, sp0 - 0x604u);
        (void)sp0;
        return 1;
    }
    case 0x100804c7u:
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
        g->esp = sp0 - 0x614u;
        wr32(sp0 - 0x624u, sp0 - 0x600u);
        (void)sp0;
        return 1;
    }
    case 0x100804d1u:
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
        g->esp = sp0 - 0x618u;
        wr32(sp0 - 0x624u, sp0 - 0x600u);
        wr32(sp0 - 0x618u, sp0 - 0x600u);
        (void)sp0;
        return 1;
    }
    case 0x100804ffu:
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
        g->esp = sp0 - 0x620u;
        (void)sp0;
        return 1;
    }
    case 0x1008055bu:
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
        g->esp = sp0 - 0x614u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10080390(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10080390(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
