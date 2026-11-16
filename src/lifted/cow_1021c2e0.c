/* f_0x1021c2e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1021c2e0(Guest* g)
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
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd16(self + (uint8_t)arg2 * 0x18u + 0x80u) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        g->edx = in_edx;
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, COW_IMG(0x1021d270u), self + (uint8_t)arg2 * 0x18u + 0x6cu, 0);
        t1 = g->edx;
        g->edx = t1;
        cow_thiscall(g, COW_IMG(0x1021c680u), self, 1, arg2);
        t2 = g->edx;
        edx = t2;
    }
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x1021c5b0u), self, 3, arg1, arg2, 0u);
    t3 = g->ecx;
    t4 = g->edx;
    t5 = (t3 & 0xffff0000u) | rd16(arg1);
    g->edx = t4;
    t6 = cow_thiscall(g, COW_IMG(0x1021d380u), self + (uint8_t)arg2 * 0x18u + 0x6cu, 2, t5, arg2);
    t7 = g->edx;
    if ((uint8_t)t6 == 1u)
    {
        eax = t6;
        edx = t7;
    }
    else
    {
        eax = t6;
        edx = t7;
        if (rd16(self + (uint8_t)arg2 * 0x18u + 0x80u) == 0u)
        {
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t8 = cow_thiscall(g, COW_IMG(0x1021c680u), self, 1, arg2);
            t9 = g->edx;
            eax = t8;
            edx = t9;
        }
    }
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1021c2e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1021c2e0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
