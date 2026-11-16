/* f_0x1020d750 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1020d750(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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

    if (rd32(COW_IMG(0x10664494u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10664494u));
        edx = in_edx;
    }
    else
    {
        eax = rd32(COW_IMG(0x10664494u));
        if ((uint16_t)arg1 != 5u)
        {
            edx = in_edx;
        }
        else
        {
            g->ecx = self;
            g->edx = in_edx;
            g->esp = sp0 - 4u;
            cow_cdecl(g, COW_IMG(0x10107de0u), 1, eax + 0x5cu);
            t1 = g->ecx;
            t2 = g->edx;
            t3 = (t1 & 0xffffff00u) | rd8(COW_IMG(0x10385a0fu) + (uint32_t)(int16_t)arg2);
            g->edx = t2;
            g->esp = sp0 - 8u;
            t4 = cow_cdecl(g, COW_IMG(0x10107d50u), 2, eax + 0x5cu, t3);
            t5 = g->edx;
            g->edx = t5;
            g->esp = sp0 - 4u;
            t6 = cow_call_regs(g, COW_IMG(0x1020a9d0u), t4, rd32(COW_IMG(0x10664494u)), g->edx, 0, 6, 1u, eax + 0x5cu, 1u, 0u, 0u, 0u);
            t7 = g->edx;
            g->edx = t7;
            t8 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385ab4u));
            t9 = g->edx;
            g->edx = t9;
            t10 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385a64u));
            t11 = g->edx;
            eax = t10;
            edx = t11;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1020d750(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1020d750(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
