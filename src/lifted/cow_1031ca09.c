/* f_0x1031ca09 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_1031ca09(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(arg1 + 0x10u);
    t2 = rd8(arg3);
    wr32(arg1 + (uint32_t)((int32_t)(arg2 - t1) >> 0xcu) * 8u + 0x18u, t2 + rd32(arg1 + (uint32_t)((int32_t)(arg2 - t1) >> 0xcu) * 8u + 0x18u));
    wr8(arg3, 0u);
    t3 = rd32(arg1 + (uint32_t)((int32_t)(arg2 - t1) >> 0xcu) * 8u + 0x18u);
    wr32(arg1 + (uint32_t)((int32_t)(arg2 - t1) >> 0xcu) * 8u + 0x1cu, 0xf1u);
    if (t3 != 0xf0u)
    {
        eax = arg1 + (uint32_t)((int32_t)(arg2 - t1) >> 0xcu) * 8u + 0x18u;
        edx = t2;
    }
    else
    {
        eax = arg1 + (uint32_t)((int32_t)(arg2 - t1) >> 0xcu) * 8u + 0x18u;
        edx = t2;
        wr32(COW_IMG(0x109b2740u), rd32(COW_IMG(0x109b2740u)) + 1u);
        if (rd32(COW_IMG(0x109b2740u)) == 0x20u)
        {
            g->eax = eax;
            g->esp = sp0;
            t4 = cow_call_regs(g, COW_IMG(0x1031c8f0u), g->eax, arg3, edx, 1, 1, 0x10u);
            t5 = g->edx;
            eax = t4;
            edx = t5;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031ca09(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1031ca09(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
