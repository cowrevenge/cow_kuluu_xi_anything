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
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 72u);

    wr32(sp0 - 0x24u, in_esi);
    if (rd8(COW_IMG(0x10463908u)) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10463908u));
    }
    else
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10463908u));
        d1 = (double)rdf32(self + 0x1e4u);
        if ((cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
            d2 = fr(g, (double)rdf32(self + 0x1e4u) - (double)rdf32(COW_IMG(0x1032961cu)));
            wrf32(self + 0x1e4u, (float)d2);
        }
    }
    if (rd8(COW_IMG(0x104638f5u)) == 0u)
    {
        edx = in_edx;
        loc_24 = in_esi;
        goto L_10036741;
    }
    if (rd32(self + 0x19cu) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        wr32(sp0 - 0x28u, self + 0x1a0u);
        wr32(sp0 - 0x2cu, self + 0x54u);
        g->edx = in_edx;
        g->esp = sp0 - 0x24u;
        cow_cdecl(g, COW_IMG(0x10026eb0u), 2, self + 0x54u, self + 0x1a0u);
        t3 = g->edx;
        edx = t3;
    }
    if (rd32(self + 0xfcu) == 0u)
    {
        eax = rd32(self + 0xfcu);
        goto L_1003658b;
    }
    eax = rd32(self + 0xfcu);
    if (rd32(eax) == 0u) goto L_1003658b;
    g->eax = eax;
    g->esp = sp0 - 0x24u;
    t4 = cow_thiscall(g, COW_IMG(0x100473f0u), self, 0);
    t5 = g->ecx;
    if (t4 == 0u)
    {
        ecx = t5;
        goto L_10036580;
    }
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
    if (rd32(eax) == 0u)
    {
        loc_24 = rd32(sp0 - 0x24u);
        goto L_10036741;
    }
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
        wr32(sp0 - 0x28u, eax);
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        cow_call_regs(g, COW_IMG(0x100363b0u), sp0 - 0x10u, self, g->edx, 0, 2, sp0 - 0x10u, eax);
        t26 = g->edx;
        edx = t26;
        loc_20 = rd32(sp0 - 0x20u);
    }
    if ((int32_t)rd32(self + 0x1e0u) < 0)
    {
        loc_24 = rd32(sp0 - 0x24u);
        goto L_10036741;
    }
    eax = rd32(self + 0x1e0u);
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
    d29 = (double)rdf32(self + 0x1c0u);
    d30 = (double)rdf32(sp0 - 0x10u);
    if (d29 != d30) goto L_1003669f;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d29, d30, 0u);
    d31 = (double)rdf32(self + 0x1c4u);
    d32 = (double)rdf32(sp0 - 0xcu);
    if (d31 != d32) goto L_1003669f;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d31, d32, 0u);
    d33 = (double)rdf32(self + 0x1c8u);
    d34 = (double)rdf32(sp0 - 8u);
    if (d33 == d34) goto L_100366e6;
L_1003669f: ;
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
        wr32(sp0 - 0x28u, 0u);
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        t39 = rd32(self + 0x1e0u);
        wr32(sp0 - 0x30u, t39);
        g->esp = sp0 - 0x24u;
        cow_cdecl(g, COW_IMG(0x10038440u), 3, t39, sp0 - 0x10u, 0u);
    }
L_100366e6: ;
    if ((uint32_t)(int16_t)rd16(self + 0x1bcu) == rd32(sp0 - 0x20u))
    {
        eax = rd32(sp0 - 0x20u);
        goto L_1003673a;
    }
    eax = rd32(sp0 - 0x20u);
    ecx = (uint32_t)(int16_t)rd16(self + 0x1bcu);
    wr16(self + 0x1bcu, (uint16_t)eax);
    if (rd8(COW_IMG(0x104638f5u)) == 0u) goto L_1003673a;
    ecx = (ecx & 0xffffff00u) | rd8(COW_IMG(0x104638f5u));
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, eax);
    t40 = rd32(self + 0x1e0u);
    wr32(sp0 - 0x30u, t40);
    g->eax = eax;
    g->esp = sp0 - 0x24u;
    t41 = cow_cdecl(g, COW_IMG(0x10038470u), 3, t40, eax, 0u);
    g->esi = rd32(sp0 - 0x24u);
    return t41 & 0xffffff00u;
L_10036580: ;
    wr32(sp0 - 0x28u, self + 0x54u);
    wr32(sp0 - 0x2cu, sp0 - 0x1cu);
    eax = sp0 - 0x1cu;
    edx = self + 0x54u;
    loc_24 = rd32(sp0 - 0x24u);
L_10036594: ;
    g->esp = sp0 - 0x24u;
    cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x1cu, self + 0x54u);
    goto L_1003659c;
L_1003658b: ;
    wr32(sp0 - 0x28u, self + 0x54u);
    wr32(sp0 - 0x2cu, sp0 - 0x1cu);
    ecx = self + 0x54u;
    edx = sp0 - 0x1cu;
    loc_24 = in_esi;
    goto L_10036594;
L_1003671f: ;
    g->eax = rd32(self);
    g->edx = edx;
    t42 = rd32(self);
    g->esp = sp0 - 0x24u;
    t43 = cow_thiscall(g, rd32(t42 + 0x40u), self, 0);
    t44 = g->edx;
    eax = t43;
    edx = t44;
L_1003672f: ;
    if ((uint8_t)eax == 0u)
    {
        loc_24 = rd32(sp0 - 0x24u);
        goto L_10036741;
    }
    g->eax = eax;
    g->esp = sp0 - 0x24u;
    t48 = cow_thiscall(g, COW_IMG(0x10036420u), self, 0);
    eax = t48;
L_1003673a: ;
    g->esi = rd32(sp0 - 0x24u);
    return eax & 0xffffff00u;
L_10036728: ;
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
    if (rd32(self + 0xfcu) != 0u)
    {
        eax = rd32(self + 0xfcu);
        wr32(sp0 - 0x28u, self);
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        cow_thiscall(g, COW_IMG(0x1004e720u), rd32(eax), 1, self);
        t49 = g->edx;
        edx = t49;
        loc_24 = rd32(sp0 - 0x24u);
    }
    wr32(sp0 - 0x28u, 1u);
    g->eax = rd32(self);
    t50 = rd32(self);
    g->esp = sp0 - 0x24u;
    t51 = cow_thiscall(g, rd32(t50 + 0x18u), self, 1, 1u);
    g->esi = rd32(sp0 - 0x24u);
    return (t51 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100364e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100364e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
