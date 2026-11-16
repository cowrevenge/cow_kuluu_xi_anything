/* f_0x10221680 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10221680(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
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

    if (rd8(rd32(COW_IMG(0x105781fcu)) + 0x18u) == 0u)
    {
        ecx = (self & 0xffffff00u) | rd8(rd32(COW_IMG(0x105781fcu)) + 0x18u);
        goto L_102216e2;
    }
    ecx = (self & 0xffffff00u) | rd8(rd32(COW_IMG(0x105781fcu)) + 0x18u);
    edi = self + 0x2d5u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx == 1u)
    {
        ecx = ~ecx - 1u;
        goto L_102216e2;
    }
    edx = 3u;
L_102216ab: ;
    wr32(self + 0x70u, edx);
    t1 = edx * 0xcbu + self + 0x74u;
    wr32(self + 0x48u, t1);
    g->eax = t1;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t2 = cow_cdecl(g, COW_IMG(0x1011d010u), 1, t1);
    t3 = g->edx;
    t4 = rd32(self + 0x60u);
    wr32(self + 0x50u, t2);
    wr32(self + 0x4cu, 0u);
    if ((int32_t)t2 > (int32_t)t4)
    {
        edx = t3;
        goto L_10221726;
    }
    edx = t3;
    wr8(self + 0x3a0u, 0u);
    g->edx = edx;
    return;
L_102216e2: ;
    edx = 2u;
    ebp = self + 0x20au;
L_102216ed: ;
    edi = ebp;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx != 1u) goto L_10221714;
    ecx = ~ecx - 1u;
    if ((int32_t)(edx - 1u) >= 0)
    {
        edx = edx - 1u;
        ebp = ebp - 0xcbu;
        goto L_102216ed;
    }
    edx = edx - 1u;
    wr32(self + 0x48u, 0u);
    wr8(self + 0x3a0u, 0u);
    g->edx = edx;
    return;
L_10221714: ;
    if ((int32_t)edx >= 0) goto L_102216ab;
    wr32(self + 0x48u, 0u);
    wr8(self + 0x3a0u, 0u);
    g->edx = edx;
    return;
L_10221726: ;
    wr32(self + 0x54u, 0x3cu);
    wr8(self + 0x3a0u, 1u);
    g->edx = edx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10221680(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10221680(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
