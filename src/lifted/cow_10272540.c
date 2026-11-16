/* f_0x10272540 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10272540(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    t1 = rd32(sp0 + 4u);
    t2 = COW_IMG(0x1099bf20u) + t1 * 0x7cu;
    t3 = rd32(COW_IMG(0x1099c510u));
    wr32(t2 + 0x78u, t3);
    g->eax = t3;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t4 = cow_cdecl(g, COW_IMG(0x1026e210u), 1, t2);
    t5 = g->edx;
    g->ecx = t2 + 0x1cu;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x102806d0u), 4, t2 + 0x1cu, 0x3e800000u, 0x3e800000u, 0x3e800000u);
    t6 = g->ecx;
    t7 = rd32(t2 + 0x78u);
    wr32(COW_IMG(0x1099bd2cu) + t1 * 0x7cu, t7);
    t8 = COW_IMG(0x1099bcb4u) + t1 * 0x7cu;
    wr32(sp0 + 4u, t8);
    g->esp = sp0;
    g->edx = t7;
    cow_tailcall(g, COW_IMG(0x1026e210u), t8, t6, t7);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10272540(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10272540(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
