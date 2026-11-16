/* f_0x100961d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100961d0(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int16_t)rd16(arg1 + 0xf2u) > 0)
    {
        eax = arg1;
        goto L_100961f8;
    }
    t1 = rd32(arg1 + 0x120u);
    if (t1 >> 7u & 1u)
    {
        eax = t1;
        goto L_100961f8;
    }
    eax = t1;
    if (eax >> 8u & 1u)
    {
        eax = eax >> 8u;
        goto L_100961f8;
    }
    eax = eax >> 8u;
    return (eax & 0xffffff00u) | 1u;
L_100961f8: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100961d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100961d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
