/* f_0x1012f880 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1012f880(Guest* g)
{
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 == 0u) goto L_1012f8ae;
    if (rd8(arg1 + 4u) != 0xcu) goto L_1012f8a7;
    if (rd8(arg1 + 0xcu) != 1u) goto L_1012f8a7;
    if (rd8(arg1 + 0xdu) != 1u) goto L_1012f8a7;
    wr8(self + 0x1f2u, 1u);
    return;
L_1012f8a7: ;
    wr8(self + 0x1f2u, 0u);
L_1012f8ae: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012f880(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1012f880(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
