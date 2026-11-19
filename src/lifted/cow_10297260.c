/* f_0x10297260 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10297260(Guest* g)
{
    double d13;
    double d14;
    double d15;
    double d22;
    double d23;
    double d24;
    double d4;
    double d5;
    double d6;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    double loc_20_d;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t3;
    uint32_t t7;
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
    case 0x1029726cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1029726c;
    case 0x10297290u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_20_d = rdf64(sp0 - 0x20u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10297290;
    case 0x10297296u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_20_d = rdf64(sp0 - 0x20u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10297296;
    case 0x102972b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_20_d = rdf64(sp0 - 0x20u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_102972b7;
    case 0x102972bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_20_d = rdf64(sp0 - 0x20u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_102972bd;
    case 0x102972deu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_20_d = rdf64(sp0 - 0x20u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_102972de;
    default: break;
    }
#endif

    COW_AT(10297260)
    g->ecx = self;
    g->edx = in_edx;
    t1 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(1029726c)
    d4 = (double)rdf32(arg1 + 8u);
    d5 = (double)rdf32(arg1 + 4u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    d6 = (double)rdf32(arg1);
    g->esp = sp0 - 0x1cu;
    t7 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bbc2cu), cow_dlo(d6));
    t8 = g->ecx;
    t9 = g->edx;
    eax = t7;
    ecx = t8;
    edx = t9;
    loc_20_d = d6;
    COW_AT(10297290)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t10 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3, COW_IMG(0x103bbc2cu), cow_dlo(loc_20_d));
    t11 = g->ecx;
    t12 = g->edx;
    eax = t10;
    ecx = t11;
    edx = t12;
    COW_AT(10297296)
    d13 = (double)rdf32(arg1 + 0x14u);
    d14 = (double)rdf32(arg1 + 0x10u);
    d15 = (double)rdf32(arg1 + 0xcu);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t16 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bbc20u), cow_dlo(d15));
    t17 = g->ecx;
    t18 = g->edx;
    eax = t16;
    ecx = t17;
    edx = t18;
    loc_20_d = d15;
    COW_AT(102972b7)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t19 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3, COW_IMG(0x103bbc20u), cow_dlo(loc_20_d));
    t20 = g->ecx;
    t21 = g->edx;
    eax = t19;
    ecx = t20;
    edx = t21;
    COW_AT(102972bd)
    d22 = (double)rdf32(arg1 + 0x20u);
    d23 = (double)rdf32(arg1 + 0x1cu);
    d24 = (double)rdf32(arg1 + 0x18u);
    g->esp = sp0 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bbc14u), cow_dlo(d24));
    COW_AT(102972de)
    g->esi = in_esi;
    g->edi = in_edi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10297260(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1029726cu:
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
    case 0x10297290u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_20_d;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_20_d = rdf64(sp0 - 0x20u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x24u;
        g->esi = arg1;
        g->edi = arg3;
        wr32(sp0 - 0x24u, COW_IMG(0x103bbc2cu));
        (void)sp0;
        return 1;
    }
    case 0x10297296u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_20_d;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_20_d = rdf64(sp0 - 0x20u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        g->esi = arg1;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102972b7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_20_d;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_20_d = rdf64(sp0 - 0x20u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x24u;
        g->esi = arg1;
        g->edi = arg3;
        wr32(sp0 - 0x24u, COW_IMG(0x103bbc20u));
        (void)sp0;
        return 1;
    }
    case 0x102972bdu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_20_d;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_20_d = rdf64(sp0 - 0x20u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102972deu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_20_d;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_20_d = rdf64(sp0 - 0x20u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10297260(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10297260(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
