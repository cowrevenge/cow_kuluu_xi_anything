/* f_0x102ced70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
void cow_fn_102ced70(Guest* g)
{
    uint32_t al_m1114;
    uint32_t al_m1118;
    uint32_t al_m111c;
    uint32_t al_m1120;
    uint32_t al_m1124;
    uint32_t al_m1128;
    uint32_t al_m112c;
    uint32_t al_m113c;
    uint32_t al_m1140;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff0u;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 4464u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102ceda5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp1 - 0x1140u); in_esi = rd32(sp1 - 0x113cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp1 - 0x1140u); g->esi = rd32(sp1 - 0x113cu); goto E_102ceda5;
    case 0x102cedc1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp1 - 0x1140u); in_esi = rd32(sp1 - 0x113cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp1 - 0x1140u); g->esi = rd32(sp1 - 0x113cu); goto E_102cedc1;
    case 0x102cedcfu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp1 - 0x1140u); in_esi = rd32(sp1 - 0x113cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp1 - 0x1140u); g->esi = rd32(sp1 - 0x113cu); goto E_102cedcf;
    case 0x102cedf6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1140 = rd32(sp1 - 0x1140u); al_m113c = rd32(sp1 - 0x113cu); al_m1128 = rd32(sp1 - 0x1128u); loc_4 = rd32(sp0 - 4u); goto E_102cedf6;
    case 0x102cee03u: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp1 - 0x1140u); in_esi = rd32(sp1 - 0x113cu); al_m1128 = rd32(sp1 - 0x1128u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp1 - 0x1140u); g->esi = rd32(sp1 - 0x113cu); goto E_102cee03;
    case 0x102cee0au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp1 - 0x1140u); in_esi = rd32(sp1 - 0x113cu); al_m1128 = rd32(sp1 - 0x1128u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp1 - 0x1140u); g->esi = rd32(sp1 - 0x113cu); goto E_102cee0a;
    case 0x102cee2bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; al_m1140 = rd32(sp1 - 0x1140u); al_m113c = rd32(sp1 - 0x113cu); al_m112c = rd32(sp1 - 0x112cu); al_m1128 = rd32(sp1 - 0x1128u); al_m1124 = rd32(sp1 - 0x1124u); al_m1120 = rd32(sp1 - 0x1120u); al_m111c = rd32(sp1 - 0x111cu); al_m1118 = rd32(sp1 - 0x1118u); al_m1114 = rd32(sp1 - 0x1114u); loc_4 = rd32(sp0 - 4u); goto E_102cee2b;
    case 0x102cee46u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; al_m1114 = rd32(sp1 - 0x1114u); goto E_102cee46;
    case 0x102cee55u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m112c = rd32(sp1 - 0x112cu); al_m1120 = rd32(sp1 - 0x1120u); al_m1114 = rd32(sp1 - 0x1114u); goto E_102cee55;
    case 0x102cee8eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102cee8e;
    case 0x102cee97u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102cee97;
    case 0x102ceea7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m1120 = rd32(sp1 - 0x1120u); goto E_102ceea7;
    case 0x102ceeb3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; al_m1120 = rd32(sp1 - 0x1120u); al_m1114 = rd32(sp1 - 0x1114u); goto E_102ceeb3;
    case 0x102ceef8u: eax = g->eax; esi = g->esi; al_m1124 = rd32(sp1 - 0x1124u); al_m1120 = rd32(sp1 - 0x1120u); al_m111c = rd32(sp1 - 0x111cu); al_m1118 = rd32(sp1 - 0x1118u); al_m1114 = rd32(sp1 - 0x1114u); goto E_102ceef8;
    case 0x102ceefbu: eax = g->eax; esi = g->esi; al_m1124 = rd32(sp1 - 0x1124u); al_m1120 = rd32(sp1 - 0x1120u); al_m111c = rd32(sp1 - 0x111cu); al_m1118 = rd32(sp1 - 0x1118u); al_m1114 = rd32(sp1 - 0x1114u); goto E_102ceefb;
    case 0x102ceefeu: eax = g->eax; esi = g->esi; al_m1124 = rd32(sp1 - 0x1124u); al_m1120 = rd32(sp1 - 0x1120u); al_m111c = rd32(sp1 - 0x111cu); al_m1118 = rd32(sp1 - 0x1118u); al_m1114 = rd32(sp1 - 0x1114u); goto E_102ceefe;
    case 0x102cef01u: eax = g->eax; esi = g->esi; al_m1124 = rd32(sp1 - 0x1124u); al_m1120 = rd32(sp1 - 0x1120u); al_m111c = rd32(sp1 - 0x111cu); al_m1118 = rd32(sp1 - 0x1118u); al_m1114 = rd32(sp1 - 0x1114u); goto E_102cef01;
    case 0x102cef03u: eax = g->eax; esi = g->esi; al_m1124 = rd32(sp1 - 0x1124u); al_m1120 = rd32(sp1 - 0x1120u); al_m111c = rd32(sp1 - 0x111cu); al_m1118 = rd32(sp1 - 0x1118u); al_m1114 = rd32(sp1 - 0x1114u); goto E_102cef03;
    case 0x102cef11u: eax = g->eax; esi = g->esi; al_m1124 = rd32(sp1 - 0x1124u); al_m1120 = rd32(sp1 - 0x1120u); al_m111c = rd32(sp1 - 0x111cu); al_m1118 = rd32(sp1 - 0x1118u); al_m1114 = rd32(sp1 - 0x1114u); goto E_102cef11;
    case 0x102cef1fu: eax = g->eax; esi = g->esi; al_m1124 = rd32(sp1 - 0x1124u); al_m1120 = rd32(sp1 - 0x1120u); al_m111c = rd32(sp1 - 0x111cu); al_m1118 = rd32(sp1 - 0x1118u); al_m1114 = rd32(sp1 - 0x1114u); goto E_102cef1f;
    case 0x102cef2du: eax = g->eax; esi = g->esi; al_m1124 = rd32(sp1 - 0x1124u); al_m1120 = rd32(sp1 - 0x1120u); al_m111c = rd32(sp1 - 0x111cu); al_m1118 = rd32(sp1 - 0x1118u); al_m1114 = rd32(sp1 - 0x1114u); goto E_102cef2d;
    case 0x102cef3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102cef3c;
    case 0x102cef5cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; al_m112c = rd32(sp1 - 0x112cu); goto E_102cef5c;
    case 0x102cef86u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_102cef86;
    case 0x102cef8au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m112c = rd32(sp1 - 0x112cu); goto E_102cef8a;
    case 0x102cef9fu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m112c = rd32(sp1 - 0x112cu); goto E_102cef9f;
    case 0x102cefa1u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m112c = rd32(sp1 - 0x112cu); goto E_102cefa1;
    case 0x102cefbau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m112c = rd32(sp1 - 0x112cu); goto E_102cefba;
    case 0x102cefc8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m112c = rd32(sp1 - 0x112cu); goto E_102cefc8;
    case 0x102cefebu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_102cefeb;
    case 0x102cefeeu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_102cefee;
    case 0x102cf001u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_102cf001;
    case 0x102cf009u: eax = g->eax; ecx = g->ecx; edi = g->edi; goto E_102cf009;
    case 0x102cf051u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_102cf051;
    case 0x102cf05bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_102cf05b;
    case 0x102cf06bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102cf06b;
    case 0x102cf085u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_102cf085;
    default: break;
    }
#endif

    COW_AT(102ced70)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp1 - 0x113cu, in_esi);
    wr32(sp1 - 0x1140u, in_edi);
    wr32(sp1 - 0x1000u, 0u);
    edi = sp1 - 0xffcu;
    eax = 0u;
    ecx = 0x3ffu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if (rd32(arg2) == 0u) goto L_102cedcf;
    COW_AT(102ceda5)
    t1 = rd8(rd32(arg1 + 0x3cu) + 1u);
    t2 = rd32(arg1 + 0x3cu);
    wr32(arg1 + 0x40u, 0x10u);
    if ((t1 & 0xcu) == 0xcu)
    {
        eax = t1;
        ecx = t2;
        edx = t1 & 0xcu;
        goto L_102cee0a;
    }
    COW_AT(102cedc1)
    t3 = (rd32(arg1 + 0x44u) & 0xffffff00u) | (uint8_t)(rd32(arg1 + 0x44u) | 2u);
    wr32(arg1 + 0x44u, t3);
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return;
L_102cedcf: ;
    COW_AT(102cedcf)
    t4 = rd8(arg3 + rd32(arg1 + 0x3cu));
    wr32(sp1 - 0x1128u, t4);
    t5 = arg3 * 8u + 8u;
    wr32(arg1 + 0x40u, t5);
    if ((t4 & 0xfcu) == 0xa0u)
    {
        edx = t5;
        al_m1128 = t4;
        goto L_102cee03;
    }
    loc_4 = in_ebp;
    al_m113c = in_esi;
    al_m1140 = in_edi;
L_102cedf6: ;
    COW_AT(102cedf6)
    wr32(arg1 + 0x44u, rd32(arg1 + 0x44u) | 2u);
    g->esi = al_m113c;
    g->edi = al_m1140;
    g->ebp = loc_4;
    return;
L_102cee03: ;
    COW_AT(102cee03)
    eax = al_m1128;
    ecx = arg1;
L_102cee0a: ;
    COW_AT(102cee0a)
    wr32(sp1 - 0x1128u, eax & 3u);
    wr32(sp1 - 0x1118u, 0u);
    wr32(sp1 - 0x112cu, 0u);
    wr32(sp1 - 0x1124u, sp1 - 0x10fcu);
    wr32(sp1 - 0x111cu, 0x100u);
    esi = 0u;
    loc_4 = in_ebp;
    al_m113c = in_esi;
    al_m1140 = in_edi;
    al_m1128 = eax & 3u;
    eax = sp1 - 0x10fcu;
    al_m1118 = 0u;
    al_m112c = 0u;
    al_m1124 = sp1 - 0x10fcu;
    al_m111c = 0x100u;
L_102cee2b: ;
    COW_AT(102cee2b)
    wr32(sp1 - 0x1144u, 3u);
    wr32(sp1 - 0x1148u, arg1);
    g->eax = eax;
    g->esp = sp1 - 0x1134u;
    t6 = cow_cdecl(g, COW_IMG(0x102cf2c0u), 5, arg1, 3u, al_m1140, al_m113c, rd32(sp1 - 0x1138u));
    wr32(sp1 - 0x1114u, t6);
    wr32(sp1 - 0x1120u, 0u);
    if (t6 == 0u)
    {
        al_m1114 = t6;
        al_m1120 = 0u;
        goto L_102ceeb3;
    }
    al_m1114 = t6;
    COW_AT(102cee46)
    t7 = rd32(sp1 - 0x111cu);
    wr32(sp1 - 0x112cu, t7);
    ecx = t7;
    esi = rd32(arg1 + 0x40u);
    edi = rd32(sp1 - 0x1124u);
    al_m1120 = 0u;
    al_m112c = t7;
L_102cee55: ;
    COW_AT(102cee55)
    wr32(sp1 - 0x1144u, 0xcu);
    wr32(sp1 - 0x1148u, esi);
    t8 = rd32(arg1 + 0x3cu);
    wr32(sp1 - 0x114cu, t8);
    g->eax = t8;
    g->esp = sp1 - 0x1138u;
    t9 = cow_cdecl(g, COW_IMG(0x102cf280u), 5, t8, esi, 0xcu, rd32(sp1 - 0x1140u), rd32(sp1 - 0x113cu));
    wr32(edi, t9);
    wr32(sp1 - 0x1150u, 8u);
    wr32(sp1 - 0x1154u, esi + 4u);
    t10 = rd32(arg1 + 0x3cu);
    wr32(sp1 - 0x1158u, t10);
    g->eax = t10;
    g->esp = sp1 - 0x1144u;
    t11 = cow_cdecl(g, COW_IMG(0x102cf280u), 5, t10, esi + 4u, 8u, rd32(sp1 - 0x114cu), rd32(sp1 - 0x1148u));
    t12 = rd32(sp1 - 0x1120u);
    wr32(edi - 4u, t11 & 0xf8u);
    if (t12 == 0u)
    {
        ecx = t12;
        esi = esi + 9u;
        goto L_102cee97;
    }
    eax = t11 & 0xf8u;
    ecx = t12;
    esi = esi + 9u;
    COW_AT(102cee8e)
    if ((int32_t)rd32(edi - 0xcu) >= (int32_t)eax)
    {
        loc_4 = rd32(sp0 - 4u);
        al_m113c = rd32(sp1 - 0x113cu);
        al_m1140 = rd32(sp1 - 0x1140u);
        goto L_102cedf6;
    }
L_102cee97: ;
    COW_AT(102cee97)
    wr32(sp1 - 0x1120u, ecx + 1u);
    if ((int32_t)(ecx + 1u) < (int32_t)rd32(sp1 - 0x1114u))
    {
        edi = edi + 8u;
        al_m1114 = rd32(sp1 - 0x1114u);
        al_m1120 = ecx + 1u;
        ecx = ecx + 1u;
        al_m112c = rd32(sp1 - 0x112cu);
        goto L_102cee55;
    }
    al_m1120 = ecx + 1u;
    COW_AT(102ceea7)
    wr32(arg1 + 0x40u, esi);
    esi = rd32(sp1 - 0x1118u);
    al_m1114 = rd32(sp1 - 0x1114u);
L_102ceeb3: ;
    COW_AT(102ceeb3)
    wr32(al_m1120 * 8u + esi * 0x40u + sp1 - 0x10fcu, 4u);
    wr32(al_m1120 * 8u + esi * 0x40u + sp1 - 0x1100u, 0xffu);
    wr32(sp1 - 0x1118u, esi + 1u);
    t13 = rd32(sp1 - 0x111cu) + 0x100u;
    wr32(sp1 - 0x111cu, t13);
    t14 = rd32(sp1 - 0x1124u) + 0x40u;
    wr32(sp1 - 0x1124u, t14);
    if ((int32_t)(esi + 1u) <= (int32_t)rd32(sp1 - 0x1128u))
    {
        eax = rd32(sp1 - 0x1128u);
        ecx = 0xffu;
        edx = 4u;
        loc_4 = rd32(sp0 - 4u);
        al_m113c = rd32(sp1 - 0x113cu);
        al_m1140 = rd32(sp1 - 0x1140u);
        al_m1128 = rd32(sp1 - 0x1128u);
        al_m1118 = esi + 1u;
        esi = esi + 1u;
        al_m112c = rd32(sp1 - 0x112cu);
        al_m1124 = t14;
        al_m111c = t13;
        goto L_102cee2b;
    }
    eax = rd32(sp1 - 0x1128u);
    al_m1118 = esi + 1u;
    esi = esi + 1u;
    al_m111c = t13;
    al_m1124 = t14;
    COW_AT(102ceef8)
    if (esi == 1u) goto L_102cef03;
    esi = esi - 1u;
    COW_AT(102ceefb)
    if (esi == 1u) goto L_102cef11;
    esi = esi - 1u;
    COW_AT(102ceefe)
    if (esi == 1u) goto L_102cef1f;
    COW_AT(102cef01)
L_102cef2d: ;
    COW_AT(102cef2d)
    wr32(sp1 - 0x1144u, 5u);
    wr32(sp1 - 0x1148u, arg1);
    g->eax = eax;
    g->ecx = 0xffu;
    g->esp = sp1 - 0x1134u;
    t15 = cow_cdecl(g, COW_IMG(0x102cf2c0u), 5, arg1, 5u, rd32(sp1 - 0x1140u), rd32(sp1 - 0x113cu), rd32(sp1 - 0x1138u));
    t16 = g->ecx;
    if (t15 == 0u)
    {
        eax = t15;
        ecx = t16;
        al_m112c = rd32(sp1 - 0x112cu);
    }
    else
    {
        eax = t15;
    COW_AT(102cef3c)
        wr32(sp1 - 0x1144u, sp1 - 0x1000u);
        t17 = rd32(sp1 - 0x112cu);
        wr32(sp1 - 0x1148u, t17);
        t18 = rd32(sp1 - 0x1128u);
        wr32(sp1 - 0x114cu, t18);
        wr32(sp1 - 0x1150u, eax);
        wr32(sp1 - 0x1154u, arg1);
        g->eax = eax;
        g->ecx = t18;
        g->esp = sp1 - 0x10f8u;
        t19 = cow_bridge_indirect(g, COW_IMG(0x102cf2f0u), 0u, 23u, (const uint32_t[]){arg1, eax, t18, t17, sp1 - 0x1000u, rd32(sp1 - 0x1140u), rd32(sp1 - 0x113cu), rd32(sp1 - 0x1138u), rd32(sp1 - 0x1134u), rd32(sp1 - 0x1130u), rd32(sp1 - 0x112cu), rd32(sp1 - 0x1128u), rd32(sp1 - 0x1124u), rd32(sp1 - 0x1120u), rd32(sp1 - 0x111cu), rd32(sp1 - 0x1118u), rd32(sp1 - 0x1114u), rd32(sp1 - 0x1110u), rd32(sp1 - 0x110cu), rd32(sp1 - 0x1108u), rd32(sp1 - 0x1104u), rd32(sp1 - 0x1100u), rd32(sp1 - 0x10fcu)}, g->ecx, g->edx, g->eax, 92u);
        t20 = g->ecx;
        wr32(sp1 - 0x112cu, t19);
        eax = t19;
        ecx = t20;
        al_m112c = t19;
    }
    COW_AT(102cef5c)
    wr32(sp1 - 0x1144u, sp1 - 0x1000u);
    wr32(sp1 - 0x1148u, 5u);
    wr32(sp1 - 0x114cu, arg1);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = sp1 - 0x1000u;
    g->esp = sp1 - 0x1138u;
    t21 = cow_cdecl(g, COW_IMG(0x102cf2c0u), 5, arg1, 5u, sp1 - 0x1000u, rd32(sp1 - 0x1140u), rd32(sp1 - 0x113cu));
    t22 = g->ecx;
    t23 = g->edx;
    wr32(sp1 - 0x1148u, t21 + 1u);
    wr32(sp1 - 0x114cu, arg2);
    wr32(sp1 - 0x1150u, arg1);
    g->eax = t21 + 1u;
    g->esp = sp1 - 0x1134u;
    t24 = cow_cdecl(g, COW_IMG(0x102cf6f0u), 7, arg1, arg2, t21 + 1u, rd32(sp1 - 0x1144u), rd32(sp1 - 0x1140u), rd32(sp1 - 0x113cu), rd32(sp1 - 0x1138u));
    if ((int32_t)rd32(sp1 - 0x112cu) >= (int32_t)t24)
    {
        al_m112c = rd32(sp1 - 0x112cu);
    }
    else
    {
        eax = t24;
    COW_AT(102cef86)
        wr32(sp1 - 0x112cu, eax);
        al_m112c = eax;
    }
    COW_AT(102cef8a)
    t25 = (uint32_t)((int32_t)(al_m112c + 0xffu) >> 8u);
    if ((int32_t)(uint32_t)((int32_t)(al_m112c + 0xffu) >> 8u) >= (int32_t)rd32(arg2 + 4u))
    {
        eax = t25;
        edx = t25;
    }
    else
    {
        ecx = rd32(arg2 + 4u);
        edx = t25;
    COW_AT(102cef9f)
        eax = ecx;
    }
    COW_AT(102cefa1)
    t26 = rd32(arg2 + 8u);
    wr32(arg2 + 4u, edx);
    esi = t26 + 0x1000u;
    edi = t26;
    ecx = 0x8au;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = sp1 - 0x10fcu;
    edi = 0u;
L_102cefba: ;
    COW_AT(102cefba)
    wr32(edi * 4u + sp1 - 0x1110u, rd32(ecx));
    if ((int32_t)(edi + 1u) < (int32_t)eax)
    {
        ecx = ecx + 0x40u;
        edi = edi + 1u;
        goto L_102cefba;
    }
    edi = edi + 1u;
    COW_AT(102cefc8)
    wr32(sp1 - 0x1144u, sp1 - 0x1000u);
    wr32(sp1 - 0x1148u, sp1 - 0x1110u);
    wr32(sp1 - 0x114cu, eax);
    wr32(sp1 - 0x1150u, arg2);
    g->eax = arg2;
    g->edx = sp1 - 0x1110u;
    g->esp = sp1 - 0x1140u;
    t27 = cow_thiscall_cdecl(g, rd32(arg1 + 0x36d4u), sp1 - 0x1000u, 4, arg2, eax, sp1 - 0x1110u, sp1 - 0x1000u);
    t28 = g->ecx;
    t29 = g->edx;
    if ((int32_t)(edi - 4u) >= 0)
    {
        eax = t27;
        ecx = t28;
    }
    else
    {
        eax = t27;
        edx = t29;
        edi = edi - 4u;
    COW_AT(102cefeb)
        edi = edi + 4u;
L_102cefee: ;
    COW_AT(102cefee)
        wr32(sp1 - 0x1144u, edi);
        wr32(sp1 - 0x1148u, arg2);
        g->eax = eax;
        g->ecx = arg2;
        g->edx = edx;
        g->esp = sp1 - 0x1138u;
        t30 = cow_cdecl(g, COW_IMG(0x102cf240u), 4, arg2, edi, rd32(sp1 - 0x1140u), rd32(sp1 - 0x113cu));
        t31 = g->ecx;
        t32 = g->edx;
        if ((int32_t)(edi + 1u) < 4)
        {
            eax = t30;
            edx = t32;
            edi = edi + 1u;
            goto L_102cefee;
        }
        eax = t30;
        ecx = t31;
    }
    COW_AT(102cf001)
    if (rd32(arg2) == 0u) goto L_102cf06b;
    COW_AT(102cf009)
    wr32(sp1 - 0x1144u, arg1);
    g->esp = sp1 - 0x1100u;
    cow_bridge_indirect(g, COW_IMG(0x102cf0a0u), 0u, 17u, (const uint32_t[]){arg1, rd32(sp1 - 0x1140u), rd32(sp1 - 0x113cu), rd32(sp1 - 0x1138u), rd32(sp1 - 0x1134u), rd32(sp1 - 0x1130u), rd32(sp1 - 0x112cu), rd32(sp1 - 0x1128u), rd32(sp1 - 0x1124u), rd32(sp1 - 0x1120u), rd32(sp1 - 0x111cu), rd32(sp1 - 0x1118u), rd32(sp1 - 0x1114u), rd32(sp1 - 0x1110u), rd32(sp1 - 0x110cu), rd32(sp1 - 0x1108u), rd32(sp1 - 0x1104u)}, g->ecx, g->edx, g->eax, 68u);
    t33 = rd32(sp1 - 0x1128u);
    esi = arg1;
    edi = arg1 + 0x18u;
    ecx = 6u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t34 = rd32(arg1 + 0x3cu);
    wr32(arg1 + 0x14u, t33);
    t35 = COW_IMG(0x10344408u) + (uint32_t)((int32_t)rd8(t34) >> 4u) * 8u;
    t36 = rd8(t34);
    wr32(arg1 + 0x10u, t35);
    eax = rd8(t34 + 1u) >> 4u | (uint32_t)((int32_t)(t36 << 8u) >> 4u);
    edx = 3u;
L_102cf051: ;
    COW_AT(102cf051)
    if ((eax & 3u) == 2u) goto L_102cf085;
    ecx = eax & 3u;
    COW_AT(102cf05b)
    t37 = COW_IMG(0x103443f0u) + ecx * 4u;
    wr32(arg1 + edx * 4u, t37);
    if ((int32_t)(edx - 1u) >= 0)
    {
        eax = (uint32_t)((int32_t)eax >> 2u);
        edx = edx - 1u;
        goto L_102cf051;
    }
L_102cf06b: ;
    COW_AT(102cf06b)
    esi = sp1 - 0x1100u;
    edi = arg2 + 0x1a40u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->esi = rd32(sp1 - 0x113cu);
    g->edi = rd32(sp1 - 0x1140u);
    g->ebp = rd32(sp0 - 4u);
    return;
L_102cef03: ;
    COW_AT(102cef03)
    wr32(sp1 - 0x10bcu, 4u);
    wr32(sp1 - 0x10c0u, 0xffu);
L_102cef11: ;
    COW_AT(102cef11)
    wr32(sp1 - 0x107cu, 4u);
    wr32(sp1 - 0x1080u, 0xffu);
L_102cef1f: ;
    COW_AT(102cef1f)
    wr32(sp1 - 0x103cu, 4u);
    wr32(sp1 - 0x1040u, 0xffu);
    goto L_102cef2d;
L_102cf085: ;
    COW_AT(102cf085)
    t38 = (rd32(arg1 + 0x44u) & 0xffffff00u) | (uint8_t)(rd32(arg1 + 0x44u) | 2u);
    t39 = rd32(sp1 - 0x1140u);
    wr32(arg1 + 0x44u, t38);
    g->esi = rd32(sp1 - 0x113cu);
    g->edi = t39;
    g->ebp = rd32(sp0 - 4u);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102ced70(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    const uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff0u;
    switch (at)
    {
    case 0x102ceda5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp1 - 0x1140u);
        in_esi = rd32(sp1 - 0x113cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x1140u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102cedc1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp1 - 0x1140u);
        in_esi = rd32(sp1 - 0x113cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x1140u;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102cedcfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp1 - 0x1140u);
        in_esi = rd32(sp1 - 0x113cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x1140u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102cedf6u:
    {
        uint32_t al_m1128;
        uint32_t al_m113c;
        uint32_t al_m1140;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m1140 = rd32(sp1 - 0x1140u);
        al_m113c = rd32(sp1 - 0x113cu);
        al_m1128 = rd32(sp1 - 0x1128u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0x1140u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102cee03u:
    {
        uint32_t al_m1128;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp1 - 0x1140u);
        in_esi = rd32(sp1 - 0x113cu);
        al_m1128 = rd32(sp1 - 0x1128u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x1140u;
        g->ecx = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102cee0au:
    {
        uint32_t al_m1128;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp1 - 0x1140u);
        in_esi = rd32(sp1 - 0x113cu);
        al_m1128 = rd32(sp1 - 0x1128u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x1140u;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102cee2bu:
    {
        uint32_t al_m1114;
        uint32_t al_m1118;
        uint32_t al_m111c;
        uint32_t al_m1120;
        uint32_t al_m1124;
        uint32_t al_m1128;
        uint32_t al_m112c;
        uint32_t al_m113c;
        uint32_t al_m1140;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        al_m1140 = rd32(sp1 - 0x1140u);
        al_m113c = rd32(sp1 - 0x113cu);
        al_m112c = rd32(sp1 - 0x112cu);
        al_m1128 = rd32(sp1 - 0x1128u);
        al_m1124 = rd32(sp1 - 0x1124u);
        al_m1120 = rd32(sp1 - 0x1120u);
        al_m111c = rd32(sp1 - 0x111cu);
        al_m1118 = rd32(sp1 - 0x1118u);
        al_m1114 = rd32(sp1 - 0x1114u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0x1140u;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102cee46u:
    {
        uint32_t al_m1114;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        al_m1114 = rd32(sp1 - 0x1114u);
        g->esp = sp1 - 0x1140u;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        wr32(sp1 - 0x1120u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102cee55u:
    {
        uint32_t al_m1114;
        uint32_t al_m1120;
        uint32_t al_m112c;
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
        al_m112c = rd32(sp1 - 0x112cu);
        al_m1120 = rd32(sp1 - 0x1120u);
        al_m1114 = rd32(sp1 - 0x1114u);
        g->esp = sp1 - 0x1140u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102cee8eu:
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
        g->esp = sp1 - 0x1140u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102cee97u:
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
        g->esp = sp1 - 0x1140u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ceea7u:
    {
        uint32_t al_m1120;
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
        al_m1120 = rd32(sp1 - 0x1120u);
        g->esp = sp1 - 0x1140u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ceeb3u:
    {
        uint32_t al_m1114;
        uint32_t al_m1120;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        al_m1120 = rd32(sp1 - 0x1120u);
        al_m1114 = rd32(sp1 - 0x1114u);
        g->esp = sp1 - 0x1140u;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ceef8u:
    {
        uint32_t al_m1114;
        uint32_t al_m1118;
        uint32_t al_m111c;
        uint32_t al_m1120;
        uint32_t al_m1124;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t esi;
        eax = g->eax;
        esi = g->esi;
        al_m1124 = rd32(sp1 - 0x1124u);
        al_m1120 = rd32(sp1 - 0x1120u);
        al_m111c = rd32(sp1 - 0x111cu);
        al_m1118 = rd32(sp1 - 0x1118u);
        al_m1114 = rd32(sp1 - 0x1114u);
        g->esp = sp1 - 0x1140u;
        g->ecx = 0xffu;
        g->edx = 4u;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ceefbu:
    {
        uint32_t al_m1114;
        uint32_t al_m1118;
        uint32_t al_m111c;
        uint32_t al_m1120;
        uint32_t al_m1124;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t esi;
        eax = g->eax;
        esi = g->esi;
        al_m1124 = rd32(sp1 - 0x1124u);
        al_m1120 = rd32(sp1 - 0x1120u);
        al_m111c = rd32(sp1 - 0x111cu);
        al_m1118 = rd32(sp1 - 0x1118u);
        al_m1114 = rd32(sp1 - 0x1114u);
        g->esp = sp1 - 0x1140u;
        g->ecx = 0xffu;
        g->edx = 4u;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ceefeu:
    {
        uint32_t al_m1114;
        uint32_t al_m1118;
        uint32_t al_m111c;
        uint32_t al_m1120;
        uint32_t al_m1124;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t esi;
        eax = g->eax;
        esi = g->esi;
        al_m1124 = rd32(sp1 - 0x1124u);
        al_m1120 = rd32(sp1 - 0x1120u);
        al_m111c = rd32(sp1 - 0x111cu);
        al_m1118 = rd32(sp1 - 0x1118u);
        al_m1114 = rd32(sp1 - 0x1114u);
        g->esp = sp1 - 0x1140u;
        g->ecx = 0xffu;
        g->edx = 4u;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102cef01u:
    {
        uint32_t al_m1114;
        uint32_t al_m1118;
        uint32_t al_m111c;
        uint32_t al_m1120;
        uint32_t al_m1124;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t esi;
        eax = g->eax;
        esi = g->esi;
        al_m1124 = rd32(sp1 - 0x1124u);
        al_m1120 = rd32(sp1 - 0x1120u);
        al_m111c = rd32(sp1 - 0x111cu);
        al_m1118 = rd32(sp1 - 0x1118u);
        al_m1114 = rd32(sp1 - 0x1114u);
        g->esp = sp1 - 0x1140u;
        g->ecx = 0xffu;
        g->edx = 4u;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102cef03u:
    {
        uint32_t al_m1114;
        uint32_t al_m1118;
        uint32_t al_m111c;
        uint32_t al_m1120;
        uint32_t al_m1124;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t esi;
        eax = g->eax;
        esi = g->esi;
        al_m1124 = rd32(sp1 - 0x1124u);
        al_m1120 = rd32(sp1 - 0x1120u);
        al_m111c = rd32(sp1 - 0x111cu);
        al_m1118 = rd32(sp1 - 0x1118u);
        al_m1114 = rd32(sp1 - 0x1114u);
        g->esp = sp1 - 0x1140u;
        g->ecx = 0xffu;
        g->edx = 4u;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102cef11u:
    {
        uint32_t al_m1114;
        uint32_t al_m1118;
        uint32_t al_m111c;
        uint32_t al_m1120;
        uint32_t al_m1124;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t esi;
        eax = g->eax;
        esi = g->esi;
        al_m1124 = rd32(sp1 - 0x1124u);
        al_m1120 = rd32(sp1 - 0x1120u);
        al_m111c = rd32(sp1 - 0x111cu);
        al_m1118 = rd32(sp1 - 0x1118u);
        al_m1114 = rd32(sp1 - 0x1114u);
        g->esp = sp1 - 0x1140u;
        g->ecx = 0xffu;
        g->edx = 4u;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102cef1fu:
    {
        uint32_t al_m1114;
        uint32_t al_m1118;
        uint32_t al_m111c;
        uint32_t al_m1120;
        uint32_t al_m1124;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t esi;
        eax = g->eax;
        esi = g->esi;
        al_m1124 = rd32(sp1 - 0x1124u);
        al_m1120 = rd32(sp1 - 0x1120u);
        al_m111c = rd32(sp1 - 0x111cu);
        al_m1118 = rd32(sp1 - 0x1118u);
        al_m1114 = rd32(sp1 - 0x1114u);
        g->esp = sp1 - 0x1140u;
        g->ecx = 0xffu;
        g->edx = 4u;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102cef2du:
    {
        uint32_t al_m1114;
        uint32_t al_m1118;
        uint32_t al_m111c;
        uint32_t al_m1120;
        uint32_t al_m1124;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t esi;
        eax = g->eax;
        esi = g->esi;
        al_m1124 = rd32(sp1 - 0x1124u);
        al_m1120 = rd32(sp1 - 0x1120u);
        al_m111c = rd32(sp1 - 0x111cu);
        al_m1118 = rd32(sp1 - 0x1118u);
        al_m1114 = rd32(sp1 - 0x1114u);
        g->esp = sp1 - 0x1140u;
        g->ecx = 0xffu;
        g->edx = 4u;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102cef3cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp1 - 0x1140u;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102cef5cu:
    {
        uint32_t al_m112c;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        al_m112c = rd32(sp1 - 0x112cu);
        g->esp = sp1 - 0x1140u;
        g->ebp = sp0 - 4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102cef86u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp1 - 0x1140u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102cef8au:
    {
        uint32_t al_m112c;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m112c = rd32(sp1 - 0x112cu);
        g->esp = sp1 - 0x1140u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102cef9fu:
    {
        uint32_t al_m112c;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m112c = rd32(sp1 - 0x112cu);
        g->esp = sp1 - 0x1140u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102cefa1u:
    {
        uint32_t al_m112c;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m112c = rd32(sp1 - 0x112cu);
        g->esp = sp1 - 0x1140u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102cefbau:
    {
        uint32_t al_m112c;
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
        al_m112c = rd32(sp1 - 0x112cu);
        g->esp = sp1 - 0x1140u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102cefc8u:
    {
        uint32_t al_m112c;
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
        al_m112c = rd32(sp1 - 0x112cu);
        g->esp = sp1 - 0x1140u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102cefebu:
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
        g->esp = sp1 - 0x1140u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102cefeeu:
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
        g->esp = sp1 - 0x1140u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102cf001u:
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
        g->esp = sp1 - 0x1140u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102cf009u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        eax = g->eax;
        ecx = g->ecx;
        edi = g->edi;
        g->esp = sp1 - 0x1140u;
        g->edx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102cf051u:
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
        g->esp = sp1 - 0x1140u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102cf05bu:
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
        g->esp = sp1 - 0x1140u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102cf06bu:
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
        g->esp = sp1 - 0x1140u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102cf085u:
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
        g->esp = sp1 - 0x1140u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102ced70(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102ced70(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
