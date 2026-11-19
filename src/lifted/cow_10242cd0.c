/* f_0x10242cd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10242cd0(Guest* g)
{
    double d100;
    double d101;
    double d102;
    double d103;
    double d114;
    double d115;
    double d116;
    double d117;
    double d118;
    double d119;
    double d120;
    double d121;
    double d122;
    double d123;
    double d151;
    double d152;
    double d153;
    double d154;
    double d155;
    double d156;
    double d17;
    double d18;
    double d22;
    double d28;
    double d39;
    double d40;
    double d41;
    double d42;
    double d43;
    double d58;
    double d59;
    double d60;
    double d61;
    double d62;
    double d63;
    double d64;
    double d65;
    double d66;
    double d69;
    double d93;
    double d94;
    double d95;
    double d96;
    double d97;
    double d98;
    double d99;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_100;
    uint32_t loc_138;
    uint32_t loc_160;
    uint32_t t1;
    uint32_t t10;
    uint32_t t104;
    uint32_t t105;
    uint32_t t106;
    uint32_t t107;
    uint32_t t108;
    uint32_t t109;
    uint32_t t11;
    uint32_t t110;
    uint32_t t111;
    uint32_t t112;
    uint32_t t113;
    uint32_t t12;
    uint32_t t124;
    uint32_t t125;
    uint32_t t126;
    uint32_t t127;
    uint32_t t128;
    uint32_t t129;
    uint32_t t13;
    uint32_t t130;
    uint32_t t131;
    uint32_t t132;
    uint32_t t133;
    uint32_t t134;
    uint32_t t135;
    uint32_t t136;
    uint32_t t137;
    uint32_t t138;
    uint32_t t139;
    uint32_t t14;
    uint32_t t140;
    uint32_t t141;
    uint32_t t142;
    uint32_t t143;
    uint32_t t144;
    uint32_t t145;
    uint32_t t146;
    uint32_t t147;
    uint32_t t148;
    uint32_t t149;
    uint32_t t15;
    uint32_t t150;
    uint32_t t157;
    uint32_t t158;
    uint32_t t159;
    uint32_t t16;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
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
    uint32_t t4;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t6;
    uint32_t t67;
    uint32_t t68;
    uint32_t t7;
    uint32_t t70;
    uint32_t t71;
    uint32_t t72;
    uint32_t t73;
    uint32_t t74;
    uint32_t t75;
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
    uint32_t t80;
    uint32_t t81;
    uint32_t t82;
    uint32_t t83;
    uint32_t t84;
    uint32_t t85;
    uint32_t t86;
    uint32_t t87;
    uint32_t t88;
    uint32_t t89;
    uint32_t t9;
    uint32_t t90;
    uint32_t t91;
    uint32_t t92;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 372u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10242cfbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x158u); in_esi = rd32(sp0 - 0x154u); in_ebp = rd32(sp0 - 0x150u); in_ebx = rd32(sp0 - 0x14cu); g->ebp = rd32(sp0 - 0x150u); g->ebx = rd32(sp0 - 0x14cu); g->edi = rd32(sp0 - 0x158u); g->esi = rd32(sp0 - 0x154u); goto E_10242cfb;
    case 0x10242d14u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x158u); in_esi = rd32(sp0 - 0x154u); in_ebp = rd32(sp0 - 0x150u); in_ebx = rd32(sp0 - 0x14cu); g->ebp = rd32(sp0 - 0x150u); g->ebx = rd32(sp0 - 0x14cu); g->edi = rd32(sp0 - 0x158u); g->esi = rd32(sp0 - 0x154u); goto E_10242d14;
    case 0x10242d2bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_160 = rd32(sp0 - 0x160u); goto E_10242d2b;
    case 0x10242e4bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_160 = rd32(sp0 - 0x160u); goto E_10242e4b;
    case 0x10242e5au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_160 = rd32(sp0 - 0x160u); goto E_10242e5a;
    case 0x10242e99u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_138 = rd32(sp0 - 0x138u); goto E_10242e99;
    case 0x10242eaau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10242eaa;
    case 0x10242eb3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10242eb3;
    case 0x10242eb5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10242eb5;
    case 0x10242f58u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_160 = rd32(sp0 - 0x160u); goto E_10242f58;
    case 0x10242f60u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_160 = rd32(sp0 - 0x160u); goto E_10242f60;
    case 0x102430ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102430ff;
    case 0x1024310bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1024310b;
    case 0x10243133u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10243133;
    case 0x1024313du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1024313d;
    case 0x1024315du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_100 = rd32(sp0 - 0x100u); goto E_1024315d;
    case 0x1024316eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_100 = rd32(sp0 - 0x100u); goto E_1024316e;
    case 0x102431b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_160 = rd32(sp0 - 0x160u); goto E_102431b4;
    case 0x102431dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102431db;
    case 0x1024321bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1024321b;
    case 0x10243227u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10243227;
    case 0x10243237u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10243237;
    case 0x10243243u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10243243;
    case 0x10243255u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10243255;
    case 0x10243261u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10243261;
    case 0x10243271u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10243271;
    case 0x1024327du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1024327d;
    case 0x1024328fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1024328f;
    case 0x1024329bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1024329b;
    case 0x102432abu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102432ab;
    case 0x102432b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102432b7;
    case 0x102432f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102432f7;
    case 0x10243303u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10243303;
    case 0x10243313u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10243313;
    case 0x1024331fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1024331f;
    case 0x10243331u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10243331;
    case 0x1024333du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1024333d;
    case 0x1024334du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1024334d;
    case 0x10243359u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10243359;
    case 0x1024336bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1024336b;
    case 0x10243377u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10243377;
    case 0x10243387u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10243387;
    case 0x10243393u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10243393;
    case 0x102433ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_160 = rd32(sp0 - 0x160u); goto E_102433cc;
    case 0x102433d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_160 = rd32(sp0 - 0x160u); goto E_102433d9;
    case 0x102433f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_138 = rd32(sp0 - 0x138u); goto E_102433f9;
    case 0x102435a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_160 = rd32(sp0 - 0x160u); goto E_102435a9;
    default: break;
    }
#endif

    COW_AT(10242cd0)
    wr8(COW_IMG(0x10669090u), (uint8_t)arg1);
    wr32(sp0 - 0x14cu, in_ebx);
    wr32(sp0 - 0x150u, in_ebp);
    wr32(sp0 - 0x154u, in_esi);
    wr32(sp0 - 0x158u, in_edi);
    wr32(sp0 - 0x15cu, 0x2e8u);
    g->eax = (in_eax & 0xffffff00u) | (uint8_t)arg1;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x158u;
    t1 = cow_cdecl(g, COW_IMG(0x1018b3a0u), 1, 0x2e8u);
    t2 = g->ecx;
    t3 = g->edx;
    if (rd8(COW_IMG(0x10669090u)) == 0u)
    {
        ecx = t2;
        edx = t3;
    COW_AT(10242d14)
        wr32(sp0 - 0x15cu, sp0 - 0x138u);
        g->eax = sp0 - 0x138u;
        g->edx = edx;
        g->esp = sp0 - 0x158u;
        t7 = cow_thiscall_cdecl(g, COW_IMG(0x1018c180u), ecx, 1, sp0 - 0x138u);
        t8 = g->edx;
        wr32(sp0 - 0x160u, 0u);
        g->edx = t8;
        g->esp = sp0 - 0x15cu;
        t9 = cow_thiscall(g, COW_IMG(0x1018bbc0u), sp0 - 0x15cu, 1, 0u);
        t10 = g->edx;
        wr32(sp0 - 0x160u, rd32(t7));
        eax = t9;
        edx = t10;
        esi = t7;
        loc_160 = rd32(t7);
    }
    else
    {
        eax = (t1 & 0xffffff00u) | rd8(COW_IMG(0x10669090u));
        edx = t3;
    COW_AT(10242cfb)
        wr32(sp0 - 0x15cu, sp0 - 0x138u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x158u;
        t4 = cow_thiscall_cdecl(g, COW_IMG(0x1018c180u), sp0 - 0x138u, 1, sp0 - 0x138u);
        t5 = g->edx;
        wr32(sp0 - 0x160u, 0u);
        g->esp = sp0 - 0x15cu;
        t6 = cow_thiscall(g, COW_IMG(0x1018bbc0u), sp0 - 0x15cu, 1, 0u);
        wr32(sp0 - 0x160u, rd32(t4));
        eax = t6;
        edx = rd32(t4);
        esi = t4;
        loc_160 = rd32(t4);
    }
    COW_AT(10242d2b)
    wr32(sp0 - 0x164u, 0x796e7573u);
    g->ebx = 0u;
    g->esi = esi;
    g->esp = sp0 - 0x158u;
    cow_thiscall(g, COW_IMG(0x101874f0u), rd32(COW_IMG(0x1065cb04u)), 3, 0x796e7573u, loc_160, sp0 - 0x138u);
    wr32(sp0 - 0xd0u, rd32(COW_IMG(0x103887b0u)));
    wr32(sp0 - 0xd8u, rd32(COW_IMG(0x103887a8u)));
    wr32(sp0 - 0xd4u, rd32(COW_IMG(0x103887acu)));
    wr32(sp0 - 0x10cu, rd32(COW_IMG(0x103887bcu)));
    wr32(sp0 - 0xccu, rd32(COW_IMG(0x103887b4u)));
    wr32(sp0 - 0x110u, rd32(COW_IMG(0x103887b8u)));
    wr32(sp0 - 0xe8u, rd32(COW_IMG(0x103887c8u)));
    wr32(sp0 - 0x108u, rd32(COW_IMG(0x103887c0u)));
    wr32(sp0 - 0x104u, rd32(COW_IMG(0x103887c4u)));
    wr32(sp0 - 0xe4u, rd32(COW_IMG(0x103887ccu)));
    t11 = rd32(COW_IMG(0x103887d0u));
    t12 = rd32(COW_IMG(0x103887bcu));
    t13 = rd32(COW_IMG(0x103887b8u));
    t14 = rd32(COW_IMG(0x103887c8u));
    t15 = rd32(COW_IMG(0x103887c0u));
    t16 = rd32(COW_IMG(0x103887ccu));
    d17 = (double)rdf32(COW_IMG(0x103887c8u));
    d18 = (double)rdf32(COW_IMG(0x103887d4u));
    wrf32(rd32(COW_IMG(0x10669080u)) + 0xb48u, (float)d17);
    wr32(sp0 - 0xe0u, t11);
    wr32(sp0 - 0x15cu, 0xbf800000u);
    wrf32(rd32(COW_IMG(0x10669080u)) + 0xb4cu, (float)cow_bits2f(t16));
    wrf32(rd32(COW_IMG(0x10669080u)) + 0xb50u, (float)cow_bits2f(t11));
    t19 = rd32(COW_IMG(0x10669080u));
    wrf32(t19 + 0xb54u, (float)d18);
    t20 = rd32(COW_IMG(0x10669080u)) + 0xb48u;
    wr32(sp0 - 0x160u, t20);
    wr32(sp0 - 0x164u, t20);
    cow_cdecl(g, COW_IMG(0x100272e0u), 3, t20, t20, 0xbf800000u);
    wr32(sp0 - 0x15cu, sp0 - 0x134u);
    wr32(sp0 - 0x160u, 0x42c80000u);
    t21 = rd32(rd32(COW_IMG(0x10669080u)) + 0xb50u);
    d22 = fr(g, (double)rdf32(rd32(COW_IMG(0x10669080u)) + 0xb4cu) - (double)rdf32(COW_IMG(0x1032961cu)));
    wr32(sp0 - 0x164u, t21);
    wr32(sp0 - 0x168u, t21);
    wrf32(sp0 - 0x168u, (float)(double)(float)d22);
    t23 = rd32(rd32(COW_IMG(0x10669080u)) + 0xb48u);
    wr32(sp0 - 0x16cu, t23);
    g->eax = rd32(COW_IMG(0x10669080u));
    g->edx = t23;
    t24 = rd32(COW_IMG(0x10669080u));
    t25 = cow_thiscall(g, COW_IMG(0x10181290u), rd32(COW_IMG(0x10631f24u)), 5, t23, cow_f2bits((double)(float)d22), t21, 0x42c80000u, sp0 - 0x134u);
    t26 = g->edx;
    if ((uint8_t)t25 == 0u)
    {
        eax = t25;
        edx = t26;
    }
    else
    {
        edx = t26;
    COW_AT(10242e4b)
        t27 = rd32(COW_IMG(0x10669080u));
        d28 = (double)rdf32(sp0 - 0x134u);
        wrf32(t27 + 0xb4cu, (float)d28);
        eax = t27;
    }
    COW_AT(10242e5a)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x158u;
    t29 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x68u, 0);
    t30 = g->edx;
    g->edx = t30;
    t31 = cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x68u, 0);
    t32 = g->edx;
    wr32(sp0 - 0x15cu, 0x3ec90fdau);
    g->edx = t32;
    cow_thiscall(g, COW_IMG(0x10027bd0u), sp0 - 0x68u, 1, 0x3ec90fdau);
    t33 = g->edx;
    edi = COW_IMG(0x10480af0u);
    eax = 0u;
    ecx = 0x10u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x138u, 0u);
    edx = t33;
    ebp = 0u;
    esi = 0u;
    loc_138 = 0u;
L_10242e99: ;
    COW_AT(10242e99)
    wr32(sp0 - 0x15cu, 0x2acu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x158u;
    t34 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0x2acu);
    t35 = g->edx;
    if (t34 == 0u)
    {
        edx = t35;
    COW_AT(10242eb3)
        eax = 0u;
    }
    else
    {
        eax = t34;
        edx = t35;
    COW_AT(10242eaa)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x158u;
        t36 = cow_thiscall(g, COW_IMG(0x1008a120u), eax, 0);
        t37 = g->edx;
        eax = t36;
        edx = t37;
    }
    COW_AT(10242eb5)
    wr32(COW_IMG(0x10480af0u) + ebp * 4u, eax);
    wr32(sp0 - 0x15cu, sp0 - 0x110u);
    g->esp = sp0 - 0x158u;
    cow_thiscall(g, COW_IMG(0x10028140u), sp0 - 0x68u, 1, sp0 - 0x110u);
    t38 = g->ecx;
    wr32(sp0 - 0x15cu, 0xbf800000u);
    wr32(sp0 - 0x160u, sp0 - 0x110u);
    wr32(sp0 - 0x164u, sp0 - 0xc8u);
    cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0xc8u, sp0 - 0x110u, 0xbf800000u);
    d39 = fr(g, atan2((double)rdf32(sp0 - 0xc0u), (double)rdf32(sp0 - 0xc8u)));
    wr32(sp0 - 0x15cu, sp0 - 0x134u);
    wr32(sp0 - 0x160u, 0x42c80000u);
    wrf32(sp0 - 0xd4u, (float)(double)(float)-d39);
    d40 = fr(g, (double)rdf32(sp0 - 0x110u) - (double)rdf32(sp0 - 0xe8u));
    wrf32(sp0 - 0x120u, (float)(double)(float)d40);
    d41 = fr(g, (double)rdf32(sp0 - 0x10cu) - (double)rdf32(sp0 - 0xe4u));
    wrf32(sp0 - 0x11cu, (float)(double)(float)d41);
    d42 = fr(g, (double)rdf32(sp0 - 0x108u) - (double)rdf32(sp0 - 0xe0u));
    wrf32(sp0 - 0x118u, (float)(double)(float)d42);
    d43 = fr(g, (double)(float)d41 - (double)rdf32(COW_IMG(0x1032961cu)));
    wr32(sp0 - 0x164u, cow_f2bits((double)(float)d42));
    wr32(sp0 - 0x168u, sp0 - 0x134u);
    wrf32(sp0 - 0x168u, (float)(double)(float)d43);
    wr32(sp0 - 0x16cu, cow_f2bits((double)(float)d40));
    g->eax = cow_f2bits((double)(float)d40);
    t44 = cow_thiscall(g, COW_IMG(0x10181290u), rd32(COW_IMG(0x10631f24u)), 5, cow_f2bits((double)(float)d40), cow_f2bits((double)(float)d43), cow_f2bits((double)(float)d42), 0x42c80000u, sp0 - 0x134u);
    if ((uint8_t)t44 != 0u)
    {
    COW_AT(10242f58)
        t45 = rd32(sp0 - 0x134u);
        wr32(sp0 - 0x11cu, t45);
    }
    COW_AT(10242f60)
    wr32(sp0 - 0x15cu, sp0 - 0x120u);
    t46 = esi + rd32(COW_IMG(0x10669080u)) + 0xb0u;
    wr32(sp0 - 0x160u, t46);
    g->eax = rd32(COW_IMG(0x10669080u));
    g->edx = sp0 - 0x120u;
    t47 = rd32(COW_IMG(0x10669080u));
    g->esp = sp0 - 0x158u;
    t48 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, t46, sp0 - 0x120u);
    t49 = g->edx;
    g->edx = t49;
    t50 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0xa8u, 0);
    t51 = g->edx;
    t52 = cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0xa8u, 0);
    t53 = rd32(sp0 - 0xd4u);
    wr32(sp0 - 0x15cu, t53);
    cow_thiscall(g, COW_IMG(0x10027bd0u), sp0 - 0xa8u, 1, t53);
    wr32(sp0 - 0x12cu, rd32(COW_IMG(0x103887dcu)));
    wr32(sp0 - 0x130u, rd32(COW_IMG(0x103887d8u)));
    wr32(sp0 - 0x15cu, sp0 - 0x130u);
    wr32(sp0 - 0x128u, rd32(COW_IMG(0x103887e0u)));
    wr32(sp0 - 0x124u, rd32(COW_IMG(0x103887e4u)));
    t54 = rd32(COW_IMG(0x103887dcu));
    t55 = rd32(COW_IMG(0x103887d8u));
    t56 = rd32(COW_IMG(0x103887e0u));
    cow_thiscall(g, COW_IMG(0x10028140u), sp0 - 0xa8u, 1, sp0 - 0x130u);
    t57 = g->ecx;
    wr32(sp0 - 0x15cu, 0x3eb33333u);
    wr32(sp0 - 0x160u, sp0 - 0x130u);
    wr32(sp0 - 0x164u, sp0 - 0x130u);
    cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0x130u, sp0 - 0x130u, 0x3eb33333u);
    wr32(sp0 - 0x168u, 0xbf800000u);
    d58 = fr(g, (double)rdf32(esi + rd32(COW_IMG(0x10669080u)) + 0xb0u) - (double)rdf32(sp0 - 0x130u));
    wr32(sp0 - 0x16cu, sp0 - 0x148u);
    wr32(sp0 - 0x170u, sp0 - 0x148u);
    wrf32(esi + rd32(COW_IMG(0x10669080u)) + 0xc0u, (float)d58);
    d59 = fr(g, (double)rdf32(esi + rd32(COW_IMG(0x10669080u)) + 0xb4u) - (double)rdf32(sp0 - 0x12cu));
    wrf32(esi + rd32(COW_IMG(0x10669080u)) + 0xc4u, (float)d59);
    d60 = fr(g, (double)rdf32(esi + rd32(COW_IMG(0x10669080u)) + 0xb8u) - (double)rdf32(sp0 - 0x128u));
    wrf32(esi + rd32(COW_IMG(0x10669080u)) + 0xc8u, (float)d60);
    d61 = fr(g, (double)rdf32(esi + rd32(COW_IMG(0x10669080u)) + 0xb0u) - (double)rdf32(esi + rd32(COW_IMG(0x10669080u)) + 0xc0u));
    wrf32(sp0 - 0x148u, (float)(double)(float)d61);
    d62 = fr(g, (double)rdf32(esi + rd32(COW_IMG(0x10669080u)) + 0xb4u) - (double)rdf32(esi + rd32(COW_IMG(0x10669080u)) + 0xc4u));
    wrf32(sp0 - 0x144u, (float)(double)(float)d62);
    d63 = fr(g, (double)rdf32(esi + rd32(COW_IMG(0x10669080u)) + 0xb8u) - (double)rdf32(esi + rd32(COW_IMG(0x10669080u)) + 0xc8u));
    wrf32(sp0 - 0x140u, (float)(double)(float)d63);
    g->esp = sp0 - 0x164u;
    cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0x148u, sp0 - 0x148u, 0xbf800000u);
    d64 = fr(g, (double)rdf32(sp0 - 0x148u) + (double)rdf32(esi + rd32(COW_IMG(0x10669080u)) + 0xc0u));
    wrf32(sp0 - 0x148u, (float)(double)(float)d64);
    d65 = fr(g, (double)rdf32(sp0 - 0x144u) + (double)rdf32(esi + rd32(COW_IMG(0x10669080u)) + 0xc4u));
    wrf32(sp0 - 0x144u, (float)(double)(float)d65);
    d66 = fr(g, (double)rdf32(sp0 - 0x140u) + (double)rdf32(esi + rd32(COW_IMG(0x10669080u)) + 0xc8u));
    wrf32(sp0 - 0x140u, (float)(double)(float)d66);
    wrf32(esi + rd32(COW_IMG(0x10669080u)) + 0xd0u, (float)d64);
    t67 = rd32(COW_IMG(0x10669080u));
    wrf32(esi + t67 + 0xd4u, (float)(double)(float)d65);
    wrf32(esi + rd32(COW_IMG(0x10669080u)) + 0xd8u, (float)(double)(float)d66);
    t68 = rd32(COW_IMG(0x10669080u));
    d69 = (double)rdf32(sp0 - 0x13cu);
    wrf32(esi + t68 + 0xdcu, (float)d69);
    if (rd32(esi + rd32(COW_IMG(0x10669080u)) + 0x68u) != 0u)
    {
        ecx = rd32(COW_IMG(0x10669080u));
        edx = t68;
    COW_AT(1024310b)
        wr32(sp0 - 0x100u, 0u);
        wr32(sp0 - 0xfcu, 0u);
        wr32(sp0 - 0xf8u, 0u);
        wr32(sp0 - 0xf4u, 0u);
        wr32(sp0 - 0xf0u, 0u);
        wr16(sp0 - 0xecu, 0u);
        eax = ecx + esi + 0x44u;
        edi = sp0 - 0xb8u - (ecx + esi + 0x44u);
L_10243133: ;
    COW_AT(10243133)
        t70 = rd8(eax);
        wr8(eax + edi, (uint8_t)t70);
        if ((uint8_t)t70 != 0u)
        {
            eax = eax + 1u;
            edx = (edx & 0xffffff00u) | t70;
            goto L_10243133;
        }
        eax = eax + 1u;
        edx = (edx & 0xffffff00u) | t70;
    COW_AT(1024313d)
        t71 = rd16(ecx + esi + 0x74u);
        wr16(sp0 - 0xeeu, (uint16_t)t71);
        wr16(sp0 - 0xecu, rd16(ecx + esi + 0x88u));
        eax = 0u;
        ecx = ecx + esi + 0x9cu;
        edx = (edx & 0xffff0000u) | t71;
        loc_100 = 0u;
L_1024315d: ;
    COW_AT(1024315d)
        t72 = rd16(ecx);
        wr16(eax * 2u + sp0 - 0x100u, (uint16_t)t72);
        if ((int32_t)(eax + 1u) < 8)
        {
            eax = eax + 1u;
            ecx = ecx + 2u;
            edx = (edx & 0xffff0000u) | t72;
            goto L_1024315d;
        }
        edx = (edx & 0xffff0000u) | t72;
    COW_AT(1024316e)
        wr8(sp0 - 0xffu, 0u);
        wr32(sp0 - 0x15cu, sp0 - 0x100u);
        wr32(sp0 - 0x160u, sp0 - 0xb8u);
        g->edi = edi;
        g->eax = sp0 - 0x100u;
        g->edx = edx;
        g->esp = sp0 - 0x158u;
        t73 = cow_thiscall(g, COW_IMG(0x100abc20u), sp0 - 0x28u, 2, sp0 - 0xb8u, sp0 - 0x100u);
        t74 = g->ecx;
        t75 = g->edx;
        wr32(sp0 - 0x15cu, 0u);
        wr32(sp0 - 0x160u, 4u);
        wr32(sp0 - 0x164u, 0xcb8u);
        g->edx = t75;
        g->esp = sp0 - 0x15cu;
        t76 = cow_cdecl(g, COW_IMG(0x10028fd0u), 2, 0xcb8u, 4u);
        t77 = g->edx;
        g->esp = sp0 - 0x158u;
        t78 = cow_fastcall(g, COW_IMG(0x100748f0u), t76, t77, 0);
        t79 = g->edx;
        wr8(COW_IMG(0x1047d13cu), 1u);
        if (t76 == 0u)
        {
            eax = t78;
            edx = t79;
    COW_AT(102435a9)
            edi = 0u;
        }
        else
        {
            edi = t76;
    COW_AT(102431b4)
            wr32(sp0 - 0x15cu, ebp);
            wr32(sp0 - 0x160u, sp0 - 0x28u);
            wr32(sp0 - 0x164u, sp0 - 0xd8u);
            wr32(sp0 - 0x168u, sp0 - 0x120u);
            g->ebx = 0u;
            g->eax = sp0 - 0xd8u;
            g->edx = sp0 - 0x28u;
            g->esp = sp0 - 0x158u;
            t80 = cow_thiscall(g, COW_IMG(0x100ab700u), edi, 4, sp0 - 0x120u, sp0 - 0xd8u, sp0 - 0x28u, ebp);
            t81 = g->edx;
            if (t80 == 0u)
            {
                eax = t80;
                edx = t81;
                edi = t80;
            }
            else
            {
                eax = t80;
                edi = t80;
    COW_AT(102431db)
                g->eax = eax;
                g->edx = rd32(edi);
                t82 = rd32(edi);
                g->esp = sp0 - 0x158u;
                t83 = cow_thiscall(g, rd32(t82 + 0x1bcu), edi, 0);
                t84 = g->ecx;
                t85 = g->edx;
                wr32(sp0 - 0x15cu, t83);
                wr32(sp0 - 0x160u, edi + 0x34u);
                g->eax = edi + 0x34u;
                t86 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, edi + 0x34u, t83);
                g->edx = rd32(edi);
                t87 = rd32(edi);
                t88 = cow_thiscall(g, rd32(t87 + 0x1c0u), edi, 0);
                t89 = g->ecx;
                t90 = g->edx;
                wr32(sp0 - 0x15cu, t88);
                wr32(sp0 - 0x160u, edi + 0x44u);
                g->edx = t90;
                t91 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, edi + 0x44u, t88);
                t92 = g->edx;
                d93 = (double)rdf32(edi + 0x44u);
                if ((cow_fsw(g, d93, (double)rdf32(COW_IMG(0x10337e24u)), 0u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, d93, (double)rdf32(COW_IMG(0x10337e24u)), 0u) & 0x4100u;
                    edx = t92;
                    ebp = edi + 0x44u;
                }
                else
                {
                    eax = cow_fsw(g, d93, (double)rdf32(COW_IMG(0x10337e24u)), 0u) & 0x4100u;
                    edx = t92;
                    ebp = edi + 0x44u;
    COW_AT(1024321b)
                    d94 = fr(g, (double)rdf32(ebp) - (double)rdf32(COW_IMG(0x10331818u)));
                    wrf32(ebp, (float)d94);
                }
    COW_AT(10243227)
                if (!((double)rdf32(ebp) < (double)rdf32(COW_IMG(0x10337e20u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebp), (double)rdf32(COW_IMG(0x10337e20u)), 0u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebp), (double)rdf32(COW_IMG(0x10337e20u)), 0u);
    COW_AT(10243237)
                    d95 = fr(g, (double)rdf32(ebp) + (double)rdf32(COW_IMG(0x10331818u)));
                    wrf32(ebp, (float)d95);
                }
    COW_AT(10243243)
                d96 = (double)rdf32(edi + 0x48u);
                if ((cow_fsw(g, d96, (double)rdf32(COW_IMG(0x10337e24u)), 0u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, d96, (double)rdf32(COW_IMG(0x10337e24u)), 0u) & 0x4100u;
                }
                else
                {
                    eax = cow_fsw(g, d96, (double)rdf32(COW_IMG(0x10337e24u)), 0u) & 0x4100u;
    COW_AT(10243255)
                    d97 = fr(g, (double)rdf32(edi + 0x48u) - (double)rdf32(COW_IMG(0x10331818u)));
                    wrf32(edi + 0x48u, (float)d97);
                }
    COW_AT(10243261)
                d98 = (double)rdf32(edi + 0x48u);
                if (!(d98 < (double)rdf32(COW_IMG(0x10337e20u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d98, (double)rdf32(COW_IMG(0x10337e20u)), 0u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d98, (double)rdf32(COW_IMG(0x10337e20u)), 0u);
    COW_AT(10243271)
                    d99 = fr(g, (double)rdf32(edi + 0x48u) + (double)rdf32(COW_IMG(0x10331818u)));
                    wrf32(edi + 0x48u, (float)d99);
                }
    COW_AT(1024327d)
                d100 = (double)rdf32(edi + 0x4cu);
                if ((cow_fsw(g, d100, (double)rdf32(COW_IMG(0x10337e24u)), 0u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, d100, (double)rdf32(COW_IMG(0x10337e24u)), 0u) & 0x4100u;
                }
                else
                {
                    eax = cow_fsw(g, d100, (double)rdf32(COW_IMG(0x10337e24u)), 0u) & 0x4100u;
    COW_AT(1024328f)
                    d101 = fr(g, (double)rdf32(edi + 0x4cu) - (double)rdf32(COW_IMG(0x10331818u)));
                    wrf32(edi + 0x4cu, (float)d101);
                }
    COW_AT(1024329b)
                d102 = (double)rdf32(edi + 0x4cu);
                if (d102 < (double)rdf32(COW_IMG(0x10337e20u)))
                {
    COW_AT(102432ab)
                    d103 = fr(g, (double)rdf32(edi + 0x4cu) + (double)rdf32(COW_IMG(0x10331818u)));
                    wrf32(edi + 0x4cu, (float)d103);
                }
    COW_AT(102432b7)
                g->eax = rd32(edi);
                g->edx = edx;
                t104 = rd32(edi);
                g->esp = sp0 - 0x158u;
                t105 = cow_thiscall(g, rd32(t104 + 0x1bcu), edi, 0);
                t106 = g->edx;
                wr32(sp0 - 0x15cu, t105);
                wr32(sp0 - 0x160u, edi + 0xc4u);
                t107 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, edi + 0xc4u, t105);
                g->edx = rd32(edi);
                t108 = rd32(edi);
                t109 = cow_thiscall(g, rd32(t108 + 0x1c0u), edi, 0);
                t110 = g->ecx;
                t111 = g->edx;
                wr32(sp0 - 0x15cu, t109);
                wr32(sp0 - 0x160u, ebp);
                g->edx = t111;
                t112 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, ebp, t109);
                t113 = g->edx;
                if ((cow_fsw(g, (double)rdf32(ebp), (double)rdf32(COW_IMG(0x10337e24u)), 0u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, (double)rdf32(ebp), (double)rdf32(COW_IMG(0x10337e24u)), 0u) & 0x4100u;
                    edx = t113;
                }
                else
                {
                    eax = cow_fsw(g, (double)rdf32(ebp), (double)rdf32(COW_IMG(0x10337e24u)), 0u) & 0x4100u;
                    edx = t113;
    COW_AT(102432f7)
                    d114 = fr(g, (double)rdf32(ebp) - (double)rdf32(COW_IMG(0x10331818u)));
                    wrf32(ebp, (float)d114);
                }
    COW_AT(10243303)
                if (!((double)rdf32(ebp) < (double)rdf32(COW_IMG(0x10337e20u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebp), (double)rdf32(COW_IMG(0x10337e20u)), 0u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebp), (double)rdf32(COW_IMG(0x10337e20u)), 0u);
    COW_AT(10243313)
                    d115 = fr(g, (double)rdf32(ebp) + (double)rdf32(COW_IMG(0x10331818u)));
                    wrf32(ebp, (float)d115);
                }
    COW_AT(1024331f)
                d116 = (double)rdf32(edi + 0x48u);
                if ((cow_fsw(g, d116, (double)rdf32(COW_IMG(0x10337e24u)), 0u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, d116, (double)rdf32(COW_IMG(0x10337e24u)), 0u) & 0x4100u;
                }
                else
                {
                    eax = cow_fsw(g, d116, (double)rdf32(COW_IMG(0x10337e24u)), 0u) & 0x4100u;
    COW_AT(10243331)
                    d117 = fr(g, (double)rdf32(edi + 0x48u) - (double)rdf32(COW_IMG(0x10331818u)));
                    wrf32(edi + 0x48u, (float)d117);
                }
    COW_AT(1024333d)
                d118 = (double)rdf32(edi + 0x48u);
                if (!(d118 < (double)rdf32(COW_IMG(0x10337e20u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d118, (double)rdf32(COW_IMG(0x10337e20u)), 0u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d118, (double)rdf32(COW_IMG(0x10337e20u)), 0u);
    COW_AT(1024334d)
                    d119 = fr(g, (double)rdf32(edi + 0x48u) + (double)rdf32(COW_IMG(0x10331818u)));
                    wrf32(edi + 0x48u, (float)d119);
                }
    COW_AT(10243359)
                d120 = (double)rdf32(edi + 0x4cu);
                if ((cow_fsw(g, d120, (double)rdf32(COW_IMG(0x10337e24u)), 0u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, d120, (double)rdf32(COW_IMG(0x10337e24u)), 0u) & 0x4100u;
                }
                else
                {
                    eax = cow_fsw(g, d120, (double)rdf32(COW_IMG(0x10337e24u)), 0u) & 0x4100u;
    COW_AT(1024336b)
                    d121 = fr(g, (double)rdf32(edi + 0x4cu) - (double)rdf32(COW_IMG(0x10331818u)));
                    wrf32(edi + 0x4cu, (float)d121);
                }
    COW_AT(10243377)
                d122 = (double)rdf32(edi + 0x4cu);
                if (d122 < (double)rdf32(COW_IMG(0x10337e20u)))
                {
    COW_AT(10243387)
                    d123 = fr(g, (double)rdf32(edi + 0x4cu) + (double)rdf32(COW_IMG(0x10331818u)));
                    wrf32(edi + 0x4cu, (float)d123);
                }
    COW_AT(10243393)
                g->eax = rd32(edi);
                g->edx = edx;
                t124 = rd32(edi);
                g->esp = sp0 - 0x158u;
                t125 = cow_thiscall(g, rd32(t124 + 0x1bcu), edi, 0);
                t126 = g->edx;
                wr32(sp0 - 0x15cu, t125);
                t127 = cow_thiscall(g, COW_IMG(0x100a57c0u), edi, 1, t125);
                g->edx = rd32(edi);
                t128 = rd32(edi);
                t129 = cow_thiscall(g, rd32(t128 + 0x1bcu), edi, 0);
                t130 = g->ecx;
                t131 = g->edx;
                wr32(sp0 - 0x15cu, t129);
                wr32(sp0 - 0x160u, edi + 0x5c4u);
                g->eax = edi + 0x5c4u;
                g->edx = t131;
                t132 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, edi + 0x5c4u, t129);
                t133 = g->edx;
                wr32(sp0 - 0x15cu, 4u);
                g->edx = t133;
                t134 = cow_thiscall(g, COW_IMG(0x100749b0u), edi, 1, 4u);
                t135 = g->edx;
                eax = t134;
                edx = t135;
                ebp = rd32(sp0 - 0x138u);
            }
        }
    COW_AT(102433cc)
        wr32(esi + rd32(COW_IMG(0x10669080u)) + 0xacu, edi);
    }
    else
    {
        eax = t67;
        ecx = rd32(COW_IMG(0x10669080u));
        edx = t68;
    COW_AT(102430ff)
        wr32(ecx + esi + 0xacu, 0u);
    }
    COW_AT(102433d9)
    g->eax = eax;
    g->ecx = sp0 - 0xa8u;
    g->edx = edx;
    g->esp = sp0 - 0x158u;
    t136 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t137 = g->ecx;
    t138 = g->edx;
    wr32(sp0 - 0x138u, ebp + 1u);
    if ((int32_t)(ebp + 1u) < 16)
    {
        eax = t136;
        ecx = t137;
        edx = t138;
        esi = esi + 0xb0u;
        loc_138 = ebp + 1u;
        ebp = ebp + 1u;
        goto L_10242e99;
    }
    COW_AT(102433f9)
    t139 = rd32(rd32(COW_IMG(0x10669080u)) + 0xb0u);
    wr32(rd32(COW_IMG(0x10669080u)) + 0xb58u, t139);
    t140 = rd32(rd32(COW_IMG(0x10669080u)) + 0xb4u);
    wr32(rd32(COW_IMG(0x10669080u)) + 0xb5cu, t140);
    t141 = rd32(rd32(COW_IMG(0x10669080u)) + 0xb8u);
    wr32(rd32(COW_IMG(0x10669080u)) + 0xb60u, t141);
    t142 = rd32(rd32(COW_IMG(0x10669080u)) + 0xbcu);
    wr32(rd32(COW_IMG(0x10669080u)) + 0xb64u, t142);
    t143 = rd32(rd32(COW_IMG(0x10669080u)) + 0xd0u);
    wr32(rd32(COW_IMG(0x10669080u)) + 0xb68u, t143);
    t144 = rd32(rd32(COW_IMG(0x10669080u)) + 0xd4u);
    wr32(rd32(COW_IMG(0x10669080u)) + 0xb6cu, t144);
    t145 = rd32(rd32(COW_IMG(0x10669080u)) + 0xd8u);
    wr32(rd32(COW_IMG(0x10669080u)) + 0xb70u, t145);
    t146 = rd32(rd32(COW_IMG(0x10669080u)) + 0xdcu);
    wr32(rd32(COW_IMG(0x10669080u)) + 0xb74u, t146);
    wr32(sp0 - 0x148u, rd32(COW_IMG(0x103887e8u)));
    wr32(sp0 - 0x144u, rd32(COW_IMG(0x103887ecu)));
    wr32(sp0 - 0x140u, rd32(COW_IMG(0x103887f0u)));
    wr32(sp0 - 0x13cu, rd32(COW_IMG(0x103887f4u)));
    t147 = rd32(COW_IMG(0x103887f4u));
    t148 = rd32(COW_IMG(0x103887e8u));
    t149 = rd32(COW_IMG(0x103887ecu));
    t150 = rd32(COW_IMG(0x103887f0u));
    d151 = fr(g, (double)rdf32(COW_IMG(0x103887e8u)) + (double)rdf32(rd32(COW_IMG(0x10669080u)) + 0xb58u));
    wrf32(rd32(COW_IMG(0x10669080u)) + 0xb58u, (float)d151);
    d152 = fr(g, cow_bits2f(t149) + (double)rdf32(rd32(COW_IMG(0x10669080u)) + 0xb5cu));
    wrf32(rd32(COW_IMG(0x10669080u)) + 0xb5cu, (float)d152);
    d153 = fr(g, cow_bits2f(t150) + (double)rdf32(rd32(COW_IMG(0x10669080u)) + 0xb60u));
    wrf32(rd32(COW_IMG(0x10669080u)) + 0xb60u, (float)d153);
    d154 = fr(g, cow_bits2f(t148) + (double)rdf32(rd32(COW_IMG(0x10669080u)) + 0xb68u));
    wrf32(rd32(COW_IMG(0x10669080u)) + 0xb68u, (float)d154);
    d155 = fr(g, cow_bits2f(t149) + (double)rdf32(rd32(COW_IMG(0x10669080u)) + 0xb6cu));
    wrf32(rd32(COW_IMG(0x10669080u)) + 0xb6cu, (float)d155);
    d156 = fr(g, cow_bits2f(t150) + (double)rdf32(rd32(COW_IMG(0x10669080u)) + 0xb70u));
    wrf32(rd32(COW_IMG(0x10669080u)) + 0xb70u, (float)d156);
    t157 = rd32(COW_IMG(0x10669080u)) + 0xb58u;
    wr32(sp0 - 0x15cu, t157);
    g->esp = sp0 - 0x158u;
    cow_thiscall(g, COW_IMG(0x1001e780u), rd32(rd32(COW_IMG(0x104568fcu)) + 0x50u), 1, t157);
    t158 = rd32(COW_IMG(0x10669080u)) + 0xb68u;
    wr32(sp0 - 0x15cu, t158);
    cow_thiscall(g, COW_IMG(0x1001e760u), rd32(rd32(COW_IMG(0x104568fcu)) + 0x50u), 1, t158);
    wr32(rd32(COW_IMG(0x10669080u)) + 0xb38u, 0u);
    wr32(rd32(COW_IMG(0x10669080u)) + 0xb3cu, 0x3ff00000u);
    wr32(rd32(COW_IMG(0x10669080u)) + 0xb40u, 0u);
    t159 = rd32(COW_IMG(0x10669080u));
    wr32(t159 + 0xb44u, 0x3ff00000u);
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    g->ebx = rd32(sp0 - 0x14cu);
    g->esi = rd32(sp0 - 0x154u);
    g->edi = rd32(sp0 - 0x158u);
    g->ebp = rd32(sp0 - 0x150u);
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10242cd0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10242cfbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x158u);
        in_esi = rd32(sp0 - 0x154u);
        in_ebp = rd32(sp0 - 0x150u);
        in_ebx = rd32(sp0 - 0x14cu);
        g->esp = sp0 - 0x158u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10242d14u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x158u);
        in_esi = rd32(sp0 - 0x154u);
        in_ebp = rd32(sp0 - 0x150u);
        in_ebx = rd32(sp0 - 0x14cu);
        g->esp = sp0 - 0x158u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10242d2bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_160;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_160 = rd32(sp0 - 0x160u);
        g->esp = sp0 - 0x160u;
        g->ebx = 0u;
        wr32(sp0 - 0x15cu, sp0 - 0x138u);
        (void)sp0;
        return 1;
    }
    case 0x10242e4bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_160;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_160 = rd32(sp0 - 0x160u);
        g->esp = sp0 - 0x158u;
        g->ebx = 0u;
        wr32(sp0 - 0x15cu, sp0 - 0x134u);
        (void)sp0;
        return 1;
    }
    case 0x10242e5au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_160;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_160 = rd32(sp0 - 0x160u);
        g->esp = sp0 - 0x158u;
        g->ebx = 0u;
        wr32(sp0 - 0x15cu, sp0 - 0x134u);
        (void)sp0;
        return 1;
    }
    case 0x10242e99u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x158u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10242eaau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x158u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10242eb3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x158u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10242eb5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x158u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10242f58u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_160;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_160 = rd32(sp0 - 0x160u);
        g->esp = sp0 - 0x158u;
        g->ebx = 0u;
        wr32(sp0 - 0x15cu, sp0 - 0x134u);
        (void)sp0;
        return 1;
    }
    case 0x10242f60u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_160;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_160 = rd32(sp0 - 0x160u);
        g->esp = sp0 - 0x158u;
        g->ebx = 0u;
        wr32(sp0 - 0x15cu, sp0 - 0x134u);
        (void)sp0;
        return 1;
    }
    case 0x102430ffu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x158u;
        g->ebx = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x148u);
        wr32(sp0 - 0x16cu, sp0 - 0x148u);
        wr32(sp0 - 0x164u, sp0 - 0x130u);
        wr32(sp0 - 0x160u, sp0 - 0x130u);
        (void)sp0;
        return 1;
    }
    case 0x1024310bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x158u;
        g->ebx = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x148u);
        wr32(sp0 - 0x16cu, sp0 - 0x148u);
        wr32(sp0 - 0x164u, sp0 - 0x130u);
        wr32(sp0 - 0x160u, sp0 - 0x130u);
        (void)sp0;
        return 1;
    }
    case 0x10243133u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x158u;
        g->ebx = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x148u);
        wr32(sp0 - 0x16cu, sp0 - 0x148u);
        wr32(sp0 - 0x164u, sp0 - 0x130u);
        wr32(sp0 - 0x160u, sp0 - 0x130u);
        wr32(sp0 - 0x100u, 0u);
        wr32(sp0 - 0xf0u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1024313du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x158u;
        g->ebx = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x148u);
        wr32(sp0 - 0x16cu, sp0 - 0x148u);
        wr32(sp0 - 0x164u, sp0 - 0x130u);
        wr32(sp0 - 0x160u, sp0 - 0x130u);
        wr32(sp0 - 0x100u, 0u);
        wr32(sp0 - 0xf0u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1024315du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_100;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0x158u;
        g->ebx = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x148u);
        wr32(sp0 - 0x16cu, sp0 - 0x148u);
        wr32(sp0 - 0x164u, sp0 - 0x130u);
        wr32(sp0 - 0x160u, sp0 - 0x130u);
        (void)sp0;
        return 1;
    }
    case 0x1024316eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_100;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_100 = rd32(sp0 - 0x100u);
        g->esp = sp0 - 0x158u;
        g->ebx = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x148u);
        wr32(sp0 - 0x16cu, sp0 - 0x148u);
        wr32(sp0 - 0x164u, sp0 - 0x130u);
        wr32(sp0 - 0x160u, sp0 - 0x130u);
        (void)sp0;
        return 1;
    }
    case 0x102431b4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_160;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_160 = rd32(sp0 - 0x160u);
        g->esp = sp0 - 0x158u;
        g->ebx = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x148u);
        wr32(sp0 - 0x16cu, sp0 - 0x148u);
        (void)sp0;
        return 1;
    }
    case 0x102431dbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x158u;
        g->ebx = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x148u);
        wr32(sp0 - 0x16cu, sp0 - 0x148u);
        wr32(sp0 - 0x168u, sp0 - 0x120u);
        wr32(sp0 - 0x164u, sp0 - 0xd8u);
        wr32(sp0 - 0x160u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x1024321bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x158u;
        g->ebx = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x148u);
        wr32(sp0 - 0x16cu, sp0 - 0x148u);
        wr32(sp0 - 0x168u, sp0 - 0x120u);
        wr32(sp0 - 0x164u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x10243227u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x158u;
        g->ebx = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x148u);
        wr32(sp0 - 0x16cu, sp0 - 0x148u);
        wr32(sp0 - 0x168u, sp0 - 0x120u);
        wr32(sp0 - 0x164u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x10243237u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x158u;
        g->ebx = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x148u);
        wr32(sp0 - 0x16cu, sp0 - 0x148u);
        wr32(sp0 - 0x168u, sp0 - 0x120u);
        wr32(sp0 - 0x164u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x10243243u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x158u;
        g->ebx = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x148u);
        wr32(sp0 - 0x16cu, sp0 - 0x148u);
        wr32(sp0 - 0x168u, sp0 - 0x120u);
        wr32(sp0 - 0x164u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x10243255u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x158u;
        g->ebx = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x148u);
        wr32(sp0 - 0x16cu, sp0 - 0x148u);
        wr32(sp0 - 0x168u, sp0 - 0x120u);
        wr32(sp0 - 0x164u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x10243261u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x158u;
        g->ebx = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x148u);
        wr32(sp0 - 0x16cu, sp0 - 0x148u);
        wr32(sp0 - 0x168u, sp0 - 0x120u);
        wr32(sp0 - 0x164u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x10243271u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x158u;
        g->ebx = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x148u);
        wr32(sp0 - 0x16cu, sp0 - 0x148u);
        wr32(sp0 - 0x168u, sp0 - 0x120u);
        wr32(sp0 - 0x164u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x1024327du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x158u;
        g->ebx = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x148u);
        wr32(sp0 - 0x16cu, sp0 - 0x148u);
        wr32(sp0 - 0x168u, sp0 - 0x120u);
        wr32(sp0 - 0x164u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x1024328fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x158u;
        g->ebx = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x148u);
        wr32(sp0 - 0x16cu, sp0 - 0x148u);
        wr32(sp0 - 0x168u, sp0 - 0x120u);
        wr32(sp0 - 0x164u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x1024329bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x158u;
        g->ebx = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x148u);
        wr32(sp0 - 0x16cu, sp0 - 0x148u);
        wr32(sp0 - 0x168u, sp0 - 0x120u);
        wr32(sp0 - 0x164u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x102432abu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x158u;
        g->ebx = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x148u);
        wr32(sp0 - 0x16cu, sp0 - 0x148u);
        wr32(sp0 - 0x168u, sp0 - 0x120u);
        wr32(sp0 - 0x164u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x102432b7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x158u;
        g->ebx = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x148u);
        wr32(sp0 - 0x16cu, sp0 - 0x148u);
        wr32(sp0 - 0x168u, sp0 - 0x120u);
        wr32(sp0 - 0x164u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x102432f7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x158u;
        g->ebx = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x148u);
        wr32(sp0 - 0x16cu, sp0 - 0x148u);
        wr32(sp0 - 0x168u, sp0 - 0x120u);
        wr32(sp0 - 0x164u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x10243303u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x158u;
        g->ebx = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x148u);
        wr32(sp0 - 0x16cu, sp0 - 0x148u);
        wr32(sp0 - 0x168u, sp0 - 0x120u);
        wr32(sp0 - 0x164u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x10243313u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x158u;
        g->ebx = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x148u);
        wr32(sp0 - 0x16cu, sp0 - 0x148u);
        wr32(sp0 - 0x168u, sp0 - 0x120u);
        wr32(sp0 - 0x164u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x1024331fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x158u;
        g->ebx = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x148u);
        wr32(sp0 - 0x16cu, sp0 - 0x148u);
        wr32(sp0 - 0x168u, sp0 - 0x120u);
        wr32(sp0 - 0x164u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x10243331u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x158u;
        g->ebx = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x148u);
        wr32(sp0 - 0x16cu, sp0 - 0x148u);
        wr32(sp0 - 0x168u, sp0 - 0x120u);
        wr32(sp0 - 0x164u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x1024333du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x158u;
        g->ebx = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x148u);
        wr32(sp0 - 0x16cu, sp0 - 0x148u);
        wr32(sp0 - 0x168u, sp0 - 0x120u);
        wr32(sp0 - 0x164u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x1024334du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x158u;
        g->ebx = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x148u);
        wr32(sp0 - 0x16cu, sp0 - 0x148u);
        wr32(sp0 - 0x168u, sp0 - 0x120u);
        wr32(sp0 - 0x164u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x10243359u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x158u;
        g->ebx = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x148u);
        wr32(sp0 - 0x16cu, sp0 - 0x148u);
        wr32(sp0 - 0x168u, sp0 - 0x120u);
        wr32(sp0 - 0x164u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x1024336bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x158u;
        g->ebx = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x148u);
        wr32(sp0 - 0x16cu, sp0 - 0x148u);
        wr32(sp0 - 0x168u, sp0 - 0x120u);
        wr32(sp0 - 0x164u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x10243377u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x158u;
        g->ebx = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x148u);
        wr32(sp0 - 0x16cu, sp0 - 0x148u);
        wr32(sp0 - 0x168u, sp0 - 0x120u);
        wr32(sp0 - 0x164u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x10243387u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x158u;
        g->ebx = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x148u);
        wr32(sp0 - 0x16cu, sp0 - 0x148u);
        wr32(sp0 - 0x168u, sp0 - 0x120u);
        wr32(sp0 - 0x164u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x10243393u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x158u;
        g->ebx = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x148u);
        wr32(sp0 - 0x16cu, sp0 - 0x148u);
        wr32(sp0 - 0x168u, sp0 - 0x120u);
        wr32(sp0 - 0x164u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x102433ccu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_160;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_160 = rd32(sp0 - 0x160u);
        g->esp = sp0 - 0x158u;
        g->ebx = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x148u);
        wr32(sp0 - 0x16cu, sp0 - 0x148u);
        (void)sp0;
        return 1;
    }
    case 0x102433d9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_160;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_160 = rd32(sp0 - 0x160u);
        g->esp = sp0 - 0x158u;
        g->ebx = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x148u);
        wr32(sp0 - 0x16cu, sp0 - 0x148u);
        (void)sp0;
        return 1;
    }
    case 0x102433f9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x158u;
        g->ebx = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x148u);
        wr32(sp0 - 0x16cu, sp0 - 0x148u);
        (void)sp0;
        return 1;
    }
    case 0x102435a9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_160;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_160 = rd32(sp0 - 0x160u);
        g->esp = sp0 - 0x158u;
        g->ebx = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x148u);
        wr32(sp0 - 0x16cu, sp0 - 0x148u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10242cd0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10242cd0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
