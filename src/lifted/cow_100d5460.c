/* f_0x100d5460 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_100d5460(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint8_t)arg1 != 1u) goto L_100d5478;
    t1 = rd32(self + 0x838u) + 1u;
    wr32(self + 0x838u, t1);
    return t1;
L_100d5478: ;
    if ((uint8_t)arg1 != 0u)
    {
        eax = (in_eax & 0xffffff00u) | (uint8_t)arg1;
    }
    else
    {
        if ((int32_t)rd32(self + 0x838u) <= 0)
        {
            eax = rd32(self + 0x838u);
        }
        else
        {
            eax = rd32(self + 0x838u);
            wr32(self + 0x838u, eax - 1u);
            eax = eax - 1u;
        }
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d5460(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100d5460(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
