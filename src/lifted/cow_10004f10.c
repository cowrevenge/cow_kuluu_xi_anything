/* f_0x10004f10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10004f10(Guest* g)
{
    unsigned af;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = arg2 + rd32(sp0 + 4u);
    t2 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t1);
    if (t2 >= arg2 + t2)
    {
        eax = t1;
        edx = in_edx;
        goto L_10005077;
    }
    eax = t1;
    edx = in_edx;
    ebp = 0u;
    esi = t2;
L_10004f2e: ;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t3 = cow_call_regs(g, COW_IMG(0x10004ee0u), eax, g->ecx, g->edx, 0, 1, esi);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 == 0u)
    {
        eax = t3;
        edx = t5;
        goto L_10005077;
    }
    ecx = t4;
    edx = t5;
    esi = t3;
    edi = COW_IMG(0x1034f91cu);
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t6 = ~ecx - 1u;
    g->eax = eax;
    g->ecx = t6;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t7 = cow_cdecl(g, COW_IMG(0x10312980u), 5, esi, COW_IMG(0x1034f91cu), t6, in_edi, in_esi);
    t8 = g->ecx;
    t9 = g->edx;
    if (t7 != 0u)
    {
        edx = t9;
        goto L_10004fff;
    }
    eax = t7;
    edx = t9;
    pf = PARITY((uint8_t)t7);
    zf = t7 == 0u;
    sf = (int32_t)t7 < 0;
    edi = COW_IMG(0x1034f91cu);
    ecx = 0xffffffffu;
    cf = 0u;
    pf = pf;
    af = 0u;
    zf = zf;
    sf = sf;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t10 = esi + ~ecx - 1u;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t11 = cow_call_regs(g, COW_IMG(0x10004ee0u), eax, g->ecx, g->edx, 0, 1, t10);
    t12 = g->ecx;
    t13 = g->edx;
    if (t11 == 0u)
    {
        eax = t11;
        edx = t13;
        goto L_10005077;
    }
    ecx = t12;
    edx = t13;
    esi = t11;
    edi = COW_IMG(0x1034f918u);
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t14 = ~ecx - 1u;
    g->eax = eax;
    g->ecx = t14;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t15 = cow_cdecl(g, COW_IMG(0x10312980u), 5, esi, COW_IMG(0x1034f918u), t14, in_edi, in_esi);
    t16 = g->ecx;
    t17 = g->edx;
    if (t15 != 0u)
    {
        eax = t15;
        edx = t17;
        goto L_1000506d;
    }
    eax = t15;
    ecx = t16;
    edx = t17;
    edi = COW_IMG(0x1034f918u);
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0xffu);
    af = 0u;
    zf = 0u;
    sf = 1u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t18 = esi + ~ecx - 1u;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t19 = cow_call_regs(g, COW_IMG(0x10004ee0u), eax, g->ecx, g->edx, 0, 1, t18);
    t20 = g->ecx;
    t21 = g->edx;
    if (t19 == 0u)
    {
        eax = t19;
        edx = t21;
        goto L_10005077;
    }
    eax = t19;
    ecx = t20;
    edx = t21;
    esi = t19;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t22 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, esi);
    t23 = g->edx;
    if ((int32_t)t22 < 512)
    {
        eax = t22;
        edx = t23;
        ebp = t22;
    }
    else
    {
        eax = t22;
        edx = t23;
        ebp = 0u;
    }
    if (rd8(esi) == 0x20u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi);
        goto L_1000506d;
    }
    eax = (eax & 0xffffff00u) | rd8(esi);
L_10004fed: ;
    if ((uint8_t)eax == 9u) goto L_1000506d;
    if ((uint8_t)eax == 0u) goto L_1000506d;
    if (rd8(esi + 1u) != 0x20u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi + 1u);
        esi = esi + 1u;
        goto L_10004fed;
    }
    eax = (eax & 0xffffff00u) | rd8(esi + 1u);
    esi = esi + 1u;
L_1000506d: ;
    if (esi < rd32(sp0 + 4u)) goto L_10004f2e;
L_10005077: ;
    g->edx = edx;
    return eax;
L_10004fff: ;
    edi = COW_IMG(0x1034f90cu);
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
    g->eax = eax;
    g->ecx = t24;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t25 = cow_cdecl(g, COW_IMG(0x10312980u), 5, esi, COW_IMG(0x1034f90cu), t24, in_edi, in_esi);
    t26 = g->ecx;
    t27 = g->edx;
    if (t25 != 0u)
    {
        edx = t27;
        goto L_10005035;
    }
    eax = t25;
    edx = t27;
    pf = PARITY((uint8_t)t25);
    zf = t25 == 0u;
    sf = (int32_t)t25 < 0;
    edi = COW_IMG(0x1034f90cu);
    ecx = 0xffffffffu;
    cf = 0u;
    pf = pf;
    af = 0u;
    zf = zf;
    sf = sf;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    eax = (rd32(ebp * 4u + self + 4u) & 0xffffff00u) | (uint8_t)(rd32(ebp * 4u + self + 4u) | 1u);
    esi = esi + ~ecx - 1u;
L_10005069: ;
    wr32(ebp * 4u + self + 4u, eax);
    goto L_1000506d;
L_10005035: ;
    edi = COW_IMG(0x1034f900u);
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t28 = ~ecx - 1u;
    g->eax = eax;
    g->ecx = t28;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t29 = cow_cdecl(g, COW_IMG(0x10312980u), 5, esi, COW_IMG(0x1034f900u), t28, in_edi, in_esi);
    t30 = g->ecx;
    t31 = g->edx;
    if (t29 != 0u)
    {
        eax = t29;
        edx = t31;
        goto L_1000506d;
    }
    eax = t29;
    ecx = t30;
    edx = t31;
    edi = COW_IMG(0x1034f900u);
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0xffu);
    af = 0u;
    zf = 0u;
    sf = 1u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    eax = (rd32(ebp * 4u + self + 4u) & 0xffffff00u) | (uint8_t)(rd32(ebp * 4u + self + 4u) | 2u);
    esi = esi + ~ecx - 1u;
    goto L_10005069;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10004f10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10004f10(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
