/* f_0x10159420 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10159420(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(COW_IMG(0x10578770u) + arg1 * 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x10578770u) + arg1 * 4u);
        goto L_10159432;
    }
    eax = rd32(COW_IMG(0x10578770u) + arg1 * 4u);
    return eax & 0xffffff00u;
L_10159432: ;
    g->eax = eax;
    g->esp = sp0;
    t1 = cow_thiscall_cdecl(g, eax, arg1, 2, arg1, arg2);
    return (t1 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10159420(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10159420(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
