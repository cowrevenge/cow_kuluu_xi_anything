/* f_0x102a2fa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_102a2fa0(Guest* g)
{
    double d11;
    double d12;
    double d13;
    double d14;
    double d26;
    double d45;
    double d5;
    double d6;
    double d7;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_2c;
    uint32_t loc_90;
    uint32_t loc_94;
    uint32_t loc_98;
    uint32_t loc_9c;
    uint32_t loc_ac;
    uint32_t t1;
    uint32_t t10;
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
    uint32_t t24;
    uint32_t t25;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t69;
    uint32_t t70;
    uint32_t t71;
    uint32_t t72;
    uint32_t t73;
    uint32_t t74;
    uint32_t t75;
    uint32_t t76;
    uint32_t t77;
    uint32_t t8;
    uint32_t t9;
    double x0;
    double x1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 236u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102a3076u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0xbcu); in_esi = rd32(sp0 - 0xb8u); in_ebp = rd32(sp0 - 0xb4u); in_ebx = rd32(sp0 - 0xb0u); loc_9c = rd32(sp0 - 0x9cu); loc_94 = rd32(sp0 - 0x94u); loc_90 = rd32(sp0 - 0x90u); loc_2c = rd32(sp0 - 0x2cu); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; g->ebp = rd32(sp0 - 0xb4u); g->ebx = rd32(sp0 - 0xb0u); g->edi = rd32(sp0 - 0xbcu); g->esi = rd32(sp0 - 0xb8u); goto E_102a3076;
    case 0x102a30aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0xbcu); in_esi = rd32(sp0 - 0xb8u); in_ebp = rd32(sp0 - 0xb4u); in_ebx = rd32(sp0 - 0xb0u); loc_9c = rd32(sp0 - 0x9cu); loc_94 = rd32(sp0 - 0x94u); loc_90 = rd32(sp0 - 0x90u); loc_2c = rd32(sp0 - 0x2cu); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; g->ebp = rd32(sp0 - 0xb4u); g->ebx = rd32(sp0 - 0xb0u); g->edi = rd32(sp0 - 0xbcu); g->esi = rd32(sp0 - 0xb8u); goto E_102a30aa;
    case 0x102a30bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0xbcu); in_esi = rd32(sp0 - 0xb8u); in_ebp = rd32(sp0 - 0xb4u); in_ebx = rd32(sp0 - 0xb0u); loc_9c = rd32(sp0 - 0x9cu); loc_94 = rd32(sp0 - 0x94u); loc_90 = rd32(sp0 - 0x90u); loc_2c = rd32(sp0 - 0x2cu); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; g->ebp = rd32(sp0 - 0xb4u); g->ebx = rd32(sp0 - 0xb0u); g->edi = rd32(sp0 - 0xbcu); g->esi = rd32(sp0 - 0xb8u); goto E_102a30bf;
    case 0x102a30eau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102a30ea;
    case 0x102a310du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102a310d;
    case 0x102a3122u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102a3122;
    case 0x102a3138u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_98 = rd32(sp0 - 0x98u); goto E_102a3138;
    case 0x102a315du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_98 = rd32(sp0 - 0x98u); goto E_102a315d;
    case 0x102a318eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_98 = rd32(sp0 - 0x98u); goto E_102a318e;
    case 0x102a3198u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_102a3198;
    case 0x102a31b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_102a31b8;
    case 0x102a31c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_102a31c4;
    case 0x102a31d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_102a31d2;
    case 0x102a31d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_ac = rd32(sp0 - 0xacu); goto E_102a31d5;
    case 0x102a31e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_ac = rd32(sp0 - 0xacu); goto E_102a31e2;
    case 0x102a31e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_ac = rd32(sp0 - 0xacu); goto E_102a31e4;
    case 0x102a31f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102a31f1;
    case 0x102a320au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102a320a;
    case 0x102a3222u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_ac = rd32(sp0 - 0xacu); goto E_102a3222;
    case 0x102a3235u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ac = rd32(sp0 - 0xacu); goto E_102a3235;
    case 0x102a3242u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a3242;
    case 0x102a324au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a324a;
    case 0x102a325au: ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_98 = rd32(sp0 - 0x98u); goto E_102a325a;
    case 0x102a3264u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_102a3264;
    case 0x102a3284u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_102a3284;
    case 0x102a3295u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_102a3295;
    case 0x102a329cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_102a329c;
    case 0x102a32a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_102a32a2;
    case 0x102a32a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_102a32a8;
    case 0x102a32b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_ac = rd32(sp0 - 0xacu); goto E_102a32b6;
    case 0x102a32ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102a32eb;
    case 0x102a32fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102a32fd;
    case 0x102a3310u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_ac = rd32(sp0 - 0xacu); goto E_102a3310;
    case 0x102a3317u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a3317;
    case 0x102a3324u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a3324;
    case 0x102a332cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a332c;
    case 0x102a333fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a333f;
    default: break;
    }
#endif

    COW_AT(102a2fa0)
    wr32(sp0 - 0xb0u, in_ebx);
    wr32(sp0 - 0xb4u, in_ebp);
    wr32(sp0 - 0x7cu, 0u);
    wr32(sp0 - 0x6cu, 0u);
    wr32(sp0 - 0xb8u, in_esi);
    wr32(sp0 - 0x78u, 0u);
    wr32(sp0 - 0x68u, 0u);
    wr32(sp0 - 0x74u, 0u);
    wr32(sp0 - 0x70u, 0u);
    wr32(sp0 - 0x64u, 0u);
    wr32(sp0 - 0x60u, 0u);
    wr32(sp0 - 0x5cu, 0u);
    wr32(sp0 - 0x4cu, 0u);
    wr32(sp0 - 0x58u, 0u);
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x80u, 0u);
    wr32(sp0 - 0x54u, 0u);
    wr32(sp0 - 0x50u, 0u);
    wr32(sp0 - 0x44u, 0u);
    wr32(sp0 - 0x40u, 0u);
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x38u, 0xbf800000u);
    wr32(sp0 - 0xbcu, in_edi);
    t1 = rd32(arg1 + 0x18u) + rd32(arg1 + 0x1cu) * 0xcu;
    wr32(sp0 - 0x9cu, t1);
    t2 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x2b0u);
    wr32(sp0 - 0x90u, t2);
    t3 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x2b4u);
    wr32(sp0 - 0x94u, t3);
    t4 = rd32(rd32(t1 + 4u) + 0x2cu);
    wr32(sp0 - 0x2cu, t4);
    if (rd32(rd32(rd32(arg1 + 0x24u) + rd32(arg2 * 0x30u + rd32(arg1 + 0x40u)) * 0xcu) + 0x30u) == 0u)
    {
        ecx = rd32(rd32(arg1 + 0x24u) + rd32(arg2 * 0x30u + rd32(arg1 + 0x40u)) * 0xcu + 4u);
        ebp = arg2 * 0x30u + rd32(arg1 + 0x40u);
        loc_9c = t1;
        loc_90 = t2;
        loc_94 = t3;
        loc_2c = t4;
        x1 = (double)rdf32(rd32(t1 + 4u) + 0x1cu);
        x0 = (double)rdf32(rd32(t1 + 4u) + 0xcu);
    COW_AT(102a30aa)
        t8 = rd32(ecx + 0xcu);
        wr32(sp0 - 0xa8u, t8);
        t9 = rd32(ecx + 0x1cu);
        wr32(sp0 - 0xa4u, t9);
        t10 = rd32(ecx + 0x2cu);
        wr32(sp0 - 0xa0u, t10);
        eax = t10;
        edx = t9;
    }
    else
    {
        eax = rd32(rd32(rd32(arg1 + 0x24u) + rd32(arg2 * 0x30u + rd32(arg1 + 0x40u)) * 0xcu) + 0x30u);
        ecx = rd32(rd32(arg1 + 0x24u) + rd32(arg2 * 0x30u + rd32(arg1 + 0x40u)) * 0xcu + 4u);
        edx = rd32(rd32(arg1 + 0x24u) + rd32(arg2 * 0x30u + rd32(arg1 + 0x40u)) * 0xcu);
        ebp = arg2 * 0x30u + rd32(arg1 + 0x40u);
        loc_9c = t1;
        loc_90 = t2;
        loc_94 = t3;
        loc_2c = t4;
        x1 = (double)rdf32(rd32(t1 + 4u) + 0x1cu);
        x0 = (double)rdf32(rd32(t1 + 4u) + 0xcu);
    COW_AT(102a3076)
        d5 = fr(g, fr(g, (double)rdf32(ecx + 8u) * (double)rdf32(COW_IMG(0x10329cecu))) + x0);
        wrf32(sp0 - 0xa8u, (float)(double)(float)d5);
        d6 = fr(g, fr(g, (double)rdf32(ecx + 0x18u) * (double)rdf32(COW_IMG(0x10329cecu))) + x1);
        wrf32(sp0 - 0xa4u, (float)(double)(float)d6);
        d7 = fr(g, fr(g, (double)rdf32(ecx + 0x28u) * (double)rdf32(COW_IMG(0x10329cecu))) + cow_bits2f(loc_2c));
        wrf32(sp0 - 0xa0u, (float)(double)(float)d7);
    }
    COW_AT(102a30bf)
    d11 = fr(g, x0 - (double)rdf32(sp0 - 0xa8u));
    wr32(sp0 - 0xc0u, sp0 - 0x8cu);
    wrf32(sp0 - 0x8cu, (float)(double)(float)d11);
    d12 = fr(g, x1 - (double)rdf32(sp0 - 0xa4u));
    wrf32(sp0 - 0x88u, (float)(double)(float)d12);
    d13 = fr(g, cow_bits2f(loc_2c) - (double)rdf32(sp0 - 0xa0u));
    wrf32(sp0 - 0x84u, (float)(double)(float)d13);
    g->esp = sp0 - 0xbcu;
    cow_cdecl(g, COW_IMG(0x10274910u), 1, sp0 - 0x8cu);
    d14 = cow_take_float(g);
    x0 = d14;
    COW_AT(102a30ea)
    wrf32(sp0 - 0xacu, (float)(double)(float)x0);
    wr32(sp0 - 0xc4u, 0x40490fdbu);
    wr32(sp0 - 0xc8u, sp0 - 0x8cu);
    wr32(sp0 - 0xccu, sp0 - 0x40u);
    wr32(sp0 - 0xd0u, sp0 - 0x34u);
    g->ecx = sp0 - 0x34u;
    g->esp = sp0 - 0xc0u;
    cow_cdecl(g, COW_IMG(0x1027ad10u), 4, sp0 - 0x34u, sp0 - 0x40u, sp0 - 0x8cu, 0x40490fdbu);
    t15 = g->ecx;
    ecx = t15;
    COW_AT(102a310d)
    wr32(sp0 - 0xd4u, sp0 - 0x34u);
    wr32(sp0 - 0xd8u, sp0 - 0x24u);
    g->esp = sp0 - 0xa8u;
    cow_cdecl(g, COW_IMG(0x1027a9f0u), 12, sp0 - 0x24u, sp0 - 0x34u, sp0 - 0x34u, sp0 - 0x40u, sp0 - 0x8cu, 0x40490fdbu, sp0 - 0x8cu, rd32(sp0 - 0xbcu), rd32(sp0 - 0xb8u), rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u), rd32(sp0 - 0xacu));
    COW_AT(102a3122)
    wr32(sp0 - 0x98u, 3u);
    eax = sp0 - 0x80u;
    ecx = sp0 - 0x24u;
    loc_98 = 3u;
L_102a3138: ;
    COW_AT(102a3138)
    wr32(eax, rd32(ecx));
    t16 = rd32(ecx + 4u);
    wr32(eax + 4u, t16);
    t17 = rd32(ecx + 8u);
    wr32(eax + 8u, t17);
    t18 = rd32(sp0 - 0x98u) - 1u;
    t19 = rd32(sp0 - 0x98u);
    wr32(sp0 - 0x98u, t18);
    if (t19 != 1u)
    {
        eax = eax + 0x10u;
        ecx = ecx + 0xcu;
        loc_98 = t18;
        goto L_102a3138;
    }
    COW_AT(102a315d)
    t20 = rd32(sp0 - 0xa8u);
    wr32(sp0 - 0x74u, t20);
    t21 = rd32(sp0 - 0xa4u);
    wr32(sp0 - 0x64u, t21);
    t22 = rd32(sp0 - 0xa0u);
    wr32(sp0 - 0x54u, t22);
    wr32(sp0 - 0x44u, 0x3f800000u);
    if (arg3 == 0u)
    {
        ecx = t21;
        goto L_102a325a;
    }
    ecx = t21;
    edx = t22;
    COW_AT(102a318e)
    wr32(sp0 - 0xc0u, sp0 - 0x80u);
    g->eax = sp0 - 0x80u;
    g->edx = edx;
    g->esp = sp0 - 0xbcu;
    t23 = cow_cdecl(g, COW_IMG(0x10283d80u), 1, sp0 - 0x80u);
    t24 = g->edx;
    eax = t23;
    edx = t24;
    COW_AT(102a3198)
    t25 = rd32(sp0 - 0xacu);
    d26 = fr(g, (double)rdf32(sp0 - 0xacu) * (double)rdf32(COW_IMG(0x1032a1a8u)));
    wr32(sp0 - 0xc0u, t25);
    wr32(sp0 - 0xc4u, t25);
    wrf32(sp0 - 0xc4u, (float)(double)(float)d26);
    wr32(sp0 - 0xc8u, 0x3f800000u);
    g->eax = eax;
    g->ecx = t25;
    g->esp = sp0 - 0xbcu;
    t27 = cow_cdecl(g, COW_IMG(0x10283c30u), 3, 0x3f800000u, cow_f2bits((double)(float)d26), t25);
    t28 = g->ecx;
    eax = t27;
    ecx = t28;
    COW_AT(102a31b8)
    wr32(sp0 - 0xccu, 1u);
    wr32(sp0 - 0xd0u, rd32(ebp));
    wr32(sp0 - 0xd4u, arg1);
    g->ecx = ecx;
    g->edx = rd32(ebp);
    t29 = rd32(ebp);
    g->esp = sp0 - 0xa8u;
    cow_cdecl(g, COW_IMG(0x1028f610u), 11, arg1, t29, 1u, 0x3f800000u, rd32(sp0 - 0xc4u), rd32(sp0 - 0xc0u), rd32(sp0 - 0xbcu), rd32(sp0 - 0xb8u), rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u), rd32(sp0 - 0xacu));
    t30 = g->ecx;
    t31 = g->edx;
    ecx = t30;
    edx = t31;
    COW_AT(102a31c4)
    wr32(sp0 - 0xacu, 0u);
    if ((int32_t)rd32(arg1 + 0x44u) > 0)
    {
    COW_AT(102a31d2)
        ecx = rd32(arg1 + 0x48u);
        ebx = 0u;
        loc_ac = 0u;
L_102a31d5: ;
    COW_AT(102a31d5)
        if ((int32_t)rd32(ebx + ecx + 4u) > 0)
        {
            eax = ebx + ecx;
            edx = rd32(ebx + ecx + 4u);
    COW_AT(102a31e2)
            ebp = 0u;
            edi = 0u;
L_102a31e4: ;
    COW_AT(102a31e4)
            t32 = rd32(edi + rd32(eax + 0x28u) + 4u);
            wr32(sp0 - 0xc0u, t32);
            g->esp = sp0 - 0xbcu;
            cow_cdecl(g, COW_IMG(0x10283e20u), 1, t32);
    COW_AT(102a31f1)
            t33 = rd32(sp0 - 0x9cu);
            wr32(sp0 - 0xc4u, t33);
            t34 = edi + rd32(ebx + rd32(arg1 + 0x48u) + 0x28u);
            wr32(sp0 - 0xc8u, t34);
            t35 = rd32(edi + rd32(ebx + rd32(arg1 + 0x48u) + 0x28u) + 0x18u);
            wr32(sp0 - 0xccu, t35);
            g->esp = sp0 - 0xc8u;
            cow_cdecl(g, COW_IMG(0x102a1f40u), 1, t35);
    COW_AT(102a320a)
            if ((int32_t)(ebp + 1u) < (int32_t)rd32(ebx + rd32(arg1 + 0x48u) + 4u))
            {
                eax = ebx + rd32(arg1 + 0x48u);
                edx = rd32(ebx + rd32(arg1 + 0x48u) + 4u);
                ebp = ebp + 1u;
                edi = edi + 0x90u;
                loc_ac = rd32(sp0 - 0xacu);
                goto L_102a31e4;
            }
            ecx = rd32(arg1 + 0x48u);
            loc_ac = rd32(sp0 - 0xacu);
        }
    COW_AT(102a3222)
        wr32(sp0 - 0xacu, loc_ac + 1u);
        if ((int32_t)(loc_ac + 1u) < (int32_t)rd32(arg1 + 0x44u))
        {
            ebx = ebx + 0x2cu;
            loc_ac = loc_ac + 1u;
            goto L_102a31d5;
        }
        edx = rd32(arg1 + 0x44u);
    }
    COW_AT(102a3235)
    t36 = rd32(rd32(sp0 - 0x9cu) + 4u);
    wr32(sp0 - 0xc0u, t36);
    g->eax = t36;
    g->edx = edx;
    t37 = rd32(sp0 - 0x9cu);
    g->esp = sp0 - 0xbcu;
    t38 = cow_cdecl(g, COW_IMG(0x10283d80u), 1, t36);
    t39 = g->edx;
    eax = t38;
    edx = t39;
    esi = t37;
    COW_AT(102a3242)
    wr32(sp0 - 0xc4u, rd32(esi));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xc0u;
    t40 = cow_cdecl(g, COW_IMG(0x10291200u), 1, rd32(esi));
    t41 = g->edx;
    eax = t40;
    edx = t41;
    COW_AT(102a324a)
    g->ebx = rd32(sp0 - 0xb0u);
    g->esi = rd32(sp0 - 0xb8u);
    g->edi = rd32(sp0 - 0xbcu);
    g->ebp = rd32(sp0 - 0xb4u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_102a325a: ;
    COW_AT(102a325a)
    wr32(sp0 - 0xc0u, sp0 - 0x80u);
    g->ecx = ecx;
    g->edx = sp0 - 0x80u;
    g->esp = sp0 - 0xbcu;
    cow_cdecl(g, COW_IMG(0x10283d80u), 1, sp0 - 0x80u);
    t42 = g->ecx;
    t43 = g->edx;
    ecx = t42;
    edx = t43;
    COW_AT(102a3264)
    t44 = rd32(sp0 - 0xacu);
    d45 = fr(g, (double)rdf32(sp0 - 0xacu) * (double)rdf32(COW_IMG(0x1032a1a8u)));
    wr32(sp0 - 0xc0u, t44);
    wr32(sp0 - 0xc4u, ecx);
    wrf32(sp0 - 0xc4u, (float)(double)(float)d45);
    wr32(sp0 - 0xc8u, 0x3f800000u);
    g->eax = t44;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xbcu;
    t46 = cow_cdecl(g, COW_IMG(0x10283c30u), 3, 0x3f800000u, cow_f2bits((double)(float)d45), t44);
    t47 = g->ecx;
    t48 = g->edx;
    eax = t46;
    ecx = t47;
    edx = t48;
    COW_AT(102a3284)
    wr32(sp0 - 0xccu, 0x3f800000u);
    wr32(sp0 - 0xd0u, 0x3f800000u);
    wr32(sp0 - 0xd4u, 0u);
    wr32(sp0 - 0xd8u, 0u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    t49 = cow_cdecl(g, COW_IMG(0x10283a30u), 16, 0u, 0u, 0x3f800000u, 0x3f800000u, 0x3f800000u, rd32(sp0 - 0xc4u), rd32(sp0 - 0xc0u), rd32(sp0 - 0xbcu), rd32(sp0 - 0xb8u), rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u), rd32(sp0 - 0xacu), rd32(sp0 - 0xa8u), rd32(sp0 - 0xa4u), rd32(sp0 - 0xa0u), rd32(sp0 - 0x9cu));
    t50 = g->ecx;
    t51 = g->edx;
    eax = t49;
    ecx = t50;
    edx = t51;
    COW_AT(102a3295)
    wr32(sp0 - 0xdcu, 0u);
    wr32(sp0 - 0xe0u, 0u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xd8u;
    t52 = cow_cdecl(g, COW_IMG(0x10284b40u), 2, 0u, 0u);
    t53 = g->ecx;
    t54 = g->edx;
    eax = t52;
    ecx = t53;
    edx = t54;
    COW_AT(102a329c)
    wr32(sp0 - 0xe4u, 0u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xe0u;
    t55 = cow_cdecl(g, COW_IMG(0x10282030u), 1, 0u);
    t56 = g->ecx;
    t57 = g->edx;
    eax = t55;
    ecx = t56;
    edx = t57;
    COW_AT(102a32a2)
    wr32(sp0 - 0xe8u, 0u);
    g->esp = sp0 - 0xe4u;
    cow_call_regs(g, COW_IMG(0x10297ce0u), g->eax, ecx, edx, 1, 1, 0u);
    t58 = g->ecx;
    t59 = g->edx;
    ecx = t58;
    edx = t59;
    COW_AT(102a32a8)
    wr32(sp0 - 0xacu, 0u);
    if ((int32_t)rd32(ebp + 4u) <= 0)
    {
        eax = rd32(ebp + 4u);
        loc_ac = 0u;
        goto L_102a3310;
    }
    loc_ac = 0u;
L_102a32b6: ;
    COW_AT(102a32b6)
    t60 = rd32(loc_ac * 4u + rd32(ebp + 8u));
    t61 = rd32((t60 & 0x7fffu) * 0x90u + rd32((uint32_t)((int32_t)t60 >> 0x10u) * 0x2cu + rd32(arg1 + 0x48u) + 0x28u) + 4u);
    wr32(sp0 - 0xc0u, t61);
    g->esp = sp0 - 0xbcu;
    cow_cdecl(g, COW_IMG(0x10283e20u), 1, t61);
    ebx = (t60 & 0x7fffu) * 0x90u;
    edi = (uint32_t)((int32_t)t60 >> 0x10u) * 0x2cu;
    COW_AT(102a32eb)
    wr32(sp0 - 0xc4u, 4u);
    t62 = rd32(ebx + rd32(edi + rd32(arg1 + 0x48u) + 0x28u));
    wr32(sp0 - 0xc8u, t62);
    g->edx = t62;
    g->esp = sp0 - 0xc4u;
    cow_cdecl(g, COW_IMG(0x10285870u), 1, t62);
    t63 = g->edx;
    edx = t63;
    COW_AT(102a32fd)
    t64 = rd32(sp0 - 0xacu) + 1u;
    t65 = rd32(sp0 - 0xacu);
    wr32(sp0 - 0xacu, t64);
    if ((int32_t)(t65 + 1u) < (int32_t)rd32(ebp + 4u))
    {
        loc_ac = t64;
        goto L_102a32b6;
    }
    eax = t64;
    ecx = rd32(ebp + 4u);
    loc_ac = t64;
L_102a3310: ;
    COW_AT(102a3310)
    wr32(sp0 - 0xc0u, 2u);
    g->esp = sp0 - 0xbcu;
    cow_call_regs(g, COW_IMG(0x10297ce0u), g->eax, ecx, edx, 1, 1, 2u);
    t66 = g->ecx;
    t67 = g->edx;
    ecx = t66;
    edx = t67;
    COW_AT(102a3317)
    t68 = rd32(rd32(sp0 - 0x9cu) + 4u);
    wr32(sp0 - 0xc4u, t68);
    g->eax = t68;
    g->edx = edx;
    t69 = rd32(sp0 - 0x9cu);
    g->esp = sp0 - 0xc0u;
    t70 = cow_cdecl(g, COW_IMG(0x10283d80u), 1, t68);
    t71 = g->edx;
    eax = t70;
    edx = t71;
    esi = t69;
    COW_AT(102a3324)
    wr32(sp0 - 0xc8u, rd32(esi));
    g->ecx = rd32(esi);
    t72 = rd32(esi);
    g->esp = sp0 - 0xc4u;
    cow_cdecl(g, COW_IMG(0x10291200u), 1, t72);
    t73 = g->ecx;
    ecx = t73;
    COW_AT(102a332c)
    t74 = rd32(sp0 - 0x94u);
    wr32(sp0 - 0xccu, t74);
    t75 = rd32(sp0 - 0x90u);
    wr32(sp0 - 0xd0u, t75);
    wr32(sp0 - 0xd4u, 0u);
    wr32(sp0 - 0xd8u, 0u);
    g->eax = t75;
    g->edx = t74;
    g->esp = sp0 - 0x98u;
    t76 = cow_cdecl(g, COW_IMG(0x10283a30u), 16, 0u, 0u, t75, t74, rd32(sp0 - 0xc8u), rd32(sp0 - 0xc4u), rd32(sp0 - 0xc0u), rd32(sp0 - 0xbcu), rd32(sp0 - 0xb8u), rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u), rd32(sp0 - 0xacu), rd32(sp0 - 0xa8u), rd32(sp0 - 0xa4u), rd32(sp0 - 0xa0u), rd32(sp0 - 0x9cu));
    t77 = g->edx;
    eax = t76;
    edx = t77;
    COW_AT(102a333f)
    g->ebx = rd32(sp0 - 0xb0u);
    g->esi = rd32(sp0 - 0xb8u);
    g->edi = rd32(sp0 - 0xbcu);
    g->ebp = rd32(sp0 - 0xb4u);
    g->edx = edx;
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102a2fa0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102a3076u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_2c;
        uint32_t loc_90;
        uint32_t loc_94;
        uint32_t loc_9c;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xbcu);
        in_esi = rd32(sp0 - 0xb8u);
        in_ebp = rd32(sp0 - 0xb4u);
        in_ebx = rd32(sp0 - 0xb0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_94 = rd32(sp0 - 0x94u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_2c = rd32(sp0 - 0x2cu);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0xbcu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a30aau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_2c;
        uint32_t loc_90;
        uint32_t loc_94;
        uint32_t loc_9c;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xbcu);
        in_esi = rd32(sp0 - 0xb8u);
        in_ebp = rd32(sp0 - 0xb4u);
        in_ebx = rd32(sp0 - 0xb0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_94 = rd32(sp0 - 0x94u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_2c = rd32(sp0 - 0x2cu);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0xbcu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a30bfu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_2c;
        uint32_t loc_90;
        uint32_t loc_94;
        uint32_t loc_9c;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xbcu);
        in_esi = rd32(sp0 - 0xb8u);
        in_ebp = rd32(sp0 - 0xb4u);
        in_ebx = rd32(sp0 - 0xb0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_94 = rd32(sp0 - 0x94u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_2c = rd32(sp0 - 0x2cu);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0xbcu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a30eau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xc0u;
        g->esi = arg1;
        wr32(sp0 - 0xc0u, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x102a310du:
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
        g->esp = sp0 - 0xd0u;
        g->esi = arg1;
        wr32(sp0 - 0xd0u, sp0 - 0x34u);
        wr32(sp0 - 0xccu, sp0 - 0x40u);
        wr32(sp0 - 0xc8u, sp0 - 0x8cu);
        wr32(sp0 - 0xc4u, 0x40490fdbu);
        wr32(sp0 - 0xc0u, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x102a3122u:
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
        g->esp = sp0 - 0xd8u;
        g->esi = arg1;
        wr32(sp0 - 0xd8u, sp0 - 0x24u);
        wr32(sp0 - 0xd4u, sp0 - 0x34u);
        wr32(sp0 - 0xd0u, sp0 - 0x34u);
        wr32(sp0 - 0xccu, sp0 - 0x40u);
        wr32(sp0 - 0xc8u, sp0 - 0x8cu);
        wr32(sp0 - 0xc0u, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x102a3138u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_98;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0xbcu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a315du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_98;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0xbcu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a318eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_98;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0xbcu;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a3198u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0xc0u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0xc0u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x102a31b8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0xc8u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0xc8u, 0x3f800000u);
        (void)sp0;
        return 1;
    }
    case 0x102a31c4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0xd4u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a31d2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0xbcu;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0xacu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102a31d5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xbcu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a31e2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xbcu;
        g->ebp = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a31e4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xbcu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a31f1u:
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
        g->esp = sp0 - 0xc0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a320au:
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
        g->esp = sp0 - 0xccu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a3222u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xbcu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a3235u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xbcu;
        (void)sp0;
        return 1;
    }
    case 0x102a3242u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xc0u;
        (void)sp0;
        return 1;
    }
    case 0x102a324au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x102a325au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_98;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0xbcu;
        g->eax = arg3;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a3264u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0xc0u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0xc0u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x102a3284u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0xc8u;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0xc8u, 0x3f800000u);
        (void)sp0;
        return 1;
    }
    case 0x102a3295u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0xd8u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a329cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0xe0u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a32a2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0xe4u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a32a8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0xe8u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a32b6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xbcu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a32ebu:
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
        g->esp = sp0 - 0xc0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a32fdu:
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
        g->esp = sp0 - 0xc8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a3310u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_ac;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_ac = rd32(sp0 - 0xacu);
        g->esp = sp0 - 0xbcu;
        (void)sp0;
        return 1;
    }
    case 0x102a3317u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xc0u;
        wr32(sp0 - 0xc0u, 2u);
        (void)sp0;
        return 1;
    }
    case 0x102a3324u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x102a332cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xc8u;
        (void)sp0;
        return 1;
    }
    case 0x102a333fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xd8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102a2fa0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102a2fa0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
