/* f_0x1022ad80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1022ad80(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 != 0x800u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        if (rd32(self + 8u) == 0u)
        {
            eax = rd32(self + 8u);
            edx = in_edx;
        }
        else
        {
            eax = rd32(self + 8u);
            if (rd8(self + 0x89u) != 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(self + 0x89u);
                edx = in_edx;
            }
            else
            {
                eax = (eax & 0xffffff00u) | rd8(self + 0x89u);
                g->eax = eax;
                g->edx = in_edx;
                g->esp = sp0;
                t1 = cow_thiscall(g, COW_IMG(0x1022a6d0u), self, 0);
                t2 = g->edx;
                eax = t1;
                edx = t2;
            }
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022ad80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1022ad80(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
