/* f_0x1014a260 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1014a260(Guest* g)
{
    uint32_t eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 != 0u) goto L_1014a26b;
    return arg1 & 0xffffff00u;
L_1014a26b: ;
    if ((rd16(arg1) & 0x3fu) != 0u)
    {
        eax = (arg1 & 0xffff0000u) | rd16(arg1);
        goto L_1014a27c;
    }
    eax = (arg1 & 0xffff0000u) | rd16(arg1);
    if ((eax & 0xffc0u) != 0u) goto L_1014a27c;
    return eax & 0xffffff00u;
L_1014a27c: ;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014a260(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1014a260(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
