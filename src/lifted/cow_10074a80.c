/* f_0x10074a80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10074a80(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;

    if (rd16(self + 0x22u) == 0u)
    {
        eax = in_eax;
        edx = self;
        goto L_10074a97;
    }
    eax = in_eax;
    edx = self;
L_10074a89: ;
    g->esp = sp0;
    t1 = cow_call_regs(g, COW_IMG(0x10074a50u), eax, edx, edx, 1, 0);
    t2 = g->edx;
    if (rd16(t2 + 0x22u) != 0u)
    {
        eax = t1;
        edx = t2;
        goto L_10074a89;
    }
    eax = t1;
    edx = t2;
L_10074a97: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10074a80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10074a80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
