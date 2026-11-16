/* f_0x101a2440 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101a2440(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg1 != 0u) goto L_101a2451;
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x101a2a10u), arg1, arg2, in_edx);
L_101a2451: ;
    eax = arg1;
    edx = in_edx;
    esi = 0x14u;
L_101a245c: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x101a2980u), arg2, 2, esi, COW_IMG(0x103d3c84u));
    t2 = g->edx;
    if ((int32_t)(esi + 1u) < 40)
    {
        eax = t1;
        edx = t2;
        esi = esi + 1u;
        goto L_101a245c;
    }
    eax = t1;
    edx = t2;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a2440(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a2440(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
