/* f_0x1003d0b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=2 */
void cow_fn_1003d0b0(Guest* g)
{
    double d2;
    uint32_t t1;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 - 1u > 3u) goto L_1003d141;
    t1 = rd32(COW_IMG(0x1003d148u) + arg2 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x1003d0c5u: goto L_1003d0c5;
    case 0x1003d0d2u: goto L_1003d0d2;
    case 0x1003d0e5u: goto L_1003d0e5;
    case 0x1003d11cu: goto L_1003d11c;
    default: rt_fatal(g, COW_IMG(0x1003d0beu), "switch");
    }
    return;
L_1003d0c5: ;
    fpush(g, fr(g, sin(fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(COW_IMG(0x1032ab98u))))));
    return;
L_1003d0d2: ;
    fpush(g, fr(g, rdf64(COW_IMG(0x1032a100u)) - fr(g, cos(fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(COW_IMG(0x1032ab98u)))))));
    return;
L_1003d0e5: ;
    d2 = fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(COW_IMG(0x1032a3b0u)));
    if ((cow_fsw(g, d2, (double)rdf32(COW_IMG(0x1032a3b8u)), 1u) & 0x4100u) != 0u)
    {
        x0 = fr(g, d2 * (double)rdf32(COW_IMG(0x10329a08u)));
        goto L_1003d113;
    }
    x0 = fr(g, d2 * (double)rdf32(COW_IMG(0x10329a08u)));
    fpush(g, fr(g, rdf64(COW_IMG(0x1032a100u)) - fr(g, fr(g, sin(x0)) * rdf64(COW_IMG(0x1032ab90u)))));
    return;
L_1003d113: ;
    fpush(g, fr(g, fr(g, sin(x0)) * (double)rdf32(COW_IMG(0x10329a08u))));
    return;
L_1003d11c: ;
    fpush(g, fr(g, rdf64(COW_IMG(0x1032a100u)) - fr(g, fr(g, fr(g, cos(fr(g, fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(COW_IMG(0x1032a3b0u))) * (double)rdf32(COW_IMG(0x10329a08u))))) * rdf64(COW_IMG(0x1032ab90u))) + rdf64(COW_IMG(0x1032ab90u)))));
    return;
L_1003d141: ;
    fpush(g, (double)rdf32(sp0 + 4u));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1003d0b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1003d0b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
