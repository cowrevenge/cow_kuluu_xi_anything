/* f_0x1018dcd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1018dcd0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    wr32(self, COW_IMG(0x103368a4u));
    wr32(self + 4u, 0u);
    edi = self + 8u;
    eax = 0u;
    ecx = 0x140u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if (rd32(COW_IMG(0x10662db0u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10662db0u));
        g->esp = sp0 - 8u;
        cow_thiscall(g, COW_IMG(0x101b9f20u), ecx, 8, 2u, eax, COW_IMG(0x10377c80u), self + 8u, 0x500u, COW_IMG(0x1018dfd0u), self, 1u);
    }
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018dcd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1018dcd0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
