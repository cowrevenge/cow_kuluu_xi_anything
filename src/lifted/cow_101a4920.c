/* f_0x101a4920 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101a4920(Guest* g)
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint8_t)arg1 != 1u)
    {
        eax = (in_eax & 0xffffff00u) | (uint8_t)arg1;
        edx = in_edx;
    }
    else
    {
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t1 = cow_call_regs(g, COW_IMG(0x101a44b0u), (in_eax & 0xffffff00u) | (uint8_t)arg1, rd32(self + 0x24u), g->edx, 1, 0);
        t2 = g->edx;
        t3 = ((t1 & 0xffff0000u) | (uint16_t)(uint32_t)(int8_t)t1) + 1u;
        g->edx = t2;
        g->esp = sp0 - 4u;
        t4 = cow_call_regs(g, COW_IMG(0x10118db0u), t3, rd32(self + 8u), g->edx, 0, 2, t3, 0u);
        t5 = g->edx;
        g->edx = t5;
        t6 = cow_thiscall(g, COW_IMG(0x101a47e0u), self, 0);
        t7 = g->edx;
        eax = t6;
        edx = t7;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a4920(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a4920(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
