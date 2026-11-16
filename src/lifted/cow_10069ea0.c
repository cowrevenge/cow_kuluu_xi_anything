/* f_0x10069ea0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10069ea0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    const uint32_t self = g->ecx;

    eax = self + 0x110u;
    edx = self + 0x310u;
L_10069eb7: ;
    wr8(eax + 0x100u, 0u);
    wr8(eax, 0u);
    wr8(eax - 0x100u, 0u);
    wr32(edx, 0u);
    if ((int32_t)(eax - self - 0x10fu) < 256)
    {
        eax = eax + 1u;
        edx = edx + 4u;
        goto L_10069eb7;
    }
    eax = eax + 1u;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10069ea0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10069ea0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
