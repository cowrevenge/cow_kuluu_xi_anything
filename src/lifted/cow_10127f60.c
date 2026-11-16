/* f_0x10127f60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10127f60(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    eax = arg1 * 0x78u + self;
    edx = 0u;
L_10127f74: ;
    if (rd32(eax) == 0u) goto L_10127f7e;
    ecx = rd32(eax);
    if (ecx == arg2) goto L_10127f8d;
L_10127f7e: ;
    if ((int32_t)(edx + 1u) < 30)
    {
        eax = eax + 4u;
        edx = edx + 1u;
        goto L_10127f74;
    }
    eax = eax + 4u;
    edx = edx + 1u;
    g->edx = edx;
    return eax & 0xffffff00u;
L_10127f8d: ;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10127f60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10127f60(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
