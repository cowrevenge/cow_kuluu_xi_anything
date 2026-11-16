/* f_0x101d6850 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101d6850(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 0x5cu) == 0u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x5cu);
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1, eax);
        t1 = g->ecx;
        t2 = g->edx;
        wr32(self + 0x5cu, 0u);
        ecx = t1;
        edx = t2;
    }
    if (rd32(self + 0x60u) == 0u)
    {
        eax = rd32(self + 0x60u);
    }
    else
    {
        eax = rd32(self + 0x60u);
        g->eax = eax;
        g->esp = sp0 - 4u;
        t3 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, eax);
        wr32(self + 0x60u, 0u);
        eax = t3;
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d6850(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101d6850(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
