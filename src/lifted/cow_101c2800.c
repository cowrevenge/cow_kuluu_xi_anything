/* f_0x101c2800 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101c2800(Guest* g)
{
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    esi = arg1;
    edi = self + 0x4f4u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr8(self + 0x5f3u, 0u);
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x10313560u), self, g->ecx, self + 0x4f4u, 1, 3, self + 0x4f4u, COW_IMG(0x1037cba8u), 0x100u);
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c2800(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c2800(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
