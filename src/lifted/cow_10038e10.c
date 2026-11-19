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
    double d42;
    double d47;
    double d50;
    double d56;
    double d79;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_98;
    uint32_t loc_a4;
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
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
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
    uint32_t t8;
    uint32_t t80;
    uint32_t t81;
    uint32_t t82;
    uint32_t t83;
    uint32_t t84;
    uint32_t t85;
    uint32_t t86;
    uint32_t t87;
    uint32_t t9;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 208u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10038e28u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_ebp = g->ebp; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xb0u); in_ebx = rd32(sp0 - 0xacu); g->ebx = rd32(sp0 - 0xacu); g->edi = rd32(sp0 - 0xb0u); goto E_10038e28;
    case 0x10038e2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_ebp = g->ebp; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xb0u); in_ebx = rd32(sp0 - 0xacu); g->ebx = rd32(sp0 - 0xacu); g->edi = rd32(sp0 - 0xb0u); goto E_10038e2f;
    case 0x10038e36u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_ebp = g->ebp; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xb0u); in_ebx = rd32(sp0 - 0xacu); g->ebx = rd32(sp0 - 0xacu); g->edi = rd32(sp0 - 0xb0u); goto E_10038e36;
    case 0x10038e3au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_ebp = g->ebp; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xb0u); in_ebx = rd32(sp0 - 0xacu); g->ebx = rd32(sp0 - 0xacu); g->edi = rd32(sp0 - 0xb0u); goto E_10038e3a;
    case 0x10038e3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_ebp = g->ebp; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xb0u); in_ebx = rd32(sp0 - 0xacu); g->ebx = rd32(sp0 - 0xacu); g->edi = rd32(sp0 - 0xb0u); goto E_10038e3e;
    case 0x10038e40u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_ebp = g->ebp; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xb0u); in_ebx = rd32(sp0 - 0xacu); g->ebx = rd32(sp0 - 0xacu); g->edi = rd32(sp0 - 0xb0u); goto E_10038e40;
    case 0x10038e49u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_ebp = g->ebp; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xb0u); in_ebx = rd32(sp0 - 0xacu); g->ebx = rd32(sp0 - 0xacu); g->edi = rd32(sp0 - 0xb0u); goto E_10038e49;
    case 0x10038e52u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xb0u); in_ebx = rd32(sp0 - 0xacu); g->ebx = rd32(sp0 - 0xacu); g->edi = rd32(sp0 - 0xb0u); goto E_10038e52;
    case 0x10038e5du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_ebp = g->ebp; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xb0u); in_ebx = rd32(sp0 - 0xacu); g->ebx = rd32(sp0 - 0xacu); g->edi = rd32(sp0 - 0xb0u); goto E_10038e5d;
    case 0x10038e74u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10038e74;
    case 0x10038e8au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10038e8a;
    case 0x10038ea0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10038ea0;
    case 0x10038eb6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10038eb6;
    case 0x10038eccu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10038ecc;
    case 0x10038ee2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10038ee2;
    case 0x10038ef8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10038ef8;
    case 0x10038f10u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10038f10;
    case 0x10038f28u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10038f28;
    case 0x10038f40u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10038f40;
    case 0x10038f58u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10038f58;
    case 0x10038f70u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10038f70;
    case 0x10038f88u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10038f88;
    case 0x10038fa0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10038fa0;
    case 0x10038fb8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10038fb8;
    case 0x10038fc9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_10038fc9;
    case 0x10038fd0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_98 = rd32(sp0 - 0x98u); goto E_10038fd0;
    case 0x10038fe0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_98 = rd32(sp0 - 0x98u); goto E_10038fe0;
    case 0x10038ff1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10038ff1;
    case 0x10039007u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10039007;
    case 0x1003901du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1003901d;
    case 0x10039035u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10039035;
    case 0x1003904du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1003904d;
    case 0x10039064u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_98 = rd32(sp0 - 0x98u); goto E_10039064;
    case 0x10039076u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10039076;
    case 0x1003909fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_a4 = rd32(sp0 - 0xa4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1003909f;
    case 0x100390a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_a4 = rd32(sp0 - 0xa4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100390a5;
    case 0x100390b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_a4 = rd32(sp0 - 0xa4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100390b2;
    case 0x100390b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_a4 = rd32(sp0 - 0xa4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100390b8;
    case 0x100390fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_a4 = rd32(sp0 - 0xa4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100390fb;
    case 0x1003913au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1003913a;
    case 0x10039197u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10039197;
    case 0x100391f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100391f3;
    case 0x1003921cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1003921c;
    case 0x1003928eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1003928e;
    case 0x10039292u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10039292;
    case 0x1003929cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1003929c;
    case 0x100392abu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100392ab;
    case 0x100392b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100392b5;
    case 0x100392c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100392c4;
    case 0x100392e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100392e4;
    case 0x100392fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100392fa;
    case 0x10039309u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10039309;
    case 0x1003930eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1003930e;
    case 0x10039323u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10039323;
    case 0x10039339u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10039339;
    case 0x10039366u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_98 = rd32(sp0 - 0x98u); goto E_10039366;
    case 0x1003936bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1003936b;
    case 0x10039370u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10039370;
    case 0x1003938eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1003938e;
    case 0x100393a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100393a4;
    case 0x100393bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100393ba;
    case 0x100393d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100393d0;
    case 0x100393e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100393e6;
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
    eax = t1;
    edx = t2;
    COW_AT(10038e28)
    if (eax == 0u) goto L_10038e52;
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
    g->esp = sp0 - 0xb0u;
    cow_thiscall(g, rd32(rd32(t3) + 0xc8u), rd32(t3), 5, t3, 0x19u, 5u, in_esi, in_ebp);
    COW_AT(10038e74)
    wr32(sp0 - 0xb4u, 0u);
    wr32(sp0 - 0xb8u, 0x18u);
    t4 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xbcu, t4);
    g->esp = sp0 - 0xb0u;
    cow_thiscall(g, rd32(rd32(t4) + 0xc8u), rd32(t4), 3, t4, 0x18u, 0u);
    COW_AT(10038e8a)
    wr32(sp0 - 0xb4u, 0u);
    wr32(sp0 - 0xb8u, 0xeu);
    t5 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xbcu, t5);
    g->esp = sp0 - 0xb0u;
    cow_thiscall(g, rd32(rd32(t5) + 0xc8u), rd32(t5), 3, t5, 0xeu, 0u);
    COW_AT(10038ea0)
    wr32(sp0 - 0xb4u, 0u);
    wr32(sp0 - 0xb8u, 7u);
    t6 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xbcu, t6);
    g->esp = sp0 - 0xb0u;
    cow_thiscall(g, rd32(rd32(t6) + 0xc8u), rd32(t6), 3, t6, 7u, 0u);
    COW_AT(10038eb6)
    wr32(sp0 - 0xb4u, 1u);
    wr32(sp0 - 0xb8u, 0x1bu);
    t7 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xbcu, t7);
    g->esp = sp0 - 0xb0u;
    cow_thiscall(g, rd32(rd32(t7) + 0xc8u), rd32(t7), 3, t7, 0x1bu, 1u);
    COW_AT(10038ecc)
    wr32(sp0 - 0xb4u, 5u);
    wr32(sp0 - 0xb8u, 0x13u);
    t8 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xbcu, t8);
    g->esp = sp0 - 0xb0u;
    cow_thiscall(g, rd32(rd32(t8) + 0xc8u), rd32(t8), 3, t8, 0x13u, 5u);
    COW_AT(10038ee2)
    wr32(sp0 - 0xb4u, 6u);
    wr32(sp0 - 0xb8u, 0x14u);
    t9 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xbcu, t9);
    g->esp = sp0 - 0xb0u;
    cow_thiscall(g, rd32(rd32(t9) + 0xc8u), rd32(t9), 3, t9, 0x14u, 6u);
    COW_AT(10038ef8)
    wr32(sp0 - 0xb4u, 5u);
    wr32(sp0 - 0xb8u, 1u);
    wr32(sp0 - 0xbcu, 0u);
    t10 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xc0u, t10);
    g->esp = sp0 - 0xb0u;
    cow_thiscall(g, rd32(rd32(t10) + 0xfcu), rd32(t10), 4, t10, 0u, 1u, 5u);
    COW_AT(10038f10)
    wr32(sp0 - 0xb4u, 0u);
    wr32(sp0 - 0xb8u, 2u);
    wr32(sp0 - 0xbcu, 0u);
    t11 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xc0u, t11);
    g->esp = sp0 - 0xb0u;
    cow_thiscall(g, rd32(rd32(t11) + 0xfcu), rd32(t11), 4, t11, 0u, 2u, 0u);
    COW_AT(10038f28)
    wr32(sp0 - 0xb4u, 2u);
    wr32(sp0 - 0xb8u, 3u);
    wr32(sp0 - 0xbcu, 0u);
    t12 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xc0u, t12);
    g->esp = sp0 - 0xb0u;
    cow_thiscall(g, rd32(rd32(t12) + 0xfcu), rd32(t12), 4, t12, 0u, 3u, 2u);
    COW_AT(10038f40)
    wr32(sp0 - 0xb4u, 6u);
    wr32(sp0 - 0xb8u, 4u);
    wr32(sp0 - 0xbcu, 0u);
    t13 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xc0u, t13);
    g->esp = sp0 - 0xb0u;
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xfcu), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 4, t13, 0u, 4u, 6u);
    COW_AT(10038f58)
    wr32(sp0 - 0xb4u, 0u);
    wr32(sp0 - 0xb8u, 5u);
    wr32(sp0 - 0xbcu, 0u);
    t14 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xc0u, t14);
    g->esp = sp0 - 0xb0u;
    cow_thiscall(g, rd32(rd32(t14) + 0xfcu), rd32(t14), 4, t14, 0u, 5u, 0u);
    COW_AT(10038f70)
    wr32(sp0 - 0xb4u, 2u);
    wr32(sp0 - 0xb8u, 6u);
    wr32(sp0 - 0xbcu, 0u);
    t15 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xc0u, t15);
    g->esp = sp0 - 0xb0u;
    cow_thiscall(g, rd32(rd32(t15) + 0xfcu), rd32(t15), 4, t15, 0u, 6u, 2u);
    COW_AT(10038f88)
    wr32(sp0 - 0xb4u, 1u);
    wr32(sp0 - 0xb8u, 4u);
    wr32(sp0 - 0xbcu, 1u);
    t16 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xc0u, t16);
    g->esp = sp0 - 0xb8u;
    cow_thiscall(g, rd32(rd32(t16) + 0xfcu), rd32(t16), 2, t16, 1u);
    COW_AT(10038fa0)
    wr32(sp0 - 0xbcu, 1u);
    wr32(sp0 - 0xc0u, 1u);
    wr32(sp0 - 0xc4u, 1u);
    t17 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xc8u, t17);
    g->eax = t17;
    t18 = rd32(t17);
    g->esp = sp0 - 0xb8u;
    t19 = cow_thiscall(g, rd32(t18 + 0xfcu), t18, 4, t17, 1u, 1u, 1u);
    t20 = g->ecx;
    eax = t19;
    ecx = t20;
    COW_AT(10038fb8)
    t21 = rd8(edi + 0x31u);
    if ((int32_t)t21 <= 0)
    {
        edx = t21;
        ebx = self;
        goto L_10039366;
    }
    edx = t21;
    esi = t21;
    COW_AT(10038fc9)
    wr32(sp0 - 0x98u, 0u);
    ebx = self;
    ebp = 0u;
    edi = edi + 0x40u;
    loc_98 = 0u;
