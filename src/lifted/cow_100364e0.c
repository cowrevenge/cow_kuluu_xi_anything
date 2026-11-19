/* f_0x100364e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100364e0(Guest* g)
{
    double d1;
    double d2;
    double d23;
    double d29;
    double d30;
    double d31;
    double d32;
    double d33;
    double d34;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
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
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t3;
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 72u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100364efu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x24u); goto E_100364ef;
    case 0x10036504u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x24u); goto E_10036504;
    case 0x10036516u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x24u); goto E_10036516;
    case 0x10036523u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x24u); goto E_10036523;
    case 0x1003652du: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x24u); goto E_1003652d;
    case 0x10036540u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x24u); goto E_10036540;
    case 0x1003654au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x24u); goto E_1003654a;
    case 0x1003654fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x24u); goto E_1003654f;
    case 0x1003655au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_1003655a;
    case 0x10036580u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_10036580;
    case 0x1003658bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x24u); goto E_1003658b;
    case 0x10036594u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_10036594;
    case 0x1003659cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_1003659c;
    case 0x100365dau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_100365da;
    case 0x100365e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_100365e3;
    case 0x10036625u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_10036625;
    case 0x10036642u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_10036642;
    case 0x1003664fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_1003664f;
    case 0x1003665du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_1003665d;
    case 0x1003666cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_1003666c;
    case 0x1003667du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_1003667d;
    case 0x1003668eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_1003668e;
    case 0x1003669fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_1003669f;
    case 0x100366d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_100366d0;
    case 0x100366e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_100366e6;
    case 0x100366f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_100366f5;
    case 0x10036706u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_10036706;
    case 0x1003671fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_1003671f;
    case 0x10036728u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_10036728;
    case 0x1003672fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_1003672f;
    case 0x10036733u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_10036733;
    case 0x1003673au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_1003673a;
    case 0x10036741u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10036741;
    case 0x1003674bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1003674b;
    case 0x10036755u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10036755;
    default: break;
    }
#endif

    COW_AT(100364e0)
    wr32(sp0 - 0x24u, in_esi);
    if (rd8(COW_IMG(0x10463908u)) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10463908u));
    }
    else
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10463908u));
    COW_AT(100364ef)
        d1 = (double)rdf32(self + 0x1e4u);
        if ((cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
    COW_AT(10036504)
            d2 = fr(g, (double)rdf32(self + 0x1e4u) - (double)rdf32(COW_IMG(0x1032961cu)));
            wrf32(self + 0x1e4u, (float)d2);
        }
    }
    COW_AT(10036516)
    if (rd8(COW_IMG(0x104638f5u)) == 0u)
    {
        edx = in_edx;
        loc_24 = in_esi;
        goto L_10036741;
    }
    COW_AT(10036523)
    if (rd32(self + 0x19cu) == 0u)
    {
        edx = in_edx;
    }
    else
    {
    COW_AT(1003652d)
        wr32(sp0 - 0x28u, self + 0x1a0u);
        wr32(sp0 - 0x2cu, self + 0x54u);
        g->edx = in_edx;
        g->esp = sp0 - 0x24u;
        cow_cdecl(g, COW_IMG(0x10026eb0u), 2, self + 0x54u, self + 0x1a0u);
        t3 = g->edx;
        edx = t3;
    }
    COW_AT(10036540)
    if (rd32(self + 0xfcu) == 0u)
    {
        eax = rd32(self + 0xfcu);
        goto L_1003658b;
    }
    eax = rd32(self + 0xfcu);
    COW_AT(1003654a)
    if (rd32(eax) == 0u) goto L_1003658b;
    COW_AT(1003654f)
    g->eax = eax;
    g->esp = sp0 - 0x24u;
    t4 = cow_thiscall(g, COW_IMG(0x100473f0u), self, 0);
    t5 = g->ecx;
    if (t4 == 0u)
    {
        ecx = t5;
        goto L_10036580;
    }
    COW_AT(1003655a)
    wr32(sp0 - 0x28u, in_edi);
    wr32(sp0 - 0x2cu, self + 0x54u);
    g->eax = self + 0x54u;
    g->edx = rd32(COW_IMG(0x1047cf7cu));
    t6 = rd32(COW_IMG(0x1047cf7cu));
    t7 = rd32(rd32(COW_IMG(0x1047cf7cu)));
    g->esp = sp0 - 0x28u;
    t8 = cow_thiscall_cdecl(g, COW_IMG(0x100473f0u), self, 1, self + 0x54u);
    t9 = g->edx;
    wr32(sp0 - 0x30u, t8);
    wr32(sp0 - 0x34u, sp0 - 0x1cu);
    cow_thiscall(g, rd32(t7 + 0x50u), rd32(COW_IMG(0x1047cf7cu)), 3, sp0 - 0x1cu, t8, self + 0x54u);
L_1003659c: ;
    COW_AT(1003659c)
    t10 = rd32(self + 0x1d0u);
    wr32(sp0 - 0x10u, t10);
    t11 = rd32(self + 0x1d4u);
    wr32(sp0 - 0xcu, t11);
    t12 = rd32(self + 0x1d8u);
    wr32(sp0 - 8u, t12);
    t13 = (uint32_t)(int16_t)rd16(self + 0x1beu);
    wr32(sp0 - 0x20u, t13);
    t14 = rd32(self + 0x1dcu);
    wr32(sp0 - 4u, t14);
    if (rd32(self + 0x104u) == 0u)
    {
        edx = t14;
        loc_24 = rd32(sp0 - 0x24u);
        goto L_10036741;
    }
    eax = rd32(self + 0x104u);
    edx = t14;
    loc_10 = t10;
    loc_c = t11;
    loc_8 = t12;
    loc_20 = t13;
    loc_4 = t14;
    COW_AT(100365da)
    if (rd32(eax) == 0u)
    {
        loc_24 = rd32(sp0 - 0x24u);
        goto L_10036741;
    }
    COW_AT(100365e3)
    t15 = rd32(self + 0x1e9u);
    wr32(sp0 - 0x28u, t15);
    t16 = (edx & 0xffffff00u) | rd8(self + 0x1e8u);
    wr32(sp0 - 0x2cu, t16);
    t17 = rd32(self + 0x1b8u);
    wr32(sp0 - 0x30u, t17);
    t18 = rd32(self + 0x1b4u);
    wr32(sp0 - 0x34u, t18);
    t19 = rd32(self + 0x1b0u);
    wr32(sp0 - 0x38u, t19);
    wr32(sp0 - 0x3cu, sp0 - 0x1cu);
    wr32(sp0 - 0x40u, sp0 - 0x20u);
    wr32(sp0 - 0x44u, sp0 - 0x10u);
    g->eax = sp0 - 0x1cu;
    g->ecx = sp0 - 0x20u;
    g->edx = sp0 - 0x10u;
    g->esp = sp0 - 0x24u;
    t20 = cow_cdecl(g, COW_IMG(0x10036c70u), 8, sp0 - 0x10u, sp0 - 0x20u, sp0 - 0x1cu, t19, t18, t17, t16, t15);
    t21 = g->ecx;
    t22 = g->edx;
    if (t20 == 0u)
    {
        eax = t20;
        goto L_10036728;
    }
    eax = t20;
    ecx = t21;
    edx = t22;
    COW_AT(10036625)
    g->edx = edx;
    d23 = fr(g, (double)(int32_t)rd32(sp0 - 0x20u) * (double)rdf32(COW_IMG(0x10351704u)));
    fpush(g, d23);
    g->esp = sp0 - 0x24u;
    t24 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t25 = g->edx;
    wr32(sp0 - 0x20u, t24);
    if (rd32(self + 0x1e0u) != 0u)
    {
        edx = t25;
        loc_20 = t24;
    }
    else
    {
        eax = t24;
        edx = t25;
        loc_20 = t24;
    COW_AT(10036642)
        wr32(sp0 - 0x28u, eax);
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        cow_call_regs(g, COW_IMG(0x100363b0u), sp0 - 0x10u, self, g->edx, 0, 2, sp0 - 0x10u, eax);
        t26 = g->edx;
        edx = t26;
        loc_20 = rd32(sp0 - 0x20u);
    }
    COW_AT(1003664f)
    if ((int32_t)rd32(self + 0x1e0u) < 0)
    {
        loc_24 = rd32(sp0 - 0x24u);
        goto L_10036741;
    }
    eax = rd32(self + 0x1e0u);
    COW_AT(1003665d)
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t27 = cow_call_regs(g, COW_IMG(0x100367c0u), eax, self, g->edx, 1, 0);
    t28 = g->edx;
    if ((uint8_t)t27 == 0u)
    {
        edx = t28;
        goto L_1003671f;
    }
    eax = t27;
    COW_AT(1003666c)
    d29 = (double)rdf32(self + 0x1c0u);
    d30 = (double)rdf32(sp0 - 0x10u);
    if (d29 != d30) goto L_1003669f;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d29, d30, 0u);
    COW_AT(1003667d)
    d31 = (double)rdf32(self + 0x1c4u);
    d32 = (double)rdf32(sp0 - 0xcu);
    if (d31 != d32) goto L_1003669f;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d31, d32, 0u);
    COW_AT(1003668e)
    d33 = (double)rdf32(self + 0x1c8u);
    d34 = (double)rdf32(sp0 - 8u);
    if (d33 == d34) goto L_100366e6;
L_1003669f: ;
    COW_AT(1003669f)
    t35 = rd32(sp0 - 0x10u);
    t36 = rd32(sp0 - 8u);
    t37 = rd32(sp0 - 0xcu);
    wr32(self + 0x1c0u, t35);
    t38 = rd32(sp0 - 4u);
    wr32(self + 0x1c4u, t37);
    wr32(self + 0x1c8u, t36);
    wr32(self + 0x1ccu, t38);
    if (rd8(COW_IMG(0x104638f5u)) != 0u)
    {
        ecx = t38;
    COW_AT(100366d0)
        wr32(sp0 - 0x28u, 0u);
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        t39 = rd32(self + 0x1e0u);
        wr32(sp0 - 0x30u, t39);
        g->esp = sp0 - 0x24u;
        cow_cdecl(g, COW_IMG(0x10038440u), 3, t39, sp0 - 0x10u, 0u);
    }
L_100366e6: ;
    COW_AT(100366e6)
    if ((uint32_t)(int16_t)rd16(self + 0x1bcu) == rd32(sp0 - 0x20u))
    {
        eax = rd32(sp0 - 0x20u);
        goto L_1003673a;
    }
    eax = rd32(sp0 - 0x20u);
    ecx = (uint32_t)(int16_t)rd16(self + 0x1bcu);
    COW_AT(100366f5)
    wr16(self + 0x1bcu, (uint16_t)eax);
    if (rd8(COW_IMG(0x104638f5u)) == 0u) goto L_1003673a;
    ecx = (ecx & 0xffffff00u) | rd8(COW_IMG(0x104638f5u));
    COW_AT(10036706)
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, eax);
    t40 = rd32(self + 0x1e0u);
    wr32(sp0 - 0x30u, t40);
    g->eax = eax;
    g->esp = sp0 - 0x24u;
    t41 = cow_cdecl(g, COW_IMG(0x10038470u), 3, t40, eax, 0u);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = in_edi;
    return t41 & 0xffffff00u;
L_10036580: ;
    COW_AT(10036580)
    wr32(sp0 - 0x28u, self + 0x54u);
    wr32(sp0 - 0x2cu, sp0 - 0x1cu);
    eax = sp0 - 0x1cu;
    edx = self + 0x54u;
    loc_24 = rd32(sp0 - 0x24u);
L_10036594: ;
    COW_AT(10036594)
    g->esp = sp0 - 0x24u;
    cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x1cu, self + 0x54u);
    goto L_1003659c;
L_1003658b: ;
    COW_AT(1003658b)
    wr32(sp0 - 0x28u, self + 0x54u);
    wr32(sp0 - 0x2cu, sp0 - 0x1cu);
    ecx = self + 0x54u;
    edx = sp0 - 0x1cu;
    loc_24 = in_esi;
    goto L_10036594;
L_1003671f: ;
    COW_AT(1003671f)
    g->eax = rd32(self);
    g->edx = edx;
    t42 = rd32(self);
    g->esp = sp0 - 0x24u;
    t43 = cow_thiscall(g, rd32(t42 + 0x40u), self, 0);
    t44 = g->edx;
    eax = t43;
    edx = t44;
L_1003672f: ;
    COW_AT(1003672f)
    if ((uint8_t)eax == 0u)
    {
        loc_24 = rd32(sp0 - 0x24u);
        goto L_10036741;
    }
    COW_AT(10036733)
    g->eax = eax;
    g->esp = sp0 - 0x24u;
    t48 = cow_thiscall(g, COW_IMG(0x10036420u), self, 0);
    eax = t48;
L_1003673a: ;
    COW_AT(1003673a)
    g->esi = rd32(sp0 - 0x24u);
    g->edi = in_edi;
    return eax & 0xffffff00u;
L_10036728: ;
    COW_AT(10036728)
    g->eax = eax;
    g->edx = rd32(self);
    t45 = rd32(self);
    g->esp = sp0 - 0x24u;
    t46 = cow_thiscall(g, rd32(t45 + 0x40u), self, 0);
    t47 = g->edx;
    eax = t46;
    edx = t47;
    goto L_1003672f;
L_10036741: ;
    COW_AT(10036741)
    if (rd32(self + 0xfcu) != 0u)
    {
        eax = rd32(self + 0xfcu);
    COW_AT(1003674b)
        wr32(sp0 - 0x28u, self);
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        cow_thiscall(g, COW_IMG(0x1004e720u), rd32(eax), 1, self);
        t49 = g->edx;
        edx = t49;
        loc_24 = rd32(sp0 - 0x24u);
    }
    COW_AT(10036755)
    wr32(sp0 - 0x28u, 1u);
    g->eax = rd32(self);
    t50 = rd32(self);
    g->esp = sp0 - 0x24u;
    t51 = cow_thiscall(g, rd32(t50 + 0x18u), self, 1, 1u);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = in_edi;
    return (t51 & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100364e0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100364efu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10036504u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10036516u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10036523u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1003652du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10036540u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1003654au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1003654fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1003655au:
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
    case 0x10036580u:
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
    case 0x1003658bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10036594u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x2cu, sp0 - 0x1cu);
        wr32(sp0 - 0x28u, self + 0x54u);
        (void)sp0;
        return 1;
    }
    case 0x1003659cu:
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
    case 0x100365dau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_10;
        uint32_t loc_20;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x100365e3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_10;
        uint32_t loc_20;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10036625u:
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
        wr32(sp0 - 0x44u, sp0 - 0x10u);
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        wr32(sp0 - 0x3cu, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x10036642u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x44u, sp0 - 0x10u);
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        wr32(sp0 - 0x3cu, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x1003664fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x44u, sp0 - 0x10u);
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        wr32(sp0 - 0x3cu, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x1003665du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x44u, sp0 - 0x10u);
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        wr32(sp0 - 0x3cu, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x1003666cu:
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
        wr32(sp0 - 0x44u, sp0 - 0x10u);
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        wr32(sp0 - 0x3cu, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x1003667du:
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
        wr32(sp0 - 0x44u, sp0 - 0x10u);
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        wr32(sp0 - 0x3cu, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x1003668eu:
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
        wr32(sp0 - 0x44u, sp0 - 0x10u);
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        wr32(sp0 - 0x3cu, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x1003669fu:
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
        wr32(sp0 - 0x44u, sp0 - 0x10u);
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        wr32(sp0 - 0x3cu, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x100366d0u:
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
        wr32(sp0 - 0x44u, sp0 - 0x10u);
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        wr32(sp0 - 0x3cu, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x100366e6u:
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
        wr32(sp0 - 0x44u, sp0 - 0x10u);
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        wr32(sp0 - 0x3cu, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x100366f5u:
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
        wr32(sp0 - 0x44u, sp0 - 0x10u);
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        wr32(sp0 - 0x3cu, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x10036706u:
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
        wr32(sp0 - 0x44u, sp0 - 0x10u);
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        wr32(sp0 - 0x3cu, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x1003671fu:
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
        wr32(sp0 - 0x44u, sp0 - 0x10u);
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        wr32(sp0 - 0x3cu, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x10036728u:
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
        wr32(sp0 - 0x44u, sp0 - 0x10u);
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        wr32(sp0 - 0x3cu, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x1003672fu:
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
        wr32(sp0 - 0x44u, sp0 - 0x10u);
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        wr32(sp0 - 0x3cu, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x10036733u:
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
        wr32(sp0 - 0x44u, sp0 - 0x10u);
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        wr32(sp0 - 0x3cu, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x1003673au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x44u, sp0 - 0x10u);
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        wr32(sp0 - 0x3cu, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x10036741u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_10;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1003674bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_10;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10036755u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_10;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100364e0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100364e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
