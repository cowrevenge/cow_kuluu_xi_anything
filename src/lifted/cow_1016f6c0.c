/* f_0x1016f6c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_1016f6c0(Guest* g)
{
    double d1;
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
    double d2;
    double d20;
    double d21;
    double d22;
    double d23;
    double d24;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    double loc_4_f;
    double loc_8_f;
    double x0;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    d1 = (double)(float)fr(g, (double)rdf32(arg4) - (double)rdf32(arg1));
    d2 = (double)(float)fr(g, (double)rdf32(arg4 + 4u) - (double)rdf32(arg1 + 4u));
    d3 = fr(g, (double)rdf32(arg4 + 8u) - (double)rdf32(arg1 + 8u));
    d4 = (double)(float)fr(g, fr(g, fr(g, d3 * fr(g, (double)rdf32(arg2 + 4u) - (double)rdf32(arg1 + 4u))) - fr(g, d2 * fr(g, (double)rdf32(arg2 + 8u) - (double)rdf32(arg1 + 8u)))) * (double)rdf32(arg5));
    d5 = fr(g, (double)rdf32(arg2) - (double)rdf32(arg1));
    d6 = (double)(float)fr(g, fr(g, fr(g, d1 * fr(g, (double)rdf32(arg2 + 8u) - (double)rdf32(arg1 + 8u))) - fr(g, d5 * d3)) * (double)rdf32(arg5 + 4u));
    if ((cow_fsw(g, d4, (double)rdf32(COW_IMG(0x1032a1a8u)), 1u) & 0x4100u) == 0u)
    {
        x0 = fr(g, fr(g, fr(g, d5 * d2) - fr(g, d1 * fr(g, (double)rdf32(arg2 + 4u) - (double)rdf32(arg1 + 4u)))) * (double)rdf32(arg5 + 8u));
        goto L_1016f8f7;
    }
    eax = cow_fsw(g, d4, (double)rdf32(COW_IMG(0x1032a1a8u)), 1u) & 0x4100u;
    loc_8_f = d6;
    x0 = fr(g, fr(g, fr(g, d5 * d2) - fr(g, d1 * fr(g, (double)rdf32(arg2 + 4u) - (double)rdf32(arg1 + 4u)))) * (double)rdf32(arg5 + 8u));
    if ((cow_fsw(g, loc_8_f, (double)rdf32(COW_IMG(0x1032a1a8u)), 1u) & 0x4100u) == 0u) goto L_1016f8f7;
    eax = cow_fsw(g, loc_8_f, (double)rdf32(COW_IMG(0x1032a1a8u)), 1u) & 0x4100u;
    if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a1a8u)), 0u) & 0x4100u) == 0u) goto L_1016f8f9;
    eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a1a8u)), 0u) & 0x4100u;
    d7 = (double)(float)fr(g, (double)rdf32(arg3) - (double)rdf32(arg2));
    d8 = (double)(float)fr(g, (double)rdf32(arg3 + 4u) - (double)rdf32(arg2 + 4u));
    d9 = (double)(float)fr(g, (double)rdf32(arg3 + 8u) - (double)rdf32(arg2 + 8u));
    d10 = (double)(float)fr(g, (double)rdf32(arg4) - (double)rdf32(arg2));
    d11 = (double)(float)fr(g, (double)rdf32(arg4 + 4u) - (double)rdf32(arg2 + 4u));
    d12 = (double)(float)fr(g, (double)rdf32(arg4 + 8u) - (double)rdf32(arg2 + 8u));
    d13 = (double)(float)fr(g, fr(g, fr(g, d10 * d9) - fr(g, d7 * d12)) * (double)rdf32(arg5 + 4u));
    d14 = (double)(float)fr(g, fr(g, fr(g, d7 * d11) - fr(g, d10 * d8)) * (double)rdf32(arg5 + 8u));
    d15 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg4 + 8u) - (double)rdf32(arg2 + 8u)) * d8) - fr(g, d11 * d9)) * (double)rdf32(arg5));
    if ((cow_fsw(g, d15, (double)rdf32(COW_IMG(0x1032a1a8u)), 0u) & 0x4100u) == 0u) goto L_1016f8f9;
    eax = cow_fsw(g, d15, (double)rdf32(COW_IMG(0x1032a1a8u)), 0u) & 0x4100u;
    loc_8_f = d13;
    loc_4_f = d14;
    if ((cow_fsw(g, loc_8_f, (double)rdf32(COW_IMG(0x1032a1a8u)), 0u) & 0x4100u) == 0u) goto L_1016f8f9;
    eax = cow_fsw(g, loc_8_f, (double)rdf32(COW_IMG(0x1032a1a8u)), 0u) & 0x4100u;
    if ((cow_fsw(g, loc_4_f, (double)rdf32(COW_IMG(0x1032a1a8u)), 0u) & 0x4100u) == 0u) goto L_1016f8f9;
    eax = cow_fsw(g, loc_4_f, (double)rdf32(COW_IMG(0x1032a1a8u)), 0u) & 0x4100u;
    d16 = (double)(float)fr(g, (double)rdf32(arg1) - (double)rdf32(arg3));
    d17 = (double)(float)fr(g, (double)rdf32(arg1 + 4u) - (double)rdf32(arg3 + 4u));
    d18 = (double)(float)fr(g, (double)rdf32(arg1 + 8u) - (double)rdf32(arg3 + 8u));
    d19 = (double)(float)fr(g, (double)rdf32(arg4) - (double)rdf32(arg3));
    d20 = (double)(float)fr(g, (double)rdf32(arg4 + 4u) - (double)rdf32(arg3 + 4u));
    d21 = (double)(float)fr(g, (double)rdf32(arg4 + 8u) - (double)rdf32(arg3 + 8u));
    d22 = (double)(float)fr(g, fr(g, fr(g, d19 * d18) - fr(g, d16 * d21)) * (double)rdf32(arg5 + 4u));
    d23 = (double)(float)fr(g, fr(g, fr(g, d16 * d20) - fr(g, d19 * d17)) * (double)rdf32(arg5 + 8u));
    d24 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg4 + 8u) - (double)rdf32(arg3 + 8u)) * d17) - fr(g, d20 * d18)) * (double)rdf32(arg5));
    if ((cow_fsw(g, d24, (double)rdf32(COW_IMG(0x1032a1a8u)), 0u) & 0x4100u) == 0u) goto L_1016f8f9;
    eax = cow_fsw(g, d24, (double)rdf32(COW_IMG(0x1032a1a8u)), 0u) & 0x4100u;
    loc_8_f = d22;
    loc_4_f = d23;
    if ((cow_fsw(g, loc_8_f, (double)rdf32(COW_IMG(0x1032a1a8u)), 0u) & 0x4100u) == 0u) goto L_1016f8f9;
    eax = cow_fsw(g, loc_8_f, (double)rdf32(COW_IMG(0x1032a1a8u)), 0u) & 0x4100u;
    if ((cow_fsw(g, loc_4_f, (double)rdf32(COW_IMG(0x1032a1a8u)), 0u) & 0x4100u) == 0u) goto L_1016f8f9;
    return 1u;
L_1016f8f7: ;
L_1016f8f9: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1016f6c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1016f6c0(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
