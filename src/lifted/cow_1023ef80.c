/* f_0x1023ef80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1023ef80(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10c;
    uint32_t loc_110;
    uint32_t loc_114;
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
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 320u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1023efb5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x114u); in_esi = rd32(sp0 - 0x110u); in_ebx = rd32(sp0 - 0x10cu); g->ebx = rd32(sp0 - 0x10cu); g->edi = rd32(sp0 - 0x114u); g->esi = rd32(sp0 - 0x110u); goto E_1023efb5;
    case 0x1023efbeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1023efbe;
    case 0x1023efc5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1023efc5;
    case 0x1023efd4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1023efd4;
    case 0x1023efd9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1023efd9;
    case 0x1023efdeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1023efde;
    case 0x1023efe2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1023efe2;
    case 0x1023eff3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1023eff3;
    case 0x1023eff8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1023eff8;
    case 0x1023f015u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_114 = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_10c = rd32(sp0 - 0x10cu); goto E_1023f015;
    case 0x1023f01cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_114 = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_10c = rd32(sp0 - 0x10cu); goto E_1023f01c;
    case 0x1023f026u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_114 = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_10c = rd32(sp0 - 0x10cu); goto E_1023f026;
    case 0x1023f02du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_114 = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_10c = rd32(sp0 - 0x10cu); goto E_1023f02d;
    case 0x1023f02fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_114 = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_10c = rd32(sp0 - 0x10cu); goto E_1023f02f;
    case 0x1023f03bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_114 = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_10c = rd32(sp0 - 0x10cu); goto E_1023f03b;
    case 0x1023f047u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_114 = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_10c = rd32(sp0 - 0x10cu); goto E_1023f047;
    case 0x1023f04du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_114 = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_10c = rd32(sp0 - 0x10cu); goto E_1023f04d;
    case 0x1023f054u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_114 = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_10c = rd32(sp0 - 0x10cu); goto E_1023f054;
    case 0x1023f059u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_114 = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_10c = rd32(sp0 - 0x10cu); goto E_1023f059;
    case 0x1023f062u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_114 = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_10c = rd32(sp0 - 0x10cu); goto E_1023f062;
    case 0x1023f067u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_114 = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_10c = rd32(sp0 - 0x10cu); goto E_1023f067;
    case 0x1023f070u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_114 = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_10c = rd32(sp0 - 0x10cu); goto E_1023f070;
    case 0x1023f076u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_114 = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_10c = rd32(sp0 - 0x10cu); goto E_1023f076;
    case 0x1023f086u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_114 = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_10c = rd32(sp0 - 0x10cu); goto E_1023f086;
    case 0x1023f08bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_114 = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_10c = rd32(sp0 - 0x10cu); goto E_1023f08b;
    case 0x1023f090u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_114 = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_10c = rd32(sp0 - 0x10cu); goto E_1023f090;
    case 0x1023f098u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_114 = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_10c = rd32(sp0 - 0x10cu); goto E_1023f098;
    case 0x1023f121u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_114 = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_10c = rd32(sp0 - 0x10cu); goto E_1023f121;
    case 0x1023f1a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1023f1a9;
    case 0x1023f1aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1023f1ae;
    case 0x1023f1bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1023f1bf;
    case 0x1023f209u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1023f209;
    case 0x1023f20cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1023f20c;
    case 0x1023f20eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1023f20e;
    case 0x1023f219u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1023f219;
    case 0x1023f233u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1023f233;
    case 0x1023f23eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1023f23e;
    case 0x1023f258u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1023f258;
    case 0x1023f260u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1023f260;
    default: break;
    }
#endif

    COW_AT(1023ef80)
    wr32(sp0 - 0x10cu, in_ebx);
    wr32(sp0 - 0x110u, in_esi);
    wr32(sp0 - 0x114u, in_edi);
    wr32(sp0 - 0x118u, sp0 - 0x108u);
    t1 = rd32(self + 8u);
    wr16(sp0 - 0x108u, 0u);
    wr16(sp0 - 0x106u, 0u);
    wr16(sp0 - 0x104u, 0u);
    wr16(sp0 - 0x102u, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 0x114u;
    t2 = cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 0x108u, t1, g->edx, 0, 1, sp0 - 0x108u);
    t3 = g->edx;
    if (rd32(self + 8u) == 0u)
    {
        edx = t3;
        loc_10c = in_ebx;
        loc_110 = in_esi;
        loc_114 = in_edi;
    }
    else
    {
        eax = t2;
        ecx = rd32(self + 8u);
        edx = t3;
    COW_AT(1023efb5)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x114u;
        t4 = cow_thiscall(g, COW_IMG(0x10118220u), ecx, 0);
        t5 = g->edx;
        if (t4 == 0u)
        {
            edx = t5;
            loc_10c = in_ebx;
            loc_110 = in_esi;
            loc_114 = in_edi;
        }
        else
        {
            eax = t4;
            edx = t5;
    COW_AT(1023efbe)
            if (rd32(eax + 4u) == 0u)
            {
                loc_10c = rd32(sp0 - 0x10cu);
                loc_110 = rd32(sp0 - 0x110u);
                loc_114 = rd32(sp0 - 0x114u);
            }
            else
            {
                ecx = rd32(eax + 4u);
    COW_AT(1023efc5)
                if ((rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) & 0x80u) == 0u)
                {
                    eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
                    goto L_1023efde;
                }
                eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    COW_AT(1023efd4)
                if (eax == 2u) goto L_1023efe2;
    COW_AT(1023efd9)
                if (eax == 3u) goto L_1023efe2;
L_1023efde: ;
    COW_AT(1023efde)
                if (eax == 0u) goto L_1023eff3;
L_1023efe2: ;
    COW_AT(1023efe2)
                wr32(ecx + 4u, 0x20u);
                edx = (uint32_t)(int16_t)rd16(sp0 - 0x106u) - 8u;
L_1023eff8: ;
    COW_AT(1023eff8)
                wr32(sp0 - 0x118u, 0u);
                wr32(sp0 - 0x11cu, 0u);
                wr32(sp0 - 0x120u, 0x80808080u);
                wr32(sp0 - 0x124u, 0x3f800000u);
                wr32(sp0 - 0x128u, 0x3f800000u);
                wr32(sp0 - 0x12cu, edx);
                t6 = (uint32_t)(int16_t)rd16(sp0 - 0x108u);
                wr32(sp0 - 0x130u, t6);
                g->edx = edx;
                g->esp = sp0 - 0x114u;
                cow_thiscall(g, COW_IMG(0x10234ab0u), ecx, 7, t6, edx, 0x3f800000u, 0x3f800000u, 0x80808080u, 0u, 0u);
                t7 = g->edx;
                edx = t7;
                loc_10c = rd32(sp0 - 0x10cu);
                loc_110 = rd32(sp0 - 0x110u);
                loc_114 = rd32(sp0 - 0x114u);
            }
        }
    }
    COW_AT(1023f015)
    if (rd32(self + 8u) != 0u)
    {
        eax = rd32(self + 8u);
    COW_AT(1023f01c)
        if (rd32(eax + 0x88u) != 0u)
        {
            eax = rd32(eax + 0x88u);
    COW_AT(1023f026)
            g->edx = edx;
            g->esp = sp0 - 0x114u;
            cow_thiscall(g, COW_IMG(0x10234680u), eax, 0);
            t8 = g->edx;
            edx = t8;
            loc_10c = rd32(sp0 - 0x10cu);
            loc_110 = rd32(sp0 - 0x110u);
            loc_114 = rd32(sp0 - 0x114u);
        }
    }
    COW_AT(1023f02d)
    eax = 0u;
L_1023f02f: ;
    COW_AT(1023f02f)
    if (rd32(rd32(COW_IMG(0x10669024u) + eax * 4u) + 8u) != 0u) goto L_1023f04d;
    COW_AT(1023f03b)
    if (rd32(rd32(COW_IMG(0x10669030u) + eax * 4u) + 8u) != 0u)
    {
        edx = rd32(COW_IMG(0x10669030u) + eax * 4u);
        goto L_1023f04d;
    }
    edx = rd32(COW_IMG(0x10669030u) + eax * 4u);
    COW_AT(1023f047)
    if ((int32_t)(eax + 1u) < 3)
    {
        eax = eax + 1u;
        goto L_1023f02f;
    }
    eax = eax + 1u;
L_1023f04d: ;
    COW_AT(1023f04d)
    if ((int32_t)rd32(self + 0x24u) >= 0)
    {
        ecx = rd32(self + 0x24u);
    COW_AT(1023f054)
        if ((int32_t)ecx < 64)
        {
    COW_AT(1023f059)
            t9 = rd32(self + 0xc40u);
            wr32(t9 + 0x14u, ecx);
            edx = t9;
        }
    }
    COW_AT(1023f062)
    if (eax == 3u)
    {
    COW_AT(1023f070)
        wr8(rd32(self + 8u) + 0x74u, 0u);
    }
    else
    {
    COW_AT(1023f067)
        wr8(rd32(self + 8u) + 0x74u, 1u);
    }
    COW_AT(1023f076)
    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        edx = (edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
        goto L_1023f090;
    }
    eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    edx = (edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
    COW_AT(1023f086)
    if (eax == 2u) goto L_1023f098;
    COW_AT(1023f08b)
    if (eax == 3u) goto L_1023f098;
L_1023f090: ;
    COW_AT(1023f090)
    if (eax == 0u) goto L_1023f121;
L_1023f098: ;
    COW_AT(1023f098)
    t10 = rd32(self + 0x18u);
    wr32(sp0 - 0x118u, t10);
    t11 = rd32(self + 0x14u);
    wr32(sp0 - 0x11cu, t11);
    wr32(sp0 - 0x120u, t10 + t11);
    wr32(sp0 - 0x124u, 0x2au);
    wr32(sp0 - 0x128u, 0xau);
    g->eax = t10;
    g->ecx = t10 + t11;
    g->esp = sp0 - 0x120u;
    t12 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x2au);
    t13 = g->ecx;
    wr32(sp0 - 0x124u, t12);
    wr32(sp0 - 0x128u, sp0 - 0x100u);
    g->ebx = 0u;
    g->esp = sp0 - 0x114u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, t12, rd32(sp0 - 0x120u), rd32(sp0 - 0x11cu), rd32(sp0 - 0x118u));
    wr32(sp0 - 0x12cu, 0x80808080u);
    wr32(sp0 - 0x130u, sp0 - 0x100u);
    t14 = rd32(sp0 - 0x106u) - 4u;
    wr32(sp0 - 0x134u, t14);
    t15 = rd32(sp0 - 0x108u) + 4u;
    wr32(sp0 - 0x138u, t15);
    g->ecx = t14;
    g->edx = t15;
    cow_cdecl(g, COW_IMG(0x101c9780u), 9, t15, t14, sp0 - 0x100u, 0x80808080u, sp0 - 0x100u, rd32(sp0 - 0x124u), rd32(sp0 - 0x120u), rd32(sp0 - 0x11cu), rd32(sp0 - 0x118u));
    t16 = g->ecx;
    t17 = g->edx;
    t18 = rd32(self + 0x34u);
    wr32(sp0 - 0x118u, t18);
    wr32(sp0 - 0x11cu, 0xccu);
    wr32(sp0 - 0x120u, 8u);
    g->eax = t18;
    g->edx = t17;
    g->esp = sp0 - 0x118u;
    t19 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0xccu);
    t20 = g->edx;
    wr32(sp0 - 0x11cu, t19);
    wr32(sp0 - 0x120u, sp0 - 0x100u);
    g->ebx = 0u;
    g->esp = sp0 - 0x10cu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, t19, rd32(sp0 - 0x118u), rd32(sp0 - 0x114u), rd32(sp0 - 0x110u));
    wr32(sp0 - 0x124u, 0x80808080u);
    wr32(sp0 - 0x128u, sp0 - 0x100u);
    t21 = rd32(sp0 - 0x106u) + 8u;
    wr32(sp0 - 0x12cu, t21);
    t22 = rd32(sp0 - 0x108u) + 4u;
    wr32(sp0 - 0x130u, t22);
    g->eax = t21;
    g->edx = sp0 - 0x100u;
    t23 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, t22, t21, sp0 - 0x100u, 0x80808080u, sp0 - 0x100u, rd32(sp0 - 0x11cu), rd32(sp0 - 0x118u), rd32(sp0 - 0x114u), rd32(sp0 - 0x110u));
    t24 = g->edx;
    eax = t23;
    edx = t24;
L_1023f1a9: ;
    COW_AT(1023f1a9)
    if (rd32(self + 0x2cu) == 0u)
    {
    COW_AT(1023f1ae)
        if (rd32(rd32(COW_IMG(0x10669024u) + rd32(self + 0x28u) * 4u) + 8u) == 0u)
        {
            eax = rd32(COW_IMG(0x10669024u) + rd32(self + 0x28u) * 4u);
            edx = rd32(self + 0x28u);
        }
        else
        {
            eax = rd32(COW_IMG(0x10669024u) + rd32(self + 0x28u) * 4u);
            ecx = rd32(rd32(COW_IMG(0x10669024u) + rd32(self + 0x28u) * 4u) + 8u);
    COW_AT(1023f1bf)
            wr32(sp0 - 0x118u, sp0 - 0x108u);
            g->edx = sp0 - 0x108u;
            g->esp = sp0 - 0x114u;
            t40 = cow_call_regs(g, COW_IMG(0x10118f70u), eax, ecx, g->edx, 0, 1, sp0 - 0x108u);
            t41 = g->edx;
            wr32(sp0 - 0x118u, COW_IMG(0x1037d46cu));
            t42 = cow_thiscall(g, COW_IMG(0x10120450u), COW_IMG(0x104e1bf8u), 1, COW_IMG(0x1037d46cu));
            wr32(sp0 - 0x118u, 0u);
            wr32(sp0 - 0x11cu, 0u);
            wr32(sp0 - 0x120u, 0x80808080u);
            t43 = (uint32_t)(int16_t)rd16(sp0 - 0x106u);
            wr32(sp0 - 0x124u, t43);
            t44 = (uint32_t)(int16_t)rd16(sp0 - 0x108u) + 6u;
            wr32(sp0 - 0x128u, t44);
            t45 = cow_divu(g, rd32(self + 0x1cu) >> 2u, 6u);
            t46 = cow_modu(g, rd32(self + 0x1cu) >> 2u, 6u);
            g->eax = rd32(t42);
            g->edx = t46;
            t47 = rd32(t42);
            t48 = cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(t46 * 4u + t47), 5, t44, t43, 0x80808080u, 0u, 0u);
            t49 = g->edx;
            eax = t48;
            edx = t49;
        }
    COW_AT(1023f209)
        wr32(self + 0x1cu, rd32(self + 0x1cu) + 1u);
    }
    COW_AT(1023f20c)
    edi = 0u;
L_1023f20e: ;
    COW_AT(1023f20e)
    if (rd32(rd32(COW_IMG(0x10669024u) + edi) + 8u) != 0u)
    {
    COW_AT(1023f219)
        t50 = rd32(self + 8u);
        wr32(sp0 - 0x118u, t50);
        g->esp = sp0 - 0x114u;
        t51 = cow_call_regs(g, COW_IMG(0x1015edd0u), eax, COW_IMG(0x10621838u), g->edx, 0, 1, t50);
        t52 = rd32(rd32(COW_IMG(0x10669024u) + edi) + 8u);
        wr8(t52 + 0x6bu, (uint8_t)t51);
        edx = t52;
    }
    COW_AT(1023f233)
    if (rd32(rd32(COW_IMG(0x10669030u) + edi) + 8u) == 0u)
    {
        eax = rd32(COW_IMG(0x10669030u) + edi);
    }
    else
    {
        eax = rd32(COW_IMG(0x10669030u) + edi);
    COW_AT(1023f23e)
        t53 = rd32(self + 8u);
        wr32(sp0 - 0x118u, t53);
        g->esp = sp0 - 0x114u;
        t54 = cow_call_regs(g, COW_IMG(0x1015edd0u), eax, COW_IMG(0x10621838u), g->edx, 0, 1, t53);
        t55 = rd32(COW_IMG(0x10669030u) + edi);
        wr8(rd32(t55 + 8u) + 0x6bu, (uint8_t)t54);
        eax = t54;
        edx = t55;
    }
    COW_AT(1023f258)
    if ((int32_t)(edi + 4u) < 12)
    {
        edi = edi + 4u;
        goto L_1023f20e;
    }
    COW_AT(1023f260)
    t56 = rd32(self + 8u);
    t57 = rd32(sp0 - 0x10cu);
    t58 = rd32(sp0 - 0x110u);
    t59 = rd32(sp0 - 0x114u);
    wr16(t56 + 0x40u, 0xecu);
    g->ebx = t57;
    g->esi = t58;
    g->edi = t59;
    g->edx = t56;
    return eax;
L_1023eff3: ;
    COW_AT(1023eff3)
    edx = (uint32_t)(int16_t)rd16(sp0 - 0x106u);
    goto L_1023eff8;
L_1023f121: ;
    COW_AT(1023f121)
    t25 = rd32(self + 0x18u);
    wr32(sp0 - 0x118u, t25);
    t26 = rd32(self + 0x14u);
    wr32(sp0 - 0x11cu, t26);
    wr32(sp0 - 0x120u, t25 + t26);
    wr32(sp0 - 0x124u, 0x2au);
    wr32(sp0 - 0x128u, 0xau);
    g->eax = t25;
    g->ecx = t25 + t26;
    g->esp = sp0 - 0x120u;
    t27 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x2au);
    t28 = g->ecx;
    wr32(sp0 - 0x124u, t27);
    wr32(sp0 - 0x128u, sp0 - 0x100u);
    g->ebx = 0u;
    g->esp = sp0 - 0x114u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, t27, rd32(sp0 - 0x120u), rd32(sp0 - 0x11cu), rd32(sp0 - 0x118u));
    wr32(sp0 - 0x12cu, 0x80808080u);
    wr32(sp0 - 0x130u, 0u);
    wr32(sp0 - 0x134u, sp0 - 0x100u);
    t29 = (uint32_t)(int16_t)rd16(sp0 - 0x106u) + 6u;
    wr32(sp0 - 0x138u, t29);
    t30 = (uint32_t)(int16_t)rd16(sp0 - 0x108u) + 0x55u;
    wr32(sp0 - 0x13cu, t30);
    g->ecx = t29;
    g->edx = t30;
    g->esp = sp0 - 0x110u;
    cow_cdecl(g, COW_IMG(0x10129f00u), 11, t30, t29, sp0 - 0x100u, 0u, 0x80808080u, sp0 - 0x100u, rd32(sp0 - 0x124u), rd32(sp0 - 0x120u), rd32(sp0 - 0x11cu), rd32(sp0 - 0x118u), rd32(sp0 - 0x114u));
    t31 = g->ecx;
    t32 = g->edx;
    t33 = rd32(self + 0x34u);
    wr32(sp0 - 0x118u, t33);
    wr32(sp0 - 0x11cu, 0xccu);
    wr32(sp0 - 0x120u, 8u);
    g->eax = t33;
    g->edx = t32;
    g->esp = sp0 - 0x118u;
    t34 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0xccu);
    t35 = g->edx;
    wr32(sp0 - 0x11cu, t34);
    wr32(sp0 - 0x120u, sp0 - 0x100u);
    g->ebx = 0u;
    g->esp = sp0 - 0x10cu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, t34, rd32(sp0 - 0x118u), rd32(sp0 - 0x114u), rd32(sp0 - 0x110u));
    wr32(sp0 - 0x124u, 0x80808080u);
    wr32(sp0 - 0x128u, 0u);
    wr32(sp0 - 0x12cu, sp0 - 0x100u);
    t36 = (uint32_t)(int16_t)rd16(sp0 - 0x106u) + 4u;
    wr32(sp0 - 0x130u, t36);
    t37 = (uint32_t)(int16_t)rd16(sp0 - 0x108u) + 1u;
    wr32(sp0 - 0x134u, t37);
    g->eax = t36;
    g->edx = sp0 - 0x100u;
    g->esp = sp0 - 0x108u;
    t38 = cow_cdecl(g, COW_IMG(0x10129f00u), 11, t37, t36, sp0 - 0x100u, 0u, 0x80808080u, sp0 - 0x100u, rd32(sp0 - 0x11cu), rd32(sp0 - 0x118u), rd32(sp0 - 0x114u), rd32(sp0 - 0x110u), rd32(sp0 - 0x10cu));
    t39 = g->edx;
    eax = t38;
    edx = t39;
    goto L_1023f1a9;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1023ef80(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1023efb5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x114u);
        in_esi = rd32(sp0 - 0x110u);
        in_ebx = rd32(sp0 - 0x10cu);
        g->esp = sp0 - 0x114u;
        g->ebx = 0u;
        wr32(sp0 - 0x118u, sp0 - 0x108u);
        (void)sp0;
        return 1;
    }
    case 0x1023efbeu:
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
        g->esp = sp0 - 0x114u;
        g->ebx = 0u;
        wr32(sp0 - 0x118u, sp0 - 0x108u);
        (void)sp0;
        return 1;
    }
    case 0x1023efc5u:
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
        g->esp = sp0 - 0x114u;
        g->ebx = 0u;
        wr32(sp0 - 0x118u, sp0 - 0x108u);
        (void)sp0;
        return 1;
    }
    case 0x1023efd4u:
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
        g->esp = sp0 - 0x114u;
        g->ebx = 0u;
        wr32(sp0 - 0x118u, sp0 - 0x108u);
        (void)sp0;
        return 1;
    }
    case 0x1023efd9u:
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
        g->esp = sp0 - 0x114u;
        g->ebx = 0u;
        wr32(sp0 - 0x118u, sp0 - 0x108u);
        (void)sp0;
        return 1;
    }
    case 0x1023efdeu:
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
        g->esp = sp0 - 0x114u;
        g->ebx = 0u;
        wr32(sp0 - 0x118u, sp0 - 0x108u);
        (void)sp0;
        return 1;
    }
    case 0x1023efe2u:
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
        g->esp = sp0 - 0x114u;
        g->ebx = 0u;
        wr32(sp0 - 0x118u, sp0 - 0x108u);
        (void)sp0;
        return 1;
    }
    case 0x1023eff3u:
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
        g->esp = sp0 - 0x114u;
        g->ebx = 0u;
        wr32(sp0 - 0x118u, sp0 - 0x108u);
        (void)sp0;
        return 1;
    }
    case 0x1023eff8u:
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
        g->esp = sp0 - 0x114u;
        g->ebx = 0u;
        wr32(sp0 - 0x118u, sp0 - 0x108u);
        (void)sp0;
        return 1;
    }
    case 0x1023f015u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10c;
        uint32_t loc_110;
        uint32_t loc_114;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_114 = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_10c = rd32(sp0 - 0x10cu);
        g->esp = sp0 - 0x114u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023f01cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10c;
        uint32_t loc_110;
        uint32_t loc_114;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_114 = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_10c = rd32(sp0 - 0x10cu);
        g->esp = sp0 - 0x114u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023f026u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10c;
        uint32_t loc_110;
        uint32_t loc_114;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_114 = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_10c = rd32(sp0 - 0x10cu);
        g->esp = sp0 - 0x114u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023f02du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10c;
        uint32_t loc_110;
        uint32_t loc_114;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_114 = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_10c = rd32(sp0 - 0x10cu);
        g->esp = sp0 - 0x114u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023f02fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10c;
        uint32_t loc_110;
        uint32_t loc_114;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_114 = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_10c = rd32(sp0 - 0x10cu);
        g->esp = sp0 - 0x114u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023f03bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10c;
        uint32_t loc_110;
        uint32_t loc_114;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_114 = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_10c = rd32(sp0 - 0x10cu);
        g->esp = sp0 - 0x114u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023f047u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10c;
        uint32_t loc_110;
        uint32_t loc_114;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_114 = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_10c = rd32(sp0 - 0x10cu);
        g->esp = sp0 - 0x114u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023f04du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10c;
        uint32_t loc_110;
        uint32_t loc_114;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_114 = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_10c = rd32(sp0 - 0x10cu);
        g->esp = sp0 - 0x114u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023f054u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10c;
        uint32_t loc_110;
        uint32_t loc_114;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_114 = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_10c = rd32(sp0 - 0x10cu);
        g->esp = sp0 - 0x114u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023f059u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10c;
        uint32_t loc_110;
        uint32_t loc_114;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_114 = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_10c = rd32(sp0 - 0x10cu);
        g->esp = sp0 - 0x114u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023f062u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10c;
        uint32_t loc_110;
        uint32_t loc_114;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_114 = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_10c = rd32(sp0 - 0x10cu);
        g->esp = sp0 - 0x114u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023f067u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10c;
        uint32_t loc_110;
        uint32_t loc_114;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_114 = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_10c = rd32(sp0 - 0x10cu);
        g->esp = sp0 - 0x114u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023f070u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10c;
        uint32_t loc_110;
        uint32_t loc_114;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_114 = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_10c = rd32(sp0 - 0x10cu);
        g->esp = sp0 - 0x114u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023f076u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10c;
        uint32_t loc_110;
        uint32_t loc_114;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_114 = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_10c = rd32(sp0 - 0x10cu);
        g->esp = sp0 - 0x114u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023f086u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10c;
        uint32_t loc_110;
        uint32_t loc_114;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_114 = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_10c = rd32(sp0 - 0x10cu);
        g->esp = sp0 - 0x114u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023f08bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10c;
        uint32_t loc_110;
        uint32_t loc_114;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_114 = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_10c = rd32(sp0 - 0x10cu);
        g->esp = sp0 - 0x114u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023f090u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10c;
        uint32_t loc_110;
        uint32_t loc_114;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_114 = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_10c = rd32(sp0 - 0x10cu);
        g->esp = sp0 - 0x114u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023f098u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10c;
        uint32_t loc_110;
        uint32_t loc_114;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_114 = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_10c = rd32(sp0 - 0x10cu);
        g->esp = sp0 - 0x114u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023f121u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10c;
        uint32_t loc_110;
        uint32_t loc_114;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_114 = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_10c = rd32(sp0 - 0x10cu);
        g->esp = sp0 - 0x114u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023f1a9u:
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
        g->esp = sp0 - 0x114u;
        g->ebx = 0u;
        wr32(sp0 - 0x120u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x1023f1aeu:
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
        g->esp = sp0 - 0x114u;
        g->ebx = 0u;
        wr32(sp0 - 0x120u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x1023f1bfu:
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
        g->esp = sp0 - 0x114u;
        g->ebx = 0u;
        wr32(sp0 - 0x120u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x1023f209u:
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
        g->esp = sp0 - 0x114u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023f20cu:
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
        g->esp = sp0 - 0x114u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023f20eu:
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
        g->esp = sp0 - 0x114u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023f219u:
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
        g->esp = sp0 - 0x114u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023f233u:
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
        g->esp = sp0 - 0x114u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023f23eu:
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
        g->esp = sp0 - 0x114u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023f258u:
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
        g->esp = sp0 - 0x114u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023f260u:
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
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1023ef80(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1023ef80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
