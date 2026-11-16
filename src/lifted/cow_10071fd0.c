/* f_0x10071fd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10071fd0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    const uint32_t self = g->ecx;

    if (rd32(COW_IMG(0x1047d124u)) == 0u)
    {
        edx = 0u;
    }
    else
    {
        edx = rd32(COW_IMG(0x1047d124u));
        edx = rd32(edx);
    }
    if (edx == 0u)
    {
        eax = 0u;
        goto L_10071ffd;
    }
    eax = 0u;
L_10071fe6: ;
    if (edx == self) goto L_10071ffd;
    if (rd32(edx + 0x2cu) == 0u)
    {
        eax = edx;
        edx = 0u;
    }
    else
    {
        eax = edx;
        edx = rd32(edx + 0x2cu);
        edx = rd32(edx);
    }
    if (edx != 0u) goto L_10071fe6;
L_10071ffd: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10071fd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10071fd0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
