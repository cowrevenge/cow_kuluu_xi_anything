/* f_0x10065dc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10065dc0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 == 0u) goto L_10065de4;
    if (arg2 == 1u) goto L_10065dda;
    if (arg2 != 2u) goto L_10065dea;
    eax = rd32(self + 4u) - arg1;
L_10065de8: ;
    wr32(self, eax);
L_10065dea: ;
    if ((int32_t)rd32(self) <= (int32_t)rd32(self + 4u))
    {
        eax = rd32(self);
        edx = rd32(self + 4u);
    }
    else
    {
        eax = rd32(self);
        edx = rd32(self + 4u);
        wr32(self + 4u, eax);
    }
    g->edx = edx;
    return eax;
L_10065dda: ;
    eax = arg1 + rd32(self);
    goto L_10065de8;
L_10065de4: ;
    eax = arg1;
    goto L_10065de8;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10065dc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10065dc0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
