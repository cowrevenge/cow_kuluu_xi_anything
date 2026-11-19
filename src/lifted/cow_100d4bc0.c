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
    double d117;
    double d121;
    double d122;
    double d125;
    double d127;
    double d13;
    double d27;
    double d28;
    double d31;
    double d55;
    double d56;
    double d62;
    double d63;
    double d69;
    double d70;
    double d75;
    double d76;
    double d80;
    double d81;
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
    uint32_t t118;
    uint32_t t119;
    uint32_t t12;
    uint32_t t120;
    uint32_t t123;
    uint32_t t124;
    uint32_t t126;
    uint32_t t128;
    uint32_t t129;
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
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
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
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t64;
    uint32_t t65;
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t7;
    uint32_t t71;
    uint32_t t72;
    uint32_t t73;
    uint32_t t74;
    uint32_t t77;
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
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
    case 0x100d4bd6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x80u); g->esi = rd32(sp0 - 0x80u); goto E_100d4bd6;
    case 0x100d4be1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x80u); loc_68 = rd32(sp0 - 0x68u); g->esi = rd32(sp0 - 0x80u); goto E_100d4be1;
    case 0x100d4beeu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x80u); loc_68 = rd32(sp0 - 0x68u); g->esi = rd32(sp0 - 0x80u); goto E_100d4bee;
    case 0x100d4c2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_74_f = rdf32(sp0 - 0x74u); goto E_100d4c2f;
    case 0x100d4c39u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_74_f = rdf32(sp0 - 0x74u); goto E_100d4c39;
    case 0x100d4c4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_74_f = rdf32(sp0 - 0x74u); goto E_100d4c4f;
    case 0x100d4c93u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_74_f = rdf32(sp0 - 0x74u); goto E_100d4c93;
    case 0x100d4cb8u: eax = g->eax; self = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_edi = g->edi; goto E_100d4cb8;
    case 0x100d4ccbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100d4ccb;
    case 0x100d4ccfu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100d4ccf;
    case 0x100d4cf4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100d4cf4;
    case 0x100d4cfdu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100d4cfd;
    case 0x100d4d01u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100d4d01;
    case 0x100d4d03u: eax = g->eax; self = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_edi = g->edi; goto E_100d4d03;
    case 0x100d4d08u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100d4d08;
    case 0x100d4d1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_100d4d1f;
    case 0x100d4d34u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d4d34;
    case 0x100d4d43u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d4d43;
    case 0x100d4d48u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d4d48;
    case 0x100d4d4du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d4d4d;
    case 0x100d4d50u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d4d50;
    case 0x100d4d8fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_74 = rd32(sp0 - 0x74u); goto E_100d4d8f;
    case 0x100d4d9eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d4d9e;
    case 0x100d4daau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_74 = rd32(sp0 - 0x74u); goto E_100d4daa;
    case 0x100d4dc7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d4dc7;
    case 0x100d4dd5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d4dd5;
    case 0x100d4de3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_70 = rd32(sp0 - 0x70u); goto E_100d4de3;
    case 0x100d4dedu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_70 = rd32(sp0 - 0x70u); goto E_100d4ded;
    case 0x100d4df6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_70 = rd32(sp0 - 0x70u); goto E_100d4df6;
    case 0x100d4e0cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_78 = rd32(sp0 - 0x78u); loc_70 = rd32(sp0 - 0x70u); goto E_100d4e0c;
    case 0x100d4e1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_78 = rd32(sp0 - 0x78u); loc_70 = rd32(sp0 - 0x70u); goto E_100d4e1c;
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
    case 0x100d4ef2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_70 = rd32(sp0 - 0x70u); goto E_100d4ef2;
    case 0x100d4f05u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_70 = rd32(sp0 - 0x70u); goto E_100d4f05;
    case 0x100d4f18u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_70 = rd32(sp0 - 0x70u); goto E_100d4f18;
    case 0x100d4f3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_70 = rd32(sp0 - 0x70u); goto E_100d4f3b;
    case 0x100d4f48u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_70 = rd32(sp0 - 0x70u); goto E_100d4f48;
    case 0x100d4f5bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_70 = rd32(sp0 - 0x70u); goto E_100d4f5b;
    case 0x100d4f6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_70 = rd32(sp0 - 0x70u); goto E_100d4f6e;
    case 0x100d4f91u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_70 = rd32(sp0 - 0x70u); goto E_100d4f91;
    case 0x100d4fa4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_70 = rd32(sp0 - 0x70u); goto E_100d4fa4;
    case 0x100d4fb7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_70 = rd32(sp0 - 0x70u); goto E_100d4fb7;
    case 0x100d4fdau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_70 = rd32(sp0 - 0x70u); goto E_100d4fda;
    case 0x100d4fe7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_70 = rd32(sp0 - 0x70u); goto E_100d4fe7;
    case 0x100d5005u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_70 = rd32(sp0 - 0x70u); goto E_100d5005;
    case 0x100d500du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_70 = rd32(sp0 - 0x70u); goto E_100d500d;
    case 0x100d502cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_70 = rd32(sp0 - 0x70u); goto E_100d502c;
    case 0x100d5031u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_70 = rd32(sp0 - 0x70u); goto E_100d5031;
    case 0x100d5061u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_64 = rd32(sp0 - 0x64u); goto E_100d5061;
    case 0x100d506bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_64 = rd32(sp0 - 0x64u); goto E_100d506b;
    case 0x100d5077u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_64 = rd32(sp0 - 0x64u); goto E_100d5077;
    case 0x100d5090u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d5090;
    case 0x100d5098u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d5098;
    case 0x100d50b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d50b3;
    case 0x100d50dfu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d50df;
    case 0x100d50e3u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d50e3;
    case 0x100d50e7u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d50e7;
    case 0x100d5110u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d5110;
    case 0x100d512bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d512b;
    case 0x100d5145u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_64 = rd32(sp0 - 0x64u); goto E_100d5145;
    case 0x100d5149u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_64 = rd32(sp0 - 0x64u); goto E_100d5149;
    case 0x100d514fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_64 = rd32(sp0 - 0x64u); goto E_100d514f;
    case 0x100d5158u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_64 = rd32(sp0 - 0x64u); goto E_100d5158;
    case 0x100d515fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_64 = rd32(sp0 - 0x64u); goto E_100d515f;
    case 0x100d516du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_64 = rd32(sp0 - 0x64u); goto E_100d516d;
    case 0x100d5175u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_64 = rd32(sp0 - 0x64u); goto E_100d5175;
    case 0x100d517du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_64 = rd32(sp0 - 0x64u); goto E_100d517d;
    case 0x100d5183u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_64 = rd32(sp0 - 0x64u); x0 = ST(0); goto E_100d5183;
    case 0x100d519fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_64 = rd32(sp0 - 0x64u); goto E_100d519f;
    case 0x100d51abu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_64 = rd32(sp0 - 0x64u); goto E_100d51ab;
    case 0x100d51b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_64 = rd32(sp0 - 0x64u); goto E_100d51b8;
    case 0x100d51c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_64 = rd32(sp0 - 0x64u); goto E_100d51c5;
    case 0x100d51d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d51d8;
    case 0x100d51ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d51dd;
    case 0x100d51e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d51e6;
    case 0x100d51f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d51f0;
    case 0x100d520cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d520c;
    case 0x100d5211u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d5211;
    case 0x100d5238u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d5238;
    case 0x100d523du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d523d;
    case 0x100d5243u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d5243;
    case 0x100d5251u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d5251;
    case 0x100d525au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d525a;
    case 0x100d527fu: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100d527f;
    case 0x100d5289u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100d5289;
    case 0x100d5291u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); goto E_100d5291;
    case 0x100d52a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); goto E_100d52a7;
    case 0x100d52abu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); goto E_100d52ab;
    case 0x100d52adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); goto E_100d52ad;
    case 0x100d52bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); goto E_100d52bd;
    case 0x100d52c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); goto E_100d52c1;
    case 0x100d52c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); goto E_100d52c3;
    case 0x100d52d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); goto E_100d52d3;
    case 0x100d52d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); goto E_100d52d7;
    case 0x100d52d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); goto E_100d52d9;
    case 0x100d52e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d52e9;
    case 0x100d52edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d52ed;
    case 0x100d52efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d52ef;
    case 0x100d530du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d530d;
    case 0x100d5311u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d5311;
    case 0x100d5313u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d5313;
    case 0x100d531cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d531c;
    case 0x100d5330u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100d5330;
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
    case 0x100d53bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_70 = rd32(sp0 - 0x70u); loc_64 = rd32(sp0 - 0x64u); goto E_100d53bc;
    case 0x100d53e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_80 = rd32(sp0 - 0x80u); loc_78 = rd32(sp0 - 0x78u); loc_70 = rd32(sp0 - 0x70u); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); goto E_100d53e7;
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
    if ((uint8_t)t2 != 0u)
    {
        ebx = in_ebx;
        ebp = in_ebp;
        edi = in_edi;
        loc_80 = in_esi;
    }
    else
    {
        ecx = t3;
        edx = t4;
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
        if (!(rd8(eax + 0x128u) & 1u))
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
        t6 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
        wr32(sp0 - 0x84u, t6 + 0x44u);
        g->eax = t6 + 0x44u;
        g->edx = rd32(self);
        t7 = rd32(self);
        g->esp = sp0 - 0x84u;
        t8 = cow_thiscall(g, rd32(t7 + 0x1bcu), self, 0);
        t9 = g->ecx;
        t10 = g->edx;
        wr32(sp0 - 0x88u, t8);
        wr32(sp0 - 0x8cu, sp0 - 0x10u);
        g->eax = sp0 - 0x10u;
        g->esp = sp0 - 0x80u;
        t11 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x10u, t8, rd32(sp0 - 0x84u));
        wr32(sp0 - 0x90u, sp0 - 0x10u);
        wr32(sp0 - 0x94u, sp0 - 0x10u);
        g->esp = sp0 - 0x8cu;
        t12 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x10u, sp0 - 0x10u);
        d13 = cow_take_float(g);
        wrf32(sp0 - 0x74u, (float)(double)(float)d13);
        if (!(d13 < (double)rdf32(COW_IMG(0x1032a3d8u))))
        {
            eax = (t12 & 0xffff0000u) | (uint16_t)cow_fsw(g, d13, (double)rdf32(COW_IMG(0x1032a3d8u)), 0u);
            loc_74_f = (double)(float)d13;
        }
        else
        {
            loc_74_f = (double)(float)d13;
    COW_AT(100d4c2f)
            if (rd16(self + 0xb2u) != 0u)
            {
    COW_AT(100d4c39)
                t14 = (rd32(self + 0x840u) & 0xffefffffu) | 0x200000u;
                wr32(self + 0x840u, t14);
            }
    COW_AT(100d4c4f)
            wr32(sp0 - 0x84u, sp0 - 0x50u);
            wr32(sp0 - 0x88u, 9u);
            g->esp = sp0 - 0x88u;
            cow_thiscall(g, rd32(rd32(self) + 0x1c8u), self, 0);
            wr32(sp0 - 0x8cu, sp0 - 0x48u);
            wr32(sp0 - 0x90u, 8u);
            g->esp = sp0 - 0x8cu;
            cow_thiscall(g, rd32(rd32(self) + 0x1c8u), self, 1, 8u);
            wr32(sp0 - 0x90u, sp0 - 0x3cu);
            wr32(sp0 - 0x94u, 0xbu);
            cow_thiscall(g, rd32(rd32(self) + 0x1c8u), self, 2, 0xbu, sp0 - 0x3cu);
            wr32(sp0 - 0x90u, sp0 - 0x2cu);
            wr32(sp0 - 0x94u, 0xau);
            g->eax = sp0 - 0x2cu;
            g->esp = sp0 - 0x80u;
            t15 = cow_thiscall(g, rd32(rd32(self) + 0x1c8u), self, 5, 0xau, sp0 - 0x2cu, sp0 - 0x48u, 9u, sp0 - 0x50u);
            eax = t15;
            loc_74_f = (double)rdf32(sp0 - 0x74u);
        }
    COW_AT(100d4c93)
        g->eax = eax;
        g->edx = rd32(self);
        t16 = rd32(self);
        g->esp = sp0 - 0x80u;
        t17 = cow_thiscall(g, rd32(t16 + 0x1bcu), self, 0);
        t18 = g->ecx;
        t19 = g->edx;
        wr32(sp0 - 0x84u, t17);
        wr32(sp0 - 0x88u, self + 0x64cu);
        g->edx = t19;
        cow_cdecl(g, COW_IMG(0x10026eb0u), 2, self + 0x64cu, t17);
        t20 = g->edx;
        if (rd32(COW_IMG(0x10456a70u)) == 0u)
        {
            eax = rd32(COW_IMG(0x10456a70u));
            edx = t20;
            goto L_100d4d03;
        }
        eax = rd32(COW_IMG(0x10456a70u));
    COW_AT(100d4cb8)
        g->eax = eax;
        g->edx = rd32(self);
        t21 = rd32(self);
        g->esp = sp0 - 0x80u;
        t22 = cow_thiscall(g, rd32(t21 + 0x218u), self, 0);
        t23 = g->edx;
        if (t22 != 9u)
        {
            eax = (t22 & 0xffffff00u) | rd8(self + 0x878u);
            edx = t23;
            goto L_100d4cfd;
        }
        eax = (t22 & 0xffffff00u) | rd8(self + 0x878u);
        edx = t23;
    COW_AT(100d4ccb)
        if ((uint8_t)eax == 3u) goto L_100d4d08;
    COW_AT(100d4ccf)
        g->eax = rd32(self);
        g->edx = edx;
        t24 = rd32(self);
        g->esp = sp0 - 0x80u;
        t25 = cow_thiscall(g, rd32(t24 + 0x220u), self, 0);
        t26 = g->edx;
        d27 = cow_take_float(g);
        wrf32(self + 0x650u, (float)d27);
        d28 = (double)rdf32(sp0 - 0x74u);
        if (!(d28 < (double)rdf32(COW_IMG(0x1032a3d8u))))
        {
            ebx = in_ebx;
            ebp = in_ebp;
            edi = in_edi;
            loc_80 = rd32(sp0 - 0x80u);
            goto L_100d53e7;
        }
        eax = (t25 & 0xffff0000u) | (uint16_t)cow_fsw(g, d28, (double)rdf32(COW_IMG(0x1032a3d8u)), 0u);
        edx = t26;
    COW_AT(100d4cf4)
        g->esp = sp0 - 0x80u;
        t29 = cow_call_regs(g, COW_IMG(0x100d64d0u), eax, self, edx, 1, 0);
        eax = t29;
