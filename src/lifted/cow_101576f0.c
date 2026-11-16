/* f_0x101576f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101576f0(Guest* g)
{
    uint32_t eax;
    uint32_t t1;

    t1 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    if (t1 == 0u)
    {
        eax = t1;
        goto L_10157718;
    }
    eax = t1;
    if (rd32(eax + 0x70u) == 0u)
    {
        eax = rd32(eax + 0x70u);
        goto L_10157718;
    }
    eax = rd32(eax + 0x70u);
    if (rd32(eax + 0x170u) == 2u)
    {
        eax = rd32(eax + 0x170u);
        goto L_10157718;
    }
    eax = rd32(eax + 0x170u);
    if (eax == 3u) goto L_10157718;
    return eax & 0xffffff00u;
L_10157718: ;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101576f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101576f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
