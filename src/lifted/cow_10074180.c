/* f_0x10074180 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10074180(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 == 0u)
    {
        edx = 0u;
    }
    else
    {
        edx = rd32(arg1);
    }
    if (edx < self + 8u) goto L_100741aa;
    if (arg1 == 0u)
    {
        edx = 0u;
    }
    else
    {
        edx = rd32(arg1);
    }
    if (edx <= self + 0x40004u)
    {
        eax = arg1;
        goto L_100741cf;
    }
L_100741aa: ;
    if (arg1 == 0u)
    {
        eax = arg1;
    }
    else
    {
        t1 = rd32(self + 4u);
        wr32(arg1, t1);
        wr32(self + 4u, arg1);
        t2 = rd32(self + 0x4000cu) - 1u;
        t3 = rd32(self + 0x4000cu);
        wr32(self + 0x4000cu, t2);
        if ((int32_t)(t3 - 1u) >= 0)
        {
            eax = t2;
            edx = t1;
        }
        else
        {
            eax = t2;
            edx = t1;
            wr32(self + 0x4000cu, 0u);
        }
    }
L_100741cf: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10074180(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10074180(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
