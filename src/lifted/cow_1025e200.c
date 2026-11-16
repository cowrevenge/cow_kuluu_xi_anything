/* f_0x1025e200 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=0 */
uint32_t cow_fn_1025e200(Guest* g)
{
    double d4;
    double d7;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t5;
    uint32_t t6;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->ecx = self;
    g->edx = in_edx;
    t1 = cow_call_regs(g, COW_IMG(0x1025e190u), in_eax, g->ecx, g->edx, 1, 1, self);
    t2 = g->ecx;
    t3 = g->edx;
    d4 = cow_take_float(g);
    g->edx = t3;
    t5 = cow_call_regs(g, COW_IMG(0x1025e120u), t1, g->ecx, g->edx, 1, 1, cow_f2bits((double)(float)d4));
    t6 = g->edx;
    d7 = cow_take_float(g);
    g->edx = t6;
    fpush(g, fr(g, (double)(float)d4 - d7));
    return t5;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025e200(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1025e200(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
