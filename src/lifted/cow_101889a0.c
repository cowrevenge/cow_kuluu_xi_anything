/* f_0x101889a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101889a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;

    g->edx = 0u;
    t1 = cow_stdcall(g, COW_IMG(0x10188900u), 0);
    t2 = g->edx;
    if (t1 == 0u)
    {
        edx = t2;
        goto L_101889b7;
    }
    eax = t1;
L_101889ab: ;
    if (rd32(eax + 4u) != 0u)
    {
        eax = rd32(eax + 4u);
        goto L_101889ab;
    }
    ecx = eax;
    return ecx;
L_101889b7: ;
    return edx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101889a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101889a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
