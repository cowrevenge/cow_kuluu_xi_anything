/* f_0x10024410 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_10024410(Guest* g)
{
    double d1;
    double d100;
    double d101;
    double d109;
    double d112;
    double d113;
    double d114;
    double d115;
    double d12;
    double d120;
    double d121;
    double d124;
    double d125;
    double d126;
    double d127;
    double d128;
    double d15;
    double d16;
    double d17;
    double d18;
    double d2;
    double d22;
    double d23;
    double d24;
    double d25;
    double d32;
    double d37;
    double d41;
    double d42;
    double d45;
    double d46;
    double d49;
    double d51;
    double d52;
    double d56;
    double d57;
    double d58;
    double d59;
    double d66;
    double d69;
    double d70;
    double d73;
    double d75;
    double d76;
    double d80;
    double d81;
    double d84;
    double d85;
    double d88;
    double d90;
    double d91;
    double d93;
    double d94;
    double d95;
    double d98;
    double d99;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_5c;
    uint32_t loc_60;
    uint32_t loc_64;
    uint32_t t10;
    uint32_t t102;
    uint32_t t103;
    uint32_t t104;
    uint32_t t105;
    uint32_t t106;
    uint32_t t107;
    uint32_t t108;
    uint32_t t11;
    uint32_t t110;
    uint32_t t111;
    uint32_t t116;
    uint32_t t117;
    uint32_t t118;
    uint32_t t119;
    uint32_t t122;
    uint32_t t123;
    uint32_t t13;
    uint32_t t14;
    uint32_t t19;
    uint32_t t20;
    uint32_t t21;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t43;
    uint32_t t44;
    uint32_t t47;
    uint32_t t48;
    uint32_t t5;
    uint32_t t50;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t67;
    uint32_t t68;
    uint32_t t7;
    uint32_t t71;
    uint32_t t72;
    uint32_t t74;
    uint32_t t77;
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
    uint32_t t82;
    uint32_t t83;
    uint32_t t86;
    uint32_t t87;
    uint32_t t89;
    uint32_t t9;
    uint32_t t92;
    uint32_t t96;
    uint32_t t97;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 160u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1002449bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x64u); in_esi = rd32(sp0 - 0x60u); in_ebx = rd32(sp0 - 0x5cu); x0 = ST(0); g->ebx = rd32(sp0 - 0x5cu); g->edi = rd32(sp0 - 0x64u); g->esi = rd32(sp0 - 0x60u); goto E_1002449b;
    case 0x100244a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x64u); in_esi = rd32(sp0 - 0x60u); in_ebx = rd32(sp0 - 0x5cu); x0 = ST(0); g->ebx = rd32(sp0 - 0x5cu); g->edi = rd32(sp0 - 0x64u); g->esi = rd32(sp0 - 0x60u); goto E_100244a0;
    case 0x100244adu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x64u); in_esi = rd32(sp0 - 0x60u); in_ebx = rd32(sp0 - 0x5cu); g->ebx = rd32(sp0 - 0x5cu); g->edi = rd32(sp0 - 0x64u); g->esi = rd32(sp0 - 0x60u); goto E_100244ad;
    case 0x100244b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x64u); in_esi = rd32(sp0 - 0x60u); in_ebx = rd32(sp0 - 0x5cu); g->ebx = rd32(sp0 - 0x5cu); g->edi = rd32(sp0 - 0x64u); g->esi = rd32(sp0 - 0x60u); goto E_100244b0;
    case 0x100244b9u: ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x64u); in_esi = rd32(sp0 - 0x60u); in_ebx = rd32(sp0 - 0x5cu); g->ebx = rd32(sp0 - 0x5cu); g->edi = rd32(sp0 - 0x64u); g->esi = rd32(sp0 - 0x60u); goto E_100244b9;
    case 0x100244c0u: ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x64u); in_esi = rd32(sp0 - 0x60u); in_ebx = rd32(sp0 - 0x5cu); g->ebx = rd32(sp0 - 0x5cu); g->edi = rd32(sp0 - 0x64u); g->esi = rd32(sp0 - 0x60u); goto E_100244c0;
    case 0x100244c7u: ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x64u); in_esi = rd32(sp0 - 0x60u); in_ebx = rd32(sp0 - 0x5cu); g->ebx = rd32(sp0 - 0x5cu); g->edi = rd32(sp0 - 0x64u); g->esi = rd32(sp0 - 0x60u); goto E_100244c7;
    case 0x10024542u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10024542;
    case 0x10024550u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10024550;
    case 0x1002458bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1002458b;
    case 0x10024599u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10024599;
    case 0x100245c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100245c8;
    case 0x100245d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100245d6;
    case 0x1002462au: ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x64u); in_esi = rd32(sp0 - 0x60u); in_ebx = rd32(sp0 - 0x5cu); g->ebx = rd32(sp0 - 0x5cu); g->edi = rd32(sp0 - 0x64u); g->esi = rd32(sp0 - 0x60u); goto E_1002462a;
    case 0x100246a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100246a5;
    case 0x100246f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100246f9;
    case 0x10024728u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10024728;
    case 0x10024736u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10024736;
    case 0x1002478au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x64u); in_esi = rd32(sp0 - 0x60u); in_ebx = rd32(sp0 - 0x5cu); g->ebx = rd32(sp0 - 0x5cu); g->edi = rd32(sp0 - 0x64u); g->esi = rd32(sp0 - 0x60u); goto E_1002478a;
    case 0x10024823u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10024823;
    case 0x10024861u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10024861;
    case 0x10024890u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10024890;
    case 0x1002489eu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1002489e;
    case 0x100248dau: ecx = g->ecx; edx = g->edx; edi = g->edi; x0 = ST(0); goto E_100248da;
    case 0x100248e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); goto E_100248e9;
    default: break;
    }
#endif

    COW_AT(10024410)
    d1 = (double)rdf32(sp0 + 4u);
    wr32(sp0 - 0x5cu, in_ebx);
    wr32(sp0 - 0x60u, in_esi);
    wr32(sp0 - 0x64u, in_edi);
    d2 = (double)(float)fr(g, d1 * d1);
    wrf32(sp0 - 0x58u, (float)d2);
    t3 = rd32(sp0 + 8u);
    wr32(sp0 - 0x68u, t3);
    wr32(sp0 - 0x6cu, arg3);
    wr32(sp0 - 0x70u, sp0 - 0x24u);
    g->eax = sp0 - 0x24u;
    g->edx = in_edx;
    g->esp = sp0 - 0x64u;
    t4 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x24u, arg3, t3);
    t5 = g->edx;
    wr32(sp0 - 0x74u, t3);
    wr32(sp0 - 0x78u, arg4);
    wr32(sp0 - 0x7cu, sp0 - 0x18u);
    g->ecx = sp0 - 0x18u;
    g->esp = sp0 - 0x70u;
    t6 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x18u, arg4, t3);
    t7 = g->ecx;
    wr32(sp0 - 0x80u, arg3);
    wr32(sp0 - 0x84u, arg4);
    wr32(sp0 - 0x88u, sp0 - 0x54u);
    g->ecx = t7;
    g->edx = sp0 - 0x54u;
    g->esp = sp0 - 0x7cu;
    cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x54u, arg4, arg3);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 - 0x8cu, sp0 - 0x54u);
    g->esp = sp0 - 0x88u;
    t10 = cow_call_regs(g, COW_IMG(0x100274b0u), sp0 - 0x54u, g->ecx, g->edx, 1, 1, sp0 - 0x54u);
    wr32(sp0 - 0x90u, sp0 - 0x24u);
    wr32(sp0 - 0x94u, sp0 - 0x24u);
    g->edx = sp0 - 0x24u;
    g->esp = sp0 - 0x8cu;
    cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x24u, sp0 - 0x24u);
    t11 = g->edx;
    d12 = cow_take_float(g);
    wrf32(sp0 + 8u, (float)d12);
    wr32(sp0 - 0x98u, sp0 - 0x18u);
    wr32(sp0 - 0x9cu, sp0 - 0x18u);
    g->eax = sp0 - 0x18u;
    g->edx = t11;
    g->esp = sp0 - 0x94u;
    t13 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x18u, sp0 - 0x18u);
    t14 = g->edx;
    d15 = cow_take_float(g);
    d16 = (double)rdf32(sp0 - 0x58u);
    d17 = (double)rdf32(sp0 + 8u);
    if (!(d16 < d17))
    {
        eax = (t13 & 0xffff0000u) | (uint16_t)cow_fsw(g, d16, d17, 1u);
        ecx = 0u;
        edx = t14;
        edi = t3;
        x0 = d15;
    }
    else
    {
        eax = (t13 & 0xffff0000u) | (uint16_t)cow_fsw(g, d16, d17, 1u);
        edx = t14;
        edi = t3;
        x0 = d15;
    COW_AT(1002449b)
        ecx = 1u;
    }
    COW_AT(100244a0)
    d18 = (double)rdf32(sp0 - 0x58u);
    if (d18 < x0)
    {
    COW_AT(100244ad)
        ecx = ecx | 2u;
    }
    COW_AT(100244b0)
    if (ecx == 1u)
    {
        ecx = ecx - 1u;
        goto L_1002478a;
    }
    ecx = ecx - 1u;
    COW_AT(100244b9)
    if (ecx == 1u) goto L_1002462a;
    ecx = ecx - 1u;
    COW_AT(100244c0)
    if (ecx != 1u)
    {
        eax = 0u;
        loc_5c = in_ebx;
        loc_60 = in_esi;
        loc_64 = in_edi;
        goto L_100248e9;
    }
    ecx = ecx - 1u;
    COW_AT(100244c7)
    wr32(sp0 - 0x68u, arg3);
    wr32(sp0 - 0x6cu, edi);
    wr32(sp0 - 0x70u, sp0 - 0xcu);
    g->edx = sp0 - 0xcu;
    g->esp = sp0 - 0x64u;
    cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0xcu, edi, arg3);
    t19 = g->edx;
    wr32(sp0 - 0x74u, sp0 - 0x54u);
    wr32(sp0 - 0x78u, sp0 - 0xcu);
    g->eax = sp0 - 0x54u;
    g->ecx = sp0 - 0xcu;
    g->esp = sp0 - 0x70u;
    t20 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0xcu, sp0 - 0x54u);
    t21 = g->ecx;
    d22 = cow_take_float(g);
    d23 = fr(g, (double)rdf32(sp0 - 0x54u) * d22);
    wr32(sp0 - 0x7cu, arg3);
    wr32(sp0 - 0x80u, sp0 - 0x3cu);
    wrf32(sp0 - 0x3cu, (float)(double)(float)d23);
    d24 = fr(g, (double)rdf32(sp0 - 0x50u) * d22);
    wrf32(sp0 - 0x38u, (float)(double)(float)d24);
    d25 = fr(g, d22 * (double)rdf32(sp0 - 0x4cu));
    wrf32(sp0 - 0x34u, (float)(double)(float)d25);
    g->edx = sp0 - 0x3cu;
    g->esp = sp0 - 0x78u;
    cow_cdecl(g, COW_IMG(0x10026f20u), 2, sp0 - 0x3cu, arg3);
    t26 = g->edx;
    wr32(sp0 - 0x84u, arg3);
    wr32(sp0 - 0x88u, sp0 - 0x3cu);
    wr32(sp0 - 0x8cu, sp0 - 0x30u);
    g->eax = sp0 - 0x3cu;
    g->ecx = sp0 - 0x30u;
    g->esp = sp0 - 0x80u;
    t27 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x30u, sp0 - 0x3cu, arg3);
    t28 = g->ecx;
    wr32(sp0 - 0x90u, sp0 - 0x30u);
    g->edx = sp0 - 0x30u;
    g->esp = sp0 - 0x8cu;
    cow_call_regs(g, COW_IMG(0x100274b0u), t27, g->ecx, g->edx, 1, 1, sp0 - 0x30u);
    t29 = g->edx;
    wr32(sp0 - 0x94u, sp0 - 0x54u);
    wr32(sp0 - 0x98u, sp0 - 0x30u);
    g->eax = sp0 - 0x54u;
    g->ecx = sp0 - 0x30u;
    g->esp = sp0 - 0x90u;
    t30 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x30u, sp0 - 0x54u);
    t31 = g->ecx;
    d32 = cow_take_float(g);
    if (!(d32 < (double)rdf32(COW_IMG(0x1032a1a8u))))
    {
        ecx = t31;
        goto L_10024550;
    }
    COW_AT(10024542)
    g->ebx = rd32(sp0 - 0x5cu);
    g->esi = rd32(sp0 - 0x60u);
    g->edi = rd32(sp0 - 0x64u);
    return 4u;
L_10024550: ;
    COW_AT(10024550)
    wr32(sp0 - 0x68u, arg4);
    wr32(sp0 - 0x6cu, sp0 - 0x3cu);
    wr32(sp0 - 0x70u, sp0 - 0x30u);
    g->eax = sp0 - 0x30u;
    g->edx = sp0 - 0x3cu;
    g->esp = sp0 - 0x64u;
    t33 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x30u, sp0 - 0x3cu, arg4);
    t34 = g->edx;
    wr32(sp0 - 0x74u, sp0 - 0x30u);
    g->ecx = sp0 - 0x30u;
    g->esp = sp0 - 0x70u;
    cow_call_regs(g, COW_IMG(0x100274b0u), t33, g->ecx, g->edx, 1, 1, sp0 - 0x30u);
    t35 = g->ecx;
    wr32(sp0 - 0x78u, sp0 - 0x54u);
    wr32(sp0 - 0x7cu, sp0 - 0x30u);
    g->eax = sp0 - 0x30u;
    g->esp = sp0 - 0x74u;
    t36 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x30u, sp0 - 0x54u);
    d37 = cow_take_float(g);
    if ((cow_fsw(g, d37, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d37, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
        goto L_10024599;
    }
    COW_AT(1002458b)
    g->ebx = rd32(sp0 - 0x5cu);
    g->esi = rd32(sp0 - 0x60u);
    g->edi = rd32(sp0 - 0x64u);
    return 4u;
L_10024599: ;
    COW_AT(10024599)
    wr32(sp0 - 0x68u, edi);
    wr32(sp0 - 0x6cu, sp0 - 0x3cu);
    wr32(sp0 - 0x70u, sp0 - 0x48u);
    g->edx = sp0 - 0x48u;
    g->esp = sp0 - 0x64u;
    cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x48u, sp0 - 0x3cu, edi);
    t38 = g->edx;
    wr32(sp0 - 0x74u, sp0 - 0x48u);
    wr32(sp0 - 0x78u, sp0 - 0x48u);
    g->eax = sp0 - 0x48u;
    g->ecx = sp0 - 0x48u;
    g->esp = sp0 - 0x70u;
    t39 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x48u, sp0 - 0x48u);
    t40 = g->ecx;
    d41 = cow_take_float(g);
    d42 = (double)rdf32(sp0 - 0x58u);
    if ((cow_fsw(g, d41, d42, 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d41, d42, 0u) & 0x4100u;
        ecx = t40;
        goto L_100245d6;
    }
    COW_AT(100245c8)
    g->ebx = rd32(sp0 - 0x5cu);
    g->esi = rd32(sp0 - 0x60u);
    g->edi = rd32(sp0 - 0x64u);
    return 4u;
L_100245d6: ;
    COW_AT(100245d6)
    wr32(sp0 - 0x68u, sp0 - 0x48u);
    g->ecx = ecx;
    g->edx = sp0 - 0x48u;
    g->esp = sp0 - 0x64u;
    cow_cdecl(g, COW_IMG(0x10027600u), 1, sp0 - 0x48u);
    t43 = g->ecx;
    t44 = g->edx;
    d45 = cow_take_float(g);
    d46 = fr(g, (double)rdf32(sp0 + 4u) - d45);
    wr32(sp0 - 0x6cu, sp0 - 0x48u);
    wrf32(sp0 + 4u, (float)d46);
    g->esp = sp0 - 0x68u;
    cow_call_regs(g, COW_IMG(0x100274b0u), sp0 - 0x48u, g->ecx, g->edx, 1, 1, sp0 - 0x48u);
    t47 = rd32(sp0 - 0x60u);
    t48 = rd32(sp0 - 0x64u);
    d49 = fr(g, (double)rdf32(sp0 - 0x48u) * (double)rdf32(sp0 + 4u));
    wrf32(arg5, (float)d49);
    t50 = rd32(sp0 - 0x5cu);
    d51 = fr(g, (double)rdf32(sp0 - 0x44u) * (double)rdf32(sp0 + 4u));
    wrf32(arg5 + 4u, (float)d51);
    d52 = fr(g, (double)rdf32(sp0 - 0x40u) * (double)rdf32(sp0 + 4u));
    wrf32(arg5 + 8u, (float)d52);
    g->ebx = t50;
    g->esi = t47;
    g->edi = t48;
    return 3u;
L_1002462a: ;
    COW_AT(1002462a)
    wr32(sp0 - 0x68u, arg3);
    wr32(sp0 - 0x6cu, edi);
    wr32(sp0 - 0x70u, sp0 - 0xcu);
    g->ecx = sp0 - 0xcu;
    g->esp = sp0 - 0x64u;
    cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0xcu, edi, arg3);
    t53 = g->ecx;
    wr32(sp0 - 0x74u, sp0 - 0x54u);
    wr32(sp0 - 0x78u, sp0 - 0xcu);
    g->eax = sp0 - 0xcu;
    g->edx = sp0 - 0x54u;
    g->esp = sp0 - 0x70u;
    t54 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0xcu, sp0 - 0x54u);
    t55 = g->edx;
    d56 = cow_take_float(g);
    d57 = fr(g, (double)rdf32(sp0 - 0x54u) * d56);
    wr32(sp0 - 0x7cu, arg3);
    wr32(sp0 - 0x80u, sp0 - 0x3cu);
    wrf32(sp0 - 0x3cu, (float)(double)(float)d57);
    d58 = fr(g, (double)rdf32(sp0 - 0x50u) * d56);
    wrf32(sp0 - 0x38u, (float)(double)(float)d58);
    d59 = fr(g, d56 * (double)rdf32(sp0 - 0x4cu));
    wrf32(sp0 - 0x34u, (float)(double)(float)d59);
    g->ecx = sp0 - 0x3cu;
    g->esp = sp0 - 0x78u;
    cow_cdecl(g, COW_IMG(0x10026f20u), 2, sp0 - 0x3cu, arg3);
    t60 = g->ecx;
    wr32(sp0 - 0x84u, arg3);
    wr32(sp0 - 0x88u, sp0 - 0x3cu);
    wr32(sp0 - 0x8cu, sp0 - 0x30u);
    g->eax = sp0 - 0x30u;
    g->edx = sp0 - 0x3cu;
    g->esp = sp0 - 0x80u;
    t61 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x30u, sp0 - 0x3cu, arg3);
    t62 = g->edx;
    wr32(sp0 - 0x90u, sp0 - 0x30u);
    g->ecx = sp0 - 0x30u;
    g->esp = sp0 - 0x8cu;
    cow_call_regs(g, COW_IMG(0x100274b0u), t61, g->ecx, g->edx, 1, 1, sp0 - 0x30u);
    t63 = g->ecx;
    wr32(sp0 - 0x94u, sp0 - 0x54u);
    wr32(sp0 - 0x98u, sp0 - 0x30u);
    g->eax = sp0 - 0x30u;
    g->edx = sp0 - 0x54u;
    g->esp = sp0 - 0x90u;
    t64 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x30u, sp0 - 0x54u);
    t65 = g->edx;
    d66 = cow_take_float(g);
    if (!(d66 < (double)rdf32(COW_IMG(0x1032a1a8u))))
    {
        edx = t65;
        goto L_100246f9;
    }
    eax = (t64 & 0xffff0000u) | (uint16_t)cow_fsw(g, d66, (double)rdf32(COW_IMG(0x1032a1a8u)), 0u);
    edx = t65;
    COW_AT(100246a5)
    wr32(sp0 - 0x68u, sp0 - 0x24u);
    g->eax = eax;
    g->ecx = sp0 - 0x24u;
    g->esp = sp0 - 0x64u;
    t67 = cow_cdecl(g, COW_IMG(0x10027600u), 1, sp0 - 0x24u);
    t68 = g->ecx;
    d69 = cow_take_float(g);
    d70 = fr(g, (double)rdf32(sp0 + 4u) - d69);
    wr32(sp0 - 0x6cu, sp0 - 0x24u);
    wrf32(sp0 + 4u, (float)d70);
    g->esp = sp0 - 0x68u;
    cow_call_regs(g, COW_IMG(0x100274b0u), t67, g->ecx, g->edx, 1, 1, sp0 - 0x24u);
    t71 = rd32(sp0 - 0x60u);
    t72 = rd32(sp0 - 0x64u);
    d73 = fr(g, (double)rdf32(sp0 - 0x24u) * (double)rdf32(sp0 + 4u));
    wrf32(arg5, (float)d73);
    t74 = rd32(sp0 - 0x5cu);
    d75 = fr(g, (double)rdf32(sp0 - 0x20u) * (double)rdf32(sp0 + 4u));
    wrf32(arg5 + 4u, (float)d75);
    d76 = fr(g, (double)rdf32(sp0 - 0x1cu) * (double)rdf32(sp0 + 4u));
    wrf32(arg5 + 8u, (float)d76);
    g->ebx = t74;
    g->esi = t71;
    g->edi = t72;
    return 2u;
L_100246f9: ;
    COW_AT(100246f9)
    wr32(sp0 - 0x68u, edi);
    wr32(sp0 - 0x6cu, sp0 - 0x3cu);
    wr32(sp0 - 0x70u, sp0 - 0x48u);
    g->ecx = sp0 - 0x48u;
    g->esp = sp0 - 0x64u;
    cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x48u, sp0 - 0x3cu, edi);
    t77 = g->ecx;
    wr32(sp0 - 0x74u, sp0 - 0x48u);
    wr32(sp0 - 0x78u, sp0 - 0x48u);
    g->eax = sp0 - 0x48u;
    g->edx = sp0 - 0x48u;
    g->esp = sp0 - 0x70u;
    t78 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x48u, sp0 - 0x48u);
    t79 = g->edx;
    d80 = cow_take_float(g);
    d81 = (double)rdf32(sp0 - 0x58u);
    if ((cow_fsw(g, d80, d81, 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d80, d81, 0u) & 0x4100u;
        edx = t79;
        goto L_10024736;
    }
    COW_AT(10024728)
    g->ebx = rd32(sp0 - 0x5cu);
    g->esi = rd32(sp0 - 0x60u);
    g->edi = rd32(sp0 - 0x64u);
    return 4u;
L_10024736: ;
    COW_AT(10024736)
    wr32(sp0 - 0x68u, sp0 - 0x48u);
    g->eax = eax;
    g->ecx = sp0 - 0x48u;
    g->esp = sp0 - 0x64u;
    t82 = cow_cdecl(g, COW_IMG(0x10027600u), 1, sp0 - 0x48u);
    t83 = g->ecx;
    d84 = cow_take_float(g);
    d85 = fr(g, (double)rdf32(sp0 + 4u) - d84);
    wr32(sp0 - 0x6cu, sp0 - 0x48u);
    wrf32(sp0 + 4u, (float)d85);
    g->esp = sp0 - 0x68u;
    cow_call_regs(g, COW_IMG(0x100274b0u), t82, g->ecx, g->edx, 1, 1, sp0 - 0x48u);
    t86 = rd32(sp0 - 0x60u);
    t87 = rd32(sp0 - 0x64u);
    d88 = fr(g, (double)rdf32(sp0 - 0x48u) * (double)rdf32(sp0 + 4u));
    wrf32(arg5, (float)d88);
    t89 = rd32(sp0 - 0x5cu);
    d90 = fr(g, (double)rdf32(sp0 - 0x44u) * (double)rdf32(sp0 + 4u));
    wrf32(arg5 + 4u, (float)d90);
    d91 = fr(g, (double)rdf32(sp0 - 0x40u) * (double)rdf32(sp0 + 4u));
    wrf32(arg5 + 8u, (float)d91);
    g->ebx = t89;
    g->esi = t86;
    g->edi = t87;
    return 2u;
L_1002478a: ;
    COW_AT(1002478a)
    wr32(sp0 - 0x68u, arg4);
    wr32(sp0 - 0x6cu, edi);
    wr32(sp0 - 0x70u, sp0 - 0xcu);
    g->eax = sp0 - 0xcu;
    g->esp = sp0 - 0x64u;
    t92 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0xcu, edi, arg4);
    d93 = (double)rdf32(sp0 - 0x54u);
    wrf32(sp0 - 0x54u, (float)(double)(float)-d93);
    d94 = (double)rdf32(sp0 - 0x50u);
    wrf32(sp0 - 0x50u, (float)(double)(float)-d94);
    d95 = (double)rdf32(sp0 - 0x4cu);
    wrf32(sp0 - 0x4cu, (float)(double)(float)-d95);
    wr32(sp0 - 0x74u, sp0 - 0x54u);
    wr32(sp0 - 0x78u, sp0 - 0xcu);
    g->ecx = sp0 - 0x54u;
    g->edx = sp0 - 0xcu;
    g->esp = sp0 - 0x70u;
    cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0xcu, sp0 - 0x54u);
    t96 = g->ecx;
    t97 = g->edx;
    d98 = cow_take_float(g);
    d99 = fr(g, (double)rdf32(sp0 - 0x54u) * d98);
    wr32(sp0 - 0x7cu, arg4);
    wr32(sp0 - 0x80u, sp0 - 0x3cu);
    wrf32(sp0 - 0x3cu, (float)(double)(float)d99);
    d100 = fr(g, (double)rdf32(sp0 - 0x50u) * d98);
    wrf32(sp0 - 0x38u, (float)(double)(float)d100);
    d101 = fr(g, d98 * (double)rdf32(sp0 - 0x4cu));
    wrf32(sp0 - 0x34u, (float)(double)(float)d101);
    g->eax = sp0 - 0x3cu;
    g->esp = sp0 - 0x78u;
    t102 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, sp0 - 0x3cu, arg4);
    wr32(sp0 - 0x84u, arg4);
    wr32(sp0 - 0x88u, sp0 - 0x3cu);
    wr32(sp0 - 0x8cu, sp0 - 0x30u);
    g->ecx = sp0 - 0x3cu;
    g->edx = sp0 - 0x30u;
    g->esp = sp0 - 0x80u;
    cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x30u, sp0 - 0x3cu, arg4);
    t103 = g->ecx;
    t104 = g->edx;
    wr32(sp0 - 0x90u, sp0 - 0x30u);
    g->esp = sp0 - 0x8cu;
    t105 = cow_call_regs(g, COW_IMG(0x100274b0u), sp0 - 0x30u, g->ecx, g->edx, 1, 1, sp0 - 0x30u);
    wr32(sp0 - 0x94u, sp0 - 0x54u);
    wr32(sp0 - 0x98u, sp0 - 0x30u);
    g->ecx = sp0 - 0x54u;
    g->edx = sp0 - 0x30u;
    g->esp = sp0 - 0x90u;
    t106 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x30u, sp0 - 0x54u);
    t107 = g->ecx;
    t108 = g->edx;
    d109 = cow_take_float(g);
    if (!(d109 < (double)rdf32(COW_IMG(0x1032a1a8u))))
    {
        ecx = t107;
        goto L_10024861;
    }
    ecx = t107;
    edx = t108;
    COW_AT(10024823)
    wr32(sp0 - 0x68u, sp0 - 0x18u);
    g->eax = sp0 - 0x18u;
    g->edx = edx;
    g->esp = sp0 - 0x64u;
    t110 = cow_cdecl(g, COW_IMG(0x10027600u), 1, sp0 - 0x18u);
    t111 = g->edx;
    d112 = cow_take_float(g);
    d113 = fr(g, (double)rdf32(sp0 + 4u) - d112);
    wr32(sp0 - 0x6cu, sp0 - 0x18u);
    wrf32(sp0 + 4u, (float)d113);
    g->esp = sp0 - 0x68u;
    cow_call_regs(g, COW_IMG(0x100274b0u), t110, g->ecx, g->edx, 1, 1, sp0 - 0x18u);
    d114 = fr(g, (double)rdf32(sp0 - 0x18u) * (double)rdf32(sp0 + 4u));
    wrf32(arg5, (float)d114);
    d115 = fr(g, (double)rdf32(sp0 - 0x14u) * (double)rdf32(sp0 + 4u));
    wrf32(arg5 + 4u, (float)d115);
    x0 = (double)rdf32(sp0 - 0x10u);
L_100248da: ;
    COW_AT(100248da)
    d128 = fr(g, x0 * (double)rdf32(sp0 + 4u));
    wrf32(arg5 + 8u, (float)d128);
    eax = 1u;
    loc_5c = rd32(sp0 - 0x5cu);
    loc_60 = rd32(sp0 - 0x60u);
    loc_64 = rd32(sp0 - 0x64u);
L_100248e9: ;
    COW_AT(100248e9)
    g->ebx = loc_5c;
    g->esi = loc_60;
    g->edi = loc_64;
    return eax;
L_10024861: ;
    COW_AT(10024861)
    wr32(sp0 - 0x68u, edi);
    wr32(sp0 - 0x6cu, sp0 - 0x3cu);
    wr32(sp0 - 0x70u, sp0 - 0x48u);
    g->eax = sp0 - 0x48u;
    g->esp = sp0 - 0x64u;
    t116 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x48u, sp0 - 0x3cu, edi);
    wr32(sp0 - 0x74u, sp0 - 0x48u);
    wr32(sp0 - 0x78u, sp0 - 0x48u);
    g->ecx = sp0 - 0x48u;
    g->edx = sp0 - 0x48u;
    g->esp = sp0 - 0x70u;
    t117 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x48u, sp0 - 0x48u);
    t118 = g->ecx;
    t119 = g->edx;
    d120 = cow_take_float(g);
    d121 = (double)rdf32(sp0 - 0x58u);
    if ((cow_fsw(g, d120, d121, 0u) & 0x4100u) != 0u)
    {
        ecx = t118;
        edx = t119;
        goto L_1002489e;
    }
    COW_AT(10024890)
    g->ebx = rd32(sp0 - 0x5cu);
    g->esi = rd32(sp0 - 0x60u);
    g->edi = rd32(sp0 - 0x64u);
    return 4u;
L_1002489e: ;
    COW_AT(1002489e)
    wr32(sp0 - 0x68u, sp0 - 0x48u);
    g->eax = sp0 - 0x48u;
    g->edx = edx;
    g->esp = sp0 - 0x64u;
    t122 = cow_cdecl(g, COW_IMG(0x10027600u), 1, sp0 - 0x48u);
    t123 = g->edx;
    d124 = cow_take_float(g);
    d125 = fr(g, (double)rdf32(sp0 + 4u) - d124);
    wr32(sp0 - 0x6cu, sp0 - 0x48u);
    wrf32(sp0 + 4u, (float)d125);
    g->esp = sp0 - 0x68u;
    cow_call_regs(g, COW_IMG(0x100274b0u), t122, g->ecx, g->edx, 1, 1, sp0 - 0x48u);
    d126 = fr(g, (double)rdf32(sp0 - 0x48u) * (double)rdf32(sp0 + 4u));
    wrf32(arg5, (float)d126);
    d127 = fr(g, (double)rdf32(sp0 - 0x44u) * (double)rdf32(sp0 + 4u));
    wrf32(arg5 + 4u, (float)d127);
    x0 = (double)rdf32(sp0 - 0x40u);
    goto L_100248da;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10024410(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1002449bu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x64u);
        in_esi = rd32(sp0 - 0x60u);
        in_ebx = rd32(sp0 - 0x5cu);
        x0 = ST(0);
        g->esp = sp0 - 0x64u;
        g->ebx = arg4;
        g->esi = arg3;
        wr32(sp0 - 0x9cu, sp0 - 0x18u);
        wr32(sp0 - 0x98u, sp0 - 0x18u);
        wr32(sp0 - 0x94u, sp0 - 0x24u);
        wr32(sp0 - 0x90u, sp0 - 0x24u);
        wr32(sp0 - 0x8cu, sp0 - 0x54u);
        wr32(sp0 - 0x88u, sp0 - 0x54u);
        wr32(sp0 - 0x7cu, sp0 - 0x18u);
        wr32(sp0 - 0x70u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x100244a0u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x64u);
        in_esi = rd32(sp0 - 0x60u);
        in_ebx = rd32(sp0 - 0x5cu);
        x0 = ST(0);
        g->esp = sp0 - 0x64u;
        g->ebx = arg4;
        g->esi = arg3;
        wr32(sp0 - 0x9cu, sp0 - 0x18u);
        wr32(sp0 - 0x98u, sp0 - 0x18u);
        wr32(sp0 - 0x94u, sp0 - 0x24u);
        wr32(sp0 - 0x90u, sp0 - 0x24u);
        wr32(sp0 - 0x8cu, sp0 - 0x54u);
        wr32(sp0 - 0x88u, sp0 - 0x54u);
        wr32(sp0 - 0x7cu, sp0 - 0x18u);
        wr32(sp0 - 0x70u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x100244adu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x64u);
        in_esi = rd32(sp0 - 0x60u);
        in_ebx = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x64u;
        g->ebx = arg4;
        g->esi = arg3;
        wr32(sp0 - 0x9cu, sp0 - 0x18u);
        wr32(sp0 - 0x98u, sp0 - 0x18u);
        wr32(sp0 - 0x94u, sp0 - 0x24u);
        wr32(sp0 - 0x90u, sp0 - 0x24u);
        wr32(sp0 - 0x8cu, sp0 - 0x54u);
        wr32(sp0 - 0x88u, sp0 - 0x54u);
        wr32(sp0 - 0x7cu, sp0 - 0x18u);
        wr32(sp0 - 0x70u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x100244b0u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x64u);
        in_esi = rd32(sp0 - 0x60u);
        in_ebx = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x64u;
        g->ebx = arg4;
        g->esi = arg3;
        wr32(sp0 - 0x9cu, sp0 - 0x18u);
        wr32(sp0 - 0x98u, sp0 - 0x18u);
        wr32(sp0 - 0x94u, sp0 - 0x24u);
        wr32(sp0 - 0x90u, sp0 - 0x24u);
        wr32(sp0 - 0x8cu, sp0 - 0x54u);
        wr32(sp0 - 0x88u, sp0 - 0x54u);
        wr32(sp0 - 0x7cu, sp0 - 0x18u);
        wr32(sp0 - 0x70u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x100244b9u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x64u);
        in_esi = rd32(sp0 - 0x60u);
        in_ebx = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x64u;
        g->eax = 0u;
        g->ebx = arg4;
        g->esi = arg3;
        wr32(sp0 - 0x9cu, sp0 - 0x18u);
        wr32(sp0 - 0x98u, sp0 - 0x18u);
        wr32(sp0 - 0x94u, sp0 - 0x24u);
        wr32(sp0 - 0x90u, sp0 - 0x24u);
        wr32(sp0 - 0x8cu, sp0 - 0x54u);
        wr32(sp0 - 0x88u, sp0 - 0x54u);
        wr32(sp0 - 0x7cu, sp0 - 0x18u);
        wr32(sp0 - 0x70u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x100244c0u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x64u);
        in_esi = rd32(sp0 - 0x60u);
        in_ebx = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x64u;
        g->eax = 0u;
        g->ebx = arg4;
        g->esi = arg3;
        wr32(sp0 - 0x9cu, sp0 - 0x18u);
        wr32(sp0 - 0x98u, sp0 - 0x18u);
        wr32(sp0 - 0x94u, sp0 - 0x24u);
        wr32(sp0 - 0x90u, sp0 - 0x24u);
        wr32(sp0 - 0x8cu, sp0 - 0x54u);
        wr32(sp0 - 0x88u, sp0 - 0x54u);
        wr32(sp0 - 0x7cu, sp0 - 0x18u);
        wr32(sp0 - 0x70u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x100244c7u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x64u);
        in_esi = rd32(sp0 - 0x60u);
        in_ebx = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x64u;
        g->eax = 0u;
        g->ebx = arg4;
        g->esi = arg3;
        wr32(sp0 - 0x9cu, sp0 - 0x18u);
        wr32(sp0 - 0x98u, sp0 - 0x18u);
        wr32(sp0 - 0x94u, sp0 - 0x24u);
        wr32(sp0 - 0x90u, sp0 - 0x24u);
        wr32(sp0 - 0x8cu, sp0 - 0x54u);
        wr32(sp0 - 0x88u, sp0 - 0x54u);
        wr32(sp0 - 0x7cu, sp0 - 0x18u);
        wr32(sp0 - 0x70u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x10024542u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x9cu, sp0 - 0x18u);
        wr32(sp0 - 0x98u, sp0 - 0x30u);
        wr32(sp0 - 0x94u, sp0 - 0x54u);
        wr32(sp0 - 0x90u, sp0 - 0x30u);
        wr32(sp0 - 0x8cu, sp0 - 0x30u);
        wr32(sp0 - 0x88u, sp0 - 0x3cu);
        wr32(sp0 - 0x80u, sp0 - 0x3cu);
        wr32(sp0 - 0x78u, sp0 - 0xcu);
        wr32(sp0 - 0x74u, sp0 - 0x54u);
        wr32(sp0 - 0x70u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10024550u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        g->ebx = arg4;
        wr32(sp0 - 0x9cu, sp0 - 0x18u);
        wr32(sp0 - 0x98u, sp0 - 0x30u);
        wr32(sp0 - 0x94u, sp0 - 0x54u);
        wr32(sp0 - 0x90u, sp0 - 0x30u);
        wr32(sp0 - 0x8cu, sp0 - 0x30u);
        wr32(sp0 - 0x88u, sp0 - 0x3cu);
        wr32(sp0 - 0x80u, sp0 - 0x3cu);
        wr32(sp0 - 0x78u, sp0 - 0xcu);
        wr32(sp0 - 0x74u, sp0 - 0x54u);
        wr32(sp0 - 0x70u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1002458bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x9cu, sp0 - 0x18u);
        wr32(sp0 - 0x98u, sp0 - 0x30u);
        wr32(sp0 - 0x94u, sp0 - 0x54u);
        wr32(sp0 - 0x90u, sp0 - 0x30u);
        wr32(sp0 - 0x8cu, sp0 - 0x30u);
        wr32(sp0 - 0x88u, sp0 - 0x3cu);
        wr32(sp0 - 0x80u, sp0 - 0x3cu);
        wr32(sp0 - 0x7cu, sp0 - 0x30u);
        wr32(sp0 - 0x78u, sp0 - 0x54u);
        wr32(sp0 - 0x74u, sp0 - 0x30u);
        wr32(sp0 - 0x70u, sp0 - 0x30u);
        wr32(sp0 - 0x6cu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x10024599u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x9cu, sp0 - 0x18u);
        wr32(sp0 - 0x98u, sp0 - 0x30u);
        wr32(sp0 - 0x94u, sp0 - 0x54u);
        wr32(sp0 - 0x90u, sp0 - 0x30u);
        wr32(sp0 - 0x8cu, sp0 - 0x30u);
        wr32(sp0 - 0x88u, sp0 - 0x3cu);
        wr32(sp0 - 0x80u, sp0 - 0x3cu);
        wr32(sp0 - 0x7cu, sp0 - 0x30u);
        wr32(sp0 - 0x78u, sp0 - 0x54u);
        wr32(sp0 - 0x74u, sp0 - 0x30u);
        wr32(sp0 - 0x70u, sp0 - 0x30u);
        wr32(sp0 - 0x6cu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x100245c8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x9cu, sp0 - 0x18u);
        wr32(sp0 - 0x98u, sp0 - 0x30u);
        wr32(sp0 - 0x94u, sp0 - 0x54u);
        wr32(sp0 - 0x90u, sp0 - 0x30u);
        wr32(sp0 - 0x8cu, sp0 - 0x30u);
        wr32(sp0 - 0x88u, sp0 - 0x3cu);
        wr32(sp0 - 0x80u, sp0 - 0x3cu);
        wr32(sp0 - 0x7cu, sp0 - 0x30u);
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        wr32(sp0 - 0x74u, sp0 - 0x48u);
        wr32(sp0 - 0x70u, sp0 - 0x48u);
        wr32(sp0 - 0x6cu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x100245d6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x9cu, sp0 - 0x18u);
        wr32(sp0 - 0x98u, sp0 - 0x30u);
        wr32(sp0 - 0x94u, sp0 - 0x54u);
        wr32(sp0 - 0x90u, sp0 - 0x30u);
        wr32(sp0 - 0x8cu, sp0 - 0x30u);
        wr32(sp0 - 0x88u, sp0 - 0x3cu);
        wr32(sp0 - 0x80u, sp0 - 0x3cu);
        wr32(sp0 - 0x7cu, sp0 - 0x30u);
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        wr32(sp0 - 0x74u, sp0 - 0x48u);
        wr32(sp0 - 0x70u, sp0 - 0x48u);
        wr32(sp0 - 0x6cu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x1002462au:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x64u);
        in_esi = rd32(sp0 - 0x60u);
        in_ebx = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x64u;
        g->eax = 0u;
        g->esi = arg3;
        wr32(sp0 - 0x9cu, sp0 - 0x18u);
        wr32(sp0 - 0x98u, sp0 - 0x18u);
        wr32(sp0 - 0x94u, sp0 - 0x24u);
        wr32(sp0 - 0x90u, sp0 - 0x24u);
        wr32(sp0 - 0x8cu, sp0 - 0x54u);
        wr32(sp0 - 0x88u, sp0 - 0x54u);
        wr32(sp0 - 0x7cu, sp0 - 0x18u);
        wr32(sp0 - 0x70u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x100246a5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x9cu, sp0 - 0x18u);
        wr32(sp0 - 0x98u, sp0 - 0x30u);
        wr32(sp0 - 0x94u, sp0 - 0x54u);
        wr32(sp0 - 0x90u, sp0 - 0x30u);
        wr32(sp0 - 0x8cu, sp0 - 0x30u);
        wr32(sp0 - 0x88u, sp0 - 0x3cu);
        wr32(sp0 - 0x80u, sp0 - 0x3cu);
        wr32(sp0 - 0x78u, sp0 - 0xcu);
        wr32(sp0 - 0x74u, sp0 - 0x54u);
        wr32(sp0 - 0x70u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x100246f9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x9cu, sp0 - 0x18u);
        wr32(sp0 - 0x98u, sp0 - 0x30u);
        wr32(sp0 - 0x94u, sp0 - 0x54u);
        wr32(sp0 - 0x90u, sp0 - 0x30u);
        wr32(sp0 - 0x8cu, sp0 - 0x30u);
        wr32(sp0 - 0x88u, sp0 - 0x3cu);
        wr32(sp0 - 0x80u, sp0 - 0x3cu);
        wr32(sp0 - 0x78u, sp0 - 0xcu);
        wr32(sp0 - 0x74u, sp0 - 0x54u);
        wr32(sp0 - 0x70u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10024728u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x9cu, sp0 - 0x18u);
        wr32(sp0 - 0x98u, sp0 - 0x30u);
        wr32(sp0 - 0x94u, sp0 - 0x54u);
        wr32(sp0 - 0x90u, sp0 - 0x30u);
        wr32(sp0 - 0x8cu, sp0 - 0x30u);
        wr32(sp0 - 0x88u, sp0 - 0x3cu);
        wr32(sp0 - 0x80u, sp0 - 0x3cu);
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        wr32(sp0 - 0x74u, sp0 - 0x48u);
        wr32(sp0 - 0x70u, sp0 - 0x48u);
        wr32(sp0 - 0x6cu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x10024736u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x9cu, sp0 - 0x18u);
        wr32(sp0 - 0x98u, sp0 - 0x30u);
        wr32(sp0 - 0x94u, sp0 - 0x54u);
        wr32(sp0 - 0x90u, sp0 - 0x30u);
        wr32(sp0 - 0x8cu, sp0 - 0x30u);
        wr32(sp0 - 0x88u, sp0 - 0x3cu);
        wr32(sp0 - 0x80u, sp0 - 0x3cu);
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        wr32(sp0 - 0x74u, sp0 - 0x48u);
        wr32(sp0 - 0x70u, sp0 - 0x48u);
        wr32(sp0 - 0x6cu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x1002478au:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x64u);
        in_esi = rd32(sp0 - 0x60u);
        in_ebx = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x64u;
        g->ebx = arg4;
        wr32(sp0 - 0x9cu, sp0 - 0x18u);
        wr32(sp0 - 0x98u, sp0 - 0x18u);
        wr32(sp0 - 0x94u, sp0 - 0x24u);
        wr32(sp0 - 0x90u, sp0 - 0x24u);
        wr32(sp0 - 0x8cu, sp0 - 0x54u);
        wr32(sp0 - 0x88u, sp0 - 0x54u);
        wr32(sp0 - 0x7cu, sp0 - 0x18u);
        wr32(sp0 - 0x70u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x10024823u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x9cu, sp0 - 0x18u);
        wr32(sp0 - 0x98u, sp0 - 0x30u);
        wr32(sp0 - 0x94u, sp0 - 0x54u);
        wr32(sp0 - 0x90u, sp0 - 0x30u);
        wr32(sp0 - 0x8cu, sp0 - 0x30u);
        wr32(sp0 - 0x88u, sp0 - 0x3cu);
        wr32(sp0 - 0x80u, sp0 - 0x3cu);
        wr32(sp0 - 0x78u, sp0 - 0xcu);
        wr32(sp0 - 0x74u, sp0 - 0x54u);
        wr32(sp0 - 0x70u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10024861u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x9cu, sp0 - 0x18u);
        wr32(sp0 - 0x98u, sp0 - 0x30u);
        wr32(sp0 - 0x94u, sp0 - 0x54u);
        wr32(sp0 - 0x90u, sp0 - 0x30u);
        wr32(sp0 - 0x8cu, sp0 - 0x30u);
        wr32(sp0 - 0x88u, sp0 - 0x3cu);
        wr32(sp0 - 0x80u, sp0 - 0x3cu);
        wr32(sp0 - 0x78u, sp0 - 0xcu);
        wr32(sp0 - 0x74u, sp0 - 0x54u);
        wr32(sp0 - 0x70u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10024890u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x9cu, sp0 - 0x18u);
        wr32(sp0 - 0x98u, sp0 - 0x30u);
        wr32(sp0 - 0x94u, sp0 - 0x54u);
        wr32(sp0 - 0x90u, sp0 - 0x30u);
        wr32(sp0 - 0x8cu, sp0 - 0x30u);
        wr32(sp0 - 0x88u, sp0 - 0x3cu);
        wr32(sp0 - 0x80u, sp0 - 0x3cu);
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        wr32(sp0 - 0x74u, sp0 - 0x48u);
        wr32(sp0 - 0x70u, sp0 - 0x48u);
        wr32(sp0 - 0x6cu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x1002489eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x9cu, sp0 - 0x18u);
        wr32(sp0 - 0x98u, sp0 - 0x30u);
        wr32(sp0 - 0x94u, sp0 - 0x54u);
        wr32(sp0 - 0x90u, sp0 - 0x30u);
        wr32(sp0 - 0x8cu, sp0 - 0x30u);
        wr32(sp0 - 0x88u, sp0 - 0x3cu);
        wr32(sp0 - 0x80u, sp0 - 0x3cu);
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        wr32(sp0 - 0x74u, sp0 - 0x48u);
        wr32(sp0 - 0x70u, sp0 - 0x48u);
        wr32(sp0 - 0x6cu, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x100248dau:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        x0 = ST(0);
        g->esp = sp0 - 0x6cu;
        g->eax = arg5;
        wr32(sp0 - 0x9cu, sp0 - 0x18u);
        wr32(sp0 - 0x98u, sp0 - 0x30u);
        wr32(sp0 - 0x94u, sp0 - 0x54u);
        wr32(sp0 - 0x90u, sp0 - 0x30u);
        wr32(sp0 - 0x8cu, sp0 - 0x30u);
        wr32(sp0 - 0x88u, sp0 - 0x3cu);
        wr32(sp0 - 0x80u, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x100248e9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_64;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x9cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10024410(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10024410(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
