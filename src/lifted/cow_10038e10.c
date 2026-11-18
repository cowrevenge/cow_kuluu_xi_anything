/* f_0x10038e10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10038e10(Guest* g)
{
    double d33;
    double d35;
    double d37;
    double d44;
    double d49;
    double d53;
    double d59;
    double d82;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_58;
    uint32_t loc_64;
    uint32_t loc_68;
    uint32_t loc_6c;
    uint32_t loc_70;
    uint32_t loc_74;
    uint32_t loc_78;
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
    uint32_t t34;
    uint32_t t36;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t69;
    uint32_t t7;
    uint32_t t70;
    uint32_t t71;
    uint32_t t72;
    uint32_t t73;
    uint32_t t74;
    uint32_t t75;
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
    uint32_t t80;
    uint32_t t81;
    uint32_t t83;
    uint32_t t84;
    uint32_t t85;
    uint32_t t86;
    uint32_t t87;
    uint32_t t88;
    uint32_t t89;
    uint32_t t9;
    uint32_t t90;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 260u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10038e2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_ebp = g->ebp; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xb0u); in_ebx = rd32(sp0 - 0xacu); g->ebx = rd32(sp0 - 0xacu); g->edi = rd32(sp0 - 0xb0u); goto E_10038e2f;
    case 0x10038e36u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_ebp = g->ebp; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xb0u); in_ebx = rd32(sp0 - 0xacu); g->ebx = rd32(sp0 - 0xacu); g->edi = rd32(sp0 - 0xb0u); goto E_10038e36;
    case 0x10038e3au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_ebp = g->ebp; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xb0u); in_ebx = rd32(sp0 - 0xacu); g->ebx = rd32(sp0 - 0xacu); g->edi = rd32(sp0 - 0xb0u); goto E_10038e3a;
    case 0x10038e3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_ebp = g->ebp; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xb0u); in_ebx = rd32(sp0 - 0xacu); g->ebx = rd32(sp0 - 0xacu); g->edi = rd32(sp0 - 0xb0u); goto E_10038e3e;
    case 0x10038e40u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_ebp = g->ebp; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xb0u); in_ebx = rd32(sp0 - 0xacu); g->ebx = rd32(sp0 - 0xacu); g->edi = rd32(sp0 - 0xb0u); goto E_10038e40;
    case 0x10038e49u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_ebp = g->ebp; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xb0u); in_ebx = rd32(sp0 - 0xacu); g->ebx = rd32(sp0 - 0xacu); g->edi = rd32(sp0 - 0xb0u); goto E_10038e49;
    case 0x10038e52u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xb0u); in_ebx = rd32(sp0 - 0xacu); g->ebx = rd32(sp0 - 0xacu); g->edi = rd32(sp0 - 0xb0u); goto E_10038e52;
    case 0x10038e5du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_ebp = g->ebp; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xb0u); in_ebx = rd32(sp0 - 0xacu); g->ebx = rd32(sp0 - 0xacu); g->edi = rd32(sp0 - 0xb0u); goto E_10038e5d;
    case 0x10038fc9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_10038fc9;
    case 0x10038fd0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); goto E_10038fd0;
    case 0x10038fe0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); goto E_10038fe0;
    case 0x10039064u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); goto E_10039064;
    case 0x1003909fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_58 = rd32(sp0 - 0x58u); x0 = ST(0); goto E_1003909f;
    case 0x100390a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_58 = rd32(sp0 - 0x58u); x0 = ST(0); goto E_100390a5;
    case 0x100390b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_58 = rd32(sp0 - 0x58u); x0 = ST(0); goto E_100390b2;
    case 0x100390b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_58 = rd32(sp0 - 0x58u); x0 = ST(0); goto E_100390b8;
    case 0x100390fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_58 = rd32(sp0 - 0x58u); x0 = ST(0); goto E_100390fb;
    case 0x10039292u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10039292;
    case 0x1003929cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1003929c;
    case 0x100392abu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100392ab;
    case 0x100392b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100392b5;
    case 0x10039309u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); goto E_10039309;
    case 0x1003930eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); goto E_1003930e;
    case 0x10039366u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); goto E_10039366;
    default: break;
    }
#endif

    COW_AT(10038e10)
    wr32(sp0 - 0xacu, in_ebx);
    wr32(sp0 - 0xb0u, in_edi);
    wr32(sp0 - 0xb4u, 0xc8u);
    wr32(sp0 - 0x94u, self);
    g->edx = in_edx;
    g->esp = sp0 - 0xb0u;
    t1 = cow_call_regs(g, COW_IMG(0x10193850u), in_eax, g->ecx, g->edx, 1, 1, 0xc8u);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        goto L_10038e52;
    }
    edx = t2;
    COW_AT(10038e2f)
    if (rd32(self + 4u) == 0u)
    {
        eax = rd32(self + 4u);
        goto L_10038e52;
    }
    eax = rd32(self + 4u);
    COW_AT(10038e36)
    if (eax == 0u)
    {
    COW_AT(10038e3e)
        edi = 0u;
    }
    else
    {
    COW_AT(10038e3a)
        edi = rd32(eax);
    }
    COW_AT(10038e40)
    if (rd32(COW_IMG(0x1047b958u)) == 0u)
    {
        eax = rd32(COW_IMG(0x1047b958u));
        goto L_10038e52;
    }
    COW_AT(10038e49)
    if (rd32(COW_IMG(0x10456d50u)) != 0u) goto L_10038e5d;
    eax = rd32(COW_IMG(0x10456d50u));
L_10038e52: ;
    COW_AT(10038e52)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return eax & 0xffffff00u;
L_10038e5d: ;
    COW_AT(10038e5d)
    wr32(sp0 - 0xb4u, in_ebp);
    wr32(sp0 - 0xb8u, in_esi);
    wr32(sp0 - 0xbcu, 5u);
    wr32(sp0 - 0xc0u, 0x19u);
    t3 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xc4u, t3);
    g->esp = sp0 - 0xbcu;
    cow_thiscall(g, rd32(rd32(t3) + 0xc8u), rd32(t3), 2, t3, 0x19u);
    wr32(sp0 - 0xc0u, 0u);
    wr32(sp0 - 0xc4u, 0x18u);
    t4 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xc8u, t4);
    g->esp = sp0 - 0xc4u;
    cow_thiscall(g, rd32(rd32(t4) + 0xc8u), rd32(t4), 1, t4);
    wr32(sp0 - 0xc8u, 0u);
    wr32(sp0 - 0xccu, 0xeu);
    t5 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xd0u, t5);
    g->esp = sp0 - 0xb8u;
    cow_thiscall(g, rd32(rd32(t5) + 0xc8u), rd32(t5), 6, t5, 0xeu, 0u, 0x18u, 0u, 5u);
    wr32(sp0 - 0xbcu, 0u);
    wr32(sp0 - 0xc0u, 7u);
    t6 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xc4u, t6);
    g->esp = sp0 - 0xb4u;
    cow_thiscall(g, rd32(rd32(t6) + 0xc8u), rd32(t6), 4, t6, 7u, 0u, in_esi);
    wr32(sp0 - 0xb8u, 1u);
    wr32(sp0 - 0xbcu, 0x1bu);
    t7 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xc0u, t7);
    g->esp = sp0 - 0xc0u;
    cow_thiscall(g, rd32(rd32(t7) + 0xc8u), rd32(t7), 0);
    wr32(sp0 - 0xc4u, 5u);
    wr32(sp0 - 0xc8u, 0x13u);
    t8 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xccu, t8);
    g->esp = sp0 - 0xc8u;
    cow_thiscall(g, rd32(rd32(t8) + 0xc8u), rd32(t8), 1, t8);
    wr32(sp0 - 0xccu, 6u);
    wr32(sp0 - 0xd0u, 0x14u);
    t9 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xd4u, t9);
    g->esp = sp0 - 0xd4u;
    cow_thiscall(g, rd32(rd32(t9) + 0xc8u), rd32(t9), 0);
    wr32(sp0 - 0xd8u, 5u);
    wr32(sp0 - 0xdcu, 1u);
    wr32(sp0 - 0xe0u, 0u);
    t10 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xe4u, t10);
    g->esp = sp0 - 0xe0u;
    cow_thiscall(g, rd32(rd32(t10) + 0xfcu), rd32(t10), 1, t10);
    wr32(sp0 - 0xe4u, 0u);
    wr32(sp0 - 0xe8u, 2u);
    wr32(sp0 - 0xecu, 0u);
    t11 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xf0u, t11);
    cow_thiscall(g, rd32(rd32(t11) + 0xfcu), rd32(t11), 4, t11, 0u, 2u, 0u);
    wr32(sp0 - 0xe4u, 2u);
    wr32(sp0 - 0xe8u, 3u);
    wr32(sp0 - 0xecu, 0u);
    t12 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xf0u, t12);
    g->esp = sp0 - 0xf0u;
    cow_thiscall(g, rd32(rd32(t12) + 0xfcu), rd32(t12), 0);
    wr32(sp0 - 0xf4u, 6u);
    wr32(sp0 - 0xf8u, 4u);
    wr32(sp0 - 0xfcu, 0u);
    t13 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x100u, t13);
    g->esp = sp0 - 0xc0u;
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xfcu), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 16, t13, 0u, 4u, 6u, rd32(sp0 - 0xf0u), 0u, 3u, 2u, 0u, 1u, 5u, rd32(sp0 - 0xd4u), 0x14u, 6u, 0x13u, 5u);
    wr32(sp0 - 0xc4u, 0u);
    wr32(sp0 - 0xc8u, 5u);
    wr32(sp0 - 0xccu, 0u);
    t14 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xd0u, t14);
    g->esp = sp0 - 0xb4u;
    cow_thiscall(g, rd32(rd32(t14) + 0xfcu), rd32(t14), 7, t14, 0u, 5u, 0u, rd32(sp0 - 0xc0u), 0x1bu, 1u);
    wr32(sp0 - 0xb8u, 2u);
    wr32(sp0 - 0xbcu, 6u);
    wr32(sp0 - 0xc0u, 0u);
    t15 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xc4u, t15);
    g->esp = sp0 - 0x84u;
    cow_thiscall(g, rd32(rd32(t15) + 0xfcu), rd32(t15), 16, t15, 0u, 6u, 2u, in_ebp, in_edi, in_ebx, rd32(sp0 - 0xa8u), rd32(sp0 - 0xa4u), rd32(sp0 - 0xa0u), rd32(sp0 - 0x9cu), rd32(sp0 - 0x98u), self, rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u));
    wr32(sp0 - 0x88u, 1u);
    wr32(sp0 - 0x8cu, 4u);
    wr32(sp0 - 0x90u, 1u);
    t16 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x94u, t16);
    g->esp = sp0 - 0x6cu;
    cow_thiscall(g, rd32(rd32(t16) + 0xfcu), rd32(t16), 10, t16, 1u, 4u, 1u, rd32(sp0 - 0x84u), rd32(sp0 - 0x80u), rd32(sp0 - 0x7cu), rd32(sp0 - 0x78u), rd32(sp0 - 0x74u), rd32(sp0 - 0x70u));
    wr32(sp0 - 0x70u, 1u);
    wr32(sp0 - 0x74u, 1u);
    wr32(sp0 - 0x78u, 1u);
    t17 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x7cu, t17);
    g->eax = t17;
    t18 = rd32(t17);
    g->esp = sp0 - 0x7cu;
    t19 = cow_thiscall(g, rd32(t18 + 0xfcu), t18, 0);
    t20 = g->ecx;
    t21 = rd8(edi + 0x31u);
    if ((int32_t)t21 <= 0)
    {
        eax = t19;
        ecx = t20;
        edx = t21;
        ebx = self;
    }
    else
    {
        edx = t21;
        esi = t21;
    COW_AT(10038fc9)
        wr32(sp0 - 0x5cu, 0u);
        ebx = self;
        ebp = 0u;
        edi = edi + 0x40u;
        loc_70 = 1u;
        loc_74 = 1u;
        loc_78 = 1u;
L_10038fd0: ;
    COW_AT(10038fd0)
        wr32(sp0 - 0x80u, 0x144u);
        if (ebp != esi - 1u)
        {
    COW_AT(10039064)
            t29 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x84u, t29);
            g->esp = sp0 - 0x70u;
            cow_thiscall(g, rd32(rd32(t29) + 0x130u), rd32(t29), 5, t29, 0x144u, rd32(sp0 - 0x7cu), loc_78, loc_74);
            t30 = cow_divs(g, rd32(sp0 - 0x50u), esi);
            t31 = cow_mods(g, rd32(sp0 - 0x50u), esi);
            t32 = t30 + rd32(ebx + 8u);
            wr32(sp0 - 0x58u, t32);
            d33 = fr(g, (double)(int32_t)t32 * (double)rdf32(COW_IMG(0x1032a9f4u)));
            if ((cow_fsw(g, d33, (double)rdf32(COW_IMG(0x10329d30u)), 1u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, d33, (double)rdf32(COW_IMG(0x10329d30u)), 1u) & 0x4100u;
                x0 = d33;
            }
            else
            {
                eax = cow_fsw(g, d33, (double)rdf32(COW_IMG(0x10329d30u)), 1u) & 0x4100u;
                x0 = d33;
    COW_AT(1003909f)
                x0 = fr(g, x0 - (double)rdf32(COW_IMG(0x10329d2cu)));
            }
    COW_AT(100390a5)
            if (x0 < (double)rdf32(COW_IMG(0x10329d28u)))
            {
    COW_AT(100390b2)
                x0 = fr(g, x0 + (double)rdf32(COW_IMG(0x10329d2cu)));
            }
    COW_AT(100390b8)
            t34 = rd32(edi) & 0xffffffu;
            d35 = fr(g, (double)rdf32(edi - 4u) * (double)rdf32(COW_IMG(0x1032a9f0u)));
            wr32(sp0 - 0x58u, t34);
            t36 = ((uint32_t)rd8(edi + 3u) << 8u | (uint8_t)t34) << 0x10u | (uint8_t)(t34 >> 0x10u) | (t34 & 0xff00u);
            wr32(sp0 - 0x58u, t36);
            d37 = (double)(float)fr(g, fr(g, sin(x0)) * d35);
            wrf32(sp0 - 0x5cu, (float)d37);
            edx = (uint8_t)(t34 >> 0x10u);
            ebx = t36;
            loc_64 = rd32(sp0 - 0x64u);
            loc_68 = rd32(sp0 - 0x68u);
            loc_6c = rd32(sp0 - 0x6cu);
            loc_58 = t36;
            x0 = fr(g, fr(g, cos(x0)) * d35);
        }
        else
        {
    COW_AT(10038fe0)
            t22 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x84u, t22);
            g->esp = sp0 - 0x84u;
            cow_thiscall(g, rd32(rd32(t22) + 0x130u), rd32(t22), 0);
            wr32(sp0 - 0x88u, 0x60u);
            wr32(sp0 - 0x8cu, 0x18u);
            t23 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x90u, t23);
            g->esp = sp0 - 0x90u;
            cow_thiscall(g, rd32(rd32(t23) + 0xc8u), rd32(t23), 0);
            wr32(sp0 - 0x94u, 0u);
            wr32(sp0 - 0x98u, 0x1bu);
            t24 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x9cu, t24);
            g->esp = sp0 - 0x88u;
            cow_thiscall(g, rd32(rd32(t24) + 0xc8u), rd32(t24), 5, t24, 0x1bu, 0u, rd32(sp0 - 0x90u), 0x18u);
            wr32(sp0 - 0x8cu, 3u);
            wr32(sp0 - 0x90u, 1u);
            wr32(sp0 - 0x94u, 0u);
            t25 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x98u, t25);
            g->esp = sp0 - 0x60u;
            cow_thiscall(g, rd32(rd32(t25) + 0xfcu), rd32(t25), 14, t25, 0u, 1u, 3u, 0x60u, rd32(sp0 - 0x84u), 0x144u, rd32(sp0 - 0x7cu), rd32(sp0 - 0x78u), rd32(sp0 - 0x74u), rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u));
            wr32(sp0 - 0x64u, 3u);
            wr32(sp0 - 0x68u, 4u);
            wr32(sp0 - 0x6cu, 0u);
            t26 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x70u, t26);
            g->edx = rd32(COW_IMG(0x1045666cu));
            t27 = rd32(COW_IMG(0x1045666cu));
            g->esp = sp0 - 0x70u;
            cow_thiscall(g, rd32(rd32(t26) + 0xfcu), rd32(t26), 0);
            t28 = g->edx;
            wr32(sp0 - 0x5cu, 0u);
            edx = t28;
            ebx = rd32(sp0 - 0x58u);
            loc_64 = 3u;
            loc_68 = 4u;
            loc_6c = 0u;
            loc_58 = rd32(sp0 - 0x58u);
            x0 = (double)rdf32(COW_IMG(0x103295d8u));
        }
    COW_AT(100390fb)
        wrf32(sp0 - 0x54u, (float)(double)(float)x0);
        wrf32(sp0 - 0x24u, (float)(double)(float)x0);
        t38 = rd32(sp0 - 0x5cu);
        wr32(sp0 - 0x28u, t38);
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x1cu, 0x3f800000u);
        wr32(sp0 - 0x18u, ebx);
        wr32(sp0 - 0x14u, 0u);
        wr32(sp0 - 0x10u, 0u);
        g->eax = t38;
        g->esp = sp0 - 0x70u;
        t39 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(COW_IMG(0x1045666cu)), 0);
        wr32(sp0 - 0x3cu, 0u);
        t40 = rd32(t39 + 8u);
        wr32(sp0 - 0x40u, t40);
        t41 = rd32(sp0 - 0x54u);
        wr32(sp0 - 8u, t41);
        wr32(sp0 - 4u, 0u);
        t42 = rd32(sp0 - 0x5cu);
        t43 = rd32(COW_IMG(0x1045666cu));
        d44 = fr(g, (double)(int64_t)cow_i64(t40, 0u) + (double)rdf32(sp0 - 0x5cu));
        wr32(sp0, 0x3f800000u);
        wr32(sp0 + 4u, ebx);
        wr32(sp0 + 8u, 0x3f800000u);
        wr32(sp0 + 0xcu, 0u);
        wr32(sp0 + 0x10u, t42);
        wrf32(sp0 - 0xcu, (float)(double)(float)d44);
        g->eax = t42;
        g->edx = t41;
        t45 = cow_thiscall(g, COW_IMG(0x10009e00u), t43, 0);
        t46 = g->edx;
        wr32(sp0 - 0x2cu, 0u);
        t47 = rd32(t45 + 0xcu);
        wr32(sp0 - 0x30u, t47);
        t48 = rd32(COW_IMG(0x1045666cu));
        wr32(sp0 + 0x18u, 0u);
        wr32(sp0 + 0x1cu, 0x3f800000u);
        wr32(sp0 + 0x20u, ebx);
        wr32(sp0 + 0x24u, 0u);
        d49 = fr(g, (double)(int64_t)cow_i64(t47, 0u) + (double)rdf32(sp0 - 0x54u));
        wr32(sp0 + 0x28u, 0x3f800000u);
        wrf32(sp0 + 0x14u, (float)d49);
        t50 = cow_thiscall(g, COW_IMG(0x10009e00u), t48, 0);
        wr32(sp0 - 0x44u, 0u);
        t51 = rd32(t50 + 8u);
        wr32(sp0 - 0x48u, t51);
        t52 = rd32(COW_IMG(0x1045666cu));
        d53 = fr(g, (double)(int64_t)cow_i64(t51, 0u) + (double)rdf32(sp0 - 0x5cu));
        wrf32(sp0 + 0x2cu, (float)d53);
        g->edx = t51;
        t54 = cow_thiscall(g, COW_IMG(0x10009e00u), t52, 0);
        t55 = g->ecx;
        t56 = g->edx;
        wr32(sp0 - 0x34u, 0u);
        t57 = rd32(t54 + 0xcu);
        wr32(sp0 - 0x38u, t57);
        t58 = rd32(COW_IMG(0x1045666cu));
        wr32(sp0 + 0x34u, 0u);
        wr32(sp0 + 0x38u, 0x3f800000u);
        wr32(sp0 + 0x3cu, ebx);
        wr32(sp0 + 0x40u, 0x3f800000u);
        d59 = fr(g, (double)(int64_t)cow_i64(t57, 0u) + (double)rdf32(sp0 - 0x54u));
        wr32(sp0 + 0x44u, 0x3f800000u);
        wrf32(sp0 + 0x30u, (float)d59);
        t60 = rd8(t58 + 0x828u);
        wr8(t58 + 0x828u, 0u);
        wr8(sp0 - 0x5du, (uint8_t)t60);
        g->eax = t58;
        t61 = cow_thiscall(g, COW_IMG(0x1000d660u), rd32(COW_IMG(0x104566e8u)), 0);
        if ((uint8_t)t61 == 0u) goto L_10039309;
    COW_AT(10039292)
        if (rd32(COW_IMG(0x1047b95cu)) == 0u) goto L_10039309;
        ecx = rd32(COW_IMG(0x1047b95cu));
    COW_AT(1003929c)
        if (rd32(rd32(COW_IMG(0x1045666cu)) + 0x198u) == 0u)
        {
            eax = rd32(COW_IMG(0x1045666cu));
            goto L_1003930e;
        }
        eax = rd32(COW_IMG(0x1045666cu));
    COW_AT(100392ab)
        if (rd32(eax + 0x1a8u) == 0u) goto L_1003930e;
    COW_AT(100392b5)
        wr32(sp0 - 0x74u, ecx);
        wr32(sp0 - 0x78u, 0u);
        t62 = rd32(eax + 0xcu);
        wr32(sp0 - 0x7cu, t62);
        g->esp = sp0 - 0x70u;
        cow_thiscall(g, rd32(rd32(t62) + 0xf4u), ecx, 3, t62, 0u, ecx);
        t63 = rd32(rd32(COW_IMG(0x1045666cu)) + 0x1a8u);
        wr32(sp0 - 0x74u, t63);
        t64 = rd32(rd32(COW_IMG(0x1045666cu)) + 0x1a0u);
        wr32(sp0 - 0x78u, t64);
        t65 = rd32(rd32(COW_IMG(0x1045666cu)) + 0x198u);
        wr32(sp0 - 0x7cu, t65);
        g->ebx = ebx;
        g->eax = t65;
        g->edx = t64;
        t66 = cow_thiscall(g, COW_IMG(0x10009e20u), rd32(COW_IMG(0x1045666cu)), 3, t65, t64, t63);
        t67 = g->edx;
        wr32(sp0 - 0x74u, 0x1cu);
        wr32(sp0 - 0x78u, sp0 - 0x28u);
        wr32(sp0 - 0x7cu, 2u);
        wr32(sp0 - 0x80u, 5u);
        g->ebx = ebx;
        g->edx = t67;
        t68 = cow_thiscall(g, COW_IMG(0x1000cd00u), rd32(COW_IMG(0x1045666cu)), 4, 5u, 2u, sp0 - 0x28u, 0x1cu);
        t69 = g->edx;
        wr32(sp0 - 0x74u, 0u);
        wr32(sp0 - 0x78u, 0u);
        cow_fastcall(g, COW_IMG(0x1000a1d0u), rd32(COW_IMG(0x1045666cu)), t69, 2, 0u, 0u);
L_10039309: ;
    COW_AT(10039309)
        eax = rd32(COW_IMG(0x1045666cu));
L_1003930e: ;
    COW_AT(1003930e)
        wr32(sp0 - 0x74u, rd32(COW_IMG(0x1047b958u)));
        wr32(sp0 - 0x78u, 0u);
        t70 = rd32(eax + 0xcu);
        wr32(sp0 - 0x7cu, t70);
        g->eax = t70;
        t71 = rd32(COW_IMG(0x1047b958u));
        g->esp = sp0 - 0x7cu;
        t72 = cow_thiscall(g, rd32(rd32(rd32(eax + 0xcu)) + 0xf4u), t71, 0);
        wr32(sp0 - 0x80u, 0x1cu);
        wr32(sp0 - 0x84u, sp0 - 0x34u);
        wr32(sp0 - 0x88u, 2u);
        wr32(sp0 - 0x8cu, 5u);
        g->ebx = ebx;
        t73 = rd32(COW_IMG(0x1045666cu));
        cow_thiscall(g, COW_IMG(0x1000cd00u), t73, 4, 5u, 2u, sp0 - 0x34u, 0x1cu);
        t74 = g->ecx;
        t75 = rd32(COW_IMG(0x1045666cu));
        t76 = rd8(sp0 - 0x69u);
        t77 = rd32(sp0 - 0x5cu);
        t78 = rd32(sp0 - 0x58u);
        wr8(t75 + 0x828u, (uint8_t)t76);
        wr32(sp0 - 0x5cu, t77 + 0x168u);
        if ((int32_t)(ebp + 1u) < (int32_t)esi)
        {
            edx = t77 + 0x168u;
            ebx = t78;
            ebp = ebp + 1u;
            edi = edi + 8u;
            loc_70 = rd32(sp0 - 0x70u);
            loc_74 = rd32(sp0 - 0x74u);
            loc_78 = 0u;
            goto L_10038fd0;
        }
        eax = t75;
        ecx = (t74 & 0xffffff00u) | t76;
        edx = t77 + 0x168u;
        ebx = t78;
    }
    COW_AT(10039366)
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x7cu;
    t79 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t80 = g->ecx;
    t81 = g->edx;
    d82 = cow_take_float(g);
    fpush(g, d82);
    t83 = cow_call_regs(g, COW_IMG(0x10311c6cu), t79, g->ecx, g->edx, 1, 0);
    wr32(sp0 - 0x80u, 0u);
    wr32(sp0 - 0x84u, 0x1bu);
    t84 = t83 + rd32(ebx + 8u);
    wr32(ebx + 8u, t84);
    t85 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x88u, t85);
    g->esp = sp0 - 0x88u;
    cow_thiscall(g, rd32(rd32(t85) + 0xc8u), rd32(t85), 0);
    wr32(sp0 - 0x8cu, 0x60u);
    wr32(sp0 - 0x90u, 0x18u);
    t86 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x94u, t86);
    g->esp = sp0 - 0x94u;
    cow_thiscall(g, rd32(rd32(t86) + 0xc8u), rd32(t86), 0);
    wr32(sp0 - 0x98u, 1u);
    wr32(sp0 - 0x9cu, 0xeu);
    t87 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xa0u, t87);
    g->esp = sp0 - 0xa0u;
    cow_thiscall(g, rd32(rd32(t87) + 0xc8u), rd32(t87), 0);
    wr32(sp0 - 0xa4u, 1u);
    wr32(sp0 - 0xa8u, 7u);
    t88 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xacu, t88);
    g->esp = sp0 - 0xacu;
    cow_thiscall(g, rd32(rd32(t88) + 0xc8u), rd32(t88), 0);
    wr32(sp0 - 0xb0u, 8u);
    wr32(sp0 - 0xb4u, 0x19u);
    t89 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xb8u, t89);
    g->eax = t89;
    g->esp = sp0 - 0xb8u;
    t90 = cow_thiscall(g, rd32(rd32(t89) + 0xc8u), rd32(t89), 0);
    g->ebx = rd32(sp0 - 0xacu);
    g->esi = rd32(sp0 - 0xb8u);
    g->edi = 8u;
    g->ebp = 0x19u;
    return (t90 & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10038e10(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10038e2fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xb0u);
        in_ebx = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xb0u;
        wr32(sp0 - 0x94u, self);
        (void)sp0;
        return 1;
    }
    case 0x10038e36u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xb0u);
        in_ebx = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xb0u;
        wr32(sp0 - 0x94u, self);
        (void)sp0;
        return 1;
    }
    case 0x10038e3au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xb0u);
        in_ebx = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xb0u;
        wr32(sp0 - 0x94u, self);
        (void)sp0;
        return 1;
    }
    case 0x10038e3eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xb0u);
        in_ebx = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xb0u;
        wr32(sp0 - 0x94u, self);
        (void)sp0;
        return 1;
    }
    case 0x10038e40u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xb0u);
        in_ebx = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xb0u;
        wr32(sp0 - 0x94u, self);
        (void)sp0;
        return 1;
    }
    case 0x10038e49u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xb0u);
        in_ebx = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xb0u;
        wr32(sp0 - 0x94u, self);
        (void)sp0;
        return 1;
    }
    case 0x10038e52u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xb0u);
        in_ebx = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xb0u;
        (void)sp0;
        return 1;
    }
    case 0x10038e5du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xb0u);
        in_ebx = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xb0u;
        wr32(sp0 - 0x94u, self);
        (void)sp0;
        return 1;
    }
    case 0x10038fc9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x7cu;
        g->ebp = 0u;
        wr32(sp0 - 0x78u, 1u);
        wr32(sp0 - 0x74u, 1u);
        wr32(sp0 - 0x70u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x10038fd0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x7cu;
        (void)sp0;
        return 1;
    }
    case 0x10038fe0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x80u;
        wr32(sp0 - 0x80u, 0x144u);
        (void)sp0;
        return 1;
    }
    case 0x10039064u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x80u;
        wr32(sp0 - 0x80u, 0x144u);
        (void)sp0;
        return 1;
    }
    case 0x1003909fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_58;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_58 = rd32(sp0 - 0x58u);
        x0 = ST(0);
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x100390a5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_58;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_58 = rd32(sp0 - 0x58u);
        x0 = ST(0);
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x100390b2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_58;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_58 = rd32(sp0 - 0x58u);
        x0 = ST(0);
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x100390b8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_58;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_58 = rd32(sp0 - 0x58u);
        x0 = ST(0);
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x100390fbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_58;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_58 = rd32(sp0 - 0x58u);
        x0 = ST(0);
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x10039292u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x1003929cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x100392abu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x100392b5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x10039309u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_74;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x1003930eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_74;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x10039366u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x7cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10038e10(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10038e10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
