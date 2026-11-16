/* f_0x1012a900 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u16 stack_args=1 */
uint32_t cow_fn_1012a900(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    ecx = self;
    edx = COW_IMG(0x1036f1b0u);
    esi = 0u;
L_1012a90e: ;
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
    t1 = ~ecx - 1u;
    g->ecx = t1;
    g->esp = sp0 - 4u;
    t2 = cow_cdecl(g, COW_IMG(0x10312980u), 5, arg1, edx, t1, in_edi, in_esi);
    t3 = g->ecx;
    if (t2 == 0u)
    {
        eax = t2;
        goto L_1012a948;
    }
    ecx = t3;
    if (COW_IMG(0x1036f1b0u) + (uint32_t)(int16_t)(esi + 1u) * 0x20u != COW_IMG(0x103d3c84u))
    {
        edx = COW_IMG(0x1036f1b0u) + (uint32_t)(int16_t)(esi + 1u) * 0x20u;
        esi = esi + 1u;
        goto L_1012a90e;
    }
    eax = (uint32_t)(int16_t)(esi + 1u) << 5u;
    return (eax & 0xffff0000u) | (uint16_t)(eax | 0xffffu);
L_1012a948: ;
    return (eax & 0xffff0000u) | (uint16_t)esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012a900(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1012a900(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
