/* f_0x10102340 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10102340(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_d0;
    uint32_t loc_d4;
    uint32_t loc_d8;
    uint32_t loc_dc;
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
    uint32_t t173;
    uint32_t t174;
    uint32_t t175;
    uint32_t t176;
    uint32_t t177;
    uint32_t t178;
    uint32_t t179;
    uint32_t t18;
    uint32_t t180;
    uint32_t t181;
    uint32_t t182;
    uint32_t t183;
    uint32_t t184;
    uint32_t t185;
    uint32_t t186;
    uint32_t t187;
    uint32_t t188;
    uint32_t t189;
    uint32_t t19;
    uint32_t t190;
    uint32_t t191;
    uint32_t t192;
    uint32_t t193;
    uint32_t t194;
    uint32_t t195;
    uint32_t t196;
    uint32_t t197;
    uint32_t t198;
    uint32_t t199;
    uint32_t t2;
    uint32_t t20;
    uint32_t t200;
    uint32_t t201;
    uint32_t t202;
    uint32_t t203;
    uint32_t t204;
    uint32_t t205;
    uint32_t t206;
    uint32_t t207;
    uint32_t t208;
    uint32_t t209;
    uint32_t t21;
    uint32_t t210;
    uint32_t t211;
    uint32_t t212;
    uint32_t t213;
    uint32_t t214;
    uint32_t t215;
    uint32_t t216;
    uint32_t t217;
    uint32_t t218;
    uint32_t t219;
    uint32_t t22;
    uint32_t t220;
    uint32_t t221;
    uint32_t t222;
    uint32_t t223;
    uint32_t t224;
    uint32_t t225;
    uint32_t t226;
    uint32_t t227;
    uint32_t t228;
    uint32_t t229;
    uint32_t t23;
    uint32_t t230;
    uint32_t t231;
    uint32_t t232;
    uint32_t t233;
    uint32_t t234;
    uint32_t t235;
    uint32_t t236;
    uint32_t t237;
    uint32_t t238;
    uint32_t t239;
    uint32_t t24;
    uint32_t t240;
    uint32_t t241;
    uint32_t t242;
    uint32_t t243;
    uint32_t t244;
    uint32_t t245;
    uint32_t t246;
    uint32_t t247;
    uint32_t t248;
    uint32_t t249;
    uint32_t t25;
    uint32_t t250;
    uint32_t t251;
    uint32_t t252;
    uint32_t t253;
    uint32_t t254;
    uint32_t t255;
    uint32_t t256;
    uint32_t t257;
    uint32_t t258;
    uint32_t t259;
    uint32_t t26;
    uint32_t t260;
    uint32_t t261;
    uint32_t t262;
    uint32_t t263;
    uint32_t t264;
    uint32_t t265;
    uint32_t t266;
    uint32_t t267;
    uint32_t t268;
    uint32_t t269;
    uint32_t t27;
    uint32_t t270;
    uint32_t t271;
    uint32_t t272;
    uint32_t t273;
    uint32_t t274;
    uint32_t t275;
    uint32_t t276;
    uint32_t t277;
    uint32_t t278;
    uint32_t t279;
    uint32_t t28;
    uint32_t t280;
    uint32_t t281;
    uint32_t t282;
    uint32_t t283;
    uint32_t t284;
    uint32_t t285;
    uint32_t t286;
    uint32_t t287;
    uint32_t t288;
    uint32_t t289;
    uint32_t t29;
    uint32_t t290;
    uint32_t t291;
    uint32_t t292;
    uint32_t t293;
    uint32_t t294;
    uint32_t t295;
    uint32_t t296;
    uint32_t t297;
    uint32_t t298;
    uint32_t t299;
    uint32_t t3;
    uint32_t t30;
    uint32_t t300;
    uint32_t t301;
    uint32_t t302;
    uint32_t t303;
    uint32_t t304;
    uint32_t t305;
    uint32_t t306;
    uint32_t t307;
    uint32_t t308;
    uint32_t t309;
    uint32_t t31;
    uint32_t t310;
    uint32_t t311;
    uint32_t t312;
    uint32_t t313;
    uint32_t t314;
    uint32_t t315;
    uint32_t t316;
    uint32_t t317;
    uint32_t t318;
    uint32_t t319;
    uint32_t t32;
    uint32_t t320;
    uint32_t t321;
    uint32_t t322;
    uint32_t t323;
    uint32_t t324;
    uint32_t t325;
    uint32_t t326;
    uint32_t t327;
    uint32_t t328;
    uint32_t t329;
    uint32_t t33;
    uint32_t t330;
    uint32_t t331;
    uint32_t t332;
    uint32_t t333;
    uint32_t t334;
    uint32_t t335;
    uint32_t t336;
    uint32_t t337;
    uint32_t t338;
    uint32_t t339;
    uint32_t t34;
    uint32_t t340;
    uint32_t t341;
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
    cow_frame(g, sp0, 396u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10102356u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x16cu); in_esi = rd32(sp0 - 0x168u); g->edi = rd32(sp0 - 0x16cu); g->esi = rd32(sp0 - 0x168u); goto E_10102356;
    case 0x101023c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; goto E_101023c6;
    case 0x101023d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; goto E_101023d7;
    case 0x101023f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; goto E_101023f8;
    case 0x10102409u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; goto E_10102409;
    case 0x1010241fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; goto E_1010241f;
    case 0x10102426u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; goto E_10102426;
    case 0x10102430u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102430;
    case 0x1010243au: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1010243a;
    case 0x1010243fu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1010243f;
    case 0x1010244cu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1010244c;
    case 0x10102451u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10102451;
    case 0x10102459u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10102459;
    case 0x10102466u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10102466;
    case 0x10102471u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10102471;
    case 0x1010247cu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1010247c;
    case 0x10102486u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10102486;
    case 0x10102492u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10102492;
    case 0x101024a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_101024a1;
    case 0x101024adu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_101024ad;
    case 0x101024dau: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_101024da;
    case 0x1010250au: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1010250a;
    case 0x10102529u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102529;
    case 0x1010254cu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1010254c;
    case 0x10102581u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102581;
    case 0x101025c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101025c3;
    case 0x10102604u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102604;
    case 0x1010264bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1010264b;
    case 0x10102674u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102674;
    case 0x10102699u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102699;
    case 0x101026beu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_101026be;
    case 0x101026e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_101026e7;
    case 0x101026f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_101026f0;
    case 0x101026fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_101026fb;
    case 0x10102702u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102702;
    case 0x10102709u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_d4 = rd32(sp0 - 0xd4u); goto E_10102709;
    case 0x10102710u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); goto E_10102710;
    case 0x10102717u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); goto E_10102717;
    case 0x10102726u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102726;
    case 0x1010272du: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1010272d;
    case 0x10102737u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102737;
    case 0x10102741u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_dc = rd32(sp0 - 0xdcu); goto E_10102741;
    case 0x10102750u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102750;
    case 0x10102757u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102757;
    case 0x10102761u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102761;
    case 0x1010276bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_d8 = rd32(sp0 - 0xd8u); goto E_1010276b;
    case 0x1010277au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1010277a;
    case 0x10102781u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102781;
    case 0x1010278bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1010278b;
    case 0x101027acu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_dc = rd32(sp0 - 0xdcu); loc_d8 = rd32(sp0 - 0xd8u); goto E_101027ac;
    case 0x101027c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_101027c1;
    case 0x101027d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_101027d0;
    case 0x101027d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_101027d7;
    case 0x101027e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_101027e1;
    case 0x101027f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_101027f1;
    case 0x10102800u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102800;
    case 0x10102807u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102807;
    case 0x10102811u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102811;
    case 0x1010281bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1010281b;
    case 0x1010282au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1010282a;
    case 0x10102831u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102831;
    case 0x1010283bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1010283b;
    case 0x10102845u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102845;
    case 0x10102854u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102854;
    case 0x10102861u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102861;
    case 0x1010286bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1010286b;
    case 0x10102871u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102871;
    case 0x1010287bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1010287b;
    case 0x10102884u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102884;
    case 0x10102894u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102894;
    case 0x101028a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_101028a3;
    case 0x101028b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_101028b6;
    case 0x101028c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_101028c3;
    case 0x101028d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_101028d7;
    case 0x101028dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_101028dc;
    case 0x101028e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_101028e7;
    case 0x101028eau: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_101028ea;
    case 0x101028f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_101028f9;
    case 0x10102900u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102900;
    case 0x10102914u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102914;
    case 0x10102917u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102917;
    case 0x10102926u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102926;
    case 0x1010292du: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1010292d;
    case 0x10102941u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102941;
    case 0x10102944u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102944;
    case 0x10102953u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102953;
    case 0x1010295au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1010295a;
    case 0x10102964u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102964;
    case 0x1010296eu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1010296e;
    case 0x1010297du: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1010297d;
    case 0x10102984u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102984;
    case 0x1010298eu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1010298e;
    case 0x10102994u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102994;
    case 0x1010299cu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1010299c;
    case 0x101029abu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_101029ab;
    case 0x101029b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_101029b2;
    case 0x101029bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_101029bc;
    case 0x101029c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_101029c6;
    case 0x101029d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_101029d5;
    case 0x101029dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_101029dc;
    case 0x101029e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_101029e6;
    case 0x101029ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_101029ec;
    case 0x101029f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_101029f4;
    case 0x10102a03u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102a03;
    case 0x10102a0au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102a0a;
    case 0x10102a14u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102a14;
    case 0x10102a1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102a1e;
    case 0x10102a2du: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102a2d;
    case 0x10102a34u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102a34;
    case 0x10102a3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102a3e;
    case 0x10102a44u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102a44;
    case 0x10102a4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102a4c;
    case 0x10102a89u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102a89;
    case 0x10102a90u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102a90;
    case 0x10102a9au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102a9a;
    case 0x10102aa9u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102aa9;
    case 0x10102ab8u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102ab8;
    case 0x10102abfu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102abf;
    case 0x10102ac9u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102ac9;
    case 0x10102ad8u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102ad8;
    case 0x10102ae7u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102ae7;
    case 0x10102aeeu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102aee;
    case 0x10102af8u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102af8;
    case 0x10102b07u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102b07;
    case 0x10102b16u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102b16;
    case 0x10102b1du: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102b1d;
    case 0x10102b27u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102b27;
    case 0x10102b36u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102b36;
    case 0x10102b41u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102b41;
    case 0x10102b48u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102b48;
    case 0x10102b5bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102b5b;
    case 0x10102b5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102b5e;
    case 0x10102b69u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102b69;
    case 0x10102b70u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102b70;
    case 0x10102b7du: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102b7d;
    case 0x10102b89u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102b89;
    case 0x10102b98u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102b98;
    case 0x10102b9fu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102b9f;
    case 0x10102ba9u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102ba9;
    case 0x10102bbcu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102bbc;
    case 0x10102bebu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102beb;
    case 0x10102bf4u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102bf4;
    case 0x10102bfdu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102bfd;
    case 0x10102c04u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102c04;
    case 0x10102c11u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102c11;
    case 0x10102c1au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102c1a;
    case 0x10102c23u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102c23;
    case 0x10102c49u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102c49;
    case 0x10102c58u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102c58;
    case 0x10102c5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102c5f;
    case 0x10102c69u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102c69;
    case 0x10102c75u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102c75;
    case 0x10102c84u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102c84;
    case 0x10102c8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102c8b;
    case 0x10102c95u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102c95;
    case 0x10102ca4u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102ca4;
    case 0x10102cb3u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102cb3;
    case 0x10102cbau: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102cba;
    case 0x10102cc4u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102cc4;
    case 0x10102cd3u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102cd3;
    case 0x10102ce2u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102ce2;
    case 0x10102ce9u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102ce9;
    case 0x10102cf3u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102cf3;
    case 0x10102d07u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102d07;
    case 0x10102d16u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102d16;
    case 0x10102d1du: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102d1d;
    case 0x10102d27u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102d27;
    case 0x10102d36u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102d36;
    case 0x10102d41u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102d41;
    case 0x10102d50u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102d50;
    case 0x10102d57u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102d57;
    case 0x10102d61u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102d61;
    case 0x10102d70u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102d70;
    case 0x10102d7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102d7f;
    case 0x10102d86u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102d86;
    case 0x10102d90u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102d90;
    case 0x10102d9fu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102d9f;
    case 0x10102daeu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102dae;
    case 0x10102db5u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102db5;
    case 0x10102dbfu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102dbf;
    case 0x10102dceu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102dce;
    case 0x10102dddu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102ddd;
    case 0x10102de4u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102de4;
    case 0x10102deeu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102dee;
    case 0x10102dffu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102dff;
    case 0x10102e0bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102e0b;
    case 0x10102e1au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102e1a;
    case 0x10102e21u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102e21;
    case 0x10102e2bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102e2b;
    case 0x10102e37u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102e37;
    case 0x10102e46u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102e46;
    case 0x10102e4du: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102e4d;
    case 0x10102e57u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102e57;
    case 0x10102e63u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102e63;
    case 0x10102e72u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102e72;
    case 0x10102e79u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102e79;
    case 0x10102e83u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102e83;
    case 0x10102e8fu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102e8f;
    case 0x10102e9eu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102e9e;
    case 0x10102ea5u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102ea5;
    case 0x10102eafu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102eaf;
    case 0x10102ec0u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102ec0;
    case 0x10102ecbu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102ecb;
    case 0x10102edau: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102eda;
    case 0x10102ee1u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102ee1;
    case 0x10102eebu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102eeb;
    case 0x10102efcu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102efc;
    case 0x10102f08u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102f08;
    case 0x10102f17u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102f17;
    case 0x10102f1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102f1e;
    case 0x10102f28u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102f28;
    case 0x10102f39u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102f39;
    case 0x10102f44u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102f44;
    case 0x10102f53u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102f53;
    case 0x10102f5au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102f5a;
    case 0x10102f64u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102f64;
    case 0x10102f75u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102f75;
    case 0x10102f81u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102f81;
    case 0x10102fa5u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102fa5;
    case 0x10102facu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102fac;
    case 0x10102fc3u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102fc3;
    case 0x10102fd2u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102fd2;
    case 0x10102fd9u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102fd9;
    case 0x10102fe3u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102fe3;
    case 0x10102feeu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102fee;
    case 0x10102ffdu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10102ffd;
    case 0x10103004u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10103004;
    case 0x1010300eu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1010300e;
    case 0x10103011u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10103011;
    case 0x10103020u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10103020;
    case 0x10103027u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10103027;
    case 0x10103031u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10103031;
    case 0x10103034u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10103034;
    case 0x10103043u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10103043;
    case 0x1010304au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1010304a;
    case 0x10103054u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10103054;
    case 0x10103057u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10103057;
    case 0x10103066u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10103066;
    case 0x1010306du: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1010306d;
    case 0x10103077u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10103077;
    case 0x1010307au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1010307a;
    case 0x10103089u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10103089;
    case 0x10103090u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10103090;
    case 0x1010309au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1010309a;
    case 0x1010309du: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1010309d;
    case 0x101030acu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_101030ac;
    case 0x101030b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_101030b3;
    case 0x101030bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_101030bd;
    case 0x101030c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_101030c0;
    case 0x101030cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_101030cf;
    case 0x101030d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_101030d6;
    case 0x101030e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_101030e0;
    case 0x101030e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_101030e3;
    case 0x101030f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_101030f2;
    case 0x101030f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_101030f9;
    case 0x10103105u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10103105;
    case 0x10103142u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10103142;
    case 0x1010314au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1010314a;
    case 0x10103156u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10103156;
    case 0x1010315du: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1010315d;
    case 0x10103168u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10103168;
    case 0x1010316du: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1010316d;
    case 0x10103175u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10103175;
    case 0x1010317cu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1010317c;
    case 0x10103181u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10103181;
    case 0x10103189u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10103189;
    case 0x10103194u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10103194;
    case 0x101031cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_101031cb;
    case 0x101031d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_101031d1;
    case 0x101031deu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_101031de;
    case 0x101031fau: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_101031fa;
    case 0x10103201u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10103201;
    case 0x10103207u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10103207;
    case 0x1010320eu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1010320e;
    case 0x1010321au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1010321a;
    case 0x10103228u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10103228;
    default: break;
    }
#endif

    COW_AT(10102340)
    wr32(sp0 - 0x164u, in_ebx);
    wr32(sp0 - 0x168u, in_esi);
    wr32(sp0 - 0x16cu, in_edi);
    wr32(sp0 - 0x170u, sp0 - 0xe0u);
    g->esp = sp0 - 0x15cu;
    cow_call_regs(g, COW_IMG(0x10103330u), g->eax, g->ecx, in_edx, 1, 5, sp0 - 0xe0u, in_edi, in_esi, in_ebx, rd32(sp0 - 0x160u));
    COW_AT(10102356)
    wr32(sp0 - 0x174u, COW_IMG(0x103647e0u));
    edi = sp0 - 0x160u;
    eax = 0u;
    ecx = 0x20u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(COW_IMG(0x104e0af4u), COW_IMG(0x104dfdd8u));
    edi = COW_IMG(0x104dfdd8u);
    ecx = 0x11cu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(COW_IMG(0x104e0af0u), COW_IMG(0x104e0248u));
    edi = COW_IMG(0x104e0248u);
    ecx = 0x22au;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(rd32(COW_IMG(0x104e0af4u)) + 0xcu, 0x7530u);
    wr32(rd32(COW_IMG(0x104e0af4u)) + 0x10u, 0x9c40u);
    t1 = rd32(rd32(COW_IMG(0x104e0af4u)) + 0xcu) << 2u;
    t2 = rd32(COW_IMG(0x104e0af4u));
    wr32(t2 + 0x14u, t1);
    t3 = rd32(COW_IMG(0x104e0af4u));
    wr32(t3 + 0x18u, 0x493e0u);
    g->eax = t2;
    g->edx = t3;
    g->esp = sp0 - 0x170u;
    t4 = cow_thiscall_cdecl(g, COW_IMG(0x100dc360u), t1, 1, COW_IMG(0x103647e0u));
    t5 = g->ecx;
    t6 = g->edx;
    eax = t4;
    ecx = t5;
    edx = t6;
    COW_AT(101023c6)
    wr32(sp0 - 0x178u, COW_IMG(0x103647e0u));
    wr32(sp0 - 0xbcu, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x174u;
    t7 = cow_thiscall_cdecl(g, COW_IMG(0x100dc360u), ecx, 1, COW_IMG(0x103647e0u));
    t8 = g->ecx;
    t9 = g->edx;
    eax = t7;
    ecx = t8;
    edx = t9;
    COW_AT(101023d7)
    wr32(sp0 - 0xb8u, eax);
    wr32(sp0 - 0x17cu, COW_IMG(0x103647d0u));
    t10 = rd32(COW_IMG(0x104e0af4u));
    wr32(t10 + 0x440u, 3u);
    g->eax = t10;
    g->edx = edx;
    g->esp = sp0 - 0x178u;
    t11 = cow_thiscall_cdecl(g, COW_IMG(0x100dc360u), ecx, 1, COW_IMG(0x103647d0u));
    t12 = g->ecx;
    t13 = g->edx;
    eax = t11;
    ecx = t12;
    edx = t13;
    COW_AT(101023f8)
    wr32(sp0 - 0x180u, COW_IMG(0x103647e0u));
    wr32(sp0 - 0xbcu, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x17cu;
    t14 = cow_thiscall_cdecl(g, COW_IMG(0x100dc360u), ecx, 1, COW_IMG(0x103647e0u));
    t15 = g->edx;
    eax = t14;
    edx = t15;
    COW_AT(10102409)
    wr32(sp0 - 0xb8u, eax);
    wr32(sp0 - 0x184u, sp0 - 0x160u);
    wr32(sp0 - 0x188u, COW_IMG(0x103647c8u));
    g->eax = eax;
    g->ecx = sp0 - 0x160u;
    g->edx = edx;
    g->esp = sp0 - 0x180u;
    t16 = cow_cdecl(g, COW_IMG(0x10001f20u), 2, COW_IMG(0x103647c8u), sp0 - 0x160u);
    t17 = g->ecx;
    t18 = g->edx;
    eax = t16;
    ecx = t17;
    edx = t18;
    COW_AT(1010241f)
    if (eax == 0u) goto L_1010243a;
    COW_AT(10102426)
    wr32(sp0 - 0x170u, COW_IMG(0x10364798u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x16cu;
    t19 = cow_thiscall_cdecl(g, COW_IMG(0x101032e0u), ecx, 1, COW_IMG(0x10364798u));
    t20 = g->ecx;
    t21 = g->edx;
    eax = t19;
    ecx = t20;
    edx = t21;
    COW_AT(10102430)
    wr32(sp0 - 0x170u, 0xffffffffu);
    g->esp = sp0 - 0x15cu;
    cow_cdecl(g, COW_IMG(0x103158eeu), 5, 0xffffffffu, rd32(sp0 - 0x16cu), rd32(sp0 - 0x168u), rd32(sp0 - 0x164u), rd32(sp0 - 0x160u));
    rt_fatal(g, COW_IMG(0x10102435u), "no way on");
    return 0;
L_1010243a: ;
    COW_AT(1010243a)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x16cu;
    t22 = cow_stdcall(g, COW_IMG(0x100dbe50u), 0);
    t23 = g->ecx;
    t24 = g->edx;
    eax = t22;
    ecx = t23;
    edx = t24;
    COW_AT(1010243f)
    if ((uint8_t)eax != 1u) goto L_1010320e;
    COW_AT(1010244c)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x16cu;
    t25 = cow_stdcall(g, COW_IMG(0x100dbc70u), 0);
    t26 = g->ecx;
    t27 = g->edx;
    eax = t25;
    ecx = t26;
    edx = t27;
    COW_AT(10102451)
    if ((uint8_t)eax != 1u) goto L_1010320e;
    COW_AT(10102459)
    wr32(sp0 - 0x170u, 0u);
    wr32(sp0 - 0x174u, COW_IMG(0x10364790u));
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x16cu;
    t28 = cow_cdecl(g, COW_IMG(0x10001f20u), 2, COW_IMG(0x10364790u), 0u);
    t29 = g->ecx;
    eax = t28;
    ecx = t29;
    COW_AT(10102466)
    if (eax == 0u)
    {
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        goto L_10102717;
    }
    COW_AT(10102471)
    wr32(sp0 - 0x170u, eax);
    wr32(sp0 - 0x174u, sp0 - 0x160u);
    g->edx = sp0 - 0x160u;
    g->esp = sp0 - 0x168u;
    cow_thiscall_cdecl(g, COW_IMG(0x10103870u), ecx, 3, sp0 - 0x160u, eax, rd32(sp0 - 0x16cu));
    t30 = g->ecx;
    t31 = g->edx;
    ecx = t30;
    edx = t31;
    COW_AT(1010247c)
    wr32(sp0 - 0x178u, sp0 - 0x160u);
    g->eax = sp0 - 0x160u;
    g->esp = sp0 - 0x174u;
    t32 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, sp0 - 0x160u);
    t33 = g->ecx;
    eax = t32;
    ecx = t33;
    COW_AT(10102486)
    if (eax > 0x28u)
    {
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        goto L_10102717;
    }
    COW_AT(10102492)
    t34 = rd32(COW_IMG(0x10103268u) + rd8(COW_IMG(0x101032a8u) + eax) * 4u);
    switch (t34 - RD)
    {
    case 0x101024a1u: ecx = rd8(COW_IMG(0x101032a8u) + eax); goto L_101024a1;
    case 0x101024adu: ecx = rd8(COW_IMG(0x101032a8u) + eax); goto L_101024ad;
    case 0x101024dau: ecx = rd8(COW_IMG(0x101032a8u) + eax); goto L_101024da;
    case 0x1010250au: goto L_1010250a;
    case 0x10102529u: ecx = rd8(COW_IMG(0x101032a8u) + eax); goto L_10102529;
    case 0x1010254cu: goto L_1010254c;
    case 0x10102581u: goto L_10102581;
    case 0x101025c3u: ecx = rd8(COW_IMG(0x101032a8u) + eax); goto L_101025c3;
    case 0x10102604u: goto L_10102604;
    case 0x1010264bu: ecx = rd8(COW_IMG(0x101032a8u) + eax); goto L_1010264b;
    case 0x10102674u: goto L_10102674;
    case 0x10102699u: ecx = rd8(COW_IMG(0x101032a8u) + eax); goto L_10102699;
    case 0x101026beu: ecx = rd8(COW_IMG(0x101032a8u) + eax); goto L_101026be;
    case 0x101026e7u: ecx = rd8(COW_IMG(0x101032a8u) + eax); goto L_101026e7;
    case 0x101026f0u: ecx = rd8(COW_IMG(0x101032a8u) + eax); goto L_101026f0;
    case 0x10102717u: ecx = rd8(COW_IMG(0x101032a8u) + eax); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); goto L_10102717;
    default: rt_fatal(g, COW_IMG(0x1010249au), "switch");
    }
    return 0;
L_101024a1: ;
    COW_AT(101024a1)
    wr32(sp0 - 0xc8u, 0u);
L_10102702: ;
    COW_AT(10102702)
    wr32(sp0 - 0xd4u, 0u);
    loc_d4 = 0u;
L_10102709: ;
    COW_AT(10102709)
    wr32(sp0 - 0xd0u, 0u);
    loc_d0 = 0u;
L_10102710: ;
    COW_AT(10102710)
    wr32(sp0 - 0xccu, 0u);
L_10102717: ;
    COW_AT(10102717)
    wr32(sp0 - 0x170u, sp0 - 0x160u);
    wr32(sp0 - 0x174u, COW_IMG(0x10364788u));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = sp0 - 0x160u;
    g->esp = sp0 - 0x16cu;
    t43 = cow_cdecl(g, COW_IMG(0x10001f20u), 2, COW_IMG(0x10364788u), sp0 - 0x160u);
    t44 = g->ecx;
    t45 = g->edx;
    eax = t43;
    ecx = t44;
    edx = t45;
    COW_AT(10102726)
    if (eax == 0u)
    {
        loc_dc = rd32(sp0 - 0xdcu);
    }
    else
    {
    COW_AT(1010272d)
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        g->eax = sp0 - 0x160u;
        g->edx = edx;
        g->esp = sp0 - 0x16cu;
        t46 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, sp0 - 0x160u);
        t47 = g->edx;
        eax = t46;
        edx = t47;
    COW_AT(10102737)
        wr32(sp0 - 0xdcu, eax);
        loc_dc = eax;
    }
    COW_AT(10102741)
    wr32(sp0 - 0x170u, sp0 - 0x160u);
    wr32(sp0 - 0x174u, COW_IMG(0x1036477cu));
    g->eax = eax;
    g->ecx = sp0 - 0x160u;
    g->edx = edx;
    g->esp = sp0 - 0x16cu;
    t48 = cow_cdecl(g, COW_IMG(0x10001f20u), 2, COW_IMG(0x1036477cu), sp0 - 0x160u);
    t49 = g->ecx;
    t50 = g->edx;
    eax = t48;
    ecx = t49;
    edx = t50;
    COW_AT(10102750)
    if (eax == 0u)
    {
        loc_d8 = rd32(sp0 - 0xd8u);
    }
    else
    {
    COW_AT(10102757)
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        g->eax = eax;
        g->edx = sp0 - 0x160u;
        g->esp = sp0 - 0x16cu;
        t51 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, sp0 - 0x160u);
        t52 = g->ecx;
        t53 = g->edx;
        eax = t51;
        ecx = t52;
        edx = t53;
    COW_AT(10102761)
        wr32(sp0 - 0xd8u, eax);
        loc_d8 = eax;
    }
    COW_AT(1010276b)
    wr32(sp0 - 0x170u, sp0 - 0x160u);
    wr32(sp0 - 0x174u, COW_IMG(0x10364770u));
    g->eax = sp0 - 0x160u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x16cu;
    t54 = cow_cdecl(g, COW_IMG(0x10001f20u), 2, COW_IMG(0x10364770u), sp0 - 0x160u);
    t55 = g->ecx;
    t56 = g->edx;
    eax = t54;
    ecx = t55;
    edx = t56;
    COW_AT(1010277a)
    if (eax == 0u)
    {
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d8 = rd32(sp0 - 0xd8u);
    }
    else
    {
    COW_AT(10102781)
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        g->eax = eax;
        g->esp = sp0 - 0x16cu;
        t57 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), sp0 - 0x160u, 1, sp0 - 0x160u);
        eax = t57;
    COW_AT(1010278b)
        wr32(sp0 - 0xe0u, eax);
        t58 = cow_divu(g, eax, 0x3e8u);
        t59 = cow_modu(g, eax, 0x3e8u);
        wr32(sp0 - 0xdcu, t59);
        wr32(sp0 - 0xd8u, t58);
        ecx = 0x3e8u;
        loc_dc = t59;
        loc_d8 = t58;
    }
    COW_AT(101027ac)
    wr32(sp0 - 0x170u, loc_d8);
    wr32(sp0 - 0x174u, loc_dc);
    g->edx = loc_d8;
    g->esp = sp0 - 0x174u;
    t60 = cow_call_regs(g, COW_IMG(0x100d9ad0u), loc_dc, g->ecx, g->edx, 1, 0);
    t61 = g->edx;
    eax = t60;
    edx = t61;
    COW_AT(101027c1)
    wr32(sp0 - 0x178u, sp0 - 0x160u);
    wr32(sp0 - 0x17cu, COW_IMG(0x10364768u));
    g->eax = eax;
    g->ecx = sp0 - 0x160u;
    g->esp = sp0 - 0x174u;
    t62 = cow_cdecl(g, COW_IMG(0x10001f20u), 2, COW_IMG(0x10364768u), sp0 - 0x160u);
    t63 = g->ecx;
    eax = t62;
    ecx = t63;
    COW_AT(101027d0)
    if (eax != 0u)
    {
    COW_AT(101027d7)
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        g->eax = eax;
        g->esp = sp0 - 0x16cu;
        t64 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, sp0 - 0x160u);
        eax = t64;
    COW_AT(101027e1)
        t65 = rd32(COW_IMG(0x104e0af0u));
        wr16(t65 + 0x154u, (uint16_t)eax);
        ecx = t65;
    }
    COW_AT(101027f1)
    wr32(sp0 - 0x170u, sp0 - 0x160u);
    wr32(sp0 - 0x174u, COW_IMG(0x10364760u));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = sp0 - 0x160u;
    g->esp = sp0 - 0x16cu;
    t66 = cow_cdecl(g, COW_IMG(0x10001f20u), 2, COW_IMG(0x10364760u), sp0 - 0x160u);
    t67 = g->ecx;
    t68 = g->edx;
    eax = t66;
    ecx = t67;
    edx = t68;
    COW_AT(10102800)
    if (eax != 0u)
    {
    COW_AT(10102807)
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        g->ebx = 1u;
        g->eax = sp0 - 0x160u;
        g->edx = edx;
        g->esp = sp0 - 0x16cu;
        t69 = cow_thiscall_cdecl(g, COW_IMG(0x100dc360u), ecx, 1, sp0 - 0x160u);
        t70 = g->edx;
        eax = t69;
        edx = t70;
    COW_AT(10102811)
        wr32(sp0 - 0xb4u, eax);
    }
    COW_AT(1010281b)
    wr32(sp0 - 0x170u, sp0 - 0x160u);
    wr32(sp0 - 0x174u, COW_IMG(0x1036475cu));
    g->eax = eax;
    g->ecx = sp0 - 0x160u;
    g->edx = edx;
    g->esp = sp0 - 0x16cu;
    t71 = cow_cdecl(g, COW_IMG(0x10001f20u), 2, COW_IMG(0x1036475cu), sp0 - 0x160u);
    t72 = g->ecx;
    t73 = g->edx;
    eax = t71;
    ecx = t72;
    edx = t73;
    COW_AT(1010282a)
    if (eax != 0u)
    {
    COW_AT(10102831)
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        g->ebx = 1u;
        g->eax = eax;
        g->edx = sp0 - 0x160u;
        g->esp = sp0 - 0x16cu;
        t74 = cow_thiscall_cdecl(g, COW_IMG(0x100dc360u), ecx, 1, sp0 - 0x160u);
        t75 = g->ecx;
        t76 = g->edx;
        eax = t74;
        ecx = t75;
        edx = t76;
    COW_AT(1010283b)
        wr32(sp0 - 0xb8u, eax);
    }
    COW_AT(10102845)
    wr32(sp0 - 0x170u, sp0 - 0x160u);
    wr32(sp0 - 0x174u, COW_IMG(0x10364754u));
    g->eax = sp0 - 0x160u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x16cu;
    t77 = cow_cdecl(g, COW_IMG(0x10001f20u), 2, COW_IMG(0x10364754u), sp0 - 0x160u);
    t78 = g->ecx;
    t79 = g->edx;
    eax = t77;
    ecx = t78;
    edx = t79;
    COW_AT(10102854)
    if (eax == 0u)
    {
        edi = rd32(COW_IMG(0x10329480u));
    COW_AT(1010287b)
        if (rd32(sp0 - 0xd4u) == 1u)
        {
    COW_AT(10102884)
            t86 = rd16(sp0 - 0xcu);
            wr16(sp0 - 0xc2u, (uint16_t)t86);
            edx = (edx & 0xffff0000u) | t86;
        }
    }
    else
    {
        edi = rd32(COW_IMG(0x10329480u));
    COW_AT(10102861)
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x16cu;
        t80 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), sp0 - 0x160u, 1, sp0 - 0x160u);
        t81 = g->ecx;
        t82 = g->edx;
        eax = t80;
        ecx = t81;
        edx = t82;
    COW_AT(1010286b)
        wr32(sp0 - 0x170u, eax);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x16cu;
        t83 = cow_thiscall(g, edi, ecx, 1, eax);
        t84 = g->ecx;
        t85 = g->edx;
        eax = t83;
        ecx = t84;
        edx = t85;
    COW_AT(10102871)
        wr16(sp0 - 0xc2u, (uint16_t)eax);
    }
    COW_AT(10102894)
    wr32(sp0 - 0x170u, sp0 - 0x160u);
    wr32(sp0 - 0x174u, COW_IMG(0x1036474cu));
    g->eax = sp0 - 0x160u;
    g->ecx = ecx;
    g->esp = sp0 - 0x16cu;
    t87 = cow_cdecl(g, COW_IMG(0x10001f20u), 2, COW_IMG(0x1036474cu), sp0 - 0x160u);
    t88 = g->ecx;
    eax = t87;
    ecx = t88;
    COW_AT(101028a3)
    if (eax == 0u)
    {
        edx = rd32(COW_IMG(0x104e0af0u)) + 0x140u;
    COW_AT(101028dc)
        wr32(sp0 - 0x170u, COW_IMG(0x1034f2b8u));
        wr32(sp0 - 0x174u, edx);
        g->ebx = 1u;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x160u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, edx, COW_IMG(0x1034f2b8u), rd32(sp0 - 0x16cu), rd32(sp0 - 0x168u), rd32(sp0 - 0x164u));
        t92 = g->ecx;
        t93 = g->edx;
        ecx = t92;
        edx = t93;
    COW_AT(101028e7)
    }
    else
    {
        edx = rd32(COW_IMG(0x104e0af0u)) + 0x140u;
    COW_AT(101028b6)
        wr32(sp0 - 0x170u, 0x10u);
        wr32(sp0 - 0x174u, sp0 - 0x160u);
        wr32(sp0 - 0x178u, edx);
        g->edx = edx;
        g->esp = sp0 - 0x16cu;
        cow_call_regs(g, COW_IMG(0x10312090u), eax, g->ecx, g->edx, 1, 3, edx, sp0 - 0x160u, 0x10u);
        t89 = g->edx;
        edx = t89;
    COW_AT(101028c3)
        wr32(sp0 - 0x17cu, 0x50u);
        wr32(sp0 - 0x180u, sp0 - 0x160u);
        wr32(sp0 - 0x184u, sp0 - 0xb0u);
        g->ecx = sp0 - 0xb0u;
        g->edx = edx;
        g->esp = sp0 - 0x178u;
        cow_call_regs(g, COW_IMG(0x10312090u), sp0 - 0x160u, g->ecx, g->edx, 1, 3, sp0 - 0xb0u, sp0 - 0x160u, 0x50u);
        t90 = g->ecx;
        t91 = g->edx;
        ecx = t90;
        edx = t91;
    COW_AT(101028d7)
    }
    COW_AT(101028ea)
    wr32(sp0 - 0x170u, sp0 - 0x160u);
    wr32(sp0 - 0x174u, COW_IMG(0x10364744u));
    g->eax = sp0 - 0x160u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x16cu;
    t94 = cow_cdecl(g, COW_IMG(0x10001f20u), 2, COW_IMG(0x10364744u), sp0 - 0x160u);
    t95 = g->ecx;
    t96 = g->edx;
    eax = t94;
    ecx = t95;
    edx = t96;
    COW_AT(101028f9)
    if (eax != 0u)
    {
    COW_AT(10102900)
        wr32(sp0 - 0x170u, 0x50u);
        wr32(sp0 - 0x174u, sp0 - 0x160u);
        wr32(sp0 - 0x178u, sp0 - 0xb0u);
        g->ecx = sp0 - 0x160u;
        g->edx = sp0 - 0xb0u;
        g->esp = sp0 - 0x16cu;
        cow_call_regs(g, COW_IMG(0x10312090u), eax, g->ecx, g->edx, 1, 3, sp0 - 0xb0u, sp0 - 0x160u, 0x50u);
        t97 = g->ecx;
        t98 = g->edx;
        ecx = t97;
        edx = t98;
    COW_AT(10102914)
    }
    COW_AT(10102917)
    wr32(sp0 - 0x170u, sp0 - 0x160u);
    wr32(sp0 - 0x174u, COW_IMG(0x1036473cu));
    g->eax = sp0 - 0x160u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x16cu;
    t99 = cow_cdecl(g, COW_IMG(0x10001f20u), 2, COW_IMG(0x1036473cu), sp0 - 0x160u);
    t100 = g->ecx;
    t101 = g->edx;
    eax = t99;
    ecx = t100;
    edx = t101;
    COW_AT(10102926)
    if (eax != 0u)
    {
    COW_AT(1010292d)
        wr32(sp0 - 0x170u, 0x50u);
        wr32(sp0 - 0x174u, sp0 - 0x160u);
        wr32(sp0 - 0x178u, sp0 - 0x60u);
        g->ecx = sp0 - 0x160u;
        g->edx = sp0 - 0x60u;
        g->esp = sp0 - 0x16cu;
        cow_call_regs(g, COW_IMG(0x10312090u), eax, g->ecx, g->edx, 1, 3, sp0 - 0x60u, sp0 - 0x160u, 0x50u);
        t102 = g->ecx;
        t103 = g->edx;
        ecx = t102;
        edx = t103;
    COW_AT(10102941)
    }
    COW_AT(10102944)
    wr32(sp0 - 0x170u, sp0 - 0x160u);
    wr32(sp0 - 0x174u, COW_IMG(0x10364734u));
    g->eax = sp0 - 0x160u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x16cu;
    t104 = cow_cdecl(g, COW_IMG(0x10001f20u), 2, COW_IMG(0x10364734u), sp0 - 0x160u);
    t105 = g->ecx;
    t106 = g->edx;
    eax = t104;
    ecx = t105;
    edx = t106;
    COW_AT(10102953)
    if (eax != 0u)
    {
    COW_AT(1010295a)
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        g->eax = eax;
        g->esp = sp0 - 0x16cu;
        t107 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), sp0 - 0x160u, 1, sp0 - 0x160u);
        t108 = g->ecx;
        eax = t107;
        ecx = t108;
    COW_AT(10102964)
        wr32(sp0 - 0x10u, eax);
    }
    COW_AT(1010296e)
    wr32(sp0 - 0x170u, sp0 - 0x160u);
    wr32(sp0 - 0x174u, COW_IMG(0x10364728u));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = sp0 - 0x160u;
    g->esp = sp0 - 0x16cu;
    t109 = cow_cdecl(g, COW_IMG(0x10001f20u), 2, COW_IMG(0x10364728u), sp0 - 0x160u);
    t110 = g->ecx;
    t111 = g->edx;
    eax = t109;
    ecx = t110;
    edx = t111;
    COW_AT(1010297d)
    if (eax != 0u)
    {
    COW_AT(10102984)
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        g->eax = sp0 - 0x160u;
        g->edx = edx;
        g->esp = sp0 - 0x16cu;
        t112 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, sp0 - 0x160u);
        t113 = g->ecx;
        t114 = g->edx;
        eax = t112;
        ecx = t113;
        edx = t114;
    COW_AT(1010298e)
        wr32(sp0 - 0x170u, eax);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x16cu;
        t115 = cow_thiscall(g, edi, ecx, 1, eax);
        t116 = g->edx;
        eax = t115;
        edx = t116;
    COW_AT(10102994)
        wr16(sp0 - 0xcu, (uint16_t)eax);
    }
    COW_AT(1010299c)
    wr32(sp0 - 0x170u, sp0 - 0x160u);
    wr32(sp0 - 0x174u, COW_IMG(0x1036471cu));
    g->eax = eax;
    g->ecx = sp0 - 0x160u;
    g->edx = edx;
    g->esp = sp0 - 0x16cu;
    t117 = cow_cdecl(g, COW_IMG(0x10001f20u), 2, COW_IMG(0x1036471cu), sp0 - 0x160u);
    t118 = g->ecx;
    t119 = g->edx;
    eax = t117;
    ecx = t118;
    edx = t119;
    COW_AT(101029ab)
    if (eax != 0u)
    {
    COW_AT(101029b2)
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        g->ebx = 1u;
        g->eax = eax;
        g->edx = sp0 - 0x160u;
        g->esp = sp0 - 0x16cu;
        t120 = cow_thiscall_cdecl(g, COW_IMG(0x100dc360u), ecx, 1, sp0 - 0x160u);
        t121 = g->ecx;
        t122 = g->edx;
        eax = t120;
        ecx = t121;
        edx = t122;
    COW_AT(101029bc)
        wr32(sp0 - 0xb8u, eax);
    }
    COW_AT(101029c6)
    wr32(sp0 - 0x170u, sp0 - 0x160u);
    wr32(sp0 - 0x174u, COW_IMG(0x10364710u));
    g->eax = sp0 - 0x160u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x16cu;
    t123 = cow_cdecl(g, COW_IMG(0x10001f20u), 2, COW_IMG(0x10364710u), sp0 - 0x160u);
    t124 = g->ecx;
    t125 = g->edx;
    eax = t123;
    ecx = t124;
    edx = t125;
    COW_AT(101029d5)
    if (eax != 0u)
    {
    COW_AT(101029dc)
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x16cu;
        t126 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), sp0 - 0x160u, 1, sp0 - 0x160u);
        t127 = g->ecx;
        t128 = g->edx;
        eax = t126;
        ecx = t127;
        edx = t128;
    COW_AT(101029e6)
        wr32(sp0 - 0x170u, eax);
        g->eax = eax;
        g->esp = sp0 - 0x16cu;
        t129 = cow_thiscall(g, edi, ecx, 1, eax);
        t130 = g->ecx;
        eax = t129;
        ecx = t130;
    COW_AT(101029ec)
        wr16(sp0 - 0xc2u, (uint16_t)eax);
    }
    COW_AT(101029f4)
    wr32(sp0 - 0x170u, sp0 - 0x160u);
    wr32(sp0 - 0x174u, COW_IMG(0x10364704u));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = sp0 - 0x160u;
    g->esp = sp0 - 0x16cu;
    t131 = cow_cdecl(g, COW_IMG(0x10001f20u), 2, COW_IMG(0x10364704u), sp0 - 0x160u);
    t132 = g->ecx;
    t133 = g->edx;
    eax = t131;
    ecx = t132;
    edx = t133;
    COW_AT(10102a03)
    if (eax != 0u)
    {
    COW_AT(10102a0a)
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        g->ebx = 1u;
        g->eax = sp0 - 0x160u;
        g->edx = edx;
        g->esp = sp0 - 0x16cu;
        t134 = cow_thiscall_cdecl(g, COW_IMG(0x100dc360u), ecx, 1, sp0 - 0x160u);
        t135 = g->edx;
        eax = t134;
        edx = t135;
    COW_AT(10102a14)
        wr32(sp0 - 0xbcu, eax);
    }
    COW_AT(10102a1e)
    wr32(sp0 - 0x170u, sp0 - 0x160u);
    wr32(sp0 - 0x174u, COW_IMG(0x103646f8u));
    g->eax = eax;
    g->ecx = sp0 - 0x160u;
    g->esp = sp0 - 0x16cu;
    t136 = cow_cdecl(g, COW_IMG(0x10001f20u), 2, COW_IMG(0x103646f8u), sp0 - 0x160u);
    t137 = g->ecx;
    eax = t136;
    ecx = t137;
    COW_AT(10102a2d)
    if (eax != 0u)
    {
    COW_AT(10102a34)
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        g->eax = eax;
        g->edx = sp0 - 0x160u;
        g->esp = sp0 - 0x16cu;
        t138 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, sp0 - 0x160u);
        t139 = g->ecx;
        t140 = g->edx;
        eax = t138;
        ecx = t139;
        edx = t140;
    COW_AT(10102a3e)
        wr32(sp0 - 0x170u, eax);
        g->eax = eax;
        g->esp = sp0 - 0x16cu;
        t141 = cow_thiscall(g, edi, ecx, 1, eax);
        eax = t141;
    COW_AT(10102a44)
        wr16(sp0 - 0xc0u, (uint16_t)eax);
    }
    COW_AT(10102a4c)
    wr32(rd32(COW_IMG(0x104e0af0u)) + 0x130u, 0u);
    wr32(rd32(COW_IMG(0x104e0af0u)) + 0x134u, 0u);
    t142 = rd32(COW_IMG(0x104e0af0u));
    wr32(t142 + 0x138u, 0u);
    wr32(sp0 - 0x170u, sp0 - 0x160u);
    wr32(sp0 - 0x174u, COW_IMG(0x103646f4u));
    t143 = rd32(COW_IMG(0x104e0af0u));
    wr32(t143 + 0x13cu, 0u);
    g->eax = t143;
    g->ecx = sp0 - 0x160u;
    g->esp = sp0 - 0x16cu;
    t144 = cow_cdecl(g, COW_IMG(0x10001f20u), 2, COW_IMG(0x103646f4u), sp0 - 0x160u);
    t145 = g->ecx;
    eax = t144;
    ecx = t145;
    COW_AT(10102a89)
    if (eax != 0u)
    {
    COW_AT(10102a90)
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        g->eax = eax;
        g->esp = sp0 - 0x16cu;
        t146 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, sp0 - 0x160u);
        eax = t146;
    COW_AT(10102a9a)
        t147 = rd32(COW_IMG(0x104e0af0u));
        wr32(t147 + 0x130u, eax);
        ecx = t147;
    }
    COW_AT(10102aa9)
    wr32(sp0 - 0x170u, sp0 - 0x160u);
    wr32(sp0 - 0x174u, COW_IMG(0x103646f0u));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = sp0 - 0x160u;
    g->esp = sp0 - 0x16cu;
    t148 = cow_cdecl(g, COW_IMG(0x10001f20u), 2, COW_IMG(0x103646f0u), sp0 - 0x160u);
    t149 = g->ecx;
    t150 = g->edx;
    eax = t148;
    ecx = t149;
    edx = t150;
    COW_AT(10102ab8)
    if (eax != 0u)
    {
    COW_AT(10102abf)
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        g->eax = sp0 - 0x160u;
        g->esp = sp0 - 0x16cu;
        t151 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, sp0 - 0x160u);
        eax = t151;
    COW_AT(10102ac9)
        t152 = rd32(COW_IMG(0x104e0af0u));
        wr32(t152 + 0x134u, eax);
        ecx = t152;
    }
    COW_AT(10102ad8)
    wr32(sp0 - 0x170u, sp0 - 0x160u);
    wr32(sp0 - 0x174u, COW_IMG(0x103646ecu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = sp0 - 0x160u;
    g->esp = sp0 - 0x16cu;
    t153 = cow_cdecl(g, COW_IMG(0x10001f20u), 2, COW_IMG(0x103646ecu), sp0 - 0x160u);
    t154 = g->ecx;
    t155 = g->edx;
    eax = t153;
    ecx = t154;
    edx = t155;
    COW_AT(10102ae7)
    if (eax != 0u)
    {
    COW_AT(10102aee)
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        g->eax = sp0 - 0x160u;
        g->esp = sp0 - 0x16cu;
        t156 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, sp0 - 0x160u);
        eax = t156;
    COW_AT(10102af8)
        t157 = rd32(COW_IMG(0x104e0af0u));
        wr32(t157 + 0x138u, eax);
        ecx = t157;
    }
    COW_AT(10102b07)
    wr32(sp0 - 0x170u, sp0 - 0x160u);
    wr32(sp0 - 0x174u, COW_IMG(0x103646e4u));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = sp0 - 0x160u;
    g->esp = sp0 - 0x16cu;
    t158 = cow_cdecl(g, COW_IMG(0x10001f20u), 2, COW_IMG(0x103646e4u), sp0 - 0x160u);
    t159 = g->ecx;
    t160 = g->edx;
    eax = t158;
    ecx = t159;
    edx = t160;
    COW_AT(10102b16)
    if (eax != 0u)
    {
    COW_AT(10102b1d)
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        g->eax = sp0 - 0x160u;
        g->edx = edx;
        g->esp = sp0 - 0x16cu;
        t161 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, sp0 - 0x160u);
        t162 = g->edx;
        eax = t161;
        edx = t162;
    COW_AT(10102b27)
        t163 = rd32(COW_IMG(0x104e0af0u));
        wr32(t163 + 0x13cu, eax);
        ecx = t163;
    }
    COW_AT(10102b36)
    wr32(sp0 - 0x170u, 0u);
    wr32(sp0 - 0x174u, COW_IMG(0x103646e0u));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x16cu;
    t164 = cow_cdecl(g, COW_IMG(0x10001f20u), 2, COW_IMG(0x103646e0u), 0u);
    t165 = g->ecx;
    t166 = g->edx;
    eax = t164;
    ecx = t165;
    edx = t166;
    COW_AT(10102b41)
    if (eax != 0u)
    {
    COW_AT(10102b48)
        wr32(sp0 - 0x170u, eax);
        t167 = rd32(COW_IMG(0x104e0af0u)) + 0xc8u;
        wr32(sp0 - 0x174u, t167);
        g->eax = eax;
        g->edx = t167;
        g->esp = sp0 - 0x168u;
        t168 = cow_thiscall_cdecl(g, COW_IMG(0x10103870u), ecx, 3, t167, eax, rd32(sp0 - 0x16cu));
        t169 = g->ecx;
        t170 = g->edx;
        eax = t168;
        ecx = t169;
        edx = t170;
    COW_AT(10102b5b)
    }
    COW_AT(10102b5e)
    wr32(sp0 - 0x170u, 0u);
    wr32(sp0 - 0x174u, COW_IMG(0x103646d4u));
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x16cu;
    t171 = cow_cdecl(g, COW_IMG(0x10001f20u), 2, COW_IMG(0x103646d4u), 0u);
    t172 = g->ecx;
    eax = t171;
    ecx = t172;
    COW_AT(10102b69)
    if (eax == 0u)
    {
    COW_AT(10102b7d)
        t174 = rd32(COW_IMG(0x104e0af0u));
        wr32(t174 + 0xc4u, 1u);
        ecx = t174;
    }
    else
    {
    COW_AT(10102b70)
        t173 = rd32(COW_IMG(0x104e0af0u));
        wr32(t173 + 0xc4u, 0u);
        eax = t173;
    }
    COW_AT(10102b89)
    wr32(sp0 - 0x170u, sp0 - 0x160u);
    wr32(sp0 - 0x174u, COW_IMG(0x103646c8u));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = sp0 - 0x160u;
    g->esp = sp0 - 0x16cu;
    t175 = cow_cdecl(g, COW_IMG(0x10001f20u), 2, COW_IMG(0x103646c8u), sp0 - 0x160u);
    t176 = g->ecx;
    t177 = g->edx;
    eax = t175;
    ecx = t176;
    edx = t177;
    COW_AT(10102b98)
    if (eax == 0u)
    {
    COW_AT(10102c11)
        if (rd32(sp0 - 0xd0u) == 1u) goto L_10102c23;
    COW_AT(10102c1a)
        if (rd32(sp0 - 0xd4u) != 1u) goto L_10102c49;
L_10102c23: ;
    COW_AT(10102c23)
        wr32(rd32(COW_IMG(0x104e0af4u)) + 0xcu, 0x36ee80u);
        t183 = rd32(COW_IMG(0x104e0af4u));
        wr32(t183 + 0x10u, 0x37d8e0u);
        t184 = rd32(COW_IMG(0x104e0af4u));
        wr32(t184 + 0x14u, 0x38c340u);
        eax = t184;
        edx = t183;
    }
    else
    {
    COW_AT(10102b9f)
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        g->eax = sp0 - 0x160u;
        g->esp = sp0 - 0x16cu;
        t178 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, sp0 - 0x160u);
        eax = t178;
    COW_AT(10102ba9)
        wr32(sp0 - 0x174u, sp0 - 0x160u);
        t179 = rd32(COW_IMG(0x104e0af4u));
        wr32(t179 + 0xcu, eax);
        g->eax = eax;
        g->esp = sp0 - 0x170u;
        t180 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), t179, 1, sp0 - 0x160u);
        eax = t180;
    COW_AT(10102bbc)
        wr32(rd32(COW_IMG(0x104e0af4u)) + 0x10u, eax + 0xbb8u);
        t181 = rd32(rd32(COW_IMG(0x104e0af4u)) + 0xcu) << 2u;
        wr32(rd32(COW_IMG(0x104e0af4u)) + 0x14u, t181);
        if (rd32(rd32(COW_IMG(0x104e0af4u)) + 0x14u) <= 0x493e0u)
        {
            eax = rd32(rd32(COW_IMG(0x104e0af4u)) + 0x14u);
            edx = t181;
        }
        else
        {
            eax = rd32(rd32(COW_IMG(0x104e0af4u)) + 0x14u);
            ecx = rd32(COW_IMG(0x104e0af4u));
            edx = t181;
    COW_AT(10102beb)
            if (rd32(ecx + 0x10u) >= 0x4baf0u)
            {
    COW_AT(10102bfd)
                if (eax > 0x493e0u)
                {
    COW_AT(10102c04)
                    t182 = rd32(ecx + 0x10u) + 0x2710u;
                    wr32(ecx + 0x14u, t182);
                    eax = t182;
                }
            }
            else
            {
    COW_AT(10102bf4)
                wr32(ecx + 0x14u, 0x493e0u);
            }
        }
    }
L_10102c49: ;
    COW_AT(10102c49)
    wr32(sp0 - 0x170u, sp0 - 0x160u);
    wr32(sp0 - 0x174u, COW_IMG(0x103646bcu));
    g->eax = eax;
    g->ecx = sp0 - 0x160u;
    g->esp = sp0 - 0x16cu;
    t185 = cow_cdecl(g, COW_IMG(0x10001f20u), 2, COW_IMG(0x103646bcu), sp0 - 0x160u);
    t186 = g->ecx;
    eax = t185;
    ecx = t186;
    COW_AT(10102c58)
    if (eax != 0u)
    {
    COW_AT(10102c5f)
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        g->eax = eax;
        g->esp = sp0 - 0x16cu;
        t187 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, sp0 - 0x160u);
        eax = t187;
    COW_AT(10102c69)
        t188 = rd32(COW_IMG(0x104e0af4u));
        wr32(t188 + 0x10u, eax);
        ecx = t188;
    }
    COW_AT(10102c75)
    wr32(sp0 - 0x170u, sp0 - 0x160u);
    wr32(sp0 - 0x174u, COW_IMG(0x103646b0u));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = sp0 - 0x160u;
    g->esp = sp0 - 0x16cu;
    t189 = cow_cdecl(g, COW_IMG(0x10001f20u), 2, COW_IMG(0x103646b0u), sp0 - 0x160u);
    t190 = g->ecx;
    t191 = g->edx;
    eax = t189;
    ecx = t190;
    edx = t191;
    COW_AT(10102c84)
    if (eax != 0u)
    {
    COW_AT(10102c8b)
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        g->eax = sp0 - 0x160u;
        g->esp = sp0 - 0x16cu;
        t192 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, sp0 - 0x160u);
        eax = t192;
    COW_AT(10102c95)
        t193 = rd32(COW_IMG(0x104e0af0u));
        wr32(t193 + 0x15cu, eax);
        ecx = t193;
    }
    COW_AT(10102ca4)
    wr32(sp0 - 0x170u, sp0 - 0x160u);
    wr32(sp0 - 0x174u, COW_IMG(0x103646a0u));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = sp0 - 0x160u;
    g->esp = sp0 - 0x16cu;
    t194 = cow_cdecl(g, COW_IMG(0x10001f20u), 2, COW_IMG(0x103646a0u), sp0 - 0x160u);
    t195 = g->ecx;
    t196 = g->edx;
    eax = t194;
    ecx = t195;
    edx = t196;
    COW_AT(10102cb3)
    if (eax != 0u)
    {
    COW_AT(10102cba)
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        g->eax = sp0 - 0x160u;
        g->esp = sp0 - 0x16cu;
        t197 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, sp0 - 0x160u);
        eax = t197;
    COW_AT(10102cc4)
        t198 = rd32(COW_IMG(0x104e0af0u));
        wr32(t198 + 0x15cu, eax);
        ecx = t198;
    }
    COW_AT(10102cd3)
    wr32(sp0 - 0x170u, sp0 - 0x160u);
    wr32(sp0 - 0x174u, COW_IMG(0x10364698u));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = sp0 - 0x160u;
    g->esp = sp0 - 0x16cu;
    t199 = cow_cdecl(g, COW_IMG(0x10001f20u), 2, COW_IMG(0x10364698u), sp0 - 0x160u);
    t200 = g->ecx;
    t201 = g->edx;
    eax = t199;
    ecx = t200;
    edx = t201;
    COW_AT(10102ce2)
    if (eax != 0u)
    {
    COW_AT(10102ce9)
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        g->eax = sp0 - 0x160u;
        g->esp = sp0 - 0x16cu;
        t202 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, sp0 - 0x160u);
        eax = t202;
    COW_AT(10102cf3)
        t203 = rd32(COW_IMG(0x104e0af0u));
        wr32(t203 + 0x160u, (uint16_t)eax);
        eax = (uint16_t)eax;
        ecx = t203;
    }
    COW_AT(10102d07)
    wr32(sp0 - 0x170u, sp0 - 0x160u);
    wr32(sp0 - 0x174u, COW_IMG(0x1036468cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = sp0 - 0x160u;
    g->esp = sp0 - 0x16cu;
    t204 = cow_cdecl(g, COW_IMG(0x10001f20u), 2, COW_IMG(0x1036468cu), sp0 - 0x160u);
    t205 = g->ecx;
    t206 = g->edx;
    eax = t204;
    ecx = t205;
    edx = t206;
    COW_AT(10102d16)
    if (eax != 0u)
    {
    COW_AT(10102d1d)
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        g->eax = sp0 - 0x160u;
        g->edx = edx;
        g->esp = sp0 - 0x16cu;
        t207 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, sp0 - 0x160u);
        t208 = g->edx;
        eax = t207;
        edx = t208;
    COW_AT(10102d27)
        t209 = rd32(COW_IMG(0x104e0af0u));
        wr32(t209 + 0x164u, eax);
        ecx = t209;
    }
    COW_AT(10102d36)
    wr32(sp0 - 0x170u, 0u);
    wr32(sp0 - 0x174u, COW_IMG(0x10364680u));
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x16cu;
    t210 = cow_cdecl(g, COW_IMG(0x10001f20u), 2, COW_IMG(0x10364680u), 0u);
    t211 = g->ecx;
    eax = t210;
    ecx = t211;
    COW_AT(10102d41)
    wr32(sp0 - 0x178u, sp0 - 0x160u);
    wr32(sp0 - 0x17cu, COW_IMG(0x10364674u));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = sp0 - 0x160u;
    g->esp = sp0 - 0x174u;
    t212 = cow_cdecl(g, COW_IMG(0x10001f20u), 2, COW_IMG(0x10364674u), sp0 - 0x160u);
    t213 = g->ecx;
    t214 = g->edx;
    eax = t212;
    ecx = t213;
    edx = t214;
    COW_AT(10102d50)
    if (eax != 0u)
    {
    COW_AT(10102d57)
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        g->eax = sp0 - 0x160u;
        g->esp = sp0 - 0x16cu;
        t215 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, sp0 - 0x160u);
        eax = t215;
    COW_AT(10102d61)
        t216 = rd32(COW_IMG(0x104e0af0u));
        wr32(t216 + 0x158u, eax);
        ecx = t216;
    }
    COW_AT(10102d70)
    wr32(sp0 - 0x170u, sp0 - 0x160u);
    wr32(sp0 - 0x174u, COW_IMG(0x10364670u));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = sp0 - 0x160u;
    g->esp = sp0 - 0x16cu;
    t217 = cow_cdecl(g, COW_IMG(0x10001f20u), 2, COW_IMG(0x10364670u), sp0 - 0x160u);
    t218 = g->ecx;
    t219 = g->edx;
    eax = t217;
    ecx = t218;
    edx = t219;
    COW_AT(10102d7f)
    if (eax != 0u)
    {
    COW_AT(10102d86)
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        g->eax = sp0 - 0x160u;
        g->esp = sp0 - 0x16cu;
        t220 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, sp0 - 0x160u);
        eax = t220;
    COW_AT(10102d90)
        t221 = rd32(COW_IMG(0x104e0af0u));
        wr32(t221 + 0x16cu, eax);
        ecx = t221;
    }
    COW_AT(10102d9f)
    wr32(sp0 - 0x170u, sp0 - 0x160u);
    wr32(sp0 - 0x174u, COW_IMG(0x1036466cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = sp0 - 0x160u;
    g->esp = sp0 - 0x16cu;
    t222 = cow_cdecl(g, COW_IMG(0x10001f20u), 2, COW_IMG(0x1036466cu), sp0 - 0x160u);
    t223 = g->ecx;
    t224 = g->edx;
    eax = t222;
    ecx = t223;
    edx = t224;
    COW_AT(10102dae)
    if (eax != 0u)
    {
    COW_AT(10102db5)
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        g->eax = sp0 - 0x160u;
        g->esp = sp0 - 0x16cu;
        t225 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, sp0 - 0x160u);
        eax = t225;
    COW_AT(10102dbf)
        t226 = rd32(COW_IMG(0x104e0af0u));
        wr32(t226 + 0x170u, eax);
        ecx = t226;
    }
    COW_AT(10102dce)
    wr32(sp0 - 0x170u, sp0 - 0x160u);
    wr32(sp0 - 0x174u, COW_IMG(0x10364664u));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = sp0 - 0x160u;
    g->esp = sp0 - 0x16cu;
    t227 = cow_cdecl(g, COW_IMG(0x10001f20u), 2, COW_IMG(0x10364664u), sp0 - 0x160u);
    t228 = g->ecx;
    t229 = g->edx;
    eax = t227;
    ecx = t228;
    edx = t229;
    COW_AT(10102ddd)
    if (eax == 0u)
    {
    COW_AT(10102dff)
        t233 = rd32(COW_IMG(0x104e0af0u));
        wr32(t233 + 0x168u, 1u);
        edx = t233;
    }
    else
    {
    COW_AT(10102de4)
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        g->eax = sp0 - 0x160u;
        g->edx = edx;
        g->esp = sp0 - 0x16cu;
        t230 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, sp0 - 0x160u);
        t231 = g->edx;
        eax = t230;
        edx = t231;
    COW_AT(10102dee)
        t232 = rd32(COW_IMG(0x104e0af0u));
        wr32(t232 + 0x168u, eax);
        ecx = t232;
    }
    COW_AT(10102e0b)
    wr32(sp0 - 0x170u, sp0 - 0x160u);
    wr32(sp0 - 0x174u, COW_IMG(0x1036465cu));
    g->eax = sp0 - 0x160u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x16cu;
    t234 = cow_cdecl(g, COW_IMG(0x10001f20u), 2, COW_IMG(0x1036465cu), sp0 - 0x160u);
    t235 = g->ecx;
    t236 = g->edx;
    eax = t234;
    ecx = t235;
    edx = t236;
    COW_AT(10102e1a)
    if (eax != 0u)
    {
    COW_AT(10102e21)
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        g->eax = eax;
        g->esp = sp0 - 0x16cu;
        t237 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), sp0 - 0x160u, 1, sp0 - 0x160u);
        t238 = g->ecx;
        eax = t237;
        ecx = t238;
    COW_AT(10102e2b)
        t239 = rd32(COW_IMG(0x104e0af4u));
        wr32(t239 + 0x20u, eax);
        edx = t239;
    }
    COW_AT(10102e37)
    wr32(sp0 - 0x170u, sp0 - 0x160u);
    wr32(sp0 - 0x174u, COW_IMG(0x10364654u));
    g->eax = sp0 - 0x160u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x16cu;
    t240 = cow_cdecl(g, COW_IMG(0x10001f20u), 2, COW_IMG(0x10364654u), sp0 - 0x160u);
    t241 = g->ecx;
    t242 = g->edx;
    eax = t240;
    ecx = t241;
    edx = t242;
    COW_AT(10102e46)
    if (eax != 0u)
    {
    COW_AT(10102e4d)
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        g->eax = eax;
        g->esp = sp0 - 0x16cu;
        t243 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), sp0 - 0x160u, 1, sp0 - 0x160u);
        t244 = g->ecx;
        eax = t243;
        ecx = t244;
    COW_AT(10102e57)
        t245 = rd32(COW_IMG(0x104e0af4u));
        wr32(t245 + 0x24u, eax);
        edx = t245;
    }
    COW_AT(10102e63)
    wr32(sp0 - 0x170u, sp0 - 0x160u);
    wr32(sp0 - 0x174u, COW_IMG(0x1036464cu));
    g->eax = sp0 - 0x160u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x16cu;
    t246 = cow_cdecl(g, COW_IMG(0x10001f20u), 2, COW_IMG(0x1036464cu), sp0 - 0x160u);
    t247 = g->ecx;
    t248 = g->edx;
    eax = t246;
    ecx = t247;
    edx = t248;
    COW_AT(10102e72)
    if (eax != 0u)
    {
    COW_AT(10102e79)
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        g->eax = eax;
        g->esp = sp0 - 0x16cu;
        t249 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), sp0 - 0x160u, 1, sp0 - 0x160u);
        t250 = g->ecx;
        eax = t249;
        ecx = t250;
    COW_AT(10102e83)
        t251 = rd32(COW_IMG(0x104e0af4u));
        wr32(t251 + 0x28u, eax);
        edx = t251;
    }
    COW_AT(10102e8f)
    wr32(sp0 - 0x170u, sp0 - 0x160u);
    wr32(sp0 - 0x174u, COW_IMG(0x10364644u));
    g->eax = sp0 - 0x160u;
    g->edx = edx;
    g->esp = sp0 - 0x16cu;
    t252 = cow_cdecl(g, COW_IMG(0x10001f20u), 2, COW_IMG(0x10364644u), sp0 - 0x160u);
    t253 = g->edx;
    eax = t252;
    edx = t253;
    COW_AT(10102e9e)
    if (eax == 0u)
    {
    COW_AT(10102ec0)
        t256 = rd32(COW_IMG(0x104e0af0u));
        wr32(t256 + 0x178u, 0u);
        eax = t256;
    }
    else
    {
    COW_AT(10102ea5)
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        g->eax = eax;
        g->esp = sp0 - 0x16cu;
        t254 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), sp0 - 0x160u, 1, sp0 - 0x160u);
        eax = t254;
    COW_AT(10102eaf)
        t255 = rd32(COW_IMG(0x104e0af0u));
        wr32(t255 + 0x178u, eax);
        edx = t255;
    }
    COW_AT(10102ecb)
    wr32(sp0 - 0x170u, sp0 - 0x160u);
    wr32(sp0 - 0x174u, COW_IMG(0x1036463cu));
    g->eax = eax;
    g->ecx = sp0 - 0x160u;
    g->esp = sp0 - 0x16cu;
    t257 = cow_cdecl(g, COW_IMG(0x10001f20u), 2, COW_IMG(0x1036463cu), sp0 - 0x160u);
    t258 = g->ecx;
    eax = t257;
    ecx = t258;
    COW_AT(10102eda)
    if (eax == 0u)
    {
    COW_AT(10102efc)
        t262 = rd32(COW_IMG(0x104e0af0u));
        wr32(t262 + 0x178u, 0u);
        edx = t262;
    }
    else
    {
    COW_AT(10102ee1)
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        g->eax = eax;
        g->edx = sp0 - 0x160u;
        g->esp = sp0 - 0x16cu;
        t259 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, sp0 - 0x160u);
        t260 = g->edx;
        eax = t259;
        edx = t260;
    COW_AT(10102eeb)
        t261 = rd32(COW_IMG(0x104e0af0u));
        wr32(t261 + 0x17cu, eax);
        ecx = t261;
    }
    COW_AT(10102f08)
    wr32(sp0 - 0x170u, sp0 - 0x160u);
    wr32(sp0 - 0x174u, COW_IMG(0x10364634u));
    g->eax = sp0 - 0x160u;
    g->edx = edx;
    g->esp = sp0 - 0x16cu;
    t263 = cow_cdecl(g, COW_IMG(0x10001f20u), 2, COW_IMG(0x10364634u), sp0 - 0x160u);
    t264 = g->edx;
    eax = t263;
    edx = t264;
    COW_AT(10102f17)
    if (eax == 0u)
    {
    COW_AT(10102f39)
        t267 = rd32(COW_IMG(0x104e0af0u));
        wr32(t267 + 0x180u, 0u);
        eax = t267;
    }
    else
    {
    COW_AT(10102f1e)
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        g->eax = eax;
        g->esp = sp0 - 0x16cu;
        t265 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), sp0 - 0x160u, 1, sp0 - 0x160u);
        eax = t265;
    COW_AT(10102f28)
        t266 = rd32(COW_IMG(0x104e0af0u));
        wr32(t266 + 0x180u, eax);
        edx = t266;
    }
    COW_AT(10102f44)
    wr32(sp0 - 0x170u, sp0 - 0x160u);
    wr32(sp0 - 0x174u, COW_IMG(0x1036462cu));
    g->eax = eax;
    g->ecx = sp0 - 0x160u;
    g->esp = sp0 - 0x16cu;
    t268 = cow_cdecl(g, COW_IMG(0x10001f20u), 2, COW_IMG(0x1036462cu), sp0 - 0x160u);
    t269 = g->ecx;
    eax = t268;
    ecx = t269;
    COW_AT(10102f53)
    if (eax == 0u)
    {
    COW_AT(10102f75)
        t272 = rd32(COW_IMG(0x104e0af0u));
        wr32(t272 + 0x184u, 0u);
        edx = t272;
    }
    else
    {
    COW_AT(10102f5a)
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        g->eax = eax;
        g->edx = sp0 - 0x160u;
        g->esp = sp0 - 0x16cu;
        t270 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, sp0 - 0x160u);
        t271 = g->edx;
        eax = t270;
        edx = t271;
    COW_AT(10102f64)
        wr32(rd32(COW_IMG(0x104e0af0u)) + 0x184u, eax);
    }
    COW_AT(10102f81)
    wr32(sp0 - 0x170u, 0u);
    wr32(sp0 - 0x174u, COW_IMG(0x10364624u));
    t273 = rd32(COW_IMG(0x104e0af0u));
    wr16(t273 + 0x188u, 0u);
    t274 = rd32(COW_IMG(0x104e0af0u));
    wr16(t274 + 0x18au, 0u);
    g->eax = t273;
    g->ecx = t274;
    g->edx = edx;
    g->esp = sp0 - 0x16cu;
    t275 = cow_cdecl(g, COW_IMG(0x10001f20u), 2, COW_IMG(0x10364624u), 0u);
    t276 = g->ecx;
    t277 = g->edx;
    eax = t275;
    ecx = t276;
    edx = t277;
    COW_AT(10102fa5)
    if (eax != 0u)
    {
    COW_AT(10102fac)
        t278 = rd32(sp0 - 0xd4u);
        wr16(sp0 - 0xau, (int32_t)t278 >= 3);
        edx = (int32_t)t278 >= 3;
    }
    COW_AT(10102fc3)
    wr32(sp0 - 0x170u, sp0 - 0x160u);
    wr32(sp0 - 0x174u, COW_IMG(0x10364618u));
    g->eax = sp0 - 0x160u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x16cu;
    t279 = cow_cdecl(g, COW_IMG(0x10001f20u), 2, COW_IMG(0x10364618u), sp0 - 0x160u);
    t280 = g->ecx;
    t281 = g->edx;
    eax = t279;
    ecx = t280;
    edx = t281;
    COW_AT(10102fd2)
    if (eax != 0u)
    {
    COW_AT(10102fd9)
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        g->eax = eax;
        g->esp = sp0 - 0x16cu;
        t282 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), sp0 - 0x160u, 1, sp0 - 0x160u);
        t283 = g->ecx;
        eax = t282;
        ecx = t283;
    COW_AT(10102fe3)
        wr16(sp0 - 8u, (uint16_t)eax);
    }
    COW_AT(10102fee)
    wr32(sp0 - 0x170u, sp0 - 0x160u);
    wr32(sp0 - 0x174u, COW_IMG(0x1036460cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = sp0 - 0x160u;
    g->esp = sp0 - 0x16cu;
    t284 = cow_cdecl(g, COW_IMG(0x10001f20u), 2, COW_IMG(0x1036460cu), sp0 - 0x160u);
    t285 = g->ecx;
    t286 = g->edx;
    eax = t284;
    ecx = t285;
    edx = t286;
    COW_AT(10102ffd)
    if (eax != 0u)
    {
    COW_AT(10103004)
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        g->eax = sp0 - 0x160u;
        g->edx = edx;
        g->esp = sp0 - 0x16cu;
        t287 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, sp0 - 0x160u);
        t288 = g->edx;
        eax = t287;
        edx = t288;
    COW_AT(1010300e)
    }
    COW_AT(10103011)
    wr32(sp0 - 0x170u, sp0 - 0x160u);
    wr32(sp0 - 0x174u, COW_IMG(0x10364604u));
    g->eax = eax;
    g->ecx = sp0 - 0x160u;
    g->edx = edx;
    g->esp = sp0 - 0x16cu;
    t289 = cow_cdecl(g, COW_IMG(0x10001f20u), 2, COW_IMG(0x10364604u), sp0 - 0x160u);
    t290 = g->ecx;
    t291 = g->edx;
    eax = t289;
    ecx = t290;
    edx = t291;
    COW_AT(10103020)
    if (eax != 0u)
    {
    COW_AT(10103027)
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        g->edx = sp0 - 0x160u;
        g->esp = sp0 - 0x16cu;
        cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, sp0 - 0x160u);
        t292 = g->ecx;
        t293 = g->edx;
        ecx = t292;
        edx = t293;
    COW_AT(10103031)
    }
    COW_AT(10103034)
    wr32(sp0 - 0x170u, sp0 - 0x160u);
    wr32(sp0 - 0x174u, COW_IMG(0x103645fcu));
    g->eax = sp0 - 0x160u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x16cu;
    t294 = cow_cdecl(g, COW_IMG(0x10001f20u), 2, COW_IMG(0x103645fcu), sp0 - 0x160u);
    t295 = g->ecx;
    t296 = g->edx;
    eax = t294;
    ecx = t295;
    edx = t296;
    COW_AT(10103043)
    if (eax != 0u)
    {
    COW_AT(1010304a)
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        g->eax = eax;
        g->esp = sp0 - 0x16cu;
        t297 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), sp0 - 0x160u, 1, sp0 - 0x160u);
        t298 = g->ecx;
        eax = t297;
        ecx = t298;
    COW_AT(10103054)
    }
    COW_AT(10103057)
    wr32(sp0 - 0x170u, sp0 - 0x160u);
    wr32(sp0 - 0x174u, COW_IMG(0x103645f4u));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = sp0 - 0x160u;
    g->esp = sp0 - 0x16cu;
    t299 = cow_cdecl(g, COW_IMG(0x10001f20u), 2, COW_IMG(0x103645f4u), sp0 - 0x160u);
    t300 = g->ecx;
    t301 = g->edx;
    eax = t299;
    ecx = t300;
    edx = t301;
    COW_AT(10103066)
    if (eax != 0u)
    {
    COW_AT(1010306d)
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        g->eax = sp0 - 0x160u;
        g->edx = edx;
        g->esp = sp0 - 0x16cu;
        t302 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, sp0 - 0x160u);
        t303 = g->edx;
        eax = t302;
        edx = t303;
    COW_AT(10103077)
    }
    COW_AT(1010307a)
    wr32(sp0 - 0x170u, sp0 - 0x160u);
    wr32(sp0 - 0x174u, COW_IMG(0x103645ecu));
    g->eax = eax;
    g->ecx = sp0 - 0x160u;
    g->edx = edx;
    g->esp = sp0 - 0x16cu;
    t304 = cow_cdecl(g, COW_IMG(0x10001f20u), 2, COW_IMG(0x103645ecu), sp0 - 0x160u);
    t305 = g->ecx;
    t306 = g->edx;
    eax = t304;
    ecx = t305;
    edx = t306;
    COW_AT(10103089)
    if (eax != 0u)
    {
    COW_AT(10103090)
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        g->edx = sp0 - 0x160u;
        g->esp = sp0 - 0x16cu;
        cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, sp0 - 0x160u);
        t307 = g->ecx;
        t308 = g->edx;
        ecx = t307;
        edx = t308;
    COW_AT(1010309a)
    }
    COW_AT(1010309d)
    wr32(sp0 - 0x170u, sp0 - 0x160u);
    wr32(sp0 - 0x174u, COW_IMG(0x103645e4u));
    g->eax = sp0 - 0x160u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x16cu;
    t309 = cow_cdecl(g, COW_IMG(0x10001f20u), 2, COW_IMG(0x103645e4u), sp0 - 0x160u);
    t310 = g->ecx;
    t311 = g->edx;
    eax = t309;
    ecx = t310;
    edx = t311;
    COW_AT(101030ac)
    if (eax != 0u)
    {
    COW_AT(101030b3)
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        g->eax = eax;
        g->esp = sp0 - 0x16cu;
        t312 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), sp0 - 0x160u, 1, sp0 - 0x160u);
        t313 = g->ecx;
        eax = t312;
        ecx = t313;
    COW_AT(101030bd)
    }
    COW_AT(101030c0)
    wr32(sp0 - 0x170u, sp0 - 0x160u);
    wr32(sp0 - 0x174u, COW_IMG(0x103645dcu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = sp0 - 0x160u;
    g->esp = sp0 - 0x16cu;
    t314 = cow_cdecl(g, COW_IMG(0x10001f20u), 2, COW_IMG(0x103645dcu), sp0 - 0x160u);
    t315 = g->ecx;
    t316 = g->edx;
    eax = t314;
    ecx = t315;
    edx = t316;
    COW_AT(101030cf)
    if (eax != 0u)
    {
    COW_AT(101030d6)
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        g->eax = sp0 - 0x160u;
        g->edx = edx;
        g->esp = sp0 - 0x16cu;
        t317 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, sp0 - 0x160u);
        t318 = g->edx;
        eax = t317;
        edx = t318;
    COW_AT(101030e0)
    }
    COW_AT(101030e3)
    wr32(sp0 - 0x170u, sp0 - 0x160u);
    wr32(sp0 - 0x174u, COW_IMG(0x103645d4u));
    g->eax = eax;
    g->esp = sp0 - 0x16cu;
    t319 = cow_cdecl(g, COW_IMG(0x10001f20u), 2, COW_IMG(0x103645d4u), sp0 - 0x160u);
    eax = t319;
    COW_AT(101030f2)
    if (eax != 0u)
    {
    COW_AT(101030f9)
        wr32(rd32(COW_IMG(0x104e0af0u)) + 0x8a4u, 1u);
    }
    COW_AT(10103105)
    t320 = rd32(sp0 - 0xd4u);
    wr32(rd32(COW_IMG(0x104e0af4u)) + 4u, t320);
    t321 = rd32(sp0 - 0xd0u);
    wr32(rd32(COW_IMG(0x104e0af4u)), t321);
    t322 = rd32(sp0 - 0xdcu);
    wr32(rd32(COW_IMG(0x104e0af0u)) + 0xbcu, t322);
    if (rd32(rd32(COW_IMG(0x104e0af4u)) + 0x24u) == 0u)
    {
        eax = rd32(COW_IMG(0x104e0af4u));
        goto L_1010314a;
    }
    eax = rd32(COW_IMG(0x104e0af4u));
    ecx = rd32(rd32(COW_IMG(0x104e0af4u)) + 0x24u);
    COW_AT(10103142)
    if ((int32_t)ecx <= 768) goto L_10103156;
L_1010314a: ;
    COW_AT(1010314a)
    wr32(eax + 0x24u, 0x300u);
    eax = rd32(COW_IMG(0x104e0af4u));
L_10103156: ;
    COW_AT(10103156)
    if (rd32(eax + 0x28u) != 0u)
    {
        ecx = rd32(eax + 0x28u);
        goto L_1010316d;
    }
    COW_AT(1010315d)
    if ((int32_t)rd32(eax + 0x24u) > 512) goto L_10103175;
    ecx = rd32(eax + 0x24u);
    COW_AT(10103168)
    wr32(eax + 0x28u, ecx);
L_1010317c: ;
    COW_AT(1010317c)
    eax = rd32(COW_IMG(0x104e0af4u));
L_10103181: ;
    COW_AT(10103181)
    if ((int32_t)rd32(eax + 0x24u) >= 12)
    {
        ecx = rd32(eax + 0x24u);
    COW_AT(10103189)
        wr32(eax + 0x30u, ecx - 0xcu);
        eax = rd32(COW_IMG(0x104e0af4u));
    }
    COW_AT(10103194)
    wr32(sp0 - 0x170u, 0u);
    wr32(sp0 - 0x174u, 0u);
    t323 = rd32(eax + 0x28u) + 0x700u;
    wr32(eax + 0x2cu, t323);
    t324 = rd16(sp0 - 0xau);
    wr16(rd32(COW_IMG(0x104e0af4u)) + 8u, (uint16_t)t324);
    t325 = rd16(sp0 - 8u);
    t326 = rd32(COW_IMG(0x104e0af4u));
    wr16(t326 + 0xau, (uint16_t)t325);
    g->eax = (eax & 0xffff0000u) | t324;
    g->ecx = (t323 & 0xffff0000u) | t325;
    g->edx = t326;
    g->esp = sp0 - 0x16cu;
    t327 = cow_cdecl(g, COW_IMG(0x100dc150u), 2, 0u, 0u);
    t328 = g->ecx;
    t329 = g->edx;
    eax = t327;
    ecx = t328;
    edx = t329;
    COW_AT(101031cb)
    wr32(sp0 - 0x178u, 0u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x174u;
    t330 = cow_cdecl(g, COW_IMG(0x101039c0u), 1, 0u);
    t331 = g->ecx;
    t332 = g->edx;
    eax = t330;
    ecx = t331;
    edx = t332;
    COW_AT(101031d1)
    if (rd16(sp0 - 0xau) == 0u) goto L_10103201;
    COW_AT(101031de)
    wr32(sp0 - 0x170u, sp0 - 0xb0u);
    wr32(sp0 - 0x174u, COW_IMG(0x103645c4u));
    wr32(sp0 - 0x178u, COW_IMG(0x10357fb8u));
    wr32(sp0 - 0x17cu, COW_IMG(0x103645b4u));
    g->eax = sp0 - 0xb0u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x17cu;
    t333 = cow_stdcall(g, COW_IMG(0x100ed720u), 0);
    t334 = g->ecx;
    t335 = g->edx;
    eax = t333;
    ecx = t334;
    edx = t335;
    COW_AT(101031fa)
    if ((int32_t)eax < 0) goto L_1010320e;
L_10103201: ;
    COW_AT(10103201)
    wr32(sp0 - 0x170u, 0u);
    g->eax = eax;
    g->esp = sp0 - 0x16cu;
    t336 = cow_call_regs(g, COW_IMG(0x100d9380u), g->eax, ecx, edx, 1, 1, 0u);
    t337 = g->edx;
    eax = t336;
    edx = t337;
    COW_AT(10103207)
    if (eax == 0u) goto L_1010321a;
L_1010320e: ;
    COW_AT(1010320e)
    g->ebx = rd32(sp0 - 0x164u);
    g->esi = rd32(sp0 - 0x168u);
    g->edi = rd32(sp0 - 0x16cu);
    return eax & 0xffffff00u;
L_101024ad: ;
    COW_AT(101024ad)
    wr32(sp0 - 0xd4u, 1u);
    wr32(sp0 - 0xd0u, 0u);
    wr32(sp0 - 0xccu, 0u);
    wr32(sp0 - 0xc8u, 0u);
    wr32(rd32(COW_IMG(0x104e0af0u)) + 0x90u, 1u);
    loc_d4 = 1u;
    loc_d0 = 0u;
    goto L_10102717;
L_101024da: ;
    COW_AT(101024da)
    wr32(sp0 - 0xd4u, 2u);
    wr32(sp0 - 0xd0u, 0u);
    wr32(sp0 - 0xccu, 0u);
    wr32(sp0 - 0xc8u, 0u);
    t42 = rd32(COW_IMG(0x104e0af0u));
    wr32(t42 + 0x90u, 1u);
    eax = t42;
    loc_d4 = 2u;
    loc_d0 = 0u;
    goto L_10102717;
L_1010250a: ;
    COW_AT(1010250a)
    t41 = rd32(COW_IMG(0x104e0af0u));
    wr32(t41 + 0x90u, 1u);
    wr32(sp0 - 0xd4u, 3u);
    wr32(sp0 - 0xc8u, 0u);
    ecx = t41;
    loc_d4 = 3u;
    goto L_10102709;
L_10102529: ;
    COW_AT(10102529)
    wr32(rd32(COW_IMG(0x104e0af0u)) + 0x90u, 1u);
    wr32(sp0 - 0xd4u, 4u);
    wr32(sp0 - 0xc8u, 0u);
    loc_d4 = 4u;
    goto L_10102709;
L_1010254c: ;
    COW_AT(1010254c)
    t39 = rd32(COW_IMG(0x104e0af0u));
    wr32(t39 + 4u, 1u);
    t40 = rd32(COW_IMG(0x104e0af0u));
    wr32(t40 + 0x90u, 1u);
    wr32(sp0 - 0xd4u, 1u);
    wr32(sp0 - 0xd0u, 1u);
    wr32(sp0 - 0xc8u, 0u);
    wr8(sp0 - 0xc4u, 1u);
    eax = t39;
    ecx = t40;
    loc_d4 = 1u;
    loc_d0 = 1u;
    goto L_10102710;
L_10102581: ;
    COW_AT(10102581)
    wr32(rd32(COW_IMG(0x104e0af0u)) + 4u, 2u);
    t38 = rd32(COW_IMG(0x104e0af0u));
    wr32(t38 + 0x90u, 1u);
    wr32(sp0 - 0xd4u, 2u);
    wr32(sp0 - 0xd0u, 2u);
    wr32(sp0 - 0xccu, 1u);
    wr32(sp0 - 0xc8u, 0u);
    wr8(sp0 - 0xc4u, 1u);
    eax = 2u;
    ecx = t38;
    loc_d4 = 2u;
    loc_d0 = 2u;
    goto L_10102717;
L_101025c3: ;
    COW_AT(101025c3)
    wr32(rd32(COW_IMG(0x104e0af0u)) + 4u, 3u);
    wr32(rd32(COW_IMG(0x104e0af0u)) + 0x90u, 1u);
    wr32(sp0 - 0xd4u, 3u);
    wr32(sp0 - 0xd0u, 2u);
    wr32(sp0 - 0xccu, 2u);
    wr32(sp0 - 0xc8u, 1u);
    wr8(sp0 - 0xc4u, 1u);
    eax = 2u;
    loc_d4 = 3u;
    loc_d0 = 2u;
    goto L_10102717;
L_10102604: ;
    COW_AT(10102604)
    t37 = rd32(COW_IMG(0x104e0af0u));
    wr32(t37 + 4u, 4u);
    wr32(rd32(COW_IMG(0x104e0af0u)) + 0x90u, 1u);
    wr32(sp0 - 0xd4u, 4u);
    wr8(sp0 - 0xc4u, 1u);
    wr32(sp0 - 0xd0u, 2u);
    wr32(sp0 - 0xccu, 2u);
    wr32(sp0 - 0xc8u, 2u);
    eax = 2u;
    ecx = t37;
    loc_d4 = 4u;
    loc_d0 = 2u;
    goto L_10102717;
L_1010264b: ;
    COW_AT(1010264b)
    t36 = rd32(COW_IMG(0x104e0af0u));
    wr32(t36 + 4u, 1u);
    wr32(sp0 - 0xd4u, 0u);
    wr32(sp0 - 0xd0u, 1u);
    wr32(sp0 - 0xc8u, 0u);
    wr8(sp0 - 0xc4u, 1u);
    eax = t36;
    loc_d4 = 0u;
    loc_d0 = 1u;
    goto L_10102710;
L_10102674: ;
    COW_AT(10102674)
    t35 = rd32(COW_IMG(0x104e0af0u));
    wr32(t35 + 4u, 2u);
    wr32(sp0 - 0xd4u, 0u);
    wr32(sp0 - 0xd0u, 2u);
    wr32(sp0 - 0xc8u, 0u);
    eax = 2u;
    ecx = t35;
    loc_d4 = 0u;
    loc_d0 = 2u;
    goto L_10102710;
L_10102699: ;
    COW_AT(10102699)
    wr32(sp0 - 0xd4u, 0u);
    wr32(sp0 - 0xd0u, 0u);
    wr32(sp0 - 0xccu, 1u);
    wr32(sp0 - 0xc8u, 0u);
    wr8(sp0 - 0xc4u, 1u);
    loc_d4 = 0u;
    loc_d0 = 0u;
    goto L_10102717;
L_101026be: ;
    COW_AT(101026be)
    wr32(sp0 - 0xd4u, 0u);
    wr32(sp0 - 0xd0u, 0u);
    wr32(sp0 - 0xccu, 2u);
    wr32(sp0 - 0xc8u, 0u);
    wr8(sp0 - 0xc4u, 1u);
    loc_d4 = 0u;
    loc_d0 = 0u;
    goto L_10102717;
L_101026e7: ;
    COW_AT(101026e7)
    wr32(sp0 - 0xc8u, 1u);
L_101026fb: ;
    COW_AT(101026fb)
    wr8(sp0 - 0xc4u, 1u);
    goto L_10102702;
L_101026f0: ;
    COW_AT(101026f0)
    wr32(sp0 - 0xc8u, 2u);
    goto L_101026fb;
L_1010316d: ;
    COW_AT(1010316d)
    if ((int32_t)ecx < 512) goto L_10103181;
L_10103175: ;
    COW_AT(10103175)
    wr32(eax + 0x28u, 0x200u);
    goto L_1010317c;
L_1010321a: ;
    COW_AT(1010321a)
    wr32(sp0 - 0x170u, 0u);
    wr32(sp0 - 0x174u, sp0 - 0xe0u);
    g->esp = sp0 - 0x168u;
    cow_call_regs(g, COW_IMG(0x101033c0u), g->eax, g->ecx, edx, 1, 3, sp0 - 0xe0u, 0u, rd32(sp0 - 0x16cu));
    COW_AT(10103228)
    wr32(rd32(COW_IMG(0x104e0af4u)) + 0x43cu, COW_IMG(0x1036459cu));
    t338 = rd32(sp0 - 0x16cu);
    wr32(rd32(COW_IMG(0x104e0af4u)) + 0x46cu, 0u);
    t339 = rd32(rd32(COW_IMG(0x104e0af4u)) + 0x46cu) | 1u;
    t340 = rd32(COW_IMG(0x104e0af4u));
    t341 = rd32(sp0 - 0x168u);
    wr32(t340 + 0x46cu, t339);
    g->ebx = rd32(sp0 - 0x164u);
    g->esi = t341;
    g->edi = t338;
    return (t340 & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10102340(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10102356u:
    {
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
        in_ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x16cu);
        in_esi = rd32(sp0 - 0x168u);
        g->esp = sp0 - 0x170u;
        wr32(sp0 - 0x170u, sp0 - 0xe0u);
        wr32(sp0 - 0x164u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101023c6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x174u;
        wr32(sp0 - 0x170u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x101023d7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x178u;
        wr32(sp0 - 0x170u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x101023f8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        g->esp = sp0 - 0x17cu;
        g->edi = 3u;
        wr32(sp0 - 0x170u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x10102409u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        g->esp = sp0 - 0x180u;
        g->edi = 3u;
        wr32(sp0 - 0x170u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x1010241fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        g->esp = sp0 - 0x188u;
        g->edi = 3u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x10102426u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x10102430u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x170u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x1010243au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x16cu;
        g->edi = 3u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x1010243fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x16cu;
        g->edi = 3u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x1010244cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->edi = 3u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x10102451u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->edi = 3u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x10102459u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->edi = 3u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    case 0x10102466u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x174u;
        g->ebx = 1u;
        g->esi = 0u;
        g->edi = 3u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102471u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        g->edi = 3u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x1010247cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x174u;
        g->ebx = 1u;
        g->esi = 0u;
        g->edi = 3u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x174u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102486u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x178u;
        g->ebx = 1u;
        g->esi = 0u;
        g->edi = 3u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x174u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102492u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        g->edi = 3u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x174u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x101024a1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x174u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x101024adu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x174u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x101024dau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x174u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x1010250au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        g->edi = 3u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x174u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102529u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x174u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x1010254cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x174u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102581u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x174u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x101025c3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        g->edi = 3u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x174u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102604u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x174u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x1010264bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x174u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102674u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x174u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102699u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x174u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x101026beu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x174u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x101026e7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x174u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x101026f0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x174u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x101026fbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x174u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102702u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x174u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102709u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_d4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_d4 = rd32(sp0 - 0xd4u);
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x174u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102710u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_d0;
        uint32_t loc_d4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x174u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102717u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_d0;
        uint32_t loc_d4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102726u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x174u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x1010272du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102737u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x170u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102741u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_dc = rd32(sp0 - 0xdcu);
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102750u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x174u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102757u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102761u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x170u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x1010276bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_d8 = rd32(sp0 - 0xd8u);
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x1010277au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x174u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102781u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x1010278bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x170u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x101027acu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_d8;
        uint32_t loc_dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d8 = rd32(sp0 - 0xd8u);
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x101027c1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x174u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x101027d0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x17cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x101027d7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x101027e1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x170u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x101027f1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102800u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x174u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102807u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102811u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x170u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x1010281bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x1010282au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x174u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102831u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x1010283bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x170u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102845u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102854u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x174u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102861u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x1010286bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x170u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102871u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x1010287bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102884u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102894u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x101028a3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x174u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x101028b6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x101028c3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x178u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x174u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x101028d7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x184u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x184u, sp0 - 0xb0u);
        wr32(sp0 - 0x180u, sp0 - 0x160u);
        wr32(sp0 - 0x174u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x101028dcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x101028e7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x174u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x184u, sp0 - 0x160u);
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x101028eau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101028f9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x174u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102900u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102914u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x178u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0xb0u);
        wr32(sp0 - 0x174u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102917u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10102926u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x174u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x1010292du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102941u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x178u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x60u);
        wr32(sp0 - 0x174u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102944u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10102953u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x174u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x1010295au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102964u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x170u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x1010296eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x1010297du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x174u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102984u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x1010298eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x170u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102994u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1010299cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101029abu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x174u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x101029b2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x101029bcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x170u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x101029c6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x101029d5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x174u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x101029dcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x101029e6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x170u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x101029ecu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101029f4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10102a03u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x174u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102a0au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102a14u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x170u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102a1eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102a2du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x174u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102a34u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102a3eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x170u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102a44u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10102a4cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10102a89u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x174u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102a90u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102a9au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x170u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102aa9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102ab8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x174u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102abfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102ac9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x170u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102ad8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102ae7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x174u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102aeeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102af8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x170u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102b07u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102b16u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x174u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102b1du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102b27u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x170u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102b36u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102b41u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x174u;
        g->ebx = 1u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10102b48u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10102b5bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x174u;
        g->ebx = 1u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10102b5eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10102b69u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x174u;
        g->ebx = 1u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10102b70u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10102b7du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10102b89u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10102b98u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x174u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102b9fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102ba9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x170u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102bbcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x174u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x174u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102bebu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x174u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102bf4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x174u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102bfdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x174u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102c04u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x174u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102c11u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102c1au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102c23u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102c49u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102c58u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x174u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102c5fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102c69u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x170u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102c75u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102c84u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x174u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102c8bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102c95u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x170u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102ca4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102cb3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x174u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102cbau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102cc4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x170u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102cd3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102ce2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x174u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102ce9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102cf3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x170u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102d07u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102d16u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x174u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102d1du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102d27u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x170u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102d36u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102d41u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x174u;
        g->ebx = 1u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10102d50u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x17cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102d57u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102d61u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x170u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102d70u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102d7fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x174u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102d86u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102d90u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x170u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102d9fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102daeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x174u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102db5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102dbfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x170u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102dceu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102dddu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x174u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102de4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102deeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x170u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102dffu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102e0bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102e1au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x174u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102e21u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102e2bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x170u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102e37u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102e46u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x174u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102e4du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102e57u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x170u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102e63u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102e72u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x174u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102e79u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102e83u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x170u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102e8fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102e9eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x174u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102ea5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102eafu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x170u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102ec0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102ecbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102edau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x174u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102ee1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102eebu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x170u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102efcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102f08u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102f17u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x174u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102f1eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102f28u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x170u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102f39u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102f44u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102f53u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x174u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102f5au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102f64u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x170u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102f75u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102f81u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102fa5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x174u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102facu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102fc3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102fd2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x174u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102fd9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102fe3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x170u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102feeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10102ffdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x174u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10103004u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x1010300eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x170u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10103011u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10103020u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x174u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10103027u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10103031u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x170u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10103034u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10103043u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x174u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x1010304au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10103054u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x170u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10103057u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10103066u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x174u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x1010306du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10103077u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x170u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x1010307au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10103089u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x174u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10103090u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x1010309au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x170u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x1010309du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x101030acu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x174u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x101030b3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x101030bdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x170u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x101030c0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x101030cfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x174u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x101030d6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x101030e0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x170u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x101030e3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x101030f2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x174u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x101030f9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10103105u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10103142u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x1010314au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10103156u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x1010315du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10103168u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x1010316du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10103175u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x1010317cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10103181u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10103189u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x10103194u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        wr32(sp0 - 0x170u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x101031cbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x174u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x178u, sp0 - 0x160u);
        (void)sp0;
        return 1;
    }
    case 0x101031d1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x178u;
        g->ebx = 1u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101031deu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101031fau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x17cu;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x170u, sp0 - 0xb0u);
        (void)sp0;
        return 1;
    }
    case 0x10103201u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10103207u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x170u;
        g->ebx = 1u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1010320eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        (void)sp0;
        return 1;
    }
    case 0x1010321au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x16cu;
        g->ebx = 1u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10103228u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x174u;
        g->ebx = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x174u, sp0 - 0xe0u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10102340(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10102340(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
