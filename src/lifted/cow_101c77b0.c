/* f_0x101c77b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101c77b0(Guest* g)
{
    double d13;
    double d17;
    double d18;
    double d24;
    double d27;
    double d30;
    double d38;
    double d42;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_28;
    double loc_2c_f;
    uint32_t loc_30;
    uint32_t loc_34;
    double loc_38_f;
    uint32_t loc_3c;
    double loc_40_f;
    double loc_44_f;
    uint32_t loc_48;
    double loc_4c_f;
    uint32_t loc_50;
    uint32_t loc_54;
    uint32_t loc_58;
    uint32_t loc_5c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t25;
    uint32_t t26;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t43;
    uint32_t t44;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 100u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101c77cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; in_edi = rd32(sp0 - 0x5cu); in_esi = rd32(sp0 - 0x58u); in_ebp = rd32(sp0 - 0x54u); in_ebx = rd32(sp0 - 0x50u); g->ebp = rd32(sp0 - 0x54u); g->ebx = rd32(sp0 - 0x50u); g->edi = rd32(sp0 - 0x5cu); g->esi = rd32(sp0 - 0x58u); goto E_101c77cf;
    case 0x101c781au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; in_edi = rd32(sp0 - 0x5cu); in_esi = rd32(sp0 - 0x58u); in_ebp = rd32(sp0 - 0x54u); in_ebx = rd32(sp0 - 0x50u); loc_44_f = rdf32(sp0 - 0x44u); loc_40_f = rdf32(sp0 - 0x40u); loc_38_f = rdf32(sp0 - 0x38u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_18 = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x54u); g->ebx = rd32(sp0 - 0x50u); g->edi = rd32(sp0 - 0x5cu); g->esi = rd32(sp0 - 0x58u); goto E_101c781a;
    case 0x101c7822u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44_f = rdf32(sp0 - 0x44u); loc_40_f = rdf32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38_f = rdf32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_18 = rd32(sp0 - 0x18u); goto E_101c7822;
    case 0x101c7832u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_48 = rd32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_40_f = rdf32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38_f = rdf32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_18 = rd32(sp0 - 0x18u); goto E_101c7832;
    case 0x101c7845u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; goto E_101c7845;
    case 0x101c7858u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; goto E_101c7858;
    case 0x101c786fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; goto E_101c786f;
    case 0x101c787bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_4c_f = rdf32(sp0 - 0x4cu); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_1c = rd32(sp0 - 0x1cu); goto E_101c787b;
    case 0x101c7894u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101c7894;
    case 0x101c78b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101c78b0;
    case 0x101c78d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101c78d6;
    case 0x101c78f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101c78f5;
    case 0x101c791du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_4c_f = rdf32(sp0 - 0x4cu); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); goto E_101c791d;
    case 0x101c7925u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_48 = rd32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); loc_40_f = rdf32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38_f = rdf32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_18 = rd32(sp0 - 0x18u); goto E_101c7925;
    case 0x101c7951u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44_f = rdf32(sp0 - 0x44u); loc_40_f = rdf32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38_f = rdf32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_18 = rd32(sp0 - 0x18u); goto E_101c7951;
    case 0x101c7955u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44_f = rdf32(sp0 - 0x44u); loc_40_f = rdf32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38_f = rdf32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_18 = rd32(sp0 - 0x18u); goto E_101c7955;
    case 0x101c795eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; goto E_101c795e;
    default: break;
    }
#endif

    COW_AT(101c77b0)
    wr32(sp0 - 0x50u, in_ebx);
    wr32(sp0 - 0x54u, in_ebp);
    wr32(sp0 - 0x58u, in_esi);
    wr32(sp0 - 0x5cu, in_edi);
    t1 = arg1 * arg2 * 4u;
    wr32(sp0 - 0x60u, t1);
    g->eax = t1;
    g->esp = sp0 - 0x54u;
    t2 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 3, t1, in_edi, in_esi);
    t3 = g->ecx;
    t4 = g->edx;
    eax = t2;
    ecx = t3;
    edx = t4;
    COW_AT(101c77cf)
    d5 = fr(g, (double)(int32_t)rd32(self + 4u) / (double)(int32_t)arg1);
    wr32(sp0 - 0x18u, eax);
    wr32(sp0 - 0x48u, 0u);
    wrf32(sp0 - 0x38u, (float)(double)(float)d5);
    d6 = fr(g, (double)(int32_t)rd32(self + 8u) / (double)(int32_t)arg2);
    wrf32(sp0 - 0x2cu, (float)(double)(float)d6);
    d7 = fr(g, (double)(float)d5 * (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0x40u, (float)(double)(float)d7);
    d8 = fr(g, (double)(float)d6 * (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0x44u, (float)(double)(float)d8);
    if ((int32_t)arg2 <= 0)
    {
        ebx = eax;
        loc_50 = in_ebx;
        loc_54 = in_ebp;
        loc_58 = in_esi;
        loc_5c = in_edi;
    }
    else
    {
        ebx = eax;
        loc_18 = eax;
        loc_38_f = (double)(float)d5;
        loc_2c_f = (double)(float)d6;
        loc_40_f = (double)(float)d7;
        loc_44_f = (double)(float)d8;
    COW_AT(101c781a)
        wr32(sp0 - 0x30u, ebx);
        wr32(sp0 - 0x28u, arg2);
        loc_50 = in_ebx;
        loc_54 = in_ebp;
        loc_58 = in_esi;
        loc_5c = in_edi;
        loc_30 = ebx;
        loc_28 = arg2;
L_101c7822: ;
    COW_AT(101c7822)
        wr32(sp0 - 0x4cu, 0u);
        if ((int32_t)arg1 <= 0)
        {
            loc_48 = rd32(sp0 - 0x48u);
        }
        else
        {
            loc_48 = rd32(sp0 - 0x48u);
    COW_AT(101c7832)
            g->ecx = ecx;
            g->edx = edx;
            d9 = fr(g, fr(g, cow_bits2f(loc_48) + loc_44_f) + (double)rdf32(COW_IMG(0x10329a08u)));
            fpush(g, d9);
            g->esp = sp0 - 0x5cu;
            t10 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
            t11 = g->ecx;
            t12 = g->edx;
            eax = t10;
            ecx = t11;
            edx = t12;
    COW_AT(101c7845)
            d13 = fr(g, (double)rdf32(sp0 - 0x48u) + (double)rdf32(COW_IMG(0x10329a08u)));
            wr32(sp0 - 0x20u, eax);
            g->ecx = ecx;
            g->edx = edx;
            fpush(g, d13);
            g->esp = sp0 - 0x5cu;
            t14 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
            t15 = g->ecx;
            t16 = g->edx;
            eax = t14;
            ecx = t15;
            edx = t16;
    COW_AT(101c7858)
            d17 = fr(g, (double)rdf32(sp0 - 0x48u) - (double)rdf32(sp0 - 0x44u));
            wr32(sp0 - 0x24u, eax);
            g->ecx = ecx;
            g->edx = edx;
            d18 = fr(g, d17 + (double)rdf32(COW_IMG(0x10329a08u)));
            fpush(g, d18);
            g->esp = sp0 - 0x5cu;
            t19 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
            t20 = g->ecx;
            t21 = g->edx;
            eax = t19;
            ecx = t20;
            edx = t21;
    COW_AT(101c786f)
            wr32(sp0 - 0x1cu, eax);
            wr32(sp0 - 0x3cu, ebx);
            wr32(sp0 - 0x34u, arg1);
            loc_1c = eax;
            loc_3c = ebx;
            loc_34 = arg1;
            loc_4c_f = (double)rdf32(sp0 - 0x4cu);
L_101c787b: ;
    COW_AT(101c787b)
            g->edx = edx;
            t22 = rd32(sp0 - 0x24u);
            t23 = rd32(self + 4u);
            d24 = fr(g, loc_4c_f + (double)rdf32(COW_IMG(0x10329a08u)));
            fpush(g, d24);
            g->esp = sp0 - 0x5cu;
            t25 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
            t26 = g->edx;
            eax = t25;
            edx = t26;
            esi = t22 * t23;
            edi = t23;
    COW_AT(101c7894)
            d27 = fr(g, fr(g, (double)rdf32(sp0 - 0x4cu) + (double)rdf32(sp0 - 0x40u)) + (double)rdf32(COW_IMG(0x10329a08u)));
            wr32(sp0 - 0x14u, eax + esi);
            g->ecx = eax + esi;
            fpush(g, d27);
            g->esp = sp0 - 0x5cu;
            t28 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
            t29 = g->ecx;
            ecx = t29;
            ebx = eax;
            eax = t28;
    COW_AT(101c78b0)
            d30 = fr(g, fr(g, (double)rdf32(sp0 - 0x4cu) - (double)rdf32(sp0 - 0x40u)) + (double)rdf32(COW_IMG(0x10329a08u)));
            wr32(sp0 - 0x10u, eax + esi);
            t31 = ebx + rd32(sp0 - 0x20u) * edi;
            wr32(sp0 - 8u, t31);
            g->edx = t31;
            fpush(g, d30);
            g->esp = sp0 - 0x5cu;
            t32 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax + esi, g->ecx, g->edx, 1, 0);
            t33 = g->edx;
            eax = t32;
            edx = t33;
    COW_AT(101c78d6)
            wr32(sp0 - 0xcu, eax + esi);
            wr32(sp0 - 0x60u, sp0 - 0x14u);
            t34 = ebx + rd32(sp0 - 0x1cu) * edi;
            wr32(sp0 - 4u, t34);
            g->eax = t34;
            g->edx = edx;
            g->esp = sp0 - 0x5cu;
            t35 = cow_thiscall(g, COW_IMG(0x101c7980u), self, 1, sp0 - 0x14u);
            t36 = g->edx;
            eax = t35;
            edx = t36;
    COW_AT(101c78f5)
            t37 = rd32(sp0 - 0x3cu);
            d38 = fr(g, (double)rdf32(sp0 - 0x4cu) + (double)rdf32(sp0 - 0x38u));
            wr32(t37, eax);
            wr32(sp0 - 0x3cu, t37 + 4u);
            t39 = rd32(sp0 - 0x34u) - 1u;
            t40 = rd32(sp0 - 0x34u);
            wr32(sp0 - 0x34u, t39);
            wrf32(sp0 - 0x4cu, (float)(double)(float)d38);
            if (t40 != 1u)
            {
                eax = t39;
                ecx = t37 + 4u;
                loc_1c = rd32(sp0 - 0x1cu);
                loc_3c = t37 + 4u;
                loc_34 = t39;
                loc_4c_f = (double)(float)d38;
                goto L_101c787b;
            }
            ecx = t37 + 4u;
    COW_AT(101c791d)
            loc_50 = rd32(sp0 - 0x50u);
            loc_54 = rd32(sp0 - 0x54u);
            loc_58 = rd32(sp0 - 0x58u);
            loc_5c = rd32(sp0 - 0x5cu);
            loc_18 = rd32(sp0 - 0x18u);
            loc_48 = rd32(sp0 - 0x48u);
            loc_38_f = (double)rdf32(sp0 - 0x38u);
            loc_2c_f = (double)rdf32(sp0 - 0x2cu);
            loc_40_f = (double)rdf32(sp0 - 0x40u);
            loc_44_f = (double)rdf32(sp0 - 0x44u);
            loc_30 = rd32(sp0 - 0x30u);
            loc_28 = rd32(sp0 - 0x28u);
        }
    COW_AT(101c7925)
        t41 = arg1 * 4u + loc_30;
        wr32(sp0 - 0x30u, t41);
        wr32(sp0 - 0x28u, loc_28 - 1u);
        d42 = (double)(float)fr(g, cow_bits2f(loc_48) + loc_2c_f);
        wrf32(sp0 - 0x48u, (float)d42);
        if (loc_28 != 1u)
        {
            eax = loc_28 - 1u;
            ebx = t41;
            loc_30 = t41;
            loc_28 = loc_28 - 1u;
            goto L_101c7822;
        }
        eax = loc_28 - 1u;
    COW_AT(101c7951)
        ebx = loc_18;
    }
    COW_AT(101c7955)
    t43 = rd32(self + 0xcu);
    wr32(sp0 - 0x60u, t43);
    g->esp = sp0 - 0x5cu;
    cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, t43, 1, 1, t43);
    t44 = g->edx;
    edx = t44;
    COW_AT(101c795e)
    wr32(self + 8u, arg2);
    wr32(self + 4u, arg1);
    wr32(self + 0xcu, ebx);
    g->ebx = rd32(sp0 - 0x50u);
    g->esi = rd32(sp0 - 0x58u);
    g->edi = rd32(sp0 - 0x5cu);
    g->ebp = rd32(sp0 - 0x54u);
    g->edx = edx;
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101c77b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101c77cfu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        in_edi = rd32(sp0 - 0x5cu);
        in_esi = rd32(sp0 - 0x58u);
        in_ebp = rd32(sp0 - 0x54u);
        in_ebx = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x60u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101c781au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        double loc_2c_f;
        double loc_38_f;
        double loc_40_f;
        double loc_44_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        in_edi = rd32(sp0 - 0x5cu);
        in_esi = rd32(sp0 - 0x58u);
        in_ebp = rd32(sp0 - 0x54u);
        in_ebx = rd32(sp0 - 0x50u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x5cu;
        g->esi = arg1;
        g->edi = arg2;
        wr32(sp0 - 0x48u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101c7822u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_18;
        uint32_t loc_28;
        double loc_2c_f;
        uint32_t loc_30;
        uint32_t loc_34;
        double loc_38_f;
        uint32_t loc_3c;
        double loc_40_f;
        double loc_44_f;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x5cu;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101c7832u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_18;
        uint32_t loc_28;
        double loc_2c_f;
        uint32_t loc_30;
        uint32_t loc_34;
        double loc_38_f;
        uint32_t loc_3c;
        double loc_40_f;
        double loc_44_f;
        uint32_t loc_48;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x5cu;
        g->esi = arg1;
        wr32(sp0 - 0x4cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101c7845u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c7858u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c786fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c787bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_34;
        uint32_t loc_3c;
        double loc_4c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_4c_f = rdf32(sp0 - 0x4cu);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x101c7894u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x101c78b0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x101c78d6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x101c78f5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x60u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x101c791du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_3c;
        double loc_4c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_4c_f = rdf32(sp0 - 0x4cu);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x60u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x101c7925u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_18;
        uint32_t loc_28;
        double loc_2c_f;
        uint32_t loc_30;
        uint32_t loc_34;
        double loc_38_f;
        uint32_t loc_3c;
        double loc_40_f;
        double loc_44_f;
        uint32_t loc_48;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x5cu;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101c7951u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_18;
        uint32_t loc_28;
        double loc_2c_f;
        uint32_t loc_30;
        uint32_t loc_34;
        double loc_38_f;
        uint32_t loc_3c;
        double loc_40_f;
        double loc_44_f;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x5cu;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101c7955u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_18;
        uint32_t loc_28;
        double loc_2c_f;
        uint32_t loc_30;
        uint32_t loc_34;
        double loc_38_f;
        uint32_t loc_3c;
        double loc_40_f;
        double loc_44_f;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44_f = rdf32(sp0 - 0x44u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x5cu;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101c795eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        g->esp = sp0 - 0x60u;
        g->esi = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101c77b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101c77b0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
