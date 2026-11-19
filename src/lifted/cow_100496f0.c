/* f_0x100496f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100496f0(Guest* g)
{
    double d1;
    double d100;
    double d101;
    double d102;
    double d104;
    double d105;
    double d106;
    double d119;
    double d122;
    double d126;
    double d129;
    double d135;
    double d138;
    double d142;
    double d145;
    double d151;
    double d154;
    double d158;
    double d16;
    double d161;
    double d167;
    double d170;
    double d174;
    double d177;
    double d183;
    double d186;
    double d190;
    double d193;
    double d197;
    double d2;
    double d20;
    double d200;
    double d204;
    double d207;
    double d211;
    double d214;
    double d218;
    double d221;
    double d225;
    double d226;
    double d229;
    double d233;
    double d236;
    double d240;
    double d243;
    double d247;
    double d248;
    double d25;
    double d251;
    double d255;
    double d258;
    double d262;
    double d265;
    double d271;
    double d274;
    double d278;
    double d281;
    double d285;
    double d288;
    double d292;
    double d295;
    double d30;
    double d302;
    double d306;
    double d31;
    double d310;
    double d311;
    double d315;
    double d318;
    double d32;
    double d323;
    double d327;
    double d331;
    double d332;
    double d336;
    double d339;
    double d34;
    double d347;
    double d348;
    double d349;
    double d35;
    double d352;
    double d355;
    double d357;
    double d36;
    double d375;
    double d376;
    double d377;
    double d383;
    double d384;
    double d385;
    double d390;
    double d391;
    double d392;
    double d393;
    double d398;
    double d399;
    double d400;
    double d401;
    double d409;
    double d410;
    double d412;
    double d413;
    double d430;
    double d431;
    double d432;
    double d433;
    double d435;
    double d436;
    double d437;
    double d51;
    double d55;
    double d60;
    double d65;
    double d66;
    double d67;
    double d69;
    double d70;
    double d71;
    double d86;
    double d90;
    double d95;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    double loc_28_f;
    double loc_2c_f;
    uint32_t loc_34;
    double loc_34_f;
    double loc_38_f;
    double loc_3c_f;
    uint32_t loc_4;
    double loc_40_f;
    uint32_t loc_44;
    uint32_t loc_50;
    uint32_t loc_54;
    uint32_t loc_58;
    uint32_t loc_5c;
    uint32_t loc_60;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t10;
    uint32_t t103;
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
    uint32_t t12;
    uint32_t t120;
    uint32_t t121;
    uint32_t t123;
    uint32_t t124;
    uint32_t t125;
    uint32_t t127;
    uint32_t t128;
    uint32_t t13;
    uint32_t t130;
    uint32_t t131;
    uint32_t t132;
    uint32_t t133;
    uint32_t t134;
    uint32_t t136;
    uint32_t t137;
    uint32_t t139;
    uint32_t t14;
    uint32_t t140;
    uint32_t t141;
    uint32_t t143;
    uint32_t t144;
    uint32_t t146;
    uint32_t t147;
    uint32_t t148;
    uint32_t t149;
    uint32_t t15;
    uint32_t t150;
    uint32_t t152;
    uint32_t t153;
    uint32_t t155;
    uint32_t t156;
    uint32_t t157;
    uint32_t t159;
    uint32_t t160;
    uint32_t t162;
    uint32_t t163;
    uint32_t t164;
    uint32_t t165;
    uint32_t t166;
    uint32_t t168;
    uint32_t t169;
    uint32_t t17;
    uint32_t t171;
    uint32_t t172;
    uint32_t t173;
    uint32_t t175;
    uint32_t t176;
    uint32_t t178;
    uint32_t t179;
    uint32_t t18;
    uint32_t t180;
    uint32_t t181;
    uint32_t t182;
    uint32_t t184;
    uint32_t t185;
    uint32_t t187;
    uint32_t t188;
    uint32_t t189;
    uint32_t t19;
    uint32_t t191;
    uint32_t t192;
    uint32_t t194;
    uint32_t t195;
    uint32_t t196;
    uint32_t t198;
    uint32_t t199;
    uint32_t t201;
    uint32_t t202;
    uint32_t t203;
    uint32_t t205;
    uint32_t t206;
    uint32_t t208;
    uint32_t t209;
    uint32_t t21;
    uint32_t t210;
    uint32_t t212;
    uint32_t t213;
    uint32_t t215;
    uint32_t t216;
    uint32_t t217;
    uint32_t t219;
    uint32_t t22;
    uint32_t t220;
    uint32_t t222;
    uint32_t t223;
    uint32_t t224;
    uint32_t t227;
    uint32_t t228;
    uint32_t t23;
    uint32_t t230;
    uint32_t t231;
    uint32_t t232;
    uint32_t t234;
    uint32_t t235;
    uint32_t t237;
    uint32_t t238;
    uint32_t t239;
    uint32_t t24;
    uint32_t t241;
    uint32_t t242;
    uint32_t t244;
    uint32_t t245;
    uint32_t t246;
    uint32_t t249;
    uint32_t t250;
    uint32_t t252;
    uint32_t t253;
    uint32_t t254;
    uint32_t t256;
    uint32_t t257;
    uint32_t t259;
    uint32_t t26;
    uint32_t t260;
    uint32_t t261;
    uint32_t t263;
    uint32_t t264;
    uint32_t t266;
    uint32_t t267;
    uint32_t t268;
    uint32_t t269;
    uint32_t t27;
    uint32_t t270;
    uint32_t t272;
    uint32_t t273;
    uint32_t t275;
    uint32_t t276;
    uint32_t t277;
    uint32_t t279;
    uint32_t t28;
    uint32_t t280;
    uint32_t t282;
    uint32_t t283;
    uint32_t t284;
    uint32_t t286;
    uint32_t t287;
    uint32_t t289;
    uint32_t t29;
    uint32_t t290;
    uint32_t t291;
    uint32_t t293;
    uint32_t t294;
    uint32_t t296;
    uint32_t t297;
    uint32_t t298;
    uint32_t t299;
    uint32_t t3;
    uint32_t t300;
    uint32_t t301;
    uint32_t t303;
    uint32_t t304;
    uint32_t t305;
    uint32_t t307;
    uint32_t t308;
    uint32_t t309;
    uint32_t t312;
    uint32_t t313;
    uint32_t t314;
    uint32_t t316;
    uint32_t t317;
    uint32_t t319;
    uint32_t t320;
    uint32_t t321;
    uint32_t t322;
    uint32_t t324;
    uint32_t t325;
    uint32_t t326;
    uint32_t t328;
    uint32_t t329;
    uint32_t t33;
    uint32_t t330;
    uint32_t t333;
    uint32_t t334;
    uint32_t t335;
    uint32_t t337;
    uint32_t t338;
    uint32_t t340;
    uint32_t t341;
    uint32_t t342;
    uint32_t t343;
    uint32_t t344;
    uint32_t t345;
    uint32_t t346;
    uint32_t t350;
    uint32_t t351;
    uint32_t t353;
    uint32_t t354;
    uint32_t t356;
    uint32_t t358;
    uint32_t t359;
    uint32_t t360;
    uint32_t t361;
    uint32_t t362;
    uint32_t t363;
    uint32_t t364;
    uint32_t t365;
    uint32_t t366;
    uint32_t t367;
    uint32_t t368;
    uint32_t t369;
    uint32_t t37;
    uint32_t t370;
    uint32_t t371;
    uint32_t t372;
    uint32_t t373;
    uint32_t t374;
    uint32_t t378;
    uint32_t t379;
    uint32_t t38;
    uint32_t t380;
    uint32_t t381;
    uint32_t t382;
    uint32_t t386;
    uint32_t t387;
    uint32_t t388;
    uint32_t t389;
    uint32_t t39;
    uint32_t t394;
    uint32_t t395;
    uint32_t t396;
    uint32_t t397;
    uint32_t t4;
    uint32_t t40;
    uint32_t t402;
    uint32_t t403;
    uint32_t t404;
    uint32_t t405;
    uint32_t t406;
    uint32_t t407;
    uint32_t t408;
    uint32_t t41;
    uint32_t t411;
    uint32_t t414;
    uint32_t t415;
    uint32_t t416;
    uint32_t t417;
    uint32_t t418;
    uint32_t t419;
    uint32_t t42;
    uint32_t t420;
    uint32_t t421;
    uint32_t t422;
    uint32_t t423;
    uint32_t t424;
    uint32_t t425;
    uint32_t t426;
    uint32_t t427;
    uint32_t t428;
    uint32_t t429;
    uint32_t t43;
    uint32_t t434;
    uint32_t t438;
    uint32_t t439;
    uint32_t t44;
    uint32_t t440;
    uint32_t t441;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t68;
    uint32_t t7;
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
    uint32_t t87;
    uint32_t t88;
    uint32_t t89;
    uint32_t t9;
    uint32_t t91;
    uint32_t t92;
    uint32_t t93;
    uint32_t t94;
    uint32_t t96;
    uint32_t t97;
    uint32_t t98;
    uint32_t t99;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 112u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10049707u: in_eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x5cu); in_esi = rd32(sp0 - 0x58u); in_ebp = rd32(sp0 - 0x54u); in_ebx = rd32(sp0 - 0x50u); g->ebp = rd32(sp0 - 0x54u); g->ebx = rd32(sp0 - 0x50u); g->edi = rd32(sp0 - 0x5cu); g->esi = rd32(sp0 - 0x58u); goto E_10049707;
    case 0x10049713u: in_eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x5cu); in_esi = rd32(sp0 - 0x58u); in_ebp = rd32(sp0 - 0x54u); in_ebx = rd32(sp0 - 0x50u); g->ebp = rd32(sp0 - 0x54u); g->ebx = rd32(sp0 - 0x50u); g->edi = rd32(sp0 - 0x5cu); g->esi = rd32(sp0 - 0x58u); goto E_10049713;
    case 0x1004972eu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x5cu); in_esi = rd32(sp0 - 0x58u); in_ebp = rd32(sp0 - 0x54u); in_ebx = rd32(sp0 - 0x50u); g->ebp = rd32(sp0 - 0x54u); g->ebx = rd32(sp0 - 0x50u); g->edi = rd32(sp0 - 0x5cu); g->esi = rd32(sp0 - 0x58u); goto E_1004972e;
    case 0x10049759u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x5cu); in_esi = rd32(sp0 - 0x58u); in_ebp = rd32(sp0 - 0x54u); in_ebx = rd32(sp0 - 0x50u); g->ebp = rd32(sp0 - 0x54u); g->ebx = rd32(sp0 - 0x50u); g->edi = rd32(sp0 - 0x5cu); g->esi = rd32(sp0 - 0x58u); goto E_10049759;
    case 0x10049761u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x5cu); in_esi = rd32(sp0 - 0x58u); in_ebp = rd32(sp0 - 0x54u); in_ebx = rd32(sp0 - 0x50u); g->ebp = rd32(sp0 - 0x54u); g->ebx = rd32(sp0 - 0x50u); g->edi = rd32(sp0 - 0x5cu); g->esi = rd32(sp0 - 0x58u); goto E_10049761;
    case 0x10049790u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x5cu); in_esi = rd32(sp0 - 0x58u); in_ebp = rd32(sp0 - 0x54u); in_ebx = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); g->ebp = rd32(sp0 - 0x54u); g->ebx = rd32(sp0 - 0x50u); g->edi = rd32(sp0 - 0x5cu); g->esi = rd32(sp0 - 0x58u); goto E_10049790;
    case 0x10049794u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049794;
    case 0x100497a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_100497a7;
    case 0x100497aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_100497ae;
    case 0x100497bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100497ba;
    case 0x100497c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100497c4;
    case 0x100497dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_100497da;
    case 0x100497e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100497e0;
    case 0x100497f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_100497f8;
    case 0x100497fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100497fd;
    case 0x10049833u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049833;
    case 0x10049849u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_34_f = rdf32(sp0 - 0x34u); goto E_10049849;
    case 0x10049856u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049856;
    case 0x10049861u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_34_f = rdf32(sp0 - 0x34u); goto E_10049861;
    case 0x10049866u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_34_f = rdf32(sp0 - 0x34u); goto E_10049866;
    case 0x10049874u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_34_f = rdf32(sp0 - 0x34u); goto E_10049874;
    case 0x1004987bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_34_f = rdf32(sp0 - 0x34u); goto E_1004987b;
    case 0x1004988bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_34_f = rdf32(sp0 - 0x34u); goto E_1004988b;
    case 0x10049892u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_34_f = rdf32(sp0 - 0x34u); goto E_10049892;
    case 0x10049894u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_34_f = rdf32(sp0 - 0x34u); goto E_10049894;
    case 0x100498a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_34_f = rdf32(sp0 - 0x34u); goto E_100498a4;
    case 0x100498aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_34_f = rdf32(sp0 - 0x34u); goto E_100498ae;
    case 0x100498b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); goto E_100498b7;
    case 0x100498bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_100498bc;
    case 0x100498dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100498dc;
    case 0x10049917u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10049917;
    case 0x1004991bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004991b;
    case 0x10049920u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10049920;
    case 0x10049924u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10049924;
    case 0x10049928u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10049928;
    case 0x1004992au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004992a;
    case 0x10049932u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10049932;
    case 0x10049944u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10049944;
    case 0x10049948u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10049948;
    case 0x1004994cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004994c;
    case 0x1004994eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004994e;
    case 0x10049956u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10049956;
    case 0x10049969u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10049969;
    case 0x1004996du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004996d;
    case 0x10049971u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10049971;
    case 0x10049973u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10049973;
    case 0x1004997bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004997b;
    case 0x10049984u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10049984;
    case 0x1004998eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004998e;
    case 0x1004999cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004999c;
    case 0x100499b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100499b6;
    case 0x100499c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100499c0;
    case 0x100499c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100499c7;
    case 0x100499d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100499d8;
    case 0x100499dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100499df;
    case 0x100499f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100499f9;
    case 0x10049a10u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049a10;
    case 0x10049a25u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049a25;
    case 0x10049a30u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049a30;
    case 0x10049a3du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049a3d;
    case 0x10049a45u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); goto E_10049a45;
    case 0x10049a52u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049a52;
    case 0x10049a54u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); goto E_10049a54;
    case 0x10049a63u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049a63;
    case 0x10049a65u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049a65;
    case 0x10049a6du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); goto E_10049a6d;
    case 0x10049a71u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); goto E_10049a71;
    case 0x10049a73u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); goto E_10049a73;
    case 0x10049a80u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049a80;
    case 0x10049a93u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049a93;
    case 0x10049aa0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049aa0;
    case 0x10049aadu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10049aad;
    case 0x10049ab5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10049ab5;
    case 0x10049abau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10049aba;
    case 0x10049ad4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049ad4;
    case 0x10049ae9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049ae9;
    case 0x10049aefu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049aef;
    case 0x10049af3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049af3;
    case 0x10049b01u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049b01;
    case 0x10049b03u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049b03;
    case 0x10049b11u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049b11;
    case 0x10049b13u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049b13;
    case 0x10049b17u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049b17;
    case 0x10049b1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049b1b;
    case 0x10049b1du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049b1d;
    case 0x10049b29u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049b29;
    case 0x10049b38u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049b38;
    case 0x10049b45u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049b45;
    case 0x10049b52u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10049b52;
    case 0x10049b5au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10049b5a;
    case 0x10049b5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10049b5f;
    case 0x10049b74u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049b74;
    case 0x10049b9au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049b9a;
    case 0x10049ba9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049ba9;
    case 0x10049babu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049bab;
    case 0x10049bbau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049bba;
    case 0x10049bc1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049bc1;
    case 0x10049bc7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049bc7;
    case 0x10049bcbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049bcb;
    case 0x10049bd5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049bd5;
    case 0x10049bdcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049bdc;
    case 0x10049be6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049be6;
    case 0x10049bedu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049bed;
    case 0x10049bf1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049bf1;
    case 0x10049bfbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049bfb;
    case 0x10049c02u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049c02;
    case 0x10049c0cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049c0c;
    case 0x10049c13u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049c13;
    case 0x10049c20u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049c20;
    case 0x10049c27u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049c27;
    case 0x10049c2du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049c2d;
    case 0x10049c31u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049c31;
    case 0x10049c3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049c3b;
    case 0x10049c42u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049c42;
    case 0x10049c4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049c4c;
    case 0x10049c53u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049c53;
    case 0x10049c57u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049c57;
    case 0x10049c61u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049c61;
    case 0x10049c68u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049c68;
    case 0x10049c72u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049c72;
    case 0x10049c79u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049c79;
    case 0x10049c86u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049c86;
    case 0x10049c8du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049c8d;
    case 0x10049c93u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049c93;
    case 0x10049c97u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049c97;
    case 0x10049ca1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049ca1;
    case 0x10049ca8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049ca8;
    case 0x10049cb2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049cb2;
    case 0x10049cb9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049cb9;
    case 0x10049cbdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049cbd;
    case 0x10049cc7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049cc7;
    case 0x10049cceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049cce;
    case 0x10049cd8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049cd8;
    case 0x10049cdfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049cdf;
    case 0x10049cecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049cec;
    case 0x10049cf3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049cf3;
    case 0x10049cf9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049cf9;
    case 0x10049cfdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049cfd;
    case 0x10049d07u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049d07;
    case 0x10049d0du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049d0d;
    case 0x10049d17u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049d17;
    case 0x10049d1du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049d1d;
    case 0x10049d21u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049d21;
    case 0x10049d2bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049d2b;
    case 0x10049d31u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049d31;
    case 0x10049d3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049d3b;
    case 0x10049d41u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049d41;
    case 0x10049d49u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049d49;
    case 0x10049d52u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); goto E_10049d52;
    case 0x10049d63u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049d63;
    case 0x10049d78u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049d78;
    case 0x10049d7eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049d7e;
    case 0x10049d8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049d8b;
    case 0x10049d91u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049d91;
    case 0x10049d99u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049d99;
    case 0x10049da5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049da5;
    case 0x10049dacu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049dac;
    case 0x10049db2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049db2;
    case 0x10049db6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049db6;
    case 0x10049dc0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049dc0;
    case 0x10049dc6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049dc6;
    case 0x10049dd0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049dd0;
    case 0x10049dd6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049dd6;
    case 0x10049ddau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049dda;
    case 0x10049de4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049de4;
    case 0x10049deau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049dea;
    case 0x10049df4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049df4;
    case 0x10049dfau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049dfa;
    case 0x10049e02u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049e02;
    case 0x10049e0bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); goto E_10049e0b;
    case 0x10049e1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049e1c;
    case 0x10049e31u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049e31;
    case 0x10049e37u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049e37;
    case 0x10049e44u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049e44;
    case 0x10049e4au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049e4a;
    case 0x10049e52u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049e52;
    case 0x10049e5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049e5e;
    case 0x10049e65u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049e65;
    case 0x10049e6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049e6b;
    case 0x10049e6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049e6f;
    case 0x10049e79u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049e79;
    case 0x10049e7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049e7b;
    case 0x10049e85u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049e85;
    case 0x10049e87u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049e87;
    case 0x10049e8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049e8b;
    case 0x10049e95u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049e95;
    case 0x10049e97u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049e97;
    case 0x10049ea1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049ea1;
    case 0x10049ea3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049ea3;
    case 0x10049ea9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049ea9;
    case 0x10049eabu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049eab;
    case 0x10049eb2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049eb2;
    case 0x10049ebau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049eba;
    case 0x10049ec2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049ec2;
    case 0x10049ec9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049ec9;
    case 0x10049ecfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049ecf;
    case 0x10049ed3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049ed3;
    case 0x10049eddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049edd;
    case 0x10049edfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049edf;
    case 0x10049ee9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049ee9;
    case 0x10049eebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049eeb;
    case 0x10049eefu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049eef;
    case 0x10049ef9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049ef9;
    case 0x10049efbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049efb;
    case 0x10049f05u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049f05;
    case 0x10049f07u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049f07;
    case 0x10049f0du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049f0d;
    case 0x10049f0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049f0f;
    case 0x10049f16u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049f16;
    case 0x10049f1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049f1e;
    case 0x10049f26u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049f26;
    case 0x10049f2du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049f2d;
    case 0x10049f33u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049f33;
    case 0x10049f37u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049f37;
    case 0x10049f41u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049f41;
    case 0x10049f43u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049f43;
    case 0x10049f4du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049f4d;
    case 0x10049f4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049f4f;
    case 0x10049f53u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049f53;
    case 0x10049f5du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049f5d;
    case 0x10049f5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049f5f;
    case 0x10049f69u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049f69;
    case 0x10049f6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049f6b;
    case 0x10049f71u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049f71;
    case 0x10049f7au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049f7a;
    case 0x10049f82u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049f82;
    case 0x10049f8au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049f8a;
    case 0x10049f91u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049f91;
    case 0x10049f97u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049f97;
    case 0x10049f9bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049f9b;
    case 0x10049fa5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049fa5;
    case 0x10049fa7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049fa7;
    case 0x10049fb1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049fb1;
    case 0x10049fb3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049fb3;
    case 0x10049fb7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049fb7;
    case 0x10049fc1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049fc1;
    case 0x10049fc3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049fc3;
    case 0x10049fcdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049fcd;
    case 0x10049fcfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049fcf;
    case 0x10049fd5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049fd5;
    case 0x10049fdeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049fde;
    case 0x10049fe6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10049fe6;
    case 0x10049feeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049fee;
    case 0x10049ff5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049ff5;
    case 0x10049ffbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049ffb;
    case 0x10049fffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10049fff;
    case 0x1004a009u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1004a009;
    case 0x1004a00bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_1004a00b;
    case 0x1004a015u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1004a015;
    case 0x1004a017u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_1004a017;
    case 0x1004a01bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_1004a01b;
    case 0x1004a025u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1004a025;
    case 0x1004a027u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_1004a027;
    case 0x1004a031u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1004a031;
    case 0x1004a033u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_1004a033;
    case 0x1004a039u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1004a039;
    case 0x1004a042u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1004a042;
    case 0x1004a04au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1004a04a;
    case 0x1004a052u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_1004a052;
    case 0x1004a059u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_1004a059;
    case 0x1004a05fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_1004a05f;
    case 0x1004a063u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_1004a063;
    case 0x1004a06du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1004a06d;
    case 0x1004a06fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_1004a06f;
    case 0x1004a079u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1004a079;
    case 0x1004a07bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_1004a07b;
    case 0x1004a07fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_1004a07f;
    case 0x1004a089u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1004a089;
    case 0x1004a08bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_1004a08b;
    case 0x1004a095u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1004a095;
    case 0x1004a097u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_1004a097;
    case 0x1004a09du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1004a09d;
    case 0x1004a0a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1004a0a6;
    case 0x1004a0aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1004a0ae;
    case 0x1004a0b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_1004a0b6;
    case 0x1004a0bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a0bd;
    case 0x1004a0c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a0c5;
    case 0x1004a0ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a0cc;
    case 0x1004a0e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1004a0e5;
    case 0x1004a10eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_28_f = rdf32(sp0 - 0x28u); goto E_1004a10e;
    case 0x1004a116u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a116;
    case 0x1004a11du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a11d;
    case 0x1004a123u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a123;
    case 0x1004a127u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a127;
    case 0x1004a12bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a12b;
    case 0x1004a12du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a12d;
    case 0x1004a139u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1004a139;
    case 0x1004a13fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a13f;
    case 0x1004a143u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a143;
    case 0x1004a147u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a147;
    case 0x1004a149u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a149;
    case 0x1004a155u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1004a155;
    case 0x1004a15bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a15b;
    case 0x1004a163u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a163;
    case 0x1004a172u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1004a172;
    case 0x1004a18bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_40_f = rdf32(sp0 - 0x40u); goto E_1004a18b;
    case 0x1004a199u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_40_f = rdf32(sp0 - 0x40u); goto E_1004a199;
    case 0x1004a1aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_40_f = rdf32(sp0 - 0x40u); goto E_1004a1aa;
    case 0x1004a1b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_40_f = rdf32(sp0 - 0x40u); goto E_1004a1b8;
    case 0x1004a1f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a1f6;
    case 0x1004a214u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a214;
    case 0x1004a236u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_1004a236;
    case 0x1004a23du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a23d;
    case 0x1004a245u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a245;
    case 0x1004a24cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a24c;
    case 0x1004a265u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1004a265;
    case 0x1004a28eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_28_f = rdf32(sp0 - 0x28u); goto E_1004a28e;
    case 0x1004a296u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a296;
    case 0x1004a29du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a29d;
    case 0x1004a2a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a2a3;
    case 0x1004a2a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a2a7;
    case 0x1004a2abu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a2ab;
    case 0x1004a2adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a2ad;
    case 0x1004a2b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1004a2b9;
    case 0x1004a2bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a2bf;
    case 0x1004a2c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a2c3;
    case 0x1004a2c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a2c7;
    case 0x1004a2c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a2c9;
    case 0x1004a2d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1004a2d5;
    case 0x1004a2dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a2db;
    case 0x1004a2e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a2e3;
    case 0x1004a2f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1004a2f2;
    case 0x1004a30bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); goto E_1004a30b;
    case 0x1004a319u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); goto E_1004a319;
    case 0x1004a32au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); goto E_1004a32a;
    case 0x1004a338u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); goto E_1004a338;
    case 0x1004a376u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a376;
    case 0x1004a394u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a394;
    case 0x1004a3b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_1004a3b6;
    case 0x1004a3bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a3bd;
    case 0x1004a3c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a3c5;
    case 0x1004a3ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a3cc;
    case 0x1004a3e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1004a3e5;
    case 0x1004a40eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_28_f = rdf32(sp0 - 0x28u); goto E_1004a40e;
    case 0x1004a416u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a416;
    case 0x1004a41du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a41d;
    case 0x1004a423u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a423;
    case 0x1004a427u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a427;
    case 0x1004a42bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a42b;
    case 0x1004a42du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a42d;
    case 0x1004a439u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1004a439;
    case 0x1004a43fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a43f;
    case 0x1004a443u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a443;
    case 0x1004a447u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a447;
    case 0x1004a449u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a449;
    case 0x1004a455u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1004a455;
    case 0x1004a45bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a45b;
    case 0x1004a463u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a463;
    case 0x1004a472u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1004a472;
    case 0x1004a48bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_38_f = rdf32(sp0 - 0x38u); goto E_1004a48b;
    case 0x1004a499u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_38_f = rdf32(sp0 - 0x38u); goto E_1004a499;
    case 0x1004a4aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_38_f = rdf32(sp0 - 0x38u); goto E_1004a4aa;
    case 0x1004a4b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_38_f = rdf32(sp0 - 0x38u); goto E_1004a4b8;
    case 0x1004a4f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a4f6;
    case 0x1004a514u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a514;
    case 0x1004a533u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_1004a533;
    case 0x1004a54cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_1004a54c;
    case 0x1004a555u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a555;
    case 0x1004a557u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1004a557;
    case 0x1004a55bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_28 = rd32(sp0 - 0x28u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1004a55b;
    case 0x1004a55du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_1004a55d;
    case 0x1004a563u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_1004a563;
    case 0x1004a578u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_1004a578;
    case 0x1004a57au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1004a57a;
    case 0x1004a57cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a57c;
    case 0x1004a582u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a582;
    case 0x1004a595u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_1004a595;
    case 0x1004a5a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_1004a5a8;
    case 0x1004a5bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_1004a5bb;
    case 0x1004a5f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_1004a5f7;
    case 0x1004a60au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a60a;
    case 0x1004a60eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a60e;
    case 0x1004a61cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a61c;
    case 0x1004a628u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); goto E_1004a628;
    case 0x1004a62du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a62d;
    case 0x1004a64cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a64c;
    case 0x1004a654u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a654;
    case 0x1004a659u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1004a659;
    case 0x1004a667u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c_f = rdf32(sp0 - 0x2cu); goto E_1004a667;
    case 0x1004a678u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c_f = rdf32(sp0 - 0x2cu); goto E_1004a678;
    case 0x1004a67cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c_f = rdf32(sp0 - 0x2cu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1004a67c;
    case 0x1004a699u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c_f = rdf32(sp0 - 0x2cu); goto E_1004a699;
    case 0x1004a6a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c_f = rdf32(sp0 - 0x2cu); goto E_1004a6a7;
    case 0x1004a6afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c_f = rdf32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_1004a6af;
    case 0x1004a6b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c_f = rdf32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_1004a6b3;
    case 0x1004a6beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c_f = rdf32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_1004a6be;
    case 0x1004a6d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c_f = rdf32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_1004a6d2;
    case 0x1004a6dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c_f = rdf32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_1004a6da;
    case 0x1004a6e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a6e7;
    case 0x1004a72cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_28_f = rdf32(sp0 - 0x28u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1004a72c;
    case 0x1004a73du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_28_f = rdf32(sp0 - 0x28u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1004a73d;
    case 0x1004a74eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_28_f = rdf32(sp0 - 0x28u); goto E_1004a74e;
    case 0x1004a750u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c_f = rdf32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_1004a750;
    case 0x1004a752u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c_f = rdf32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_1004a752;
    case 0x1004a75bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c_f = rdf32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_1004a75b;
    case 0x1004a77au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c_f = rdf32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_1004a77a;
    case 0x1004a78eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c_f = rdf32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1004a78e;
    case 0x1004a793u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a793;
    case 0x1004a79bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a79b;
    case 0x1004a7a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1004a7a3;
    case 0x1004a7a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_28_f = rdf32(sp0 - 0x28u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1004a7a6;
    case 0x1004a7a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); goto E_1004a7a8;
    case 0x1004a7d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1004a7d2;
    case 0x1004a7e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); goto E_1004a7e1;
    case 0x1004a7e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1004a7e5;
    case 0x1004a7e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); goto E_1004a7e7;
    case 0x1004a7e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); goto E_1004a7e9;
    default: break;
    }
#endif

    COW_AT(100496f0)
    wr32(sp0 - 0x50u, in_ebx);
    wr32(sp0 - 0x54u, in_ebp);
    wr32(sp0 - 0x58u, in_esi);
    wr32(sp0 - 0x5cu, in_edi);
    wr8(sp0 - 0x49u, 0u);
    if (!(rd8(self + 0xdcu) & 1u)) goto L_10049713;
    COW_AT(10049707)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return in_eax & 0xffffff00u;
L_10049713: ;
    COW_AT(10049713)
    d1 = (double)rdf32(self + 0xd0u);
    wr32(sp0 - 0x48u, 0u);
    if (d1 != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(1004972e)
        d2 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, fr(g, (double)rdf32(self + 0xd0u) - (double)rdf32(self + 0xc8u)) / (double)rdf32(self + 0xd0u)));
        wrf32(sp0 - 0x48u, (float)(double)(float)d2);
        if ((cow_fsw(g, d2, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u) == 0u)
        {
    COW_AT(10049759)
            wr32(sp0 - 0x48u, 0x3f800000u);
        }
    }
    COW_AT(10049761)
    t3 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
    t4 = rd32(COW_IMG(0x1047cf7cu));
    t5 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
    wr32(t4 + 0xa90u, t3);
    wr32(sp0 - 0x44u, t5);
    t6 = rd32(self + 0xe0u);
    wr32(sp0 - 0x34u, t6);
    if (rd32(self + 0xe0u) == 0u)
    {
        eax = t4;
        edx = in_edx;
        ebp = t5;
        loc_50 = in_ebx;
        loc_54 = in_ebp;
        loc_58 = in_esi;
        loc_5c = in_edi;
        loc_44 = t5;
        goto L_1004a595;
    }
    ebx = t6;
    ebp = t5;
    loc_44 = t5;
    loc_34 = t6;
    COW_AT(10049790)
    edx = in_edx;
    edi = rd32(sp0 - 0x48u);
    loc_50 = in_ebx;
    loc_54 = in_ebp;
    loc_58 = in_esi;
    loc_5c = in_edi;
L_10049794: ;
    COW_AT(10049794)
    if ((uint8_t)rd32(ebx) - 4u > 0x13u) goto L_1004a55d;
    eax = (uint8_t)rd32(ebx) - 4u;
    COW_AT(100497a7)
    t7 = rd32(COW_IMG(0x1004a814u) + eax * 4u);
    switch (t7 - RD)
    {
    case 0x100497aeu: goto L_100497ae;
    case 0x100498bcu: goto L_100498bc;
    case 0x10049a10u: goto L_10049a10;
    case 0x10049ad4u: goto L_10049ad4;
    case 0x10049bbau: goto L_10049bba;
    case 0x10049c20u: goto L_10049c20;
    case 0x10049c86u: goto L_10049c86;
    case 0x10049cecu: goto L_10049cec;
    case 0x10049da5u: goto L_10049da5;
    case 0x10049e5eu: goto L_10049e5e;
    case 0x10049ec2u: goto L_10049ec2;
    case 0x10049f26u: goto L_10049f26;
    case 0x10049f8au: goto L_10049f8a;
    case 0x10049feeu: goto L_10049fee;
    case 0x1004a052u: goto L_1004a052;
    case 0x1004a0b6u: goto L_1004a0b6;
    case 0x1004a236u: goto L_1004a236;
    case 0x1004a3b6u: goto L_1004a3b6;
    case 0x1004a533u: goto L_1004a533;
    case 0x1004a55du: goto L_1004a55d;
    default: rt_fatal(g, COW_IMG(0x100497a7u), "switch");
    }
    return 0;
L_100497ae: ;
    COW_AT(100497ae)
    wr32(sp0 - 0x60u, sp0 - 0x18u);
    g->esp = sp0 - 0x5cu;
    cow_thiscall(g, COW_IMG(0x10049520u), self, 1, sp0 - 0x18u);
    COW_AT(100497ba)
    if (rd32(self + 0xa4u) == 0u)
    {
    COW_AT(100497e0)
        t371 = rd32(sp0 - 0x18u);
        wr32(sp0 - 0xcu, t371);
        t372 = rd32(sp0 - 0x14u);
        wr32(sp0 - 8u, t372);
        t373 = rd32(sp0 - 0x10u);
        wr32(sp0 - 4u, t373);
        eax = t373;
        ecx = t371;
        edx = t372;
        loc_c = t371;
        loc_8 = t372;
        loc_4 = t373;
    }
    else
    {
        eax = rd32(self + 0xa4u);
    COW_AT(100497c4)
        wr32(sp0 - 0x60u, sp0 - 0x18u);
        wr32(sp0 - 0x64u, eax);
        wr32(sp0 - 0x68u, sp0 - 0xcu);
        g->eax = sp0 - 0xcu;
        g->edx = rd32(rd32(COW_IMG(0x1047cf7cu)));
        t366 = rd32(COW_IMG(0x1047cf7cu));
        t367 = rd32(rd32(COW_IMG(0x1047cf7cu)));
        g->esp = sp0 - 0x5cu;
        t368 = cow_thiscall(g, rd32(t367 + 0x50u), t366, 3, sp0 - 0xcu, eax, sp0 - 0x18u);
        t369 = g->ecx;
        t370 = g->edx;
        eax = t368;
        ecx = t369;
        edx = t370;
    COW_AT(100497da)
        edi = rd32(sp0 - 0x48u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
    }
    COW_AT(100497f8)
    g->eax = eax;
    g->esp = sp0 - 0x5cu;
    t374 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    eax = t374;
    COW_AT(100497fd)
    d375 = fr(g, (double)rdf32(eax + 0x44u) - (double)rdf32(sp0 - 0xcu));
    wrf32(sp0 - 0x18u, (float)(double)(float)d375);
    d376 = fr(g, (double)rdf32(eax + 0x48u) - (double)rdf32(sp0 - 8u));
    wrf32(sp0 - 0x14u, (float)(double)(float)d376);
    d377 = fr(g, (double)rdf32(eax + 0x4cu) - (double)rdf32(sp0 - 4u));
    wr32(sp0 - 0x60u, sp0 - 0x18u);
    wr32(sp0 - 0x64u, sp0 - 0x18u);
    wrf32(sp0 - 0x10u, (float)(double)(float)d377);
    g->eax = sp0 - 0x18u;
    g->edx = rd32(rd32(COW_IMG(0x1047cf7cu)));
    t378 = rd32(COW_IMG(0x1047cf7cu));
    t379 = rd32(rd32(COW_IMG(0x1047cf7cu)));
    g->esp = sp0 - 0x5cu;
    t380 = cow_thiscall(g, rd32(t379 + 0x38u), t378, 2, sp0 - 0x18u, sp0 - 0x18u);
    t381 = g->ecx;
    t382 = g->edx;
    d383 = cow_take_float(g);
    eax = t380;
    ecx = t381;
    edx = t382;
    x0 = d383;
    COW_AT(10049833)
    d384 = (double)(float)fr(g, sqrt(x0));
    wrf32(sp0 - 0x34u, (float)d384);
    d385 = (double)rdf32(ebx + 4u);
    if (d385 != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d385, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        loc_34_f = d384;
        goto L_1004987b;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d385, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    loc_34_f = d384;
    COW_AT(10049849)
    wr32(sp0 - 0x60u, 0u);
    g->eax = eax;
    g->edx = edx;
    t386 = rd32(COW_IMG(0x1065cb04u));
    g->esp = sp0 - 0x5cu;
    t387 = cow_thiscall(g, COW_IMG(0x1018b8f0u), t386, 1, 0u);
    t388 = g->ecx;
    t389 = g->edx;
    d390 = cow_take_float(g);
    eax = t387;
    ecx = t388;
    edx = t389;
    x0 = d390;
    COW_AT(10049856)
    d391 = (double)rdf32(sp0 - 0x34u);
    if (x0 < d391)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, d391, 0u);
        loc_34_f = (double)rdf32(sp0 - 0x34u);
        goto L_1004988b;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, d391, 0u);
    loc_34_f = (double)rdf32(sp0 - 0x34u);
L_10049861: ;
    COW_AT(10049861)
    wr8(sp0 - 0x49u, 0u);
L_10049866: ;
    COW_AT(10049866)
    d393 = (double)rdf32(ebx + 8u);
    if (!(loc_34_f < d393))
    {
    COW_AT(10049892)
        eax = 0u;
    }
    else
    {
    COW_AT(10049874)
        eax = 1u;
    }
    COW_AT(10049894)
    t394 = rd8(sp0 - 0x49u);
    wr8(sp0 - 0x49u, (uint8_t)(t394 | eax));
    if ((uint8_t)(t394 | eax) == 0u)
    {
        loc_50 = rd32(sp0 - 0x50u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_44 = rd32(sp0 - 0x44u);
        goto L_1004a55d;
    }
    COW_AT(100498a4)
    if (!(rd8(ebx + 0xcu) & 1u))
    {
        loc_50 = rd32(sp0 - 0x50u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_44 = rd32(sp0 - 0x44u);
    }
    else
    {
    COW_AT(100498ae)
        wr32(sp0 - 0x60u, 0u);
        g->esp = sp0 - 0x5cu;
        t395 = cow_call_regs(g, COW_IMG(0x10053890u), eax, self, edx, 0, 1, 0u);
        t396 = g->edx;
        eax = t395;
        edx = t396;
    COW_AT(100498b7)
        loc_50 = rd32(sp0 - 0x50u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_44 = rd32(sp0 - 0x44u);
    }
L_1004a595: ;
    COW_AT(1004a595)
    d398 = (double)rdf32(self + 0xd0u);
    if (d398 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d398, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_1004a5f7;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d398, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(1004a5a8)
    d399 = (double)rdf32(self + 0xd0u);
    d400 = (double)rdf32(self + 0xc8u);
    if (!(d399 <= d400))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d399, d400, 0u);
        goto L_1004a5f7;
    }
    COW_AT(1004a5bb)
    d401 = fr(g, (double)rdf32(rd32(COW_IMG(0x1047bfa8u)) + 0xeb0u) + (double)rdf32(self + 0xc8u));
    wrf32(self + 0xc8u, (float)d401);
    t402 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
    t403 = rd32(COW_IMG(0x1047cf7cu));
    wr32(t403 + 0xa90u, t402);
    wr32(t402 * 4u + t403 + 0xa10u, ebp);
    g->ebx = loc_50;
    g->esi = loc_58;
    g->edi = loc_5c;
    g->ebp = loc_54;
    g->edx = edx;
    return (t403 & 0xffffff00u) | 1u;
L_1004987b: ;
    COW_AT(1004987b)
    d392 = (double)rdf32(ebx + 4u);
    if ((cow_fsw(g, loc_34_f, d392, 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, loc_34_f, d392, 0u) & 0x4100u;
        goto L_10049861;
    }
    eax = cow_fsw(g, loc_34_f, d392, 0u) & 0x4100u;
L_1004988b: ;
    COW_AT(1004988b)
    wr8(sp0 - 0x49u, 1u);
    goto L_10049866;
L_100498bc: ;
    COW_AT(100498bc)
    t341 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
    t342 = rd32(COW_IMG(0x1047cf7cu));
    t343 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
    wr32(t342 + 0xa90u, t341);
    g->esp = sp0 - 0x5cu;
    cow_thiscall(g, COW_IMG(0x100746a0u), ebp, 0);
    edi = t343;
    COW_AT(100498dc)
    t344 = rd32(ebx + 0xcu);
    wr32(ebp, t344);
    t345 = rd32(ebx + 0x10u);
    wr32(ebp + 0x14u, t345);
    t346 = rd32(ebx + 0x14u);
    wr32(ebp + 0x28u, t346);
    d347 = (double)rdf32(rd32(self + 0xe4u) + 0x14u);
    d348 = (double)rdf32(rd32(self + 0xe4u) + 0x18u);
    d349 = (double)rdf32(rd32(self + 0xe4u) + 0x1cu);
    wrf32(ebp + 0x30u, (float)d347);
    wr32(ebp + 0x3cu, 0x3f800000u);
    wrf32(ebp + 0x34u, (float)d348);
    wrf32(ebp + 0x38u, (float)d349);
    if (rd32(self + 0xa0u) != 0u)
    {
        eax = rd32(self + 0xa0u);
        edx = t345;
    COW_AT(10049917)
        if (eax != 0u)
        {
    COW_AT(1004991b)
            if (rd32(eax) != 0u)
            {
    COW_AT(10049920)
                if (eax == 0u)
                {
    COW_AT(10049928)
                    eax = 0u;
                }
                else
                {
    COW_AT(10049924)
                    eax = rd32(eax);
                }
    COW_AT(1004992a)
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x5cu;
                t350 = cow_thiscall(g, COW_IMG(0x10063b70u), eax + 0x30u, 0);
                t351 = g->edx;
                eax = t350;
                edx = t351;
    COW_AT(10049932)
                d352 = fr(g, (double)rdf32(ebp + 0x30u) + (double)rdf32(eax));
                wrf32(ebp + 0x30u, (float)d352);
                if (rd32(self + 0xa0u) == 0u) goto L_1004994c;
                eax = rd32(self + 0xa0u);
    COW_AT(10049944)
                if (eax == 0u) goto L_1004994c;
    COW_AT(10049948)
                eax = rd32(eax);
L_1004994e: ;
    COW_AT(1004994e)
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x5cu;
                t353 = cow_thiscall(g, COW_IMG(0x10063b70u), eax + 0x30u, 0);
                t354 = g->edx;
                eax = t353;
                edx = t354;
    COW_AT(10049956)
                d355 = fr(g, (double)rdf32(eax + 4u) + (double)rdf32(ebp + 0x34u));
                wrf32(ebp + 0x34u, (float)d355);
                if (rd32(self + 0xa0u) == 0u) goto L_10049971;
                eax = rd32(self + 0xa0u);
    COW_AT(10049969)
                if (eax == 0u) goto L_10049971;
    COW_AT(1004996d)
                eax = rd32(eax);
L_10049973: ;
    COW_AT(10049973)
                g->eax = eax;
                g->esp = sp0 - 0x5cu;
                t356 = cow_thiscall(g, COW_IMG(0x10063b70u), eax + 0x30u, 0);
                eax = t356;
    COW_AT(1004997b)
                d357 = fr(g, (double)rdf32(eax + 8u) + (double)rdf32(ebp + 0x38u));
                wrf32(ebp + 0x38u, (float)d357);
            }
        }
    }
    COW_AT(10049984)
    if (rd32(self + 0xa4u) != 0u)
    {
        eax = rd32(self + 0xa4u);
    COW_AT(1004998e)
        wr32(sp0 - 0x60u, eax);
        wr32(sp0 - 0x64u, ebp);
        wr32(sp0 - 0x68u, ebp);
        g->esp = sp0 - 0x5cu;
        cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x24u), rd32(COW_IMG(0x1047cf7cu)), 3, ebp, ebp, eax);
    }
    COW_AT(1004999c)
    t358 = rd32(COW_IMG(0x1047bfa8u)) + 0xb50u;
    wr32(sp0 - 0x60u, t358);
    wr32(sp0 - 0x64u, ebp);
    wr32(sp0 - 0x68u, ebp);
    g->edx = t358;
    g->esp = sp0 - 0x5cu;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x24u), rd32(COW_IMG(0x1047cf7cu)), 3, ebp, ebp, t358);
    t359 = g->edx;
    edx = t359;
    COW_AT(100499b6)
    if (rd32(sp0 + 4u) == 0u)
    {
        eax = 0u;
    }
    else
    {
        ecx = rd32(sp0 + 4u);
    COW_AT(100499c0)
        eax = ecx + 0x17fu;
    }
    COW_AT(100499c7)
    wr32(sp0 - 0x60u, eax);
    t360 = (rd32(ebx + 0x18u) >> 1u & 0xffffff00u) | (rd32(ebx + 0x18u) >> 1u & 1u);
    wr32(sp0 - 0x64u, t360);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t361 = cow_thiscall_cdecl(g, COW_IMG(0x10047b80u), ebx, 2, t360, eax);
    t362 = g->ecx;
    t363 = g->edx;
    eax = t361;
    ecx = t362;
    edx = t363;
    COW_AT(100499d8)
    wr32(sp0 - 0x68u, eax);
    wr32(sp0 - 0x6cu, ebp);
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x64u;
    t364 = cow_cdecl(g, COW_IMG(0x1004a870u), 2, ebp, eax);
    t365 = g->edx;
    eax = t364;
    edx = t365;
    COW_AT(100499df)
    if ((uint8_t)eax == 0u)
    {
        eax = rd32(COW_IMG(0x1047cf7cu));
        ecx = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u);
        ebp = rd32(sp0 - 0x44u);
        goto L_1004a582;
    }
    eax = rd32(COW_IMG(0x1047cf7cu));
    ecx = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u);
    ebp = rd32(sp0 - 0x44u);
    COW_AT(100499f9)
    wr32(eax + 0xa90u, ecx - 1u);
    wr32(eax + ecx * 4u + 0xa0cu, edi);
    edi = rd32(sp0 - 0x48u);
    loc_50 = rd32(sp0 - 0x50u);
    loc_54 = rd32(sp0 - 0x54u);
    loc_58 = rd32(sp0 - 0x58u);
    loc_5c = rd32(sp0 - 0x5cu);
    loc_44 = rd32(sp0 - 0x44u);
L_1004a55d: ;
    COW_AT(1004a55d)
    if ((uint8_t)rd32(ebx) == 0u)
    {
        eax = rd32(ebx);
        goto L_1004a595;
    }
    eax = rd32(ebx);
    COW_AT(1004a563)
    t397 = ebx + (eax >> 8u & 0x1fu) * 4u;
    wr32(sp0 - 0x34u, t397);
    if (ebx + (eax >> 8u & 0x1fu) * 4u != 0u)
    {
        ebx = t397;
        loc_34 = t397;
        goto L_10049794;
    }
    eax = eax >> 8u & 0x1fu;
    COW_AT(1004a578)
    goto L_1004a595;
L_1004994c: ;
    COW_AT(1004994c)
    eax = 0u;
    goto L_1004994e;
L_10049971: ;
    COW_AT(10049971)
    eax = 0u;
    goto L_10049973;
L_10049a10: ;
    COW_AT(10049a10)
    d318 = (double)rdf32(sp0 - 0x48u);
    if (d318 == (double)rdf32(COW_IMG(0x103295d8u))) goto L_1004a55d;
    COW_AT(10049a25)
    if (rd32(ebx + 4u) == 0u) goto L_10049bab;
    eax = rd32(ebx + 4u);
    COW_AT(10049a30)
    if ((rd8(ebx + 0xcu) & 0xfu) == 0u)
    {
        eax = rd32(ebx + 4u);
        edx = rd32(ebx + 0x10u);
    COW_AT(10049a65)
        wr32(sp0 - 0x1cu, edx);
        if (eax == 0u)
        {
            loc_1c = edx;
    COW_AT(10049a71)
            eax = 0u;
        }
        else
        {
            loc_1c = edx;
    COW_AT(10049a6d)
            eax = rd32(eax);
        }
    COW_AT(10049a73)
        wr32(sp0 - 0x60u, loc_1c);
        wr32(sp0 - 0x64u, edi);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x5cu;
        t328 = cow_thiscall(g, COW_IMG(0x100544d0u), eax, 2, edi, loc_1c);
        t329 = g->ecx;
        t330 = g->edx;
        d331 = cow_take_float(g);
        eax = t328;
        ecx = t329;
        edx = t330;
        x0 = d331;
    }
    else
    {
        eax = rd32(ebx + 4u);
        edx = rd32(ebx + 0x10u);
    COW_AT(10049a3d)
        wr32(sp0 - 0x20u, edx);
        if (eax == 0u)
        {
            loc_20 = edx;
    COW_AT(10049a54)
            wr32(sp0 - 0x60u, loc_20);
            wr32(sp0 - 0x64u, edi);
            g->eax = 0u;
            g->edx = edx;
            g->esp = sp0 - 0x5cu;
            t324 = cow_thiscall(g, COW_IMG(0x100546f0u), 0u, 2, edi, loc_20);
            t325 = g->ecx;
            t326 = g->edx;
            d327 = cow_take_float(g);
            eax = t324;
            ecx = t325;
            edx = t326;
            x0 = d327;
    COW_AT(10049a63)
        }
        else
        {
    COW_AT(10049a45)
            wr32(sp0 - 0x60u, edx);
            wr32(sp0 - 0x64u, edi);
            g->eax = rd32(eax);
            g->edx = edx;
            t319 = rd32(eax);
            g->esp = sp0 - 0x5cu;
            t320 = cow_thiscall(g, COW_IMG(0x100546f0u), t319, 2, edi, edx);
            t321 = g->ecx;
            t322 = g->edx;
            d323 = cow_take_float(g);
            eax = t320;
            ecx = t321;
            edx = t322;
            x0 = d323;
    COW_AT(10049a52)
        }
    }
    COW_AT(10049a80)
    if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 1u) & 0x4100u) != 0u) goto L_10049ba9;
    eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 1u) & 0x4100u;
    COW_AT(10049a93)
    g->ecx = ecx;
    g->edx = edx;
    d332 = fr(g, (double)rdf32(COW_IMG(0x10329ce8u)) / x0);
    fpush(g, d332);
    g->esp = sp0 - 0x5cu;
    t333 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t334 = g->ecx;
    t335 = g->edx;
    eax = t333;
    ecx = t334;
    edx = t335;
    COW_AT(10049aa0)
    d336 = fr(g, x0 * (double)rdf32(COW_IMG(0x1032b160u)));
    fpush(g, d336);
    g->esp = sp0 - 0x5cu;
    t337 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    edi = eax;
    eax = t337;
    COW_AT(10049aad)
    if (edi > 0x7fffu)
    {
    COW_AT(10049ab5)
        edi = 0x7fffu;
    }
    COW_AT(10049aba)
    t338 = rd32(self + 0xd8u);
    wr32(sp0 - 0x28u, (uint32_t)(int16_t)edi);
    ecx = t338;
    edx = t338 ^ eax;
    eax = (uint32_t)(int16_t)edi;
    x0 = (double)(int32_t)(uint32_t)(int16_t)edi;
L_10049b74: ;
    COW_AT(10049b74)
    d339 = (double)rdf32(self + 0xccu);
    wr16(self + 0xd6u, (uint16_t)edi);
    t340 = (edx & 0x1ffu) ^ ecx;
    wr32(self + 0xd8u, t340);
    if (!(x0 < d339))
    {
        edx = t340;
        goto L_1004a557;
    }
    edx = t340;
    COW_AT(10049b9a)
    wrf32(self + 0xccu, (float)x0);
    edi = rd32(sp0 - 0x48u);
    loc_50 = rd32(sp0 - 0x50u);
    loc_54 = rd32(sp0 - 0x54u);
    loc_58 = rd32(sp0 - 0x58u);
    loc_5c = rd32(sp0 - 0x5cu);
    loc_44 = rd32(sp0 - 0x44u);
    goto L_1004a55d;
L_10049ad4: ;
    COW_AT(10049ad4)
    wr32(sp0 - 0x24u, rd32(COW_IMG(0x1065cb14u)));
    if (rd32(ebx + 4u) == 0u) goto L_10049bab;
    eax = rd32(ebx + 4u);
    loc_24 = rd32(COW_IMG(0x1065cb14u));
    COW_AT(10049ae9)
    if ((rd8(ebx + 0xcu) & 0xfu) == 0u)
    {
    COW_AT(10049b13)
        if (eax == 0u)
        {
    COW_AT(10049b1b)
            eax = 0u;
        }
        else
        {
    COW_AT(10049b17)
            eax = rd32(eax);
        }
    COW_AT(10049b1d)
        wr32(sp0 - 0x60u, loc_24);
        g->edx = edx;
        g->esp = sp0 - 0x5cu;
        t307 = cow_call_regs(g, COW_IMG(0x10054500u), eax, eax, g->edx, 0, 1, loc_24);
        t308 = g->ecx;
        t309 = g->edx;
        d310 = cow_take_float(g);
        eax = t307;
        ecx = t308;
        edx = t309;
        x0 = d310;
    }
    else
    {
    COW_AT(10049aef)
        if (eax == 0u)
        {
    COW_AT(10049b03)
            wr32(sp0 - 0x60u, loc_24);
            g->edx = loc_24;
            g->esp = sp0 - 0x5cu;
            t303 = cow_call_regs(g, COW_IMG(0x100547a0u), 0u, 0u, g->edx, 0, 1, loc_24);
            t304 = g->ecx;
            t305 = g->edx;
            d306 = cow_take_float(g);
            eax = t303;
            ecx = t304;
            edx = t305;
            x0 = d306;
    COW_AT(10049b11)
        }
        else
        {
    COW_AT(10049af3)
            wr32(sp0 - 0x60u, loc_24);
            g->edx = loc_24;
            t298 = rd32(eax);
            g->esp = sp0 - 0x5cu;
            t299 = cow_call_regs(g, COW_IMG(0x100547a0u), t298, t298, g->edx, 0, 1, loc_24);
            t300 = g->ecx;
            t301 = g->edx;
            d302 = cow_take_float(g);
            eax = t299;
            ecx = t300;
            edx = t301;
            x0 = d302;
    COW_AT(10049b01)
        }
    }
    COW_AT(10049b29)
    if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 1u) & 0x4100u) != 0u) goto L_10049ba9;
    eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 1u) & 0x4100u;
    COW_AT(10049b38)
    g->ecx = ecx;
    g->edx = edx;
    d311 = fr(g, (double)rdf32(COW_IMG(0x10329ce8u)) / x0);
    fpush(g, d311);
    g->esp = sp0 - 0x5cu;
    t312 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t313 = g->ecx;
    t314 = g->edx;
    eax = t312;
    ecx = t313;
    edx = t314;
    COW_AT(10049b45)
    d315 = fr(g, x0 * (double)rdf32(COW_IMG(0x1032b160u)));
    fpush(g, d315);
    g->esp = sp0 - 0x5cu;
    t316 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    edi = eax;
    eax = t316;
    COW_AT(10049b52)
    if (edi > 0x7fffu)
    {
    COW_AT(10049b5a)
        edi = 0x7fffu;
    }
    COW_AT(10049b5f)
    t317 = rd32(self + 0xd8u);
    wr32(sp0 - 0x28u, (uint32_t)(int16_t)edi);
    ecx = t317;
    edx = t317 ^ eax;
    eax = (uint32_t)(int16_t)edi;
    x0 = (double)(int32_t)(uint32_t)(int16_t)edi;
    goto L_10049b74;
L_10049ba9: ;
    COW_AT(10049ba9)
    loc_50 = rd32(sp0 - 0x50u);
    loc_54 = rd32(sp0 - 0x54u);
    loc_58 = rd32(sp0 - 0x58u);
    loc_5c = rd32(sp0 - 0x5cu);
    loc_44 = rd32(sp0 - 0x44u);
L_10049bab: ;
    COW_AT(10049bab)
    wr32(self + 0xccu, 0x46fffe00u);
    goto L_1004a55d;
L_10049bba: ;
    COW_AT(10049bba)
    if (rd32(ebx + 4u) == 0u)
    {
        eax = rd32(ebx + 4u);
    COW_AT(10049c13)
        wr32(sp0 - 0x60u, 8u);
        loc_60 = 8u;
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    else
    {
        eax = rd32(ebx + 4u);
    COW_AT(10049bc1)
        if ((rd8(ebx + 0xcu) & 0xfu) == 0u)
        {
    COW_AT(10049bed)
            if (eax == 0u)
            {
    COW_AT(10049c02)
                wr32(sp0 - 0x60u, edi);
                g->edx = edx;
                g->esp = sp0 - 0x5cu;
                t293 = cow_call_regs(g, COW_IMG(0x10054500u), 0u, 0u, g->edx, 0, 1, edi);
                t294 = g->edx;
                d295 = cow_take_float(g);
                eax = t293;
                edx = t294;
                x0 = d295;
    COW_AT(10049c0c)
                wr32(sp0 - 0x60u, 8u);
                loc_50 = rd32(sp0 - 0x50u);
                loc_54 = rd32(sp0 - 0x54u);
                loc_58 = rd32(sp0 - 0x58u);
                loc_5c = rd32(sp0 - 0x5cu);
                loc_44 = rd32(sp0 - 0x44u);
                loc_60 = 8u;
            }
            else
            {
    COW_AT(10049bf1)
                wr32(sp0 - 0x60u, edi);
                g->edx = edx;
                t289 = rd32(eax);
                g->esp = sp0 - 0x5cu;
                t290 = cow_call_regs(g, COW_IMG(0x10054500u), t289, t289, g->edx, 0, 1, edi);
                t291 = g->edx;
                d292 = cow_take_float(g);
                eax = t290;
                edx = t291;
                x0 = d292;
    COW_AT(10049bfb)
                wr32(sp0 - 0x60u, 8u);
                loc_50 = rd32(sp0 - 0x50u);
                loc_54 = rd32(sp0 - 0x54u);
                loc_58 = rd32(sp0 - 0x58u);
                loc_5c = rd32(sp0 - 0x5cu);
                loc_44 = rd32(sp0 - 0x44u);
                loc_60 = 8u;
            }
        }
        else
        {
    COW_AT(10049bc7)
            if (eax == 0u)
            {
    COW_AT(10049bdc)
                wr32(sp0 - 0x60u, edi);
                g->edx = edx;
                g->esp = sp0 - 0x5cu;
                t286 = cow_call_regs(g, COW_IMG(0x100547a0u), 0u, 0u, g->edx, 0, 1, edi);
                t287 = g->edx;
                d288 = cow_take_float(g);
                eax = t286;
                edx = t287;
                x0 = d288;
    COW_AT(10049be6)
                wr32(sp0 - 0x60u, 8u);
                loc_50 = rd32(sp0 - 0x50u);
                loc_54 = rd32(sp0 - 0x54u);
                loc_58 = rd32(sp0 - 0x58u);
                loc_5c = rd32(sp0 - 0x5cu);
                loc_44 = rd32(sp0 - 0x44u);
                loc_60 = 8u;
            }
            else
            {
    COW_AT(10049bcb)
                wr32(sp0 - 0x60u, edi);
                g->edx = edx;
                t282 = rd32(eax);
                g->esp = sp0 - 0x5cu;
                t283 = cow_call_regs(g, COW_IMG(0x100547a0u), t282, t282, g->edx, 0, 1, edi);
                t284 = g->edx;
                d285 = cow_take_float(g);
                eax = t283;
                edx = t284;
                x0 = d285;
    COW_AT(10049bd5)
                wr32(sp0 - 0x60u, 8u);
                loc_50 = rd32(sp0 - 0x50u);
                loc_54 = rd32(sp0 - 0x54u);
                loc_58 = rd32(sp0 - 0x58u);
                loc_5c = rd32(sp0 - 0x5cu);
                loc_44 = rd32(sp0 - 0x44u);
                loc_60 = 8u;
            }
        }
    }
L_10049eab: ;
    COW_AT(10049eab)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t296 = cow_thiscall(g, COW_IMG(0x100492f0u), self, 1, loc_60);
    t297 = g->edx;
    eax = t296;
    edx = t297;
    COW_AT(10049eb2)
    if (eax == 0u) goto L_1004a55b;
    COW_AT(10049eba)
    wrf32(eax + 4u, (float)x0);
    loc_50 = rd32(sp0 - 0x50u);
    loc_54 = rd32(sp0 - 0x54u);
    loc_58 = rd32(sp0 - 0x58u);
    loc_5c = rd32(sp0 - 0x5cu);
    loc_44 = rd32(sp0 - 0x44u);
    goto L_1004a55d;
L_10049c20: ;
    COW_AT(10049c20)
    if (rd32(ebx + 4u) == 0u)
    {
        eax = rd32(ebx + 4u);
    COW_AT(10049c79)
        wr32(sp0 - 0x60u, 0x1fu);
        loc_60 = 0x1fu;
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    else
    {
        eax = rd32(ebx + 4u);
    COW_AT(10049c27)
        if ((rd8(ebx + 0xcu) & 0xfu) == 0u)
        {
    COW_AT(10049c53)
            if (eax == 0u)
            {
    COW_AT(10049c68)
                wr32(sp0 - 0x60u, edi);
                g->edx = edx;
                g->esp = sp0 - 0x5cu;
                t279 = cow_call_regs(g, COW_IMG(0x10054500u), 0u, 0u, g->edx, 0, 1, edi);
                t280 = g->edx;
                d281 = cow_take_float(g);
                eax = t279;
                edx = t280;
                x0 = d281;
    COW_AT(10049c72)
                wr32(sp0 - 0x60u, 0x1fu);
                loc_50 = rd32(sp0 - 0x50u);
                loc_54 = rd32(sp0 - 0x54u);
                loc_58 = rd32(sp0 - 0x58u);
                loc_5c = rd32(sp0 - 0x5cu);
                loc_44 = rd32(sp0 - 0x44u);
                loc_60 = 0x1fu;
            }
            else
            {
    COW_AT(10049c57)
                wr32(sp0 - 0x60u, edi);
                g->edx = edx;
                t275 = rd32(eax);
                g->esp = sp0 - 0x5cu;
                t276 = cow_call_regs(g, COW_IMG(0x10054500u), t275, t275, g->edx, 0, 1, edi);
                t277 = g->edx;
                d278 = cow_take_float(g);
                eax = t276;
                edx = t277;
                x0 = d278;
    COW_AT(10049c61)
                wr32(sp0 - 0x60u, 0x1fu);
                loc_50 = rd32(sp0 - 0x50u);
                loc_54 = rd32(sp0 - 0x54u);
                loc_58 = rd32(sp0 - 0x58u);
                loc_5c = rd32(sp0 - 0x5cu);
                loc_44 = rd32(sp0 - 0x44u);
                loc_60 = 0x1fu;
            }
        }
        else
        {
    COW_AT(10049c2d)
            if (eax == 0u)
            {
    COW_AT(10049c42)
                wr32(sp0 - 0x60u, edi);
                g->edx = edx;
                g->esp = sp0 - 0x5cu;
                t272 = cow_call_regs(g, COW_IMG(0x100547a0u), 0u, 0u, g->edx, 0, 1, edi);
                t273 = g->edx;
                d274 = cow_take_float(g);
                eax = t272;
                edx = t273;
                x0 = d274;
    COW_AT(10049c4c)
                wr32(sp0 - 0x60u, 0x1fu);
                loc_50 = rd32(sp0 - 0x50u);
                loc_54 = rd32(sp0 - 0x54u);
                loc_58 = rd32(sp0 - 0x58u);
                loc_5c = rd32(sp0 - 0x5cu);
                loc_44 = rd32(sp0 - 0x44u);
                loc_60 = 0x1fu;
            }
            else
            {
    COW_AT(10049c31)
                wr32(sp0 - 0x60u, edi);
                g->edx = edx;
                t268 = rd32(eax);
                g->esp = sp0 - 0x5cu;
                t269 = cow_call_regs(g, COW_IMG(0x100547a0u), t268, t268, g->edx, 0, 1, edi);
                t270 = g->edx;
                d271 = cow_take_float(g);
                eax = t269;
                edx = t270;
                x0 = d271;
    COW_AT(10049c3b)
                wr32(sp0 - 0x60u, 0x1fu);
                loc_50 = rd32(sp0 - 0x50u);
                loc_54 = rd32(sp0 - 0x54u);
                loc_58 = rd32(sp0 - 0x58u);
                loc_5c = rd32(sp0 - 0x5cu);
                loc_44 = rd32(sp0 - 0x44u);
                loc_60 = 0x1fu;
            }
        }
    }
    goto L_10049eab;
L_10049c86: ;
    COW_AT(10049c86)
    if (rd32(ebx + 4u) == 0u)
    {
        eax = rd32(ebx + 4u);
    COW_AT(10049cdf)
        wr32(sp0 - 0x60u, 0x1fu);
        loc_60 = 0x1fu;
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    else
    {
        eax = rd32(ebx + 4u);
    COW_AT(10049c8d)
        if ((rd8(ebx + 0xcu) & 0xfu) == 0u)
        {
    COW_AT(10049cb9)
            if (eax == 0u)
            {
    COW_AT(10049cce)
                wr32(sp0 - 0x60u, edi);
                g->edx = edx;
                g->esp = sp0 - 0x5cu;
                t263 = cow_call_regs(g, COW_IMG(0x10054500u), 0u, 0u, g->edx, 0, 1, edi);
                t264 = g->edx;
                d265 = cow_take_float(g);
                eax = t263;
                edx = t264;
                x0 = d265;
    COW_AT(10049cd8)
                wr32(sp0 - 0x60u, 0x1fu);
                loc_50 = rd32(sp0 - 0x50u);
                loc_54 = rd32(sp0 - 0x54u);
                loc_58 = rd32(sp0 - 0x58u);
                loc_5c = rd32(sp0 - 0x5cu);
                loc_44 = rd32(sp0 - 0x44u);
                loc_60 = 0x1fu;
            }
            else
            {
    COW_AT(10049cbd)
                wr32(sp0 - 0x60u, edi);
                g->edx = edx;
                t259 = rd32(eax);
                g->esp = sp0 - 0x5cu;
                t260 = cow_call_regs(g, COW_IMG(0x10054500u), t259, t259, g->edx, 0, 1, edi);
                t261 = g->edx;
                d262 = cow_take_float(g);
                eax = t260;
                edx = t261;
                x0 = d262;
    COW_AT(10049cc7)
                wr32(sp0 - 0x60u, 0x1fu);
                loc_50 = rd32(sp0 - 0x50u);
                loc_54 = rd32(sp0 - 0x54u);
                loc_58 = rd32(sp0 - 0x58u);
                loc_5c = rd32(sp0 - 0x5cu);
                loc_44 = rd32(sp0 - 0x44u);
                loc_60 = 0x1fu;
            }
        }
        else
        {
    COW_AT(10049c93)
            if (eax == 0u)
            {
    COW_AT(10049ca8)
                wr32(sp0 - 0x60u, edi);
                g->edx = edx;
                g->esp = sp0 - 0x5cu;
                t256 = cow_call_regs(g, COW_IMG(0x100547a0u), 0u, 0u, g->edx, 0, 1, edi);
                t257 = g->edx;
                d258 = cow_take_float(g);
                eax = t256;
                edx = t257;
                x0 = d258;
    COW_AT(10049cb2)
                wr32(sp0 - 0x60u, 0x1fu);
                loc_50 = rd32(sp0 - 0x50u);
                loc_54 = rd32(sp0 - 0x54u);
                loc_58 = rd32(sp0 - 0x58u);
                loc_5c = rd32(sp0 - 0x5cu);
                loc_44 = rd32(sp0 - 0x44u);
                loc_60 = 0x1fu;
            }
            else
            {
    COW_AT(10049c97)
                wr32(sp0 - 0x60u, edi);
                g->edx = edx;
                t252 = rd32(eax);
                g->esp = sp0 - 0x5cu;
                t253 = cow_call_regs(g, COW_IMG(0x100547a0u), t252, t252, g->edx, 0, 1, edi);
                t254 = g->edx;
                d255 = cow_take_float(g);
                eax = t253;
                edx = t254;
                x0 = d255;
    COW_AT(10049ca1)
                wr32(sp0 - 0x60u, 0x1fu);
                loc_50 = rd32(sp0 - 0x50u);
                loc_54 = rd32(sp0 - 0x54u);
                loc_58 = rd32(sp0 - 0x58u);
                loc_5c = rd32(sp0 - 0x5cu);
                loc_44 = rd32(sp0 - 0x44u);
                loc_60 = 0x1fu;
            }
        }
    }
L_10049f0f: ;
    COW_AT(10049f0f)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t266 = cow_thiscall(g, COW_IMG(0x100492f0u), self, 1, loc_60);
    t267 = g->edx;
    eax = t266;
    edx = t267;
    COW_AT(10049f16)
    if (eax == 0u) goto L_1004a55b;
    COW_AT(10049f1e)
    wrf32(eax + 8u, (float)x0);
    loc_50 = rd32(sp0 - 0x50u);
    loc_54 = rd32(sp0 - 0x54u);
    loc_58 = rd32(sp0 - 0x58u);
    loc_5c = rd32(sp0 - 0x5cu);
    loc_44 = rd32(sp0 - 0x44u);
    goto L_1004a55d;
L_10049cec: ;
    COW_AT(10049cec)
    if (rd32(ebx + 4u) == 0u)
    {
        eax = rd32(ebx + 4u);
    COW_AT(10049d41)
        wr32(sp0 - 0x30u, 0u);
    }
    else
    {
        eax = rd32(ebx + 4u);
    COW_AT(10049cf3)
        if ((rd8(ebx + 0xcu) & 0xfu) == 0u)
        {
    COW_AT(10049d1d)
            if (eax == 0u)
            {
    COW_AT(10049d31)
                wr32(sp0 - 0x60u, edi);
                g->edx = edx;
                g->esp = sp0 - 0x5cu;
                t241 = cow_call_regs(g, COW_IMG(0x10054500u), 0u, 0u, g->edx, 0, 1, edi);
                t242 = g->edx;
                d243 = cow_take_float(g);
                eax = t241;
                edx = t242;
                x0 = d243;
    COW_AT(10049d3b)
                wrf32(sp0 - 0x30u, (float)(double)(float)x0);
                loc_50 = rd32(sp0 - 0x50u);
                loc_54 = rd32(sp0 - 0x54u);
                loc_58 = rd32(sp0 - 0x58u);
                loc_5c = rd32(sp0 - 0x5cu);
                loc_44 = rd32(sp0 - 0x44u);
            }
            else
            {
    COW_AT(10049d21)
                wr32(sp0 - 0x60u, edi);
                g->edx = edx;
                t237 = rd32(eax);
                g->esp = sp0 - 0x5cu;
                t238 = cow_call_regs(g, COW_IMG(0x10054500u), t237, t237, g->edx, 0, 1, edi);
                t239 = g->edx;
                d240 = cow_take_float(g);
                eax = t238;
                edx = t239;
                x0 = d240;
    COW_AT(10049d2b)
                wrf32(sp0 - 0x30u, (float)(double)(float)x0);
                loc_50 = rd32(sp0 - 0x50u);
                loc_54 = rd32(sp0 - 0x54u);
                loc_58 = rd32(sp0 - 0x58u);
                loc_5c = rd32(sp0 - 0x5cu);
                loc_44 = rd32(sp0 - 0x44u);
            }
        }
        else
        {
    COW_AT(10049cf9)
            if (eax == 0u)
            {
    COW_AT(10049d0d)
                wr32(sp0 - 0x60u, edi);
                g->edx = edx;
                g->esp = sp0 - 0x5cu;
                t234 = cow_call_regs(g, COW_IMG(0x100547a0u), 0u, 0u, g->edx, 0, 1, edi);
                t235 = g->edx;
                d236 = cow_take_float(g);
                eax = t234;
                edx = t235;
                x0 = d236;
    COW_AT(10049d17)
                wrf32(sp0 - 0x30u, (float)(double)(float)x0);
                loc_50 = rd32(sp0 - 0x50u);
                loc_54 = rd32(sp0 - 0x54u);
                loc_58 = rd32(sp0 - 0x58u);
                loc_5c = rd32(sp0 - 0x5cu);
                loc_44 = rd32(sp0 - 0x44u);
            }
            else
            {
    COW_AT(10049cfd)
                wr32(sp0 - 0x60u, edi);
                g->edx = edx;
                t230 = rd32(eax);
                g->esp = sp0 - 0x5cu;
                t231 = cow_call_regs(g, COW_IMG(0x100547a0u), t230, t230, g->edx, 0, 1, edi);
                t232 = g->edx;
                d233 = cow_take_float(g);
                eax = t231;
                edx = t232;
                x0 = d233;
    COW_AT(10049d07)
                wrf32(sp0 - 0x30u, (float)(double)(float)x0);
                loc_50 = rd32(sp0 - 0x50u);
                loc_54 = rd32(sp0 - 0x54u);
                loc_58 = rd32(sp0 - 0x58u);
                loc_5c = rd32(sp0 - 0x5cu);
                loc_44 = rd32(sp0 - 0x44u);
            }
        }
    }
    COW_AT(10049d49)
    wr32(sp0 - 0x60u, 0x1fu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t244 = cow_thiscall(g, COW_IMG(0x100492f0u), self, 1, 0x1fu);
    t245 = g->ecx;
    t246 = g->edx;
    eax = t244;
    ecx = t245;
    edx = t246;
    COW_AT(10049d52)
    g->ebx = ebx;
    g->edx = edx;
    d247 = rdf64(COW_IMG(0x1032abc8u));
    d248 = (double)rdf32(sp0 - 0x30u);
    fpush(g, d247);
    g->esp = sp0 - 0x5cu;
    t249 = cow_call_regs(g, COW_IMG(0x103138fau), eax, ecx, g->edx, 1, 0);
    t250 = g->edx;
    edx = t250;
    edi = eax;
    eax = t249;
    x0 = d248;
    COW_AT(10049d63)
    d251 = fr(g, x0 * (double)rdf32(COW_IMG(0x10329d30u)));
    if ((cow_fsw(g, d251, (double)rdf32(COW_IMG(0x10329d30u)), 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d251, (double)rdf32(COW_IMG(0x10329d30u)), 1u) & 0x4100u;
        x0 = d251;
    }
    else
    {
        eax = cow_fsw(g, d251, (double)rdf32(COW_IMG(0x10329d30u)), 1u) & 0x4100u;
        x0 = d251;
    COW_AT(10049d78)
        x0 = fr(g, x0 - (double)rdf32(COW_IMG(0x10329d2cu)));
    }
    COW_AT(10049d7e)
    if (x0 < (double)rdf32(COW_IMG(0x10329d28u)))
    {
    COW_AT(10049d8b)
        x0 = fr(g, x0 + (double)rdf32(COW_IMG(0x10329d2cu)));
    }
    COW_AT(10049d91)
    if (edi == 0u) goto L_1004a57a;
    COW_AT(10049d99)
    wrf32(edi + 0x18u, (float)x0);
    edi = rd32(sp0 - 0x48u);
    loc_50 = rd32(sp0 - 0x50u);
    loc_54 = rd32(sp0 - 0x54u);
    loc_58 = rd32(sp0 - 0x58u);
    loc_5c = rd32(sp0 - 0x5cu);
    loc_44 = rd32(sp0 - 0x44u);
    goto L_1004a55d;
L_10049da5: ;
    COW_AT(10049da5)
    if (rd32(ebx + 4u) == 0u)
    {
        eax = rd32(ebx + 4u);
    COW_AT(10049dfa)
        wr32(sp0 - 0x2cu, 0u);
    }
    else
    {
        eax = rd32(ebx + 4u);
    COW_AT(10049dac)
        if ((rd8(ebx + 0xcu) & 0xfu) == 0u)
        {
    COW_AT(10049dd6)
            if (eax == 0u)
            {
    COW_AT(10049dea)
                wr32(sp0 - 0x60u, edi);
                g->edx = edx;
                g->esp = sp0 - 0x5cu;
                t219 = cow_call_regs(g, COW_IMG(0x10054500u), 0u, 0u, g->edx, 0, 1, edi);
                t220 = g->edx;
                d221 = cow_take_float(g);
                eax = t219;
                edx = t220;
                x0 = d221;
    COW_AT(10049df4)
                wrf32(sp0 - 0x2cu, (float)(double)(float)x0);
                loc_50 = rd32(sp0 - 0x50u);
                loc_54 = rd32(sp0 - 0x54u);
                loc_58 = rd32(sp0 - 0x58u);
                loc_5c = rd32(sp0 - 0x5cu);
                loc_44 = rd32(sp0 - 0x44u);
            }
            else
            {
    COW_AT(10049dda)
                wr32(sp0 - 0x60u, edi);
                g->edx = edx;
                t215 = rd32(eax);
                g->esp = sp0 - 0x5cu;
                t216 = cow_call_regs(g, COW_IMG(0x10054500u), t215, t215, g->edx, 0, 1, edi);
                t217 = g->edx;
                d218 = cow_take_float(g);
                eax = t216;
                edx = t217;
                x0 = d218;
    COW_AT(10049de4)
                wrf32(sp0 - 0x2cu, (float)(double)(float)x0);
                loc_50 = rd32(sp0 - 0x50u);
                loc_54 = rd32(sp0 - 0x54u);
                loc_58 = rd32(sp0 - 0x58u);
                loc_5c = rd32(sp0 - 0x5cu);
                loc_44 = rd32(sp0 - 0x44u);
            }
        }
        else
        {
    COW_AT(10049db2)
            if (eax == 0u)
            {
    COW_AT(10049dc6)
                wr32(sp0 - 0x60u, edi);
                g->edx = edx;
                g->esp = sp0 - 0x5cu;
                t212 = cow_call_regs(g, COW_IMG(0x100547a0u), 0u, 0u, g->edx, 0, 1, edi);
                t213 = g->edx;
                d214 = cow_take_float(g);
                eax = t212;
                edx = t213;
                x0 = d214;
    COW_AT(10049dd0)
                wrf32(sp0 - 0x2cu, (float)(double)(float)x0);
                loc_50 = rd32(sp0 - 0x50u);
                loc_54 = rd32(sp0 - 0x54u);
                loc_58 = rd32(sp0 - 0x58u);
                loc_5c = rd32(sp0 - 0x5cu);
                loc_44 = rd32(sp0 - 0x44u);
            }
            else
            {
    COW_AT(10049db6)
                wr32(sp0 - 0x60u, edi);
                g->edx = edx;
                t208 = rd32(eax);
                g->esp = sp0 - 0x5cu;
                t209 = cow_call_regs(g, COW_IMG(0x100547a0u), t208, t208, g->edx, 0, 1, edi);
                t210 = g->edx;
                d211 = cow_take_float(g);
                eax = t209;
                edx = t210;
                x0 = d211;
    COW_AT(10049dc0)
                wrf32(sp0 - 0x2cu, (float)(double)(float)x0);
                loc_50 = rd32(sp0 - 0x50u);
                loc_54 = rd32(sp0 - 0x54u);
                loc_58 = rd32(sp0 - 0x58u);
                loc_5c = rd32(sp0 - 0x5cu);
                loc_44 = rd32(sp0 - 0x44u);
            }
        }
    }
    COW_AT(10049e02)
    wr32(sp0 - 0x60u, 0x1fu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t222 = cow_thiscall(g, COW_IMG(0x100492f0u), self, 1, 0x1fu);
    t223 = g->ecx;
    t224 = g->edx;
    eax = t222;
    ecx = t223;
    edx = t224;
    COW_AT(10049e0b)
    g->ebx = ebx;
    g->edx = edx;
    d225 = rdf64(COW_IMG(0x1032abc8u));
    d226 = (double)rdf32(sp0 - 0x2cu);
    fpush(g, d225);
    g->esp = sp0 - 0x5cu;
    t227 = cow_call_regs(g, COW_IMG(0x103138fau), eax, ecx, g->edx, 1, 0);
    t228 = g->edx;
    edx = t228;
    edi = eax;
    eax = t227;
    x0 = d226;
    COW_AT(10049e1c)
    d229 = fr(g, x0 * (double)rdf32(COW_IMG(0x10329d30u)));
    if ((cow_fsw(g, d229, (double)rdf32(COW_IMG(0x10329d30u)), 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d229, (double)rdf32(COW_IMG(0x10329d30u)), 1u) & 0x4100u;
        x0 = d229;
    }
    else
    {
        eax = cow_fsw(g, d229, (double)rdf32(COW_IMG(0x10329d30u)), 1u) & 0x4100u;
        x0 = d229;
    COW_AT(10049e31)
        x0 = fr(g, x0 - (double)rdf32(COW_IMG(0x10329d2cu)));
    }
    COW_AT(10049e37)
    if (x0 < (double)rdf32(COW_IMG(0x10329d28u)))
    {
    COW_AT(10049e44)
        x0 = fr(g, x0 + (double)rdf32(COW_IMG(0x10329d2cu)));
    }
    COW_AT(10049e4a)
    if (edi == 0u) goto L_1004a57a;
    COW_AT(10049e52)
    wrf32(edi + 0x1cu, (float)x0);
    edi = rd32(sp0 - 0x48u);
    loc_50 = rd32(sp0 - 0x50u);
    loc_54 = rd32(sp0 - 0x54u);
    loc_58 = rd32(sp0 - 0x58u);
    loc_5c = rd32(sp0 - 0x5cu);
    loc_44 = rd32(sp0 - 0x44u);
    goto L_1004a55d;
L_10049e5e: ;
    COW_AT(10049e5e)
    if (rd32(ebx + 4u) == 0u)
    {
        eax = rd32(ebx + 4u);
    COW_AT(10049ea3)
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    else
    {
        eax = rd32(ebx + 4u);
    COW_AT(10049e65)
        if ((rd8(ebx + 0xcu) & 0xfu) == 0u)
        {
    COW_AT(10049e87)
            if (eax == 0u)
            {
    COW_AT(10049e97)
                wr32(sp0 - 0x60u, edi);
                g->edx = edx;
                g->esp = sp0 - 0x5cu;
                t205 = cow_call_regs(g, COW_IMG(0x10054500u), 0u, 0u, g->edx, 0, 1, edi);
                t206 = g->edx;
                d207 = cow_take_float(g);
                eax = t205;
                edx = t206;
                x0 = d207;
    COW_AT(10049ea1)
                loc_50 = rd32(sp0 - 0x50u);
                loc_54 = rd32(sp0 - 0x54u);
                loc_58 = rd32(sp0 - 0x58u);
                loc_5c = rd32(sp0 - 0x5cu);
                loc_44 = rd32(sp0 - 0x44u);
            }
            else
            {
    COW_AT(10049e8b)
                wr32(sp0 - 0x60u, edi);
                g->edx = edx;
                t201 = rd32(eax);
                g->esp = sp0 - 0x5cu;
                t202 = cow_call_regs(g, COW_IMG(0x10054500u), t201, t201, g->edx, 0, 1, edi);
                t203 = g->edx;
                d204 = cow_take_float(g);
                eax = t202;
                edx = t203;
                x0 = d204;
    COW_AT(10049e95)
                loc_50 = rd32(sp0 - 0x50u);
                loc_54 = rd32(sp0 - 0x54u);
                loc_58 = rd32(sp0 - 0x58u);
                loc_5c = rd32(sp0 - 0x5cu);
                loc_44 = rd32(sp0 - 0x44u);
            }
        }
        else
        {
    COW_AT(10049e6b)
            if (eax == 0u)
            {
    COW_AT(10049e7b)
                wr32(sp0 - 0x60u, edi);
                g->edx = edx;
                g->esp = sp0 - 0x5cu;
                t198 = cow_call_regs(g, COW_IMG(0x100547a0u), 0u, 0u, g->edx, 0, 1, edi);
                t199 = g->edx;
                d200 = cow_take_float(g);
                eax = t198;
                edx = t199;
                x0 = d200;
    COW_AT(10049e85)
                loc_50 = rd32(sp0 - 0x50u);
                loc_54 = rd32(sp0 - 0x54u);
                loc_58 = rd32(sp0 - 0x58u);
                loc_5c = rd32(sp0 - 0x5cu);
                loc_44 = rd32(sp0 - 0x44u);
            }
            else
            {
    COW_AT(10049e6f)
                wr32(sp0 - 0x60u, edi);
                g->edx = edx;
                t194 = rd32(eax);
                g->esp = sp0 - 0x5cu;
                t195 = cow_call_regs(g, COW_IMG(0x100547a0u), t194, t194, g->edx, 0, 1, edi);
                t196 = g->edx;
                d197 = cow_take_float(g);
                eax = t195;
                edx = t196;
                x0 = d197;
    COW_AT(10049e79)
                loc_50 = rd32(sp0 - 0x50u);
                loc_54 = rd32(sp0 - 0x54u);
                loc_58 = rd32(sp0 - 0x58u);
                loc_5c = rd32(sp0 - 0x5cu);
                loc_44 = rd32(sp0 - 0x44u);
            }
        }
    }
    COW_AT(10049ea9)
    wr32(sp0 - 0x60u, 2u);
    loc_60 = 2u;
    goto L_10049eab;
L_10049ec2: ;
    COW_AT(10049ec2)
    if (rd32(ebx + 4u) == 0u)
    {
        eax = rd32(ebx + 4u);
    COW_AT(10049f07)
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    else
    {
        eax = rd32(ebx + 4u);
    COW_AT(10049ec9)
        if ((rd8(ebx + 0xcu) & 0xfu) == 0u)
        {
    COW_AT(10049eeb)
            if (eax == 0u)
            {
    COW_AT(10049efb)
                wr32(sp0 - 0x60u, edi);
                g->edx = edx;
                g->esp = sp0 - 0x5cu;
                t191 = cow_call_regs(g, COW_IMG(0x10054500u), 0u, 0u, g->edx, 0, 1, edi);
                t192 = g->edx;
                d193 = cow_take_float(g);
                eax = t191;
                edx = t192;
                x0 = d193;
    COW_AT(10049f05)
                loc_50 = rd32(sp0 - 0x50u);
                loc_54 = rd32(sp0 - 0x54u);
                loc_58 = rd32(sp0 - 0x58u);
                loc_5c = rd32(sp0 - 0x5cu);
                loc_44 = rd32(sp0 - 0x44u);
            }
            else
            {
    COW_AT(10049eef)
                wr32(sp0 - 0x60u, edi);
                g->edx = edx;
                t187 = rd32(eax);
                g->esp = sp0 - 0x5cu;
                t188 = cow_call_regs(g, COW_IMG(0x10054500u), t187, t187, g->edx, 0, 1, edi);
                t189 = g->edx;
                d190 = cow_take_float(g);
                eax = t188;
                edx = t189;
                x0 = d190;
    COW_AT(10049ef9)
                loc_50 = rd32(sp0 - 0x50u);
                loc_54 = rd32(sp0 - 0x54u);
                loc_58 = rd32(sp0 - 0x58u);
                loc_5c = rd32(sp0 - 0x5cu);
                loc_44 = rd32(sp0 - 0x44u);
            }
        }
        else
        {
    COW_AT(10049ecf)
            if (eax == 0u)
            {
    COW_AT(10049edf)
                wr32(sp0 - 0x60u, edi);
                g->edx = edx;
                g->esp = sp0 - 0x5cu;
                t184 = cow_call_regs(g, COW_IMG(0x100547a0u), 0u, 0u, g->edx, 0, 1, edi);
                t185 = g->edx;
                d186 = cow_take_float(g);
                eax = t184;
                edx = t185;
                x0 = d186;
    COW_AT(10049ee9)
                loc_50 = rd32(sp0 - 0x50u);
                loc_54 = rd32(sp0 - 0x54u);
                loc_58 = rd32(sp0 - 0x58u);
                loc_5c = rd32(sp0 - 0x5cu);
                loc_44 = rd32(sp0 - 0x44u);
            }
            else
            {
    COW_AT(10049ed3)
                wr32(sp0 - 0x60u, edi);
                g->edx = edx;
                t180 = rd32(eax);
                g->esp = sp0 - 0x5cu;
                t181 = cow_call_regs(g, COW_IMG(0x100547a0u), t180, t180, g->edx, 0, 1, edi);
                t182 = g->edx;
                d183 = cow_take_float(g);
                eax = t181;
                edx = t182;
                x0 = d183;
    COW_AT(10049edd)
                loc_50 = rd32(sp0 - 0x50u);
                loc_54 = rd32(sp0 - 0x54u);
                loc_58 = rd32(sp0 - 0x58u);
                loc_5c = rd32(sp0 - 0x5cu);
                loc_44 = rd32(sp0 - 0x44u);
            }
        }
    }
    COW_AT(10049f0d)
    wr32(sp0 - 0x60u, 2u);
    loc_60 = 2u;
    goto L_10049f0f;
L_10049f26: ;
    COW_AT(10049f26)
    if (rd32(ebx + 4u) == 0u)
    {
        eax = rd32(ebx + 4u);
    COW_AT(10049f6b)
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    else
    {
        eax = rd32(ebx + 4u);
    COW_AT(10049f2d)
        if ((rd8(ebx + 0xcu) & 0xfu) == 0u)
        {
    COW_AT(10049f4f)
            if (eax == 0u)
            {
    COW_AT(10049f5f)
                wr32(sp0 - 0x60u, edi);
                g->edx = edx;
                g->esp = sp0 - 0x5cu;
                t175 = cow_call_regs(g, COW_IMG(0x10054500u), 0u, 0u, g->edx, 0, 1, edi);
                t176 = g->edx;
                d177 = cow_take_float(g);
                eax = t175;
                edx = t176;
                x0 = d177;
    COW_AT(10049f69)
                loc_50 = rd32(sp0 - 0x50u);
                loc_54 = rd32(sp0 - 0x54u);
                loc_58 = rd32(sp0 - 0x58u);
                loc_5c = rd32(sp0 - 0x5cu);
                loc_44 = rd32(sp0 - 0x44u);
            }
            else
            {
    COW_AT(10049f53)
                wr32(sp0 - 0x60u, edi);
                g->edx = edx;
                t171 = rd32(eax);
                g->esp = sp0 - 0x5cu;
                t172 = cow_call_regs(g, COW_IMG(0x10054500u), t171, t171, g->edx, 0, 1, edi);
                t173 = g->edx;
                d174 = cow_take_float(g);
                eax = t172;
                edx = t173;
                x0 = d174;
    COW_AT(10049f5d)
                loc_50 = rd32(sp0 - 0x50u);
                loc_54 = rd32(sp0 - 0x54u);
                loc_58 = rd32(sp0 - 0x58u);
                loc_5c = rd32(sp0 - 0x5cu);
                loc_44 = rd32(sp0 - 0x44u);
            }
        }
        else
        {
    COW_AT(10049f33)
            if (eax == 0u)
            {
    COW_AT(10049f43)
                wr32(sp0 - 0x60u, edi);
                g->edx = edx;
                g->esp = sp0 - 0x5cu;
                t168 = cow_call_regs(g, COW_IMG(0x100547a0u), 0u, 0u, g->edx, 0, 1, edi);
                t169 = g->edx;
                d170 = cow_take_float(g);
                eax = t168;
                edx = t169;
                x0 = d170;
    COW_AT(10049f4d)
                loc_50 = rd32(sp0 - 0x50u);
                loc_54 = rd32(sp0 - 0x54u);
                loc_58 = rd32(sp0 - 0x58u);
                loc_5c = rd32(sp0 - 0x5cu);
                loc_44 = rd32(sp0 - 0x44u);
            }
            else
            {
    COW_AT(10049f37)
                wr32(sp0 - 0x60u, edi);
                g->edx = edx;
                t164 = rd32(eax);
                g->esp = sp0 - 0x5cu;
                t165 = cow_call_regs(g, COW_IMG(0x100547a0u), t164, t164, g->edx, 0, 1, edi);
                t166 = g->edx;
                d167 = cow_take_float(g);
                eax = t165;
                edx = t166;
                x0 = d167;
    COW_AT(10049f41)
                loc_50 = rd32(sp0 - 0x50u);
                loc_54 = rd32(sp0 - 0x54u);
                loc_58 = rd32(sp0 - 0x58u);
                loc_5c = rd32(sp0 - 0x5cu);
                loc_44 = rd32(sp0 - 0x44u);
            }
        }
    }
    COW_AT(10049f71)
    wr32(sp0 - 0x60u, 2u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t178 = cow_thiscall(g, COW_IMG(0x100492f0u), self, 1, 2u);
    t179 = g->edx;
    eax = t178;
    edx = t179;
    COW_AT(10049f7a)
    if (eax == 0u) goto L_1004a55b;
    COW_AT(10049f82)
    wrf32(eax + 0xcu, (float)x0);
    loc_50 = rd32(sp0 - 0x50u);
    loc_54 = rd32(sp0 - 0x54u);
    loc_58 = rd32(sp0 - 0x58u);
    loc_5c = rd32(sp0 - 0x5cu);
    loc_44 = rd32(sp0 - 0x44u);
    goto L_1004a55d;
L_10049f8a: ;
    COW_AT(10049f8a)
    if (rd32(ebx + 4u) == 0u)
    {
        eax = rd32(ebx + 4u);
    COW_AT(10049fcf)
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    else
    {
        eax = rd32(ebx + 4u);
    COW_AT(10049f91)
        if ((rd8(ebx + 0xcu) & 0xfu) == 0u)
        {
    COW_AT(10049fb3)
            if (eax == 0u)
            {
    COW_AT(10049fc3)
                wr32(sp0 - 0x60u, edi);
                g->edx = edx;
                g->esp = sp0 - 0x5cu;
                t159 = cow_call_regs(g, COW_IMG(0x10054500u), 0u, 0u, g->edx, 0, 1, edi);
                t160 = g->edx;
                d161 = cow_take_float(g);
                eax = t159;
                edx = t160;
                x0 = d161;
    COW_AT(10049fcd)
                loc_50 = rd32(sp0 - 0x50u);
                loc_54 = rd32(sp0 - 0x54u);
                loc_58 = rd32(sp0 - 0x58u);
                loc_5c = rd32(sp0 - 0x5cu);
                loc_44 = rd32(sp0 - 0x44u);
            }
            else
            {
    COW_AT(10049fb7)
                wr32(sp0 - 0x60u, edi);
                g->edx = edx;
                t155 = rd32(eax);
                g->esp = sp0 - 0x5cu;
                t156 = cow_call_regs(g, COW_IMG(0x10054500u), t155, t155, g->edx, 0, 1, edi);
                t157 = g->edx;
                d158 = cow_take_float(g);
                eax = t156;
                edx = t157;
                x0 = d158;
    COW_AT(10049fc1)
                loc_50 = rd32(sp0 - 0x50u);
                loc_54 = rd32(sp0 - 0x54u);
                loc_58 = rd32(sp0 - 0x58u);
                loc_5c = rd32(sp0 - 0x5cu);
                loc_44 = rd32(sp0 - 0x44u);
            }
        }
        else
        {
    COW_AT(10049f97)
            if (eax == 0u)
            {
    COW_AT(10049fa7)
                wr32(sp0 - 0x60u, edi);
                g->edx = edx;
                g->esp = sp0 - 0x5cu;
                t152 = cow_call_regs(g, COW_IMG(0x100547a0u), 0u, 0u, g->edx, 0, 1, edi);
                t153 = g->edx;
                d154 = cow_take_float(g);
                eax = t152;
                edx = t153;
                x0 = d154;
    COW_AT(10049fb1)
                loc_50 = rd32(sp0 - 0x50u);
                loc_54 = rd32(sp0 - 0x54u);
                loc_58 = rd32(sp0 - 0x58u);
                loc_5c = rd32(sp0 - 0x5cu);
                loc_44 = rd32(sp0 - 0x44u);
            }
            else
            {
    COW_AT(10049f9b)
                wr32(sp0 - 0x60u, edi);
                g->edx = edx;
                t148 = rd32(eax);
                g->esp = sp0 - 0x5cu;
                t149 = cow_call_regs(g, COW_IMG(0x100547a0u), t148, t148, g->edx, 0, 1, edi);
                t150 = g->edx;
                d151 = cow_take_float(g);
                eax = t149;
                edx = t150;
                x0 = d151;
    COW_AT(10049fa5)
                loc_50 = rd32(sp0 - 0x50u);
                loc_54 = rd32(sp0 - 0x54u);
                loc_58 = rd32(sp0 - 0x58u);
                loc_5c = rd32(sp0 - 0x5cu);
                loc_44 = rd32(sp0 - 0x44u);
            }
        }
    }
    COW_AT(10049fd5)
    wr32(sp0 - 0x60u, 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t162 = cow_thiscall(g, COW_IMG(0x100492f0u), self, 1, 1u);
    t163 = g->edx;
    eax = t162;
    edx = t163;
    COW_AT(10049fde)
    if (eax == 0u) goto L_1004a55b;
    COW_AT(10049fe6)
    wrf32(eax + 0x14u, (float)x0);
    loc_50 = rd32(sp0 - 0x50u);
    loc_54 = rd32(sp0 - 0x54u);
    loc_58 = rd32(sp0 - 0x58u);
    loc_5c = rd32(sp0 - 0x5cu);
    loc_44 = rd32(sp0 - 0x44u);
    goto L_1004a55d;
L_10049fee: ;
    COW_AT(10049fee)
    if (rd32(ebx + 4u) == 0u)
    {
        eax = rd32(ebx + 4u);
    COW_AT(1004a033)
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    else
    {
        eax = rd32(ebx + 4u);
    COW_AT(10049ff5)
        if ((rd8(ebx + 0xcu) & 0xfu) == 0u)
        {
    COW_AT(1004a017)
            if (eax == 0u)
            {
    COW_AT(1004a027)
                wr32(sp0 - 0x60u, edi);
                g->edx = edx;
                g->esp = sp0 - 0x5cu;
                t143 = cow_call_regs(g, COW_IMG(0x10054500u), 0u, 0u, g->edx, 0, 1, edi);
                t144 = g->edx;
                d145 = cow_take_float(g);
                eax = t143;
                edx = t144;
                x0 = d145;
    COW_AT(1004a031)
                loc_50 = rd32(sp0 - 0x50u);
                loc_54 = rd32(sp0 - 0x54u);
                loc_58 = rd32(sp0 - 0x58u);
                loc_5c = rd32(sp0 - 0x5cu);
                loc_44 = rd32(sp0 - 0x44u);
            }
            else
            {
    COW_AT(1004a01b)
                wr32(sp0 - 0x60u, edi);
                g->edx = edx;
                t139 = rd32(eax);
                g->esp = sp0 - 0x5cu;
                t140 = cow_call_regs(g, COW_IMG(0x10054500u), t139, t139, g->edx, 0, 1, edi);
                t141 = g->edx;
                d142 = cow_take_float(g);
                eax = t140;
                edx = t141;
                x0 = d142;
    COW_AT(1004a025)
                loc_50 = rd32(sp0 - 0x50u);
                loc_54 = rd32(sp0 - 0x54u);
                loc_58 = rd32(sp0 - 0x58u);
                loc_5c = rd32(sp0 - 0x5cu);
                loc_44 = rd32(sp0 - 0x44u);
            }
        }
        else
        {
    COW_AT(10049ffb)
            if (eax == 0u)
            {
    COW_AT(1004a00b)
                wr32(sp0 - 0x60u, edi);
                g->edx = edx;
                g->esp = sp0 - 0x5cu;
                t136 = cow_call_regs(g, COW_IMG(0x100547a0u), 0u, 0u, g->edx, 0, 1, edi);
                t137 = g->edx;
                d138 = cow_take_float(g);
                eax = t136;
                edx = t137;
                x0 = d138;
    COW_AT(1004a015)
                loc_50 = rd32(sp0 - 0x50u);
                loc_54 = rd32(sp0 - 0x54u);
                loc_58 = rd32(sp0 - 0x58u);
                loc_5c = rd32(sp0 - 0x5cu);
                loc_44 = rd32(sp0 - 0x44u);
            }
            else
            {
    COW_AT(10049fff)
                wr32(sp0 - 0x60u, edi);
                g->edx = edx;
                t132 = rd32(eax);
                g->esp = sp0 - 0x5cu;
                t133 = cow_call_regs(g, COW_IMG(0x100547a0u), t132, t132, g->edx, 0, 1, edi);
                t134 = g->edx;
                d135 = cow_take_float(g);
                eax = t133;
                edx = t134;
                x0 = d135;
    COW_AT(1004a009)
                loc_50 = rd32(sp0 - 0x50u);
                loc_54 = rd32(sp0 - 0x54u);
                loc_58 = rd32(sp0 - 0x58u);
                loc_5c = rd32(sp0 - 0x5cu);
                loc_44 = rd32(sp0 - 0x44u);
            }
        }
    }
    COW_AT(1004a039)
    wr32(sp0 - 0x60u, 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t146 = cow_thiscall(g, COW_IMG(0x100492f0u), self, 1, 1u);
    t147 = g->edx;
    eax = t146;
    edx = t147;
    COW_AT(1004a042)
    if (eax == 0u) goto L_1004a55b;
    COW_AT(1004a04a)
    wrf32(eax + 0x18u, (float)x0);
    loc_50 = rd32(sp0 - 0x50u);
    loc_54 = rd32(sp0 - 0x54u);
    loc_58 = rd32(sp0 - 0x58u);
    loc_5c = rd32(sp0 - 0x5cu);
    loc_44 = rd32(sp0 - 0x44u);
    goto L_1004a55d;
L_1004a052: ;
    COW_AT(1004a052)
    if (rd32(ebx + 4u) == 0u)
    {
        eax = rd32(ebx + 4u);
    COW_AT(1004a097)
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    else
    {
        eax = rd32(ebx + 4u);
    COW_AT(1004a059)
        if ((rd8(ebx + 0xcu) & 0xfu) == 0u)
        {
    COW_AT(1004a07b)
            if (eax == 0u)
            {
    COW_AT(1004a08b)
                wr32(sp0 - 0x60u, edi);
                g->edx = edx;
                g->esp = sp0 - 0x5cu;
                t127 = cow_call_regs(g, COW_IMG(0x10054500u), 0u, 0u, g->edx, 0, 1, edi);
                t128 = g->edx;
                d129 = cow_take_float(g);
                eax = t127;
                edx = t128;
                x0 = d129;
    COW_AT(1004a095)
                loc_50 = rd32(sp0 - 0x50u);
                loc_54 = rd32(sp0 - 0x54u);
                loc_58 = rd32(sp0 - 0x58u);
                loc_5c = rd32(sp0 - 0x5cu);
                loc_44 = rd32(sp0 - 0x44u);
            }
            else
            {
    COW_AT(1004a07f)
                wr32(sp0 - 0x60u, edi);
                g->edx = edx;
                t123 = rd32(eax);
                g->esp = sp0 - 0x5cu;
                t124 = cow_call_regs(g, COW_IMG(0x10054500u), t123, t123, g->edx, 0, 1, edi);
                t125 = g->edx;
                d126 = cow_take_float(g);
                eax = t124;
                edx = t125;
                x0 = d126;
    COW_AT(1004a089)
                loc_50 = rd32(sp0 - 0x50u);
                loc_54 = rd32(sp0 - 0x54u);
                loc_58 = rd32(sp0 - 0x58u);
                loc_5c = rd32(sp0 - 0x5cu);
                loc_44 = rd32(sp0 - 0x44u);
            }
        }
        else
        {
    COW_AT(1004a05f)
            if (eax == 0u)
            {
    COW_AT(1004a06f)
                wr32(sp0 - 0x60u, edi);
                g->edx = edx;
                g->esp = sp0 - 0x5cu;
                t120 = cow_call_regs(g, COW_IMG(0x100547a0u), 0u, 0u, g->edx, 0, 1, edi);
                t121 = g->edx;
                d122 = cow_take_float(g);
                eax = t120;
                edx = t121;
                x0 = d122;
    COW_AT(1004a079)
                loc_50 = rd32(sp0 - 0x50u);
                loc_54 = rd32(sp0 - 0x54u);
                loc_58 = rd32(sp0 - 0x58u);
                loc_5c = rd32(sp0 - 0x5cu);
                loc_44 = rd32(sp0 - 0x44u);
            }
            else
            {
    COW_AT(1004a063)
                wr32(sp0 - 0x60u, edi);
                g->edx = edx;
                t116 = rd32(eax);
                g->esp = sp0 - 0x5cu;
                t117 = cow_call_regs(g, COW_IMG(0x100547a0u), t116, t116, g->edx, 0, 1, edi);
                t118 = g->edx;
                d119 = cow_take_float(g);
                eax = t117;
                edx = t118;
                x0 = d119;
    COW_AT(1004a06d)
                loc_50 = rd32(sp0 - 0x50u);
                loc_54 = rd32(sp0 - 0x54u);
                loc_58 = rd32(sp0 - 0x58u);
                loc_5c = rd32(sp0 - 0x5cu);
                loc_44 = rd32(sp0 - 0x44u);
            }
        }
    }
    COW_AT(1004a09d)
    wr32(sp0 - 0x60u, 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t130 = cow_thiscall(g, COW_IMG(0x100492f0u), self, 1, 1u);
    t131 = g->edx;
    eax = t130;
    edx = t131;
    COW_AT(1004a0a6)
    if (eax == 0u) goto L_1004a55b;
    COW_AT(1004a0ae)
    wrf32(eax + 0x1cu, (float)x0);
    loc_50 = rd32(sp0 - 0x50u);
    loc_54 = rd32(sp0 - 0x54u);
    loc_58 = rd32(sp0 - 0x58u);
    loc_5c = rd32(sp0 - 0x5cu);
    loc_44 = rd32(sp0 - 0x44u);
    goto L_1004a55d;
L_1004a0b6: ;
    COW_AT(1004a0b6)
    g->esp = sp0 - 0x5cu;
    t81 = cow_call_regs(g, COW_IMG(0x10053e60u), eax, self, edx, 1, 0);
    t82 = g->edx;
    eax = t81;
    edx = t82;
    COW_AT(1004a0bd)
    if ((uint8_t)eax == 0u) goto L_1004a57c;
    COW_AT(1004a0c5)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t83 = cow_thiscall(g, COW_IMG(0x100493b0u), self, 0);
    t84 = g->ecx;
    t85 = g->edx;
    eax = t83;
    ecx = t84;
    edx = t85;
    COW_AT(1004a0cc)
    wr32(sp0 - 0x28u, eax);
    g->eax = eax;
    g->edx = edx;
    d86 = fr(g, fr(g, (double)(int32_t)eax + (double)rdf32(self + 0xd0u)) - (double)rdf32(self + 0xc8u));
    g->esp = sp0 - 0x5cu;
    t87 = cow_thiscall(g, COW_IMG(0x100493b0u), ecx, 0);
    t88 = g->ecx;
    t89 = g->edx;
    eax = t87;
    ecx = t88;
    edx = t89;
    x0 = d86;
    COW_AT(1004a0e5)
    wr32(sp0 - 0x28u, eax);
    d90 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, x0 / fr(g, (double)(int32_t)eax + (double)rdf32(self + 0xd0u))));
    wrf32(sp0 - 0x28u, (float)(double)(float)d90);
    if ((cow_fsw(g, d90, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u) == 0u)
    {
    COW_AT(1004a10e)
        wr32(sp0 - 0x28u, 0x3f800000u);
    }
    COW_AT(1004a116)
    if (rd32(ebx + 4u) == 0u)
    {
        eax = rd32(ebx + 4u);
    COW_AT(1004a15b)
        wr32(sp0 - 0x40u, 0u);
    }
    else
    {
        eax = rd32(ebx + 4u);
    COW_AT(1004a11d)
        if ((rd8(ebx + 0xcu) & 0xfu) == 0u)
        {
    COW_AT(1004a13f)
            if (eax == 0u)
            {
    COW_AT(1004a147)
                eax = 0u;
            }
            else
            {
    COW_AT(1004a143)
                eax = rd32(eax);
            }
    COW_AT(1004a149)
            t96 = rd32(sp0 - 0x28u);
            wr32(sp0 - 0x60u, t96);
            g->edx = t96;
            g->esp = sp0 - 0x5cu;
            t97 = cow_call_regs(g, COW_IMG(0x10054500u), eax, eax, g->edx, 0, 1, t96);
            t98 = g->ecx;
            t99 = g->edx;
            d100 = cow_take_float(g);
            eax = t97;
            ecx = t98;
            edx = t99;
            x0 = d100;
    COW_AT(1004a155)
            wrf32(sp0 - 0x40u, (float)(double)(float)x0);
        }
        else
        {
    COW_AT(1004a123)
            if (eax == 0u)
            {
    COW_AT(1004a12b)
                eax = 0u;
            }
            else
            {
    COW_AT(1004a127)
                eax = rd32(eax);
            }
    COW_AT(1004a12d)
            t91 = rd32(sp0 - 0x28u);
            wr32(sp0 - 0x60u, t91);
            g->edx = edx;
            g->esp = sp0 - 0x5cu;
            t92 = cow_call_regs(g, COW_IMG(0x100547a0u), eax, eax, g->edx, 0, 1, t91);
            t93 = g->ecx;
            t94 = g->edx;
            d95 = cow_take_float(g);
            eax = t92;
            ecx = t93;
            edx = t94;
            x0 = d95;
    COW_AT(1004a139)
            wrf32(sp0 - 0x40u, (float)(double)(float)x0);
        }
    }
    COW_AT(1004a163)
    g->ebx = ebx;
    d101 = rdf64(COW_IMG(0x1032abc8u));
    d102 = (double)rdf32(sp0 - 0x40u);
    fpush(g, d101);
    g->esp = sp0 - 0x5cu;
    t103 = cow_call_regs(g, COW_IMG(0x103138fau), eax, ecx, g->edx, 1, 0);
    eax = t103;
    x0 = d102;
    COW_AT(1004a172)
    d104 = fr(g, x0 * (double)rdf32(COW_IMG(0x1032a3b8u)));
    wrf32(sp0 - 0x40u, (float)(double)(float)d104);
    if ((cow_fsw(g, d104, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d104, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        loc_40_f = (double)(float)d104;
    }
    else
    {
        eax = cow_fsw(g, d104, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        loc_40_f = (double)(float)d104;
    COW_AT(1004a18b)
        d105 = fr(g, loc_40_f - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(sp0 - 0x40u, (float)(double)(float)d105);
        loc_40_f = (double)(float)d105;
    }
    COW_AT(1004a199)
    if (loc_40_f < (double)rdf32(COW_IMG(0x10329d28u)))
    {
    COW_AT(1004a1aa)
        d106 = fr(g, loc_40_f + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(sp0 - 0x40u, (float)(double)(float)d106);
        loc_40_f = (double)(float)d106;
    }
    COW_AT(1004a1b8)
    t107 = rd32(rd32(self + 0xa4u) + 0x34u);
    t108 = rd32(rd32(self + 0xa4u) + 0x38u);
    t109 = rd32(rd32(self + 0xa4u) + 0x30u);
    wr32(rd32(self + 0xa4u) + 0x38u, 0u);
    wr32(rd32(self + 0xa4u) + 0x34u, 0u);
    wr32(rd32(self + 0xa4u) + 0x30u, 0u);
    wr32(sp0 - 0x60u, cow_f2bits(loc_40_f));
    t110 = rd32(sp0 - 0x44u);
    wr32(sp0 - 0x64u, t110);
    g->esp = sp0 - 0x5cu;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x60u), rd32(COW_IMG(0x1047cf7cu)), 2, t110, cow_f2bits(loc_40_f));
    ebx = t107;
    ebp = t108;
    edi = t109;
    COW_AT(1004a1f6)
    t111 = rd32(sp0 - 0x44u);
    wr32(sp0 - 0x60u, t111);
    t112 = rd32(self + 0xa4u);
    wr32(sp0 - 0x64u, t112);
    wr32(sp0 - 0x68u, t112);
    g->esp = sp0 - 0x5cu;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x24u), rd32(COW_IMG(0x1047cf7cu)), 3, t112, t112, t111);
    COW_AT(1004a214)
    t113 = rd32(self + 0xa4u);
    wr32(t113 + 0x30u, edi);
    t114 = rd32(sp0 - 0x48u);
    wr32(t113 + 0x34u, ebx);
    t115 = rd32(sp0 - 0x34u);
    wr32(t113 + 0x38u, ebp);
    edx = t113 + 0x30u;
    ebx = t115;
    ebp = rd32(sp0 - 0x44u);
    edi = t114;
    loc_50 = rd32(sp0 - 0x50u);
    loc_54 = rd32(sp0 - 0x54u);
    loc_58 = rd32(sp0 - 0x58u);
    loc_5c = rd32(sp0 - 0x5cu);
    loc_44 = rd32(sp0 - 0x44u);
    goto L_1004a55d;
L_1004a236: ;
    COW_AT(1004a236)
    g->esp = sp0 - 0x5cu;
    t46 = cow_call_regs(g, COW_IMG(0x10053e60u), eax, self, edx, 1, 0);
    t47 = g->edx;
    eax = t46;
    edx = t47;
    COW_AT(1004a23d)
    if ((uint8_t)eax == 0u) goto L_1004a57c;
    COW_AT(1004a245)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t48 = cow_thiscall(g, COW_IMG(0x100493b0u), self, 0);
    t49 = g->ecx;
    t50 = g->edx;
    eax = t48;
    ecx = t49;
    edx = t50;
    COW_AT(1004a24c)
    wr32(sp0 - 0x28u, eax);
    g->eax = eax;
    g->edx = edx;
    d51 = fr(g, fr(g, (double)(int32_t)eax + (double)rdf32(self + 0xd0u)) - (double)rdf32(self + 0xc8u));
    g->esp = sp0 - 0x5cu;
    t52 = cow_thiscall(g, COW_IMG(0x100493b0u), ecx, 0);
    t53 = g->ecx;
    t54 = g->edx;
    eax = t52;
    ecx = t53;
    edx = t54;
    x0 = d51;
    COW_AT(1004a265)
    wr32(sp0 - 0x28u, eax);
    d55 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, x0 / fr(g, (double)(int32_t)eax + (double)rdf32(self + 0xd0u))));
    wrf32(sp0 - 0x28u, (float)(double)(float)d55);
    if ((cow_fsw(g, d55, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u) == 0u)
    {
    COW_AT(1004a28e)
        wr32(sp0 - 0x28u, 0x3f800000u);
    }
    COW_AT(1004a296)
    if (rd32(ebx + 4u) == 0u)
    {
        eax = rd32(ebx + 4u);
    COW_AT(1004a2db)
        wr32(sp0 - 0x3cu, 0u);
    }
    else
    {
        eax = rd32(ebx + 4u);
    COW_AT(1004a29d)
        if ((rd8(ebx + 0xcu) & 0xfu) == 0u)
        {
    COW_AT(1004a2bf)
            if (eax == 0u)
            {
    COW_AT(1004a2c7)
                eax = 0u;
            }
            else
            {
    COW_AT(1004a2c3)
                eax = rd32(eax);
            }
    COW_AT(1004a2c9)
            t61 = rd32(sp0 - 0x28u);
            wr32(sp0 - 0x60u, t61);
            g->edx = t61;
            g->esp = sp0 - 0x5cu;
            t62 = cow_call_regs(g, COW_IMG(0x10054500u), eax, eax, g->edx, 0, 1, t61);
            t63 = g->ecx;
            t64 = g->edx;
            d65 = cow_take_float(g);
            eax = t62;
            ecx = t63;
            edx = t64;
            x0 = d65;
    COW_AT(1004a2d5)
            wrf32(sp0 - 0x3cu, (float)(double)(float)x0);
        }
        else
        {
    COW_AT(1004a2a3)
            if (eax == 0u)
            {
    COW_AT(1004a2ab)
                eax = 0u;
            }
            else
            {
    COW_AT(1004a2a7)
                eax = rd32(eax);
            }
    COW_AT(1004a2ad)
            t56 = rd32(sp0 - 0x28u);
            wr32(sp0 - 0x60u, t56);
            g->edx = edx;
            g->esp = sp0 - 0x5cu;
            t57 = cow_call_regs(g, COW_IMG(0x100547a0u), eax, eax, g->edx, 0, 1, t56);
            t58 = g->ecx;
            t59 = g->edx;
            d60 = cow_take_float(g);
            eax = t57;
            ecx = t58;
            edx = t59;
            x0 = d60;
    COW_AT(1004a2b9)
            wrf32(sp0 - 0x3cu, (float)(double)(float)x0);
        }
    }
    COW_AT(1004a2e3)
    g->ebx = ebx;
    d66 = rdf64(COW_IMG(0x1032abc8u));
    d67 = (double)rdf32(sp0 - 0x3cu);
    fpush(g, d66);
    g->esp = sp0 - 0x5cu;
    t68 = cow_call_regs(g, COW_IMG(0x103138fau), eax, ecx, g->edx, 1, 0);
    eax = t68;
    x0 = d67;
    COW_AT(1004a2f2)
    d69 = fr(g, x0 * (double)rdf32(COW_IMG(0x1032a3b8u)));
    wrf32(sp0 - 0x3cu, (float)(double)(float)d69);
    if ((cow_fsw(g, d69, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d69, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        loc_3c_f = (double)(float)d69;
    }
    else
    {
        eax = cow_fsw(g, d69, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        loc_3c_f = (double)(float)d69;
    COW_AT(1004a30b)
        d70 = fr(g, loc_3c_f - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(sp0 - 0x3cu, (float)(double)(float)d70);
        loc_3c_f = (double)(float)d70;
    }
    COW_AT(1004a319)
    if (loc_3c_f < (double)rdf32(COW_IMG(0x10329d28u)))
    {
    COW_AT(1004a32a)
        d71 = fr(g, loc_3c_f + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(sp0 - 0x3cu, (float)(double)(float)d71);
        loc_3c_f = (double)(float)d71;
    }
    COW_AT(1004a338)
    t72 = rd32(rd32(self + 0xa4u) + 0x34u);
    t73 = rd32(rd32(self + 0xa4u) + 0x38u);
    t74 = rd32(rd32(self + 0xa4u) + 0x30u);
    wr32(rd32(self + 0xa4u) + 0x38u, 0u);
    wr32(rd32(self + 0xa4u) + 0x34u, 0u);
    wr32(rd32(self + 0xa4u) + 0x30u, 0u);
    wr32(sp0 - 0x60u, cow_f2bits(loc_3c_f));
    t75 = rd32(sp0 - 0x44u);
    wr32(sp0 - 0x64u, t75);
    g->esp = sp0 - 0x5cu;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x64u), rd32(COW_IMG(0x1047cf7cu)), 2, t75, cow_f2bits(loc_3c_f));
    ebx = t72;
    ebp = t73;
    edi = t74;
    COW_AT(1004a376)
    t76 = rd32(sp0 - 0x44u);
    wr32(sp0 - 0x60u, t76);
    t77 = rd32(self + 0xa4u);
    wr32(sp0 - 0x64u, t77);
    wr32(sp0 - 0x68u, t77);
    g->esp = sp0 - 0x5cu;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x24u), rd32(COW_IMG(0x1047cf7cu)), 3, t77, t77, t76);
    COW_AT(1004a394)
    t78 = rd32(self + 0xa4u);
    wr32(t78 + 0x30u, edi);
    t79 = rd32(sp0 - 0x48u);
    wr32(t78 + 0x34u, ebx);
    t80 = rd32(sp0 - 0x34u);
    wr32(t78 + 0x38u, ebp);
    edx = t78 + 0x30u;
    ebx = t80;
    ebp = rd32(sp0 - 0x44u);
    edi = t79;
    loc_50 = rd32(sp0 - 0x50u);
    loc_54 = rd32(sp0 - 0x54u);
    loc_58 = rd32(sp0 - 0x58u);
    loc_5c = rd32(sp0 - 0x5cu);
    loc_44 = rd32(sp0 - 0x44u);
    goto L_1004a55d;
L_1004a3b6: ;
    COW_AT(1004a3b6)
    g->esp = sp0 - 0x5cu;
    t11 = cow_call_regs(g, COW_IMG(0x10053e60u), eax, self, edx, 1, 0);
    t12 = g->edx;
    eax = t11;
    edx = t12;
    COW_AT(1004a3bd)
    if ((uint8_t)eax == 0u) goto L_1004a57c;
    COW_AT(1004a3c5)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t13 = cow_thiscall(g, COW_IMG(0x100493b0u), self, 0);
    t14 = g->ecx;
    t15 = g->edx;
    eax = t13;
    ecx = t14;
    edx = t15;
    COW_AT(1004a3cc)
    wr32(sp0 - 0x28u, eax);
    g->eax = eax;
    g->edx = edx;
    d16 = fr(g, fr(g, (double)(int32_t)eax + (double)rdf32(self + 0xd0u)) - (double)rdf32(self + 0xc8u));
    g->esp = sp0 - 0x5cu;
    t17 = cow_thiscall(g, COW_IMG(0x100493b0u), ecx, 0);
    t18 = g->ecx;
    t19 = g->edx;
    eax = t17;
    ecx = t18;
    edx = t19;
    x0 = d16;
    COW_AT(1004a3e5)
    wr32(sp0 - 0x28u, eax);
    d20 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, x0 / fr(g, (double)(int32_t)eax + (double)rdf32(self + 0xd0u))));
    wrf32(sp0 - 0x28u, (float)(double)(float)d20);
    if ((cow_fsw(g, d20, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u) == 0u)
    {
    COW_AT(1004a40e)
        wr32(sp0 - 0x28u, 0x3f800000u);
    }
    COW_AT(1004a416)
    if (rd32(ebx + 4u) == 0u)
    {
        eax = rd32(ebx + 4u);
    COW_AT(1004a45b)
        wr32(sp0 - 0x38u, 0u);
    }
    else
    {
        eax = rd32(ebx + 4u);
    COW_AT(1004a41d)
        if ((rd8(ebx + 0xcu) & 0xfu) == 0u)
        {
    COW_AT(1004a43f)
            if (eax == 0u)
            {
    COW_AT(1004a447)
                eax = 0u;
            }
            else
            {
    COW_AT(1004a443)
                eax = rd32(eax);
            }
    COW_AT(1004a449)
            t26 = rd32(sp0 - 0x28u);
            wr32(sp0 - 0x60u, t26);
            g->edx = t26;
            g->esp = sp0 - 0x5cu;
            t27 = cow_call_regs(g, COW_IMG(0x10054500u), eax, eax, g->edx, 0, 1, t26);
            t28 = g->ecx;
            t29 = g->edx;
            d30 = cow_take_float(g);
            eax = t27;
            ecx = t28;
            edx = t29;
            x0 = d30;
    COW_AT(1004a455)
            wrf32(sp0 - 0x38u, (float)(double)(float)x0);
        }
        else
        {
    COW_AT(1004a423)
            if (eax == 0u)
            {
    COW_AT(1004a42b)
                eax = 0u;
            }
            else
            {
    COW_AT(1004a427)
                eax = rd32(eax);
            }
    COW_AT(1004a42d)
            t21 = rd32(sp0 - 0x28u);
            wr32(sp0 - 0x60u, t21);
            g->edx = edx;
            g->esp = sp0 - 0x5cu;
            t22 = cow_call_regs(g, COW_IMG(0x100547a0u), eax, eax, g->edx, 0, 1, t21);
            t23 = g->ecx;
            t24 = g->edx;
            d25 = cow_take_float(g);
            eax = t22;
            ecx = t23;
            edx = t24;
            x0 = d25;
    COW_AT(1004a439)
            wrf32(sp0 - 0x38u, (float)(double)(float)x0);
        }
    }
    COW_AT(1004a463)
    g->ebx = ebx;
    d31 = rdf64(COW_IMG(0x1032abc8u));
    d32 = (double)rdf32(sp0 - 0x38u);
    fpush(g, d31);
    g->esp = sp0 - 0x5cu;
    t33 = cow_call_regs(g, COW_IMG(0x103138fau), eax, ecx, g->edx, 1, 0);
    eax = t33;
    x0 = d32;
    COW_AT(1004a472)
    d34 = fr(g, x0 * (double)rdf32(COW_IMG(0x1032a3b8u)));
    wrf32(sp0 - 0x38u, (float)(double)(float)d34);
    if ((cow_fsw(g, d34, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d34, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        loc_38_f = (double)(float)d34;
    }
    else
    {
        eax = cow_fsw(g, d34, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        loc_38_f = (double)(float)d34;
    COW_AT(1004a48b)
        d35 = fr(g, loc_38_f - (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(sp0 - 0x38u, (float)(double)(float)d35);
        loc_38_f = (double)(float)d35;
    }
    COW_AT(1004a499)
    if (loc_38_f < (double)rdf32(COW_IMG(0x10329d28u)))
    {
    COW_AT(1004a4aa)
        d36 = fr(g, loc_38_f + (double)rdf32(COW_IMG(0x10329d2cu)));
        wrf32(sp0 - 0x38u, (float)(double)(float)d36);
        loc_38_f = (double)(float)d36;
    }
    COW_AT(1004a4b8)
    t37 = rd32(rd32(self + 0xa4u) + 0x38u);
    t38 = rd32(rd32(self + 0xa4u) + 0x34u);
    t39 = rd32(rd32(self + 0xa4u) + 0x30u);
    wr32(rd32(self + 0xa4u) + 0x38u, 0u);
    wr32(rd32(self + 0xa4u) + 0x34u, 0u);
    wr32(rd32(self + 0xa4u) + 0x30u, 0u);
    wr32(sp0 - 0x60u, cow_f2bits(loc_38_f));
    t40 = rd32(sp0 - 0x44u);
    wr32(sp0 - 0x64u, t40);
    g->esp = sp0 - 0x5cu;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x68u), rd32(COW_IMG(0x1047cf7cu)), 2, t40, cow_f2bits(loc_38_f));
    ebx = t37;
    ebp = t38;
    edi = t39;
    COW_AT(1004a4f6)
    t41 = rd32(sp0 - 0x44u);
    wr32(sp0 - 0x60u, t41);
    t42 = rd32(self + 0xa4u);
    wr32(sp0 - 0x64u, t42);
    wr32(sp0 - 0x68u, t42);
    g->esp = sp0 - 0x5cu;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x24u), rd32(COW_IMG(0x1047cf7cu)), 3, t42, t42, t41);
    COW_AT(1004a514)
    t43 = rd32(self + 0xa4u);
    wr32(t43 + 0x30u, edi);
    t44 = rd32(sp0 - 0x48u);
    wr32(t43 + 0x34u, ebp);
    t45 = rd32(sp0 - 0x44u);
    wr32(t43 + 0x38u, ebx);
    edx = t43 + 0x30u;
    ebx = rd32(sp0 - 0x34u);
    ebp = t45;
    edi = t44;
    loc_50 = rd32(sp0 - 0x50u);
    loc_54 = rd32(sp0 - 0x54u);
    loc_58 = rd32(sp0 - 0x58u);
    loc_5c = rd32(sp0 - 0x5cu);
    loc_44 = rd32(sp0 - 0x44u);
    goto L_1004a55d;
L_1004a533: ;
    COW_AT(1004a533)
    t8 = (rd32(self + 0xd8u) & 0xffff00ffu) | (uint32_t)(uint8_t)(rd32(self + 0xd8u) >> 8u | 2u) << 8u;
    t9 = rd32(self + 0xa4u);
    wr32(self + 0xd8u, t8);
    if (t9 == 0u)
    {
        edx = t8;
    }
    else
    {
        eax = t9;
        edx = t8;
    COW_AT(1004a54c)
        wr32(sp0 - 0x60u, eax);
        wr32(sp0 - 0x64u, ebx);
        g->edx = edx;
        g->esp = sp0 - 0x5cu;
        cow_thiscall(g, COW_IMG(0x10053c80u), self, 2, ebx, eax);
        t10 = g->edx;
        edx = t10;
    COW_AT(1004a555)
        loc_50 = rd32(sp0 - 0x50u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_44 = rd32(sp0 - 0x44u);
    }
    goto L_1004a55d;
L_1004a557: ;
    COW_AT(1004a557)
    edi = rd32(sp0 - 0x48u);
L_1004a55b: ;
    COW_AT(1004a55b)
    loc_50 = rd32(sp0 - 0x50u);
    loc_54 = rd32(sp0 - 0x54u);
    loc_58 = rd32(sp0 - 0x58u);
    loc_5c = rd32(sp0 - 0x5cu);
    loc_44 = rd32(sp0 - 0x44u);
    goto L_1004a55d;
L_1004a57a: ;
    COW_AT(1004a57a)
L_1004a57c: ;
    COW_AT(1004a57c)
    edi = rd32(sp0 - 0x48u);
    loc_50 = rd32(sp0 - 0x50u);
    loc_54 = rd32(sp0 - 0x54u);
    loc_58 = rd32(sp0 - 0x58u);
    loc_5c = rd32(sp0 - 0x5cu);
    loc_44 = rd32(sp0 - 0x44u);
    goto L_1004a55d;
L_1004a582: ;
    COW_AT(1004a582)
    wr8(sp0 - 0x49u, 1u);
    wr32(eax + 0xa90u, ecx - 1u);
    wr32(eax + ecx * 4u + 0xa0cu, edi);
    loc_50 = rd32(sp0 - 0x50u);
    loc_54 = rd32(sp0 - 0x54u);
    loc_58 = rd32(sp0 - 0x58u);
    loc_5c = rd32(sp0 - 0x5cu);
    loc_44 = rd32(sp0 - 0x44u);
    goto L_1004a595;
L_1004a5f7: ;
    COW_AT(1004a5f7)
    g->eax = eax;
    g->edx = edx;
    t404 = rd32(self + 0xd8u);
    g->esp = sp0 - 0x5cu;
    t405 = cow_thiscall(g, COW_IMG(0x100539e0u), self, 0);
    t406 = g->ecx;
    t407 = g->edx;
    eax = t405;
    ecx = t406;
    edx = t407;
    ebp = t404 >> 0xbu & 1u;
    COW_AT(1004a60a)
    if ((uint8_t)eax == 0u)
    {
    COW_AT(1004a62d)
        d409 = (double)(float)(double)rdf32(rd32(COW_IMG(0x1047bfa8u)) + 0xeb0u);
        wrf32(sp0 - 0x24u, (float)d409);
        d410 = (double)rdf32(rd32(COW_IMG(0x1047bfa8u)) + 0xeb0u);
        if ((cow_fsw(g, d410, (double)rdf32(COW_IMG(0x10329cecu)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d410, (double)rdf32(COW_IMG(0x10329cecu)), 0u) & 0x4100u;
            edx = rd32(COW_IMG(0x1047bfa8u));
        }
        else
        {
            eax = cow_fsw(g, d410, (double)rdf32(COW_IMG(0x10329cecu)), 0u) & 0x4100u;
            edx = rd32(COW_IMG(0x1047bfa8u));
    COW_AT(1004a64c)
            wr32(sp0 - 0x24u, 0x41200000u);
        }
    COW_AT(1004a654)
        g->esp = sp0 - 0x5cu;
        t411 = cow_call_regs(g, COW_IMG(0x10002d80u), eax, g->ecx, g->edx, 1, 0);
        d412 = cow_take_float(g);
        eax = t411;
        x0 = d412;
    COW_AT(1004a659)
        wrf32(sp0 - 0x2cu, (float)(double)(float)x0);
        if ((rd8(self + 0xdeu) & 2u) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0xdeu);
            loc_2c_f = (double)(float)x0;
    COW_AT(1004a678)
            x0 = (double)rdf32(sp0 - 0x24u);
        }
        else
        {
            loc_2c_f = (double)(float)x0;
    COW_AT(1004a667)
            eax = rd32(COW_IMG(0x1047bfa8u));
            x0 = fr(g, (double)rdf32(rd32(COW_IMG(0x1047bfa8u)) + 0xeb0u) * loc_2c_f);
        }
    COW_AT(1004a67c)
        d413 = fr(g, (double)rdf32(self + 0xccu) - x0);
        wrf32(self + 0xccu, (float)d413);
        if (d413 < (double)rdf32(COW_IMG(0x103295d8u)))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d413, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(1004a699)
            t414 = rd32(self + 0xd0u);
            wr32(sp0 - 0x28u, t414);
            ecx = t414;
            ebx = rd32(sp0 + 4u);
L_1004a6a7: ;
    COW_AT(1004a6a7)
            if (rd8(sp0 - 0x49u) != 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(sp0 - 0x49u);
                loc_28 = rd32(sp0 - 0x28u);
            }
            else
            {
                eax = (eax & 0xffffff00u) | rd8(sp0 - 0x49u);
                loc_28 = rd32(sp0 - 0x28u);
    COW_AT(1004a6af)
                if (ebp == 0u) goto L_1004a6be;
    COW_AT(1004a6b3)
                if ((rd32(self + 0xd8u) >> 8u & 8u) == 0u)
                {
                    eax = rd32(self + 0xd8u);
                    goto L_1004a6da;
                }
                eax = rd32(self + 0xd8u);
L_1004a6be: ;
    COW_AT(1004a6be)
                if ((rd32(self + 0xd8u) & 0x20000000u) != 0x20000000u)
                {
                    edx = rd32(self + 0xd8u) & 0x20000000u;
    COW_AT(1004a750)
                    edi = 0u;
L_1004a752: ;
    COW_AT(1004a752)
                    if (!(rd8(self + 0xdeu) & 1u))
                    {
    COW_AT(1004a77a)
                        t418 = rd32(self + 0xd8u) & 0x1ffu;
                        wr32(sp0 + 4u, t418);
                        ecx = t418;
                        x0 = (double)(int32_t)rd32(sp0 + 4u);
                    }
                    else
                    {
    COW_AT(1004a75b)
                        t417 = rd32(self + 0xd8u) & 0x1ffu;
                        wr32(sp0 + 4u, t417);
                        eax = t417;
                        x0 = fr(g, fr(g, (double)(int32_t)rd32(sp0 + 4u) * loc_2c_f) * (double)rdf32(COW_IMG(0x1032b15cu)));
                    }
    COW_AT(1004a78e)
                    g->ecx = ecx;
                    g->edx = edx;
                    fpush(g, x0);
                    g->esp = sp0 - 0x5cu;
                    t419 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                    t420 = g->ecx;
                    t421 = g->edx;
                    eax = t419;
                    ecx = t420;
                    edx = t421;
    COW_AT(1004a793)
                    if ((int32_t)edi > (int32_t)eax)
                    {
                        loc_2c_f = (double)rdf32(sp0 - 0x2cu);
                        loc_28 = rd32(sp0 - 0x28u);
                        goto L_1004a6da;
                    }
    COW_AT(1004a79b)
                    wr32(sp0 - 0x60u, ebx);
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x5cu;
                    t422 = cow_thiscall(g, COW_IMG(0x1004e8d0u), self, 1, ebx);
                    t423 = g->ecx;
                    t424 = g->edx;
                    eax = t422;
                    ecx = t423;
                    edx = t424;
    COW_AT(1004a7a3)
                    edi = edi + 1u;
                    loc_2c_f = (double)rdf32(sp0 - 0x2cu);
                    loc_28 = rd32(sp0 - 0x28u);
                    goto L_1004a752;
                }
                else
                {
                    edx = rd32(self + 0xd8u) & 0x20000000u;
    COW_AT(1004a6d2)
                    wr32(sp0 - 0x60u, ebx);
                    g->eax = eax;
                    g->esp = sp0 - 0x5cu;
                    t415 = cow_thiscall(g, COW_IMG(0x1004e8d0u), self, 1, ebx);
                    t416 = g->ecx;
                    eax = t415;
                    ecx = t416;
                    loc_2c_f = (double)rdf32(sp0 - 0x2cu);
                    loc_28 = rd32(sp0 - 0x28u);
                }
            }
L_1004a6da: ;
    COW_AT(1004a6da)
            t425 = (uint32_t)(int16_t)rd16(self + 0xd4u);
            wr32(sp0 - 0x60u, t425);
            g->eax = eax;
            g->esp = sp0 - 0x54u;
            t426 = cow_cdecl(g, COW_IMG(0x1006bf60u), 3, t425, rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u));
            eax = t426;
    COW_AT(1004a6e7)
            t427 = eax + (uint32_t)(int16_t)rd16(self + 0xd6u) + 1u;
            t428 = rd16(self + 0xd6u);
            wr32(sp0 + 4u, t427);
            t429 = rd32(sp0 + 4u);
            wrf32(sp0 + 4u, (float)(double)(int32_t)t429);
            d430 = fr(g, (double)(int32_t)t429 + (double)rdf32(self + 0xccu));
            wrf32(self + 0xccu, (float)d430);
            d431 = fr(g, (double)rdf32(sp0 - 0x28u) - (double)rdf32(sp0 + 4u));
            wrf32(sp0 - 0x28u, (float)(double)(float)d431);
            d432 = (double)rdf32(self + 0xd0u);
            if (d432 == (double)rdf32(COW_IMG(0x103295d8u)))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d432, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                ecx = (uint32_t)(int16_t)t428;
                loc_28_f = (double)(float)d431;
                x0 = d430;
                goto L_1004a73d;
            }
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d432, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
            ecx = (uint32_t)(int16_t)t428;
            loc_28_f = (double)(float)d431;
            x0 = d430;
    COW_AT(1004a72c)
            d433 = (double)rdf32(self + 0xc8u);
            if (loc_28_f <= d433) goto L_1004a7a6;
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_28_f, d433, 1u);
L_1004a73d: ;
    COW_AT(1004a73d)
            if (x0 < (double)rdf32(COW_IMG(0x103295d8u)))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                loc_2c_f = (double)rdf32(sp0 - 0x2cu);
                goto L_1004a6a7;
            }
    COW_AT(1004a74e)
        }
    }
    else
    {
    COW_AT(1004a60e)
        if (rd32(self + 0x9cu) == 0u)
        {
            eax = rd32(self + 0x9cu);
    COW_AT(1004a61c)
            t408 = rd32(sp0 + 4u);
            wr32(sp0 - 0x60u, t408);
            g->esp = sp0 - 0x5cu;
            cow_thiscall(g, COW_IMG(0x1004e8d0u), self, 1, t408);
    COW_AT(1004a628)
        }
    }
L_1004a7a8: ;
    COW_AT(1004a7a8)
    t434 = rd32(COW_IMG(0x1047bfa8u));
    d435 = fr(g, (double)rdf32(rd32(COW_IMG(0x1047bfa8u)) + 0xeb0u) + (double)rdf32(self + 0xc8u));
    wrf32(self + 0xc8u, (float)d435);
    d436 = (double)rdf32(self + 0xd0u);
    if (d436 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (t434 & 0xffff0000u) | (uint16_t)cow_fsw(g, d436, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = d435;
        goto L_1004a7e5;
    }
    eax = (t434 & 0xffff0000u) | (uint16_t)cow_fsw(g, d436, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
    x0 = d435;
    COW_AT(1004a7d2)
    d437 = (double)rdf32(self + 0xd0u);
    if ((cow_fsw(g, x0, d437, 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, x0, d437, 0u) & 0x100u;
        goto L_1004a7e7;
    }
    eax = cow_fsw(g, x0, d437, 0u) & 0x100u;
    COW_AT(1004a7e1)
    eax = (eax & 0xffffff00u) | 1u;
L_1004a7e9: ;
    COW_AT(1004a7e9)
    t438 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
    t439 = rd32(COW_IMG(0x1047cf7cu));
    t440 = rd32(sp0 - 0x44u);
    t441 = rd32(sp0 - 0x5cu);
    wr32(t439 + 0xa90u, t438);
    wr32(t438 * 4u + t439 + 0xa10u, t440);
    g->ebx = rd32(sp0 - 0x50u);
    g->esi = rd32(sp0 - 0x58u);
    g->edi = t441;
    g->ebp = rd32(sp0 - 0x54u);
    g->edx = t438;
    return eax;
L_1004a7a6: ;
    COW_AT(1004a7a6)
    goto L_1004a7a8;
L_1004a7e5: ;
    COW_AT(1004a7e5)
L_1004a7e7: ;
    COW_AT(1004a7e7)
    eax = eax & 0xffffff00u;
    goto L_1004a7e9;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100496f0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10049707u:
    {
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x5cu);
        in_esi = rd32(sp0 - 0x58u);
        in_ebp = rd32(sp0 - 0x54u);
        in_ebx = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049713u:
    {
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x5cu);
        in_esi = rd32(sp0 - 0x58u);
        in_ebp = rd32(sp0 - 0x54u);
        in_ebx = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004972eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x5cu);
        in_esi = rd32(sp0 - 0x58u);
        in_ebp = rd32(sp0 - 0x54u);
        in_ebx = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049759u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x5cu);
        in_esi = rd32(sp0 - 0x58u);
        in_ebp = rd32(sp0 - 0x54u);
        in_ebx = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049761u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x5cu);
        in_esi = rd32(sp0 - 0x58u);
        in_ebp = rd32(sp0 - 0x54u);
        in_ebx = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049790u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_34;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x5cu);
        in_esi = rd32(sp0 - 0x58u);
        in_ebp = rd32(sp0 - 0x54u);
        in_ebx = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049794u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x100497a7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x100497aeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x100497bau:
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
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x60u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100497c4u:
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
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x60u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100497dau:
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
        g->esp = sp0 - 0x5cu;
        g->edi = sp0 - 0x18u;
        wr32(sp0 - 0x68u, sp0 - 0xcu);
        wr32(sp0 - 0x60u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100497e0u:
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
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x60u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100497f8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x60u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100497fdu:
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
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x60u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x10049833u:
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
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x64u, sp0 - 0x18u);
        wr32(sp0 - 0x60u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x10049849u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_34_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_34_f = rdf32(sp0 - 0x34u);
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x64u, sp0 - 0x18u);
        wr32(sp0 - 0x60u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x10049856u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_60;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x64u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x10049861u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_34_f;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_34_f = rdf32(sp0 - 0x34u);
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x64u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x10049866u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_34_f;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_34_f = rdf32(sp0 - 0x34u);
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x64u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x10049874u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_34_f;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_34_f = rdf32(sp0 - 0x34u);
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x64u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1004987bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_34_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_34_f = rdf32(sp0 - 0x34u);
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x64u, sp0 - 0x18u);
        wr32(sp0 - 0x60u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1004988bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_34_f;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_34_f = rdf32(sp0 - 0x34u);
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x64u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x10049892u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_34_f;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_34_f = rdf32(sp0 - 0x34u);
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x64u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x10049894u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_34_f;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_34_f = rdf32(sp0 - 0x34u);
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x64u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100498a4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_34_f;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_34_f = rdf32(sp0 - 0x34u);
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x64u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100498aeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_34_f;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_34_f = rdf32(sp0 - 0x34u);
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x64u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100498b7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x64u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100498bcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x100498dcu:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049917u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004991bu:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049920u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049924u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049928u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004992au:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049932u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049944u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049948u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004994cu:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004994eu:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049956u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049969u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004996du:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049971u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049973u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004997bu:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049984u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004998eu:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004999cu:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x100499b6u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x100499c0u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x100499c7u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x100499d8u:
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
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x100499dfu:
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
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x100499f9u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049a10u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049a25u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049a30u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049a3du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049a45u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049a52u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049a54u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049a63u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049a65u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049a6du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049a71u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049a73u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049a80u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049a93u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049aa0u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049aadu:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049ab5u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049abau:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049ad4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049ae9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049aefu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049af3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049b01u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049b03u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049b11u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049b13u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049b17u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049b1bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049b1du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049b29u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049b38u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049b45u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049b52u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049b5au:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049b5fu:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049b74u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_28;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049b9au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_28;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049ba9u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049babu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049bbau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049bc1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049bc7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049bcbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049bd5u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049bdcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049be6u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049bedu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049bf1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049bfbu:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049c02u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049c0cu:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049c13u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049c20u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049c27u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049c2du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049c31u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049c3bu:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049c42u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049c4cu:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049c53u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049c57u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049c61u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049c68u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049c72u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049c79u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049c86u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049c8du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049c93u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049c97u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049ca1u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049ca8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049cb2u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049cb9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049cbdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049cc7u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049cceu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049cd8u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049cdfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049cecu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049cf3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049cf9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049cfdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049d07u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049d0du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049d17u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049d1du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049d21u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049d2bu:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049d31u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049d3bu:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049d41u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049d49u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049d52u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049d63u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049d78u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049d7eu:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049d8bu:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049d91u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049d99u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049da5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049dacu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049db2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049db6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049dc0u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049dc6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049dd0u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049dd6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049ddau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049de4u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049deau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049df4u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049dfau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049e02u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049e0bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049e1cu:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049e31u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049e37u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049e44u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049e4au:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049e52u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049e5eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049e65u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049e6bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049e6fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049e79u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049e7bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049e85u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049e87u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049e8bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049e95u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049e97u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049ea1u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049ea3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049ea9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049eabu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x10049eb2u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049ebau:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049ec2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049ec9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049ecfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049ed3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049eddu:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049edfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049ee9u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049eebu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049eefu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049ef9u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049efbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049f05u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049f07u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049f0du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049f0fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x10049f16u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049f1eu:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049f26u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049f2du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049f33u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049f37u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049f41u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049f43u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049f4du:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049f4fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049f53u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049f5du:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049f5fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049f69u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049f6bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049f71u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049f7au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_60;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049f82u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_60;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049f8au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049f91u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049f97u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049f9bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049fa5u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049fa7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049fb1u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049fb3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049fb7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049fc1u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049fc3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049fcdu:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049fcfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049fd5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049fdeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_60;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049fe6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_60;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049feeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049ff5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049ffbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10049fffu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a009u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a00bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a015u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a017u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a01bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a025u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a027u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a031u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a033u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a039u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a042u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_60;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a04au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_60;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a052u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a059u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a05fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a063u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a06du:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a06fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a079u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a07bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a07fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a089u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a08bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a095u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a097u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a09du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a0a6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_60;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a0aeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_60;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a0b6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a0bdu:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a0c5u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a0ccu:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a0e5u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a10eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_28_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_28_f = rdf32(sp0 - 0x28u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a116u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a11du:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a123u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a127u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a12bu:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a12du:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a139u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a13fu:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a143u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a147u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a149u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a155u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a15bu:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a163u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a172u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a18bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_40_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_40_f = rdf32(sp0 - 0x40u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a199u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_40_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_40_f = rdf32(sp0 - 0x40u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a1aau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_40_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_40_f = rdf32(sp0 - 0x40u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a1b8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_40_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_40_f = rdf32(sp0 - 0x40u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a1f6u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a214u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a236u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a23du:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a245u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a24cu:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a265u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a28eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_28_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_28_f = rdf32(sp0 - 0x28u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a296u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a29du:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a2a3u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a2a7u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a2abu:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a2adu:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a2b9u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a2bfu:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a2c3u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a2c7u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a2c9u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a2d5u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a2dbu:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a2e3u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a2f2u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a30bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_3c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a319u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_3c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a32au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_3c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a338u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_3c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a376u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a394u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a3b6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a3bdu:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a3c5u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a3ccu:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a3e5u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a40eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_28_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_28_f = rdf32(sp0 - 0x28u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a416u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a41du:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a423u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a427u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a42bu:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a42du:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a439u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a43fu:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a443u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a447u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a449u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a455u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a45bu:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a463u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a472u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a48bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_38_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_38_f = rdf32(sp0 - 0x38u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a499u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_38_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_38_f = rdf32(sp0 - 0x38u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a4aau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_38_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_38_f = rdf32(sp0 - 0x38u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a4b8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_38_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_38_f = rdf32(sp0 - 0x38u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a4f6u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a514u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a533u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a54cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a555u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a557u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_28;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a55bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_60;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_28 = rd32(sp0 - 0x28u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a55du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a563u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a578u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a57au:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a57cu:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a582u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a595u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a5a8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a5bbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a5f7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a60au:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a60eu:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a61cu:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a628u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a62du:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a64cu:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a654u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a659u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a667u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_2c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c_f = rdf32(sp0 - 0x2cu);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a678u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_2c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c_f = rdf32(sp0 - 0x2cu);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a67cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_2c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c_f = rdf32(sp0 - 0x2cu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a699u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_2c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c_f = rdf32(sp0 - 0x2cu);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a6a7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_2c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c_f = rdf32(sp0 - 0x2cu);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a6afu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_28;
        double loc_2c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a6b3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_28;
        double loc_2c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a6beu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_28;
        double loc_2c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a6d2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_28;
        double loc_2c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a6dau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_28;
        double loc_2c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a6e7u:
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
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1004a72cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_28_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_28_f = rdf32(sp0 - 0x28u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a73du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_28_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_28_f = rdf32(sp0 - 0x28u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a74eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_28_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_28_f = rdf32(sp0 - 0x28u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a750u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_28;
        double loc_2c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a752u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_28;
        double loc_2c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a75bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_28;
        double loc_2c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a77au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_28;
        double loc_2c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a78eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_28;
        double loc_2c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a793u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a79bu:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a7a3u:
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
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a7a6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_28_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_28_f = rdf32(sp0 - 0x28u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a7a8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_28_f;
        double loc_2c_f;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a7d2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_28_f;
        double loc_2c_f;
        uint32_t loc_60;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a7e1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_28_f;
        double loc_2c_f;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a7e5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_28_f;
        double loc_2c_f;
        uint32_t loc_60;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a7e7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_28_f;
        double loc_2c_f;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x1004a7e9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_28_f;
        double loc_2c_f;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100496f0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100496f0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
