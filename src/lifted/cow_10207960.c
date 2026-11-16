/* f_0x10207960 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10207960(Guest* g)
{
    uint32_t eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    eax = 0u;
L_10207966: ;
    if (rd8(COW_IMG(0x10385530u) + eax) == arg1) goto L_1020797b;
    if ((int32_t)(eax + 1u) < 14)
    {
        eax = eax + 1u;
        goto L_10207966;
    }
    eax = eax + 1u;
    eax = 0xffffffffu;
L_1020797b: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10207960(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10207960(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
