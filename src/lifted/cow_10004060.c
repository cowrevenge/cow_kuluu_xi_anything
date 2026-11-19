/* f_0x10004060 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10004060(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_c2e18;
    uint32_t loc_c2e1c;
    uint32_t loc_c2e20;
    uint32_t loc_c2e24;
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
    uint32_t t157;
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
    uint32_t t69;
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
    uint32_t t93;
    uint32_t t94;
    uint32_t t95;
    uint32_t t96;
    uint32_t t97;
    uint32_t t98;
    uint32_t t99;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 798312u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1000406au: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_1000406a;
    case 0x1000408cu: ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0xc2e24u); in_esi = rd32(sp0 - 0xc2e20u); in_ebp = rd32(sp0 - 0xc2e1cu); g->ebp = rd32(sp0 - 0xc2e1cu); g->edi = rd32(sp0 - 0xc2e24u); g->esi = rd32(sp0 - 0xc2e20u); goto E_1000408c;
    case 0x1000409bu: ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xc2e24u); in_esi = rd32(sp0 - 0xc2e20u); in_ebp = rd32(sp0 - 0xc2e1cu); g->ebp = rd32(sp0 - 0xc2e1cu); g->edi = rd32(sp0 - 0xc2e24u); g->esi = rd32(sp0 - 0xc2e20u); goto E_1000409b;
    case 0x100040aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100040aa;
    case 0x100040b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100040b4;
    case 0x100040cau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100040ca;
    case 0x100040d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100040d5;
    case 0x100040e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100040e1;
    case 0x100040ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100040eb;
    case 0x100040f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100040f5;
    case 0x10004100u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10004100;
    case 0x10004104u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10004104;
    case 0x1000410bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1000410b;
    case 0x10004120u: ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xc2e24u); in_esi = rd32(sp0 - 0xc2e20u); in_ebp = rd32(sp0 - 0xc2e1cu); g->ebp = rd32(sp0 - 0xc2e1cu); g->edi = rd32(sp0 - 0xc2e24u); g->esi = rd32(sp0 - 0xc2e20u); goto E_10004120;
    case 0x1000412fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1000412f;
    case 0x10004139u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10004139;
    case 0x1000414fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1000414f;
    case 0x1000415au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1000415a;
    case 0x10004165u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10004165;
    case 0x10004173u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10004173;
    case 0x10004185u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10004185;
    case 0x1000418cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1000418c;
    case 0x1000419eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1000419e;
    case 0x100041a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100041a5;
    case 0x100041bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100041bc;
    case 0x100041c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100041c6;
    case 0x100041d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100041d5;
    case 0x100041deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100041de;
    case 0x100041f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100041f2;
    case 0x100041f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100041f8;
    case 0x10004202u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10004202;
    case 0x1000420du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1000420d;
    case 0x10004215u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10004215;
    case 0x1000421cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1000421c;
    case 0x10004227u: ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0xc2e24u); in_esi = rd32(sp0 - 0xc2e20u); in_ebp = rd32(sp0 - 0xc2e1cu); g->ebp = rd32(sp0 - 0xc2e1cu); g->edi = rd32(sp0 - 0xc2e24u); g->esi = rd32(sp0 - 0xc2e20u); goto E_10004227;
    case 0x10004236u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10004236;
    case 0x10004240u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10004240;
    case 0x10004256u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10004256;
    case 0x10004261u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10004261;
    case 0x10004267u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10004267;
    case 0x10004275u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10004275;
    case 0x10004287u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10004287;
    case 0x10004292u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10004292;
    case 0x100042a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100042a4;
    case 0x100042afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100042af;
    case 0x100042c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100042c1;
    case 0x100042c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100042c8;
    case 0x100042dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100042da;
    case 0x100042e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100042e5;
    case 0x100042fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100042fc;
    case 0x10004306u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10004306;
    case 0x10004315u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10004315;
    case 0x10004322u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10004322;
    case 0x10004337u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10004337;
    case 0x10004346u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10004346;
    case 0x10004358u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10004358;
    case 0x1000435eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1000435e;
    case 0x10004384u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10004384;
    case 0x10004389u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10004389;
    case 0x100043a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100043a0;
    case 0x100043aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100043aa;
    case 0x100043b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100043b9;
    case 0x100043c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100043c2;
    case 0x100043d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100043d7;
    case 0x100043e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100043e6;
    case 0x100043f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100043f8;
    case 0x100043feu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100043fe;
    case 0x10004424u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10004424;
    case 0x1000442du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1000442d;
    case 0x10004438u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10004438;
    case 0x10004440u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10004440;
    case 0x10004447u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10004447;
    case 0x10004452u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0xc2e24u); in_esi = rd32(sp0 - 0xc2e20u); in_ebp = rd32(sp0 - 0xc2e1cu); g->ebp = rd32(sp0 - 0xc2e1cu); g->edi = rd32(sp0 - 0xc2e24u); g->esi = rd32(sp0 - 0xc2e20u); goto E_10004452;
    case 0x10004461u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10004461;
    case 0x1000446bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1000446b;
    case 0x10004481u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10004481;
    case 0x1000448cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1000448c;
    case 0x10004492u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10004492;
    case 0x100044a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100044a0;
    case 0x100044b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100044b2;
    case 0x100044bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100044bd;
    case 0x100044cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100044cf;
    case 0x100044dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100044da;
    case 0x100044ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100044ec;
    case 0x100044f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100044f7;
    case 0x10004509u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10004509;
    case 0x10004514u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10004514;
    case 0x1000452bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1000452b;
    case 0x10004535u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10004535;
    case 0x10004544u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10004544;
    case 0x10004551u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10004551;
    case 0x10004566u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10004566;
    case 0x10004575u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10004575;
    case 0x10004584u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10004584;
    case 0x1000458au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1000458a;
    case 0x100045adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100045ad;
    case 0x100045b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100045b2;
    case 0x100045c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100045c9;
    case 0x100045d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100045d3;
    case 0x100045e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100045e2;
    case 0x100045efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100045ef;
    case 0x10004604u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10004604;
    case 0x10004616u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10004616;
    case 0x10004628u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10004628;
    case 0x1000462eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1000462e;
    case 0x10004657u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10004657;
    case 0x1000465cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1000465c;
    case 0x10004673u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10004673;
    case 0x1000467du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1000467d;
    case 0x1000468cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1000468c;
    case 0x10004695u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10004695;
    case 0x100046aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100046aa;
    case 0x100046bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100046bc;
    case 0x100046ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100046ce;
    case 0x100046d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100046d4;
    case 0x100046fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100046fd;
    case 0x10004706u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10004706;
    case 0x10004711u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10004711;
    case 0x10004719u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10004719;
    case 0x10004720u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c2e24 = rd32(sp0 - 0xc2e24u); loc_c2e20 = rd32(sp0 - 0xc2e20u); loc_c2e1c = rd32(sp0 - 0xc2e1cu); loc_c2e18 = rd32(sp0 - 0xc2e18u); goto E_10004720;
    default: break;
    }
#endif

    COW_AT(10004060)
    COW_AT(1000406a)
    wr32(sp0 - 0xc2e18u, in_ebx);
    wr32(sp0 - 0xc2e1cu, in_ebp);
    wr32(sp0 - 0xc2e20u, in_esi);
    wr32(sp0 - 0xc2e24u, in_edi);
    wr32(COW_IMG(0x10455afcu), arg1);
    wr32(COW_IMG(0x10455b00u), 0u);
    if (arg1 + 1u > 0xbu)
    {
        eax = arg1 + 1u;
        edx = in_edx;
        loc_c2e18 = in_ebx;
        loc_c2e1c = in_ebp;
        loc_c2e20 = in_esi;
        loc_c2e24 = in_edi;
        goto L_10004720;
    }
    COW_AT(1000408c)
    t1 = rd32(COW_IMG(0x1000472cu) + rd8(COW_IMG(0x10004740u) + arg1 + 1u) * 4u);
    switch (t1 - RD)
    {
    case 0x1000409bu: ecx = rd8(COW_IMG(0x10004740u) + arg1 + 1u); goto L_1000409b;
    case 0x10004120u: ecx = rd8(COW_IMG(0x10004740u) + arg1 + 1u); goto L_10004120;
    case 0x10004227u: goto L_10004227;
    case 0x10004452u: ecx = rd8(COW_IMG(0x10004740u) + arg1 + 1u); goto L_10004452;
    case 0x10004720u: eax = arg1 + 1u; edx = in_edx; loc_c2e18 = in_ebx; loc_c2e1c = in_ebp; loc_c2e20 = in_esi; loc_c2e24 = in_edi; goto L_10004720;
    default: rt_fatal(g, COW_IMG(0x10004094u), "switch");
    }
    return 0;
L_1000409b: ;
    COW_AT(1000409b)
    wr32(sp0 - 0xc2e28u, COW_IMG(0x1034f7f4u));
    wr32(sp0 - 0xc2e2cu, sp0 - 0xc2ddcu);
    g->ebx = in_ebx;
    g->ecx = ecx;
    g->edx = sp0 - 0xc2ddcu;
    g->esp = sp0 - 0xc2e18u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0xc2ddcu, COW_IMG(0x1034f7f4u), in_edi, in_esi, in_ebp);
    t157 = g->ecx;
    t158 = g->edx;
    ecx = t157;
    edx = t158;
    COW_AT(100040aa)
    wr32(sp0 - 0xc2e30u, sp0 - 0xc2ddcu);
    g->eax = sp0 - 0xc2ddcu;
    g->esp = sp0 - 0xc2e2cu;
    t159 = cow_call_regs(g, COW_IMG(0x10004dd0u), g->eax, ecx, edx, 1, 1, sp0 - 0xc2ddcu);
    eax = t159;
    COW_AT(100040b4)
    wr32(sp0 - 0xc2e28u, sp0 - 0xc2cd8u);
    wr32(sp0 - 0xc2e2cu, sp0 - 0xc2ddcu);
    g->eax = eax;
    g->ecx = sp0 - 0xc2cd8u;
    g->edx = sp0 - 0xc2ddcu;
    g->esp = sp0 - 0xc2e24u;
    t160 = cow_stdcall(g, rd32(COW_IMG(0x10329128u)), 2, sp0 - 0xc2ddcu, sp0 - 0xc2cd8u);   /* kernel32.dll!FindFirstFileA */
    t161 = g->ecx;
    t162 = g->edx;
    eax = t160;
    ecx = t161;
    edx = t162;
    COW_AT(100040ca)
    if (eax == 0xffffffffu)
    {
        loc_c2e18 = rd32(sp0 - 0xc2e18u);
        loc_c2e1c = rd32(sp0 - 0xc2e1cu);
        loc_c2e20 = rd32(sp0 - 0xc2e20u);
        loc_c2e24 = rd32(sp0 - 0xc2e24u);
        goto L_10004720;
    }
    esi = eax;
    COW_AT(100040d5)
    ebp = rd32(COW_IMG(0x10329124u));
    edi = rd32(COW_IMG(0x10329120u));
