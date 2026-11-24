/* f_0x10251aa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10251aa0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_484;
    uint32_t loc_488;
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
    uint32_t t28;
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
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 1172u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10251abcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10251abc;
    case 0x10251accu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10251acc;
    case 0x10251ad6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10251ad6;
    case 0x10251ae4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10251ae4;
    case 0x10251af7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10251af7;
    case 0x10251b07u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10251b07;
    case 0x10251b12u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10251b12;
    case 0x10251b4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10251b4c;
    case 0x10251b65u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10251b65;
    case 0x10251b82u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_484 = rd32(sp0 - 0x484u); goto E_10251b82;
    case 0x10251b8au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10251b8a;
    case 0x10251ba4u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10251ba4;
    case 0x10251bbfu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10251bbf;
    case 0x10251bd5u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10251bd5;
    case 0x10251beau: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10251bea;
    case 0x10251bf5u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10251bf5;
    case 0x10251c0cu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10251c0c;
    case 0x10251c1au: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10251c1a;
    case 0x10251c21u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10251c21;
    case 0x10251c2du: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10251c2d;
    case 0x10251c31u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_488 = rd32(sp0 - 0x488u); loc_484 = rd32(sp0 - 0x484u); goto E_10251c31;
    case 0x10251c36u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10251c36;
    case 0x10251c4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10251c4c;
    case 0x10251c59u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10251c59;
    case 0x10251c69u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10251c69;
    case 0x10251c7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10251c7b;
    case 0x10251c86u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10251c86;
    case 0x10251cdfu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10251cdf;
    case 0x10251ce7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10251ce7;
    default: break;
    }
#endif

    COW_AT(10251aa0)
    wr32(sp0 - 0x450u, in_esi);
    wr32(sp0 - 0x454u, in_edi);
    wr32(sp0 - 0x458u, 0u);
    wr32(sp0 - 0x45cu, 0xb00010u);
    wr32(self, 0xb00000u);
    g->esp = sp0 - 0x454u;
    t1 = cow_call_regs(g, COW_IMG(0x10028640u), in_eax, self, in_edx, 1, 2, rd32(sp0 - 0x45cu), rd32(sp0 - 0x458u));
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(10251abc)
    wr32(COW_IMG(0x10669408u), eax);
    if ((eax + 0xfu & 0xfffffff0u) != 0u)
    {
        edi = eax + 0xfu & 0xfffffff0u;
        goto L_10251ae4;
    }
    COW_AT(10251acc)
    wr32(sp0 - 0x458u, COW_IMG(0x103899a4u));
    g->eax = eax;
    g->esp = sp0 - 0x458u;
    t4 = cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    eax = t4;
    COW_AT(10251ad6)
    g->esi = rd32(sp0 - 0x450u);
    g->edi = rd32(sp0 - 0x454u);
    return eax & 0xffffff00u;
L_10251ae4: ;
    COW_AT(10251ae4)
    wr32(sp0 - 0x458u, rd32(self));
    wr32(sp0 - 0x45cu, COW_IMG(0x10389984u));
    g->eax = rd32(self);
    g->ecx = ecx;
    g->edx = edx;
    t5 = rd32(self);
    g->esp = sp0 - 0x45cu;
    t6 = cow_stdcall(g, COW_IMG(0x10017d30u), 0);
    t7 = g->ecx;
    t8 = g->edx;
    eax = t6;
    ecx = t7;
    edx = t8;
    esi = t5 - 0x200000u;
    COW_AT(10251af7)
    wr32(sp0 - 0x460u, edi);
    wr32(sp0 - 0x464u, 0x200000u);
    wr32(sp0 - 0x468u, COW_IMG(0x1038995cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x468u;
    t9 = cow_stdcall(g, COW_IMG(0x10017d30u), 0);
    t10 = g->ecx;
    t11 = g->edx;
    eax = t9;
    ecx = t10;
    edx = t11;
    COW_AT(10251b07)
    wr32(sp0 - 0x46cu, esi);
    wr32(sp0 - 0x470u, COW_IMG(0x1038993cu));
    g->esp = sp0 - 0x470u;
    cow_stdcall(g, COW_IMG(0x10017d30u), 0);
    COW_AT(10251b12)
    t12 = rd32(rd32(COW_IMG(0x103d3cbcu)) + 4u);
    t13 = rd32(COW_IMG(0x103d3cbcu));
    wr32(COW_IMG(0x10669418u), t12);
    t14 = rd32(t13 + 8u);
    wr32(COW_IMG(0x10669400u), esi);
    wr32(COW_IMG(0x1066941cu), t14);
    wr32(COW_IMG(0x10669404u), edi);
    wr32(COW_IMG(0x1066940cu), 0x200000u);
    wr32(COW_IMG(0x10669410u), edi + esi);
    g->edx = t14;
    g->esp = sp0 - 0x470u;
    cow_stdcall(g, COW_IMG(0x10275170u), 0);
    t15 = g->edx;
    edx = t15;
    COW_AT(10251b4c)
    wr32(sp0 - 0x474u, COW_IMG(0x10389934u));
    wr32(sp0 - 0x478u, rd32(COW_IMG(0x10669400u)));
    wr32(sp0 - 0x47cu, rd32(COW_IMG(0x10669404u)));
    wr32(sp0 - 0x480u, 0u);
    g->ecx = rd32(COW_IMG(0x10669404u));
    t16 = rd32(COW_IMG(0x10669404u));
    g->esp = sp0 - 0x470u;
    cow_cdecl(g, COW_IMG(0x10275b80u), 4, 0u, t16, rd32(COW_IMG(0x10669400u)), COW_IMG(0x10389934u));
    t17 = g->ecx;
    ecx = t17;
    COW_AT(10251b65)
    wr32(sp0 - 0x484u, COW_IMG(0x1038992cu));
    wr32(sp0 - 0x488u, rd32(COW_IMG(0x1066940cu)));
    wr32(sp0 - 0x48cu, rd32(COW_IMG(0x10669410u)));
    wr32(sp0 - 0x490u, 1u);
    g->eax = rd32(COW_IMG(0x10669410u));
    g->ecx = ecx;
    g->edx = rd32(COW_IMG(0x1066940cu));
    t18 = rd32(COW_IMG(0x10669410u));
    t19 = rd32(COW_IMG(0x1066940cu));
    g->esp = sp0 - 0x480u;
    t20 = cow_cdecl(g, COW_IMG(0x10275b80u), 4, 1u, t18, t19, COW_IMG(0x1038992cu));
    t21 = g->ecx;
    t22 = g->edx;
    eax = t20;
    ecx = t21;
    edx = t22;
    COW_AT(10251b82)
    g->eax = eax;
    g->esp = sp0 - 0x454u;
    t23 = cow_stdcall(g, COW_IMG(0x10276280u), 0);
    eax = t23;
    COW_AT(10251b8a)
    t24 = rd32(COW_IMG(0x1066941cu));
    wr32(COW_IMG(0x1099d200u), eax);
    wr32(sp0 - 0x458u, eax + 0x8fcu);
    wr32(sp0 - 0x45cu, t24);
    g->esp = sp0 - 0x454u;
    cow_thiscall(g, rd32(rd32(t24) + 0x80u), t24, 2, t24, eax + 0x8fcu);
    COW_AT(10251ba4)
    t25 = rd32(COW_IMG(0x1099d200u)) + 0x900u;
    wr32(sp0 - 0x458u, t25);
    wr32(sp0 - 0x45cu, rd32(COW_IMG(0x1066941cu)));
    g->esp = sp0 - 0x454u;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x84u), rd32(rd32(COW_IMG(0x1066941cu))), 2, rd32(COW_IMG(0x1066941cu)), t25);
    COW_AT(10251bbf)
    wr32(sp0 - 0x458u, sp0 - 0x44cu);
    t26 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x8fcu);
    wr32(sp0 - 0x45cu, t26);
    g->edx = sp0 - 0x44cu;
    t27 = rd32(t26);
    g->esp = sp0 - 0x454u;
    cow_thiscall(g, rd32(t27 + 0x20u), t27, 2, t26, sp0 - 0x44cu);
    t28 = g->ecx;
    t29 = g->edx;
    ecx = t28;
    edx = t29;
    COW_AT(10251bd5)
    wr32(sp0 - 0x458u, 1u);
    wr32(sp0 - 0x45cu, 0u);
    wr32(sp0 - 0x460u, 4u);
    if (rd32(sp0 - 0x434u) > 0x200u)
    {
        eax = rd32(sp0 - 0x434u);
    COW_AT(10251c1a)
        wr32(sp0 - 0x464u, 2u);
        wr32(sp0 - 0x468u, 2u);
        g->esi = 1u;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x444u;
        t37 = cow_thiscall_cdecl(g, COW_IMG(0x10281850u), ecx, 9, 2u, 2u, 4u, 0u, 1u, rd32(sp0 - 0x454u), rd32(sp0 - 0x450u), rd32(sp0 - 0x44cu), rd32(sp0 - 0x448u));
        t38 = g->ecx;
        t39 = g->edx;
        eax = t37;
        ecx = t38;
        edx = t39;
    COW_AT(10251c21)
        wr32(sp0 - 0x46cu, 1u);
        wr32(sp0 - 0x470u, 0u);
        wr32(sp0 - 0x474u, 4u);
        wr32(sp0 - 0x478u, 2u);
        wr32(sp0 - 0x47cu, 2u);
        g->esi = 1u;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x458u;
        t40 = cow_thiscall_cdecl(g, COW_IMG(0x10281850u), ecx, 9, 2u, 2u, 4u, 0u, 1u, rd32(sp0 - 0x468u), rd32(sp0 - 0x464u), rd32(sp0 - 0x460u), rd32(sp0 - 0x45cu));
        t41 = g->ecx;
        t42 = g->edx;
        eax = t40;
        ecx = t41;
        edx = t42;
    COW_AT(10251c2d)
        wr32(sp0 - 0x480u, 3u);
        wr32(sp0 - 0x484u, 2u);
        wr32(sp0 - 0x488u, 2u);
        loc_484 = 2u;
        loc_488 = 2u;
    }
    else
    {
        eax = rd32(sp0 - 0x434u);
    COW_AT(10251bea)
        t30 = rd32(sp0 - 0x430u);
        wr32(sp0 - 0x464u, t30);
        wr32(sp0 - 0x468u, eax);
        g->esi = 1u;
        g->esp = sp0 - 0x444u;
        cow_thiscall_cdecl(g, COW_IMG(0x10281850u), t30, 9, eax, t30, 4u, 0u, 1u, rd32(sp0 - 0x454u), rd32(sp0 - 0x450u), rd32(sp0 - 0x44cu), rd32(sp0 - 0x448u));
        t31 = g->ecx;
        ecx = t31;
    COW_AT(10251bf5)
        wr32(sp0 - 0x46cu, 1u);
        wr32(sp0 - 0x470u, 0u);
        wr32(sp0 - 0x474u, 4u);
        wr32(sp0 - 0x478u, rd32(COW_IMG(0x10456c08u)));
        wr32(sp0 - 0x47cu, rd32(COW_IMG(0x10456a58u)));
        g->esi = 1u;
        g->eax = rd32(COW_IMG(0x10456a58u));
        t32 = rd32(COW_IMG(0x10456a58u));
        t33 = rd32(COW_IMG(0x10456c08u));
        g->esp = sp0 - 0x458u;
        t34 = cow_thiscall_cdecl(g, COW_IMG(0x10281850u), ecx, 9, t32, t33, 4u, 0u, 1u, rd32(sp0 - 0x468u), rd32(sp0 - 0x464u), rd32(sp0 - 0x460u), rd32(sp0 - 0x45cu));
        eax = t34;
    COW_AT(10251c0c)
        wr32(sp0 - 0x480u, 3u);
        t35 = rd32(sp0 - 0x430u);
        wr32(sp0 - 0x484u, t35);
        t36 = rd32(sp0 - 0x434u);
        wr32(sp0 - 0x488u, t36);
        ecx = t35;
        edx = t36;
        loc_484 = t35;
        loc_488 = t36;
    }
    COW_AT(10251c31)
    g->esi = 1u;
    g->esp = sp0 - 0x464u;
    cow_thiscall_cdecl(g, COW_IMG(0x10281700u), ecx, 9, loc_488, loc_484, 3u, rd32(sp0 - 0x47cu), rd32(sp0 - 0x478u), 4u, 0u, rd32(sp0 - 0x46cu), rd32(sp0 - 0x468u));
    COW_AT(10251c36)
    wr32(sp0 - 0x458u, sp0 - 0x42cu);
    wr32(sp0 - 0x45cu, 2u);
    wr32(sp0 - 0x460u, 0u);
    wr32(sp0 - 0x464u, rd32(COW_IMG(0x10669418u)));
    g->eax = rd32(COW_IMG(0x10669418u));
    t43 = rd32(COW_IMG(0x10669418u));
    g->esp = sp0 - 0x454u;
    t44 = cow_thiscall(g, rd32(rd32(t43) + 0x14u), rd32(t43), 4, t43, 0u, 2u, sp0 - 0x42cu);
    eax = t44;
    COW_AT(10251c4c)
    t45 = rd32(sp0 - 0x24u);
    if (t45 == 0x1002u) goto L_10251c7b;
    COW_AT(10251c59)
    if (rd8(rd32(COW_IMG(0x1045666cu)) + 0x912u) == 0u) goto L_10251c7b;
    COW_AT(10251c69)
    wr32(rd32(COW_IMG(0x1099d200u)) + 0x2d0u, 0u);
L_10251c86: ;
    COW_AT(10251c86)
    wr32(sp0 - 0x458u, 1u);
    wr32(sp0 - 0x45cu, COW_IMG(0x10389874u));
    wr32(rd32(COW_IMG(0x1099d200u)) + 0x8a4u, 1u);
    wr32(rd32(COW_IMG(0x1099d200u)) + 0x8a8u, 0u);
    wr32(rd32(COW_IMG(0x1099d200u)) + 0x8acu, 2u);
    t46 = rd32(COW_IMG(0x1099d200u));
    wr32(t46 + 0x898u, 1u);
    t47 = rd32(COW_IMG(0x1099d200u));
    wr32(t47 + 0x89cu, 0u);
    t48 = rd32(COW_IMG(0x1099d200u));
    wr32(t48 + 0x8a0u, 2u);
    g->ecx = t46;
    g->edx = t47;
    g->esp = sp0 - 0x440u;
    t49 = cow_call_regs(g, COW_IMG(0x10282050u), t48, g->ecx, g->edx, 1, 7, COW_IMG(0x10389874u), 1u, rd32(sp0 - 0x454u), rd32(sp0 - 0x450u), rd32(sp0 - 0x44cu), rd32(sp0 - 0x448u), rd32(sp0 - 0x444u));
    t50 = g->ecx;
    t51 = g->edx;
    eax = t49;
    ecx = t50;
    edx = t51;
    COW_AT(10251cdf)
    wr32(sp0 - 0x460u, 1u);
    wr32(sp0 - 0x464u, 0u);
    g->eax = eax;
    g->esp = sp0 - 0x450u;
    t52 = cow_cdecl(g, COW_IMG(0x102821b0u), 5, 0u, 1u, COW_IMG(0x10389874u), rd32(sp0 - 0x458u), rd32(sp0 - 0x454u));
    eax = t52;
    COW_AT(10251ce7)
    g->esi = rd32(sp0 - 0x450u);
    g->edi = rd32(sp0 - 0x454u);
    return (eax & 0xffffff00u) | 1u;
L_10251c7b: ;
    COW_AT(10251c7b)
    wr32(rd32(COW_IMG(0x1099d200u)) + 0x2d0u, 1u);
    goto L_10251c86;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10251aa0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10251abcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x45cu;
        (void)sp0;
        return 1;
    }
    case 0x10251accu:
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
        g->esp = sp0 - 0x454u;
        (void)sp0;
        return 1;
    }
    case 0x10251ad6u:
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
        g->esp = sp0 - 0x458u;
        (void)sp0;
        return 1;
    }
    case 0x10251ae4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x454u;
        (void)sp0;
        return 1;
    }
    case 0x10251af7u:
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
        g->esp = sp0 - 0x45cu;
        (void)sp0;
        return 1;
    }
    case 0x10251b07u:
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
        g->esp = sp0 - 0x468u;
        (void)sp0;
        return 1;
    }
    case 0x10251b12u:
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
        g->esp = sp0 - 0x470u;
        (void)sp0;
        return 1;
    }
    case 0x10251b4cu:
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
        g->esp = sp0 - 0x470u;
        (void)sp0;
        return 1;
    }
    case 0x10251b65u:
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
        g->esp = sp0 - 0x480u;
        (void)sp0;
        return 1;
    }
    case 0x10251b82u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_484;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_484 = rd32(sp0 - 0x484u);
        g->esp = sp0 - 0x490u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10251b8au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x454u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10251ba4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x454u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10251bbfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x454u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10251bd5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x454u;
        g->esi = 1u;
        wr32(sp0 - 0x458u, sp0 - 0x44cu);
        (void)sp0;
        return 1;
    }
    case 0x10251beau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x460u;
        g->esi = 1u;
        g->edi = 2u;
        wr32(sp0 - 0x460u, 4u);
        wr32(sp0 - 0x45cu, 0u);
        wr32(sp0 - 0x458u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x10251bf5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x468u;
        g->esi = 1u;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x10251c0cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x47cu;
        g->esi = 1u;
        g->edi = 2u;
        wr32(sp0 - 0x474u, 4u);
        wr32(sp0 - 0x470u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10251c1au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x460u;
        g->esi = 1u;
        g->edi = 2u;
        wr32(sp0 - 0x460u, 4u);
        wr32(sp0 - 0x45cu, 0u);
        wr32(sp0 - 0x458u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x10251c21u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x468u;
        g->esi = 1u;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x10251c2du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x47cu;
        g->esi = 1u;
        g->edi = 2u;
        wr32(sp0 - 0x474u, 4u);
        wr32(sp0 - 0x470u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10251c31u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_484;
        uint32_t loc_488;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_488 = rd32(sp0 - 0x488u);
        loc_484 = rd32(sp0 - 0x484u);
        g->esp = sp0 - 0x488u;
        g->esi = 1u;
        g->edi = 2u;
        wr32(sp0 - 0x480u, 3u);
        wr32(sp0 - 0x474u, 4u);
        wr32(sp0 - 0x470u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10251c36u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x488u;
        g->esi = 1u;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x10251c4cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x454u;
        g->esi = 1u;
        g->edi = 2u;
        wr32(sp0 - 0x458u, sp0 - 0x42cu);
        (void)sp0;
        return 1;
    }
    case 0x10251c59u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x454u;
        g->esi = 1u;
        g->edi = 2u;
        wr32(sp0 - 0x458u, sp0 - 0x42cu);
        (void)sp0;
        return 1;
    }
    case 0x10251c69u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x454u;
        g->esi = 1u;
        g->edi = 2u;
        wr32(sp0 - 0x458u, sp0 - 0x42cu);
        (void)sp0;
        return 1;
    }
    case 0x10251c7bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x454u;
        g->esi = 1u;
        g->edi = 2u;
        wr32(sp0 - 0x458u, sp0 - 0x42cu);
        (void)sp0;
        return 1;
    }
    case 0x10251c86u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x454u;
        g->esi = 1u;
        g->edi = 2u;
        wr32(sp0 - 0x458u, sp0 - 0x42cu);
        (void)sp0;
        return 1;
    }
    case 0x10251cdfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x45cu;
        g->esi = 1u;
        wr32(sp0 - 0x45cu, COW_IMG(0x10389874u));
        (void)sp0;
        return 1;
    }
    case 0x10251ce7u:
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
        g->esp = sp0 - 0x464u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10251aa0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10251aa0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
