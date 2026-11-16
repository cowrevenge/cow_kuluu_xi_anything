/* f_0x10118870 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10118870(Guest* g)
{
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 20u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 4u, 1u);
    if ((rd32(self + 0x34u) & 0x10000u) != 0u)
    {
        edx = in_edx;
    }
    else
    {
        if (rd32(self + 4u) == 0u)
        {
            edx = in_edx;
        }
        else
        {
            ecx = rd32(self + 4u);
            wr32(sp0 - 0xcu, self + 0x4eu);
            wr32(sp0 - 0x10u, sp0 - 4u);
            g->esp = sp0 - 8u;
            cow_fastcall(g, COW_IMG(0x1011b330u), ecx, sp0 - 4u, 2, sp0 - 4u, self + 0x4eu);
            t1 = g->edx;
            if (1u)
            {
                edx = t1;
            }
            else
            {
                edx = t1;
                wr32(sp0 - 4u, 1u);
            }
        }
    }
    wr32(sp0 - 0xcu, 1u);
    g->esp = sp0 - 8u;
    t2 = cow_call_regs(g, COW_IMG(0x10118e90u), 1u, self, g->edx, 0, 1, 1u);
    return t2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10118870(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10118870(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
