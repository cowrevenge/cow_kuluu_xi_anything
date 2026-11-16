/* f_0x102eaa67 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102eaa67(Guest* g)
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
    uint32_t loc_1c;
    uint32_t loc_40;
    uint32_t loc_8;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 68u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0xcu, self);
    wr32(sp0 - 0x34u, in_esi);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x1cu, 0u);
    eax = self + 0xc8u;
    ecx = 0u;
L_102eaa93: ;
    if (rd8(eax) != 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax);
        goto L_102eaa8d;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
L_102eaa99: ;
    if (rd8(eax) == 0u)
    {
        edx = eax;
        loc_10 = 0u;
        loc_18 = 0u;
        loc_14 = 0u;
        loc_1c = 0u;
    }
    else
    {
        edx = eax;
        wr32(sp0 - 0x10u, eax + 1u);
        loc_10 = eax + 1u;
        eax = eax + 1u;
L_102eaaac: ;
        if (rd8(eax) != 0u)
        {
            ecx = (ecx & 0xffffff00u) | rd8(eax);
            goto L_102eaaa6;
        }
L_102eaab2: ;
        wr32(sp0 - 0x18u, eax);
        if (rd8(eax) == 0u)
        {
            loc_18 = eax;
            loc_14 = 0u;
            loc_1c = 0u;
        }
        else
        {
            loc_18 = eax;
            wr32(sp0 - 0x14u, eax + 1u);
            loc_14 = eax + 1u;
            eax = eax + 1u;
L_102eaac1: ;
            if (rd8(eax) != 0u) goto L_102eaac0;
            wr32(sp0 - 0x1cu, eax);
            loc_1c = eax;
        }
    }
    t1 = edx - (self + 0xc8u);
    if (t1 <= 0xfu)
    {
        eax = t1;
        wr32(sp0 - 0x38u, in_ebx);
        wr32(sp0 - 0x3cu, in_edi);
        esi = self + 0xc8u;
        edi = sp0 - 0x30u;
        ecx = eax >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr32(sp0 - 0x40u, 3u);
        ecx = eax & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        wr8(eax + sp0 - 0x30u, 0u);
        wr32(sp0 - 0x40u, 4u);
        esi = sp0 - 0x30u;
        edi = COW_IMG(0x10346780u);
        ecx = 4u;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
        if (!zf) goto L_102eab12;
        edx = 0u;
L_102eae5c: ;
        eax = 0x104u;
L_102eac05: ;
        if (loc_10 == 0u)
        {
            loc_8 = 0u;
            goto L_102eb10e;
        }
        if (rd32(self + 0xacu) == 0u) goto L_102eb06c;
        wr32(sp0 - 0x20u, loc_18 - loc_10);
        if (loc_18 - loc_10 > 0xfu) goto L_102eb06c;
        ecx = loc_18 - loc_10;
        esi = loc_10;
        edi = sp0 - 0x30u;
        ecx = ecx >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = ecx & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        wr8(ecx + sp0 - 0x30u, 0u);
        wr32(sp0 - 0x40u, 3u);
        esi = sp0 - 0x30u;
        edi = COW_IMG(0x10346754u);
        ecx = 3u;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
        if (!zf) goto L_102eb076;
        wr32(sp0 - 8u, 0x3000000u);
        loc_8 = 0x3000000u;
L_102eb10e: ;
        if (loc_14 == 0u) goto L_102eb167;
        esi = loc_14;
        if (rd32(self + 0xacu) == 0u) goto L_102eb06c;
        wr32(sp0 - 0x20u, loc_1c - esi);
        if (loc_1c - esi > 0xfu) goto L_102eb06c;
        ecx = loc_1c - esi;
        edi = sp0 - 0x30u;
        ecx = ecx >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = ecx & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        wr8(ecx + sp0 - 0x30u, 0u);
        wr32(sp0 - 0x40u, 4u);
        esi = sp0 - 0x30u;
        edi = COW_IMG(0x103465ecu);
        ecx = 4u;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
        if (!zf) goto L_102eb06c;
        loc_8 = (loc_8 & 0xff00ffffu) | (uint8_t)(loc_8 >> 0x10u | 0x10u) << 0x10u;
L_102eb167: ;
        wr32(self + 0x1c8u, edx);
        wr32(self + 0x1ccu, loc_8);
L_102eb179: ;
    }
    else
    {
        eax = 0x109u;
    }
    return eax;
L_102eaa8d: ;
    if ((uint8_t)ecx == 0x5fu) goto L_102eaa99;
    eax = eax + 1u;
    goto L_102eaa93;
L_102eaaa6: ;
    if ((uint8_t)ecx == 0x5fu) goto L_102eaab2;
    eax = eax + 1u;
    goto L_102eaaac;
L_102eaac0: ;
    eax = eax + 1u;
    goto L_102eaac1;
L_102eab12: ;
    esi = sp0 - 0x30u;
    edi = COW_IMG(0x1034677cu);
    ecx = 4u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102eab2a;
    edx = 1u;
L_102eb04e: ;
    eax = 0x106u;
    goto L_102eac05;
L_102eab2a: ;
    esi = sp0 - 0x30u;
    edi = COW_IMG(0x10346778u);
    ecx = 4u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102eab41;
    wr32(sp0 - 0x40u, 2u);
    loc_40 = 2u;
L_102eb030: ;
    edx = loc_40;
L_102eb031: ;
    eax = 0x107u;
    goto L_102eac05;
L_102eab41: ;
    esi = sp0 - 0x30u;
    edi = COW_IMG(0x10346774u);
    ecx = 4u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (zf)
    {
        edx = 3u;
        goto L_102eb031;
    }
    esi = sp0 - 0x30u;
    edi = COW_IMG(0x10346770u);
    ecx = 4u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102eab6c;
    edx = 4u;
L_102eac00: ;
    eax = 0x108u;
    goto L_102eac05;
L_102eab6c: ;
    esi = sp0 - 0x30u;
    edi = COW_IMG(0x1034676cu);
    ecx = 4u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102eab83;
    wr32(sp0 - 0x40u, 5u);
    loc_40 = 5u;
    goto L_102eb030;
L_102eab83: ;
    esi = sp0 - 0x30u;
    edi = COW_IMG(0x10346768u);
    ecx = 4u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102eab9a;
    wr32(sp0 - 0x40u, 8u);
    loc_40 = 8u;
    goto L_102eb030;
L_102eab9a: ;
    esi = sp0 - 0x30u;
    edi = COW_IMG(0x10346764u);
    ecx = 4u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102eabb1;
    wr32(sp0 - 0x40u, 9u);
    loc_40 = 9u;
    goto L_102eb030;
L_102eabb1: ;
    esi = sp0 - 0x30u;
    edi = COW_IMG(0x10346760u);
    ecx = 4u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102eabc8;
    wr32(sp0 - 0x40u, 0x13u);
    loc_40 = 0x13u;
L_102eb04d: ;
    edx = loc_40;
    goto L_102eb04e;
L_102eabc8: ;
    if (rd32(self + 0xacu) == 0u) goto L_102eaee8;
    eax = rd32(self + 0xacu);
    esi = sp0 - 0x30u;
    edi = COW_IMG(0x1034675cu);
    ecx = 4u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102eabed;
    wr32(sp0 - 0x40u, 0x12u);
    loc_40 = 0x12u;
L_102eabff: ;
    edx = loc_40;
    goto L_102eac00;
L_102eabed: ;
    esi = sp0 - 0x30u;
    edi = COW_IMG(0x10346758u);
    ecx = 4u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102eac6c;
    wr32(sp0 - 0x40u, 0x50u);
    loc_40 = 0x50u;
    goto L_102eabff;
L_102eac6c: ;
    esi = sp0 - 0x30u;
    edi = COW_IMG(0x10346750u);
    ecx = 4u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102eac83;
    wr32(sp0 - 0x40u, 0x58u);
    loc_40 = 0x58u;
    goto L_102eabff;
L_102eac83: ;
    if (rd32(self + 0xb4u) >= 0xffff0104u) goto L_102eae49;
    wr32(sp0 - 0x40u, 9u);
    esi = sp0 - 0x30u;
    edi = COW_IMG(0x10346744u);
    ecx = 9u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102eacae;
    wr32(sp0 - 0x40u, 0x40u);
    loc_40 = 0x40u;
L_102eaea6: ;
    eax = 0x105u;
    edx = loc_40;
    goto L_102eac05;
L_102eacae: ;
    wr32(sp0 - 0x40u, 8u);
    esi = sp0 - 0x30u;
    edi = COW_IMG(0x1034673cu);
    ecx = 8u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102eacc6;
L_102eacbf: ;
    wr32(sp0 - 0x40u, 0x41u);
    loc_40 = 0x41u;
    goto L_102eaea6;
L_102eacc6: ;
    esi = sp0 - 0x30u;
    edi = COW_IMG(0x10346738u);
    ecx = 4u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102eacdd;
    wr32(sp0 - 0x40u, 0x42u);
    loc_40 = 0x42u;
    goto L_102eaea6;
L_102eacdd: ;
    wr32(sp0 - 0x40u, 7u);
    esi = sp0 - 0x30u;
    edi = COW_IMG(0x10346730u);
    ecx = 7u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102eacf5;
    wr32(sp0 - 0x40u, 0x43u);
    loc_40 = 0x43u;
    goto L_102eb04d;
L_102eacf5: ;
    wr32(sp0 - 0x40u, 8u);
    esi = sp0 - 0x30u;
    edi = COW_IMG(0x10346728u);
    ecx = 8u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102ead0d;
    wr32(sp0 - 0x40u, 0x44u);
    loc_40 = 0x44u;
    goto L_102eb04d;
L_102ead0d: ;
    wr32(sp0 - 0x40u, 0xau);
    esi = sp0 - 0x30u;
    edi = COW_IMG(0x1034671cu);
    ecx = 0xau;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102ead25;
    wr32(sp0 - 0x40u, 0x45u);
    loc_40 = 0x45u;
    goto L_102eb04d;
L_102ead25: ;
    wr32(sp0 - 0x40u, 0xau);
    esi = sp0 - 0x30u;
    edi = COW_IMG(0x10346710u);
    ecx = 0xau;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102ead3d;
    wr32(sp0 - 0x40u, 0x46u);
    loc_40 = 0x46u;
    goto L_102eb04d;
L_102ead3d: ;
    wr32(sp0 - 0x40u, 0xbu);
    esi = sp0 - 0x30u;
    edi = COW_IMG(0x10346704u);
    ecx = 0xbu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102ead55;
    wr32(sp0 - 0x40u, 0x47u);
    loc_40 = 0x47u;
    goto L_102eb04d;
L_102ead55: ;
    wr32(sp0 - 0x40u, 0xbu);
    esi = sp0 - 0x30u;
    edi = COW_IMG(0x103466f8u);
    ecx = 0xbu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102ead6d;
    wr32(sp0 - 0x40u, 0x48u);
    loc_40 = 0x48u;
    goto L_102eb04d;
L_102ead6d: ;
    wr32(sp0 - 0x40u, 0xbu);
    esi = sp0 - 0x30u;
    edi = COW_IMG(0x103466ecu);
    ecx = 0xbu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102ead85;
    wr32(sp0 - 0x40u, 0x49u);
    loc_40 = 0x49u;
    goto L_102eb04d;
L_102ead85: ;
    wr32(sp0 - 0x40u, 0xbu);
    esi = sp0 - 0x30u;
    edi = COW_IMG(0x103466e0u);
    ecx = 0xbu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102ead9d;
    wr32(sp0 - 0x40u, 0x4au);
    loc_40 = 0x4au;
    goto L_102eb04d;
L_102ead9d: ;
    wr32(sp0 - 0x40u, 0xcu);
    esi = sp0 - 0x30u;
    edi = COW_IMG(0x103466d4u);
    ecx = 0xcu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102eadb5;
    wr32(sp0 - 0x40u, 0x4cu);
    loc_40 = 0x4cu;
    goto L_102eb030;
L_102eadb5: ;
    wr32(sp0 - 0x40u, 0xdu);
    esi = sp0 - 0x30u;
    edi = COW_IMG(0x103466c4u);
    ecx = 0xdu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102eadcd;
    wr32(sp0 - 0x40u, 0x4du);
    loc_40 = 0x4du;
    goto L_102eb04d;
L_102eadcd: ;
    wr32(sp0 - 0x40u, 0xdu);
    esi = sp0 - 0x30u;
    edi = COW_IMG(0x103466b4u);
    ecx = 0xdu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102eade5;
    wr32(sp0 - 0x40u, 0x54u);
    loc_40 = 0x54u;
    goto L_102eb04d;
L_102eade5: ;
    wr32(sp0 - 0x40u, 7u);
    esi = sp0 - 0x30u;
    edi = COW_IMG(0x103466acu);
    ecx = 7u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102eadfd;
    wr32(sp0 - 0x40u, 0x55u);
    loc_40 = 0x55u;
    goto L_102eb04d;
L_102eadfd: ;
    wr32(sp0 - 0x40u, 0xbu);
    esi = sp0 - 0x30u;
    edi = COW_IMG(0x103466a0u);
    ecx = 0xbu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102eae15;
    wr32(sp0 - 0x40u, 0x52u);
    loc_40 = 0x52u;
    goto L_102eb04d;
L_102eae15: ;
    wr32(sp0 - 0x40u, 8u);
    esi = sp0 - 0x30u;
    edi = COW_IMG(0x10346698u);
    ecx = 8u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102eae2d;
    wr32(sp0 - 0x40u, 0x56u);
    loc_40 = 0x56u;
    goto L_102eb04d;
L_102eae2d: ;
    wr32(sp0 - 0x40u, 0xau);
    esi = sp0 - 0x30u;
    edi = COW_IMG(0x1034668cu);
    ecx = 0xau;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102eaee0;
    wr32(sp0 - 0x40u, 0x53u);
    loc_40 = 0x53u;
    goto L_102eb04d;
L_102eae49: ;
    wr32(sp0 - 0x40u, 6u);
    esi = sp0 - 0x30u;
    edi = COW_IMG(0x10346684u);
    ecx = 6u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102eae66;
    edx = 0xfffdu;
    goto L_102eae5c;
L_102eae66: ;
    wr32(sp0 - 0x40u, 7u);
    esi = sp0 - 0x30u;
    edi = COW_IMG(0x1034667cu);
    ecx = 7u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102eae7e;
    wr32(sp0 - 0x40u, 0x40u);
    loc_40 = 0x40u;
    goto L_102eb04d;
L_102eae7e: ;
    wr32(sp0 - 0x40u, 8u);
    esi = sp0 - 0x30u;
    edi = COW_IMG(0x1034673cu);
    ecx = 8u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (zf) goto L_102eacbf;
    wr32(sp0 - 0x40u, 9u);
    esi = sp0 - 0x30u;
    edi = COW_IMG(0x10346670u);
    ecx = 9u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102eaeb1;
    wr32(sp0 - 0x40u, 0x57u);
    loc_40 = 0x57u;
    goto L_102eaea6;
L_102eaeb1: ;
    wr32(sp0 - 0x40u, 6u);
    esi = sp0 - 0x30u;
    edi = COW_IMG(0x10346668u);
    ecx = 6u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102eaec9;
    wr32(sp0 - 0x40u, 0x42u);
    loc_40 = 0x42u;
    goto L_102eb04d;
L_102eaec9: ;
    esi = sp0 - 0x30u;
    edi = COW_IMG(0x10346664u);
    ecx = 4u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102eaee0;
    wr32(sp0 - 0x40u, 0x59u);
    loc_40 = 0x59u;
    goto L_102eb030;
L_102eaee0: ;
    if (eax != 0u) goto L_102eb06c;
L_102eaee8: ;
    esi = sp0 - 0x30u;
    edi = COW_IMG(0x10346660u);
    ecx = 4u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102eaeff;
    wr32(sp0 - 0x40u, 6u);
    loc_40 = 6u;
    goto L_102eb04d;
L_102eaeff: ;
    esi = sp0 - 0x30u;
    edi = COW_IMG(0x1034665cu);
    ecx = 4u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102eaf16;
    wr32(sp0 - 0x40u, 7u);
    loc_40 = 7u;
    goto L_102eb04d;
L_102eaf16: ;
    esi = sp0 - 0x30u;
    edi = COW_IMG(0x10346658u);
    ecx = 4u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102eaf2d;
    wr32(sp0 - 0x40u, 0xau);
    loc_40 = 0xau;
    goto L_102eb030;
L_102eaf2d: ;
    esi = sp0 - 0x30u;
    edi = COW_IMG(0x10346654u);
    ecx = 4u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102eaf44;
    wr32(sp0 - 0x40u, 0xbu);
    loc_40 = 0xbu;
    goto L_102eb030;
L_102eaf44: ;
    esi = sp0 - 0x30u;
    edi = COW_IMG(0x10346650u);
    ecx = 4u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102eaf5b;
    wr32(sp0 - 0x40u, 0xcu);
    loc_40 = 0xcu;
    goto L_102eb030;
L_102eaf5b: ;
    esi = sp0 - 0x30u;
    edi = COW_IMG(0x1034664cu);
    ecx = 4u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102eaf72;
    wr32(sp0 - 0x40u, 0xdu);
    loc_40 = 0xdu;
    goto L_102eb030;
L_102eaf72: ;
    esi = sp0 - 0x30u;
    edi = COW_IMG(0x10346648u);
    ecx = 4u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102eaf89;
    wr32(sp0 - 0x40u, 0xeu);
    loc_40 = 0xeu;
    goto L_102eb04d;
L_102eaf89: ;
    esi = sp0 - 0x30u;
    edi = COW_IMG(0x10346644u);
    ecx = 4u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102eafa0;
    wr32(sp0 - 0x40u, 0xfu);
    loc_40 = 0xfu;
    goto L_102eb04d;
L_102eafa0: ;
    esi = sp0 - 0x30u;
    edi = COW_IMG(0x10346640u);
    ecx = 4u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102eafb7;
    wr32(sp0 - 0x40u, 0x10u);
    loc_40 = 0x10u;
    goto L_102eb04d;
L_102eafb7: ;
    esi = sp0 - 0x30u;
    edi = COW_IMG(0x1034663cu);
    ecx = 4u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102eafcb;
    wr32(sp0 - 0x40u, 0x11u);
    loc_40 = 0x11u;
    goto L_102eb030;
L_102eafcb: ;
    wr32(sp0 - 0x40u, 5u);
    esi = sp0 - 0x30u;
    edi = COW_IMG(0x10346634u);
    ecx = 5u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102eafe2;
    wr32(sp0 - 0x40u, 0x14u);
    loc_40 = 0x14u;
    goto L_102eb030;
L_102eafe2: ;
    esi = sp0 - 0x30u;
    edi = COW_IMG(0x1034662cu);
    ecx = 5u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102eaff6;
    wr32(sp0 - 0x40u, 0x15u);
    loc_40 = 0x15u;
    goto L_102eb030;
L_102eaff6: ;
    esi = sp0 - 0x30u;
    edi = COW_IMG(0x10346624u);
    ecx = 5u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102eb00a;
    wr32(sp0 - 0x40u, 0x16u);
    loc_40 = 0x16u;
    goto L_102eb030;
L_102eb00a: ;
    esi = sp0 - 0x30u;
    edi = COW_IMG(0x1034661cu);
    ecx = 5u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102eb01e;
    wr32(sp0 - 0x40u, 0x17u);
    loc_40 = 0x17u;
    goto L_102eb030;
L_102eb01e: ;
    esi = sp0 - 0x30u;
    edi = COW_IMG(0x10346614u);
    ecx = 5u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102eb03b;
    wr32(sp0 - 0x40u, 0x18u);
    loc_40 = 0x18u;
    goto L_102eb030;
L_102eb03b: ;
    esi = sp0 - 0x30u;
    edi = COW_IMG(0x1034660cu);
    ecx = 5u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102eb058;
    wr32(sp0 - 0x40u, 0x4eu);
    loc_40 = 0x4eu;
    goto L_102eb04d;
L_102eb058: ;
    esi = sp0 - 0x30u;
    edi = COW_IMG(0x10346604u);
    ecx = 5u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102eb06c;
    wr32(sp0 - 0x40u, 0x4fu);
    loc_40 = 0x4fu;
    goto L_102eb04d;
L_102eb06c: ;
    eax = 0x109u;
    goto L_102eb179;
L_102eb076: ;
    wr32(sp0 - 0x40u, 3u);
    esi = sp0 - 0x30u;
    edi = COW_IMG(0x10346600u);
    ecx = 3u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102eb090;
    wr32(sp0 - 8u, 0x2000000u);
    loc_8 = 0x2000000u;
    goto L_102eb10e;
L_102eb090: ;
    wr32(sp0 - 0x40u, 3u);
    esi = sp0 - 0x30u;
    edi = COW_IMG(0x103465fcu);
    ecx = 3u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102eb0aa;
    wr32(sp0 - 8u, 0x1000000u);
    loc_8 = 0x1000000u;
    goto L_102eb10e;
L_102eb0aa: ;
    wr32(sp0 - 0x40u, 3u);
    esi = sp0 - 0x30u;
    edi = COW_IMG(0x103465f8u);
    ecx = 3u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102eb0c4;
    wr32(sp0 - 8u, 0xf000000u);
    loc_8 = 0xf000000u;
    goto L_102eb10e;
L_102eb0c4: ;
    wr32(sp0 - 0x40u, 3u);
    esi = sp0 - 0x30u;
    edi = COW_IMG(0x103465f4u);
    ecx = 3u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102eb0de;
    wr32(sp0 - 8u, 0xe000000u);
    loc_8 = 0xe000000u;
    goto L_102eb10e;
L_102eb0de: ;
    wr32(sp0 - 0x40u, 3u);
    esi = sp0 - 0x30u;
    edi = COW_IMG(0x103465f0u);
    ecx = 3u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_102eb0f8;
    wr32(sp0 - 8u, 0xd000000u);
    loc_8 = 0xd000000u;
    goto L_102eb10e;
L_102eb0f8: ;
    if (loc_14 != 0u) goto L_102eb06c;
    wr32(sp0 - 0x14u, loc_10);
    wr32(sp0 - 0x1cu, loc_18);
    loc_8 = 0u;
    loc_14 = loc_10;
    loc_1c = loc_18;
    goto L_102eb10e;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102eaa67(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102eaa67(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
