/* f_0x102033c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102033c0(Guest* g)
{
    uint32_t edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)arg1 < 0) goto L_1020341d;
    if ((int32_t)arg1 >= 18) goto L_1020341d;
    if (rd32(COW_IMG(0x104dfd98u)) == 0u) goto L_1020341d;
    edx = rd32(COW_IMG(0x104dfd98u));
    if (rd8(COW_IMG(0x10663b52u) + arg1 * 0x7cu) == 0u) goto L_1020341d;
    if (rd16(COW_IMG(0x10663b0cu) + arg1 * 0x7cu) != 0u) goto L_1020341d;
    if (rd32(edx + 0x3c350u) != rd16(COW_IMG(0x10663b0au) + arg1 * 0x7cu)) goto L_1020341d;
    return rd32(COW_IMG(0x10480af0u) + rd16(COW_IMG(0x10663af4u) + arg1 * 0x7cu) * 4u);
L_1020341d: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102033c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102033c0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
