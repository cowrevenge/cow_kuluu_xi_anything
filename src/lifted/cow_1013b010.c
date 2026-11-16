/* f_0x1013b010 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_1013b010(Guest* g)
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
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 552u);

    wr32(sp0 - 0x204u, in_esi);
    wr32(sp0 - 0x208u, in_edi);
    wr32(sp0 - 0x20cu, arg3);
    g->edx = in_edx;
    g->esp = sp0 - 0x208u;
    t1 = cow_thiscall(g, COW_IMG(0x101c8450u), rd32(self + 0x18u), 1, arg3);
    t2 = g->edx;
    if (t1 == 0u) goto L_1013b0aa;
    eax = t1;
    edx = t2;
    wr32(sp0 - 0x20cu, arg4);
    wr32(sp0 - 0x210u, arg4);
    wr32(sp0 - 0x214u, arg4);
    wr32(sp0 - 0x218u, arg4);
    wr32(sp0 - 0x21cu, arg4);
    wr32(sp0 - 0x220u, eax);
    wr32(sp0 - 0x224u, sp0 - 0x200u);
    g->ecx = sp0 - 0x200u;
    g->esp = sp0 - 0x210u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x200u, eax, arg4, arg4, arg4);
    t3 = g->ecx;
    edi = sp0 - 0x200u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = sp0 - 0x208u < sp0 - 0x224u;
    pf = PARITY((uint8_t)(sp0 - 0x208u));
    af = (sp0 - 0x224u ^ 0x1cu ^ sp0 - 0x208u) >> 4u & 1u;
    zf = sp0 == 0x208u;
    sf = (int32_t)(sp0 - 0x208u) < 0;
    of = ((sp0 - 0x224u ^ sp0 - 0x208u) & (sp0 - 0x208u ^ 0x1cu)) >> 0x1fu;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t4 = ~ecx - 1u;
    if ((int32_t)t4 >= (int32_t)arg2)
    {
        edx = t4;
        goto L_1013b09d;
    }
    ecx = t4;
    edx = t4;
    wr32(sp0 - 0x20cu, in_ebx);
    edi = sp0 - 0x200u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t5 = edi - ~ecx;
    edi = arg1;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0xffu);
    af = 0u;
    zf = 0u;
    sf = 1u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    esi = t5;
    edi = edi - 1u;
    ecx = ~ecx >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = ~ecx & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    g->esi = rd32(sp0 - 0x204u);
    g->edi = rd32(sp0 - 0x208u);
    return edx;
L_1013b09d: ;
    g->esi = rd32(sp0 - 0x204u);
    g->edi = rd32(sp0 - 0x208u);
    return edx;
L_1013b0aa: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013b010(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1013b010(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
