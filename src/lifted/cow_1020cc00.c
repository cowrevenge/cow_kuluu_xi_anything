/* f_0x1020cc00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1020cc00(Guest* g)
{
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint8_t)arg2 == 0u) goto L_1020cc22;
    if (rd32(COW_IMG(0x10664494u)) == 0u)
    {
        ecx = rd32(COW_IMG(0x10664494u));
        edx = in_edx;
    }
    else
    {
        ecx = rd32(COW_IMG(0x10664494u));
        g->edx = in_edx;
        g->esp = sp0;
        cow_stdcall(g, COW_IMG(0x1020c3e0u), 0);
        t1 = g->edx;
        ecx = rd32(COW_IMG(0x10664494u));
        edx = t1;
    }
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, rd32(rd32(ecx) + 0x74u), rd32(ecx), ecx, edx);
L_1020cc22: ;
    return (in_eax & 0xffffff00u) | (uint8_t)arg2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1020cc00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1020cc00(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
