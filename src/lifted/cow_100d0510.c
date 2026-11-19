/* f_0x100d0510 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_100d0510(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_118;
    uint32_t loc_11c;
    uint32_t loc_120;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 312u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100d0526u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x120u); in_esi = rd32(sp0 - 0x11cu); g->edi = rd32(sp0 - 0x120u); g->esi = rd32(sp0 - 0x11cu); goto E_100d0526;
    case 0x100d052au: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x120u); in_esi = rd32(sp0 - 0x11cu); g->edi = rd32(sp0 - 0x120u); g->esi = rd32(sp0 - 0x11cu); goto E_100d052a;
    case 0x100d0538u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100d0538;
    case 0x100d0544u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; loc_120 = rd32(sp0 - 0x120u); loc_11c = rd32(sp0 - 0x11cu); goto E_100d0544;
    case 0x100d0552u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100d0552;
    case 0x100d055du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100d055d;
    case 0x100d056bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100d056b;
    case 0x100d0579u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100d0579;
    case 0x100d057du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100d057d;
    case 0x100d0588u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100d0588;
    case 0x100d0591u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100d0591;
    case 0x100d05a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100d05a0;
    case 0x100d05a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100d05a7;
    case 0x100d05aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100d05ae;
    case 0x100d05b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100d05b0;
    case 0x100d05bau: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; goto E_100d05ba;
    case 0x100d05c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100d05c3;
    case 0x100d05d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100d05d4;
    case 0x100d05e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100d05e2;
    case 0x100d05efu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100d05ef;
    case 0x100d05f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100d05f8;
    case 0x100d0601u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100d0601;
    case 0x100d0609u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100d0609;
    case 0x100d060bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100d060b;
    case 0x100d0639u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100d0639;
    case 0x100d0644u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100d0644;
    case 0x100d0655u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; loc_118 = rd32(sp0 - 0x118u); goto E_100d0655;
    default: break;
    }
#endif

    COW_AT(100d0510)
    wr32(sp0 - 0x11cu, in_esi);
    wr32(sp0 - 0x120u, in_edi);
    if (rd8(COW_IMG(0x10487f80u)) == 0u)
    {
        edx = in_edx;
        edi = rd32(self + 0x70u);
        loc_11c = in_esi;
        loc_120 = in_edi;
        goto L_100d0544;
    }
    eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10487f80u));
    edi = rd32(self + 0x70u);
    COW_AT(100d0526)
    if (edi == 0u)
    {
        edx = in_edx;
        loc_11c = in_esi;
        loc_120 = in_edi;
        goto L_100d0544;
    }
    COW_AT(100d052a)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x120u;
    t1 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    t2 = g->edx;
    if (t1 == 0u)
    {
        edx = t2;
        loc_11c = in_esi;
        loc_120 = in_edi;
        goto L_100d0544;
    }
    eax = t1;
    edx = t2;
    COW_AT(100d0538)
    g->edx = edx;
    g->esp = sp0 - 0x120u;
    t3 = cow_call_regs(g, COW_IMG(0x10097a40u), eax, rd32(eax + 0x70u), g->edx, 1, 0);
    t4 = g->edx;
    if (t3 == edi)
    {
        eax = t3;
        edx = t4;
        goto L_100d05ba;
    }
    edx = t4;
    loc_11c = rd32(sp0 - 0x11cu);
    loc_120 = rd32(sp0 - 0x120u);
L_100d0544: ;
    COW_AT(100d0544)
    g->eax = rd32(self);
    g->edx = edx;
    t5 = rd32(self);
    g->esp = sp0 - 0x120u;
    t6 = cow_thiscall(g, rd32(t5 + 0x260u), self, 0);
    t7 = g->edx;
    if ((uint8_t)t6 != 0u)
    {
        eax = t6;
        edx = t7;
        goto L_100d05ba;
    }
    eax = t6;
    edx = t7;
    COW_AT(100d0552)
    g->eax = eax;
    g->esp = sp0 - 0x120u;
    t8 = cow_fastcall(g, COW_IMG(0x100845b0u), self, edx, 0);
    t9 = g->edx;
    if (t8 != 0u)
    {
        eax = t8;
        edx = t9;
        goto L_100d05ba;
    }
    eax = t8;
    COW_AT(100d055d)
    g->eax = eax;
    g->edx = rd32(self);
    t10 = rd32(self);
    g->esp = sp0 - 0x120u;
    t11 = cow_thiscall(g, rd32(t10 + 0x34cu), self, 0);
    t12 = g->edx;
    if (t11 != 0u)
    {
        eax = t11;
        edx = t12;
        goto L_100d05ba;
    }
    edx = t12;
    COW_AT(100d056b)
    g->eax = rd32(self);
    g->edx = edx;
    t13 = rd32(self);
    g->esp = sp0 - 0x120u;
    t14 = cow_thiscall(g, rd32(t13 + 0x358u), self, 0);
    t15 = g->ecx;
    t16 = g->edx;
    if (t14 != 0u)
    {
        eax = t14;
        edx = t16;
        goto L_100d05ba;
    }
    eax = t14;
    ecx = t15;
    edx = t16;
    COW_AT(100d0579)
    if (edi == 0u) goto L_100d0588;
    COW_AT(100d057d)
    g->edx = edx;
    g->esp = sp0 - 0x120u;
    t17 = cow_call_regs(g, COW_IMG(0x10098320u), eax, edi, g->edx, 1, 0);
    t18 = g->ecx;
    t19 = g->edx;
    if ((uint8_t)t17 != 0u)
    {
        eax = t17;
        edx = t19;
        goto L_100d05ba;
    }
    eax = t17;
    ecx = t18;
    edx = t19;
L_100d0588: ;
    COW_AT(100d0588)
    if (rd8(COW_IMG(0x1047d694u)) == 0u) goto L_100d060b;
    COW_AT(100d0591)
    if (rd8(COW_IMG(0x1047d695u)) > 4u) goto L_100d060b;
    eax = rd8(COW_IMG(0x1047d695u));
    edi = rd32(self + 0x70u);
    COW_AT(100d05a0)
    t20 = rd32(COW_IMG(0x100d06d0u) + eax * 4u);
    switch (t20 - RD)
    {
    case 0x100d05a7u: goto L_100d05a7;
    case 0x100d05b0u: goto L_100d05b0;
    case 0x100d05c3u: goto L_100d05c3;
    case 0x100d05e2u: goto L_100d05e2;
    case 0x100d05efu: goto L_100d05ef;
    default: rt_fatal(g, COW_IMG(0x100d05a0u), "switch");
    }
    return 0;
L_100d05a7: ;
    COW_AT(100d05a7)
    zf = (rd32(edi + 0x78u) & 0xff000000u) == 0u;
L_100d05ae: ;
    COW_AT(100d05ae)
    if (!zf) goto L_100d060b;
L_100d05b0: ;
    COW_AT(100d05b0)
    g->eax = eax;
    g->edx = rd32(self);
    t40 = rd32(self);
    g->esp = sp0 - 0x120u;
    t41 = cow_thiscall(g, rd32(t40 + 0xccu), self, 0);
    t42 = g->edx;
    eax = t41;
    edx = t42;
L_100d05ba: ;
    COW_AT(100d05ba)
    g->esi = rd32(sp0 - 0x11cu);
    g->edi = rd32(sp0 - 0x120u);
    g->edx = edx;
    return eax;
L_100d05c3: ;
    COW_AT(100d05c3)
    if ((rd32(edi + 0x78u) & 0xff000000u) != 0x1000000u)
    {
        ecx = rd32(edi + 0x78u) & 0xff000000u;
        goto L_100d060b;
    }
    ecx = rd32(edi + 0x78u) & 0xff000000u;
    COW_AT(100d05d4)
    edx = rd32(edi + 0x120u) >> 0xdu;
    zf = !(rd32(edi + 0x120u) >> 0xdu & 1u);
    goto L_100d05ae;
L_100d05e2: ;
    COW_AT(100d05e2)
    eax = rd32(edi + 0x120u) >> 0xdu;
    zf = !(rd32(edi + 0x120u) >> 0xdu & 1u);
L_100d0609: ;
    COW_AT(100d0609)
    if (!zf) goto L_100d05b0;
L_100d060b: ;
    COW_AT(100d060b)
    wr32(sp0 - 0x124u, sp0 - 0x110u);
    g->esp = sp0 - 0x120u;
    cow_cdecl(g, COW_IMG(0x10026e10u), 1, sp0 - 0x110u);
    wr32(sp0 - 0x124u, sp0 - 0x114u);
    wr32(sp0 - 0x128u, sp0 - 0x118u);
    wr32(sp0 - 0x12cu, sp0 - 0x110u);
    g->eax = sp0 - 0x110u;
    t24 = cow_thiscall(g, rd32(rd32(self) + 0x278u), self, 3, sp0 - 0x110u, sp0 - 0x118u, sp0 - 0x114u);
    if ((uint8_t)t24 == 0u)
    {
        eax = t24;
        goto L_100d05b0;
    }
    COW_AT(100d0639)
    if ((rd32(self + 0x88u) >> 8u & 4u) == 0u)
    {
        eax = rd32(self + 0x88u);
        loc_118 = rd32(sp0 - 0x118u);
    }
    else
    {
        eax = rd32(self + 0x88u);
    COW_AT(100d0644)
        wr32(sp0 - 0x118u, 0x3f800000u);
        t25 = (eax & 0xffff00ffu) | (eax >> 8u & 0xfbu) << 8u;
        wr32(self + 0x88u, t25);
        eax = t25;
        loc_118 = 0x3f800000u;
    }
    COW_AT(100d0655)
    g->eax = eax;
    g->edx = rd32(self);
    t26 = rd32(self);
    g->esp = sp0 - 0x120u;
    t27 = cow_thiscall(g, rd32(t26 + 0xccu), self, 0);
    t28 = g->ecx;
    t29 = g->edx;
    wr32(sp0 - 0x124u, t27);
    wr32(sp0 - 0x128u, COW_IMG(0x1034f7e0u));
    wr32(sp0 - 0x12cu, sp0 - 0x100u);
    g->esp = sp0 - 0x118u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x1034f7e0u), t27, rd32(sp0 - 0x120u), rd32(sp0 - 0x11cu));
    t30 = rd32(self + 0x7cu);
    wr32(sp0 - 0x124u, t30);
    t31 = rd32(sp0 - 0x114u);
    wr32(sp0 - 0x128u, t31);
    t32 = rd32(sp0 - 0x118u);
    wr32(sp0 - 0x12cu, t32);
    wr32(sp0 - 0x130u, sp0 - 0x100u);
    wr32(sp0 - 0x134u, sp0 - 0x110u);
    g->edx = sp0 - 0x110u;
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, COW_IMG(0x100d0880u), self, 5, sp0 - 0x110u, sp0 - 0x100u, t32, t31, t30);
    t33 = g->edx;
    g->eax = rd32(self);
    g->edx = t33;
    t34 = rd32(self);
    t35 = cow_thiscall(g, rd32(t34 + 0xd0u), self, 0);
    t36 = g->edx;
    wr32(sp0 - 0x124u, t35);
    wr32(sp0 - 0x128u, COW_IMG(0x1034f7e0u));
    wr32(sp0 - 0x12cu, sp0 - 0x100u);
    g->esp = sp0 - 0x118u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x1034f7e0u), t35, rd32(sp0 - 0x120u), rd32(sp0 - 0x11cu));
    t37 = rd32(sp0 - 0x118u);
    wr32(sp0 - 0x124u, t37);
    wr32(sp0 - 0x128u, sp0 - 0x100u);
    wr32(sp0 - 0x12cu, sp0 - 0x110u);
    g->eax = sp0 - 0x100u;
    g->edx = t37;
    g->esp = sp0 - 0x120u;
    t38 = cow_thiscall(g, COW_IMG(0x100d08b0u), self, 3, sp0 - 0x110u, sp0 - 0x100u, t37);
    t39 = g->edx;
    g->esi = rd32(sp0 - 0x11cu);
    g->edi = rd32(sp0 - 0x120u);
    g->edx = t39;
    return t38;
L_100d05ef: ;
    COW_AT(100d05ef)
    if ((rd32(edi + 0x78u) & 0xff000000u) != 0u) goto L_100d060b;
    COW_AT(100d05f8)
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x120u;
    t21 = cow_call_regs(g, COW_IMG(0x101cc4f0u), eax, g->ecx, g->edx, 1, 0);
    t22 = g->ecx;
    t23 = g->edx;
    if (t21 == 0u)
    {
        ecx = t22;
        edx = t23;
        goto L_100d060b;
    }
    eax = t21;
    edx = t23;
    COW_AT(100d0601)
    ecx = rd32(eax + 0x78u);
    zf = rd32(eax + 0x78u) == rd32(edi + 0x78u);
    eax = rd32(edi + 0x78u);
    goto L_100d0609;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100d0510(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100d0526u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x120u);
        in_esi = rd32(sp0 - 0x11cu);
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x100d052au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x120u);
        in_esi = rd32(sp0 - 0x11cu);
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x100d0538u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x100d0544u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_11c;
        uint32_t loc_120;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c = rd32(sp0 - 0x11cu);
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x100d0552u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x100d055du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x100d056bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x100d0579u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x100d057du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x100d0588u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x100d0591u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x100d05a0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x100d05a7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x100d05aeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x100d05b0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x100d05bau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x100d05c3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x100d05d4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x100d05e2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x100d05efu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x100d05f8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x100d0601u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x100d0609u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x100d060bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x100d0639u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x12cu, sp0 - 0x110u);
        wr32(sp0 - 0x128u, sp0 - 0x118u);
        wr32(sp0 - 0x124u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100d0644u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x12cu, sp0 - 0x110u);
        wr32(sp0 - 0x128u, sp0 - 0x118u);
        wr32(sp0 - 0x124u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    case 0x100d0655u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_118;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_118 = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x12cu, sp0 - 0x110u);
        wr32(sp0 - 0x128u, sp0 - 0x118u);
        wr32(sp0 - 0x124u, sp0 - 0x114u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100d0510(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100d0510(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
