/* f_0x100a12a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100a12a0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_150;
    uint32_t loc_158;
    uint32_t loc_15c;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 404u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100a12c5u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); goto E_100a12c5;
    case 0x100a12ccu: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); goto E_100a12cc;
    case 0x100a12d3u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); goto E_100a12d3;
    case 0x100a12ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_100a12ec;
    case 0x100a12f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_100a12f5;
    case 0x100a1300u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_100a1300;
    case 0x100a130bu: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); goto E_100a130b;
    case 0x100a1311u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); goto E_100a1311;
    case 0x100a132au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_100a132a;
    case 0x100a1333u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_100a1333;
    case 0x100a133eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_100a133e;
    case 0x100a1349u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_100a1349;
    case 0x100a135eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; loc_150 = rd32(sp0 - 0x150u); goto E_100a135e;
    case 0x100a1362u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; loc_150 = rd32(sp0 - 0x150u); goto E_100a1362;
    case 0x100a136bu: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x15cu); in_ebx = rd32(sp0 - 0x158u); g->ebp = rd32(sp0 - 0x15cu); g->ebx = rd32(sp0 - 0x158u); goto E_100a136b;
    case 0x100a1374u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; loc_15c = rd32(sp0 - 0x15cu); loc_158 = rd32(sp0 - 0x158u); loc_150 = rd32(sp0 - 0x150u); goto E_100a1374;
    case 0x100a138fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_100a138f;
    case 0x100a139au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_100a139a;
    case 0x100a13a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_100a13a1;
    case 0x100a13b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_100a13b2;
    case 0x100a13b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_100a13b7;
    case 0x100a13dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; loc_150 = rd32(sp0 - 0x150u); goto E_100a13df;
    case 0x100a13eau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_100a13ea;
    case 0x100a13efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_100a13ef;
    case 0x100a140du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_100a140d;
    case 0x100a1429u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_100a1429;
    case 0x100a1430u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_100a1430;
    case 0x100a1448u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_100a1448;
    case 0x100a144eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_100a144e;
    case 0x100a1455u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_100a1455;
    case 0x100a145cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_100a145c;
    case 0x100a1490u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_100a1490;
    case 0x100a1496u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_100a1496;
    case 0x100a14adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_100a14ad;
    case 0x100a14b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_100a14b4;
    case 0x100a14b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_100a14b7;
    case 0x100a14e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a14e6;
    case 0x100a14edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a14ed;
    case 0x100a14f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a14f0;
    case 0x100a150du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_100a150d;
    case 0x100a1511u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_100a1511;
    case 0x100a151cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x164u); in_esi = rd32(sp0 - 0x160u); g->edi = rd32(sp0 - 0x164u); g->esi = rd32(sp0 - 0x160u); goto E_100a151c;
    case 0x100a1536u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a1536;
    default: break;
    }
#endif

    COW_AT(100a12a0)
    wr32(sp0 - 0x158u, in_ebx);
    wr32(sp0 - 0x15cu, in_ebp);
    wr8(sp0 - 0x154u, 0u);
    wr8(sp0 - 0x153u, 2u);
    wr8(sp0 - 0x152u, 0u);
    if (rd8(arg3 + 0x1du) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(arg3 + 0x1du);
        goto L_100a130b;
    }
    eax = (in_eax & 0xffffff00u) | rd8(arg3 + 0x1du);
    COW_AT(100a12c5)
    if (rd8(arg3 + 0x1eu) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(arg3 + 0x1eu);
        goto L_100a130b;
    }
    COW_AT(100a12cc)
    if (rd32(arg3 + 4u) != 0u)
    {
        eax = rd32(arg3 + 4u);
        goto L_100a130b;
    }
    eax = rd32(arg3 + 4u);
    COW_AT(100a12d3)
    t1 = (in_edx & 0xffff0000u) | rd16(arg3 + 0x18u);
    wr32(sp0 - 0x160u, (uint16_t)t1);
    g->ecx = (uint16_t)t1;
    g->edx = t1;
    g->esp = sp0 - 0x15cu;
    t2 = cow_call_regs(g, COW_IMG(0x10086fc0u), eax, g->ecx, g->edx, 1, 1, (uint16_t)t1);
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint8_t)t2 != 0u)
    {
        ecx = t3;
        edx = t4;
        goto L_100a12f5;
    }
    eax = t2;
    edx = t4;
    COW_AT(100a12ec)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = rd32(sp0 - 0x15cu);
    g->edx = edx;
    return eax;
L_100a12f5: ;
    COW_AT(100a12f5)
    if (rd32(COW_IMG(0x10480af0u) + ecx * 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + ecx * 4u);
        loc_150 = rd32(sp0 - 0x150u);
        goto L_100a1362;
    }
    eax = rd32(COW_IMG(0x10480af0u) + ecx * 4u);
    COW_AT(100a1300)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = rd32(sp0 - 0x15cu);
    g->edx = edx;
    return eax & 0xffffff00u;
L_100a130b: ;
    COW_AT(100a130b)
    if ((rd8(arg3 + 0x1bu) & 0x80u) != 0u) goto L_100a136b;
    COW_AT(100a1311)
    t5 = (in_edx & 0xffff0000u) | rd16(arg3 + 0x18u);
    wr32(sp0 - 0x160u, (uint16_t)t5);
    g->ecx = (uint16_t)t5;
    g->edx = t5;
    g->esp = sp0 - 0x15cu;
    t6 = cow_call_regs(g, COW_IMG(0x10086fc0u), eax, g->ecx, g->edx, 1, 1, (uint16_t)t5);
    t7 = g->ecx;
    t8 = g->edx;
    if ((uint8_t)t6 != 0u)
    {
        eax = t6;
        ecx = t7;
        edx = t8;
        goto L_100a1333;
    }
    eax = t6;
    edx = t8;
    COW_AT(100a132a)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = rd32(sp0 - 0x15cu);
    g->edx = edx;
    return eax;
L_100a1333: ;
    COW_AT(100a1333)
    if (rd32(COW_IMG(0x10480af0u) + ecx * 4u) != 0u)
    {
        ecx = rd32(COW_IMG(0x10480af0u) + ecx * 4u);
        goto L_100a1349;
    }
    COW_AT(100a133e)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = rd32(sp0 - 0x15cu);
    g->edx = edx;
    return eax & 0xffffff00u;
L_100a1349: ;
    COW_AT(100a1349)
    t9 = rd32(ecx + 0x74u);
    wr32(sp0 - 0x150u, t9);
    if (rd32(ecx + 0x78u) != rd32(arg3 + 4u))
    {
        eax = rd32(arg3 + 4u);
        goto L_100a13df;
    }
    eax = rd32(arg3 + 4u);
    ecx = rd32(ecx + 0x78u);
    loc_150 = t9;
    COW_AT(100a135e)
    if (ecx == 0u) goto L_100a13df;
L_100a1362: ;
    COW_AT(100a1362)
    wr16(COW_IMG(0x104804ccu), (uint16_t)edx);
    loc_158 = rd32(sp0 - 0x158u);
    loc_15c = rd32(sp0 - 0x15cu);
L_100a1374: ;
    COW_AT(100a1374)
    t10 = rd16(arg3 + 0x1au) & 0x7fffu;
    wr32(sp0 - 0x160u, t10);
    wr32(sp0 - 0x164u, 8u);
    g->eax = eax;
    g->ecx = t10;
    g->esp = sp0 - 0x15cu;
    t11 = cow_call_regs(g, COW_IMG(0x100964a0u), g->eax, g->ecx, edx, 1, 2, 8u, t10);
    t12 = g->ecx;
    t13 = g->edx;
    if (t11 != 0u)
    {
        eax = t11;
        ecx = t12;
        edx = t13;
        ebx = t11;
        goto L_100a139a;
    }
    eax = t11;
    edx = t13;
    COW_AT(100a138f)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = rd32(sp0 - 0x15cu);
    g->edx = edx;
    return eax & 0xffffff00u;
L_100a136b: ;
    COW_AT(100a136b)
    wr16(COW_IMG(0x104804ccu), 0u);
    ecx = self;
    edx = in_edx;
    loc_150 = rd32(sp0 - 0x150u);
    loc_158 = in_ebx;
    loc_15c = in_ebp;
    goto L_100a1374;
L_100a139a: ;
    COW_AT(100a139a)
    if (rd8(arg3 + 0x1cu) >= 8u)
    {
        eax = (eax & 0xffffff00u) | rd8(arg3 + 0x1cu);
    COW_AT(100a13b2)
        wr8(sp0 - 0x154u, 0u);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(arg3 + 0x1cu);
    COW_AT(100a13a1)
        t14 = rd8(COW_IMG(0x1035b944u) + (uint8_t)eax);
        wr8(sp0 - 0x154u, (uint8_t)t14);
        eax = (uint8_t)eax;
        edx = (edx & 0xffffff00u) | t14;
    }
    COW_AT(100a13b7)
    t15 = rd16(arg3 + 0x18u);
    t16 = rd8(COW_IMG(0x104808fcu));
    wr16(COW_IMG(0x10482f40u), (uint16_t)t15);
    t17 = rd16(arg3 + 0x18u);
    wr16(COW_IMG(0x104855aau), (uint16_t)t17);
    if (((t16 | rd8(COW_IMG(0x1047fb40u))) & 0x40u) == 0u) goto L_100a13ea;
    eax = (eax & 0xffff0000u) | t15;
    edx = ((edx | t16) & 0xffffff00u) | (uint8_t)(t16 | rd8(COW_IMG(0x1047fb40u)));
L_100a13df: ;
    COW_AT(100a13df)
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = rd32(sp0 - 0x15cu);
    g->edx = edx;
    return eax & 0xffffff00u;
L_100a13ea: ;
    COW_AT(100a13ea)
    eax = 0u;
    ecx = arg3 + 8u;
L_100a13ef: ;
    COW_AT(100a13ef)
    t18 = rd32(COW_IMG(0x10488800u) + eax);
    wr32(eax + sp0 - 0x150u, t18);
    t19 = rd32(ecx);
    wr32(COW_IMG(0x10488800u) + eax, t19);
    if ((int32_t)(eax + 4u) < 16)
    {
        eax = eax + 4u;
        ecx = ecx + 4u;
        goto L_100a13ef;
    }
    eax = eax + 4u;
    edx = t19;
    COW_AT(100a140d)
    wr32(sp0 - 0x160u, in_esi);
    wr32(sp0 - 0x164u, in_edi);
    t20 = rd8(arg3 + 0x1eu);
    esi = COW_IMG(0x10488d08u);
    edi = sp0 - 0x100u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if ((uint8_t)t20 == 0u)
    {
        eax = (eax & 0xffffff00u) | t20;
    }
    else
    {
        eax = (eax & 0xffffff00u) | t20;
    COW_AT(100a1429)
        if (rd8(arg3 + 0x1du) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(arg3 + 0x1du);
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(arg3 + 0x1du);
    COW_AT(100a1430)
            wr32(sp0 - 0x168u, 0x20u);
            wr32(sp0 - 0x16cu, arg3 + 0x1eu);
            wr32(sp0 - 0x170u, COW_IMG(0x10488d08u));
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x164u;
            t21 = cow_call_regs(g, COW_IMG(0x10312090u), eax, g->ecx, g->edx, 1, 3, COW_IMG(0x10488d08u), arg3 + 0x1eu, 0x20u);
            t22 = g->ecx;
            t23 = g->edx;
            wr8(sp0 - 0xe1u, 0u);
            eax = t21;
            ecx = t22;
            edx = t23;
        }
    }
    COW_AT(100a1448)
    if (rd8(arg3 + 0x1eu) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(arg3 + 0x1eu);
        goto L_100a1490;
    }
    eax = (eax & 0xffffff00u) | rd8(arg3 + 0x1eu);
    COW_AT(100a144e)
    if (rd8(arg3 + 0x1du) == 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(arg3 + 0x1du);
        goto L_100a1490;
    }
    COW_AT(100a1455)
    if (rd32(arg3 + 4u) != 0u)
    {
        ecx = rd32(arg3 + 4u);
        goto L_100a1490;
    }
    ecx = rd32(arg3 + 4u);
L_100a145c: ;
    COW_AT(100a145c)
    wr32(sp0 - 0x168u, arg3 + 0x1eu);
    wr32(sp0 - 0x16cu, COW_IMG(0x1035bb48u));
    wr32(sp0 - 0x170u, sp0 - 0x140u);
    g->ebx = ebx;
    g->ecx = ecx;
    g->esp = sp0 - 0x15cu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x140u, COW_IMG(0x1035bb48u), arg3 + 0x1eu, in_edi, in_esi);
    t25 = g->ecx;
    wr32(sp0 - 0x174u, arg3 + 0x1eu);
    t26 = (t25 & 0xffff0000u) | rd16(arg3 + 0x18u);
    wr32(sp0 - 0x178u, t26);
    wr32(sp0 - 0x17cu, 1u);
    wr32(sp0 - 0x180u, 0u);
    wr32(sp0 - 0x184u, sp0 - 0x154u);
    wr32(sp0 - 0x188u, 1u);
    wr32(sp0 - 0x18cu, ebx);
    wr32(sp0 - 0x190u, sp0 - 0x140u);
    g->esp = sp0 - 0x170u;
    cow_call_regs(g, COW_IMG(0x100ad5e0u), sp0 - 0x140u, t26, sp0 - 0x154u, 1, 8, sp0 - 0x140u, ebx, 1u, sp0 - 0x154u, 0u, 1u, t26, arg3 + 0x1eu);
L_100a1536: ;
    COW_AT(100a1536)
    t27 = rd32(sp0 - 0x148u);
    t28 = rd32(sp0 - 0x14cu);
    t29 = rd32(sp0 - 0x150u);
    wr32(COW_IMG(0x10488808u), t27);
    wr32(COW_IMG(0x10488800u), t29);
    t30 = rd32(sp0 - 0x144u);
    wr32(COW_IMG(0x10488804u), t28);
    esi = sp0 - 0x100u;
    edi = COW_IMG(0x10488d08u);
    ecx = 0x40u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t31 = rd32(sp0 - 0x15cu);
    t32 = rd32(sp0 - 0x160u);
    t33 = rd32(sp0 - 0x164u);
    wr32(COW_IMG(0x1048880cu), t30);
    g->ebx = rd32(sp0 - 0x158u);
    g->esi = t32;
    g->edi = t33;
    g->ebp = t31;
    g->edx = t30;
    return (t28 & 0xffffff00u) | 1u;
L_100a1490: ;
    COW_AT(100a1490)
    if ((rd8(arg3 + 0x1bu) & 0x80u) != 0u) goto L_100a150d;
    COW_AT(100a1496)
    if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(arg3 + 0x18u) * 4u) + 0x210u) == 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(arg3 + 0x18u) * 4u);
        ecx = rd16(arg3 + 0x18u);
    COW_AT(100a14b4)
        eax = eax + 0x7cu;
    }
    else
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(arg3 + 0x18u) * 4u);
        ecx = rd16(arg3 + 0x18u);
    COW_AT(100a14ad)
        eax = eax + 0x214u;
    }
    COW_AT(100a14b7)
    wr32(sp0 - 0x168u, eax);
    wr32(sp0 - 0x16cu, COW_IMG(0x1035bb48u));
    wr32(sp0 - 0x170u, sp0 - 0x140u);
    g->ebx = ebx;
    g->esp = sp0 - 0x15cu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x140u, COW_IMG(0x1035bb48u), eax, in_edi, in_esi);
    t24 = (arg3 & 0xffff0000u) | rd16(arg3 + 0x18u);
    if (rd16(rd32(COW_IMG(0x10480af0u) + (uint16_t)t24 * 4u) + 0x210u) == 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)t24 * 4u);
        ebp = t24;
    COW_AT(100a14ed)
        eax = eax + 0x7cu;
    }
    else
    {
        eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)t24 * 4u);
        ebp = t24;
    COW_AT(100a14e6)
        eax = eax + 0x214u;
    }
    COW_AT(100a14f0)
    wr32(sp0 - 0x168u, eax);
    wr32(sp0 - 0x16cu, ebp);
    wr32(sp0 - 0x170u, 1u);
    wr32(sp0 - 0x174u, 0u);
    wr32(sp0 - 0x178u, sp0 - 0x154u);
    wr32(sp0 - 0x17cu, 1u);
    wr32(sp0 - 0x180u, ebx);
    wr32(sp0 - 0x184u, sp0 - 0x140u);
    g->esp = sp0 - 0x164u;
    cow_call_regs(g, COW_IMG(0x100ad5e0u), eax, sp0 - 0x154u, sp0 - 0x140u, 1, 8, sp0 - 0x140u, ebx, 1u, sp0 - 0x154u, 0u, 1u, ebp, eax);
    goto L_100a1536;
L_100a150d: ;
    COW_AT(100a150d)
    if ((uint8_t)eax == 0u) goto L_100a151c;
    COW_AT(100a1511)
    if (rd8(arg3 + 0x1du) != 0u) goto L_100a145c;
    eax = (eax & 0xffffff00u) | rd8(arg3 + 0x1du);
L_100a151c: ;
    COW_AT(100a151c)
    wr32(sp0 - 0x168u, arg3 + 0x1eu);
    wr32(sp0 - 0x16cu, 0u);
    wr32(sp0 - 0x170u, 0u);
    wr32(sp0 - 0x174u, sp0 - 0x154u);
    wr32(sp0 - 0x178u, 1u);
    wr32(sp0 - 0x17cu, ebx);
    wr32(sp0 - 0x180u, COW_IMG(0x103d3c84u));
    g->esp = sp0 - 0x164u;
    cow_call_regs(g, COW_IMG(0x100ad660u), eax, sp0 - 0x154u, edx, 1, 7, COW_IMG(0x103d3c84u), ebx, 1u, sp0 - 0x154u, 0u, 0u, arg3 + 0x1eu);
    goto L_100a1536;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100a12a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100a12c5u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x15cu;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a12ccu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x15cu;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a12d3u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x15cu;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a12ecu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x15cu;
        (void)sp0;
        return 1;
    }
    case 0x100a12f5u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x15cu;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a1300u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x15cu;
        (void)sp0;
        return 1;
    }
    case 0x100a130bu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x15cu;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a1311u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x15cu;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a132au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x15cu;
        (void)sp0;
        return 1;
    }
    case 0x100a1333u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x15cu;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a133eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x15cu;
        (void)sp0;
        return 1;
    }
    case 0x100a1349u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x15cu;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a135eu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_150;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        loc_150 = rd32(sp0 - 0x150u);
        g->esp = sp0 - 0x15cu;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a1362u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_150;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        loc_150 = rd32(sp0 - 0x150u);
        g->esp = sp0 - 0x15cu;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a136bu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x15cu);
        in_ebx = rd32(sp0 - 0x158u);
        g->esp = sp0 - 0x15cu;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a1374u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_150;
        uint32_t loc_158;
        uint32_t loc_15c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        loc_15c = rd32(sp0 - 0x15cu);
        loc_158 = rd32(sp0 - 0x158u);
        loc_150 = rd32(sp0 - 0x150u);
        g->esp = sp0 - 0x15cu;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a138fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x15cu;
        (void)sp0;
        return 1;
    }
    case 0x100a139au:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x15cu;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a13a1u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x15cu;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a13b2u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x15cu;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a13b7u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x15cu;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a13dfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_150;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        loc_150 = rd32(sp0 - 0x150u);
        g->esp = sp0 - 0x15cu;
        (void)sp0;
        return 1;
    }
    case 0x100a13eau:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x15cu;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a13efu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x15cu;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a140du:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x15cu;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a1429u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        g->esp = sp0 - 0x164u;
        g->ebp = arg3;
        g->esi = arg3 + 0x1eu;
        (void)sp0;
        return 1;
    }
    case 0x100a1430u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        g->esp = sp0 - 0x164u;
        g->ebp = arg3;
        g->esi = arg3 + 0x1eu;
        (void)sp0;
        return 1;
    }
    case 0x100a1448u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        g->esp = sp0 - 0x164u;
        g->ebp = arg3;
        g->esi = arg3 + 0x1eu;
        (void)sp0;
        return 1;
    }
    case 0x100a144eu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        g->esp = sp0 - 0x164u;
        g->ebp = arg3;
        g->esi = arg3 + 0x1eu;
        (void)sp0;
        return 1;
    }
    case 0x100a1455u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        g->esp = sp0 - 0x164u;
        g->ebp = arg3;
        g->esi = arg3 + 0x1eu;
        (void)sp0;
        return 1;
    }
    case 0x100a145cu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        g->esp = sp0 - 0x164u;
        g->ebp = arg3;
        g->esi = arg3 + 0x1eu;
        (void)sp0;
        return 1;
    }
    case 0x100a1490u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        g->esp = sp0 - 0x164u;
        g->ebp = arg3;
        g->esi = arg3 + 0x1eu;
        (void)sp0;
        return 1;
    }
    case 0x100a1496u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        g->esp = sp0 - 0x164u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a14adu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        g->esp = sp0 - 0x164u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a14b4u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        g->esp = sp0 - 0x164u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a14b7u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        g->esp = sp0 - 0x164u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a14e6u:
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
        g->esp = sp0 - 0x164u;
        wr32(sp0 - 0x170u, sp0 - 0x140u);
        (void)sp0;
        return 1;
    }
    case 0x100a14edu:
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
        g->esp = sp0 - 0x164u;
        wr32(sp0 - 0x170u, sp0 - 0x140u);
        (void)sp0;
        return 1;
    }
    case 0x100a14f0u:
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
        g->esp = sp0 - 0x164u;
        wr32(sp0 - 0x170u, sp0 - 0x140u);
        (void)sp0;
        return 1;
    }
    case 0x100a150du:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        g->esp = sp0 - 0x164u;
        g->ebp = arg3;
        g->esi = arg3 + 0x1eu;
        (void)sp0;
        return 1;
    }
    case 0x100a1511u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        g->esp = sp0 - 0x164u;
        g->ebp = arg3;
        g->esi = arg3 + 0x1eu;
        (void)sp0;
        return 1;
    }
    case 0x100a151cu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x164u);
        in_esi = rd32(sp0 - 0x160u);
        g->esp = sp0 - 0x164u;
        g->esi = arg3 + 0x1eu;
        (void)sp0;
        return 1;
    }
    case 0x100a1536u:
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
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100a12a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100a12a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
