/* f_0x102b7470 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_102b7470(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    ecx = 0u;
L_102b747b: ;
    if (rd32(arg1 + rd32(arg2 + ecx * 4u) * 4u) == 4u)
    {
        eax = rd32(arg1 + rd32(arg2 + ecx * 4u) * 4u);
        goto L_102b7495;
    }
    eax = rd32(arg1 + rd32(arg2 + ecx * 4u) * 4u);
    if (eax == 5u) goto L_102b7495;
    if ((int32_t)(ecx + 1u) < 4)
    {
        ecx = ecx + 1u;
        goto L_102b747b;
    }
    return eax & 0xffffff00u;
L_102b7495: ;
    wr32(arg3, ecx);
    return (eax & 0xffffff00u) | (uint8_t)(eax | 0xffu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b7470(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102b7470(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
