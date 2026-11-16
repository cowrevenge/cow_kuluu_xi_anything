/* f_0x10087030 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10087030(Guest* g)
{
    uint32_t eax;
    const uint32_t in_eax = g->eax;

    if (rd8(COW_IMG(0x10487e48u)) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10487e48u));
        goto L_10087053;
    }
    if (rd32(COW_IMG(0x10482f20u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10482f20u));
        goto L_10087053;
    }
    eax = rd32(COW_IMG(0x10482f20u));
    return (((eax & 0xffff0000u) | rd16(COW_IMG(0x10485578u))) & 0xffffff00u) | rd16(COW_IMG(0x10485578u)) == rd16(COW_IMG(0x1047fb3au));
L_10087053: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10087030(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10087030(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
