/* f_0x100b0510 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_100b0510(Guest* g)
{
    uint32_t eax;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd16(self + 0x244u) == 8u)
    {
        eax = (in_eax & 0xffff0000u) | rd16(self + 0x244u);
        goto L_100b0549;
    }
    eax = (in_eax & 0xffff0000u) | rd16(self + 0x244u);
    wr16(self + (uint16_t)eax * 2u + 0x246u, (uint16_t)arg2);
    wr16(self + 0x244u, (uint16_t)(rd16(self + 0x244u) + 1u));
    wr16(self + 0x256u, (uint16_t)arg1);
    return;
L_100b0549: ;
    g->esp = sp0 - 8u;
    cow_stdcall(g, COW_IMG(0x10017d30u), 0);
    wr8(self + 0x25au, 1u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b0510(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b0510(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
