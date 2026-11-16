/* f_0x100f05c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100f05c0(Guest* g)
{
    uint32_t eax;

    if (rd32(COW_IMG(0x104df770u)) != 0u) goto L_100f05cc;
    eax = rd32(COW_IMG(0x104df770u));
    return eax & 0xffffff00u;
L_100f05cc: ;
    eax = 0u;
L_100f05d0: ;
    wr8(eax + rd32(COW_IMG(0x104df770u)) + 0x15110u, 0x20u);
    if (eax + 1u < 8u)
    {
        eax = eax + 1u;
        goto L_100f05d0;
    }
    eax = eax + 1u;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f05c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f05c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
