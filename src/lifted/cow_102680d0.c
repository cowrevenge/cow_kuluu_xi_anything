/* f_0x102680d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_102680d0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    unsigned of;
    unsigned pf;
    unsigned sf;
    unsigned zf;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg2 != 0u) goto L_102680e4;
    return 0x80004003u;
L_102680e4: ;
    if (arg3 == 0u) goto L_102680fc;
    esi = arg3;
    edi = COW_IMG(0x1033f148u);
    ecx = 4u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint32_t a = rd32(esi), b = rd32(edi), r = (uint32_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 31 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 31) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; if (!zf) break; }
    if (!zf) goto L_10268114;
L_102680fc: ;
    if (arg6 == 0u) goto L_1026811e;
    esi = arg6;
    edi = COW_IMG(0x1033f148u);
    ecx = 4u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint32_t a = rd32(esi), b = rd32(edi), r = (uint32_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 31 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 31) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; if (!zf) break; }
    if (zf) goto L_1026811e;
L_10268114: ;
    g->edx = 0u;
    return 0x80070057u;
L_1026811e: ;
    wr32(arg2, arg4);
    wr32(arg2 + 4u, arg5);
    g->edx = arg5;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102680d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102680d0(g);
    g->esp = sp0;
    rt_return(g, r, 24u);
}
/* COW_ADAPTER END */