L_100d4d08: ;
    COW_AT(100d4d08)
        d31 = (double)rdf32(sp0 - 0x74u);
        if ((cow_fsw(g, d31, (double)rdf32(COW_IMG(0x1032a3d8u)), 0u) & 0x100u) == 0u)
        {
            ebx = in_ebx;
            ebp = in_ebp;
            edi = in_edi;
            loc_80 = rd32(sp0 - 0x80u);
        }
        else
        {
            eax = cow_fsw(g, d31, (double)rdf32(COW_IMG(0x1032a3d8u)), 0u) & 0x100u;
    COW_AT(100d4d1f)
            wr32(sp0 - 0x84u, in_ebx);
            wr32(sp0 - 0x88u, in_ebp);
            wr32(sp0 - 0x8cu, in_edi);
            g->eax = eax;
            g->edx = rd32(self);
            t32 = rd32(self);
            g->esp = sp0 - 0x8cu;
            t33 = cow_thiscall(g, rd32(t32 + 0x218u), self, 0);
            t34 = g->edx;
            if (t33 != 0u)
            {
                edx = t34;
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
                    t35 = rd32(self);
                    t36 = rd8(self + 0x87au);
                    g->esp = sp0 - 0x8cu;
                    t37 = cow_thiscall(g, rd32(t35 + 0x218u), self, 0);
                    t38 = t37 * 0x100u + 0x3000u;
                    t39 = t38 | ((uint32_t)(int8_t)t36 + 0x31u) << 0x18u | edi << 0x10u | 0x30u;
                    wr32(sp0 - 0x74u, t39);
                    if (rd8(rd32(COW_IMG(0x1065cb04u)) + 0x1cfu) == 0u)
                    {
                        eax = (t38 & 0xffffff00u) | rd8(rd32(COW_IMG(0x1065cb04u)) + 0x1cfu);
                        edx = rd32(COW_IMG(0x1065cb04u));
                        ebp = t39;
                        loc_74 = t39;
                    }
                    else
                    {
                        edx = rd32(COW_IMG(0x1065cb04u));
                        ebp = t39;
                        loc_74 = t39;
    COW_AT(100d4d8f)
                        g->eax = rd32(self);
                        g->edx = edx;
                        t40 = rd32(self);
                        g->esp = sp0 - 0x8cu;
                        t41 = cow_thiscall(g, rd32(t40 + 0x218u), self, 0);
                        t42 = g->edx;
                        if (t41 != 3u)
                        {
                            eax = t41;
                            edx = t42;
                            loc_74 = rd32(sp0 - 0x74u);
                        }
                        else
                        {
                            edx = t42;
    COW_AT(100d4d9e)
                            t43 = (ebp & 0xffff00ffu) | ((ebp >> 8u & 0x32u) << 8u >> 8u | 0x32u) << 8u;
                            wr32(sp0 - 0x74u, t43);
                            eax = t43;
                            loc_74 = t43;
                        }
                    }
    COW_AT(100d4daa)
                    wr32(sp0 - 0x70u, 0x73657366u);
                    g->eax = eax;
                    g->edx = edx;
                    t44 = rd32(COW_IMG(0x1065cb04u));
                    g->esp = sp0 - 0x8cu;
                    t45 = cow_thiscall(g, COW_IMG(0x101880b0u), t44, 0);
                    t46 = g->edx;
                    if (t45 == 0x6e696172u)
                    {
                        eax = t45;
                        edx = t46;
                        loc_70 = 0x73657366u;
                        goto L_100d4de3;
                    }
                    eax = t45;
                    edx = t46;
                    edi = t44;
    COW_AT(100d4dc7)
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x8cu;
                    t47 = cow_thiscall(g, COW_IMG(0x101880b0u), edi, 0);
                    t48 = g->edx;
                    if (t47 == 0x6c757173u)
                    {
                        eax = t47;
                        edx = t48;
                        loc_70 = 0x73657366u;
                        goto L_100d4de3;
                    }
                    eax = t47;
                    edx = t48;
    COW_AT(100d4dd5)
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x8cu;
                    t49 = cow_thiscall(g, COW_IMG(0x101880b0u), edi, 0);
                    t50 = g->edx;
                    if (t49 != 0x746c6f62u)
                    {
                        edx = t50;
                        ebx = 0x73657366u;
                        loc_70 = rd32(sp0 - 0x70u);
                        goto L_100d4df6;
                    }
                    eax = t49;
                    edx = t50;
                    loc_70 = rd32(sp0 - 0x70u);
L_100d4de3: ;
    COW_AT(100d4de3)
                    if (rd8(self + 0x17cu) != 0u)
                    {
                        ebx = 0x73657366u;
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
                    t51 = rd32(self + 0x800u);
                    wr32(sp0 - 0x78u, t51);
                    if (rd32(self + 0x804u) == ebx)
                    {
                        eax = t51;
                        ecx = rd32(self + 0x804u);
                        loc_78 = t51;
                        goto L_100d4e59;
                    }
                    eax = t51;
                    loc_78 = t51;
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
                    t52 = cow_thiscall(g, COW_IMG(0x10072290u), ecx, 3, sp0 - 0x60u, 1u, ebx);
                    t53 = g->ecx;
                    t54 = g->edx;
                    wr32(sp0 - 0x78u, rd32(t52));
                    if (rd32(t52) == 0u) goto L_100d53bc;
                    eax = rd32(t52);
                    ecx = t53;
                    edx = t54;
                    loc_78 = rd32(t52);
    COW_AT(100d4e37)
                    if (rd32(eax) == 0u)
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
                        if (rd8(self + 0x878u) == 3u) goto L_100d4ea7;
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
                        d55 = (double)rdf32(self + 0x7e8u);
                        if (!(d55 < (double)rdf32(COW_IMG(0x103295d8u))))
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d55, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                            ebx = ebx & 0xffffff00u;
                        }
                        else
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d55, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                            ebx = ebx & 0xffffff00u;
    COW_AT(100d4ebc)
                            d56 = (double)rdf32(sp0 - 0x4cu);
                            if ((cow_fsw(g, d56, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u) != 0u)
                            {
                                eax = cow_fsw(g, d56, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
                            }
                            else
                            {
                                eax = cow_fsw(g, d56, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
    COW_AT(100d4ecf)
                                wr32(sp0 - 0x90u, sp0 - 0x50u);
                                wr32(sp0 - 0x94u, self + 0x63cu);
                                g->ecx = ecx;
                                g->edx = sp0 - 0x50u;
                                g->esp = sp0 - 0x8cu;
                                cow_cdecl(g, COW_IMG(0x10026eb0u), 2, self + 0x63cu, sp0 - 0x50u);
                                t57 = g->ecx;
                                t58 = g->edx;
                                wr32(sp0 - 0x98u, self + 0x5fcu);
                                wr32(sp0 - 0x9cu, self + 0x63cu);
                                g->eax = self + 0x5fcu;
                                g->ecx = t57;
                                g->edx = t58;
                                g->esp = sp0 - 0x94u;
                                t59 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, self + 0x63cu, self + 0x5fcu);
                                t60 = g->ecx;
                                t61 = g->edx;
                                eax = t59;
                                ecx = t60;
                                edx = t61;
                                ebx = (ebx & 0xffffff00u) | 1u;
                                loc_70 = rd32(sp0 - 0x70u);
                                loc_78 = rd32(sp0 - 0x78u);
                            }
                        }
    COW_AT(100d4ef2)
                        d62 = (double)rdf32(self + 0x7ecu);
                        if (!(d62 < (double)rdf32(COW_IMG(0x103295d8u))))
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d62, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                        }
                        else
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d62, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100d4f05)
                            d63 = (double)rdf32(sp0 - 0x3cu);
                            if ((cow_fsw(g, d63, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u) != 0u)
                            {
                                eax = cow_fsw(g, d63, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
                            }
                            else
                            {
                                eax = cow_fsw(g, d63, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
    COW_AT(100d4f18)
                                wr32(sp0 - 0x90u, sp0 - 0x40u);
                                wr32(sp0 - 0x94u, self + 0x63cu);
                                g->eax = eax;
                                g->ecx = sp0 - 0x40u;
                                g->esp = sp0 - 0x8cu;
                                t64 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, self + 0x63cu, sp0 - 0x40u);
                                t65 = g->ecx;
                                wr32(sp0 - 0x98u, self + 0x5fcu);
                                wr32(sp0 - 0x9cu, self + 0x63cu);
                                g->ecx = t65;
                                g->edx = self + 0x5fcu;
                                g->esp = sp0 - 0x94u;
                                t66 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, self + 0x63cu, self + 0x5fcu);
                                t67 = g->ecx;
                                t68 = g->edx;
                                eax = t66;
                                ecx = t67;
                                edx = t68;
                                ebx = (ebx & 0xffffff00u) | 1u;
                                loc_70 = rd32(sp0 - 0x70u);
                                loc_78 = rd32(sp0 - 0x78u);
                            }
                        }
    COW_AT(100d4f3b)
                        if (rd8(self + 0x878u) == 2u)
                        {
    COW_AT(100d4f48)
                            d69 = (double)rdf32(self + 0x7f0u);
                            if (!(d69 < (double)rdf32(COW_IMG(0x103295d8u))))
                            {
                                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d69, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                            }
                            else
                            {
                                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d69, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100d4f5b)
                                d70 = (double)rdf32(sp0 - 0x2cu);
                                if ((cow_fsw(g, d70, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u) != 0u)
                                {
                                    eax = cow_fsw(g, d70, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
                                }
                                else
                                {
    COW_AT(100d4f6e)
                                    wr32(sp0 - 0x90u, sp0 - 0x30u);
                                    wr32(sp0 - 0x94u, self + 0x63cu);
                                    g->eax = sp0 - 0x30u;
                                    g->edx = edx;
                                    g->esp = sp0 - 0x8cu;
                                    t71 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, self + 0x63cu, sp0 - 0x30u);
                                    t72 = g->edx;
                                    wr32(sp0 - 0x98u, self + 0x5fcu);
                                    wr32(sp0 - 0x9cu, self + 0x63cu);
                                    g->ecx = self + 0x5fcu;
                                    g->esp = sp0 - 0x94u;
                                    t73 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, self + 0x63cu, self + 0x5fcu);
                                    t74 = g->ecx;
                                    eax = t73;
                                    ecx = t74;
                                    ebx = (ebx & 0xffffff00u) | 1u;
                                    loc_70 = rd32(sp0 - 0x70u);
                                    loc_78 = rd32(sp0 - 0x78u);
                                }
                            }
    COW_AT(100d4f91)
                            d75 = (double)rdf32(self + 0x7f4u);
                            if (d75 < (double)rdf32(COW_IMG(0x103295d8u)))
                            {
                                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d75, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100d4fa4)
                                d76 = (double)rdf32(sp0 - 0x1cu);
                                if ((cow_fsw(g, d76, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u) == 0u)
                                {
                                    eax = cow_fsw(g, d76, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
    COW_AT(100d4fb7)
                                    wr32(sp0 - 0x90u, sp0 - 0x20u);
                                    wr32(sp0 - 0x94u, self + 0x63cu);
                                    g->ecx = ecx;
                                    g->edx = sp0 - 0x20u;
                                    g->esp = sp0 - 0x8cu;
                                    cow_cdecl(g, COW_IMG(0x10026eb0u), 2, self + 0x63cu, sp0 - 0x20u);
                                    t77 = g->ecx;
                                    t78 = g->edx;
                                    wr32(sp0 - 0x98u, self + 0x5fcu);
                                    wr32(sp0 - 0x9cu, self + 0x63cu);
                                    g->esp = sp0 - 0x94u;
                                    cow_cdecl(g, COW_IMG(0x10026f20u), 2, self + 0x63cu, self + 0x5fcu);
                                    ebx = (ebx & 0xffffff00u) | 1u;
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
                                d80 = (double)rdf32(self + 0x824u);
                                d81 = (double)rdf32(COW_IMG(0x10329a08u));
                                wr8(self + 0x8b6u, 0u);
                                wr8(sp0 - 0x79u, 1u);
                                if (d80 < d81)
                                {
                                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d80, d81, 0u);
                                }
                                else
                                {
                                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d80, d81, 0u);
    COW_AT(100d502c)
                                    wr8(sp0 - 0x79u, 0u);
                                }
    COW_AT(100d5031)
                                g->eax = eax;
                                g->esp = sp0 - 0x8cu;
                                t82 = cow_thiscall(g, rd32(rd32(self) + 0x218u), self, 0);
                                t83 = g->ecx;
                                t84 = t82 * 0x100u + 0x3000u | (uint32_t)(int8_t)((-(rd8(sp0 - 0x79u) != 0u) & 0x47u) + 0x30u) | 0x30300000u;
                                wr32(sp0 - 0x64u, t84);
                                eax = t84;
                                ecx = (t83 & 0xffffff00u) | (uint8_t)((-(rd8(sp0 - 0x79u) != 0u) & 0x47u) + 0x30u);
                                edx = (uint32_t)(int8_t)((-(rd8(sp0 - 0x79u) != 0u) & 0x47u) + 0x30u);
                                ebx = rd32(sp0 - 0x78u);
                                loc_64 = t84;
                                loc_78 = rd32(sp0 - 0x78u);
L_100d5061: ;
    COW_AT(100d5061)
                                if (rd32(self + 0x7fcu) == 0u) goto L_100d5077;
                                edi = rd32(self + 0x7fcu);
    COW_AT(100d506b)
                                if (rd32(self + 0x7f8u) == ebp) goto L_100d5145;
L_100d5077: ;
    COW_AT(100d5077)
                                wr32(sp0 - 0x90u, ebp);
                                wr32(sp0 - 0x94u, 0x3du);
                                wr32(sp0 - 0x98u, sp0 - 0x68u);
                                g->edx = edx;
                                t85 = rd32(ebx);
                                g->esp = sp0 - 0x8cu;
                                t86 = cow_call_regs(g, COW_IMG(0x100724c0u), sp0 - 0x68u, t85, g->edx, 0, 3, sp0 - 0x68u, 0x3du, ebp);
                                t87 = g->ecx;
                                t88 = g->edx;
                                if (rd32(t86) != 0u)
                                {
                                    eax = t86;
                                    ecx = t87;
                                    edx = t88;
                                    edi = rd32(t86);
                                    loc_64 = rd32(sp0 - 0x64u);
                                    loc_78 = rd32(sp0 - 0x78u);
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
                                t89 = rd32(ebx);
                                g->esp = sp0 - 0x8cu;
                                t90 = cow_call_regs(g, COW_IMG(0x100724c0u), sp0 - 0x5cu, t89, g->edx, 0, 3, sp0 - 0x5cu, 0x3du, eax);
                                t91 = g->ecx;
                                t92 = g->edx;
                                if (rd32(t90) != 0u)
                                {
                                    eax = t90;
                                    ecx = t91;
                                    edx = t92;
                                    edi = rd32(t90);
                                    loc_64 = rd32(sp0 - 0x64u);
                                    loc_78 = rd32(sp0 - 0x78u);
                                    goto L_100d5149;
                                }
L_100d50b3: ;
    COW_AT(100d50b3)
                                wr32(sp0 - 0x90u, sp0 - 0x58u);
                                g->eax = sp0 - 0x58u;
                                g->esp = sp0 - 0x8cu;
                                t93 = cow_thiscall(g, rd32(rd32(self) + 0x1e0u), self, 1, sp0 - 0x58u);
                                t94 = rd32(sp0 - 0x70u);
                                wr32(sp0 - 0x90u, t94);
                                wr32(sp0 - 0x94u, 1u);
                                wr32(sp0 - 0x98u, sp0 - 0x54u);
                                g->edx = sp0 - 0x54u;
                                t95 = cow_thiscall(g, COW_IMG(0x10072290u), rd32(rd32(t93)), 3, sp0 - 0x54u, 1u, t94);
                                t96 = g->edx;
                                if (rd32(t95) == 0u)
                                {
                                    eax = rd32(t95);
                                    edx = t96;
                                    goto L_100d512b;
                                }
                                eax = rd32(t95);
                                edx = t96;
                                edi = t94;
    COW_AT(100d50df)
                                if (rd32(eax) == 0u) goto L_100d512b;
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
                                loc_78 = eax;
                                goto L_100d5061;
                            }
                        }
                        else
                        {
                            eax = rd32(self + 0x840u);
    COW_AT(100d4fe7)
                            t79 = (((eax & 0xfff00000u) - 1u ^ eax) & 0x300000u) ^ eax;
                            wr32(self + 0x840u, t79);
                        }
                    }
                }
            }
