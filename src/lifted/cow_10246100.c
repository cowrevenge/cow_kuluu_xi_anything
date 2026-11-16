/* f_0x10246100 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_10246100(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)(arg1 & 0x80000003u) >= 0)
    {
        edx = arg1 & 0x80000003u;
    }
    else
    {
        edx = ((arg1 & 0x80000003u) - 1u | 0xfffffffcu) + 1u;
    }
    if ((int32_t)rd32(edx * 4u + rd32(COW_IMG(0x10669104u))) < 0)
    {
        eax = 0u;
    }
    else
    {
        g->edx = edx;
        g->esp = sp0 - 8u;
        t1 = cow_thiscall(g, COW_IMG(0x10245f50u), self, 0);
        t2 = g->edx;
        t3 = cow_divs(g, arg2, 0x3e8u);
        t4 = cow_mods(g, arg2, 0x3e8u);
        t5 = t4 + rd32(t2 * 4u + rd32(COW_IMG(0x10669104u))) * 0x3e8u;
        g->edx = t5;
        cow_stdcall(g, COW_IMG(0x1024c080u), 8, 2u, t5, t1, arg3 & 0x7fu, arg4 & 0x7fu, 0u, 0u, 0u);
        t6 = g->edx;
        eax = t1;
        edx = t6;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10246100(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10246100(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