L_100040e1: ;
    COW_AT(100040e1)
    if ((rd8(sp0 - 0xc2cd8u) & 0x10u) == 0u)
    {
    COW_AT(100040eb)
        wr32(sp0 - 0xc2e28u, sp0 - 0xc2cacu);
        g->eax = sp0 - 0xc2cacu;
        g->edx = edx;
        g->esp = sp0 - 0xc2e24u;
        t163 = cow_thiscall(g, ebp, ecx, 1, sp0 - 0xc2cacu);
        t164 = g->edx;
        eax = t163;
        edx = t164;
    }
    COW_AT(100040f5)
    wr32(sp0 - 0xc2e28u, sp0 - 0xc2cd8u);
    wr32(sp0 - 0xc2e2cu, esi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xc2e24u;
    t165 = cow_thiscall(g, edi, sp0 - 0xc2cd8u, 2, esi, sp0 - 0xc2cd8u);
    t166 = g->ecx;
    t167 = g->edx;
    eax = t165;
    ecx = t166;
    edx = t167;
    COW_AT(10004100)
    if (eax != 0u) goto L_100040e1;
    COW_AT(10004104)
    wr32(sp0 - 0xc2e28u, esi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xc2e24u;
    t168 = cow_stdcall(g, rd32(COW_IMG(0x1032911cu)), 1, esi);   /* kernel32.dll!FindClose */
    t169 = g->edx;
    eax = t168;
    edx = t169;
    COW_AT(1000410b)
    t170 = rd32(sp0 - 0xc2e1cu);
    t171 = rd32(sp0 - 0xc2e20u);
    t172 = rd32(sp0 - 0xc2e24u);
    wr32(COW_IMG(0x10455afcu), 0u);
    g->ebx = rd32(sp0 - 0xc2e18u);
    g->esi = t171;
    g->edi = t172;
    g->ebp = t170;
    g->edx = edx;
    return eax;
L_10004120: ;
    COW_AT(10004120)
    wr32(sp0 - 0xc2e28u, COW_IMG(0x1034f7ecu));
    wr32(sp0 - 0xc2e2cu, sp0 - 0xc2ddcu);
    g->ebx = in_ebx;
    g->ecx = ecx;
    g->edx = sp0 - 0xc2ddcu;
    g->esp = sp0 - 0xc2e18u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0xc2ddcu, COW_IMG(0x1034f7ecu), in_edi, in_esi, in_ebp);
    t128 = g->ecx;
    t129 = g->edx;
    ecx = t128;
    edx = t129;
    COW_AT(1000412f)
    wr32(sp0 - 0xc2e30u, sp0 - 0xc2ddcu);
    g->eax = sp0 - 0xc2ddcu;
    g->esp = sp0 - 0xc2e2cu;
    t130 = cow_call_regs(g, COW_IMG(0x10004dd0u), g->eax, ecx, edx, 1, 1, sp0 - 0xc2ddcu);
    eax = t130;
    COW_AT(10004139)
    wr32(sp0 - 0xc2e28u, sp0 - 0xc2cd8u);
    wr32(sp0 - 0xc2e2cu, sp0 - 0xc2ddcu);
    g->eax = eax;
    g->ecx = sp0 - 0xc2cd8u;
    g->edx = sp0 - 0xc2ddcu;
    g->esp = sp0 - 0xc2e24u;
    t131 = cow_stdcall(g, rd32(COW_IMG(0x10329128u)), 2, sp0 - 0xc2ddcu, sp0 - 0xc2cd8u);   /* kernel32.dll!FindFirstFileA */
    t132 = g->ecx;
    t133 = g->edx;
    eax = t131;
    ecx = t132;
    edx = t133;
    COW_AT(1000414f)
    if (eax == 0xffffffffu)
    {
        loc_c2e18 = rd32(sp0 - 0xc2e18u);
        loc_c2e1c = rd32(sp0 - 0xc2e1cu);
        loc_c2e20 = rd32(sp0 - 0xc2e20u);
        loc_c2e24 = rd32(sp0 - 0xc2e24u);
        goto L_10004720;
    }
    ebx = eax;
    COW_AT(1000415a)
    ebp = rd32(COW_IMG(0x10329120u));
L_10004165: ;
    COW_AT(10004165)
    if ((rd8(sp0 - 0xc2cd8u) & 0x10u) == 0u)
    {
    COW_AT(10004173)
        wr32(sp0 - 0xc2e28u, COW_IMG(0x1034f7e8u));
        wr32(sp0 - 0xc2e2cu, sp0 - 0xc2cacu);
        g->ecx = ecx;
        g->esp = sp0 - 0xc2e10u;
        t134 = cow_call_regs(g, COW_IMG(0x10311ef0u), sp0 - 0xc2cacu, g->ecx, edx, 1, 7, sp0 - 0xc2cacu, COW_IMG(0x1034f7e8u), rd32(sp0 - 0xc2e24u), rd32(sp0 - 0xc2e20u), rd32(sp0 - 0xc2e1cu), rd32(sp0 - 0xc2e18u), rd32(sp0 - 0xc2e14u));
        t135 = g->ecx;
        t136 = g->edx;
        eax = t134;
        ecx = t135;
        edx = t136;
    COW_AT(10004185)
        if (eax != 0u) goto L_100041a5;
    COW_AT(1000418c)
        wr32(sp0 - 0xc2e28u, COW_IMG(0x1034f7e4u));
        wr32(sp0 - 0xc2e2cu, sp0 - 0xc2cacu);
        g->ecx = sp0 - 0xc2cacu;
        g->esp = sp0 - 0xc2e10u;
        t137 = cow_call_regs(g, COW_IMG(0x10311ef0u), eax, g->ecx, edx, 1, 7, sp0 - 0xc2cacu, COW_IMG(0x1034f7e4u), rd32(sp0 - 0xc2e24u), rd32(sp0 - 0xc2e20u), rd32(sp0 - 0xc2e1cu), rd32(sp0 - 0xc2e18u), rd32(sp0 - 0xc2e14u));
        t138 = g->ecx;
        t139 = g->edx;
        eax = t137;
        ecx = t138;
        edx = t139;
    COW_AT(1000419e)
        if (eax == 0u) goto L_10004202;
L_100041a5: ;
    COW_AT(100041a5)
        wr32(sp0 - 0xc2e28u, sp0 - 0xc2cacu);
        wr32(sp0 - 0xc2e2cu, COW_IMG(0x1034f7e0u));
        wr32(sp0 - 0xc2e30u, sp0 - 0xc2ddcu);
        g->ebx = ebx;
        g->eax = sp0 - 0xc2ddcu;
        g->edx = sp0 - 0xc2cacu;
        g->esp = sp0 - 0xc2e1cu;
        t140 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0xc2ddcu, COW_IMG(0x1034f7e0u), sp0 - 0xc2cacu, rd32(sp0 - 0xc2e24u), rd32(sp0 - 0xc2e20u));
        t141 = g->edx;
        eax = t140;
        edx = t141;
    COW_AT(100041bc)
        wr32(sp0 - 0xc2e34u, sp0 - 0xc2ddcu);
        g->eax = eax;
        g->esp = sp0 - 0xc2e30u;
        t142 = cow_call_regs(g, COW_IMG(0x10004dd0u), g->eax, sp0 - 0xc2ddcu, edx, 1, 1, sp0 - 0xc2ddcu);
        t143 = g->ecx;
        eax = t142;
        ecx = t143;
    COW_AT(100041c6)
        wr32(sp0 - 0xc2e38u, COW_IMG(0x1034f2d0u));
        wr32(sp0 - 0xc2e3cu, sp0 - 0xc2ddcu);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = sp0 - 0xc2ddcu;
        g->esp = sp0 - 0xc2e28u;
        t144 = cow_cdecl(g, COW_IMG(0x1031201eu), 5, sp0 - 0xc2ddcu, COW_IMG(0x1034f2d0u), sp0 - 0xc2ddcu, sp0 - 0xc2ddcu, rd32(sp0 - 0xc2e2cu));
        t145 = g->ecx;
        t146 = g->edx;
        eax = t144;
        ecx = t145;
        edx = t146;
    COW_AT(100041d5)
        if (eax != 0u)
        {
            esi = eax;
    COW_AT(100041de)
            wr32(sp0 - 0xc2e28u, esi);
            wr32(sp0 - 0xc2e2cu, 1u);
            wr32(sp0 - 0xc2e30u, 0x40e38u);
            wr32(sp0 - 0xc2e34u, COW_IMG(0x10414cc0u));
            wr32(COW_IMG(0x104dfd98u), COW_IMG(0x10414cc0u));
            g->eax = eax;
            g->ecx = ecx;
            g->esp = sp0 - 0xc2e1cu;
            t147 = cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, edx, 1, 6, COW_IMG(0x10414cc0u), 0x40e38u, 1u, esi, rd32(sp0 - 0xc2e24u), rd32(sp0 - 0xc2e20u));
            t148 = g->ecx;
            t149 = g->edx;
            eax = t147;
            ecx = t148;
            edx = t149;
    COW_AT(100041f2)
            wr32(sp0 - 0xc2e38u, esi);
            g->edi = COW_IMG(0x10414cc0u);
            g->ecx = ecx;
            g->esp = sp0 - 0xc2e2cu;
            cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, edx, 1, 3, esi, rd32(sp0 - 0xc2e34u), 0x40e38u);
            t150 = g->ecx;
            t151 = g->edx;
            ecx = t150;
            edx = t151;
    COW_AT(100041f8)
            wr8(COW_IMG(0x10482f43u), 1u);
        }
    }
L_10004202: ;
    COW_AT(10004202)
    wr32(sp0 - 0xc2e28u, sp0 - 0xc2cd8u);
    wr32(sp0 - 0xc2e2cu, ebx);
    g->eax = sp0 - 0xc2cd8u;
    g->edx = edx;
    g->esp = sp0 - 0xc2e24u;
    t152 = cow_thiscall(g, ebp, ecx, 2, ebx, sp0 - 0xc2cd8u);
    t153 = g->ecx;
    t154 = g->edx;
    eax = t152;
    ecx = t153;
    edx = t154;
    COW_AT(1000420d)
    if (eax != 0u) goto L_10004165;
    COW_AT(10004215)
    wr32(sp0 - 0xc2e28u, ebx);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xc2e24u;
    t155 = cow_stdcall(g, rd32(COW_IMG(0x1032911cu)), 1, ebx);   /* kernel32.dll!FindClose */
    t156 = g->edx;
    eax = t155;
    edx = t156;
    COW_AT(1000421c)
    g->ebx = rd32(sp0 - 0xc2e18u);
    g->esi = rd32(sp0 - 0xc2e20u);
    g->edi = rd32(sp0 - 0xc2e24u);
    g->ebp = rd32(sp0 - 0xc2e1cu);
    g->edx = edx;
    return eax;
L_10004227: ;
    COW_AT(10004227)
    wr32(sp0 - 0xc2e28u, COW_IMG(0x1034f7d8u));
    wr32(sp0 - 0xc2e2cu, sp0 - 0xc2ddcu);
    g->ebx = in_ebx;
    g->eax = arg1 + 1u;
    g->ecx = sp0 - 0xc2ddcu;
    g->esp = sp0 - 0xc2e18u;
    t73 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0xc2ddcu, COW_IMG(0x1034f7d8u), in_edi, in_esi, in_ebp);
    t74 = g->ecx;
    eax = t73;
    ecx = t74;
    COW_AT(10004236)
    wr32(sp0 - 0xc2e30u, sp0 - 0xc2ddcu);
    g->esp = sp0 - 0xc2e2cu;
    cow_call_regs(g, COW_IMG(0x10004dd0u), g->eax, ecx, sp0 - 0xc2ddcu, 1, 1, sp0 - 0xc2ddcu);
    t75 = g->edx;
    edx = t75;
    COW_AT(10004240)
    wr32(sp0 - 0xc2e28u, sp0 - 0xc2cd8u);
    wr32(sp0 - 0xc2e2cu, sp0 - 0xc2ddcu);
    g->eax = sp0 - 0xc2cd8u;
    g->ecx = sp0 - 0xc2ddcu;
    g->edx = edx;
    g->esp = sp0 - 0xc2e24u;
    t76 = cow_stdcall(g, rd32(COW_IMG(0x10329128u)), 2, sp0 - 0xc2ddcu, sp0 - 0xc2cd8u);   /* kernel32.dll!FindFirstFileA */
    t77 = g->ecx;
    t78 = g->edx;
    eax = t76;
    ecx = t77;
    edx = t78;
    COW_AT(10004256)
    if (eax == 0xffffffffu)
    {
        loc_c2e18 = rd32(sp0 - 0xc2e18u);
        loc_c2e1c = rd32(sp0 - 0xc2e1cu);
        loc_c2e20 = rd32(sp0 - 0xc2e20u);
        loc_c2e24 = rd32(sp0 - 0xc2e24u);
        goto L_10004720;
    }
    ebp = eax;
    COW_AT(10004261)
    ebx = rd32(COW_IMG(0x10329120u));
