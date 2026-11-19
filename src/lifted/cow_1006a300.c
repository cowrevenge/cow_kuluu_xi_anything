/* f_0x1006a300 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_1006a300(Guest* g)
{
    double d1;
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d15;
    double d16;
    double d2;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t17;
    uint32_t t18;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 84u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1006a325u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x48u); in_esi = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x44u); goto E_1006a325;
    case 0x1006a35bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x48u); in_esi = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x44u); goto E_1006a35b;
    default: break;
    }
#endif

    COW_AT(1006a300)
    d1 = (double)rdf32(sp0 + 0x10u);
    wr32(sp0 - 0x44u, in_esi);
    wr32(sp0 - 0x48u, in_edi);
    d2 = (double)rdf32(COW_IMG(0x103295d8u));
    edi = sp0 - 0x40u;
    eax = 0u;
    ecx = 0x10u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if (d1 != d2)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, d2, 0u);
        edx = in_edx;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, d2, 0u);
    COW_AT(1006a325)
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 0x48u;
        t3 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(self + 0xdc8u), 0);
        t4 = g->edx;
        t5 = rd32(t3 + 8u);
        t6 = rd32(self + 0xdc8u);
        wr32(sp0 + 0x10u, t5);
        t7 = rd32(sp0 + 0x10u);
        wrf32(sp0 + 0x10u, (float)(double)(int32_t)t7);
        g->eax = t5;
        g->edx = t4;
        t8 = cow_thiscall(g, COW_IMG(0x10009e00u), t6, 0);
        t9 = g->edx;
        d10 = fr(g, fr(g, (double)rdf32(sp0 + 0x10u) / (double)(int32_t)rd32(t8 + 0xcu)) * (double)rdf32(COW_IMG(0x1032c0f4u)));
        wrf32(sp0 + 0x10u, (float)d10);
        eax = t8;
        edx = t9;
    }
    COW_AT(1006a35b)
    d11 = fr(g, (double)rdf32(sp0 + 8u) - (double)rdf32(sp0 + 4u));
    wr32(sp0 - 0x14u, 0x3f800000u);
    wr32(sp0 - 0x4cu, sp0 - 0x40u);
    d12 = fr(g, (double)rdf32(sp0 + 8u) / d11);
    wr32(sp0 - 0x50u, 3u);
    d13 = fr(g, (double)rdf32(sp0 + 0xcu) * (double)rdf32(COW_IMG(0x10329a08u)));
    d14 = fr(g, (double)rdf32(sp0 + 0x10u) * fr(g, fr(g, cos(d13)) / fr(g, sin(d13))));
    wrf32(sp0 - 0x40u, (float)(double)(float)d14);
    d15 = (double)(float)fr(g, fr(g, cos(d13)) / fr(g, sin(d13)));
    wrf32(sp0 - 0x2cu, (float)d15);
    wrf32(sp0 - 0x18u, (float)(double)(float)d12);
    d16 = fr(g, d12 * (double)rdf32(sp0 + 4u));
    wrf32(sp0 - 8u, (float)(double)(float)-d16);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x48u;
    t17 = cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(self + 0xdc8u), 2, 3u, sp0 - 0x40u);
    t18 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t18;
    return t17;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1006a300(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1006a325u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x48u);
        in_esi = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x1006a35bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x48u);
        in_esi = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1006a300(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1006a300(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
