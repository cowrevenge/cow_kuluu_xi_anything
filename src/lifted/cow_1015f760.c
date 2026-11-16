/* f_0x1015f760 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1015f760(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    wr16(arg1 * 2u + self + 0xa0u, 0u);
    if (arg2 == 0u)
    {
        eax = arg1;
    }
    else
    {
        g->edx = 0u;
        g->esp = sp0 - 8u;
        t1 = cow_thiscall(g, COW_IMG(0x1015f960u), self, 1, arg1);
        t2 = g->edx;
        g->esp = sp0 - 4u;
        t3 = cow_stdcall(g, COW_IMG(0x1015f790u), 2, t1, arg2);
        eax = t3;
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015f760(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1015f760(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
