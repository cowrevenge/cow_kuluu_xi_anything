/* f_0x10097a80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10097a80(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->esp = sp0 - 4u;
    t1 = cow_stdcall(g, COW_IMG(0x101039e0u), 0);
    if (arg1 != 0u)
    {
        eax = t1 * 0x3cu;
        edx = arg1;
    }
    else
    {
        eax = t1 * 0x3cu;
        edx = eax;
    }
    if (rd32(self + 0xa0u) != 0u)
    {
        ecx = rd32(self + 0xa0u);
        t2 = rd32(COW_IMG(0x1032d42cu) + rd32(self + 0x170u) * 4u);
        g->eax = eax;
        g->esp = sp0 - 4u;
        t3 = cow_fastcall(g, COW_IMG(0x100c4730u), ecx, edx, 3, edx, eax, t2);
        eax = t3;
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10097a80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10097a80(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
