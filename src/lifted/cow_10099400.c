/* f_0x10099400 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10099400(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    const uint32_t in_edx = g->edx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    eax = COW_IMG(0x104856a4u);
    ecx = arg3 + 0x80u;
    edx = in_edx;
L_1009940f: ;
    t1 = rd16(ecx);
    wr16(eax, (uint16_t)t1);
    if ((int32_t)(eax + 2u) < (int32_t)COW_IMG(0x10485724u))
    {
        eax = eax + 2u;
        ecx = ecx + 2u;
        edx = (edx & 0xffff0000u) | t1;
        goto L_1009940f;
    }
    eax = eax + 2u;
    edx = (edx & 0xffff0000u) | t1;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10099400(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10099400(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
