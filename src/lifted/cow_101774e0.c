/* f_0x101774e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101774e0(Guest* g)
{
    double d6;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    double loc_30_f;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    double x1;
    double x2;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 64u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10177503u: in_eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); g->ebx = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x38u); goto E_10177503;
    case 0x10177516u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10177516;
    case 0x1017754au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_1017754a;
    case 0x1017754du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_30_f = rdf32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_1017754d;
    case 0x10177555u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_30_f = rdf32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10177555;
    case 0x10177575u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_30_f = rdf32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); x2 = ST(0); x1 = ST(1); x0 = ST(2); goto E_10177575;
    case 0x1017759au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_30_f = rdf32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); x0 = ST(0); goto E_1017759a;
    case 0x101775c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_30_f = rdf32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); x2 = ST(0); x1 = ST(1); x0 = ST(2); goto E_101775c1;
    case 0x101775c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_30_f = rdf32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); x0 = ST(0); goto E_101775c5;
    case 0x101775c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_30_f = rdf32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_101775c7;
    case 0x101775dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_30_f = rdf32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_101775dc;
    case 0x101775e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_30_f = rdf32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_101775e6;
    case 0x10177614u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_30_f = rdf32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10177614;
    case 0x1017761au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_30_f = rdf32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_1017761a;
    case 0x1017761du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_30_f = rdf32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_1017761d;
    case 0x1017764au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_1017764a;
    default: break;
    }
#endif

    COW_AT(101774e0)
    wr32(sp0 - 0x34u, in_ebx);
    wr32(sp0 - 0x38u, in_esi);
    wr32(COW_IMG(0x1065ca20u), 0u);
    wr32(sp0 - 0x30u, 0x49f42400u);
    if (rd32(self + 0x15cu) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        edi = in_edi;
        loc_34 = in_ebx;
        loc_38 = in_esi;
    }
    else
    {
    COW_AT(10177503)
        wr32(sp0 - 0x3cu, in_edi);
        g->eax = in_eax;
        g->edx = in_edx;
        g->esp = sp0 - 0x3cu;
        t1 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
        t2 = g->edx;
        if (t1 == 0u)
        {
            edx = t2;
        }
        else
        {
            eax = t1;
    COW_AT(10177516)
            g->eax = eax;
            g->esp = sp0 - 0x3cu;
            t3 = cow_thiscall(g, rd32(rd32(eax) + 0x1bcu), eax, 0);
            wr32(sp0 - 0x2cu, rd32(t3));
            t4 = rd32(t3 + 8u);
            wr32(sp0 - 0x24u, t4);
            t5 = rd32(t3 + 4u);
            wr32(sp0 - 0x28u, t5);
            if ((int32_t)rd32(self + 0x84u) <= 0)
            {
                edx = t5;
            }
            else
            {
                eax = rd32(self + 0x88u);
                edx = t5;
                loc_2c = rd32(t3);
                loc_24 = t4;
                loc_28 = t5;
    COW_AT(1017754a)
                ecx = eax + 0x18u;
                edi = 0u;
                loc_30_f = (double)rdf32(sp0 - 0x30u);
L_1017754d: ;
    COW_AT(1017754d)
                if (rd32(ecx + 0xa8u) != 0u)
                {
    COW_AT(10177555)
                    if (rd32(ecx) == rd32(COW_IMG(0x1065ca24u)))
                    {
                        edx = rd32(ecx);
                        x2 = fr(g, (double)rdf32(ecx + 0xcu) - cow_bits2f(loc_24));
                        x1 = fr(g, (double)rdf32(ecx + 8u) - cow_bits2f(loc_28));
                        x0 = fr(g, (double)rdf32(ecx + 4u) - cow_bits2f(loc_2c));
                        goto L_101775c1;
                    }
                    eax = rd32(COW_IMG(0x1065ca24u));
                    edx = rd32(ecx);
                    x2 = fr(g, (double)rdf32(ecx + 0xcu) - cow_bits2f(loc_24));
                    x1 = fr(g, (double)rdf32(ecx + 8u) - cow_bits2f(loc_28));
                    x0 = fr(g, (double)rdf32(ecx + 4u) - cow_bits2f(loc_2c));
    COW_AT(10177575)
                    d6 = fr(g, fr(g, fr(g, x2 * x2) + fr(g, x1 * x1)) + fr(g, x0 * x0));
                    if ((cow_fsw(g, loc_30_f, d6, 1u) & 0x4100u) != 0u)
                    {
                        x0 = fr(g, fr(g, fr(g, x2 * x2) + fr(g, x1 * x1)) + fr(g, x0 * x0));
                        goto L_101775c5;
                    }
                    x0 = fr(g, fr(g, fr(g, x2 * x2) + fr(g, x1 * x1)) + fr(g, x0 * x0));
    COW_AT(1017759a)
                    wr32(COW_IMG(0x1065ca20u), edx);
                    wrf32(sp0 - 0x30u, (float)(double)(float)x0);
                    t7 = rd32(ecx + 4u);
                    wr32(self + 0x38d68u, t7);
                    t8 = rd32(ecx + 8u);
                    wr32(self + 0x38d6cu, t8);
                    t9 = rd32(ecx + 0xcu);
                    wr32(self + 0x38d70u, t9);
                    edx = t9;
                    loc_30_f = (double)(float)x0;
                }
L_101775c7: ;
    COW_AT(101775c7)
                if ((int32_t)(edi + 1u) < (int32_t)rd32(self + 0x84u))
                {
                    ecx = ecx + 0x16cu;
                    edi = edi + 1u;
                    goto L_1017754d;
                }
            }
        }
    COW_AT(101775dc)
        if (rd32(COW_IMG(0x1065ca20u)) == 0u)
        {
            eax = rd32(COW_IMG(0x1065ca20u));
            edi = rd32(sp0 - 0x3cu);
            loc_34 = rd32(sp0 - 0x34u);
            loc_38 = rd32(sp0 - 0x38u);
        }
        else
        {
            eax = rd32(COW_IMG(0x1065ca20u));
            edi = rd32(sp0 - 0x3cu);
    COW_AT(101775e6)
            wr32(COW_IMG(0x1065ca24u), eax);
            t10 = rd32(self + 0x38d68u);
            wr32(self + 0x38d5cu, t10);
            t11 = rd32(self + 0x38d6cu);
            wr32(self + 0x38d60u, t11);
            t12 = rd32(self + 0x38d70u);
            wr32(self + 0x38d64u, t12);
            eax = 0xfu;
            ecx = rd32(COW_IMG(0x1065ca24u));
            edx = (t11 & 0xffffff00u) | 0x20u;
L_10177614: ;
    COW_AT(10177614)
            if (rd8(eax + ecx + 8u) > (uint8_t)edx) goto L_1017761d;
    COW_AT(1017761a)
            if ((int32_t)(eax - 1u) >= 0)
            {
                eax = eax - 1u;
                goto L_10177614;
            }
            eax = eax - 1u;
L_1017761d: ;
    COW_AT(1017761d)
            wr8(eax + sp0 - 0x1fu, 0u);
            wr32(self + 0x38d74u, 0u);
            wr32(self + 0x38d78u, 0u);
            wr32(self + 0x38d7cu, 0u);
            wr32(self + 0x38d80u, 0x3f800000u);
            wr32(self + 0x38d84u, 0x3f800000u);
            wr32(self + 0x38d88u, 0x3f800000u);
            eax = 0x3f800000u;
            loc_34 = rd32(sp0 - 0x34u);
            loc_38 = rd32(sp0 - 0x38u);
        }
    }
    COW_AT(1017764a)
    g->ebx = loc_34;
    g->esi = loc_38;
    g->edi = edi;
    g->edx = edx;
    return eax;
L_101775c1: ;
    COW_AT(101775c1)
L_101775c5: ;
    COW_AT(101775c5)
    goto L_101775c7;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101774e0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10177503u:
    {
        uint32_t ecx;
        uint32_t in_eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x38u;
        g->ebx = 0u;
        wr32(sp0 - 0x30u, 0x49f42400u);
        (void)sp0;
        return 1;
    }
    case 0x10177516u:
    {
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
        g->esp = sp0 - 0x3cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017754au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x3cu;
        g->ebx = 0u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017754du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        double loc_30_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x3cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10177555u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        double loc_30_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x3cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10177575u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        double loc_30_f;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->esp = sp0 - 0x3cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017759au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        double loc_30_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        x0 = ST(0);
        g->esp = sp0 - 0x3cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101775c1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        double loc_30_f;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->esp = sp0 - 0x3cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101775c5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        double loc_30_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        x0 = ST(0);
        g->esp = sp0 - 0x3cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101775c7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        double loc_30_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x3cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101775dcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        double loc_30_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x3cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101775e6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        double loc_30_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x38u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10177614u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        double loc_30_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x38u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017761au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        double loc_30_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x38u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017761du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        double loc_30_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x38u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017764au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101774e0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101774e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
