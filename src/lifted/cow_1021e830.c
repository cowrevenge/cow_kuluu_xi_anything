/* f_0x1021e830 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1021e830(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if ((int32_t)rd32(self + 0x24u) <= 0) goto L_1021e860;
    edi = 0u;
L_1021e83d: ;
    if (rd32(edi * 4u + rd32(self + 4u)) != 0u)
    {
        eax = rd32(self + 4u);
        ecx = rd32(edi * 4u + rd32(self + 4u));
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(rd32(ecx) + 0x18u), ecx, 1, 1u);
        wr32(edi * 4u + rd32(self + 4u), 0u);
    }
    if ((int32_t)(edi + 1u) < (int32_t)rd32(self + 0x24u))
    {
        edi = edi + 1u;
        goto L_1021e83d;
    }
L_1021e860: ;
    wr8(self + 0x34u, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1021e830(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1021e830(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