L_10038fd0: ;
    COW_AT(10038fd0)
    wr32(sp0 - 0xbcu, 0x144u);
    if (ebp != esi - 1u)
    {
    COW_AT(10039064)
        t29 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xc0u, t29);
        g->esp = sp0 - 0xbcu;
        cow_thiscall(g, rd32(rd32(t29) + 0x130u), rd32(t29), 1, t29);
    COW_AT(10039076)
        t30 = cow_divs(g, rd32(sp0 - 0x9cu), esi);
        t31 = cow_mods(g, rd32(sp0 - 0x9cu), esi);
        t32 = t30 + rd32(ebx + 8u);
        wr32(sp0 - 0xa4u, t32);
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
        wr32(sp0 - 0xa4u, t34);
        t36 = ((uint32_t)rd8(edi + 3u) << 8u | (uint8_t)t34) << 0x10u | (uint8_t)(t34 >> 0x10u) | (t34 & 0xff00u);
        wr32(sp0 - 0xa4u, t36);
        d37 = (double)(float)fr(g, fr(g, sin(x0)) * d35);
        wrf32(sp0 - 0xa8u, (float)d37);
        edx = (uint8_t)(t34 >> 0x10u);
        ebx = t36;
        loc_a4 = t36;
        x0 = fr(g, fr(g, cos(x0)) * d35);
    }
    else
    {
    COW_AT(10038fe0)
        t22 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xc0u, t22);
        g->esp = sp0 - 0xbcu;
        cow_thiscall(g, rd32(rd32(t22) + 0x130u), rd32(t22), 1, t22);
    COW_AT(10038ff1)
        wr32(sp0 - 0xc0u, 0x60u);
        wr32(sp0 - 0xc4u, 0x18u);
        t23 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xc8u, t23);
        g->esp = sp0 - 0xbcu;
        cow_thiscall(g, rd32(rd32(t23) + 0xc8u), rd32(t23), 3, t23, 0x18u, 0x60u);
    COW_AT(10039007)
        wr32(sp0 - 0xc0u, 0u);
        wr32(sp0 - 0xc4u, 0x1bu);
        t24 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xc8u, t24);
        g->esp = sp0 - 0xbcu;
        cow_thiscall(g, rd32(rd32(t24) + 0xc8u), rd32(t24), 3, t24, 0x1bu, 0u);
    COW_AT(1003901d)
        wr32(sp0 - 0xc0u, 3u);
        wr32(sp0 - 0xc4u, 1u);
        wr32(sp0 - 0xc8u, 0u);
        t25 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xccu, t25);
        g->esp = sp0 - 0xbcu;
        cow_thiscall(g, rd32(rd32(t25) + 0xfcu), rd32(t25), 4, t25, 0u, 1u, 3u);
    COW_AT(10039035)
        wr32(sp0 - 0xc0u, 3u);
        wr32(sp0 - 0xc4u, 4u);
        wr32(sp0 - 0xc8u, 0u);
        t26 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xccu, t26);
        g->edx = rd32(COW_IMG(0x1045666cu));
        t27 = rd32(COW_IMG(0x1045666cu));
        g->esp = sp0 - 0xbcu;
        cow_thiscall(g, rd32(rd32(t26) + 0xfcu), rd32(t26), 4, t26, 0u, 4u, 3u);
        t28 = g->edx;
        edx = t28;
    COW_AT(1003904d)
        wr32(sp0 - 0xa8u, 0u);
        ebx = rd32(sp0 - 0xa4u);
        loc_a4 = rd32(sp0 - 0xa4u);
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(100390fb)
    wrf32(sp0 - 0xa0u, (float)(double)(float)x0);
    wrf32(sp0 - 0x70u, (float)(double)(float)x0);
    t38 = rd32(sp0 - 0xa8u);
    wr32(sp0 - 0x74u, t38);
    wr32(sp0 - 0x6cu, 0u);
    wr32(sp0 - 0x68u, 0x3f800000u);
    wr32(sp0 - 0x64u, ebx);
    wr32(sp0 - 0x60u, 0u);
    wr32(sp0 - 0x5cu, 0u);
    g->eax = t38;
    g->esp = sp0 - 0xbcu;
    t39 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(COW_IMG(0x1045666cu)), 0);
    eax = t39;
    COW_AT(1003913a)
    wr32(sp0 - 0x88u, 0u);
    t40 = rd32(eax + 8u);
    wr32(sp0 - 0x8cu, t40);
    t41 = rd32(sp0 - 0xa0u);
    wr32(sp0 - 0x54u, t41);
    wr32(sp0 - 0x50u, 0u);
    d42 = fr(g, (double)(int64_t)cow_i64(t40, 0u) + (double)rdf32(sp0 - 0xa8u));
    wr32(sp0 - 0x4cu, 0x3f800000u);
    wr32(sp0 - 0x48u, ebx);
    wr32(sp0 - 0x44u, 0x3f800000u);
    wr32(sp0 - 0x40u, 0u);
    t43 = rd32(sp0 - 0xa8u);
    wr32(sp0 - 0x3cu, t43);
    wrf32(sp0 - 0x58u, (float)(double)(float)d42);
    g->eax = t43;
    g->edx = t41;
    g->esp = sp0 - 0xbcu;
    t44 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(COW_IMG(0x1045666cu)), 0);
    t45 = g->edx;
    eax = t44;
    edx = t45;
    COW_AT(10039197)
    wr32(sp0 - 0x78u, 0u);
    t46 = rd32(eax + 0xcu);
    wr32(sp0 - 0x7cu, t46);
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x30u, 0x3f800000u);
    wr32(sp0 - 0x2cu, ebx);
    wr32(sp0 - 0x28u, 0u);
    d47 = fr(g, (double)(int64_t)cow_i64(t46, 0u) + (double)rdf32(sp0 - 0xa0u));
    wr32(sp0 - 0x24u, 0x3f800000u);
    wrf32(sp0 - 0x38u, (float)(double)(float)d47);
    g->eax = eax;
    g->esp = sp0 - 0xbcu;
    t48 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(COW_IMG(0x1045666cu)), 0);
    eax = t48;
    COW_AT(100391f3)
    wr32(sp0 - 0x90u, 0u);
    t49 = rd32(eax + 8u);
    wr32(sp0 - 0x94u, t49);
    d50 = fr(g, (double)(int64_t)cow_i64(t49, 0u) + (double)rdf32(sp0 - 0xa8u));
    wrf32(sp0 - 0x20u, (float)(double)(float)d50);
    g->eax = eax;
    g->edx = t49;
    t51 = rd32(COW_IMG(0x1045666cu));
    g->esp = sp0 - 0xbcu;
    t52 = cow_thiscall(g, COW_IMG(0x10009e00u), t51, 0);
    t53 = g->ecx;
    t54 = g->edx;
    eax = t52;
    ecx = t53;
    edx = t54;
    COW_AT(1003921c)
    wr32(sp0 - 0x80u, 0u);
    t55 = rd32(eax + 0xcu);
    wr32(sp0 - 0x84u, t55);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x14u, 0x3f800000u);
    wr32(sp0 - 0x10u, ebx);
    wr32(sp0 - 0xcu, 0x3f800000u);
    d56 = fr(g, (double)(int64_t)cow_i64(t55, 0u) + (double)rdf32(sp0 - 0xa0u));
    wr32(sp0 - 8u, 0x3f800000u);
    wrf32(sp0 - 0x1cu, (float)(double)(float)d56);
    t57 = rd32(COW_IMG(0x1045666cu));
    t58 = rd8(rd32(COW_IMG(0x1045666cu)) + 0x828u);
    wr8(t57 + 0x828u, 0u);
    wr8(sp0 - 0xa9u, (uint8_t)t58);
    g->eax = t57;
    g->esp = sp0 - 0xbcu;
    t59 = cow_thiscall(g, COW_IMG(0x1000d660u), rd32(COW_IMG(0x104566e8u)), 0);
    eax = t59;
    COW_AT(1003928e)
    if ((uint8_t)eax == 0u) goto L_10039309;
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
    wr32(sp0 - 0xc0u, ecx);
    wr32(sp0 - 0xc4u, 0u);
    t60 = rd32(eax + 0xcu);
    wr32(sp0 - 0xc8u, t60);
    g->esp = sp0 - 0xbcu;
    cow_thiscall(g, rd32(rd32(t60) + 0xf4u), ecx, 3, t60, 0u, ecx);
    COW_AT(100392c4)
    t61 = rd32(rd32(COW_IMG(0x1045666cu)) + 0x1a8u);
    wr32(sp0 - 0xc0u, t61);
    t62 = rd32(rd32(COW_IMG(0x1045666cu)) + 0x1a0u);
    wr32(sp0 - 0xc4u, t62);
    t63 = rd32(rd32(COW_IMG(0x1045666cu)) + 0x198u);
    wr32(sp0 - 0xc8u, t63);
    g->ebx = ebx;
    g->eax = t63;
    g->edx = t62;
    g->esp = sp0 - 0xbcu;
    t64 = cow_thiscall(g, COW_IMG(0x10009e20u), rd32(COW_IMG(0x1045666cu)), 3, t63, t62, t61);
    t65 = g->edx;
    eax = t64;
    edx = t65;
    COW_AT(100392e4)
    wr32(sp0 - 0xc0u, 0x1cu);
    wr32(sp0 - 0xc4u, sp0 - 0x74u);
    wr32(sp0 - 0xc8u, 2u);
    wr32(sp0 - 0xccu, 5u);
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xbcu;
    t66 = cow_thiscall(g, COW_IMG(0x1000cd00u), rd32(COW_IMG(0x1045666cu)), 4, 5u, 2u, sp0 - 0x74u, 0x1cu);
    t67 = g->edx;
    eax = t66;
    edx = t67;
    COW_AT(100392fa)
    wr32(sp0 - 0xc0u, 0u);
    wr32(sp0 - 0xc4u, 0u);
    g->esp = sp0 - 0xbcu;
    cow_fastcall(g, COW_IMG(0x1000a1d0u), rd32(COW_IMG(0x1045666cu)), edx, 2, 0u, 0u);
    rt_fatal(g, COW_IMG(0x10039304u), "no way on");
    return 0;
