/* f_0x10103580 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10103580(Guest* g)
{
    uint32_t eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x104e0af4u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104e0af4u));
        goto L_1010359f;
    }
    eax = rd32(COW_IMG(0x104e0af4u));
    if (rd32(eax + 0x438u) != 0u)
    {
        eax = rd32(eax + 0x438u);
        goto L_10103596;
    }
    eax = rd32(eax + 0x438u);
    return (eax & 0xffffff00u) | 1u;
L_10103596: ;
    if (eax != arg1) goto L_1010359f;
    return (eax & 0xffffff00u) | 1u;
L_1010359f: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10103580(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10103580(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
