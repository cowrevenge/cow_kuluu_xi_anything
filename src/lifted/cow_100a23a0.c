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
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100a2447u: eax = g->eax; ecx = g->ecx; loc_4 = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a2447;
    case 0x100a2458u: eax = g->eax; ecx = g->ecx; loc_4 = rd32(sp0 - 4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_100a2458;
    case 0x100a2477u: eax = g->eax; ecx = g->ecx; loc_4 = rd32(sp0 - 4u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_100a2477;
    case 0x100a2481u: eax = g->eax; ecx = g->ecx; loc_4 = rd32(sp0 - 4u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_100a2481;
    case 0x100a24aau: eax = g->eax; ecx = g->ecx; loc_4 = rd32(sp0 - 4u); goto E_100a24aa;
    case 0x100a24afu: eax = g->eax; ecx = g->ecx; loc_4 = rd32(sp0 - 4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_100a24af;
    case 0x100a24bau: eax = g->eax; ecx = g->ecx; loc_4 = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a24ba;
    case 0x100a24ddu: eax = g->eax; ecx = g->ecx; loc_4 = rd32(sp0 - 4u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_100a24dd;
    case 0x100a24f6u: eax = g->eax; ecx = g->ecx; loc_4 = rd32(sp0 - 4u); goto E_100a24f6;
    case 0x100a24fau: eax = g->eax; ecx = g->ecx; loc_4 = rd32(sp0 - 4u); goto E_100a24fa;
    case 0x100a24fdu: eax = g->eax; ecx = g->ecx; loc_4 = rd32(sp0 - 4u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_100a24fd;
    case 0x100a2528u: eax = g->eax; ecx = g->ecx; loc_4 = rd32(sp0 - 4u); goto E_100a2528;
    case 0x100a252du: eax = g->eax; ecx = g->ecx; loc_4 = rd32(sp0 - 4u); goto E_100a252d;
    case 0x100a2532u: eax = g->eax; ecx = g->ecx; loc_4 = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a2532;
    case 0x100a2539u: eax = g->eax; ecx = g->ecx; loc_4 = rd32(sp0 - 4u); goto E_100a2539;
    default: break;
    }
#endif

    COW_AT(100a23a0)
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
    COW_AT(100a23d8)
    return eax & 0xffffff00u;
L_100a23de: ;
    COW_AT(100a23de)
    d7 = (double)rdf32(sp0 + 8u);
    if (!(d7 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        goto L_100a2422;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
    COW_AT(100a23f7)
    if (PARITY(eax >> 8u & 5u))
    {
    COW_AT(100a240c)
        t9 = rd32(sp0 + 8u);
        wrf32(sp0 + 8u, (float)x0);
        wr32(sp0 + 4u, t9);
        eax = t9;
        ecx = (self & 0xffffff00u) | 0xcu;
        x0 = -(double)rdf32(sp0 + 4u);
    }
    else
    {
    COW_AT(100a23fc)
        d8 = (double)rdf32(sp0 + 8u);
        wrf32(sp0 + 8u, (float)-d8);
        ecx = (self & 0xffffff00u) | 8u;
        x0 = -x0;
    }
L_100a2443: ;
    COW_AT(100a2443)
    loc_4 = (self & 0xffffff00u) | (uint8_t)ecx;
L_100a2447: ;
    COW_AT(100a2447)
    d13 = (double)rdf32(sp0 + 8u);
    if (!(d13 < x0))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d13, x0, 2u);
        x1 = (double)rdf32(sp0 + 8u);
        goto L_100a24af;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d13, x0, 2u);
    x1 = (double)rdf32(sp0 + 8u);
    COW_AT(100a2458)
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
    COW_AT(100a2477)
    return (eax & 0xffffff00u) | (uint8_t)ecx;
L_100a2422: ;
    COW_AT(100a2422)
    if (PARITY(eax >> 8u & 5u))
    {
        ecx = self & 0xffffff00u;
        loc_4 = self & 0xffffff00u;
        goto L_100a2447;
    }
    COW_AT(100a2427)
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
    COW_AT(100a2481)
    d16 = fr(g, fr(g, x0 * (double)rdf32(COW_IMG(0x1032d6d0u))) - fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(COW_IMG(0x1032d6ccu))));
    d17 = fr(g, x2 + x1);
    if (!(d16 < d17))
    {
        eax = (((eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d16, d17, 1u)) & 0xffffff00u) | (uint8_t)ecx;
        goto L_100a24fa;
    }
    eax = (((eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d16, d17, 1u)) & 0xffffff00u) | (uint8_t)ecx;
    COW_AT(100a24aa)
    return eax + 2u;
L_100a24af: ;
    COW_AT(100a24af)
    if ((cow_fsw(g, x1, x0, 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, x1, x0, 1u) & 0x4100u;
        goto L_100a2532;
    }
    eax = cow_fsw(g, x1, x0, 1u) & 0x4100u;
    COW_AT(100a24ba)
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
    COW_AT(100a24dd)
    if ((int32_t)((uint8_t)loc_4 + 4u & 0x8000000fu) >= 0)
    {
        eax = (uint8_t)loc_4 + 4u & 0x8000000fu;
        goto L_100a2539;
    }
    eax = (uint8_t)loc_4 + 4u & 0x8000000fu;
    COW_AT(100a24f6)
    eax = eax - 1u | 0xfffffff0u;
L_100a24fa: ;
    COW_AT(100a24fa)
    return eax + 1u;
L_100a24fd: ;
    COW_AT(100a24fd)
    d20 = fr(g, x2 + x1);
    d21 = fr(g, fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(COW_IMG(0x1032d6d0u))) - fr(g, x0 * (double)rdf32(COW_IMG(0x1032d6ccu))));
    if ((cow_fsw(g, d20, d21, 1u) & 0x4100u) != 0u)
    {
        eax = (cow_fsw(g, d20, d21, 1u) & 0x4100u) | (uint8_t)ecx;
        goto L_100a252d;
    }
    eax = (cow_fsw(g, d20, d21, 1u) & 0x4100u) | (uint8_t)ecx;
    COW_AT(100a2528)
    return eax + 2u;
L_100a252d: ;
    COW_AT(100a252d)
    return eax + 3u;
L_100a2532: ;
    COW_AT(100a2532)
    eax = ((eax & 0xffffff00u) | (uint8_t)ecx) + 2u;
L_100a2539: ;
    COW_AT(100a2539)
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100a23a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100a2447u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t loc_4;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        loc_4 = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100a2458u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t loc_4;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        loc_4 = rd32(sp0 - 4u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100a2477u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t loc_4;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        loc_4 = rd32(sp0 - 4u);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100a2481u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t loc_4;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        loc_4 = rd32(sp0 - 4u);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100a24aau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100a24afu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t loc_4;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        loc_4 = rd32(sp0 - 4u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100a24bau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t loc_4;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        loc_4 = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100a24ddu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t loc_4;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        loc_4 = rd32(sp0 - 4u);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100a24f6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100a24fau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100a24fdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t loc_4;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        loc_4 = rd32(sp0 - 4u);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100a2528u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100a252du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100a2532u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t loc_4;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        loc_4 = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100a2539u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
/* blocks no state can start at, and why (the gittable lists their sites):
     100a23d8: holds self, which no location here says
     100a23de: holds self, which no location here says
     100a23f7: holds self, which no location here says
     100a23fc: holds self, which no location here says
     100a240c: holds self, which no location here says
     100a2422: holds self, which no location here says
     100a2427: holds self, which no location here says
     100a2443: holds self, which no location here says
*/
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100a23a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100a23a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
