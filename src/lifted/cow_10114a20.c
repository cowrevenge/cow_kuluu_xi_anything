/* f_0x10114a20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10114a20(Guest* g)
{
    uint32_t ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x104e1b6cu)) == 0u) goto L_10114a5c;
    ecx = rd32(COW_IMG(0x104e1b6cu));
    if ((int16_t)arg1 < 0) goto L_10114a55;
    if ((uint16_t)arg1 == rd16(ecx + 0x230u)) goto L_10114a55;
    if ((uint16_t)arg1 == (((ecx & 0xffff0000u) | rd16(ecx + 0x232u)) + 1u & 7u)) goto L_10114a55;
    return (uint32_t)(int16_t)((uint8_t)arg1 - 1u & 7u);
L_10114a55: ;
    return 0xffffffffu;
L_10114a5c: ;
    return 0xffffffffu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10114a20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10114a20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
