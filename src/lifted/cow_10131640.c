/* f_0x10131640 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10131640(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if ((uint8_t)rd32(sp0 + 4u) == 0u) goto L_1013166c;
    eax = (uint8_t)rd32(sp0 + 4u);
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_10131675;
    }
    t1 = rd32(COW_IMG(0x1057876cu));
    wr32(sp0 + 4u, 1u);
    t2 = rd8(t1 + 0x74u);
    wr8(t1 + 0x74u, (uint8_t)(t2 | 1u));
    g->esp = sp0;
    g->edx = (in_edx & 0xffffff00u) | t2 | 1u;
    return cow_tailcall(g, rd32(rd32(self) + 0x4cu), rd32(self), self, (in_edx & 0xffffff00u) | t2 | 1u);
L_1013166c: ;
    t3 = rd32(COW_IMG(0x1057876cu));
    wr8(t3 + 0x74u, rd8(t3 + 0x74u) & 0xfeu);
    eax = t3;
L_10131675: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10131640(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10131640(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
