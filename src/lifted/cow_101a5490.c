/* f_0x101a5490 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101a5490(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t loc_c;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)arg1 < 3)
    {
        eax = in_eax;
    }
    else
    {
        if ((int32_t)arg1 > 9)
        {
            eax = in_eax;
        }
        else
        {
            t1 = rd32(self + 8u);
            wr8(self + 0x1cu, 1u);
            wr32(self + 0x20u, arg1);
            wr8(t1 + 0x62u, 0u);
            g->esp = sp0 - 8u;
            t2 = cow_call_regs(g, COW_IMG(0x101c68a0u), t1, rd32(COW_IMG(0x10662da0u)), in_edx, 1, 0);
            t3 = g->edx;
            if (arg1 != 3u)
            {
                eax = t2;
                t5 = rd32(arg1 * 4u + self + 0x1cu);
                edx = t5;
                loc_c = t5;
            }
            else
            {
                eax = t2;
                edx = t3;
                t4 = rd32(self + 0x44u);
                loc_c = t4;
            }
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t6 = cow_thiscall(g, COW_IMG(0x101c6870u), rd32(COW_IMG(0x10662da0u)), 1, loc_c);
            t7 = g->edx;
            t8 = (t6 & 0xffff0000u) | rd16(self + 0x20u);
            t9 = cow_call_regs(g, COW_IMG(0x10118db0u), t8, rd32(self + 8u), g->edx, 0, 2, t8, 0u);
            eax = t9;
        }
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a5490(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a5490(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
