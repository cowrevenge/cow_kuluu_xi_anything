/* f_0x10222880 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10222880(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x105781f8u));
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, COW_IMG(0x10221740u), t1 + 0x20u, 0);
    t3 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        eax = t2;
        edx = t3;
    }
    else
    {
        edx = t3;
        if (rd32(self + 0x1cu) == 0u)
        {
            eax = rd32(self + 0x1cu);
        }
        else
        {
            eax = rd32(self + 0x1cu);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t4 = cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, eax, 1u);
            t5 = g->edx;
            eax = t4;
            edx = t5;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10222880(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10222880(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
