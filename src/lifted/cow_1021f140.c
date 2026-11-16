/* f_0x1021f140 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1021f140(Guest* g)
{
    double d3;
    double d4;
    double d5;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_18;
    uint32_t loc_20;
    uint32_t t1;
    uint32_t t2;
    uint32_t t6;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
        goto L_1021f163;
    }
    eax = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
    return eax;
L_1021f163: ;
    t1 = rd32(eax + 4u);
    t2 = rd32(eax + 0xcu);
    ecx = t1;
    ebp = COW_IMG(0x10480af0u);
    esi = 0u;
    loc_20 = t1;
    loc_18 = t2;
L_1021f180: ;
    if (rd32(ebp) == 0u) goto L_1021f214;
    edx = rd32(ebp);
    if (rd8(edx + 0x1ffu) < 2u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(edx + 0x1ffu);
        goto L_1021f214;
    }
    ecx = (ecx & 0xffffff00u) | rd8(edx + 0x1ffu);
    if ((uint8_t)ecx > 0x63u) goto L_1021f214;
    if (rd32(edx + 0xa0u) == 0u) goto L_1021f214;
    eax = rd32(edx + 0xa0u);
    d3 = (double)(float)fr(g, cow_bits2f(loc_20) - (double)rdf32(edx + 4u));
    d4 = fr(g, fr(g, cow_bits2f(loc_18) - (double)rdf32(edx + 0xcu)) * (double)rdf32(COW_IMG(0x1032a3f0u)));
    d5 = fr(g, sqrt(fr(g, fr(g, d4 * d4) + fr(g, d3 * d3))));
    if ((cow_fsw(g, d5, (double)rdf32(COW_IMG(0x10329fd8u)), 0u) & 0x100u) == 0u) goto L_1021f214;
    if ((uint8_t)ecx - 0x20u > 7u)
    {
        ecx = (uint8_t)ecx;
        goto L_1021f214;
    }
    eax = (uint8_t)ecx - 0x20u;
    t6 = rd32(COW_IMG(0x1021f230u) + rd8(COW_IMG(0x1021f238u) + eax) * 4u);
    ecx = rd8(COW_IMG(0x1021f238u) + eax);
    switch (t6 - RD)
    {
    case 0x1021f201u: goto L_1021f201;
    case 0x1021f207u: goto L_1021f207;
    default: rt_fatal(g, COW_IMG(0x1021f1fau), "switch");
    }
    return 0;
L_1021f201: ;
    if ((uint8_t)arg2 == 0u) goto L_1021f214;
L_1021f20b: ;
    wr32(arg1 + esi * 4u, edx);
    if ((int32_t)(esi + 1u) >= 3)
    {
        esi = esi + 1u;
        goto L_1021f223;
    }
    esi = esi + 1u;
L_1021f214: ;
    if ((int32_t)(ebp + 4u) < (int32_t)COW_IMG(0x10482ef0u))
    {
        ebp = ebp + 4u;
        goto L_1021f180;
    }
L_1021f223: ;
    return esi;
L_1021f207: ;
    if ((uint8_t)arg2 != 0u) goto L_1021f214;
    goto L_1021f20b;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1021f140(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1021f140(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
