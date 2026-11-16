/* f_0x10271bf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10271bf0(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if ((int32_t)rd32(sp0 + 4u) < 0)
    {
        eax = rd32(sp0 + 4u);
        goto L_10271c0c;
    }
    eax = rd32(sp0 + 4u);
    t1 = rd32(sp0 + 8u);
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x1028ec10u), 3, COW_IMG(0x1099b13cu), eax, t1);
    return;
L_10271c0c: ;
    t2 = rd32(sp0 + 8u);
    wr32(sp0 + 4u, COW_IMG(0x1099b13cu));
    wr32(sp0 + 8u, t2);
    g->esp = sp0;
    g->edx = t2;
    cow_tailcall(g, COW_IMG(0x1028ec00u), eax, self, t2);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10271bf0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10271bf0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
