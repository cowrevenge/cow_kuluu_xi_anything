/* f_0x101ae3c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101ae3c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    wr32(self, COW_IMG(0x10337920u));
    eax = 0x20u;
    ecx = self + 0x2104u;
    edx = in_edx;
L_101ae3d1: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t1 = cow_thiscall(g, COW_IMG(0x101ade70u), ecx - 0x108u, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 1u)
    {
        eax = t1 - 1u;
        ecx = t2;
        edx = t3;
        goto L_101ae3d1;
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ae3c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101ae3c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