L_10004267: ;
    COW_AT(10004267)
    if ((rd8(sp0 - 0xc2cd8u) & 0x10u) == 0u)
    {
    COW_AT(10004275)
        wr32(sp0 - 0xc2e28u, COW_IMG(0x1034f7d4u));
        wr32(sp0 - 0xc2e2cu, sp0 - 0xc2cacu);
        g->ecx = ecx;
        g->esp = sp0 - 0xc2e10u;
        t79 = cow_call_regs(g, COW_IMG(0x10311ef0u), eax, g->ecx, sp0 - 0xc2cacu, 1, 7, sp0 - 0xc2cacu, COW_IMG(0x1034f7d4u), rd32(sp0 - 0xc2e24u), rd32(sp0 - 0xc2e20u), rd32(sp0 - 0xc2e1cu), rd32(sp0 - 0xc2e18u), rd32(sp0 - 0xc2e14u));
        t80 = g->ecx;
        t81 = g->edx;
        eax = t79;
        ecx = t80;
        edx = t81;
    COW_AT(10004287)
        if (eax != 0u) goto L_10004389;
    COW_AT(10004292)
        wr32(sp0 - 0xc2e28u, COW_IMG(0x1034f7d0u));
        wr32(sp0 - 0xc2e2cu, sp0 - 0xc2cacu);
        g->esp = sp0 - 0xc2e10u;
        t82 = cow_call_regs(g, COW_IMG(0x10311ef0u), sp0 - 0xc2cacu, g->ecx, edx, 1, 7, sp0 - 0xc2cacu, COW_IMG(0x1034f7d0u), rd32(sp0 - 0xc2e24u), rd32(sp0 - 0xc2e20u), rd32(sp0 - 0xc2e1cu), rd32(sp0 - 0xc2e18u), rd32(sp0 - 0xc2e14u));
        t83 = g->edx;
        eax = t82;
        edx = t83;
    COW_AT(100042a4)
        if (eax != 0u) goto L_10004389;
    COW_AT(100042af)
        wr32(sp0 - 0xc2e28u, COW_IMG(0x1034f7ccu));
        wr32(sp0 - 0xc2e2cu, sp0 - 0xc2cacu);
        g->ecx = sp0 - 0xc2cacu;
        g->esp = sp0 - 0xc2e10u;
        t84 = cow_call_regs(g, COW_IMG(0x10311ef0u), eax, g->ecx, edx, 1, 7, sp0 - 0xc2cacu, COW_IMG(0x1034f7ccu), rd32(sp0 - 0xc2e24u), rd32(sp0 - 0xc2e20u), rd32(sp0 - 0xc2e1cu), rd32(sp0 - 0xc2e18u), rd32(sp0 - 0xc2e14u));
        t85 = g->ecx;
        t86 = g->edx;
        eax = t84;
        ecx = t85;
        edx = t86;
    COW_AT(100042c1)
        if (eax != 0u) goto L_100042e5;
    COW_AT(100042c8)
        wr32(sp0 - 0xc2e28u, COW_IMG(0x1034f7c8u));
        wr32(sp0 - 0xc2e2cu, sp0 - 0xc2cacu);
        g->ecx = ecx;
        g->esp = sp0 - 0xc2e10u;
        t87 = cow_call_regs(g, COW_IMG(0x10311ef0u), eax, g->ecx, sp0 - 0xc2cacu, 1, 7, sp0 - 0xc2cacu, COW_IMG(0x1034f7c8u), rd32(sp0 - 0xc2e24u), rd32(sp0 - 0xc2e20u), rd32(sp0 - 0xc2e1cu), rd32(sp0 - 0xc2e18u), rd32(sp0 - 0xc2e14u));
        t88 = g->ecx;
        t89 = g->edx;
        eax = t87;
        ecx = t88;
        edx = t89;
    COW_AT(100042da)
        if (eax == 0u) goto L_1000442d;
L_100042e5: ;
    COW_AT(100042e5)
        wr32(sp0 - 0xc2e28u, sp0 - 0xc2cacu);
        wr32(sp0 - 0xc2e2cu, COW_IMG(0x1034f7e0u));
        wr32(sp0 - 0xc2e30u, sp0 - 0xc2ddcu);
        g->ebx = ebx;
        g->eax = sp0 - 0xc2cacu;
        g->ecx = sp0 - 0xc2ddcu;
        g->esp = sp0 - 0xc2e1cu;
        t90 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0xc2ddcu, COW_IMG(0x1034f7e0u), sp0 - 0xc2cacu, rd32(sp0 - 0xc2e24u), rd32(sp0 - 0xc2e20u));
        t91 = g->ecx;
        eax = t90;
        ecx = t91;
    COW_AT(100042fc)
        wr32(sp0 - 0xc2e34u, sp0 - 0xc2ddcu);
        g->esp = sp0 - 0xc2e30u;
        cow_call_regs(g, COW_IMG(0x10004dd0u), g->eax, ecx, sp0 - 0xc2ddcu, 1, 1, sp0 - 0xc2ddcu);
        t92 = g->ecx;
        t93 = g->edx;
        ecx = t92;
        edx = t93;
    COW_AT(10004306)
        wr32(sp0 - 0xc2e38u, COW_IMG(0x1034f2d0u));
        wr32(sp0 - 0xc2e3cu, sp0 - 0xc2ddcu);
        g->eax = sp0 - 0xc2ddcu;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0xc2e28u;
        t94 = cow_cdecl(g, COW_IMG(0x1031201eu), 5, sp0 - 0xc2ddcu, COW_IMG(0x1034f2d0u), sp0 - 0xc2ddcu, sp0 - 0xc2ddcu, rd32(sp0 - 0xc2e2cu));
        t95 = g->ecx;
        t96 = g->edx;
        eax = t94;
        ecx = t95;
        edx = t96;
    COW_AT(10004315)
        if (eax == 0u) goto L_1000442d;
        esi = eax;
    COW_AT(10004322)
        wr32(sp0 - 0xc2e28u, esi);
        wr32(sp0 - 0xc2e2cu, 1u);
        wr32(sp0 - 0xc2e30u, 0x40e38u);
        wr32(sp0 - 0xc2e34u, sp0 - 0x81c70u);
        g->eax = eax;
        g->ecx = sp0 - 0x81c70u;
        g->esp = sp0 - 0xc2e1cu;
        t97 = cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, edx, 1, 6, sp0 - 0x81c70u, 0x40e38u, 1u, esi, rd32(sp0 - 0xc2e24u), rd32(sp0 - 0xc2e20u));
        t98 = g->ecx;
        eax = t97;
        ecx = t98;
    COW_AT(10004337)
        wr32(sp0 - 0xc2e38u, esi);
        wr32(sp0 - 0xc2e3cu, 1u);
        wr32(sp0 - 0xc2e40u, 0x1cu);
        wr32(sp0 - 0xc2e44u, sp0 - 0xc2df8u);
        g->ecx = ecx;
        g->esp = sp0 - 0xc2e2cu;
        cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, sp0 - 0xc2df8u, 1, 6, sp0 - 0xc2df8u, 0x1cu, 1u, esi, sp0 - 0x81c70u, 0x40e38u);
        t99 = g->ecx;
        t100 = g->edx;
        ecx = t99;
        edx = t100;
    COW_AT(10004346)
        wr32(sp0 - 0xc2e48u, esi);
        wr32(sp0 - 0xc2e4cu, 1u);
        wr32(sp0 - 0xc2e50u, 0x48u);
        wr32(sp0 - 0xc2e54u, sp0 - 0xc2b60u);
        g->eax = sp0 - 0xc2b60u;
        g->ecx = ecx;
        g->esp = sp0 - 0xc2e3cu;
        t101 = cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, edx, 1, 6, sp0 - 0xc2b60u, 0x48u, 1u, esi, sp0 - 0xc2df8u, 0x1cu);
        t102 = g->ecx;
        t103 = g->edx;
        eax = t101;
        ecx = t102;
        edx = t103;
    COW_AT(10004358)
        wr32(sp0 - 0xc2e58u, esi);
        g->edi = 0u;
        g->esp = sp0 - 0xc2e4cu;
        cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, edx, 1, 3, esi, sp0 - 0xc2b60u, 0x48u);
    COW_AT(1000435e)
        wr32(sp0 - 0xc2e5cu, sp0 - 0xc2b60u);
        wr32(sp0 - 0xc2e60u, sp0 - 0xc2df8u);
        wr32(sp0 - 0xc2e64u, sp0 - 0x81c70u);
        t104 = rd32(COW_IMG(0x10455afcu));
        wr32(COW_IMG(0x10455afcu), 0u);
        g->ecx = sp0 - 0xc2b60u;
        g->esp = sp0 - 0xc2dc0u;
        t105 = cow_bridge_indirect(g, COW_IMG(0x1009b550u), 0u, 41u, (const uint32_t[]){sp0 - 0x81c70u, sp0 - 0xc2df8u, sp0 - 0xc2b60u, rd32(sp0 - 0xc2e58u), sp0 - 0xc2b60u, rd32(sp0 - 0xc2e50u), rd32(sp0 - 0xc2e4cu), rd32(sp0 - 0xc2e48u), sp0 - 0xc2df8u, rd32(sp0 - 0xc2e40u), rd32(sp0 - 0xc2e3cu), rd32(sp0 - 0xc2e38u), sp0 - 0x81c70u, rd32(sp0 - 0xc2e30u), rd32(sp0 - 0xc2e2cu), rd32(sp0 - 0xc2e28u), rd32(sp0 - 0xc2e24u), rd32(sp0 - 0xc2e20u), rd32(sp0 - 0xc2e1cu), rd32(sp0 - 0xc2e18u), rd32(sp0 - 0xc2e14u), rd32(sp0 - 0xc2e10u), rd32(sp0 - 0xc2e0cu), rd32(sp0 - 0xc2e08u), rd32(sp0 - 0xc2e04u), rd32(sp0 - 0xc2e00u), rd32(sp0 - 0xc2dfcu), rd32(sp0 - 0xc2df8u), rd32(sp0 - 0xc2df4u), rd32(sp0 - 0xc2df0u), rd32(sp0 - 0xc2decu), rd32(sp0 - 0xc2de8u), rd32(sp0 - 0xc2de4u), rd32(sp0 - 0xc2de0u), rd32(sp0 - 0xc2ddcu), rd32(sp0 - 0xc2dd8u), rd32(sp0 - 0xc2dd4u), rd32(sp0 - 0xc2dd0u), rd32(sp0 - 0xc2dccu), rd32(sp0 - 0xc2dc8u), rd32(sp0 - 0xc2dc4u)}, g->ecx, g->edx, sp0 - 0x81c70u, 164u);
        t106 = g->ecx;
        eax = t105;
        ecx = t106;
        esi = t104;
    COW_AT(10004384)
