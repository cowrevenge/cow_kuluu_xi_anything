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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 28u);

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
        if (eax == 1u)
        {
            eax = eax - 1u;
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
            if (eax != 1u)
            {
                eax = eax - 1u;
            }
            else
            {
                eax = eax - 1u;
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
    if (rd8(self + 0x91u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x91u);
        wr32(sp0 - 0x10u, COW_IMG(0x1037f018u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t12 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037f018u));
        t13 = g->edx;
        wr32(sp0 - 0x10u, COW_IMG(0x103820d0u));
        cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x103820d0u));
    }
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
    if (ecx == rd32(COW_IMG(0x10663474u))) goto L_101f21d6;
    if (rd32(COW_IMG(0x1057847cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x1057847cu));
        goto L_101f2267;
    }
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
    wr32(sp0 - 0x10u, 2u);
    wr32(sp0 - 0x14u, 3u);
    loc_14 = 3u;
L_101f21bb: ;
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
    wr32(sp0 - 0x10u, 2u);
    wr32(sp0 - 0x14u, 0x25u);
    loc_14 = 0x25u;
    goto L_101f21bb;
L_101f213f: ;
    wr32(sp0 - 0x10u, 2u);
    wr32(sp0 - 0x14u, 0x97u);
    loc_14 = 0x97u;
    goto L_101f21bb;
L_101f2148: ;
    wr32(sp0 - 0x10u, 2u);
    wr32(sp0 - 0x14u, 0x9eu);
    loc_14 = 0x9eu;
    goto L_101f21bb;
L_101f2151: ;
    wr32(sp0 - 0x10u, 2u);
    wr32(sp0 - 0x14u, 0xa6u);
    loc_14 = 0xa6u;
    goto L_101f21bb;
L_101f215a: ;
    wr32(sp0 - 0x10u, 2u);
    wr32(sp0 - 0x14u, 0x8bu);
    loc_14 = 0x8bu;
    goto L_101f21bb;
L_101f2163: ;
    wr32(sp0 - 0x10u, 2u);
    wr32(sp0 - 0x14u, 0xa8u);
    loc_14 = 0xa8u;
    goto L_101f21bb;
L_101f216c: ;
    wr32(sp0 - 0x10u, 2u);
    wr32(sp0 - 0x14u, 0xb9u);
    loc_14 = 0xb9u;
    goto L_101f21bb;
L_101f2175: ;
    wr32(sp0 - 0x10u, 2u);
    wr32(sp0 - 0x14u, 0xbau);
    loc_14 = 0xbau;
    goto L_101f21bb;
L_101f217e: ;
    wr32(sp0 - 0x10u, 2u);
    wr32(sp0 - 0x14u, 0xbbu);
    loc_14 = 0xbbu;
    goto L_101f21bb;
L_101f2187: ;
    wr32(sp0 - 0x10u, 2u);
    wr32(sp0 - 0x14u, 0xbfu);
    loc_14 = 0xbfu;
    goto L_101f21bb;
L_101f2190: ;
    wr32(sp0 - 0x10u, 2u);
    wr32(sp0 - 0x14u, 0xc0u);
    loc_14 = 0xc0u;
    goto L_101f21bb;
L_101f2199: ;
    wr32(sp0 - 0x10u, 2u);
    wr32(sp0 - 0x14u, 0xc1u);
    loc_14 = 0xc1u;
    goto L_101f21bb;
L_101f21a2: ;
    wr32(sp0 - 0x10u, 2u);
    wr32(sp0 - 0x14u, 0xc2u);
    loc_14 = 0xc2u;
    goto L_101f21bb;
L_101f21ab: ;
    wr32(sp0 - 0x10u, 2u);
    wr32(sp0 - 0x14u, 0xb5u);
    loc_14 = 0xb5u;
    goto L_101f21bb;
L_101f21b4: ;
    wr32(sp0 - 0x10u, 2u);
    wr32(sp0 - 0x14u, 0xc5u);
    loc_14 = 0xc5u;
    goto L_101f21bb;
L_101f21d6: ;
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
    wr32(sp0 - 0x10u, 3u);
    loc_10 = 3u;
L_101f2254: ;
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
    g->esi = rd32(sp0 - 0xcu);
    g->edx = edx;
    return eax;
L_101f21ec: ;
    wr32(sp0 - 0x10u, 0xb5u);
    loc_10 = 0xb5u;
    goto L_101f2254;
L_101f21f3: ;
    wr32(sp0 - 0x10u, 0x25u);
    loc_10 = 0x25u;
    goto L_101f2254;
L_101f21f7: ;
    wr32(sp0 - 0x10u, 0x8bu);
    loc_10 = 0x8bu;
    goto L_101f2254;
L_101f21fe: ;
    wr32(sp0 - 0x10u, 0x97u);
    loc_10 = 0x97u;
    goto L_101f2254;
L_101f2205: ;
    wr32(sp0 - 0x10u, 0x9eu);
    loc_10 = 0x9eu;
    goto L_101f2254;
L_101f220c: ;
    wr32(sp0 - 0x10u, 0xa6u);
    loc_10 = 0xa6u;
    goto L_101f2254;
L_101f2213: ;
    wr32(sp0 - 0x10u, 0xa8u);
    loc_10 = 0xa8u;
    goto L_101f2254;
L_101f221a: ;
    wr32(sp0 - 0x10u, 0xb9u);
    loc_10 = 0xb9u;
    goto L_101f2254;
L_101f2221: ;
    wr32(sp0 - 0x10u, 0xbau);
    loc_10 = 0xbau;
    goto L_101f2254;
L_101f2228: ;
    wr32(sp0 - 0x10u, 0xbbu);
    loc_10 = 0xbbu;
    goto L_101f2254;
L_101f222f: ;
    wr32(sp0 - 0x10u, 0xbfu);
    loc_10 = 0xbfu;
    goto L_101f2254;
L_101f2236: ;
    wr32(sp0 - 0x10u, 0xc0u);
    loc_10 = 0xc0u;
    goto L_101f2254;
L_101f223d: ;
    wr32(sp0 - 0x10u, 0xc1u);
    loc_10 = 0xc1u;
    goto L_101f2254;
L_101f2244: ;
    wr32(sp0 - 0x10u, 0xc2u);
    loc_10 = 0xc2u;
    goto L_101f2254;
L_101f224b: ;
    wr32(sp0 - 0x10u, 0xc5u);
    loc_10 = 0xc5u;
    goto L_101f2254;
L_101f2252: ;
    wr32(sp0 - 0x10u, 2u);
    loc_10 = 2u;
    goto L_101f2254;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f1fe0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101f1fe0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
