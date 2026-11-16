/* f_0x100df460 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_100df460(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    const uint32_t in_eax = g->eax;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg2 < 0x800u) goto L_100df4a1;
    if (arg4 < 0x900u) goto L_100df4a1;
    eax = 0u;
    ecx = arg3 + 5u;
L_100df482: ;
    t1 = rd32(ecx - 4u);
    wr32(arg1 + eax * 4u, t1);
    wr32(arg1 + eax * 4u + 0x400u, rd32(ecx));
    if (eax + 1u < 0x100u)
    {
        eax = eax + 1u;
        ecx = ecx + 9u;
        goto L_100df482;
    }
    eax = eax + 1u;
    g->edx = arg1;
    return eax & 0xffffff00u;
L_100df4a1: ;
    return (in_eax & 0xffffff00u) | (uint8_t)(in_eax | 0xffu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100df460(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100df460(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
