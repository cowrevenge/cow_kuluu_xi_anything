/* f_0x10085e40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10085e40(Guest* g)
{
    double d45;
    double d46;
    double d47;
    double d48;
    double d49;
    double d50;
    double d51;
    double d52;
    double d53;
    double d54;
    double d55;
    double d74;
    double d75;
    double d76;
    double d77;
    double d78;
    double d79;
    double d80;
    double d81;
    double d82;
    double d83;
    double d84;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
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
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
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
    uint32_t t5;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
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
    uint32_t t7;
    uint32_t t70;
    uint32_t t71;
    uint32_t t72;
    uint32_t t73;
    uint32_t t8;
    uint32_t t85;
    uint32_t t86;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 60u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10085e52u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_10085e52;
    case 0x10085eb3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10085eb3;
    case 0x10085ec0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10085ec0;
    case 0x10085ec2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10085ec2;
    case 0x10085eceu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10085ece;
    case 0x10085edau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10085eda;
    case 0x10085ef3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10085ef3;
    case 0x10085f27u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10085f27;
    case 0x10085f4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10085f4c;
    case 0x10085f55u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10085f55;
    case 0x10085f5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10085f5e;
    case 0x10085f69u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10085f69;
    case 0x10085f99u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10085f99;
    case 0x10085fa3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10085fa3;
    case 0x10085fb2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10085fb2;
    case 0x10085fbcu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10085fbc;
    case 0x10085fceu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10085fce;
    case 0x10085fdau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10085fda;
    case 0x10085feau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10085fea;
    case 0x10085ff6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10085ff6;
    case 0x10086008u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10086008;
    case 0x10086014u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10086014;
    case 0x10086024u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10086024;
    case 0x10086030u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10086030;
    case 0x10086058u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_10086058;
    case 0x100860cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100860cb;
    case 0x100860d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100860d8;
    case 0x100860dau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100860da;
    case 0x100860fau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100860fa;
    case 0x10086105u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10086105;
    case 0x10086135u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10086135;
    case 0x1008613fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1008613f;
    case 0x1008614eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1008614e;
    case 0x10086158u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10086158;
    case 0x1008616au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1008616a;
    case 0x10086176u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10086176;
    case 0x10086186u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10086186;
    case 0x10086192u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10086192;
    case 0x100861a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100861a4;
    case 0x100861b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100861b0;
    case 0x100861c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100861c0;
    case 0x100861ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100861cc;
    default: break;
    }
#endif

    COW_AT(10085e40)
    wr32(sp0 - 0x24u, in_esi);
    wr32(sp0 - 0x28u, in_edi);
    if (rd8(COW_IMG(0x1047d690u)) != 0u) goto L_10086058;
    COW_AT(10085e52)
    wr32(sp0 - 0x1cu, rd32(COW_IMG(0x103582b0u)));
    wr32(sp0 - 0x20u, rd32(COW_IMG(0x103582acu)));
    wr32(sp0 - 0x2cu, 0x40800000u);
    wr32(sp0 - 0x30u, sp0 - 0x10u);
    wr32(sp0 - 0x18u, rd32(COW_IMG(0x103582b4u)));
    wr32(sp0 - 0x14u, rd32(COW_IMG(0x103582b8u)));
    g->eax = rd32(COW_IMG(0x103582b8u));
    g->edx = rd32(COW_IMG(0x103582b4u));
    t1 = rd32(COW_IMG(0x103582b8u));
    t2 = rd32(COW_IMG(0x103582b4u));
    g->esp = sp0 - 0x30u;
    t3 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t4 = g->edx;
    g->edx = t4;
    g->esp = sp0 - 0x28u;
    t5 = cow_thiscall(g, COW_IMG(0x1001e6d0u), t3, 2, sp0 - 0x10u, 0x40800000u);
    t6 = g->ecx;
    t7 = g->edx;
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, 4u);
    wr32(sp0 - 0x34u, 0xa0cu);
    g->edx = t7;
    g->esp = sp0 - 0x2cu;
    t8 = cow_cdecl(g, COW_IMG(0x10028fd0u), 2, 0xa0cu, 4u);
    t9 = g->edx;
    g->esp = sp0 - 0x28u;
    t10 = cow_fastcall(g, COW_IMG(0x100748f0u), t8, t9, 0);
    t11 = g->edx;
    wr8(COW_IMG(0x1047d13cu), 1u);
    if (t8 == 0u)
    {
        eax = t10;
        edx = t11;
    COW_AT(10085ec0)
        esi = 0u;
    }
    else
    {
        eax = t10;
        edx = t11;
        esi = t8;
    COW_AT(10085eb3)
        wr32(sp0 - 0x2cu, 0u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        t12 = cow_thiscall(g, COW_IMG(0x100c52a0u), esi, 1, 0u);
        t13 = g->edx;
        eax = t12;
        edx = t13;
        esi = t12;
    }
    COW_AT(10085ec2)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t14 = cow_thiscall(g, COW_IMG(0x10084400u), esi, 0);
    t15 = g->ecx;
    t16 = g->edx;
    if (t14 == 6u)
    {
        eax = t14;
        ecx = t15;
        edx = t16;
        goto L_10085ef3;
    }
    eax = t14;
    edx = t16;
    COW_AT(10085ece)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t17 = cow_thiscall(g, COW_IMG(0x10084400u), esi, 0);
    t18 = g->ecx;
    t19 = g->edx;
    if (t17 == 7u)
    {
        eax = t17;
        ecx = t18;
        edx = t19;
        goto L_10085ef3;
    }
    eax = t17;
    edx = t19;
    COW_AT(10085eda)
    wr32(sp0 - 0x2cu, arg1);
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t20 = cow_thiscall(g, COW_IMG(0x10085010u), esi, 1, arg1);
    wr32(sp0 - 0x2cu, arg1);
    g->edx = rd32(esi);
    t21 = rd32(esi);
    t22 = cow_thiscall(g, rd32(t21 + 0x290u), esi, 1, arg1);
    t23 = g->edx;
    eax = t22;
    edx = t23;
L_10085f55: ;
    COW_AT(10085f55)
    if (rd8(COW_IMG(0x10358188u)) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10358188u));
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10358188u));
    COW_AT(10085f5e)
        wr32(sp0 - 0x2cu, esi);
        g->eax = eax;
        g->esp = sp0 - 0x28u;
        t40 = cow_thiscall(g, COW_IMG(0x100814f0u), COW_IMG(0x1047d600u), 1, esi);
        eax = t40;
    }
    COW_AT(10085f69)
    wr32(sp0 - 0x2cu, sp0 - 0x10u);
    wr32(sp0 - 0x30u, esi + 0x34u);
    g->ecx = sp0 - 0x10u;
    g->edx = esi + 0x34u;
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x10026e90u), 2, esi + 0x34u, sp0 - 0x10u);
    t41 = g->ecx;
    t42 = g->edx;
    wr32(sp0 - 0x34u, sp0 - 0x20u);
    wr32(sp0 - 0x38u, esi + 0x44u);
    g->eax = sp0 - 0x20u;
    g->edx = t42;
    g->esp = sp0 - 0x30u;
    t43 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, esi + 0x44u, sp0 - 0x20u);
    t44 = g->edx;
    d45 = (double)rdf32(esi + 0x44u);
    if ((cow_fsw(g, d45, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d45, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        edx = t44;
        edi = esi + 0x44u;
    }
    else
    {
        eax = cow_fsw(g, d45, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        edx = t44;
        edi = esi + 0x44u;
    COW_AT(10085f99)
        d46 = fr(g, (double)rdf32(edi) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi, (float)d46);
    }
    COW_AT(10085fa3)
    if (!((double)rdf32(edi) < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(edi), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(edi), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    COW_AT(10085fb2)
        d47 = fr(g, (double)rdf32(edi) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi, (float)d47);
    }
    COW_AT(10085fbc)
    d48 = (double)rdf32(esi + 0x48u);
    if ((cow_fsw(g, d48, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d48, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d48, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    COW_AT(10085fce)
        d49 = fr(g, (double)rdf32(esi + 0x48u) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(esi + 0x48u, (float)d49);
    }
    COW_AT(10085fda)
    d50 = (double)rdf32(esi + 0x48u);
    if (!(d50 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d50, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d50, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    COW_AT(10085fea)
        d51 = fr(g, (double)rdf32(esi + 0x48u) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(esi + 0x48u, (float)d51);
    }
    COW_AT(10085ff6)
    d52 = (double)rdf32(esi + 0x4cu);
    if ((cow_fsw(g, d52, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d52, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d52, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    COW_AT(10086008)
        d53 = fr(g, (double)rdf32(esi + 0x4cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(esi + 0x4cu, (float)d53);
    }
    COW_AT(10086014)
    d54 = (double)rdf32(esi + 0x4cu);
    if (!(d54 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d54, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d54, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    COW_AT(10086024)
        d55 = fr(g, (double)rdf32(esi + 0x4cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(esi + 0x4cu, (float)d55);
    }
    COW_AT(10086030)
    wr32(sp0 - 0x2cu, sp0 - 0x10u);
    g->esp = sp0 - 0x28u;
    cow_thiscall(g, COW_IMG(0x100a57c0u), esi, 1, sp0 - 0x10u);
    t56 = g->ecx;
    wr32(sp0 - 0x2cu, sp0 - 0x10u);
    wr32(sp0 - 0x30u, esi + 0x5c4u);
    cow_cdecl(g, COW_IMG(0x10026e90u), 2, esi + 0x5c4u, sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    return esi;
L_10085ef3: ;
    COW_AT(10085ef3)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t24 = cow_stdcall(g, COW_IMG(0x10084300u), 0);
    t25 = g->edx;
    wr32(esi + 0x864u, arg1);
    g->edx = t25;
    cow_call_regs(g, COW_IMG(0x10071e90u), t24, rd32(arg1), g->edx, 1, 0);
    t26 = g->edx;
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, esi);
    wr32(sp0 - 0x34u, 0x74696e69u);
    g->eax = rd32(esi);
    g->edx = t26;
    t27 = rd32(esi);
    t28 = cow_thiscall(g, rd32(t27 + 0x298u), esi, 3, 0x74696e69u, esi, 0u);
    t29 = g->edx;
    g->edx = t29;
    t30 = cow_thiscall(g, COW_IMG(0x10084400u), esi, 0);
    t31 = g->edx;
    if (t30 != 7u)
    {
        eax = t30;
        edx = t31;
    }
    else
    {
        eax = t30;
        edx = t31;
    COW_AT(10085f27)
        wr32(sp0 - 0x2cu, arg1);
        g->eax = eax;
        g->esp = sp0 - 0x28u;
        t32 = cow_thiscall(g, COW_IMG(0x10085010u), esi, 1, arg1);
        wr32(sp0 - 0x2cu, arg1);
        g->edx = rd32(esi);
        t33 = rd32(esi);
        cow_thiscall(g, rd32(t33 + 0x290u), esi, 1, arg1);
        t34 = g->edx;
        wr32(sp0 - 0x2cu, 0u);
        wr32(sp0 - 0x30u, esi);
        wr32(sp0 - 0x34u, 0x74696e69u);
        g->eax = rd32(esi);
        g->edx = t34;
        t35 = rd32(esi);
        t36 = cow_thiscall(g, rd32(t35 + 0x298u), esi, 3, 0x74696e69u, esi, 0u);
        t37 = g->edx;
        eax = t36;
        edx = t37;
    }
    COW_AT(10085f4c)
    wr32(sp0 - 0x2cu, 0xffffffffu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t38 = cow_thiscall(g, COW_IMG(0x100d4330u), esi, 1, 0xffffffffu);
    t39 = g->edx;
    eax = t38;
    edx = t39;
    goto L_10085f55;
L_10086058: ;
    COW_AT(10086058)
    wr32(sp0 - 0x10u, rd32(COW_IMG(0x103582bcu)));
    wr32(sp0 - 0xcu, rd32(COW_IMG(0x103582c0u)));
    wr32(sp0 - 8u, rd32(COW_IMG(0x103582c4u)));
    wr32(sp0 - 4u, rd32(COW_IMG(0x103582c8u)));
    wr32(sp0 - 0x20u, rd32(COW_IMG(0x103582ccu)));
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, 4u);
    wr32(sp0 - 0x34u, 0xa0cu);
    wr32(sp0 - 0x1cu, rd32(COW_IMG(0x103582d0u)));
    wr32(sp0 - 0x18u, rd32(COW_IMG(0x103582d4u)));
    wr32(sp0 - 0x14u, rd32(COW_IMG(0x103582d8u)));
    g->eax = rd32(COW_IMG(0x103582d0u));
    g->edx = rd32(COW_IMG(0x103582d8u));
    t57 = rd32(COW_IMG(0x103582d0u));
    t58 = rd32(COW_IMG(0x103582d8u));
    g->esp = sp0 - 0x2cu;
    t59 = cow_cdecl(g, COW_IMG(0x10028fd0u), 2, 0xa0cu, 4u);
    t60 = g->edx;
    g->esp = sp0 - 0x28u;
    t61 = cow_fastcall(g, COW_IMG(0x100748f0u), t59, t60, 0);
    t62 = g->edx;
    wr8(COW_IMG(0x1047d13cu), 1u);
    if (t59 == 0u)
    {
        eax = t61;
        edx = t62;
    COW_AT(100860d8)
        esi = 0u;
    }
    else
    {
        eax = t61;
        edx = t62;
        esi = t59;
    COW_AT(100860cb)
        wr32(sp0 - 0x2cu, 0u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        t63 = cow_thiscall(g, COW_IMG(0x100c52a0u), esi, 1, 0u);
        t64 = g->edx;
        eax = t63;
        edx = t64;
        esi = t63;
    }
    COW_AT(100860da)
    wr32(sp0 - 0x2cu, arg1);
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    cow_thiscall(g, COW_IMG(0x10085010u), esi, 1, arg1);
    t65 = g->edx;
    wr32(sp0 - 0x2cu, arg1);
    g->eax = rd32(esi);
    g->edx = t65;
    t66 = rd32(esi);
    t67 = cow_thiscall(g, rd32(t66 + 0x290u), esi, 1, arg1);
    t68 = g->edx;
    if (rd8(COW_IMG(0x10358188u)) == 0u)
    {
        eax = (t67 & 0xffffff00u) | rd8(COW_IMG(0x10358188u));
    }
    else
    {
        eax = (t67 & 0xffffff00u) | rd8(COW_IMG(0x10358188u));
        edx = t68;
    COW_AT(100860fa)
        wr32(sp0 - 0x2cu, esi);
        g->eax = eax;
        g->esp = sp0 - 0x28u;
        t69 = cow_thiscall(g, COW_IMG(0x100814f0u), COW_IMG(0x1047d600u), 1, esi);
        eax = t69;
    }
    COW_AT(10086105)
    wr32(sp0 - 0x2cu, sp0 - 0x20u);
    wr32(sp0 - 0x30u, esi + 0x34u);
    g->ecx = sp0 - 0x20u;
    g->edx = esi + 0x34u;
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x10026e90u), 2, esi + 0x34u, sp0 - 0x20u);
    t70 = g->ecx;
    t71 = g->edx;
    wr32(sp0 - 0x34u, sp0 - 0x10u);
    wr32(sp0 - 0x38u, esi + 0x44u);
    g->eax = sp0 - 0x10u;
    g->edx = t71;
    g->esp = sp0 - 0x30u;
    t72 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, esi + 0x44u, sp0 - 0x10u);
    t73 = g->edx;
    d74 = (double)rdf32(esi + 0x44u);
    if ((cow_fsw(g, d74, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d74, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        edx = t73;
        edi = esi + 0x44u;
    }
    else
    {
        eax = cow_fsw(g, d74, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        edx = t73;
        edi = esi + 0x44u;
    COW_AT(10086135)
        d75 = fr(g, (double)rdf32(edi) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi, (float)d75);
    }
    COW_AT(1008613f)
    if (!((double)rdf32(edi) < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(edi), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(edi), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    COW_AT(1008614e)
        d76 = fr(g, (double)rdf32(edi) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(edi, (float)d76);
    }
    COW_AT(10086158)
    d77 = (double)rdf32(esi + 0x48u);
    if ((cow_fsw(g, d77, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d77, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d77, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    COW_AT(1008616a)
        d78 = fr(g, (double)rdf32(esi + 0x48u) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(esi + 0x48u, (float)d78);
    }
    COW_AT(10086176)
    d79 = (double)rdf32(esi + 0x48u);
    if (!(d79 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d79, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d79, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    COW_AT(10086186)
        d80 = fr(g, (double)rdf32(esi + 0x48u) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(esi + 0x48u, (float)d80);
    }
    COW_AT(10086192)
    d81 = (double)rdf32(esi + 0x4cu);
    if ((cow_fsw(g, d81, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d81, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d81, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    COW_AT(100861a4)
        d82 = fr(g, (double)rdf32(esi + 0x4cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(esi + 0x4cu, (float)d82);
    }
    COW_AT(100861b0)
    d83 = (double)rdf32(esi + 0x4cu);
    if (!(d83 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d83, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d83, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    COW_AT(100861c0)
        d84 = fr(g, (double)rdf32(esi + 0x4cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(esi + 0x4cu, (float)d84);
    }
    COW_AT(100861cc)
    wr32(sp0 - 0x2cu, sp0 - 0x20u);
    g->esp = sp0 - 0x28u;
    cow_thiscall(g, COW_IMG(0x100a57c0u), esi, 1, sp0 - 0x20u);
    t85 = g->ecx;
    wr32(sp0 - 0x2cu, sp0 - 0x20u);
    wr32(sp0 - 0x30u, esi + 0x5c4u);
    g->eax = esi + 0x5c4u;
    t86 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, esi + 0x5c4u, sp0 - 0x20u);
    wr32(sp0 - 0x34u, sp0 - 0x20u);
    wr32(sp0 - 0x38u, esi + 0x5fcu);
    g->esp = sp0 - 0x30u;
    cow_cdecl(g, COW_IMG(0x10026e90u), 2, esi + 0x5fcu, sp0 - 0x20u);
    wr32(esi + 0x608u, 0x3f800000u);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    return esi;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10085e40(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10085e52u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10085eb3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10085ec0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10085ec2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10085eceu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10085edau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10085ef3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10085f27u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10085f4cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10085f55u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10085f5eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10085f69u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10085f99u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10085fa3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10085fb2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10085fbcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10085fceu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10085fdau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10085feau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10085ff6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10086008u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10086014u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10086024u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10086030u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10086058u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x100860cbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x100860d8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x100860dau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x100860fau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10086105u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10086135u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x34u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1008613fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x34u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1008614eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x34u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10086158u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x34u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1008616au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x34u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10086176u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x34u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10086186u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x34u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10086192u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x34u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100861a4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x34u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100861b0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x34u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100861c0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x34u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100861ccu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x34u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10085e40(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10085e40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
