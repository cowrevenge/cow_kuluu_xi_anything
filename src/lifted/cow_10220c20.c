/* f_0x10220c20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=0 */
void cow_fn_10220c20(Guest* g)
{
    double d7;
    double d8;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        x0 = cow_bits2f(0u);
    }
    else
    {
        ecx = t2;
        edx = t3;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t4 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
        t5 = g->edx;
        t6 = cow_stdcall(g, COW_IMG(0x1001e4d0u), 0);
        d7 = cow_take_float(g);
        eax = t6;
        x0 = d7;
    }
    d8 = fr(g, (double)rdf32(COW_IMG(0x10331360u)) - x0);
    if ((cow_fsw(g, d8, (double)rdf32(COW_IMG(0x1032df98u)), 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d8, (double)rdf32(COW_IMG(0x1032df98u)), 1u) & 0x4100u;
        x0 = d8;
        goto L_10220c61;
    }
    x0 = d8;
    fpush(g, fr(g, x0 - (double)rdf32(COW_IMG(0x1032df90u))));
    return;
L_10220c61: ;
    if (x0 < (double)rdf32(COW_IMG(0x1033bf74u)))
    {
        x0 = fr(g, x0 + (double)rdf32(COW_IMG(0x1032df90u)));
    }
    fpush(g, x0);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10220c20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10220c20(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
