/* f_0x10008f00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10008f00(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x1045654cu)) == 0u) goto L_10008f1f;
    if (rd32(COW_IMG(0x10456558u)) == 0u) goto L_10008f1f;
    eax = rd32(COW_IMG(0x10456558u));
    g->eax = eax;
    g->esp = sp0;
    t1 = cow_thiscall_cdecl(g, eax, arg1, 1, arg1);
    return t1;
L_10008f1f: ;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10008f00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10008f00(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
