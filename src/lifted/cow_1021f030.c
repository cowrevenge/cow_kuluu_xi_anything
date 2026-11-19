/* f_0x1021f030 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=2 */
uint32_t cow_fn_1021f030(Guest* g)
{
    double d1;
    double d2;
    uint32_t eax;
    uint32_t ecx;
    uint32_t esi;
    double loc_10_f;
    uint32_t loc_14;
    double loc_14_f;
    double x0;
    double x1;
    double x2;
    double x3;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 32u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1021f04du: eax = g->eax; ecx = g->ecx; in_esi = g->esi; in_edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_1021f04d;
    case 0x1021f059u: eax = g->eax; ecx = g->ecx; in_esi = g->esi; in_edi = g->edi; goto E_1021f059;
    case 0x1021f06eu: eax = g->eax; ecx = g->ecx; esi = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); x1 = ST(0); x0 = ST(1); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1021f06e;
    case 0x1021f078u: eax = g->eax; ecx = g->ecx; esi = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); x1 = ST(0); x0 = ST(1); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1021f078;
    case 0x1021f086u: eax = g->eax; ecx = g->ecx; esi = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); x1 = ST(0); x0 = ST(1); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1021f086;
    case 0x1021f097u: eax = g->eax; ecx = g->ecx; esi = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); x1 = ST(0); x0 = ST(1); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1021f097;
    case 0x1021f0a0u: eax = g->eax; ecx = g->ecx; esi = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); x1 = ST(0); x0 = ST(1); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1021f0a0;
    case 0x1021f0abu: eax = g->eax; ecx = g->ecx; esi = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); x1 = ST(0); x0 = ST(1); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1021f0ab;
    case 0x1021f0b0u: eax = g->eax; ecx = g->ecx; esi = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); x1 = ST(0); x0 = ST(1); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1021f0b0;
    case 0x1021f0edu: eax = g->eax; ecx = g->ecx; esi = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); x3 = ST(0); x2 = ST(1); x1 = ST(2); x0 = ST(3); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1021f0ed;
    case 0x1021f0f8u: eax = g->eax; ecx = g->ecx; esi = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); x3 = ST(0); x2 = ST(1); x1 = ST(2); x0 = ST(3); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1021f0f8;
    case 0x1021f102u: eax = g->eax; ecx = g->ecx; esi = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1021f102;
    case 0x1021f11bu: eax = g->eax; ecx = g->ecx; esi = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); x3 = ST(0); x2 = ST(1); x1 = ST(2); x0 = ST(3); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1021f11b;
    case 0x1021f11du: eax = g->eax; ecx = g->ecx; esi = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); loc_10_f = rdf32(sp0 - 0x10u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1021f11d;
    case 0x1021f11fu: eax = g->eax; ecx = g->ecx; esi = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); loc_10_f = rdf32(sp0 - 0x10u); x1 = ST(0); x0 = ST(1); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1021f11f;
    case 0x1021f12eu: eax = g->eax; ecx = g->ecx; esi = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); loc_10_f = rdf32(sp0 - 0x10u); x1 = ST(0); x0 = ST(1); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1021f12e;
    default: break;
    }
#endif

    COW_AT(1021f030)
    wr32(sp0 - 0x14u, 0u);
    if (rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
        goto L_1021f059;
    }
    eax = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
    COW_AT(1021f04d)
    fpush(g, (double)rdf32(COW_IMG(0x103295d8u)));
    return eax;
L_1021f059: ;
    COW_AT(1021f059)
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    esi = COW_IMG(0x10480af0u);
    loc_14 = 0u;
    x1 = (double)rdf32(eax + 0xcu);
    x0 = (double)rdf32(eax + 4u);
