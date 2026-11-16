/* f_0x101c9270 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101c9270(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int16_t)rd16(arg1) < 0)
    {
        edx = 0u;
        goto L_101c9299;
    }
    eax = (in_eax & 0xffff0000u) | rd16(arg1);
    ecx = arg1;
    edx = 0u;
L_101c9287: ;
    if ((uint16_t)eax == (uint16_t)arg2) goto L_101c929e;
    if ((int16_t)rd16(ecx + 0xcu) >= 0)
    {
        eax = (eax & 0xffff0000u) | rd16(ecx + 0xcu);
        ecx = ecx + 0xcu;
        edx = edx + 1u;
        goto L_101c9287;
    }
    edx = edx + 1u;
L_101c9299: ;
    g->edx = edx;
    return 0u;
L_101c929e: ;
    g->edx = edx;
    return arg1 + edx * 0xcu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c9270(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c9270(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
