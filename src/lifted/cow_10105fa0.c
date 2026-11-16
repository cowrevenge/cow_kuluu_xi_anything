/* f_0x10105fa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10105fa0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int32_t)rd16(arg1 + 0x20u) <= 0) goto L_10105fc9;
    ecx = rd16(arg1 + 0x20u);
    eax = 0u;
    edx = in_edx;
L_10105fb9: ;
    if ((arg2 & 0x1fu) == (rd8(arg1 + eax + 4u) & 0x1fu)) goto L_10105fce;
    edx = rd8(arg1 + eax + 4u) & 0x1fu;
    if ((int32_t)(eax + 1u) < (int32_t)ecx)
    {
        eax = eax + 1u;
        goto L_10105fb9;
    }
L_10105fc9: ;
    return 0u;
L_10105fce: ;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10105fa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10105fa0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
