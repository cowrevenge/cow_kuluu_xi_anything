/* f_0x1013f5a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1013f5a0(Guest* g)
{
    uint32_t eax;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint32_t)(int16_t)arg1 == 5u) goto L_1013f5b4;
    if ((uint32_t)(int16_t)arg1 != 6u)
    {
        eax = (uint32_t)(int16_t)arg1 - 6u;
        goto L_1013f5ca;
    }
    wr8(self + 0x18u, 3u);
    return (uint32_t)(int16_t)arg1 - 6u;
L_1013f5b4: ;
    if ((uint32_t)(int16_t)arg2 == 1u) goto L_1013f5c6;
    if ((uint32_t)(int16_t)arg2 != 2u)
    {
        eax = (uint32_t)(int16_t)arg2 - 2u;
        goto L_1013f5ca;
    }
    wr8(self + 0x18u, 2u);
    return (uint32_t)(int16_t)arg2 - 2u;
L_1013f5c6: ;
    wr8(self + 0x18u, 1u);
    eax = (uint32_t)(int16_t)arg2 - 1u;
L_1013f5ca: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013f5a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1013f5a0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
