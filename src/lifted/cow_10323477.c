/* f_0x10323477 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10323477(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    eax = 0u;
    ecx = self;
    edx = arg1;
L_1032347d: ;
    if (rd8(edx) == 0u) goto L_103234af;
    ecx = (ecx & 0xffffff00u) | rd8(edx);
    edx = edx + 1u;
    if ((int8_t)ecx < 97) goto L_10323493;
    if ((int8_t)ecx > 102) goto L_10323493;
    ecx = (ecx & 0xffffff00u) | (uint8_t)((uint8_t)ecx + 0xd9u);
L_103234a0: ;
    eax = eax * 0x10u + (uint32_t)(int8_t)ecx - 0x30u;
    ecx = (uint32_t)(int8_t)ecx;
    goto L_1032347d;
L_10323493: ;
    if ((int8_t)ecx >= 65)
    {
        if ((int8_t)ecx <= 70)
        {
            ecx = (ecx & 0xffffff00u) | (uint8_t)((uint8_t)ecx + 0xf9u);
        }
    }
    goto L_103234a0;
L_103234af: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10323477(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10323477(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
