/* f_0x1021ef60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1021ef60(Guest* g)
{
    double d3;
    uint32_t ecx;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t2;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((uint8_t)arg1 == 0xdu)
    {
        loc_8 = rd32(sp0 - 8u) & 0xffffff00u;
        x0 = (double)rdf32(COW_IMG(0x10329a34u));
        goto L_1021ef87;
    }
    loc_8 = rd32(sp0 - 8u) & 0xffffff00u;
    x0 = (double)rdf32(COW_IMG(0x10329a34u));
    if ((uint8_t)arg2 != 0xdu)
    {
        loc_4 = 0x3f4ccccdu;
        goto L_1021ef97;
    }
L_1021ef87: ;
    loc_4 = 0x3f800000u;
    x0 = (double)rdf32(COW_IMG(0x1032961cu));
L_1021ef97: ;
    if ((uint8_t)arg1 - 6u > 0xau) goto L_1021efb3;
    t1 = rd32(COW_IMG(0x1021effcu) + rd8(COW_IMG(0x1021f004u) + (uint8_t)arg1 - 6u) * 4u);
    switch (t1 - RD)
    {
    case 0x1021efb3u: goto L_1021efb3;
    case 0x1021efd8u: ecx = arg2; goto L_1021efd8;
    default: rt_fatal(g, COW_IMG(0x1021efacu), "switch");
    }
    return;
L_1021efb3: ;
    if ((uint8_t)arg3 == 0u)
    {
        ecx = arg2;
        goto L_1021efdd;
    }
    if ((uint8_t)arg2 - 6u > 0xau)
    {
        ecx = (uint8_t)arg2;
        goto L_1021efdd;
    }
    t2 = rd32(COW_IMG(0x1021f010u) + rd8(COW_IMG(0x1021f018u) + (uint8_t)arg2 - 6u) * 4u);
    ecx = rd8(COW_IMG(0x1021f018u) + (uint8_t)arg2 - 6u);
    switch (t2 - RD)
    {
    case 0x1021efd8u: goto L_1021efd8;
    case 0x1021efddu: goto L_1021efdd;
    default: rt_fatal(g, COW_IMG(0x1021efd1u), "switch");
    }
    return;
L_1021efd8: ;
    loc_8 = (loc_8 & 0xffffff00u) | 1u;
L_1021efdd: ;
    d3 = (double)(float)fr(g, x0 * (double)rdf32(COW_IMG(0x103344b4u)));
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x1021ee70u), 3, cow_f2bits(d3), loc_4, loc_8);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1021ef60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1021ef60(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
