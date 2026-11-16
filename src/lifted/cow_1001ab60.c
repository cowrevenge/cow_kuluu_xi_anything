/* f_0x1001ab60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_1001ab60(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t loc_4;
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
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(self + 0x10u);
    if (arg4 != 0u)
    {
        loc_4 = t1;
    }
    else
    {
        loc_4 = t1;
        if ((int32_t)arg1 >= 5)
        {
            loc_4 = 0x3f800000u;
        }
    }
    if (rd32(self + 0x34u) == 0u)
    {
        eax = rd32(self + 0x34u);
        edx = in_edx;
    }
    else
    {
        g->edx = in_edx;
        g->esp = sp0 - 0x10u;
        t2 = cow_thiscall(g, COW_IMG(0x10071060u), self + 0x34u, 0);
        t3 = g->edx;
        if ((uint8_t)t2 == 0u)
        {
            eax = t2;
            edx = t3;
        }
        else
        {
            t4 = rd32(self + 0x24u);
            t5 = rd32(self + 0x34u);
            g->edx = loc_4;
            g->esp = sp0 - 0x20u;
            t6 = cow_stdcall(g, COW_IMG(0x10072fb0u), 1, t5);
            t7 = g->edx;
            g->esp = sp0 - 0x10u;
            t8 = cow_call_regs(g, COW_IMG(0x10019a50u), t6, t6, t7, 0, 4, arg1, t4, loc_4, arg3);
            t9 = g->edx;
            eax = t8;
            edx = t9;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1001ab60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1001ab60(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
