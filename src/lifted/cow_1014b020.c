/* f_0x1014b020 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_1014b020(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 == 1u)
    {
        g->esp = sp0;
        t1 = cow_thiscall(g, COW_IMG(0x101614c0u), rd32(COW_IMG(0x10621900u)), 1, arg5);
        if (t1 != 0u)
        {
            eax = t1;
            g->esp = sp0;
            cow_cdecl(g, COW_IMG(0x10129f00u), 5, arg2, arg3, eax, 0u, 0x80808080u);
        }
    }
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014b020(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1014b020(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
