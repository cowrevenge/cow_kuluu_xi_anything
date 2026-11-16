/* f_0x10024330 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_10024330(Guest* g)
{
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x10027120u), 3, arg4, arg2, arg1);
    t1 = g->ecx;
    t2 = g->edx;
    g->esp = sp0 - 0x14u;
    t3 = cow_cdecl(g, COW_IMG(0x10027530u), 2, arg4, arg4);
    d4 = cow_take_float(g);
    d5 = fr(g, fr(g, (double)rdf32(arg4) * (double)rdf32(COW_IMG(0x10329a08u))) + (double)rdf32(arg1));
    wrf32(arg4, (float)d5);
    d6 = fr(g, fr(g, (double)rdf32(arg4 + 4u) * (double)rdf32(COW_IMG(0x10329a08u))) + (double)rdf32(arg1 + 4u));
    wrf32(arg4 + 4u, (float)d6);
    d7 = fr(g, fr(g, (double)rdf32(arg4 + 8u) * (double)rdf32(COW_IMG(0x10329a08u))) + (double)rdf32(arg1 + 8u));
    wrf32(arg4 + 8u, (float)d7);
    if (!(d4 < (double)rdf32(COW_IMG(0x1032a42cu))))
    {
        x0 = d4;
        goto L_1002439c;
    }
    x0 = d4;
    d8 = (double)rdf32(sp0 + 0xcu);
    wrf32(arg5, (float)fr(g, d8 * d8));
    return;
L_1002439c: ;
    d9 = (double)rdf32(sp0 + 0xcu);
    wrf32(arg5, (float)fr(g, fr(g, d9 * d9) + x0));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10024330(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10024330(g);
    g->esp = sp0;
    rt_return(g, g->eax, 20u);
}
/* COW_ADAPTER END */
