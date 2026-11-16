/* f_0x10159640 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10159640(Guest* g)
{
    uint32_t eax;
    const uint32_t self = g->ecx;

    if (rd32(self + 8u) != 0u)
    {
        eax = rd32(self + 8u);
        goto L_1015964a;
    }
    eax = rd32(self + 8u);
    return eax & 0xffffff00u;
L_1015964a: ;
    return (rd32(eax + 0x78u) & 0xff000000u) | (rd32(eax + 0x78u) & 0xff000000u) == 0x1000000u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10159640(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10159640(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
