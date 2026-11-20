/* f_0x10184fe0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10184fe0(Guest* g)
{
    double d1;
    double d100;
    double d101;
    double d102;
    double d103;
    double d104;
    double d105;
    double d106;
    double d107;
    double d108;
    double d109;
    double d113;
    double d116;
    double d2;
    double d3;
    double d30;
    double d32;
    double d33;
    double d34;
    double d38;
    double d4;
    double d40;
    double d44;
    double d5;
    double d56;
    double d57;
    double d58;
    double d60;
    double d61;
    double d62;
    double d63;
    double d64;
    double d65;
    double d66;
    double d67;
    double d68;
    double d69;
    double d70;
    double d71;
    double d72;
    double d73;
    double d74;
    double d75;
    double d77;
    double d78;
    double d79;
    double d80;
    double d81;
    double d82;
    double d83;
    double d84;
    double d85;
    double d86;
    double d87;
    double d88;
    double d89;
    double d90;
    double d91;
    double d92;
    double d94;
    double d95;
    double d96;
    double d97;
    double d98;
    double d99;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_11c;
    double loc_11c_f;
    uint32_t loc_120;
    uint32_t loc_124;
    uint32_t loc_128;
    uint32_t loc_12c;
    uint32_t loc_130;
    uint32_t loc_138;
    double loc_84_f;
    double loc_88_f;
    double loc_8c_f;
    uint32_t loc_a4;
    uint32_t loc_a8;
    uint32_t loc_b0;
    uint32_t loc_b4;
    uint32_t loc_b8;
    uint32_t loc_bc;
    uint32_t loc_c0;
    uint32_t loc_c4;
    uint32_t loc_c8;
    uint32_t loc_cc;
    uint32_t loc_d0;
    uint32_t loc_d4;
    uint32_t loc_d8;
    uint32_t loc_dc;
    uint32_t t10;
    uint32_t t11;
    uint32_t t110;
    uint32_t t111;
    uint32_t t112;
    uint32_t t114;
    uint32_t t115;
    uint32_t t117;
    uint32_t t118;
    uint32_t t119;
    uint32_t t12;
    uint32_t t120;
    uint32_t t121;
    uint32_t t122;
    uint32_t t123;
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
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t31;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t39;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t45;
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
    uint32_t t59;
    uint32_t t6;
    uint32_t t7;
    uint32_t t76;
    uint32_t t8;
    uint32_t t9;
    uint32_t t93;
    double x0;
    double x1;
    double x2;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 332u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10185005u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x130u); in_ebx = rd32(sp0 - 0x12cu); g->ebx = rd32(sp0 - 0x12cu); g->esi = rd32(sp0 - 0x130u); goto E_10185005;
    case 0x10185022u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x130u); in_ebx = rd32(sp0 - 0x12cu); g->ebx = rd32(sp0 - 0x12cu); g->esi = rd32(sp0 - 0x130u); goto E_10185022;
    case 0x10185038u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x130u); in_ebx = rd32(sp0 - 0x12cu); g->ebx = rd32(sp0 - 0x12cu); g->esi = rd32(sp0 - 0x130u); goto E_10185038;
    case 0x10185070u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x130u); in_ebx = rd32(sp0 - 0x12cu); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84_f = rdf32(sp0 - 0x84u); g->ebx = rd32(sp0 - 0x12cu); g->esi = rd32(sp0 - 0x130u); goto E_10185070;
    case 0x10185077u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x130u); in_ebx = rd32(sp0 - 0x12cu); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84_f = rdf32(sp0 - 0x84u); g->ebx = rd32(sp0 - 0x12cu); g->esi = rd32(sp0 - 0x130u); goto E_10185077;
    case 0x1018507au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x130u); in_ebx = rd32(sp0 - 0x12cu); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84_f = rdf32(sp0 - 0x84u); g->ebx = rd32(sp0 - 0x12cu); g->esi = rd32(sp0 - 0x130u); goto E_1018507a;
    case 0x1018508eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_138 = rd32(sp0 - 0x138u); goto E_1018508e;
    case 0x101850a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_138 = rd32(sp0 - 0x138u); goto E_101850a6;
    case 0x101850bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_138 = rd32(sp0 - 0x138u); goto E_101850bc;
    case 0x101850d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_138 = rd32(sp0 - 0x138u); goto E_101850d2;
    case 0x101850e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_138 = rd32(sp0 - 0x138u); goto E_101850e8;
    case 0x101850feu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_138 = rd32(sp0 - 0x138u); goto E_101850fe;
    case 0x10185116u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_138 = rd32(sp0 - 0x138u); goto E_10185116;
    case 0x1018512eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_138 = rd32(sp0 - 0x138u); goto E_1018512e;
    case 0x10185144u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_138 = rd32(sp0 - 0x138u); goto E_10185144;
    case 0x10185165u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_138 = rd32(sp0 - 0x138u); goto E_10185165;
    case 0x1018516fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_138 = rd32(sp0 - 0x138u); goto E_1018516f;
    case 0x1018518bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_1018518b;
    case 0x10185192u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_10185192;
    case 0x10185194u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_138 = rd32(sp0 - 0x138u); goto E_10185194;
    case 0x1018519fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_1018519f;
    case 0x101851a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_138 = rd32(sp0 - 0x138u); goto E_101851a2;
    case 0x101851bau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101851ba;
    case 0x101852a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101852a4;
    case 0x101852b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; loc_a4 = rd32(sp0 - 0xa4u); goto E_101852b3;
    case 0x101852deu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101852de;
    case 0x101852f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101852f1;
    case 0x101852fau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101852fa;
    case 0x10185300u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10185300;
    case 0x1018530cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); goto E_1018530c;
    case 0x10185310u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); goto E_10185310;
    case 0x10185317u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); goto E_10185317;
    case 0x1018531du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); goto E_1018531d;
    case 0x10185329u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c8 = rd32(sp0 - 0xc8u); loc_b8 = rd32(sp0 - 0xb8u); goto E_10185329;
    case 0x1018532du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c8 = rd32(sp0 - 0xc8u); loc_b8 = rd32(sp0 - 0xb8u); goto E_1018532d;
    case 0x10185334u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c8 = rd32(sp0 - 0xc8u); loc_b8 = rd32(sp0 - 0xb8u); goto E_10185334;
    case 0x10185338u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c8 = rd32(sp0 - 0xc8u); loc_b8 = rd32(sp0 - 0xb8u); goto E_10185338;
    case 0x10185340u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c8 = rd32(sp0 - 0xc8u); loc_b8 = rd32(sp0 - 0xb8u); goto E_10185340;
    case 0x10185342u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c8 = rd32(sp0 - 0xc8u); loc_b8 = rd32(sp0 - 0xb8u); goto E_10185342;
    case 0x10185347u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c8 = rd32(sp0 - 0xc8u); loc_b8 = rd32(sp0 - 0xb8u); goto E_10185347;
    case 0x1018534bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c8 = rd32(sp0 - 0xc8u); loc_b8 = rd32(sp0 - 0xb8u); goto E_1018534b;
    case 0x10185355u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c8 = rd32(sp0 - 0xc8u); loc_b8 = rd32(sp0 - 0xb8u); goto E_10185355;
    case 0x10185357u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c8 = rd32(sp0 - 0xc8u); loc_b8 = rd32(sp0 - 0xb8u); goto E_10185357;
    case 0x1018536au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c8 = rd32(sp0 - 0xc8u); loc_c0 = rd32(sp0 - 0xc0u); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); goto E_1018536a;
    case 0x1018536bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); loc_120 = rd32(sp0 - 0x120u); loc_11c_f = rdf32(sp0 - 0x11cu); loc_dc = rd32(sp0 - 0xdcu); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); goto E_1018536b;
    case 0x10185382u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); loc_120 = rd32(sp0 - 0x120u); loc_11c_f = rdf32(sp0 - 0x11cu); loc_dc = rd32(sp0 - 0xdcu); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); goto E_10185382;
    case 0x101853a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); loc_120 = rd32(sp0 - 0x120u); loc_11c_f = rdf32(sp0 - 0x11cu); loc_dc = rd32(sp0 - 0xdcu); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); goto E_101853a8;
    case 0x101853bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); loc_120 = rd32(sp0 - 0x120u); loc_11c_f = rdf32(sp0 - 0x11cu); loc_dc = rd32(sp0 - 0xdcu); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); goto E_101853bd;
    case 0x101853c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); loc_120 = rd32(sp0 - 0x120u); loc_11c_f = rdf32(sp0 - 0x11cu); loc_dc = rd32(sp0 - 0xdcu); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); goto E_101853c9;
    case 0x101853d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); loc_120 = rd32(sp0 - 0x120u); loc_11c_f = rdf32(sp0 - 0x11cu); loc_dc = rd32(sp0 - 0xdcu); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); goto E_101853d1;
    case 0x101853d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); loc_120 = rd32(sp0 - 0x120u); loc_11c_f = rdf32(sp0 - 0x11cu); loc_dc = rd32(sp0 - 0xdcu); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); goto E_101853d8;
    case 0x101853f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); loc_120 = rd32(sp0 - 0x120u); loc_11c_f = rdf32(sp0 - 0x11cu); loc_dc = rd32(sp0 - 0xdcu); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); goto E_101853f8;
    case 0x10185405u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); loc_120 = rd32(sp0 - 0x120u); loc_11c_f = rdf32(sp0 - 0x11cu); loc_dc = rd32(sp0 - 0xdcu); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); goto E_10185405;
    case 0x10185419u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); loc_120 = rd32(sp0 - 0x120u); loc_11c_f = rdf32(sp0 - 0x11cu); loc_dc = rd32(sp0 - 0xdcu); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); goto E_10185419;
    case 0x10185424u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); loc_120 = rd32(sp0 - 0x120u); loc_11c_f = rdf32(sp0 - 0x11cu); loc_dc = rd32(sp0 - 0xdcu); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_a8 = rd32(sp0 - 0xa8u); goto E_10185424;
    case 0x1018543au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1018543a;
    case 0x1018543cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); loc_120 = rd32(sp0 - 0x120u); loc_11c_f = rdf32(sp0 - 0x11cu); loc_dc = rd32(sp0 - 0xdcu); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_a8 = rd32(sp0 - 0xa8u); goto E_1018543c;
    case 0x10185451u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); loc_120 = rd32(sp0 - 0x120u); loc_11c_f = rdf32(sp0 - 0x11cu); loc_dc = rd32(sp0 - 0xdcu); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); goto E_10185451;
    case 0x10185475u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10185475;
    case 0x10185498u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); loc_11c_f = rdf32(sp0 - 0x11cu); loc_dc = rd32(sp0 - 0xdcu); loc_d8 = rd32(sp0 - 0xd8u); loc_c4 = rd32(sp0 - 0xc4u); goto E_10185498;
    case 0x101854b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); loc_dc = rd32(sp0 - 0xdcu); loc_d8 = rd32(sp0 - 0xd8u); loc_c4 = rd32(sp0 - 0xc4u); goto E_101854b7;
    case 0x101854d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); loc_dc = rd32(sp0 - 0xdcu); loc_d8 = rd32(sp0 - 0xd8u); loc_c4 = rd32(sp0 - 0xc4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_101854d1;
    case 0x101854e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); loc_11c = rd32(sp0 - 0x11cu); loc_dc = rd32(sp0 - 0xdcu); loc_d8 = rd32(sp0 - 0xd8u); loc_c4 = rd32(sp0 - 0xc4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_101854e0;
    case 0x101854fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); loc_dc = rd32(sp0 - 0xdcu); loc_d8 = rd32(sp0 - 0xd8u); loc_c4 = rd32(sp0 - 0xc4u); goto E_101854fc;
    case 0x10185509u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); loc_11c_f = rdf32(sp0 - 0x11cu); loc_dc = rd32(sp0 - 0xdcu); loc_d8 = rd32(sp0 - 0xd8u); loc_c4 = rd32(sp0 - 0xc4u); goto E_10185509;
    case 0x10185520u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); loc_11c_f = rdf32(sp0 - 0x11cu); loc_dc = rd32(sp0 - 0xdcu); loc_d8 = rd32(sp0 - 0xd8u); goto E_10185520;
    case 0x10185544u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); loc_120 = rd32(sp0 - 0x120u); loc_11c_f = rdf32(sp0 - 0x11cu); loc_dc = rd32(sp0 - 0xdcu); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_c4 = rd32(sp0 - 0xc4u); goto E_10185544;
    case 0x1018554cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); loc_120 = rd32(sp0 - 0x120u); loc_11c_f = rdf32(sp0 - 0x11cu); loc_dc = rd32(sp0 - 0xdcu); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_c4 = rd32(sp0 - 0xc4u); goto E_1018554c;
    case 0x10185590u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); loc_120 = rd32(sp0 - 0x120u); loc_11c_f = rdf32(sp0 - 0x11cu); loc_dc = rd32(sp0 - 0xdcu); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_c4 = rd32(sp0 - 0xc4u); goto E_10185590;
    case 0x1018560au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); loc_120 = rd32(sp0 - 0x120u); loc_11c_f = rdf32(sp0 - 0x11cu); loc_dc = rd32(sp0 - 0xdcu); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_c4 = rd32(sp0 - 0xc4u); goto E_1018560a;
    case 0x10185675u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); loc_120 = rd32(sp0 - 0x120u); loc_11c_f = rdf32(sp0 - 0x11cu); loc_dc = rd32(sp0 - 0xdcu); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_c4 = rd32(sp0 - 0xc4u); goto E_10185675;
    case 0x101856dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); loc_120 = rd32(sp0 - 0x120u); loc_11c_f = rdf32(sp0 - 0x11cu); loc_dc = rd32(sp0 - 0xdcu); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_c4 = rd32(sp0 - 0xc4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_101856dc;
    case 0x1018575au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); loc_120 = rd32(sp0 - 0x120u); loc_11c_f = rdf32(sp0 - 0x11cu); loc_dc = rd32(sp0 - 0xdcu); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_c4 = rd32(sp0 - 0xc4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1018575a;
    case 0x101857bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); loc_120 = rd32(sp0 - 0x120u); loc_11c_f = rdf32(sp0 - 0x11cu); loc_dc = rd32(sp0 - 0xdcu); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_c4 = rd32(sp0 - 0xc4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_101857bf;
    case 0x10185820u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); loc_120 = rd32(sp0 - 0x120u); loc_11c_f = rdf32(sp0 - 0x11cu); loc_dc = rd32(sp0 - 0xdcu); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_c4 = rd32(sp0 - 0xc4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_10185820;
    case 0x101858a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); loc_120 = rd32(sp0 - 0x120u); loc_11c_f = rdf32(sp0 - 0x11cu); loc_dc = rd32(sp0 - 0xdcu); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_c4 = rd32(sp0 - 0xc4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_101858a2;
    case 0x1018590bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); loc_120 = rd32(sp0 - 0x120u); loc_11c_f = rdf32(sp0 - 0x11cu); loc_dc = rd32(sp0 - 0xdcu); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_c4 = rd32(sp0 - 0xc4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1018590b;
    case 0x10185970u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); loc_120 = rd32(sp0 - 0x120u); loc_11c_f = rdf32(sp0 - 0x11cu); loc_dc = rd32(sp0 - 0xdcu); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_c4 = rd32(sp0 - 0xc4u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_10185970;
    case 0x1018597du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1018597d;
    case 0x1018598fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1018598f;
    case 0x101859a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101859a5;
    case 0x101859b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101859b2;
    case 0x101859b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101859b9;
    case 0x101859c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101859c1;
    case 0x101859cau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_d8 = rd32(sp0 - 0xd8u); goto E_101859ca;
    case 0x101859ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_d8 = rd32(sp0 - 0xd8u); goto E_101859ce;
    case 0x101859d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_d8 = rd32(sp0 - 0xd8u); goto E_101859d1;
    case 0x101859dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_d8 = rd32(sp0 - 0xd8u); goto E_101859da;
    case 0x10185b3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); loc_120 = rd32(sp0 - 0x120u); loc_dc = rd32(sp0 - 0xdcu); loc_d8 = rd32(sp0 - 0xd8u); goto E_10185b3f;
    case 0x10185b44u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); loc_120 = rd32(sp0 - 0x120u); loc_11c_f = rdf32(sp0 - 0x11cu); loc_dc = rd32(sp0 - 0xdcu); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_c4 = rd32(sp0 - 0xc4u); goto E_10185b44;
    case 0x10185b60u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); loc_120 = rd32(sp0 - 0x120u); loc_11c_f = rdf32(sp0 - 0x11cu); loc_dc = rd32(sp0 - 0xdcu); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_c4 = rd32(sp0 - 0xc4u); goto E_10185b60;
    case 0x10185b68u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); loc_120 = rd32(sp0 - 0x120u); loc_11c_f = rdf32(sp0 - 0x11cu); loc_dc = rd32(sp0 - 0xdcu); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_c4 = rd32(sp0 - 0xc4u); goto E_10185b68;
    case 0x10185b7du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); loc_120 = rd32(sp0 - 0x120u); loc_11c_f = rdf32(sp0 - 0x11cu); loc_dc = rd32(sp0 - 0xdcu); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); goto E_10185b7d;
    case 0x10185b9du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); loc_120 = rd32(sp0 - 0x120u); loc_11c_f = rdf32(sp0 - 0x11cu); loc_dc = rd32(sp0 - 0xdcu); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); goto E_10185b9d;
    case 0x10185babu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); loc_120 = rd32(sp0 - 0x120u); loc_11c_f = rdf32(sp0 - 0x11cu); loc_dc = rd32(sp0 - 0xdcu); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); goto E_10185bab;
    case 0x10185bc0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); loc_120 = rd32(sp0 - 0x120u); loc_11c_f = rdf32(sp0 - 0x11cu); loc_dc = rd32(sp0 - 0xdcu); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); goto E_10185bc0;
    case 0x10185bdbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); loc_120 = rd32(sp0 - 0x120u); loc_11c_f = rdf32(sp0 - 0x11cu); loc_dc = rd32(sp0 - 0xdcu); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); goto E_10185bdb;
    case 0x10185bdcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_138 = rd32(sp0 - 0x138u); loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); loc_120 = rd32(sp0 - 0x120u); loc_11c_f = rdf32(sp0 - 0x11cu); loc_dc = rd32(sp0 - 0xdcu); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b8 = rd32(sp0 - 0xb8u); loc_b4 = rd32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_a4 = rd32(sp0 - 0xa4u); goto E_10185bdc;
    case 0x10185bf5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_138 = rd32(sp0 - 0x138u); goto E_10185bf5;
    case 0x10185c0bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_138 = rd32(sp0 - 0x138u); goto E_10185c0b;
    case 0x10185c21u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_138 = rd32(sp0 - 0x138u); goto E_10185c21;
    case 0x10185c37u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_138 = rd32(sp0 - 0x138u); goto E_10185c37;
    case 0x10185c4du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_138 = rd32(sp0 - 0x138u); goto E_10185c4d;
    case 0x10185c5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_138 = rd32(sp0 - 0x138u); goto E_10185c5f;
    case 0x10185c7au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_138 = rd32(sp0 - 0x138u); goto E_10185c7a;
    case 0x10185c85u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_138 = rd32(sp0 - 0x138u); goto E_10185c85;
    case 0x10185c90u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10185c90;
    case 0x10185c93u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_130 = rd32(sp0 - 0x130u); loc_12c = rd32(sp0 - 0x12cu); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84_f = rdf32(sp0 - 0x84u); goto E_10185c93;
    default: break;
    }
#endif

    COW_AT(10184fe0)
    d1 = (double)rdf32(sp0 + 8u);
    wr32(sp0 - 0x12cu, in_ebx);
    wr32(sp0 - 0x130u, in_esi);
    wr32(sp0 - 0xacu, self);
    if (d1 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
    COW_AT(10185022)
        wr32(sp0 - 0x98u, 0x3f800000u);
        wr32(sp0 - 0xa0u, 0x3f800000u);
    }
    else
    {
    COW_AT(10185005)
        d2 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(sp0 + 8u));
        wrf32(sp0 - 0x98u, (float)(double)(float)d2);
        wrf32(sp0 - 0xa0u, (float)(double)(float)d2);
    }
    COW_AT(10185038)
    d3 = (double)(float)-(double)rdf32(arg1);
    wrf32(sp0 - 0x8cu, (float)d3);
    d4 = (double)(float)-(double)rdf32(arg1 + 4u);
    wrf32(sp0 - 0x88u, (float)d4);
    d5 = (double)(float)-(double)rdf32(arg1 + 8u);
    wrf32(sp0 - 0x84u, (float)d5);
    if (rd32(self + 0x343e4u) == 0u)
    {
        ebp = in_ebp;
        edi = in_edi;
        loc_12c = in_ebx;
        loc_130 = in_esi;
        goto L_10185c93;
    }
    eax = rd32(self + 0x343e4u);
    loc_8c_f = d3;
    loc_88_f = d4;
    loc_84_f = d5;
    COW_AT(10185070)
    if (rd32(eax + 0x40u) != 0u)
    {
        ecx = rd32(eax + 0x40u);
    }
    else
    {
    COW_AT(10185077)
        ecx = rd32(eax + 0x44u);
    }
    COW_AT(1018507a)
    wr32(sp0 - 0x134u, ecx);
    wr32(sp0 - 0x138u, 0u);
    t6 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x13cu, t6);
    g->edx = rd32(t6);
    t7 = rd32(t6);
    g->esp = sp0 - 0x134u;
    cow_thiscall(g, rd32(t7 + 0xf4u), ecx, 2, t6, 0u);
    t8 = g->edx;
    edx = t8;
    COW_AT(1018508e)
    wr32(sp0 - 0x138u, 0u);
    wr32(sp0 - 0x13cu, 0x89u);
    t9 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x140u, t9);
    g->esp = sp0 - 0x134u;
    cow_thiscall(g, rd32(rd32(t9) + 0xc8u), rd32(t9), 3, t9, 0x89u, 0u);
    COW_AT(101850a6)
    wr32(sp0 - 0x138u, 1u);
    wr32(sp0 - 0x13cu, 0x1bu);
    t10 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x140u, t10);
    g->esp = sp0 - 0x134u;
    cow_thiscall(g, rd32(rd32(t10) + 0xc8u), rd32(t10), 3, t10, 0x1bu, 1u);
    COW_AT(101850bc)
    wr32(sp0 - 0x138u, 1u);
    wr32(sp0 - 0x13cu, 0x13u);
    t11 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x140u, t11);
    g->esp = sp0 - 0x134u;
    cow_thiscall(g, rd32(rd32(t11) + 0xc8u), rd32(t11), 3, t11, 0x13u, 1u);
    COW_AT(101850d2)
    wr32(sp0 - 0x138u, 4u);
    wr32(sp0 - 0x13cu, 0x14u);
    t12 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x140u, t12);
    g->esp = sp0 - 0x134u;
    cow_thiscall(g, rd32(rd32(t12) + 0xc8u), rd32(t12), 3, t12, 0x14u, 4u);
    COW_AT(101850e8)
    wr32(sp0 - 0x138u, 0u);
    wr32(sp0 - 0x13cu, 0x1cu);
    t13 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x140u, t13);
    g->esp = sp0 - 0x134u;
    cow_thiscall(g, rd32(rd32(t13) + 0xc8u), rd32(t13), 3, t13, 0x1cu, 0u);
    COW_AT(101850fe)
    wr32(sp0 - 0x138u, 1u);
    wr32(sp0 - 0x13cu, 0x11u);
    wr32(sp0 - 0x140u, 0u);
    t14 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x144u, t14);
    g->esp = sp0 - 0x134u;
    cow_thiscall(g, rd32(rd32(t14) + 0xfcu), rd32(t14), 4, t14, 0u, 0x11u, 1u);
    COW_AT(10185116)
    wr32(sp0 - 0x138u, 1u);
    wr32(sp0 - 0x13cu, 0x10u);
    wr32(sp0 - 0x140u, 0u);
    t15 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x144u, t15);
    g->esp = sp0 - 0x134u;
    cow_thiscall(g, rd32(rd32(t15) + 0xfcu), rd32(t15), 4, t15, 0u, 0x10u, 1u);
    COW_AT(1018512e)
    wr32(sp0 - 0x138u, 3u);
    wr32(sp0 - 0x13cu, 0x16u);
    t16 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x140u, t16);
    g->esp = sp0 - 0x134u;
    cow_thiscall(g, rd32(rd32(t16) + 0xc8u), rd32(t16), 3, t16, 0x16u, 3u);
    COW_AT(10185144)
    wr32(sp0 - 0x138u, 0u);
    wr32(sp0 - 0x13cu, 0xeu);
    wr32(sp0 - 0xacu, 0u);
    t17 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x140u, t17);
    g->eax = t17;
    g->edx = rd32(COW_IMG(0x1045666cu));
    t18 = rd32(t17);
    t19 = rd32(COW_IMG(0x1045666cu));
    g->esp = sp0 - 0x134u;
    t20 = cow_thiscall(g, rd32(t18 + 0xc8u), t18, 3, t17, 0xeu, 0u);
    t21 = g->ecx;
    t22 = g->edx;
    eax = t20;
    ecx = t21;
    edx = t22;
    COW_AT(10185165)
    if (rd8(self + 0x39598u) == 0u)
    {
    COW_AT(10185194)
        wr32(sp0 - 0x138u, rd32(COW_IMG(0x10631c88u)));
        g->esp = sp0 - 0x134u;
        cow_cdecl(g, COW_IMG(0x10177400u), 1, rd32(COW_IMG(0x10631c88u)));
    COW_AT(1018519f)
    }
    else
    {
    COW_AT(1018516f)
        wr32(sp0 - 0x138u, sp0 - 0x44u);
        wr32(sp0 - 0x13cu, 3u);
        t23 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x140u, t23);
        g->eax = t23;
        g->edx = sp0 - 0x44u;
        g->esp = sp0 - 0x134u;
        t24 = cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x98u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t23, 3u, sp0 - 0x44u);
        t25 = g->edx;
        eax = t24;
        edx = t25;
    COW_AT(1018518b)
        g->esp = sp0 - 0xc8u;
        cow_bridge_indirect(g, COW_IMG(0x10177420u), 0u, 27u, (const uint32_t[]){rd32(sp0 - 0x134u), rd32(sp0 - 0x130u), rd32(sp0 - 0x12cu), rd32(sp0 - 0x128u), rd32(sp0 - 0x124u), rd32(sp0 - 0x120u), rd32(sp0 - 0x11cu), rd32(sp0 - 0x118u), rd32(sp0 - 0x114u), rd32(sp0 - 0x110u), rd32(sp0 - 0x10cu), rd32(sp0 - 0x108u), rd32(sp0 - 0x104u), rd32(sp0 - 0x100u), rd32(sp0 - 0xfcu), rd32(sp0 - 0xf8u), rd32(sp0 - 0xf4u), rd32(sp0 - 0xf0u), rd32(sp0 - 0xecu), rd32(sp0 - 0xe8u), rd32(sp0 - 0xe4u), rd32(sp0 - 0xe0u), rd32(sp0 - 0xdcu), rd32(sp0 - 0xd8u), rd32(sp0 - 0xd4u), rd32(sp0 - 0xd0u), rd32(sp0 - 0xccu)}, self, g->edx, g->eax, 108u);
    COW_AT(10185192)
    }
    COW_AT(101851a2)
    wr32(sp0 - 0x138u, in_edi);
    wr32(sp0 - 0x13cu, 0x142u);
    t26 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x140u, t26);
    g->edx = rd32(t26);
    t27 = rd32(t26);
    g->esp = sp0 - 0x134u;
    cow_thiscall(g, rd32(t27 + 0x130u), rd32(COW_IMG(0x1045666cu)), 3, t26, 0x142u, in_edi);
    t28 = g->edx;
    edx = t28;
    COW_AT(101851ba)
    t29 = rd32(sp0 - 0x98u);
    d30 = fr(g, (double)rdf32(sp0 - 0x8cu) * (double)rdf32(sp0 - 0xa0u));
    wr32(sp0 - 0x58u, t29);
    t31 = rd32(sp0 - 0xa0u);
    d32 = fr(g, d30 + (double)rdf32(COW_IMG(0x103773c0u)));
    wr32(sp0 - 0x80u, t31);
    wr32(sp0 - 0x74u, 0u);
    wr32(sp0 - 0x78u, 0u);
    wr32(sp0 - 0x7cu, 0u);
    wr32(sp0 - 0x6cu, 0x3f800000u);
    wr32(sp0 - 0x64u, 0u);
    wrf32(sp0 - 0x50u, (float)(double)(float)d32);
    d33 = fr(g, (double)rdf32(COW_IMG(0x103773c4u)) + (double)rdf32(sp0 - 0x88u));
    wr32(sp0 - 0x68u, 0u);
    wr32(sp0 - 0x70u, 0u);
    wr32(sp0 - 0x54u, 0u);
    wr32(sp0 - 0x5cu, 0u);
    wr32(sp0 - 0x60u, 0u);
    wr32(sp0 - 0x44u, 0x3f800000u);
    wrf32(sp0 - 0x4cu, (float)(double)(float)d33);
    d34 = fr(g, fr(g, (double)rdf32(sp0 - 0x84u) * (double)rdf32(sp0 - 0x98u)) + (double)rdf32(COW_IMG(0x103773c8u)));
    wrf32(sp0 - 0x48u, (float)(double)(float)d34);
    g->eax = t31;
    g->esp = sp0 - 0x134u;
    t35 = cow_thiscall(g, COW_IMG(0x10167940u), self + 0x178u, 0);
    t36 = g->ecx;
    eax = t35;
    ecx = t36;
    COW_AT(101852a4)
    wr32(sp0 - 0xa4u, eax);
    if (eax == 0u)
    {
        ebp = in_ebp;
    }
    else
    {
        loc_a4 = eax;
    COW_AT(101852b3)
        t37 = rd32(rd32(sp0 - 0xacu) + 0x17cu);
        d38 = fr(g, (double)rdf32(loc_a4 + 0x38u) + (double)rdf32(arg1));
        wr32(sp0 - 0x94u, t37);
        g->ecx = ecx;
        g->edx = rd32(sp0 - 0xacu);
        t39 = rd32(sp0 - 0xacu);
        d40 = fr(g, d38 * (double)rdf32(COW_IMG(0x10329ce4u)));
        fpush(g, d40);
        g->esp = sp0 - 0x134u;
        t41 = cow_call_regs(g, COW_IMG(0x10311c6cu), t37, g->ecx, g->edx, 1, 0);
        t42 = g->ecx;
        t43 = g->edx;
        eax = t41;
        ecx = t42;
        edx = t43;
        esi = loc_a4;
    COW_AT(101852de)
        d44 = fr(g, fr(g, (double)rdf32(esi + 0x3cu) + (double)rdf32(arg1 + 8u)) * (double)rdf32(COW_IMG(0x10329ce4u)));
        fpush(g, d44);
        g->esp = sp0 - 0x134u;
        t45 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        edi = eax;
        eax = t45;
    COW_AT(101852f1)
        if ((int32_t)(edi - 1u) >= 0)
        {
            ecx = edi - 1u;
    COW_AT(10185300)
            t46 = rd32(esi + 0x40u) - 1u;
            wr32(sp0 - 0xb8u, t46);
            if ((int32_t)ecx > (int32_t)(rd32(esi + 0x40u) - 1u))
            {
                loc_b8 = t46;
            }
            else
            {
    COW_AT(1018530c)
                wr32(sp0 - 0xb8u, ecx);
                loc_b8 = ecx;
            }
        }
        else
        {
    COW_AT(101852fa)
            wr32(sp0 - 0xb8u, 0u);
            loc_b8 = 0u;
        }
    COW_AT(10185310)
        if ((int32_t)(edi + 1u) >= 0)
        {
            ecx = edi + 1u;
    COW_AT(1018531d)
            t47 = rd32(esi + 0x40u) - 1u;
            wr32(sp0 - 0xc8u, t47);
            if ((int32_t)ecx > (int32_t)(rd32(esi + 0x40u) - 1u))
            {
                loc_c8 = t47;
            }
            else
            {
    COW_AT(10185329)
                wr32(sp0 - 0xc8u, ecx);
                loc_c8 = ecx;
            }
        }
        else
        {
    COW_AT(10185317)
            wr32(sp0 - 0xc8u, 0u);
            loc_c8 = 0u;
        }
    COW_AT(1018532d)
        if ((int32_t)(eax - 1u) >= 0)
        {
            ecx = eax - 1u;
    COW_AT(10185338)
            if ((int32_t)ecx > (int32_t)(rd32(esi + 0x44u) - 1u))
            {
                edx = rd32(esi + 0x44u) - 1u;
    COW_AT(10185340)
                ecx = edx;
            }
        }
        else
        {
    COW_AT(10185334)
            ecx = 0u;
        }
    COW_AT(10185342)
        if ((int32_t)(eax + 1u) >= 0)
        {
            eax = eax + 1u;
    COW_AT(1018534b)
            if ((int32_t)eax > (int32_t)(rd32(esi + 0x44u) - 1u))
            {
                edx = rd32(esi + 0x44u) - 1u;
    COW_AT(10185355)
                eax = edx;
            }
        }
        else
        {
    COW_AT(10185347)
            eax = 0u;
        }
    COW_AT(10185357)
        wr32(sp0 - 0xc0u, eax);
        wr32(sp0 - 0xb4u, ecx);
        if ((int32_t)ecx > (int32_t)eax)
        {
            ebp = in_ebp;
        }
        else
        {
            loc_c0 = eax;
            loc_b4 = ecx;
    COW_AT(1018536a)
            wr32(sp0 - 0x138u, in_ebp);
            loc_138 = in_ebp;
            loc_11c_f = (double)rdf32(sp0 - 0x11cu);
L_1018536b: ;
    COW_AT(1018536b)
            wr32(sp0 - 0xbcu, loc_b8);
            if ((int32_t)loc_b8 > (int32_t)loc_c8) goto L_10185bc0;
            loc_bc = loc_b8;
L_10185382: ;
    COW_AT(10185382)
            if (rd32(loc_bc * 4u + rd32(rd32(sp0 - 0xa4u) + 0x58u) + rd32(rd32(sp0 - 0xa4u) + 0x40u) * loc_b4 * 4u) == 0u) goto L_10185bab;
            eax = rd32(loc_bc * 4u + rd32(rd32(sp0 - 0xa4u) + 0x58u) + rd32(rd32(sp0 - 0xa4u) + 0x40u) * loc_b4 * 4u);
L_101853a8: ;
    COW_AT(101853a8)
            wr32(sp0 - 0xd0u, eax + 4u);
            if ((rd32(eax) >> 8u & 0x20u) == 0u)
            {
                loc_d0 = eax + 4u;
                eax = rd32(eax) & 0x7ffu;
    COW_AT(101853c9)
                if ((int32_t)eax > 0)
                {
    COW_AT(101853d1)
                    wr32(sp0 - 0xb0u, eax);
                    loc_b0 = eax;
L_101853d8: ;
    COW_AT(101853d8)
                    t49 = rd32(loc_d0 + 4u);
                    wr32(sp0 - 0xccu, t49);
                    if (rd32(sp0 - 0x94u) != rd32(rd32(loc_d0) + 0xbcu))
                    {
                        ecx = t49;
                        edx = rd32(sp0 - 0x94u);
                        ebp = rd32(loc_d0);
                        loc_cc = t49;
    COW_AT(101853f8)
                        if (rd16(ecx + 0xeu) == 0u)
                        {
    COW_AT(10185405)
                            if (rd32(sp0 - 0xa8u) != (rd32(ebp + 0xa4u) & 1u))
                            {
                                eax = rd32(ebp + 0xa4u) & 1u;
    COW_AT(10185419)
                                wr32(sp0 - 0xa8u, eax);
                                if (eax == 0u)
                                {
                                    loc_a8 = eax;
    COW_AT(1018543c)
                                    wr32(sp0 - 0x13cu, 3u);
                                    wr32(sp0 - 0x140u, 0x16u);
                                    t51 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                    wr32(sp0 - 0x144u, t51);
                                    g->esp = sp0 - 0x138u;
                                    cow_thiscall(g, rd32(rd32(t51) + 0xc8u), rd32(t51), 3, t51, 0x16u, 3u);
                                    loc_b8 = rd32(sp0 - 0xb8u);
                                    loc_c8 = rd32(sp0 - 0xc8u);
                                    loc_c0 = rd32(sp0 - 0xc0u);
                                    loc_b4 = rd32(sp0 - 0xb4u);
                                    loc_138 = rd32(sp0 - 0x138u);
                                    loc_bc = rd32(sp0 - 0xbcu);
                                    loc_d0 = rd32(sp0 - 0xd0u);
                                    loc_b0 = rd32(sp0 - 0xb0u);
                                    loc_cc = rd32(sp0 - 0xccu);
                                    loc_11c_f = (double)rdf32(sp0 - 0x11cu);
                                }
                                else
                                {
                                    loc_a8 = eax;
    COW_AT(10185424)
                                    wr32(sp0 - 0x13cu, 2u);
                                    wr32(sp0 - 0x140u, 0x16u);
                                    t50 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                    wr32(sp0 - 0x144u, t50);
                                    g->esp = sp0 - 0x138u;
                                    cow_thiscall(g, rd32(rd32(t50) + 0xc8u), rd32(COW_IMG(0x1045666cu)), 3, t50, 0x16u, 2u);
    COW_AT(1018543a)
                                    loc_b8 = rd32(sp0 - 0xb8u);
                                    loc_c8 = rd32(sp0 - 0xc8u);
                                    loc_c0 = rd32(sp0 - 0xc0u);
                                    loc_b4 = rd32(sp0 - 0xb4u);
                                    loc_138 = rd32(sp0 - 0x138u);
                                    loc_bc = rd32(sp0 - 0xbcu);
                                    loc_d0 = rd32(sp0 - 0xd0u);
                                    loc_b0 = rd32(sp0 - 0xb0u);
                                    loc_cc = rd32(sp0 - 0xccu);
                                    loc_11c_f = (double)rdf32(sp0 - 0x11cu);
                                }
                            }
    COW_AT(10185451)
                            wr32(sp0 - 0x13cu, ebp);
                            wr32(sp0 - 0x140u, 0x100u);
                            t52 = rd32(loc_cc + 4u);
                            wr32(sp0 - 0x90u, t52);
                            t53 = rd32(loc_cc);
                            t54 = rd32(loc_cc + 8u);
                            g->esp = sp0 - 0x138u;
                            cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(COW_IMG(0x1045666cu)), 2, 0x100u, ebp);
                            ebx = t53;
                            edi = t54;
    COW_AT(10185475)
                            wr32(sp0 - 0xd4u, 0u);
                            t55 = ebp - (sp0 - 0x11cu);
                            wr32(sp0 - 0xc4u, t55);
                            wr32(sp0 - 0xd8u, 4u);
                            eax = sp0 - 0x11cu;
                            loc_c4 = t55;
                            loc_d8 = 4u;
                            loc_11c_f = (double)rdf32(sp0 - 0x11cu);
L_10185498: ;
    COW_AT(10185498)
                            wr32(sp0 - 0x128u, sp0 - 0x80u);
                            wr32(sp0 - 0x124u, eax + loc_c4);
                            wr32(sp0 - 0xdcu, 4u);
                            ebp = eax;
                            loc_128 = sp0 - 0x80u;
                            loc_124 = eax + loc_c4;
                            loc_dc = 4u;
L_101854b7: ;
    COW_AT(101854b7)
                            d56 = (double)rdf32(COW_IMG(0x103295d8u));
                            wr32(ebp, 0u);
                            eax = loc_128;
                            ecx = loc_124;
                            edx = 4u;
                            x0 = d56;
L_101854d1: ;
    COW_AT(101854d1)
                            if (edx != 1u)
                            {
                                edx = edx - 1u;
                                x0 = fr(g, x0 + fr(g, (double)rdf32(ecx) * (double)rdf32(eax)));
                                eax = eax + 0x10u;
                                ecx = ecx + 4u;
                                goto L_101854d1;
                            }
                            loc_11c = rd32(sp0 - 0x11cu);
                            x0 = fr(g, x0 + fr(g, (double)rdf32(ecx) * (double)rdf32(eax)));
    COW_AT(101854e0)
                            wrf32(ebp, (float)x0);
                            wr32(sp0 - 0x128u, loc_128 + 4u);
                            wr32(sp0 - 0xdcu, loc_dc - 1u);
                            if (loc_dc != 1u)
                            {
                                ebp = ebp + 4u;
                                loc_128 = loc_128 + 4u;
                                loc_dc = loc_dc - 1u;
                                goto L_101854b7;
                            }
                            ebp = ebp + 4u;
    COW_AT(101854fc)
                            wr32(sp0 - 0xd8u, loc_d8 - 1u);
                            if (loc_d8 != 1u)
                            {
                                eax = ebp;
                                loc_d8 = loc_d8 - 1u;
                                loc_11c_f = (double)rdf32(sp0 - 0x11cu);
                                goto L_10185498;
                            }
                            eax = ebp;
                            loc_11c_f = (double)rdf32(sp0 - 0x11cu);
    COW_AT(10185509)
                            wr32(sp0 - 0xc4u, 0u);
                            if ((int16_t)rd16(rd32(sp0 - 0xccu) + 0xcu) <= 0)
                            {
                                loc_b8 = rd32(sp0 - 0xb8u);
                                loc_c8 = rd32(sp0 - 0xc8u);
                                loc_c0 = rd32(sp0 - 0xc0u);
                                loc_b4 = rd32(sp0 - 0xb4u);
                                loc_138 = rd32(sp0 - 0x138u);
                                loc_bc = rd32(sp0 - 0xbcu);
                                loc_d0 = rd32(sp0 - 0xd0u);
                                loc_b0 = rd32(sp0 - 0xb0u);
                            }
                            else
                            {
    COW_AT(10185520)
                                wr32(sp0 - 0x124u, COW_IMG(0x106390ccu));
                                wr32(sp0 - 0x120u, COW_IMG(0x106390c8u));
                                wr32(sp0 - 0x128u, COW_IMG(0x106390b4u));
                                wr32(sp0 - 0xdcu, COW_IMG(0x106390b0u));
                                ecx = COW_IMG(0x106390b0u);
                                edx = COW_IMG(0x106390b4u);
                                esi = COW_IMG(0x10639088u);
                                loc_d4 = 0u;
                                loc_c4 = 0u;
                                loc_128 = COW_IMG(0x106390b4u);
                                loc_124 = COW_IMG(0x106390ccu);
                                loc_dc = COW_IMG(0x106390b0u);
                                loc_120 = COW_IMG(0x106390c8u);
L_1018554c: ;
    COW_AT(1018554c)
                                d57 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0xf8u) * (double)rdf32(rd32(sp0 - 0x90u) + (rd16(edi + 6u) & 0x7fffu) * 0xcu + 8u)) + fr(g, (double)rdf32(sp0 - 0x108u) * (double)rdf32(rd32(sp0 - 0x90u) + (rd16(edi + 6u) & 0x7fffu) * 0xcu + 4u))) + fr(g, (double)rdf32(sp0 - 0x118u) * (double)rdf32(rd32(sp0 - 0x90u) + (rd16(edi + 6u) & 0x7fffu) * 0xcu)));
                                if ((cow_fsw(g, d57, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) == 0u) goto L_10185b44;
                                eax = cow_fsw(g, d57, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
    COW_AT(10185590)
                                d58 = fr(g, fr(g, fr(g, loc_11c_f * (double)rdf32(ebx + (rd16(edi) & 0x7fffu) * 0xcu)) + fr(g, (double)rdf32(sp0 - 0xfcu) * (double)rdf32(ebx + (rd16(edi) & 0x7fffu) * 0xcu + 8u))) + fr(g, (double)rdf32(sp0 - 0x10cu) * (double)rdf32(ebx + (rd16(edi) & 0x7fffu) * 0xcu + 4u)));
                                t59 = rd16(edi);
                                d60 = fr(g, d58 + (double)rdf32(sp0 - 0xecu));
                                wrf32(esi + 0x10u, (float)d60);
                                d61 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x118u) * (double)rdf32(ebx + (t59 & 0x7fffu) * 0xcu)) + fr(g, (double)rdf32(sp0 - 0xf8u) * (double)rdf32(ebx + (t59 & 0x7fffu) * 0xcu + 8u))) + fr(g, (double)rdf32(sp0 - 0x108u) * (double)rdf32(ebx + (t59 & 0x7fffu) * 0xcu + 4u)));
                                d62 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x114u) * (double)rdf32(ebx + (t59 & 0x7fffu) * 0xcu)) + fr(g, (double)rdf32(sp0 - 0xf4u) * (double)rdf32(ebx + (t59 & 0x7fffu) * 0xcu + 8u))) + fr(g, (double)rdf32(sp0 - 0x104u) * (double)rdf32(ebx + (t59 & 0x7fffu) * 0xcu + 4u)));
                                d63 = fr(g, d62 + (double)rdf32(sp0 - 0xe4u));
                                d64 = fr(g, d61 + (double)rdf32(sp0 - 0xe8u));
                                wrf32(esi + 0x14u, (float)d63);
                                if (!(d64 < (double)rdf32(COW_IMG(0x103295d8u))))
                                {
                                    eax = (ebx + (t59 & 0x7fffu) * 0xcu & 0xffff0000u) | rd16(edi);
    COW_AT(10185675)
                                    d70 = fr(g, fr(g, fr(g, fr(g, loc_11c_f * (double)rdf32(ebx + (eax & 0x7fffu) * 0xcu)) + fr(g, (double)rdf32(sp0 - 0xfcu) * (double)rdf32(ebx + (eax & 0x7fffu) * 0xcu + 8u))) + fr(g, (double)rdf32(sp0 - 0x10cu) * (double)rdf32(ebx + (eax & 0x7fffu) * 0xcu + 4u))) + (double)rdf32(sp0 - 0xecu));
                                    wrf32(esi + 0x10u, (float)d70);
                                    d71 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x118u) * (double)rdf32(ebx + (eax & 0x7fffu) * 0xcu)) + fr(g, (double)rdf32(sp0 - 0xf8u) * (double)rdf32(ebx + (eax & 0x7fffu) * 0xcu + 8u))) + fr(g, (double)rdf32(sp0 - 0x108u) * (double)rdf32(ebx + (eax & 0x7fffu) * 0xcu + 4u)));
                                    d72 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x114u) * (double)rdf32(ebx + (eax & 0x7fffu) * 0xcu)) + fr(g, (double)rdf32(sp0 - 0xf4u) * (double)rdf32(ebx + (eax & 0x7fffu) * 0xcu + 8u))) + fr(g, (double)rdf32(sp0 - 0x104u) * (double)rdf32(ebx + (eax & 0x7fffu) * 0xcu + 4u)));
                                    d73 = fr(g, d72 + (double)rdf32(sp0 - 0xe4u));
                                    d74 = fr(g, d71 + (double)rdf32(sp0 - 0xe8u));
                                    wrf32(esi + 0x14u, (float)d73);
                                    eax = ebx + (eax & 0x7fffu) * 0xcu;
                                    x0 = d74;
                                }
                                else
                                {
                                    eax = (ebx + (t59 & 0x7fffu) * 0xcu & 0xffff0000u) | rd16(edi);
    COW_AT(1018560a)
                                    d65 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0xfcu) * (double)rdf32(ebx + (eax & 0x7fffu) * 0xcu + 8u)) + fr(g, (double)rdf32(sp0 - 0x10cu) * (double)rdf32(ebx + (eax & 0x7fffu) * 0xcu + 4u))) + fr(g, loc_11c_f * (double)rdf32(ebx + (eax & 0x7fffu) * 0xcu))) + (double)rdf32(sp0 - 0xecu));
                                    wrf32(esi + 0x10u, (float)d65);
                                    d66 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0xf8u) * (double)rdf32(ebx + (eax & 0x7fffu) * 0xcu + 8u)) + fr(g, (double)rdf32(sp0 - 0x108u) * (double)rdf32(ebx + (eax & 0x7fffu) * 0xcu + 4u))) + fr(g, (double)rdf32(sp0 - 0x118u) * (double)rdf32(ebx + (eax & 0x7fffu) * 0xcu)));
                                    d67 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0xf4u) * (double)rdf32(ebx + (eax & 0x7fffu) * 0xcu + 8u)) + fr(g, (double)rdf32(sp0 - 0x104u) * (double)rdf32(ebx + (eax & 0x7fffu) * 0xcu + 4u))) + fr(g, (double)rdf32(sp0 - 0x114u) * (double)rdf32(ebx + (eax & 0x7fffu) * 0xcu)));
                                    d68 = fr(g, d67 + (double)rdf32(sp0 - 0xe4u));
                                    d69 = fr(g, d66 + (double)rdf32(sp0 - 0xe8u));
                                    wrf32(esi + 0x14u, (float)d68);
                                    eax = ebx + (eax & 0x7fffu) * 0xcu;
                                    x0 = -d69;
                                }
    COW_AT(101856dc)
                                d75 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0xfcu) * (double)rdf32(ebx + (rd16(edi + 2u) & 0x3fffu) * 0xcu + 8u)) + fr(g, (double)rdf32(sp0 - 0x10cu) * (double)rdf32(ebx + (rd16(edi + 2u) & 0x3fffu) * 0xcu + 4u))) + fr(g, loc_11c_f * (double)rdf32(ebx + (rd16(edi + 2u) & 0x3fffu) * 0xcu)));
                                t76 = rd16(edi + 2u);
                                d77 = fr(g, d75 + (double)rdf32(sp0 - 0xecu));
                                wrf32(ecx, (float)d77);
                                d78 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0xf8u) * (double)rdf32(ebx + (t76 & 0x3fffu) * 0xcu + 8u)) + fr(g, (double)rdf32(sp0 - 0x108u) * (double)rdf32(ebx + (t76 & 0x3fffu) * 0xcu + 4u))) + fr(g, (double)rdf32(sp0 - 0x118u) * (double)rdf32(ebx + (t76 & 0x3fffu) * 0xcu)));
                                d79 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0xf4u) * (double)rdf32(ebx + (t76 & 0x3fffu) * 0xcu + 8u)) + fr(g, (double)rdf32(sp0 - 0x104u) * (double)rdf32(ebx + (t76 & 0x3fffu) * 0xcu + 4u))) + fr(g, (double)rdf32(sp0 - 0x114u) * (double)rdf32(ebx + (t76 & 0x3fffu) * 0xcu)));
                                d80 = fr(g, d79 + (double)rdf32(sp0 - 0xe4u));
                                d81 = fr(g, d78 + (double)rdf32(sp0 - 0xe8u));
                                wrf32(edx, (float)d80);
                                if (!(d81 < (double)rdf32(COW_IMG(0x103295d8u))))
                                {
                                    eax = (ebx + (t76 & 0x3fffu) * 0xcu & 0xffff0000u) | rd16(edi + 2u);
                                    x1 = loc_11c_f;
    COW_AT(101857bf)
                                    d87 = fr(g, fr(g, fr(g, fr(g, x1 * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu)) + fr(g, (double)rdf32(sp0 - 0xfcu) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 8u))) + fr(g, (double)rdf32(sp0 - 0x10cu) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 4u))) + (double)rdf32(sp0 - 0xecu));
                                    wrf32(ecx, (float)d87);
                                    d88 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x118u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu)) + fr(g, (double)rdf32(sp0 - 0xf8u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 8u))) + fr(g, (double)rdf32(sp0 - 0x108u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 4u)));
                                    d89 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x114u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu)) + fr(g, (double)rdf32(sp0 - 0xf4u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 8u))) + fr(g, (double)rdf32(sp0 - 0x104u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 4u)));
                                    d90 = fr(g, d89 + (double)rdf32(sp0 - 0xe4u));
                                    d91 = fr(g, d88 + (double)rdf32(sp0 - 0xe8u));
                                    wrf32(edx, (float)d90);
                                    eax = ebx + (eax & 0x3fffu) * 0xcu;
                                    x1 = d91;
                                }
                                else
                                {
                                    eax = (ebx + (t76 & 0x3fffu) * 0xcu & 0xffff0000u) | rd16(edi + 2u);
                                    x1 = loc_11c_f;
    COW_AT(1018575a)
                                    d82 = fr(g, fr(g, fr(g, fr(g, x1 * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu)) + fr(g, (double)rdf32(sp0 - 0xfcu) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 8u))) + fr(g, (double)rdf32(sp0 - 0x10cu) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 4u))) + (double)rdf32(sp0 - 0xecu));
                                    wrf32(ecx, (float)d82);
                                    d83 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x118u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu)) + fr(g, (double)rdf32(sp0 - 0xf8u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 8u))) + fr(g, (double)rdf32(sp0 - 0x108u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 4u)));
                                    d84 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x114u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu)) + fr(g, (double)rdf32(sp0 - 0xf4u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 8u))) + fr(g, (double)rdf32(sp0 - 0x104u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 4u)));
                                    d85 = fr(g, d84 + (double)rdf32(sp0 - 0xe4u));
                                    d86 = fr(g, d83 + (double)rdf32(sp0 - 0xe8u));
                                    wrf32(edx, (float)d85);
                                    eax = ebx + (eax & 0x3fffu) * 0xcu;
                                    x1 = -d86;
                                }
    COW_AT(10185820)
                                d92 = fr(g, fr(g, fr(g, loc_11c_f * (double)rdf32(ebx + (rd16(edi + 4u) & 0x3fffu) * 0xcu)) + fr(g, (double)rdf32(sp0 - 0xfcu) * (double)rdf32(ebx + (rd16(edi + 4u) & 0x3fffu) * 0xcu + 8u))) + fr(g, (double)rdf32(sp0 - 0x10cu) * (double)rdf32(ebx + (rd16(edi + 4u) & 0x3fffu) * 0xcu + 4u)));
                                t93 = rd16(edi + 4u);
                                d94 = fr(g, d92 + (double)rdf32(sp0 - 0xecu));
                                wrf32(loc_120, (float)d94);
                                d95 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x118u) * (double)rdf32(ebx + (t93 & 0x3fffu) * 0xcu)) + fr(g, (double)rdf32(sp0 - 0xf8u) * (double)rdf32(ebx + (t93 & 0x3fffu) * 0xcu + 8u))) + fr(g, (double)rdf32(sp0 - 0x108u) * (double)rdf32(ebx + (t93 & 0x3fffu) * 0xcu + 4u)));
                                d96 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x114u) * (double)rdf32(ebx + (t93 & 0x3fffu) * 0xcu)) + fr(g, (double)rdf32(sp0 - 0xf4u) * (double)rdf32(ebx + (t93 & 0x3fffu) * 0xcu + 8u))) + fr(g, (double)rdf32(sp0 - 0x104u) * (double)rdf32(ebx + (t93 & 0x3fffu) * 0xcu + 4u)));
                                d97 = fr(g, d96 + (double)rdf32(sp0 - 0xe4u));
                                d98 = fr(g, d95 + (double)rdf32(sp0 - 0xe8u));
                                wrf32(loc_124, (float)d97);
                                if (!(d98 < (double)rdf32(COW_IMG(0x103295d8u))))
                                {
                                    eax = (ebx + (t93 & 0x3fffu) * 0xcu & 0xffff0000u) | rd16(edi + 4u);
                                    ecx = loc_120;
                                    edx = loc_124;
    COW_AT(1018590b)
                                    d104 = fr(g, fr(g, fr(g, fr(g, loc_11c_f * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu)) + fr(g, (double)rdf32(sp0 - 0xfcu) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 8u))) + fr(g, (double)rdf32(sp0 - 0x10cu) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 4u))) + (double)rdf32(sp0 - 0xecu));
                                    wrf32(ecx, (float)d104);
                                    d105 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x118u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu)) + fr(g, (double)rdf32(sp0 - 0xf8u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 8u))) + fr(g, (double)rdf32(sp0 - 0x108u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 4u)));
                                    d106 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x114u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu)) + fr(g, (double)rdf32(sp0 - 0xf4u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 8u))) + fr(g, (double)rdf32(sp0 - 0x104u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 4u)));
                                    d107 = fr(g, d106 + (double)rdf32(sp0 - 0xe4u));
                                    d108 = fr(g, d105 + (double)rdf32(sp0 - 0xe8u));
                                    wrf32(edx, (float)d107);
                                    eax = ebx + (eax & 0x3fffu) * 0xcu;
                                    x2 = d108;
                                }
                                else
                                {
                                    eax = (ebx + (t93 & 0x3fffu) * 0xcu & 0xffff0000u) | rd16(edi + 4u);
                                    ecx = loc_120;
                                    edx = loc_124;
    COW_AT(101858a2)
                                    d99 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0xfcu) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 8u)) + fr(g, (double)rdf32(sp0 - 0x10cu) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 4u))) + fr(g, loc_11c_f * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu))) + (double)rdf32(sp0 - 0xecu));
                                    wrf32(ecx, (float)d99);
                                    d100 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0xf8u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 8u)) + fr(g, (double)rdf32(sp0 - 0x108u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 4u))) + fr(g, (double)rdf32(sp0 - 0x118u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu)));
                                    d101 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0xf4u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 8u)) + fr(g, (double)rdf32(sp0 - 0x104u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu + 4u))) + fr(g, (double)rdf32(sp0 - 0x114u) * (double)rdf32(ebx + (eax & 0x3fffu) * 0xcu)));
                                    d102 = fr(g, d101 + (double)rdf32(sp0 - 0xe4u));
                                    d103 = fr(g, d100 + (double)rdf32(sp0 - 0xe8u));
                                    wrf32(edx, (float)d102);
                                    eax = ebx + (eax & 0x3fffu) * 0xcu;
                                    x2 = -d103;
                                }
    COW_AT(10185970)
                                g->ecx = ecx;
                                g->edx = edx;
                                d109 = fr(g, x0 * (double)rdf32(COW_IMG(0x10336798u)));
                                fpush(g, d109);
                                g->esp = sp0 - 0x138u;
                                t110 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                                t111 = g->ecx;
                                t112 = g->edx;
                                eax = t110;
                                ecx = t111;
                                edx = t112;
                                x0 = x2;
    COW_AT(1018597d)
                                g->edx = edx;
                                d113 = fr(g, x1 * (double)rdf32(COW_IMG(0x10336798u)));
                                fpush(g, d113);
                                g->esp = sp0 - 0x138u;
                                t114 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                                t115 = g->edx;
                                edx = t115;
                                ebp = 0x60u - eax;
                                eax = t114;
    COW_AT(1018598f)
                                d116 = fr(g, x0 * (double)rdf32(COW_IMG(0x10336798u)));
                                wr32(sp0 - 0xd8u, 0x60u - eax);
                                fpush(g, d116);
                                g->esp = sp0 - 0x138u;
                                t117 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                                eax = t117;
    COW_AT(101859a5)
                                if ((int32_t)ebp >= 0)
                                {
                                    ecx = 0x60u - eax;
                                    eax = 0u;
                                }
                                else
                                {
                                    ecx = 0x60u - eax;
    COW_AT(101859b2)
                                    eax = 1u;
                                    ebp = 0u;
                                }
    COW_AT(101859b9)
                                if ((int32_t)rd32(sp0 - 0xd8u) >= 0)
                                {
                                    loc_d8 = rd32(sp0 - 0xd8u);
                                }
                                else
                                {
    COW_AT(101859c1)
                                    wr32(sp0 - 0xd8u, 0u);
                                    eax = eax + 1u;
                                    loc_d8 = 0u;
                                }
    COW_AT(101859ca)
                                if ((int32_t)ecx < 0)
                                {
    COW_AT(101859ce)
                                    eax = eax + 1u;
                                    ecx = 0u;
                                }
    COW_AT(101859d1)
                                if ((int32_t)eax > 2)
                                {
                                    loc_d4 = rd32(sp0 - 0xd4u);
                                    loc_c4 = rd32(sp0 - 0xc4u);
                                    loc_128 = rd32(sp0 - 0x128u);
                                    loc_124 = rd32(sp0 - 0x124u);
                                    loc_dc = rd32(sp0 - 0xdcu);
                                    loc_11c_f = (double)rdf32(sp0 - 0x11cu);
                                    loc_120 = rd32(sp0 - 0x120u);
                                    goto L_10185b44;
                                }
    COW_AT(101859da)
                                t118 = rd32(ebx + (rd16(edi) & 0x7fffu) * 0xcu);
                                wr32(esi, t118);
                                t119 = rd32(ebx + (rd16(edi) & 0x7fffu) * 0xcu + 4u);
                                wr32(esi + 4u, t119);
                                t120 = rd32(ebx + (rd16(edi) & 0x7fffu) * 0xcu + 8u);
                                wr32(esi + 8u, t120);
                                t121 = ((ebp | 0xffff8000u) << 8u | ebp) << 8u | ebp;
                                t122 = rd32(sp0 - 0x128u);
                                wr32(esi + 0xcu, t121);
                                wr32(sp0 - 0x128u, t122 + 0x18u);
                                t123 = rd32(sp0 - 0x120u) + 0x18u;
                                wr32(sp0 - 0x120u, t123);
                                t124 = rd32(sp0 - 0x124u) + 0x18u;
                                wr32(sp0 - 0x124u, t124);
                                t125 = rd32(ebx + (rd16(edi + 2u) & 0x3fffu) * 0xcu);
                                t126 = rd32(sp0 - 0xdcu);
                                wr32(esi + 0x18u, t125);
                                t127 = rd32(ebx + (rd16(edi + 2u) & 0x3fffu) * 0xcu + 4u);
                                wr32(esi + 0x1cu, t127);
                                t128 = rd32(ebx + (rd16(edi + 2u) & 0x3fffu) * 0xcu + 8u);
                                wr32(esi + 0x20u, t128);
                                t129 = ((loc_d8 | 0xffff8000u) << 8u | loc_d8) << 8u | loc_d8;
                                wr32(esi + 0x24u, t129);
                                wr32(sp0 - 0x120u, t123 + 0x18u);
                                wr32(sp0 - 0x124u, t124 + 0x18u);
                                t130 = rd32(ebx + (rd16(edi + 4u) & 0x3fffu) * 0xcu);
                                wr32(esi + 0x30u, t130);
                                t131 = rd32(ebx + (rd16(edi + 4u) & 0x3fffu) * 0xcu + 4u);
                                wr32(esi + 0x34u, t131);
                                t132 = rd32(ebx + (rd16(edi + 4u) & 0x3fffu) * 0xcu + 8u);
                                wr32(esi + 0x38u, t132);
                                t133 = ((ecx | 0xffff8000u) << 8u | ecx) << 8u | ecx;
                                wr32(esi + 0x3cu, t133);
                                wr32(sp0 - 0xdcu, t126 + 0x48u);
                                wr32(sp0 - 0x128u, t122 + 0x48u);
                                wr32(sp0 - 0x120u, t123 + 0x30u);
                                wr32(sp0 - 0x124u, t124 + 0x30u);
                                if (rd32(sp0 - 0xd4u) > 0x5dcu)
                                {
                                    edx = t123 + 0x30u;
                                    loc_d4 = rd32(sp0 - 0xd4u);
                                    loc_11c_f = (double)rdf32(sp0 - 0x11cu);
                                    goto L_10185b60;
                                }
                                eax = rd32(sp0 - 0xd4u);
                                esi = esi + 0x48u;
                                loc_128 = t122 + 0x48u;
                                loc_120 = t123 + 0x30u;
                                loc_124 = t124 + 0x30u;
                                loc_dc = t126 + 0x48u;
    COW_AT(10185b3f)
                                wr32(sp0 - 0xd4u, eax + 1u);
                                loc_d4 = eax + 1u;
                                loc_c4 = rd32(sp0 - 0xc4u);
                                loc_11c_f = (double)rdf32(sp0 - 0x11cu);
L_10185b44: ;
    COW_AT(10185b44)
                                wr32(sp0 - 0xc4u, loc_c4 + 1u);
                                if ((int32_t)(loc_c4 + 1u) < (int16_t)rd16(rd32(sp0 - 0xccu) + 0xcu))
                                {
                                    eax = loc_c4 + 1u;
                                    edi = edi + 8u;
                                    loc_c4 = loc_c4 + 1u;
                                    goto L_10185544;
                                }
                                edx = (uint32_t)(int16_t)rd16(rd32(sp0 - 0xccu) + 0xcu);
L_10185b60: ;
    COW_AT(10185b60)
                                if (loc_d4 == 0u)
                                {
                                    loc_b8 = rd32(sp0 - 0xb8u);
                                    loc_c8 = rd32(sp0 - 0xc8u);
                                    loc_c0 = rd32(sp0 - 0xc0u);
                                    loc_b4 = rd32(sp0 - 0xb4u);
                                    loc_138 = rd32(sp0 - 0x138u);
                                    loc_bc = rd32(sp0 - 0xbcu);
                                    loc_d0 = rd32(sp0 - 0xd0u);
                                    loc_b0 = rd32(sp0 - 0xb0u);
                                }
                                else
                                {
                                    eax = loc_d4;
    COW_AT(10185b68)
                                    wr32(sp0 - 0x13cu, 0x18u);
                                    wr32(sp0 - 0x140u, COW_IMG(0x10639088u));
                                    wr32(sp0 - 0x144u, eax);
                                    wr32(sp0 - 0x148u, 4u);
                                    g->ebx = ebx;
                                    g->esp = sp0 - 0x138u;
                                    cow_thiscall(g, COW_IMG(0x1000cd00u), rd32(COW_IMG(0x1045666cu)), 4, 4u, eax, COW_IMG(0x10639088u), 0x18u);
                                    loc_b8 = rd32(sp0 - 0xb8u);
                                    loc_c8 = rd32(sp0 - 0xc8u);
                                    loc_c0 = rd32(sp0 - 0xc0u);
                                    loc_b4 = rd32(sp0 - 0xb4u);
                                    loc_138 = rd32(sp0 - 0x138u);
                                    loc_bc = rd32(sp0 - 0xbcu);
                                    loc_d0 = rd32(sp0 - 0xd0u);
                                    loc_b0 = rd32(sp0 - 0xb0u);
                                    loc_11c_f = (double)rdf32(sp0 - 0x11cu);
                                }
                            }
                        }
                    }
    COW_AT(10185b7d)
                    wr32(sp0 - 0xd0u, loc_d0 + 8u);
                    wr32(sp0 - 0xb0u, loc_b0 - 1u);
                    if (loc_b0 != 1u)
                    {
                        loc_d0 = loc_d0 + 8u;
                        loc_b0 = loc_b0 - 1u;
                        goto L_101853d8;
                    }
                    loc_d0 = loc_d0 + 8u;
                }
            }
            else
            {
                edx = eax + 4u;
                eax = rd32(eax) & 0x7ffu;
    COW_AT(101853bd)
                t48 = eax * 8u + edx;
                wr32(sp0 - 0xd0u, t48);
                loc_d0 = t48;
            }
    COW_AT(10185b9d)
            if (rd32(loc_d0) != 0u)
            {
                eax = rd32(loc_d0);
                goto L_101853a8;
            }
L_10185bab: ;
    COW_AT(10185bab)
            wr32(sp0 - 0xbcu, loc_bc + 1u);
            if ((int32_t)(loc_bc + 1u) <= (int32_t)loc_c8)
            {
                loc_bc = loc_bc + 1u;
                goto L_10185382;
            }
L_10185bc0: ;
    COW_AT(10185bc0)
            wr32(sp0 - 0xb4u, loc_b4 + 1u);
            if ((int32_t)(loc_b4 + 1u) <= (int32_t)loc_c0)
            {
                loc_b4 = loc_b4 + 1u;
                goto L_1018536b;
            }
    COW_AT(10185bdb)
            ebp = loc_138;
        }
    }
    COW_AT(10185bdc)
    wr32(sp0 - 0x138u, 1u);
    wr32(sp0 - 0x13cu, 0x89u);
    t134 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x140u, t134);
    g->esp = sp0 - 0x134u;
    cow_thiscall(g, rd32(rd32(t134) + 0xc8u), rd32(t134), 3, t134, 0x89u, 1u);
    COW_AT(10185bf5)
    wr32(sp0 - 0x138u, 0u);
    wr32(sp0 - 0x13cu, 0x1bu);
    t135 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x140u, t135);
    g->esp = sp0 - 0x134u;
    cow_thiscall(g, rd32(rd32(t135) + 0xc8u), rd32(t135), 3, t135, 0x1bu, 0u);
    COW_AT(10185c0b)
    wr32(sp0 - 0x138u, 0u);
    wr32(sp0 - 0x13cu, 0x1cu);
    t136 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x140u, t136);
    g->esp = sp0 - 0x134u;
    cow_thiscall(g, rd32(rd32(t136) + 0xc8u), rd32(t136), 3, t136, 0x1cu, 0u);
    COW_AT(10185c21)
    wr32(sp0 - 0x138u, 1u);
    wr32(sp0 - 0x13cu, 0x16u);
    t137 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x140u, t137);
    g->esp = sp0 - 0x134u;
    cow_thiscall(g, rd32(rd32(t137) + 0xc8u), rd32(t137), 3, t137, 0x16u, 1u);
    COW_AT(10185c37)
    wr32(sp0 - 0x138u, 1u);
    wr32(sp0 - 0x13cu, 0xeu);
    t138 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x140u, t138);
    g->eax = t138;
    t139 = rd32(t138);
    g->esp = sp0 - 0x134u;
    t140 = cow_thiscall(g, rd32(t139 + 0xc8u), t139, 3, t138, 0xeu, 1u);
    t141 = g->ecx;
    eax = t140;
    ecx = t141;
    COW_AT(10185c4d)
    if (rd8(rd32(sp0 - 0xacu) + 0x39598u) == 0u)
    {
        edx = rd32(sp0 - 0xacu);
        edi = rd32(sp0 - 0x134u);
        goto L_10185c85;
    }
    edi = rd32(sp0 - 0x134u);
    COW_AT(10185c5f)
    wr32(sp0 - 0x134u, sp0 - 0x40u);
    wr32(sp0 - 0x138u, 3u);
    t142 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x13cu, t142);
    g->esp = sp0 - 0x130u;
    cow_thiscall(g, rd32(rd32(t142) + 0x94u), rd32(t142), 3, t142, 3u, sp0 - 0x40u);
    COW_AT(10185c7a)
    g->ebx = rd32(sp0 - 0x12cu);
    g->esi = rd32(sp0 - 0x130u);
    g->edi = edi;
    g->ebp = ebp;
    return;
L_10185544: ;
    COW_AT(10185544)
    ecx = loc_dc;
    edx = loc_128;
    goto L_1018554c;
L_10185c85: ;
    COW_AT(10185c85)
    wr32(sp0 - 0x134u, rd32(COW_IMG(0x10621c00u)));
    g->esp = sp0 - 0x130u;
    cow_cdecl(g, COW_IMG(0x10177400u), 1, rd32(COW_IMG(0x10621c00u)));
    COW_AT(10185c90)
    loc_12c = rd32(sp0 - 0x12cu);
    loc_130 = rd32(sp0 - 0x130u);
L_10185c93: ;
    COW_AT(10185c93)
    g->ebx = loc_12c;
    g->esi = loc_130;
    g->edi = edi;
    g->ebp = ebp;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10184fe0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10185005u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x130u);
        in_ebx = rd32(sp0 - 0x12cu);
        g->esp = sp0 - 0x130u;
        (void)sp0;
        return 1;
    }
    case 0x10185022u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x130u);
        in_ebx = rd32(sp0 - 0x12cu);
        g->esp = sp0 - 0x130u;
        (void)sp0;
        return 1;
    }
    case 0x10185038u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x130u);
        in_ebx = rd32(sp0 - 0x12cu);
        g->esp = sp0 - 0x130u;
        (void)sp0;
        return 1;
    }
    case 0x10185070u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_84_f;
        double loc_88_f;
        double loc_8c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x130u);
        in_ebx = rd32(sp0 - 0x12cu);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_84_f = rdf32(sp0 - 0x84u);
        g->esp = sp0 - 0x130u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10185077u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_84_f;
        double loc_88_f;
        double loc_8c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x130u);
        in_ebx = rd32(sp0 - 0x12cu);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_84_f = rdf32(sp0 - 0x84u);
        g->esp = sp0 - 0x130u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018507au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_84_f;
        double loc_88_f;
        double loc_8c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x130u);
        in_ebx = rd32(sp0 - 0x12cu);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_84_f = rdf32(sp0 - 0x84u);
        g->esp = sp0 - 0x130u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018508eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x134u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101850a6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x134u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101850bcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x134u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101850d2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x134u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101850e8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x134u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101850feu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x134u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10185116u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x134u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018512eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x134u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10185144u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x134u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10185165u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x134u;
        g->ebx = arg1;
        wr32(sp0 - 0xacu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1018516fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x134u;
        g->ebx = arg1;
        wr32(sp0 - 0xacu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1018518bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x134u;
        g->ebx = arg1;
        wr32(sp0 - 0x138u, sp0 - 0x44u);
        (void)sp0;
        return 1;
    }
    case 0x10185192u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x134u;
        g->ebx = arg1;
        wr32(sp0 - 0x138u, sp0 - 0x44u);
        (void)sp0;
        return 1;
    }
    case 0x10185194u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x134u;
        g->ebx = arg1;
        wr32(sp0 - 0xacu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1018519fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x138u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101851a2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x134u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101851bau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x134u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101852a4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x134u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101852b3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_a4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0x134u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101852deu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x134u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101852f1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x134u;
        (void)sp0;
        return 1;
    }
    case 0x101852fau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x134u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10185300u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x134u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1018530cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0x134u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10185310u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0x134u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10185317u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0x134u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1018531du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0x134u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10185329u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_b8;
        uint32_t loc_c8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_b8 = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0x134u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1018532du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_b8;
        uint32_t loc_c8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_b8 = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0x134u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10185334u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_b8;
        uint32_t loc_c8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_b8 = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0x134u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10185338u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_b8;
        uint32_t loc_c8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_b8 = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0x134u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10185340u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_b8;
        uint32_t loc_c8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_b8 = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0x134u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10185342u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_b8;
        uint32_t loc_c8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_b8 = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0x134u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10185347u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_b8;
        uint32_t loc_c8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_b8 = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0x134u;
        (void)sp0;
        return 1;
    }
    case 0x1018534bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_b8;
        uint32_t loc_c8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_b8 = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0x134u;
        (void)sp0;
        return 1;
    }
    case 0x10185355u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_b8;
        uint32_t loc_c8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_b8 = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0x134u;
        (void)sp0;
        return 1;
    }
    case 0x10185357u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_b8;
        uint32_t loc_c8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_b8 = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0x134u;
        (void)sp0;
        return 1;
    }
    case 0x1018536au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_c0;
        uint32_t loc_c8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0x134u;
        (void)sp0;
        return 1;
    }
    case 0x1018536bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_11c_f;
        uint32_t loc_120;
        uint32_t loc_124;
        uint32_t loc_128;
        uint32_t loc_138;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        uint32_t loc_dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c_f = rdf32(sp0 - 0x11cu);
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0x138u;
        (void)sp0;
        return 1;
    }
    case 0x10185382u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_11c_f;
        uint32_t loc_120;
        uint32_t loc_124;
        uint32_t loc_128;
        uint32_t loc_138;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        uint32_t loc_dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c_f = rdf32(sp0 - 0x11cu);
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0x138u;
        (void)sp0;
        return 1;
    }
    case 0x101853a8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_11c_f;
        uint32_t loc_120;
        uint32_t loc_124;
        uint32_t loc_128;
        uint32_t loc_138;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        uint32_t loc_dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c_f = rdf32(sp0 - 0x11cu);
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0x138u;
        (void)sp0;
        return 1;
    }
    case 0x101853bdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_11c_f;
        uint32_t loc_120;
        uint32_t loc_124;
        uint32_t loc_128;
        uint32_t loc_138;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        uint32_t loc_dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c_f = rdf32(sp0 - 0x11cu);
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0x138u;
        (void)sp0;
        return 1;
    }
    case 0x101853c9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_11c_f;
        uint32_t loc_120;
        uint32_t loc_124;
        uint32_t loc_128;
        uint32_t loc_138;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        uint32_t loc_dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c_f = rdf32(sp0 - 0x11cu);
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0x138u;
        (void)sp0;
        return 1;
    }
    case 0x101853d1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_11c_f;
        uint32_t loc_120;
        uint32_t loc_124;
        uint32_t loc_128;
        uint32_t loc_138;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        uint32_t loc_dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c_f = rdf32(sp0 - 0x11cu);
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0x138u;
        (void)sp0;
        return 1;
    }
    case 0x101853d8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_11c_f;
        uint32_t loc_120;
        uint32_t loc_124;
        uint32_t loc_128;
        uint32_t loc_138;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        uint32_t loc_dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c_f = rdf32(sp0 - 0x11cu);
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0x138u;
        (void)sp0;
        return 1;
    }
    case 0x101853f8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_11c_f;
        uint32_t loc_120;
        uint32_t loc_124;
        uint32_t loc_128;
        uint32_t loc_138;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        uint32_t loc_dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c_f = rdf32(sp0 - 0x11cu);
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0x138u;
        (void)sp0;
        return 1;
    }
    case 0x10185405u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_11c_f;
        uint32_t loc_120;
        uint32_t loc_124;
        uint32_t loc_128;
        uint32_t loc_138;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        uint32_t loc_dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c_f = rdf32(sp0 - 0x11cu);
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0x138u;
        (void)sp0;
        return 1;
    }
    case 0x10185419u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_11c_f;
        uint32_t loc_120;
        uint32_t loc_124;
        uint32_t loc_128;
        uint32_t loc_138;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        uint32_t loc_dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c_f = rdf32(sp0 - 0x11cu);
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0x138u;
        (void)sp0;
        return 1;
    }
    case 0x10185424u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_11c_f;
        uint32_t loc_120;
        uint32_t loc_124;
        uint32_t loc_128;
        uint32_t loc_138;
        uint32_t loc_a8;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        uint32_t loc_dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c_f = rdf32(sp0 - 0x11cu);
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_a8 = rd32(sp0 - 0xa8u);
        g->esp = sp0 - 0x138u;
        (void)sp0;
        return 1;
    }
    case 0x1018543au:
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
        g->esp = sp0 - 0x138u;
        (void)sp0;
        return 1;
    }
    case 0x1018543cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_11c_f;
        uint32_t loc_120;
        uint32_t loc_124;
        uint32_t loc_128;
        uint32_t loc_138;
        uint32_t loc_a8;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        uint32_t loc_dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c_f = rdf32(sp0 - 0x11cu);
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_a8 = rd32(sp0 - 0xa8u);
        g->esp = sp0 - 0x138u;
        (void)sp0;
        return 1;
    }
    case 0x10185451u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_11c_f;
        uint32_t loc_120;
        uint32_t loc_124;
        uint32_t loc_128;
        uint32_t loc_138;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        uint32_t loc_dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c_f = rdf32(sp0 - 0x11cu);
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0x138u;
        (void)sp0;
        return 1;
    }
    case 0x10185475u:
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
        g->esp = sp0 - 0x138u;
        (void)sp0;
        return 1;
    }
    case 0x10185498u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_11c_f;
        uint32_t loc_124;
        uint32_t loc_128;
        uint32_t loc_c4;
        uint32_t loc_d8;
        uint32_t loc_dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        loc_11c_f = rdf32(sp0 - 0x11cu);
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        g->esp = sp0 - 0x138u;
        g->esi = COW_IMG(0x10639088u);
        wr32(sp0 - 0xd4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101854b7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_124;
        uint32_t loc_128;
        uint32_t loc_c4;
        uint32_t loc_d8;
        uint32_t loc_dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        g->esp = sp0 - 0x138u;
        g->esi = COW_IMG(0x10639088u);
        wr32(sp0 - 0xd4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101854d1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_124;
        uint32_t loc_128;
        uint32_t loc_c4;
        uint32_t loc_d8;
        uint32_t loc_dc;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x138u;
        g->esi = COW_IMG(0x10639088u);
        wr32(sp0 - 0xd4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101854e0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_11c;
        uint32_t loc_124;
        uint32_t loc_128;
        uint32_t loc_c4;
        uint32_t loc_d8;
        uint32_t loc_dc;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        loc_11c = rd32(sp0 - 0x11cu);
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x138u;
        g->esi = COW_IMG(0x10639088u);
        wr32(sp0 - 0xd4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101854fcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_124;
        uint32_t loc_128;
        uint32_t loc_c4;
        uint32_t loc_d8;
        uint32_t loc_dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        g->esp = sp0 - 0x138u;
        g->esi = COW_IMG(0x10639088u);
        wr32(sp0 - 0xd4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10185509u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_11c_f;
        uint32_t loc_124;
        uint32_t loc_128;
        uint32_t loc_c4;
        uint32_t loc_d8;
        uint32_t loc_dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        loc_11c_f = rdf32(sp0 - 0x11cu);
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        g->esp = sp0 - 0x138u;
        g->esi = COW_IMG(0x10639088u);
        wr32(sp0 - 0xd4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10185520u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_11c_f;
        uint32_t loc_124;
        uint32_t loc_128;
        uint32_t loc_d8;
        uint32_t loc_dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        loc_11c_f = rdf32(sp0 - 0x11cu);
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d8 = rd32(sp0 - 0xd8u);
        g->esp = sp0 - 0x138u;
        g->esi = COW_IMG(0x10639088u);
        wr32(sp0 - 0xd4u, 0u);
        wr32(sp0 - 0xc4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10185544u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_11c_f;
        uint32_t loc_120;
        uint32_t loc_124;
        uint32_t loc_128;
        uint32_t loc_c4;
        uint32_t loc_d4;
        uint32_t loc_d8;
        uint32_t loc_dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c_f = rdf32(sp0 - 0x11cu);
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_c4 = rd32(sp0 - 0xc4u);
        g->esp = sp0 - 0x138u;
        (void)sp0;
        return 1;
    }
    case 0x1018554cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_11c_f;
        uint32_t loc_120;
        uint32_t loc_124;
        uint32_t loc_128;
        uint32_t loc_c4;
        uint32_t loc_d4;
        uint32_t loc_d8;
        uint32_t loc_dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c_f = rdf32(sp0 - 0x11cu);
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_c4 = rd32(sp0 - 0xc4u);
        g->esp = sp0 - 0x138u;
        (void)sp0;
        return 1;
    }
    case 0x10185590u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_11c_f;
        uint32_t loc_120;
        uint32_t loc_124;
        uint32_t loc_128;
        uint32_t loc_c4;
        uint32_t loc_d4;
        uint32_t loc_d8;
        uint32_t loc_dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c_f = rdf32(sp0 - 0x11cu);
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_c4 = rd32(sp0 - 0xc4u);
        g->esp = sp0 - 0x138u;
        (void)sp0;
        return 1;
    }
    case 0x1018560au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_11c_f;
        uint32_t loc_120;
        uint32_t loc_124;
        uint32_t loc_128;
        uint32_t loc_c4;
        uint32_t loc_d4;
        uint32_t loc_d8;
        uint32_t loc_dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c_f = rdf32(sp0 - 0x11cu);
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_c4 = rd32(sp0 - 0xc4u);
        g->esp = sp0 - 0x138u;
        (void)sp0;
        return 1;
    }
    case 0x10185675u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_11c_f;
        uint32_t loc_120;
        uint32_t loc_124;
        uint32_t loc_128;
        uint32_t loc_c4;
        uint32_t loc_d4;
        uint32_t loc_d8;
        uint32_t loc_dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c_f = rdf32(sp0 - 0x11cu);
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_c4 = rd32(sp0 - 0xc4u);
        g->esp = sp0 - 0x138u;
        (void)sp0;
        return 1;
    }
    case 0x101856dcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_11c_f;
        uint32_t loc_120;
        uint32_t loc_124;
        uint32_t loc_128;
        uint32_t loc_c4;
        uint32_t loc_d4;
        uint32_t loc_d8;
        uint32_t loc_dc;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c_f = rdf32(sp0 - 0x11cu);
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_c4 = rd32(sp0 - 0xc4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x138u;
        (void)sp0;
        return 1;
    }
    case 0x1018575au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_11c_f;
        uint32_t loc_120;
        uint32_t loc_124;
        uint32_t loc_128;
        uint32_t loc_c4;
        uint32_t loc_d4;
        uint32_t loc_d8;
        uint32_t loc_dc;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c_f = rdf32(sp0 - 0x11cu);
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_c4 = rd32(sp0 - 0xc4u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x138u;
        (void)sp0;
        return 1;
    }
    case 0x101857bfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_11c_f;
        uint32_t loc_120;
        uint32_t loc_124;
        uint32_t loc_128;
        uint32_t loc_c4;
        uint32_t loc_d4;
        uint32_t loc_d8;
        uint32_t loc_dc;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c_f = rdf32(sp0 - 0x11cu);
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_c4 = rd32(sp0 - 0xc4u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x138u;
        (void)sp0;
        return 1;
    }
    case 0x10185820u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_11c_f;
        uint32_t loc_120;
        uint32_t loc_124;
        uint32_t loc_128;
        uint32_t loc_c4;
        uint32_t loc_d4;
        uint32_t loc_d8;
        uint32_t loc_dc;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c_f = rdf32(sp0 - 0x11cu);
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_c4 = rd32(sp0 - 0xc4u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x138u;
        (void)sp0;
        return 1;
    }
    case 0x101858a2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_11c_f;
        uint32_t loc_120;
        uint32_t loc_124;
        uint32_t loc_128;
        uint32_t loc_c4;
        uint32_t loc_d4;
        uint32_t loc_d8;
        uint32_t loc_dc;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c_f = rdf32(sp0 - 0x11cu);
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_c4 = rd32(sp0 - 0xc4u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x138u;
        (void)sp0;
        return 1;
    }
    case 0x1018590bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_11c_f;
        uint32_t loc_120;
        uint32_t loc_124;
        uint32_t loc_128;
        uint32_t loc_c4;
        uint32_t loc_d4;
        uint32_t loc_d8;
        uint32_t loc_dc;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c_f = rdf32(sp0 - 0x11cu);
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_c4 = rd32(sp0 - 0xc4u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x138u;
        (void)sp0;
        return 1;
    }
    case 0x10185970u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_11c_f;
        uint32_t loc_120;
        uint32_t loc_124;
        uint32_t loc_128;
        uint32_t loc_c4;
        uint32_t loc_d4;
        uint32_t loc_d8;
        uint32_t loc_dc;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c_f = rdf32(sp0 - 0x11cu);
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_c4 = rd32(sp0 - 0xc4u);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp0 - 0x138u;
        (void)sp0;
        return 1;
    }
    case 0x1018597du:
    {
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x138u;
        (void)sp0;
        return 1;
    }
    case 0x1018598fu:
    {
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x138u;
        (void)sp0;
        return 1;
    }
    case 0x101859a5u:
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
        g->esp = sp0 - 0x138u;
        (void)sp0;
        return 1;
    }
    case 0x101859b2u:
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
        g->esp = sp0 - 0x138u;
        (void)sp0;
        return 1;
    }
    case 0x101859b9u:
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
        g->esp = sp0 - 0x138u;
        (void)sp0;
        return 1;
    }
    case 0x101859c1u:
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
        g->esp = sp0 - 0x138u;
        (void)sp0;
        return 1;
    }
    case 0x101859cau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_d8 = rd32(sp0 - 0xd8u);
        g->esp = sp0 - 0x138u;
        (void)sp0;
        return 1;
    }
    case 0x101859ceu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_d8 = rd32(sp0 - 0xd8u);
        g->esp = sp0 - 0x138u;
        (void)sp0;
        return 1;
    }
    case 0x101859d1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_d8 = rd32(sp0 - 0xd8u);
        g->esp = sp0 - 0x138u;
        (void)sp0;
        return 1;
    }
    case 0x101859dau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_d8 = rd32(sp0 - 0xd8u);
        g->esp = sp0 - 0x138u;
        (void)sp0;
        return 1;
    }
    case 0x10185b3fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_120;
        uint32_t loc_124;
        uint32_t loc_128;
        uint32_t loc_d8;
        uint32_t loc_dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        loc_120 = rd32(sp0 - 0x120u);
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d8 = rd32(sp0 - 0xd8u);
        g->esp = sp0 - 0x138u;
        (void)sp0;
        return 1;
    }
    case 0x10185b44u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_11c_f;
        uint32_t loc_120;
        uint32_t loc_124;
        uint32_t loc_128;
        uint32_t loc_c4;
        uint32_t loc_d4;
        uint32_t loc_d8;
        uint32_t loc_dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c_f = rdf32(sp0 - 0x11cu);
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_c4 = rd32(sp0 - 0xc4u);
        g->esp = sp0 - 0x138u;
        (void)sp0;
        return 1;
    }
    case 0x10185b60u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_11c_f;
        uint32_t loc_120;
        uint32_t loc_124;
        uint32_t loc_128;
        uint32_t loc_c4;
        uint32_t loc_d4;
        uint32_t loc_d8;
        uint32_t loc_dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c_f = rdf32(sp0 - 0x11cu);
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_c4 = rd32(sp0 - 0xc4u);
        g->esp = sp0 - 0x138u;
        (void)sp0;
        return 1;
    }
    case 0x10185b68u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_11c_f;
        uint32_t loc_120;
        uint32_t loc_124;
        uint32_t loc_128;
        uint32_t loc_c4;
        uint32_t loc_d4;
        uint32_t loc_d8;
        uint32_t loc_dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c_f = rdf32(sp0 - 0x11cu);
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_c4 = rd32(sp0 - 0xc4u);
        g->esp = sp0 - 0x138u;
        (void)sp0;
        return 1;
    }
    case 0x10185b7du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_11c_f;
        uint32_t loc_120;
        uint32_t loc_124;
        uint32_t loc_128;
        uint32_t loc_138;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        uint32_t loc_dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c_f = rdf32(sp0 - 0x11cu);
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0x138u;
        (void)sp0;
        return 1;
    }
    case 0x10185b9du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_11c_f;
        uint32_t loc_120;
        uint32_t loc_124;
        uint32_t loc_128;
        uint32_t loc_138;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        uint32_t loc_dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c_f = rdf32(sp0 - 0x11cu);
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0x138u;
        (void)sp0;
        return 1;
    }
    case 0x10185babu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_11c_f;
        uint32_t loc_120;
        uint32_t loc_124;
        uint32_t loc_128;
        uint32_t loc_138;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        uint32_t loc_dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c_f = rdf32(sp0 - 0x11cu);
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0x138u;
        (void)sp0;
        return 1;
    }
    case 0x10185bc0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_11c_f;
        uint32_t loc_120;
        uint32_t loc_124;
        uint32_t loc_128;
        uint32_t loc_138;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        uint32_t loc_dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c_f = rdf32(sp0 - 0x11cu);
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0x138u;
        (void)sp0;
        return 1;
    }
    case 0x10185bdbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_11c_f;
        uint32_t loc_120;
        uint32_t loc_124;
        uint32_t loc_128;
        uint32_t loc_138;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        uint32_t loc_dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c_f = rdf32(sp0 - 0x11cu);
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0x138u;
        (void)sp0;
        return 1;
    }
    case 0x10185bdcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_11c_f;
        uint32_t loc_120;
        uint32_t loc_124;
        uint32_t loc_128;
        uint32_t loc_138;
        uint32_t loc_a4;
        uint32_t loc_b0;
        uint32_t loc_b4;
        uint32_t loc_b8;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_d8;
        uint32_t loc_dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        loc_120 = rd32(sp0 - 0x120u);
        loc_11c_f = rdf32(sp0 - 0x11cu);
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_b4 = rd32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0x134u;
        (void)sp0;
        return 1;
    }
    case 0x10185bf5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x134u;
        (void)sp0;
        return 1;
    }
    case 0x10185c0bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x134u;
        (void)sp0;
        return 1;
    }
    case 0x10185c21u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x134u;
        (void)sp0;
        return 1;
    }
    case 0x10185c37u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x134u;
        (void)sp0;
        return 1;
    }
    case 0x10185c4du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x134u;
        (void)sp0;
        return 1;
    }
    case 0x10185c5fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x130u;
        (void)sp0;
        return 1;
    }
    case 0x10185c7au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x130u;
        wr32(sp0 - 0x134u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10185c85u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_138;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_138 = rd32(sp0 - 0x138u);
        g->esp = sp0 - 0x130u;
        (void)sp0;
        return 1;
    }
    case 0x10185c90u:
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
        g->esp = sp0 - 0x134u;
        (void)sp0;
        return 1;
    }
    case 0x10185c93u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_12c;
        uint32_t loc_130;
        double loc_84_f;
        double loc_88_f;
        double loc_8c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_130 = rd32(sp0 - 0x130u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_84_f = rdf32(sp0 - 0x84u);
        g->esp = sp0 - 0x130u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10184fe0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10184fe0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
