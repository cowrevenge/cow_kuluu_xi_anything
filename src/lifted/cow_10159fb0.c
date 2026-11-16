/* f_0x10159fb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10159fb0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 == 0u) goto L_10159fd0;
    eax = COW_IMG(0x10601468u);
    ecx = 0u;
L_10159fbf: ;
    if (rd32(eax) == arg1) goto L_10159fd3;
    if ((int32_t)(eax + 0x294u) < (int32_t)COW_IMG(0x10621808u))
    {
        eax = eax + 0x294u;
        ecx = ecx + 1u;
        goto L_10159fbf;
    }
L_10159fd0: ;
    g->edx = arg1;
    return 0u;
L_10159fd3: ;
    g->edx = arg1;
    return COW_IMG(0x10601468u) + ecx * 0x294u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10159fb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10159fb0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
