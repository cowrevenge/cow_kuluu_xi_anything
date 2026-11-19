/* f_0x100a4ed0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100a4ed0(Guest* g)
{
    double d157;
    double d26;
    double d27;
    double d28;
    double d29;
    double d32;
    double d39;
    double d69;
    double d70;
    double d74;
    double d75;
    double d76;
    double d77;
    double d78;
    double d79;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_34;
    double loc_90_f;
    uint32_t loc_a8;
    uint32_t loc_ac;
    uint32_t loc_b8;
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
    uint32_t t151;
    uint32_t t152;
    uint32_t t153;
    uint32_t t154;
    uint32_t t155;
    uint32_t t156;
    uint32_t t158;
    uint32_t t159;
    uint32_t t16;
    uint32_t t160;
    uint32_t t161;
    uint32_t t162;
    uint32_t t163;
    uint32_t t164;
    uint32_t t165;
    uint32_t t166;
    uint32_t t167;
    uint32_t t168;
    uint32_t t169;
    uint32_t t17;
    uint32_t t170;
    uint32_t t171;
    uint32_t t172;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
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
    uint32_t t7;
    uint32_t t71;
    uint32_t t72;
    uint32_t t73;
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
    uint32_t t93;
    uint32_t t94;
    uint32_t t95;
    uint32_t t96;
    uint32_t t97;
    uint32_t t98;
    uint32_t t99;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 216u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100a4eeeu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xacu); in_ebp = rd32(sp0 - 0xa8u); g->ebp = rd32(sp0 - 0xa8u); g->esi = rd32(sp0 - 0xacu); goto E_100a4eee;
    case 0x100a4efau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xacu); in_ebp = rd32(sp0 - 0xa8u); g->ebp = rd32(sp0 - 0xa8u); g->esi = rd32(sp0 - 0xacu); goto E_100a4efa;
    case 0x100a4f01u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xacu); in_ebp = rd32(sp0 - 0xa8u); g->ebp = rd32(sp0 - 0xa8u); g->esi = rd32(sp0 - 0xacu); goto E_100a4f01;
    case 0x100a4f11u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xacu); in_ebp = rd32(sp0 - 0xa8u); g->ebp = rd32(sp0 - 0xa8u); g->esi = rd32(sp0 - 0xacu); goto E_100a4f11;
    case 0x100a4f18u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xacu); in_ebp = rd32(sp0 - 0xa8u); g->ebp = rd32(sp0 - 0xa8u); g->esi = rd32(sp0 - 0xacu); goto E_100a4f18;
    case 0x100a4f1du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xacu); in_ebp = rd32(sp0 - 0xa8u); g->ebp = rd32(sp0 - 0xa8u); g->esi = rd32(sp0 - 0xacu); goto E_100a4f1d;
    case 0x100a4f2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; goto E_100a4f2e;
    case 0x100a4f3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; goto E_100a4f3f;
    case 0x100a4f49u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; goto E_100a4f49;
    case 0x100a4f69u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; goto E_100a4f69;
    case 0x100a4f6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; goto E_100a4f6e;
    case 0x100a4f78u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; goto E_100a4f78;
    case 0x100a4f7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; goto E_100a4f7c;
    case 0x100a4f86u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; goto E_100a4f86;
    case 0x100a4f8au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; goto E_100a4f8a;
    case 0x100a4f94u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; goto E_100a4f94;
    case 0x100a4f98u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; goto E_100a4f98;
    case 0x100a4fa2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; goto E_100a4fa2;
    case 0x100a4fa6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; goto E_100a4fa6;
    case 0x100a4fb0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; goto E_100a4fb0;
    case 0x100a4fb4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; goto E_100a4fb4;
    case 0x100a4fb9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; goto E_100a4fb9;
    case 0x100a4fc3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; goto E_100a4fc3;
    case 0x100a4fc7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; goto E_100a4fc7;
    case 0x100a4fd1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; goto E_100a4fd1;
    case 0x100a4fe7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100a4fe7;
    case 0x100a5173u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); goto E_100a5173;
    case 0x100a517du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100a517d;
    case 0x100a5185u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100a5185;
    case 0x100a5194u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100a5194;
    case 0x100a5199u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a5199;
    case 0x100a51b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100a51b5;
    case 0x100a51d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100a51d5;
    case 0x100a51f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a51f5;
    case 0x100a5207u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a5207;
    case 0x100a5216u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a5216;
    case 0x100a521cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a521c;
    case 0x100a521eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_90_f = rdf32(sp0 - 0x90u); goto E_100a521e;
    case 0x100a523du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_90_f = rdf32(sp0 - 0x90u); goto E_100a523d;
    case 0x100a5247u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_90_f = rdf32(sp0 - 0x90u); goto E_100a5247;
    case 0x100a5251u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_90_f = rdf32(sp0 - 0x90u); goto E_100a5251;
    case 0x100a526du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_90_f = rdf32(sp0 - 0x90u); goto E_100a526d;
    case 0x100a5277u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_90_f = rdf32(sp0 - 0x90u); goto E_100a5277;
    case 0x100a52a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100a52a6;
    case 0x100a52aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100a52aa;
    case 0x100a52b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100a52b1;
    case 0x100a52c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100a52c6;
    case 0x100a52d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100a52d5;
    case 0x100a52f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); goto E_100a52f2;
    case 0x100a52f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); goto E_100a52f6;
    case 0x100a52fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); goto E_100a52fb;
    case 0x100a5306u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100a5306;
    case 0x100a5308u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100a5308;
    case 0x100a530cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100a530c;
    case 0x100a5326u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); goto E_100a5326;
    case 0x100a532au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); goto E_100a532a;
    case 0x100a532fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); goto E_100a532f;
    case 0x100a5331u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); goto E_100a5331;
    case 0x100a533du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); goto E_100a533d;
    case 0x100a534du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100a534d;
    case 0x100a535du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100a535d;
    case 0x100a536cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100a536c;
    case 0x100a537bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100a537b;
    case 0x100a538au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100a538a;
    case 0x100a5391u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100a5391;
    case 0x100a5395u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100a5395;
    case 0x100a539cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100a539c;
    case 0x100a53a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100a53a0;
    case 0x100a53a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100a53a7;
    case 0x100a53aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_100a53ae;
    case 0x100a53c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100a53c0;
    case 0x100a53cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100a53cf;
    case 0x100a53e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100a53e0;
    case 0x100a53eau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100a53ea;
    case 0x100a53eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100a53ee;
    case 0x100a53f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); goto E_100a53f5;
    case 0x100a53fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); goto E_100a53fd;
    case 0x100a5415u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); goto E_100a5415;
    case 0x100a542fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); goto E_100a542f;
    case 0x100a5437u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); goto E_100a5437;
    case 0x100a5447u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100a5447;
    case 0x100a5457u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100a5457;
    case 0x100a5466u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100a5466;
    case 0x100a5475u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100a5475;
    case 0x100a5484u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100a5484;
    case 0x100a548bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100a548b;
    case 0x100a548fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100a548f;
    case 0x100a5496u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100a5496;
    case 0x100a549au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100a549a;
    case 0x100a54a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100a54a1;
    case 0x100a54a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_100a54a8;
    case 0x100a54bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100a54ba;
    case 0x100a54c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100a54c9;
    case 0x100a54dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100a54da;
    case 0x100a54e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100a54e4;
    case 0x100a54e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100a54e8;
    case 0x100a54efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); goto E_100a54ef;
    case 0x100a5503u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100a5503;
    case 0x100a5507u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100a5507;
    case 0x100a5512u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); goto E_100a5512;
    case 0x100a551au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); goto E_100a551a;
    case 0x100a5523u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); goto E_100a5523;
    case 0x100a5528u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); goto E_100a5528;
    case 0x100a552eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100a552e;
    case 0x100a553cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100a553c;
    case 0x100a5554u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100a5554;
    case 0x100a555au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100a555a;
    case 0x100a5573u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); goto E_100a5573;
    case 0x100a5584u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100a5584;
    case 0x100a5596u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100a5596;
    case 0x100a559fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100a559f;
    case 0x100a55aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100a55aa;
    case 0x100a55b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100a55b2;
    case 0x100a55c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100a55c0;
    case 0x100a55cau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); goto E_100a55ca;
    case 0x100a55cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); goto E_100a55cd;
    case 0x100a55d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); goto E_100a55d9;
    case 0x100a55e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); goto E_100a55e3;
    case 0x100a55edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100a55ed;
    case 0x100a55fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_100a55fa;
    case 0x100a5605u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); goto E_100a5605;
    case 0x100a5609u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_b8 = rd32(sp0 - 0xb8u); loc_ac = rd32(sp0 - 0xacu); loc_a8 = rd32(sp0 - 0xa8u); goto E_100a5609;
    default: break;
    }
#endif

    COW_AT(100a4ed0)
    wr32(sp0 - 0xa8u, in_ebp);
    wr32(sp0 - 0xacu, in_esi);
    wr8(sp0 - 0x9du, 1u);
    wr8(sp0 - 0x9eu, 1u);
    wr8(sp0 - 0x9fu, 0u);
    g->esp = sp0 - 0xacu;
    t1 = cow_call_regs(g, COW_IMG(0x100a57f0u), in_eax, self, g->edx, 1, 0);
    t2 = g->ecx;
    eax = t1;
    ecx = t2;
    COW_AT(100a4eee)
    wr8(sp0 - 0xa0u, (uint8_t)eax);
    if ((uint8_t)eax != 0u)
    {
        ebx = in_ebx;
        edi = in_edi;
        loc_a8 = in_ebp;
        loc_ac = in_esi;
    }
    else
    {
    COW_AT(100a4efa)
        if (rd32(self + 0x70u) == 0u)
        {
            eax = rd32(self + 0x70u);
        }
        else
        {
            eax = rd32(self + 0x70u);
    COW_AT(100a4f01)
            t3 = rd32(eax + 0x120u);
            if (t3 >> 7u & 1u)
            {
                eax = t3;
                ecx = t3 >> 7u;
                goto L_100a4f18;
            }
            eax = t3;
            ecx = t3 >> 7u;
    COW_AT(100a4f11)
            if (!(eax >> 8u & 1u))
            {
                eax = eax >> 8u;
                goto L_100a4f1d;
            }
            eax = eax >> 8u;
L_100a4f18: ;
    COW_AT(100a4f18)
            wr8(sp0 - 0x9fu, 1u);
        }
L_100a4f1d: ;
    COW_AT(100a4f1d)
        wr32(sp0 - 0xb0u, self + 0x5c4u);
        wr32(sp0 - 0xb4u, sp0 - 0x74u);
        g->ecx = ecx;
        g->edx = sp0 - 0x74u;
        g->esp = sp0 - 0xacu;
        cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x74u, self + 0x5c4u);
        t4 = g->ecx;
        t5 = g->edx;
        ecx = t4;
        edx = t5;
    COW_AT(100a4f2e)
        wr32(sp0 - 0xb8u, self + 0xd4u);
        wr32(sp0 - 0xbcu, sp0 - 0x9cu);
        g->esp = sp0 - 0xb4u;
        cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x9cu, self + 0xd4u);
    COW_AT(100a4f3f)
        if (rd32(self + 0x70u) == 0u)
        {
            eax = rd32(self + 0x70u);
        }
        else
        {
            eax = rd32(self + 0x70u);
    COW_AT(100a4f49)
            t6 = rd32(eax + 0x120u);
            if (!((rd32(eax + 0x128u) >> 0xeu | t6 >> 0x15u | t6 >> 0x14u) & 1u))
            {
                eax = t6 >> 0x15u;
            }
            else
            {
                eax = t6 >> 0x15u;
    COW_AT(100a4f69)
                wr8(sp0 - 0x9eu, 0u);
            }
        }
    COW_AT(100a4f6e)
        g->eax = eax;
        g->edx = rd32(self);
        t7 = rd32(self);
        g->esp = sp0 - 0xacu;
        t8 = cow_thiscall(g, rd32(t7 + 0x34cu), self, 0);
        t9 = g->edx;
        eax = t8;
        edx = t9;
    COW_AT(100a4f78)
        if (eax != 0u) goto L_100a4fb4;
    COW_AT(100a4f7c)
        g->eax = rd32(self);
        g->edx = edx;
        t10 = rd32(self);
        g->esp = sp0 - 0xacu;
        t11 = cow_thiscall(g, rd32(t10 + 0x358u), self, 0);
        t12 = g->edx;
        eax = t11;
        edx = t12;
    COW_AT(100a4f86)
        if (eax != 0u) goto L_100a4fb4;
    COW_AT(100a4f8a)
        g->eax = eax;
        g->edx = rd32(self);
        t13 = rd32(self);
        g->esp = sp0 - 0xacu;
        t14 = cow_thiscall(g, rd32(t13 + 0x360u), self, 0);
        t15 = g->edx;
        eax = t14;
        edx = t15;
    COW_AT(100a4f94)
        if (eax != 0u) goto L_100a4fb4;
    COW_AT(100a4f98)
        g->eax = rd32(self);
        g->edx = edx;
        t16 = rd32(self);
        g->esp = sp0 - 0xacu;
        t17 = cow_thiscall(g, rd32(t16 + 0x36cu), self, 0);
        t18 = g->edx;
        eax = t17;
        edx = t18;
    COW_AT(100a4fa2)
        if (eax != 0u) goto L_100a4fb4;
    COW_AT(100a4fa6)
        g->eax = eax;
        g->edx = rd32(self);
        t19 = rd32(self);
        g->esp = sp0 - 0xacu;
        t20 = cow_thiscall(g, rd32(t19 + 0x378u), self, 0);
        t21 = g->edx;
        eax = t20;
        edx = t21;
    COW_AT(100a4fb0)
        if (eax == 0u) goto L_100a4fb9;
L_100a4fb4: ;
    COW_AT(100a4fb4)
        wr8(sp0 - 0x9du, 0u);
L_100a4fb9: ;
    COW_AT(100a4fb9)
        g->eax = rd32(self);
        t22 = rd32(self);
        g->esp = sp0 - 0xacu;
        t23 = cow_thiscall(g, rd32(t22 + 0x198u), self, 0);
        eax = t23;
    COW_AT(100a4fc3)
        if ((uint8_t)eax != 0u)
        {
    COW_AT(100a4fc7)
            wr32(self + 0xf4u, 0u);
        }
    COW_AT(100a4fd1)
        wr32(sp0 - 0xb0u, in_ebx);
        wr32(sp0 - 0xb4u, in_edi);
        wr32(sp0 - 0xb8u, sp0 - 0x74u);
        wr32(sp0 - 0xbcu, sp0 - 0x9cu);
        wr32(sp0 - 0xc0u, sp0 - 0x80u);
        g->eax = sp0 - 0x80u;
        g->edx = sp0 - 0x9cu;
        g->esp = sp0 - 0xb4u;
        t24 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x80u, sp0 - 0x9cu, sp0 - 0x74u);
        t25 = g->edx;
        eax = t24;
        edx = t25;
    COW_AT(100a4fe7)
        d26 = (double)rdf32(sp0 - 0x78u);
        d27 = (double)rdf32(sp0 - 0x7cu);
        wr32(sp0 - 0xc4u, self + 0x5c4u);
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        d28 = (double)rdf32(sp0 - 0x80u);
        wr8(sp0 - 0xa1u, 0u);
        d29 = (double)(float)fr(g, fr(g, fr(g, d26 * d26) + fr(g, d27 * d27)) + fr(g, d28 * d28));
        wrf32(sp0 - 0x90u, (float)d29);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xc0u;
        t30 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x18u, self + 0x5c4u);
        t31 = g->edx;
        eax = t30;
        edx = t31;
    COW_AT(100a501b)
        if (rd8(sp0 - 0x9du) == 0u)
        {
            ebx = in_ebx & 0xffffff00u;
            goto L_100a53fd;
        }
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x9du);
    COW_AT(100a502a)
        if (rd8(self + 0x5e0u) == 0u) goto L_100a505b;
        eax = (eax & 0xffffff00u) | rd8(self + 0x5e0u);
    COW_AT(100a5034)
        d32 = fr(g, sqrt((double)rdf32(sp0 - 0x90u)));
        if ((cow_fsw(g, d32, (double)rdf32(COW_IMG(0x1032df48u)), 0u) & 0x4100u) == 0u) goto L_100a505b;
        eax = cow_fsw(g, d32, (double)rdf32(COW_IMG(0x1032df48u)), 0u) & 0x4100u;
    COW_AT(100a5049)
        g->eax = eax;
        g->edx = rd32(self);
        t33 = rd32(self);
        g->esp = sp0 - 0xb4u;
        t34 = cow_thiscall(g, rd32(t33 + 0x3f0u), self, 0);
        t35 = g->edx;
        eax = t34;
        edx = t35;
    COW_AT(100a5053)
        if ((uint8_t)eax != 1u)
        {
            ebx = in_ebx & 0xffffff00u;
            goto L_100a53fd;
        }
L_100a505b: ;
    COW_AT(100a505b)
        g->eax = rd32(self);
        g->edx = edx;
        t36 = rd32(self);
        g->esp = sp0 - 0xb4u;
        t37 = cow_thiscall(g, rd32(t36 + 0x304u), self, 0);
        t38 = g->edx;
        eax = t37;
        edx = t38;
    COW_AT(100a5065)
        if ((uint8_t)eax != 0u) goto L_100a50f1;
    COW_AT(100a506d)
        if (rd8(self + 0x102u) != 0u) goto L_100a50f1;
        eax = (eax & 0xffffff00u) | rd8(self + 0x102u);
    COW_AT(100a5077)
        if (rd8(self + 0x5e1u) != 0u) goto L_100a50b8;
        eax = (eax & 0xffffff00u) | rd8(self + 0x5e1u);
    COW_AT(100a5081)
        d39 = (double)rdf32(self + 0xbcu);
        if ((cow_fsw(g, d39, (double)rdf32(COW_IMG(0x10329cecu)), 0u) & 0x4100u) != 0u) goto L_100a50b8;
        eax = cow_fsw(g, d39, (double)rdf32(COW_IMG(0x10329cecu)), 0u) & 0x4100u;
    COW_AT(100a5096)
        g->eax = eax;
        g->edx = rd32(self);
        t40 = rd32(self);
        g->esp = sp0 - 0xb4u;
        t41 = cow_thiscall(g, rd32(t40 + 0x3f0u), self, 0);
        t42 = g->edx;
        eax = t41;
        edx = t42;
    COW_AT(100a50a0)
        if ((uint8_t)eax != 0u) goto L_100a50b8;
    COW_AT(100a50a4)
        if (rd8(sp0 - 0x9fu) != 0u) goto L_100a50b8;
    COW_AT(100a50ac)
        wr8(self + 0x5e0u, 1u);
        ebx = in_ebx & 0xffffff00u;
L_100a53fd: ;
    COW_AT(100a53fd)
        t118 = rd32(self + 0x5f0u) + 1u;
        wr32(self + 0x5f0u, t118);
        if ((int32_t)t118 <= 120)
        {
            eax = t118;
            ecx = t118;
        }
        else
        {
    COW_AT(100a5415)
            wr32(sp0 - 0xb8u, 0u);
            wr32(sp0 - 0xbcu, sp0 - 0x24u);
            wr32(sp0 - 0xc0u, sp0 - 0x9cu);
            g->eax = sp0 - 0x24u;
            g->edx = edx;
            g->esp = sp0 - 0xb4u;
            t119 = cow_thiscall(g, COW_IMG(0x101814d0u), rd32(COW_IMG(0x10631f24u)), 3, sp0 - 0x9cu, sp0 - 0x24u, 0u);
            t120 = g->edx;
            eax = t119;
            edx = t120;
    COW_AT(100a542f)
            if ((uint8_t)eax == 1u)
            {
    COW_AT(100a5437)
                wr32(sp0 - 0xb8u, sp0 - 0x68u);
                g->edx = sp0 - 0x68u;
                g->esp = sp0 - 0xb4u;
                cow_thiscall(g, COW_IMG(0x10181a60u), rd32(COW_IMG(0x10631f24u)), 1, sp0 - 0x68u);
                t121 = g->edx;
                edx = t121;
    COW_AT(100a5447)
                wr32(sp0 - 0xb8u, sp0 - 0x68u);
                g->esp = sp0 - 0xb4u;
                cow_thiscall(g, COW_IMG(0x10181aa0u), rd32(COW_IMG(0x10631f24u)), 1, sp0 - 0x68u);
    COW_AT(100a5457)
                wr32(sp0 - 0xb8u, sp0 - 0x60u);
                g->esp = sp0 - 0xb4u;
                cow_thiscall(g, rd32(rd32(self) + 0x20cu), self, 1, sp0 - 0x60u);
    COW_AT(100a5466)
                t122 = rd32(sp0 - 0x68u);
                wr32(sp0 - 0xb8u, t122);
                g->esp = sp0 - 0xb4u;
                cow_thiscall(g, rd32(rd32(self) + 0x214u), self, 1, t122);
    COW_AT(100a5475)
                t123 = rd32(sp0 - 0x64u);
                wr32(sp0 - 0xb8u, t123);
                g->eax = t123;
                g->edx = rd32(self);
                t124 = rd32(self);
                g->esp = sp0 - 0xb4u;
                t125 = cow_thiscall(g, rd32(t124 + 0x21cu), self, 1, t123);
                t126 = g->edx;
                eax = t125;
                edx = t126;
    COW_AT(100a5484)
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0xb4u;
                t127 = cow_thiscall(g, COW_IMG(0x10083240u), self, 0);
                t128 = g->edx;
                eax = t127;
                edx = t128;
    COW_AT(100a548b)
                if (eax == 0u)
                {
    COW_AT(100a548f)
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0xb4u;
                    t129 = cow_thiscall(g, COW_IMG(0x10083290u), self, 0);
                    t130 = g->edx;
                    eax = t129;
                    edx = t130;
    COW_AT(100a5496)
                    if (eax == 0u)
                    {
                        loc_34 = rd32(sp0 - 0x34u);
                    }
                    else
                    {
    COW_AT(100a549a)
                        g->eax = eax;
                        g->esp = sp0 - 0xb4u;
                        t131 = cow_thiscall(g, COW_IMG(0x10083290u), self, 0);
                        eax = t131;
    COW_AT(100a54a1)
                        wr32(sp0 - 0x34u, eax);
                        loc_34 = eax;
                    }
    COW_AT(100a54a8)
                    wr32(sp0 - 0xb8u, loc_34);
                    g->esp = sp0 - 0xb4u;
                    cow_thiscall(g, rd32(rd32(self) + 0x184u), self, 1, loc_34);
                }
    COW_AT(100a54ba)
                wr32(sp0 - 0xb8u, sp0 - 0x44u);
                g->eax = sp0 - 0x44u;
                g->edx = rd32(self);
                t132 = rd32(self);
                g->esp = sp0 - 0xb4u;
                t133 = cow_thiscall(g, rd32(t132 + 0x228u), self, 1, sp0 - 0x44u);
                t134 = g->ecx;
                t135 = g->edx;
                eax = t133;
                ecx = t134;
                edx = t135;
    COW_AT(100a54c9)
                t136 = (ecx & 0xffffff00u) | rd32(sp0 - 0x50u) != 0u;
                wr32(sp0 - 0xb8u, t136);
                g->esp = sp0 - 0xb4u;
                t137 = cow_call_regs(g, COW_IMG(0x100aaee0u), eax, self, g->edx, 0, 1, t136);
                eax = t137;
    COW_AT(100a54da)
                g->eax = eax;
                g->edx = rd32(self);
                t138 = rd32(self);
                g->esp = sp0 - 0xb4u;
                t139 = cow_thiscall(g, rd32(t138 + 0x3fcu), self, 0);
                t140 = g->edx;
                eax = t139;
                edx = t140;
    COW_AT(100a54e4)
                if ((uint8_t)eax != 0u)
                {
    COW_AT(100a54e8)
                    g->esp = sp0 - 0xb4u;
                    cow_fastcall(g, COW_IMG(0x100a4d10u), self, edx, 0);
                    t141 = g->edx;
                    edx = t141;
                }
            }
    COW_AT(100a54ef)
            t142 = rd32(self);
            wr32(self + 0x5f0u, 0u);
            g->eax = t142;
            g->edx = edx;
            g->esp = sp0 - 0xb4u;
            t143 = cow_thiscall(g, rd32(t142 + 0x304u), self, 0);
            t144 = g->ecx;
            t145 = g->edx;
            eax = t143;
            ecx = t144;
            edx = t145;
    COW_AT(100a5503)
            if ((uint8_t)eax != 0u)
            {
    COW_AT(100a5507)
                g->eax = eax;
                g->edx = edx;
                t146 = rd32(COW_IMG(0x10631f24u));
                g->esp = sp0 - 0xb4u;
                t147 = cow_thiscall(g, COW_IMG(0x10181a80u), t146, 0);
                t148 = g->ecx;
                t149 = g->edx;
                eax = t147;
                ecx = t148;
                edx = t149;
            }
        }
L_100a5512: ;
    COW_AT(100a5512)
        if (rd8(sp0 - 0x9eu) != 0u)
        {
            ebx = (ebx & 0xffffff00u) | rd8(sp0 - 0x9eu);
    COW_AT(100a5523)
            wr32(sp0 - 0xb8u, sp0 - 0x9cu);
            ecx = sp0 - 0x9cu;
            loc_b8 = sp0 - 0x9cu;
        }
        else
        {
            ebx = (ebx & 0xffffff00u) | rd8(sp0 - 0x9eu);
    COW_AT(100a551a)
            wr32(sp0 - 0xb8u, self + 0xd4u);
            eax = self + 0xd4u;
            loc_b8 = self + 0xd4u;
        }
    COW_AT(100a5528)
        wr32(sp0 - 0xbcu, self + 0x5c4u);
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp0 - 0xb4u;
        t150 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, self + 0x5c4u, loc_b8);
        t151 = g->ecx;
        eax = t150;
        ecx = t151;
    COW_AT(100a552e)
        wr32(sp0 - 0xb8u, self + 0x5c4u);
        wr32(sp0 - 0xbcu, sp0 - 0x9cu);
        g->edx = sp0 - 0x9cu;
        g->esp = sp0 - 0xb4u;
        cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x9cu, self + 0x5c4u);
        t152 = g->edx;
        edx = t152;
    COW_AT(100a553c)
        wr32(sp0 - 0xb8u, sp0 - 0x9cu);
        wr32(sp0 - 0xbcu, sp0 - 0x74u);
        g->eax = sp0 - 0x9cu;
        g->edx = edx;
        t153 = rd32(COW_IMG(0x10631f24u));
        g->esp = sp0 - 0xb4u;
        t154 = cow_thiscall(g, COW_IMG(0x10181560u), t153, 2, sp0 - 0x74u, sp0 - 0x9cu);
        t155 = g->ecx;
        t156 = g->edx;
        eax = t154;
        ecx = t155;
        edx = t156;
    COW_AT(100a5554)
        if (eax == 0u) goto L_100a559f;
        edi = eax;
    COW_AT(100a555a)
        wr32(sp0 - 0xb8u, COW_IMG(0x1035bb7cu));
        d157 = (double)(float)(double)rdf32(edi + 0xdcu);
        wrf32(sp0 - 0x98u, (float)d157);
        g->edx = rd32(self);
        t158 = rd32(self);
        g->esp = sp0 - 0xb4u;
        cow_thiscall(g, rd32(t158 + 0x20cu), self, 1, COW_IMG(0x1035bb7cu));
        t159 = g->edx;
        edx = t159;
    COW_AT(100a5573)
        t160 = rd32(edi + 0xecu);
        wr32(sp0 - 0xb8u, t160);
        g->eax = rd32(self);
        t161 = rd32(self);
        g->esp = sp0 - 0xb4u;
        t162 = cow_thiscall(g, rd32(t161 + 0x214u), self, 1, t160);
        t163 = g->ecx;
        eax = t162;
        ecx = t163;
    COW_AT(100a5584)
        wr8(self + 0x5e0u, 1u);
        wr32(sp0 - 0xb8u, sp0 - 0x9cu);
        wr32(sp0 - 0xbcu, self + 0x5c4u);
        g->eax = eax;
        g->edx = sp0 - 0x9cu;
        g->esp = sp0 - 0xb4u;
        t164 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, self + 0x5c4u, sp0 - 0x9cu);
        t165 = g->edx;
        eax = t164;
        edx = t165;
    COW_AT(100a5596)
        wr8(self + 0x5e2u, 1u);
L_100a55ca: ;
    COW_AT(100a55ca)
L_100a55cd: ;
    COW_AT(100a55cd)
        if (rd8(self + 0x103u) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x103u);
            ebx = rd32(sp0 - 0xb0u);
            edi = rd32(sp0 - 0xb4u);
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x103u);
            ebx = rd32(sp0 - 0xb0u);
            edi = rd32(sp0 - 0xb4u);
    COW_AT(100a55d9)
            if (rd8(self + 0x104u) != 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(self + 0x104u);
            }
            else
            {
                eax = (eax & 0xffffff00u) | rd8(self + 0x104u);
    COW_AT(100a55e3)
                wr32(sp0 - 0xb0u, self + 0x5c4u);
                wr32(sp0 - 0xb4u, self + 0x34u);
                g->eax = eax;
                g->ecx = self + 0x34u;
                g->esp = sp0 - 0xacu;
                t168 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, self + 0x34u, self + 0x5c4u);
                t169 = g->ecx;
                eax = t168;
                ecx = t169;
    COW_AT(100a55ed)
                wr32(sp0 - 0xb8u, self + 0x5c4u);
                wr32(sp0 - 0xbcu, self + 0xc4u);
                g->eax = eax;
                g->edx = self + 0xc4u;
                g->esp = sp0 - 0xb4u;
                t170 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, self + 0xc4u, self + 0x5c4u);
                t171 = g->edx;
                eax = t170;
                edx = t171;
    COW_AT(100a55fa)
                wr32(sp0 - 0xb0u, self + 0x5c4u);
                g->eax = eax;
                g->esp = sp0 - 0xacu;
                t172 = cow_thiscall(g, COW_IMG(0x100a57c0u), self, 1, self + 0x5c4u);
                eax = t172;
            }
        }
    COW_AT(100a5605)
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0xa0u);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_ac = rd32(sp0 - 0xacu);
    }
    COW_AT(100a5609)
    g->ebx = ebx;
    g->esi = loc_ac;
    g->edi = edi;
    g->ebp = loc_a8;
    return eax;
L_100a50b8: ;
    COW_AT(100a50b8)
    wr32(sp0 - 0xb8u, 0u);
    g->eax = rd32(self);
    t43 = rd32(self);
    g->esp = sp0 - 0xb4u;
    t44 = cow_thiscall(g, rd32(t43 + 0x3f4u), self, 1, 0u);
    eax = t44;
    COW_AT(100a50c4)
    wr32(sp0 - 0xb8u, 1u);
    wr32(sp0 - 0xbcu, sp0 - 0x9cu);
    wr32(sp0 - 0xc0u, sp0 - 0x9cu);
    g->eax = eax;
    g->esp = sp0 - 0xb4u;
    t45 = cow_thiscall(g, COW_IMG(0x101814d0u), rd32(COW_IMG(0x10631f24u)), 3, sp0 - 0x9cu, sp0 - 0x9cu, 1u);
    eax = t45;
    COW_AT(100a50db)
    wr8(self + 0x5e0u, (uint8_t)eax);
    if ((uint8_t)eax == 0u)
    {
    COW_AT(100a50e5)
        wr8(sp0 - 0xa1u, 1u);
    }
    COW_AT(100a50ea)
    ebx = (in_ebx & 0xffffff00u) | 1u;
L_100a5173: ;
    COW_AT(100a5173)
    g->eax = eax;
    g->edx = rd32(self);
    t61 = rd32(self);
    g->esp = sp0 - 0xb4u;
    t62 = cow_thiscall(g, rd32(t61 + 0x304u), self, 0);
    t63 = g->ecx;
    t64 = g->edx;
    eax = t62;
    ecx = t63;
    edx = t64;
    COW_AT(100a517d)
    if ((uint8_t)eax == 0u) goto L_100a5308;
    COW_AT(100a5185)
    wr32(sp0 - 0xb8u, sp0 - 0x9cu);
    wr32(sp0 - 0xbcu, sp0 - 0x74u);
    g->eax = sp0 - 0x9cu;
    g->ecx = sp0 - 0x74u;
    g->edx = edx;
    g->esp = sp0 - 0xb4u;
    t65 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x74u, sp0 - 0x9cu);
    t66 = g->ecx;
    t67 = g->edx;
    eax = t65;
    ecx = t66;
    edx = t67;
    COW_AT(100a5194)
    g->ecx = ecx;
    g->esp = sp0 - 0xbcu;
    cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t68 = g->ecx;
    d69 = cow_take_float(g);
    ecx = t68;
    x0 = d69;
    COW_AT(100a5199)
    d70 = fr(g, x0 * (double)rdf32(COW_IMG(0x1032df44u)));
    wr32(sp0 - 0xc0u, sp0 - 0x9cu);
    wr32(sp0 - 0xc4u, sp0 - 0x30u);
    wrf32(sp0 - 0x90u, (float)(double)(float)d70);
    g->eax = sp0 - 0x30u;
    g->esp = sp0 - 0xbcu;
    t71 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x30u, sp0 - 0x9cu);
    eax = t71;
    COW_AT(100a51b5)
    wr32(sp0 - 0xc8u, sp0 - 0x18u);
    wr32(sp0 - 0xccu, sp0 - 0xcu);
    wr32(sp0 - 0x2cu, 0u);
    g->edx = sp0 - 0xcu;
    g->esp = sp0 - 0xc4u;
    cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0xcu, sp0 - 0x18u);
    t72 = g->edx;
    edx = t72;
    COW_AT(100a51d5)
    wr32(sp0 - 0xd0u, sp0 - 0xcu);
    wr32(sp0 - 0xd4u, sp0 - 0x30u);
    wr32(sp0 - 8u, 0u);
    g->eax = sp0 - 0xcu;
    g->esp = sp0 - 0xccu;
    t73 = cow_cdecl(g, COW_IMG(0x10027620u), 2, sp0 - 0x30u, sp0 - 0xcu);
    d74 = cow_take_float(g);
    eax = t73;
    x0 = d74;
    COW_AT(100a51f5)
    if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a18u)), 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a18u)), 1u) & 0x4100u;
        goto L_100a521c;
    }
    eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a18u)), 1u) & 0x4100u;
    COW_AT(100a5207)
    d75 = (double)rdf32(sp0 - 0x90u);
    if ((cow_fsw(g, d75, x0, 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d75, x0, 1u) & 0x4100u;
        goto L_100a521c;
    }
    eax = cow_fsw(g, d75, x0, 1u) & 0x4100u;
    COW_AT(100a5216)
    wrf32(sp0 - 0x90u, (float)(double)(float)x0);
    loc_90_f = (double)(float)x0;
L_100a521e: ;
    COW_AT(100a521e)
    d76 = fr(g, loc_90_f + (double)rdf32(self + 0xf4u));
    wrf32(self + 0xf4u, (float)d76);
    if ((cow_fsw(g, d76, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d76, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d76, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u;
    COW_AT(100a523d)
        wr32(self + 0xf4u, 0x3f800000u);
    }
    COW_AT(100a5247)
    if (rd8(self + 0x5f4u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x5f4u);
    COW_AT(100a5251)
        d77 = (double)rdf32(self + 0xf4u);
        d78 = (double)rdf32(COW_IMG(0x1032df40u));
        wr8(self + 0x5f4u, 1u);
        if ((cow_fsw(g, d77, d78, 0u) & 0x4100u) == 0u)
        {
    COW_AT(100a526d)
            wr32(self + 0xf4u, 0x3ecccccdu);
        }
    }
    COW_AT(100a5277)
    d79 = fr(g, (double)rdf32(sp0 - 0x98u) + (double)rdf32(self + 0xf4u));
    wr32(sp0 - 0xb8u, sp0 - 0x8cu);
    wr32(sp0 - 0xbcu, sp0 - 0x9cu);
    wr8(self + 0x5e0u, 0u);
    wrf32(sp0 - 0x98u, (float)(double)(float)d79);
    wr32(sp0 - 0xc0u, sp0 - 0x74u);
    g->eax = sp0 - 0x9cu;
    g->esp = sp0 - 0xb4u;
    t80 = cow_thiscall(g, COW_IMG(0x10181a10u), rd32(COW_IMG(0x10631f24u)), 3, sp0 - 0x74u, sp0 - 0x9cu, sp0 - 0x8cu);
    eax = t80;
    COW_AT(100a52a6)
    if (eax != 0u)
    {
    COW_AT(100a52aa)
        wr8(self + 0x5e0u, 1u);
    }
    COW_AT(100a52b1)
    wr32(sp0 - 0xb8u, sp0 - 0x8cu);
    wr32(sp0 - 0xbcu, sp0 - 0x9cu);
    g->eax = sp0 - 0x9cu;
    g->esp = sp0 - 0xb4u;
    t81 = cow_stdcall(g, COW_IMG(0x10178020u), 2, sp0 - 0x9cu, sp0 - 0x8cu);
    eax = t81;
    COW_AT(100a52c6)
    wr32(sp0 - 0xb8u, sp0 - 0x8cu);
    wr32(sp0 - 0xbcu, sp0 - 0x9cu);
    g->edx = sp0 - 0x9cu;
    g->esp = sp0 - 0xb4u;
    cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x9cu, sp0 - 0x8cu);
    t82 = g->edx;
    edx = t82;
    COW_AT(100a52d5)
    wr32(sp0 - 0xb8u, 0u);
    wr32(sp0 - 0xbcu, sp0 - 0x24u);
    wr32(sp0 - 0xc0u, sp0 - 0x9cu);
    g->eax = sp0 - 0x24u;
    g->edx = edx;
    g->esp = sp0 - 0xb4u;
    t83 = cow_thiscall(g, COW_IMG(0x101814d0u), rd32(COW_IMG(0x10631f24u)), 3, sp0 - 0x9cu, sp0 - 0x24u, 0u);
    t84 = g->edx;
    eax = t83;
    edx = t84;
    COW_AT(100a52f2)
    if ((uint8_t)eax == 0u)
    {
    COW_AT(100a52f6)
        wr8(sp0 - 0xa1u, 1u);
    }
    COW_AT(100a52fb)
    g->eax = eax;
    g->edx = edx;
    t85 = rd32(COW_IMG(0x10631f24u));
    g->esp = sp0 - 0xb4u;
    t86 = cow_thiscall(g, COW_IMG(0x10181a80u), t85, 0);
    t87 = g->ecx;
    t88 = g->edx;
    eax = t86;
    ecx = t87;
    edx = t88;
    COW_AT(100a5306)
L_100a532f: ;
    COW_AT(100a532f)
    ebx = (ebx & 0xffffff00u) | 1u;
L_100a5331: ;
    COW_AT(100a5331)
    if (rd8(sp0 - 0xa1u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0xa1u);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0xa1u);
    COW_AT(100a533d)
        wr32(sp0 - 0xb8u, sp0 - 0x68u);
        g->eax = eax;
        g->esp = sp0 - 0xb4u;
        t93 = cow_thiscall(g, COW_IMG(0x10181a60u), rd32(COW_IMG(0x10631f24u)), 1, sp0 - 0x68u);
        eax = t93;
    COW_AT(100a534d)
        wr32(sp0 - 0xb8u, sp0 - 0x68u);
        g->edx = sp0 - 0x68u;
        g->esp = sp0 - 0xb4u;
        cow_thiscall(g, COW_IMG(0x10181aa0u), rd32(COW_IMG(0x10631f24u)), 1, sp0 - 0x68u);
        t94 = g->edx;
        edx = t94;
    COW_AT(100a535d)
        wr32(sp0 - 0xb8u, sp0 - 0x60u);
        g->esp = sp0 - 0xb4u;
        cow_thiscall(g, rd32(rd32(self) + 0x20cu), self, 1, sp0 - 0x60u);
    COW_AT(100a536c)
        t95 = rd32(sp0 - 0x68u);
        wr32(sp0 - 0xb8u, t95);
        g->esp = sp0 - 0xb4u;
        cow_thiscall(g, rd32(rd32(self) + 0x214u), self, 1, t95);
    COW_AT(100a537b)
        t96 = rd32(sp0 - 0x64u);
        wr32(sp0 - 0xb8u, t96);
        g->eax = t96;
        g->edx = rd32(self);
        t97 = rd32(self);
        g->esp = sp0 - 0xb4u;
        t98 = cow_thiscall(g, rd32(t97 + 0x21cu), self, 1, t96);
        t99 = g->edx;
        eax = t98;
        edx = t99;
    COW_AT(100a538a)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xb4u;
        t100 = cow_thiscall(g, COW_IMG(0x10083240u), self, 0);
        t101 = g->edx;
        eax = t100;
        edx = t101;
    COW_AT(100a5391)
        if (eax == 0u)
        {
    COW_AT(100a5395)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xb4u;
            t102 = cow_thiscall(g, COW_IMG(0x10083290u), self, 0);
            t103 = g->edx;
            eax = t102;
            edx = t103;
    COW_AT(100a539c)
            if (eax == 0u)
            {
                loc_34 = rd32(sp0 - 0x34u);
            }
            else
            {
    COW_AT(100a53a0)
                g->eax = eax;
                g->esp = sp0 - 0xb4u;
                t104 = cow_thiscall(g, COW_IMG(0x10083290u), self, 0);
                eax = t104;
    COW_AT(100a53a7)
                wr32(sp0 - 0x34u, eax);
                loc_34 = eax;
            }
    COW_AT(100a53ae)
            wr32(sp0 - 0xb8u, loc_34);
            g->esp = sp0 - 0xb4u;
            cow_thiscall(g, rd32(rd32(self) + 0x184u), self, 1, loc_34);
        }
    COW_AT(100a53c0)
        wr32(sp0 - 0xb8u, sp0 - 0x44u);
        g->eax = sp0 - 0x44u;
        g->edx = rd32(self);
        t105 = rd32(self);
        g->esp = sp0 - 0xb4u;
        t106 = cow_thiscall(g, rd32(t105 + 0x228u), self, 1, sp0 - 0x44u);
        t107 = g->ecx;
        t108 = g->edx;
        eax = t106;
        ecx = t107;
        edx = t108;
    COW_AT(100a53cf)
        t109 = (ecx & 0xffffff00u) | rd32(sp0 - 0x50u) != 0u;
        wr32(sp0 - 0xb8u, t109);
        g->esp = sp0 - 0xb4u;
        t110 = cow_call_regs(g, COW_IMG(0x100aaee0u), eax, self, g->edx, 0, 1, t109);
        eax = t110;
    COW_AT(100a53e0)
        g->eax = eax;
        g->edx = rd32(self);
        t111 = rd32(self);
        g->esp = sp0 - 0xb4u;
        t112 = cow_thiscall(g, rd32(t111 + 0x3fcu), self, 0);
        t113 = g->ecx;
        t114 = g->edx;
        eax = t112;
        ecx = t113;
        edx = t114;
    COW_AT(100a53ea)
        if ((uint8_t)eax != 0u)
        {
    COW_AT(100a53ee)
            g->eax = eax;
            g->esp = sp0 - 0xb4u;
            t115 = cow_fastcall(g, COW_IMG(0x100a4d10u), self, edx, 0);
            t116 = g->ecx;
            t117 = g->edx;
            eax = t115;
            ecx = t116;
            edx = t117;
        }
    }
    COW_AT(100a53f5)
    if ((uint8_t)ebx != 0u) goto L_100a5512;
    goto L_100a53fd;
L_100a50f1: ;
    COW_AT(100a50f1)
    wr32(sp0 - 0xb8u, 0u);
    g->esp = sp0 - 0xb4u;
    cow_thiscall(g, rd32(rd32(self) + 0x3f4u), self, 1, 0u);
    COW_AT(100a50fd)
    wr32(sp0 - 0xb8u, sp0 - 0x8cu);
    wr32(sp0 - 0xbcu, sp0 - 0x9cu);
    wr32(sp0 - 0xc0u, sp0 - 0x74u);
    g->eax = sp0 - 0x74u;
    t46 = rd32(COW_IMG(0x10631f24u));
    g->esp = sp0 - 0xb4u;
    t47 = cow_thiscall(g, COW_IMG(0x10181a10u), t46, 3, sp0 - 0x74u, sp0 - 0x9cu, sp0 - 0x8cu);
    t48 = g->ecx;
    eax = t47;
    ecx = t48;
    COW_AT(100a5117)
    t49 = rd32(sp0 - 0x8cu);
    wr32(sp0 - 0xb8u, t49);
    wr8(self + 0x5e0u, eax != 0u);
    g->eax = eax;
    g->ecx = (ecx & 0xffffff00u) | eax != 0u;
    g->edx = t49;
    g->esp = sp0 - 0xb0u;
    t50 = cow_cdecl(g, COW_IMG(0x1006ca20u), 2, t49, rd32(sp0 - 0xb4u));
    t51 = g->ecx;
    t52 = g->edx;
    eax = t50;
    ecx = t51;
    edx = t52;
    COW_AT(100a512c)
    if ((uint8_t)eax == 0u)
    {
        ebx = in_ebx & 0xffffff00u;
        goto L_100a53fd;
    }
    COW_AT(100a5137)
    t53 = rd32(sp0 - 0x88u);
    wr32(sp0 - 0xb8u, t53);
    g->eax = t53;
    g->edx = edx;
    g->esp = sp0 - 0xb0u;
    t54 = cow_cdecl(g, COW_IMG(0x1006ca20u), 2, t53, rd32(sp0 - 0xb4u));
    t55 = g->edx;
    eax = t54;
    edx = t55;
    COW_AT(100a5141)
    if ((uint8_t)eax == 0u)
    {
        ebx = in_ebx & 0xffffff00u;
        goto L_100a53fd;
    }
    COW_AT(100a514c)
    t56 = rd32(sp0 - 0x84u);
    wr32(sp0 - 0xb8u, t56);
    g->eax = eax;
    g->ecx = t56;
    g->edx = edx;
    g->esp = sp0 - 0xb0u;
    t57 = cow_cdecl(g, COW_IMG(0x1006ca20u), 2, t56, rd32(sp0 - 0xb4u));
    t58 = g->ecx;
    t59 = g->edx;
    eax = t57;
    ecx = t58;
    edx = t59;
    COW_AT(100a5156)
    if ((uint8_t)eax == 0u)
    {
        ebx = in_ebx & 0xffffff00u;
        goto L_100a53fd;
    }
    COW_AT(100a5161)
    wr32(sp0 - 0xb8u, sp0 - 0x8cu);
    wr32(sp0 - 0xbcu, sp0 - 0x9cu);
    g->eax = sp0 - 0x9cu;
    g->esp = sp0 - 0xb4u;
    t60 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x9cu, sp0 - 0x8cu);
    eax = t60;
    COW_AT(100a5170)
    ebx = in_ebx & 0xffffff00u;
    goto L_100a5173;
L_100a521c: ;
    COW_AT(100a521c)
    loc_90_f = (double)rdf32(sp0 - 0x90u);
    goto L_100a521e;
L_100a5308: ;
    COW_AT(100a5308)
    if ((uint8_t)ebx != 0u) goto L_100a5331;
    COW_AT(100a530c)
    wr32(sp0 - 0xb8u, 0u);
    wr32(sp0 - 0xbcu, sp0 - 0x24u);
    wr32(sp0 - 0xc0u, sp0 - 0x9cu);
    g->eax = sp0 - 0x9cu;
    g->edx = sp0 - 0x24u;
    t89 = rd32(COW_IMG(0x10631f24u));
    g->esp = sp0 - 0xb4u;
    t90 = cow_thiscall(g, COW_IMG(0x101814d0u), t89, 3, sp0 - 0x9cu, sp0 - 0x24u, 0u);
    t91 = g->ecx;
    t92 = g->edx;
    eax = t90;
    ecx = t91;
    edx = t92;
    COW_AT(100a5326)
    if ((uint8_t)eax == 0u)
    {
    COW_AT(100a532a)
        wr8(sp0 - 0xa1u, 1u);
    }
    goto L_100a532f;
L_100a559f: ;
    COW_AT(100a559f)
    wr8(self + 0x5e2u, 0u);
    if ((uint8_t)ebx == 0u) goto L_100a55cd;
    COW_AT(100a55aa)
    if (rd8(sp0 - 0xa1u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0xa1u);
        goto L_100a55cd;
    }
    COW_AT(100a55b2)
    wr32(sp0 - 0xb8u, sp0 - 0x18u);
    wr32(sp0 - 0xbcu, self + 0x5c4u);
    g->eax = sp0 - 0x18u;
    g->edx = edx;
    g->esp = sp0 - 0xb4u;
    t166 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, self + 0x5c4u, sp0 - 0x18u);
    t167 = g->edx;
    eax = t166;
    edx = t167;
    COW_AT(100a55c0)
    wr32(self + 0xf4u, 0u);
    goto L_100a55ca;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100a4ed0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100a4eeeu:
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
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xacu);
        in_ebp = rd32(sp0 - 0xa8u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x100a4efau:
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
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xacu);
        in_ebp = rd32(sp0 - 0xa8u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x100a4f01u:
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
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xacu);
        in_ebp = rd32(sp0 - 0xa8u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x100a4f11u:
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
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xacu);
        in_ebp = rd32(sp0 - 0xa8u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x100a4f18u:
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
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xacu);
        in_ebp = rd32(sp0 - 0xa8u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x100a4f1du:
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
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xacu);
        in_ebp = rd32(sp0 - 0xa8u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    case 0x100a4f2eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xb4u, sp0 - 0x74u);
        (void)sp0;
        return 1;
    }
    case 0x100a4f3fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xbcu;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xbcu, sp0 - 0x9cu);
        wr32(sp0 - 0xb4u, sp0 - 0x74u);
        (void)sp0;
        return 1;
    }
    case 0x100a4f49u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xacu;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xbcu, sp0 - 0x9cu);
        wr32(sp0 - 0xb4u, sp0 - 0x74u);
        (void)sp0;
        return 1;
    }
    case 0x100a4f69u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xacu;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xbcu, sp0 - 0x9cu);
        wr32(sp0 - 0xb4u, sp0 - 0x74u);
        (void)sp0;
        return 1;
    }
    case 0x100a4f6eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xacu;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xbcu, sp0 - 0x9cu);
        wr32(sp0 - 0xb4u, sp0 - 0x74u);
        (void)sp0;
        return 1;
    }
    case 0x100a4f78u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xacu;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xbcu, sp0 - 0x9cu);
        wr32(sp0 - 0xb4u, sp0 - 0x74u);
        (void)sp0;
        return 1;
    }
    case 0x100a4f7cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xacu;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xbcu, sp0 - 0x9cu);
        wr32(sp0 - 0xb4u, sp0 - 0x74u);
        (void)sp0;
        return 1;
    }
    case 0x100a4f86u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xacu;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xbcu, sp0 - 0x9cu);
        wr32(sp0 - 0xb4u, sp0 - 0x74u);
        (void)sp0;
        return 1;
    }
    case 0x100a4f8au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xacu;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xbcu, sp0 - 0x9cu);
        wr32(sp0 - 0xb4u, sp0 - 0x74u);
        (void)sp0;
        return 1;
    }
    case 0x100a4f94u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xacu;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xbcu, sp0 - 0x9cu);
        wr32(sp0 - 0xb4u, sp0 - 0x74u);
        (void)sp0;
        return 1;
    }
    case 0x100a4f98u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xacu;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xbcu, sp0 - 0x9cu);
        wr32(sp0 - 0xb4u, sp0 - 0x74u);
        (void)sp0;
        return 1;
    }
    case 0x100a4fa2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xacu;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xbcu, sp0 - 0x9cu);
        wr32(sp0 - 0xb4u, sp0 - 0x74u);
        (void)sp0;
        return 1;
    }
    case 0x100a4fa6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xacu;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xbcu, sp0 - 0x9cu);
        wr32(sp0 - 0xb4u, sp0 - 0x74u);
        (void)sp0;
        return 1;
    }
    case 0x100a4fb0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xacu;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xbcu, sp0 - 0x9cu);
        wr32(sp0 - 0xb4u, sp0 - 0x74u);
        (void)sp0;
        return 1;
    }
    case 0x100a4fb4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xacu;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xbcu, sp0 - 0x9cu);
        wr32(sp0 - 0xb4u, sp0 - 0x74u);
        (void)sp0;
        return 1;
    }
    case 0x100a4fb9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xacu;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xbcu, sp0 - 0x9cu);
        wr32(sp0 - 0xb4u, sp0 - 0x74u);
        (void)sp0;
        return 1;
    }
    case 0x100a4fc3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xacu;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xbcu, sp0 - 0x9cu);
        wr32(sp0 - 0xb4u, sp0 - 0x74u);
        (void)sp0;
        return 1;
    }
    case 0x100a4fc7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xacu;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xbcu, sp0 - 0x9cu);
        wr32(sp0 - 0xb4u, sp0 - 0x74u);
        (void)sp0;
        return 1;
    }
    case 0x100a4fd1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xacu;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xbcu, sp0 - 0x9cu);
        wr32(sp0 - 0xb4u, sp0 - 0x74u);
        (void)sp0;
        return 1;
    }
    case 0x100a4fe7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xc0u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc0u, sp0 - 0x80u);
        wr32(sp0 - 0xbcu, sp0 - 0x9cu);
        wr32(sp0 - 0xb8u, sp0 - 0x74u);
        (void)sp0;
        return 1;
    }
    case 0x100a5173u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xbcu, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x100a517du:
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
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xbcu, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x100a5185u:
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
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xbcu, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x100a5194u:
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
        g->esp = sp0 - 0xbcu;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xbcu, sp0 - 0x74u);
        wr32(sp0 - 0xb8u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x100a5199u:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xbcu;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xbcu, sp0 - 0x74u);
        wr32(sp0 - 0xb8u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x100a51b5u:
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
        g->esp = sp0 - 0xc4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xc4u, sp0 - 0x30u);
        wr32(sp0 - 0xc0u, sp0 - 0x9cu);
        wr32(sp0 - 0xbcu, sp0 - 0x74u);
        wr32(sp0 - 0xb8u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x100a51d5u:
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
        g->esp = sp0 - 0xccu;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xccu, sp0 - 0xcu);
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xc4u, sp0 - 0x30u);
        wr32(sp0 - 0xc0u, sp0 - 0x9cu);
        wr32(sp0 - 0xbcu, sp0 - 0x74u);
        wr32(sp0 - 0xb8u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x100a51f5u:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xd4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xd4u, sp0 - 0x30u);
        wr32(sp0 - 0xd0u, sp0 - 0xcu);
        wr32(sp0 - 0xccu, sp0 - 0xcu);
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xc4u, sp0 - 0x30u);
        wr32(sp0 - 0xc0u, sp0 - 0x9cu);
        wr32(sp0 - 0xbcu, sp0 - 0x74u);
        wr32(sp0 - 0xb8u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x100a5207u:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xd4u, sp0 - 0x30u);
        wr32(sp0 - 0xd0u, sp0 - 0xcu);
        wr32(sp0 - 0xccu, sp0 - 0xcu);
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xc4u, sp0 - 0x30u);
        wr32(sp0 - 0xc0u, sp0 - 0x9cu);
        wr32(sp0 - 0xbcu, sp0 - 0x74u);
        wr32(sp0 - 0xb8u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x100a5216u:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xd4u, sp0 - 0x30u);
        wr32(sp0 - 0xd0u, sp0 - 0xcu);
        wr32(sp0 - 0xccu, sp0 - 0xcu);
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xc4u, sp0 - 0x30u);
        wr32(sp0 - 0xc0u, sp0 - 0x9cu);
        wr32(sp0 - 0xbcu, sp0 - 0x74u);
        wr32(sp0 - 0xb8u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x100a521cu:
    {
        uint32_t eax;
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
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xd4u, sp0 - 0x30u);
        wr32(sp0 - 0xd0u, sp0 - 0xcu);
        wr32(sp0 - 0xccu, sp0 - 0xcu);
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xc4u, sp0 - 0x30u);
        wr32(sp0 - 0xc0u, sp0 - 0x9cu);
        wr32(sp0 - 0xbcu, sp0 - 0x74u);
        wr32(sp0 - 0xb8u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x100a521eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_90_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_90_f = rdf32(sp0 - 0x90u);
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xd4u, sp0 - 0x30u);
        wr32(sp0 - 0xd0u, sp0 - 0xcu);
        wr32(sp0 - 0xccu, sp0 - 0xcu);
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xc4u, sp0 - 0x30u);
        wr32(sp0 - 0xc0u, sp0 - 0x9cu);
        wr32(sp0 - 0xbcu, sp0 - 0x74u);
        wr32(sp0 - 0xb8u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x100a523du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_90_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_90_f = rdf32(sp0 - 0x90u);
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xd4u, sp0 - 0x30u);
        wr32(sp0 - 0xd0u, sp0 - 0xcu);
        wr32(sp0 - 0xccu, sp0 - 0xcu);
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xc4u, sp0 - 0x30u);
        wr32(sp0 - 0xc0u, sp0 - 0x9cu);
        wr32(sp0 - 0xbcu, sp0 - 0x74u);
        wr32(sp0 - 0xb8u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x100a5247u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_90_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_90_f = rdf32(sp0 - 0x90u);
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xd4u, sp0 - 0x30u);
        wr32(sp0 - 0xd0u, sp0 - 0xcu);
        wr32(sp0 - 0xccu, sp0 - 0xcu);
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xc4u, sp0 - 0x30u);
        wr32(sp0 - 0xc0u, sp0 - 0x9cu);
        wr32(sp0 - 0xbcu, sp0 - 0x74u);
        wr32(sp0 - 0xb8u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x100a5251u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_90_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_90_f = rdf32(sp0 - 0x90u);
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xd4u, sp0 - 0x30u);
        wr32(sp0 - 0xd0u, sp0 - 0xcu);
        wr32(sp0 - 0xccu, sp0 - 0xcu);
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xc4u, sp0 - 0x30u);
        wr32(sp0 - 0xc0u, sp0 - 0x9cu);
        wr32(sp0 - 0xbcu, sp0 - 0x74u);
        wr32(sp0 - 0xb8u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x100a526du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_90_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_90_f = rdf32(sp0 - 0x90u);
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xd4u, sp0 - 0x30u);
        wr32(sp0 - 0xd0u, sp0 - 0xcu);
        wr32(sp0 - 0xccu, sp0 - 0xcu);
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xc4u, sp0 - 0x30u);
        wr32(sp0 - 0xc0u, sp0 - 0x9cu);
        wr32(sp0 - 0xbcu, sp0 - 0x74u);
        wr32(sp0 - 0xb8u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x100a5277u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_90_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_90_f = rdf32(sp0 - 0x90u);
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xd4u, sp0 - 0x30u);
        wr32(sp0 - 0xd0u, sp0 - 0xcu);
        wr32(sp0 - 0xccu, sp0 - 0xcu);
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xc4u, sp0 - 0x30u);
        wr32(sp0 - 0xc0u, sp0 - 0x9cu);
        wr32(sp0 - 0xbcu, sp0 - 0x74u);
        wr32(sp0 - 0xb8u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x100a52a6u:
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
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xd4u, sp0 - 0x30u);
        wr32(sp0 - 0xd0u, sp0 - 0xcu);
        wr32(sp0 - 0xccu, sp0 - 0xcu);
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xc4u, sp0 - 0x30u);
        wr32(sp0 - 0xc0u, sp0 - 0x74u);
        wr32(sp0 - 0xbcu, sp0 - 0x9cu);
        wr32(sp0 - 0xb8u, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x100a52aau:
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
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xd4u, sp0 - 0x30u);
        wr32(sp0 - 0xd0u, sp0 - 0xcu);
        wr32(sp0 - 0xccu, sp0 - 0xcu);
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xc4u, sp0 - 0x30u);
        wr32(sp0 - 0xc0u, sp0 - 0x74u);
        wr32(sp0 - 0xbcu, sp0 - 0x9cu);
        wr32(sp0 - 0xb8u, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x100a52b1u:
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
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xd4u, sp0 - 0x30u);
        wr32(sp0 - 0xd0u, sp0 - 0xcu);
        wr32(sp0 - 0xccu, sp0 - 0xcu);
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xc4u, sp0 - 0x30u);
        wr32(sp0 - 0xc0u, sp0 - 0x74u);
        wr32(sp0 - 0xbcu, sp0 - 0x9cu);
        wr32(sp0 - 0xb8u, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x100a52c6u:
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
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xd4u, sp0 - 0x30u);
        wr32(sp0 - 0xd0u, sp0 - 0xcu);
        wr32(sp0 - 0xccu, sp0 - 0xcu);
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xc4u, sp0 - 0x30u);
        wr32(sp0 - 0xc0u, sp0 - 0x74u);
        wr32(sp0 - 0xbcu, sp0 - 0x9cu);
        wr32(sp0 - 0xb8u, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x100a52d5u:
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
        g->esp = sp0 - 0xbcu;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xd4u, sp0 - 0x30u);
        wr32(sp0 - 0xd0u, sp0 - 0xcu);
        wr32(sp0 - 0xccu, sp0 - 0xcu);
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xc4u, sp0 - 0x30u);
        wr32(sp0 - 0xc0u, sp0 - 0x74u);
        wr32(sp0 - 0xbcu, sp0 - 0x9cu);
        wr32(sp0 - 0xb8u, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x100a52f2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xd4u, sp0 - 0x30u);
        wr32(sp0 - 0xd0u, sp0 - 0xcu);
        wr32(sp0 - 0xccu, sp0 - 0xcu);
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xc4u, sp0 - 0x30u);
        wr32(sp0 - 0xc0u, sp0 - 0x9cu);
        wr32(sp0 - 0xbcu, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x100a52f6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xd4u, sp0 - 0x30u);
        wr32(sp0 - 0xd0u, sp0 - 0xcu);
        wr32(sp0 - 0xccu, sp0 - 0xcu);
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xc4u, sp0 - 0x30u);
        wr32(sp0 - 0xc0u, sp0 - 0x9cu);
        wr32(sp0 - 0xbcu, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x100a52fbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xd4u, sp0 - 0x30u);
        wr32(sp0 - 0xd0u, sp0 - 0xcu);
        wr32(sp0 - 0xccu, sp0 - 0xcu);
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xc4u, sp0 - 0x30u);
        wr32(sp0 - 0xc0u, sp0 - 0x9cu);
        wr32(sp0 - 0xbcu, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x100a5306u:
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
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xd4u, sp0 - 0x30u);
        wr32(sp0 - 0xd0u, sp0 - 0xcu);
        wr32(sp0 - 0xccu, sp0 - 0xcu);
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xc4u, sp0 - 0x30u);
        wr32(sp0 - 0xc0u, sp0 - 0x9cu);
        wr32(sp0 - 0xbcu, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x100a5308u:
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
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xbcu, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x100a530cu:
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
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xbcu, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x100a5326u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xc0u, sp0 - 0x9cu);
        wr32(sp0 - 0xbcu, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x100a532au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xc0u, sp0 - 0x9cu);
        wr32(sp0 - 0xbcu, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x100a532fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xc0u, sp0 - 0x9cu);
        wr32(sp0 - 0xbcu, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x100a5331u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100a533du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100a534du:
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
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xb8u, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x100a535du:
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
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xb8u, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x100a536cu:
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
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xb8u, sp0 - 0x60u);
        (void)sp0;
        return 1;
    }
    case 0x100a537bu:
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
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100a538au:
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
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100a5391u:
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
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100a5395u:
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
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100a539cu:
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
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100a53a0u:
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
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100a53a7u:
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
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100a53aeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100a53c0u:
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
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100a53cfu:
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
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xb8u, sp0 - 0x44u);
        (void)sp0;
        return 1;
    }
    case 0x100a53e0u:
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
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100a53eau:
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
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100a53eeu:
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
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100a53f5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100a53fdu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100a5415u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100a542fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xc0u, sp0 - 0x9cu);
        wr32(sp0 - 0xbcu, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x100a5437u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xc0u, sp0 - 0x9cu);
        wr32(sp0 - 0xbcu, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x100a5447u:
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
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xc0u, sp0 - 0x9cu);
        wr32(sp0 - 0xbcu, sp0 - 0x24u);
        wr32(sp0 - 0xb8u, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x100a5457u:
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
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xc0u, sp0 - 0x9cu);
        wr32(sp0 - 0xbcu, sp0 - 0x24u);
        wr32(sp0 - 0xb8u, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x100a5466u:
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
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xc0u, sp0 - 0x9cu);
        wr32(sp0 - 0xbcu, sp0 - 0x24u);
        wr32(sp0 - 0xb8u, sp0 - 0x60u);
        (void)sp0;
        return 1;
    }
    case 0x100a5475u:
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
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xc0u, sp0 - 0x9cu);
        wr32(sp0 - 0xbcu, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x100a5484u:
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
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xc0u, sp0 - 0x9cu);
        wr32(sp0 - 0xbcu, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x100a548bu:
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
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xc0u, sp0 - 0x9cu);
        wr32(sp0 - 0xbcu, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x100a548fu:
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
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xc0u, sp0 - 0x9cu);
        wr32(sp0 - 0xbcu, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x100a5496u:
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
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xc0u, sp0 - 0x9cu);
        wr32(sp0 - 0xbcu, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x100a549au:
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
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xc0u, sp0 - 0x9cu);
        wr32(sp0 - 0xbcu, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x100a54a1u:
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
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xc0u, sp0 - 0x9cu);
        wr32(sp0 - 0xbcu, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x100a54a8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xc0u, sp0 - 0x9cu);
        wr32(sp0 - 0xbcu, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x100a54bau:
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
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xc0u, sp0 - 0x9cu);
        wr32(sp0 - 0xbcu, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x100a54c9u:
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
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xc0u, sp0 - 0x9cu);
        wr32(sp0 - 0xbcu, sp0 - 0x24u);
        wr32(sp0 - 0xb8u, sp0 - 0x44u);
        (void)sp0;
        return 1;
    }
    case 0x100a54dau:
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
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xc0u, sp0 - 0x9cu);
        wr32(sp0 - 0xbcu, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x100a54e4u:
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
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xc0u, sp0 - 0x9cu);
        wr32(sp0 - 0xbcu, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x100a54e8u:
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
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xc0u, sp0 - 0x9cu);
        wr32(sp0 - 0xbcu, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x100a54efu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xc0u, sp0 - 0x9cu);
        wr32(sp0 - 0xbcu, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x100a5503u:
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
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xc0u, sp0 - 0x9cu);
        wr32(sp0 - 0xbcu, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x100a5507u:
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
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xc0u, sp0 - 0x9cu);
        wr32(sp0 - 0xbcu, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x100a5512u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100a551au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100a5523u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100a5528u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0xb8u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100a552eu:
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
        g->esp = sp0 - 0xbcu;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100a553cu:
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
        g->esp = sp0 - 0xbcu;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xbcu, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x100a5554u:
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
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xbcu, sp0 - 0x74u);
        wr32(sp0 - 0xb8u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x100a555au:
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
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xbcu, sp0 - 0x74u);
        wr32(sp0 - 0xb8u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x100a5573u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xbcu, sp0 - 0x74u);
        (void)sp0;
        return 1;
    }
    case 0x100a5584u:
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
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xbcu, sp0 - 0x74u);
        (void)sp0;
        return 1;
    }
    case 0x100a5596u:
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
        g->esp = sp0 - 0xbcu;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xb8u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x100a559fu:
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
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xbcu, sp0 - 0x74u);
        wr32(sp0 - 0xb8u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x100a55aau:
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
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xbcu, sp0 - 0x74u);
        wr32(sp0 - 0xb8u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x100a55b2u:
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
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xbcu, sp0 - 0x74u);
        wr32(sp0 - 0xb8u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x100a55c0u:
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
        g->esp = sp0 - 0xbcu;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        wr32(sp0 - 0xb8u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100a55cau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0xbcu;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100a55cdu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100a55d9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0xacu;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100a55e3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0xacu;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100a55edu:
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
        g->esp = sp0 - 0xb4u;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100a55fau:
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
        g->esp = sp0 - 0xbcu;
        g->ebp = self + 0x5c4u;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100a5605u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        g->esp = sp0 - 0xacu;
        wr32(sp0 - 0xc8u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100a5609u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_a8;
        uint32_t loc_ac;
        uint32_t loc_b8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_b8 = rd32(sp0 - 0xb8u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8 = rd32(sp0 - 0xa8u);
        g->esp = sp0 - 0xacu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
/* blocks no state can start at, and why (the gittable lists their sites):
     100a501b: holds in_ebx, which no location here says
     100a502a: holds in_ebx, which no location here says
     100a5034: holds in_ebx, which no location here says
     100a5049: holds in_ebx, which no location here says
     100a5053: holds in_ebx, which no location here says
     100a505b: holds in_ebx, which no location here says
     100a5065: holds in_ebx, which no location here says
     100a506d: holds in_ebx, which no location here says
     100a5077: holds in_ebx, which no location here says
     100a5081: holds in_ebx, which no location here says
     100a5096: holds in_ebx, which no location here says
     100a50a0: holds in_ebx, which no location here says
     100a50a4: holds in_ebx, which no location here says
     100a50ac: holds in_ebx, which no location here says
     100a50b8: holds in_ebx, which no location here says
     100a50c4: holds in_ebx, which no location here says
     100a50db: holds in_ebx, which no location here says
     100a50e5: holds in_ebx, which no location here says
     100a50ea: holds in_ebx, which no location here says
     100a50f1: holds in_ebx, which no location here says
     100a50fd: holds in_ebx, which no location here says
     100a5117: holds in_ebx, which no location here says
     100a512c: holds in_ebx, which no location here says
     100a5137: holds in_ebx, which no location here says
     100a5141: holds in_ebx, which no location here says
     100a514c: holds in_ebx, which no location here says
     100a5156: holds in_ebx, which no location here says
     100a5161: holds in_ebx, which no location here says
     100a5170: holds in_ebx, which no location here says
*/
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100a4ed0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100a4ed0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
