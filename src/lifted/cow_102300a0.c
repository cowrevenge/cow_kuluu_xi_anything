/* f_0x102300a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_102300a0(Guest* g)
{
    uint32_t eax;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 0x68u) == 0u)
    {
        eax = rd32(self + 0x68u);
        goto L_102300b8;
    }
    eax = rd32(self + 0x68u);
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_102300b3;
    }
    eax = eax - 1u;
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_102300bd;
    }
    eax = eax - 1u;
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x10230090u), eax, self, in_edx);
L_102300b3: ;
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x10230050u), eax, self, in_edx);
L_102300b8: ;
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x1022fb30u), eax, self, in_edx);
L_102300bd: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102300a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102300a0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