L_100d53bc: ;
    COW_AT(100d53bc)
            t138 = rd32(sp0 - 0x4cu);
            t139 = rd32(sp0 - 0x3cu);
            t140 = rd32(sp0 - 0x2cu);
            wr32(self + 0x7e8u, t138);
            t141 = rd32(sp0 - 0x1cu);
            t142 = rd32(sp0 - 0x88u);
            t143 = rd32(sp0 - 0x8cu);
            wr32(self + 0x7ecu, t139);
            wr32(self + 0x7f0u, t140);
            wr32(self + 0x7f4u, t141);
            ebx = rd32(sp0 - 0x84u);
            ebp = t142;
            edi = t143;
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
    t30 = cow_call_regs(g, COW_IMG(0x100d6550u), eax, self, edx, 1, 0);
    eax = t30;
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
    t97 = cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    t98 = g->edx;
    eax = t97;
    edx = t98;
L_100d512b: ;
    COW_AT(100d512b)
    wr32(sp0 - 0x90u, 0x746f6f66u);
    wr32(sp0 - 0x94u, 0x3du);
    wr32(sp0 - 0x98u, sp0 - 0x70u);
    g->eax = eax;
    g->ecx = rd32(COW_IMG(0x1047d128u));
    g->edx = edx;
    t99 = rd32(COW_IMG(0x1047d128u));
    g->esp = sp0 - 0x8cu;
    t100 = cow_stdcall(g, COW_IMG(0x10073ba0u), 3, sp0 - 0x70u, 0x3du, 0x746f6f66u);
    t101 = g->ecx;
    t102 = g->edx;
    eax = t100;
    ecx = t101;
    edx = t102;
    ebp = 0x746f6f66u;
    edi = rd32(t100);
    loc_64 = rd32(sp0 - 0x64u);
    loc_78 = rd32(sp0 - 0x78u);
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
            t103 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
            t104 = g->edx;
            wr32(sp0 - 0x90u, t103);
            wr32(sp0 - 0x94u, 0u);
            wr32(sp0 - 0x98u, 0u);
            wr32(sp0 - 0x9cu, 0u);
            wr32(sp0 - 0xa0u, 0u);
            wr32(sp0 - 0xa4u, self + 0x5fcu);
            cow_thiscall(g, COW_IMG(0x10036fa0u), ebx, 6, self + 0x5fcu, 0u, 0u, 0u, 0u, t103);
            loc_64 = rd32(sp0 - 0x64u);
            loc_78 = rd32(sp0 - 0x78u);
        }
