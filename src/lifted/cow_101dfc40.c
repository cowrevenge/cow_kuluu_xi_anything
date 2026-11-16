/* f_0x101dfc40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101dfc40(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;

    if (rd16(sp0 + 4u) != 5u) goto L_101dfc79;
    if ((int16_t)rd16(sp0 + 8u) < 15)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 8u);
    }
    else
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 8u);
        eax = eax + 1u;
    }
    t1 = rd32(COW_IMG(0x106634a8u));
    wr32(sp0 + 8u, 1u);
    wr32(t1 + 0x14u, eax);
    t2 = rd32(self + 8u);
    wr32(sp0 + 4u, t2);
    g->esp = sp0;
    g->edx = t1;
    return cow_tailcall(g, COW_IMG(0x1015e790u), t2, COW_IMG(0x10621838u), t1);
L_101dfc79: ;
    return in_eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101dfc40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101dfc40(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
