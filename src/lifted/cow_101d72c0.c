/* f_0x101d72c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101d72c0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    eax = 0u;
    edx = self + 0xau;
L_101d72cc: ;
    if (rd8(edx) == (uint8_t)arg1) goto L_101d72df;
    if ((int32_t)(eax + 1u) < 7)
    {
        eax = eax + 1u;
        edx = edx + 0xcu;
        goto L_101d72cc;
    }
    return 0u;
L_101d72df: ;
    return eax * 0xcu + self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d72c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101d72c0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
