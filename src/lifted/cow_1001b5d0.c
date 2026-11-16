/* f_0x1001b5d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1001b5d0(Guest* g)
{
    double d1;
    double d10;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    double loc_4_f;
    double x0;
    double x1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;

    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x10014cf0u), in_eax, g->ecx, g->edx, 1, 0);
    d1 = cow_take_float(g);
    if (rd8(self + 8u) == 1u)
    {
        eax = rd8(self + 8u) - 1u;
        loc_4_f = (double)(float)d1;
        goto L_1001b67b;
    }
    eax = rd8(self + 8u) - 1u;
    loc_4_f = (double)(float)d1;
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_1001b65b;
    }
    eax = eax - 1u;
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_1001b6b8;
    }
    eax = eax - 1u;
    d2 = fr(g, fr(g, loc_4_f * (double)rdf32(self + 0x18u)) + (double)rdf32(self + 0x10u));
    wrf32(self + 0x10u, (float)d2);
    d3 = fr(g, (double)rdf32(self + 0x14u) - loc_4_f);
    wrf32(self + 0x14u, (float)d3);
    d4 = fr(g, (double)rdf32(self + 0xcu) - loc_4_f);
    wrf32(self + 0xcu, (float)d4);
    if (!(d4 <= (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        x1 = d3;
        x0 = d2;
        goto L_1001b648;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    x1 = d3;
    x0 = d2;
    d5 = (double)rdf32(COW_IMG(0x1032961cu));
    wr8(self + 8u, 2u);
    if ((cow_fsw(g, x0, d5, 0u) & 0x4100u) == 0u)
    {
        wr32(self + 0x10u, 0x3f800000u);
    }
    return 0u;
L_1001b648: ;
    if (!(x1 <= (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x1, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        goto L_1001b6b6;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x1, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
    wr8(self + 8u, 2u);
L_1001b6a2: ;
    if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u;
        wr32(self + 0x10u, 0x3f800000u);
    }
L_1001b6b8: ;
    d9 = (double)rdf32(self + 0x10u);
    if ((cow_fsw(g, d9, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d9, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u;
        goto L_1001b6d5;
    }
    wr32(self + 0x10u, 0x3f800000u);
    return 1u;
L_1001b65b: ;
    d6 = fr(g, (double)rdf32(self + 0xcu) - loc_4_f);
    wrf32(self + 0xcu, (float)d6);
    if (!(d6 <= (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d6, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_1001b6b8;
    }
    wr8(self + 8u, 2u);
    return 0u;
L_1001b67b: ;
    d7 = fr(g, fr(g, loc_4_f * (double)rdf32(self + 0x18u)) + (double)rdf32(self + 0x10u));
    wrf32(self + 0x10u, (float)d7);
    d8 = fr(g, (double)rdf32(self + 0x14u) - loc_4_f);
    wrf32(self + 0x14u, (float)d8);
    if (!(d8 <= (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d8, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = d7;
        goto L_1001b6b6;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d8, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
    x0 = d7;
    wr8(self + 8u, 0u);
    goto L_1001b6a2;
L_1001b6b6: ;
    goto L_1001b6b8;
L_1001b6d5: ;
    d10 = (double)rdf32(self + 0x10u);
    if (d10 < (double)rdf32(COW_IMG(0x103295d8u)))
    {
        wr32(self + 0x10u, 0u);
    }
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1001b5d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1001b5d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
