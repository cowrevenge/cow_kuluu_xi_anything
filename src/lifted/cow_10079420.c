/* f_0x10079420 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10079420(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_458;
    uint32_t loc_45c;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 1148u);

    wr32(sp0 - 0x460u, in_ebx);
    wr32(sp0 - 0x464u, in_esi);
    wr32(sp0 - 0x468u, in_edi);
    if (rd32(rd32(COW_IMG(0x103551e0u)) + 4u) == 0u)
    {
        edx = in_edx;
        loc_458 = (rd32(sp0 - 0x458u) & 0xffffff00u) | 1u;
        goto L_10079743;
    }
    eax = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    loc_458 = (rd32(sp0 - 0x458u) & 0xffffff00u) | 1u;
    esi = eax;
    edi = COW_IMG(0x10357cb0u);
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
        edx = 0u;
    }
    else
    {
        edx = -cf + 1u - cf;
    }
    if (edx != 0u) goto L_100794b6;
    loc_458 = (loc_458 & 0xffffff00u) | 2u;
L_10079463: ;
    loc_45c = (rd32(sp0 - 0x45cu) & 0xffffff00u) | 5u;
L_10079468: ;
    if (rd32((uint8_t)loc_458 * 4u + rd32(COW_IMG(0x103551e4u))) == 0u)
    {
        edx = rd32(COW_IMG(0x103551e4u));
        goto L_10079790;
    }
    ecx = rd32((uint8_t)loc_458 * 4u + rd32(COW_IMG(0x103551e4u)));
    edx = rd32(COW_IMG(0x103551e4u));
    wr32(sp0 - 0x46cu, ecx);
    wr32(sp0 - 0x470u, sp0 - 0x400u);
    g->esp = sp0 - 0x454u;
    cow_thiscall_cdecl(g, COW_IMG(0x1018fb30u), sp0 - 0x400u, 7, sp0 - 0x400u, ecx, in_edi, in_esi, in_ebx, loc_45c, loc_458);
    t5 = g->ecx;
    wr32(sp0 - 0x474u, sp0 - 0x400u);
    t6 = rd32(sp0 - 0x45cu);
    wr32(sp0 - 0x478u, t6);
    g->edx = sp0 - 0x400u;
    g->esp = sp0 - 0x470u;
    cow_cdecl(g, COW_IMG(0x100f8cc0u), 2, t6, sp0 - 0x400u);
    t7 = g->edx;
    g->ebx = in_ebx;
    g->edx = t7;
    return arg3;
L_100794b6: ;
    esi = eax;
    edi = COW_IMG(0x1034f7b0u);
    ecx = 2u;
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
    }
    else
    {
        edx = -cf + 1u - cf;
    }
    if (edx != 0u) goto L_100794d4;
    loc_458 = (loc_458 & 0xffffff00u) | 2u;
    goto L_10079463;
L_100794d4: ;
    esi = eax;
    edi = COW_IMG(0x10357ca8u);
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
    }
    else
    {
        edx = -cf + 1u - cf;
    }
    if (edx != 0u) goto L_100794fd;
    loc_458 = (loc_458 & 0xffffff00u) | 2u;
    loc_45c = (rd32(sp0 - 0x45cu) & 0xffffff00u) | 6u;
    goto L_10079468;
L_100794fd: ;
    esi = eax;
    edi = COW_IMG(0x10357ca4u);
    ecx = 3u;
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
    }
    else
    {
        edx = -cf + 1u - cf;
    }
    if (edx != 0u) goto L_10079526;
    loc_458 = (loc_458 & 0xffffff00u) | 2u;
    loc_45c = (rd32(sp0 - 0x45cu) & 0xffffff00u) | 6u;
    goto L_10079468;
L_10079526: ;
    esi = eax;
    edi = COW_IMG(0x10357c9cu);
    ecx = 5u;
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
    }
    else
    {
        edx = -cf + 1u - cf;
    }
    if (edx == 0u) goto L_100796fd;
    esi = eax;
    edi = COW_IMG(0x10357c98u);
    ecx = 2u;
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
    }
    else
    {
        edx = -cf + 1u - cf;
    }
    if (edx == 0u) goto L_1007972f;
    esi = eax;
    edi = COW_IMG(0x10357c90u);
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
    }
    else
    {
        edx = -cf + 1u - cf;
    }
    if (edx != 0u) goto L_1007958a;
    loc_458 = (loc_458 & 0xffffff00u) | 2u;
    loc_45c = (rd32(sp0 - 0x45cu) & 0xffffff00u) | 1u;
    goto L_10079468;
L_1007958a: ;
    esi = eax;
    edi = COW_IMG(0x10357c8cu);
    ecx = 2u;
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
    }
    else
    {
        edx = -cf + 1u - cf;
    }
    if (edx != 0u) goto L_100795b0;
    loc_458 = (loc_458 & 0xffffff00u) | 2u;
    loc_45c = (rd32(sp0 - 0x45cu) & 0xffffff00u) | 1u;
    goto L_10079468;
L_100795b0: ;
    esi = eax;
    edi = COW_IMG(0x10357c80u);
    ecx = 0xau;
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
    }
    else
    {
        edx = -cf + 1u - cf;
    }
    if (edx != 0u) goto L_100795d8;
    loc_458 = (loc_458 & 0xffffff00u) | 2u;
    loc_45c = (rd32(sp0 - 0x45cu) & 0xffffff00u) | 2u;
    goto L_10079468;
L_100795d8: ;
    esi = eax;
    edi = COW_IMG(0x10357c7cu);
    ecx = 2u;
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
    }
    else
    {
        edx = -cf + 1u - cf;
    }
    if (edx != 0u) goto L_100795fd;
    loc_458 = (loc_458 & 0xffffff00u) | 2u;
    loc_45c = (rd32(sp0 - 0x45cu) & 0xffffff00u) | 2u;
    goto L_10079468;
L_100795fd: ;
    esi = eax;
    edi = COW_IMG(0x10357c4cu);
    ecx = 0xbu;
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
    }
    else
    {
        edx = -cf + 1u - cf;
    }
    if (edx != 0u) goto L_10079626;
    loc_458 = (loc_458 & 0xffffff00u) | 2u;
    loc_45c = (rd32(sp0 - 0x45cu) & 0xffffff00u) | 3u;
    goto L_10079468;
L_10079626: ;
    esi = eax;
    edi = COW_IMG(0x10357c48u);
    ecx = 3u;
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
    }
    else
    {
        edx = -cf + 1u - cf;
    }
    if (edx != 0u) goto L_1007964f;
    loc_458 = (loc_458 & 0xffffff00u) | 2u;
    loc_45c = (rd32(sp0 - 0x45cu) & 0xffffff00u) | 3u;
    goto L_10079468;
L_1007964f: ;
    esi = eax;
    edi = COW_IMG(0x10357c5cu);
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
    }
    else
    {
        edx = -cf + 1u - cf;
    }
    if (edx == 0u) goto L_100797b0;
    esi = eax;
    edi = COW_IMG(0x10357c40u);
    ecx = 8u;
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
    }
    else
    {
        edx = -cf + 1u - cf;
    }
    if (edx == 0u) goto L_100797b0;
    esi = eax;
    edi = COW_IMG(0x10357c3cu);
    ecx = 3u;
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
    }
    else
    {
        edx = -cf + 1u - cf;
    }
    if (edx == 0u) goto L_100797b0;
    esi = eax;
    edi = COW_IMG(0x10357c34u);
    ecx = 8u;
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
    }
    else
    {
        edx = -cf + 1u - cf;
    }
    if (edx == 0u) goto L_1007972f;
    esi = eax;
    edi = COW_IMG(0x10357c30u);
    ecx = 3u;
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
    }
    else
    {
        edx = -cf + 1u - cf;
    }
    if (edx == 0u) goto L_1007972f;
    esi = eax;
    edi = COW_IMG(0x10357c74u);
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
    }
    else
    {
        edx = -cf + 1u - cf;
    }
    if (edx != 0u) goto L_10079714;
L_100796fd: ;
    edi = sp0 - 0x454u;
    eax = 0u;
    ecx = 0x15u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x46cu, sp0 - 0x454u);
    ecx = sp0 - 0x454u;
L_100797c2: ;
    g->ebx = 2u;
    g->edx = edx;
    g->esp = sp0 - 0x46cu;
    cow_stdcall(g, COW_IMG(0x100a1ab0u), 0);
    t4 = g->edx;
    g->ebx = in_ebx;
    g->edx = t4;
    return arg3;
L_10079714: ;
    esi = eax;
    edi = COW_IMG(0x10357c70u);
    ecx = 3u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (zf)
    {
        eax = 0u;
    }
    else
    {
        eax = -cf + 1u - cf;
    }
    if (eax != 0u) goto L_10079743;
L_1007972f: ;
    edi = sp0 - 0x454u;
    eax = 0u;
    ecx = 0x15u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x46cu, sp0 - 0x454u);
    edx = sp0 - 0x454u;
    goto L_100797c2;
L_10079743: ;
    if (rd32(COW_IMG(0x10662da4u)) == 0u) goto L_10079463;
    ecx = rd32(COW_IMG(0x10662da4u));
    g->edx = edx;
    g->esp = sp0 - 0x468u;
    t1 = cow_thiscall(g, COW_IMG(0x101ad830u), ecx, 0);
    t2 = g->edx;
    if (t1 - 3u > 9u) goto L_10079463;
    eax = t1 - 3u;
    edx = t2;
    t3 = rd32(COW_IMG(0x100797e4u) + eax * 4u);
    switch (t3 - RD)
    {
    case 0x10079463u: goto L_10079463;
    case 0x10079769u: goto L_10079769;
    case 0x10079773u: goto L_10079773;
    case 0x1007977du: goto L_1007977d;
    case 0x10079786u: goto L_10079786;
    case 0x100797b0u: goto L_100797b0;
    default: rt_fatal(g, COW_IMG(0x10079762u), "switch");
    }
    return 0;
L_10079769: ;
    loc_45c = (rd32(sp0 - 0x45cu) & 0xffffff00u) | 6u;
    goto L_10079468;
L_10079773: ;
    loc_45c = (rd32(sp0 - 0x45cu) & 0xffffff00u) | 1u;
    goto L_10079468;
L_1007977d: ;
    loc_45c = (rd32(sp0 - 0x45cu) & 0xffffff00u) | 2u;
    goto L_10079468;
L_10079786: ;
    loc_45c = (rd32(sp0 - 0x45cu) & 0xffffff00u) | 3u;
    goto L_10079468;
L_10079790: ;
    wr32(sp0 - 0x46cu, 0u);
    wr32(sp0 - 0x470u, loc_45c);
    g->edx = edx;
    g->esp = sp0 - 0x468u;
    cow_cdecl(g, COW_IMG(0x100f8cc0u), 2, loc_45c, 0u);
    t8 = g->edx;
    g->ebx = in_ebx;
    g->edx = t8;
    return arg3;
L_100797b0: ;
    edi = sp0 - 0x454u;
    eax = 0u;
    ecx = 0x15u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x46cu, sp0 - 0x454u);
    goto L_100797c2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10079420(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10079420(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
