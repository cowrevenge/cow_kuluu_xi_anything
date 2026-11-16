/* f_0x1018da20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1018da20(Guest* g)
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
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(sp0 + 4u) != 0u)
    {
        edx = in_edx;
        ebp = rd32(sp0 + 8u);
        goto L_1018dae7;
    }
    eax = rd32(sp0 + 4u);
    ebp = rd32(sp0 + 8u);
    wr32(sp0 + 4u, 0u);
    wr32(sp0 + 8u, 0xffffffe9u - ebp);
    ecx = self;
    edx = in_edx;
    ebx = ebp + 0x17u;
    edi = 0xffffffe9u - ebp;
L_1018da4a: ;
    if ((int32_t)rd32(sp0 + 4u) >= 8) goto L_1018dab6;
    esi = 0u;
L_1018da53: ;
    if (rd8(ebx + esi - 0xfu) == 0u) goto L_1018da82;
    eax = (eax & 0xffffff00u) | rd8(ebx + esi - 0xfu);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_cdecl(g, COW_IMG(0x1031471eu), 1, (uint32_t)(int8_t)eax);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        edx = t3;
        goto L_1018dae7;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    if ((int32_t)(esi + 1u) < 15)
    {
        esi = esi + 1u;
        goto L_1018da53;
    }
    t4 = rd32(sp0 + 4u);
    wr8(ebx, 0u);
    wr32(sp0 + 4u, t4 + 1u);
    ecx = t4 + 1u;
    ebx = ebx + 0x10u;
    goto L_1018da4a;
L_1018da82: ;
    edi = ebp + ebx + edi + esi + 8u;
    eax = 0u;
    ecx = (0xfu - esi) >> 2u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = 0xfu - esi & 3u;
    while (ecx) { wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    t5 = rd32(sp0 + 4u);
    t6 = rd32(sp0 + 8u);
    wr8(ebx, 0u);
    wr32(sp0 + 4u, t5 + 1u);
    ecx = t5 + 1u;
    edx = 0xfu - esi;
    ebx = ebx + 0x10u;
    edi = t6;
    goto L_1018da4a;
L_1018dab6: ;
    edx = 0u;
    esi = ebp + 8u;
L_1018dabb: ;
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
    if (~ecx == 1u) goto L_1018dad2;
    ecx = ~ecx - 1u;
    if ((int32_t)(edx + 1u) < 8)
    {
        edx = edx + 1u;
        esi = esi + 0x10u;
        goto L_1018dabb;
    }
    edx = edx + 1u;
L_1018dad2: ;
    wr32(ebp + 4u, edx);
    wr8(ebp + 0x10cu, 1u);
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x1018da10u), eax, ebp, edx);
L_1018dae7: ;
    edi = ebp + 8u;
    eax = 0u;
    ecx = 0x20u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(ebp + 4u, eax);
    wr8(ebp + 0x10cu, 1u);
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x1018da10u), eax, ebp, edx);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018da20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1018da20(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
