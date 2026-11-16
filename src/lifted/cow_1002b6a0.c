/* f_0x1002b6a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1002b6a0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0xc8u);
    t2 = g->edx;
    if (t1 == 0u) goto L_1002b6c1;
    eax = t1;
    edx = t2;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t3 = cow_thiscall(g, COW_IMG(0x10029d30u), eax, 0);
    if (t3 != 0u)
    {
        eax = t3;
        edx = t3;
        goto L_1002b6c5;
    }
L_1002b6c1: ;
    return 0u;
L_1002b6c5: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x1002b630u), self, 1, edx);
    t4 = g->edx;
    return t4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1002b6a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1002b6a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
