/* f_0x10053c80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10053c80(Guest* g)
{
    double d15;
    double d16;
    double d18;
    double d19;
    double d5;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t17;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t3;
    uint32_t t4;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 60u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10053cd4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10053cd4;
    case 0x10053d1au: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10053d1a;
    case 0x10053d1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10053d1e;
    case 0x10053d40u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10053d40;
    case 0x10053d49u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10053d49;
    case 0x10053d54u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_10053d54;
    case 0x10053d60u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_10053d60;
    case 0x10053d75u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_10053d75;
    case 0x10053d7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_10053d7b;
    case 0x10053d86u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10053d86;
    case 0x10053d8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10053d8b;
    case 0x10053da0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10053da0;
    case 0x10053da3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10053da3;
    default: break;
    }
#endif

    COW_AT(10053c80)
    wr32(sp0 - 0x24u, in_ebx);
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x2cu, in_edi);
    t1 = (uint8_t)(rd32(rd32(sp0 + 4u) + 4u) >> 2u);
    wr32(sp0 - 0x20u, t1);
    t2 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
    t3 = rd32(sp0 + 4u);
    t4 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
    d5 = fr(g, (double)(int64_t)cow_i64(t1, 0u) * (double)rdf32(COW_IMG(0x10329e94u)));
    wr32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u, t2);
    t6 = rd32(self + 0x98u);
    wrf32(sp0 + 4u, (float)d5);
    if (t6 == 0u)
    {
        eax = t6;
        ebx = t3;
        edi = t4;
    COW_AT(10053d1a)
        wr32(sp0 - 0x30u, 0u);
        wr32(sp0 - 0x34u, 0u);
        edx = in_edx;
        loc_30 = 0u;
        loc_34 = 0u;
    }
    else
    {
        eax = t6;
        ebx = t3;
        edi = t4;
    COW_AT(10053cd4)
        t7 = rd32(eax + 4u);
        wr32(sp0 - 0x10u, t7);
        t8 = rd32(eax + 8u);
        wr32(sp0 - 0xcu, t8);
        t9 = rd32(eax + 0xcu);
        wr32(sp0 - 8u, t9);
        wr32(sp0 - 4u, 0x3f800000u);
        t10 = rd32(eax + 0x10u);
        wr32(sp0 - 0x20u, t10);
        t11 = rd32(eax + 0x14u);
        wr32(sp0 - 0x1cu, t11);
        wr32(sp0 - 0x30u, sp0 - 0x20u);
        t12 = rd32(eax + 0x18u);
        wr32(sp0 - 0x18u, t12);
        wr32(sp0 - 0x14u, 0x3f800000u);
        wr32(sp0 - 0x34u, sp0 - 0x10u);
        eax = sp0 - 0x20u;
        edx = t12;
        loc_30 = sp0 - 0x20u;
        loc_34 = sp0 - 0x10u;
    }
    COW_AT(10053d1e)
    wr32(sp0 - 0x38u, edi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t13 = cow_thiscall(g, COW_IMG(0x1003be10u), self + 0x30u, 3, edi, loc_34, loc_30);
    t14 = g->edx;
    d15 = cow_take_float(g);
    wrf32(self + 0x90u, (float)d15);
    d16 = (double)rdf32(self + 0x90u);
    if (d16 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (t13 & 0xffff0000u) | (uint16_t)cow_fsw(g, d16, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        edx = t14;
    }
    else
    {
        eax = (t13 & 0xffff0000u) | (uint16_t)cow_fsw(g, d16, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(10053d40)
        t17 = rd32(self + 0x90u);
        wr32(self + 0x78u, t17);
        edx = t17;
    }
    COW_AT(10053d49)
    if (rd8(ebx + 4u) & 1u)
    {
    COW_AT(10053d54)
        eax = arg2 + 0x30u;
        ecx = edi - arg2;
        edx = 4u;
L_10053d60: ;
    COW_AT(10053d60)
        d18 = fr(g, fr(g, fr(g, (double)rdf32(eax + ecx) - (double)rdf32(eax)) * (double)rdf32(sp0 + 4u)) + (double)rdf32(eax));
        wrf32(eax, (float)d18);
        if (edx != 1u)
        {
            eax = eax + 4u;
            edx = edx - 1u;
            goto L_10053d60;
        }
        edx = edx - 1u;
    }
    COW_AT(10053d75)
    if ((rd8(ebx + 4u) & 2u) != 0u)
    {
    COW_AT(10053d7b)
        eax = arg2;
        edx = edi - arg2;
        esi = 3u;
L_10053d86: ;
    COW_AT(10053d86)
        ecx = 4u;
L_10053d8b: ;
    COW_AT(10053d8b)
        d19 = fr(g, fr(g, fr(g, (double)rdf32(eax + edx) - (double)rdf32(eax)) * (double)rdf32(sp0 + 4u)) + (double)rdf32(eax));
        wrf32(eax, (float)d19);
        if (ecx != 1u)
        {
            eax = eax + 4u;
            ecx = ecx - 1u;
            goto L_10053d8b;
        }
        eax = eax + 4u;
    COW_AT(10053da0)
        if (esi != 1u)
        {
            esi = esi - 1u;
            goto L_10053d86;
        }
    }
    COW_AT(10053da3)
    t20 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
    t21 = rd32(COW_IMG(0x1047cf7cu));
    wr32(t21 + 0xa90u, t20);
    wr32(t20 * 4u + t21 + 0xa10u, edi);
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    g->edx = edx;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10053c80(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10053cd4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x10053d1au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x10053d1eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_30;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10053d40u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x10053d49u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x10053d54u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10053d60u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10053d75u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10053d7bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10053d86u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x10053d8bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x10053da0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x10053da3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10053c80(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10053c80(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
