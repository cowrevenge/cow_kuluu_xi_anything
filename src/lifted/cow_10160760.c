/* f_0x10160760 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10160760(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd8(arg2) != 0x20u)
    {
        edx = arg2;
        goto L_10160777;
    }
    eax = (in_eax & 0xffffff00u) | rd8(arg2);
    edx = arg2;
L_1016076f: ;
    if (rd8(edx + 1u) == 0x20u)
    {
        eax = (eax & 0xffffff00u) | rd8(edx + 1u);
        edx = edx + 1u;
        goto L_1016076f;
    }
    edx = edx + 1u;
L_10160777: ;
    wr32(arg1, 0x20202020u);
    wr32(arg1 + 4u, 0x20202020u);
    wr32(arg1 + 8u, 0x20202020u);
    wr32(arg1 + 0xcu, 0x20202020u);
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
    if ((int32_t)(~ecx - 1u) <= 8)
    {
        ecx = ~ecx - 1u;
        goto L_101607ad;
    }
    ecx = ~ecx - 1u;
    if ((int32_t)ecx >= 32) goto L_101607a8;
    loc_10 = ecx;
    loc_14 = edx;
    loc_18 = arg1;
L_101607c2: ;
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10312090u), eax, g->ecx, g->edx, 1, 3, loc_18, loc_14, loc_10);
L_101607ca: ;
    wr32(arg1 + 0x10u, 0u);
    wr32(arg1 + 0x14u, 0u);
    wr32(arg1 + 0x18u, 0u);
    wr32(arg1 + 0x1cu, 0u);
    if (rd8(self + 0xb5u) != 0u)
    {
        eax = (arg1 + 0x10u & 0xffffff00u) | rd8(self + 0xb5u);
        goto L_10160886;
    }
    esi = arg1;
    edi = COW_IMG(0x10376364u);
    ecx = 0x11u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_10160811;
    eax = COW_IMG(0x10376350u);
L_10160801: ;
    t2 = rd8(eax);
    wr8(arg1 + eax - COW_IMG(0x10376350u), (uint8_t)t2);
    if ((uint8_t)t2 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t2;
        goto L_10160801;
    }
    eax = eax + 1u;
    return eax;
L_101607a8: ;
    if ((int32_t)ecx > 8) goto L_101607ca;
L_101607ad: ;
    wr32(arg1, rd32(COW_IMG(0x10376378u)));
    t1 = rd32(COW_IMG(0x1037637cu));
    wr32(arg1 + 4u, t1);
    eax = t1;
    loc_10 = ecx;
    ecx = arg1 + 8u;
    loc_14 = edx;
    loc_18 = arg1 + 8u;
    goto L_101607c2;
L_10160811: ;
    esi = arg1;
    edi = COW_IMG(0x1037633cu);
    ecx = 0x11u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_1016083a;
    eax = COW_IMG(0x10376328u);
L_1016082a: ;
    t3 = rd8(eax);
    wr8(arg1 + eax - COW_IMG(0x10376328u), (uint8_t)t3);
    if ((uint8_t)t3 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t3;
        goto L_1016082a;
    }
    eax = eax + 1u;
    return eax;
L_1016083a: ;
    esi = arg1;
    edi = COW_IMG(0x10376314u);
    ecx = 0x11u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_10160863;
    eax = COW_IMG(0x10376300u);
L_10160853: ;
    t4 = rd8(eax);
    wr8(arg1 + eax - COW_IMG(0x10376300u), (uint8_t)t4);
    if ((uint8_t)t4 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t4;
        goto L_10160853;
    }
    eax = eax + 1u;
    return eax;
L_10160863: ;
    esi = arg1;
    edi = COW_IMG(0x103762ecu);
    ecx = 0x11u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf)
    {
        eax = 0u;
    }
    else
    {
        eax = COW_IMG(0x103762d8u);
L_1016087c: ;
        t5 = rd8(eax);
        wr8(arg1 + eax - COW_IMG(0x103762d8u), (uint8_t)t5);
        if ((uint8_t)t5 != 0u)
        {
            eax = eax + 1u;
            ecx = (ecx & 0xffffff00u) | t5;
            goto L_1016087c;
        }
        eax = eax + 1u;
    }
L_10160886: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10160760(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10160760(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
