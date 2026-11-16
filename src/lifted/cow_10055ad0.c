/* f_0x10055ad0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=2 */
void cow_fn_10055ad0(Guest* g)
{
    double d1;
    double d2;
    double d4;
    uint32_t t3;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    d1 = fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(COW_IMG(0x1032a3b0u)));
    d2 = (double)rdf32(sp0 + 4u);
    wrf32(sp0 + 4u, (float)d1);
    if (arg2 - 1u > 3u)
    {
        x0 = d2;
        goto L_10055b78;
    }
    x0 = d2;
    t3 = rd32(COW_IMG(0x10055b7cu) + arg2 * 4u - 4u);
    switch (t3 - RD)
    {
    case 0x10055af7u: goto L_10055af7;
    case 0x10055b06u: goto L_10055b06;
    case 0x10055b1bu: goto L_10055b1b;
    case 0x10055b58u: goto L_10055b58;
    default: rt_fatal(g, COW_IMG(0x10055af0u), "switch");
    }
    return;
L_10055af7: ;
    fpush(g, fr(g, sin(fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(COW_IMG(0x10329ce4u))))));
    return;
L_10055b06: ;
    fpush(g, fr(g, rdf64(COW_IMG(0x1032a100u)) - fr(g, cos(fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(COW_IMG(0x10329ce4u)))))));
    return;
L_10055b1b: ;
    d4 = (double)rdf32(sp0 + 4u);
    if ((cow_fsw(g, d4, (double)rdf32(COW_IMG(0x10329a08u)), 1u) & 0x4100u) != 0u)
    {
        x0 = fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(COW_IMG(0x10329a08u)));
        goto L_10055b4f;
    }
    x0 = fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(COW_IMG(0x10329a08u)));
    fpush(g, fr(g, fr(g, rdf64(COW_IMG(0x1032ab90u)) - fr(g, fr(g, sin(x0)) * rdf64(COW_IMG(0x1032ab90u)))) + (double)rdf32(COW_IMG(0x10329a08u))));
    return;
L_10055b4f: ;
    fpush(g, fr(g, fr(g, sin(x0)) * (double)rdf32(COW_IMG(0x10329a08u))));
    return;
L_10055b58: ;
    x0 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, fr(g, fr(g, cos(fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(COW_IMG(0x10329a08u))))) * rdf64(COW_IMG(0x1032ab90u))) + rdf64(COW_IMG(0x1032ab90u))));
L_10055b78: ;
    fpush(g, x0);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10055ad0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10055ad0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
