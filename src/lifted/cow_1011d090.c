/* f_0x1011d090 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1011d090(Guest* g)
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 92u);

    t1 = rd32(COW_IMG(0x1036c9a4u));
    wr16(sp0 - 0x40u, rd16(COW_IMG(0x1034f2b8u)));
    wr32(sp0 - 0x3eu, 0u);
    wr32(sp0 - 0x30u, t1);
    t2 = rd8(COW_IMG(0x1036c9a2u));
    wr32(sp0 - 0x3au, 0u);
    wr32(sp0 - 0x2cu, 0u);
    wr8(sp0 - 0x1eu, (uint8_t)t2);
    wr32(sp0 - 0x36u, 0u);
    wr32(sp0 - 0x28u, 0u);
    wr16(sp0 - 0x32u, 0u);
    t3 = rd16(COW_IMG(0x1036c9a0u));
    wr32(sp0 - 0xfu, 0u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x1du, 0u);
    wr32(sp0 - 0xbu, 0u);
    wr16(sp0 - 0x20u, (uint16_t)t3);
    wr32(sp0 - 0x44u, in_ebx);
    t4 = rd8(COW_IMG(0x103d3c84u));
    wr32(sp0 - 0x19u, 0u);
    wr32(sp0 - 7u, 0u);
    wr32(sp0 - 0x48u, in_esi);
    wr32(sp0 - 0x4cu, in_edi);
    wr32(sp0 - 0x15u, 0u);
    wr8(sp0 - 0x10u, (uint8_t)t4);
    wr16(sp0 - 3u, 0u);
    wr8(sp0 - 0x11u, 0u);
    wr8(sp0 - 1u, 0u);
    edi = sp0 - 0x40u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0xffu);
    af = 0u;
    zf = 0u;
    sf = 1u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx == 1u)
    {
        ecx = ~ecx - 1u;
        goto L_1011d15f;
    }
    ecx = ~ecx - 1u;
    edx = sp0 - 0x40u;
    esi = sp0 - 0x40u;
L_1011d12d: ;
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
    t5 = ~ecx - 1u;
    wr32(sp0 - 0x50u, t5);
    wr32(sp0 - 0x54u, edx);
    wr32(sp0 - 0x58u, arg1 - t5);
    g->eax = arg1 - t5;
    g->ecx = t5;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t6 = cow_cdecl(g, COW_IMG(0x10312980u), 5, arg1 - t5, edx, t5, in_edi, in_esi);
    t7 = g->ecx;
    t8 = g->edx;
    if (t6 == 0u)
    {
        eax = t6;
        edx = t8;
        goto L_1011d198;
    }
    ecx = t7;
    edi = esi + 0x10u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx != 1u)
    {
        ecx = ~ecx - 1u;
        edx = esi + 0x10u;
        esi = esi + 0x10u;
        goto L_1011d12d;
    }
    ecx = ~ecx - 1u;
L_1011d15f: ;
    edi = COW_IMG(0x10353e04u);
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t9 = arg1 - (~ecx - 1u);
    esi = t9;
    edi = COW_IMG(0x10353e04u);
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
        eax = t9;
        edx = 0u;
    }
    else
    {
        eax = t9;
        edx = -cf + 1u - cf;
    }
    if (edx != 0u) goto L_1011d1a1;
    if ((int8_t)rd8(eax + 1u) >= 48)
    {
        eax = (eax & 0xffffff00u) | rd8(eax + 1u);
        goto L_1011d1a1;
    }
    eax = (eax & 0xffffff00u) | rd8(eax + 1u);
    if ((int8_t)eax <= 57) goto L_1011d1a1;
L_1011d198: ;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_1011d1a1: ;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011d090(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1011d090(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
