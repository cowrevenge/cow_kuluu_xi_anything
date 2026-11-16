/* f_0x10260b50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_10260b50(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(sp0 + 8u);
    esi = t1;
    edi = COW_IMG(0x1033f818u);
    ecx = 4u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint32_t a = rd32(esi), b = rd32(edi), r = (uint32_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 31 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 31) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; if (!zf) break; }
    if (!zf)
    {
        eax = t1;
        goto L_10260b85;
    }
    if (arg1 == 0u) goto L_10260bb4;
    g->esp = sp0 - 8u;
    t2 = cow_call_regs(g, COW_IMG(0x10265b00u), g->eax, g->ecx, 0u, 0, 2, arg1 + 0xe0u, arg3);
    t3 = g->edx;
    g->edx = t3;
    return t2;
L_1025e5b0: ;
    t8 = rd32(sp0 + 8u);
    esi = t8;
    edi = COW_IMG(0x1033eeb8u);
    ecx = 4u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint32_t a = rd32(esi), b = rd32(edi), r = (uint32_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 31 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 31) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; if (!zf) break; }
    if (zf)
    {
        eax = t8;
        goto L_1025e5e5;
    }
    eax = t8;
    esi = eax;
    edi = COW_IMG(0x1033e878u);
    ecx = 4u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint32_t a = rd32(esi), b = rd32(edi), r = (uint32_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 31 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 31) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; if (!zf) break; }
    if (zf) goto L_1025e5e5;
    wr32(sp0 + 8u, eax);
    t9 = rd32(sp0 + 8u);
    esi = t9;
    edi = COW_IMG(0x1033e918u);
    ecx = 4u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint32_t a = rd32(esi), b = rd32(edi), r = (uint32_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 31 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 31) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; if (!zf) break; }
    if (!zf)
    {
        eax = t9;
        goto L_10261195;
    }
    if (arg1 == 0u) goto L_10261183;
    g->esp = sp0 - 8u;
    t10 = cow_call_regs(g, COW_IMG(0x10265b00u), g->eax, g->ecx, 0u, 0, 2, arg1 + 0xcu, arg3);
    t11 = g->edx;
    g->edx = t11;
    return t10;
L_1025e5e5: ;
    g->eax = eax;
    g->edx = rd32(arg1);
    t20 = rd32(arg1);
    g->esp = sp0 - 8u;
    t21 = cow_thiscall(g, rd32(t20 + 0x24u), arg1, 2, eax, arg3);
    t22 = g->edx;
    g->edx = t22;
    return t21;
L_10260b85: ;
    esi = eax;
    edi = COW_IMG(0x1033e828u);
    ecx = 4u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint32_t a = rd32(esi), b = rd32(edi), r = (uint32_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 31 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 31) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; if (!zf) break; }
    if (!zf) goto L_10260bc6;
    if (arg1 == 0u) goto L_10260bb4;
    g->esp = sp0 - 8u;
    t4 = cow_call_regs(g, COW_IMG(0x10265b00u), g->eax, g->ecx, 0u, 0, 2, arg1 + 0xe4u, arg3);
    t5 = g->edx;
    g->edx = t5;
    return t4;
L_10260bb4: ;
    g->esp = sp0 - 8u;
    t6 = cow_call_regs(g, COW_IMG(0x10265b00u), g->eax, g->ecx, 0u, 0, 2, 0u, arg3);
    t7 = g->edx;
    g->edx = t7;
    return t6;
L_10260bc6: ;
    wr32(sp0 + 8u, eax);
    goto L_1025e5b0;
L_10261183: ;
    g->esp = sp0 - 8u;
    t18 = cow_call_regs(g, COW_IMG(0x10265b00u), g->eax, g->ecx, 0u, 0, 2, 0u, arg3);
    t19 = g->edx;
    g->edx = t19;
    return t18;
L_10261195: ;
    esi = eax;
    edi = COW_IMG(0x1033e928u);
    ecx = 4u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint32_t a = rd32(esi), b = rd32(edi), r = (uint32_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 31 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 31) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; if (!zf) break; }
    if (!zf) goto L_102611c2;
    if (arg1 == 0u) goto L_10261183;
    g->esp = sp0 - 8u;
    t12 = cow_call_regs(g, COW_IMG(0x10265b00u), g->eax, g->ecx, 0u, 0, 2, arg1 + 0xcu, arg3);
    t13 = g->edx;
    g->edx = t13;
    return t12;
L_102611c2: ;
    esi = eax;
    edi = COW_IMG(0x1034a158u);
    ecx = 4u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint32_t a = rd32(esi), b = rd32(edi), r = (uint32_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 31 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 31) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; if (!zf) break; }
    if (!zf) goto L_102611ef;
    if (arg1 == 0u) goto L_10261183;
    g->esp = sp0 - 8u;
    t14 = cow_call_regs(g, COW_IMG(0x10265b00u), g->eax, g->ecx, 0u, 0, 2, arg1 + 0xcu, arg3);
    t15 = g->edx;
    g->edx = t15;
    return t14;
L_102611ef: ;
    esi = eax;
    edi = COW_IMG(0x1033e888u);
    ecx = 4u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint32_t a = rd32(esi), b = rd32(edi), r = (uint32_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 31 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 31) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; if (!zf) break; }
    if (!zf) goto L_10261220;
    if (arg1 == 0u) goto L_10261183;
    g->esp = sp0 - 8u;
    t16 = cow_call_regs(g, COW_IMG(0x10265b00u), g->eax, g->ecx, 0u, 0, 2, arg1 + 0x10u, arg3);
    t17 = g->edx;
    g->edx = t17;
    return t16;
L_10261220: ;
    wr32(sp0 + 8u, eax);
    g->esp = sp0;
    g->edx = 0u;
    return cow_tailcall(g, COW_IMG(0x10265a50u), eax, ecx, 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10260b50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10260b50(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
