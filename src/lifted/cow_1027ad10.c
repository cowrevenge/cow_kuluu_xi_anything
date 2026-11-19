/* f_0x1027ad10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_1027ad10(Guest* g)
{
    double d12;
    double d16;
    double d17;
    double d18;
    double d19;
    double d20;
    double d21;
    double d22;
    double d23;
    double d24;
    double d25;
    double d27;
    double d32;
    double d7;
    double d8;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t2;
    uint32_t t26;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t9;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 44u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1027ad29u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1027ad29;
    case 0x1027ad33u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1027ad33;
    case 0x1027ad49u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1027ad49;
    case 0x1027ad51u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1027ad51;
    case 0x1027ad5au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1027ad5a;
    case 0x1027ad65u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1027ad65;
    case 0x1027ad75u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1027ad75;
    case 0x1027ad83u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1027ad83;
    case 0x1027ad96u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1027ad96;
    case 0x1027ada4u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1027ada4;
    case 0x1027adb7u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1027adb7;
    case 0x1027adc1u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1027adc1;
    case 0x1027adcau: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1027adca;
    case 0x1027ade1u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1027ade1;
    case 0x1027ae02u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1027ae02;
    case 0x1027ae15u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1027ae15;
    case 0x1027ae1au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1027ae1a;
    case 0x1027ae33u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1027ae33;
    case 0x1027ae3du: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1027ae3d;
    case 0x1027ae42u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1027ae42;
    case 0x1027ae56u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1027ae56;
    case 0x1027ae5cu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1027ae5c;
    default: break;
    }
#endif

    COW_AT(1027ad10)
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    t1 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x18u, t1);
    wr32(sp0 - 0x1cu, arg2);
    wr32(sp0 - 0x20u, sp0 - 0xcu);
    g->eax = sp0 - 0xcu;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t2 = cow_cdecl(g, COW_IMG(0x102748b0u), 3, sp0 - 0xcu, arg2, t1);
    t3 = g->edx;
    eax = t2;
    edx = t3;
    edi = t1;
    COW_AT(1027ad29)
    wr32(sp0 - 0x24u, sp0 - 0xcu);
    g->eax = eax;
    g->ecx = sp0 - 0xcu;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t4 = cow_cdecl(g, COW_IMG(0x10274910u), 1, sp0 - 0xcu);
    t5 = g->ecx;
    t6 = g->edx;
    d7 = cow_take_float(g);
    eax = t4;
    ecx = t5;
    edx = t6;
    x0 = d7;
    COW_AT(1027ad33)
    wrf32(sp0 + 0xcu, (float)x0);
    if ((cow_fsw(g, x0, rdf64(COW_IMG(0x1032a100u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, x0, rdf64(COW_IMG(0x1032a100u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, x0, rdf64(COW_IMG(0x1032a100u)), 0u) & 0x4100u;
    COW_AT(1027ad49)
        wr32(sp0 + 0xcu, 0x3f800000u);
    }
    COW_AT(1027ad51)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    d8 = (double)rdf32(sp0 + 0xcu);
    fpush(g, d8);
    g->esp = sp0 - 0xcu;
    t9 = cow_cdecl(g, COW_IMG(0x10316e30u), 2, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
    t10 = g->ecx;
    t11 = g->edx;
    d12 = cow_take_float(g);
    eax = t9;
    ecx = t10;
    edx = t11;
    x0 = d12;
    COW_AT(1027ad5a)
    wrf32(sp0 + 0xcu, (float)x0);
    wr32(sp0 - 0x18u, edi);
    wr32(sp0 - 0x1cu, arg2);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t13 = cow_cdecl(g, COW_IMG(0x10274890u), 2, arg2, edi);
    t14 = g->ecx;
    t15 = g->edx;
    d16 = cow_take_float(g);
    eax = t13;
    ecx = t14;
    edx = t15;
    x0 = d16;
    COW_AT(1027ad65)
    if (!(x0 < rdf64(COW_IMG(0x1032a108u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, rdf64(COW_IMG(0x1032a108u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, rdf64(COW_IMG(0x1032a108u)), 0u);
    COW_AT(1027ad75)
        d17 = fr(g, (double)rdf32(COW_IMG(0x1032df98u)) - (double)rdf32(sp0 + 0xcu));
        wrf32(sp0 + 0xcu, (float)d17);
    }
    COW_AT(1027ad83)
    d18 = fabs((double)rdf32(sp0 + 0xcu));
    d19 = (double)rdf32(sp0 + 0x10u);
    if ((cow_fsw(g, d18, d19, 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d18, d19, 1u) & 0x4100u;
        x0 = d18;
    }
    else
    {
        eax = cow_fsw(g, d18, d19, 1u) & 0x4100u;
        x0 = d18;
    COW_AT(1027ad96)
        d20 = fr(g, fr(g, (double)rdf32(sp0 + 0x10u) / x0) * (double)rdf32(sp0 + 0xcu));
        wrf32(sp0 + 0xcu, (float)d20);
    }
    COW_AT(1027ada4)
    d21 = (double)rdf32(sp0 + 0xcu);
    if (!(d21 < rdf64(COW_IMG(0x10340b28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d21, rdf64(COW_IMG(0x10340b28u)), 0u);
        goto L_1027adca;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d21, rdf64(COW_IMG(0x10340b28u)), 0u);
    COW_AT(1027adb7)
    wr32(sp0 - 0x18u, arg1);
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x1027ae70u), 1, arg1);
    COW_AT(1027adc1)
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    return;
L_1027adca: ;
    COW_AT(1027adca)
    d22 = fr(g, (double)rdf32(COW_IMG(0x1032df98u)) - (double)rdf32(sp0 + 0xcu));
    if (!(d22 < rdf64(COW_IMG(0x10340b28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d22, rdf64(COW_IMG(0x10340b28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d22, rdf64(COW_IMG(0x10340b28u)), 0u);
    COW_AT(1027ade1)
        d23 = (double)rdf32(arg2 + 4u);
        d24 = (double)rdf32(arg2 + 8u);
        d25 = fr(g, fr(g, d23 * d23) + fr(g, d24 * d24));
        if (!(d25 < rdf64(COW_IMG(0x10340b28u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d25, rdf64(COW_IMG(0x10340b28u)), 2u);
    COW_AT(1027ae1a)
            wr32(sp0 - 0x18u, ecx);
            d27 = (double)(float)-(double)rdf32(arg2 + 4u);
            wrf32(sp0 - 0x18u, (float)d27);
            t28 = rd32(arg2 + 8u);
            wr32(sp0 - 0x1cu, t28);
            wr32(sp0 - 0x20u, 0u);
            wr32(sp0 - 0x24u, sp0 - 0xcu);
            g->ecx = t28;
            g->edx = sp0 - 0xcu;
            g->esp = sp0 - 0x14u;
            cow_cdecl(g, COW_IMG(0x10274690u), 4, sp0 - 0xcu, 0u, t28, cow_f2bits(d27));
            t29 = g->ecx;
            t30 = g->edx;
            ecx = t29;
            edx = t30;
    COW_AT(1027ae33)
            wr32(sp0 - 0x28u, sp0 - 0xcu);
            g->eax = sp0 - 0xcu;
            g->esp = sp0 - 0x24u;
            t31 = cow_cdecl(g, COW_IMG(0x10274910u), 1, sp0 - 0xcu);
            d32 = cow_take_float(g);
            eax = t31;
            x0 = d32;
    COW_AT(1027ae3d)
        }
        else
        {
    COW_AT(1027ae02)
            wr32(sp0 - 0x18u, 0x3f800000u);
            wr32(sp0 - 0x1cu, 0u);
            wr32(sp0 - 0x20u, 0u);
            wr32(sp0 - 0x24u, sp0 - 0xcu);
            g->eax = sp0 - 0xcu;
            g->esp = sp0 - 0x14u;
            t26 = cow_cdecl(g, COW_IMG(0x10274690u), 4, sp0 - 0xcu, 0u, 0u, 0x3f800000u);
            eax = t26;
    COW_AT(1027ae15)
        }
    }
    COW_AT(1027ae42)
    t33 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x18u, t33);
    wr32(sp0 - 0x1cu, sp0 - 0xcu);
    wr32(sp0 - 0x20u, arg1);
    g->eax = eax;
    g->ecx = t33;
    g->edx = arg1;
    g->esp = sp0 - 0x14u;
    t34 = cow_cdecl(g, COW_IMG(0x1027ac50u), 3, arg1, sp0 - 0xcu, t33);
    t35 = g->ecx;
    t36 = g->edx;
    eax = t34;
    ecx = t35;
    edx = t36;
    COW_AT(1027ae56)
    wr32(sp0 - 0x24u, edx);
    g->esp = sp0 - 0x20u;
    cow_call_regs(g, COW_IMG(0x1027af40u), eax, g->ecx, g->edx, 1, 1, edx);
    COW_AT(1027ae5c)
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1027ad10(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1027ad29u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x20u;
        g->esi = arg2;
        wr32(sp0 - 0x20u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1027ad33u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x24u;
        g->esi = arg2;
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        wr32(sp0 - 0x20u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1027ad49u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->esi = arg2;
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        wr32(sp0 - 0x20u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1027ad51u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->esi = arg2;
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        wr32(sp0 - 0x20u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1027ad5au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x14u;
        g->esi = arg2;
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        wr32(sp0 - 0x20u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1027ad65u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x1cu;
        g->esi = arg2;
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        wr32(sp0 - 0x20u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1027ad75u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->esi = arg2;
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        wr32(sp0 - 0x20u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1027ad83u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->esi = arg2;
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        wr32(sp0 - 0x20u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1027ad96u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x14u;
        g->esi = arg2;
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        wr32(sp0 - 0x20u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1027ada4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x14u;
        g->esi = arg2;
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        wr32(sp0 - 0x20u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1027adb7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        wr32(sp0 - 0x20u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1027adc1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        wr32(sp0 - 0x20u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1027adcau:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->esi = arg2;
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        wr32(sp0 - 0x20u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1027ade1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->esi = arg2;
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        wr32(sp0 - 0x20u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1027ae02u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        wr32(sp0 - 0x20u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1027ae15u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1027ae1au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->esi = arg2;
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        wr32(sp0 - 0x20u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1027ae33u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1027ae3du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x28u, sp0 - 0xcu);
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1027ae42u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1027ae56u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        wr32(sp0 - 0x1cu, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1027ae5cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x1cu, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1027ad10(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1027ad10(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
