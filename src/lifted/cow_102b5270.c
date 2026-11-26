/* f_0x102b5270 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=5 */
uint32_t cow_fn_102b5270(Guest* g)
{
    double d15;
    double d16;
    double d17;
    double d18;
    double d19;
    double d20;
    double d21;
    double d7;
    double d9;
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t8;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 32u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102b527du: eax = g->eax; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_102b527d;
    case 0x102b5296u: eax = g->eax; edx = g->edx; esi = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102b5296;
    case 0x102b529eu: in_eax = g->eax; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_102b529e;
    case 0x102b52bau: eax = g->eax; edx = g->edx; esi = g->esi; loc_c = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); goto E_102b52ba;
    case 0x102b52dfu: eax = g->eax; edx = g->edx; esi = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102b52df;
    case 0x102b5327u: eax = g->eax; edx = g->edx; esi = g->esi; loc_c = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); goto E_102b5327;
    default: break;
    }
#endif

    COW_AT(102b5270)
    wr32(sp0 - 0xcu, in_esi);
    if (rd32(sp0 + 0x14u) != 1u)
    {
        esi = rd32(sp0 + 0x14u);
        goto L_102b529e;
    }
    COW_AT(102b527d)
    t1 = rd32(sp0 + 0x10u);
    wr32(sp0 - 0x10u, t1);
    t2 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x14u, t2);
    t3 = rd32(sp0 + 8u);
    wr32(sp0 - 0x18u, t3);
    t4 = rd32(sp0 + 4u);
    wr32(sp0 - 0x1cu, t4);
    g->edx = t3;
    g->esp = sp0 - 0xcu;
    t5 = cow_call_regs(g, COW_IMG(0x102b4f50u), t4, g->ecx, g->edx, 1, 4, t4, t3, t2, t1);
    t6 = g->edx;
    d7 = cow_take_float(g);
    eax = t5;
    edx = t6;
    x0 = d7;
    COW_AT(102b5296)
    g->esi = rd32(sp0 - 0xcu);
    g->edx = edx;
    fpush(g, x0);
    return eax;
L_102b529e: ;
    COW_AT(102b529e)
    wr32(sp0 + 0x14u, 0x3f800000u);
    wr32(sp0 - 4u, 0u);
    wr32(sp0 - 8u, 0u);
    if (esi == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        loc_c = in_esi;
        loc_4 = 0u;
        goto L_102b5327;
    }
    loc_c = in_esi;
    loc_4 = 0u;
L_102b52ba: ;
    COW_AT(102b52ba)
    t8 = rd32(sp0 + 0x10u);
    d9 = fr(g, cow_bits2f(loc_4) + (double)rdf32(sp0 + 0x14u));
    wr32(sp0 - 0x10u, t8);
    t10 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x14u, t10);
    wrf32(sp0 - 4u, (float)(double)(float)d9);
    t11 = rd32(sp0 + 8u);
    wr32(sp0 - 0x18u, t11);
    t12 = rd32(sp0 + 4u);
    wr32(sp0 - 0x1cu, t12);
    g->edx = t10;
    g->esp = sp0 - 0xcu;
    t13 = cow_call_regs(g, COW_IMG(0x102b4f50u), t11, g->ecx, g->edx, 1, 4, t12, t11, t10, t8);
    t14 = g->edx;
    d15 = cow_take_float(g);
    eax = t13;
    edx = t14;
    x0 = d15;
    COW_AT(102b52df)
    d16 = fr(g, fr(g, x0 * (double)rdf32(sp0 + 0x14u)) + (double)rdf32(sp0 - 8u));
    wrf32(sp0 - 8u, (float)(double)(float)d16);
    d17 = fr(g, (double)rdf32(sp0 + 0x14u) * (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 + 0x14u, (float)d17);
    d18 = (double)rdf32(sp0 + 4u);
    wrf32(sp0 + 4u, (float)fr(g, d18 + d18));
    d19 = (double)rdf32(sp0 + 8u);
    wrf32(sp0 + 8u, (float)fr(g, d19 + d19));
    d20 = (double)rdf32(sp0 + 0xcu);
    wrf32(sp0 + 0xcu, (float)fr(g, d20 + d20));
    d21 = (double)rdf32(sp0 + 0x10u);
    wrf32(sp0 + 0x10u, (float)fr(g, d21 + d21));
    if (esi != 1u)
    {
        esi = esi - 1u;
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        goto L_102b52ba;
    }
    loc_c = rd32(sp0 - 0xcu);
    loc_4 = rd32(sp0 - 4u);
L_102b5327: ;
    COW_AT(102b5327)
    g->esi = loc_c;
    g->edx = edx;
    fpush(g, fr(g, (double)rdf32(sp0 - 8u) / cow_bits2f(loc_4)));
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102b5270(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102b527du:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x102b5296u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x102b529eu:
    {
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x102b52bau:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x102b52dfu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x102b5327u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102b5270(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102b5270(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
