/* f_0x100ef9f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_100ef9f0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    cow_frame(g, sp0, 268u);

    wr32(sp0 - 0x104u, sp0 - 0x100u);
    t1 = rd32(rd32(COW_IMG(0x104df770u)) + 0x13690u);
    wr32(sp0 - 0x108u, t1);
    g->eax = sp0 - 0x100u;
    g->edx = t1;
    g->esp = sp0 - 0x100u;
    t2 = cow_cdecl(g, COW_IMG(0x101164b0u), 2, t1, sp0 - 0x100u);
    t3 = g->edx;
    g->edx = t3;
    return t2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ef9f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100ef9f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
