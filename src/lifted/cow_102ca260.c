/* f_0x102ca260 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_102ca260(Guest* g)
{
    double d11;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    double loc_2010_f;
    uint32_t loc_2014;
    uint32_t t1;
    uint32_t t10;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 8240u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102ca26au: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_102ca26a;
    case 0x102ca297u: ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x2020u); in_esi = rd32(sp0 - 0x201cu); in_ebx = rd32(sp0 - 0x2018u); loc_2014 = rd32(sp0 - 0x2014u); g->ebx = rd32(sp0 - 0x2018u); g->edi = rd32(sp0 - 0x2020u); g->esi = rd32(sp0 - 0x201cu); goto E_102ca297;
    case 0x102ca29bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; in_ebp = rd32(sp0 - 0x2024u); in_edi = rd32(sp0 - 0x2020u); in_esi = rd32(sp0 - 0x201cu); in_ebx = rd32(sp0 - 0x2018u); loc_2014 = rd32(sp0 - 0x2014u); g->ebp = rd32(sp0 - 0x2024u); g->ebx = rd32(sp0 - 0x2018u); g->edi = rd32(sp0 - 0x2020u); g->esi = rd32(sp0 - 0x201cu); goto E_102ca29b;
    case 0x102ca2a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; in_ebp = rd32(sp0 - 0x2024u); in_edi = rd32(sp0 - 0x2020u); in_esi = rd32(sp0 - 0x201cu); in_ebx = rd32(sp0 - 0x2018u); loc_2014 = rd32(sp0 - 0x2014u); g->ebp = rd32(sp0 - 0x2024u); g->ebx = rd32(sp0 - 0x2018u); g->edi = rd32(sp0 - 0x2020u); g->esi = rd32(sp0 - 0x201cu); goto E_102ca2a7;
    case 0x102ca2a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x2020u); in_esi = rd32(sp0 - 0x201cu); in_ebx = rd32(sp0 - 0x2018u); loc_2014 = rd32(sp0 - 0x2014u); g->ebx = rd32(sp0 - 0x2018u); g->edi = rd32(sp0 - 0x2020u); g->esi = rd32(sp0 - 0x201cu); goto E_102ca2a8;
    case 0x102ca2cau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; goto E_102ca2ca;
    case 0x102ca2d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; goto E_102ca2d1;
    case 0x102ca2e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; goto E_102ca2e0;
    case 0x102ca2e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; loc_2010_f = rdf32(sp0 - 0x2010u); goto E_102ca2e2;
    case 0x102ca2f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; loc_2010_f = rdf32(sp0 - 0x2010u); goto E_102ca2f8;
    case 0x102ca300u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; loc_2010_f = rdf32(sp0 - 0x2010u); goto E_102ca300;
    case 0x102ca310u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; loc_2010_f = rdf32(sp0 - 0x2010u); goto E_102ca310;
    case 0x102ca318u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; loc_2010_f = rdf32(sp0 - 0x2010u); goto E_102ca318;
    case 0x102ca31bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; loc_2010_f = rdf32(sp0 - 0x2010u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102ca31b;
    case 0x102ca33bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; loc_2010_f = rdf32(sp0 - 0x2010u); goto E_102ca33b;
    case 0x102ca343u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; loc_2010_f = rdf32(sp0 - 0x2010u); goto E_102ca343;
    case 0x102ca353u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; loc_2010_f = rdf32(sp0 - 0x2010u); goto E_102ca353;
    case 0x102ca35bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; loc_2010_f = rdf32(sp0 - 0x2010u); goto E_102ca35b;
    case 0x102ca35eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; loc_2010_f = rdf32(sp0 - 0x2010u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102ca35e;
    case 0x102ca390u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; loc_2010_f = rdf32(sp0 - 0x2010u); goto E_102ca390;
    default: break;
    }
#endif

    COW_AT(102ca260)
    COW_AT(102ca26a)
    wr32(sp0 - 0x2018u, in_ebx);
    wr32(sp0 - 0x201cu, in_esi);
    wr32(sp0 - 0x2020u, in_edi);
    t1 = rd32(arg1 + 0x24u);
    wr32(sp0 - 0x2014u, t1);
    t2 = rd32(t1) + 1u;
    wr32(t1, t2);
    if ((int32_t)rd32(arg1 + 0x28u) <= 0)
    {
        eax = 0u;
        ecx = t1 + 0x1003u & 0xfffff000u;
        edx = in_edx;
        loc_2014 = t1;
    }
    else
    {
        ecx = t1 + 0x1003u & 0xfffff000u;
        esi = rd32(arg1 + 0x28u);
        loc_2014 = t1;
    COW_AT(102ca297)
        wr32(sp0 - 0x2024u, in_ebp);
        eax = 0u;
        edx = in_edx;
        ebp = rd32(arg1 + 0x1cu);
L_102ca29b: ;
    COW_AT(102ca29b)
        t3 = rd8(eax + ebp);
        wr8(eax + sp0 - 0x2000u, (uint8_t)t3);
        if ((int32_t)(eax + 1u) < (int32_t)esi)
        {
            eax = eax + 1u;
            edx = (edx & 0xffffff00u) | t3;
            goto L_102ca29b;
        }
        eax = eax + 1u;
        edx = (edx & 0xffffff00u) | t3;
    COW_AT(102ca2a7)
    }
    COW_AT(102ca2a8)
    wr8(eax + sp0 - 0x2000u, 0u);
    wr32(sp0 - 0x2024u, ecx);
    wr8(eax + sp0 - 0x1fffu, 0u);
    wr8(eax + sp0 - 0x1ffeu, 0u);
    wr8(eax + sp0 - 0x1ffdu, 0u);
    wr32(sp0 - 0x2028u, sp0 - 0x2008u);
    wr32(sp0 - 0x202cu, sp0 - 0x2000u);
    g->eax = sp0 - 0x2008u;
    g->esp = sp0 - 0x2008u;
    t4 = cow_call_regs(g, COW_IMG(0x102cec10u), g->eax, g->ecx, edx, 1, 9, sp0 - 0x2000u, sp0 - 0x2008u, ecx, in_edi, in_esi, in_ebx, loc_2014, rd32(sp0 - 0x2010u), rd32(sp0 - 0x200cu));
    eax = t4;
    COW_AT(102ca2ca)
    if ((int32_t)eax >= 0) goto L_102ca2e0;
    COW_AT(102ca2d1)
    g->ebx = rd32(sp0 - 0x2018u);
    g->esi = rd32(sp0 - 0x201cu);
    g->edi = rd32(sp0 - 0x2020u);
    g->ebp = in_ebp;
    return 0x80000005u;
L_102ca2e0: ;
    COW_AT(102ca2e0)
    ecx = 0u;
L_102ca2e2: ;
    COW_AT(102ca2e2)
    d5 = (double)rdf32(ecx + rd32(sp0 - 0x2008u));
    if ((cow_fsw(g, d5, (double)rdf32(COW_IMG(0x10343998u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d5, (double)rdf32(COW_IMG(0x10343998u)), 0u) & 0x4100u;
        edx = rd32(sp0 - 0x2008u);
    COW_AT(102ca300)
        d6 = (double)rdf32(ecx + edx);
        if (!(d6 < (double)rdf32(COW_IMG(0x10343994u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d6, (double)rdf32(COW_IMG(0x10343994u)), 0u);
    COW_AT(102ca318)
            x0 = (double)rdf32(ecx + edx);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d6, (double)rdf32(COW_IMG(0x10343994u)), 0u);
    COW_AT(102ca310)
            x0 = (double)rdf32(COW_IMG(0x10343994u));
        }
    }
    else
    {
        eax = cow_fsw(g, d5, (double)rdf32(COW_IMG(0x10343998u)), 0u) & 0x4100u;
    COW_AT(102ca2f8)
        x0 = (double)rdf32(COW_IMG(0x10343998u));
    }
    COW_AT(102ca31b)
    d7 = fr(g, x0 + (double)rdf32(COW_IMG(0x10343990u)));
    wrf32(sp0 - 0x2010u, (float)(double)(float)d7);
    d8 = (double)rdf32(ecx + rd32(sp0 - 0x2004u));
    if ((cow_fsw(g, d8, (double)rdf32(COW_IMG(0x10343998u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d8, (double)rdf32(COW_IMG(0x10343998u)), 0u) & 0x4100u;
        edx = rd32(sp0 - 0x2004u);
        loc_2010_f = (double)(float)d7;
    COW_AT(102ca343)
        d9 = (double)rdf32(ecx + edx);
        if (!(d9 < (double)rdf32(COW_IMG(0x10343994u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d9, (double)rdf32(COW_IMG(0x10343994u)), 0u);
    COW_AT(102ca35b)
            x0 = (double)rdf32(ecx + edx);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d9, (double)rdf32(COW_IMG(0x10343994u)), 0u);
    COW_AT(102ca353)
            x0 = (double)rdf32(COW_IMG(0x10343994u));
        }
    }
    else
    {
        eax = cow_fsw(g, d8, (double)rdf32(COW_IMG(0x10343998u)), 0u) & 0x4100u;
        loc_2010_f = (double)(float)d7;
    COW_AT(102ca33b)
        x0 = (double)rdf32(COW_IMG(0x10343998u));
    }
    COW_AT(102ca35e)
    t10 = rd16(sp0 - 0x2010u);
    d11 = fr(g, x0 + (double)rdf32(COW_IMG(0x10343990u)));
    wr16(ecx + rd32(arg1 + 0x20u), (uint16_t)t10);
    wrf32(sp0 - 0x200cu, (float)(double)(float)d11);
    t12 = rd16(sp0 - 0x200cu);
    wr16(ecx + rd32(arg1 + 0x20u) + 2u, (uint16_t)t12);
    if ((int32_t)(ecx + 4u) < 4096)
    {
        eax = ((eax | t10) & 0xffff0000u) | t12;
        ecx = ecx + 4u;
        goto L_102ca2e2;
    }
    COW_AT(102ca390)
    g->ebx = rd32(sp0 - 0x2018u);
    g->esi = rd32(sp0 - 0x201cu);
    g->edi = rd32(sp0 - 0x2020u);
    g->ebp = in_ebp;
    return (rd32(rd32(sp0 - 0x2014u)) != 1u) + 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102ca260(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102ca26au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x2014u;
        (void)sp0;
        return 1;
    }
    case 0x102ca297u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_2014;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x2020u);
        in_esi = rd32(sp0 - 0x201cu);
        in_ebx = rd32(sp0 - 0x2018u);
        loc_2014 = rd32(sp0 - 0x2014u);
        g->esp = sp0 - 0x2020u;
        g->eax = 0u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ca29bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_2014;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        in_ebp = rd32(sp0 - 0x2024u);
        in_edi = rd32(sp0 - 0x2020u);
        in_esi = rd32(sp0 - 0x201cu);
        in_ebx = rd32(sp0 - 0x2018u);
        loc_2014 = rd32(sp0 - 0x2014u);
        g->esp = sp0 - 0x2024u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ca2a7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_2014;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        in_ebp = rd32(sp0 - 0x2024u);
        in_edi = rd32(sp0 - 0x2020u);
        in_esi = rd32(sp0 - 0x201cu);
        in_ebx = rd32(sp0 - 0x2018u);
        loc_2014 = rd32(sp0 - 0x2014u);
        g->esp = sp0 - 0x2024u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ca2a8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_2014;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x2020u);
        in_esi = rd32(sp0 - 0x201cu);
        in_ebx = rd32(sp0 - 0x2018u);
        loc_2014 = rd32(sp0 - 0x2014u);
        g->esp = sp0 - 0x2020u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ca2cau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x202cu;
        g->edi = arg1;
        wr32(sp0 - 0x202cu, sp0 - 0x2000u);
        wr32(sp0 - 0x2028u, sp0 - 0x2008u);
        (void)sp0;
        return 1;
    }
    case 0x102ca2d1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x2020u;
        wr32(sp0 - 0x202cu, sp0 - 0x2000u);
        wr32(sp0 - 0x2028u, sp0 - 0x2008u);
        (void)sp0;
        return 1;
    }
    case 0x102ca2e0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x2020u;
        g->edi = arg1;
        wr32(sp0 - 0x202cu, sp0 - 0x2000u);
        wr32(sp0 - 0x2028u, sp0 - 0x2008u);
        (void)sp0;
        return 1;
    }
    case 0x102ca2e2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        double loc_2010_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        loc_2010_f = rdf32(sp0 - 0x2010u);
        g->esp = sp0 - 0x2020u;
        g->edi = arg1;
        wr32(sp0 - 0x202cu, sp0 - 0x2000u);
        wr32(sp0 - 0x2028u, sp0 - 0x2008u);
        (void)sp0;
        return 1;
    }
    case 0x102ca2f8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        double loc_2010_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        loc_2010_f = rdf32(sp0 - 0x2010u);
        g->esp = sp0 - 0x2020u;
        g->edi = arg1;
        wr32(sp0 - 0x202cu, sp0 - 0x2000u);
        wr32(sp0 - 0x2028u, sp0 - 0x2008u);
        (void)sp0;
        return 1;
    }
    case 0x102ca300u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        double loc_2010_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        loc_2010_f = rdf32(sp0 - 0x2010u);
        g->esp = sp0 - 0x2020u;
        g->edi = arg1;
        wr32(sp0 - 0x202cu, sp0 - 0x2000u);
        wr32(sp0 - 0x2028u, sp0 - 0x2008u);
        (void)sp0;
        return 1;
    }
    case 0x102ca310u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        double loc_2010_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        loc_2010_f = rdf32(sp0 - 0x2010u);
        g->esp = sp0 - 0x2020u;
        g->edi = arg1;
        wr32(sp0 - 0x202cu, sp0 - 0x2000u);
        wr32(sp0 - 0x2028u, sp0 - 0x2008u);
        (void)sp0;
        return 1;
    }
    case 0x102ca318u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        double loc_2010_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        loc_2010_f = rdf32(sp0 - 0x2010u);
        g->esp = sp0 - 0x2020u;
        g->edi = arg1;
        wr32(sp0 - 0x202cu, sp0 - 0x2000u);
        wr32(sp0 - 0x2028u, sp0 - 0x2008u);
        (void)sp0;
        return 1;
    }
    case 0x102ca31bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        double loc_2010_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        loc_2010_f = rdf32(sp0 - 0x2010u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x2020u;
        g->edi = arg1;
        wr32(sp0 - 0x202cu, sp0 - 0x2000u);
        wr32(sp0 - 0x2028u, sp0 - 0x2008u);
        (void)sp0;
        return 1;
    }
    case 0x102ca33bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        double loc_2010_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        loc_2010_f = rdf32(sp0 - 0x2010u);
        g->esp = sp0 - 0x2020u;
        g->edi = arg1;
        wr32(sp0 - 0x202cu, sp0 - 0x2000u);
        wr32(sp0 - 0x2028u, sp0 - 0x2008u);
        (void)sp0;
        return 1;
    }
    case 0x102ca343u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        double loc_2010_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        loc_2010_f = rdf32(sp0 - 0x2010u);
        g->esp = sp0 - 0x2020u;
        g->edi = arg1;
        wr32(sp0 - 0x202cu, sp0 - 0x2000u);
        wr32(sp0 - 0x2028u, sp0 - 0x2008u);
        (void)sp0;
        return 1;
    }
    case 0x102ca353u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        double loc_2010_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        loc_2010_f = rdf32(sp0 - 0x2010u);
        g->esp = sp0 - 0x2020u;
        g->edi = arg1;
        wr32(sp0 - 0x202cu, sp0 - 0x2000u);
        wr32(sp0 - 0x2028u, sp0 - 0x2008u);
        (void)sp0;
        return 1;
    }
    case 0x102ca35bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        double loc_2010_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        loc_2010_f = rdf32(sp0 - 0x2010u);
        g->esp = sp0 - 0x2020u;
        g->edi = arg1;
        wr32(sp0 - 0x202cu, sp0 - 0x2000u);
        wr32(sp0 - 0x2028u, sp0 - 0x2008u);
        (void)sp0;
        return 1;
    }
    case 0x102ca35eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        double loc_2010_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        loc_2010_f = rdf32(sp0 - 0x2010u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x2020u;
        g->edi = arg1;
        wr32(sp0 - 0x202cu, sp0 - 0x2000u);
        wr32(sp0 - 0x2028u, sp0 - 0x2008u);
        (void)sp0;
        return 1;
    }
    case 0x102ca390u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        double loc_2010_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        loc_2010_f = rdf32(sp0 - 0x2010u);
        g->esp = sp0 - 0x2020u;
        wr32(sp0 - 0x202cu, sp0 - 0x2000u);
        wr32(sp0 - 0x2028u, sp0 - 0x2008u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102ca260(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102ca260(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
