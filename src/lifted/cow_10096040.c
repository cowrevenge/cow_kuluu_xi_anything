/* f_0x10096040 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10096040(Guest* g)
{
    double d2;
    double d3;
    double d4;
    double d6;
    uint32_t eax;
    uint32_t ecx;
    uint32_t loc_14;
    uint32_t t1;
    uint32_t t5;
    double x0;
    double x1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 32u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10096057u: eax = g->eax; in_esi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x14u); goto E_10096057;
    case 0x10096064u: eax = g->eax; in_esi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x14u); goto E_10096064;
    case 0x1009606fu: eax = g->eax; ecx = g->ecx; goto E_1009606f;
    case 0x10096084u: eax = g->eax; ecx = g->ecx; x1 = ST(0); x0 = ST(1); goto E_10096084;
    case 0x10096086u: eax = g->eax; ecx = g->ecx; x1 = ST(0); x0 = ST(1); goto E_10096086;
    case 0x10096095u: eax = g->eax; ecx = g->ecx; x0 = ST(0); goto E_10096095;
    case 0x1009609eu: eax = g->eax; ecx = g->ecx; x0 = ST(0); goto E_1009609e;
    case 0x100960d7u: eax = g->eax; ecx = g->ecx; goto E_100960d7;
    case 0x100960deu: eax = g->eax; ecx = g->ecx; loc_14 = rd32(sp0 - 0x14u); goto E_100960de;
    default: break;
    }
#endif

    COW_AT(10096040)
    wr32(sp0 - 0x14u, in_esi);
    if (rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40d7cu) != 9u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        loc_14 = in_esi;
        goto L_100960de;
    }
    eax = rd32(COW_IMG(0x104dfd98u));
    COW_AT(10096057)
    if (rd8(arg1 + 0xeeu) == 4u)
    {
        loc_14 = in_esi;
        goto L_100960de;
    }
    COW_AT(10096064)
    g->esp = sp0 - 0x14u;
    t1 = cow_call_regs(g, COW_IMG(0x101cc4f0u), eax, g->ecx, g->edx, 1, 0);
    if (t1 == 0u)
    {
        eax = t1;
        loc_14 = in_esi;
        goto L_100960de;
    }
    eax = t1;
    ecx = t1;
    COW_AT(1009606f)
    d2 = fr(g, (double)rdf32(arg1 + 8u) - (double)rdf32(ecx + 8u));
    if (!(d2 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        x1 = d2;
        x0 = d2;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        x1 = d2;
        x0 = d2;
    COW_AT(10096084)
        x1 = -x1;
    }
    COW_AT(10096086)
    if ((cow_fsw(g, x1, (double)rdf32(COW_IMG(0x1032a1acu)), 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, x1, (double)rdf32(COW_IMG(0x1032a1acu)), 1u) & 0x4100u;
        goto L_1009609e;
    }
    eax = cow_fsw(g, x1, (double)rdf32(COW_IMG(0x1032a1acu)), 1u) & 0x4100u;
    COW_AT(10096095)
    g->esi = rd32(sp0 - 0x14u);
    return (eax & 0xffffff00u) | 1u;
L_1009609e: ;
    COW_AT(1009609e)
    d3 = fr(g, (double)rdf32(arg1 + 4u) - (double)rdf32(ecx + 4u));
    wrf32(sp0 - 0x10u, (float)(double)(float)d3);
    wrf32(sp0 - 0xcu, (float)(double)(float)x0);
    d4 = fr(g, (double)rdf32(arg1 + 0xcu) - (double)rdf32(ecx + 0xcu));
    wr32(sp0 - 0x18u, sp0 - 0x10u);
    wr32(sp0 - 0x1cu, sp0 - 0x10u);
    wrf32(sp0 - 8u, (float)(double)(float)d4);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t5 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x10u, sp0 - 0x10u);
    d6 = cow_take_float(g);
    if ((cow_fsw(g, d6, (double)rdf32(COW_IMG(0x1032d6c4u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d6, (double)rdf32(COW_IMG(0x1032d6c4u)), 0u) & 0x4100u;
        loc_14 = rd32(sp0 - 0x14u);
        goto L_100960de;
    }
    eax = cow_fsw(g, d6, (double)rdf32(COW_IMG(0x1032d6c4u)), 0u) & 0x4100u;
    COW_AT(100960d7)
    g->esi = rd32(sp0 - 0x14u);
    return (eax & 0xffffff00u) | 1u;
L_100960de: ;
    COW_AT(100960de)
    g->esi = loc_14;
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10096040(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10096057u:
    {
        uint32_t eax;
        uint32_t in_esi;
        eax = g->eax;
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10096064u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t in_esi;
        eax = g->eax;
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1009606fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x14u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10096084u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x14u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10096086u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x14u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10096095u:
    {
        uint32_t eax;
        uint32_t ecx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        x0 = ST(0);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1009609eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        x0 = ST(0);
        g->esp = sp0 - 0x14u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100960d7u:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x1cu, sp0 - 0x10u);
        wr32(sp0 - 0x18u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100960deu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10096040(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10096040(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