L_10039309: ;
    COW_AT(10039309)
    eax = rd32(COW_IMG(0x1045666cu));
L_1003930e: ;
    COW_AT(1003930e)
    wr32(sp0 - 0xc0u, rd32(COW_IMG(0x1047b958u)));
    wr32(sp0 - 0xc4u, 0u);
    t68 = rd32(eax + 0xcu);
    wr32(sp0 - 0xc8u, t68);
    g->eax = t68;
    g->esp = sp0 - 0xb8u;
    t69 = cow_thiscall(g, rd32(rd32(rd32(eax + 0xcu)) + 0xf4u), rd32(COW_IMG(0x1047b958u)), 4, t68, 0u, rd32(COW_IMG(0x1047b958u)), rd32(sp0 - 0xbcu));
    eax = t69;
    COW_AT(10039323)
    wr32(sp0 - 0xbcu, 0x1cu);
    wr32(sp0 - 0xc0u, sp0 - 0x70u);
    wr32(sp0 - 0xc4u, 2u);
    wr32(sp0 - 0xc8u, 5u);
    g->ebx = ebx;
    t70 = rd32(COW_IMG(0x1045666cu));
    g->esp = sp0 - 0xb8u;
    cow_thiscall(g, COW_IMG(0x1000cd00u), t70, 4, 5u, 2u, sp0 - 0x70u, 0x1cu);
    t71 = g->ecx;
    ecx = t71;
    COW_AT(10039339)
    t72 = rd32(COW_IMG(0x1045666cu));
    t73 = rd8(sp0 - 0xa5u);
    t74 = rd32(sp0 - 0x98u);
    t75 = rd32(sp0 - 0x94u);
    wr8(t72 + 0x828u, (uint8_t)t73);
    wr32(sp0 - 0x98u, t74 + 0x168u);
    if ((int32_t)(ebp + 1u) < (int32_t)esi)
    {
        edx = t74 + 0x168u;
        ebx = t75;
        ebp = ebp + 1u;
        edi = edi + 8u;
        loc_98 = t74 + 0x168u;
        goto L_10038fd0;
    }
    eax = t72;
    ecx = (ecx & 0xffffff00u) | t73;
    edx = t74 + 0x168u;
    ebx = t75;
