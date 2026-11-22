/* f_0x1016bdf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1016bdf0(Guest* g)
{
    double d1;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_50;
    uint32_t loc_54;
    uint32_t loc_64;
    uint32_t loc_68;
    uint32_t loc_6c;
    uint32_t loc_70;
    uint32_t loc_74;
    uint32_t loc_78;
    uint32_t loc_7c;
    uint32_t loc_80;
    uint32_t loc_84;
    uint32_t loc_88;
    uint32_t loc_8c;
    uint32_t loc_90;
    double loc_90_f;
    uint32_t loc_94;
    uint32_t loc_98;
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
    uint32_t t23;
    uint32_t t24;
    uint32_t t8;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 184u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1016beccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1016becc;
    case 0x1016bf8au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); goto E_1016bf8a;
    case 0x1016bf8eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_94 = rd32(sp0 - 0x94u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); goto E_1016bf8e;
    case 0x1016bf9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); goto E_1016bf9c;
    case 0x1016bfb1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_90 = rd32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1016bfb1;
    case 0x1016bfc0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_90 = rd32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1016bfc0;
    case 0x1016bfd3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); goto E_1016bfd3;
    case 0x1016bfdeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); goto E_1016bfde;
    default: break;
    }
#endif

    COW_AT(1016bdf0)
    wr32(sp0 - 0x9cu, in_ebx);
    wr32(sp0 - 0xa0u, in_ebp);
    wr32(sp0 - 0xa4u, in_esi);
    wr32(sp0 - 0xa8u, in_edi);
    wr32(arg1 + 4u, 0u);
    wr32(arg1 + 8u, 0u);
    wr32(arg1 + 0xcu, 0u);
    wr32(arg1 + 0x10u, 0u);
    wr32(arg1 + 0x18u, 0u);
    wr32(arg1 + 0x1cu, 0u);
    wr32(arg1 + 0x20u, 0u);
    wr32(arg1 + 0x24u, 0u);
    wr32(arg1 + 0x2cu, 0u);
    wr32(arg1 + 0x30u, 0u);
    wr32(arg1 + 0x34u, 0u);
    wr32(arg1 + 0x38u, 0u);
    wr32(arg1, 0x3f800000u);
    wr32(arg1 + 0x14u, 0x3f800000u);
    wr32(arg1 + 0x28u, 0x3f800000u);
    wr32(arg1 + 0x3cu, 0x3f800000u);
    wr32(sp0 - 0x90u, 0x3f800000u);
    d1 = (double)(float)-(double)rdf32(arg3 + 8u);
    wrf32(sp0 - 4u, (float)d1);
    wr32(sp0 - 0x7cu, 0x3f800000u);
    wr32(sp0 - 0x68u, 0x3f800000u);
    wr32(sp0 - 0x54u, 0x3f800000u);
    d2 = (double)(float)-(double)rdf32(arg3);
    wrf32(sp0 - 0x60u, (float)d2);
    d3 = (double)(float)-(double)rdf32(arg3 + 4u);
    wrf32(sp0 - 0x5cu, (float)d3);
    wr32(sp0 - 0xacu, sp0 - 0x90u);
    wr32(sp0 - 0xb0u, arg1);
    wr32(sp0 - 0xb4u, arg1);
    wr32(sp0 - 0x8cu, 0u);
    wr32(sp0 - 0x88u, 0u);
    wr32(sp0 - 0x84u, 0u);
    wr32(sp0 - 0x80u, 0u);
    wr32(sp0 - 0x78u, 0u);
    wr32(sp0 - 0x74u, 0u);
    wr32(sp0 - 0x70u, 0u);
    wr32(sp0 - 0x6cu, 0u);
    wr32(sp0 - 0x64u, 0u);
    wr32(sp0 - 0x58u, cow_f2bits(d1));
    g->esp = sp0 - 0xa8u;
    cow_cdecl(g, COW_IMG(0x1016c060u), 3, arg1, arg1, sp0 - 0x90u);
    COW_AT(1016becc)
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x40u, 0u);
    d4 = (double)(float)-(double)rdf32(arg2 + 4u);
    wrf32(sp0 - 0x98u, (float)d4);
    d5 = fr(g, cos(-(double)rdf32(arg2 + 4u)));
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x38u, 0x3f800000u);
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x10u, 0x3f800000u);
    wrf32(sp0 - 0x4cu, (float)(double)(float)d5);
    d6 = (double)(float)-fr(g, sin(d4));
    wrf32(sp0 - 0x44u, (float)d6);
    d7 = (double)(float)fr(g, sin(d4));
    wrf32(sp0 - 0x2cu, (float)d7);
    wrf32(sp0 - 0x24u, (float)(double)(float)d5);
    wr32(sp0 - 0x94u, 4u);
    t8 = arg1 - (sp0 - 0x90u);
    wr32(sp0 - 0x50u, t8);
    ebp = t8;
    edi = sp0 - 0x90u;
    loc_7c = 0x3f800000u;
    loc_68 = 0x3f800000u;
    loc_54 = 0x3f800000u;
    loc_8c = 0u;
    loc_88 = 0u;
    loc_84 = 0u;
    loc_80 = 0u;
    loc_78 = 0u;
    loc_74 = 0u;
    loc_70 = 0u;
    loc_6c = 0u;
    loc_64 = 0u;
    loc_94 = 4u;
    loc_50 = t8;
L_1016bf8e: ;
    COW_AT(1016bf8e)
    wr32(sp0 - 0x98u, 4u);
    ebx = sp0 - 0x4cu;
    ebp = ebp + edi;
    loc_98 = 4u;
L_1016bf9c: ;
    COW_AT(1016bf9c)
    d9 = (double)rdf32(COW_IMG(0x103295d8u));
    wr32(edi, 0u);
    eax = ebx;
    ecx = ebp;
    edx = 4u;
    loc_90 = rd32(sp0 - 0x90u);
    loc_7c = rd32(sp0 - 0x7cu);
    loc_68 = rd32(sp0 - 0x68u);
    loc_54 = rd32(sp0 - 0x54u);
    loc_8c = rd32(sp0 - 0x8cu);
    loc_88 = rd32(sp0 - 0x88u);
    loc_84 = rd32(sp0 - 0x84u);
    loc_80 = rd32(sp0 - 0x80u);
    loc_78 = rd32(sp0 - 0x78u);
    loc_74 = rd32(sp0 - 0x74u);
    loc_70 = rd32(sp0 - 0x70u);
    loc_6c = rd32(sp0 - 0x6cu);
    loc_64 = rd32(sp0 - 0x64u);
    loc_98 = rd32(sp0 - 0x98u);
    loc_94 = rd32(sp0 - 0x94u);
    loc_50 = rd32(sp0 - 0x50u);
    x0 = d9;
L_1016bfb1: ;
    COW_AT(1016bfb1)
    if (edx != 1u)
    {
        edx = edx - 1u;
        x0 = fr(g, x0 + fr(g, (double)rdf32(ecx) * (double)rdf32(eax)));
        eax = eax + 0x10u;
        ecx = ecx + 4u;
        goto L_1016bfb1;
    }
    x0 = fr(g, x0 + fr(g, (double)rdf32(ecx) * (double)rdf32(eax)));
    COW_AT(1016bfc0)
    wrf32(edi, (float)x0);
    t10 = rd32(sp0 - 0x98u) - 1u;
    t11 = rd32(sp0 - 0x98u);
    wr32(sp0 - 0x98u, t10);
    if (t11 != 1u)
    {
        ebx = ebx + 4u;
        edi = edi + 4u;
        loc_7c = rd32(sp0 - 0x7cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_64 = rd32(sp0 - 0x64u);
        loc_98 = t10;
        loc_94 = rd32(sp0 - 0x94u);
        loc_50 = rd32(sp0 - 0x50u);
        goto L_1016bf9c;
    }
    edi = edi + 4u;
    loc_90_f = (double)rdf32(sp0 - 0x90u);
    loc_7c = rd32(sp0 - 0x7cu);
    loc_68 = rd32(sp0 - 0x68u);
    loc_54 = rd32(sp0 - 0x54u);
    loc_8c = rd32(sp0 - 0x8cu);
    loc_88 = rd32(sp0 - 0x88u);
    loc_84 = rd32(sp0 - 0x84u);
    loc_80 = rd32(sp0 - 0x80u);
    loc_78 = rd32(sp0 - 0x78u);
    loc_74 = rd32(sp0 - 0x74u);
    loc_70 = rd32(sp0 - 0x70u);
    loc_6c = rd32(sp0 - 0x6cu);
    loc_64 = rd32(sp0 - 0x64u);
    loc_94 = rd32(sp0 - 0x94u);
    loc_50 = rd32(sp0 - 0x50u);
    COW_AT(1016bfd3)
    wr32(sp0 - 0x94u, loc_94 - 1u);
    if (loc_94 != 1u)
    {
        loc_94 = loc_94 - 1u;
        goto L_1016bf8a;
    }
    COW_AT(1016bfde)
    wr32(arg1, cow_f2bits(loc_90_f));
    t12 = rd32(sp0 - 0x84u);
    wr32(arg1 + 4u, loc_8c);
    t13 = rd32(sp0 - 0x80u);
    wr32(arg1 + 8u, loc_88);
    t14 = rd32(sp0 - 0x7cu);
    wr32(arg1 + 0xcu, t12);
    t15 = rd32(sp0 - 0x78u);
    wr32(arg1 + 0x10u, t13);
    t16 = rd32(sp0 - 0x74u);
    wr32(arg1 + 0x14u, t14);
    t17 = rd32(sp0 - 0x70u);
    wr32(arg1 + 0x18u, t15);
    t18 = rd32(sp0 - 0x6cu);
    wr32(arg1 + 0x1cu, t16);
    t19 = rd32(sp0 - 0x68u);
    wr32(arg1 + 0x20u, t17);
    t20 = rd32(sp0 - 0x64u);
    wr32(arg1 + 0x24u, t18);
    t21 = rd32(sp0 - 0x60u);
    wr32(arg1 + 0x28u, t19);
    t22 = rd32(sp0 - 0x5cu);
    wr32(arg1 + 0x2cu, t20);
    t23 = rd32(sp0 - 0x58u);
    wr32(arg1 + 0x30u, t21);
    t24 = rd32(sp0 - 0x54u);
    wr32(arg1 + 0x34u, t22);
    wr32(arg1 + 0x38u, t23);
    wr32(arg1 + 0x3cu, t24);
    g->ebx = rd32(sp0 - 0x9cu);
    g->esi = rd32(sp0 - 0xa4u);
    g->edi = rd32(sp0 - 0xa8u);
    g->ebp = rd32(sp0 - 0xa0u);
    return;
L_1016bf8a: ;
    COW_AT(1016bf8a)
    ebp = loc_50;
    goto L_1016bf8e;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1016bdf0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1016beccu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0xb4u;
        g->esi = arg1;
        wr32(sp0 - 0xacu, sp0 - 0x90u);
        wr32(sp0 - 0x90u, 0x3f800000u);
        wr32(sp0 - 0x8cu, 0u);
        wr32(sp0 - 0x88u, 0u);
        wr32(sp0 - 0x84u, 0u);
        wr32(sp0 - 0x80u, 0u);
        wr32(sp0 - 0x7cu, 0x3f800000u);
        wr32(sp0 - 0x78u, 0u);
        wr32(sp0 - 0x74u, 0u);
        wr32(sp0 - 0x70u, 0u);
        wr32(sp0 - 0x6cu, 0u);
        wr32(sp0 - 0x68u, 0x3f800000u);
        wr32(sp0 - 0x64u, 0u);
        wr32(sp0 - 0x54u, 0x3f800000u);
        (void)sp0;
        return 1;
    }
    case 0x1016bf8au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_78;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_8c;
        double loc_90_f;
        uint32_t loc_94;
        uint32_t loc_98;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0xa8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016bf8eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_78;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_8c;
        uint32_t loc_94;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_94 = rd32(sp0 - 0x94u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0xa8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016bf9cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_78;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_8c;
        uint32_t loc_94;
        uint32_t loc_98;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0xa8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016bfb1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_78;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_8c;
        uint32_t loc_90;
        uint32_t loc_94;
        uint32_t loc_98;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xa8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016bfc0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_78;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_8c;
        uint32_t loc_90;
        uint32_t loc_94;
        uint32_t loc_98;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xa8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016bfd3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_78;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_8c;
        double loc_90_f;
        uint32_t loc_94;
        uint32_t loc_98;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0xa8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016bfdeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_78;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_8c;
        double loc_90_f;
        uint32_t loc_94;
        uint32_t loc_98;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0xa8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1016bdf0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1016bdf0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
