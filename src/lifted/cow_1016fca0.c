/* f_0x1016fca0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1016fca0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 4u) == 0u)
    {
        eax = 0u;
        edx = in_edx;
        goto L_1016fcc0;
    }
    eax = 0u;
    ecx = rd32(self + 4u);
    edx = in_edx;
L_1016fca9: ;
    if (rd8(ecx + 0xdcu) == 0u)
    {
        edx = (edx & 0xffffff00u) | rd8(ecx + 0xdcu);
    }
    else
    {
        edx = (edx & 0xffffff00u) | rd8(ecx + 0xdcu);
        wr32(ecx + 0xd8u, eax);
        eax = eax + 1u;
    }
    if (rd32(ecx) != 0u)
    {
        ecx = rd32(ecx);
        goto L_1016fca9;
    }
L_1016fcc0: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1016fca0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1016fca0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
