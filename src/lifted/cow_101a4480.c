/* f_0x101a4480 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101a4480(Guest* g)
{
    uint32_t eax;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd8(self + 0xcu) != 1u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0xcu);
        goto L_101a4496;
    }
    eax = (in_eax & 0xffffff00u) | rd8(self + 0xcu);
    wr8(self + 0xdu, (uint8_t)arg1);
    return 1u;
L_101a4496: ;
    if ((uint8_t)eax == 2u)
    {
        wr8(self + 0xeu, (uint8_t)arg1);
    }
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a4480(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a4480(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
