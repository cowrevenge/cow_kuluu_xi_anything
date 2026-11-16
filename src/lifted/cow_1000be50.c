/* f_0x1000be50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1000be50(Guest* g)
{
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
    double loc_10_f;
    uint32_t t1;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    cow_frame(g, sp0, 32u);

    if (rd32(COW_IMG(0x10456a7cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x10456a7cu));
        goto L_1000bf27;
    }
    wr32(sp0 - 0x14u, sp0 - 4u);
    wr32(sp0 - 0x18u, sp0 - 8u);
    wr32(sp0 - 0x1cu, sp0 - 0xcu);
    g->eax = sp0 - 0xcu;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x10017100u), self + 0x1f4u, 3, sp0 - 0xcu, sp0 - 8u, sp0 - 4u);
    d2 = (double)rdf32(rd32(sp0 + 4u) + 4u);
    if (!(d2 < (double)rdf32(COW_IMG(0x10329a34u))))
    {
        eax = (t1 & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, (double)rdf32(COW_IMG(0x10329a34u)), 0u);
        goto L_1000bf27;
    }
    eax = (t1 & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, (double)rdf32(COW_IMG(0x10329a34u)), 0u);
    ecx = rd32(sp0 + 4u);
    d3 = (double)rdf32(ecx + 8u);
    if (!(d3 < (double)rdf32(COW_IMG(0x10329a34u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d3, (double)rdf32(COW_IMG(0x10329a34u)), 0u);
        goto L_1000bf27;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d3, (double)rdf32(COW_IMG(0x10329a34u)), 0u);
    d4 = (double)rdf32(ecx + 0xcu);
    if (!(d4 < (double)rdf32(COW_IMG(0x10329a34u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, (double)rdf32(COW_IMG(0x10329a34u)), 0u);
        goto L_1000bf27;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, (double)rdf32(COW_IMG(0x10329a34u)), 0u);
    d5 = fr(g, (double)rdf32(sp0 - 0xcu) * (double)rdf32(ecx + 4u));
    wrf32(sp0 + 4u, (float)d5);
    wrf32(ecx + 4u, (float)d5);
    d6 = fr(g, (double)rdf32(sp0 - 8u) * (double)rdf32(ecx + 8u));
    wrf32(ecx + 8u, (float)d6);
    d7 = (double)(float)fr(g, (double)rdf32(sp0 - 4u) * (double)rdf32(ecx + 0xcu));
    wrf32(sp0 - 0x10u, (float)d7);
    d8 = fr(g, (double)rdf32(sp0 - 4u) * (double)rdf32(ecx + 0xcu));
    wrf32(ecx + 0xcu, (float)d8);
    d9 = (double)rdf32(sp0 + 4u);
    if ((cow_fsw(g, d9, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, d9, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x100u;
        loc_10_f = d7;
        x0 = d6;
    }
    else
    {
        eax = cow_fsw(g, d9, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x100u;
        loc_10_f = d7;
        x0 = d6;
        wr32(ecx + 4u, 0x3f800000u);
    }
    if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x100u;
    }
    else
    {
        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x100u;
        wr32(ecx + 8u, 0x3f800000u);
    }
    if ((cow_fsw(g, loc_10_f, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, loc_10_f, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x100u;
    }
    else
    {
        eax = cow_fsw(g, loc_10_f, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x100u;
        wr32(ecx + 0xcu, 0x3f800000u);
    }
    return (eax & 0xffffff00u) | 1u;
L_1000bf27: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1000be50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1000be50(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
