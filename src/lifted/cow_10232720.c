/* f_0x10232720 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10232720(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
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
    uint32_t t79;
    uint32_t t8;
    uint32_t t80;
    uint32_t t81;
    uint32_t t82;
    uint32_t t83;
    uint32_t t84;
    uint32_t t85;
    uint32_t t86;
    uint32_t t87;
    uint32_t t88;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 56u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102317a0u: eax = g->eax; self = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102317a0;
    case 0x102317b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_102317b4;
    case 0x102317c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_102317c3;
    case 0x102317d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_102317d4;
    case 0x102317e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102317e4;
    case 0x102317f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102317f0;
    case 0x10231809u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10231809;
    case 0x10231810u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10231810;
    case 0x1023181cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1023181c;
    case 0x10231835u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10231835;
    case 0x10231930u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_10231930;
    case 0x1023193cu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_1023193c;
    case 0x10231943u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; self = g->edi; loc_8 = rd32(sp0 - 8u); goto E_10231943;
    case 0x1023194au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; self = g->edi; loc_8 = rd32(sp0 - 8u); goto E_1023194a;
    case 0x10231951u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; self = g->edi; goto E_10231951;
    case 0x10231958u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; self = g->edi; loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10231958;
    case 0x10231970u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; goto E_10231970;
    case 0x1023197fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; goto E_1023197f;
    case 0x10231996u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; goto E_10231996;
    case 0x102319a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; goto E_102319a5;
    case 0x102319a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_8 = rd32(sp0 - 8u); goto E_102319a6;
    case 0x102319adu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; goto E_102319ad;
    case 0x10232530u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_10232530;
    case 0x1023253fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_1023253f;
    case 0x1023254cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_1023254c;
    case 0x10232559u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_10232559;
    case 0x10232569u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_10232569;
    case 0x10232589u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_10232589;
    case 0x10232598u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_10232598;
    case 0x1023259fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_1023259f;
    case 0x102325a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_102325a5;
    case 0x102325adu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_102325ad;
    case 0x102325b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_102325b4;
    case 0x102325bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_102325bb;
    case 0x102325c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_102325c3;
    case 0x102325dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_102325df;
    case 0x102325e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_102325e6;
    case 0x102325edu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_102325ed;
    case 0x102325f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_102325f2;
    case 0x102325f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_102325f9;
    case 0x10232600u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_10232600;
    case 0x10232610u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_10232610;
    case 0x1023261fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_1023261f;
    case 0x1023262cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_1023262c;
    case 0x10232639u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_10232639;
    case 0x10232649u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_10232649;
    case 0x10232659u: eax = g->eax; self = g->ecx; edx = g->edx; in_edi = g->edi; loc_4 = rd32(sp0 - 4u); goto E_10232659;
    case 0x1023265eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_1023265e;
    case 0x10232665u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_10232665;
    case 0x10232684u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_10232684;
    case 0x1023268bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_1023268b;
    case 0x10232690u: eax = g->eax; self = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; loc_4 = rd32(sp0 - 4u); goto E_10232690;
    case 0x10232695u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_10232695;
    case 0x10232728u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_10232728;
    case 0x1023272fu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_1023272f;
    case 0x10232734u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_10232734;
    case 0x10232739u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_10232739;
    case 0x1023273eu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_1023273e;
    default: break;
    }
#endif

    COW_AT(10232720)
    if (rd32(self + 0x68u) > 6u)
    {
        eax = rd32(self + 0x68u);
        goto L_1023273e;
    }
    eax = rd32(self + 0x68u);
    COW_AT(10232728)
    t1 = rd32(COW_IMG(0x10232740u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x1023272fu: goto L_1023272f;
    case 0x10232734u: goto L_10232734;
    case 0x10232739u: goto L_10232739;
    default: rt_fatal(g, COW_IMG(0x10232728u), "switch");
    }
    return 0;
L_102317a0: ;
    COW_AT(102317a0)
    wr32(sp0 - 0xcu, esi);
    wr32(sp0 - 0x10u, 2u);
    wr32(sp0 - 0x14u, 0x18cu);
    wr32(sp0 - 0x18u, 0xcu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t21 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x18cu);
    t22 = g->edx;
    eax = t21;
    edx = t22;
    COW_AT(102317b4)
    wr32(sp0 - 0x14u, eax);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x10150cc0u), rd32(COW_IMG(0x1057847cu)), 2, eax, 2u);
    t23 = g->edx;
    edx = t23;
    COW_AT(102317c3)
    wr32(sp0 - 0x10u, sp0 - 8u);
    wr32(sp0 - 0x14u, sp0 - 4u);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x10221be0u), self, 2, sp0 - 4u, sp0 - 8u);
    t24 = g->ecx;
    t25 = g->edx;
    ecx = t24;
    edx = t25;
    COW_AT(102317d4)
    t26 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0xcu, 0x80808080u);
    wr32(sp0 - 0x10u, 0u);
    if (rd32(self + 0x68u) != 5u)
    {
        eax = rd32(self + 0x68u);
        esi = t26;
        goto L_10231810;
    }
    eax = rd32(self + 0x68u);
    esi = t26;
    COW_AT(102317e4)
    wr32(sp0 - 0x14u, 0x190u);
    wr32(sp0 - 0x18u, 0xcu);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    t27 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x190u);
    t28 = g->ecx;
    eax = t27;
    ecx = t28;
    COW_AT(102317f0)
    wr32(sp0 - 0x14u, eax);
    t29 = rd32(sp0 - 8u) + 0xau;
    wr32(sp0 - 0x18u, t29);
    t30 = rd32(sp0 - 4u) + 0x3cu;
    wr32(sp0 - 0x1cu, t30);
    g->eax = t30;
    g->edx = t29;
    g->esp = sp0 - 0x10u;
    t31 = cow_cdecl(g, COW_IMG(0x10129f00u), 3, t30, t29, eax);
    t32 = g->edx;
    eax = t31;
    edx = t32;
    COW_AT(10231809)
    g->esi = esi;
    g->edi = edi;
    g->edx = edx;
    return eax;
L_10231810: ;
    COW_AT(10231810)
    wr32(sp0 - 0x14u, 0x191u);
    wr32(sp0 - 0x18u, 0xcu);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t33 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x191u);
    eax = t33;
    COW_AT(1023181c)
    wr32(sp0 - 0x14u, eax);
    t34 = rd32(sp0 - 8u) + 0xau;
    wr32(sp0 - 0x18u, t34);
    t35 = rd32(sp0 - 4u) + 0x3cu;
    wr32(sp0 - 0x1cu, t35);
    g->eax = eax;
    g->edx = t35;
    g->esp = sp0 - 0x10u;
    t36 = cow_cdecl(g, COW_IMG(0x10129f00u), 3, t35, t34, eax);
    t37 = g->edx;
    eax = t36;
    edx = t37;
    COW_AT(10231835)
    g->esi = esi;
    g->edi = edi;
    g->edx = edx;
    return eax;
L_10231930: ;
    COW_AT(10231930)
    wr32(sp0 - 4u, in_edi);
    if (!(rd8(COW_IMG(0x10485824u)) & 1u))
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10485824u));
        ecx = self;
        edx = in_edx;
        loc_4 = in_edi;
        goto L_10231958;
    }
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10485824u));
    COW_AT(1023193c)
    wr32(sp0 - 8u, 0u);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_thiscall_cdecl(g, COW_IMG(0x10087c90u), self, 1, 0u);
    t3 = g->ecx;
    t4 = g->edx;
    eax = t2;
    ecx = t3;
    edx = t4;
    COW_AT(10231943)
    if ((uint8_t)eax == 0u)
    {
        loc_4 = rd32(sp0 - 4u);
        goto L_10231958;
    }
    COW_AT(1023194a)
    wr32(sp0 - 8u, 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t5 = cow_thiscall_cdecl(g, COW_IMG(0x10087c90u), ecx, 1, 1u);
    t6 = g->ecx;
    t7 = g->edx;
    eax = t5;
    ecx = t6;
    edx = t7;
    COW_AT(10231951)
    if ((uint8_t)eax != 0u)
    {
        esi = in_esi;
        loc_8 = 1u;
        goto L_102319a6;
    }
    loc_4 = rd32(sp0 - 4u);
L_10231958: ;
    COW_AT(10231958)
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, 0x80808080u);
    wr32(sp0 - 0x10u, 0x61u);
    wr32(sp0 - 0x14u, 9u);
    g->eax = eax;
    g->edx = edx;
    t8 = rd32(self + 8u);
    g->esp = sp0 - 0xcu;
    t9 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x61u);
    t10 = g->edx;
    eax = t9;
    edx = t10;
    esi = t8 + 0xc4u;
    COW_AT(10231970)
    wr32(sp0 - 0x10u, eax);
    wr32(sp0 - 0x14u, 0x2du);
    wr32(sp0 - 0x18u, 0x14u);
    g->edi = self;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t11 = cow_thiscall(g, COW_IMG(0x101171b0u), esi, 4, 0x14u, 0x2du, eax, 0x80808080u);
    t12 = g->ecx;
    t13 = g->edx;
    eax = t11;
    ecx = t12;
    edx = t13;
    COW_AT(1023197f)
    wr32(sp0 - 0xcu, 0x80808080u);
    wr32(sp0 - 0x10u, 0x62u);
    wr32(sp0 - 0x14u, 9u);
    g->eax = eax;
    g->edx = edx;
    t14 = rd32(self + 8u);
    g->esp = sp0 - 0xcu;
    t15 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x62u);
    t16 = g->edx;
    eax = t15;
    edx = t16;
    esi = t14 + 0xc4u;
    COW_AT(10231996)
    wr32(sp0 - 0x10u, eax);
    wr32(sp0 - 0x14u, 0x49u);
    wr32(sp0 - 0x18u, 0x14u);
    g->edi = self;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t17 = cow_thiscall(g, COW_IMG(0x101171b0u), esi, 4, 0x14u, 0x49u, eax, 0x80808080u);
    t18 = g->edx;
    eax = t17;
    edx = t18;
    COW_AT(102319a5)
    esi = rd32(sp0 - 8u);
    loc_8 = rd32(sp0 - 8u);
L_102319a6: ;
    COW_AT(102319a6)
    g->eax = eax;
    g->esp = sp0 - 4u;
    t19 = cow_fastcall(g, COW_IMG(0x10221f50u), self, edx, 0);
    t20 = g->edx;
    eax = t19;
    edx = t20;
    COW_AT(102319ad)
    edi = rd32(sp0 - 4u);
    goto L_102317a0;
L_10232530: ;
    COW_AT(10232530)
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, 0x63u);
    wr32(sp0 - 0x1cu, 9u);
    g->eax = eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t38 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x63u);
    t39 = g->ecx;
    t40 = g->edx;
    eax = t38;
    ecx = t39;
    edx = t40;
    COW_AT(1023253f)
    wr32(sp0 - 0x20u, 0x64u);
    wr32(sp0 - 0x24u, 9u);
    wr32(sp0 - 0x10u, eax);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t41 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x64u);
    t42 = g->ecx;
    t43 = g->edx;
    eax = t41;
    ecx = t42;
    edx = t43;
    COW_AT(1023254c)
    wr32(sp0 - 0x28u, 0x72u);
    wr32(sp0 - 0x2cu, 0xcu);
    wr32(sp0 - 0xcu, eax);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t44 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x72u);
    t45 = g->ecx;
    t46 = g->edx;
    eax = t44;
    ecx = t45;
    edx = t46;
    COW_AT(10232559)
    wr32(sp0 - 0x30u, 0x87u);
    wr32(sp0 - 0x34u, 0xcu);
    wr32(sp0 - 8u, eax);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t47 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x87u);
    t48 = g->ecx;
    t49 = g->edx;
    eax = t47;
    ecx = t48;
    edx = t49;
    COW_AT(10232569)
    wr32(sp0 - 4u, eax);
    wr32(sp0 - 0x18u, 2u);
    wr32(sp0 - 0x1cu, 0x85u);
    wr32(sp0 - 0x20u, 0xcu);
    t50 = rd32(COW_IMG(0x10668edcu)) + 1u;
    wr32(COW_IMG(0x10668edcu), t50);
    g->eax = t50;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t51 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x85u);
    t52 = g->edx;
    eax = t51;
    edx = t52;
    COW_AT(10232589)
    wr32(sp0 - 0x1cu, eax);
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x10150cc0u), rd32(COW_IMG(0x1057847cu)), 2, eax, 2u);
    t53 = g->edx;
    edx = t53;
    COW_AT(10232598)
    if (rd32(self + 0x64u) != 0u)
    {
        eax = rd32(self + 0x64u);
        goto L_102325f2;
    }
    eax = rd32(self + 0x64u);
    COW_AT(1023259f)
    t54 = rd32(self + 0x68u);
    if (t54 == 3u)
    {
    COW_AT(102325a5)
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t55 = cow_call_regs(g, COW_IMG(0x102305e0u), eax, self + 0x70u, g->edx, 1, 0);
        t56 = g->edx;
        eax = t55;
        edx = t56;
    }
    COW_AT(102325ad)
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    cow_call_regs(g, COW_IMG(0x10231fa0u), eax, self, g->edx, 1, 0);
    t57 = g->edx;
    edx = t57;
    COW_AT(102325b4)
    if (rd32(self + 0x40u) != 0u)
    {
        eax = rd32(self + 0x40u);
    }
    else
    {
    COW_AT(102325bb)
        if (rd32(self + 0x68u) == 4u)
        {
            eax = rd32(self + 0x68u);
        }
        else
        {
            eax = rd32(self + 0x68u);
    COW_AT(102325c3)
            wr32(sp0 - 0x18u, 0x80808080u);
            t58 = rd32(eax * 4u + sp0 - 0x10u);
            wr32(sp0 - 0x1cu, t58);
            wr32(sp0 - 0x20u, 0x28u);
            wr32(sp0 - 0x24u, 0x14u);
            g->edi = in_edi;
            g->eax = t58;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t59 = cow_thiscall(g, COW_IMG(0x101171b0u), rd32(self + 8u) + 0xc4u, 4, 0x14u, 0x28u, t58, 0x80808080u);
            t60 = g->edx;
            eax = t59;
            edx = t60;
        }
    }
    COW_AT(102325df)
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t61 = cow_fastcall(g, COW_IMG(0x10221f50u), self, edx, 0);
    t62 = g->edx;
    eax = t61;
    edx = t62;
    COW_AT(102325e6)
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t63 = cow_call_regs(g, COW_IMG(0x102324f0u), eax, self, g->edx, 1, 0);
    t64 = g->edx;
    eax = t63;
    edx = t64;
    COW_AT(102325ed)
    g->esi = rd32(sp0 - 0x14u);
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_102325f2: ;
    COW_AT(102325f2)
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t65 = cow_call_regs(g, COW_IMG(0x102323d0u), eax, self, g->edx, 1, 0);
    t66 = g->edx;
    eax = t65;
    edx = t66;
    COW_AT(102325f9)
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t67 = cow_call_regs(g, COW_IMG(0x102324f0u), eax, self, g->edx, 1, 0);
    t68 = g->edx;
    eax = t67;
    edx = t68;
    COW_AT(10232600)
    g->esi = rd32(sp0 - 0x14u);
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_10232610: ;
    COW_AT(10232610)
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, 0x63u);
    wr32(sp0 - 0x1cu, 9u);
    g->eax = eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t69 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x63u);
    t70 = g->ecx;
    t71 = g->edx;
    eax = t69;
    ecx = t70;
    edx = t71;
    COW_AT(1023261f)
    wr32(sp0 - 0x20u, 0x64u);
    wr32(sp0 - 0x24u, 9u);
    wr32(sp0 - 0x10u, eax);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t72 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x64u);
    t73 = g->ecx;
    t74 = g->edx;
    eax = t72;
    ecx = t73;
    edx = t74;
    COW_AT(1023262c)
    wr32(sp0 - 0x28u, 0x72u);
    wr32(sp0 - 0x2cu, 0xcu);
    wr32(sp0 - 0xcu, eax);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t75 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x72u);
    t76 = g->ecx;
    t77 = g->edx;
    eax = t75;
    ecx = t76;
    edx = t77;
    COW_AT(10232639)
    wr32(sp0 - 0x30u, 0x87u);
    wr32(sp0 - 0x34u, 0xcu);
    wr32(sp0 - 8u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t78 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x87u);
    t79 = g->edx;
    eax = t78;
    edx = t79;
    COW_AT(10232649)
    wr32(sp0 - 4u, eax);
    if (rd32(self + 0x64u) != 0u)
    {
        eax = rd32(self + 0x64u);
        goto L_10232690;
    }
    eax = rd32(self + 0x64u);
    COW_AT(10232659)
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x10231c60u), self, 0);
    t80 = g->edx;
    edx = t80;
    COW_AT(1023265e)
    if (rd32(self + 0x40u) != 0u)
    {
        eax = rd32(self + 0x40u);
    }
    else
    {
    COW_AT(10232665)
        wr32(sp0 - 0x18u, 0x80808080u);
        t81 = rd32(sp0 + rd32(self + 0x68u) * 4u - 0x10u);
        wr32(sp0 - 0x1cu, t81);
        wr32(sp0 - 0x20u, 0x28u);
        wr32(sp0 - 0x24u, 0x14u);
        g->edi = in_edi;
        g->eax = rd32(self + 0x68u);
        g->edx = edx;
        t82 = rd32(self + 0x68u);
        g->esp = sp0 - 0x14u;
        t83 = cow_thiscall(g, COW_IMG(0x101171b0u), rd32(self + 8u) + 0xc4u, 4, 0x14u, 0x28u, t81, 0x80808080u);
        t84 = g->edx;
        eax = t83;
        edx = t84;
    }
    COW_AT(10232684)
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t85 = cow_fastcall(g, COW_IMG(0x10221f50u), self, edx, 0);
    t86 = g->edx;
    eax = t85;
    edx = t86;
    COW_AT(1023268b)
    g->esi = rd32(sp0 - 0x14u);
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_10232690: ;
    COW_AT(10232690)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t87 = cow_thiscall(g, COW_IMG(0x10231e10u), self, 0);
    t88 = g->edx;
    eax = t87;
    edx = t88;
    COW_AT(10232695)
    g->esi = rd32(sp0 - 0x14u);
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_1023272f: ;
    COW_AT(1023272f)
    goto L_10232610;
L_10232734: ;
    COW_AT(10232734)
    goto L_10232530;
L_10232739: ;
    COW_AT(10232739)
    goto L_10231930;
L_1023273e: ;
    COW_AT(1023273e)
    g->esi = in_esi;
    g->edi = in_edi;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10232720(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102317a0u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x102317b4u:
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
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x10u, 2u);
        (void)sp0;
        return 1;
    }
    case 0x102317c3u:
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
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x102317d4u:
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
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x14u, sp0 - 4u);
        wr32(sp0 - 0x10u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102317e4u:
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
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x14u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x102317f0u:
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
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10231809u:
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x10231810u:
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
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x14u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1023181cu:
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
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10231835u:
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x10231930u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1023193cu:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edi = self;
        (void)sp0;
        return 1;
    }
    case 0x10231943u:
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
        in_esi = g->esi;
        self = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1023194au:
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
        in_esi = g->esi;
        self = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10231951u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 8u;
        wr32(sp0 - 8u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x10231958u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        self = g->edi;
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10231970u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0xcu, 0x80808080u);
        (void)sp0;
        return 1;
    }
    case 0x1023197fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10231996u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0xcu, 0x80808080u);
        (void)sp0;
        return 1;
    }
    case 0x102319a5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x102319a6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102319adu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10232530u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1023253fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1023254cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10232559u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x10232569u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10232589u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x18u, 2u);
        (void)sp0;
        return 1;
    }
    case 0x10232598u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1023259fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x102325a5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x102325adu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x102325b4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x102325bbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x102325c3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x102325dfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x102325e6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x102325edu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x102325f2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x102325f9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10232600u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10232610u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1023261fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1023262cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10232639u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x10232649u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10232659u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_4;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x1023265eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10232665u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10232684u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1023268bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10232690u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_4;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10232695u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10232728u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1023272fu:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10232734u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10232739u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1023273eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10232720(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10232720(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
