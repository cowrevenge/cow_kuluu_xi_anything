/* f_0x10228b10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10228b10(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    wr8(self, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x10228b40u), self, 0);
    t2 = g->edx;
    if (rd32(COW_IMG(0x10662db0u)) != 0u)
    {
        eax = t1;
        ecx = rd32(COW_IMG(0x10662db0u));
        edx = t2;
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x101b9f20u), ecx, 8, 3u, 0u, COW_IMG(0x103862a0u), self, 1u, 0u, 0u, 1u);
    }
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10228b10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10228b10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
