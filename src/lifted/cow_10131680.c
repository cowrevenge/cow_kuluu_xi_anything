/* f_0x10131680 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10131680(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    eax = 0u;
L_10131687: ;
    if (rd8(COW_IMG(0x1036f734u) + eax) == (uint32_t)(int16_t)arg1)
    {
        edx = rd8(COW_IMG(0x1036f734u) + eax);
        goto L_1013169d;
    }
    edx = rd8(COW_IMG(0x1036f734u) + eax);
    if ((int32_t)(eax + 1u) < 16)
    {
        eax = eax + 1u;
        goto L_10131687;
    }
    eax = eax + 1u;
    eax = (eax & 0xffff0000u) | (uint16_t)(eax | 0xffffu);
L_1013169d: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10131680(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10131680(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
