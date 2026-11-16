/* f_0x1001e2f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_1001e2f0(Guest* g)
{
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd8(COW_IMG(0x10456db0u)) != 0u) goto L_1001e301;
    if ((uint8_t)arg1 != 0u) goto L_1001e309;
L_1001e301: ;
    if ((uint8_t)arg2 == 0u) goto L_1001e310;
L_1001e309: ;
    wr8(COW_IMG(0x10456db1u), 0u);
L_1001e310: ;
    wr8(COW_IMG(0x10456db0u), (uint8_t)arg1);
    wr32(COW_IMG(0x10456db4u), arg3);
    return (in_eax & 0xffffff00u) | (uint8_t)arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1001e2f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1001e2f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
