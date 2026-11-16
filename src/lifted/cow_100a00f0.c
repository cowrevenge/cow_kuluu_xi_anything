/* f_0x100a00f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100a00f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    eax = COW_IMG(0x10488800u);
    ecx = arg3 + 4u;
L_100a00fc: ;
    t1 = rd32(ecx);
    wr32(eax, t1);
    if ((int32_t)(eax + 4u) < (int32_t)COW_IMG(0x10488820u))
    {
        eax = eax + 4u;
        ecx = ecx + 4u;
        goto L_100a00fc;
    }
    eax = eax + 4u;
    edx = t1;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a00f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a00f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
