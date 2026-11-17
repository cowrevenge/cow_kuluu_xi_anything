/* f_0x10257690 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10257690(Guest* g)
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
    uint32_t loc_8;
    uint32_t loc_c;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->edx = in_edx;
    t1 = cow_cdecl(g, COW_IMG(0x10257600u), 5, arg1, in_ebx, rd32(sp0 - 0xcu), rd32(sp0 - 8u), rd32(sp0 - 4u));
    t2 = g->edx;
    t3 = rd32(sp0 + 8u);
    wr32(t3, t1);
    if ((int32_t)t1 > 0)
    {
        eax = t1;
        ecx = t3;
        edx = t2;
        goto L_102576b8;
    }
    ecx = t3;
    wr32(ecx, 0u);
    return 0u;
L_102576b8: ;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t4 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, eax, in_edi, in_esi);
    esi = arg1;
    edi = t4;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr16(t4 + 8u, 0x10u);
    g->edx = t4;
    g->esp = sp0 - 0x20u;
    t5 = cow_cdecl(g, COW_IMG(0x102575f0u), 1, arg1);
    t6 = g->edx;
    t7 = rd32(t6 + 0x28u);
    wr16(t6 + 0x3eu, (uint16_t)t5);
    if (t7 == 0u)
    {
        edx = t6;
        goto L_102577d3;
    }
    ecx = t7;
    edx = t6;
    ebx = t6 + (uint16_t)t5 * t7 * 8u + 0x40u;
    ebp = t6 + 0x40u;
    edi = 0u;
    loc_c = t4;
    loc_4 = t6 + 0x40u;
    loc_8 = 0u;
L_10257709: ;
    t8 = rd16(edx + 0x3eu);
    wr32(sp0 + 8u, 0u);
    if ((uint16_t)t8 == 0u) goto L_102577c3;
    esi = 0u;
L_10257719: ;
    g->eax = arg1;
    g->ecx = ecx;
    g->esp = sp0 - 0x1cu;
    t9 = cow_cdecl(g, COW_IMG(0x10257570u), 3, arg1, edi, esi);
    t10 = g->ecx;
    g->ecx = t10;
    g->edx = t9;
    g->esp = sp0 - 0x28u;
    t11 = cow_cdecl(g, COW_IMG(0x102575d0u), 1, t9);
    t12 = g->ecx;
    t13 = g->edx;
    if ((uint8_t)t11 == 0u)
    {
        ecx = t12;
        wr32(ebp, 0u);
        wr32(ebp + 4u, 0u);
    }
    else
    {
        ecx = t12;
        edx = t13;
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
        t14 = ~ecx - 1u;
        esi = edx;
        edi = ebx;
        ecx = t14 >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = t14 & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        edi = edx;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0xffu);
        af = 0u;
        zf = 0u;
        sf = 1u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        wr8(ebx + ~ecx - 1u, (uint8_t)eax);
        wr32(ebp, ebx - loc_4);
        edi = edx;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0xffu);
        af = 0u;
        zf = 0u;
        sf = 1u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        t15 = ~ecx - 1u;
        wr32(ebp + 4u, t15);
        edi = edx;
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
        g->esp = sp0 - 0x1cu;
        t16 = cow_cdecl(g, COW_IMG(0x102575b0u), 1, ~ecx);
        t17 = g->ecx;
        ecx = t17;
        ebx = ebx + t16;
        esi = rd32(sp0 + 8u);
        edi = loc_8;
    }
    t18 = rd16(loc_c + 0x3eu);
    wr32(sp0 + 8u, esi + 1u);
    if ((int32_t)(esi + 1u) < (int32_t)t18)
    {
        edx = t18;
        ebp = ebp + 8u;
        esi = esi + 1u;
        goto L_10257719;
    }
    eax = loc_c;
    ebp = ebp + 8u;
    edx = eax;
L_102577c3: ;
    if (edi + 1u < rd32(edx + 0x28u))
    {
        loc_8 = edi + 1u;
        edi = edi + 1u;
        goto L_10257709;
    }
L_102577d3: ;
    return edx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10257690(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10257690(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
