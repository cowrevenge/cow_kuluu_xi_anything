/* f_0x10253480 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10253480(Guest* g)
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)arg1 <= 3)
    {
        t1 = rd32(COW_IMG(0x10389d14u) + arg1 * 0x14u);
        wr8(COW_IMG(0x10389d0du) + arg1 * 0x14u, 0u);
        if (t1 == 0u)
        {
            ecx = self;
            edx = in_edx;
        }
        else
        {
            eax = t1;
            g->esp = sp0 - 4u;
            cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, self, in_edx, 1, 1, eax);
            t2 = g->ecx;
            t3 = g->edx;
            wr32(COW_IMG(0x10389d14u) + arg1 * 0x14u, 0u);
            ecx = t2;
            edx = t3;
        }
        if (rd32(COW_IMG(0x10389d18u) + arg1 * 0x14u) != 0u)
        {
            eax = rd32(COW_IMG(0x10389d18u) + arg1 * 0x14u);
            g->esp = sp0 - 4u;
            cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
            wr32(COW_IMG(0x10389d18u) + arg1 * 0x14u, 0u);
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10253480(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10253480(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
