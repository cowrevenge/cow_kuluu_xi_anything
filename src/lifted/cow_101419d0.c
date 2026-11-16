/* f_0x101419d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101419d0(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint32_t)(int16_t)arg1 == 5u) goto L_101419f7;
    if ((uint32_t)(int16_t)arg1 != 6u)
    {
        eax = (uint32_t)(int16_t)arg1 - 6u;
        goto L_10141a10;
    }
    wr8(rd32(COW_IMG(0x1062193cu)) + 0x59u, 1u);
    t1 = rd32(COW_IMG(0x10621940u));
    wr8(t1 + 0x59u, 1u);
    g->edx = t1;
    return 1u;
L_101419f7: ;
    if ((uint16_t)arg2 != 1u) goto L_10141a09;
    wr32(self + 0x24u, 1u);
    return 1u;
L_10141a09: ;
    wr32(self + 0x24u, 2u);
    eax = 1u;
L_10141a10: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101419d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101419d0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
