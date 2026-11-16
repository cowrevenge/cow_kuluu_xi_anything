/* f_0x10157780 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10157780(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    wr32(self + 0x6cu, 0u);
    wr32(self + 0x70u, 0u);
    if (arg1 == 0u)
    {
        eax = 0u;
    }
    else
    {
        if ((int32_t)arg2 > 2)
        {
            eax = 0u;
        }
        else
        {
            if ((int32_t)arg2 <= 0)
            {
                eax = 0u;
            }
            else
            {
                eax = 0u;
                ecx = self + 0x6cu;
L_101577a3: ;
                t1 = rd32(arg1 + eax * 4u);
                wr32(ecx, t1);
                if ((int32_t)(eax + 1u) < (int32_t)arg2)
                {
                    eax = eax + 1u;
                    ecx = ecx + 4u;
                    goto L_101577a3;
                }
                eax = eax + 1u;
            }
        }
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10157780(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10157780(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
