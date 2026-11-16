/* f_0x100fda60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100fda60(Guest* g)
{
    uint32_t eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint8_t)arg2 == 0u) goto L_100fda81;
    if ((uint8_t)arg2 == 1u) goto L_100fda7d;
    if ((uint8_t)arg2 != 2u)
    {
        eax = arg1;
        goto L_100fda84;
    }
    return arg1 + 0x32u;
L_100fda7d: ;
    return arg1 + 0x1eu;
L_100fda81: ;
    eax = arg1 + 0xau;
L_100fda84: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100fda60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100fda60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