L_10004424: ;
    COW_AT(10004424)
        wr32(COW_IMG(0x10455afcu), esi);
    }
L_1000442d: ;
    COW_AT(1000442d)
    wr32(sp0 - 0xc2e28u, sp0 - 0xc2cd8u);
    wr32(sp0 - 0xc2e2cu, ebp);
    g->eax = eax;
    g->edx = sp0 - 0xc2cd8u;
    g->esp = sp0 - 0xc2e24u;
    t123 = cow_thiscall(g, ebx, ecx, 2, ebp, sp0 - 0xc2cd8u);
    t124 = g->ecx;
    t125 = g->edx;
    eax = t123;
    ecx = t124;
    edx = t125;
    COW_AT(10004438)
    if (eax != 0u) goto L_10004267;
    COW_AT(10004440)
    wr32(sp0 - 0xc2e28u, ebp);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xc2e24u;
    t126 = cow_stdcall(g, rd32(COW_IMG(0x1032911cu)), 1, ebp);   /* kernel32.dll!FindClose */
    t127 = g->edx;
    eax = t126;
    edx = t127;
    COW_AT(10004447)
    g->ebx = rd32(sp0 - 0xc2e18u);
    g->esi = rd32(sp0 - 0xc2e20u);
    g->edi = rd32(sp0 - 0xc2e24u);
    g->ebp = rd32(sp0 - 0xc2e1cu);
    g->edx = edx;
    return eax;
L_10004389: ;
    COW_AT(10004389)
    wr32(sp0 - 0xc2e28u, sp0 - 0xc2cacu);
    wr32(sp0 - 0xc2e2cu, COW_IMG(0x1034f7e0u));
    wr32(sp0 - 0xc2e30u, sp0 - 0xc2ddcu);
    g->ebx = ebx;
    g->ecx = sp0 - 0xc2cacu;
    g->edx = sp0 - 0xc2ddcu;
    g->esp = sp0 - 0xc2e1cu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0xc2ddcu, COW_IMG(0x1034f7e0u), sp0 - 0xc2cacu, rd32(sp0 - 0xc2e24u), rd32(sp0 - 0xc2e20u));
    t107 = g->ecx;
    t108 = g->edx;
    ecx = t107;
    edx = t108;
    COW_AT(100043a0)
    wr32(sp0 - 0xc2e34u, sp0 - 0xc2ddcu);
    g->eax = sp0 - 0xc2ddcu;
    g->esp = sp0 - 0xc2e30u;
    t109 = cow_call_regs(g, COW_IMG(0x10004dd0u), g->eax, ecx, edx, 1, 1, sp0 - 0xc2ddcu);
    t110 = g->edx;
    eax = t109;
    edx = t110;
    COW_AT(100043aa)
    wr32(sp0 - 0xc2e38u, COW_IMG(0x1034f2d0u));
    wr32(sp0 - 0xc2e3cu, sp0 - 0xc2ddcu);
    g->eax = eax;
    g->ecx = sp0 - 0xc2ddcu;
    g->esp = sp0 - 0xc2e28u;
    t111 = cow_cdecl(g, COW_IMG(0x1031201eu), 5, sp0 - 0xc2ddcu, COW_IMG(0x1034f2d0u), sp0 - 0xc2ddcu, sp0 - 0xc2ddcu, rd32(sp0 - 0xc2e2cu));
    t112 = g->ecx;
    eax = t111;
    ecx = t112;
    COW_AT(100043b9)
    if (eax == 0u) goto L_1000442d;
    esi = eax;
    COW_AT(100043c2)
    wr32(sp0 - 0xc2e28u, esi);
    wr32(sp0 - 0xc2e2cu, 1u);
    wr32(sp0 - 0xc2e30u, 0x40e38u);
    wr32(sp0 - 0xc2e34u, sp0 - 0xc2aa8u);
    g->ecx = ecx;
    g->esp = sp0 - 0xc2e1cu;
    cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, sp0 - 0xc2aa8u, 1, 6, sp0 - 0xc2aa8u, 0x40e38u, 1u, esi, rd32(sp0 - 0xc2e24u), rd32(sp0 - 0xc2e20u));
    t113 = g->ecx;
    t114 = g->edx;
    ecx = t113;
    edx = t114;
    COW_AT(100043d7)
    wr32(sp0 - 0xc2e38u, esi);
    wr32(sp0 - 0xc2e3cu, 1u);
    wr32(sp0 - 0xc2e40u, 0x1cu);
    wr32(sp0 - 0xc2e44u, sp0 - 0xc2e14u);
    g->eax = sp0 - 0xc2e14u;
    g->esp = sp0 - 0xc2e2cu;
    t115 = cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, edx, 1, 6, sp0 - 0xc2e14u, 0x1cu, 1u, esi, sp0 - 0xc2aa8u, 0x40e38u);
    t116 = g->edx;
    eax = t115;
    edx = t116;
    COW_AT(100043e6)
    wr32(sp0 - 0xc2e48u, esi);
    wr32(sp0 - 0xc2e4cu, 1u);
    wr32(sp0 - 0xc2e50u, 0x5cu);
    wr32(sp0 - 0xc2e54u, sp0 - 0xc2b18u);
    g->eax = eax;
    g->ecx = sp0 - 0xc2b18u;
    g->esp = sp0 - 0xc2e3cu;
    t117 = cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, edx, 1, 6, sp0 - 0xc2b18u, 0x5cu, 1u, esi, sp0 - 0xc2e14u, 0x1cu);
    t118 = g->ecx;
    t119 = g->edx;
    eax = t117;
    ecx = t118;
    edx = t119;
    COW_AT(100043f8)
    wr32(sp0 - 0xc2e58u, esi);
    g->edi = 0u;
    g->esp = sp0 - 0xc2e4cu;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, edx, 1, 3, esi, sp0 - 0xc2b18u, 0x5cu);
    COW_AT(100043fe)
    wr32(sp0 - 0xc2e5cu, sp0 - 0xc2b18u);
    wr32(sp0 - 0xc2e60u, sp0 - 0xc2e14u);
    wr32(sp0 - 0xc2e64u, sp0 - 0xc2aa8u);
    t120 = rd32(COW_IMG(0x10455afcu));
    wr32(COW_IMG(0x10455afcu), 0u);
    g->ebx = ebx;
    g->eax = sp0 - 0xc2e14u;
    g->ecx = sp0 - 0xc2aa8u;
    g->esp = sp0 - 0xc2df0u;
    t121 = cow_bridge_indirect(g, COW_IMG(0x10099ae0u), 0u, 29u, (const uint32_t[]){sp0 - 0xc2aa8u, sp0 - 0xc2e14u, sp0 - 0xc2b18u, rd32(sp0 - 0xc2e58u), sp0 - 0xc2b18u, rd32(sp0 - 0xc2e50u), rd32(sp0 - 0xc2e4cu), rd32(sp0 - 0xc2e48u), sp0 - 0xc2e14u, rd32(sp0 - 0xc2e40u), rd32(sp0 - 0xc2e3cu), rd32(sp0 - 0xc2e38u), sp0 - 0xc2aa8u, rd32(sp0 - 0xc2e30u), rd32(sp0 - 0xc2e2cu), rd32(sp0 - 0xc2e28u), rd32(sp0 - 0xc2e24u), rd32(sp0 - 0xc2e20u), rd32(sp0 - 0xc2e1cu), rd32(sp0 - 0xc2e18u), rd32(sp0 - 0xc2e14u), rd32(sp0 - 0xc2e10u), rd32(sp0 - 0xc2e0cu), rd32(sp0 - 0xc2e08u), rd32(sp0 - 0xc2e04u), rd32(sp0 - 0xc2e00u), rd32(sp0 - 0xc2dfcu), rd32(sp0 - 0xc2df8u), rd32(sp0 - 0xc2df4u)}, g->ecx, g->edx, g->eax, 116u);
    t122 = g->ecx;
    eax = t121;
    ecx = t122;
    esi = t120;
    goto L_10004424;
