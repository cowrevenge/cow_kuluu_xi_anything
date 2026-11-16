/* f_0x1009f430 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_1009f430(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    wr8(self + 0x15bu, (uint8_t)arg3);
    t1 = rd32(self + 0x128u);
    wr16(self + 0x158u, (uint16_t)arg2);
    wr8(self + 0x15au, 0u);
    wr32(self + 0x154u, arg1);
    wr16(self + 0x152u, (uint16_t)arg4);
    wr32(self + 0x128u, t1 | 0x10000000u);
    g->ecx = self;
    g->edx = t1 | 0x10000000u;
    g->esp = sp0 - 4u;
    t2 = cow_stdcall(g, COW_IMG(0x100fc510u), 0);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 != 0u)
    {
        ecx = t3;
        edx = t4;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t5 = cow_stdcall(g, COW_IMG(0x100fc510u), 0);
        t6 = g->ecx;
        t7 = g->edx;
        if (arg1 == rd32(t5 + 4u))
        {
            eax = t5;
            ecx = t6;
            edx = t7;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t8 = cow_call_regs(g, COW_IMG(0x101cc4f0u), eax, g->ecx, g->edx, 1, 0);
            t9 = g->edx;
            if (t8 != 0u)
            {
                eax = t8;
                edx = t9;
                if (rd32(eax + 0x120u) >> 9u & 1u)
                {
                    g->esp = sp0 - 4u;
                    cow_call_regs(g, COW_IMG(0x100a6070u), eax, g->ecx, g->edx, 0, 1, 0u);
                }
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1009f430(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1009f430(g);
    g->esp = sp0;
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
