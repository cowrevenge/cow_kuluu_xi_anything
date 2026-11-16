/* f_0x101093f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101093f0(Guest* g)
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
    unsigned zf;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 4u) == 0u)
    {
        eax = in_eax;
        goto L_10109425;
    }
    edx = rd32(self + 4u);
    if (rd32(edx + 4u) == 0u)
    {
        eax = rd32(edx + 4u);
        goto L_10109425;
    }
    eax = rd32(edx + 4u);
    edi = eax;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY((uint8_t)arg1);
    af = 0u;
    zf = (uint16_t)arg1 == 0u;
    sf = (int32_t)(uint16_t)arg1 < 0;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if ((uint16_t)arg1 >= ~ecx - 1u) goto L_10109425;
    return (eax & 0xffffff00u) | rd8((uint16_t)arg1 + rd32(edx + 4u));
L_10109425: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101093f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101093f0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
