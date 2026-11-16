/* f_0x1006b8b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1006b8b0(Guest* g)
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
    uint32_t t6;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    eax = in_eax;
    ecx = arg1;
    edx = rd32(self + 4u);
L_1006b8ba: ;
    t1 = rd8(ecx);
    wr8(edx, (uint8_t)t1);
    if ((uint8_t)t1 != 0u)
    {
        eax = (eax & 0xffffff00u) | t1;
        ecx = ecx + 1u;
        edx = edx + 1u;
        goto L_1006b8ba;
    }
    ecx = ecx + 1u;
    t2 = rd32(self + 4u);
    edi = t2;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if ((int32_t)(~ecx - 1u) > 0)
    {
        ecx = ~ecx - 1u;
        edx = t2;
        if (rd8(ecx + edx - 1u) != 0xau)
        {
            wr8(ecx + edx, 0xau);
            t3 = rd32(self + 4u);
            wr8(ecx + t3 + 1u, 0u);
            eax = t3;
        }
    }
    t4 = rd32(self + 4u);
    g->edx = t4;
    g->esp = sp0;
    t5 = cow_call_regs(g, COW_IMG(0x1031400au), eax, g->ecx, g->edx, 1, 3, t4, rd32(self), in_esi);
    t6 = g->edx;
    g->edx = t6;
    return t5;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006b8b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1006b8b0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
