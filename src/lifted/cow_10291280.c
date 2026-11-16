/* f_0x10291280 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10291280(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(arg1 + 0x34u) == 0u)
    {
        eax = rd32(arg1 + 0x34u);
        edx = in_edx;
    }
    else
    {
        eax = rd32(arg1 + 0x34u);
        if (arg1 + 0x14u == 0u)
        {
            edx = in_edx;
        }
        else
        {
            t1 = rd32(eax + 0x14u);
            t2 = rd32(eax + 0x54u);
            g->eax = t1;
            g->edx = t2;
            g->esp = sp0;
            t3 = cow_cdecl(g, COW_IMG(0x1028da40u), 3, arg1 + 0x14u, t2, t1);
            t4 = g->edx;
            eax = t3;
            edx = t4;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10291280(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10291280(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
