/* f_0x10254b60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10254b60(Guest* g)
{
    uint32_t eax;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(arg1 * 8u + rd32(self + 0x24u)) == 0u)
    {
        eax = arg1 * 8u + rd32(self + 0x24u);
        goto L_10254b77;
    }
    g->edx = arg1;
    return COW_IMG(0x10669428u);
L_10254b77: ;
    g->edx = rd32(eax + 4u) * 8u - rd32(eax + 4u);
    return rd32(eax + 4u) * 0x1cu + rd32(self + 4u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10254b60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10254b60(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
