/* f_0x101f23a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101f23a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101f23abu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101f23ab;
    case 0x101f23b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101f23b0;
    case 0x101f23c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101f23c7;
    case 0x101f23ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101f23ce;
    case 0x101f23dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101f23db;
    case 0x101f23e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101f23e6;
    case 0x101f23f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101f23f4;
    case 0x101f2401u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101f2401;
    case 0x101f2409u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101f2409;
    case 0x101f2414u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101f2414;
    case 0x101f241eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101f241e;
    case 0x101f2426u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101f2426;
    case 0x101f2431u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101f2431;
    case 0x101f243bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101f243b;
    case 0x101f2443u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101f2443;
    case 0x101f244eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101f244e;
    case 0x101f2458u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101f2458;
    case 0x101f2460u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101f2460;
    case 0x101f246bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101f246b;
    case 0x101f2475u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101f2475;
    case 0x101f2485u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101f2485;
    case 0x101f2488u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101f2488;
    case 0x101f2491u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101f2491;
    case 0x101f249fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101f249f;
    case 0x101f24c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101f24c4;
    case 0x101f24cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101f24cf;
    case 0x101f24ecu: eax = g->eax; ecx = g->ecx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101f24ec;
    case 0x101f24f1u: eax = g->eax; ecx = g->ecx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101f24f1;
    case 0x101f24f5u: eax = g->eax; ecx = g->ecx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101f24f5;
    case 0x101f24f9u: eax = g->eax; ecx = g->ecx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101f24f9;
    case 0x101f2502u: eax = g->eax; ecx = g->ecx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101f2502;
    case 0x101f2509u: eax = g->eax; ecx = g->ecx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101f2509;
    case 0x101f251fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101f251f;
    case 0x101f2524u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101f2524;
    case 0x101f2528u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101f2528;
    case 0x101f2554u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101f2554;
    case 0x101f259eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101f259e;
    case 0x101f25afu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101f25af;
    default: break;
    }
#endif

    COW_AT(101f23a0)
    if (arg1 != 0u)
    {
        eax = arg1;
    }
    else
    {
    COW_AT(101f23ab)
        eax = rd32(COW_IMG(0x10663754u));
    }
    COW_AT(101f23b0)
    wr32(self + 0x5cu, eax);
    g->eax = eax;
    g->edx = rd32(eax);
    t1 = rd32(eax);
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, rd32(t1 + 0x54u), eax, 0);
    t3 = g->ecx;
    t4 = g->edx;
    wr32(self + 0x64u, t2);
    if (t2 - 1u > 0x10u)
    {
        edx = t4;
        goto L_101f2475;
    }
    eax = t2 - 1u;
    ecx = t3;
    edx = t4;
    COW_AT(101f23c7)
    t5 = rd32(COW_IMG(0x101f25b4u) + eax * 4u);
    switch (t5 - RD)
    {
    case 0x101f23ceu: goto L_101f23ce;
    case 0x101f23dbu: goto L_101f23db;
    case 0x101f23e6u: goto L_101f23e6;
    case 0x101f23f4u: goto L_101f23f4;
    case 0x101f2401u: goto L_101f2401;
    case 0x101f2409u: goto L_101f2409;
    case 0x101f2414u: goto L_101f2414;
    case 0x101f241eu: goto L_101f241e;
    case 0x101f2426u: goto L_101f2426;
    case 0x101f2431u: goto L_101f2431;
    case 0x101f243bu: goto L_101f243b;
    case 0x101f2443u: goto L_101f2443;
    case 0x101f244eu: goto L_101f244e;
    case 0x101f2458u: goto L_101f2458;
    case 0x101f2460u: goto L_101f2460;
    case 0x101f246bu: goto L_101f246b;
    case 0x101f2475u: goto L_101f2475;
    default: rt_fatal(g, COW_IMG(0x101f23c7u), "switch");
    }
    return;
L_101f23ce: ;
    COW_AT(101f23ce)
    wr32(self + 0x60u, rd32(COW_IMG(0x10666e30u)));
L_101f2488: ;
    COW_AT(101f2488)
    if (rd32(COW_IMG(0x10578204u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10578204u));
    }
    else
    {
        eax = rd32(COW_IMG(0x10578204u));
    COW_AT(101f2491)
        g->edx = edx;
        g->esp = sp0 - 4u;
        t11 = cow_call_regs(g, COW_IMG(0x10087070u), eax, g->ecx, g->edx, 1, 1, 0u);
        t12 = g->edx;
        if ((uint8_t)t11 != 0u)
        {
            eax = t11;
            edx = t12;
        }
        else
        {
            eax = t11;
    COW_AT(101f249f)
            g->eax = eax;
            g->edx = rd32(rd32(self + 0x5cu));
            t13 = rd32(rd32(self + 0x5cu));
            g->esp = sp0 - 4u;
            t14 = cow_thiscall_cdecl(g, rd32(t13), rd32(self + 0x5cu), 3, 1u, 0u, 0u);
            t15 = g->edx;
            cow_call_regs(g, COW_IMG(0x1013e3b0u), t14, rd32(COW_IMG(0x10578204u)), t15, 0, 4, t14, 1u, 0u, 0u);
            t16 = g->edx;
            g->eax = rd32(rd32(self + 0x5cu));
            g->edx = t16;
            t17 = rd32(rd32(self + 0x5cu));
            t18 = cow_thiscall(g, rd32(t17 + 0x10u), rd32(self + 0x5cu), 0);
            t19 = g->edx;
            if ((uint8_t)t18 == 0u)
            {
                eax = t18;
                edx = t19;
            }
            else
            {
                eax = t18;
                edx = t19;
    COW_AT(101f24c4)
                g->eax = eax;
                g->esp = sp0 - 4u;
                t20 = cow_fastcall(g, COW_IMG(0x1013e4f0u), rd32(COW_IMG(0x10578204u)), edx, 0);
                t21 = g->edx;
                eax = t20;
                edx = t21;
            }
        }
    }
    COW_AT(101f24cf)
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x101f6700u), eax, self, edx, 0, 1, 0xau);
    if ((rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) & 0x80u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        goto L_101f24f5;
    }
    eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    COW_AT(101f24ec)
    if (eax == 2u) goto L_101f24f9;
    COW_AT(101f24f1)
    if (eax == 3u) goto L_101f24f9;
L_101f24f5: ;
    COW_AT(101f24f5)
    if (eax == 0u) goto L_101f2502;
L_101f24f9: ;
    COW_AT(101f24f9)
    wr32(self + 0x30u, COW_IMG(0x103820a4u));
L_101f2509: ;
    COW_AT(101f2509)
    t22 = rd32(self + 0x5cu);
    wr16(self + 0x16u, 3u);
    wr16(self + 0x26u, 0x12u);
    g->eax = eax;
    g->edx = rd32(t22);
    t23 = rd32(t22);
    g->esp = sp0 - 4u;
    t24 = cow_thiscall(g, rd32(t23 + 0x1cu), t22, 0);
    t25 = g->edx;
    if ((uint8_t)t24 != 0u)
    {
        edx = t25;
    COW_AT(101f2524)
        wr8(self + 0x47u, 1u);
    }
    else
    {
        eax = t24;
        edx = t25;
    COW_AT(101f251f)
        wr8(self + 0x47u, (uint8_t)eax);
    }
    COW_AT(101f2528)
    g->eax = rd32(rd32(self + 0x5cu));
    g->edx = edx;
    t26 = rd32(rd32(self + 0x5cu));
    g->esp = sp0 - 4u;
    t27 = cow_thiscall(g, rd32(t26 + 0x60u), rd32(self + 0x5cu), 0);
    t28 = g->edx;
    wr32(self + 0x40u, t27);
    wr8(self + 0x92u, 0u);
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x103820f8u), 1u, 0u);
    if (rd32(self + 8u) != 0u)
    {
        eax = rd32(self + 8u);
    COW_AT(101f2554)
        t29 = rd32(rd32(COW_IMG(0x1057823cu)) + 8u);
        g->edx = t29;
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x1015e6e0u), COW_IMG(0x10621838u), 5, t29, 1u, 1u, 0u, 0u);
        t30 = g->edx;
        t31 = rd32(rd32(COW_IMG(0x10578170u)) + 8u);
        g->eax = rd32(COW_IMG(0x10578170u));
        g->edx = t30;
        t32 = rd32(COW_IMG(0x10578170u));
        t33 = cow_thiscall(g, COW_IMG(0x1015e6e0u), COW_IMG(0x10621838u), 5, t31, 1u, 1u, 0u, 0u);
        t34 = g->edx;
        t35 = cow_fastcall(g, COW_IMG(0x101f1230u), self, t34, 0);
        g->edx = rd32(rd32(self + 0x5cu));
        t36 = rd32(rd32(self + 0x5cu));
        t37 = cow_thiscall(g, rd32(t36 + 0x14u), rd32(self + 0x5cu), 0);
        t38 = g->edx;
        if ((uint8_t)t37 != 0u)
        {
            eax = t37;
            edx = t38;
    COW_AT(101f259e)
            g->edx = edx;
            g->esp = sp0 - 4u;
            t39 = cow_call_regs(g, COW_IMG(0x101f11e0u), eax, self, g->edx, 1, 1, 0u);
            t40 = g->edx;
            cow_call_regs(g, COW_IMG(0x101f7080u), t39, self, t40, 0, 2, t39, 0u);
        }
    }
    COW_AT(101f25af)
    g->esi = in_esi;
    return;
L_101f23db: ;
    COW_AT(101f23db)
    ecx = rd32(COW_IMG(0x10666e34u));
L_101f2485: ;
    COW_AT(101f2485)
    wr32(self + 0x60u, ecx);
    goto L_101f2488;
L_101f23e6: ;
    COW_AT(101f23e6)
    t10 = rd32(COW_IMG(0x10666e40u));
    wr32(self + 0x60u, t10);
    edx = t10;
    goto L_101f2488;
L_101f23f4: ;
    COW_AT(101f23f4)
    wr32(self + 0x60u, rd32(COW_IMG(0x10666e44u)));
    goto L_101f2488;
L_101f2401: ;
    COW_AT(101f2401)
    ecx = rd32(COW_IMG(0x10666e48u));
    goto L_101f2485;
L_101f2409: ;
    COW_AT(101f2409)
    t9 = rd32(COW_IMG(0x10666e3cu));
    wr32(self + 0x60u, t9);
    edx = t9;
    goto L_101f2488;
L_101f2414: ;
    COW_AT(101f2414)
    wr32(self + 0x60u, rd32(COW_IMG(0x10666e4cu)));
    goto L_101f2488;
L_101f241e: ;
    COW_AT(101f241e)
    ecx = rd32(COW_IMG(0x10666e50u));
    goto L_101f2485;
L_101f2426: ;
    COW_AT(101f2426)
    t8 = rd32(COW_IMG(0x10666e54u));
    wr32(self + 0x60u, t8);
    edx = t8;
    goto L_101f2488;
L_101f2431: ;
    COW_AT(101f2431)
    wr32(self + 0x60u, rd32(COW_IMG(0x10666e58u)));
    goto L_101f2488;
L_101f243b: ;
    COW_AT(101f243b)
    ecx = rd32(COW_IMG(0x10666e5cu));
    goto L_101f2485;
L_101f2443: ;
    COW_AT(101f2443)
    t7 = rd32(COW_IMG(0x10666e60u));
    wr32(self + 0x60u, t7);
    edx = t7;
    goto L_101f2488;
L_101f244e: ;
    COW_AT(101f244e)
    wr32(self + 0x60u, rd32(COW_IMG(0x10666e64u)));
    goto L_101f2488;
L_101f2458: ;
    COW_AT(101f2458)
    ecx = rd32(COW_IMG(0x10666e68u));
    goto L_101f2485;
L_101f2460: ;
    COW_AT(101f2460)
    t6 = rd32(COW_IMG(0x10666e6cu));
    wr32(self + 0x60u, t6);
    edx = t6;
    goto L_101f2488;
L_101f246b: ;
    COW_AT(101f246b)
    wr32(self + 0x60u, rd32(COW_IMG(0x10666e70u)));
    goto L_101f2488;
L_101f2475: ;
    COW_AT(101f2475)
    wr32(self + 0x94u, 0u);
    ecx = rd32(COW_IMG(0x10666e2cu));
    goto L_101f2485;
L_101f2502: ;
    COW_AT(101f2502)
    wr32(self + 0x30u, COW_IMG(0x1038209cu));
    goto L_101f2509;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101f23a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101f23abu:
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
    case 0x101f23b0u:
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
    case 0x101f23c7u:
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
    case 0x101f23ceu:
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
    case 0x101f23dbu:
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
    case 0x101f23e6u:
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
    case 0x101f23f4u:
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
    case 0x101f2401u:
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
    case 0x101f2409u:
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
    case 0x101f2414u:
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
    case 0x101f241eu:
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
    case 0x101f2426u:
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
    case 0x101f2431u:
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
    case 0x101f243bu:
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
    case 0x101f2443u:
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
    case 0x101f244eu:
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
    case 0x101f2458u:
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
    case 0x101f2460u:
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
    case 0x101f246bu:
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
    case 0x101f2475u:
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
    case 0x101f2485u:
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
    case 0x101f2488u:
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
    case 0x101f2491u:
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
    case 0x101f249fu:
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
    case 0x101f24c4u:
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
    case 0x101f24cfu:
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
    case 0x101f24ecu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x101f24f1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x101f24f5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x101f24f9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x101f2502u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x101f2509u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edx = 3u;
        (void)sp0;
        return 1;
    }
    case 0x101f251fu:
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
    case 0x101f2524u:
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
    case 0x101f2528u:
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
    case 0x101f2554u:
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
    case 0x101f259eu:
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
    case 0x101f25afu:
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
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101f23a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_101f23a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
