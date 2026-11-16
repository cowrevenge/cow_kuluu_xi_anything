/* f_0x10068530 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10068530(Guest* g)
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
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 4u) != 4u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, self, in_edx, 1, 1, rd32(self));
        t1 = g->ecx;
        t2 = g->edx;
        wr32(self + 4u, 0u);
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
    wr32(self, t3);
    if (t3 != 0u)
    {
        eax = t3;
        ecx = arg1;
        edx = eax - arg1;
L_10068572: ;
        t4 = rd8(ecx);
        wr8(ecx + edx, (uint8_t)t4);
        if ((uint8_t)t4 != 0u)
        {
            eax = (eax & 0xffffff00u) | t4;
            ecx = ecx + 1u;
            goto L_10068572;
        }
    }
    wr32(self + 4u, 4u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10068530(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10068530(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
