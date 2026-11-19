/* f_0x101f1fe0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101f1fe0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 28u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101f1ff7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_101f1ff7;
    case 0x101f1ffau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_101f1ffa;
    case 0x101f2001u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_101f2001;
    case 0x101f2041u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_101f2041;
    case 0x101f2078u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_101f2078;
    case 0x101f20b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_101f20b6;
    case 0x101f20c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_101f20c0;
    case 0x101f20deu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_101f20de;
    case 0x101f2101u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101f2101;
    case 0x101f210du: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101f210d;
    case 0x101f211au: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101f211a;
    case 0x101f2129u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101f2129;
    case 0x101f2130u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101f2130;
    case 0x101f2139u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101f2139;
    case 0x101f213fu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101f213f;
    case 0x101f2148u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101f2148;
    case 0x101f2151u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101f2151;
    case 0x101f215au: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101f215a;
    case 0x101f2163u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101f2163;
    case 0x101f216cu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101f216c;
    case 0x101f2175u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101f2175;
    case 0x101f217eu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101f217e;
    case 0x101f2187u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101f2187;
    case 0x101f2190u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101f2190;
    case 0x101f2199u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101f2199;
    case 0x101f21a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101f21a2;
    case 0x101f21abu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101f21ab;
    case 0x101f21b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101f21b4;
    case 0x101f21bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_14 = rd32(sp0 - 0x14u); goto E_101f21bb;
    case 0x101f21d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101f21d6;
    case 0x101f21e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101f21e1;
    case 0x101f21e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101f21e8;
    case 0x101f21ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101f21ec;
    case 0x101f21f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101f21f3;
    case 0x101f21f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101f21f7;
    case 0x101f21feu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101f21fe;
    case 0x101f2205u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101f2205;
    case 0x101f220cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101f220c;
    case 0x101f2213u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101f2213;
    case 0x101f221au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101f221a;
    case 0x101f2221u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101f2221;
    case 0x101f2228u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101f2228;
    case 0x101f222fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101f222f;
    case 0x101f2236u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101f2236;
    case 0x101f223du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101f223d;
    case 0x101f2244u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101f2244;
    case 0x101f224bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101f224b;
    case 0x101f2252u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101f2252;
    case 0x101f2254u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_10 = rd32(sp0 - 0x10u); goto E_101f2254;
    case 0x101f2267u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_14 = rd32(sp0 - 0x14u); goto E_101f2267;
    default: break;
    }
#endif

    COW_AT(101f1fe0)
    wr32(sp0 - 0xcu, in_esi);
    g->eax = rd32(rd32(self + 0x5cu));
    g->edx = in_edx;
    t1 = rd32(rd32(self + 0x5cu));
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, rd32(t1 + 4u), rd32(self + 0x5cu), 0);
    t3 = g->edx;
    if (t2 == 0u)
    {
        eax = t2;
    COW_AT(101f2078)
        wr32(sp0 - 0x10u, 0u);
        wr32(sp0 - 0x14u, 0u);
        wr32(sp0 - 0x18u, sp0 - 8u);
        wr32(sp0 - 8u, 0x10u);
        wr32(sp0 - 4u, 0x30u);
        g->edx = sp0 - 8u;
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, COW_IMG(0x101602f0u), COW_IMG(0x10621838u), 3, sp0 - 8u, 0u, 0u);
        t9 = g->edx;
        wr32(sp0 - 0x10u, 0x30u);
        wr32(sp0 - 0x14u, 0x10u);
        t10 = cow_call_regs(g, COW_IMG(0x10119110u), 0x30u, rd32(self + 8u), g->edx, 0, 2, 0x10u, 0x30u);
        t11 = rd32(self + 8u);
        wr16(t11 + 0x38u, 0x10u);
        eax = t10;
        edx = t11;
    }
    else
    {
        eax = t2;
        edx = t3;
    COW_AT(101f1ff7)
        if (eax == 1u)
        {
            eax = eax - 1u;
    COW_AT(101f2041)
            wr32(sp0 - 0x10u, 0u);
            wr32(sp0 - 0x14u, 0u);
            wr32(sp0 - 0x18u, sp0 - 8u);
            wr32(sp0 - 8u, 0xc8u);
            wr32(sp0 - 4u, 0x30u);
            g->edx = sp0 - 8u;
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, COW_IMG(0x101602f0u), COW_IMG(0x10621838u), 3, sp0 - 8u, 0u, 0u);
            t6 = g->edx;
            wr32(sp0 - 0x10u, 0x30u);
            wr32(sp0 - 0x14u, 0xc8u);
            g->edx = t6;
            t7 = cow_call_regs(g, COW_IMG(0x10119110u), 0x30u, rd32(self + 8u), g->edx, 0, 2, 0xc8u, 0x30u);
            t8 = g->edx;
            eax = t7;
            edx = t8;
        }
        else
        {
            eax = eax - 1u;
    COW_AT(101f1ffa)
            if (eax != 1u)
            {
                eax = eax - 1u;
            }
            else
            {
                eax = eax - 1u;
    COW_AT(101f2001)
                wr32(sp0 - 0x10u, 0u);
                wr32(sp0 - 0x14u, 0u);
                wr32(sp0 - 0x18u, sp0 - 8u);
                wr32(sp0 - 8u, 0x13au);
                wr32(sp0 - 4u, 0x30u);
                g->esp = sp0 - 0xcu;
                cow_thiscall(g, COW_IMG(0x101602f0u), COW_IMG(0x10621838u), 3, sp0 - 8u, 0u, 0u);
                wr32(sp0 - 0x10u, 0x30u);
                wr32(sp0 - 0x14u, 0x13au);
                g->edx = 0x30u;
                t4 = cow_call_regs(g, COW_IMG(0x10119110u), 0x13au, rd32(self + 8u), g->edx, 0, 2, 0x13au, 0x30u);
                t5 = g->edx;
                wr16(rd32(self + 8u) + 0x38u, 0x81u);
                eax = t4;
                edx = t5;
            }
        }
    }
    COW_AT(101f20b6)
    if (rd8(self + 0x91u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x91u);
    COW_AT(101f20c0)
        wr32(sp0 - 0x10u, COW_IMG(0x1037f018u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t12 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037f018u));
        t13 = g->edx;
        wr32(sp0 - 0x10u, COW_IMG(0x103820d0u));
        cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x103820d0u));
    }
    COW_AT(101f20de)
    t14 = rd32(self + 0x5cu);
    t15 = rd32(self + 8u);
    wr8(self + 0x91u, 0u);
    wr32(sp0 - 0x10u, t15);
    g->edx = t15;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, rd32(rd32(t14) + 0x24u), t14, 1, t15);
    t16 = g->edx;
    if (rd32(self + 0x5cu) == rd32(COW_IMG(0x1066346cu)))
    {
        eax = rd32(COW_IMG(0x1066346cu));
        ecx = rd32(self + 0x5cu);
        goto L_101f21d6;
    }
    eax = rd32(COW_IMG(0x1066346cu));
    ecx = rd32(self + 0x5cu);
    edx = t16;
    COW_AT(101f2101)
    if (ecx == rd32(COW_IMG(0x10663474u))) goto L_101f21d6;
    COW_AT(101f210d)
    if (rd32(COW_IMG(0x1057847cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x1057847cu));
        goto L_101f2267;
    }
    COW_AT(101f211a)
    g->eax = rd32(ecx);
    g->edx = edx;
    t17 = rd32(ecx);
    g->esp = sp0 - 0xcu;
    t18 = cow_thiscall(g, rd32(t17 + 0x54u), ecx, 0);
    t19 = g->ecx;
    t20 = g->edx;
    if (t18 - 1u > 0x10u)
    {
        eax = t18 - 1u;
        edx = t20;
        goto L_101f2267;
    }
    eax = t18 - 1u;
    ecx = t19;
    edx = t20;
    COW_AT(101f2129)
    t21 = rd32(COW_IMG(0x101f226cu) + eax * 4u);
    switch (t21 - RD)
    {
    case 0x101f2130u: goto L_101f2130;
    case 0x101f2139u: goto L_101f2139;
    case 0x101f213fu: goto L_101f213f;
    case 0x101f2148u: goto L_101f2148;
    case 0x101f2151u: goto L_101f2151;
    case 0x101f215au: goto L_101f215a;
    case 0x101f2163u: goto L_101f2163;
    case 0x101f216cu: goto L_101f216c;
    case 0x101f2175u: goto L_101f2175;
    case 0x101f217eu: goto L_101f217e;
    case 0x101f2187u: goto L_101f2187;
    case 0x101f2190u: goto L_101f2190;
    case 0x101f2199u: goto L_101f2199;
    case 0x101f21a2u: goto L_101f21a2;
    case 0x101f21abu: goto L_101f21ab;
    case 0x101f21b4u: goto L_101f21b4;
    case 0x101f2267u: goto L_101f2267;
    default: rt_fatal(g, COW_IMG(0x101f2129u), "switch");
    }
    return 0;
L_101f2130: ;
    COW_AT(101f2130)
    wr32(sp0 - 0x10u, 2u);
    wr32(sp0 - 0x14u, 3u);
    loc_14 = 3u;
L_101f21bb: ;
    COW_AT(101f21bb)
    wr32(sp0 - 0x18u, 0xdu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t22 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xdu, loc_14);
    t23 = g->edx;
    wr32(sp0 - 0x14u, t22);
    g->edx = t23;
    g->esp = sp0 - 0xcu;
    t24 = cow_thiscall(g, COW_IMG(0x10150cc0u), rd32(COW_IMG(0x1057847cu)), 2, t22, 2u);
    t25 = g->edx;
    g->esi = rd32(sp0 - 0xcu);
    g->edx = t25;
    return t24;
L_101f2139: ;
    COW_AT(101f2139)
    wr32(sp0 - 0x10u, 2u);
    wr32(sp0 - 0x14u, 0x25u);
    loc_14 = 0x25u;
    goto L_101f21bb;
L_101f213f: ;
    COW_AT(101f213f)
    wr32(sp0 - 0x10u, 2u);
    wr32(sp0 - 0x14u, 0x97u);
    loc_14 = 0x97u;
    goto L_101f21bb;
L_101f2148: ;
    COW_AT(101f2148)
    wr32(sp0 - 0x10u, 2u);
    wr32(sp0 - 0x14u, 0x9eu);
    loc_14 = 0x9eu;
    goto L_101f21bb;
L_101f2151: ;
    COW_AT(101f2151)
    wr32(sp0 - 0x10u, 2u);
    wr32(sp0 - 0x14u, 0xa6u);
    loc_14 = 0xa6u;
    goto L_101f21bb;
L_101f215a: ;
    COW_AT(101f215a)
    wr32(sp0 - 0x10u, 2u);
    wr32(sp0 - 0x14u, 0x8bu);
    loc_14 = 0x8bu;
    goto L_101f21bb;
L_101f2163: ;
    COW_AT(101f2163)
    wr32(sp0 - 0x10u, 2u);
    wr32(sp0 - 0x14u, 0xa8u);
    loc_14 = 0xa8u;
    goto L_101f21bb;
L_101f216c: ;
    COW_AT(101f216c)
    wr32(sp0 - 0x10u, 2u);
    wr32(sp0 - 0x14u, 0xb9u);
    loc_14 = 0xb9u;
    goto L_101f21bb;
L_101f2175: ;
    COW_AT(101f2175)
    wr32(sp0 - 0x10u, 2u);
    wr32(sp0 - 0x14u, 0xbau);
    loc_14 = 0xbau;
    goto L_101f21bb;
L_101f217e: ;
    COW_AT(101f217e)
    wr32(sp0 - 0x10u, 2u);
    wr32(sp0 - 0x14u, 0xbbu);
    loc_14 = 0xbbu;
    goto L_101f21bb;
L_101f2187: ;
    COW_AT(101f2187)
    wr32(sp0 - 0x10u, 2u);
    wr32(sp0 - 0x14u, 0xbfu);
    loc_14 = 0xbfu;
    goto L_101f21bb;
L_101f2190: ;
    COW_AT(101f2190)
    wr32(sp0 - 0x10u, 2u);
    wr32(sp0 - 0x14u, 0xc0u);
    loc_14 = 0xc0u;
    goto L_101f21bb;
L_101f2199: ;
    COW_AT(101f2199)
    wr32(sp0 - 0x10u, 2u);
    wr32(sp0 - 0x14u, 0xc1u);
    loc_14 = 0xc1u;
    goto L_101f21bb;
L_101f21a2: ;
    COW_AT(101f21a2)
    wr32(sp0 - 0x10u, 2u);
    wr32(sp0 - 0x14u, 0xc2u);
    loc_14 = 0xc2u;
    goto L_101f21bb;
L_101f21ab: ;
    COW_AT(101f21ab)
    wr32(sp0 - 0x10u, 2u);
    wr32(sp0 - 0x14u, 0xb5u);
    loc_14 = 0xb5u;
    goto L_101f21bb;
L_101f21b4: ;
    COW_AT(101f21b4)
    wr32(sp0 - 0x10u, 2u);
    wr32(sp0 - 0x14u, 0xc5u);
    loc_14 = 0xc5u;
    goto L_101f21bb;
L_101f21d6: ;
    COW_AT(101f21d6)
    g->eax = eax;
    g->edx = rd32(ecx);
    t26 = rd32(ecx);
    g->esp = sp0 - 0xcu;
    t27 = cow_thiscall(g, rd32(t26 + 0x54u), ecx, 0);
    t28 = g->ecx;
    t29 = g->edx;
    if (t27 - 1u > 0x10u)
    {
        eax = t27 - 1u;
        ecx = t28;
        edx = t29;
        goto L_101f2252;
    }
    eax = t27 - 1u;
    ecx = t28;
    edx = t29;
    COW_AT(101f21e1)
    t30 = rd32(COW_IMG(0x101f22b0u) + eax * 4u);
    switch (t30 - RD)
    {
    case 0x101f21e8u: goto L_101f21e8;
    case 0x101f21ecu: goto L_101f21ec;
    case 0x101f21f3u: goto L_101f21f3;
    case 0x101f21f7u: goto L_101f21f7;
    case 0x101f21feu: goto L_101f21fe;
    case 0x101f2205u: goto L_101f2205;
    case 0x101f220cu: goto L_101f220c;
    case 0x101f2213u: goto L_101f2213;
    case 0x101f221au: goto L_101f221a;
    case 0x101f2221u: goto L_101f2221;
    case 0x101f2228u: goto L_101f2228;
    case 0x101f222fu: goto L_101f222f;
    case 0x101f2236u: goto L_101f2236;
    case 0x101f223du: goto L_101f223d;
    case 0x101f2244u: goto L_101f2244;
    case 0x101f224bu: goto L_101f224b;
    case 0x101f2252u: goto L_101f2252;
    default: rt_fatal(g, COW_IMG(0x101f21e1u), "switch");
    }
    return 0;
L_101f21e8: ;
    COW_AT(101f21e8)
    wr32(sp0 - 0x10u, 3u);
    loc_10 = 3u;
L_101f2254: ;
    COW_AT(101f2254)
    wr32(sp0 - 0x14u, 0xdu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t31 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xdu, loc_10);
    t32 = g->edx;
    wr32(sp0 - 0x10u, t31);
    g->edx = t32;
    t33 = cow_thiscall(g, COW_IMG(0x1011ae30u), rd32(self + 8u), 1, t31);
    t34 = g->edx;
    eax = t33;
    edx = t34;
L_101f2267: ;
    COW_AT(101f2267)
    g->esi = rd32(sp0 - 0xcu);
    g->edx = edx;
    return eax;
L_101f21ec: ;
    COW_AT(101f21ec)
    wr32(sp0 - 0x10u, 0xb5u);
    loc_10 = 0xb5u;
    goto L_101f2254;
L_101f21f3: ;
    COW_AT(101f21f3)
    wr32(sp0 - 0x10u, 0x25u);
    loc_10 = 0x25u;
    goto L_101f2254;
L_101f21f7: ;
    COW_AT(101f21f7)
    wr32(sp0 - 0x10u, 0x8bu);
    loc_10 = 0x8bu;
    goto L_101f2254;
L_101f21fe: ;
    COW_AT(101f21fe)
    wr32(sp0 - 0x10u, 0x97u);
    loc_10 = 0x97u;
    goto L_101f2254;
L_101f2205: ;
    COW_AT(101f2205)
    wr32(sp0 - 0x10u, 0x9eu);
    loc_10 = 0x9eu;
    goto L_101f2254;
L_101f220c: ;
    COW_AT(101f220c)
    wr32(sp0 - 0x10u, 0xa6u);
    loc_10 = 0xa6u;
    goto L_101f2254;
L_101f2213: ;
    COW_AT(101f2213)
    wr32(sp0 - 0x10u, 0xa8u);
    loc_10 = 0xa8u;
    goto L_101f2254;
L_101f221a: ;
    COW_AT(101f221a)
    wr32(sp0 - 0x10u, 0xb9u);
    loc_10 = 0xb9u;
    goto L_101f2254;
L_101f2221: ;
    COW_AT(101f2221)
    wr32(sp0 - 0x10u, 0xbau);
    loc_10 = 0xbau;
    goto L_101f2254;
L_101f2228: ;
    COW_AT(101f2228)
    wr32(sp0 - 0x10u, 0xbbu);
    loc_10 = 0xbbu;
    goto L_101f2254;
L_101f222f: ;
    COW_AT(101f222f)
    wr32(sp0 - 0x10u, 0xbfu);
    loc_10 = 0xbfu;
    goto L_101f2254;
L_101f2236: ;
    COW_AT(101f2236)
    wr32(sp0 - 0x10u, 0xc0u);
    loc_10 = 0xc0u;
    goto L_101f2254;
L_101f223d: ;
    COW_AT(101f223d)
    wr32(sp0 - 0x10u, 0xc1u);
    loc_10 = 0xc1u;
    goto L_101f2254;
L_101f2244: ;
    COW_AT(101f2244)
    wr32(sp0 - 0x10u, 0xc2u);
    loc_10 = 0xc2u;
    goto L_101f2254;
L_101f224b: ;
    COW_AT(101f224b)
    wr32(sp0 - 0x10u, 0xc5u);
    loc_10 = 0xc5u;
    goto L_101f2254;
L_101f2252: ;
    COW_AT(101f2252)
    wr32(sp0 - 0x10u, 2u);
    loc_10 = 2u;
    goto L_101f2254;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101f1fe0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101f1ff7u:
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
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101f1ffau:
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
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101f2001u:
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
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101f2041u:
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
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101f2078u:
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
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101f20b6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101f20c0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101f20deu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101f2101u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101f210du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101f211au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101f2129u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101f2130u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101f2139u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101f213fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101f2148u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101f2151u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101f215au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101f2163u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101f216cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101f2175u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101f217eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101f2187u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101f2190u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101f2199u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101f21a2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101f21abu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101f21b4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101f21bbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x10u, 2u);
        (void)sp0;
        return 1;
    }
    case 0x101f21d6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101f21e1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101f21e8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101f21ecu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101f21f3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101f21f7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101f21feu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101f2205u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101f220cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101f2213u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101f221au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101f2221u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101f2228u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101f222fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101f2236u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101f223du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101f2244u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101f224bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101f2252u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101f2254u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101f2267u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101f1fe0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101f1fe0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
