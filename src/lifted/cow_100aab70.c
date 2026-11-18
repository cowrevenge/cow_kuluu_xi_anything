/* f_0x100aab70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_100aab70(Guest* g)
{
    double d16;
    double d17;
    double d18;
    double d19;
    double d20;
    double d3;
    double d31;
    double d33;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    double loc_10_f;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t2;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t30;
    uint32_t t32;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t4;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 56u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100aabb6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100aabb6;
    case 0x100aabc1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100aabc1;
    case 0x100aabcbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); goto E_100aabcb;
    case 0x100aac00u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); goto E_100aac00;
    case 0x100aac1du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); goto E_100aac1d;
    case 0x100aac27u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_100aac27;
    case 0x100aac44u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_10_f = rdf32(sp0 - 0x10u); goto E_100aac44;
    case 0x100aac49u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100aac49;
    case 0x100aac54u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100aac54;
    case 0x100aac5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); goto E_100aac5e;
    case 0x100aac93u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); goto E_100aac93;
    case 0x100aacb0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); goto E_100aacb0;
    case 0x100aacbau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_100aacba;
    case 0x100aacfcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); goto E_100aacfc;
    case 0x100aad19u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_100aad19;
    case 0x100aad31u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100aad31;
    default: break;
    }
#endif

    COW_AT(100aab70)
    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x1cu;
    cow_call_regs(g, COW_IMG(0x10014cf0u), in_eax, g->ecx, g->edx, 1, 0);
    t1 = g->ecx;
    t2 = g->edx;
    d3 = cow_take_float(g);
    t4 = rd32(self + 0x144u);
    d5 = fr(g, (double)rdf32(self + 0x144u) - d3);
    wr32(self + 0x148u, t4);
    wrf32(self + 0x144u, (float)d5);
    wrf32(sp0 - 0x10u, (float)(double)(float)d3);
    if ((cow_fsw(g, d5, (double)rdf32(COW_IMG(0x103295d8u)), 1u) & 0x4100u) != 0u)
    {
        eax = (uint16_t)cow_fsw(g, d3, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        ecx = t1;
        edx = t2;
        loc_10_f = (double)(float)d3;
    COW_AT(100aac49)
        if ((eax & 0x4100u) != 0u)
        {
            loc_14 = in_ebx;
            loc_18 = in_esi;
            loc_1c = in_edi;
        }
        else
        {
            eax = eax & 0x4100u;
    COW_AT(100aac54)
            loc_14 = in_ebx;
            loc_18 = in_esi;
            loc_1c = in_edi;
L_100aac5e: ;
    COW_AT(100aac5e)
            d17 = fr(g, (double)rdf32(arg1) + (double)rdf32(self + 0x130u));
            wrf32(sp0 - 0xcu, (float)(double)(float)d17);
            d18 = fr(g, (double)rdf32(arg1 + 4u) + (double)rdf32(self + 0x134u));
            wrf32(sp0 - 8u, (float)(double)(float)d18);
            d19 = fr(g, (double)rdf32(arg1 + 8u) + (double)rdf32(self + 0x138u));
            wrf32(sp0 - 4u, (float)(double)(float)d19);
            d20 = (double)rdf32(self + 0x14cu);
            if (!(d20 < (double)rdf32(COW_IMG(0x103295d8u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d20, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                goto L_100aacb0;
            }
    COW_AT(100aac93)
            wr32(sp0 - 0x20u, 0x3f4f5c28u);
            wr32(sp0 - 0x24u, self + 0x150u);
            wr32(sp0 - 0x28u, sp0 - 0xcu);
            g->eax = self + 0x150u;
            g->ecx = sp0 - 0xcu;
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            t21 = cow_cdecl(g, COW_IMG(0x100aab30u), 3, sp0 - 0xcu, self + 0x150u, 0x3f4f5c28u);
            t22 = g->ecx;
            t23 = g->edx;
            if ((uint8_t)t21 != 0u)
            {
                ecx = t22;
                goto L_100aacba;
            }
            eax = t21;
            ecx = t22;
            edx = t23;
            loc_14 = rd32(sp0 - 0x14u);
            loc_18 = rd32(sp0 - 0x18u);
            loc_1c = rd32(sp0 - 0x1cu);
            loc_10_f = (double)rdf32(sp0 - 0x10u);
L_100aacb0: ;
    COW_AT(100aacb0)
            wr32(sp0 - 0x20u, self + 0x130u);
            wr32(sp0 - 0x24u, arg1);
            g->ecx = ecx;
            g->esp = sp0 - 0x1cu;
            cow_cdecl(g, COW_IMG(0x10026f20u), 2, arg1, self + 0x130u);
            t24 = g->ecx;
            ecx = t24;
L_100aacba: ;
    COW_AT(100aacba)
            t25 = rd32(self + 0x140u);
            wr32(sp0 - 0x20u, t25);
            wr32(sp0 - 0x24u, self + 0x130u);
            wr32(sp0 - 0x28u, sp0 - 0xcu);
            g->eax = sp0 - 0xcu;
            g->edx = t25;
            g->esp = sp0 - 0x1cu;
            t26 = cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0xcu, self + 0x130u, t25);
            t27 = g->edx;
            wr32(sp0 - 0x2cu, sp0 - 0xcu);
            wr32(sp0 - 0x30u, self + 0x130u);
            wr32(sp0 - 0x34u, self + 0x130u);
            g->ecx = sp0 - 0xcu;
            g->edx = t27;
            g->esp = sp0 - 0x28u;
            t28 = cow_cdecl(g, COW_IMG(0x10027120u), 3, self + 0x130u, self + 0x130u, sp0 - 0xcu);
            t29 = g->ecx;
            t30 = g->edx;
            d31 = fr(g, (double)rdf32(sp0 - 0x10u) - (double)rdf32(COW_IMG(0x1032961cu)));
            wrf32(sp0 - 0x10u, (float)(double)(float)d31);
            if ((cow_fsw(g, d31, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) == 0u)
            {
                eax = cow_fsw(g, d31, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
                ecx = t29;
                edx = t30;
                loc_14 = rd32(sp0 - 0x14u);
                loc_18 = rd32(sp0 - 0x18u);
                loc_1c = rd32(sp0 - 0x1cu);
                loc_10_f = (double)(float)d31;
                goto L_100aac5e;
            }
            ecx = t29;
            edx = t30;
            loc_14 = rd32(sp0 - 0x14u);
            loc_18 = rd32(sp0 - 0x18u);
            loc_1c = rd32(sp0 - 0x1cu);
        }
    }
    else
    {
        eax = (uint16_t)cow_fsw(g, d3, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        ecx = t1;
        edx = t2;
        loc_10_f = (double)(float)d3;
    COW_AT(100aabb6)
        if ((eax & 0x4100u) != 0u)
        {
            loc_14 = in_ebx;
            loc_18 = in_esi;
            loc_1c = in_edi;
        }
        else
        {
            eax = eax & 0x4100u;
    COW_AT(100aabc1)
            loc_14 = in_ebx;
            loc_18 = in_esi;
            loc_1c = in_edi;
L_100aabcb: ;
    COW_AT(100aabcb)
            d6 = fr(g, (double)rdf32(arg1) + (double)rdf32(self + 0x130u));
            wrf32(sp0 - 0xcu, (float)(double)(float)d6);
            d7 = fr(g, (double)rdf32(arg1 + 4u) + (double)rdf32(self + 0x134u));
            wrf32(sp0 - 8u, (float)(double)(float)d7);
            d8 = fr(g, (double)rdf32(arg1 + 8u) + (double)rdf32(self + 0x138u));
            wrf32(sp0 - 4u, (float)(double)(float)d8);
            d9 = (double)rdf32(self + 0x14cu);
            if (!(d9 < (double)rdf32(COW_IMG(0x103295d8u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d9, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                goto L_100aac1d;
            }
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d9, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100aac00)
            wr32(sp0 - 0x20u, 0x3f4f5c28u);
            wr32(sp0 - 0x24u, self + 0x150u);
            wr32(sp0 - 0x28u, sp0 - 0xcu);
            g->eax = eax;
            g->ecx = self + 0x150u;
            g->edx = sp0 - 0xcu;
            g->esp = sp0 - 0x1cu;
            t10 = cow_cdecl(g, COW_IMG(0x100aab30u), 3, sp0 - 0xcu, self + 0x150u, 0x3f4f5c28u);
            t11 = g->ecx;
            t12 = g->edx;
            if ((uint8_t)t10 != 0u)
            {
                eax = t10;
                ecx = t11;
                edx = t12;
                goto L_100aac27;
            }
            eax = t10;
            ecx = t11;
            edx = t12;
            loc_14 = rd32(sp0 - 0x14u);
            loc_18 = rd32(sp0 - 0x18u);
            loc_1c = rd32(sp0 - 0x1cu);
            loc_10_f = (double)rdf32(sp0 - 0x10u);
L_100aac1d: ;
    COW_AT(100aac1d)
            wr32(sp0 - 0x20u, self + 0x130u);
            wr32(sp0 - 0x24u, arg1);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            t13 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, arg1, self + 0x130u);
            t14 = g->ecx;
            t15 = g->edx;
            eax = t13;
            ecx = t14;
            edx = t15;
L_100aac27: ;
    COW_AT(100aac27)
            d16 = fr(g, (double)rdf32(sp0 - 0x10u) - (double)rdf32(COW_IMG(0x1032961cu)));
            wrf32(sp0 - 0x10u, (float)(double)(float)d16);
            if ((cow_fsw(g, d16, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) == 0u)
            {
                eax = cow_fsw(g, d16, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
                loc_14 = rd32(sp0 - 0x14u);
                loc_18 = rd32(sp0 - 0x18u);
                loc_1c = rd32(sp0 - 0x1cu);
                loc_10_f = (double)(float)d16;
                goto L_100aabcb;
            }
    COW_AT(100aac44)
            loc_14 = rd32(sp0 - 0x14u);
            loc_18 = rd32(sp0 - 0x18u);
            loc_1c = rd32(sp0 - 0x1cu);
        }
    }
    COW_AT(100aacfc)
    wr32(sp0 - 0x20u, self + 0x130u);
    wr32(sp0 - 0x24u, self + 0x130u);
    g->eax = self + 0x130u;
    g->esp = sp0 - 0x1cu;
    t32 = cow_cdecl(g, COW_IMG(0x10027530u), 2, self + 0x130u, self + 0x130u);
    d33 = cow_take_float(g);
    if (!(d33 < (double)rdf32(COW_IMG(0x1032e83cu))))
    {
        eax = (t32 & 0xffff0000u) | (uint16_t)cow_fsw(g, d33, (double)rdf32(COW_IMG(0x1032e83cu)), 0u);
    }
    else
    {
        eax = (t32 & 0xffff0000u) | (uint16_t)cow_fsw(g, d33, (double)rdf32(COW_IMG(0x1032e83cu)), 0u);
    COW_AT(100aad19)
        t34 = rd32(self);
        wr8(self + 0x102u, 0u);
        g->eax = eax;
        g->edx = t34;
        g->esp = sp0 - 0x1cu;
        t35 = cow_thiscall(g, rd32(t34 + 0x164u), self, 0);
        t36 = g->edx;
        t37 = cow_call_regs(g, COW_IMG(0x10083310u), t35, self, g->edx, 1, 0);
        eax = t37;
    }
    COW_AT(100aad31)
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100aab70(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100aabb6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100aabc1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100aabcbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_10_f;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebx = self + 0x130u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100aac00u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_10_f;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebx = self + 0x130u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100aac1du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_10_f;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebx = self + 0x130u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100aac27u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x1cu;
        g->ebx = self + 0x130u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100aac44u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_10_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_10_f = rdf32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100aac49u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100aac54u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100aac5eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_10_f;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebx = arg1;
        g->edi = self + 0x130u;
        (void)sp0;
        return 1;
    }
    case 0x100aac93u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_10_f;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebx = arg1;
        g->edi = self + 0x130u;
        (void)sp0;
        return 1;
    }
    case 0x100aacb0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_10_f;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebx = arg1;
        g->edi = self + 0x130u;
        (void)sp0;
        return 1;
    }
    case 0x100aacbau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x1cu;
        g->ebx = arg1;
        g->edi = self + 0x130u;
        (void)sp0;
        return 1;
    }
    case 0x100aacfcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_10_f;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100aad19u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x100aad31u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100aab70(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100aab70(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
