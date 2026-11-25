/* f_0x10168ff0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10168ff0(Guest* g)
{
    double d1;
    double d11;
    double d15;
    double d16;
    double d17;
    double d18;
    double d19;
    double d2;
    double d20;
    double d21;
    double d3;
    double d6;
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    double loc_10_f;
    double loc_14_f;
    double loc_18_f;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    double loc_4_f;
    double loc_8_f;
    double loc_c_f;
    uint32_t t10;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t4;
    uint32_t t5;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 64u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1016902fu: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x30u); in_esi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x2cu); goto E_1016902f;
    case 0x1016903fu: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x30u); in_esi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x2cu); goto E_1016903f;
    case 0x1016904fu: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1016904f;
    case 0x10169058u: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x30u); in_esi = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x2cu); goto E_10169058;
    case 0x101690a6u: eax = g->eax; edx = g->edx; self = g->ebx; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_c_f = rdf32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); goto E_101690a6;
    case 0x101690e4u: eax = g->eax; edx = g->edx; self = g->ebx; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); goto E_101690e4;
    case 0x101690f5u: eax = g->eax; edx = g->edx; self = g->ebx; edi = g->edi; goto E_101690f5;
    case 0x101690f9u: eax = g->eax; edx = g->edx; self = g->ebx; edi = g->edi; goto E_101690f9;
    case 0x10169113u: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10169113;
    case 0x1016911eu: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_14_f = rdf32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); goto E_1016911e;
    case 0x1016912bu: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1016912b;
    default: break;
    }
#endif

    COW_AT(10168ff0)
    wr32(sp0 - 0x28u, in_ebx);
    wr32(sp0 - 0x2cu, in_esi);
    wr32(sp0 - 0x30u, in_edi);
    d1 = fr(g, (double)rdf32(rd32(sp0 + 8u) + 4u) - (double)rdf32(rd32(sp0 + 4u) + 4u));
    d2 = fr(g, (double)rdf32(rd32(sp0 + 8u)) - (double)rdf32(rd32(sp0 + 4u)));
    wrf32(sp0 - 0x14u, (float)(double)(float)d1);
    d3 = fr(g, (double)rdf32(rd32(sp0 + 8u) + 8u) - (double)rdf32(rd32(sp0 + 4u) + 8u));
    wrf32(sp0 - 0x10u, (float)(double)(float)d3);
    g->edx = in_edx;
    t4 = rd32(sp0 + 4u);
    t5 = rd32(sp0 + 8u);
    d6 = fr(g, fr(g, sqrt(fr(g, fr(g, d3 * (double)(float)d3) + fr(g, d2 * d2)))) * (double)rdf32(COW_IMG(0x10336640u)));
    fpush(g, d6);
    g->esp = sp0 - 0x30u;
    t7 = cow_call_regs(g, COW_IMG(0x10311c6cu), in_eax, g->ecx, g->edx, 1, 0);
    t8 = g->edx;
    eax = t7;
    edx = t8;
    esi = t4;
    edi = t5;
    x0 = d2;
    COW_AT(1016902f)
    wr32(sp0 + 8u, 1u - eax);
    if ((int32_t)(1u - eax) >= 2) goto L_10169058;
    COW_AT(1016903f)
    wr32(sp0 - 0x34u, arg3);
    wr32(sp0 - 0x38u, edi);
    wr32(sp0 - 0x3cu, esi);
    g->eax = arg3;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t9 = cow_thiscall(g, COW_IMG(0x101693b0u), self, 3, esi, edi, arg3);
    t10 = g->edx;
    eax = t9;
    edx = t10;
    COW_AT(1016904f)
    g->ebx = rd32(sp0 - 0x28u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->edx = edx;
    return eax;
L_10169058: ;
    COW_AT(10169058)
    d11 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)(int32_t)rd32(sp0 + 8u));
    wr32(sp0 - 0x24u, rd32(esi));
    t12 = rd32(esi + 4u);
    wr32(sp0 - 0x20u, t12);
    t13 = rd32(esi + 8u);
    wr32(sp0 - 0x1cu, t13);
    t14 = rd32(esi);
    wr32(sp0 + 4u, 0u);
    wrf32(sp0 + 8u, (float)d11);
    d15 = (double)(float)fr(g, d11 * x0);
    wrf32(sp0 - 0xcu, (float)d15);
    d16 = fr(g, (double)rdf32(sp0 - 0x14u) * (double)rdf32(sp0 + 8u));
    wrf32(sp0 - 8u, (float)(double)(float)d16);
    d17 = fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(sp0 - 0x10u));
    wrf32(sp0 - 4u, (float)(double)(float)d17);
    eax = t13;
    edx = t12;
    loc_28 = in_ebx;
    loc_2c = in_esi;
    loc_30 = in_edi;
    loc_24 = t14;
    loc_20 = t12;
    loc_1c = t13;
    loc_c_f = d15;
    loc_8_f = (double)(float)d16;
    loc_4_f = (double)(float)d17;
L_101690a6: ;
    COW_AT(101690a6)
    wr32(sp0 - 0x34u, arg3);
    d18 = (double)(float)fr(g, cow_bits2f(loc_24) + loc_c_f);
    wrf32(sp0 - 0x18u, (float)d18);
    d19 = (double)(float)fr(g, cow_bits2f(loc_20) + loc_8_f);
    wrf32(sp0 - 0x14u, (float)d19);
    d20 = (double)(float)fr(g, cow_bits2f(loc_1c) + loc_4_f);
    wrf32(sp0 - 0x10u, (float)d20);
    d21 = fr(g, (double)rdf32(sp0 + 4u) + (double)rdf32(sp0 + 8u));
    wrf32(sp0 + 4u, (float)d21);
    if (!(d21 < (double)rdf32(COW_IMG(0x1032961cu)))) goto L_1016911e;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d21, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
    loc_18_f = d18;
    loc_14_f = d19;
    loc_10_f = d20;
    COW_AT(101690e4)
    wr32(sp0 - 0x38u, sp0 - 0x18u);
    wr32(sp0 - 0x3cu, sp0 - 0x24u);
    g->eax = eax;
    g->edx = sp0 - 0x24u;
    g->esp = sp0 - 0x30u;
    t22 = cow_thiscall(g, COW_IMG(0x101693b0u), self, 3, sp0 - 0x24u, sp0 - 0x18u, arg3);
    t23 = g->edx;
    eax = t22;
    edx = t23;
    COW_AT(101690f5)
    if ((uint8_t)eax != 0u) goto L_10169113;
    COW_AT(101690f9)
    t24 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x24u, t24);
    t25 = rd32(sp0 - 0x14u);
    wr32(sp0 - 0x20u, t25);
    t26 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x1cu, t26);
    eax = t24;
    edx = t26;
    loc_28 = rd32(sp0 - 0x28u);
    loc_2c = rd32(sp0 - 0x2cu);
    loc_30 = rd32(sp0 - 0x30u);
    loc_24 = t24;
    loc_20 = t25;
    loc_1c = t26;
    loc_c_f = (double)rdf32(sp0 - 0xcu);
    loc_8_f = (double)rdf32(sp0 - 8u);
    loc_4_f = (double)rdf32(sp0 - 4u);
    goto L_101690a6;
L_10169113: ;
    COW_AT(10169113)
    g->ebx = rd32(sp0 - 0x28u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_1016911e: ;
    COW_AT(1016911e)
    wr32(sp0 - 0x38u, edi);
    wr32(sp0 - 0x3cu, sp0 - 0x24u);
    g->eax = sp0 - 0x24u;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t27 = cow_thiscall(g, COW_IMG(0x101693b0u), self, 3, sp0 - 0x24u, edi, arg3);
    t28 = g->edx;
    eax = t27;
    edx = t28;
    COW_AT(1016912b)
    g->ebx = rd32(sp0 - 0x28u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10168ff0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1016902fu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x30u);
        in_esi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1016903fu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x30u);
        in_esi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1016904fu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x10169058u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x30u);
        in_esi = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x101690a6u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        double loc_4_f;
        double loc_8_f;
        double loc_c_f;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x30u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101690e4u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        double loc_4_f;
        double loc_8_f;
        double loc_c_f;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x34u;
        g->esi = arg3;
        wr32(sp0 - 0x34u, arg3);
        (void)sp0;
        return 1;
    }
    case 0x101690f5u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->esi = arg3;
        wr32(sp0 - 0x3cu, sp0 - 0x24u);
        wr32(sp0 - 0x38u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x101690f9u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->esi = arg3;
        wr32(sp0 - 0x3cu, sp0 - 0x24u);
        wr32(sp0 - 0x38u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x10169113u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x3cu, sp0 - 0x24u);
        wr32(sp0 - 0x38u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1016911eu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_10_f;
        double loc_14_f;
        double loc_18_f;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        double loc_4_f;
        double loc_8_f;
        double loc_c_f;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x34u, arg3);
        (void)sp0;
        return 1;
    }
    case 0x1016912bu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x3cu, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10168ff0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10168ff0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
