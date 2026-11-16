/* f_0x102aa620 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_102aa620(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;

    if (rd32(sp0 + 0x10u) == 0u)
    {
        eax = rd32(sp0 + 0x10u);
    }
    else
    {
        eax = rd32(sp0 + 0x10u);
        eax = rd32(eax + 0x54u);
    }
    t1 = eax + rd32(sp0 + 0xcu) * 0xcu;
    t2 = rd32(sp0 + 8u);
    wr32(sp0 + 0x10u, t1);
    t3 = eax + t2 * 0xcu;
    t4 = rd32(sp0 + 4u);
    wr32(sp0 + 0xcu, t3);
    t5 = eax + t4 * 0xcu;
    t6 = rd32(COW_IMG(0x109aaac0u));
    t7 = rd32(COW_IMG(0x109aaabcu));
    wr32(sp0 + 8u, t5);
    t8 = t6 * 0xcu + t7;
    wr32(sp0 + 4u, t8);
    g->esp = sp0;
    g->edx = t8;
    return cow_tailcall(g, COW_IMG(0x102b4250u), t6 * 3u, t7, t8);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102aa620(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102aa620(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