L_1021f06e: ;
    COW_AT(1021f06e)
    if (rd32(esi) != 0u)
    {
        ecx = rd32(esi);
    COW_AT(1021f078)
        if (rd32(ecx + 0xa0u) == 0u)
        {
            eax = rd32(ecx + 0xa0u);
        }
        else
        {
    COW_AT(1021f086)
            if (!(rd32(ecx + 0x120u) >> 0xdu & 1u))
            {
                eax = rd32(ecx + 0x120u) >> 0xdu;
            }
            else
            {
                eax = rd32(ecx + 0x120u) >> 0xdu;
    COW_AT(1021f097)
                if (rd8(ecx + 0x127u) & 1u)
                {
    COW_AT(1021f0a0)
                    if (rd32(ecx + 0x170u) == 2u)
                    {
                        eax = rd32(ecx + 0x170u);
                    }
                    else
                    {
                        eax = rd32(ecx + 0x170u);
    COW_AT(1021f0ab)
                        if (eax != 3u)
                        {
    COW_AT(1021f0b0)
                            d1 = fr(g, x0 - (double)rdf32(ecx + 4u));
                            wrf32(sp0 - 0x10u, (float)(double)(float)d1);
                            d2 = fr(g, fr(g, x1 - (double)rdf32(ecx + 0xcu)) * (double)rdf32(COW_IMG(0x1032a3f0u)));
                            if (cow_bits2f(loc_14) == (double)rdf32(COW_IMG(0x103295d8u)))
                            {
                                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, cow_bits2f(loc_14), (double)rdf32(COW_IMG(0x103295d8u)), 4u);
                                loc_10_f = (double)(float)d1;
                                x3 = fr(g, sqrt(fr(g, fr(g, d2 * d2) + fr(g, (double)(float)d1 * (double)(float)d1))));
                                x2 = d2;
                                goto L_1021f0f8;
                            }
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, cow_bits2f(loc_14), (double)rdf32(COW_IMG(0x103295d8u)), 4u);
                            loc_10_f = (double)(float)d1;
                            x3 = fr(g, sqrt(fr(g, fr(g, d2 * d2) + fr(g, (double)(float)d1 * (double)(float)d1))));
                            x2 = d2;
    COW_AT(1021f0ed)
                            if (!(x3 < cow_bits2f(loc_14)))
                            {
                                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x3, cow_bits2f(loc_14), 4u);
                                goto L_1021f11b;
                            }
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x3, cow_bits2f(loc_14), 4u);
L_1021f0f8: ;
    COW_AT(1021f0f8)
                            wrf32(sp0 - 0x14u, (float)(double)(float)x3);
                            wr32(arg2, ecx);
                            if (arg1 == 0u) goto L_1021f11d;
                            loc_14_f = (double)(float)x3;
    COW_AT(1021f102)
                            wr32(arg1 + 8u, 0u);
                            wrf32(arg1 + 4u, (float)x2);
                            wr32(arg1, cow_f2bits(loc_10_f));
                            wr32(arg1 + 0xcu, 0x3f800000u);
                        }
                    }
                }
            }
        }
    }
L_1021f11f: ;
    COW_AT(1021f11f)
    if ((int32_t)(esi + 4u) < (int32_t)COW_IMG(0x10482ef0u))
    {
        esi = esi + 4u;
        loc_14 = rd32(sp0 - 0x14u);
        goto L_1021f06e;
    }
    COW_AT(1021f12e)
    g->edx = arg1;
    fpush(g, (double)rdf32(sp0 - 0x14u));
    return eax;
L_1021f11b: ;
    COW_AT(1021f11b)
L_1021f11d: ;
    COW_AT(1021f11d)
    goto L_1021f11f;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1021f030(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1021f04du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = g->esi;
        in_edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1021f059u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x14u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1021f06eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        uint32_t loc_14;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x1cu;
        g->edx = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1021f078u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        uint32_t loc_14;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x1cu;
        g->edx = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1021f086u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        uint32_t loc_14;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x1cu;
        g->edx = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1021f097u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        uint32_t loc_14;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x1cu;
        g->edx = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1021f0a0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        uint32_t loc_14;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x1cu;
        g->edx = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1021f0abu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        uint32_t loc_14;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x1cu;
        g->edx = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1021f0b0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        uint32_t loc_14;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x1cu;
        g->edx = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1021f0edu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        uint32_t loc_14;
        double x0;
        double x1;
        double x2;
        double x3;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        x3 = ST(0);
        x2 = ST(1);
        x1 = ST(2);
        x0 = ST(3);
        g->esp = sp0 - 0x1cu;
        g->edx = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1021f0f8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        uint32_t loc_14;
        double x0;
        double x1;
        double x2;
        double x3;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        x3 = ST(0);
        x2 = ST(1);
        x1 = ST(2);
        x0 = ST(3);
        g->esp = sp0 - 0x1cu;
        g->edx = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1021f102u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_14_f;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->esp = sp0 - 0x1cu;
        g->edx = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1021f11bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        uint32_t loc_14;
        double x0;
        double x1;
        double x2;
        double x3;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        x3 = ST(0);
        x2 = ST(1);
        x1 = ST(2);
        x0 = ST(3);
        g->esp = sp0 - 0x1cu;
        g->edx = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1021f11du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        loc_10_f = rdf32(sp0 - 0x10u);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->esp = sp0 - 0x1cu;
        g->edx = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1021f11fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        loc_10_f = rdf32(sp0 - 0x10u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x1cu;
        g->edx = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1021f12eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        loc_10_f = rdf32(sp0 - 0x10u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x1cu;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1021f030(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1021f030(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
