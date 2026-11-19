/* f_0x101af860 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101af860(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 20u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101af874u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101af874;
    case 0x101af883u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101af883;
    case 0x101af894u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101af894;
    case 0x101af8a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101af8a0;
    case 0x101af8b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101af8b1;
    case 0x101af8c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101af8c3;
    case 0x101af8dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101af8df;
    case 0x101af8f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101af8f1;
    case 0x101af90du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101af90d;
    case 0x101af91fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101af91f;
    case 0x101af92au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101af92a;
    case 0x101af93cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101af93c;
    case 0x101af94eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101af94e;
    case 0x101af960u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101af960;
    case 0x101af96fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101af96f;
    case 0x101af97cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101af97c;
    case 0x101af989u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101af989;
    case 0x101af99au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101af99a;
    case 0x101af9a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101af9a9;
    case 0x101af9b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101af9b2;
    case 0x101af9bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101af9bf;
    case 0x101af9ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101af9ce;
    case 0x101af9dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101af9db;
    case 0x101af9eau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101af9ea;
    case 0x101af9f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101af9f3;
    case 0x101afa00u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101afa00;
    case 0x101afa21u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101afa21;
    case 0x101afa33u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101afa33;
    case 0x101afa3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101afa3f;
    case 0x101afa4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101afa4c;
    case 0x101afa51u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101afa51;
    case 0x101afa69u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101afa69;
    case 0x101afa6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101afa6c;
    case 0x101afa7eu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101afa7e;
    case 0x101afa89u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101afa89;
    case 0x101afa93u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101afa93;
    case 0x101afaa4u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101afaa4;
    default: break;
    }
#endif

    COW_AT(101af860)
    wr32(sp0 - 4u, in_esi);
    if ((uint32_t)(int16_t)rd32(sp0 + 4u) - 1u > 0x56u)
    {
        ecx = rd32(sp0 + 4u);
        goto L_101afa33;
    }
    eax = (uint32_t)(int16_t)rd32(sp0 + 4u) - 1u;
    ecx = rd32(sp0 + 4u);
L_101af874: ;
    COW_AT(101af874)
    t1 = rd32(COW_IMG(0x101afaa8u) + rd8(COW_IMG(0x101afadcu) + eax) * 4u);
    switch (t1 - RD)
    {
    case 0x101af883u: edx = rd8(COW_IMG(0x101afadcu) + eax); goto L_101af883;
    case 0x101af8a0u: edx = rd8(COW_IMG(0x101afadcu) + eax); goto L_101af8a0;
    case 0x101af8c3u: edx = rd8(COW_IMG(0x101afadcu) + eax); goto L_101af8c3;
    case 0x101af8f1u: edx = rd8(COW_IMG(0x101afadcu) + eax); goto L_101af8f1;
    case 0x101af91fu: edx = rd8(COW_IMG(0x101afadcu) + eax); goto L_101af91f;
    case 0x101af93cu: goto L_101af93c;
    case 0x101af94eu: edx = rd8(COW_IMG(0x101afadcu) + eax); goto L_101af94e;
    case 0x101af960u: edx = rd8(COW_IMG(0x101afadcu) + eax); goto L_101af960;
    case 0x101af989u: edx = rd8(COW_IMG(0x101afadcu) + eax); goto L_101af989;
    case 0x101af99au: edx = rd8(COW_IMG(0x101afadcu) + eax); goto L_101af99a;
    case 0x101af9ceu: edx = rd8(COW_IMG(0x101afadcu) + eax); goto L_101af9ce;
    case 0x101afa21u: goto L_101afa21;
    case 0x101afa33u: goto L_101afa33;
    default: rt_fatal(g, COW_IMG(0x101af87cu), "switch");
    }
    return;
L_101af883: ;
    COW_AT(101af883)
    if (rd8(rd32(self + 0x1cu) + 0xf0ecu) == 0u) goto L_101af9b2;
    COW_AT(101af894)
    eax = 3u;
    ecx = 4u;
    goto L_101af874;
L_101af8a0: ;
    COW_AT(101af8a0)
    wr32(sp0 - 8u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t27 = cow_thiscall(g, COW_IMG(0x101afbe0u), self, 1, 0u);
    t28 = g->ecx;
    t29 = g->edx;
    if ((uint8_t)t27 == 0u)
    {
        eax = t27;
        ecx = t28;
        edx = t29;
        loc_4 = in_esi;
        goto L_101af9a9;
    }
    eax = t27;
    COW_AT(101af8b1)
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x10u, 2u);
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(rd32(rd32(self + 0x1cu)) + 4u), rd32(self + 0x1cu), 3, 2u, 0u, 0u);
    g->esi = rd32(sp0 - 4u);
    return;
L_101af8c3: ;
    COW_AT(101af8c3)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t20 = cow_thiscall(g, COW_IMG(0x101aebe0u), self, 0);
    t21 = g->ecx;
    t22 = g->edx;
    t23 = -((uint8_t)t20 != 0u) + 3u;
    wr32(sp0 - 8u, t23);
    g->eax = t23;
    g->edx = t22;
    t24 = cow_thiscall(g, COW_IMG(0x101afbe0u), t21, 1, t23);
    t25 = g->ecx;
    t26 = g->edx;
    if ((uint8_t)t24 == 0u)
    {
        eax = t24;
        ecx = t25;
        edx = t26;
        loc_4 = in_esi;
        goto L_101af9a9;
    }
    edx = t26;
    COW_AT(101af8df)
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x10u, 2u);
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(rd32(rd32(self + 0x1cu)) + 4u), rd32(self + 0x1cu), 3, 2u, 0u, 0u);
    g->esi = rd32(sp0 - 4u);
    return;
L_101af8f1: ;
    COW_AT(101af8f1)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t13 = cow_thiscall(g, COW_IMG(0x101aebe0u), self, 0);
    t14 = g->ecx;
    t15 = g->edx;
    t16 = -((uint8_t)t13 != 0u) + 5u;
    wr32(sp0 - 8u, t16);
    g->eax = t16;
    g->edx = t15;
    t17 = cow_thiscall(g, COW_IMG(0x101afbe0u), t14, 1, t16);
    t18 = g->ecx;
    t19 = g->edx;
    if ((uint8_t)t17 == 0u)
    {
        eax = t17;
        ecx = t18;
        edx = t19;
        loc_4 = in_esi;
        goto L_101af9a9;
    }
    eax = t17;
    COW_AT(101af90d)
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x10u, 2u);
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(rd32(rd32(self + 0x1cu)) + 4u), rd32(self + 0x1cu), 3, 2u, 0u, 0u);
    g->esi = rd32(sp0 - 4u);
    return;
L_101af91f: ;
    COW_AT(101af91f)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t10 = cow_thiscall(g, COW_IMG(0x101afb80u), self, 0);
    t11 = g->ecx;
    t12 = g->edx;
    if ((uint8_t)t10 == 0u)
    {
        eax = t10;
        ecx = t11;
        edx = t12;
        loc_4 = in_esi;
        goto L_101af9a9;
    }
    edx = t12;
    COW_AT(101af92a)
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x10u, 2u);
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(rd32(rd32(self + 0x1cu)) + 4u), rd32(self + 0x1cu), 3, 2u, 0u, 0u);
    g->esi = rd32(sp0 - 4u);
    return;
L_101af93c: ;
    COW_AT(101af93c)
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x10u, 8u);
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(rd32(rd32(self + 0x1cu)) + 4u), rd32(self + 0x1cu), 3, 8u, 0u, 0u);
    g->esi = in_esi;
    return;
L_101af94e: ;
    COW_AT(101af94e)
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 0xeu);
    wr32(sp0 - 0x10u, 3u);
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(rd32(rd32(self + 0x1cu)) + 4u), rd32(self + 0x1cu), 3, 3u, 0xeu, 0u);
    g->esi = in_esi;
    return;
L_101af960: ;
    COW_AT(101af960)
    wr32(sp0 - 8u, 0u);
    if (rd8(rd32(self + 0x1cu) + 0xf0ecu) == 0u)
    {
        ecx = rd32(self + 0x1cu);
        goto L_101af97c;
    }
    eax = (eax & 0xffffff00u) | rd8(rd32(self + 0x1cu) + 0xf0ecu);
    ecx = rd32(self + 0x1cu);
    COW_AT(101af96f)
    wr32(sp0 - 0xcu, 0xfu);
    wr32(sp0 - 0x10u, 3u);
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(rd32(ecx) + 4u), ecx, 3, 3u, 0xfu, 0u);
    g->esi = in_esi;
    return;
L_101af97c: ;
    COW_AT(101af97c)
    wr32(sp0 - 0xcu, 1u);
    wr32(sp0 - 0x10u, 3u);
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(rd32(ecx) + 4u), ecx, 3, 3u, 1u, 0u);
    g->esi = in_esi;
    return;
L_101af989: ;
    COW_AT(101af989)
    if (rd32(rd32(COW_IMG(0x10456a28u)) + 8u) == 0u)
    {
        loc_4 = in_esi;
        goto L_101afaa4;
    }
    eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
L_101af99a: ;
    COW_AT(101af99a)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t7 = cow_thiscall(g, COW_IMG(0x101afc40u), self, 0);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 != 0u)
    {
        loc_4 = in_esi;
        goto L_101afaa4;
    }
    eax = t7;
    ecx = t8;
    edx = t9;
    loc_4 = in_esi;
L_101af9a9: ;
    COW_AT(101af9a9)
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    g->esi = rd32(sp0 - 4u);
    return;
L_101af9b2: ;
    COW_AT(101af9b2)
    if (rd32(rd32(self + 0x1cu) + 0xf10cu) != 0u)
    {
        eax = rd32(rd32(self + 0x1cu) + 0xf10cu);
        ecx = rd32(self + 0x1cu);
        loc_4 = in_esi;
        goto L_101af9a9;
    }
    eax = rd32(rd32(self + 0x1cu) + 0xf10cu);
    ecx = rd32(self + 0x1cu);
    COW_AT(101af9bf)
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 0xfu);
    wr32(sp0 - 0x10u, 3u);
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(rd32(ecx) + 4u), ecx, 3, 3u, 0xfu, 0u);
    g->esi = in_esi;
    return;
L_101af9ce: ;
    COW_AT(101af9ce)
    if (rd8(rd32(self + 0x1cu) + 0xf0ecu) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(rd32(self + 0x1cu) + 0xf0ecu);
        ecx = rd32(self + 0x1cu);
        goto L_101af9ea;
    }
    ecx = rd32(self + 0x1cu);
    COW_AT(101af9db)
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 0x20u);
    wr32(sp0 - 0x10u, 5u);
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(rd32(ecx) + 4u), ecx, 3, 5u, 0x20u, 0u);
    g->esi = in_esi;
    return;
L_101af9ea: ;
    COW_AT(101af9ea)
    g->eax = eax;
    g->edx = rd32(ecx);
    t2 = rd32(ecx);
    g->esp = sp0 - 4u;
    t3 = cow_thiscall(g, rd32(t2 + 0x20u), ecx, 0);
    t4 = g->ecx;
    t5 = g->edx;
    if ((uint8_t)t3 == 0u)
    {
        eax = t3;
        ecx = t4;
        edx = t5;
        loc_4 = in_esi;
        goto L_101af9a9;
    }
    edx = t5;
    COW_AT(101af9f3)
    if (rd32(rd32(self + 0x1cu) + 0xf10cu) != 0u)
    {
        eax = rd32(rd32(self + 0x1cu) + 0xf10cu);
        ecx = rd32(self + 0x1cu);
        loc_4 = rd32(sp0 - 4u);
        goto L_101af9a9;
    }
    ecx = rd32(self + 0x1cu);
    COW_AT(101afa00)
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 0x79u);
    wr32(sp0 - 0x10u, 3u);
    t6 = rd16(rd32(self + 8u) + 0x4cu);
    wr32(self + 0x14u, 1u);
    wr16(self + 0x20u, (uint16_t)t6);
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(rd32(ecx) + 4u), ecx, 3, 3u, 0x79u, 0u);
    g->esi = rd32(sp0 - 4u);
    return;
L_101afa21: ;
    COW_AT(101afa21)
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 0x1cu);
    wr32(sp0 - 0x10u, 3u);
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(rd32(rd32(self + 0x1cu)) + 4u), rd32(self + 0x1cu), 3, 3u, 0x1cu, 0u);
    g->esi = in_esi;
    return;
L_101afa33: ;
    COW_AT(101afa33)
    if (rd32(rd32(COW_IMG(0x10456a28u)) + 8u) != 0u) goto L_101afa4c;
    COW_AT(101afa3f)
    t30 = rd32(self + 0x2cu);
    wr8(sp0 + 4u, 0u);
    if (t30 != 5u) goto L_101afa51;
L_101afa4c: ;
    COW_AT(101afa4c)
    wr8(sp0 + 4u, 1u);
L_101afa51: ;
    COW_AT(101afa51)
    t31 = rd32(sp0 + 4u);
    wr32(sp0 - 8u, t31);
    wr32(sp0 - 0xcu, sp0 + 4u);
    wr32(sp0 - 0x10u, (uint32_t)(int16_t)ecx);
    g->esi = self;
    g->eax = sp0 + 4u;
    g->esp = sp0 - 4u;
    t32 = cow_thiscall(g, COW_IMG(0x101af650u), self, 3, (uint32_t)(int16_t)ecx, sp0 + 4u, t31);
    if (t32 == 1u) goto L_101afa93;
    eax = t32 - 1u;
    COW_AT(101afa69)
    if (eax != 1u)
    {
        loc_4 = rd32(sp0 - 4u);
        goto L_101afaa4;
    }
    COW_AT(101afa6c)
    wr32(sp0 - 8u, 0u);
    if (rd32(sp0 + 4u) != 0x4081u)
    {
        eax = rd32(sp0 + 4u);
        ecx = rd32(self + 0x1cu);
        edx = rd32(rd32(self + 0x1cu));
        goto L_101afa89;
    }
    eax = rd32(sp0 + 4u);
    ecx = rd32(self + 0x1cu);
    edx = rd32(rd32(self + 0x1cu));
    COW_AT(101afa7e)
    wr32(sp0 - 0xcu, 0x20u);
    wr32(sp0 - 0x10u, 5u);
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(edx + 4u), ecx, 3, 5u, 0x20u, 0u);
    g->esi = rd32(sp0 - 4u);
    return;
L_101afa89: ;
    COW_AT(101afa89)
    wr32(sp0 - 0xcu, eax);
    wr32(sp0 - 0x10u, 6u);
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(edx + 4u), ecx, 3, 6u, eax, 0u);
    g->esi = rd32(sp0 - 4u);
    return;
L_101afa93: ;
    COW_AT(101afa93)
    wr32(sp0 - 8u, 0u);
    t33 = rd32(sp0 + 4u);
    wr32(sp0 - 0xcu, t33);
    wr32(sp0 - 0x10u, 5u);
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(rd32(rd32(self + 0x1cu)) + 4u), rd32(self + 0x1cu), 3, 5u, t33, 0u);
    loc_4 = rd32(sp0 - 4u);
L_101afaa4: ;
    COW_AT(101afaa4)
    g->esi = loc_4;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101af860(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101af874u:
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
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101af883u:
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
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101af894u:
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
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101af8a0u:
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
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101af8b1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101af8c3u:
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
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101af8dfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101af8f1u:
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
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101af90du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101af91fu:
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
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101af92au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101af93cu:
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
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101af94eu:
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
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101af960u:
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
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101af96fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101af97cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101af989u:
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
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101af99au:
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
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101af9a9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101af9b2u:
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
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101af9bfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101af9ceu:
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
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101af9dbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101af9eau:
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
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101af9f3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101afa00u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101afa21u:
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
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101afa33u:
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
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101afa3fu:
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
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101afa4cu:
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
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101afa51u:
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
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101afa69u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 4u;
        wr32(sp0 - 0xcu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x101afa6cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 4u;
        wr32(sp0 - 0xcu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x101afa7eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        wr32(sp0 - 0xcu, sp0 + 4u);
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101afa89u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        wr32(sp0 - 0xcu, sp0 + 4u);
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101afa93u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 4u;
        wr32(sp0 - 0xcu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x101afaa4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101af860(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_101af860(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
