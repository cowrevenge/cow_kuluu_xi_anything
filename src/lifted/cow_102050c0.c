/* f_0x102050c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_102050c0(Guest* g)
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
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x106643fcu)) == 0u)
    {
        eax = rd32(COW_IMG(0x106643fcu));
        edx = in_edx;
    }
    else
    {
        eax = rd32(COW_IMG(0x106643fcu));
        if (rd32(arg1 + 4u) == 0u)
        {
            edx = in_edx;
        }
        else
        {
            ecx = rd32(arg1 + 4u);
            g->ecx = ecx;
            g->edx = in_edx;
            g->esp = sp0 - 8u;
            t1 = cow_call_regs(g, COW_IMG(0x100e8eb0u), eax, g->ecx, g->edx, 1, 1, eax);
            t2 = g->ecx;
            t3 = g->edx;
            t4 = rd32(arg1 + 4u);
            g->ecx = t2;
            g->edx = t3;
            g->esp = sp0 - 0xcu;
            t5 = cow_call_regs(g, COW_IMG(0x100e8eb0u), t4, g->ecx, g->edx, 1, 1, t4);
            t6 = g->ecx;
            t7 = g->edx;
            g->edx = t7;
            g->esp = sp0 - 0x10u;
            t8 = cow_cdecl(g, COW_IMG(0x100e99b0u), 2, t1, t5);
            t9 = g->edx;
            eax = t8;
            edx = t9;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102050c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102050c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
