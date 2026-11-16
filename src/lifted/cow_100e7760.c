/* f_0x100e7760 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100e7760(Guest* g)
{
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    unsigned zf;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(arg1 + 8u);
    if ((t1 & 0x10000u) == 0u)
    {
        eax = t1 & 0x10000u;
        ecx = rd32(arg1 + 0xcu);
        edx = t1;
        goto L_100e778e;
    }
    eax = t1 & 0x10000u;
    ecx = rd32(arg1 + 0xcu);
    edx = t1;
    zf = (t1 & 0x10000u) == 0u;
    sf = (int32_t)(t1 & 0x10000u) < 0;
    cf = 0u;
    pf = PARITY(0u);
    of = 0u;
    { /* shrd edx, ecx, 0x11 */ { unsigned c = (unsigned)(0x11u) & 31u; if (c) { uint32_t a = edx, b = ecx, r; r = (a >> c) | (b << (32 - c)); cf = (a >> (c - 1)) & 1u; of = ((r ^ a) >> 31) & 1u; zf = (uint32_t)r == 0; sf = ((r) >> 31) & 1u; pf = PARITY(r); edx = (uint32_t)(r); } } }
    g->edx = (edx & 7u) << 4u;
    return (eax & 0xffff0000u) | rd16(arg1 + (edx & 7u) * 0x10u + 0x1au);
L_100e778e: ;
    g->edx = edx;
    return ecx >> 1u & 0x3ffu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e7760(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e7760(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
