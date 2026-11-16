/* f_0x102534d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102534d0(Guest* g)
{
    uint32_t eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)arg1 <= 3) goto L_102534de;
    return 0u;
L_102534de: ;
    if (rd32(COW_IMG(0x10389d14u) + arg1 * 0x14u) != 0u)
    {
        eax = rd32(COW_IMG(0x10389d14u) + arg1 * 0x14u);
        goto L_102534f6;
    }
    eax = rd32(COW_IMG(0x10389d14u) + arg1 * 0x14u);
    return eax;
L_102534f6: ;
    if (rd8(COW_IMG(0x10389d0du) + arg1 * 0x14u) == 0u)
    {
        eax = 0xfffffffeu;
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102534d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102534d0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
