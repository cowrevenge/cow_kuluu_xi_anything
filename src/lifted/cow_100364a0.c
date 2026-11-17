/* f_0x100364a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100364a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x100364e0u), in_eax, self, in_edx, 1, 0);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u) goto L_100364d2;
    eax = t1;
    edx = t2;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t3 = cow_call_regs(g, COW_IMG(0x100367c0u), eax, self, g->edx, 1, 0);
    t4 = g->ecx;
    t5 = g->edx;
    if ((uint8_t)t3 == 0u) goto L_100364d2;
    ecx = t4;
    edx = t5;
    t6 = rd32(self + 0x104u);
    g->eax = t6;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t7 = cow_cdecl(g, COW_IMG(0x10036360u), 1, t6);
    t8 = g->edx;
    if ((uint8_t)t7 != 0u) goto L_100364d2;
    eax = t7;
    edx = t8;
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10036420u), eax, self, edx);
    return;
L_100364d2: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100364a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100364a0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
