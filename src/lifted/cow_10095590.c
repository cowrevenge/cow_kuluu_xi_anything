/* f_0x10095590 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10095590(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;

    eax = COW_IMG(0x1047d6a8u);
L_10095595: ;
    t1 = rd32(eax) & 0xfffffffbu;
    wr32(eax, t1);
    wr32(eax, t1 & 0xfffffff7u);
    wr32(eax, t1 & 0xffffffc7u);
    wr32(eax, t1 & 0xffffff87u);
    t2 = (t1 & 0xffffff00u) | (t1 & 7u);
    wr32(eax, t2);
    wr32(eax, t2 & 0xfffffffeu);
    wr32(eax, t2 & 0xfffffffcu);
    if ((int32_t)(eax + 4u) < (int32_t)COW_IMG(0x1047faacu))
    {
        eax = eax + 4u;
        goto L_10095595;
    }
    eax = eax + 4u;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10095590(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10095590(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
