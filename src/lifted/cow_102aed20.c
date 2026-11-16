/* f_0x102aed20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_102aed20(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x102aeca0u), 1, rd32(arg1));
        t1 = g->ecx;
        t2 = g->edx;
        if (rd32(arg1) == 0u)
        {
            eax = rd32(arg1);
            edx = t2;
        }
        else
        {
            eax = rd32(arg1);
            ecx = t1;
            edx = t2;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t3 = cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103bf234u), 0x73u);
            t4 = g->edx;
            eax = t3;
            edx = t4;
        }
        wr32(arg1, 0u);
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102aed20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102aed20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