L_100d519f: ;
    COW_AT(100d519f)
        wr32(self + 0x7fcu, edi);
        wr32(self + 0x7f8u, ebp);
    }
L_100d51ab: ;
    COW_AT(100d51ab)
    if (rd32(COW_IMG(0x10456a70u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10456a70u));
    COW_AT(100d51b8)
        if (rd8(self + 0x878u) != 3u)
        {
    COW_AT(100d51c5)
            g->eax = eax;
            g->edx = rd32(self);
            t105 = rd32(self);
            g->esp = sp0 - 0x8cu;
            t106 = cow_thiscall(g, rd32(t105 + 0x218u), self, 0);
            t107 = g->edx;
            if ((int32_t)t106 < 3)
            {
                edx = t107;
            }
            else
            {
                eax = t106;
                edx = t107;
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
                    t108 = rd32(self);
                    g->esp = sp0 - 0x8cu;
                    t109 = cow_thiscall(g, rd32(t108 + 0x1ecu), self, 3, sp0 - 0x5cu, 5u, 0x6b726d66u);
                    t110 = g->edx;
                    if (rd32(t109) == 0u) goto L_100d5211;
                    eax = rd32(t109);
                    edx = t110;
    COW_AT(100d520c)
                    if (rd32(eax) != 0u) goto L_100d523d;
L_100d5211: ;
    COW_AT(100d5211)
                    wr32(sp0 - 0x90u, 0x6b726d66u);
                    wr32(sp0 - 0x94u, 5u);
                    wr32(sp0 - 0x98u, sp0 - 0x70u);
                    t111 = rd32(rd32(rd32(COW_IMG(0x1047d128u)) + 0x40008u));
                    g->eax = t111;
                    g->edx = rd32(COW_IMG(0x1047d128u));
                    t112 = rd32(COW_IMG(0x1047d128u));
                    g->esp = sp0 - 0x8cu;
                    t113 = cow_thiscall(g, COW_IMG(0x10072290u), t111, 3, sp0 - 0x70u, 5u, 0x6b726d66u);
                    t114 = g->edx;
                    if (rd32(t113) == 0u)
                    {
                        edx = t114;
                        goto L_100d5243;
                    }
                    eax = rd32(t113);
                    edx = t114;
    COW_AT(100d5238)
                    if (rd32(eax) == 0u) goto L_100d5243;
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
                    if (rd32(eax) != 0u)
                    {
    COW_AT(100d525a)
                        g->edx = rd32(self);
                        t115 = rd32(self);
                        g->esp = sp0 - 0x8cu;
                        cow_thiscall(g, rd32(t115 + 0x98u), self, 0);
                        t116 = g->edx;
                        d117 = cow_take_float(g);
                        wrf32(sp0 - 0x68u, (float)(double)(float)d117);
                        g->eax = rd32(self);
                        g->edx = t116;
                        t118 = rd32(self);
                        t119 = cow_thiscall(g, rd32(t118 + 0x9cu), self, 0);
                        t120 = g->edx;
                        d121 = cow_take_float(g);
                        d122 = (double)rdf32(sp0 - 0x68u);
                        if (!(d121 < d122))
                        {
                            edx = t120;
    COW_AT(100d5289)
                            g->edx = edx;
                            g->esp = sp0 - 0x8cu;
                            cow_thiscall(g, rd32(rd32(self) + 0x9cu), self, 0);
                            t126 = g->edx;
                            d127 = cow_take_float(g);
                            edx = t126;
                            x0 = d127;
                        }
                        else
                        {
                            eax = (t119 & 0xffff0000u) | (uint16_t)cow_fsw(g, d121, d122, 0u);
    COW_AT(100d527f)
                            g->edx = rd32(self);
                            t123 = rd32(self);
                            g->esp = sp0 - 0x8cu;
                            cow_thiscall(g, rd32(t123 + 0x98u), self, 0);
                            t124 = g->edx;
                            d125 = cow_take_float(g);
                            edx = t124;
                            x0 = d125;
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
                        t128 = cow_thiscall(g, COW_IMG(0x1003b7b0u), eax + 0x30u, 1, self);
                        t129 = g->edx;
                        wr32(sp0 - 0x90u, 0u);
                        g->edx = t129;
                        cow_thiscall(g, COW_IMG(0x1003b830u), eax + 0x30u, 1, 0u);
                        t130 = g->edx;
                        if (rd32(self + 0x818u) == 0u)
                        {
                            edx = t130;
    COW_AT(100d5311)
                            eax = 0u;
                        }
                        else
                        {
                            eax = rd32(self + 0x818u);
                            edx = t130;
    COW_AT(100d530d)
                            eax = rd32(eax);
                        }
    COW_AT(100d5313)
                        wr32(sp0 - 0x90u, 0u);
                        g->edx = edx;
                        g->esp = sp0 - 0x8cu;
                        cow_thiscall(g, COW_IMG(0x1004e8d0u), eax, 1, 0u);
                        t131 = g->edx;
                        edx = t131;
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
                t132 = cow_call_regs(g, COW_IMG(0x100724c0u), eax, rd32(rd32(sp0 - 0x78u)), g->edx, 0, 3, sp0 - 0x54u, 5u, edi);
                t133 = g->edx;
                t134 = rd32(t132);
                wr32(self + 0x810u, t134);
                wr32(self + 0x80cu, edi);
                eax = t134;
                edx = t133;
            }
    COW_AT(100d5351)
            if (rd32(COW_IMG(0x10456a70u)) != 0u)
            {
    COW_AT(100d535d)
                if (eax != 0u)
                {
    COW_AT(100d5361)
                    if (rd32(eax) != 0u)
                    {
    COW_AT(100d5365)
                        wr32(sp0 - 0x90u, eax);
                        g->ebp = ebp;
                        g->esp = sp0 - 0x8cu;
                        cow_fastcall(g, COW_IMG(0x100d63f0u), self, edx, 1, eax);
                        t135 = g->edx;
                        edx = t135;
                    }
                }
    COW_AT(100d536d)
                if (rd32(COW_IMG(0x10456a70u)) != 0u)
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
                                    t136 = cow_thiscall(g, COW_IMG(0x100531d0u), ecx, 0);
                                    t137 = g->edx;
                                    wr32(sp0 - 0x90u, 0u);
                                    wr32(edi + 0xd0u, 0x461c4000u);
                                    wr32(edi + 0xc8u, 0u);
                                    cow_call_regs(g, COW_IMG(0x100496f0u), t136, edi, g->edx, 0, 1, 0u);
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
        wr32(sp0 - 0x94u, sp0 - 0x10u);
        wr32(sp0 - 0x90u, sp0 - 0x10u);
        wr32(sp0 - 0x8cu, sp0 - 0x10u);
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
        wr32(sp0 - 0x70u, 0x73657366u);
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
    case 0x100d4de3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_70;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_70 = rd32(sp0 - 0x70u);
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
    case 0x100d5031u:
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
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
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
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
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
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0x8cu;
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
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
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
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
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
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
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
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
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
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
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
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
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
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
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
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
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
        uint32_t loc_78;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
        loc_64 = rd32(sp0 - 0x64u);
        x0 = ST(0);
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
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
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
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
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
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
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
        uint32_t loc_78;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
        loc_64 = rd32(sp0 - 0x64u);
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
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_70;
        uint32_t loc_78;
        uint32_t loc_80;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_80 = rd32(sp0 - 0x80u);
        loc_78 = rd32(sp0 - 0x78u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
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
