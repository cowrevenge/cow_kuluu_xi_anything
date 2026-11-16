/* f_0x1006ce40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1006ce40(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    const uint32_t self = g->ecx;

    wr32(self + 0xa90u, 0u);
    eax = self + 0xa10u;
    ecx = self + 0x10u;
    edx = 0x20u;
L_1006ce58: ;
    wr32(eax, ecx);
    if (edx != 1u)
    {
        eax = eax + 4u;
        ecx = ecx + 0x40u;
        edx = edx - 1u;
        goto L_1006ce58;
    }
    eax = eax + 4u;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006ce40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1006ce40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
