/* f_0x1028a380 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1028a380(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
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
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;

    if (rd32(sp0 + 4u) == 0u)
    {
        loc_4 = self;
        goto L_1028a5ef;
    }
    esi = rd32(sp0 + 4u);
    edi = esi;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0xffu);
    af = 0u;
    zf = 0u;
    sf = 1u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    g->eax = eax;
    g->ecx = ~ecx;
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_cdecl(g, COW_IMG(0x10275da0u), 9, 1u, ~ecx, COW_IMG(0x103b979cu), 0xeau, in_edi, in_esi, in_ebp, in_ebx, self);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        ebx = t1;
        goto L_1028a3e0;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b979cu));
    t5 = g->ecx;
    t6 = g->edx;
    g->esp = sp0 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b9824u), COW_IMG(0x103b379cu));
    return 0u;
L_1028a3e0: ;
    wr8(ebx, 0u);
    if (rd8(esi) == 0x2fu)
    {
        edi = ebx;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        wr16(edi - 1u, rd16(COW_IMG(0x1034ffb8u)));
    }
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
    g->eax = eax;
    g->ecx = ~ecx;
    g->edx = edx;
    g->esp = sp0;
    t7 = cow_cdecl(g, COW_IMG(0x10275da0u), 9, 1u, ~ecx, COW_IMG(0x103b979cu), 0xf6u, in_edi, in_esi, in_ebp, in_ebx, self);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 + 4u, t7);
    if (t7 != 0u)
    {
        ecx = t8;
        ebp = t7;
        goto L_1028a460;
    }
    eax = t7;
    ecx = t8;
    edx = t9;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t10 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b979cu));
    t11 = g->ecx;
    t12 = g->edx;
    g->ecx = t11;
    g->edx = t12;
    g->esp = sp0 - 0x20u;
    t13 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b97f0u), esi);
    t14 = g->ecx;
    t15 = g->edx;
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, ebx, COW_IMG(0x103b979cu), 0xfau);
    return 0u;
L_1028a460: ;
    eax = esi;
    edx = ebp - esi;
L_1028a466: ;
    t16 = rd8(eax);
    wr8(eax + edx, (uint8_t)t16);
    if ((uint8_t)t16 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t16;
        goto L_1028a466;
    }
    ecx = (ecx & 0xffffff00u) | t16;
    eax = ebp;
    edi = 0u;
L_1028a474: ;
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t17 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, edx, 1, 4, eax, COW_IMG(0x103b97ecu), in_edi, in_esi);
    t18 = g->ecx;
    if (t17 == 0u)
    {
        ecx = t18;
        edx = t17;
        goto L_1028a4cf;
    }
    ecx = t18;
    edx = t17;
    if (edi == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0xffu);
        af = 0u;
        zf = 0u;
        sf = 1u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        t19 = edi - ~ecx;
        edi = ebx;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0xffu);
        af = 0u;
        zf = 0u;
        sf = 1u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        esi = t19;
        edi = edi - 1u;
        ecx = ~ecx >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        t20 = rd32(sp0 + 4u);
        ecx = ~ecx & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        edi = ebx;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0xffu);
        af = 0u;
        zf = 0u;
        sf = 1u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        t21 = rd16(COW_IMG(0x1034ffb8u));
        wr16(edi - 1u, (uint16_t)t21);
        ecx = (ecx & 0xffff0000u) | t21;
        ebp = t20;
    }
    edi = edx;
    goto L_1028a474;
L_1028a4cf: ;
    edi = ebx;
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
        ecx = ~ecx - 1u;
        goto L_1028a58a;
    }
    ecx = ~ecx - 1u;
    edi = ebx;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0xffu);
    af = 0u;
    zf = 0u;
    sf = 1u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    g->eax = eax;
    g->ecx = ~ecx;
    g->esp = sp0;
    t22 = cow_cdecl(g, COW_IMG(0x10275da0u), 9, 1u, ~ecx, COW_IMG(0x103b979cu), 0x133u, in_edi, in_esi, in_ebp, in_ebx, 0u);
    t23 = g->ecx;
    eax = ebx;
    ecx = t23;
    edx = t22 - ebx;
    esi = t22;
L_1028a507: ;
    t24 = rd8(eax);
    wr8(eax + edx, (uint8_t)t24);
    if ((uint8_t)t24 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t24;
        goto L_1028a507;
    }
    eax = eax + 1u;
    ecx = (ecx & 0xffffff00u) | t24;
    if (esi != 0u) goto L_1028a55f;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t25 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b979cu));
    t26 = g->ecx;
    t27 = g->edx;
    g->ecx = t26;
    g->edx = t27;
    g->esp = sp0 - 0x20u;
    t28 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b97c8u), ebp);
    t29 = g->ecx;
    t30 = g->edx;
    g->ecx = t29;
    g->edx = t30;
    g->esp = sp0 - 0x28u;
    t31 = cow_cdecl(g, COW_IMG(0x10276110u), 3, ebx, COW_IMG(0x103b979cu), 0x138u);
    t32 = g->ecx;
    t33 = g->edx;
    g->esp = sp0 - 0x34u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, ebp, COW_IMG(0x103b979cu), 0x139u);
    g->ebx = in_ebx;
    return 0u;
L_1028a55f: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t34 = cow_cdecl(g, COW_IMG(0x10276110u), 3, ebx, COW_IMG(0x103b979cu), 0x13du);
    t35 = g->ecx;
    t36 = g->edx;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, ebp, COW_IMG(0x103b979cu), 0x13eu);
    g->ebx = in_ebx;
    return esi;
L_1028a58a: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t37 = cow_cdecl(g, COW_IMG(0x10276110u), 3, ebx, COW_IMG(0x103b979cu), 0x11bu);
    t38 = g->ecx;
    t39 = g->edx;
    if (rd8(ebp) != 0x2fu)
    {
        eax = (t37 & 0xffffff00u) | rd8(ebp);
        ecx = t38;
        edx = t39;
        goto L_1028a5da;
    }
    eax = (t37 & 0xffffff00u) | rd8(ebp);
    ecx = t38;
    edx = t39;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t40 = cow_cdecl(g, COW_IMG(0x10276110u), 3, ebp, COW_IMG(0x103b979cu), 0x122u);
    t41 = g->ecx;
    t42 = g->edx;
    g->edx = t42;
    g->esp = sp0 - 0xcu;
    t43 = cow_cdecl(g, COW_IMG(0x10275da0u), 9, 1u, 2u, COW_IMG(0x103b979cu), 0x123u, ebp, COW_IMG(0x103b979cu), 0x122u, in_edi, in_esi);
    t44 = g->edx;
    wr16(t43, rd16(COW_IMG(0x1034ffb8u)));
    g->ebx = in_ebx;
    return t43;
L_1028a5da: ;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, ebp, COW_IMG(0x103b979cu), 0x12du);
    loc_4 = 0u;
L_1028a5ef: ;
    g->ebx = in_ebx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1028a380(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1028a380(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
