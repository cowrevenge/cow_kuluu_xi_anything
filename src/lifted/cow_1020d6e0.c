/* f_0x1020d6e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1020d6e0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
            t1 = cow_cdecl(g, COW_IMG(0x10107c00u), 1, eax + 0x5cu);
            t2 = g->ecx;
            t3 = g->edx;
            t4 = (t1 & 0xffffff00u) | (uint8_t)((uint8_t)arg2 - 1u);
            g->edx = t3;
            g->esp = sp0 - 8u;
            t5 = cow_cdecl(g, COW_IMG(0x10107bd0u), 2, eax + 0x5cu, t4);
            t6 = g->edx;
            g->edx = t6;
            g->esp = sp0 - 4u;
            t7 = cow_call_regs(g, COW_IMG(0x1020a9d0u), t5, rd32(COW_IMG(0x10664494u)), g->edx, 0, 6, 1u, eax + 0x5cu, 1u, 0u, 0u, 0u);
            t8 = g->edx;
            g->edx = t8;
            t9 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385ac8u));
            t10 = g->edx;
            g->edx = t10;
            t11 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385a64u));
            t12 = g->edx;
            eax = t11;
            edx = t12;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1020d6e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1020d6e0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
