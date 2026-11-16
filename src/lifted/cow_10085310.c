/* f_0x10085310 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10085310(Guest* g)
{
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x1047d578u)) == 0u) goto L_1008532c;
    edx = in_edx;
    esi = rd32(COW_IMG(0x1047d578u));
L_1008531b: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(rd32(esi) + 0x190u), esi, 0);
    t1 = g->edx;
    if (rd32(esi + 0x54u) != 0u)
    {
        edx = t1;
        esi = rd32(esi + 0x54u);
        goto L_1008531b;
    }
L_1008532c: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10085310(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10085310(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
