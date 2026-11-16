/* f_0x103134d8 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_103134d8(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    t1 = cow_cdecl(g, COW_IMG(0x10312fd6u), 1, 0x80u);
    t2 = g->edx;
    wr32(COW_IMG(0x109f943cu), t1);
    if (t1 != 0u)
    {
        eax = t1;
        edx = t2;
    }
    else
    {
        edx = t2;
        g->edx = edx;
        g->esp = sp0;
        cow_cdecl(g, COW_IMG(0x1031680cu), 1, 0x18u);
        t3 = g->edx;
        eax = rd32(COW_IMG(0x109f943cu));
        edx = t3;
    }
    wr32(eax, 0u);
    t4 = rd32(COW_IMG(0x109f943cu));
    wr32(COW_IMG(0x109f9438u), t4);
    g->edx = edx;
    return t4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103134d8(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_103134d8(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
