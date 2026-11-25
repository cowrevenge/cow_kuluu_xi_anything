/* f_0x100f57c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100f57c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_168;
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
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
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
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 408u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100f57d3u: self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_100f57d3;
    case 0x100f57dau: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_100f57da;
    case 0x100f57e3u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_100f57e3;
    case 0x100f57efu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_100f57ef;
    case 0x100f580cu: ecx = g->ecx; in_edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x160u); in_esi = rd32(sp0 - 0x15cu); in_ebp = rd32(sp0 - 0x158u); in_ebx = rd32(sp0 - 0x154u); g->ebp = rd32(sp0 - 0x158u); g->ebx = rd32(sp0 - 0x154u); g->edi = rd32(sp0 - 0x160u); g->esi = rd32(sp0 - 0x15cu); goto E_100f580c;
    case 0x100f5814u: ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x160u); in_esi = rd32(sp0 - 0x15cu); in_ebp = rd32(sp0 - 0x158u); in_ebx = rd32(sp0 - 0x154u); g->ebp = rd32(sp0 - 0x158u); g->ebx = rd32(sp0 - 0x154u); g->edi = rd32(sp0 - 0x160u); g->esi = rd32(sp0 - 0x15cu); goto E_100f5814;
    case 0x100f5823u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_168 = rd32(sp0 - 0x168u); in_edi = rd32(sp0 - 0x160u); in_esi = rd32(sp0 - 0x15cu); in_ebp = rd32(sp0 - 0x158u); in_ebx = rd32(sp0 - 0x154u); g->ebp = rd32(sp0 - 0x158u); g->ebx = rd32(sp0 - 0x154u); g->edi = rd32(sp0 - 0x160u); g->esi = rd32(sp0 - 0x15cu); goto E_100f5823;
    case 0x100f5828u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100f5828;
    case 0x100f582du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100f582d;
    case 0x100f583bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100f583b;
    case 0x100f5842u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100f5842;
    case 0x100f5852u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100f5852;
    case 0x100f5865u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100f5865;
    case 0x100f5873u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100f5873;
    case 0x100f588eu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100f588e;
    case 0x100f5892u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100f5892;
    case 0x100f5898u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100f5898;
    case 0x100f589au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100f589a;
    case 0x100f58aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100f58ae;
    case 0x100f58b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_168 = rd32(sp0 - 0x168u); goto E_100f58b1;
    case 0x100f58b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_168 = rd32(sp0 - 0x168u); goto E_100f58b3;
    case 0x100f58c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100f58c1;
    case 0x100f58c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100f58c8;
    case 0x100f58d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100f58d8;
    case 0x100f58ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100f58eb;
    case 0x100f58f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100f58f9;
    case 0x100f5914u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100f5914;
    case 0x100f5918u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100f5918;
    case 0x100f5921u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100f5921;
    case 0x100f5923u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100f5923;
    case 0x100f5937u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100f5937;
    case 0x100f593au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_168 = rd32(sp0 - 0x168u); goto E_100f593a;
    case 0x100f5950u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100f5950;
    case 0x100f5959u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100f5959;
    case 0x100f597fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100f597f;
    case 0x100f5986u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100f5986;
    case 0x100f5993u: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100f5993;
    case 0x100f59a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100f59a0;
    case 0x100f59a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_168 = rd32(sp0 - 0x168u); goto E_100f59a3;
    case 0x100f59adu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_168 = rd32(sp0 - 0x168u); goto E_100f59ad;
    case 0x100f59b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100f59b9;
    case 0x100f59bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100f59bd;
    case 0x100f59c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100f59c6;
    case 0x100f59c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_168 = rd32(sp0 - 0x168u); goto E_100f59c9;
    case 0x100f59dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100f59dc;
    case 0x100f59feu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100f59fe;
    case 0x100f5a2au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100f5a2a;
    case 0x100f5a2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100f5a2f;
    case 0x100f5a3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100f5a3b;
    case 0x100f5a94u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100f5a94;
    case 0x100f5ab4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100f5ab4;
    case 0x100f5adeu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100f5ade;
    case 0x100f5affu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_100f5aff;
    case 0x100f5b0bu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_100f5b0b;
    default: break;
    }
#endif

    COW_AT(100f57c0)
    if (arg2 > 3u) goto L_100f5b0b;
    COW_AT(100f57d3)
    t1 = rd32(COW_IMG(0x100f5b18u) + arg2 * 4u);
    switch (t1 - RD)
    {
    case 0x100f57dau: goto L_100f57da;
    case 0x100f57e3u: goto L_100f57e3;
    case 0x100f57efu: goto L_100f57ef;
    case 0x100f5affu: goto L_100f5aff;
    default: rt_fatal(g, COW_IMG(0x100f57d3u), "switch");
    }
    return 0;
L_100f57da: ;
    COW_AT(100f57da)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return 0u;
L_100f57e3: ;
    COW_AT(100f57e3)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return 0x16u;
L_100f57ef: ;
    COW_AT(100f57ef)
    wr32(sp0 - 0x154u, in_ebx);
    wr32(sp0 - 0x158u, in_ebp);
    wr32(sp0 - 0x15cu, in_esi);
    wr32(sp0 - 0x160u, in_edi);
    wr32(sp0 - 0x164u, 0x10u);
    if (rd8(arg1 + 0x88u) == 0u)
    {
    COW_AT(100f5814)
        t2 = rd32(arg1 + 0xa0u) + 0x10u;
        wr32(sp0 - 0x168u, t2);
        wr32(sp0 - 0x16cu, sp0 - 0x150u);
        eax = arg1 + 0x88u;
        ecx = t2;
        edx = sp0 - 0x150u;
        loc_168 = t2;
    }
    else
    {
        ecx = (self & 0xffffff00u) | rd8(arg1 + 0x88u);
    COW_AT(100f580c)
        wr32(sp0 - 0x168u, arg1 + 0x88u);
        wr32(sp0 - 0x16cu, sp0 - 0x150u);
        eax = sp0 - 0x150u;
        edx = in_edx;
        loc_168 = arg1 + 0x88u;
    }
    COW_AT(100f5823)
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x15cu;
    cow_cdecl(g, COW_IMG(0x100f3010u), 4, sp0 - 0x150u, loc_168, 0x10u, in_edi);
    t3 = g->ecx;
    t4 = g->edx;
    ecx = t3;
    edx = t4;
    COW_AT(100f5828)
    edi = 0u;
L_100f582d: ;
    COW_AT(100f582d)
    wr32(sp0 - 0x164u, sp0 - 0xd0u);
    wr32(sp0 - 0x168u, edi);
    g->eax = sp0 - 0xd0u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t5 = cow_stdcall(g, COW_IMG(0x1030ff89u), 0);
    t6 = g->ecx;
    t7 = g->edx;
    eax = t5;
    ecx = t6;
    edx = t7;
    COW_AT(100f583b)
    if (eax != 0u) goto L_100f5892;
    COW_AT(100f5842)
    if (!(rd32(sp0 - 0x38u) & 1u))
    {
        eax = rd32(sp0 - 0x38u) & 1u;
        ecx = 0u;
        goto L_100f5892;
    }
    COW_AT(100f5852)
    if (rd32(rd32(arg1 + 0xa0u)) != rd32(sp0 - 0xd0u))
    {
        eax = rd32(arg1 + 0xa0u);
        ecx = rd32(rd32(arg1 + 0xa0u));
        edx = rd32(sp0 - 0xd0u);
        goto L_100f5892;
    }
    eax = rd32(arg1 + 0xa0u);
    COW_AT(100f5865)
    if (rd32(eax + 4u) != rd32(sp0 - 0xccu))
    {
        ecx = rd32(sp0 - 0xccu);
        edx = rd32(eax + 4u);
        goto L_100f5892;
    }
    COW_AT(100f5873)
    t8 = rd8(eax + 0x3cu);
    if (t8 != (rd32(sp0 - 0x34u) >> 0xdu & 0x3fu))
    {
        eax = t8;
        ecx = rd32(sp0 - 0x34u) >> 0xdu & 0x3fu;
        edx = (uint32_t)((int32_t)t8 >> 0x1fu);
        goto L_100f5892;
    }
    eax = t8;
    ecx = rd32(sp0 - 0x34u) >> 0xdu & 0x3fu;
    edx = (uint32_t)((int32_t)t8 >> 0x1fu);
    COW_AT(100f588e)
    if (edx == 0u) goto L_100f589a;
L_100f5892: ;
    COW_AT(100f5892)
    if ((int32_t)(edi + 1u) < 100)
    {
        edi = edi + 1u;
        goto L_100f582d;
    }
    COW_AT(100f5898)
L_100f58b1: ;
    COW_AT(100f58b1)
    edi = 0u;
L_100f58b3: ;
    COW_AT(100f58b3)
    wr32(sp0 - 0x164u, sp0 - 0xd0u);
    wr32(sp0 - 0x168u, edi);
    g->eax = eax;
    g->ecx = sp0 - 0xd0u;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t11 = cow_stdcall(g, COW_IMG(0x1030ff73u), 0);
    t12 = g->ecx;
    t13 = g->edx;
    eax = t11;
    ecx = t12;
    edx = t13;
    COW_AT(100f58c1)
    if (eax != 0u) goto L_100f5918;
    COW_AT(100f58c8)
    if (!(rd32(sp0 - 0x38u) & 1u))
    {
        eax = rd32(sp0 - 0x38u) & 1u;
        ecx = 0u;
        goto L_100f5918;
    }
    COW_AT(100f58d8)
    if (rd32(rd32(arg1 + 0xa0u)) != rd32(sp0 - 0xd0u))
    {
        eax = rd32(arg1 + 0xa0u);
        ecx = rd32(sp0 - 0xd0u);
        edx = rd32(rd32(arg1 + 0xa0u));
        goto L_100f5918;
    }
    eax = rd32(arg1 + 0xa0u);
    COW_AT(100f58eb)
    if (rd32(eax + 4u) != rd32(sp0 - 0xccu))
    {
        ecx = rd32(eax + 4u);
        edx = rd32(sp0 - 0xccu);
        goto L_100f5918;
    }
    COW_AT(100f58f9)
    t14 = rd8(eax + 0x3cu);
    if (t14 != (rd32(sp0 - 0x34u) >> 0xdu & 0x3fu))
    {
        eax = t14;
        ecx = rd32(sp0 - 0x34u) >> 0xdu & 0x3fu;
        edx = (uint32_t)((int32_t)t14 >> 0x1fu);
        goto L_100f5918;
    }
    eax = t14;
    ecx = rd32(sp0 - 0x34u) >> 0xdu & 0x3fu;
    edx = (uint32_t)((int32_t)t14 >> 0x1fu);
    COW_AT(100f5914)
    if (edx == 0u) goto L_100f5923;
L_100f5918: ;
    COW_AT(100f5918)
    if ((int32_t)(edi + 1u) < 200)
    {
        edi = edi + 1u;
        goto L_100f58b3;
    }
    COW_AT(100f5921)
L_100f593a: ;
    COW_AT(100f593a)
    t17 = rd32(arg1 + 0xb8u);
    wr8(arg1 + 0x68u, 0u);
    if (t17 == 9u) goto L_100f5a2f;
    eax = t17;
    COW_AT(100f5950)
    if (eax == 0xau) goto L_100f5a2f;
    COW_AT(100f5959)
    esi = rd32(arg1 + 0xa0u);
    edi = sp0 - 0x140u;
    ecx = 0x12u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x164u, sp0 - 0xf8u);
    t18 = (uint8_t)rd32(sp0 - 0x103u);
    wr32(sp0 - 0x168u, t18);
    g->eax = eax;
    g->edx = sp0 - 0xf8u;
    g->esp = sp0 - 0x168u;
    t19 = cow_stdcall(g, COW_IMG(0x1030ffb5u), 0);
    t20 = g->edx;
    eax = t19;
    edx = t20;
    esi = t18;
    COW_AT(100f597f)
    if ((int32_t)eax >= 0)
    {
    COW_AT(100f5986)
        if (!(rd32(sp0 - 0xf8u) & 1u))
        {
            eax = rd32(sp0 - 0xf8u) & 1u;
        }
        else
        {
    COW_AT(100f5993)
            wr32(sp0 - 0x164u, 0x10u);
            wr32(sp0 - 0x168u, sp0 - 0xf0u);
            wr32(sp0 - 0x16cu, arg1 + 0x68u);
            g->eax = sp0 - 0xf0u;
            g->edx = edx;
            g->esp = sp0 - 0x15cu;
            t21 = cow_cdecl(g, COW_IMG(0x100f3010u), 4, arg1 + 0x68u, sp0 - 0xf0u, 0x10u, rd32(sp0 - 0x160u));
            t22 = g->edx;
            eax = t21;
            edx = t22;
    COW_AT(100f59a0)
        }
    }
    COW_AT(100f59a3)
    if (rd32(COW_IMG(0x103601bcu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x103601bcu));
    COW_AT(100f59ad)
        t23 = rd32(ecx + 0x80u);
        wr32(sp0 - 0x164u, t23);
        g->eax = t23;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x160u;
        t24 = cow_stdcall(g, COW_IMG(0x100db6d0u), 1, t23);
        t25 = g->ecx;
        t26 = g->edx;
        eax = t24;
        ecx = t25;
        edx = t26;
    COW_AT(100f59b9)
        if (eax != 0u)
        {
    COW_AT(100f59bd)
            wr32(sp0 - 0x164u, 0x10u);
            wr32(sp0 - 0x168u, eax);
            wr32(sp0 - 0x16cu, arg1 + 0x68u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x15cu;
            t27 = cow_cdecl(g, COW_IMG(0x100f3010u), 4, arg1 + 0x68u, eax, 0x10u, rd32(sp0 - 0x160u));
            t28 = g->edx;
            eax = t27;
            edx = t28;
    COW_AT(100f59c6)
        }
    }
    COW_AT(100f59c9)
    t29 = rd32(arg1 + 0xbcu);
    wr32(sp0 - 0x164u, t29);
    t30 = (edx & 0xffffff00u) | rd8(arg1 + 0xc4u);
    wr32(sp0 - 0x168u, t30);
    g->eax = eax;
    g->esp = sp0 - 0x168u;
    t31 = cow_stdcall(g, COW_IMG(0x1031012bu), 0);
    eax = t31;
    COW_AT(100f59dc)
    wr32(sp0 - 0x16cu, eax);
    t32 = (uint8_t)rd32(sp0 - 0x104u);
    wr32(sp0 - 0x170u, t32);
    wr32(sp0 - 0x174u, esi);
    t33 = rd32(arg1 + 0xa4u);
    wr32(sp0 - 0x178u, t33);
    wr32(sp0 - 0x17cu, 0x20u);
    wr32(sp0 - 0x180u, sp0 - 0x20u);
    g->ebx = arg1;
    g->esp = sp0 - 0x174u;
    t34 = cow_call_regs(g, COW_IMG(0x100f4eb0u), t32, g->ecx, g->edx, 1, 3, sp0 - 0x20u, 0x20u, t33);
    eax = t34;
    COW_AT(100f59fe)
    wr32(sp0 - 0x178u, eax);
    wr32(sp0 - 0x17cu, arg1 + 0x68u);
    t35 = rd32(sp0 - 0x13cu);
    wr32(sp0 - 0x180u, t35);
    t36 = rd32(sp0 - 0x140u);
    wr32(sp0 - 0x184u, t36);
    t37 = rd32(sp0 - 0x134u);
    wr32(sp0 - 0x188u, t37);
    t38 = rd32(sp0 - 0x138u);
    wr32(sp0 - 0x18cu, t38);
    t39 = rd32(arg1 + 0xb8u);
    wr32(sp0 - 0x190u, t39);
    t40 = rd32(arg1 + 0xa0u);
    wr32(sp0 - 0x194u, t40);
    g->esp = sp0 - 0x194u;
    cow_stdcall(g, COW_IMG(0x10310388u), 0);
    COW_AT(100f5a2a)
L_100f5a94: ;
    COW_AT(100f5a94)
    wr32(sp0 - 0x164u, 0x10u);
    t47 = rd32(rd32(arg1 + 0xa0u));
    t48 = rd32(arg1 + 0xa0u);
    wr32(arg1 + 0x18u, t47);
    wr32(sp0 - 0x168u, t48 + 0x10u);
    wr32(sp0 - 0x16cu, arg1 + 0x24u);
    t49 = rd32(t48 + 4u);
    wr32(arg1 + 0x1cu, t49);
    g->esp = sp0 - 0x15cu;
    cow_cdecl(g, COW_IMG(0x100f3010u), 4, rd32(sp0 - 0x16cu), rd32(sp0 - 0x168u), rd32(sp0 - 0x164u), rd32(sp0 - 0x160u));
    COW_AT(100f5ab4)
    wr32(sp0 - 0x170u, 0x10u);
    t50 = rd8(rd32(arg1 + 0xa0u) + 0x3cu);
    t51 = rd32(arg1 + 0xa0u);
    wr32(arg1 + 0x20u, t50);
    t52 = rd32(t51 + 8u);
    wr32(arg1 + 0x38u, t52);
    wr32(sp0 - 0x174u, sp0 - 0x150u);
    wr32(sp0 - 0x178u, arg1 + 0x44u);
    t53 = rd32(t51 + 0xcu);
    wr32(arg1 + 0x3cu, t53);
    g->edx = arg1 + 0x44u;
    g->esp = sp0 - 0x168u;
    cow_cdecl(g, COW_IMG(0x100f3010u), 4, rd32(sp0 - 0x178u), rd32(sp0 - 0x174u), rd32(sp0 - 0x170u), rd32(sp0 - 0x16cu));
    t54 = g->edx;
    edx = t54;
    COW_AT(100f5ade)
    t55 = rd8(rd32(arg1 + 0xa0u) + 0x3du);
    t56 = rd32(sp0 - 0x15cu);
    t57 = rd32(sp0 - 0x160u);
    wr32(arg1 + 0x40u, t55);
    g->ebx = rd32(sp0 - 0x154u);
    g->esi = t56;
    g->edi = t57;
    g->ebp = rd32(sp0 - 0x158u);
    g->edx = edx;
    return 0x17u;
L_100f589a: ;
    COW_AT(100f589a)
    wr32(sp0 - 0x164u, 0x10u);
    wr32(sp0 - 0x168u, sp0 - 0x30u);
    wr32(sp0 - 0x16cu, sp0 - 0x150u);
    g->eax = sp0 - 0x150u;
    g->edx = sp0 - 0x30u;
    g->esp = sp0 - 0x15cu;
    t9 = cow_cdecl(g, COW_IMG(0x100f3010u), 4, sp0 - 0x150u, sp0 - 0x30u, 0x10u, rd32(sp0 - 0x160u));
    t10 = g->edx;
    eax = t9;
    edx = t10;
    COW_AT(100f58ae)
    goto L_100f58b1;
L_100f5923: ;
    COW_AT(100f5923)
    wr32(sp0 - 0x164u, 0x10u);
    wr32(sp0 - 0x168u, sp0 - 0x30u);
    wr32(sp0 - 0x16cu, sp0 - 0x150u);
    g->ecx = sp0 - 0x150u;
    g->edx = edx;
    g->esp = sp0 - 0x15cu;
    cow_cdecl(g, COW_IMG(0x100f3010u), 4, sp0 - 0x150u, sp0 - 0x30u, 0x10u, rd32(sp0 - 0x160u));
    t15 = g->ecx;
    t16 = g->edx;
    ecx = t15;
    edx = t16;
    COW_AT(100f5937)
    goto L_100f593a;
L_100f5a2f: ;
    COW_AT(100f5a2f)
    t41 = rd32(arg1 + 0xa0u);
    wr32(sp0 - 0x164u, t41);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x164u;
    cow_stdcall(g, COW_IMG(0x1031047au), 0);
    t42 = g->ecx;
    t43 = g->edx;
    ecx = t42;
    edx = t43;
    COW_AT(100f5a3b)
    t44 = rd16(rd32(arg1 + 0xa0u) + 0x3eu);
    t45 = rd16(arg1 + 0xb8u);
    wr16(rd32(arg1 + 0xa0u) + 0x3eu, (uint16_t)(((t45 << 7u ^ t44) & 0xf80u) ^ t44));
    wr16(rd32(arg1 + 0xa0u) + 0x3eu, (rd8(arg1 + 0xc4u) & 0x7fu) | (rd16(rd32(arg1 + 0xa0u) + 0x3eu) & 0xff80u));
    t46 = rd32(arg1 + 0xbcu);
    wr32(rd32(arg1 + 0xa0u) + 0x38u, t46);
    goto L_100f5a94;
L_100f5aff: ;
    COW_AT(100f5aff)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return 6u;
L_100f5b0b: ;
    COW_AT(100f5b0b)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return 0x15u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100f57c0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100f57d3u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x150u;
        g->eax = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100f57dau:
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
        g->esp = sp0 - 0x150u;
        (void)sp0;
        return 1;
    }
    case 0x100f57e3u:
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
        g->esp = sp0 - 0x150u;
        (void)sp0;
        return 1;
    }
    case 0x100f57efu:
    {
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x150u;
        (void)sp0;
        return 1;
    }
    case 0x100f580cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x160u);
        in_esi = rd32(sp0 - 0x15cu);
        in_ebp = rd32(sp0 - 0x158u);
        in_ebx = rd32(sp0 - 0x154u);
        g->esp = sp0 - 0x164u;
        g->eax = arg1 + 0x88u;
        g->ebx = arg1;
        wr32(sp0 - 0x164u, 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100f5814u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x160u);
        in_esi = rd32(sp0 - 0x15cu);
        in_ebp = rd32(sp0 - 0x158u);
        in_ebx = rd32(sp0 - 0x154u);
        g->esp = sp0 - 0x164u;
        g->eax = arg1 + 0x88u;
        g->ebx = arg1;
        wr32(sp0 - 0x164u, 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100f5823u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_168;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_168 = rd32(sp0 - 0x168u);
        in_edi = rd32(sp0 - 0x160u);
        in_esi = rd32(sp0 - 0x15cu);
        in_ebp = rd32(sp0 - 0x158u);
        in_ebx = rd32(sp0 - 0x154u);
        g->esp = sp0 - 0x16cu;
        g->ebx = arg1;
        wr32(sp0 - 0x16cu, sp0 - 0x150u);
        wr32(sp0 - 0x164u, 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100f5828u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x16cu;
        g->ebx = arg1;
        wr32(sp0 - 0x16cu, sp0 - 0x150u);
        (void)sp0;
        return 1;
    }
    case 0x100f582du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x160u;
        g->ebx = arg1;
        wr32(sp0 - 0x16cu, sp0 - 0x150u);
        (void)sp0;
        return 1;
    }
    case 0x100f583bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x168u;
        g->ebx = arg1;
        wr32(sp0 - 0x16cu, sp0 - 0x150u);
        wr32(sp0 - 0x164u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100f5842u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x160u;
        g->ebx = arg1;
        wr32(sp0 - 0x16cu, sp0 - 0x150u);
        wr32(sp0 - 0x164u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100f5852u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x160u;
        g->ebx = arg1;
        wr32(sp0 - 0x16cu, sp0 - 0x150u);
        wr32(sp0 - 0x164u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100f5865u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x160u;
        g->ebx = arg1;
        wr32(sp0 - 0x16cu, sp0 - 0x150u);
        wr32(sp0 - 0x164u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100f5873u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x160u;
        g->ebx = arg1;
        wr32(sp0 - 0x16cu, sp0 - 0x150u);
        wr32(sp0 - 0x164u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100f588eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x160u;
        g->ebx = arg1;
        g->esi = 0u;
        wr32(sp0 - 0x16cu, sp0 - 0x150u);
        wr32(sp0 - 0x164u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100f5892u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x160u;
        g->ebx = arg1;
        wr32(sp0 - 0x16cu, sp0 - 0x150u);
        wr32(sp0 - 0x164u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100f5898u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x160u;
        g->ebx = arg1;
        wr32(sp0 - 0x16cu, sp0 - 0x150u);
        wr32(sp0 - 0x164u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100f589au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x160u;
        g->ebx = arg1;
        wr32(sp0 - 0x16cu, sp0 - 0x150u);
        wr32(sp0 - 0x164u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100f58aeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x16cu;
        g->ebx = arg1;
        wr32(sp0 - 0x16cu, sp0 - 0x150u);
        wr32(sp0 - 0x168u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x100f58b1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_168;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_168 = rd32(sp0 - 0x168u);
        g->esp = sp0 - 0x160u;
        g->ebx = arg1;
        wr32(sp0 - 0x16cu, sp0 - 0x150u);
        (void)sp0;
        return 1;
    }
    case 0x100f58b3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_168;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_168 = rd32(sp0 - 0x168u);
        g->esp = sp0 - 0x160u;
        g->ebx = arg1;
        wr32(sp0 - 0x16cu, sp0 - 0x150u);
        (void)sp0;
        return 1;
    }
    case 0x100f58c1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x168u;
        g->ebx = arg1;
        wr32(sp0 - 0x16cu, sp0 - 0x150u);
        wr32(sp0 - 0x164u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100f58c8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x160u;
        g->ebx = arg1;
        wr32(sp0 - 0x16cu, sp0 - 0x150u);
        wr32(sp0 - 0x164u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100f58d8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x160u;
        g->ebx = arg1;
        wr32(sp0 - 0x16cu, sp0 - 0x150u);
        wr32(sp0 - 0x164u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100f58ebu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x160u;
        g->ebx = arg1;
        wr32(sp0 - 0x16cu, sp0 - 0x150u);
        wr32(sp0 - 0x164u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100f58f9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x160u;
        g->ebx = arg1;
        wr32(sp0 - 0x16cu, sp0 - 0x150u);
        wr32(sp0 - 0x164u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100f5914u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x160u;
        g->ebx = arg1;
        g->esi = 0u;
        wr32(sp0 - 0x16cu, sp0 - 0x150u);
        wr32(sp0 - 0x164u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100f5918u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x160u;
        g->ebx = arg1;
        wr32(sp0 - 0x16cu, sp0 - 0x150u);
        wr32(sp0 - 0x164u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100f5921u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x160u;
        g->ebx = arg1;
        wr32(sp0 - 0x16cu, sp0 - 0x150u);
        wr32(sp0 - 0x164u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100f5923u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x160u;
        g->ebx = arg1;
        wr32(sp0 - 0x16cu, sp0 - 0x150u);
        wr32(sp0 - 0x164u, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x100f5937u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x16cu;
        g->ebx = arg1;
        wr32(sp0 - 0x16cu, sp0 - 0x150u);
        wr32(sp0 - 0x168u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x100f593au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_168;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_168 = rd32(sp0 - 0x168u);
        g->esp = sp0 - 0x160u;
        g->ebx = arg1;
        wr32(sp0 - 0x16cu, sp0 - 0x150u);
        (void)sp0;
        return 1;
    }
    case 0x100f5950u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x160u;
        g->ebx = arg1;
        g->ebp = arg1 + 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x100f5959u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x160u;
        g->ebx = arg1;
        g->ebp = arg1 + 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x100f597fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x168u;
        g->ebx = arg1;
        g->ebp = arg1 + 0x68u;
        wr32(sp0 - 0x164u, sp0 - 0xf8u);
        (void)sp0;
        return 1;
    }
    case 0x100f5986u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x160u;
        g->ebx = arg1;
        g->ebp = arg1 + 0x68u;
        wr32(sp0 - 0x164u, sp0 - 0xf8u);
        (void)sp0;
        return 1;
    }
    case 0x100f5993u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x160u;
        g->ecx = 0u;
        g->ebx = arg1;
        g->ebp = arg1 + 0x68u;
        wr32(sp0 - 0x164u, sp0 - 0xf8u);
        (void)sp0;
        return 1;
    }
    case 0x100f59a0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x16cu;
        g->ebx = arg1;
        g->ebp = arg1 + 0x68u;
        wr32(sp0 - 0x168u, sp0 - 0xf0u);
        (void)sp0;
        return 1;
    }
    case 0x100f59a3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_168;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_168 = rd32(sp0 - 0x168u);
        g->esp = sp0 - 0x160u;
        g->ebx = arg1;
        g->ebp = arg1 + 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x100f59adu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_168;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_168 = rd32(sp0 - 0x168u);
        g->esp = sp0 - 0x160u;
        g->ebx = arg1;
        g->ebp = arg1 + 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x100f59b9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x160u;
        g->ebx = arg1;
        g->ebp = arg1 + 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x100f59bdu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x160u;
        g->ebx = arg1;
        g->ebp = arg1 + 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x100f59c6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x16cu;
        g->ebx = arg1;
        g->ebp = arg1 + 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x100f59c9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_168;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_168 = rd32(sp0 - 0x168u);
        g->esp = sp0 - 0x160u;
        g->ebx = arg1;
        g->ebp = arg1 + 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x100f59dcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x168u;
        g->ebx = arg1;
        g->ebp = arg1 + 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x100f59feu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x180u;
        g->ebx = arg1;
        g->ebp = arg1 + 0x68u;
        wr32(sp0 - 0x180u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100f5a2au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x194u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100f5a2fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x160u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100f5a3bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x164u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100f5a94u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x160u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100f5ab4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x16cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100f5adeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x178u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100f5affu:
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
        g->esp = sp0 - 0x150u;
        (void)sp0;
        return 1;
    }
    case 0x100f5b0bu:
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
        g->esp = sp0 - 0x150u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100f57c0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100f57c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
