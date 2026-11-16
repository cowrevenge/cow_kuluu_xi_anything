/* f_0x100fc8e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_100fc8e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)arg3 > 0)
    {
        eax = 0u;
        ecx = self;
        edx = arg1;
        esi = arg2;
L_100fc8f4: ;
        if (rd8(esi) == 9u) goto L_100fc90d;
        ecx = (ecx & 0xffffff00u) | rd8(esi);
        if ((uint8_t)ecx == 0u) goto L_100fc90d;
        if ((uint8_t)ecx == 0x20u) goto L_100fc90d;
        wr8(edx, (uint8_t)ecx);
        if ((int32_t)(eax + 1u) < (int32_t)arg3)
        {
            eax = eax + 1u;
            edx = edx + 1u;
            esi = esi + 1u;
            goto L_100fc8f4;
        }
    }
L_100fc90d: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100fc8e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100fc8e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
