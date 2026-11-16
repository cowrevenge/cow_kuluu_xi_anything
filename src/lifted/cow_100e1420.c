/* f_0x100e1420 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_100e1420(Guest* g)
{
    uint32_t eax;
    uint32_t edx;

    eax = COW_IMG(0x104b0f78u);
    edx = 2u;
L_100e142c: ;
    wr8(eax - 0x7b0u, 0u);
    wr32(eax - 0x7b4u, 0u);
    wr32(eax - 0x7a0u, 0u);
    wr32(eax - 0x79cu, 0u);
    wr16(eax - 0x798u, 0u);
    wr8(eax - 0x7afu, 0u);
    wr16(eax - 0x7aeu, 0u);
    wr16(eax - 4u, 0u);
    wr16(eax - 2u, 2u);
    wr32(eax, 0u);
    if (edx != 1u)
    {
        eax = eax + 0x7d4u;
        edx = edx - 1u;
        goto L_100e142c;
    }
    eax = eax + 0x7d4u;
    edx = edx - 1u;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e1420(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e1420(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
