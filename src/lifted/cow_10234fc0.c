/* f_0x10234fc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10234fc0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_2c;
    uint32_t loc_34;
    uint32_t loc_3c;
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
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 68u);

    wr32(sp0 - 0x20u, in_ebx);
    wr32(sp0 - 0x24u, in_esi);
    wr32(sp0 - 0x28u, in_edi);
    g->esp = sp0 - 0x28u;
    t1 = cow_fastcall(g, COW_IMG(0x103149e0u), self, in_edx, 0);
    t2 = cow_divs(g, t1, 0x66u);
    t3 = cow_mods(g, t1, 0x66u);
    if ((int32_t)t3 >= 7)
    {
        edx = t3;
        goto L_10235009;
    }
    eax = t2;
    wr32(sp0 - 0x2cu, 1u);
    wr32(sp0 - 0x30u, sp0 - 0x1cu);
    g->esp = sp0 - 0x28u;
    cow_call_regs(g, COW_IMG(0x102352d0u), g->eax, 0x66u, sp0 - 0x1cu, 1, 2, sp0 - 0x1cu, 1u);
    t4 = g->ecx;
    t5 = g->edx;
    eax = 0u;
    ecx = t4;
    edx = t5;
L_10234fe9: ;
    t6 = rd8(eax + sp0 - 0x1cu);
    wr8(eax + sp0 - 0x14u, (uint8_t)t6);
    if ((uint8_t)t6 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t6;
        goto L_10234fe9;
    }
    ecx = (ecx & 0xffffff00u) | t6;
    wr32(sp0 - 0x2cu, 3u);
    wr32(sp0 - 0x30u, sp0 - 0x1cu);
    g->esp = sp0 - 0x28u;
    cow_call_regs(g, COW_IMG(0x102352d0u), g->eax, ecx, edx, 1, 2, sp0 - 0x1cu, 3u);
    t7 = g->ecx;
    wr32(sp0 - 0x34u, 5u);
    ecx = t7;
    loc_34 = 5u;
L_10235124: ;
    edi = sp0 - 0x1cu;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0xffu);
    af = 0u;
    zf = 0u;
    sf = 1u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t28 = edi - ~ecx;
    edi = sp0 - 0x14u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0xffu);
    af = 0u;
    zf = 0u;
    sf = 1u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    esi = t28;
    edi = edi - 1u;
    ecx = ~ecx >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x38u, sp0 - 0x1cu);
    ecx = ~ecx & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    g->esp = sp0 - 0x30u;
    cow_call_regs(g, COW_IMG(0x102352d0u), g->eax, ecx, sp0 - 0x14u, 1, 2, sp0 - 0x1cu, loc_34);
    t29 = g->ecx;
    ecx = t29;
L_10235280: ;
    edi = sp0 - 0x1cu;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0xffu);
    af = 0u;
    zf = 0u;
    sf = 1u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    wr32(sp0 - 0x2cu, 0xfu);
    t47 = edi - ~ecx;
    edi = sp0 - 0x14u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0xffu);
    af = 0u;
    zf = 0u;
    sf = 1u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    esi = t47;
    edi = edi - 1u;
    ecx = ~ecx >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x30u, sp0 - 0x14u);
    ecx = ~ecx & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    wr32(sp0 - 0x34u, arg1);
    g->esp = sp0 - 0x28u;
    cow_call_regs(g, COW_IMG(0x10312090u), sp0 - 0x14u, g->ecx, g->edx, 1, 3, arg1, sp0 - 0x14u, 0xfu);
    wr8(arg1 + 0xfu, 0u);
    g->ebx = rd32(sp0 - 0x20u);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    return;
L_10235009: ;
    if ((int32_t)edx >= 14) goto L_10235033;
    wr32(sp0 - 0x2cu, 1u);
    wr32(sp0 - 0x30u, sp0 - 0x1cu);
    g->esp = sp0 - 0x28u;
    cow_call_regs(g, COW_IMG(0x102352d0u), g->eax, 0x66u, edx, 1, 2, sp0 - 0x1cu, 1u);
    t8 = g->ecx;
    t9 = g->edx;
    eax = 0u;
    ecx = t8;
    edx = t9;
L_1023501f: ;
    t10 = rd8(eax + sp0 - 0x1cu);
    wr8(eax + sp0 - 0x14u, (uint8_t)t10);
    if ((uint8_t)t10 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t10;
        goto L_1023501f;
    }
    eax = eax + 1u;
    wr32(sp0 - 0x2cu, 4u);
    loc_2c = 4u;
L_10235118: ;
    wr32(sp0 - 0x30u, sp0 - 0x1cu);
    g->esp = sp0 - 0x28u;
    cow_call_regs(g, COW_IMG(0x102352d0u), g->eax, sp0 - 0x1cu, edx, 1, 2, sp0 - 0x1cu, loc_2c);
    t27 = g->ecx;
    wr32(sp0 - 0x34u, 6u);
    ecx = t27;
    loc_34 = 6u;
    goto L_10235124;
L_10235033: ;
    if ((int32_t)edx >= 21) goto L_10235065;
    wr32(sp0 - 0x2cu, 2u);
    wr32(sp0 - 0x30u, sp0 - 0x1cu);
    g->esp = sp0 - 0x28u;
    cow_call_regs(g, COW_IMG(0x102352d0u), g->eax, 0x66u, edx, 1, 2, sp0 - 0x1cu, 2u);
    t11 = g->ecx;
    t12 = g->edx;
    eax = 0u;
    ecx = t11;
    edx = t12;
L_10235045: ;
    t13 = rd8(eax + sp0 - 0x1cu);
    wr8(eax + sp0 - 0x14u, (uint8_t)t13);
    if ((uint8_t)t13 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t13;
        goto L_10235045;
    }
    eax = eax + 1u;
    wr32(sp0 - 0x2cu, 3u);
    wr32(sp0 - 0x30u, sp0 - 0x1cu);
    g->esp = sp0 - 0x28u;
    cow_call_regs(g, COW_IMG(0x102352d0u), g->eax, sp0 - 0x1cu, edx, 1, 2, sp0 - 0x1cu, 3u);
    t14 = g->ecx;
    wr32(sp0 - 0x34u, 5u);
    ecx = t14;
    loc_34 = 5u;
    goto L_10235124;
L_10235065: ;
    if ((int32_t)edx >= 28) goto L_1023508b;
    wr32(sp0 - 0x2cu, 2u);
    wr32(sp0 - 0x30u, sp0 - 0x1cu);
    g->esp = sp0 - 0x28u;
    cow_call_regs(g, COW_IMG(0x102352d0u), g->eax, 0x66u, edx, 1, 2, sp0 - 0x1cu, 2u);
    t15 = g->ecx;
    t16 = g->edx;
    eax = 0u;
    ecx = t15;
    edx = t16;
L_10235077: ;
    t17 = rd8(eax + sp0 - 0x1cu);
    wr8(eax + sp0 - 0x14u, (uint8_t)t17);
    if ((uint8_t)t17 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t17;
        goto L_10235077;
    }
    eax = eax + 1u;
    wr32(sp0 - 0x2cu, 4u);
    loc_2c = 4u;
    goto L_10235118;
L_1023508b: ;
    if ((int32_t)edx >= 35) goto L_102350f7;
    wr32(sp0 - 0x2cu, 3u);
    wr32(sp0 - 0x30u, sp0 - 0x1cu);
    g->esp = sp0 - 0x28u;
    cow_call_regs(g, COW_IMG(0x102352d0u), g->eax, 0x66u, edx, 1, 2, sp0 - 0x1cu, 3u);
    t18 = g->ecx;
    t19 = g->edx;
    eax = 0u;
    ecx = t18;
    edx = t19;
L_1023509d: ;
    t20 = rd8(eax + sp0 - 0x1cu);
    wr8(eax + sp0 - 0x14u, (uint8_t)t20);
    if ((uint8_t)t20 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t20;
        goto L_1023509d;
    }
    eax = eax + 1u;
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, sp0 - 0x1cu);
    g->esp = sp0 - 0x28u;
    cow_call_regs(g, COW_IMG(0x102352d0u), g->eax, sp0 - 0x1cu, edx, 1, 2, sp0 - 0x1cu, 0u);
    t21 = g->ecx;
    edi = sp0 - 0x1cu;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    wr32(sp0 - 0x34u, 5u);
    t22 = edi - ~ecx;
    edi = sp0 - 0x14u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0xffu);
    af = 0u;
    zf = 0u;
    sf = 1u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    esi = t22;
    edi = edi - 1u;
    ecx = ~ecx >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x38u, sp0 - 0x1cu);
    ecx = ~ecx & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    g->esp = sp0 - 0x30u;
    cow_call_regs(g, COW_IMG(0x102352d0u), g->eax, ecx, sp0 - 0x14u, 1, 2, sp0 - 0x1cu, 5u);
    t23 = g->ecx;
    ecx = t23;
    goto L_10235280;
L_102350f7: ;
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, sp0 - 0x1cu);
    if ((int32_t)edx >= 42) goto L_10235163;
    g->esp = sp0 - 0x28u;
    cow_call_regs(g, COW_IMG(0x102352d0u), g->eax, 0x66u, edx, 1, 2, sp0 - 0x1cu, 0u);
    t24 = g->ecx;
    t25 = g->edx;
    eax = 0u;
    ecx = t24;
    edx = t25;
L_10235109: ;
    t26 = rd8(eax + sp0 - 0x1cu);
    wr8(eax + sp0 - 0x14u, (uint8_t)t26);
    if ((uint8_t)t26 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t26;
        goto L_10235109;
    }
    eax = eax + 1u;
    wr32(sp0 - 0x2cu, 1u);
    loc_2c = 1u;
    goto L_10235118;
L_10235163: ;
    if ((int32_t)edx >= 62) goto L_10235183;
    g->esp = sp0 - 0x28u;
    cow_call_regs(g, COW_IMG(0x102352d0u), g->eax, 0x66u, edx, 1, 2, sp0 - 0x1cu, 0u);
    t30 = g->ecx;
    t31 = g->edx;
    eax = 0u;
    ecx = t30;
    edx = t31;
L_10235172: ;
    t32 = rd8(eax + sp0 - 0x1cu);
    wr8(eax + sp0 - 0x14u, (uint8_t)t32);
    if ((uint8_t)t32 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t32;
        goto L_10235172;
    }
    eax = eax + 1u;
    wr32(sp0 - 0x2cu, 1u);
    loc_2c = 1u;
L_102351a1: ;
    wr32(sp0 - 0x30u, sp0 - 0x1cu);
    g->esp = sp0 - 0x28u;
    cow_call_regs(g, COW_IMG(0x102352d0u), g->eax, sp0 - 0x1cu, edx, 1, 2, sp0 - 0x1cu, loc_2c);
    t36 = g->ecx;
    edi = sp0 - 0x1cu;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    wr32(sp0 - 0x34u, 3u);
    t37 = edi - ~ecx;
    edi = sp0 - 0x14u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0xffu);
    af = 0u;
    zf = 0u;
    sf = 1u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    esi = t37;
    edi = edi - 1u;
    ecx = ~ecx >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x38u, sp0 - 0x1cu);
    ecx = ~ecx & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    g->esp = sp0 - 0x30u;
    cow_call_regs(g, COW_IMG(0x102352d0u), g->eax, ecx, sp0 - 0x14u, 1, 2, sp0 - 0x1cu, 3u);
    t38 = g->ecx;
    wr32(sp0 - 0x3cu, 5u);
    ecx = t38;
    loc_3c = 5u;
L_10235246: ;
    edi = sp0 - 0x1cu;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0xffu);
    af = 0u;
    zf = 0u;
    sf = 1u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t45 = edi - ~ecx;
    edi = sp0 - 0x14u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0xffu);
    af = 0u;
    zf = 0u;
    sf = 1u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    esi = t45;
    edi = edi - 1u;
    ecx = ~ecx >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x40u, sp0 - 0x1cu);
    ecx = ~ecx & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    g->esp = sp0 - 0x38u;
    cow_call_regs(g, COW_IMG(0x102352d0u), g->eax, ecx, sp0 - 0x14u, 1, 2, sp0 - 0x1cu, loc_3c);
    t46 = g->ecx;
    ecx = t46;
    goto L_10235280;
L_10235183: ;
    if ((int32_t)edx >= 82) goto L_102351e8;
    g->esp = sp0 - 0x28u;
    cow_call_regs(g, COW_IMG(0x102352d0u), g->eax, 0x66u, edx, 1, 2, sp0 - 0x1cu, 0u);
    t33 = g->ecx;
    t34 = g->edx;
    eax = 0u;
    ecx = t33;
    edx = t34;
L_10235192: ;
    t35 = rd8(eax + sp0 - 0x1cu);
    wr8(eax + sp0 - 0x14u, (uint8_t)t35);
    if ((uint8_t)t35 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t35;
        goto L_10235192;
    }
    eax = eax + 1u;
    wr32(sp0 - 0x2cu, 2u);
    loc_2c = 2u;
    goto L_102351a1;
L_102351e8: ;
    g->esp = sp0 - 0x28u;
    cow_call_regs(g, COW_IMG(0x102352d0u), g->eax, 0x66u, edx, 1, 2, sp0 - 0x1cu, 0u);
    t39 = g->ecx;
    t40 = g->edx;
    eax = 0u;
    ecx = t39;
    edx = t40;
L_102351f2: ;
    t41 = rd8(eax + sp0 - 0x1cu);
    wr8(eax + sp0 - 0x14u, (uint8_t)t41);
    if ((uint8_t)t41 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t41;
        goto L_102351f2;
    }
    eax = eax + 1u;
    wr32(sp0 - 0x2cu, 2u);
    wr32(sp0 - 0x30u, sp0 - 0x1cu);
    g->esp = sp0 - 0x28u;
    cow_call_regs(g, COW_IMG(0x102352d0u), g->eax, sp0 - 0x1cu, edx, 1, 2, sp0 - 0x1cu, 2u);
    t42 = g->ecx;
    edi = sp0 - 0x1cu;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    wr32(sp0 - 0x34u, 4u);
    t43 = edi - ~ecx;
    edi = sp0 - 0x14u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0xffu);
    af = 0u;
    zf = 0u;
    sf = 1u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    esi = t43;
    edi = edi - 1u;
    ecx = ~ecx >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x38u, sp0 - 0x1cu);
    ecx = ~ecx & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    g->esp = sp0 - 0x30u;
    cow_call_regs(g, COW_IMG(0x102352d0u), g->eax, ecx, sp0 - 0x14u, 1, 2, sp0 - 0x1cu, 4u);
    t44 = g->ecx;
    wr32(sp0 - 0x3cu, 6u);
    ecx = t44;
    loc_3c = 6u;
    goto L_10235246;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10234fc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10234fc0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
