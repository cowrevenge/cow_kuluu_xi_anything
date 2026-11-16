/* f_0x100a23a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u16 stack_args=2 */
uint32_t cow_fn_100a23a0(Guest* g)
{
    double d11;
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
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    uint32_t eax;
    uint32_t ecx;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t9;
    double x0;
    double x1;
    double x2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    t1 = rd32(sp0 + 8u);
    t2 = rd32(sp0 + 4u);
    d3 = fr(g, (double)rdf32(rd32(sp0 + 8u)) - (double)rdf32(rd32(sp0 + 4u)));
    wrf32(sp0 + 8u, (float)d3);
    d4 = fr(g, (double)rdf32(t1 + 8u) - (double)rdf32(t2 + 8u));
    d5 = (double)rdf32(sp0 + 8u);
    d6 = fr(g, fr(g, d4 * d4) + fr(g, d5 * d5));
    if (!(d6 < (double)rdf32(COW_IMG(0x1032a1a8u))))
    {
        eax = (t1 & 0xffff0000u) | (uint16_t)cow_fsw(g, d6, (double)rdf32(COW_IMG(0x1032a1a8u)), 1u);
        x0 = d4;
        goto L_100a23de;
    }
    eax = (t1 & 0xffff0000u) | (uint16_t)cow_fsw(g, d6, (double)rdf32(COW_IMG(0x1032a1a8u)), 1u);
    x0 = d4;
    return eax & 0xffffff00u;
L_100a23de: ;
    d7 = (double)rdf32(sp0 + 8u);
    if (!(d7 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        goto L_100a2422;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
    if (PARITY(eax >> 8u & 5u))
    {
        t9 = rd32(sp0 + 8u);
        wrf32(sp0 + 8u, (float)x0);
        wr32(sp0 + 4u, t9);
        eax = t9;
        ecx = (self & 0xffffff00u) | 0xcu;
        x0 = -(double)rdf32(sp0 + 4u);
    }
    else
    {
        d8 = (double)rdf32(sp0 + 8u);
        wrf32(sp0 + 8u, (float)-d8);
        ecx = (self & 0xffffff00u) | 8u;
        x0 = -x0;
    }
L_100a2443: ;
    loc_4 = (self & 0xffffff00u) | (uint8_t)ecx;
L_100a2447: ;
    d13 = (double)rdf32(sp0 + 8u);
    if (!(d13 < x0))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d13, x0, 2u);
        x1 = (double)rdf32(sp0 + 8u);
        goto L_100a24af;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d13, x0, 2u);
    x1 = (double)rdf32(sp0 + 8u);
    d14 = fr(g, x1 * (double)rdf32(COW_IMG(0x1032d6d0u)));
    d15 = fr(g, d14 - fr(g, x0 * (double)rdf32(COW_IMG(0x1032d6ccu))));
    if (!(d15 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d15, (double)rdf32(COW_IMG(0x103295d8u)), 3u);
        x2 = fr(g, x0 * (double)rdf32(COW_IMG(0x1032d6ccu)));
        x1 = d14;
        goto L_100a2481;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d15, (double)rdf32(COW_IMG(0x103295d8u)), 3u);
    x2 = fr(g, x0 * (double)rdf32(COW_IMG(0x1032d6ccu)));
    x1 = d14;
    return (eax & 0xffffff00u) | (uint8_t)ecx;
L_100a2422: ;
    if (PARITY(eax >> 8u & 5u))
    {
        ecx = self & 0xffffff00u;
        loc_4 = self & 0xffffff00u;
        goto L_100a2447;
    }
    t10 = rd32(sp0 + 8u);
    wrf32(sp0 + 8u, (float)x0);
    wr32(sp0 + 4u, t10);
    d11 = (double)rdf32(sp0 + 8u);
    d12 = (double)rdf32(sp0 + 4u);
    wrf32(sp0 + 8u, (float)-d11);
    ecx = (t10 & 0xffffff00u) | 4u;
    x0 = d12;
    goto L_100a2443;
L_100a2481: ;
    d16 = fr(g, fr(g, x0 * (double)rdf32(COW_IMG(0x1032d6d0u))) - fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(COW_IMG(0x1032d6ccu))));
    d17 = fr(g, x2 + x1);
    if (!(d16 < d17))
    {
        eax = (((eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d16, d17, 1u)) & 0xffffff00u) | (uint8_t)ecx;
        goto L_100a24fa;
    }
    eax = (((eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d16, d17, 1u)) & 0xffffff00u) | (uint8_t)ecx;
    return eax + 2u;
L_100a24af: ;
    if ((cow_fsw(g, x1, x0, 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, x1, x0, 1u) & 0x4100u;
        goto L_100a2532;
    }
    eax = cow_fsw(g, x1, x0, 1u) & 0x4100u;
    d18 = fr(g, (double)rdf32(COW_IMG(0x1032d6d0u)) * x0);
    d19 = fr(g, d18 - fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(COW_IMG(0x1032d6ccu))));
    if (!(d19 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d19, (double)rdf32(COW_IMG(0x103295d8u)), 3u);
        x2 = fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(COW_IMG(0x1032d6ccu)));
        x1 = d18;
        goto L_100a24fd;
    }
    x2 = fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(COW_IMG(0x1032d6ccu)));
    x1 = d18;
    if ((int32_t)((uint8_t)loc_4 + 4u & 0x8000000fu) >= 0)
    {
        eax = (uint8_t)loc_4 + 4u & 0x8000000fu;
        goto L_100a2539;
    }
    eax = (uint8_t)loc_4 + 4u & 0x8000000fu;
    eax = eax - 1u | 0xfffffff0u;
L_100a24fa: ;
    return eax + 1u;
L_100a24fd: ;
    d20 = fr(g, x2 + x1);
    d21 = fr(g, fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(COW_IMG(0x1032d6d0u))) - fr(g, x0 * (double)rdf32(COW_IMG(0x1032d6ccu))));
    if ((cow_fsw(g, d20, d21, 1u) & 0x4100u) != 0u)
    {
        eax = (cow_fsw(g, d20, d21, 1u) & 0x4100u) | (uint8_t)ecx;
        goto L_100a252d;
    }
    eax = (cow_fsw(g, d20, d21, 1u) & 0x4100u) | (uint8_t)ecx;
    return eax + 2u;
L_100a252d: ;
    return eax + 3u;
L_100a2532: ;
    eax = ((eax & 0xffffff00u) | (uint8_t)ecx) + 2u;
L_100a2539: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a23a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a23a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
