/* f_0x1019c130 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1019c130(Guest* g)
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
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint16_t)arg1 != 5u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        if ((int16_t)arg2 < 1)
        {
            eax = (in_eax & 0xffff0000u) | (uint16_t)arg2;
            edx = in_edx;
        }
        else
        {
            if ((int16_t)arg2 >= 15)
            {
                eax = (in_eax & 0xffff0000u) | (uint16_t)arg2;
                edx = in_edx;
            }
            else
            {
                t1 = rd32(COW_IMG(0x1037a0b4u) + (uint32_t)(int16_t)arg2 * 8u);
                t2 = rd32(COW_IMG(0x1037a0b0u) + (uint32_t)(int16_t)arg2 * 8u);
                g->ecx = t2;
                g->esp = sp0 - 8u;
                t3 = cow_call_regs(g, COW_IMG(0x10193830u), t1, g->ecx, g->edx, 1, 2, t2, t1);
                t4 = g->ecx;
                t5 = rd32(COW_IMG(0x1037a0b8u) + (uint32_t)(int16_t)arg2 * 8u - 8u);
                g->ecx = t4;
                g->esp = sp0 - 0x10u;
                t6 = cow_call_regs(g, COW_IMG(0x10193850u), t3, g->ecx, g->edx, 1, 1, t5);
                t7 = g->ecx;
                t8 = (uint32_t)(int16_t)arg2 - 1u;
                wr8(self + (uint32_t)((int32_t)(t8 - (uint32_t)((int32_t)t8 >> 0x1fu)) >> 1u) + 0x18u, t6 != 0u);
                eax = (uint32_t)((int32_t)(t8 - (uint32_t)((int32_t)t8 >> 0x1fu)) >> 1u);
                edx = (uint32_t)((int32_t)t8 >> 0x1fu);
            }
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019c130(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1019c130(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
