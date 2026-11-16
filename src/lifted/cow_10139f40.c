/* f_0x10139f40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10139f40(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg2 != 0u)
    {
        if (arg3 != 0u)
        {
            if (rd32(arg1 * 4u + self + 0x1cu) != 0u)
            {
                eax = rd32(arg1 * 4u + self + 0x1cu);
                goto L_10139f6a;
            }
            if (rd32(arg1 * 4u + self + 0x20u) == 0u)
            {
                eax = rd32(arg1 * 4u + self + 0x20u);
                edx = in_edx;
                goto L_10139f71;
            }
            eax = rd32(arg1 * 4u + self + 0x20u);
L_10139f6a: ;
            g->edx = in_edx;
            g->esp = sp0 - 0x10u;
            t1 = cow_call_regs(g, COW_IMG(0x10139fe0u), eax, self, g->edx, 1, 0);
            t2 = g->edx;
            eax = t1;
            edx = t2;
L_10139f71: ;
            wr32(arg1 * 4u + self + 0x1cu, arg2);
            wr32(arg1 * 4u + self + 0x20u, arg3);
            wr8(self + 8u, (uint8_t)arg1);
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x10139f90u), self, 0);
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10139f40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10139f40(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
