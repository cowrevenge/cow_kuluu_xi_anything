/* f_0x10280d30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10280d30(Guest* g)
{
    double d14;
    double d15;
    double d16;
    double d17;
    double d24;
    double d25;
    double d26;
    double d27;
    double d34;
    double d35;
    double d36;
    double d37;
    double d4;
    double d5;
    double d6;
    double d7;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    double loc_28_d;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10280d3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10280d3c;
    case 0x10280d67u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_28_d = rdf64(sp0 - 0x28u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10280d67;
    case 0x10280d6du: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_28_d = rdf64(sp0 - 0x28u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10280d6d;
    case 0x10280d95u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_28_d = rdf64(sp0 - 0x28u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10280d95;
    case 0x10280d9bu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_28_d = rdf64(sp0 - 0x28u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10280d9b;
    case 0x10280dc3u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_28_d = rdf64(sp0 - 0x28u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10280dc3;
    case 0x10280dc9u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_28_d = rdf64(sp0 - 0x28u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10280dc9;
    case 0x10280df1u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_28_d = rdf64(sp0 - 0x28u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10280df1;
    default: break;
    }
#endif

    COW_AT(10280d30)
    g->ecx = self;
    g->edx = in_edx;
    t1 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(10280d3c)
    d4 = (double)rdf32(arg1 + 0xcu);
    d5 = (double)rdf32(arg1 + 8u);
    d6 = (double)rdf32(arg1 + 4u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    d7 = (double)rdf32(arg1);
    g->esp = sp0 - 0x24u;
    t8 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b480cu), cow_dlo(d7));
    t9 = g->ecx;
    t10 = g->edx;
    eax = t8;
    ecx = t9;
    edx = t10;
    loc_28_d = d7;
    COW_AT(10280d67)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t11 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3, COW_IMG(0x103b480cu), cow_dlo(loc_28_d));
    t12 = g->ecx;
    t13 = g->edx;
    eax = t11;
    ecx = t12;
    edx = t13;
    COW_AT(10280d6d)
    d14 = (double)rdf32(arg1 + 0x1cu);
    d15 = (double)rdf32(arg1 + 0x18u);
    d16 = (double)rdf32(arg1 + 0x14u);
    d17 = (double)rdf32(arg1 + 0x10u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t18 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b47fcu), cow_dlo(d17));
    t19 = g->ecx;
    t20 = g->edx;
    eax = t18;
    ecx = t19;
    edx = t20;
    loc_28_d = d17;
    COW_AT(10280d95)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t21 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3, COW_IMG(0x103b47fcu), cow_dlo(loc_28_d));
    t22 = g->ecx;
    t23 = g->edx;
    eax = t21;
    ecx = t22;
    edx = t23;
    COW_AT(10280d9b)
    d24 = (double)rdf32(arg1 + 0x2cu);
    d25 = (double)rdf32(arg1 + 0x28u);
    d26 = (double)rdf32(arg1 + 0x24u);
    d27 = (double)rdf32(arg1 + 0x20u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t28 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b47fcu), cow_dlo(d27));
    t29 = g->ecx;
    t30 = g->edx;
    eax = t28;
    ecx = t29;
    edx = t30;
    loc_28_d = d27;
    COW_AT(10280dc3)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t31 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3, COW_IMG(0x103b47fcu), cow_dlo(loc_28_d));
    t32 = g->ecx;
    t33 = g->edx;
    eax = t31;
    ecx = t32;
    edx = t33;
    COW_AT(10280dc9)
    d34 = (double)rdf32(arg1 + 0x3cu);
    d35 = (double)rdf32(arg1 + 0x38u);
    d36 = (double)rdf32(arg1 + 0x34u);
    d37 = (double)rdf32(arg1 + 0x30u);
    g->esp = sp0 - 0x24u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b47ecu), cow_dlo(d37));
    COW_AT(10280df1)
    g->esi = in_esi;
    g->edi = in_edi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10280d30(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10280d3cu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10280d67u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_28_d;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_28_d = rdf64(sp0 - 0x28u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->esi = arg1;
        g->edi = arg3;
        wr32(sp0 - 0x2cu, COW_IMG(0x103b480cu));
        (void)sp0;
        return 1;
    }
    case 0x10280d6du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_28_d;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_28_d = rdf64(sp0 - 0x28u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x30u;
        g->esi = arg1;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10280d95u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_28_d;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_28_d = rdf64(sp0 - 0x28u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->esi = arg1;
        g->edi = arg3;
        wr32(sp0 - 0x2cu, COW_IMG(0x103b47fcu));
        (void)sp0;
        return 1;
    }
    case 0x10280d9bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_28_d;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_28_d = rdf64(sp0 - 0x28u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x30u;
        g->esi = arg1;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10280dc3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_28_d;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_28_d = rdf64(sp0 - 0x28u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->esi = arg1;
        g->edi = arg3;
        wr32(sp0 - 0x2cu, COW_IMG(0x103b47fcu));
        (void)sp0;
        return 1;
    }
    case 0x10280dc9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_28_d;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_28_d = rdf64(sp0 - 0x28u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x30u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10280df1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_28_d;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_28_d = rdf64(sp0 - 0x28u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10280d30(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10280d30(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
