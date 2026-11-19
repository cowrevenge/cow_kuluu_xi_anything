/* f_0x1029c280 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1029c280(Guest* g)
{
    double d1;
    double d13;
    double d14;
    double d18;
    double d19;
    double d2;
    double d23;
    double d27;
    double d3;
    double d7;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_408;
    uint32_t loc_40c;
    uint32_t loc_410;
    uint32_t loc_414;
    uint32_t loc_418;
    double loc_418_f;
    uint32_t loc_41c;
    uint32_t loc_420;
    uint32_t loc_424;
    uint32_t loc_428;
    int64_t q29;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t28;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
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
    uint32_t in_ebp = g->ebp;
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 1076u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1029c2a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; loc_420 = rd32(sp0 - 0x420u); loc_41c = rd32(sp0 - 0x41cu); loc_418_f = rdf32(sp0 - 0x418u); loc_414 = rd32(sp0 - 0x414u); goto E_1029c2a5;
    case 0x1029c2b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1029c2b8;
    case 0x1029c2c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; loc_414 = rd32(sp0 - 0x414u); goto E_1029c2c9;
    case 0x1029c2f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; loc_428 = rd32(sp0 - 0x428u); loc_424 = rd32(sp0 - 0x424u); goto E_1029c2f5;
    case 0x1029c306u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; loc_428 = rd32(sp0 - 0x428u); loc_424 = rd32(sp0 - 0x424u); loc_408 = rd32(sp0 - 0x408u); goto E_1029c306;
    case 0x1029c336u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_428 = rd32(sp0 - 0x428u); loc_424 = rd32(sp0 - 0x424u); loc_418 = rd32(sp0 - 0x418u); loc_410 = rd32(sp0 - 0x410u); loc_40c = rd32(sp0 - 0x40cu); loc_408 = rd32(sp0 - 0x408u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1029c336;
    case 0x1029c342u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_428 = rd32(sp0 - 0x428u); loc_424 = rd32(sp0 - 0x424u); loc_418 = rd32(sp0 - 0x418u); loc_410 = rd32(sp0 - 0x410u); loc_40c = rd32(sp0 - 0x40cu); loc_408 = rd32(sp0 - 0x408u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1029c342;
    case 0x1029c351u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_428 = rd32(sp0 - 0x428u); loc_424 = rd32(sp0 - 0x424u); loc_418 = rd32(sp0 - 0x418u); loc_410 = rd32(sp0 - 0x410u); loc_40c = rd32(sp0 - 0x40cu); loc_408 = rd32(sp0 - 0x408u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_1029c351;
    case 0x1029c353u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_428 = rd32(sp0 - 0x428u); loc_424 = rd32(sp0 - 0x424u); loc_418 = rd32(sp0 - 0x418u); loc_410 = rd32(sp0 - 0x410u); loc_40c = rd32(sp0 - 0x40cu); loc_408 = rd32(sp0 - 0x408u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_1029c353;
    case 0x1029c362u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_428 = rd32(sp0 - 0x428u); loc_424 = rd32(sp0 - 0x424u); loc_418 = rd32(sp0 - 0x418u); loc_410 = rd32(sp0 - 0x410u); loc_40c = rd32(sp0 - 0x40cu); loc_408 = rd32(sp0 - 0x408u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_1029c362;
    case 0x1029c36au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_428 = rd32(sp0 - 0x428u); loc_424 = rd32(sp0 - 0x424u); loc_418 = rd32(sp0 - 0x418u); loc_410 = rd32(sp0 - 0x410u); loc_40c = rd32(sp0 - 0x40cu); loc_408 = rd32(sp0 - 0x408u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_1029c36a;
    case 0x1029c37du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_1029c37d;
    case 0x1029c3a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_1029c3a4;
    case 0x1029c3abu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_1029c3ab;
    case 0x1029c3b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_1029c3b2;
    case 0x1029c3b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_1029c3b6;
    case 0x1029c3b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_1029c3b8;
    case 0x1029c3cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_1029c3cb;
    case 0x1029c3d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_1029c3d2;
    case 0x1029c3d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_1029c3d9;
    case 0x1029c3ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_1029c3dd;
    case 0x1029c3dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_1029c3df;
    case 0x1029c3f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1029c3f0;
    case 0x1029c3f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1029c3f7;
    case 0x1029c3feu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1029c3fe;
    case 0x1029c402u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1029c402;
    case 0x1029c404u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1029c404;
    case 0x1029c433u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1029c433;
    case 0x1029c45eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_418 = rd32(sp0 - 0x418u); loc_410 = rd32(sp0 - 0x410u); loc_40c = rd32(sp0 - 0x40cu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1029c45e;
    case 0x1029c46fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; loc_428 = rd32(sp0 - 0x428u); loc_424 = rd32(sp0 - 0x424u); loc_408 = rd32(sp0 - 0x408u); goto E_1029c46f;
    default: break;
    }
#endif

    COW_AT(1029c280)
    d1 = fr(g, (double)rdf32(COW_IMG(0x10340b8cu)) - (double)rdf32(sp0 + 8u));
    wr32(sp0 - 0x41cu, in_ebp);
    wr32(sp0 - 0x420u, in_esi);
    d2 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / d1);
    wr32(sp0 - 0x414u, 0u);
    wrf32(sp0 - 0x418u, (float)(double)(float)d2);
    eax = in_eax;
    ecx = self;
    edx = in_edx;
    esi = 0u;
    loc_41c = in_ebp;
    loc_420 = in_esi;
    loc_414 = 0u;
    loc_418_f = (double)(float)d2;
L_1029c2a5: ;
    COW_AT(1029c2a5)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    d3 = fr(g, (double)(int32_t)loc_414 * (double)rdf32(COW_IMG(0x10329e94u)));
    fpush(g, d3);
    fpush(g, loc_418_f);
    g->esp = sp0 - 0x404u;
    t4 = cow_cdecl(g, COW_IMG(0x10312cd0u), 7, loc_420, loc_41c, cow_f2bits(loc_418_f), loc_414, rd32(sp0 - 0x410u), rd32(sp0 - 0x40cu), rd32(sp0 - 0x408u));
    t5 = g->ecx;
    t6 = g->edx;
    d7 = cow_take_float(g);
    eax = t4;
    ecx = t5;
    edx = t6;
    x0 = d7;
    COW_AT(1029c2b8)
    wrf32(esi * 4u + sp0 - 0x404u, (float)x0);
    wr32(sp0 - 0x414u, esi + 1u);
    if ((int32_t)(esi + 1u) < 256)
    {
        loc_41c = rd32(sp0 - 0x41cu);
        loc_420 = rd32(sp0 - 0x420u);
        loc_414 = esi + 1u;
        esi = esi + 1u;
        loc_418_f = (double)rdf32(sp0 - 0x418u);
        goto L_1029c2a5;
    }
    loc_414 = esi + 1u;
    COW_AT(1029c2c9)
    wr32(sp0 - 0x424u, 0x49u);
    wr32(sp0 - 0x428u, COW_IMG(0x103bc778u));
    t8 = arg1 * arg1 * 4u;
    wr32(sp0 - 0x42cu, t8);
    wr32(sp0 - 0x430u, 1u);
    t9 = rd32(sp0 - 8u);
    wr32(sp0 - 4u, t9);
    g->eax = t9;
    g->esp = sp0 - 0x40cu;
    t10 = cow_cdecl(g, COW_IMG(0x10275da0u), 9, 1u, t8, COW_IMG(0x103bc778u), 0x49u, rd32(sp0 - 0x420u), rd32(sp0 - 0x41cu), rd32(sp0 - 0x418u), loc_414, rd32(sp0 - 0x410u));
    eax = t10;
    COW_AT(1029c2f5)
    wr32(sp0 - 0x408u, eax);
    if ((int32_t)arg1 <= 0)
    {
        ecx = eax;
        goto L_1029c46f;
    }
    ecx = eax;
    loc_408 = eax;
    COW_AT(1029c306)
    wr32(sp0 - 0x424u, in_ebx);
    wr32(sp0 - 0x428u, in_edi);
    t11 = (uint32_t)((int32_t)(arg1 - (uint32_t)((int32_t)arg1 >> 0x1fu)) >> 1u);
    wr32(sp0 - 0x418u, t11);
    t12 = -(uint32_t)((int32_t)(arg1 - (uint32_t)((int32_t)arg1 >> 0x1fu)) >> 1u);
    wr32(sp0 - 0x40cu, t12);
    wr32(sp0 - 0x410u, ecx + 2u);
    wr32(sp0 - 0x418u, arg1);
    eax = t12;
    edx = (uint32_t)((int32_t)arg1 >> 0x1fu);
    loc_424 = in_ebx;
    loc_428 = in_edi;
    loc_418 = arg1;
    loc_40c = t12;
    loc_410 = ecx + 2u;
    ecx = ecx + 2u;
    x0 = (double)(int32_t)t11;
L_1029c336: ;
    COW_AT(1029c336)
    ebx = arg1;
    esi = loc_410;
    x1 = fr(g, (double)(int32_t)loc_40c / x0);
L_1029c342: ;
    COW_AT(1029c342)
    if (!(x1 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x1, (double)rdf32(COW_IMG(0x103295d8u)), 3u);
        x2 = x1;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x1, (double)rdf32(COW_IMG(0x103295d8u)), 3u);
        x2 = x1;
    COW_AT(1029c351)
        x2 = -x2;
    }
    COW_AT(1029c353)
    if ((cow_fsw(g, x2, (double)rdf32(COW_IMG(0x1032961cu)), 3u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, x2, (double)rdf32(COW_IMG(0x1032961cu)), 3u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, x2, (double)rdf32(COW_IMG(0x1032961cu)), 3u) & 0x4100u;
    COW_AT(1029c362)
        x2 = (double)rdf32(COW_IMG(0x1032961cu));
    }
    COW_AT(1029c36a)
    g->ecx = ecx;
    g->edx = edx;
    d13 = fr(g, (double)rdf32(COW_IMG(0x10329a20u)) * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - x2));
    d14 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - x2);
    fpush(g, d13);
    g->esp = sp0 - 0x428u;
    t15 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t16 = g->ecx;
    t17 = g->edx;
    eax = t15;
    ecx = t16;
    edx = t17;
    x2 = d14;
    COW_AT(1029c37d)
    wr32(sp0 - 0x414u, eax);
    d18 = fr(g, fr(g, fr(g, x2 - fr(g, (double)(int32_t)eax * (double)rdf32(COW_IMG(0x10329e94u)))) * (double)rdf32(eax * 4u + sp0 - 0x400u)) + (double)rdf32(eax * 4u + sp0 - 0x404u));
    g->ecx = ecx;
    g->edx = edx;
    d19 = fr(g, fr(g, d18 * (double)rdf32(arg5)) * (double)rdf32(COW_IMG(0x1032ae60u)));
    fpush(g, d19);
    g->esp = sp0 - 0x428u;
    t20 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t21 = g->ecx;
    t22 = g->edx;
    eax = t20;
    ecx = t21;
    edx = t22;
    x2 = d18;
    COW_AT(1029c3a4)
    if ((int32_t)eax <= 255)
    {
    COW_AT(1029c3b2)
        if ((int32_t)eax < 0)
        {
    COW_AT(1029c3b6)
            eax = 0u;
        }
    }
    else
    {
    COW_AT(1029c3ab)
        eax = 0xffu;
    }
    COW_AT(1029c3b8)
    wr8(esi - 2u, (uint8_t)eax);
    g->ecx = ecx;
    g->edx = edx;
    d23 = fr(g, fr(g, x2 * (double)rdf32(arg5 + 4u)) * (double)rdf32(COW_IMG(0x1032ae60u)));
    fpush(g, d23);
    g->esp = sp0 - 0x428u;
    t24 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t25 = g->ecx;
    t26 = g->edx;
    eax = t24;
    ecx = t25;
    edx = t26;
    COW_AT(1029c3cb)
    if ((int32_t)eax <= 255)
    {
    COW_AT(1029c3d9)
        if ((int32_t)eax < 0)
        {
    COW_AT(1029c3dd)
            eax = 0u;
        }
    }
    else
    {
    COW_AT(1029c3d2)
        eax = 0xffu;
    }
    COW_AT(1029c3df)
    wr8(esi - 1u, (uint8_t)eax);
    d27 = fr(g, fr(g, x2 * (double)rdf32(arg5 + 8u)) * (double)rdf32(COW_IMG(0x1032ae60u)));
    fpush(g, d27);
    g->esp = sp0 - 0x428u;
    t28 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    eax = t28;
    COW_AT(1029c3f0)
    if ((int32_t)eax <= 255)
    {
    COW_AT(1029c3fe)
        if ((int32_t)eax < 0)
        {
    COW_AT(1029c402)
            eax = 0u;
        }
    }
    else
    {
    COW_AT(1029c3f7)
        eax = 0xffu;
    }
    COW_AT(1029c404)
    wr8(esi, (uint8_t)eax);
    q29 = (int64_t)cow_muls(0x55555556u, rd8(esi) + rd8(esi - 1u) + rd8(esi - 2u));
    wr8(esi + 1u, (uint8_t)(cow_qhi(q29) + (cow_qhi(q29) >> 0x1fu)));
    if (ebx != 1u)
    {
        eax = (uint32_t)(q29);
        ecx = cow_qhi(q29) >> 0x1fu;
        edx = cow_qhi(q29) + (cow_qhi(q29) >> 0x1fu);
        ebx = ebx - 1u;
        esi = esi + 4u;
        loc_424 = rd32(sp0 - 0x424u);
        loc_428 = rd32(sp0 - 0x428u);
        loc_408 = rd32(sp0 - 0x408u);
        loc_418 = rd32(sp0 - 0x418u);
        loc_40c = rd32(sp0 - 0x40cu);
        loc_410 = rd32(sp0 - 0x410u);
        goto L_1029c342;
    }
    COW_AT(1029c433)
    t30 = rd32(sp0 - 0x40cu) + 1u;
    wr32(sp0 - 0x40cu, t30);
    t31 = arg1 * 4u + rd32(sp0 - 0x410u);
    wr32(sp0 - 0x410u, t31);
    t32 = rd32(sp0 - 0x418u) - 1u;
    t33 = rd32(sp0 - 0x418u);
    wr32(sp0 - 0x418u, t32);
    if (t33 != 1u)
    {
        eax = t32;
        ecx = t31;
        edx = t30;
        loc_424 = rd32(sp0 - 0x424u);
        loc_428 = rd32(sp0 - 0x428u);
        loc_408 = rd32(sp0 - 0x408u);
        loc_418 = t32;
        loc_40c = t30;
        loc_410 = t31;
        goto L_1029c336;
    }
    COW_AT(1029c45e)
    g->ebx = rd32(sp0 - 0x424u);
    g->esi = rd32(sp0 - 0x420u);
    g->edi = rd32(sp0 - 0x428u);
    g->ebp = rd32(sp0 - 0x41cu);
    return rd32(sp0 - 0x408u);
L_1029c46f: ;
    COW_AT(1029c46f)
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0x420u);
    g->edi = in_edi;
    g->ebp = rd32(sp0 - 0x41cu);
    return ecx;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1029c280(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1029c2a5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t loc_414;
        double loc_418_f;
        uint32_t loc_41c;
        uint32_t loc_420;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        loc_420 = rd32(sp0 - 0x420u);
        loc_41c = rd32(sp0 - 0x41cu);
        loc_418_f = rdf32(sp0 - 0x418u);
        loc_414 = rd32(sp0 - 0x414u);
        g->esp = sp0 - 0x420u;
        (void)sp0;
        return 1;
    }
    case 0x1029c2b8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x420u;
        (void)sp0;
        return 1;
    }
    case 0x1029c2c9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t loc_414;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        loc_414 = rd32(sp0 - 0x414u);
        g->esp = sp0 - 0x420u;
        (void)sp0;
        return 1;
    }
    case 0x1029c2f5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t loc_424;
        uint32_t loc_428;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        loc_428 = rd32(sp0 - 0x428u);
        loc_424 = rd32(sp0 - 0x424u);
        g->esp = sp0 - 0x430u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029c306u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t loc_408;
        uint32_t loc_424;
        uint32_t loc_428;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        loc_428 = rd32(sp0 - 0x428u);
        loc_424 = rd32(sp0 - 0x424u);
        loc_408 = rd32(sp0 - 0x408u);
        g->esp = sp0 - 0x420u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029c336u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_408;
        uint32_t loc_40c;
        uint32_t loc_410;
        uint32_t loc_418;
        uint32_t loc_424;
        uint32_t loc_428;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_428 = rd32(sp0 - 0x428u);
        loc_424 = rd32(sp0 - 0x424u);
        loc_418 = rd32(sp0 - 0x418u);
        loc_410 = rd32(sp0 - 0x410u);
        loc_40c = rd32(sp0 - 0x40cu);
        loc_408 = rd32(sp0 - 0x408u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x428u;
        g->ebp = arg1;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1029c342u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_408;
        uint32_t loc_40c;
        uint32_t loc_410;
        uint32_t loc_418;
        uint32_t loc_424;
        uint32_t loc_428;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_428 = rd32(sp0 - 0x428u);
        loc_424 = rd32(sp0 - 0x424u);
        loc_418 = rd32(sp0 - 0x418u);
        loc_410 = rd32(sp0 - 0x410u);
        loc_40c = rd32(sp0 - 0x40cu);
        loc_408 = rd32(sp0 - 0x408u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x428u;
        g->ebp = arg1;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1029c351u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_408;
        uint32_t loc_40c;
        uint32_t loc_410;
        uint32_t loc_418;
        uint32_t loc_424;
        uint32_t loc_428;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_428 = rd32(sp0 - 0x428u);
        loc_424 = rd32(sp0 - 0x424u);
        loc_418 = rd32(sp0 - 0x418u);
        loc_410 = rd32(sp0 - 0x410u);
        loc_40c = rd32(sp0 - 0x40cu);
        loc_408 = rd32(sp0 - 0x408u);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp0 - 0x428u;
        g->ebp = arg1;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1029c353u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_408;
        uint32_t loc_40c;
        uint32_t loc_410;
        uint32_t loc_418;
        uint32_t loc_424;
        uint32_t loc_428;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_428 = rd32(sp0 - 0x428u);
        loc_424 = rd32(sp0 - 0x424u);
        loc_418 = rd32(sp0 - 0x418u);
        loc_410 = rd32(sp0 - 0x410u);
        loc_40c = rd32(sp0 - 0x40cu);
        loc_408 = rd32(sp0 - 0x408u);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp0 - 0x428u;
        g->ebp = arg1;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1029c362u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_408;
        uint32_t loc_40c;
        uint32_t loc_410;
        uint32_t loc_418;
        uint32_t loc_424;
        uint32_t loc_428;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_428 = rd32(sp0 - 0x428u);
        loc_424 = rd32(sp0 - 0x424u);
        loc_418 = rd32(sp0 - 0x418u);
        loc_410 = rd32(sp0 - 0x410u);
        loc_40c = rd32(sp0 - 0x40cu);
        loc_408 = rd32(sp0 - 0x408u);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp0 - 0x428u;
        g->ebp = arg1;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1029c36au:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_408;
        uint32_t loc_40c;
        uint32_t loc_410;
        uint32_t loc_418;
        uint32_t loc_424;
        uint32_t loc_428;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_428 = rd32(sp0 - 0x428u);
        loc_424 = rd32(sp0 - 0x424u);
        loc_418 = rd32(sp0 - 0x418u);
        loc_410 = rd32(sp0 - 0x410u);
        loc_40c = rd32(sp0 - 0x40cu);
        loc_408 = rd32(sp0 - 0x408u);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp0 - 0x428u;
        g->ebp = arg1;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1029c37du:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp0 - 0x428u;
        g->ebp = arg1;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1029c3a4u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp0 - 0x428u;
        g->ebp = arg1;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1029c3abu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp0 - 0x428u;
        g->ebp = arg1;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1029c3b2u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp0 - 0x428u;
        g->ebp = arg1;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1029c3b6u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp0 - 0x428u;
        g->ebp = arg1;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1029c3b8u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp0 - 0x428u;
        g->ebp = arg1;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1029c3cbu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp0 - 0x428u;
        g->ebp = arg1;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1029c3d2u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp0 - 0x428u;
        g->ebp = arg1;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1029c3d9u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp0 - 0x428u;
        g->ebp = arg1;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1029c3ddu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp0 - 0x428u;
        g->ebp = arg1;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1029c3dfu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp0 - 0x428u;
        g->ebp = arg1;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1029c3f0u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x428u;
        g->ebp = arg1;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1029c3f7u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x428u;
        g->ebp = arg1;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1029c3feu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x428u;
        g->ebp = arg1;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1029c402u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x428u;
        g->ebp = arg1;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1029c404u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x428u;
        g->ebp = arg1;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1029c433u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x428u;
        g->ebp = arg1;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1029c45eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40c;
        uint32_t loc_410;
        uint32_t loc_418;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_418 = rd32(sp0 - 0x418u);
        loc_410 = rd32(sp0 - 0x410u);
        loc_40c = rd32(sp0 - 0x40cu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x1029c46fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t loc_408;
        uint32_t loc_424;
        uint32_t loc_428;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        loc_428 = rd32(sp0 - 0x428u);
        loc_424 = rd32(sp0 - 0x424u);
        loc_408 = rd32(sp0 - 0x408u);
        g->esp = sp0 - 0x420u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1029c280(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1029c280(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
