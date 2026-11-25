/* f_0x102a3410 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102a3410(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d19;
    double d26;
    double d33;
    double d40;
    double d53;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    double loc_10_d;
    uint32_t loc_1c;
    double loc_20_d;
    uint32_t t1;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t6;
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
    case 0x102a341cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_102a341c;
    case 0x102a342bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_102a342b;
    case 0x102a3431u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_102a3431;
    case 0x102a3451u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_20_d = rdf64(sp0 - 0x20u); loc_10_d = rdf64(sp0 - 0x10u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_102a3451;
    case 0x102a3457u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_20_d = rdf64(sp0 - 0x20u); loc_10_d = rdf64(sp0 - 0x10u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_102a3457;
    case 0x102a346au: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_20_d = rdf64(sp0 - 0x20u); loc_10_d = rdf64(sp0 - 0x10u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_102a346a;
    case 0x102a3470u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_20_d = rdf64(sp0 - 0x20u); loc_10_d = rdf64(sp0 - 0x10u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_102a3470;
    case 0x102a3483u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_20_d = rdf64(sp0 - 0x20u); loc_10_d = rdf64(sp0 - 0x10u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_102a3483;
    case 0x102a3489u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_20_d = rdf64(sp0 - 0x20u); loc_10_d = rdf64(sp0 - 0x10u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_102a3489;
    case 0x102a349cu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_20_d = rdf64(sp0 - 0x20u); loc_10_d = rdf64(sp0 - 0x10u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_102a349c;
    case 0x102a34a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_20_d = rdf64(sp0 - 0x20u); loc_10_d = rdf64(sp0 - 0x10u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_102a34a2;
    case 0x102a34b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_20_d = rdf64(sp0 - 0x20u); loc_10_d = rdf64(sp0 - 0x10u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_102a34b5;
    case 0x102a34bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_20_d = rdf64(sp0 - 0x20u); loc_10_d = rdf64(sp0 - 0x10u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_102a34bb;
    case 0x102a34cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_1c = rd32(sp0 - 0x1cu); loc_10_d = rdf64(sp0 - 0x10u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_102a34cb;
    case 0x102a34d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_1c = rd32(sp0 - 0x1cu); loc_10_d = rdf64(sp0 - 0x10u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_102a34d1;
    case 0x102a34e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_1c = rd32(sp0 - 0x1cu); loc_10_d = rdf64(sp0 - 0x10u); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_102a34e4;
    default: break;
    }
#endif

    COW_AT(102a3410)
    g->ecx = self;
    g->edx = in_edx;
    t1 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(102a341c)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bd718u), arg1);
    t5 = g->ecx;
    t6 = g->edx;
    eax = t4;
    ecx = t5;
    edx = t6;
    COW_AT(102a342b)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t7 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3, COW_IMG(0x103bd718u), arg1);
    t8 = g->ecx;
    t9 = g->edx;
    eax = t7;
    ecx = t8;
    edx = t9;
    COW_AT(102a3431)
    d10 = (double)rdf32(arg1 + 0x1cu);
    d11 = (double)rdf32(arg1 + 0x18u);
    d12 = (double)rdf32(arg1 + 0x14u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t13 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bd704u), cow_dlo(d12));
    t14 = g->ecx;
    t15 = g->edx;
    eax = t13;
    ecx = t14;
    edx = t15;
    loc_20_d = d12;
    COW_AT(102a3451)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t16 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3, COW_IMG(0x103bd704u), cow_dlo(loc_20_d));
    t17 = g->ecx;
    t18 = g->edx;
    eax = t16;
    ecx = t17;
    edx = t18;
    COW_AT(102a3457)
    d19 = (double)rdf32(arg1 + 0x20u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t20 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bd6f4u), cow_dlo(d19));
    t21 = g->ecx;
    t22 = g->edx;
    eax = t20;
    ecx = t21;
    edx = t22;
    loc_10_d = d19;
    COW_AT(102a346a)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t23 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3, COW_IMG(0x103bd6f4u), cow_dlo(loc_10_d));
    t24 = g->ecx;
    t25 = g->edx;
    eax = t23;
    ecx = t24;
    edx = t25;
    COW_AT(102a3470)
    d26 = (double)rdf32(arg1 + 0x24u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t27 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bd6e4u), cow_dlo(d26));
    t28 = g->ecx;
    t29 = g->edx;
    eax = t27;
    ecx = t28;
    edx = t29;
    loc_10_d = d26;
    COW_AT(102a3483)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t30 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3, COW_IMG(0x103bd6e4u), cow_dlo(loc_10_d));
    t31 = g->ecx;
    t32 = g->edx;
    eax = t30;
    ecx = t31;
    edx = t32;
    COW_AT(102a3489)
    d33 = (double)rdf32(arg1 + 0x28u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t34 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bd6d4u), cow_dlo(d33));
    t35 = g->ecx;
    t36 = g->edx;
    eax = t34;
    ecx = t35;
    edx = t36;
    loc_10_d = d33;
    COW_AT(102a349c)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t37 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3, COW_IMG(0x103bd6d4u), cow_dlo(loc_10_d));
    t38 = g->ecx;
    t39 = g->edx;
    eax = t37;
    ecx = t38;
    edx = t39;
    COW_AT(102a34a2)
    d40 = (double)rdf32(arg1 + 0x2cu);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t41 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bd6c4u), cow_dlo(d40));
    t42 = g->ecx;
    t43 = g->edx;
    eax = t41;
    ecx = t42;
    edx = t43;
    loc_10_d = d40;
    COW_AT(102a34b5)
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3, COW_IMG(0x103bd6c4u), cow_dlo(loc_10_d));
    t44 = g->ecx;
    t45 = g->edx;
    ecx = t44;
    edx = t45;
    COW_AT(102a34bb)
    t46 = rd8(arg1 + 0x34u);
    g->eax = t46;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t47 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bd6b4u), t46);
    t48 = g->ecx;
    t49 = g->edx;
    eax = t47;
    ecx = t48;
    edx = t49;
    loc_1c = t46;
    COW_AT(102a34cb)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t50 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3, COW_IMG(0x103bd6b4u), loc_1c);
    t51 = g->ecx;
    t52 = g->edx;
    eax = t50;
    ecx = t51;
    edx = t52;
    COW_AT(102a34d1)
    d53 = (double)rdf32(arg1 + 0x30u);
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bd6a0u), cow_dlo(d53));
    COW_AT(102a34e4)
    g->esi = in_esi;
    g->edi = in_edi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102a3410(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102a341cu:
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
    case 0x102a342bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x14u;
        g->esi = arg1;
        g->edi = arg3;
        wr32(sp0 - 0x14u, COW_IMG(0x103bd718u));
        wr32(sp0 - 0x10u, arg1);
        (void)sp0;
        return 1;
    }
    case 0x102a3431u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x18u;
        g->esi = arg1;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102a3451u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_d;
        double loc_20_d;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_20_d = rdf64(sp0 - 0x20u);
        loc_10_d = rdf64(sp0 - 0x10u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x24u;
        g->esi = arg1;
        g->edi = arg3;
        wr32(sp0 - 0x24u, COW_IMG(0x103bd704u));
        (void)sp0;
        return 1;
    }
    case 0x102a3457u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_d;
        double loc_20_d;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_20_d = rdf64(sp0 - 0x20u);
        loc_10_d = rdf64(sp0 - 0x10u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        g->esi = arg1;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102a346au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_d;
        double loc_20_d;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_20_d = rdf64(sp0 - 0x20u);
        loc_10_d = rdf64(sp0 - 0x10u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->esi = arg1;
        g->edi = arg3;
        wr32(sp0 - 0x14u, COW_IMG(0x103bd6f4u));
        (void)sp0;
        return 1;
    }
    case 0x102a3470u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_d;
        double loc_20_d;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_20_d = rdf64(sp0 - 0x20u);
        loc_10_d = rdf64(sp0 - 0x10u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->esi = arg1;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102a3483u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_d;
        double loc_20_d;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_20_d = rdf64(sp0 - 0x20u);
        loc_10_d = rdf64(sp0 - 0x10u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->esi = arg1;
        g->edi = arg3;
        wr32(sp0 - 0x14u, COW_IMG(0x103bd6e4u));
        (void)sp0;
        return 1;
    }
    case 0x102a3489u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_d;
        double loc_20_d;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_20_d = rdf64(sp0 - 0x20u);
        loc_10_d = rdf64(sp0 - 0x10u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->esi = arg1;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102a349cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_d;
        double loc_20_d;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_20_d = rdf64(sp0 - 0x20u);
        loc_10_d = rdf64(sp0 - 0x10u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->esi = arg1;
        g->edi = arg3;
        wr32(sp0 - 0x14u, COW_IMG(0x103bd6d4u));
        (void)sp0;
        return 1;
    }
    case 0x102a34a2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_d;
        double loc_20_d;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_20_d = rdf64(sp0 - 0x20u);
        loc_10_d = rdf64(sp0 - 0x10u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->esi = arg1;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102a34b5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_d;
        double loc_20_d;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_20_d = rdf64(sp0 - 0x20u);
        loc_10_d = rdf64(sp0 - 0x10u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->esi = arg1;
        g->edi = arg3;
        wr32(sp0 - 0x14u, COW_IMG(0x103bd6c4u));
        (void)sp0;
        return 1;
    }
    case 0x102a34bbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_d;
        double loc_20_d;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_20_d = rdf64(sp0 - 0x20u);
        loc_10_d = rdf64(sp0 - 0x10u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->esi = arg1;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102a34cbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_d;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10_d = rdf64(sp0 - 0x10u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        g->esi = arg1;
        g->edi = arg3;
        wr32(sp0 - 0x20u, COW_IMG(0x103bd6b4u));
        (void)sp0;
        return 1;
    }
    case 0x102a34d1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_d;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10_d = rdf64(sp0 - 0x10u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x24u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a34e4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_d;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10_d = rdf64(sp0 - 0x10u);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102a3410(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102a3410(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
