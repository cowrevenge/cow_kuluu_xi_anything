/* f_0x1014a330 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1014a330(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x1057842cu)) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        ecx = rd32(COW_IMG(0x1057842cu));
        if (rd32(ecx + 0x58u) != 0u)
        {
            eax = rd32(ecx + 0x58u);
            edx = in_edx;
        }
        else
        {
            if (rd8(ecx + 0x54u) != (uint8_t)arg1)
            {
                eax = arg1;
                edx = (in_edx & 0xffffff00u) | rd8(ecx + 0x54u);
            }
            else
            {
                edx = (in_edx & 0xffffff00u) | rd8(ecx + 0x54u);
                g->eax = arg1;
                g->edx = edx;
                g->esp = sp0;
                t1 = cow_thiscall(g, COW_IMG(0x1014b0c0u), ecx, 1, arg1);
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
void cow_adapter_1014a330(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1014a330(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
