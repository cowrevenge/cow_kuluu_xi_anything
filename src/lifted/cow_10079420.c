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
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
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
    t1 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    wr8(sp0 - 0x458u, 1u);
    if (t1 == 0u)
    {
        eax = t1;
        edx = in_edx;
        goto L_10079743;
    }
    eax = t1;
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
    wr8(sp0 - 0x458u, 2u);
L_10079463: ;
    wr8(sp0 - 0x45cu, 5u);
L_10079468: ;
    if (rd32(rd32(COW_IMG(0x103551e4u)) + (uint8_t)rd32(sp0 - 0x458u) * 4u) == 0u)
    {
        eax = rd32(COW_IMG(0x103551e4u)) + (uint8_t)rd32(sp0 - 0x458u) * 4u;
        edx = rd32(COW_IMG(0x103551e4u));
        goto L_10079790;
    }
    ecx = rd32(rd32(COW_IMG(0x103551e4u)) + (uint8_t)rd32(sp0 - 0x458u) * 4u);
    edx = rd32(COW_IMG(0x103551e4u));
    wr32(sp0 - 0x46cu, ecx);
    wr32(sp0 - 0x470u, sp0 - 0x400u);
    g->esp = sp0 - 0x454u;
    cow_thiscall_cdecl(g, COW_IMG(0x1018fb30u), sp0 - 0x400u, 7, sp0 - 0x400u, ecx, in_edi, in_esi, in_ebx, rd32(sp0 - 0x45cu), rd32(sp0 - 0x458u));
    t6 = g->ecx;
    wr32(sp0 - 0x474u, sp0 - 0x400u);
    t7 = rd32(sp0 - 0x45cu);
    wr32(sp0 - 0x478u, t7);
    g->edx = sp0 - 0x400u;
    g->esp = sp0 - 0x470u;
    cow_cdecl(g, COW_IMG(0x100f8cc0u), 2, t7, sp0 - 0x400u);
    t8 = g->edx;
    g->ebx = in_ebx;
    g->edx = t8;
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
    wr8(sp0 - 0x458u, 2u);
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
    wr8(sp0 - 0x45cu, 6u);
    wr8(sp0 - 0x458u, 2u);
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
    wr8(sp0 - 0x45cu, 6u);
    wr8(sp0 - 0x458u, 2u);
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
    wr8(sp0 - 0x45cu, 1u);
    wr8(sp0 - 0x458u, 2u);
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
    wr8(sp0 - 0x45cu, 1u);
    wr8(sp0 - 0x458u, 2u);
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
    wr8(sp0 - 0x45cu, 2u);
    wr8(sp0 - 0x458u, 2u);
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
    wr8(sp0 - 0x45cu, 2u);
    wr8(sp0 - 0x458u, 2u);
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
    wr8(sp0 - 0x45cu, 3u);
    wr8(sp0 - 0x458u, 2u);
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
    wr8(sp0 - 0x45cu, 3u);
    wr8(sp0 - 0x458u, 2u);
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
    wr16(sp0 - 0x44cu, 0x69u);
    g->ebx = 2u;
    g->edx = edx;
    g->esp = sp0 - 0x46cu;
    cow_stdcall(g, COW_IMG(0x100a1ab0u), 0);
    t5 = g->edx;
    g->ebx = in_ebx;
    g->edx = t5;
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
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x468u;
    t2 = cow_thiscall(g, COW_IMG(0x101ad830u), ecx, 0);
    t3 = g->edx;
    if (t2 - 3u > 9u) goto L_10079463;
    eax = t2 - 3u;
    edx = t3;
    t4 = rd32(COW_IMG(0x100797e4u) + eax * 4u);
    switch (t4 - RD)
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
    wr8(sp0 - 0x45cu, 6u);
    goto L_10079468;
L_10079773: ;
    wr8(sp0 - 0x45cu, 1u);
    goto L_10079468;
L_1007977d: ;
    wr8(sp0 - 0x45cu, 2u);
    goto L_10079468;
L_10079786: ;
    wr8(sp0 - 0x45cu, 3u);
    goto L_10079468;
L_10079790: ;
    wr32(sp0 - 0x46cu, 0u);
    t9 = rd32(sp0 - 0x45cu);
    wr32(sp0 - 0x470u, t9);
    g->edx = edx;
    g->esp = sp0 - 0x468u;
    cow_cdecl(g, COW_IMG(0x100f8cc0u), 2, t9, 0u);
    t10 = g->edx;
    g->ebx = in_ebx;
    g->edx = t10;
    return arg3;
L_100797b0: ;
    edi = sp0 - 0x454u;
    eax = 0u;
    ecx = 0x15u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x46cu, sp0 - 0x454u);
    eax = sp0 - 0x454u;
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
