/* f_0x1002a380 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1002a380(Guest* g)
{
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    g->eax = rd32(rd32(sp0 + 4u));
    g->edx = in_edx;
    t1 = rd32(rd32(sp0 + 4u));
    t2 = cow_thiscall(g, rd32(t1 + 0x3d8u), rd32(sp0 + 4u), 0);
    t3 = g->edx;
    if ((int8_t)rd8(t2 + 6u) < 0) goto L_1002a3ab;
    ecx = (uint32_t)(int8_t)rd8(t2 + 6u);
    edx = t3;
    t4 = rd32(COW_IMG(0x1045ec20u));
    wr32(sp0 + 4u, COW_IMG(0x10351504u));
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10027ae0u), t4, ecx * 0x40u + t4, edx);
    return;
L_1002a3ab: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1002a380(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1002a380(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
