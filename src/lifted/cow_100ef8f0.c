/* f_0x100ef8f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100ef8f0(Guest* g)
{
    uint32_t ecx;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    cow_frame(g, sp0, 16u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 4u, 0u);
    if (rd32(rd32(COW_IMG(0x104df770u)) + 0x13690u) != 0u)
    {
        ecx = rd32(rd32(COW_IMG(0x104df770u)) + 0x13690u);
        wr32(sp0 - 8u, sp0 - 4u);
        wr32(sp0 - 0xcu, ecx);
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x101164b0u), 2, ecx, sp0 - 4u);
    }
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ef8f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100ef8f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
