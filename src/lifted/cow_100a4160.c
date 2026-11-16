/* f_0x100a4160 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_100a4160(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;

    wr16(self + 0x11cu, (uint16_t)(rd16(self + 0x11cu) - 1u));
    t1 = rd16(self + 0x11cu);
    wr16(self + 0x11eu, 0x708u);
    if ((int16_t)t1 >= 0)
    {
        eax = (in_eax & 0xffff0000u) | t1;
    }
    else
    {
        eax = (in_eax & 0xffff0000u) | t1;
        wr16(self + 0x11cu, 0u);
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a4160(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a4160(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
