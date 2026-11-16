/* f_0x10119f20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10119f20(Guest* g)
{
    double d4;
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd8(self + 0x30u) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x30u);
    }
    else
    {
        if (rd32(self + 4u) == 0u)
        {
            eax = rd32(self + 4u);
        }
        else
        {
            eax = rd32(self + 4u);
            g->ecx = self;
            g->edx = in_edx;
            g->esp = sp0 - 4u;
            t1 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
            t2 = g->ecx;
            t3 = g->edx;
            d4 = cow_take_float(g);
            fpush(g, d4);
            t5 = cow_call_regs(g, COW_IMG(0x10311c6cu), t1, g->ecx, g->edx, 1, 0);
            wr16(self + 0x2cu, (uint16_t)(rd16(self + 0x2cu) - (uint16_t)t5));
            if ((int16_t)rd16(self + 0x2cu) >= 0)
            {
                eax = t5;
            }
            else
            {
                eax = t5;
                t6 = rd16(self + 0x2eu);
                t7 = rd32(self + 4u);
                t8 = rd32(rd32(rd32(self + 4u)) + (uint32_t)(int16_t)rd16(self + 0x2eu) * 4u);
                wr16(self + 0x2eu, (uint16_t)(((eax & 0xffff0000u) | t6) + 1u));
                wr32(self + 0xcu, t8);
                wr16(self + 0x2cu, 3u);
                if (rd32(rd32(t7) + (uint32_t)(int16_t)(((eax & 0xffff0000u) | t6) + 1u) * 4u) != 0u)
                {
                    eax = (uint32_t)(int16_t)(((eax & 0xffff0000u) | t6) + 1u);
                }
                else
                {
                    eax = (uint32_t)(int16_t)(((eax & 0xffff0000u) | t6) + 1u);
                    wr16(self + 0x2eu, 0u);
                }
            }
        }
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10119f20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10119f20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