L_10039366: ;
    COW_AT(10039366)
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xb8u;
    t76 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t77 = g->ecx;
    t78 = g->edx;
    d79 = cow_take_float(g);
    eax = t76;
    ecx = t77;
    edx = t78;
    x0 = d79;
    COW_AT(1003936b)
    fpush(g, x0);
    g->esp = sp0 - 0xb8u;
    t80 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    eax = t80;
    COW_AT(10039370)
    wr32(sp0 - 0xbcu, 0u);
    wr32(sp0 - 0xc0u, 0x1bu);
    t81 = eax + rd32(ebx + 8u);
    wr32(ebx + 8u, t81);
    t82 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xc4u, t82);
    g->esp = sp0 - 0xb8u;
    cow_thiscall(g, rd32(rd32(t82) + 0xc8u), rd32(t82), 3, t82, 0x1bu, 0u);
    COW_AT(1003938e)
    wr32(sp0 - 0xbcu, 0x60u);
    wr32(sp0 - 0xc0u, 0x18u);
    t83 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xc4u, t83);
    g->esp = sp0 - 0xb8u;
    cow_thiscall(g, rd32(rd32(t83) + 0xc8u), rd32(t83), 3, t83, 0x18u, 0x60u);
    COW_AT(100393a4)
    wr32(sp0 - 0xbcu, 1u);
    wr32(sp0 - 0xc0u, 0xeu);
    t84 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xc4u, t84);
    g->esp = sp0 - 0xb8u;
    cow_thiscall(g, rd32(rd32(t84) + 0xc8u), rd32(t84), 3, t84, 0xeu, 1u);
    COW_AT(100393ba)
    wr32(sp0 - 0xbcu, 1u);
    wr32(sp0 - 0xc0u, 7u);
    t85 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xc4u, t85);
    g->esp = sp0 - 0xb8u;
    cow_thiscall(g, rd32(rd32(t85) + 0xc8u), rd32(t85), 3, t85, 7u, 1u);
    COW_AT(100393d0)
    wr32(sp0 - 0xbcu, 8u);
    wr32(sp0 - 0xc0u, 0x19u);
    t86 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xc4u, t86);
    g->eax = t86;
    g->esp = sp0 - 0xb8u;
    t87 = cow_thiscall(g, rd32(rd32(t86) + 0xc8u), rd32(t86), 3, t86, 0x19u, 8u);
    eax = t87;
    COW_AT(100393e6)
    g->ebx = rd32(sp0 - 0xacu);
    g->esi = rd32(sp0 - 0xb8u);
    g->edi = rd32(sp0 - 0xb0u);
    g->ebp = rd32(sp0 - 0xb4u);
    return (eax & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10038e10(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10038e28u:
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
        g->esp = sp0 - 0xb4u;
        (void)sp0;
        return 1;
    }
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
        (void)sp0;
        return 1;
    }
    case 0x10038e74u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb0u;
        (void)sp0;
        return 1;
    }
    case 0x10038e8au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb0u;
        (void)sp0;
        return 1;
    }
    case 0x10038ea0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb0u;
        (void)sp0;
        return 1;
    }
    case 0x10038eb6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb0u;
        (void)sp0;
        return 1;
    }
    case 0x10038eccu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb0u;
        (void)sp0;
        return 1;
    }
    case 0x10038ee2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb0u;
        (void)sp0;
        return 1;
    }
    case 0x10038ef8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb0u;
        (void)sp0;
        return 1;
    }
    case 0x10038f10u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb0u;
        (void)sp0;
        return 1;
    }
    case 0x10038f28u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb0u;
        (void)sp0;
        return 1;
    }
    case 0x10038f40u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb0u;
        (void)sp0;
        return 1;
    }
    case 0x10038f58u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb0u;
        (void)sp0;
        return 1;
    }
    case 0x10038f70u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb0u;
        (void)sp0;
        return 1;
    }
    case 0x10038f88u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb0u;
        (void)sp0;
        return 1;
    }
    case 0x10038fa0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb8u;
        wr32(sp0 - 0xb8u, 4u);
        wr32(sp0 - 0xb4u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x10038fb8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xb8u;
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
        g->esp = sp0 - 0xb8u;
        g->ebp = 0u;
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
        uint32_t loc_98;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0xb8u;
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
        uint32_t loc_98;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0xbcu;
        wr32(sp0 - 0xbcu, 0x144u);
        (void)sp0;
        return 1;
    }
    case 0x10038ff1u:
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
        g->esp = sp0 - 0xbcu;
        (void)sp0;
        return 1;
    }
    case 0x10039007u:
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
        g->esp = sp0 - 0xbcu;
        (void)sp0;
        return 1;
    }
    case 0x1003901du:
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
        g->esp = sp0 - 0xbcu;
        (void)sp0;
        return 1;
    }
    case 0x10039035u:
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
        g->esp = sp0 - 0xbcu;
        (void)sp0;
        return 1;
    }
    case 0x1003904du:
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
        g->esp = sp0 - 0xbcu;
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
        uint32_t loc_98;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0xbcu;
        wr32(sp0 - 0xbcu, 0x144u);
        (void)sp0;
        return 1;
    }
    case 0x10039076u:
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
        g->esp = sp0 - 0xbcu;
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
        uint32_t loc_a4;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_a4 = rd32(sp0 - 0xa4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xbcu;
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
        uint32_t loc_a4;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_a4 = rd32(sp0 - 0xa4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xbcu;
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
        uint32_t loc_a4;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_a4 = rd32(sp0 - 0xa4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xbcu;
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
        uint32_t loc_a4;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_a4 = rd32(sp0 - 0xa4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xbcu;
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
        uint32_t loc_a4;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_a4 = rd32(sp0 - 0xa4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xbcu;
        (void)sp0;
        return 1;
    }
    case 0x1003913au:
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
        g->esp = sp0 - 0xbcu;
        (void)sp0;
        return 1;
    }
    case 0x10039197u:
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
        g->esp = sp0 - 0xbcu;
        (void)sp0;
        return 1;
    }
    case 0x100391f3u:
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
        g->esp = sp0 - 0xbcu;
        (void)sp0;
        return 1;
    }
    case 0x1003921cu:
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
        g->esp = sp0 - 0xbcu;
        (void)sp0;
        return 1;
    }
    case 0x1003928eu:
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
        g->esp = sp0 - 0xbcu;
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
        g->esp = sp0 - 0xbcu;
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
        g->esp = sp0 - 0xbcu;
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
        g->esp = sp0 - 0xbcu;
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
        g->esp = sp0 - 0xbcu;
        (void)sp0;
        return 1;
    }
    case 0x100392c4u:
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
        g->esp = sp0 - 0xbcu;
        (void)sp0;
        return 1;
    }
    case 0x100392e4u:
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
        g->esp = sp0 - 0xbcu;
        (void)sp0;
        return 1;
    }
    case 0x100392fau:
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
        g->esp = sp0 - 0xbcu;
        wr32(sp0 - 0xc4u, sp0 - 0x74u);
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xbcu;
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xbcu;
        (void)sp0;
        return 1;
    }
    case 0x10039323u:
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
        g->esp = sp0 - 0xb8u;
        (void)sp0;
        return 1;
    }
    case 0x10039339u:
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
        g->esp = sp0 - 0xb8u;
        wr32(sp0 - 0xc0u, sp0 - 0x70u);
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
        uint32_t loc_98;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0xb8u;
        (void)sp0;
        return 1;
    }
    case 0x1003936bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb8u;
        (void)sp0;
        return 1;
    }
    case 0x10039370u:
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
        g->esp = sp0 - 0xb8u;
        (void)sp0;
        return 1;
    }
    case 0x1003938eu:
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
        g->esp = sp0 - 0xb8u;
        (void)sp0;
        return 1;
    }
    case 0x100393a4u:
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
        g->esp = sp0 - 0xb8u;
        (void)sp0;
        return 1;
    }
    case 0x100393bau:
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
        g->esp = sp0 - 0xb8u;
        (void)sp0;
        return 1;
    }
    case 0x100393d0u:
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
        g->esp = sp0 - 0xb8u;
        (void)sp0;
        return 1;
    }
    case 0x100393e6u:
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
        g->esp = sp0 - 0xb8u;
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
