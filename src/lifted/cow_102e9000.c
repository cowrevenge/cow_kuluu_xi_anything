/* f_0x102e9000 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_102e9000(Guest* g)
{
    double d1;
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d15;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    double x1;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg3 == 2u)
    {
        d11 = fr(g, sqrt(fr(g, fr(g, (double)rdf32(arg2 + 8u) * (double)rdf32(COW_IMG(0x10329a08u))) + (double)rdf32(COW_IMG(0x10329a08u)))));
        d12 = (double)rdf32(COW_IMG(0x10329a08u));
        wrf32(arg1 + 8u, (float)d11);
        d13 = fr(g, d12 / d11);
        d14 = fr(g, d13 * (double)rdf32(arg2));
        wrf32(arg1, (float)d14);
        d15 = fr(g, d13 * (double)rdf32(arg2 + 4u));
        wrf32(arg1 + 4u, (float)d15);
    }
    else
    {
        if (arg3 == 3u) goto L_102e905d;
        if (arg3 != 4u) goto L_102e90a9;
        if (arg4 != 0u)
        {
            x1 = (double)rdf32(arg2 + 8u);
            x0 = (double)rdf32(COW_IMG(0x10329a08u));
            goto L_102e9041;
        }
        x1 = (double)rdf32(arg2 + 8u);
        x0 = (double)rdf32(COW_IMG(0x10329a08u));
        d1 = fr(g, x0 / fr(g, fr(g, x1 + (double)rdf32(COW_IMG(0x1032961cu))) * x0));
        d2 = fr(g, d1 * (double)rdf32(arg2));
        wrf32(arg1, (float)d2);
        d3 = fr(g, d1 * (double)rdf32(arg2 + 4u));
        wrf32(arg1 + 4u, (float)d3);
L_102e9073: ;
        t9 = rd32(arg2 + 8u);
        wr32(arg1 + 8u, t9);
    }
L_102e90a9: ;
    return;
L_102e9041: ;
    d4 = fr(g, x0 / fr(g, x0 - fr(g, x1 * x0)));
    d5 = fr(g, d4 * (double)rdf32(arg2));
    wrf32(arg1, (float)d5);
    d6 = fr(g, d4 * (double)rdf32(arg2 + 4u));
    wrf32(arg1 + 4u, (float)d6);
L_102e9053: ;
    d10 = (double)rdf32(arg2 + 8u);
    wrf32(arg1 + 8u, (float)-d10);
    goto L_102e90a9;
L_102e905d: ;
    d7 = (double)rdf32(arg2);
    wrf32(arg1, (float)d7);
    t8 = rd32(arg2 + 4u);
    wr32(arg1 + 4u, t8);
    if (arg4 != 0u) goto L_102e9053;
    goto L_102e9073;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e9000(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102e9000(g);
    g->esp = sp0;
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
