/* f_0x101ea2f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101ea2f0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x101ea070u), self, 0);
    t1 = g->ecx;
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 4u);
    t4 = g->edx;
    if (t3 == 0u)
    {
        eax = t3;
        edx = t4;
    }
    else
    {
        eax = t3;
        t5 = rd32(rd32(eax) + 0x24cu);
        wr32(self + 0x34u, t5);
        t6 = rd32(rd32(eax) + 0x258u);
        wr32(self + 0x38u, t6);
        t7 = rd32(rd32(eax) + 0x254u);
        t8 = rd32(eax);
        wr32(self + 0x3cu, t7);
        eax = t8;
        edx = t6;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ea2f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ea2f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
