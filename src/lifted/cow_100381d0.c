/* f_0x100381d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100381d0(Guest* g)
{
    double d3;
    double d4;
    double d5;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    double loc_4_f;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t2;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100381f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100381f8;
    case 0x10038208u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10038208;
    case 0x10038211u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10038211;
    case 0x1003821fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1003821f;
    case 0x1003822cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1003822c;
    case 0x10038233u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10038233;
    case 0x1003823cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1003823c;
    case 0x10038252u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10038252;
    default: break;
    }
#endif

    COW_AT(100381d0)
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x10014cf0u), in_eax, g->ecx, g->edx, 1, 0);
    t1 = g->ecx;
    t2 = g->edx;
    d3 = cow_take_float(g);
    d4 = (double)(float)fr(g, (double)rdf32(self + 0x34u) - d3);
    d5 = (double)rdf32(COW_IMG(0x103295d8u));
    wr32(self + 0x34u, cow_f2bits(d4));
    if (!(d4 < d5))
    {
        ecx = t1;
        edx = t2;
        loc_4_f = d4;
        goto L_10038208;
    }
    eax = (cow_f2bits(d4) & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, d5, 0u);
    edx = t2;
    loc_4_f = d4;
    COW_AT(100381f8)
    t6 = rd32(self + 0x38u);
    g->eax = eax;
    g->ecx = t6;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t7 = cow_cdecl(g, COW_IMG(0x100367f0u), 1, t6);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 == 0u)
    {
        eax = t7;
        goto L_10038211;
    }
    ecx = t8;
    edx = t9;
L_10038208: ;
    COW_AT(10038208)
    if (rd32(COW_IMG(0x10351710u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10351710u));
        goto L_1003821f;
    }
    eax = rd32(COW_IMG(0x10351710u));
L_10038211: ;
    COW_AT(10038211)
    g->eax = eax;
    g->edx = rd32(self);
    t10 = rd32(self);
    g->esp = sp0 - 8u;
    t11 = cow_thiscall(g, rd32(t10 + 0x18u), self, 1, 1u);
    t12 = g->edx;
    g->esi = in_esi;
    g->edx = t12;
    return (t11 & 0xffffff00u) | 1u;
L_1003821f: ;
    COW_AT(1003821f)
    g->edx = edx;
    fpush(g, loc_4_f);
    g->esp = sp0 - 8u;
    t13 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t14 = g->edx;
    if ((t13 & 0x20u) == 0u)
    {
        eax = t13;
        edx = t14;
    }
    else
    {
        eax = t13;
        edx = t14;
    COW_AT(1003822c)
        if (rd8(self + 0x3cu) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x3cu);
        }
        else
        {
    COW_AT(10038233)
            if (rd32(COW_IMG(0x10455c20u)) == 0u)
            {
                eax = rd32(COW_IMG(0x10455c20u));
            }
            else
            {
                eax = rd32(COW_IMG(0x10455c20u));
    COW_AT(1003823c)
                t15 = rd32(eax + 0xdb4u);
                wr8(eax + 0xdbcu, 1u);
                wr32(eax + 0xdb4u, t15 + 0x3cu);
            }
        }
    }
    COW_AT(10038252)
    g->esi = in_esi;
    g->edx = edx;
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100381d0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100381f8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        double loc_4_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10038208u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        double loc_4_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10038211u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        double loc_4_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1003821fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        double loc_4_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1003822cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        double loc_4_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10038233u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        double loc_4_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1003823cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        double loc_4_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10038252u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        double loc_4_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100381d0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100381d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
