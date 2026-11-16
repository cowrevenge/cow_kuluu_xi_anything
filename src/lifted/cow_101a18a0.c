/* f_0x101a18a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101a18a0(Guest* g)
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
    unsigned zf;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_101a18fc;
    }
    if ((int32_t)arg1 < 0)
    {
        eax = in_eax;
        edx = arg1;
        goto L_101a18fc;
    }
    if ((int32_t)arg1 >= 6)
    {
        eax = in_eax;
        edx = arg1;
        goto L_101a18fc;
    }
    edi = arg2;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx - 1u > 0x3cu)
    {
        edx = arg1;
        goto L_101a18fc;
    }
    t1 = arg1 * 0x3du + self + 4u;
    edi = t1;
    eax = 0u;
    ecx = 0xfu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u);
    eax = arg2;
    edx = t1 - arg2;
L_101a18e7: ;
    t2 = rd8(eax);
    wr8(eax + edx, (uint8_t)t2);
    if ((uint8_t)t2 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t2;
        goto L_101a18e7;
    }
    g->edx = edx;
    return 1u;
L_101a18fc: ;
    g->edx = edx;
    return 0xffffffffu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a18a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a18a0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
