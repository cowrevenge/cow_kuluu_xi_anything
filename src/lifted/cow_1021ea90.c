/* f_0x1021ea90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1021ea90(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(self + 0x20u);
    g->eax = t1;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, COW_IMG(0x1021eae0u), self, 2, arg1, t1);
    t3 = g->edx;
    if (t2 != 0xffffffffu)
    {
        eax = t2;
        edx = t3;
    }
    else
    {
        edx = t3;
        if ((int32_t)rd32(self + 0x20u) >= (int32_t)rd32(self + 0x24u))
        {
            eax = rd32(self + 0x20u);
        }
        else
        {
            eax = rd32(self + 0x20u);
            t4 = rd32(self + 0x1cu);
            t5 = rd32(self + 0xcu);
            wr32(self + 0x20u, eax + 1u);
            wr32(t4 * 4u + t5, arg1);
            t6 = rd32(self + 0x1cu) + 1u;
            t7 = rd32(self + 0x24u);
            wr32(self + 0x1cu, t6);
            if ((int32_t)t6 < (int32_t)t7)
            {
                eax = t6;
                edx = t6;
            }
            else
            {
                eax = t6;
                edx = t6;
                wr32(self + 0x1cu, 0u);
            }
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1021ea90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1021ea90(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
