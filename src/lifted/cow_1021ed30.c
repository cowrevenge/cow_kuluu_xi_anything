/* f_0x1021ed30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1021ed30(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 1, 0x3cu);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        goto L_1021ed4b;
    }
    eax = t1;
    edx = t2;
    g->eax = eax;
    g->esp = sp0;
    t3 = cow_thiscall(g, COW_IMG(0x1021eeb0u), eax, 0);
    wr32(COW_IMG(0x10666e84u), t3);
    return t3;
L_1021ed4b: ;
    wr32(COW_IMG(0x10666e84u), 0u);
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1021ed30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1021ed30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
