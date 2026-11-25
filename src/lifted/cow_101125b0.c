/* f_0x101125b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101125b0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_18c;
    uint32_t loc_1a0;
    uint32_t loc_1a4;
    uint32_t loc_1a8;
    uint32_t loc_1ac;
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
    uint32_t t5;
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
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 448u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101125c9u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x1acu); in_esi = rd32(sp0 - 0x1a8u); in_ebp = rd32(sp0 - 0x1a4u); in_ebx = rd32(sp0 - 0x1a0u); g->ebp = rd32(sp0 - 0x1a4u); g->ebx = rd32(sp0 - 0x1a0u); g->edi = rd32(sp0 - 0x1acu); g->esi = rd32(sp0 - 0x1a8u); goto E_101125c9;
    case 0x101125d5u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_1ac = rd32(sp0 - 0x1acu); loc_1a8 = rd32(sp0 - 0x1a8u); loc_1a4 = rd32(sp0 - 0x1a4u); loc_1a0 = rd32(sp0 - 0x1a0u); loc_18c = rd32(sp0 - 0x18cu); goto E_101125d5;
    case 0x101125dcu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_101125dc;
    case 0x101125e2u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_101125e2;
    case 0x101125eeu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_101125ee;
    case 0x101125f6u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101125f6;
    case 0x1011260bu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011260b;
    case 0x10112616u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10112616;
    case 0x1011261cu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011261c;
    case 0x1011262au: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011262a;
    case 0x10112636u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10112636;
    case 0x10112644u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10112644;
    case 0x10112648u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10112648;
    case 0x10112659u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10112659;
    case 0x10112661u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10112661;
    case 0x10112666u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10112666;
    case 0x10112679u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10112679;
    case 0x10112683u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10112683;
    case 0x1011268cu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011268c;
    case 0x10112695u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10112695;
    case 0x10112699u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10112699;
    case 0x101126a2u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101126a2;
    case 0x101126bfu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101126bf;
    case 0x101126c3u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101126c3;
    case 0x101126d8u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101126d8;
    case 0x101126dcu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101126dc;
    case 0x101126e5u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101126e5;
    case 0x101126f1u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101126f1;
    case 0x101126f9u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101126f9;
    case 0x10112705u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10112705;
    case 0x1011270fu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011270f;
    case 0x10112712u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10112712;
    case 0x1011271bu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011271b;
    case 0x1011272au: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011272a;
    case 0x10112736u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10112736;
    case 0x10112740u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10112740;
    case 0x10112743u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10112743;
    case 0x1011274cu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011274c;
    case 0x1011275bu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011275b;
    case 0x10112764u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10112764;
    case 0x10112770u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10112770;
    case 0x1011277au: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011277a;
    case 0x1011277du: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011277d;
    default: break;
    }
#endif

    COW_AT(101125b0)
    wr32(sp0 - 0x1a0u, in_ebx);
    wr32(sp0 - 0x1a4u, in_ebp);
    wr32(sp0 - 0x1a8u, in_esi);
    wr32(sp0 - 0x1acu, in_edi);
    wr32(sp0 - 0x18cu, self);
    g->edx = in_edx;
    g->esp = sp0 - 0x1acu;
    t1 = cow_thiscall(g, COW_IMG(0x10109110u), sp0 - 0x19cu, 0);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    COW_AT(101125c9)
    ebx = 0x20u;
    esi = sp0 - 0x100u;
    loc_1a0 = in_ebx;
    loc_1a4 = in_ebp;
    loc_1a8 = in_esi;
    loc_1ac = in_edi;
    loc_18c = self;
L_101125d5: ;
    COW_AT(101125d5)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1acu;
    t3 = cow_thiscall(g, COW_IMG(0x10109110u), esi, 0);
    t4 = g->edx;
    eax = t3;
    edx = t4;
    COW_AT(101125dc)
    if (ebx != 1u)
    {
        ebx = ebx - 1u;
        esi = esi + 8u;
        loc_1a0 = rd32(sp0 - 0x1a0u);
        loc_1a4 = rd32(sp0 - 0x1a4u);
        loc_1a8 = rd32(sp0 - 0x1a8u);
        loc_1ac = rd32(sp0 - 0x1acu);
        loc_18c = rd32(sp0 - 0x18cu);
        goto L_101125d5;
    }
    ebx = ebx - 1u;
    COW_AT(101125e2)
    g->edx = edx;
    g->esp = sp0 - 0x1acu;
    t5 = cow_call_regs(g, COW_IMG(0x1010c590u), eax, arg2, g->edx, 1, 0);
    t6 = g->edx;
    eax = t5;
    edx = t6;
    COW_AT(101125ee)
    if (eax == 0u) goto L_101126f9;
    edi = self;
L_101125f6: ;
    COW_AT(101125f6)
    wr32(sp0 - 0x1b0u, 0x23u);
    wr32(sp0 - 0x1b4u, sp0 - 0x19cu);
    wr32(sp0 - 0x1b8u, 0x20u);
    wr32(sp0 - 0x1bcu, sp0 - 0x180u);
    g->ebx = ebx;
    g->eax = eax;
    g->edx = sp0 - 0x180u;
    g->esp = sp0 - 0x1acu;
    t7 = cow_thiscall(g, COW_IMG(0x10109c60u), eax, 4, sp0 - 0x180u, 0x20u, sp0 - 0x19cu, 0x23u);
    t8 = g->edx;
    eax = t7;
    edx = t8;
    COW_AT(1011260b)
    if ((uint16_t)eax == 0u) goto L_101126e5;
    ebp = eax;
    COW_AT(10112616)
    if ((uint16_t)ebp < 2u) goto L_10112661;
    COW_AT(1011261c)
    t9 = rd32(sp0 - 0x180u);
    wr32(sp0 - 0x1b0u, t9);
    g->eax = t9;
    g->edx = edx;
    g->esp = sp0 - 0x1acu;
    t10 = cow_thiscall(g, COW_IMG(0x10109120u), sp0 - 0x188u, 1, t9);
    t11 = g->edx;
    eax = t10;
    edx = t11;
    COW_AT(1011262a)
    wr32(sp0 - 0x1b0u, COW_IMG(0x1036bf28u));
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1acu;
    t12 = cow_thiscall(g, COW_IMG(0x10109570u), eax, 1, COW_IMG(0x1036bf28u));
    t13 = g->edx;
    eax = t12;
    edx = t13;
    COW_AT(10112636)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1acu;
    t14 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x188u, 0);
    t15 = g->edx;
    edx = t15;
    ebx = (ebx & 0xffffff00u) | eax == 0u;
    eax = t14;
    COW_AT(10112644)
    if ((uint8_t)ebx == 0u) goto L_10112661;
    COW_AT(10112648)
    t16 = rd32(sp0 - 0x17cu);
    wr32(sp0 - 0x1b0u, t16);
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1acu;
    t17 = cow_thiscall(g, COW_IMG(0x10109570u), arg3, 1, t16);
    t18 = g->edx;
    eax = t17;
    edx = t18;
    COW_AT(10112659)
    if (eax == 0u) goto L_1011272a;
L_10112661: ;
    COW_AT(10112661)
    if ((uint16_t)ebp != 0u)
    {
    COW_AT(10112666)
        ebx = (uint16_t)ebp;
        esi = sp0 - 0x100u;
        edi = sp0 - 0x180u;
L_10112679: ;
    COW_AT(10112679)
        wr32(sp0 - 0x1b0u, rd32(edi));
        g->edx = rd32(edi);
        t22 = rd32(edi);
        g->esp = sp0 - 0x1acu;
        t23 = cow_call_regs(g, COW_IMG(0x101092c0u), eax, esi, g->edx, 0, 1, t22);
        t24 = g->edx;
        eax = t23;
        edx = t24;
    COW_AT(10112683)
        wr32(sp0 - 0x1b0u, 0u);
        g->ebx = ebx;
        g->eax = eax;
        g->esp = sp0 - 0x1acu;
        t25 = cow_fastcall(g, COW_IMG(0x10109e50u), esi, edx, 1, 0u);
        t26 = g->edx;
        eax = t25;
        edx = t26;
    COW_AT(1011268c)
        if (ebx != 1u)
        {
            ebx = ebx - 1u;
            esi = esi + 8u;
            edi = edi + 4u;
            goto L_10112679;
        }
        ebx = ebx - 1u;
    COW_AT(10112695)
        edi = rd32(sp0 - 0x18cu);
    }
    COW_AT(10112699)
    g->esp = sp0 - 0x1acu;
    cow_thiscall(g, COW_IMG(0x10109110u), sp0 - 0x194u, 0);
    COW_AT(101126a2)
    wr32(sp0 - 0x1b0u, sp0 - 0x194u);
    wr32(sp0 - 0x1b4u, ebp);
    wr32(sp0 - 0x1b8u, sp0 - 0x100u);
    wr32(sp0 - 0x1bcu, arg1);
    g->eax = rd32(edi);
    g->edx = sp0 - 0x100u;
    t27 = rd32(edi);
    g->esp = sp0 - 0x1acu;
    t28 = cow_thiscall(g, rd32(t27 + 4u), edi, 4, arg1, sp0 - 0x100u, ebp, sp0 - 0x194u);
    t29 = g->edx;
    eax = t28;
    edx = t29;
    COW_AT(101126bf)
    if (eax == 0u) goto L_101126dc;
    COW_AT(101126c3)
    wr32(sp0 - 0x1b0u, sp0 - 0x194u);
    wr32(sp0 - 0x1b4u, arg2);
    wr32(sp0 - 0x1b8u, arg1);
    g->eax = eax;
    g->edx = arg2;
    g->esp = sp0 - 0x1acu;
    t30 = cow_thiscall(g, COW_IMG(0x101125b0u), eax, 3, arg1, arg2, sp0 - 0x194u);
    t31 = g->edx;
    eax = t30;
    edx = t31;
    COW_AT(101126d8)
    if ((uint8_t)eax == 0u) goto L_1011275b;
L_101126dc: ;
    COW_AT(101126dc)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1acu;
    t36 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x194u, 0);
    t37 = g->edx;
    eax = t36;
    edx = t37;
L_101126e5: ;
    COW_AT(101126e5)
    g->edx = edx;
    g->esp = sp0 - 0x1acu;
    t38 = cow_call_regs(g, COW_IMG(0x1010c590u), eax, arg2, g->edx, 1, 0);
    t39 = g->edx;
    eax = t38;
    edx = t39;
    COW_AT(101126f1)
    if (eax != 0u) goto L_101125f6;
L_101126f9: ;
    COW_AT(101126f9)
    esi = sp0;
    edi = 0x20u;
L_10112705: ;
    COW_AT(10112705)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1acu;
    t40 = cow_thiscall(g, COW_IMG(0x101090a0u), esi - 8u, 0);
    t41 = g->edx;
    eax = t40;
    edx = t41;
    esi = esi - 8u;
    COW_AT(1011270f)
    if (edi != 1u)
    {
        edi = edi - 1u;
        goto L_10112705;
    }
L_10112712: ;
    COW_AT(10112712)
    g->eax = eax;
    g->esp = sp0 - 0x1acu;
    t42 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x19cu, 0);
    eax = t42;
    COW_AT(1011271b)
    g->ebx = rd32(sp0 - 0x1a0u);
    g->esi = rd32(sp0 - 0x1a8u);
    g->edi = rd32(sp0 - 0x1acu);
    g->ebp = rd32(sp0 - 0x1a4u);
    return eax & 0xffffff00u;
L_1011272a: ;
    COW_AT(1011272a)
    esi = sp0;
    edi = 0x20u;
L_10112736: ;
    COW_AT(10112736)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1acu;
    t19 = cow_thiscall(g, COW_IMG(0x101090a0u), esi - 8u, 0);
    t20 = g->edx;
    eax = t19;
    edx = t20;
    esi = esi - 8u;
    COW_AT(10112740)
    if (edi != 1u)
    {
        edi = edi - 1u;
        goto L_10112736;
    }
    COW_AT(10112743)
    g->eax = eax;
    g->esp = sp0 - 0x1acu;
    t21 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x19cu, 0);
    eax = t21;
    COW_AT(1011274c)
    g->ebx = rd32(sp0 - 0x1a0u);
    g->esi = rd32(sp0 - 0x1a8u);
    g->edi = rd32(sp0 - 0x1acu);
    g->ebp = rd32(sp0 - 0x1a4u);
    return (eax & 0xffffff00u) | 1u;
L_1011275b: ;
    COW_AT(1011275b)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1acu;
    t32 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x194u, 0);
    t33 = g->edx;
    eax = t32;
    edx = t33;
    COW_AT(10112764)
    esi = sp0;
    edi = 0x20u;
L_10112770: ;
    COW_AT(10112770)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1acu;
    t34 = cow_thiscall(g, COW_IMG(0x101090a0u), esi - 8u, 0);
    t35 = g->edx;
    eax = t34;
    edx = t35;
    esi = esi - 8u;
    COW_AT(1011277a)
    if (edi != 1u)
    {
        edi = edi - 1u;
        goto L_10112770;
    }
    COW_AT(1011277d)
    goto L_10112712;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101125b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101125c9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x1acu);
        in_esi = rd32(sp0 - 0x1a8u);
        in_ebp = rd32(sp0 - 0x1a4u);
        in_ebx = rd32(sp0 - 0x1a0u);
        g->esp = sp0 - 0x1acu;
        wr32(sp0 - 0x18cu, self);
        (void)sp0;
        return 1;
    }
    case 0x101125d5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_18c;
        uint32_t loc_1a0;
        uint32_t loc_1a4;
        uint32_t loc_1a8;
        uint32_t loc_1ac;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_1ac = rd32(sp0 - 0x1acu);
        loc_1a8 = rd32(sp0 - 0x1a8u);
        loc_1a4 = rd32(sp0 - 0x1a4u);
        loc_1a0 = rd32(sp0 - 0x1a0u);
        loc_18c = rd32(sp0 - 0x18cu);
        g->esp = sp0 - 0x1acu;
        (void)sp0;
        return 1;
    }
    case 0x101125dcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x1acu;
        (void)sp0;
        return 1;
    }
    case 0x101125e2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x1acu;
        (void)sp0;
        return 1;
    }
    case 0x101125eeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x1acu;
        (void)sp0;
        return 1;
    }
    case 0x101125f6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1acu;
        (void)sp0;
        return 1;
    }
    case 0x1011260bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1acu;
        wr32(sp0 - 0x1bcu, sp0 - 0x180u);
        wr32(sp0 - 0x1b4u, sp0 - 0x19cu);
        (void)sp0;
        return 1;
    }
    case 0x10112616u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1acu;
        wr32(sp0 - 0x1bcu, sp0 - 0x180u);
        wr32(sp0 - 0x1b4u, sp0 - 0x19cu);
        (void)sp0;
        return 1;
    }
    case 0x1011261cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1acu;
        wr32(sp0 - 0x1bcu, sp0 - 0x180u);
        wr32(sp0 - 0x1b4u, sp0 - 0x19cu);
        (void)sp0;
        return 1;
    }
    case 0x1011262au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1acu;
        wr32(sp0 - 0x1bcu, sp0 - 0x180u);
        wr32(sp0 - 0x1b4u, sp0 - 0x19cu);
        (void)sp0;
        return 1;
    }
    case 0x10112636u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1acu;
        wr32(sp0 - 0x1bcu, sp0 - 0x180u);
        wr32(sp0 - 0x1b4u, sp0 - 0x19cu);
        (void)sp0;
        return 1;
    }
    case 0x10112644u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1acu;
        wr32(sp0 - 0x1bcu, sp0 - 0x180u);
        wr32(sp0 - 0x1b4u, sp0 - 0x19cu);
        (void)sp0;
        return 1;
    }
    case 0x10112648u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1acu;
        wr32(sp0 - 0x1bcu, sp0 - 0x180u);
        wr32(sp0 - 0x1b4u, sp0 - 0x19cu);
        (void)sp0;
        return 1;
    }
    case 0x10112659u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1acu;
        wr32(sp0 - 0x1bcu, sp0 - 0x180u);
        wr32(sp0 - 0x1b4u, sp0 - 0x19cu);
        (void)sp0;
        return 1;
    }
    case 0x10112661u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1acu;
        wr32(sp0 - 0x1bcu, sp0 - 0x180u);
        wr32(sp0 - 0x1b4u, sp0 - 0x19cu);
        (void)sp0;
        return 1;
    }
    case 0x10112666u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1acu;
        wr32(sp0 - 0x1bcu, sp0 - 0x180u);
        wr32(sp0 - 0x1b4u, sp0 - 0x19cu);
        (void)sp0;
        return 1;
    }
    case 0x10112679u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1acu;
        wr32(sp0 - 0x1bcu, sp0 - 0x180u);
        wr32(sp0 - 0x1b4u, sp0 - 0x19cu);
        (void)sp0;
        return 1;
    }
    case 0x10112683u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1acu;
        wr32(sp0 - 0x1bcu, sp0 - 0x180u);
        wr32(sp0 - 0x1b4u, sp0 - 0x19cu);
        (void)sp0;
        return 1;
    }
    case 0x1011268cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1acu;
        wr32(sp0 - 0x1bcu, sp0 - 0x180u);
        wr32(sp0 - 0x1b4u, sp0 - 0x19cu);
        (void)sp0;
        return 1;
    }
    case 0x10112695u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1acu;
        wr32(sp0 - 0x1bcu, sp0 - 0x180u);
        wr32(sp0 - 0x1b4u, sp0 - 0x19cu);
        (void)sp0;
        return 1;
    }
    case 0x10112699u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1acu;
        wr32(sp0 - 0x1bcu, sp0 - 0x180u);
        wr32(sp0 - 0x1b4u, sp0 - 0x19cu);
        (void)sp0;
        return 1;
    }
    case 0x101126a2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1acu;
        wr32(sp0 - 0x1bcu, sp0 - 0x180u);
        wr32(sp0 - 0x1b4u, sp0 - 0x19cu);
        (void)sp0;
        return 1;
    }
    case 0x101126bfu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x1acu;
        g->esi = arg1;
        wr32(sp0 - 0x1b8u, sp0 - 0x100u);
        wr32(sp0 - 0x1b0u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x101126c3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x1acu;
        g->esi = arg1;
        wr32(sp0 - 0x1b8u, sp0 - 0x100u);
        wr32(sp0 - 0x1b0u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x101126d8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1acu;
        wr32(sp0 - 0x1b0u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x101126dcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1acu;
        wr32(sp0 - 0x1b0u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x101126e5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1acu;
        (void)sp0;
        return 1;
    }
    case 0x101126f1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1acu;
        (void)sp0;
        return 1;
    }
    case 0x101126f9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1acu;
        (void)sp0;
        return 1;
    }
    case 0x10112705u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1acu;
        (void)sp0;
        return 1;
    }
    case 0x1011270fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1acu;
        (void)sp0;
        return 1;
    }
    case 0x10112712u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1acu;
        (void)sp0;
        return 1;
    }
    case 0x1011271bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1acu;
        (void)sp0;
        return 1;
    }
    case 0x1011272au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1acu;
        wr32(sp0 - 0x1bcu, sp0 - 0x180u);
        wr32(sp0 - 0x1b4u, sp0 - 0x19cu);
        (void)sp0;
        return 1;
    }
    case 0x10112736u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1acu;
        wr32(sp0 - 0x1bcu, sp0 - 0x180u);
        wr32(sp0 - 0x1b4u, sp0 - 0x19cu);
        (void)sp0;
        return 1;
    }
    case 0x10112740u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1acu;
        wr32(sp0 - 0x1bcu, sp0 - 0x180u);
        wr32(sp0 - 0x1b4u, sp0 - 0x19cu);
        (void)sp0;
        return 1;
    }
    case 0x10112743u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1acu;
        wr32(sp0 - 0x1bcu, sp0 - 0x180u);
        wr32(sp0 - 0x1b4u, sp0 - 0x19cu);
        (void)sp0;
        return 1;
    }
    case 0x1011274cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1acu;
        wr32(sp0 - 0x1bcu, sp0 - 0x180u);
        wr32(sp0 - 0x1b4u, sp0 - 0x19cu);
        (void)sp0;
        return 1;
    }
    case 0x1011275bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1acu;
        wr32(sp0 - 0x1b0u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x10112764u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1acu;
        wr32(sp0 - 0x1b0u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x10112770u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1acu;
        wr32(sp0 - 0x1b0u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1011277au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1acu;
        wr32(sp0 - 0x1b0u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    case 0x1011277du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1acu;
        wr32(sp0 - 0x1b0u, sp0 - 0x194u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101125b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101125b0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