L_10004452: ;
    COW_AT(10004452)
    wr32(sp0 - 0xc2e28u, COW_IMG(0x1034f7bcu));
    wr32(sp0 - 0xc2e2cu, sp0 - 0xc2ddcu);
    g->eax = sp0 - 0xc2ddcu;
    g->edx = in_edx;
    g->esp = sp0 - 0xc2e18u;
    t2 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0xc2ddcu, COW_IMG(0x1034f7bcu), in_edi, in_esi, in_ebp);
    t3 = g->edx;
    eax = t2;
    edx = t3;
    COW_AT(10004461)
    wr32(sp0 - 0xc2e30u, sp0 - 0xc2ddcu);
    g->esp = sp0 - 0xc2e2cu;
    cow_call_regs(g, COW_IMG(0x10004dd0u), g->eax, sp0 - 0xc2ddcu, edx, 1, 1, sp0 - 0xc2ddcu);
    t4 = g->ecx;
    ecx = t4;
    COW_AT(1000446b)
    wr32(sp0 - 0xc2e28u, sp0 - 0xc2cd8u);
    wr32(sp0 - 0xc2e2cu, sp0 - 0xc2ddcu);
    g->eax = sp0 - 0xc2ddcu;
    g->ecx = ecx;
    g->edx = sp0 - 0xc2cd8u;
    g->esp = sp0 - 0xc2e24u;
    t5 = cow_stdcall(g, rd32(COW_IMG(0x10329128u)), 2, sp0 - 0xc2ddcu, sp0 - 0xc2cd8u);   /* kernel32.dll!FindFirstFileA */
    t6 = g->ecx;
    t7 = g->edx;
    eax = t5;
    ecx = t6;
    edx = t7;
    COW_AT(10004481)
    if (eax == 0xffffffffu)
    {
        loc_c2e18 = rd32(sp0 - 0xc2e18u);
        loc_c2e1c = rd32(sp0 - 0xc2e1cu);
        loc_c2e20 = rd32(sp0 - 0xc2e20u);
        loc_c2e24 = rd32(sp0 - 0xc2e24u);
    }
    else
    {
        ebp = eax;
    COW_AT(1000448c)
        ebx = rd32(COW_IMG(0x10329120u));
L_10004492: ;
    COW_AT(10004492)
        if ((rd8(sp0 - 0xc2cd8u) & 0x10u) == 0u)
        {
    COW_AT(100044a0)
            wr32(sp0 - 0xc2e28u, COW_IMG(0x1034f7b8u));
            wr32(sp0 - 0xc2e2cu, sp0 - 0xc2cacu);
            g->ecx = sp0 - 0xc2cacu;
            g->esp = sp0 - 0xc2e10u;
            t8 = cow_call_regs(g, COW_IMG(0x10311ef0u), eax, g->ecx, edx, 1, 7, sp0 - 0xc2cacu, COW_IMG(0x1034f7b8u), rd32(sp0 - 0xc2e24u), rd32(sp0 - 0xc2e20u), rd32(sp0 - 0xc2e1cu), rd32(sp0 - 0xc2e18u), rd32(sp0 - 0xc2e14u));
            t9 = g->ecx;
            eax = t8;
            ecx = t9;
    COW_AT(100044b2)
            if (eax != 0u) goto L_1000465c;
    COW_AT(100044bd)
            wr32(sp0 - 0xc2e28u, COW_IMG(0x1034f7b4u));
            wr32(sp0 - 0xc2e2cu, sp0 - 0xc2cacu);
            g->ecx = ecx;
            g->esp = sp0 - 0xc2e10u;
            t10 = cow_call_regs(g, COW_IMG(0x10311ef0u), eax, g->ecx, sp0 - 0xc2cacu, 1, 7, sp0 - 0xc2cacu, COW_IMG(0x1034f7b4u), rd32(sp0 - 0xc2e24u), rd32(sp0 - 0xc2e20u), rd32(sp0 - 0xc2e1cu), rd32(sp0 - 0xc2e18u), rd32(sp0 - 0xc2e14u));
            t11 = g->ecx;
            t12 = g->edx;
            eax = t10;
            ecx = t11;
            edx = t12;
    COW_AT(100044cf)
            if (eax != 0u) goto L_1000465c;
    COW_AT(100044da)
            wr32(sp0 - 0xc2e28u, COW_IMG(0x1034f2a4u));
            wr32(sp0 - 0xc2e2cu, sp0 - 0xc2cacu);
            g->esp = sp0 - 0xc2e10u;
            t13 = cow_call_regs(g, COW_IMG(0x10311ef0u), sp0 - 0xc2cacu, g->ecx, edx, 1, 7, sp0 - 0xc2cacu, COW_IMG(0x1034f2a4u), rd32(sp0 - 0xc2e24u), rd32(sp0 - 0xc2e20u), rd32(sp0 - 0xc2e1cu), rd32(sp0 - 0xc2e18u), rd32(sp0 - 0xc2e14u));
            t14 = g->edx;
            eax = t13;
            edx = t14;
    COW_AT(100044ec)
            if (eax != 0u) goto L_100045b2;
    COW_AT(100044f7)
            wr32(sp0 - 0xc2e28u, COW_IMG(0x1034f7b0u));
            wr32(sp0 - 0xc2e2cu, sp0 - 0xc2cacu);
            g->ecx = sp0 - 0xc2cacu;
            g->esp = sp0 - 0xc2e10u;
            t15 = cow_call_regs(g, COW_IMG(0x10311ef0u), eax, g->ecx, edx, 1, 7, sp0 - 0xc2cacu, COW_IMG(0x1034f7b0u), rd32(sp0 - 0xc2e24u), rd32(sp0 - 0xc2e20u), rd32(sp0 - 0xc2e1cu), rd32(sp0 - 0xc2e18u), rd32(sp0 - 0xc2e14u));
            t16 = g->ecx;
            t17 = g->edx;
            eax = t15;
            ecx = t16;
            edx = t17;
    COW_AT(10004509)
            if (eax != 0u) goto L_100045b2;
    COW_AT(10004514)
            wr32(sp0 - 0xc2e28u, sp0 - 0xc2cacu);
            wr32(sp0 - 0xc2e2cu, COW_IMG(0x1034f7e0u));
            wr32(sp0 - 0xc2e30u, sp0 - 0xc2ddcu);
            g->ebx = ebx;
            g->eax = sp0 - 0xc2ddcu;
            g->edx = sp0 - 0xc2cacu;
            g->esp = sp0 - 0xc2e1cu;
            t18 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0xc2ddcu, COW_IMG(0x1034f7e0u), sp0 - 0xc2cacu, rd32(sp0 - 0xc2e24u), rd32(sp0 - 0xc2e20u));
            t19 = g->edx;
            eax = t18;
            edx = t19;
    COW_AT(1000452b)
            wr32(sp0 - 0xc2e34u, sp0 - 0xc2ddcu);
            g->eax = eax;
            g->esp = sp0 - 0xc2e30u;
            t20 = cow_call_regs(g, COW_IMG(0x10004dd0u), g->eax, sp0 - 0xc2ddcu, edx, 1, 1, sp0 - 0xc2ddcu);
            t21 = g->ecx;
            eax = t20;
            ecx = t21;
    COW_AT(10004535)
            wr32(sp0 - 0xc2e38u, COW_IMG(0x1034f2d0u));
            wr32(sp0 - 0xc2e3cu, sp0 - 0xc2ddcu);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = sp0 - 0xc2ddcu;
            g->esp = sp0 - 0xc2e28u;
            t22 = cow_cdecl(g, COW_IMG(0x1031201eu), 5, sp0 - 0xc2ddcu, COW_IMG(0x1034f2d0u), sp0 - 0xc2ddcu, sp0 - 0xc2ddcu, rd32(sp0 - 0xc2e2cu));
            t23 = g->ecx;
            t24 = g->edx;
            eax = t22;
            ecx = t23;
            edx = t24;
    COW_AT(10004544)
            if (eax == 0u) goto L_10004706;
            esi = eax;
    COW_AT(10004551)
            wr32(sp0 - 0xc2e28u, esi);
            wr32(sp0 - 0xc2e2cu, 1u);
            wr32(sp0 - 0xc2e30u, 0x40e38u);
            wr32(sp0 - 0xc2e34u, sp0 - 0xc2aa8u);
            g->eax = sp0 - 0xc2aa8u;
            g->esp = sp0 - 0xc2e1cu;
            t25 = cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, edx, 1, 6, sp0 - 0xc2aa8u, 0x40e38u, 1u, esi, rd32(sp0 - 0xc2e24u), rd32(sp0 - 0xc2e20u));
            t26 = g->edx;
            eax = t25;
            edx = t26;
    COW_AT(10004566)
            wr32(sp0 - 0xc2e38u, esi);
            wr32(sp0 - 0xc2e3cu, 1u);
            wr32(sp0 - 0xc2e40u, 0x1cu);
            wr32(sp0 - 0xc2e44u, sp0 - 0xc2e14u);
            g->eax = eax;
            g->ecx = sp0 - 0xc2e14u;
            g->esp = sp0 - 0xc2e2cu;
            t27 = cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, edx, 1, 6, sp0 - 0xc2e14u, 0x1cu, 1u, esi, sp0 - 0xc2aa8u, 0x40e38u);
            t28 = g->ecx;
            eax = t27;
            ecx = t28;
    COW_AT(10004575)
            wr32(sp0 - 0xc2e48u, esi);
            wr32(sp0 - 0xc2e4cu, 1u);
            wr32(sp0 - 0xc2e50u, 0x14u);
            wr32(sp0 - 0xc2e54u, sp0 - 0xc2df8u);
            g->eax = eax;
            g->ecx = ecx;
            g->esp = sp0 - 0xc2e3cu;
            t29 = cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, sp0 - 0xc2df8u, 1, 6, sp0 - 0xc2df8u, 0x14u, 1u, esi, sp0 - 0xc2e14u, 0x1cu);
            t30 = g->ecx;
            t31 = g->edx;
            eax = t29;
            ecx = t30;
            edx = t31;
    COW_AT(10004584)
            wr32(sp0 - 0xc2e58u, esi);
            g->edi = 0u;
            g->esp = sp0 - 0xc2e4cu;
            cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, edx, 1, 3, esi, sp0 - 0xc2df8u, 0x14u);
    COW_AT(1000458a)
            wr32(sp0 - 0xc2e5cu, sp0 - 0xc2df8u);
            wr32(sp0 - 0xc2e60u, sp0 - 0xc2e14u);
            wr32(sp0 - 0xc2e64u, sp0 - 0xc2aa8u);
            t32 = rd32(COW_IMG(0x10455afcu));
            wr32(COW_IMG(0x10455afcu), 0u);
            g->ebx = ebx;
            g->eax = sp0 - 0xc2df8u;
            g->esp = sp0 - 0xc2e58u;
            t33 = cow_thiscall_cdecl(g, COW_IMG(0x100a0200u), sp0 - 0xc2e14u, 3, sp0 - 0xc2aa8u, sp0 - 0xc2e14u, sp0 - 0xc2df8u);
            t34 = g->ecx;
            eax = t33;
            ecx = t34;
            esi = t32;
    COW_AT(100045ad)
L_100046fd: ;
    COW_AT(100046fd)
            wr32(COW_IMG(0x10455afcu), esi);
        }
L_10004706: ;
    COW_AT(10004706)
        wr32(sp0 - 0xc2e28u, sp0 - 0xc2cd8u);
        wr32(sp0 - 0xc2e2cu, ebp);
        g->eax = eax;
        g->edx = sp0 - 0xc2cd8u;
        g->esp = sp0 - 0xc2e24u;
        t68 = cow_thiscall(g, ebx, ecx, 2, ebp, sp0 - 0xc2cd8u);
        t69 = g->ecx;
        t70 = g->edx;
        eax = t68;
        ecx = t69;
        edx = t70;
    COW_AT(10004711)
        if (eax != 0u) goto L_10004492;
    COW_AT(10004719)
        wr32(sp0 - 0xc2e28u, ebp);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xc2e24u;
        t71 = cow_stdcall(g, rd32(COW_IMG(0x1032911cu)), 1, ebp);   /* kernel32.dll!FindClose */
        t72 = g->edx;
        eax = t71;
        edx = t72;
        loc_c2e18 = rd32(sp0 - 0xc2e18u);
        loc_c2e1c = rd32(sp0 - 0xc2e1cu);
        loc_c2e20 = rd32(sp0 - 0xc2e20u);
        loc_c2e24 = rd32(sp0 - 0xc2e24u);
    }
L_10004720: ;
    COW_AT(10004720)
    g->ebx = loc_c2e18;
    g->esi = loc_c2e20;
    g->edi = loc_c2e24;
    g->ebp = loc_c2e1c;
    g->edx = edx;
    return eax;
