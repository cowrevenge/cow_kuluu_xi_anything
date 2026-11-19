/* f_0x1000ed70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1000ed70(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_118;
    uint32_t loc_11c;
    uint32_t loc_120;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 324u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1000edb5u: eax = g->eax; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x120u); in_esi = rd32(sp0 - 0x11cu); loc_118 = rd32(sp0 - 0x118u); g->edi = rd32(sp0 - 0x120u); g->esi = rd32(sp0 - 0x11cu); goto E_1000edb5;
    case 0x1000edb9u: eax = g->eax; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x120u); in_esi = rd32(sp0 - 0x11cu); loc_118 = rd32(sp0 - 0x118u); g->edi = rd32(sp0 - 0x120u); g->esi = rd32(sp0 - 0x11cu); goto E_1000edb9;
    case 0x1000edc0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x120u); in_esi = rd32(sp0 - 0x11cu); loc_118 = rd32(sp0 - 0x118u); g->edi = rd32(sp0 - 0x120u); g->esi = rd32(sp0 - 0x11cu); goto E_1000edc0;
    case 0x1000edceu: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x120u); in_esi = rd32(sp0 - 0x11cu); loc_118 = rd32(sp0 - 0x118u); g->edi = rd32(sp0 - 0x120u); g->esi = rd32(sp0 - 0x11cu); goto E_1000edce;
    case 0x1000edd6u: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x120u); in_esi = rd32(sp0 - 0x11cu); loc_118 = rd32(sp0 - 0x118u); g->edi = rd32(sp0 - 0x120u); g->esi = rd32(sp0 - 0x11cu); goto E_1000edd6;
    case 0x1000edeau: eax = g->eax; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x120u); in_esi = rd32(sp0 - 0x11cu); g->edi = rd32(sp0 - 0x120u); g->esi = rd32(sp0 - 0x11cu); goto E_1000edea;
    case 0x1000ee16u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1000ee16;
    case 0x1000ee2au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1000ee2a;
    case 0x1000ee50u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1000ee50;
    case 0x1000ee54u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1000ee54;
    case 0x1000ee5cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1000ee5c;
    case 0x1000ee6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); goto E_1000ee6b;
    case 0x1000ee86u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1000ee86;
    case 0x1000ee8du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_120 = rd32(sp0 - 0x120u); loc_11c = rd32(sp0 - 0x11cu); loc_118 = rd32(sp0 - 0x118u); goto E_1000ee8d;
    case 0x1000ee9au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1000ee9a;
    case 0x1000eea2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1000eea2;
    case 0x1000eea9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1000eea9;
    default: break;
    }
#endif

    COW_AT(1000ed70)
    wr32(sp0 - 0x11cu, in_esi);
    wr32(sp0 - 0x120u, in_edi);
    wr32(sp0 - 0x10cu, self);
    wr32(sp0 - 0x124u, sp0 - 0x110u);
    wr32(sp0 - 0x128u, 0x2001fu);
    wr32(sp0 - 0x12cu, 0u);
    wr32(sp0 - 0x130u, arg1);
    wr32(sp0 - 0x134u, rd32(self));
    wr32(sp0 - 0x118u, 0u);
    wr32(sp0 - 0x110u, 0u);
    g->eax = rd32(self);
    g->edx = arg1;
    t1 = rd32(self);
    g->esp = sp0 - 0x120u;
    t2 = cow_stdcall(g, rd32(COW_IMG(0x1032901cu)), 5, t1, arg1, 0u, 0x2001fu, sp0 - 0x110u);   /* advapi32.dll!RegOpenKeyExA */
    t3 = g->edx;
    if (t2 != 0u)
    {
        eax = t2;
        edx = t3;
        esi = t2;
        goto L_1000edce;
    }
    eax = t2;
    edx = t3;
    COW_AT(1000edb5)
    if (0u)
    {
    COW_AT(1000edb9)
        wr32(sp0 - 0x124u, 0u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x120u;
        t4 = cow_stdcall(g, rd32(COW_IMG(0x10329024u)), 1, 0u);   /* advapi32.dll!RegCloseKey */
        t5 = g->edx;
        eax = t4;
        edx = t5;
    }
    COW_AT(1000edc0)
    wr32(sp0 - 0x118u, 0u);
    if (eax == 0u) goto L_1000edea;
    esi = eax;
L_1000edce: ;
    COW_AT(1000edce)
    if (1u)
    {
        loc_11c = in_esi;
        loc_120 = in_edi;
        goto L_1000ee8d;
    }
    COW_AT(1000edd6)
    wr32(sp0 - 0x124u, 0u);
    g->esp = sp0 - 0x120u;
    cow_stdcall(g, rd32(COW_IMG(0x10329024u)), 1, 0u);   /* advapi32.dll!RegCloseKey */
    g->esi = in_esi;
    g->edi = in_edi;
    return esi;
L_1000edea: ;
    COW_AT(1000edea)
    wr32(sp0 - 0x124u, sp0 - 0x108u);
    wr32(sp0 - 0x128u, 0u);
    wr32(sp0 - 0x12cu, 0u);
    wr32(sp0 - 0x130u, 0u);
    wr32(sp0 - 0x134u, sp0 - 0x114u);
    wr32(sp0 - 0x138u, sp0 - 0x100u);
    wr32(sp0 - 0x13cu, 0u);
    wr32(sp0 - 0x140u, 0u);
    wr32(sp0 - 0x114u, 0x100u);
    g->eax = sp0 - 0x100u;
    g->ecx = 0u;
    g->edx = sp0 - 0x114u;
    t6 = rd32(COW_IMG(0x10329004u));
    g->esp = sp0 - 0x120u;
    t7 = cow_stdcall(g, t6, 8, 0u, 0u, sp0 - 0x100u, sp0 - 0x114u, 0u, 0u, 0u, sp0 - 0x108u);   /* advapi32.dll!RegEnumKeyExA */
    t8 = g->ecx;
    t9 = g->edx;
    if (t7 != 0u)
    {
        ecx = t8;
        edx = t9;
        edi = self;
        goto L_1000ee54;
    }
    eax = t7;
    edx = t9;
    esi = t6;
L_1000ee16: ;
    COW_AT(1000ee16)
    wr32(sp0 - 0x124u, sp0 - 0x100u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x120u;
    t10 = cow_thiscall(g, COW_IMG(0x1000ed70u), sp0 - 0x118u, 1, sp0 - 0x100u);
    t11 = g->ecx;
    t12 = g->edx;
    if (t10 != 0u)
    {
        ecx = t11;
        edx = t12;
        edi = t10;
        goto L_1000ee9a;
    }
    eax = t10;
    edi = t10;
    COW_AT(1000ee2a)
    wr32(sp0 - 0x124u, sp0 - 0x108u);
    wr32(sp0 - 0x128u, eax);
    wr32(sp0 - 0x12cu, eax);
    wr32(sp0 - 0x130u, eax);
    wr32(sp0 - 0x134u, sp0 - 0x114u);
    wr32(sp0 - 0x138u, sp0 - 0x100u);
    wr32(sp0 - 0x13cu, edi);
    t13 = rd32(sp0 - 0x118u);
    wr32(sp0 - 0x140u, t13);
    wr32(sp0 - 0x114u, 0x100u);
    g->eax = sp0 - 0x114u;
    g->edx = t13;
    g->esp = sp0 - 0x120u;
    t14 = cow_thiscall(g, esi, sp0 - 0x100u, 8, t13, edi, sp0 - 0x100u, sp0 - 0x114u, eax, eax, eax, sp0 - 0x108u);
    t15 = g->ecx;
    t16 = g->edx;
    if (t14 == 0u)
    {
        eax = t14;
        edx = t16;
        goto L_1000ee16;
    }
    ecx = t15;
    edx = t16;
    COW_AT(1000ee50)
    edi = rd32(sp0 - 0x10cu);
L_1000ee54: ;
    COW_AT(1000ee54)
    if (rd32(sp0 - 0x118u) == 0u)
    {
        loc_118 = rd32(sp0 - 0x118u);
    }
    else
    {
        eax = rd32(sp0 - 0x118u);
    COW_AT(1000ee5c)
        wr32(sp0 - 0x124u, eax);
        g->edx = edx;
        g->esp = sp0 - 0x120u;
        cow_stdcall(g, rd32(COW_IMG(0x10329024u)), 1, eax);   /* advapi32.dll!RegCloseKey */
        t17 = g->edx;
        wr32(sp0 - 0x118u, 0u);
        edx = t17;
        loc_118 = 0u;
    }
    COW_AT(1000ee6b)
    wr32(sp0 - 0x124u, arg1);
    wr32(sp0 - 0x128u, rd32(edi));
    g->eax = arg1;
    g->ecx = rd32(edi);
    g->edx = edx;
    t18 = rd32(edi);
    g->esp = sp0 - 0x120u;
    t19 = cow_stdcall(g, rd32(COW_IMG(0x10329000u)), 2, t18, arg1);   /* advapi32.dll!RegDeleteKeyA */
    t20 = g->ecx;
    t21 = g->edx;
    if (rd32(sp0 - 0x118u) == 0u)
    {
        esi = t19;
        loc_11c = rd32(sp0 - 0x11cu);
        loc_120 = rd32(sp0 - 0x120u);
    }
    else
    {
        eax = rd32(sp0 - 0x118u);
        ecx = t20;
        edx = t21;
        esi = t19;
    COW_AT(1000ee86)
        wr32(sp0 - 0x124u, eax);
        g->esp = sp0 - 0x120u;
        cow_stdcall(g, rd32(COW_IMG(0x10329024u)), 1, eax);   /* advapi32.dll!RegCloseKey */
        loc_11c = rd32(sp0 - 0x11cu);
        loc_120 = rd32(sp0 - 0x120u);
    }
L_1000ee8d: ;
    COW_AT(1000ee8d)
    g->esi = loc_11c;
    g->edi = loc_120;
    return esi;
L_1000ee9a: ;
    COW_AT(1000ee9a)
    if (rd32(sp0 - 0x118u) != 0u)
    {
        eax = rd32(sp0 - 0x118u);
    COW_AT(1000eea2)
        wr32(sp0 - 0x124u, eax);
        g->esp = sp0 - 0x120u;
        cow_stdcall(g, rd32(COW_IMG(0x10329024u)), 1, eax);   /* advapi32.dll!RegCloseKey */
    }
    COW_AT(1000eea9)
    g->esi = rd32(sp0 - 0x11cu);
    g->edi = rd32(sp0 - 0x120u);
    return edi;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1000ed70(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1000edb5u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_118;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x120u);
        in_esi = rd32(sp0 - 0x11cu);
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x120u;
        g->ecx = 0u;
        wr32(sp0 - 0x124u, sp0 - 0x110u);
        wr32(sp0 - 0x110u, 0u);
        wr32(sp0 - 0x10cu, self);
        (void)sp0;
        return 1;
    }
    case 0x1000edb9u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_118;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x120u);
        in_esi = rd32(sp0 - 0x11cu);
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x120u;
        g->ecx = 0u;
        wr32(sp0 - 0x124u, sp0 - 0x110u);
        wr32(sp0 - 0x110u, 0u);
        wr32(sp0 - 0x10cu, self);
        (void)sp0;
        return 1;
    }
    case 0x1000edc0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x120u);
        in_esi = rd32(sp0 - 0x11cu);
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x110u, 0u);
        wr32(sp0 - 0x10cu, self);
        (void)sp0;
        return 1;
    }
    case 0x1000edceu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_118;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x120u);
        in_esi = rd32(sp0 - 0x11cu);
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x120u;
        g->ecx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000edd6u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_118;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x120u);
        in_esi = rd32(sp0 - 0x11cu);
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x120u;
        g->ecx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000edeau:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x120u);
        in_esi = rd32(sp0 - 0x11cu);
        g->esp = sp0 - 0x120u;
        g->ecx = 0u;
        wr32(sp0 - 0x118u, 0u);
        wr32(sp0 - 0x10cu, self);
        (void)sp0;
        return 1;
    }
    case 0x1000ee16u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x138u, sp0 - 0x100u);
        wr32(sp0 - 0x134u, sp0 - 0x114u);
        wr32(sp0 - 0x124u, sp0 - 0x108u);
        (void)sp0;
        return 1;
    }
    case 0x1000ee2au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x138u, sp0 - 0x100u);
        wr32(sp0 - 0x134u, sp0 - 0x114u);
        wr32(sp0 - 0x124u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x1000ee50u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x138u, sp0 - 0x100u);
        wr32(sp0 - 0x134u, sp0 - 0x114u);
        wr32(sp0 - 0x124u, sp0 - 0x108u);
        (void)sp0;
        return 1;
    }
    case 0x1000ee54u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x138u, sp0 - 0x100u);
        wr32(sp0 - 0x134u, sp0 - 0x114u);
        wr32(sp0 - 0x124u, sp0 - 0x108u);
        (void)sp0;
        return 1;
    }
    case 0x1000ee5cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x138u, sp0 - 0x100u);
        wr32(sp0 - 0x134u, sp0 - 0x114u);
        wr32(sp0 - 0x124u, sp0 - 0x108u);
        (void)sp0;
        return 1;
    }
    case 0x1000ee6bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x138u, sp0 - 0x100u);
        wr32(sp0 - 0x134u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x1000ee86u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x138u, sp0 - 0x100u);
        wr32(sp0 - 0x134u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x1000ee8du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_118;
        uint32_t loc_11c;
        uint32_t loc_120;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c = rd32(sp0 - 0x11cu);
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x1000ee9au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x138u, sp0 - 0x100u);
        wr32(sp0 - 0x134u, sp0 - 0x114u);
        wr32(sp0 - 0x124u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x1000eea2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x138u, sp0 - 0x100u);
        wr32(sp0 - 0x134u, sp0 - 0x114u);
        wr32(sp0 - 0x124u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x1000eea9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x138u, sp0 - 0x100u);
        wr32(sp0 - 0x134u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1000ed70(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1000ed70(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
