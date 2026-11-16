/* f_0x10225b30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10225b30(Guest* g)
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
    unsigned zf;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;

    if (rd32(self + 0x64u) == 0u)
    {
        eax = in_eax;
        goto L_10225b79;
    }
    edx = rd32(self + 0x64u);
    if (rd32(self + 0x68u) == 0u)
    {
        eax = rd32(self + 0x68u);
        goto L_10225b79;
    }
    if ((int32_t)rd32(self + 0x30u) < 0)
    {
        eax = rd32(self + 0x30u);
        goto L_10225b79;
    }
    eax = rd32(self + 0x30u);
    if ((int32_t)eax >= (int32_t)rd32(self + 0x44u)) goto L_10225b79;
    if (eax * 8u + rd32(self + 0x20u) == 0u)
    {
        eax = eax * 8u + rd32(self + 0x20u);
        goto L_10225b79;
    }
    eax = eax * 8u + rd32(self + 0x20u);
    ecx = rd32(self + 0x20u);
    t1 = rd32(eax);
    edi = edx + rd32(eax) * 0x20u + 0xcu;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx != 1u) goto L_10225b79;
    edx = edx + t1 * 0x20u + 4u;
    if (rd16(edx + 6u) == 0xffffu) goto L_10225b79;
    return (eax & 0xffffff00u) | 1u;
L_10225b79: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10225b30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10225b30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
