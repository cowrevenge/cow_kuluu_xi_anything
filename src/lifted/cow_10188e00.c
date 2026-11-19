/* f_0x10188e00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10188e00(Guest* g)
{
    double d12;
    double d13;
    double d14;
    double d18;
    double d22;
    double d3;
    double d6;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    double loc_18_f;
    uint32_t loc_1c;
    double loc_1c_f;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t23;
    uint32_t t24;
    uint32_t t4;
    uint32_t t5;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 52u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10188e0cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x24u); goto E_10188e0c;
    case 0x10188e1du: eax = g->eax; self = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x24u); goto E_10188e1d;
    case 0x10188e32u: eax = g->eax; self = g->ecx; esi = g->esi; in_esi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x24u); goto E_10188e32;
    case 0x10188e3bu: self = g->ecx; esi = g->esi; in_esi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x24u); goto E_10188e3b;
    case 0x10188e3eu: self = g->ecx; esi = g->esi; in_esi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x24u); goto E_10188e3e;
    case 0x10188e43u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10188e43;
    case 0x10188e59u: self = g->ecx; esi = g->esi; in_esi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x24u); goto E_10188e59;
    case 0x10188e5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10188e5e;
    case 0x10188e74u: eax = g->eax; self = g->ecx; esi = g->esi; in_esi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x24u); goto E_10188e74;
    case 0x10188e78u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10188e78;
    case 0x10188e85u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10188e85;
    case 0x10188e9au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10188e9a;
    case 0x10188eafu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10188eaf;
    case 0x10188ec0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10188ec0;
    case 0x10188ee1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10188ee1;
    case 0x10188f14u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_1c_f = rdf32(sp0 - 0x1cu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10188f14;
    case 0x10188f1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_1c_f = rdf32(sp0 - 0x1cu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10188f1c;
    case 0x10188f2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_1c_f = rdf32(sp0 - 0x1cu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10188f2f;
    case 0x10188f37u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10188f37;
    case 0x10188f46u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10188f46;
    case 0x10188f4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10188f4e;
    case 0x10188f5du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10188f5d;
    case 0x10188f70u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10188f70;
    case 0x10188f7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10188f7f;
    case 0x10188f8eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); goto E_10188f8e;
    default: break;
    }
#endif

    COW_AT(10188e00)
    wr32(sp0 - 0x24u, in_esi);
    if (rd32(self - 0x1cu) == 1u) goto L_10188e1d;
    COW_AT(10188e0c)
    wr32(rd32(sp0 + 4u), 0xffffffffu);
    g->esi = in_esi;
    return;
L_10188e1d: ;
    COW_AT(10188e1d)
    t1 = rd32(sp0 + 4u);
    wr32(t1, 0u);
    if (self + 0x24u == 0u)
    {
        loc_24 = in_esi;
    }
    else
    {
        esi = t1;
    COW_AT(10188e32)
        if (arg2 == 0u)
        {
    COW_AT(10188e59)
            g->eax = arg2;
            g->esp = sp0 - 0x24u;
            t5 = cow_thiscall(g, COW_IMG(0x10186fa0u), self, 0);
            eax = t5;
    COW_AT(10188e5e)
            d6 = (double)(float)(double)rdf32(eax + 8u);
            wrf32(sp0 - 0x18u, (float)d6);
            wr32(sp0 - 0x20u, rd32(eax));
            t7 = rd32(eax + 4u);
            wr32(sp0 - 0x1cu, t7);
            ecx = rd32(eax);
            edx = t7;
            loc_18_f = d6;
            loc_20 = rd32(eax);
            loc_1c = t7;
            loc_24 = rd32(sp0 - 0x24u);
            x0 = (double)rdf32(eax + 8u);
        }
        else
        {
    COW_AT(10188e3b)
            if (arg2 != 1u)
            {
    COW_AT(10188e74)
                ecx = self;
                edx = self + 0x24u;
                loc_18_f = (double)rdf32(sp0 - 0x18u);
                loc_20 = rd32(sp0 - 0x20u);
                loc_1c = rd32(sp0 - 0x1cu);
                loc_24 = in_esi;
                x0 = (double)rdf32(sp0 - 0x18u);
            }
            else
            {
    COW_AT(10188e3e)
                g->eax = arg2 - 1u;
                g->esp = sp0 - 0x24u;
                t2 = cow_thiscall(g, COW_IMG(0x10186f20u), self, 0);
                eax = t2;
    COW_AT(10188e43)
                d3 = (double)(float)(double)rdf32(eax + 8u);
                wrf32(sp0 - 0x18u, (float)d3);
                wr32(sp0 - 0x20u, rd32(eax));
                t4 = rd32(eax + 4u);
                wr32(sp0 - 0x1cu, t4);
                ecx = rd32(eax);
                edx = t4;
                loc_18_f = d3;
                loc_20 = rd32(eax);
                loc_1c = t4;
                loc_24 = rd32(sp0 - 0x24u);
                x0 = (double)rdf32(eax + 8u);
            }
        }
    COW_AT(10188e78)
        if (rd32(COW_IMG(0x10456a7cu)) == 0u)
        {
            eax = rd32(COW_IMG(0x10456a7cu));
        }
        else
        {
            eax = rd32(COW_IMG(0x10456a7cu));
    COW_AT(10188e85)
            if (!(cow_bits2f(loc_20) < (double)rdf32(COW_IMG(0x10329a34u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, cow_bits2f(loc_20), (double)rdf32(COW_IMG(0x10329a34u)), 1u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, cow_bits2f(loc_20), (double)rdf32(COW_IMG(0x10329a34u)), 1u);
    COW_AT(10188e9a)
                if (!(cow_bits2f(loc_1c) < (double)rdf32(COW_IMG(0x10329a34u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, cow_bits2f(loc_1c), (double)rdf32(COW_IMG(0x10329a34u)), 1u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, cow_bits2f(loc_1c), (double)rdf32(COW_IMG(0x10329a34u)), 1u);
    COW_AT(10188eaf)
                    if (!(x0 < (double)rdf32(COW_IMG(0x10329a34u))))
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a34u)), 1u);
                    }
                    else
                    {
    COW_AT(10188ec0)
                        wr32(sp0 - 0x28u, sp0 - 8u);
                        wr32(sp0 - 0x2cu, sp0 - 0xcu);
                        wr32(sp0 - 0x30u, sp0 - 0x10u);
                        g->eax = rd32(COW_IMG(0x1045666cu));
                        g->edx = sp0 - 0x10u;
                        t8 = rd32(COW_IMG(0x1045666cu));
                        g->esp = sp0 - 0x24u;
                        t9 = cow_thiscall(g, COW_IMG(0x10017100u), t8 + 0x1f4u, 3, sp0 - 0x10u, sp0 - 0xcu, sp0 - 8u);
                        t10 = g->ecx;
                        t11 = g->edx;
                        eax = t9;
                        ecx = t10;
                        edx = t11;
    COW_AT(10188ee1)
                        d12 = fr(g, (double)rdf32(sp0 - 0x10u) * (double)rdf32(sp0 - 0x20u));
                        wrf32(sp0 - 0x20u, (float)(double)(float)d12);
                        d13 = fr(g, (double)rdf32(sp0 - 0xcu) * (double)rdf32(sp0 - 0x1cu));
                        wrf32(sp0 - 0x1cu, (float)(double)(float)d13);
                        if ((cow_fsw(g, (double)(float)d12, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x100u) != 0u)
                        {
                            eax = cow_fsw(g, (double)(float)d12, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x100u;
                            loc_1c_f = (double)(float)d13;
                            x0 = fr(g, (double)rdf32(sp0 - 8u) * (double)rdf32(sp0 - 0x18u));
                        }
                        else
                        {
                            eax = cow_fsw(g, (double)(float)d12, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x100u;
                            loc_1c_f = (double)(float)d13;
                            x0 = fr(g, (double)rdf32(sp0 - 8u) * (double)rdf32(sp0 - 0x18u));
    COW_AT(10188f14)
                            wr32(sp0 - 0x20u, 0x3f800000u);
                        }
    COW_AT(10188f1c)
                        if ((cow_fsw(g, loc_1c_f, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x100u) != 0u)
                        {
                            eax = cow_fsw(g, loc_1c_f, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x100u;
                        }
                        else
                        {
                            eax = cow_fsw(g, loc_1c_f, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x100u;
    COW_AT(10188f2f)
                            wr32(sp0 - 0x1cu, 0x3f800000u);
                        }
    COW_AT(10188f37)
                        if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x100u) != 0u)
                        {
                            eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x100u;
                            loc_20 = rd32(sp0 - 0x20u);
                            loc_1c = rd32(sp0 - 0x1cu);
                            loc_24 = rd32(sp0 - 0x24u);
                        }
                        else
                        {
                            eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x100u;
    COW_AT(10188f46)
                            loc_20 = rd32(sp0 - 0x20u);
                            loc_1c = rd32(sp0 - 0x1cu);
                            loc_24 = rd32(sp0 - 0x24u);
                            x0 = (double)rdf32(COW_IMG(0x1032961cu));
                        }
                    }
                }
            }
        }
    COW_AT(10188f4e)
        g->ecx = ecx;
        g->edx = edx;
        d14 = fr(g, cow_bits2f(loc_20) * (double)rdf32(COW_IMG(0x1032ae60u)));
        fpush(g, d14);
        g->esp = sp0 - 0x24u;
        t15 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        t16 = g->ecx;
        t17 = g->edx;
        eax = t15;
        ecx = t16;
        edx = t17;
    COW_AT(10188f5d)
        d18 = fr(g, (double)rdf32(sp0 - 0x1cu) * (double)rdf32(COW_IMG(0x1032ae60u)));
        wr8(sp0 + 6u, (uint8_t)eax);
        g->ecx = ecx;
        g->edx = edx;
        fpush(g, d18);
        g->esp = sp0 - 0x24u;
        t19 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        t20 = g->ecx;
        t21 = g->edx;
        eax = t19;
        ecx = t20;
        edx = t21;
    COW_AT(10188f70)
        d22 = fr(g, x0 * (double)rdf32(COW_IMG(0x1032ae60u)));
        wr8(sp0 + 5u, (uint8_t)eax);
        fpush(g, d22);
        g->esp = sp0 - 0x24u;
        t23 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        eax = t23;
    COW_AT(10188f7f)
        wr8(sp0 + 4u, (uint8_t)eax);
        wr8(sp0 + 7u, 0u);
        t24 = rd32(sp0 + 4u);
        wr32(esi, t24);
        loc_24 = rd32(sp0 - 0x24u);
    }
    COW_AT(10188f8e)
    g->esi = loc_24;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10188e00(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10188e0cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10188e1du:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10188e32u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x24u;
        g->edx = self + 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10188e3bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t esi;
        uint32_t self;
        uint32_t in_esi;
        self = g->ecx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x24u;
        g->eax = arg2;
        g->edx = self + 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10188e3eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t esi;
        uint32_t self;
        uint32_t in_esi;
        self = g->ecx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x24u;
        g->eax = arg2 - 1u;
        g->edx = self + 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10188e43u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10188e59u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t esi;
        uint32_t self;
        uint32_t in_esi;
        self = g->ecx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x24u;
        g->eax = arg2;
        g->edx = self + 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10188e5eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10188e74u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x24u;
        g->edx = self + 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10188e78u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_18_f;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10188e85u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_18_f;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10188e9au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_18_f;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10188eafu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_18_f;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10188ec0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_18_f;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10188ee1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 - 0xcu);
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10188f14u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_1c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_1c_f = rdf32(sp0 - 0x1cu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 - 0xcu);
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10188f1cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_1c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_1c_f = rdf32(sp0 - 0x1cu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 - 0xcu);
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10188f2fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_1c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_1c_f = rdf32(sp0 - 0x1cu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 - 0xcu);
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10188f37u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 - 0xcu);
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10188f46u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 - 0xcu);
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10188f4eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_18_f;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10188f5du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10188f70u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10188f7fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10188f8eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10188e00(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10188e00(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