L_100045b2: ;
    COW_AT(100045b2)
    wr32(sp0 - 0xc2e28u, sp0 - 0xc2cacu);
    wr32(sp0 - 0xc2e2cu, COW_IMG(0x1034f7e0u));
    wr32(sp0 - 0xc2e30u, sp0 - 0xc2ddcu);
    g->ebx = ebx;
    g->eax = sp0 - 0xc2cacu;
    g->ecx = sp0 - 0xc2ddcu;
    g->esp = sp0 - 0xc2e1cu;
    t35 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0xc2ddcu, COW_IMG(0x1034f7e0u), sp0 - 0xc2cacu, rd32(sp0 - 0xc2e24u), rd32(sp0 - 0xc2e20u));
    t36 = g->ecx;
    eax = t35;
    ecx = t36;
    COW_AT(100045c9)
    wr32(sp0 - 0xc2e34u, sp0 - 0xc2ddcu);
    g->esp = sp0 - 0xc2e30u;
    cow_call_regs(g, COW_IMG(0x10004dd0u), g->eax, ecx, sp0 - 0xc2ddcu, 1, 1, sp0 - 0xc2ddcu);
    t37 = g->ecx;
    t38 = g->edx;
    ecx = t37;
    edx = t38;
    COW_AT(100045d3)
    wr32(sp0 - 0xc2e38u, COW_IMG(0x1034f2d0u));
    wr32(sp0 - 0xc2e3cu, sp0 - 0xc2ddcu);
    g->eax = sp0 - 0xc2ddcu;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xc2e28u;
    t39 = cow_cdecl(g, COW_IMG(0x1031201eu), 5, sp0 - 0xc2ddcu, COW_IMG(0x1034f2d0u), sp0 - 0xc2ddcu, sp0 - 0xc2ddcu, rd32(sp0 - 0xc2e2cu));
    t40 = g->ecx;
    t41 = g->edx;
    eax = t39;
    ecx = t40;
    edx = t41;
    COW_AT(100045e2)
    if (eax == 0u) goto L_10004706;
    esi = eax;
    COW_AT(100045ef)
    wr32(sp0 - 0xc2e28u, esi);
    wr32(sp0 - 0xc2e2cu, 1u);
    wr32(sp0 - 0xc2e30u, 0x40e38u);
    wr32(sp0 - 0xc2e34u, sp0 - 0x81c70u);
    g->eax = eax;
    g->ecx = sp0 - 0x81c70u;
    g->esp = sp0 - 0xc2e1cu;
    t42 = cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, edx, 1, 6, sp0 - 0x81c70u, 0x40e38u, 1u, esi, rd32(sp0 - 0xc2e24u), rd32(sp0 - 0xc2e20u));
    t43 = g->ecx;
    eax = t42;
    ecx = t43;
    COW_AT(10004604)
    wr32(sp0 - 0xc2e38u, esi);
    wr32(sp0 - 0xc2e3cu, 1u);
    wr32(sp0 - 0xc2e40u, 0x1cu);
    wr32(sp0 - 0xc2e44u, sp0 - 0xc2b7cu);
    g->ecx = ecx;
    g->esp = sp0 - 0xc2e2cu;
    cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, sp0 - 0xc2b7cu, 1, 6, sp0 - 0xc2b7cu, 0x1cu, 1u, esi, sp0 - 0x81c70u, 0x40e38u);
    t44 = g->ecx;
    t45 = g->edx;
    ecx = t44;
    edx = t45;
    COW_AT(10004616)
    wr32(sp0 - 0xc2e48u, esi);
    wr32(sp0 - 0xc2e4cu, 1u);
    wr32(sp0 - 0xc2e50u, 0x70u);
    wr32(sp0 - 0xc2e54u, sp0 - 0xc2b18u);
    g->eax = sp0 - 0xc2b18u;
    g->ecx = ecx;
    g->esp = sp0 - 0xc2e3cu;
    t46 = cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, edx, 1, 6, sp0 - 0xc2b18u, 0x70u, 1u, esi, sp0 - 0xc2b7cu, 0x1cu);
    t47 = g->ecx;
    t48 = g->edx;
    eax = t46;
    ecx = t47;
    edx = t48;
    COW_AT(10004628)
    wr32(sp0 - 0xc2e58u, esi);
    g->edi = 0u;
    g->esp = sp0 - 0xc2e4cu;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, edx, 1, 3, esi, sp0 - 0xc2b18u, 0x70u);
    COW_AT(1000462e)
    wr32(sp0 - 0xc2e5cu, sp0 - 0xc2b18u);
    wr32(sp0 - 0xc2e60u, sp0 - 0xc2b7cu);
    wr32(sp0 - 0xc2e64u, sp0 - 0x81c70u);
    t49 = rd32(COW_IMG(0x10455afcu));
    wr32(COW_IMG(0x10455afcu), 0u);
    g->ecx = sp0 - 0xc2b18u;
    g->esp = sp0 - 0xc2e58u;
    t50 = cow_call_regs(g, COW_IMG(0x100a03c0u), sp0 - 0x81c70u, g->ecx, g->edx, 1, 3, sp0 - 0x81c70u, sp0 - 0xc2b7cu, sp0 - 0xc2b18u);
    t51 = g->ecx;
    eax = t50;
    ecx = t51;
    esi = t49;
    COW_AT(10004657)
    goto L_100046fd;
