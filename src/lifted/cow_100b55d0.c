/* f_0x100b55d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b55d0(Guest* g)
{
    uint32_t eax;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;

    if (rd8(COW_IMG(0x10488b00u)) != 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10488b00u));
        goto L_100b55e8;
    }
    wr8(COW_IMG(0x104886b8u), 1u);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 1u));
    return;
L_100b55e8: ;
    wr8(COW_IMG(0x104886b8u), 1u);
    wr8(COW_IMG(0x10485a70u), 1u);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 1u));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b55d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b55d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
