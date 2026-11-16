/* f_0x101ac520 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101ac520(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    t1 = (self & 0xffffff00u) | rd8(self + rd32(self + 0xa58u) + 0x6c4u);
    t2 = rd32(self + 0xa58u);
    g->esp = sp0 - 4u;
    t3 = cow_cdecl(g, COW_IMG(0x1018fa80u), 2, t1, 0u);
    t4 = t3 + rd32(self + 0xa58u);
    t5 = rd32(self + 0x888u);
    t6 = rd32(self + 0xa58u);
    wr32(self + 0xa58u, t4);
    if ((int32_t)(t3 + t6) > (int32_t)t5)
    {
        eax = t5;
        wr32(self + 0xa58u, eax);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ac520(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101ac520(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