L_1000465c: ;
    COW_AT(1000465c)
    wr32(sp0 - 0xc2e28u, sp0 - 0xc2cacu);
    wr32(sp0 - 0xc2e2cu, COW_IMG(0x1034f7e0u));
    wr32(sp0 - 0xc2e30u, sp0 - 0xc2ddcu);
    g->ebx = ebx;
    g->ecx = sp0 - 0xc2cacu;
    g->edx = sp0 - 0xc2ddcu;
    g->esp = sp0 - 0xc2e1cu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0xc2ddcu, COW_IMG(0x1034f7e0u), sp0 - 0xc2cacu, rd32(sp0 - 0xc2e24u), rd32(sp0 - 0xc2e20u));
    t52 = g->ecx;
    t53 = g->edx;
    ecx = t52;
    edx = t53;
    COW_AT(10004673)
    wr32(sp0 - 0xc2e34u, sp0 - 0xc2ddcu);
    g->eax = sp0 - 0xc2ddcu;
    g->esp = sp0 - 0xc2e30u;
    t54 = cow_call_regs(g, COW_IMG(0x10004dd0u), g->eax, ecx, edx, 1, 1, sp0 - 0xc2ddcu);
    t55 = g->edx;
    eax = t54;
    edx = t55;
    COW_AT(1000467d)
    wr32(sp0 - 0xc2e38u, COW_IMG(0x1034f2d0u));
    wr32(sp0 - 0xc2e3cu, sp0 - 0xc2ddcu);
    g->eax = eax;
    g->ecx = sp0 - 0xc2ddcu;
    g->esp = sp0 - 0xc2e28u;
    t56 = cow_cdecl(g, COW_IMG(0x1031201eu), 5, sp0 - 0xc2ddcu, COW_IMG(0x1034f2d0u), sp0 - 0xc2ddcu, sp0 - 0xc2ddcu, rd32(sp0 - 0xc2e2cu));
    t57 = g->ecx;
    eax = t56;
    ecx = t57;
    COW_AT(1000468c)
    if (eax == 0u) goto L_10004706;
    esi = eax;
    COW_AT(10004695)
    wr32(sp0 - 0xc2e28u, esi);
    wr32(sp0 - 0xc2e2cu, 1u);
    wr32(sp0 - 0xc2e30u, 0x40e38u);
    wr32(sp0 - 0xc2e34u, sp0 - 0x40e38u);
    g->ecx = ecx;
    g->esp = sp0 - 0xc2e1cu;
    cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, sp0 - 0x40e38u, 1, 6, sp0 - 0x40e38u, 0x40e38u, 1u, esi, rd32(sp0 - 0xc2e24u), rd32(sp0 - 0xc2e20u));
    t58 = g->ecx;
    t59 = g->edx;
    ecx = t58;
    edx = t59;
    COW_AT(100046aa)
    wr32(sp0 - 0xc2e38u, esi);
    wr32(sp0 - 0xc2e3cu, 1u);
    wr32(sp0 - 0xc2e40u, 0x1cu);
    wr32(sp0 - 0xc2e44u, sp0 - 0xc2b98u);
    g->eax = sp0 - 0xc2b98u;
    g->esp = sp0 - 0xc2e2cu;
    t60 = cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, edx, 1, 6, sp0 - 0xc2b98u, 0x1cu, 1u, esi, sp0 - 0x40e38u, 0x40e38u);
    t61 = g->edx;
    eax = t60;
    edx = t61;
    COW_AT(100046bc)
    wr32(sp0 - 0xc2e48u, esi);
    wr32(sp0 - 0xc2e4cu, 1u);
    wr32(sp0 - 0xc2e50u, 0x34u);
    wr32(sp0 - 0xc2e54u, sp0 - 0xc2b60u);
    g->eax = eax;
    g->ecx = sp0 - 0xc2b60u;
    g->esp = sp0 - 0xc2e3cu;
    t62 = cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, edx, 1, 6, sp0 - 0xc2b60u, 0x34u, 1u, esi, sp0 - 0xc2b98u, 0x1cu);
    t63 = g->ecx;
    t64 = g->edx;
    eax = t62;
    ecx = t63;
    edx = t64;
    COW_AT(100046ce)
    wr32(sp0 - 0xc2e58u, esi);
    g->edi = 0u;
    g->esp = sp0 - 0xc2e4cu;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, edx, 1, 3, esi, sp0 - 0xc2b60u, 0x34u);
    COW_AT(100046d4)
    wr32(sp0 - 0xc2e5cu, sp0 - 0xc2b60u);
    wr32(sp0 - 0xc2e60u, sp0 - 0xc2b98u);
    wr32(sp0 - 0xc2e64u, sp0 - 0x40e38u);
    t65 = rd32(COW_IMG(0x10455afcu));
    wr32(COW_IMG(0x10455afcu), 0u);
    g->ebx = ebx;
    g->eax = sp0 - 0xc2b98u;
    g->esp = sp0 - 0xc2e58u;
    t66 = cow_thiscall_cdecl(g, COW_IMG(0x100a02d0u), sp0 - 0x40e38u, 3, sp0 - 0x40e38u, sp0 - 0xc2b98u, sp0 - 0xc2b60u);
    t67 = g->ecx;
    eax = t66;
    ecx = t67;
    esi = t65;
    goto L_100046fd;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10004060(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1000406au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xc2e14u;
        (void)sp0;
        return 1;
    }
    case 0x1000408cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0xc2e24u);
        in_esi = rd32(sp0 - 0xc2e20u);
        in_ebp = rd32(sp0 - 0xc2e1cu);
        g->esp = sp0 - 0xc2e24u;
        g->eax = arg1 + 1u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e18u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1000409bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xc2e24u);
        in_esi = rd32(sp0 - 0xc2e20u);
        in_ebp = rd32(sp0 - 0xc2e1cu);
        g->esp = sp0 - 0xc2e24u;
        g->eax = arg1 + 1u;
        wr32(sp0 - 0xc2e18u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x100040aau:
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
        g->esp = sp0 - 0xc2e2cu;
        wr32(sp0 - 0xc2e2cu, sp0 - 0xc2ddcu);
        (void)sp0;
        return 1;
    }
    case 0x100040b4u:
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
        g->esp = sp0 - 0xc2e30u;
        wr32(sp0 - 0xc2e30u, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e2cu, sp0 - 0xc2ddcu);
        (void)sp0;
        return 1;
    }
    case 0x100040cau:
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
        g->esp = sp0 - 0xc2e24u;
        wr32(sp0 - 0xc2e30u, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e2cu, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e28u, sp0 - 0xc2cd8u);
        (void)sp0;
        return 1;
    }
    case 0x100040d5u:
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
        g->esp = sp0 - 0xc2e24u;
        wr32(sp0 - 0xc2e30u, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e2cu, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e28u, sp0 - 0xc2cd8u);
        (void)sp0;
        return 1;
    }
    case 0x100040e1u:
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
        g->esp = sp0 - 0xc2e24u;
        wr32(sp0 - 0xc2e30u, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e28u, sp0 - 0xc2cd8u);
        (void)sp0;
        return 1;
    }
    case 0x100040ebu:
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
        g->esp = sp0 - 0xc2e24u;
        wr32(sp0 - 0xc2e30u, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e28u, sp0 - 0xc2cd8u);
        (void)sp0;
        return 1;
    }
    case 0x100040f5u:
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
        g->esp = sp0 - 0xc2e24u;
        wr32(sp0 - 0xc2e30u, sp0 - 0xc2ddcu);
        (void)sp0;
        return 1;
    }
    case 0x10004100u:
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
        g->esp = sp0 - 0xc2e24u;
        wr32(sp0 - 0xc2e30u, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e28u, sp0 - 0xc2cd8u);
        (void)sp0;
        return 1;
    }
    case 0x10004104u:
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
        g->esp = sp0 - 0xc2e24u;
        wr32(sp0 - 0xc2e30u, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e28u, sp0 - 0xc2cd8u);
        (void)sp0;
        return 1;
    }
    case 0x1000410bu:
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
        g->esp = sp0 - 0xc2e24u;
        wr32(sp0 - 0xc2e30u, sp0 - 0xc2ddcu);
        (void)sp0;
        return 1;
    }
    case 0x10004120u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xc2e24u);
        in_esi = rd32(sp0 - 0xc2e20u);
        in_ebp = rd32(sp0 - 0xc2e1cu);
        g->esp = sp0 - 0xc2e24u;
        g->eax = arg1 + 1u;
        wr32(sp0 - 0xc2e18u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1000412fu:
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
        g->esp = sp0 - 0xc2e2cu;
        wr32(sp0 - 0xc2e2cu, sp0 - 0xc2ddcu);
        (void)sp0;
        return 1;
    }
    case 0x10004139u:
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
        g->esp = sp0 - 0xc2e30u;
        wr32(sp0 - 0xc2e30u, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e2cu, sp0 - 0xc2ddcu);
        (void)sp0;
        return 1;
    }
    case 0x1000414fu:
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
        g->esp = sp0 - 0xc2e24u;
        wr32(sp0 - 0xc2e30u, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e2cu, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e28u, sp0 - 0xc2cd8u);
        (void)sp0;
        return 1;
    }
    case 0x1000415au:
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
        g->esp = sp0 - 0xc2e24u;
        wr32(sp0 - 0xc2e30u, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e2cu, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e28u, sp0 - 0xc2cd8u);
        (void)sp0;
        return 1;
    }
    case 0x10004165u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e24u;
        g->edi = COW_IMG(0x10414cc0u);
        wr32(sp0 - 0xc2e28u, sp0 - 0xc2cd8u);
        (void)sp0;
        return 1;
    }
    case 0x10004173u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e24u;
        g->edi = COW_IMG(0x10414cc0u);
        wr32(sp0 - 0xc2e28u, sp0 - 0xc2cd8u);
        (void)sp0;
        return 1;
    }
    case 0x10004185u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e2cu;
        g->edi = COW_IMG(0x10414cc0u);
        wr32(sp0 - 0xc2e2cu, sp0 - 0xc2cacu);
        (void)sp0;
        return 1;
    }
    case 0x1000418cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e24u;
        g->edi = COW_IMG(0x10414cc0u);
        wr32(sp0 - 0xc2e2cu, sp0 - 0xc2cacu);
        (void)sp0;
        return 1;
    }
    case 0x1000419eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e2cu;
        g->edi = COW_IMG(0x10414cc0u);
        wr32(sp0 - 0xc2e2cu, sp0 - 0xc2cacu);
        (void)sp0;
        return 1;
    }
    case 0x100041a5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e24u;
        g->edi = COW_IMG(0x10414cc0u);
        wr32(sp0 - 0xc2e2cu, sp0 - 0xc2cacu);
        (void)sp0;
        return 1;
    }
    case 0x100041bcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e30u;
        g->edi = COW_IMG(0x10414cc0u);
        wr32(sp0 - 0xc2e30u, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e2cu, COW_IMG(0x1034f7e0u));
        wr32(sp0 - 0xc2e28u, sp0 - 0xc2cacu);
        (void)sp0;
        return 1;
    }
    case 0x100041c6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e34u;
        g->edi = COW_IMG(0x10414cc0u);
        wr32(sp0 - 0xc2e34u, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e30u, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e28u, sp0 - 0xc2cacu);
        (void)sp0;
        return 1;
    }
    case 0x100041d5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e3cu;
        g->edi = COW_IMG(0x10414cc0u);
        wr32(sp0 - 0xc2e3cu, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e34u, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e30u, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e28u, sp0 - 0xc2cacu);
        (void)sp0;
        return 1;
    }
    case 0x100041deu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e24u;
        g->edi = COW_IMG(0x10414cc0u);
        wr32(sp0 - 0xc2e3cu, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e34u, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e30u, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e28u, sp0 - 0xc2cacu);
        (void)sp0;
        return 1;
    }
    case 0x100041f2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e34u;
        g->edi = COW_IMG(0x10414cc0u);
        wr32(sp0 - 0xc2e3cu, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e30u, 0x40e38u);
        (void)sp0;
        return 1;
    }
    case 0x100041f8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e38u;
        g->edi = COW_IMG(0x10414cc0u);
        wr32(sp0 - 0xc2e3cu, sp0 - 0xc2ddcu);
        (void)sp0;
        return 1;
    }
    case 0x10004202u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e24u;
        g->edi = COW_IMG(0x10414cc0u);
        (void)sp0;
        return 1;
    }
    case 0x1000420du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e24u;
        g->edi = COW_IMG(0x10414cc0u);
        wr32(sp0 - 0xc2e28u, sp0 - 0xc2cd8u);
        (void)sp0;
        return 1;
    }
    case 0x10004215u:
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
        g->esp = sp0 - 0xc2e24u;
        wr32(sp0 - 0xc2e28u, sp0 - 0xc2cd8u);
        (void)sp0;
        return 1;
    }
    case 0x1000421cu:
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
        g->esp = sp0 - 0xc2e24u;
        (void)sp0;
        return 1;
    }
    case 0x10004227u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0xc2e24u);
        in_esi = rd32(sp0 - 0xc2e20u);
        in_ebp = rd32(sp0 - 0xc2e1cu);
        g->esp = sp0 - 0xc2e24u;
        g->eax = arg1 + 1u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e18u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x10004236u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e2cu;
        g->edi = 0u;
        wr32(sp0 - 0xc2e2cu, sp0 - 0xc2ddcu);
        (void)sp0;
        return 1;
    }
    case 0x10004240u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e30u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e30u, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e2cu, sp0 - 0xc2ddcu);
        (void)sp0;
        return 1;
    }
    case 0x10004256u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e24u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e30u, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e2cu, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e28u, sp0 - 0xc2cd8u);
        (void)sp0;
        return 1;
    }
    case 0x10004261u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e24u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e30u, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e2cu, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e28u, sp0 - 0xc2cd8u);
        (void)sp0;
        return 1;
    }
    case 0x10004267u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e24u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e28u, sp0 - 0xc2cd8u);
        (void)sp0;
        return 1;
    }
    case 0x10004275u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e24u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e28u, sp0 - 0xc2cd8u);
        (void)sp0;
        return 1;
    }
    case 0x10004287u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e2cu;
        g->edi = 0u;
        wr32(sp0 - 0xc2e2cu, sp0 - 0xc2cacu);
        (void)sp0;
        return 1;
    }
    case 0x10004292u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e24u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e2cu, sp0 - 0xc2cacu);
        (void)sp0;
        return 1;
    }
    case 0x100042a4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e2cu;
        g->edi = 0u;
        wr32(sp0 - 0xc2e2cu, sp0 - 0xc2cacu);
        (void)sp0;
        return 1;
    }
    case 0x100042afu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e24u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e2cu, sp0 - 0xc2cacu);
        (void)sp0;
        return 1;
    }
    case 0x100042c1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e2cu;
        g->edi = 0u;
        wr32(sp0 - 0xc2e2cu, sp0 - 0xc2cacu);
        (void)sp0;
        return 1;
    }
    case 0x100042c8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e24u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e2cu, sp0 - 0xc2cacu);
        (void)sp0;
        return 1;
    }
    case 0x100042dau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e2cu;
        g->edi = 0u;
        wr32(sp0 - 0xc2e2cu, sp0 - 0xc2cacu);
        (void)sp0;
        return 1;
    }
    case 0x100042e5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e24u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e2cu, sp0 - 0xc2cacu);
        (void)sp0;
        return 1;
    }
    case 0x100042fcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e30u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e30u, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e2cu, COW_IMG(0x1034f7e0u));
        wr32(sp0 - 0xc2e28u, sp0 - 0xc2cacu);
        (void)sp0;
        return 1;
    }
    case 0x10004306u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e34u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e34u, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e30u, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e28u, sp0 - 0xc2cacu);
        (void)sp0;
        return 1;
    }
    case 0x10004315u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e3cu;
        g->edi = 0u;
        wr32(sp0 - 0xc2e3cu, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e34u, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e30u, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e28u, sp0 - 0xc2cacu);
        (void)sp0;
        return 1;
    }
    case 0x10004322u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e24u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e3cu, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e34u, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e30u, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e28u, sp0 - 0xc2cacu);
        (void)sp0;
        return 1;
    }
    case 0x10004337u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e34u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e3cu, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e34u, sp0 - 0x81c70u);
        wr32(sp0 - 0xc2e30u, 0x40e38u);
        wr32(sp0 - 0xc2e2cu, 1u);
        (void)sp0;
        return 1;
    }
    case 0x10004346u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e44u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e44u, sp0 - 0xc2df8u);
        wr32(sp0 - 0xc2e40u, 0x1cu);
        wr32(sp0 - 0xc2e3cu, 1u);
        wr32(sp0 - 0xc2e34u, sp0 - 0x81c70u);
        (void)sp0;
        return 1;
    }
    case 0x10004358u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e54u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e54u, sp0 - 0xc2b60u);
        wr32(sp0 - 0xc2e50u, 0x48u);
        wr32(sp0 - 0xc2e4cu, 1u);
        wr32(sp0 - 0xc2e44u, sp0 - 0xc2df8u);
        wr32(sp0 - 0xc2e34u, sp0 - 0x81c70u);
        (void)sp0;
        return 1;
    }
    case 0x1000435eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e58u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e54u, sp0 - 0xc2b60u);
        wr32(sp0 - 0xc2e44u, sp0 - 0xc2df8u);
        wr32(sp0 - 0xc2e34u, sp0 - 0x81c70u);
        (void)sp0;
        return 1;
    }
    case 0x10004384u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e64u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e64u, sp0 - 0x81c70u);
        wr32(sp0 - 0xc2e60u, sp0 - 0xc2df8u);
        wr32(sp0 - 0xc2e5cu, sp0 - 0xc2b60u);
        wr32(sp0 - 0xc2e54u, sp0 - 0xc2b60u);
        wr32(sp0 - 0xc2e44u, sp0 - 0xc2df8u);
        wr32(sp0 - 0xc2e34u, sp0 - 0x81c70u);
        (void)sp0;
        return 1;
    }
    case 0x10004389u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e24u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e2cu, sp0 - 0xc2cacu);
        (void)sp0;
        return 1;
    }
    case 0x100043a0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e30u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e30u, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e2cu, COW_IMG(0x1034f7e0u));
        wr32(sp0 - 0xc2e28u, sp0 - 0xc2cacu);
        (void)sp0;
        return 1;
    }
    case 0x100043aau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e34u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e34u, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e30u, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e28u, sp0 - 0xc2cacu);
        (void)sp0;
        return 1;
    }
    case 0x100043b9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e3cu;
        g->edi = 0u;
        wr32(sp0 - 0xc2e3cu, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e34u, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e30u, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e28u, sp0 - 0xc2cacu);
        (void)sp0;
        return 1;
    }
    case 0x100043c2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e24u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e3cu, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e34u, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e30u, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e28u, sp0 - 0xc2cacu);
        (void)sp0;
        return 1;
    }
    case 0x100043d7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e34u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e3cu, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e34u, sp0 - 0xc2aa8u);
        wr32(sp0 - 0xc2e30u, 0x40e38u);
        wr32(sp0 - 0xc2e2cu, 1u);
        (void)sp0;
        return 1;
    }
    case 0x100043e6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e44u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e44u, sp0 - 0xc2e14u);
        wr32(sp0 - 0xc2e40u, 0x1cu);
        wr32(sp0 - 0xc2e3cu, 1u);
        wr32(sp0 - 0xc2e34u, sp0 - 0xc2aa8u);
        (void)sp0;
        return 1;
    }
    case 0x100043f8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e54u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e54u, sp0 - 0xc2b18u);
        wr32(sp0 - 0xc2e50u, 0x5cu);
        wr32(sp0 - 0xc2e4cu, 1u);
        wr32(sp0 - 0xc2e44u, sp0 - 0xc2e14u);
        wr32(sp0 - 0xc2e34u, sp0 - 0xc2aa8u);
        (void)sp0;
        return 1;
    }
    case 0x100043feu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e58u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e54u, sp0 - 0xc2b18u);
        wr32(sp0 - 0xc2e44u, sp0 - 0xc2e14u);
        wr32(sp0 - 0xc2e34u, sp0 - 0xc2aa8u);
        (void)sp0;
        return 1;
    }
    case 0x10004424u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e64u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000442du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10004438u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e24u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e28u, sp0 - 0xc2cd8u);
        (void)sp0;
        return 1;
    }
    case 0x10004440u:
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
        g->esp = sp0 - 0xc2e24u;
        wr32(sp0 - 0xc2e28u, sp0 - 0xc2cd8u);
        (void)sp0;
        return 1;
    }
    case 0x10004447u:
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
        g->esp = sp0 - 0xc2e24u;
        (void)sp0;
        return 1;
    }
    case 0x10004452u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0xc2e24u);
        in_esi = rd32(sp0 - 0xc2e20u);
        in_ebp = rd32(sp0 - 0xc2e1cu);
        g->esp = sp0 - 0xc2e24u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e18u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x10004461u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e2cu;
        g->edi = 0u;
        wr32(sp0 - 0xc2e2cu, sp0 - 0xc2ddcu);
        (void)sp0;
        return 1;
    }
    case 0x1000446bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e30u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e30u, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e2cu, sp0 - 0xc2ddcu);
        (void)sp0;
        return 1;
    }
    case 0x10004481u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e24u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e30u, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e2cu, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e28u, sp0 - 0xc2cd8u);
        (void)sp0;
        return 1;
    }
    case 0x1000448cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e24u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e30u, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e2cu, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e28u, sp0 - 0xc2cd8u);
        (void)sp0;
        return 1;
    }
    case 0x10004492u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e24u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e28u, sp0 - 0xc2cd8u);
        (void)sp0;
        return 1;
    }
    case 0x100044a0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e24u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e28u, sp0 - 0xc2cd8u);
        (void)sp0;
        return 1;
    }
    case 0x100044b2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e2cu;
        g->edi = 0u;
        wr32(sp0 - 0xc2e2cu, sp0 - 0xc2cacu);
        (void)sp0;
        return 1;
    }
    case 0x100044bdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e24u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e2cu, sp0 - 0xc2cacu);
        (void)sp0;
        return 1;
    }
    case 0x100044cfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e2cu;
        g->edi = 0u;
        wr32(sp0 - 0xc2e2cu, sp0 - 0xc2cacu);
        (void)sp0;
        return 1;
    }
    case 0x100044dau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e24u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e2cu, sp0 - 0xc2cacu);
        (void)sp0;
        return 1;
    }
    case 0x100044ecu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e2cu;
        g->edi = 0u;
        wr32(sp0 - 0xc2e2cu, sp0 - 0xc2cacu);
        (void)sp0;
        return 1;
    }
    case 0x100044f7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e24u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e2cu, sp0 - 0xc2cacu);
        (void)sp0;
        return 1;
    }
    case 0x10004509u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e2cu;
        g->edi = 0u;
        wr32(sp0 - 0xc2e2cu, sp0 - 0xc2cacu);
        (void)sp0;
        return 1;
    }
    case 0x10004514u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e24u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e2cu, sp0 - 0xc2cacu);
        (void)sp0;
        return 1;
    }
    case 0x1000452bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e30u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e30u, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e2cu, COW_IMG(0x1034f7e0u));
        wr32(sp0 - 0xc2e28u, sp0 - 0xc2cacu);
        (void)sp0;
        return 1;
    }
    case 0x10004535u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e34u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e34u, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e30u, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e28u, sp0 - 0xc2cacu);
        (void)sp0;
        return 1;
    }
    case 0x10004544u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e3cu;
        g->edi = 0u;
        wr32(sp0 - 0xc2e3cu, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e34u, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e30u, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e28u, sp0 - 0xc2cacu);
        (void)sp0;
        return 1;
    }
    case 0x10004551u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e24u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e3cu, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e34u, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e30u, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e28u, sp0 - 0xc2cacu);
        (void)sp0;
        return 1;
    }
    case 0x10004566u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e34u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e3cu, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e34u, sp0 - 0xc2aa8u);
        wr32(sp0 - 0xc2e30u, 0x40e38u);
        (void)sp0;
        return 1;
    }
    case 0x10004575u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e44u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e44u, sp0 - 0xc2e14u);
        wr32(sp0 - 0xc2e40u, 0x1cu);
        wr32(sp0 - 0xc2e34u, sp0 - 0xc2aa8u);
        (void)sp0;
        return 1;
    }
    case 0x10004584u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e54u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e54u, sp0 - 0xc2df8u);
        wr32(sp0 - 0xc2e50u, 0x14u);
        wr32(sp0 - 0xc2e44u, sp0 - 0xc2e14u);
        wr32(sp0 - 0xc2e34u, sp0 - 0xc2aa8u);
        (void)sp0;
        return 1;
    }
    case 0x1000458au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e58u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e54u, sp0 - 0xc2df8u);
        wr32(sp0 - 0xc2e44u, sp0 - 0xc2e14u);
        wr32(sp0 - 0xc2e34u, sp0 - 0xc2aa8u);
        (void)sp0;
        return 1;
    }
    case 0x100045adu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e64u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e64u, sp0 - 0xc2aa8u);
        wr32(sp0 - 0xc2e60u, sp0 - 0xc2e14u);
        wr32(sp0 - 0xc2e5cu, sp0 - 0xc2df8u);
        wr32(sp0 - 0xc2e54u, sp0 - 0xc2df8u);
        wr32(sp0 - 0xc2e44u, sp0 - 0xc2e14u);
        wr32(sp0 - 0xc2e34u, sp0 - 0xc2aa8u);
        (void)sp0;
        return 1;
    }
    case 0x100045b2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e24u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e2cu, sp0 - 0xc2cacu);
        (void)sp0;
        return 1;
    }
    case 0x100045c9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e30u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e30u, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e2cu, COW_IMG(0x1034f7e0u));
        wr32(sp0 - 0xc2e28u, sp0 - 0xc2cacu);
        (void)sp0;
        return 1;
    }
    case 0x100045d3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e34u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e34u, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e30u, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e28u, sp0 - 0xc2cacu);
        (void)sp0;
        return 1;
    }
    case 0x100045e2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e3cu;
        g->edi = 0u;
        wr32(sp0 - 0xc2e3cu, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e34u, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e30u, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e28u, sp0 - 0xc2cacu);
        (void)sp0;
        return 1;
    }
    case 0x100045efu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e24u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e3cu, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e34u, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e30u, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e28u, sp0 - 0xc2cacu);
        (void)sp0;
        return 1;
    }
    case 0x10004604u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e34u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e3cu, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e34u, sp0 - 0x81c70u);
        wr32(sp0 - 0xc2e30u, 0x40e38u);
        (void)sp0;
        return 1;
    }
    case 0x10004616u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e44u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e44u, sp0 - 0xc2b7cu);
        wr32(sp0 - 0xc2e40u, 0x1cu);
        wr32(sp0 - 0xc2e34u, sp0 - 0x81c70u);
        (void)sp0;
        return 1;
    }
    case 0x10004628u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e54u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e54u, sp0 - 0xc2b18u);
        wr32(sp0 - 0xc2e50u, 0x70u);
        wr32(sp0 - 0xc2e44u, sp0 - 0xc2b7cu);
        wr32(sp0 - 0xc2e34u, sp0 - 0x81c70u);
        (void)sp0;
        return 1;
    }
    case 0x1000462eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e58u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e54u, sp0 - 0xc2b18u);
        wr32(sp0 - 0xc2e44u, sp0 - 0xc2b7cu);
        wr32(sp0 - 0xc2e34u, sp0 - 0x81c70u);
        (void)sp0;
        return 1;
    }
    case 0x10004657u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e64u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e64u, sp0 - 0x81c70u);
        wr32(sp0 - 0xc2e60u, sp0 - 0xc2b7cu);
        wr32(sp0 - 0xc2e5cu, sp0 - 0xc2b18u);
        wr32(sp0 - 0xc2e54u, sp0 - 0xc2b18u);
        wr32(sp0 - 0xc2e44u, sp0 - 0xc2b7cu);
        wr32(sp0 - 0xc2e34u, sp0 - 0x81c70u);
        (void)sp0;
        return 1;
    }
    case 0x1000465cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e24u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e2cu, sp0 - 0xc2cacu);
        (void)sp0;
        return 1;
    }
    case 0x10004673u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e30u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e30u, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e2cu, COW_IMG(0x1034f7e0u));
        wr32(sp0 - 0xc2e28u, sp0 - 0xc2cacu);
        (void)sp0;
        return 1;
    }
    case 0x1000467du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e34u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e34u, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e30u, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e28u, sp0 - 0xc2cacu);
        (void)sp0;
        return 1;
    }
    case 0x1000468cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e3cu;
        g->edi = 0u;
        wr32(sp0 - 0xc2e3cu, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e34u, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e30u, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e28u, sp0 - 0xc2cacu);
        (void)sp0;
        return 1;
    }
    case 0x10004695u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e24u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e3cu, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e34u, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e30u, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e28u, sp0 - 0xc2cacu);
        (void)sp0;
        return 1;
    }
    case 0x100046aau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e34u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e3cu, sp0 - 0xc2ddcu);
        wr32(sp0 - 0xc2e34u, sp0 - 0x40e38u);
        wr32(sp0 - 0xc2e30u, 0x40e38u);
        (void)sp0;
        return 1;
    }
    case 0x100046bcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e44u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e44u, sp0 - 0xc2b98u);
        wr32(sp0 - 0xc2e40u, 0x1cu);
        wr32(sp0 - 0xc2e34u, sp0 - 0x40e38u);
        (void)sp0;
        return 1;
    }
    case 0x100046ceu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e54u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e54u, sp0 - 0xc2b60u);
        wr32(sp0 - 0xc2e50u, 0x34u);
        wr32(sp0 - 0xc2e44u, sp0 - 0xc2b98u);
        wr32(sp0 - 0xc2e34u, sp0 - 0x40e38u);
        (void)sp0;
        return 1;
    }
    case 0x100046d4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e58u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e54u, sp0 - 0xc2b60u);
        wr32(sp0 - 0xc2e44u, sp0 - 0xc2b98u);
        wr32(sp0 - 0xc2e34u, sp0 - 0x40e38u);
        (void)sp0;
        return 1;
    }
    case 0x100046fdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e64u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10004706u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10004711u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0xc2e24u;
        g->edi = 0u;
        wr32(sp0 - 0xc2e28u, sp0 - 0xc2cd8u);
        (void)sp0;
        return 1;
    }
    case 0x10004719u:
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
        g->esp = sp0 - 0xc2e24u;
        wr32(sp0 - 0xc2e28u, sp0 - 0xc2cd8u);
        (void)sp0;
        return 1;
    }
    case 0x10004720u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c2e18;
        uint32_t loc_c2e1c;
        uint32_t loc_c2e20;
        uint32_t loc_c2e24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c2e24 = rd32(sp0 - 0xc2e24u);
        loc_c2e20 = rd32(sp0 - 0xc2e20u);
        loc_c2e1c = rd32(sp0 - 0xc2e1cu);
        loc_c2e18 = rd32(sp0 - 0xc2e18u);
        g->esp = sp0 - 0xc2e24u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10004060(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10004060(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
