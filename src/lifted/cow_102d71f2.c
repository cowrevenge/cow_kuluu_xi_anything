/* f_0x102d71f2 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102d71f2(Guest* g)
{
    double d1;
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d15;
    double d16;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 84u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x48u, in_esi);
    if (arg1 == arg2) goto L_102d720c;
    if (arg1 != arg3)
    {
        esi = arg1;
        goto L_102d720f;
    }
L_102d720c: ;
    esi = sp0 - 0x44u;
L_102d720f: ;
    d1 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0xcu) * (double)rdf32(arg3 + 0x30u)) + fr(g, (double)rdf32(arg2) * (double)rdf32(arg3))) + fr(g, (double)rdf32(arg2 + 8u) * (double)rdf32(arg3 + 0x20u))) + fr(g, (double)rdf32(arg3 + 0x10u) * (double)rdf32(arg2 + 4u)));
    wrf32(esi, (float)d1);
    d2 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0x10u) * (double)rdf32(arg3)) + fr(g, (double)rdf32(arg3 + 0x30u) * (double)rdf32(arg2 + 0x1cu))) + fr(g, (double)rdf32(arg3 + 0x20u) * (double)rdf32(arg2 + 0x18u))) + fr(g, (double)rdf32(arg3 + 0x10u) * (double)rdf32(arg2 + 0x14u)));
    wrf32(esi + 4u, (float)d2);
    d3 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0x28u) * (double)rdf32(arg3 + 0x20u)) + fr(g, (double)rdf32(arg2 + 0x24u) * (double)rdf32(arg3 + 0x10u))) + fr(g, (double)rdf32(arg3 + 0x30u) * (double)rdf32(arg2 + 0x2cu))) + fr(g, (double)rdf32(arg2 + 0x20u) * (double)rdf32(arg3)));
    wrf32(esi + 8u, (float)d3);
    d4 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0x34u) * (double)rdf32(arg3 + 0x10u)) + fr(g, (double)rdf32(arg2 + 0x3cu) * (double)rdf32(arg3 + 0x30u))) + fr(g, (double)rdf32(arg3) * (double)rdf32(arg2 + 0x30u))) + fr(g, (double)rdf32(arg2 + 0x38u) * (double)rdf32(arg3 + 0x20u)));
    wrf32(esi + 0xcu, (float)d4);
    d5 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg3 + 0x24u) * (double)rdf32(arg2 + 8u)) + fr(g, (double)rdf32(arg3 + 4u) * (double)rdf32(arg2))) + fr(g, (double)rdf32(arg3 + 0x34u) * (double)rdf32(arg2 + 0xcu))) + fr(g, (double)rdf32(arg2 + 4u) * (double)rdf32(arg3 + 0x14u)));
    wrf32(esi + 0x10u, (float)d5);
    d6 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg3 + 0x34u) * (double)rdf32(arg2 + 0x1cu)) + fr(g, (double)rdf32(arg3 + 0x24u) * (double)rdf32(arg2 + 0x18u))) + fr(g, (double)rdf32(arg2 + 0x14u) * (double)rdf32(arg3 + 0x14u))) + fr(g, (double)rdf32(arg2 + 0x10u) * (double)rdf32(arg3 + 4u)));
    wrf32(esi + 0x14u, (float)d6);
    d7 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0x24u) * (double)rdf32(arg3 + 0x14u)) + fr(g, (double)rdf32(arg3 + 0x34u) * (double)rdf32(arg2 + 0x2cu))) + fr(g, (double)rdf32(arg3 + 0x24u) * (double)rdf32(arg2 + 0x28u))) + fr(g, (double)rdf32(arg2 + 0x20u) * (double)rdf32(arg3 + 4u)));
    wrf32(esi + 0x18u, (float)d7);
    d8 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0x34u) * (double)rdf32(arg3 + 0x14u)) + fr(g, (double)rdf32(arg3 + 0x34u) * (double)rdf32(arg2 + 0x3cu))) + fr(g, (double)rdf32(arg3 + 0x24u) * (double)rdf32(arg2 + 0x38u))) + fr(g, (double)rdf32(arg3 + 4u) * (double)rdf32(arg2 + 0x30u)));
    wrf32(esi + 0x1cu, (float)d8);
    d9 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg3 + 0x28u) * (double)rdf32(arg2 + 8u)) + fr(g, (double)rdf32(arg3 + 8u) * (double)rdf32(arg2))) + fr(g, (double)rdf32(arg2 + 4u) * (double)rdf32(arg3 + 0x18u))) + fr(g, (double)rdf32(arg3 + 0x38u) * (double)rdf32(arg2 + 0xcu)));
    wrf32(esi + 0x20u, (float)d9);
    d10 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg3 + 0x38u) * (double)rdf32(arg2 + 0x1cu)) + fr(g, (double)rdf32(arg3 + 0x28u) * (double)rdf32(arg2 + 0x18u))) + fr(g, (double)rdf32(arg2 + 0x14u) * (double)rdf32(arg3 + 0x18u))) + fr(g, (double)rdf32(arg2 + 0x10u) * (double)rdf32(arg3 + 8u)));
    wrf32(esi + 0x24u, (float)d10);
    d11 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0x24u) * (double)rdf32(arg3 + 0x18u)) + fr(g, (double)rdf32(arg3 + 0x38u) * (double)rdf32(arg2 + 0x2cu))) + fr(g, (double)rdf32(arg3 + 0x28u) * (double)rdf32(arg2 + 0x28u))) + fr(g, (double)rdf32(arg2 + 0x20u) * (double)rdf32(arg3 + 8u)));
    wrf32(esi + 0x28u, (float)d11);
    d12 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0x34u) * (double)rdf32(arg3 + 0x18u)) + fr(g, (double)rdf32(arg3 + 0x38u) * (double)rdf32(arg2 + 0x3cu))) + fr(g, (double)rdf32(arg3 + 0x28u) * (double)rdf32(arg2 + 0x38u))) + fr(g, (double)rdf32(arg3 + 8u) * (double)rdf32(arg2 + 0x30u)));
    wrf32(esi + 0x2cu, (float)d12);
    d13 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg3 + 0x2cu) * (double)rdf32(arg2 + 8u)) + fr(g, (double)rdf32(arg3 + 0xcu) * (double)rdf32(arg2))) + fr(g, (double)rdf32(arg2 + 4u) * (double)rdf32(arg3 + 0x1cu))) + fr(g, (double)rdf32(arg3 + 0x3cu) * (double)rdf32(arg2 + 0xcu)));
    wrf32(esi + 0x30u, (float)d13);
    d14 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg3 + 0x3cu) * (double)rdf32(arg2 + 0x1cu)) + fr(g, (double)rdf32(arg3 + 0x2cu) * (double)rdf32(arg2 + 0x18u))) + fr(g, (double)rdf32(arg2 + 0x14u) * (double)rdf32(arg3 + 0x1cu))) + fr(g, (double)rdf32(arg2 + 0x10u) * (double)rdf32(arg3 + 0xcu)));
    wrf32(esi + 0x34u, (float)d14);
    d15 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0x24u) * (double)rdf32(arg3 + 0x1cu)) + fr(g, (double)rdf32(arg3 + 0x3cu) * (double)rdf32(arg2 + 0x2cu))) + fr(g, (double)rdf32(arg3 + 0x2cu) * (double)rdf32(arg2 + 0x28u))) + fr(g, (double)rdf32(arg2 + 0x20u) * (double)rdf32(arg3 + 0xcu)));
    wrf32(esi + 0x38u, (float)d15);
    d16 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0x34u) * (double)rdf32(arg3 + 0x1cu)) + fr(g, (double)rdf32(arg3 + 0x3cu) * (double)rdf32(arg2 + 0x3cu))) + fr(g, (double)rdf32(arg3 + 0x2cu) * (double)rdf32(arg2 + 0x38u))) + fr(g, (double)rdf32(arg3 + 0xcu) * (double)rdf32(arg2 + 0x30u)));
    wrf32(esi + 0x3cu, (float)d16);
    if (esi != arg1)
    {
        wr32(sp0 - 0x4cu, in_edi);
        wr32(sp0 - 0x50u, 0x10u);
        edi = arg1;
        ecx = 0x10u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    }
    g->edx = arg2;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d71f2(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102d71f2(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
