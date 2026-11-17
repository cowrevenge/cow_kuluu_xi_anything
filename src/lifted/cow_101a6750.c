/* f_0x101a6750 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101a6750(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
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

    if ((uint8_t)arg1 == 0u)
    {
        eax = (in_eax & 0xffffff00u) | (uint8_t)arg1;
        edx = in_edx;
    }
    else
    {
        if (rd32(self + 0x20u) == 0u)
        {
            eax = (in_eax & 0xffffff00u) | (uint8_t)arg1;
            edx = in_edx;
        }
        else
        {
            ecx = rd32(self + 0x20u);
            g->edx = rd32(self + 0x1cu);
            t1 = rd8(self + 0x6cu);
            t2 = rd32(self + 0x1cu);
            g->esp = sp0 - 8u;
            t3 = cow_call_regs(g, COW_IMG(0x101c5e50u), t1 * 5u, ecx, g->edx, 0, 1, 0u);
            t4 = g->edx;
            t5 = t2 + t1 * 0x14u;
            g->edx = t4;
            t6 = cow_thiscall(g, COW_IMG(0x101a2980u), rd32(self + 0x14u), 2, t5, t3);
            t7 = g->edx;
            eax = t6;
            edx = t7;
        }
    }
    if (rd32(self + 0x20u) != 0u)
    {
        ecx = rd32(self + 0x20u);
        g->eax = rd32(ecx);
        g->edx = edx;
        t8 = rd32(ecx);
        g->esp = sp0 - 4u;
        t9 = cow_thiscall(g, rd32(t8 + 0xcu), ecx, 1, 1u);
        t10 = g->edx;
        wr32(self + 0x20u, 0u);
        eax = t9;
        edx = t10;
    }
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x101c6870u), rd32(COW_IMG(0x10662da0u)), 1, 0u);
    if (rd32(self + 8u) != 0u)
    {
        eax = rd32(self + 8u);
        wr8(eax + 0x61u, 1u);
        wr8(rd32(self + 8u) + 0x62u, 1u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a6750(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101a6750(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
