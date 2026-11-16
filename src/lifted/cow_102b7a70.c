/* f_0x102b7a70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102b7a70(Guest* g)
{
    double d10;
    double d13;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t t1;
    uint32_t t11;
    uint32_t t12;
    uint32_t t14;
    uint32_t t15;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    wr32(sp0 - 0x18u, sp0 - 0xcu);
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x10274660u), 1, sp0 - 0xcu);
    t1 = g->edx;
    d2 = (double)(float)fr(g, fr(g, fr(g, (double)rdf32(arg1) - (double)rdf32(arg1 + 0xcu)) * fr(g, (double)rdf32(arg1 + 0x10u) + (double)rdf32(arg1 + 4u))) + (double)rdf32(sp0 - 4u));
    wrf32(sp0 - 4u, (float)d2);
    d3 = fr(g, fr(g, fr(g, (double)rdf32(arg1 + 0x10u) - (double)rdf32(arg1 + 0x28u)) * fr(g, (double)rdf32(arg1 + 0x2cu) + (double)rdf32(arg1 + 0x14u))) + fr(g, fr(g, fr(g, (double)rdf32(arg1 + 4u) - (double)rdf32(arg1 + 0x10u)) * fr(g, (double)rdf32(arg1 + 8u) + (double)rdf32(arg1 + 0x14u))) + (double)rdf32(sp0 - 0xcu)));
    wrf32(sp0 - 0xcu, (float)(double)(float)d3);
    d4 = fr(g, fr(g, fr(g, (double)rdf32(arg1 + 0x24u) + (double)rdf32(arg1 + 0xcu)) * fr(g, (double)rdf32(arg1 + 0x14u) - (double)rdf32(arg1 + 0x2cu))) + fr(g, fr(g, fr(g, (double)rdf32(arg1 + 8u) - (double)rdf32(arg1 + 0x14u)) * fr(g, (double)rdf32(arg1) + (double)rdf32(arg1 + 0xcu))) + (double)rdf32(sp0 - 8u)));
    d5 = (double)(float)fr(g, fr(g, fr(g, (double)rdf32(arg1 + 0x20u) + (double)rdf32(arg1 + 0x2cu)) * fr(g, (double)rdf32(arg1 + 0x28u) - (double)rdf32(arg1 + 0x1cu))) + (double)(float)d3);
    wrf32(sp0 - 0xcu, (float)d5);
    d6 = (double)(float)fr(g, fr(g, fr(g, (double)rdf32(arg1 + 0x24u) + (double)rdf32(arg1 + 0x18u)) * fr(g, (double)rdf32(arg1 + 0x2cu) - (double)rdf32(arg1 + 0x20u))) + d4);
    wrf32(sp0 - 8u, (float)d6);
    wr32(sp0 - 0x1cu, sp0 - 0xcu);
    d7 = fr(g, fr(g, fr(g, (double)rdf32(arg1 + 0x24u) - (double)rdf32(arg1 + 0x18u)) * fr(g, (double)rdf32(arg1 + 0x28u) + (double)rdf32(arg1 + 0x1cu))) + fr(g, fr(g, fr(g, (double)rdf32(arg1 + 0xcu) - (double)rdf32(arg1 + 0x24u)) * fr(g, (double)rdf32(arg1 + 0x28u) + (double)rdf32(arg1 + 0x10u))) + d2));
    d8 = (double)(float)fr(g, fr(g, fr(g, (double)rdf32(arg1 + 0x1cu) - (double)rdf32(arg1 + 4u)) * fr(g, (double)rdf32(arg1 + 0x20u) + (double)rdf32(arg1 + 8u))) + d5);
    wrf32(sp0 - 0xcu, (float)d8);
    d9 = (double)(float)fr(g, fr(g, fr(g, (double)rdf32(arg1) + (double)rdf32(arg1 + 0x18u)) * fr(g, (double)rdf32(arg1 + 0x20u) - (double)rdf32(arg1 + 8u))) + d6);
    wrf32(sp0 - 8u, (float)d9);
    d10 = (double)(float)fr(g, fr(g, fr(g, (double)rdf32(arg1 + 0x1cu) + (double)rdf32(arg1 + 4u)) * fr(g, (double)rdf32(arg1 + 0x18u) - (double)rdf32(arg1))) + d7);
    wrf32(sp0 - 4u, (float)d10);
    g->eax = arg1;
    g->ecx = sp0 - 0xcu;
    g->esp = sp0 - 0x18u;
    t11 = cow_cdecl(g, COW_IMG(0x10274910u), 1, sp0 - 0xcu);
    t12 = g->ecx;
    d13 = cow_take_float(g);
    eax = t11;
    ecx = t12;
    esi = arg2;
    edi = 4u;
L_102b7b8b: ;
    wr32(sp0 - 0x18u, sp0 - 0xcu);
    wr32(sp0 - 0x1cu, esi);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x14u;
    t14 = cow_cdecl(g, COW_IMG(0x10274670u), 2, esi, sp0 - 0xcu);
    t15 = g->ecx;
    if (edi != 1u)
    {
        eax = t14;
        ecx = t15;
        esi = esi + 0xcu;
        edi = edi - 1u;
        goto L_102b7b8b;
    }
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b7a70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102b7a70(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
