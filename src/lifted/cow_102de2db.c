/* f_0x102de2db - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_102de2db(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->esp = sp0 - 4u;
    t1 = cow_fastcall(g, COW_IMG(0x102e7446u), self, in_edx, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        wr32(COW_IMG(0x103ccb48u), COW_IMG(0x102ddf3au));
        wr32(COW_IMG(0x103ccb4cu), COW_IMG(0x102de0b1u));
    }
    else
    {
        ecx = t2;
        edx = t3;
        wr32(COW_IMG(0x103ccb48u), COW_IMG(0x102de199u));
        wr32(COW_IMG(0x103ccb4cu), COW_IMG(0x102de199u));
        eax = COW_IMG(0x102de199u);
    }
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, rd32(COW_IMG(0x103ccb48u)), eax, ecx, edx);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102de2db(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102de2db(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
