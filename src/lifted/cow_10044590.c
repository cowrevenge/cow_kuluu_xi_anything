/* f_0x10044590 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10044590(Guest* g)
{
    double d11;
    double d15;
    double d17;
    double d20;
    double d21;
    double d22;
    double d23;
    double d24;
    double d25;
    double d4;
    double d9;
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t16;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t3;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100445dcu: eax = g->eax; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100445dc;
    case 0x10044618u: eax = g->eax; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10044618;
    default: break;
    }
#endif

    COW_AT(10044590)
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x1006bfd0u), in_eax, g->ecx, g->edx, 1, 1, 0x3f800000u);
    t2 = g->ecx;
    t3 = g->edx;
    d4 = cow_take_float(g);
    t5 = rd32(sp0 + 4u);
    wrf32(t5, (float)d4);
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 8u;
    t6 = cow_call_regs(g, COW_IMG(0x1006bfd0u), t1, g->ecx, g->edx, 1, 1, 0x3f800000u);
    t7 = g->ecx;
    t8 = g->edx;
    d9 = cow_take_float(g);
    wrf32(t5 + 4u, (float)d9);
    g->edx = t8;
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x1006bfd0u), t6, g->ecx, g->edx, 1, 1, 0x3f800000u);
    t10 = g->edx;
    d11 = cow_take_float(g);
    wrf32(t5 + 8u, (float)d11);
    g->eax = rd32(rd32(COW_IMG(0x1047cf7cu)));
    g->edx = t10;
    t12 = rd32(rd32(COW_IMG(0x1047cf7cu)));
    g->esp = sp0 - 4u;
    t13 = cow_thiscall(g, rd32(t12 + 0x94u), rd32(COW_IMG(0x1047cf7cu)), 1, t5);
    t14 = g->edx;
    d15 = cow_take_float(g);
    if ((cow_fsw(g, d15, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
    {
        esi = t5;
    }
    else
    {
        eax = cow_fsw(g, d15, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
        edx = t14;
        esi = t5;
    COW_AT(100445dc)
        g->esp = sp0 - 4u;
        t16 = cow_call_regs(g, COW_IMG(0x1006bf80u), eax, g->ecx, g->edx, 1, 1, arg2);
        d17 = cow_take_float(g);
        t18 = rd32(COW_IMG(0x1047cf7cu));
        t19 = rd32(rd32(COW_IMG(0x1047cf7cu)));
        d20 = fr(g, d17 + (double)rdf32(sp0 + 0xcu));
        wrf32(sp0 + 4u, (float)d20);
        cow_thiscall(g, rd32(t19 + 0x94u), t18, 1, esi);
        d21 = cow_take_float(g);
        d22 = fr(g, (double)rdf32(sp0 + 4u) / d21);
        d23 = fr(g, d22 * (double)rdf32(esi));
        wrf32(esi, (float)d23);
        d24 = fr(g, d22 * (double)rdf32(esi + 4u));
        wrf32(esi + 4u, (float)d24);
        d25 = fr(g, d22 * (double)rdf32(esi + 8u));
        wrf32(esi + 8u, (float)d25);
    }
    COW_AT(10044618)
    g->esi = in_esi;
    return esi;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10044590(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100445dcu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10044618u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10044590(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10044590(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
