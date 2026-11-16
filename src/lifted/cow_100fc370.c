/* f_0x100fc370 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100fc370(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(COW_IMG(0x104dfd94u)) == 0u)
    {
        eax = in_eax;
        goto L_100fc385;
    }
    ecx = rd32(COW_IMG(0x104dfd94u));
    if ((int32_t)arg1 < 287) goto L_100fc388;
    eax = arg1;
L_100fc385: ;
    return eax & 0xffffff00u;
L_100fc388: ;
    wr32(arg1 * 4u + ecx + 0x44730u, arg2);
    return (arg1 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100fc370(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100fc370(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
