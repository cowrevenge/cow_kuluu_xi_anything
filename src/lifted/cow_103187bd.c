/* f_0x103187bd - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_103187bd(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((rd32(arg1 + 0xcu) & 0x83u) == 0u)
    {
        eax = rd32(arg1 + 0xcu);
        edx = in_edx;
    }
    else
    {
        eax = rd32(arg1 + 0xcu);
        if ((eax & 8u) == 0u)
        {
            edx = in_edx;
        }
        else
        {
            t1 = rd32(arg1 + 8u);
            g->esp = sp0 - 4u;
            cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, self, in_edx, 1, 1, t1);
            t2 = g->edx;
            wr16(arg1 + 0xcu, rd16(arg1 + 0xcu) & 0xfbf7u);
            wr32(arg1, 0u);
            wr32(arg1 + 8u, 0u);
            wr32(arg1 + 4u, 0u);
            eax = 0u;
            edx = t2;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103187bd(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_103187bd(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
