/* f_0x10184c90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10184c90(Guest* g)
{
    double d28;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_c4;
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
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 232u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10184ca7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0xc4u); g->esi = rd32(sp0 - 0xc4u); goto E_10184ca7;
    case 0x10184caeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0xc4u); g->esi = rd32(sp0 - 0xc4u); goto E_10184cae;
    case 0x10184cb1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0xc4u); g->esi = rd32(sp0 - 0xc4u); goto E_10184cb1;
    case 0x10184d9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10184d9c;
    case 0x10184dc1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10184dc1;
    case 0x10184dcfu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10184dcf;
    case 0x10184de3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10184de3;
    case 0x10184dfau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10184dfa;
    case 0x10184e0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10184e0e;
    case 0x10184f9du: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10184f9d;
    case 0x10184fc3u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10184fc3;
    case 0x10184fd1u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_c4 = rd32(sp0 - 0xc4u); goto E_10184fd1;
    default: break;
    }
#endif

    COW_AT(10184c90)
    wr32(sp0 - 0xc4u, in_esi);
    if (rd32(self + 0x343e4u) == 0u)
    {
        loc_c4 = in_esi;
        goto L_10184fd1;
    }
    eax = rd32(self + 0x343e4u);
    COW_AT(10184ca7)
    if (rd32(eax + 0x40u) != 0u)
    {
        ecx = rd32(eax + 0x40u);
    }
    else
    {
    COW_AT(10184cae)
        ecx = rd32(eax + 0x44u);
    }
    COW_AT(10184cb1)
    wr32(sp0 - 0xc8u, ecx);
    wr32(sp0 - 0xccu, 0u);
    t1 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xd0u, t1);
    g->edx = rd32(t1);
    t2 = rd32(t1);
    g->esp = sp0 - 0xc4u;
    cow_thiscall(g, rd32(t2 + 0xf4u), ecx, 3, t1, 0u, ecx);
    t3 = g->edx;
    wr32(sp0 - 0xc8u, 0u);
    wr32(sp0 - 0xccu, 0x89u);
    t4 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xd0u, t4);
    cow_thiscall(g, rd32(rd32(t4) + 0xc8u), rd32(t4), 3, t4, 0x89u, 0u);
    wr32(sp0 - 0xc8u, 1u);
    wr32(sp0 - 0xccu, 0x1bu);
    t5 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xd0u, t5);
    cow_thiscall(g, rd32(rd32(t5) + 0xc8u), rd32(t5), 3, t5, 0x1bu, 1u);
    wr32(sp0 - 0xc8u, 1u);
    wr32(sp0 - 0xccu, 0x13u);
    t6 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xd0u, t6);
    cow_thiscall(g, rd32(rd32(t6) + 0xc8u), rd32(t6), 3, t6, 0x13u, 1u);
    wr32(sp0 - 0xc8u, 4u);
    wr32(sp0 - 0xccu, 0x14u);
    t7 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xd0u, t7);
    cow_thiscall(g, rd32(rd32(t7) + 0xc8u), rd32(t7), 3, t7, 0x14u, 4u);
    wr32(sp0 - 0xc8u, 0u);
    wr32(sp0 - 0xccu, 0x1cu);
    t8 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xd0u, t8);
    cow_thiscall(g, rd32(rd32(t8) + 0xc8u), rd32(t8), 3, t8, 0x1cu, 0u);
    wr32(sp0 - 0xc8u, 1u);
    wr32(sp0 - 0xccu, 0x11u);
    wr32(sp0 - 0xd0u, 0u);
    t9 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xd4u, t9);
    cow_thiscall(g, rd32(rd32(t9) + 0xfcu), rd32(t9), 4, t9, 0u, 0x11u, 1u);
    wr32(sp0 - 0xc8u, 1u);
    wr32(sp0 - 0xccu, 0x10u);
    wr32(sp0 - 0xd0u, 0u);
    t10 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xd4u, t10);
    cow_thiscall(g, rd32(rd32(t10) + 0xfcu), rd32(t10), 4, t10, 0u, 0x10u, 1u);
    wr32(sp0 - 0xc8u, 0u);
    wr32(sp0 - 0xccu, 0xeu);
    t11 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xd0u, t11);
    cow_thiscall(g, rd32(rd32(t11) + 0xc8u), rd32(t11), 3, t11, 0xeu, 0u);
    wr32(sp0 - 0xc8u, 0x142u);
    t12 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xccu, t12);
    g->eax = t12;
    g->edx = rd32(COW_IMG(0x1045666cu));
    t13 = rd32(t12);
    t14 = rd32(COW_IMG(0x1045666cu));
    t15 = cow_thiscall(g, rd32(t13 + 0x130u), t13, 2, t12, 0x142u);
    t16 = g->ecx;
    t17 = g->edx;
    if (rd8(self + 0x39598u) == 0u)
    {
        ecx = t16;
        edx = t17;
    COW_AT(10184dc1)
        wr32(sp0 - 0xc8u, rd32(COW_IMG(0x10631c88u)));
        g->eax = rd32(COW_IMG(0x10631c88u));
        g->ecx = ecx;
        g->edx = edx;
        t24 = rd32(COW_IMG(0x10631c88u));
        g->esp = sp0 - 0xc4u;
        t25 = cow_cdecl(g, COW_IMG(0x10177400u), 1, t24);
        t26 = g->ecx;
        t27 = g->edx;
        eax = t25;
        ecx = t26;
        edx = t27;
    }
    else
    {
    COW_AT(10184d9c)
        wr32(sp0 - 0xc8u, sp0 - 0x40u);
        wr32(sp0 - 0xccu, 3u);
        t18 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xd0u, t18);
        g->eax = t18;
        g->edx = sp0 - 0x40u;
        g->esp = sp0 - 0xc4u;
        t19 = cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x98u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t18, 3u, sp0 - 0x40u);
        t20 = g->edx;
        g->edx = t20;
        g->esp = sp0 - 0x58u;
        t21 = cow_bridge_indirect(g, COW_IMG(0x10177420u), 0u, 27u, (const uint32_t[]){rd32(sp0 - 0xc4u), rd32(sp0 - 0xc0u), rd32(sp0 - 0xbcu), rd32(sp0 - 0xb8u), rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u), rd32(sp0 - 0xacu), rd32(sp0 - 0xa8u), rd32(sp0 - 0xa4u), rd32(sp0 - 0xa0u), rd32(sp0 - 0x9cu), rd32(sp0 - 0x98u), rd32(sp0 - 0x94u), rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u), rd32(sp0 - 0x84u), rd32(sp0 - 0x80u), rd32(sp0 - 0x7cu), rd32(sp0 - 0x78u), rd32(sp0 - 0x74u), rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu)}, self, g->edx, g->eax, 108u);
        t22 = g->ecx;
        t23 = g->edx;
        eax = t21;
        ecx = t22;
        edx = t23;
    }
    COW_AT(10184dcf)
    d28 = (double)rdf32(sp0 + 8u);
    if (d28 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
    COW_AT(10184dfa)
        wr32(COW_IMG(0x10377358u), 0x3f800000u);
        wr32(COW_IMG(0x10377350u), 0x3f800000u);
    }
    else
    {
    COW_AT(10184de3)
        wr32(COW_IMG(0x10377358u), arg2);
        wr32(COW_IMG(0x10377350u), arg2);
        ecx = arg2;
        edx = arg2;
    }
    COW_AT(10184e0e)
    wr32(sp0 - 0xc0u, 0x3f800000u);
    wr32(sp0 - 0xc8u, sp0 - 0x80u);
    wr32(sp0 - 0xbcu, 0u);
    wr32(sp0 - 0xb8u, 0u);
    wr32(sp0 - 0xb4u, 0u);
    wr32(sp0 - 0xb0u, 0u);
    wr32(sp0 - 0xacu, 0x3f800000u);
    wr32(sp0 - 0xa8u, 0u);
    wr32(sp0 - 0xa4u, 0u);
    wr32(sp0 - 0xa0u, 0u);
    wr32(sp0 - 0x9cu, 0u);
    wr32(sp0 - 0x98u, 0x3f800000u);
    wr32(sp0 - 0x94u, 0u);
    wr32(sp0 - 0x90u, 0u);
    wr32(sp0 - 0x8cu, 0u);
    wr32(sp0 - 0x88u, 0u);
    wr32(sp0 - 0x84u, 0x3f800000u);
    g->esp = sp0 - 0xc4u;
    cow_cdecl(g, COW_IMG(0x10175740u), 1, sp0 - 0x80u);
    wr32(sp0 - 0x80u, rd32(COW_IMG(0x10377350u)));
    wr32(sp0 - 0x6cu, rd32(COW_IMG(0x10377354u)));
    wr32(sp0 - 0x58u, rd32(COW_IMG(0x10377358u)));
    wr32(sp0 - 0xccu, sp0 - 0x80u);
    wr32(sp0 - 0xd0u, sp0 - 0xc0u);
    wr32(sp0 - 0xd4u, sp0 - 0xc0u);
    g->eax = sp0 - 0xc0u;
    g->edx = sp0 - 0xc0u;
    g->esp = sp0 - 0xc8u;
    t29 = cow_cdecl(g, COW_IMG(0x1016c060u), 3, sp0 - 0xc0u, sp0 - 0xc0u, sp0 - 0x80u);
    t30 = g->edx;
    wr32(sp0 - 0xd8u, sp0 - 0x80u);
    g->esp = sp0 - 0xd4u;
    cow_cdecl(g, COW_IMG(0x10175740u), 1, sp0 - 0x80u);
    wr32(sp0 - 0x50u, rd32(arg1));
    t31 = rd32(arg1 + 4u);
    wr32(sp0 - 0x4cu, t31);
    t32 = rd32(arg1 + 8u);
    wr32(sp0 - 0x48u, t32);
    wr32(sp0 - 0xdcu, sp0 - 0x80u);
    wr32(sp0 - 0xe0u, sp0 - 0xc0u);
    wr32(sp0 - 0xe4u, sp0 - 0xc0u);
    g->edx = sp0 - 0xc0u;
    g->esp = sp0 - 0xd8u;
    cow_cdecl(g, COW_IMG(0x1016c060u), 3, sp0 - 0xc0u, sp0 - 0xc0u, sp0 - 0x80u);
    t33 = g->edx;
    wr32(sp0 - 0xc8u, sp0 - 0xc0u);
    wr32(sp0 - 0xccu, 0x100u);
    g->eax = sp0 - 0xc0u;
    g->edx = t33;
    g->esp = sp0 - 0xc4u;
    t34 = cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(COW_IMG(0x1045666cu)), 2, 0x100u, sp0 - 0xc0u);
    t35 = g->edx;
    wr32(sp0 - 0xc8u, 0x18u);
    wr32(sp0 - 0xccu, COW_IMG(0x10377360u));
    wr32(sp0 - 0xd0u, 2u);
    wr32(sp0 - 0xd4u, 5u);
    cow_thiscall(g, COW_IMG(0x1000cd00u), rd32(COW_IMG(0x1045666cu)), 4, 5u, 2u, COW_IMG(0x10377360u), 0x18u);
    wr32(sp0 - 0xc8u, 1u);
    wr32(sp0 - 0xccu, 0x89u);
    t36 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xd0u, t36);
    g->edx = rd32(t36);
    t37 = rd32(t36);
    cow_thiscall(g, rd32(t37 + 0xc8u), rd32(COW_IMG(0x1045666cu)), 3, t36, 0x89u, 1u);
    t38 = g->edx;
    wr32(sp0 - 0xc8u, 0u);
    wr32(sp0 - 0xccu, 0x1bu);
    t39 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xd0u, t39);
    cow_thiscall(g, rd32(rd32(t39) + 0xc8u), rd32(t39), 3, t39, 0x1bu, 0u);
    wr32(sp0 - 0xc8u, 0u);
    wr32(sp0 - 0xccu, 0x1cu);
    t40 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xd0u, t40);
    cow_thiscall(g, rd32(rd32(t40) + 0xc8u), rd32(t40), 3, t40, 0x1cu, 0u);
    wr32(sp0 - 0xc8u, 1u);
    wr32(sp0 - 0xccu, 0xeu);
    t41 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xd0u, t41);
    g->eax = t41;
    g->edx = rd32(COW_IMG(0x1045666cu));
    t42 = rd32(t41);
    t43 = rd32(COW_IMG(0x1045666cu));
    t44 = cow_thiscall(g, rd32(t42 + 0xc8u), t42, 3, t41, 0xeu, 1u);
    t45 = g->ecx;
    t46 = g->edx;
    if (rd8(self + 0x39598u) == 0u)
    {
        ecx = t45;
        edx = t46;
        goto L_10184fc3;
    }
    COW_AT(10184f9d)
    wr32(sp0 - 0xc8u, sp0 - 0x40u);
    wr32(sp0 - 0xccu, 3u);
    t47 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xd0u, t47);
    g->esp = sp0 - 0xc4u;
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x94u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t47, 3u, sp0 - 0x40u);
    g->esi = rd32(sp0 - 0xc4u);
    return;
L_10184fc3: ;
    COW_AT(10184fc3)
    wr32(sp0 - 0xc8u, rd32(COW_IMG(0x10621c00u)));
    g->esp = sp0 - 0xc4u;
    cow_cdecl(g, COW_IMG(0x10177400u), 1, rd32(COW_IMG(0x10621c00u)));
    loc_c4 = rd32(sp0 - 0xc4u);
L_10184fd1: ;
    COW_AT(10184fd1)
    g->esi = loc_c4;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10184c90(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10184ca7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xc4u);
        g->esp = sp0 - 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x10184caeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xc4u);
        g->esp = sp0 - 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x10184cb1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xc4u);
        g->esp = sp0 - 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x10184d9cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x10184dc1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x10184dcfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x10184de3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x10184dfau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x10184e0eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x10184f9du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xc4u;
        wr32(sp0 - 0xe4u, sp0 - 0xc0u);
        wr32(sp0 - 0xe0u, sp0 - 0xc0u);
        wr32(sp0 - 0xdcu, sp0 - 0x80u);
        wr32(sp0 - 0xd8u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10184fc3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xc4u;
        wr32(sp0 - 0xe4u, sp0 - 0xc0u);
        wr32(sp0 - 0xe0u, sp0 - 0xc0u);
        wr32(sp0 - 0xdcu, sp0 - 0x80u);
        wr32(sp0 - 0xd8u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10184fd1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_c4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_c4 = rd32(sp0 - 0xc4u);
        g->esp = sp0 - 0xc4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10184c90(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10184c90(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
