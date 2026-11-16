/* f_0x101ba6e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101ba6e0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
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
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int32_t)arg1 <= 0)
    {
        eax = arg1;
        goto L_101ba72b;
    }
    eax = arg2;
    ebx = 0u;
    esi = arg2 + 4u;
L_101ba6f7: ;
    if (rd32(esi) == 0u) goto L_101ba72b;
    edx = rd32(esi);
    t1 = rd32(esi - 4u);
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
    t2 = ~ecx - 1u;
    g->esp = sp0 - 0x10u;
    t3 = cow_thiscall(g, COW_IMG(0x101bc7b0u), rd32(ebx * 4u + rd32(self + 0x18u) + 4u), 3, edx, t2, t1);
    if ((uint8_t)t3 == 0u)
    {
        eax = t3;
        goto L_101ba734;
    }
    if ((int32_t)(ebx + 1u) < (int32_t)arg1)
    {
        eax = arg1;
        ebx = ebx + 1u;
        esi = esi + 8u;
        goto L_101ba6f7;
    }
    eax = arg1;
L_101ba72b: ;
    return (eax & 0xffffff00u) | 1u;
L_101ba734: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ba6e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ba6e0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
