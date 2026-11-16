/* f_0x101c3e90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101c3e90(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(self + 8u) == 3u) goto L_101c3ec0;
    eax = rd32(self + 8u) - 3u;
    if (eax != 1u)
    {
        edx = in_edx;
        goto L_101c3f2c;
    }
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10312031u), 3, arg1, COW_IMG(0x1034f7e0u), arg3);
    t1 = g->edx;
    g->edx = t1;
    return 1u;
L_101c3ec0: ;
    edi = self + 0xd0u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t2 = ~ecx - 1u;
    edi = arg3;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0xffu);
    af = 0u;
    zf = 0u;
    sf = 1u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (t2 + ~ecx - 1u < arg2)
    {
        ecx = ~ecx - 1u;
        goto L_101c3ef7;
    }
    g->edx = self + 0xd0u;
    return 0xffffffffu;
L_101c3ef7: ;
    if (rd8(self + 0xd0u) != 0u) goto L_101c3f19;
    g->edx = arg1;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x10312031u), 2, arg1, COW_IMG(0x1034f7e0u));
    t3 = g->edx;
    g->edx = t3;
    return 1u;
L_101c3f19: ;
    g->edx = self + 0xd0u;
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, arg1, COW_IMG(0x1037cba0u), self + 0xd0u, arg3, in_esi);
    t4 = g->edx;
    edx = t4;
L_101c3f2c: ;
    g->edx = edx;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c3e90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c3e90(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
