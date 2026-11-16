/* f_0x10275690 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10275690(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    eax = COW_IMG(0x1099cef8u);
    ecx = 0u;
L_1027569b: ;
    if (arg1 < rd32(eax + 0x54u)) goto L_102756a5;
    if (arg1 < rd32(eax + 0x5cu)) goto L_102756b0;
L_102756a5: ;
    if ((int32_t)(ecx + 1u) < 8)
    {
        eax = eax + 0x60u;
        ecx = ecx + 1u;
        goto L_1027569b;
    }
    eax = 0u;
L_102756b0: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10275690(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10275690(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
