/* f_0x102d7ae6 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102d7ae6(Guest* g)
{
    double d4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->ecx = self;
    g->edx = in_edx;
    t1 = cow_stdcall(g, COW_IMG(0x102e7670u), 1, 1u);
    t2 = g->ecx;
    t3 = g->edx;
    d4 = (double)(float)(double)rdf32(sp0 + 8u);
    cow_thiscall(g, rd32(COW_IMG(0x103cc48cu)), t2, 2, arg1, cow_f2bits(d4));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d7ae6(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102d7ae6(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
