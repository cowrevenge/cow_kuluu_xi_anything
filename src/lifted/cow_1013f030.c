/* f_0x1013f030 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1013f030(Guest* g)
{
    uint32_t eax;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;

    if (rd16(self + 0x15eu) >= rd16(self + 0x15cu))
    {
        eax = (in_eax & 0xffff0000u) | rd16(self + 0x15eu);
        goto L_1013f054;
    }
    eax = (in_eax & 0xffff0000u) | rd16(self + 0x15eu);
    if ((uint16_t)eax == 0xffffu) goto L_1013f054;
    return ((uint16_t)eax << 5u & 0xffff0000u) | rd16(self + (uint16_t)eax * 0x20u + 0x1cu);
L_1013f054: ;
    return eax & 0xffff0000u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013f030(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1013f030(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
