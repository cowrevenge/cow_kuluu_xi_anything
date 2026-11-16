/* f_0x10249d30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10249d30(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    eax = rd32(COW_IMG(0x106690fcu));
    ecx = rd32(COW_IMG(0x106690fcu));
L_10249d3d: ;
    if (rd32(eax) == 0u) goto L_10249d47;
    if (rd32(eax + 4u) == arg1) goto L_10249d56;
L_10249d47: ;
    if (eax + 0xcu < ecx + 0x108u)
    {
        eax = eax + 0xcu;
        goto L_10249d3d;
    }
    eax = 0u;
L_10249d56: ;
    g->edx = arg1;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10249d30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10249d30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
