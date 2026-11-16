/* f_0x10136900 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10136900(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10126320u), self, 0);
    t1 = g->edx;
    edi = self + 4u;
    eax = 0u;
    ecx = 0x80u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr16(edi, (uint16_t)(uint16_t)eax); edi += (g->df ? (uint32_t)-2 : 2u);
    wr8(self + 0x206u, 0u);
    wr8(self + 0x207u, 0u);
    wr16(self + 0x208u, 0u);
    g->edx = t1;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10136900(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10136900(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
