/* f_0x10262e20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10262e20(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 != 0u) goto L_10262e30;
    return 0x80004003u;
L_10262e30: ;
    g->eax = arg2;
    g->edx = rd32(arg1 - 0xcu);
    t1 = rd32(arg1 - 0xcu);
    g->esp = sp0;
    t2 = cow_thiscall(g, rd32(t1 + 0x20u), arg1 - 0xcu, 1, arg2);
    t3 = g->edx;
    if ((int32_t)t2 >= 0)
    {
        eax = t2;
        edx = t3;
    }
    else
    {
        edx = t3;
        eax = 1u;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10262e20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10262e20(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
