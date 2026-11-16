/* f_0x1019ebb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1019ebb0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd8(self + 0x54u) == 0u)
    {
        t1 = rd32(self + 0x3cu);
        t2 = rd32(self + 0x40u);
        g->edx = in_edx;
        g->esp = sp0 - 0x14u;
        t3 = cow_call_regs(g, COW_IMG(0x1019ed50u), t1, self, g->edx, 0, 1, t2);
        t4 = g->edx;
        g->edx = t4;
        t5 = cow_call_regs(g, COW_IMG(0x1019ed20u), t3, self, g->edx, 1, 0);
        t6 = g->edx;
        g->edx = t6;
        g->esp = sp0 - 0x18u;
        t7 = cow_call_regs(g, COW_IMG(0x1019ed10u), t5 - t3, self, g->edx, 1, 0);
        t8 = g->edx;
        g->esp = sp0 - 8u;
        t9 = cow_fastcall(g, COW_IMG(0x1019edb0u), self, t8, 5, t7, t5 - t3, t1, 0x80808080u, 0x25u);
        if ((int32_t)t9 < 0)
        {
            wr8(self + 0x54u, 1u);
        }
    }
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019ebb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1019ebb0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
