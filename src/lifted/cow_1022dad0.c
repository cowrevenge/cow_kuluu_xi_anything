/* f_0x1022dad0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1022dad0(Guest* g)
{
    uint32_t ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((rd32(rd32(COW_IMG(0x10456a28u)) + 0x14u) & 1u << (arg1 & 0x1fu)) == 0u) goto L_1022daee;
    ecx = rd32(COW_IMG(0x10456a28u));
    if ((rd32(ecx + 0x10u) & 1u << (arg1 & 0x1fu)) == 0u) goto L_1022daee;
    return (1u << (arg1 & 0x1fu) & 0xffffff00u) | 1u;
L_1022daee: ;
    return 1u << (arg1 & 0x1fu) & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022dad0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1022dad0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
