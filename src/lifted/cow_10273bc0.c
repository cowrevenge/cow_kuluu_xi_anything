/* f_0x10273bc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10273bc0(Guest* g)
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int32_t)rd32(arg1 + 0x14u) < 0)
    {
        eax = rd32(arg1 + 0x14u);
        edx = in_edx;
    }
    else
    {
        eax = rd32(arg1 + 0x14u);
        if ((int32_t)eax >= (int32_t)rd32(arg1 + 0x18u))
        {
            edx = in_edx;
        }
        else
        {
            t1 = eax * 0xd8u + rd32(arg1 + 0x20u) + 8u;
            g->eax = eax * 0x1bu;
            g->ecx = rd32(arg1 + 0x20u);
            g->edx = t1;
            t2 = rd32(arg1 + 0x20u);
            g->esp = sp0 - 4u;
            t3 = cow_cdecl(g, COW_IMG(0x10273c00u), 3, t1, arg2, in_edi);
            t4 = g->ecx;
            t5 = g->edx;
            t6 = eax * 0xd8u + t2 + 0x70u;
            g->edx = t5;
            g->esp = sp0 - 0xcu;
            t7 = cow_cdecl(g, COW_IMG(0x10273c00u), 3, t6, arg2, t1);
            t8 = g->edx;
            eax = t7;
            edx = t8;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10273bc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10273bc0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
