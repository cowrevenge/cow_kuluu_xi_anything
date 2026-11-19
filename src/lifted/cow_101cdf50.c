/* f_0x101cdf50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101cdf50(Guest* g)
{
    double d24;
    double d25;
    double d26;
    double d27;
    double d28;
    double d29;
    double d30;
    double d31;
    double d32;
    double d33;
    double d34;
    double d4;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t3;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 44u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101cdf64u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_101cdf64;
    case 0x101cdf6du: in_eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_101cdf6d;
    case 0x101cdf77u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_101cdf77;
    case 0x101cdf80u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101cdf80;
    case 0x101cdf83u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_101cdf83;
    case 0x101cdf89u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_101cdf89;
    case 0x101cdf90u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_101cdf90;
    case 0x101cdf9bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_101cdf9b;
    case 0x101cdfcdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_101cdfcd;
    case 0x101cdfd9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_101cdfd9;
    case 0x101cdfe2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_101cdfe2;
    case 0x101cdff7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_101cdff7;
    case 0x101ce002u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_101ce002;
    case 0x101ce00cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_101ce00c;
    case 0x101ce013u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_101ce013;
    case 0x101ce01eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101ce01e;
    case 0x101ce040u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101ce040;
    case 0x101ce04au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101ce04a;
    case 0x101ce059u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101ce059;
    case 0x101ce063u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101ce063;
    case 0x101ce075u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101ce075;
    case 0x101ce081u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101ce081;
    case 0x101ce091u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101ce091;
    case 0x101ce09du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101ce09d;
    case 0x101ce0afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101ce0af;
    case 0x101ce0bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101ce0bb;
    case 0x101ce0cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101ce0cb;
    case 0x101ce0d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_101ce0d7;
    default: break;
    }
#endif

    COW_AT(101cdf50)
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    if ((int32_t)arg1 < 0)
    {
        ebx = in_ebx;
        loc_14 = in_ebp;
        loc_18 = in_esi;
        loc_1c = in_edi;
    }
    else
    {
    COW_AT(101cdf64)
        if ((int32_t)arg1 >= 4)
        {
            ebx = in_ebx;
            loc_14 = in_ebp;
            loc_18 = in_esi;
            loc_1c = in_edi;
        }
        else
        {
    COW_AT(101cdf6d)
            wr32(sp0 - 0x20u, in_ebx);
            g->eax = in_eax;
            g->edx = in_edx;
            g->esp = sp0 - 0x20u;
            t1 = cow_thiscall(g, COW_IMG(0x101cebf0u), self, 0);
            t2 = g->edx;
            if ((uint8_t)t1 == 0u)
            {
                eax = t1;
                edx = t2;
            }
            else
            {
                edx = t2;
    COW_AT(101cdf77)
                if ((int32_t)rd32(self + 0x6cu) <= 0)
                {
                    eax = rd32(self + 0x6cu);
                }
                else
                {
                    eax = rd32(self + 0x6cu);
    COW_AT(101cdf80)
                    ebx = 0u;
                    edi = self + 0x70u;
L_101cdf83: ;
    COW_AT(101cdf83)
                    if (rd32(edi) != 0u)
                    {
                        ecx = rd32(edi);
    COW_AT(101cdf89)
                        wr32(sp0 - 0x24u, arg1);
                        wr32(sp0 - 0x28u, self);
                        g->edx = edx;
                        g->esp = sp0 - 0x20u;
                        cow_thiscall(g, COW_IMG(0x101cd2d0u), ecx, 2, self, arg1);
                        t3 = g->edx;
                        edx = t3;
                    }
    COW_AT(101cdf90)
                    if ((int32_t)(ebx + 1u) < (int32_t)rd32(self + 0x6cu))
                    {
                        eax = rd32(self + 0x6cu);
                        ebx = ebx + 1u;
                        edi = edi + 4u;
                        goto L_101cdf83;
                    }
                    eax = rd32(self + 0x6cu);
                }
            }
    COW_AT(101cdf9b)
            wr32(sp0 - 0x10u, 0u);
            wr32(sp0 - 8u, 0u);
            wr32(sp0 - 4u, 0x3f800000u);
            d4 = fr(g, (double)(int32_t)arg1 * (double)rdf32(COW_IMG(0x1032ab98u)));
            wrf32(sp0 - 0xcu, (float)(double)(float)d4);
            g->edx = edx;
            g->esp = sp0 - 0x20u;
            t5 = cow_call_regs(g, COW_IMG(0x101cda30u), eax, self, g->edx, 1, 0);
            t6 = g->ecx;
            t7 = g->edx;
            if (t5 == 0u)
            {
                eax = t5;
                ecx = t6;
                edx = t7;
                ebx = rd32(sp0 - 0x20u);
                goto L_101cdfd9;
            }
            ecx = t6;
            edx = t7;
            ebx = rd32(sp0 - 0x20u);
    COW_AT(101cdfcd)
            wr32(sp0 - 0x20u, sp0 - 0x10u);
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            t8 = cow_call_regs(g, COW_IMG(0x101cda30u), sp0 - 0x10u, ecx, g->edx, 1, 1, sp0 - 0x10u);
            t9 = g->edx;
            eax = t8;
            edx = t9;
L_101ce00c: ;
    COW_AT(101ce00c)
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            cow_thiscall(g, COW_IMG(0x100ab880u), eax, 1, sp0 - 0x10u);
            t21 = g->ecx;
            t22 = g->edx;
            ecx = t21;
            edx = t22;
L_101ce013: ;
    COW_AT(101ce013)
            if (rd32(self + 0x64u) == 0u)
            {
                loc_14 = rd32(sp0 - 0x14u);
                loc_18 = rd32(sp0 - 0x18u);
                loc_1c = rd32(sp0 - 0x1cu);
            }
            else
            {
                esi = rd32(self + 0x64u);
    COW_AT(101ce01e)
                wr32(sp0 - 0x20u, sp0 - 0x10u);
                wr32(sp0 - 0x24u, esi + 0x44u);
                g->eax = sp0 - 0x10u;
                g->esp = sp0 - 0x1cu;
                t23 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, esi + 0x44u, sp0 - 0x10u);
                d24 = (double)rdf32(esi + 0x44u);
                if ((cow_fsw(g, d24, (double)rdf32(COW_IMG(0x10337e24u)), 0u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, d24, (double)rdf32(COW_IMG(0x10337e24u)), 0u) & 0x4100u;
                    edi = esi + 0x44u;
                }
                else
                {
                    eax = cow_fsw(g, d24, (double)rdf32(COW_IMG(0x10337e24u)), 0u) & 0x4100u;
                    edi = esi + 0x44u;
    COW_AT(101ce040)
                    d25 = fr(g, (double)rdf32(edi) - (double)rdf32(COW_IMG(0x10331818u)));
                    wrf32(edi, (float)d25);
                }
    COW_AT(101ce04a)
                if (!((double)rdf32(edi) < (double)rdf32(COW_IMG(0x10337e20u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(edi), (double)rdf32(COW_IMG(0x10337e20u)), 0u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(edi), (double)rdf32(COW_IMG(0x10337e20u)), 0u);
    COW_AT(101ce059)
                    d26 = fr(g, (double)rdf32(edi) + (double)rdf32(COW_IMG(0x10331818u)));
                    wrf32(edi, (float)d26);
                }
    COW_AT(101ce063)
                d27 = (double)rdf32(esi + 0x48u);
                if ((cow_fsw(g, d27, (double)rdf32(COW_IMG(0x10337e24u)), 0u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, d27, (double)rdf32(COW_IMG(0x10337e24u)), 0u) & 0x4100u;
                }
                else
                {
                    eax = cow_fsw(g, d27, (double)rdf32(COW_IMG(0x10337e24u)), 0u) & 0x4100u;
    COW_AT(101ce075)
                    d28 = fr(g, (double)rdf32(esi + 0x48u) - (double)rdf32(COW_IMG(0x10331818u)));
                    wrf32(esi + 0x48u, (float)d28);
                }
    COW_AT(101ce081)
                d29 = (double)rdf32(esi + 0x48u);
                if (!(d29 < (double)rdf32(COW_IMG(0x10337e20u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d29, (double)rdf32(COW_IMG(0x10337e20u)), 0u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d29, (double)rdf32(COW_IMG(0x10337e20u)), 0u);
    COW_AT(101ce091)
                    d30 = fr(g, (double)rdf32(esi + 0x48u) + (double)rdf32(COW_IMG(0x10331818u)));
                    wrf32(esi + 0x48u, (float)d30);
                }
    COW_AT(101ce09d)
                d31 = (double)rdf32(esi + 0x4cu);
                if ((cow_fsw(g, d31, (double)rdf32(COW_IMG(0x10337e24u)), 0u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, d31, (double)rdf32(COW_IMG(0x10337e24u)), 0u) & 0x4100u;
                }
                else
                {
                    eax = cow_fsw(g, d31, (double)rdf32(COW_IMG(0x10337e24u)), 0u) & 0x4100u;
    COW_AT(101ce0af)
                    d32 = fr(g, (double)rdf32(esi + 0x4cu) - (double)rdf32(COW_IMG(0x10331818u)));
                    wrf32(esi + 0x4cu, (float)d32);
                }
    COW_AT(101ce0bb)
                d33 = (double)rdf32(esi + 0x4cu);
                if (!(d33 < (double)rdf32(COW_IMG(0x10337e20u))))
                {
                    loc_14 = rd32(sp0 - 0x14u);
                    loc_18 = rd32(sp0 - 0x18u);
                    loc_1c = rd32(sp0 - 0x1cu);
                }
                else
                {
    COW_AT(101ce0cb)
                    d34 = fr(g, (double)rdf32(esi + 0x4cu) + (double)rdf32(COW_IMG(0x10331818u)));
                    wrf32(esi + 0x4cu, (float)d34);
                    loc_14 = rd32(sp0 - 0x14u);
                    loc_18 = rd32(sp0 - 0x18u);
                    loc_1c = rd32(sp0 - 0x1cu);
                }
            }
        }
    }
    COW_AT(101ce0d7)
    g->ebx = ebx;
    g->esi = loc_18;
    g->edi = loc_1c;
    g->ebp = loc_14;
    return;
L_101cdfd9: ;
    COW_AT(101cdfd9)
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t10 = cow_call_regs(g, COW_IMG(0x101cd9d0u), eax, ecx, g->edx, 1, 0);
    t11 = g->edx;
    if (t10 == 0u)
    {
        eax = t10;
        edx = t11;
        goto L_101cdff7;
    }
    eax = t10;
    edx = t11;
    COW_AT(101cdfe2)
    wr32(sp0 - 0x20u, sp0 - 0x10u);
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t12 = cow_call_regs(g, COW_IMG(0x101cd9d0u), eax, self, g->edx, 1, 1, sp0 - 0x10u);
    t13 = g->edx;
    g->edx = t13;
    cow_thiscall(g, COW_IMG(0x100c4050u), t12, 1, sp0 - 0x10u);
    t14 = g->ecx;
    t15 = g->edx;
    ecx = t14;
    edx = t15;
    goto L_101ce013;
L_101cdff7: ;
    COW_AT(101cdff7)
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t16 = cow_call_regs(g, COW_IMG(0x101cda00u), eax, self, g->edx, 1, 0);
    t17 = g->ecx;
    t18 = g->edx;
    if (t16 == 0u)
    {
        ecx = t17;
        edx = t18;
        goto L_101ce013;
    }
    eax = t16;
    ecx = t17;
    COW_AT(101ce002)
    wr32(sp0 - 0x20u, sp0 - 0x10u);
    g->edx = sp0 - 0x10u;
    g->esp = sp0 - 0x1cu;
    t19 = cow_call_regs(g, COW_IMG(0x101cda00u), eax, ecx, g->edx, 1, 1, sp0 - 0x10u);
    t20 = g->edx;
    eax = t19;
    edx = t20;
    goto L_101ce00c;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101cdf50(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101cdf64u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebp = arg1;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x101cdf6du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebp = arg1;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x101cdf77u:
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
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101cdf80u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101cdf83u:
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
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101cdf89u:
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
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101cdf90u:
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
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101cdf9bu:
    {
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
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x101cdfcdu:
    {
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
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101cdfd9u:
    {
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
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101cdfe2u:
    {
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
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101cdff7u:
    {
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
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101ce002u:
    {
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
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101ce00cu:
    {
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
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101ce013u:
    {
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
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101ce01eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101ce040u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101ce04au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101ce059u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101ce063u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101ce075u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101ce081u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101ce091u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101ce09du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101ce0afu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101ce0bbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101ce0cbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101ce0d7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101cdf50(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_101cdf50(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
