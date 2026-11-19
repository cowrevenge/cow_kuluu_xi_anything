/* f_0x101dc700 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101dc700(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_8;
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
    uint32_t t2;
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
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101dc72fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101dc72f;
    case 0x101dc736u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101dc736;
    case 0x101dc73au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101dc73a;
    case 0x101dc741u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101dc741;
    case 0x101dc745u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101dc745;
    case 0x101dc74cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101dc74c;
    case 0x101dc753u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101dc753;
    case 0x101dc75au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101dc75a;
    case 0x101dc761u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101dc761;
    case 0x101dc768u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101dc768;
    case 0x101dc76fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101dc76f;
    case 0x101dc776u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101dc776;
    case 0x101dc77du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101dc77d;
    case 0x101dc784u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101dc784;
    case 0x101dc78bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101dc78b;
    case 0x101dc792u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101dc792;
    case 0x101dc799u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101dc799;
    case 0x101dc7a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101dc7a0;
    case 0x101dc7a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101dc7a2;
    case 0x101dc7c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101dc7c2;
    case 0x101dc7d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101dc7d5;
    default: break;
    }
#endif

    COW_AT(101dc700)
    t1 = rd32(COW_IMG(0x10663740u));
    wr8(t1 + 0x91u, 1u);
    g->eax = t1;
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, COW_IMG(0x101f23a0u), rd32(COW_IMG(0x10663740u)), 1, rd32(COW_IMG(0x1066346cu)));
    g->edx = rd32(rd32(self + 0x58u));
    t3 = rd32(self + 0x58u);
    t4 = rd32(rd32(self + 0x58u));
    t5 = cow_thiscall(g, rd32(t4 + 0x54u), t3, 0);
    t6 = g->ecx;
    t7 = g->edx;
    if (t5 - 1u > 0x10u)
    {
        eax = t5 - 1u;
        ecx = t6;
        edx = t7;
        goto L_101dc7a0;
    }
    eax = t5 - 1u;
    ecx = t6;
    edx = t7;
    COW_AT(101dc72f)
    t8 = rd32(COW_IMG(0x101dc7e4u) + eax * 4u);
    switch (t8 - RD)
    {
    case 0x101dc736u: goto L_101dc736;
    case 0x101dc73au: goto L_101dc73a;
    case 0x101dc741u: goto L_101dc741;
    case 0x101dc745u: goto L_101dc745;
    case 0x101dc74cu: goto L_101dc74c;
    case 0x101dc753u: goto L_101dc753;
    case 0x101dc75au: goto L_101dc75a;
    case 0x101dc761u: goto L_101dc761;
    case 0x101dc768u: goto L_101dc768;
    case 0x101dc76fu: goto L_101dc76f;
    case 0x101dc776u: goto L_101dc776;
    case 0x101dc77du: goto L_101dc77d;
    case 0x101dc784u: goto L_101dc784;
    case 0x101dc78bu: goto L_101dc78b;
    case 0x101dc792u: goto L_101dc792;
    case 0x101dc799u: goto L_101dc799;
    case 0x101dc7a0u: goto L_101dc7a0;
    default: rt_fatal(g, COW_IMG(0x101dc72fu), "switch");
    }
    return 0;
L_101dc736: ;
    COW_AT(101dc736)
    loc_8 = 3u;
L_101dc7a2: ;
    COW_AT(101dc7a2)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t9 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xdu, loc_8);
    t10 = g->edx;
    g->edx = t10;
    cow_thiscall(g, COW_IMG(0x1011ae30u), rd32(self + 8u), 1, t9);
    t11 = g->edx;
    g->eax = rd32(rd32(self + 0x58u));
    g->edx = t11;
    t12 = rd32(rd32(self + 0x58u));
    t13 = cow_thiscall(g, rd32(t12 + 0x54u), rd32(self + 0x58u), 0);
    t14 = g->edx;
    if (t13 != 0x11u)
    {
        eax = t13;
        edx = t14;
    COW_AT(101dc7c2)
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037f018u), 1u, 0u);
    }
    COW_AT(101dc7d5)
    t15 = rd32(self + 8u);
    g->eax = t15;
    g->edx = rd32(rd32(self + 0x58u));
    t16 = rd32(rd32(self + 0x58u));
    g->esp = sp0 - 4u;
    t17 = cow_thiscall(g, rd32(t16 + 0x24u), rd32(self + 0x58u), 1, t15);
    t18 = g->edx;
    g->esi = in_esi;
    g->edx = t18;
    return t17;
L_101dc73a: ;
    COW_AT(101dc73a)
    loc_8 = 0xb5u;
    goto L_101dc7a2;
L_101dc741: ;
    COW_AT(101dc741)
    loc_8 = 0x25u;
    goto L_101dc7a2;
L_101dc745: ;
    COW_AT(101dc745)
    loc_8 = 0x8bu;
    goto L_101dc7a2;
L_101dc74c: ;
    COW_AT(101dc74c)
    loc_8 = 0x97u;
    goto L_101dc7a2;
L_101dc753: ;
    COW_AT(101dc753)
    loc_8 = 0x9eu;
    goto L_101dc7a2;
L_101dc75a: ;
    COW_AT(101dc75a)
    loc_8 = 0xa6u;
    goto L_101dc7a2;
L_101dc761: ;
    COW_AT(101dc761)
    loc_8 = 0xa8u;
    goto L_101dc7a2;
L_101dc768: ;
    COW_AT(101dc768)
    loc_8 = 0xb9u;
    goto L_101dc7a2;
L_101dc76f: ;
    COW_AT(101dc76f)
    loc_8 = 0xbau;
    goto L_101dc7a2;
L_101dc776: ;
    COW_AT(101dc776)
    loc_8 = 0xbbu;
    goto L_101dc7a2;
L_101dc77d: ;
    COW_AT(101dc77d)
    loc_8 = 0xbfu;
    goto L_101dc7a2;
L_101dc784: ;
    COW_AT(101dc784)
    loc_8 = 0xc0u;
    goto L_101dc7a2;
L_101dc78b: ;
    COW_AT(101dc78b)
    loc_8 = 0xc1u;
    goto L_101dc7a2;
L_101dc792: ;
    COW_AT(101dc792)
    loc_8 = 0xc2u;
    goto L_101dc7a2;
L_101dc799: ;
    COW_AT(101dc799)
    loc_8 = 0xc5u;
    goto L_101dc7a2;
L_101dc7a0: ;
    COW_AT(101dc7a0)
    loc_8 = 2u;
    goto L_101dc7a2;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101dc700(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101dc72fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101dc736u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101dc73au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101dc741u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101dc745u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101dc74cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101dc753u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101dc75au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101dc761u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101dc768u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101dc76fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101dc776u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101dc77du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101dc784u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101dc78bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101dc792u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101dc799u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101dc7a0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101dc7a2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101dc7c2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101dc7d5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_8 = rd32(sp0 - 8u);
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
void cow_adapter_101dc700(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101dc700(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
