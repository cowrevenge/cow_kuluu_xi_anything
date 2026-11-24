/* f_0x1024f600 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1024f600(Guest* g)
{
    double d14;
    double d15;
    double d16;
    double d17;
    double d20;
    double d22;
    double d23;
    double d24;
    double d25;
    double d26;
    double d27;
    double d29;
    double d30;
    double d31;
    double d32;
    double d33;
    double d34;
    double d35;
    double d36;
    double d37;
    double d38;
    double d39;
    double d4;
    double d40;
    double d46;
    double d47;
    double d48;
    double d50;
    double d51;
    double d8;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    double loc_18_f;
    uint32_t loc_1c;
    double loc_20_f;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t21;
    uint32_t t28;
    uint32_t t3;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t49;
    uint32_t t5;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t6;
    uint32_t t7;
    uint32_t t9;
    double x0;
    double x1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 84u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1024f60fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x30u); in_esi = rd32(sp0 - 0x2cu); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x2cu); goto E_1024f60f;
    case 0x1024f61cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1024f61c;
    case 0x1024f637u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1024f637;
    case 0x1024f63eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1024f63e;
    case 0x1024f643u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1024f643;
    case 0x1024f64fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1024f64f;
    case 0x1024f661u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1024f661;
    case 0x1024f66eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1024f66e;
    case 0x1024f679u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1024f679;
    case 0x1024f67bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_20_f = rdf32(sp0 - 0x20u); goto E_1024f67b;
    case 0x1024f6aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_20_f = rdf32(sp0 - 0x20u); loc_18_f = rdf32(sp0 - 0x18u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1024f6aa;
    case 0x1024f6b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_20_f = rdf32(sp0 - 0x20u); loc_18_f = rdf32(sp0 - 0x18u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1024f6b3;
    case 0x1024f6c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_20_f = rdf32(sp0 - 0x20u); loc_18_f = rdf32(sp0 - 0x18u); goto E_1024f6c7;
    case 0x1024f6ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_20_f = rdf32(sp0 - 0x20u); loc_18_f = rdf32(sp0 - 0x18u); goto E_1024f6cc;
    case 0x1024f6e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_20_f = rdf32(sp0 - 0x20u); loc_18_f = rdf32(sp0 - 0x18u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1024f6e5;
    case 0x1024f6f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1024f6f5;
    case 0x1024f706u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); goto E_1024f706;
    case 0x1024f70bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1024f70b;
    case 0x1024f730u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1024f730;
    case 0x1024f73eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1024f73e;
    case 0x1024f740u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1024f740;
    case 0x1024f753u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1024f753;
    case 0x1024f765u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1024f765;
    case 0x1024f80eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1024f80e;
    case 0x1024f832u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1024f832;
    case 0x1024f836u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1024f836;
    case 0x1024f844u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1024f844;
    case 0x1024f847u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); goto E_1024f847;
    case 0x1024f84du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1024f84d;
    case 0x1024f85eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1024f85e;
    case 0x1024f866u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1024f866;
    case 0x1024f873u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1024f873;
    case 0x1024f884u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1024f884;
    case 0x1024f8b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1024f8b6;
    case 0x1024f8c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1024f8c9;
    case 0x1024f8deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1024f8de;
    case 0x1024f8f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1024f8f5;
    case 0x1024f8fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1024f8fc;
    case 0x1024f900u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1024f900;
    case 0x1024f911u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1024f911;
    case 0x1024f914u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1024f914;
    default: break;
    }
#endif

    COW_AT(1024f600)
    wr32(sp0 - 0x28u, in_ebx);
    wr32(sp0 - 0x2cu, in_esi);
    wr32(sp0 - 0x30u, in_edi);
    wr32(sp0 - 0x34u, 4u);
    wr32(sp0 - 0x38u, 0x3fu);
    g->edx = in_edx;
    g->esp = sp0 - 0x28u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x10123970u), self, 4, 0x3fu, 4u, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    d4 = cow_take_float(g);
    eax = t1;
    ecx = t2;
    edx = t3;
    x0 = d4;
    COW_AT(1024f60f)
    wrf32(sp0 - 0x20u, (float)(double)(float)x0);
    wr32(sp0 - 0x3cu, 5u);
    wr32(sp0 - 0x40u, 0x3fu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t5 = cow_thiscall_cdecl(g, COW_IMG(0x10123970u), ecx, 4, 0x3fu, 5u, 0x3fu, 4u);
    t6 = g->ecx;
    t7 = g->edx;
    d8 = cow_take_float(g);
    eax = t5;
    ecx = t6;
    edx = t7;
    x0 = d8;
    COW_AT(1024f61c)
    wrf32(sp0 - 0x14u, (float)(double)(float)x0);
    wr32(sp0 - 0x44u, 0xffffffffu);
    wr32(sp0 - 0x48u, 4u);
    wr32(sp0 - 0x4cu, 0xfu);
    wr32(sp0 - 0x50u, 0x3fu);
    wr32(sp0 - 0x1cu, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t9 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3fu, 0xfu, 4u, 0xffffffffu, 0x3fu, 5u, rd32(sp0 - 0x38u));
    t10 = g->ecx;
    t11 = g->edx;
    eax = t9;
    ecx = t10;
    edx = t11;
    COW_AT(1024f637)
    if ((uint8_t)eax == 0u)
    {
        edi = 0u;
    }
    else
    {
    COW_AT(1024f63e)
        edi = 1u;
    }
    COW_AT(1024f643)
    wr32(sp0 - 0x34u, 0x83u);
    wr32(sp0 - 0x38u, 0x3fu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t12 = cow_thiscall_cdecl(g, COW_IMG(0x10123970u), ecx, 4, 0x3fu, 0x83u, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu));
    t13 = g->edx;
    d14 = cow_take_float(g);
    eax = t12;
    edx = t13;
    x0 = d14;
    COW_AT(1024f64f)
    if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a18u)), 1u) & 0x4100u) == 0u)
    {
        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a18u)), 1u) & 0x4100u;
        goto L_1024f66e;
    }
    eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a18u)), 1u) & 0x4100u;
    COW_AT(1024f661)
    if (!(x0 < (double)rdf32(COW_IMG(0x1032df8cu))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032df8cu)), 1u);
        goto L_1024f679;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032df8cu)), 1u);
L_1024f66e: ;
    COW_AT(1024f66e)
    wrf32(sp0 - 0x20u, (float)(double)(float)x0);
    edi = 1u;
    loc_20_f = (double)(float)x0;
L_1024f67b: ;
    COW_AT(1024f67b)
    d15 = (double)rdf32(sp0 - 0x14u);
    d16 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(fr(g, fr(g, d15 * d15) + fr(g, loc_20_f * loc_20_f)))));
    wrf32(sp0 - 0x18u, (float)(double)(float)d16);
    d17 = fr(g, sqrt(fr(g, fr(g, d15 * d15) + fr(g, loc_20_f * loc_20_f))));
    if ((cow_fsw(g, d17, (double)rdf32(COW_IMG(0x1032c9a4u)), 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d17, (double)rdf32(COW_IMG(0x1032c9a4u)), 1u) & 0x4100u;
        loc_18_f = (double)(float)d16;
        x0 = d17;
    COW_AT(1024f6b3)
        if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a3e0u)), 0u) & 0x4100u) == 0u)
        {
            ebx = 3u;
        }
        else
        {
    COW_AT(1024f6c7)
            ebx = 2u;
        }
    }
    else
    {
        loc_18_f = (double)(float)d16;
        x0 = d17;
    COW_AT(1024f6aa)
        ebx = 1u;
    }
    COW_AT(1024f6cc)
    t18 = rd32(rd32(sp0 + 4u) + 8u);
    t19 = rd32(sp0 + 4u);
    d20 = (double)rdf32(COW_IMG(0x10389438u) + ebx * 4u + rd32(rd32(sp0 + 4u) + 8u) * 0x10u);
    wrf32(sp0 + 4u, (float)d20);
    if (edi == 0u)
    {
        eax = t18;
        ecx = ebx + t18 * 4u;
        esi = t19;
        loc_1c = rd32(sp0 - 0x1cu);
        x0 = d20;
    }
    else
    {
        eax = t18;
        ecx = ebx + t18 * 4u;
        esi = t19;
        x0 = d20;
    COW_AT(1024f6e5)
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x1cu, cow_f2bits(loc_20_f));
        edx = cow_f2bits(loc_20_f);
        loc_1c = cow_f2bits(loc_20_f);
    }
    COW_AT(1024f6f5)
    if (x0 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(1024f706)
        g->esp = sp0 - 0x30u;
        t21 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
        d22 = cow_take_float(g);
        eax = t21;
        x0 = d22;
    COW_AT(1024f70b)
        d23 = fr(g, (double)rdf32(esi + 0x9cu) - fr(g, fr(g, x0 * (double)rdf32(COW_IMG(0x1032a840u))) * (double)rdf32(sp0 - 0x20u)));
        d24 = (double)rdf32(COW_IMG(0x10337e24u));
        wrf32(esi + 0x9cu, (float)d23);
        if ((cow_fsw(g, d23, d24, 1u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d23, d24, 1u) & 0x4100u;
            x0 = d23;
    COW_AT(1024f73e)
        }
        else
        {
            eax = cow_fsw(g, d23, d24, 1u) & 0x4100u;
            x0 = d23;
    COW_AT(1024f730)
            d25 = fr(g, x0 - (double)rdf32(COW_IMG(0x10331818u)));
            wrf32(esi + 0x9cu, (float)d25);
        }
    COW_AT(1024f740)
        d26 = (double)rdf32(esi + 0x9cu);
        if (d26 < (double)rdf32(COW_IMG(0x10337e20u)))
        {
    COW_AT(1024f753)
            d27 = fr(g, (double)rdf32(esi + 0x9cu) + (double)rdf32(COW_IMG(0x10331818u)));
            wrf32(esi + 0x9cu, (float)d27);
        }
    COW_AT(1024f765)
        t28 = rd32(esi + 0x8cu);
        wr32(esi + 0x8cu, t28);
        d29 = fr(g, fr(g, fr(g, fr(g, (double)(int32_t)arg2 * (double)rdf32(sp0 + 4u)) * (double)rdf32(COW_IMG(0x1033cd68u))) * (double)rdf32(sp0 - 0x18u)) * (double)rdf32(sp0 - 0x1cu));
        d30 = fr(g, (double)rdf32(sp0 - 0x14u) * fr(g, fr(g, fr(g, (double)(int32_t)arg2 * (double)rdf32(sp0 + 4u)) * (double)rdf32(COW_IMG(0x1033cd68u))) * (double)rdf32(sp0 - 0x18u)));
        wrf32(sp0 - 0x1cu, (float)(double)(float)d29);
        d31 = fr(g, (double)rdf32(esi + 0x9cu) + (double)rdf32(COW_IMG(0x1032df98u)));
        d32 = fr(g, (double)rdf32(esi + 0x9cu) + (double)rdf32(COW_IMG(0x10331360u)));
        d33 = (double)(float)fr(g, fr(g, fr(g, sin(d31)) * d30) + fr(g, fr(g, sin(d32)) * (double)(float)d29));
        wrf32(sp0 - 0x10u, (float)d33);
        d34 = fr(g, d33 + (double)rdf32(esi + 0x88u));
        wrf32(sp0 + 4u, (float)d34);
        wrf32(esi + 0x88u, (float)d34);
        d35 = fr(g, fr(g, fr(g, fr(g, cos(d31)) * d30) + fr(g, fr(g, cos(d32)) * (double)(float)d29)) + (double)rdf32(esi + 0x90u));
        wrf32(esi + 0x90u, (float)d35);
        d36 = (double)rdf32(sp0 + 4u);
        d37 = fr(g, sqrt(fr(g, fr(g, d35 * d35) + fr(g, d36 * d36))));
        if ((cow_fsw(g, d37, (double)rdf32(COW_IMG(0x1032b074u)), 2u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d37, (double)rdf32(COW_IMG(0x1032b074u)), 2u) & 0x4100u;
            ecx = esi + 0x88u;
            x1 = d37;
            x0 = d35;
    COW_AT(1024f832)
        }
        else
        {
            eax = cow_fsw(g, d37, (double)rdf32(COW_IMG(0x1032b074u)), 2u) & 0x4100u;
            ecx = esi + 0x88u;
            x1 = d37;
            x0 = d35;
    COW_AT(1024f80e)
            d38 = fr(g, (double)rdf32(COW_IMG(0x1032b074u)) / x1);
            wrf32(sp0 - 0x18u, (float)(double)(float)d38);
            d39 = fr(g, (double)rdf32(sp0 + 4u) * (double)(float)d38);
            wrf32(ecx, (float)d39);
            d40 = fr(g, x0 * (double)rdf32(sp0 - 0x18u));
            wrf32(esi + 0x90u, (float)d40);
        }
    COW_AT(1024f836)
        wr32(sp0 - 0x34u, esi + 0x98u);
        wr32(sp0 - 0x38u, ecx);
        wr32(sp0 - 0x3cu, esi);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = esi + 0x98u;
        g->esp = sp0 - 0x1cu;
        t41 = cow_cdecl(g, COW_IMG(0x1024e740u), 8, esi, ecx, esi + 0x98u, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
        t42 = g->ecx;
        t43 = g->edx;
        eax = t41;
        ecx = t42;
        edx = t43;
    COW_AT(1024f844)
    }
    COW_AT(1024f847)
    wr32(sp0 - 0x34u, esi);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    cow_cdecl(g, COW_IMG(0x1024f2e0u), 1, esi);
    t44 = g->ecx;
    t45 = g->edx;
    ecx = t44;
    edx = t45;
    COW_AT(1024f84d)
    if ((int32_t)rd32(esi + 0x284u) >= 0)
    {
        eax = rd32(esi + 0x284u);
    COW_AT(1024f85e)
        if (eax != ebx)
        {
    COW_AT(1024f866)
            wr32(sp0 - 0x34u, ebx);
            wr32(sp0 - 0x38u, esi + 0x280u);
            g->esp = sp0 - 0x1cu;
            cow_cdecl(g, COW_IMG(0x10274210u), 7, esi + 0x280u, ebx, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
    COW_AT(1024f873)
            if ((int32_t)rd32(esi + 0x294u) >= 0)
            {
                eax = rd32(esi + 0x294u);
    COW_AT(1024f884)
                d46 = (double)rdf32(eax * 0xd8u + rd32(esi + 0x2a0u) + 0x80u);
                d47 = (double)rdf32(rd32(rd32(rd32(rd32(eax * 0xd8u + rd32(esi + 0x2a0u) + 0x8cu) + 0x2cu) + 0x20u)) + 0x24u);
                if ((cow_fsw(g, d46, d47, 2u) & 0x4100u) != 0u)
                {
                    ecx = eax * 0xd8u + rd32(esi + 0x2a0u) + 0x70u;
                    edx = rd32(rd32(rd32(rd32(eax * 0xd8u + rd32(esi + 0x2a0u) + 0x8cu) + 0x2cu) + 0x20u));
                    x1 = (double)rdf32(rd32(rd32(rd32(rd32(eax * 0xd8u + rd32(esi + 0x2a0u) + 0x8cu) + 0x2cu) + 0x20u)) + 0x24u);
                    eax = cow_fsw(g, d46, d47, 2u) & 0x4100u;
                    x0 = d46;
                    goto L_1024f8c9;
                }
                ecx = eax * 0xd8u + rd32(esi + 0x2a0u) + 0x70u;
                edx = rd32(rd32(rd32(rd32(eax * 0xd8u + rd32(esi + 0x2a0u) + 0x8cu) + 0x2cu) + 0x20u));
                x1 = (double)rdf32(rd32(rd32(rd32(rd32(eax * 0xd8u + rd32(esi + 0x2a0u) + 0x8cu) + 0x2cu) + 0x20u)) + 0x24u);
                eax = cow_fsw(g, d46, d47, 2u) & 0x4100u;
                x0 = d46;
L_1024f8b6: ;
    COW_AT(1024f8b6)
                d48 = fr(g, x0 - x1);
                if ((cow_fsw(g, d48, x1, 2u) & 0x4100u) == 0u)
                {
                    eax = cow_fsw(g, d48, x1, 2u) & 0x4100u;
                    x0 = d48;
                    goto L_1024f8b6;
                }
                eax = cow_fsw(g, d48, x1, 2u) & 0x4100u;
                x0 = d48;
L_1024f8c9: ;
    COW_AT(1024f8c9)
                t49 = rd32(ecx + 0x14u);
                d50 = fr(g, x0 - (double)rdf32(edx + 0x20u));
                wr32(sp0 - 0x34u, t49);
                d51 = fr(g, d50 / (double)rdf32(edx + 0x24u));
                wrf32(sp0 + 4u, (float)d51);
                g->esp = sp0 - 0x30u;
                t52 = cow_call_regs(g, COW_IMG(0x1027df90u), eax, g->ecx, g->edx, 1, 1, t49);
                eax = t52;
    COW_AT(1024f8de)
                wr32(sp0 - 0x38u, sp0 - 0x18u);
                wr32(sp0 - 0x3cu, sp0 - 0x21u);
                wr32(sp0 - 0x40u, eax);
                t53 = rd32(sp0 + 4u);
                wr32(sp0 - 0x44u, t53);
                g->ecx = t53;
                g->edx = sp0 - 0x18u;
                g->esp = sp0 - 0x30u;
                t54 = cow_call_regs(g, COW_IMG(0x1027d130u), sp0 - 0x21u, g->ecx, g->edx, 1, 5, t53, eax, sp0 - 0x21u, sp0 - 0x18u, rd32(sp0 - 0x34u));
                t55 = g->ecx;
                t56 = g->edx;
                ecx = t55;
                edx = t56;
                edi = eax;
                eax = t54;
    COW_AT(1024f8f5)
                if ((int32_t)eax >= 0)
                {
    COW_AT(1024f8fc)
                    if ((int32_t)eax < (int32_t)edi)
                    {
    COW_AT(1024f900)
                        wr32(sp0 - 0x34u, eax);
                        wr32(sp0 - 0x38u, ebx + 2u);
                        wr32(sp0 - 0x3cu, esi + 0x240u);
                        g->esp = sp0 - 0x30u;
                        cow_cdecl(g, COW_IMG(0x10252ec0u), 3, esi + 0x240u, ebx + 2u, eax);
    COW_AT(1024f911)
                    }
                }
            }
        }
    }
    COW_AT(1024f914)
    g->ebx = rd32(sp0 - 0x28u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    return;
L_1024f679: ;
    COW_AT(1024f679)
    loc_20_f = (double)rdf32(sp0 - 0x20u);
    goto L_1024f67b;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1024f600(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1024f60fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x30u);
        in_esi = rd32(sp0 - 0x2cu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x38u;
        wr32(sp0 - 0x38u, 0x3fu);
        wr32(sp0 - 0x34u, 4u);
        wr32(sp0 - 0x28u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1024f61cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x40u, 0x3fu);
        wr32(sp0 - 0x3cu, 5u);
        (void)sp0;
        return 1;
    }
    case 0x1024f637u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x50u;
        g->edi = 0u;
        wr32(sp0 - 0x1cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1024f63eu:
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
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x1cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1024f643u:
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
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x1cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1024f64fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x1024f661u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1024f66eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1024f679u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1024f67bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_20_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_20_f = rdf32(sp0 - 0x20u);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1024f6aau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_18_f;
        double loc_20_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_18_f = rdf32(sp0 - 0x18u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1024f6b3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_18_f;
        double loc_20_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_18_f = rdf32(sp0 - 0x18u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1024f6c7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_18_f;
        double loc_20_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_18_f = rdf32(sp0 - 0x18u);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1024f6ccu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_18_f;
        double loc_20_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_18_f = rdf32(sp0 - 0x18u);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1024f6e5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_18_f;
        double loc_20_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_18_f = rdf32(sp0 - 0x18u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1024f6f5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_18_f;
        uint32_t loc_1c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1024f706u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_18_f;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1024f70bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1024f730u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1024f73eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1024f740u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1024f753u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1024f765u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1024f80eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1024f832u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1024f836u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1024f844u:
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
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1024f847u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_18_f;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1024f84du:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1024f85eu:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1024f866u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1024f873u:
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
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x1024f884u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1024f8b6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1024f8c9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1024f8deu:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1024f8f5u:
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
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x3cu, sp0 - 0x21u);
        wr32(sp0 - 0x38u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1024f8fcu:
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
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x3cu, sp0 - 0x21u);
        wr32(sp0 - 0x38u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1024f900u:
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
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x3cu, sp0 - 0x21u);
        wr32(sp0 - 0x38u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1024f911u:
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
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1024f914u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1024f600(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1024f600(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
