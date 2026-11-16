/* f_0x10035ec0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10035ec0(Guest* g)
{
    double d5;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    t1 = rd32(sp0 + 4u);
    wr32(COW_IMG(0x103516fcu), t1);
    g->eax = t1;
    g->ecx = self;
    g->edx = in_edx;
    t2 = cow_cdecl(g, COW_IMG(0x10035fb0u), 1, 0x3f800000u);
    t3 = g->ecx;
    t4 = g->edx;
    d5 = cow_take_float(g);
    g->ecx = t3;
    g->edx = t4;
    g->esp = sp0 - 4u;
    t6 = cow_cdecl(g, COW_IMG(0x10036050u), 1, 0x3f800000u);
    t7 = g->ecx;
    t8 = g->edx;
    g->ecx = t7;
    g->edx = t8;
    g->esp = sp0 - 8u;
    t9 = cow_cdecl(g, COW_IMG(0x100360a0u), 1, 0x3f800000u);
    t10 = g->ecx;
    t11 = g->edx;
    wr32(sp0 + 4u, 0x3f800000u);
    g->esp = sp0;
    g->edx = t11;
    fpush(g, d5);
    cow_tailcall(g, COW_IMG(0x100360f0u), t9, t10, t11);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10035ec0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10035ec0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
