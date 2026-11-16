/* f_0x100aecc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100aecc0(Guest* g)
{
    double d4;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->ecx = self;
    g->edx = in_edx;
    t1 = cow_call_regs(g, COW_IMG(0x10014cf0u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    d4 = cow_take_float(g);
    g->edx = t3;
    fpush(g, d4);
    t5 = cow_call_regs(g, COW_IMG(0x10311c6cu), t1, g->ecx, g->edx, 1, 0);
    t6 = g->edx;
    t7 = rd32(COW_IMG(0x104886f0u)) - t5;
    t8 = rd32(COW_IMG(0x104886f0u));
    wr32(COW_IMG(0x104886f0u), t7);
    if ((int32_t)(t8 - t5) >= 0) goto L_100aecdf;
    eax = t5;
    ecx = t7;
    edx = t6;
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x100aece0u), eax, ecx, edx);
    return;
L_100aecdf: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100aecc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100aecc0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
