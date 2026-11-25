/* f_0x100d4bc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100d4bc0(Guest* g)
{
    double d128;
    double d132;
    double d133;
    double d136;
    double d138;
    double d14;
    double d29;
    double d30;
    double d33;
    double d59;
    double d60;
    double d66;
    double d67;
    double d74;
    double d75;
    double d80;
    double d81;
    double d85;
    double d86;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_64;
    uint32_t loc_68;
    uint32_t loc_70;
    uint32_t loc_74;
    double loc_74_f;
    uint32_t loc_78;
    uint32_t loc_80;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t101;
    uint32_t t102;
    uint32_t t103;
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
    uint32_t t114;
    uint32_t t115;
    uint32_t t116;
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
    uint32_t t129;
    uint32_t t13;
    uint32_t t130;
    uint32_t t131;
    uint32_t t134;
    uint32_t t135;
    uint32_t t137;
    uint32_t t139;
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
    uint32_t t151;
    uint32_t t152;
    uint32_t t153;
    uint32_t t154;
    uint32_t t155;
    uint32_t t156;
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
    uint32_t t3;
    uint32_t t31;
    uint32_t t32;
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
    uint32_t t58;
    uint32_t t6;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t68;
    uint32_t t69;
    uint32_t t7;
    uint32_t t70;
    uint32_t t71;
    uint32_t t72;
    uint32_t t73;
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
    uint32_t t82;
    uint32_t t83;
    uint32_t t84;
    uint32_t t87;
    uint32_t t88;
    uint32_t t89;
    uint32_t t9;
    uint32_t t90;
    uint32_t t91;
    uint32_t t92;
    uint32_t t93;
    uint32_t t94;
    uint32_t t95;
    uint32_t t96;
    uint32_t t97;
    uint32_t t98;
    uint32_t t99;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 168u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100d4bceu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x80u); g->esi = rd32(sp0 - 0x80u); goto E_100d4bce;
    case 0x100d4bd6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x80u); g->esi = rd32(sp0 - 0x80u); goto E_100d4bd6;
    case 0x100d4be1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x80u); loc_68 = rd32(sp0 - 0x68u); g->esi = rd32(sp0 - 0x80u); goto E_100d4be1;
    case 0x100d4beeu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x80u); loc_68 = rd32(sp0 - 0x68u); g->esi = rd32(sp0 - 0x80u); goto E_100d4bee;
    case 0x100d4bf3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100d4bf3;
    case 0x100d4c01u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100d4c01;
    case 0x100d4c0cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100d4c0c;
    case 0x100d4c1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100d4c1b;
    case 0x100d4c2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_74_f = rdf32(sp0 - 0x74u); goto E_100d4c2f;
    case 0x100d4c39u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_74_f = rdf32(sp0 - 0x74u); goto E_100d4c39;
    case 0x100d4c4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_74_f = rdf32(sp0 - 0x74u); goto E_100d4c4f;
    case 0x100d4c60u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100d4c60;
    case 0x100d4c71u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100d4c71;
    case 0x100d4c82u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100d4c82;
    case 0x100d4c93u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_74_f = rdf32(sp0 - 0x74u); goto E_100d4c93;
    case 0x100d4c9du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100d4c9d;
    case 0x100d4caau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100d4caa;
    case 0x100d4cb8u: eax = g->eax; self = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_edi = g->edi; goto E_100d4cb8;
    case 0x100d4cc0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100d4cc0;
    case 0x100d4ccbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100d4ccb;
    case 0x100d4ccfu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100d4ccf;
    case 0x100d4cd9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100d4cd9;
    case 0x100d4cf4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100d4cf4;
    case 0x100d4cfbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100d4cfb;
    case 0x100d4cfdu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100d4cfd;
    case 0x100d4d01u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100d4d01;
    case 0x100d4d03u: eax = g->eax; self = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_edi = g->edi; goto E_100d4d03;
    case 0x100d4d08u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100d4d08;
    case 0x100d4d1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100d4d1f;
    case 0x100d4d2cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d4d2c;
    case 0x100d4d34u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d4d34;
    case 0x100d4d43u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d4d43;
    case 0x100d4d48u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d4d48;
    case 0x100d4d4du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d4d4d;
    case 0x100d4d50u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d4d50;
    case 0x100d4d60u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d4d60;
    case 0x100d4d8fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_74 = rd32(sp0 - 0x74u); goto E_100d4d8f;
    case 0x100d4d99u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d4d99;
    case 0x100d4d9eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d4d9e;
    case 0x100d4daau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_74 = rd32(sp0 - 0x74u); goto E_100d4daa;
    case 0x100d4dc0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d4dc0;
    case 0x100d4dc7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d4dc7;
    case 0x100d4dceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d4dce;
    case 0x100d4dd5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d4dd5;
    case 0x100d4ddcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d4ddc;
    case 0x100d4de3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d4de3;
    case 0x100d4dedu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d4ded;
    case 0x100d4df6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_70 = rd32(sp0 - 0x70u); goto E_100d4df6;
    case 0x100d4e0cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_78 = rd32(sp0 - 0x78u); loc_70 = rd32(sp0 - 0x70u); goto E_100d4e0c;
    case 0x100d4e1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_78 = rd32(sp0 - 0x78u); loc_70 = rd32(sp0 - 0x70u); goto E_100d4e1c;
    case 0x100d4e29u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100d4e29;
    case 0x100d4e37u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_78 = rd32(sp0 - 0x78u); goto E_100d4e37;
    case 0x100d4e3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_78 = rd32(sp0 - 0x78u); goto E_100d4e3b;
    case 0x100d4e59u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_78 = rd32(sp0 - 0x78u); loc_70 = rd32(sp0 - 0x70u); goto E_100d4e59;
    case 0x100d4e61u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_78 = rd32(sp0 - 0x78u); loc_70 = rd32(sp0 - 0x70u); goto E_100d4e61;
    case 0x100d4e6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_78 = rd32(sp0 - 0x78u); loc_70 = rd32(sp0 - 0x70u); goto E_100d4e6b;
    case 0x100d4e74u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_78 = rd32(sp0 - 0x78u); loc_70 = rd32(sp0 - 0x70u); goto E_100d4e74;
    case 0x100d4e84u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_78 = rd32(sp0 - 0x78u); loc_70 = rd32(sp0 - 0x70u); goto E_100d4e84;
    case 0x100d4e8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_70 = rd32(sp0 - 0x70u); goto E_100d4e8c;
    case 0x100d4e99u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_70 = rd32(sp0 - 0x70u); goto E_100d4e99;
    case 0x100d4ea7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_70 = rd32(sp0 - 0x70u); goto E_100d4ea7;
    case 0x100d4ebcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_70 = rd32(sp0 - 0x70u); goto E_100d4ebc;
    case 0x100d4ecfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_70 = rd32(sp0 - 0x70u); goto E_100d4ecf;
    case 0x100d4ee2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100d4ee2;
    case 0x100d4eefu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d4eef;
    case 0x100d4ef2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_70 = rd32(sp0 - 0x70u); goto E_100d4ef2;
    case 0x100d4f05u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_70 = rd32(sp0 - 0x70u); goto E_100d4f05;
    case 0x100d4f18u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_70 = rd32(sp0 - 0x70u); goto E_100d4f18;
    case 0x100d4f2bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100d4f2b;
    case 0x100d4f38u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d4f38;
    case 0x100d4f3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_70 = rd32(sp0 - 0x70u); goto E_100d4f3b;
    case 0x100d4f48u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_70 = rd32(sp0 - 0x70u); goto E_100d4f48;
    case 0x100d4f5bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_70 = rd32(sp0 - 0x70u); goto E_100d4f5b;
    case 0x100d4f6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_70 = rd32(sp0 - 0x70u); goto E_100d4f6e;
    case 0x100d4f81u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100d4f81;
    case 0x100d4f8eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d4f8e;
    case 0x100d4f91u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_70 = rd32(sp0 - 0x70u); goto E_100d4f91;
    case 0x100d4fa4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_70 = rd32(sp0 - 0x70u); goto E_100d4fa4;
    case 0x100d4fb7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_70 = rd32(sp0 - 0x70u); goto E_100d4fb7;
    case 0x100d4fcau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100d4fca;
    case 0x100d4fd7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d4fd7;
    case 0x100d4fdau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_70 = rd32(sp0 - 0x70u); goto E_100d4fda;
    case 0x100d4fe7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_70 = rd32(sp0 - 0x70u); goto E_100d4fe7;
    case 0x100d5005u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_70 = rd32(sp0 - 0x70u); goto E_100d5005;
    case 0x100d500du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_70 = rd32(sp0 - 0x70u); goto E_100d500d;
    case 0x100d502cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d502c;
    case 0x100d5031u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d5031;
    case 0x100d503bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d503b;
    case 0x100d5061u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_64 = rd32(sp0 - 0x64u); goto E_100d5061;
    case 0x100d506bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_64 = rd32(sp0 - 0x64u); goto E_100d506b;
    case 0x100d5077u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_64 = rd32(sp0 - 0x64u); goto E_100d5077;
    case 0x100d5086u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d5086;
    case 0x100d5090u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d5090;
    case 0x100d5098u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d5098;
    case 0x100d50a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d50a9;
    case 0x100d50b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d50b3;
    case 0x100d50c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d50c2;
    case 0x100d50d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d50d7;
    case 0x100d50dfu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d50df;
    case 0x100d50e3u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d50e3;
    case 0x100d50e7u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d50e7;
    case 0x100d5110u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d5110;
    case 0x100d5128u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d5128;
    case 0x100d512bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d512b;
    case 0x100d5143u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100d5143;
    case 0x100d5145u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_64 = rd32(sp0 - 0x64u); goto E_100d5145;
    case 0x100d5149u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_64 = rd32(sp0 - 0x64u); goto E_100d5149;
    case 0x100d514fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_64 = rd32(sp0 - 0x64u); goto E_100d514f;
    case 0x100d5158u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_64 = rd32(sp0 - 0x64u); goto E_100d5158;
    case 0x100d515fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_64 = rd32(sp0 - 0x64u); goto E_100d515f;
    case 0x100d516du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_64 = rd32(sp0 - 0x64u); goto E_100d516d;
    case 0x100d5175u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_64 = rd32(sp0 - 0x64u); goto E_100d5175;
    case 0x100d517du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_64 = rd32(sp0 - 0x64u); goto E_100d517d;
    case 0x100d5183u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_64 = rd32(sp0 - 0x64u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100d5183;
    case 0x100d5188u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d5188;
    case 0x100d519fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_64 = rd32(sp0 - 0x64u); goto E_100d519f;
    case 0x100d51abu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_64 = rd32(sp0 - 0x64u); goto E_100d51ab;
    case 0x100d51b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_64 = rd32(sp0 - 0x64u); goto E_100d51b8;
    case 0x100d51c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_64 = rd32(sp0 - 0x64u); goto E_100d51c5;
    case 0x100d51cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d51cf;
    case 0x100d51d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d51d8;
    case 0x100d51ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d51dd;
    case 0x100d51e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d51e6;
    case 0x100d51f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d51f0;
    case 0x100d5206u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d5206;
    case 0x100d520cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d520c;
    case 0x100d5211u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d5211;
    case 0x100d5232u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d5232;
    case 0x100d5238u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d5238;
    case 0x100d523du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d523d;
    case 0x100d5243u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d5243;
    case 0x100d5251u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d5251;
    case 0x100d525au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d525a;
    case 0x100d5264u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100d5264;
    case 0x100d5272u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100d5272;
    case 0x100d527fu: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100d527f;
    case 0x100d5287u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100d5287;
    case 0x100d5289u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100d5289;
    case 0x100d5291u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100d5291;
    case 0x100d52a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100d52a7;
    case 0x100d52abu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100d52ab;
    case 0x100d52adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100d52ad;
    case 0x100d52bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100d52bd;
    case 0x100d52c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100d52c1;
    case 0x100d52c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100d52c3;
    case 0x100d52d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100d52d3;
    case 0x100d52d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100d52d7;
    case 0x100d52d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100d52d9;
    case 0x100d52e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d52e9;
    case 0x100d52edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d52ed;
    case 0x100d52efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d52ef;
    case 0x100d52fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d52fa;
    case 0x100d5303u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d5303;
    case 0x100d530du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d530d;
    case 0x100d5311u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d5311;
    case 0x100d5313u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d5313;
    case 0x100d531cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d531c;
    case 0x100d5330u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d5330;
    case 0x100d5343u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d5343;
    case 0x100d5351u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d5351;
    case 0x100d535du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d535d;
    case 0x100d5361u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d5361;
    case 0x100d5365u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d5365;
    case 0x100d536du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d536d;
    case 0x100d5375u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d5375;
    case 0x100d537fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d537f;
    case 0x100d5385u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d5385;
    case 0x100d5389u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d5389;
    case 0x100d538fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d538f;
    case 0x100d539au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d539a;
    case 0x100d53b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d53b2;
    case 0x100d53bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_70 = rd32(sp0 - 0x70u); loc_64 = rd32(sp0 - 0x64u); goto E_100d53bc;
    case 0x100d53e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_80 = rd32(sp0 - 0x80u); loc_68 = rd32(sp0 - 0x68u); goto E_100d53e7;
    default: break;
    }
#endif

    COW_AT(100d4bc0)
    wr32(sp0 - 0x80u, in_esi);
    g->eax = rd32(self);
    g->edx = in_edx;
    t1 = rd32(self);
    g->esp = sp0 - 0x80u;
    t2 = cow_thiscall(g, rd32(t1 + 0x260u), self, 0);
    t3 = g->ecx;
    t4 = g->edx;
    eax = t2;
    ecx = t3;
    edx = t4;
    COW_AT(100d4bce)
    if ((uint8_t)eax != 0u)
    {
        ebx = in_ebx;
        ebp = in_ebp;
        edi = in_edi;
        loc_80 = in_esi;
    }
    else
    {
    COW_AT(100d4bd6)
        t5 = rd32(self + 0x70u);
        wr32(sp0 - 0x68u, t5);
        if (rd32(self + 0x70u) == 0u)
        {
            eax = t5;
            loc_68 = t5;
            goto L_100d4bee;
        }
        eax = t5;
        loc_68 = t5;
    COW_AT(100d4be1)
        t6 = rd8(eax + 0x128u);
        if (!(t6 & 1u))
        {
            ebx = in_ebx;
            ebp = in_ebp;
            edi = in_edi;
            loc_80 = in_esi;
            goto L_100d53e7;
        }
L_100d4bee: ;
    COW_AT(100d4bee)
        g->eax = eax;
        g->esp = sp0 - 0x80u;
        t7 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
        eax = t7;
    COW_AT(100d4bf3)
        wr32(sp0 - 0x84u, eax + 0x44u);
        g->eax = eax + 0x44u;
        g->edx = rd32(self);
        t8 = rd32(self);
        g->esp = sp0 - 0x84u;
        t9 = cow_thiscall(g, rd32(t8 + 0x1bcu), self, 0);
        t10 = g->ecx;
        t11 = g->edx;
        eax = t9;
        ecx = t10;
        edx = t11;
    COW_AT(100d4c01)
        wr32(sp0 - 0x88u, eax);
        wr32(sp0 - 0x8cu, sp0 - 0x10u);
        g->eax = sp0 - 0x10u;
        g->esp = sp0 - 0x80u;
        t12 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x10u, eax, rd32(sp0 - 0x84u));
        eax = t12;
    COW_AT(100d4c0c)
        wr32(sp0 - 0x90u, sp0 - 0x10u);
        wr32(sp0 - 0x94u, sp0 - 0x10u);
        g->eax = eax;
        g->esp = sp0 - 0x8cu;
        t13 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x10u, sp0 - 0x10u);
        d14 = cow_take_float(g);
        eax = t13;
        x0 = d14;
    COW_AT(100d4c1b)
        wrf32(sp0 - 0x74u, (float)(double)(float)x0);
        if (!(x0 < (double)rdf32(COW_IMG(0x1032a3d8u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a3d8u)), 0u);
            loc_74_f = (double)(float)x0;
        }
        else
        {
            loc_74_f = (double)(float)x0;
    COW_AT(100d4c2f)
            t15 = rd16(self + 0xb2u);
            if ((uint16_t)t15 != 0u)
            {
    COW_AT(100d4c39)
                t16 = (rd32(self + 0x840u) & 0xffefffffu) | 0x200000u;
                wr32(self + 0x840u, t16);
                loc_74_f = (double)rdf32(sp0 - 0x74u);
            }
    COW_AT(100d4c4f)
            wr32(sp0 - 0x84u, sp0 - 0x50u);
            wr32(sp0 - 0x88u, 9u);
            g->esp = sp0 - 0x80u;
            cow_thiscall(g, rd32(rd32(self) + 0x1c8u), self, 2, 9u, sp0 - 0x50u);
    COW_AT(100d4c60)
            wr32(sp0 - 0x84u, sp0 - 0x40u);
            wr32(sp0 - 0x88u, 8u);
            g->esp = sp0 - 0x80u;
            cow_thiscall(g, rd32(rd32(self) + 0x1c8u), self, 2, 8u, sp0 - 0x40u);
    COW_AT(100d4c71)
            wr32(sp0 - 0x84u, sp0 - 0x30u);
            wr32(sp0 - 0x88u, 0xbu);
            g->esp = sp0 - 0x80u;
            cow_thiscall(g, rd32(rd32(self) + 0x1c8u), self, 2, 0xbu, sp0 - 0x30u);
    COW_AT(100d4c82)
            wr32(sp0 - 0x84u, sp0 - 0x20u);
            wr32(sp0 - 0x88u, 0xau);
            g->eax = sp0 - 0x20u;
            g->esp = sp0 - 0x80u;
            t17 = cow_thiscall(g, rd32(rd32(self) + 0x1c8u), self, 2, 0xau, sp0 - 0x20u);
            eax = t17;
            loc_74_f = (double)rdf32(sp0 - 0x74u);
        }
    COW_AT(100d4c93)
        g->eax = eax;
        g->edx = rd32(self);
        t18 = rd32(self);
        g->esp = sp0 - 0x80u;
        t19 = cow_thiscall(g, rd32(t18 + 0x1bcu), self, 0);
        t20 = g->ecx;
        t21 = g->edx;
        eax = t19;
        ecx = t20;
        edx = t21;
    COW_AT(100d4c9d)
        wr32(sp0 - 0x84u, eax);
        wr32(sp0 - 0x88u, self + 0x64cu);
        g->edx = edx;
        g->esp = sp0 - 0x80u;
        cow_cdecl(g, COW_IMG(0x10026eb0u), 2, self + 0x64cu, eax);
        t22 = g->edx;
        edx = t22;
    COW_AT(100d4caa)
        if (rd32(COW_IMG(0x10456a70u)) == 0u)
        {
            eax = rd32(COW_IMG(0x10456a70u));
            goto L_100d4d03;
        }
        eax = rd32(COW_IMG(0x10456a70u));
    COW_AT(100d4cb8)
        g->eax = eax;
        g->edx = rd32(self);
        t23 = rd32(self);
        g->esp = sp0 - 0x80u;
        t24 = cow_thiscall(g, rd32(t23 + 0x218u), self, 0);
        t25 = g->edx;
        eax = t24;
        edx = t25;
    COW_AT(100d4cc0)
        if (eax != 9u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x878u);
            goto L_100d4cfd;
        }
        eax = (eax & 0xffffff00u) | rd8(self + 0x878u);
    COW_AT(100d4ccb)
        if ((uint8_t)eax == 3u) goto L_100d4d08;
    COW_AT(100d4ccf)
        g->eax = rd32(self);
        g->edx = edx;
        t26 = rd32(self);
        g->esp = sp0 - 0x80u;
        t27 = cow_thiscall(g, rd32(t26 + 0x220u), self, 0);
        t28 = g->edx;
        d29 = cow_take_float(g);
        eax = t27;
        edx = t28;
        x0 = d29;
    COW_AT(100d4cd9)
        wrf32(self + 0x650u, (float)x0);
        d30 = (double)rdf32(sp0 - 0x74u);
        if (!(d30 < (double)rdf32(COW_IMG(0x1032a3d8u))))
        {
            ebx = in_ebx;
            ebp = in_ebp;
            edi = in_edi;
            loc_80 = rd32(sp0 - 0x80u);
            goto L_100d53e7;
        }
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d30, (double)rdf32(COW_IMG(0x1032a3d8u)), 0u);
    COW_AT(100d4cf4)
        g->esp = sp0 - 0x80u;
        t31 = cow_call_regs(g, COW_IMG(0x100d64d0u), eax, self, edx, 1, 0);
        eax = t31;
    COW_AT(100d4cfb)
L_100d4d08: ;
    COW_AT(100d4d08)
        d33 = (double)rdf32(sp0 - 0x74u);
        if ((cow_fsw(g, d33, (double)rdf32(COW_IMG(0x1032a3d8u)), 0u) & 0x100u) == 0u)
        {
            ebx = in_ebx;
            ebp = in_ebp;
            edi = in_edi;
            loc_80 = rd32(sp0 - 0x80u);
        }
        else
        {
            eax = cow_fsw(g, d33, (double)rdf32(COW_IMG(0x1032a3d8u)), 0u) & 0x100u;
    COW_AT(100d4d1f)
            wr32(sp0 - 0x84u, in_ebx);
            wr32(sp0 - 0x88u, in_ebp);
            wr32(sp0 - 0x8cu, in_edi);
            g->eax = eax;
            g->edx = rd32(self);
            t34 = rd32(self);
            g->esp = sp0 - 0x8cu;
            t35 = cow_thiscall(g, rd32(t34 + 0x218u), self, 0);
            t36 = g->edx;
            eax = t35;
            edx = t36;
    COW_AT(100d4d2c)
            if (eax != 0u)
            {
    COW_AT(100d4d34)
                if ((int8_t)rd8(self + 0x879u) > 0)
                {
                    edi = (uint32_t)(int8_t)rd8(self + 0x879u);
    COW_AT(100d4d43)
                    if ((int32_t)edi <= 9)
                    {
    COW_AT(100d4d4d)
                        edi = edi + 0x30u;
                    }
                    else
                    {
    COW_AT(100d4d48)
                        edi = edi + 0x57u;
                    }
    COW_AT(100d4d50)
                    g->eax = rd32(self);
                    t37 = rd32(self);
                    t38 = rd8(self + 0x87au);
                    g->esp = sp0 - 0x8cu;
                    t39 = cow_thiscall(g, rd32(t37 + 0x218u), self, 0);
                    eax = t39;
                    ebx = (in_ebx & 0xffffff00u) | t38;
    COW_AT(100d4d60)
                    t40 = eax * 0x100u + 0x3000u;
                    t41 = t40 | ((uint32_t)(int8_t)ebx + 0x31u) << 0x18u | edi << 0x10u | 0x30u;
                    wr32(sp0 - 0x74u, t41);
                    if (rd8(rd32(COW_IMG(0x1065cb04u)) + 0x1cfu) == 0u)
                    {
                        eax = (t40 & 0xffffff00u) | rd8(rd32(COW_IMG(0x1065cb04u)) + 0x1cfu);
                        edx = rd32(COW_IMG(0x1065cb04u));
                        ebp = t41;
                        loc_74 = t41;
                    }
                    else
                    {
                        edx = rd32(COW_IMG(0x1065cb04u));
                        ebp = t41;
                        loc_74 = t41;
    COW_AT(100d4d8f)
                        g->eax = rd32(self);
                        g->edx = edx;
                        t42 = rd32(self);
                        g->esp = sp0 - 0x8cu;
                        t43 = cow_thiscall(g, rd32(t42 + 0x218u), self, 0);
                        t44 = g->edx;
                        eax = t43;
                        edx = t44;
    COW_AT(100d4d99)
                        if (eax != 3u)
                        {
                            loc_74 = rd32(sp0 - 0x74u);
                        }
                        else
                        {
    COW_AT(100d4d9e)
                            t45 = (ebp & 0xffff00ffu) | ((ebp >> 8u & 0x32u) << 8u >> 8u | 0x32u) << 8u;
                            wr32(sp0 - 0x74u, t45);
                            eax = t45;
                            loc_74 = t45;
                        }
                    }
    COW_AT(100d4daa)
                    wr32(sp0 - 0x70u, 0x73657366u);
                    g->eax = eax;
                    g->edx = edx;
                    t46 = rd32(COW_IMG(0x1065cb04u));
                    g->esp = sp0 - 0x8cu;
                    t47 = cow_thiscall(g, COW_IMG(0x101880b0u), t46, 0);
                    t48 = g->edx;
                    eax = t47;
                    edx = t48;
                    edi = t46;
    COW_AT(100d4dc0)
                    if (eax == 0x6e696172u) goto L_100d4de3;
    COW_AT(100d4dc7)
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x8cu;
                    t49 = cow_thiscall(g, COW_IMG(0x101880b0u), edi, 0);
                    t50 = g->edx;
                    eax = t49;
                    edx = t50;
    COW_AT(100d4dce)
                    if (eax == 0x6c757173u) goto L_100d4de3;
    COW_AT(100d4dd5)
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x8cu;
                    t51 = cow_thiscall(g, COW_IMG(0x101880b0u), edi, 0);
                    t52 = g->edx;
                    eax = t51;
                    edx = t52;
    COW_AT(100d4ddc)
                    if (eax != 0x746c6f62u)
                    {
                        ebx = 0x73657366u;
                        loc_70 = rd32(sp0 - 0x70u);
                        goto L_100d4df6;
                    }
L_100d4de3: ;
    COW_AT(100d4de3)
                    if (rd8(self + 0x17cu) != 0u)
                    {
                        ebx = 0x73657366u;
                        loc_70 = rd32(sp0 - 0x70u);
                    }
                    else
                    {
    COW_AT(100d4ded)
                        wr32(sp0 - 0x70u, 0x72657366u);
                        ebx = 0x72657366u;
                        loc_70 = 0x72657366u;
                    }
L_100d4df6: ;
    COW_AT(100d4df6)
                    t53 = rd32(self + 0x800u);
                    wr32(sp0 - 0x78u, t53);
                    if (rd32(self + 0x804u) == ebx)
                    {
                        eax = t53;
                        ecx = rd32(self + 0x804u);
                        loc_78 = t53;
                        goto L_100d4e59;
                    }
                    eax = t53;
                    loc_78 = t53;
    COW_AT(100d4e0c)
                    if (rd32(rd32(COW_IMG(0x1065cb04u)) + 0x1acu) == 0u)
                    {
                        ecx = rd32(rd32(COW_IMG(0x1065cb04u)) + 0x1acu);
                        goto L_100d4e59;
                    }
                    ecx = rd32(rd32(COW_IMG(0x1065cb04u)) + 0x1acu);
    COW_AT(100d4e1c)
                    wr32(sp0 - 0x90u, ebx);
                    wr32(sp0 - 0x94u, 1u);
                    wr32(sp0 - 0x98u, sp0 - 0x60u);
                    g->eax = eax;
                    g->edx = sp0 - 0x60u;
                    g->esp = sp0 - 0x8cu;
                    t54 = cow_thiscall(g, COW_IMG(0x10072290u), ecx, 3, sp0 - 0x60u, 1u, ebx);
                    t55 = g->ecx;
                    t56 = g->edx;
                    eax = t54;
                    ecx = t55;
                    edx = t56;
    COW_AT(100d4e29)
                    wr32(sp0 - 0x78u, rd32(eax));
                    if (rd32(eax) == 0u) goto L_100d53bc;
                    loc_78 = rd32(eax);
                    eax = rd32(eax);
    COW_AT(100d4e37)
                    t57 = rd32(eax);
                    if (t57 == 0u)
                    {
                        loc_70 = rd32(sp0 - 0x70u);
                    }
                    else
                    {
    COW_AT(100d4e3b)
                        wr32(self + 0x800u, eax);
                        wr32(self + 0x7fcu, 0u);
                        wr32(self + 0x804u, ebx);
                        wr32(self + 0x810u, 0u);
                        wr32(self + 0x80cu, 0u);
                        loc_70 = rd32(sp0 - 0x70u);
                        loc_78 = rd32(sp0 - 0x78u);
                    }
L_100d4e59: ;
    COW_AT(100d4e59)
                    if (eax != 0u)
                    {
    COW_AT(100d4e61)
                        if (rd8(self + 0x8abu) != 0u)
                        {
                            eax = (eax & 0xffffff00u) | rd8(self + 0x8abu);
                            goto L_100d4ea7;
                        }
                        eax = (eax & 0xffffff00u) | rd8(self + 0x8abu);
    COW_AT(100d4e6b)
                        t58 = rd8(self + 0x878u);
                        if ((uint8_t)t58 == 3u) goto L_100d4ea7;
    COW_AT(100d4e74)
                        if (rd32(self + 0x7d8u) != rd32(self + 0x7c8u))
                        {
                            eax = rd32(self + 0x7d8u);
                            ecx = rd32(self + 0x7c8u);
                            goto L_100d4ea7;
                        }
                        ecx = rd32(self + 0x7c8u);
    COW_AT(100d4e84)
                        if (rd32(sp0 - 0x68u) == 0u)
                        {
                            eax = rd32(sp0 - 0x68u);
                            goto L_100d4e99;
                        }
                        eax = rd32(sp0 - 0x68u);
    COW_AT(100d4e8c)
                        if (rd32(eax + 0x128u) >> 1u & 1u)
                        {
                            ecx = rd32(eax + 0x128u) >> 1u;
                            goto L_100d4ea7;
                        }
                        ecx = rd32(eax + 0x128u) >> 1u;
L_100d4e99: ;
    COW_AT(100d4e99)
                        if (rd8(self + 0x8b6u) == 0u) goto L_100d53bc;
                        eax = (eax & 0xffffff00u) | rd8(self + 0x8b6u);
L_100d4ea7: ;
    COW_AT(100d4ea7)
                        d59 = (double)rdf32(self + 0x7e8u);
                        if (!(d59 < (double)rdf32(COW_IMG(0x103295d8u))))
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d59, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                            ebx = ebx & 0xffffff00u;
                        }
                        else
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d59, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                            ebx = ebx & 0xffffff00u;
    COW_AT(100d4ebc)
                            d60 = (double)rdf32(sp0 - 0x4cu);
                            if ((cow_fsw(g, d60, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u) != 0u)
                            {
                                eax = cow_fsw(g, d60, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
                            }
                            else
                            {
                                eax = cow_fsw(g, d60, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
    COW_AT(100d4ecf)
                                wr32(sp0 - 0x90u, sp0 - 0x50u);
                                wr32(sp0 - 0x94u, self + 0x63cu);
                                g->ecx = ecx;
                                g->edx = sp0 - 0x50u;
                                g->esp = sp0 - 0x8cu;
                                cow_cdecl(g, COW_IMG(0x10026eb0u), 2, self + 0x63cu, sp0 - 0x50u);
                                t61 = g->ecx;
                                t62 = g->edx;
                                ecx = t61;
                                edx = t62;
                                ebx = (ebx & 0xffffff00u) | 1u;
    COW_AT(100d4ee2)
                                wr32(sp0 - 0x98u, self + 0x5fcu);
                                wr32(sp0 - 0x9cu, self + 0x63cu);
                                g->eax = self + 0x5fcu;
                                g->ecx = ecx;
                                g->edx = edx;
                                g->esp = sp0 - 0x94u;
                                t63 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, self + 0x63cu, self + 0x5fcu);
                                t64 = g->ecx;
                                t65 = g->edx;
                                eax = t63;
                                ecx = t64;
                                edx = t65;
    COW_AT(100d4eef)
                                loc_70 = rd32(sp0 - 0x70u);
                                loc_78 = rd32(sp0 - 0x78u);
                            }
                        }
    COW_AT(100d4ef2)
                        d66 = (double)rdf32(self + 0x7ecu);
                        if (!(d66 < (double)rdf32(COW_IMG(0x103295d8u))))
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d66, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                        }
                        else
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d66, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100d4f05)
                            d67 = (double)rdf32(sp0 - 0x3cu);
                            if ((cow_fsw(g, d67, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u) != 0u)
                            {
                                eax = cow_fsw(g, d67, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
                            }
                            else
                            {
                                eax = cow_fsw(g, d67, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
    COW_AT(100d4f18)
                                wr32(sp0 - 0x90u, sp0 - 0x40u);
                                wr32(sp0 - 0x94u, self + 0x63cu);
                                g->eax = eax;
                                g->ecx = sp0 - 0x40u;
                                g->esp = sp0 - 0x8cu;
                                t68 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, self + 0x63cu, sp0 - 0x40u);
                                t69 = g->ecx;
                                eax = t68;
                                ecx = t69;
                                ebx = (ebx & 0xffffff00u) | 1u;
    COW_AT(100d4f2b)
                                wr32(sp0 - 0x98u, self + 0x5fcu);
                                wr32(sp0 - 0x9cu, self + 0x63cu);
                                g->eax = eax;
                                g->ecx = ecx;
                                g->edx = self + 0x5fcu;
                                g->esp = sp0 - 0x94u;
                                t70 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, self + 0x63cu, self + 0x5fcu);
                                t71 = g->ecx;
                                t72 = g->edx;
                                eax = t70;
                                ecx = t71;
                                edx = t72;
    COW_AT(100d4f38)
                                loc_70 = rd32(sp0 - 0x70u);
                                loc_78 = rd32(sp0 - 0x78u);
                            }
                        }
    COW_AT(100d4f3b)
                        t73 = rd8(self + 0x878u);
                        if ((uint8_t)t73 == 2u)
                        {
    COW_AT(100d4f48)
                            d74 = (double)rdf32(self + 0x7f0u);
                            if (!(d74 < (double)rdf32(COW_IMG(0x103295d8u))))
                            {
                                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d74, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                            }
                            else
                            {
                                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d74, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100d4f5b)
                                d75 = (double)rdf32(sp0 - 0x2cu);
                                if ((cow_fsw(g, d75, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u) != 0u)
                                {
                                    eax = cow_fsw(g, d75, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
                                }
                                else
                                {
    COW_AT(100d4f6e)
                                    wr32(sp0 - 0x90u, sp0 - 0x30u);
                                    wr32(sp0 - 0x94u, self + 0x63cu);
                                    g->eax = sp0 - 0x30u;
                                    g->edx = edx;
                                    g->esp = sp0 - 0x8cu;
                                    t76 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, self + 0x63cu, sp0 - 0x30u);
                                    t77 = g->edx;
                                    eax = t76;
                                    edx = t77;
                                    ebx = (ebx & 0xffffff00u) | 1u;
    COW_AT(100d4f81)
                                    wr32(sp0 - 0x98u, self + 0x5fcu);
                                    wr32(sp0 - 0x9cu, self + 0x63cu);
                                    g->eax = eax;
                                    g->ecx = self + 0x5fcu;
                                    g->esp = sp0 - 0x94u;
                                    t78 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, self + 0x63cu, self + 0x5fcu);
                                    t79 = g->ecx;
                                    eax = t78;
                                    ecx = t79;
    COW_AT(100d4f8e)
                                    loc_70 = rd32(sp0 - 0x70u);
                                    loc_78 = rd32(sp0 - 0x78u);
                                }
                            }
    COW_AT(100d4f91)
                            d80 = (double)rdf32(self + 0x7f4u);
                            if (d80 < (double)rdf32(COW_IMG(0x103295d8u)))
                            {
                                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d80, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100d4fa4)
                                d81 = (double)rdf32(sp0 - 0x1cu);
                                if ((cow_fsw(g, d81, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u) == 0u)
                                {
                                    eax = cow_fsw(g, d81, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
    COW_AT(100d4fb7)
                                    wr32(sp0 - 0x90u, sp0 - 0x20u);
                                    wr32(sp0 - 0x94u, self + 0x63cu);
                                    g->ecx = ecx;
                                    g->edx = sp0 - 0x20u;
                                    g->esp = sp0 - 0x8cu;
                                    cow_cdecl(g, COW_IMG(0x10026eb0u), 2, self + 0x63cu, sp0 - 0x20u);
                                    t82 = g->ecx;
                                    t83 = g->edx;
                                    ecx = t82;
                                    edx = t83;
                                    ebx = (ebx & 0xffffff00u) | 1u;
    COW_AT(100d4fca)
                                    wr32(sp0 - 0x98u, self + 0x5fcu);
                                    wr32(sp0 - 0x9cu, self + 0x63cu);
                                    g->esp = sp0 - 0x94u;
                                    cow_cdecl(g, COW_IMG(0x10026f20u), 2, self + 0x63cu, self + 0x5fcu);
    COW_AT(100d4fd7)
                                    loc_70 = rd32(sp0 - 0x70u);
                                    loc_78 = rd32(sp0 - 0x78u);
                                }
                            }
                        }
    COW_AT(100d4fda)
                        if ((rd32(self + 0x840u) & 0x300000u) == 0u)
                        {
                            eax = rd32(self + 0x840u);
    COW_AT(100d5005)
                            if ((uint8_t)ebx != 0u)
                            {
    COW_AT(100d500d)
                                d85 = (double)rdf32(self + 0x824u);
                                d86 = (double)rdf32(COW_IMG(0x10329a08u));
                                wr8(self + 0x8b6u, 0u);
                                wr8(sp0 - 0x79u, 1u);
                                if (d85 < d86)
                                {
                                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d85, d86, 0u);
                                }
                                else
                                {
                                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d85, d86, 0u);
    COW_AT(100d502c)
                                    wr8(sp0 - 0x79u, 0u);
                                }
    COW_AT(100d5031)
                                g->eax = eax;
                                g->esp = sp0 - 0x8cu;
                                t87 = cow_thiscall(g, rd32(rd32(self) + 0x218u), self, 0);
                                t88 = g->ecx;
                                eax = t87;
                                ecx = t88;
    COW_AT(100d503b)
                                t89 = eax * 0x100u + 0x3000u | (uint32_t)(int8_t)((-(rd8(sp0 - 0x79u) != 0u) & 0x47u) + 0x30u) | 0x30300000u;
                                wr32(sp0 - 0x64u, t89);
                                eax = t89;
                                ecx = (ecx & 0xffffff00u) | (uint8_t)((-(rd8(sp0 - 0x79u) != 0u) & 0x47u) + 0x30u);
                                edx = (uint32_t)(int8_t)((-(rd8(sp0 - 0x79u) != 0u) & 0x47u) + 0x30u);
                                ebx = rd32(sp0 - 0x78u);
                                loc_64 = t89;
L_100d5061: ;
    COW_AT(100d5061)
                                if (rd32(self + 0x7fcu) == 0u) goto L_100d5077;
                                edi = rd32(self + 0x7fcu);
    COW_AT(100d506b)
                                t90 = rd32(self + 0x7f8u);
                                if (t90 == ebp) goto L_100d5145;
L_100d5077: ;
    COW_AT(100d5077)
                                wr32(sp0 - 0x90u, ebp);
                                wr32(sp0 - 0x94u, 0x3du);
                                wr32(sp0 - 0x98u, sp0 - 0x68u);
                                g->edx = edx;
                                t91 = rd32(ebx);
                                g->esp = sp0 - 0x8cu;
                                t92 = cow_call_regs(g, COW_IMG(0x100724c0u), sp0 - 0x68u, t91, g->edx, 0, 3, sp0 - 0x68u, 0x3du, ebp);
                                t93 = g->ecx;
                                t94 = g->edx;
                                eax = t92;
                                ecx = t93;
                                edx = t94;
    COW_AT(100d5086)
                                if (rd32(eax) != 0u)
                                {
                                    edi = rd32(eax);
                                    loc_64 = rd32(sp0 - 0x64u);
                                    goto L_100d5149;
                                }
    COW_AT(100d5090)
                                if (ebp == rd32(sp0 - 0x74u)) goto L_100d50b3;
                                eax = rd32(sp0 - 0x74u);
    COW_AT(100d5098)
                                wr32(sp0 - 0x90u, eax);
                                wr32(sp0 - 0x94u, 0x3du);
                                wr32(sp0 - 0x98u, sp0 - 0x5cu);
                                g->edx = eax;
                                t95 = rd32(ebx);
                                g->esp = sp0 - 0x8cu;
                                t96 = cow_call_regs(g, COW_IMG(0x100724c0u), sp0 - 0x5cu, t95, g->edx, 0, 3, sp0 - 0x5cu, 0x3du, eax);
                                t97 = g->ecx;
                                t98 = g->edx;
                                eax = t96;
                                ecx = t97;
                                edx = t98;
    COW_AT(100d50a9)
                                if (rd32(eax) != 0u)
                                {
                                    edi = rd32(eax);
                                    loc_64 = rd32(sp0 - 0x64u);
                                    goto L_100d5149;
                                }
L_100d50b3: ;
    COW_AT(100d50b3)
                                wr32(sp0 - 0x90u, sp0 - 0x58u);
                                g->eax = sp0 - 0x58u;
                                g->esp = sp0 - 0x8cu;
                                t99 = cow_thiscall(g, rd32(rd32(self) + 0x1e0u), self, 1, sp0 - 0x58u);
                                eax = t99;
    COW_AT(100d50c2)
                                t100 = rd32(sp0 - 0x70u);
                                wr32(sp0 - 0x90u, t100);
                                wr32(sp0 - 0x94u, 1u);
                                wr32(sp0 - 0x98u, sp0 - 0x54u);
                                g->eax = eax;
                                g->edx = sp0 - 0x54u;
                                g->esp = sp0 - 0x8cu;
                                t101 = cow_thiscall(g, COW_IMG(0x10072290u), rd32(rd32(eax)), 3, sp0 - 0x54u, 1u, t100);
                                t102 = g->edx;
                                eax = t101;
                                edx = t102;
                                edi = t100;
    COW_AT(100d50d7)
                                if (rd32(eax) == 0u)
                                {
                                    eax = rd32(eax);
                                    goto L_100d512b;
                                }
                                eax = rd32(eax);
    COW_AT(100d50df)
                                t103 = rd32(eax);
                                if (t103 == 0u) goto L_100d512b;
    COW_AT(100d50e3)
                                if (eax == ebx) goto L_100d5110;
    COW_AT(100d50e7)
                                wr32(self + 0x800u, eax);
                                wr32(self + 0x7fcu, 0u);
                                wr32(self + 0x804u, edi);
                                wr32(self + 0x810u, 0u);
                                wr32(sp0 - 0x78u, eax);
                                wr32(self + 0x80cu, 0u);
                                ecx = 0u;
                                ebx = eax;
                                loc_64 = rd32(sp0 - 0x64u);
                                goto L_100d5061;
                            }
                        }
                        else
                        {
                            eax = rd32(self + 0x840u);
    COW_AT(100d4fe7)
                            t84 = (((eax & 0xfff00000u) - 1u ^ eax) & 0x300000u) ^ eax;
                            wr32(self + 0x840u, t84);
                        }
                    }
                }
            }
L_100d53bc: ;
    COW_AT(100d53bc)
            t151 = rd32(sp0 - 0x4cu);
            t152 = rd32(sp0 - 0x3cu);
            t153 = rd32(sp0 - 0x2cu);
            wr32(self + 0x7e8u, t151);
            t154 = rd32(sp0 - 0x1cu);
            t155 = rd32(sp0 - 0x88u);
            t156 = rd32(sp0 - 0x8cu);
            wr32(self + 0x7ecu, t152);
            wr32(self + 0x7f0u, t153);
            wr32(self + 0x7f4u, t154);
            ebx = rd32(sp0 - 0x84u);
            ebp = t155;
            edi = t156;
            loc_80 = rd32(sp0 - 0x80u);
        }
    }
L_100d53e7: ;
    COW_AT(100d53e7)
    g->ebx = ebx;
    g->esi = loc_80;
    g->edi = edi;
    g->ebp = ebp;
    return;
L_100d4cfd: ;
    COW_AT(100d4cfd)
    if ((uint8_t)eax == 3u) goto L_100d4d08;
    COW_AT(100d4d01)
L_100d4d03: ;
    COW_AT(100d4d03)
    g->esp = sp0 - 0x80u;
    t32 = cow_call_regs(g, COW_IMG(0x100d6550u), eax, self, edx, 1, 0);
    eax = t32;
    goto L_100d4d08;
L_100d5110: ;
    COW_AT(100d5110)
    wr32(sp0 - 0x70u, ebp);
    wr32(sp0 - 0x90u, sp0 - 0x70u);
    wr32(sp0 - 0x94u, COW_IMG(0x1035fb58u));
    wr8(sp0 - 0x6cu, 0u);
    g->eax = sp0 - 0x70u;
    g->edx = edx;
    g->esp = sp0 - 0x94u;
    t104 = cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    t105 = g->edx;
    eax = t104;
    edx = t105;
    COW_AT(100d5128)
L_100d512b: ;
    COW_AT(100d512b)
    wr32(sp0 - 0x90u, 0x746f6f66u);
    wr32(sp0 - 0x94u, 0x3du);
    wr32(sp0 - 0x98u, sp0 - 0x70u);
    g->eax = eax;
    g->ecx = rd32(COW_IMG(0x1047d128u));
    g->edx = edx;
    t106 = rd32(COW_IMG(0x1047d128u));
    g->esp = sp0 - 0x8cu;
    t107 = cow_stdcall(g, COW_IMG(0x10073ba0u), 3, sp0 - 0x70u, 0x3du, 0x746f6f66u);
    t108 = g->ecx;
    t109 = g->edx;
    eax = t107;
    ecx = t108;
    edx = t109;
    COW_AT(100d5143)
    ebp = 0x746f6f66u;
    edi = rd32(eax);
    loc_64 = rd32(sp0 - 0x64u);
L_100d5145: ;
    COW_AT(100d5145)
    if (edi == 0u) goto L_100d51ab;
L_100d5149: ;
    COW_AT(100d5149)
    if (rd32(edi) != 0u)
    {
        ebx = rd32(edi);
    COW_AT(100d514f)
        if (rd8(COW_IMG(0x104638f5u)) != 0u)
        {
    COW_AT(100d5158)
            if (rd32(self + 0x70u) == 0u)
            {
                eax = rd32(self + 0x70u);
                goto L_100d516d;
            }
            eax = rd32(self + 0x70u);
    COW_AT(100d515f)
            if (rd32(eax + 0x128u) >> 8u & 1u) goto L_100d519f;
            edx = rd32(eax + 0x128u) >> 8u;
L_100d516d: ;
    COW_AT(100d516d)
            if (rd8(sp0 - 0x79u) == 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(sp0 - 0x79u);
    COW_AT(100d517d)
                x0 = (double)rdf32(COW_IMG(0x1032a34cu));
            }
            else
            {
                eax = (eax & 0xffffff00u) | rd8(sp0 - 0x79u);
    COW_AT(100d5175)
                x0 = (double)rdf32(COW_IMG(0x1033139cu));
            }
    COW_AT(100d5183)
            g->edx = edx;
            fpush(g, x0);
            g->esp = sp0 - 0x8cu;
            t110 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
            t111 = g->edx;
            eax = t110;
            edx = t111;
    COW_AT(100d5188)
            wr32(sp0 - 0x90u, eax);
            wr32(sp0 - 0x94u, 0u);
            wr32(sp0 - 0x98u, 0u);
            wr32(sp0 - 0x9cu, 0u);
            wr32(sp0 - 0xa0u, 0u);
            wr32(sp0 - 0xa4u, self + 0x5fcu);
            g->esp = sp0 - 0x8cu;
            cow_thiscall(g, COW_IMG(0x10036fa0u), ebx, 6, self + 0x5fcu, 0u, 0u, 0u, 0u, eax);
            loc_64 = rd32(sp0 - 0x64u);
        }
L_100d519f: ;
    COW_AT(100d519f)
        wr32(self + 0x7fcu, edi);
        wr32(self + 0x7f8u, ebp);
        loc_64 = rd32(sp0 - 0x64u);
    }
L_100d51ab: ;
    COW_AT(100d51ab)
    if (rd32(COW_IMG(0x10456a70u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10456a70u));
    COW_AT(100d51b8)
        t112 = rd8(self + 0x878u);
        if ((uint8_t)t112 != 3u)
        {
    COW_AT(100d51c5)
            g->eax = eax;
            g->edx = rd32(self);
            t113 = rd32(self);
            g->esp = sp0 - 0x8cu;
            t114 = cow_thiscall(g, rd32(t113 + 0x218u), self, 0);
            t115 = g->edx;
            eax = t114;
            edx = t115;
    COW_AT(100d51cf)
            if ((int32_t)eax >= 3)
            {
    COW_AT(100d51d8)
                if ((int32_t)eax <= 4) goto L_100d51e6;
    COW_AT(100d51dd)
                if (eax != 8u) goto L_100d531c;
L_100d51e6: ;
    COW_AT(100d51e6)
                if (rd32(self + 0x818u) == 0u)
                {
    COW_AT(100d51f0)
                    wr32(sp0 - 0x90u, 0x6b726d66u);
                    wr32(sp0 - 0x94u, 5u);
                    wr32(sp0 - 0x98u, sp0 - 0x5cu);
                    g->eax = rd32(self);
                    g->edx = edx;
                    t116 = rd32(self);
                    g->esp = sp0 - 0x8cu;
                    t117 = cow_thiscall(g, rd32(t116 + 0x1ecu), self, 3, sp0 - 0x5cu, 5u, 0x6b726d66u);
                    t118 = g->edx;
                    eax = t117;
                    edx = t118;
    COW_AT(100d5206)
                    if (rd32(eax) == 0u) goto L_100d5211;
                    eax = rd32(eax);
    COW_AT(100d520c)
                    t119 = rd32(eax);
                    if (t119 != 0u) goto L_100d523d;
L_100d5211: ;
    COW_AT(100d5211)
                    wr32(sp0 - 0x90u, 0x6b726d66u);
                    wr32(sp0 - 0x94u, 5u);
                    wr32(sp0 - 0x98u, sp0 - 0x70u);
                    t120 = rd32(rd32(rd32(COW_IMG(0x1047d128u)) + 0x40008u));
                    g->eax = t120;
                    g->edx = rd32(COW_IMG(0x1047d128u));
                    t121 = rd32(COW_IMG(0x1047d128u));
                    g->esp = sp0 - 0x8cu;
                    t122 = cow_thiscall(g, COW_IMG(0x10072290u), t120, 3, sp0 - 0x70u, 5u, 0x6b726d66u);
                    t123 = g->edx;
                    eax = t122;
                    edx = t123;
    COW_AT(100d5232)
                    if (rd32(eax) == 0u) goto L_100d5243;
                    eax = rd32(eax);
    COW_AT(100d5238)
                    t124 = rd32(eax);
                    if (t124 == 0u) goto L_100d5243;
L_100d523d: ;
    COW_AT(100d523d)
                    wr32(self + 0x818u, eax);
                }
L_100d5243: ;
    COW_AT(100d5243)
                if (rd32(self + 0x818u) != 0u)
                {
                    eax = rd32(self + 0x818u);
    COW_AT(100d5251)
                    t125 = rd32(eax);
                    if (t125 != 0u)
                    {
    COW_AT(100d525a)
                        g->edx = rd32(self);
                        t126 = rd32(self);
                        g->esp = sp0 - 0x8cu;
                        cow_thiscall(g, rd32(t126 + 0x98u), self, 0);
                        t127 = g->edx;
                        d128 = cow_take_float(g);
                        edx = t127;
                        x0 = d128;
    COW_AT(100d5264)
                        wrf32(sp0 - 0x68u, (float)(double)(float)x0);
                        g->eax = rd32(self);
                        g->edx = edx;
                        t129 = rd32(self);
                        g->esp = sp0 - 0x8cu;
                        t130 = cow_thiscall(g, rd32(t129 + 0x9cu), self, 0);
                        t131 = g->edx;
                        d132 = cow_take_float(g);
                        eax = t130;
                        edx = t131;
                        x0 = d132;
    COW_AT(100d5272)
                        d133 = (double)rdf32(sp0 - 0x68u);
                        if (!(x0 < d133))
                        {
    COW_AT(100d5289)
                            g->edx = edx;
                            g->esp = sp0 - 0x8cu;
                            cow_thiscall(g, rd32(rd32(self) + 0x9cu), self, 0);
                            t137 = g->edx;
                            d138 = cow_take_float(g);
                            edx = t137;
                            x0 = d138;
                        }
                        else
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, d133, 0u);
    COW_AT(100d527f)
                            g->edx = rd32(self);
                            t134 = rd32(self);
                            g->esp = sp0 - 0x8cu;
                            cow_thiscall(g, rd32(t134 + 0x98u), self, 0);
                            t135 = g->edx;
                            d136 = cow_take_float(g);
                            edx = t135;
                            x0 = d136;
    COW_AT(100d5287)
                        }
    COW_AT(100d5291)
                        if (rd32(self + 0x818u) == 0u)
                        {
                            x0 = fr(g, fr(g, x0 - (double)rdf32(COW_IMG(0x1032961cu))) + (double)rdf32(COW_IMG(0x1032961cu)));
    COW_AT(100d52ab)
                            eax = 0u;
                        }
                        else
                        {
                            eax = rd32(self + 0x818u);
                            x0 = fr(g, fr(g, x0 - (double)rdf32(COW_IMG(0x1032961cu))) + (double)rdf32(COW_IMG(0x1032961cu)));
    COW_AT(100d52a7)
                            eax = rd32(eax);
                        }
    COW_AT(100d52ad)
                        wrf32(eax + 0x84u, (float)x0);
                        if (rd32(self + 0x818u) == 0u)
                        {
    COW_AT(100d52c1)
                            eax = 0u;
                        }
                        else
                        {
                            eax = rd32(self + 0x818u);
    COW_AT(100d52bd)
                            eax = rd32(eax);
                        }
    COW_AT(100d52c3)
                        wrf32(eax + 0x88u, (float)x0);
                        if (rd32(self + 0x818u) == 0u)
                        {
    COW_AT(100d52d7)
                            eax = 0u;
                        }
                        else
                        {
                            eax = rd32(self + 0x818u);
    COW_AT(100d52d3)
                            eax = rd32(eax);
                        }
    COW_AT(100d52d9)
                        wrf32(eax + 0x8cu, (float)x0);
                        if (rd32(self + 0x818u) == 0u)
                        {
    COW_AT(100d52ed)
                            eax = 0u;
                        }
                        else
                        {
                            eax = rd32(self + 0x818u);
    COW_AT(100d52e9)
                            eax = rd32(eax);
                        }
    COW_AT(100d52ef)
                        wr32(sp0 - 0x90u, self);
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x8cu;
                        t139 = cow_thiscall(g, COW_IMG(0x1003b7b0u), eax + 0x30u, 1, self);
                        t140 = g->edx;
                        edx = t140;
                        edi = eax + 0x30u;
                        eax = t139;
    COW_AT(100d52fa)
                        wr32(sp0 - 0x90u, 0u);
                        g->edx = edx;
                        g->esp = sp0 - 0x8cu;
                        cow_thiscall(g, COW_IMG(0x1003b830u), edi, 1, 0u);
                        t141 = g->edx;
                        edx = t141;
    COW_AT(100d5303)
                        if (rd32(self + 0x818u) == 0u)
                        {
    COW_AT(100d5311)
                            eax = 0u;
                        }
                        else
                        {
                            eax = rd32(self + 0x818u);
    COW_AT(100d530d)
                            eax = rd32(eax);
                        }
    COW_AT(100d5313)
                        wr32(sp0 - 0x90u, 0u);
                        g->edx = edx;
                        g->esp = sp0 - 0x8cu;
                        cow_thiscall(g, COW_IMG(0x1004e8d0u), eax, 1, 0u);
                        t142 = g->edx;
                        edx = t142;
                    }
                }
            }
L_100d531c: ;
    COW_AT(100d531c)
            if (rd32(self + 0x80cu) == rd32(sp0 - 0x64u))
            {
                eax = rd32(self + 0x810u);
            }
            else
            {
                eax = rd32(self + 0x810u);
                edi = rd32(sp0 - 0x64u);
    COW_AT(100d5330)
                wr32(sp0 - 0x90u, edi);
                wr32(sp0 - 0x94u, 5u);
                wr32(sp0 - 0x98u, sp0 - 0x54u);
                g->edx = sp0 - 0x54u;
                g->esp = sp0 - 0x8cu;
                t143 = cow_call_regs(g, COW_IMG(0x100724c0u), eax, rd32(rd32(sp0 - 0x78u)), g->edx, 0, 3, sp0 - 0x54u, 5u, edi);
                t144 = g->edx;
                eax = t143;
                edx = t144;
    COW_AT(100d5343)
                t145 = rd32(eax);
                wr32(self + 0x810u, t145);
                wr32(self + 0x80cu, edi);
                eax = t145;
            }
    COW_AT(100d5351)
            if (rd32(COW_IMG(0x10456a70u)) != 0u)
            {
    COW_AT(100d535d)
                if (eax != 0u)
                {
    COW_AT(100d5361)
                    t146 = rd32(eax);
                    if (t146 != 0u)
                    {
    COW_AT(100d5365)
                        wr32(sp0 - 0x90u, eax);
                        g->ebp = ebp;
                        g->esp = sp0 - 0x8cu;
                        cow_fastcall(g, COW_IMG(0x100d63f0u), self, edx, 1, eax);
                        t147 = g->edx;
                        edx = t147;
                    }
                }
    COW_AT(100d536d)
                t148 = rd32(COW_IMG(0x10456a70u));
                if (t148 != 0u)
                {
    COW_AT(100d5375)
                    if (rd32(self + 0x814u) != 0u)
                    {
                        eax = rd32(self + 0x814u);
    COW_AT(100d537f)
                        if (rd32(eax) != 0u)
                        {
                            ecx = rd32(eax);
    COW_AT(100d5385)
                            if (eax != 0u)
                            {
    COW_AT(100d5389)
                                if (ecx != 0u)
                                {
                                    edi = ecx;
    COW_AT(100d538f)
                                    wr32(edi + 0xccu, 0u);
                                    g->ebp = ebp;
                                    g->eax = eax;
                                    g->edx = edx;
                                    g->esp = sp0 - 0x8cu;
                                    t149 = cow_thiscall(g, COW_IMG(0x100531d0u), ecx, 0);
                                    t150 = g->edx;
                                    eax = t149;
                                    edx = t150;
    COW_AT(100d539a)
                                    wr32(sp0 - 0x90u, 0u);
                                    wr32(edi + 0xd0u, 0x461c4000u);
                                    wr32(edi + 0xc8u, 0u);
                                    g->esp = sp0 - 0x8cu;
                                    cow_call_regs(g, COW_IMG(0x100496f0u), eax, edi, g->edx, 0, 1, rd32(sp0 - 0x90u));
    COW_AT(100d53b2)
                                    wr32(edi + 0xc8u, 0x461c4400u);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    goto L_100d53bc;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100d4bc0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100d4bceu:
    {
        uint32_t eax;
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
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x80u);
        g->esp = sp0 - 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x100d4bd6u:
    {
        uint32_t eax;
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
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x80u);
        g->esp = sp0 - 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x100d4be1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x80u);
        loc_68 = rd32(sp0 - 0x68u);
        g->esp = sp0 - 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x100d4beeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x80u);
        loc_68 = rd32(sp0 - 0x68u);
        g->esp = sp0 - 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x100d4bf3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x100d4c01u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x84u;
        (void)sp0;
        return 1;
    }
    case 0x100d4c0cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x8cu;
        wr32(sp0 - 0x8cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100d4c1bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x94u;
        wr32(sp0 - 0x94u, sp0 - 0x10u);
        wr32(sp0 - 0x90u, sp0 - 0x10u);
        wr32(sp0 - 0x8cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100d4c2fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        double loc_74_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        loc_74_f = rdf32(sp0 - 0x74u);
        g->esp = sp0 - 0x80u;
        wr32(sp0 - 0x94u, sp0 - 0x10u);
        wr32(sp0 - 0x90u, sp0 - 0x10u);
        wr32(sp0 - 0x8cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100d4c39u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        double loc_74_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        loc_74_f = rdf32(sp0 - 0x74u);
        g->esp = sp0 - 0x80u;
        wr32(sp0 - 0x94u, sp0 - 0x10u);
        wr32(sp0 - 0x90u, sp0 - 0x10u);
        wr32(sp0 - 0x8cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100d4c4fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        double loc_74_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        loc_74_f = rdf32(sp0 - 0x74u);
        g->esp = sp0 - 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x100d4c60u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x80u;
        wr32(sp0 - 0x84u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100d4c71u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x80u;
        wr32(sp0 - 0x84u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100d4c82u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x80u;
        wr32(sp0 - 0x84u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x100d4c93u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        double loc_74_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        loc_74_f = rdf32(sp0 - 0x74u);
        g->esp = sp0 - 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x100d4c9du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x100d4caau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x88u;
        (void)sp0;
        return 1;
    }
    case 0x100d4cb8u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_edi = g->edi;
        g->esp = sp0 - 0x80u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x100d4cc0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x100d4ccbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x100d4ccfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x100d4cd9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x100d4cf4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x100d4cfbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x100d4cfdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x100d4d01u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x100d4d03u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_edi = g->edi;
        g->esp = sp0 - 0x80u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x100d4d08u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x100d4d1fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x100d4d2cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d4d34u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d4d43u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d4d48u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d4d4du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d4d50u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d4d60u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d4d8fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_74;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_74 = rd32(sp0 - 0x74u);
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d4d99u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d4d9eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d4daau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_74;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_74 = rd32(sp0 - 0x74u);
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d4dc0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        g->ebx = 0x73657366u;
        (void)sp0;
        return 1;
    }
    case 0x100d4dc7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        g->ebx = 0x73657366u;
        (void)sp0;
        return 1;
    }
    case 0x100d4dceu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        g->ebx = 0x73657366u;
        (void)sp0;
        return 1;
    }
    case 0x100d4dd5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        g->ebx = 0x73657366u;
        (void)sp0;
        return 1;
    }
    case 0x100d4ddcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        g->ebx = 0x73657366u;
        (void)sp0;
        return 1;
    }
    case 0x100d4de3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        g->ebx = 0x73657366u;
        (void)sp0;
        return 1;
    }
    case 0x100d4dedu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d4df6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_70;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d4e0cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_70;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_78 = rd32(sp0 - 0x78u);
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x8cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100d4e1cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_70;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_78 = rd32(sp0 - 0x78u);
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x8cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100d4e29u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x8cu;
        g->edi = 0u;
        wr32(sp0 - 0x98u, sp0 - 0x60u);
        (void)sp0;
        return 1;
    }
    case 0x100d4e37u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_78 = rd32(sp0 - 0x78u);
        g->esp = sp0 - 0x8cu;
        g->edi = 0u;
        wr32(sp0 - 0x98u, sp0 - 0x60u);
        (void)sp0;
        return 1;
    }
    case 0x100d4e3bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_78 = rd32(sp0 - 0x78u);
        g->esp = sp0 - 0x8cu;
        g->edi = 0u;
        wr32(sp0 - 0x98u, sp0 - 0x60u);
        (void)sp0;
        return 1;
    }
    case 0x100d4e59u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_70;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_78 = rd32(sp0 - 0x78u);
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x8cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100d4e61u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_70;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_78 = rd32(sp0 - 0x78u);
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x8cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100d4e6bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_70;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_78 = rd32(sp0 - 0x78u);
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x8cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100d4e74u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_70;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_78 = rd32(sp0 - 0x78u);
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x8cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100d4e84u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_70;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_78 = rd32(sp0 - 0x78u);
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x8cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100d4e8cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_70;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d4e99u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_70;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d4ea7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_70;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d4ebcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_70;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d4ecfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_70;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d4ee2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x94u;
        g->edi = self + 0x63cu;
        wr32(sp0 - 0x90u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100d4eefu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x9cu;
        wr32(sp0 - 0x90u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100d4ef2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_70;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d4f05u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_70;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d4f18u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_70;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d4f2bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x94u;
        g->edi = self + 0x63cu;
        wr32(sp0 - 0x90u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100d4f38u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x9cu;
        wr32(sp0 - 0x90u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100d4f3bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_70;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d4f48u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_70;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d4f5bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_70;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d4f6eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_70;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d4f81u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x94u;
        g->edi = self + 0x63cu;
        wr32(sp0 - 0x90u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x100d4f8eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x9cu;
        wr32(sp0 - 0x90u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x100d4f91u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_70;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d4fa4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_70;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d4fb7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_70;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d4fcau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x94u;
        g->edi = self + 0x63cu;
        wr32(sp0 - 0x90u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100d4fd7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x9cu;
        wr32(sp0 - 0x90u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100d4fdau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_70;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d4fe7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_70;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d5005u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_70;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d500du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_70;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d502cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d5031u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d503bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d5061u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_64;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d506bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_64;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d5077u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_64;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d5086u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        wr32(sp0 - 0x98u, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x100d5090u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        wr32(sp0 - 0x98u, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x100d5098u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        wr32(sp0 - 0x98u, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x100d50a9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        wr32(sp0 - 0x98u, sp0 - 0x5cu);
        (void)sp0;
        return 1;
    }
    case 0x100d50b3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d50c2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        wr32(sp0 - 0x90u, sp0 - 0x58u);
        (void)sp0;
        return 1;
    }
    case 0x100d50d7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        wr32(sp0 - 0x98u, sp0 - 0x54u);
        (void)sp0;
        return 1;
    }
    case 0x100d50dfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        g->ecx = 0u;
        wr32(sp0 - 0x98u, sp0 - 0x54u);
        (void)sp0;
        return 1;
    }
    case 0x100d50e3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        g->ecx = 0u;
        wr32(sp0 - 0x98u, sp0 - 0x54u);
        (void)sp0;
        return 1;
    }
    case 0x100d50e7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        g->ecx = 0u;
        wr32(sp0 - 0x98u, sp0 - 0x54u);
        (void)sp0;
        return 1;
    }
    case 0x100d5110u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        g->ecx = 0u;
        wr32(sp0 - 0x98u, sp0 - 0x54u);
        (void)sp0;
        return 1;
    }
    case 0x100d5128u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x94u;
        wr32(sp0 - 0x98u, sp0 - 0x54u);
        wr32(sp0 - 0x90u, sp0 - 0x70u);
        (void)sp0;
        return 1;
    }
    case 0x100d512bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        wr32(sp0 - 0x98u, sp0 - 0x54u);
        (void)sp0;
        return 1;
    }
    case 0x100d5143u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        g->ebp = 0x746f6f66u;
        wr32(sp0 - 0x98u, sp0 - 0x70u);
        (void)sp0;
        return 1;
    }
    case 0x100d5145u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_64;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d5149u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_64;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d514fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_64;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d5158u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_64;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d515fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_64;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d516du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_64;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d5175u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_64;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d517du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_64;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d5183u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_64;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_64 = rd32(sp0 - 0x64u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d5188u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d519fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_64;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d51abu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_64;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d51b8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_64;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d51c5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_64;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d51cfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d51d8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d51ddu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d51e6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d51f0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d5206u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        wr32(sp0 - 0x98u, sp0 - 0x5cu);
        (void)sp0;
        return 1;
    }
    case 0x100d520cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        wr32(sp0 - 0x98u, sp0 - 0x5cu);
        (void)sp0;
        return 1;
    }
    case 0x100d5211u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        wr32(sp0 - 0x98u, sp0 - 0x5cu);
        (void)sp0;
        return 1;
    }
    case 0x100d5232u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        wr32(sp0 - 0x98u, sp0 - 0x70u);
        (void)sp0;
        return 1;
    }
    case 0x100d5238u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        wr32(sp0 - 0x98u, sp0 - 0x70u);
        (void)sp0;
        return 1;
    }
    case 0x100d523du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d5243u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d5251u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d525au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d5264u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d5272u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d527fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x100d5287u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d5289u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x100d5291u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d52a7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d52abu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d52adu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d52bdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d52c1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d52c3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d52d3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d52d7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d52d9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d52e9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d52edu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d52efu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d52fau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d5303u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d530du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d5311u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d5313u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d531cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d5330u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d5343u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        wr32(sp0 - 0x98u, sp0 - 0x54u);
        (void)sp0;
        return 1;
    }
    case 0x100d5351u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d535du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100d5361u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100d5365u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100d536du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100d5375u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100d537fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100d5385u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100d5389u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100d538fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100d539au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100d53b2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d53bcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_64;
        uint32_t loc_70;
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x100d53e7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_68;
        uint32_t loc_80;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_80 = rd32(sp0 - 0x80u);
        loc_68 = rd32(sp0 - 0x68u);
        g->esp = sp0 - 0x80u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100d4bc0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_100d4bc0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
