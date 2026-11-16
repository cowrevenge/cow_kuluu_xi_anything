/* f_0x1018c940 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1018c940(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 0xcu) == 0u)
    {
        edx = in_edx;
        goto L_1018c975;
    }
    ecx = rd32(self + 0xcu);
    if (rd32(ecx + 4u) == 0u)
    {
        edx = in_edx;
        goto L_1018c975;
    }
    eax = rd32(ecx + 4u);
    if (rd32(eax) == 0u)
    {
        edx = in_edx;
        goto L_1018c975;
    }
    eax = rd32(eax);
    if (!(rd32(eax + 0x120u) >> 9u & 1u))
    {
        edx = rd32(eax + 0x120u) >> 9u;
        goto L_1018c975;
    }
    if (rd32(eax + 0x78u) != rd32(ecx + 8u))
    {
        edx = rd32(eax + 0x78u);
        goto L_1018c975;
    }
    edx = rd32(eax + 0x78u);
    g->edx = edx;
    return rd32(eax + 0xa0u);
L_1018c975: ;
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018c940(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1018c940(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
