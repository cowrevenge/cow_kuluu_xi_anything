/* f_0x10078350 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_10078350(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    unsigned zf;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg2 != 0u) goto L_1007835d;
    return 0u;
L_1007835d: ;
    if (arg3 != 0u) goto L_10078369;
    return 0u;
L_10078369: ;
    if (arg4 != 0u) goto L_10078375;
    return 0u;
L_10078375: ;
    if (rd32(arg1 * 4u + arg3) == 0u)
    {
        eax = 0u;
        goto L_100783b7;
    }
    edi = rd32(arg1 * 4u + arg3);
    if (rd32(arg1 * 4u + arg3 + 4u) == 0u)
    {
        eax = 0u;
        goto L_100783b7;
    }
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t1 = ~ecx - 1u;
    if ((int8_t)rd8(t1 + rd32(arg4 + arg1 * 4u)) < 0)
    {
        eax = t1 + rd32(arg4 + arg1 * 4u);
        goto L_100783b7;
    }
    eax = t1 + rd32(arg4 + arg1 * 4u);
    ecx = (t1 & 0xffffff00u) | rd8(t1 + rd32(arg4 + arg1 * 4u));
    if ((uint8_t)ecx == 0x22u) goto L_100783b7;
    if ((uint8_t)ecx != 0x20u) goto L_100783b1;
    return eax + 1u;
L_100783b1: ;
    if ((uint8_t)ecx == 0u)
    {
        eax = 0u;
    }
L_100783b7: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10078350(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10078350(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
