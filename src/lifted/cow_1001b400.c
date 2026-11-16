/* f_0x1001b400 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1001b400(Guest* g)
{
    double d1;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    uint32_t eax;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 0x28u) == 1u) goto L_1001b4a8;
    eax = rd32(self + 0x28u) - 1u;
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_1001b467;
    }
    eax = eax - 1u;
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_1001b4b7;
    }
    eax = eax - 1u;
    d1 = (double)rdf32(sp0 + 4u);
    if (!(d1 < (double)rdf32(COW_IMG(0x1032961cu))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
        goto L_1001b443;
    }
    d2 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(sp0 + 4u));
    wr32(self + 0x78u, 0u);
    wr32(self + 0x74u, arg1);
    wrf32(self + 0x70u, (float)d2);
    return arg1;
L_1001b443: ;
    d3 = fr(g, (double)rdf32(COW_IMG(0x10329990u)) - (double)rdf32(sp0 + 4u));
    wr32(self + 0x70u, 0u);
    wrf32(self + 0x74u, (float)d3);
    d4 = fr(g, (double)rdf32(sp0 + 4u) - (double)rdf32(COW_IMG(0x1032961cu)));
    wrf32(self + 0x78u, (float)d4);
    return eax;
L_1001b467: ;
    d5 = (double)rdf32(sp0 + 4u);
    if (!(d5 < (double)rdf32(COW_IMG(0x1032961cu)))) goto L_1001b496;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d5, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
    d6 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(sp0 + 4u));
    wr32(self + 0x78u, 0u);
    wr32(self + 0x74u, arg1);
    wrf32(self + 0x70u, (float)d6);
    g->edx = arg1;
    return eax;
L_1001b496: ;
    wr32(self + 0x74u, 0x3f800000u);
    wr32(self + 0x70u, 0u);
    wr32(self + 0x78u, 0u);
    return 0u;
L_1001b4a8: ;
    wr32(self + 0x70u, 0x3f800000u);
    wr32(self + 0x78u, 0u);
    wr32(self + 0x74u, 0u);
    eax = 0u;
L_1001b4b7: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1001b400(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1001b400(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
