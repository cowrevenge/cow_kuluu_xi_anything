/* f_0x102acb40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102acb40(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    if (rd32(rd32(sp0 + 4u)) == 1u)
    {
        ecx = rd32(sp0 + 4u);
        goto L_102acb77;
    }
    eax = rd32(rd32(sp0 + 4u)) - 1u;
    ecx = rd32(sp0 + 4u);
    if (eax == 1u) goto L_102acb70;
    eax = eax - 1u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103be980u));
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 + 4u, COW_IMG(0x103bebf0u));
    g->esp = sp0;
    g->edx = t3;
    cow_tailcall(g, COW_IMG(0x102858b0u), t1, t2, t3);
    return;
L_102acb70: ;
    wr32(ecx, 1u);
    return;
L_102acb77: ;
    wr32(ecx, 2u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102acb40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102acb40(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
