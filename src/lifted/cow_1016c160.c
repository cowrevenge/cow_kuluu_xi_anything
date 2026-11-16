/* f_0x1016c160 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u16 stack_args=2 */
uint32_t cow_fn_1016c160(Guest* g)
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
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    d1 = (double)(float)fr(g, (double)rdf32(arg1) - (double)rdf32(arg2));
    d2 = (double)(float)fr(g, (double)rdf32(arg1 + 4u) - (double)rdf32(arg2 + 4u));
    d3 = fr(g, (double)rdf32(arg1 + 8u) - (double)rdf32(arg2 + 8u));
    d4 = (double)(float)fr(g, fr(g, fr(g, d3 * fr(g, (double)rdf32(arg2 + 0x10u) - (double)rdf32(arg2 + 4u))) - fr(g, d2 * fr(g, (double)rdf32(arg2 + 0x14u) - (double)rdf32(arg2 + 8u)))) * (double)rdf32(arg2 + 0x24u));
    d5 = (double)(float)fr(g, fr(g, fr(g, d1 * fr(g, (double)rdf32(arg2 + 0x14u) - (double)rdf32(arg2 + 8u))) - fr(g, d3 * fr(g, (double)rdf32(arg2 + 0xcu) - (double)rdf32(arg2)))) * (double)rdf32(arg2 + 0x28u));
    if (d4 < (double)rdf32(COW_IMG(0x10336644u)))
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, (double)rdf32(COW_IMG(0x10336644u)), 1u);
        x0 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0xcu) - (double)rdf32(arg2)) * d2) - fr(g, d1 * fr(g, (double)rdf32(arg2 + 0x10u) - (double)rdf32(arg2 + 4u)))) * (double)rdf32(arg2 + 0x2cu));
        goto L_1016c379;
    }
    eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, (double)rdf32(COW_IMG(0x10336644u)), 1u);
    loc_8_f = d5;
    x0 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg2 + 0xcu) - (double)rdf32(arg2)) * d2) - fr(g, d1 * fr(g, (double)rdf32(arg2 + 0x10u) - (double)rdf32(arg2 + 4u)))) * (double)rdf32(arg2 + 0x2cu));
    if (loc_8_f < (double)rdf32(COW_IMG(0x10336644u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_8_f, (double)rdf32(COW_IMG(0x10336644u)), 1u);
        goto L_1016c379;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_8_f, (double)rdf32(COW_IMG(0x10336644u)), 1u);
    if (x0 < (double)rdf32(COW_IMG(0x10336644u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10336644u)), 0u);
        goto L_1016c37b;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10336644u)), 0u);
    d6 = (double)(float)fr(g, (double)rdf32(arg2 + 0x18u) - (double)rdf32(arg2 + 0xcu));
    d7 = (double)(float)fr(g, (double)rdf32(arg2 + 0x1cu) - (double)rdf32(arg2 + 0x10u));
    d8 = (double)(float)fr(g, (double)rdf32(arg2 + 0x20u) - (double)rdf32(arg2 + 0x14u));
    d9 = (double)(float)fr(g, (double)rdf32(arg1) - (double)rdf32(arg2 + 0xcu));
    d10 = (double)(float)fr(g, (double)rdf32(arg1 + 4u) - (double)rdf32(arg2 + 0x10u));
    d11 = (double)(float)fr(g, (double)rdf32(arg1 + 8u) - (double)rdf32(arg2 + 0x14u));
    d12 = (double)(float)fr(g, fr(g, fr(g, d9 * d8) - fr(g, d11 * d6)) * (double)rdf32(arg2 + 0x28u));
    d13 = (double)(float)fr(g, fr(g, fr(g, d10 * d6) - fr(g, d9 * d7)) * (double)rdf32(arg2 + 0x2cu));
    d14 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg1 + 8u) - (double)rdf32(arg2 + 0x14u)) * d7) - fr(g, d10 * d8)) * (double)rdf32(arg2 + 0x24u));
    if (d14 < (double)rdf32(COW_IMG(0x10336644u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d14, (double)rdf32(COW_IMG(0x10336644u)), 0u);
        goto L_1016c37b;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d14, (double)rdf32(COW_IMG(0x10336644u)), 0u);
    loc_8_f = d12;
    loc_4_f = d13;
    if (loc_8_f < (double)rdf32(COW_IMG(0x10336644u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_8_f, (double)rdf32(COW_IMG(0x10336644u)), 0u);
        goto L_1016c37b;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_8_f, (double)rdf32(COW_IMG(0x10336644u)), 0u);
    if (loc_4_f < (double)rdf32(COW_IMG(0x10336644u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_4_f, (double)rdf32(COW_IMG(0x10336644u)), 0u);
        goto L_1016c37b;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_4_f, (double)rdf32(COW_IMG(0x10336644u)), 0u);
    d15 = (double)(float)fr(g, (double)rdf32(arg2) - (double)rdf32(arg2 + 0x18u));
    d16 = (double)(float)fr(g, (double)rdf32(arg2 + 4u) - (double)rdf32(arg2 + 0x1cu));
    d17 = (double)(float)fr(g, (double)rdf32(arg2 + 8u) - (double)rdf32(arg2 + 0x20u));
    d18 = (double)(float)fr(g, (double)rdf32(arg1) - (double)rdf32(arg2 + 0x18u));
    d19 = (double)(float)fr(g, (double)rdf32(arg1 + 4u) - (double)rdf32(arg2 + 0x1cu));
    d20 = (double)(float)fr(g, (double)rdf32(arg1 + 8u) - (double)rdf32(arg2 + 0x20u));
    d21 = (double)(float)fr(g, fr(g, fr(g, d18 * d17) - fr(g, d20 * d15)) * (double)rdf32(arg2 + 0x28u));
    d22 = (double)(float)fr(g, fr(g, fr(g, d19 * d15) - fr(g, d18 * d16)) * (double)rdf32(arg2 + 0x2cu));
    d23 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg1 + 8u) - (double)rdf32(arg2 + 0x20u)) * d16) - fr(g, d19 * d17)) * (double)rdf32(arg2 + 0x24u));
    if (d23 < (double)rdf32(COW_IMG(0x10336644u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d23, (double)rdf32(COW_IMG(0x10336644u)), 0u);
        goto L_1016c37b;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d23, (double)rdf32(COW_IMG(0x10336644u)), 0u);
    loc_8_f = d21;
    loc_4_f = d22;
    if (loc_8_f < (double)rdf32(COW_IMG(0x10336644u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_8_f, (double)rdf32(COW_IMG(0x10336644u)), 0u);
        goto L_1016c37b;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_8_f, (double)rdf32(COW_IMG(0x10336644u)), 0u);
    if (loc_4_f < (double)rdf32(COW_IMG(0x10336644u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_4_f, (double)rdf32(COW_IMG(0x10336644u)), 0u);
        goto L_1016c37b;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_4_f, (double)rdf32(COW_IMG(0x10336644u)), 0u);
    g->edx = arg1;
    return (eax & 0xffffff00u) | 1u;
L_1016c379: ;
L_1016c37b: ;
    g->edx = arg1;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1016c160(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1016c160(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
