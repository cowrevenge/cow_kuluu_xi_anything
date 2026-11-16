/* f_0x1017b4b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1017b4b0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    const uint32_t self = g->ecx;

    eax = self + 0x355c8u;
    esi = 0x3e7u;
L_1017b4bc: ;
    wr32(eax + 4u, 0u);
    wr32(eax, eax + 8u);
    if (esi != 1u)
    {
        eax = eax + 8u;
        esi = esi - 1u;
        goto L_1017b4bc;
    }
    edx = eax + 8u;
    eax = eax + 8u;
    wr32(self + 0x37504u, 0xffffffffu);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1017b4b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1017b4b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
