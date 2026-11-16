/* f_0x100141c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100141c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(rd32(COW_IMG(0x103d3cb8u)) + 8u) == 0u)
    {
        ecx = rd32(COW_IMG(0x1045666cu));
    }
    else
    {
        eax = rd32(COW_IMG(0x103d3cb8u));
        ecx = rd32(COW_IMG(0x1045666cu));
        wr16(COW_IMG(0x104568f8u), (uint16_t)(rd16(eax + 8u) + 1u));
    }
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x1000ae40u), ecx, 3, 0u, 0u, 1u);
    t2 = g->edx;
    t3 = cow_thiscall(g, COW_IMG(0x10010d00u), self, 0);
    return (t3 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100141c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100141c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
