/* f_0x10137580 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10137580(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10126320u), self, 0);
    wr32(self + 0x14cu, arg1);
    edi = self + 0x104u;
    eax = 0u;
    ecx = 0xfu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    edi = self + 4u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t1 = rd32(self + 0x14cu);
    wr32(self + 0x144u, 0x7f7f7f7fu);
    t2 = rd16(t1 + 0x54u);
    wr16(self + 0x14au, (uint16_t)eax);
    wr32(self + 0x140u, (uint32_t)(int16_t)t2);
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10137580(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10137580(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
