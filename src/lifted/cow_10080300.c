/* f_0x10080300 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10080300(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    ecx = 0u;
    edx = in_edx;
L_10080309: ;
    if (rd16(COW_IMG(0x1032cbb0u) + ecx * 4u) == 0xffffu)
    {
        eax = 0u;
        goto L_1008033c;
    }
    edx = (edx & 0xffff0000u) | rd16(COW_IMG(0x1032cbb0u) + ecx * 4u);
    if (rd16(COW_IMG(0x1032cbb2u) + ecx * 4u) == 0xffffu)
    {
        eax = 0u;
        goto L_1008033c;
    }
    if (arg1 == (uint32_t)(int16_t)edx) goto L_10080334;
    edx = (uint32_t)(int16_t)edx;
    if ((int32_t)(ecx + 1u) < 228)
    {
        ecx = ecx + 1u;
        goto L_10080309;
    }
    return 0u;
L_10080334: ;
    eax = (uint32_t)(int16_t)rd16(COW_IMG(0x1032cbb2u) + ecx * 4u);
L_1008033c: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10080300(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10080300(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
