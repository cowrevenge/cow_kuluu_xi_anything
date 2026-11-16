/* f_0x102966e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102966e0(Guest* g)
{
    double d12;
    double d13;
    double d14;
    double d15;
    double d16;
    double d17;
    double d18;
    double d19;
    double d20;
    double d21;
    double d4;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t3;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x10296800u), 1, arg2);
    t2 = g->ecx;
    t3 = g->edx;
    d4 = cow_take_float(g);
    if (!(fabs(d4) < rdf64(COW_IMG(0x10340b28u))))
    {
        edx = t3;
        x0 = d4;
        goto L_10296730;
    }
    eax = (t1 & 0xffff0000u) | (uint16_t)cow_fsw(g, fabs(d4), rdf64(COW_IMG(0x10340b28u)), 1u);
    ecx = t2;
    edx = t3;
    x0 = d4;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t5 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b27fcu), COW_IMG(0x103bbbb8u));
    t6 = g->ecx;
    t7 = g->edx;
    g->ecx = t6;
    g->edx = t7;
    g->esp = sp0 - 0xcu;
    t8 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b478cu), COW_IMG(0x103b27fcu));
    t9 = g->ecx;
    t10 = g->edx;
    g->edx = t10;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10297260u), 7, arg2, 0u, 0u, COW_IMG(0x103b478cu), COW_IMG(0x103b27fcu), COW_IMG(0x103bbbb8u), 0xf5u);
    t11 = g->edx;
    g->edx = t11;
    return 0u;
L_10296730: ;
    d12 = fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0x10u) * (double)rdf32(arg2 + 0x20u)) - fr(g, (double)rdf32(arg2 + 0x14u) * (double)rdf32(arg2 + 0x1cu))) * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x0));
    d13 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x0);
    wrf32(arg1, (float)d12);
    d14 = fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0x20u) * (double)rdf32(arg2 + 0xcu)) - fr(g, (double)rdf32(arg2 + 0x14u) * (double)rdf32(arg2 + 0x18u))) * d13);
    wrf32(arg1 + 0xcu, (float)-d14);
    d15 = fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0x1cu) * (double)rdf32(arg2 + 0xcu)) - fr(g, (double)rdf32(arg2 + 0x10u) * (double)rdf32(arg2 + 0x18u))) * d13);
    wrf32(arg1 + 0x18u, (float)d15);
    d16 = fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0x20u) * (double)rdf32(arg2 + 4u)) - fr(g, (double)rdf32(arg2 + 0x1cu) * (double)rdf32(arg2 + 8u))) * d13);
    wrf32(arg1 + 4u, (float)-d16);
    d17 = fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0x20u) * (double)rdf32(arg2)) - fr(g, (double)rdf32(arg2 + 8u) * (double)rdf32(arg2 + 0x18u))) * d13);
    wrf32(arg1 + 0x10u, (float)d17);
    d18 = fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0x1cu) * (double)rdf32(arg2)) - fr(g, (double)rdf32(arg2 + 4u) * (double)rdf32(arg2 + 0x18u))) * d13);
    wrf32(arg1 + 0x1cu, (float)-d18);
    d19 = fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0x14u) * (double)rdf32(arg2 + 4u)) - fr(g, (double)rdf32(arg2 + 0x10u) * (double)rdf32(arg2 + 8u))) * d13);
    wrf32(arg1 + 8u, (float)d19);
    d20 = fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0x14u) * (double)rdf32(arg2)) - fr(g, (double)rdf32(arg2 + 8u) * (double)rdf32(arg2 + 0xcu))) * d13);
    wrf32(arg1 + 0x14u, (float)-d20);
    d21 = fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0x10u) * (double)rdf32(arg2)) - fr(g, (double)rdf32(arg2 + 4u) * (double)rdf32(arg2 + 0xcu))) * d13);
    wrf32(arg1 + 0x20u, (float)d21);
    g->edx = edx;
    return 0xffu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102966e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102966e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
