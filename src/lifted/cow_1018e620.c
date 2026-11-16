/* f_0x1018e620 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1018e620(Guest* g)
{
    uint32_t edx;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)arg1 < 0)
    {
        edx = in_edx;
        goto L_1018e654;
    }
    if ((int32_t)arg1 >= (int32_t)rd8(self + 0xc8u))
    {
        edx = rd8(self + 0xc8u);
        goto L_1018e654;
    }
    if ((int16_t)rd16(arg1 * 2u + self) < 0)
    {
        edx = (uint32_t)(int16_t)rd16(arg1 * 2u + self);
        goto L_1018e654;
    }
    edx = (uint32_t)(int16_t)rd16(arg1 * 2u + self);
    if ((int32_t)edx >= (int32_t)rd16(self + 0xd8u)) goto L_1018e654;
    g->edx = edx;
    return edx + rd32(self + 0xccu);
L_1018e654: ;
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018e620(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1018e620(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
