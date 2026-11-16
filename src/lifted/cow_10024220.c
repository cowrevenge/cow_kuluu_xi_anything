/* f_0x10024220 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
void cow_fn_10024220(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d15;
    double d16;
    double d17;
    double d18;
    double d19;
    double d20;
    double d5;
    double d7;
    double d8;
    double d9;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t6;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 76u);

    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    t1 = rd32(sp0 + 8u);
    wr32(sp0 - 0x24u, t1);
    wr32(sp0 - 0x28u, arg3);
    wr32(sp0 - 0x2cu, sp0 - 0x18u);
    g->ecx = sp0 - 0x18u;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x18u, arg3, t1);
    t2 = g->ecx;
    wr32(sp0 - 0x30u, arg1);
    wr32(sp0 - 0x34u, arg4);
    wr32(sp0 - 0x38u, sp0 - 0xcu);
    g->eax = sp0 - 0xcu;
    g->esp = sp0 - 0x2cu;
    t3 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0xcu, arg4, arg1);
    wr32(sp0 - 0x3cu, sp0 - 0x18u);
    wr32(sp0 - 0x40u, sp0 - 0x18u);
    g->edx = sp0 - 0x18u;
    g->esp = sp0 - 0x38u;
    cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x18u, sp0 - 0x18u);
    t4 = g->edx;
    d5 = cow_take_float(g);
    wrf32(sp0 + 8u, (float)d5);
    wr32(sp0 - 0x44u, sp0 - 0xcu);
    wr32(sp0 - 0x48u, sp0 - 0xcu);
    g->eax = sp0 - 0xcu;
    g->esp = sp0 - 0x40u;
    t6 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0xcu, sp0 - 0xcu);
    d7 = cow_take_float(g);
    d8 = (double)rdf32(sp0 + 8u);
    if ((cow_fsw(g, d8, d7, 1u) & 0x4100u) != 0u)
    {
        x0 = d7;
        goto L_100242d7;
    }
    esi = t1;
    x0 = d7;
    d9 = (double)(float)fr(g, (double)rdf32(sp0 - 0x10u) * (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0x10u, (float)d9);
    d10 = fr(g, fr(g, (double)rdf32(sp0 - 0x18u) * (double)rdf32(COW_IMG(0x10329a08u))) + (double)rdf32(esi));
    d11 = fr(g, (double)rdf32(sp0 - 0x14u) * (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(arg5, (float)d10);
    d12 = fr(g, d11 + (double)rdf32(esi + 4u));
    wrf32(arg5 + 4u, (float)d12);
    d13 = fr(g, d9 + (double)rdf32(esi + 8u));
    wrf32(arg5 + 8u, (float)d13);
    d14 = fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(arg6, (float)d14);
    return;
L_100242d7: ;
    d15 = (double)(float)fr(g, (double)rdf32(sp0 - 4u) * (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 4u, (float)d15);
    d16 = fr(g, fr(g, (double)rdf32(sp0 - 0xcu) * (double)rdf32(COW_IMG(0x10329a08u))) + (double)rdf32(arg1));
    d17 = fr(g, (double)rdf32(sp0 - 8u) * (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(arg5, (float)d16);
    d18 = fr(g, d17 + (double)rdf32(arg1 + 4u));
    wrf32(arg5 + 4u, (float)d18);
    d19 = fr(g, d15 + (double)rdf32(arg1 + 8u));
    wrf32(arg5 + 8u, (float)d19);
    d20 = fr(g, x0 * (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(arg6, (float)d20);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10024220(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10024220(g);
    g->esp = sp0;
    rt_return(g, g->eax, 24u);
}
/* COW_ADAPTER END */
