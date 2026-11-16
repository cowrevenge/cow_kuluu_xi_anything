/* f_0x10055690 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10055690(Guest* g)
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
    uint32_t t5;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 8u) == 0u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 8u);
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1, eax);
        t1 = g->ecx;
        t2 = g->edx;
        ecx = t1;
        edx = t2;
    }
    edi = arg1;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    g->esp = sp0 - 4u;
    t3 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ~ecx, edx, 1, 3, ~ecx, in_edi, in_esi);
    t4 = g->edx;
    wr32(self + 8u, t3);
    if (t3 == 0u)
    {
        eax = t3;
        edx = t4;
    }
    else
    {
        eax = t3;
        ecx = arg1;
        edx = eax - arg1;
L_100556ca: ;
        t5 = rd8(ecx);
        wr8(ecx + edx, (uint8_t)t5);
        if ((uint8_t)t5 != 0u)
        {
            eax = (eax & 0xffffff00u) | t5;
            ecx = ecx + 1u;
            goto L_100556ca;
        }
        eax = (eax & 0xffffff00u) | t5;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10055690(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10055690(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
