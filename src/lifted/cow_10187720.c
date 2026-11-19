/* f_0x10187720 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10187720(Guest* g)
{
    double d1;
    double d148;
    double d187;
    double d194;
    double d215;
    double d223;
    double d30;
    double d35;
    double d36;
    double d43;
    double d47;
    double d51;
    double d55;
    double d56;
    double d59;
    double d67;
    double d71;
    double d75;
    double d79;
    double d80;
    double d81;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    double loc_b8_f;
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
    uint32_t t188;
    uint32_t t189;
    uint32_t t19;
    uint32_t t190;
    uint32_t t191;
    uint32_t t192;
    uint32_t t193;
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
    uint32_t t216;
    uint32_t t217;
    uint32_t t218;
    uint32_t t219;
    uint32_t t22;
    uint32_t t220;
    uint32_t t221;
    uint32_t t222;
    uint32_t t224;
    uint32_t t225;
    uint32_t t226;
    uint32_t t227;
    uint32_t t228;
    uint32_t t229;
    uint32_t t23;
    uint32_t t230;
    uint32_t t231;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t57;
    uint32_t t58;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t66;
    uint32_t t68;
    uint32_t t69;
    uint32_t t7;
    uint32_t t70;
    uint32_t t72;
    uint32_t t73;
    uint32_t t74;
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
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
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 268u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1018773au: eax = g->eax; ecx = g->ecx; in_ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0xc4u); in_esi = rd32(sp0 - 0xc0u); in_ebp = rd32(sp0 - 0xbcu); g->ebp = rd32(sp0 - 0xbcu); g->edi = rd32(sp0 - 0xc4u); g->esi = rd32(sp0 - 0xc0u); goto E_1018773a;
    case 0x10187744u: eax = g->eax; ecx = g->ecx; in_ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0xc4u); in_esi = rd32(sp0 - 0xc0u); in_ebp = rd32(sp0 - 0xbcu); g->ebp = rd32(sp0 - 0xbcu); g->edi = rd32(sp0 - 0xc4u); g->esi = rd32(sp0 - 0xc0u); goto E_10187744;
    case 0x1018774bu: eax = g->eax; ecx = g->ecx; in_ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0xc4u); in_esi = rd32(sp0 - 0xc0u); in_ebp = rd32(sp0 - 0xbcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 0xbcu); g->edi = rd32(sp0 - 0xc4u); g->esi = rd32(sp0 - 0xc0u); goto E_1018774b;
    case 0x10187767u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0xc4u); in_esi = rd32(sp0 - 0xc0u); in_ebp = rd32(sp0 - 0xbcu); loc_b8_f = rdf32(sp0 - 0xb8u); g->ebp = rd32(sp0 - 0xbcu); g->edi = rd32(sp0 - 0xc4u); g->esi = rd32(sp0 - 0xc0u); goto E_10187767;
    case 0x1018786fu: eax = g->eax; ecx = g->ecx; in_ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0xc4u); in_esi = rd32(sp0 - 0xc0u); in_ebp = rd32(sp0 - 0xbcu); loc_b8_f = rdf32(sp0 - 0xb8u); g->ebp = rd32(sp0 - 0xbcu); g->edi = rd32(sp0 - 0xc4u); g->esi = rd32(sp0 - 0xc0u); goto E_1018786f;
    case 0x1018787cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_1018787c;
    case 0x10187891u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10187891;
    case 0x1018789du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1018789d;
    case 0x101878c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_101878c7;
    case 0x101878fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_101878fa;
    case 0x10187907u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10187907;
    case 0x1018790cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1018790c;
    case 0x10187923u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10187923;
    case 0x1018793du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1018793d;
    case 0x101879b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_101879b6;
    case 0x101879bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_101879bc;
    case 0x101879c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_101879c9;
    case 0x101879cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_101879cf;
    case 0x101879fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_101879fc;
    case 0x10187a09u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10187a09;
    case 0x10187a0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10187a0e;
    case 0x10187a24u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10187a24;
    case 0x10187a3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10187a3e;
    case 0x10187abau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10187aba;
    case 0x10187ac5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10187ac5;
    case 0x10187bb0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10187bb0;
    case 0x10187c9au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10187c9a;
    case 0x10187cb1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10187cb1;
    case 0x10187cb8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10187cb8;
    case 0x10187d22u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10187d22;
    case 0x10187d8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10187d8b;
    case 0x10187da9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10187da9;
    case 0x10187df3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10187df3;
    case 0x10187e3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10187e3e;
    case 0x10187e54u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10187e54;
    case 0x10187e6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10187e6c;
    case 0x10187e7du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10187e7d;
    case 0x10187e8eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10187e8e;
    case 0x10187e9fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10187e9f;
    case 0x10187eb3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10187eb3;
    case 0x10187ec4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10187ec4;
    case 0x10187eccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10187ecc;
    case 0x10187eddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10187edd;
    case 0x10187eecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10187eec;
    case 0x10187efbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10187efb;
    case 0x10187f06u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10187f06;
    case 0x10187f0cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10187f0c;
    case 0x10187f1au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10187f1a;
    case 0x10187f2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10187f2f;
    case 0x10187f3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10187f3e;
    case 0x10187f49u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10187f49;
    case 0x10187f61u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10187f61;
    case 0x10187f63u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10187f63;
    case 0x10187f70u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10187f70;
    case 0x10187f81u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10187f81;
    case 0x10187f90u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10187f90;
    case 0x10187f9bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10187f9b;
    case 0x10187fa0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10187fa0;
    case 0x10187fb1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10187fb1;
    case 0x10187fb4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10187fb4;
    case 0x10187fc5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10187fc5;
    case 0x10187fd4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10187fd4;
    case 0x10187fe3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10187fe3;
    case 0x10187feeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10187fee;
    case 0x10187ff4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10187ff4;
    case 0x10188002u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10188002;
    case 0x10188017u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10188017;
    case 0x10188026u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10188026;
    case 0x10188031u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10188031;
    case 0x10188049u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10188049;
    case 0x1018804bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1018804b;
    case 0x1018805eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi - 0x19cu; goto E_1018805e;
    case 0x10188069u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi - 0x19cu; goto E_10188069;
    case 0x10188078u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi - 0x19cu; goto E_10188078;
    case 0x10188083u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10188083;
    case 0x10188088u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi - 0x19cu; goto E_10188088;
    case 0x10188093u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10188093;
    case 0x10188096u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10188096;
    case 0x101880a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_101880a2;
    default: break;
    }
#endif

    COW_AT(10187720)
    wr32(sp0 - 0xbcu, in_ebp);
    wr32(sp0 - 0xc0u, in_esi);
    wr32(sp0 - 0xc4u, in_edi);
    if ((int32_t)rd32(rd32(COW_IMG(0x1065cb04u)) + 0x1c8u) < 0)
    {
        eax = rd32(rd32(COW_IMG(0x1065cb04u)) + 0x1c8u);
    COW_AT(10187744)
        x0 = (double)(int32_t)arg1;
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x1065cb04u)) + 0x1c8u);
    COW_AT(1018773a)
        wr32(sp0 - 0xb8u, eax);
        x0 = (double)(int32_t)eax;
    }
    COW_AT(1018774b)
    d1 = fr(g, fr(g, x0 * (double)rdf32(COW_IMG(0x103367d0u))) * (double)rdf32(COW_IMG(0x10329d2cu)));
    wrf32(sp0 - 0xb8u, (float)(double)(float)d1);
    if (!(rd8(rd32(self + 0x18u)) & 1u))
    {
        loc_b8_f = (double)(float)d1;
        goto L_1018786f;
    }
    COW_AT(10187767)
    t2 = rd32(self + 0xa4u);
    t3 = rd32(self + 0xa8u);
    t4 = rd32(self + 0xacu);
    wr32(self + 0x14cu, t2);
    t5 = rd32(self + 0xb0u);
    wr32(self + 0x150u, t3);
    t6 = rd32(self + 0xb4u);
    wr32(self + 0x154u, t4);
    t7 = rd32(self + 0xb8u);
    wr32(self + 0x158u, t5);
    t8 = rd32(self + 0xbcu);
    wr32(self + 0x15cu, t6);
    t9 = rd32(self + 0xc0u);
    wr32(self + 0x160u, t7);
    t10 = rd32(self + 0xe4u);
    wr32(self + 0x164u, t8);
    t11 = rd32(self + 0xe8u);
    wr32(self + 0x168u, t9);
    t12 = rd32(self + 0xecu);
    wr32(self + 0x16cu, t10);
    t13 = rd32(self + 0xf0u);
    wr32(self + 0x170u, t11);
    t14 = rd32(self + 0x24u);
    wr32(self + 0x174u, t12);
    t15 = rd32(self + 0x28u);
    wr32(self + 0x178u, t13);
    t16 = rd32(self + 0x2cu);
    wr32(self + 0x17cu, t14);
    t17 = rd32(self + 0x30u);
    wr32(self + 0x180u, t15);
    t18 = rd32(self + 0x34u);
    wr32(self + 0x184u, t16);
    t19 = rd32(self + 0x38u);
    wr32(self + 0x188u, t17);
    t20 = rd32(self + 0x3cu);
    wr32(self + 0x18cu, t18);
    t21 = rd32(self + 0x40u);
    wr32(self + 0x190u, t19);
    t22 = rd32(self + 0x64u);
    wr32(self + 0x194u, t20);
    t23 = rd32(self + 0x68u);
    wr32(self + 0x198u, t21);
    t24 = rd32(self + 0x6cu);
    wr32(self + 0x19cu, t22);
    t25 = rd32(self + 0x70u);
    wr32(self + 0x1a0u, t23);
    wr32(self + 0x1a4u, t24);
    wr32(self + 0x1a8u, t25);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return;
L_1018786f: ;
    COW_AT(1018786f)
    wr32(sp0 - 0xc8u, in_ebx);
    g->eax = eax;
    g->esp = sp0 - 0xc8u;
    t26 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t27 = g->ecx;
    eax = t26;
    ecx = t27;
    COW_AT(1018787c)
    if (rd16(rd32(COW_IMG(0x1065cb04u)) + 0x1ccu) == 0u)
    {
        edx = rd32(COW_IMG(0x1065cb04u));
        ebx = (in_ebx & 0xffffff00u) | rd16(rd32(COW_IMG(0x1065cb04u)) + 0x1ccu) != 0u;
    }
    else
    {
        edx = rd32(COW_IMG(0x1065cb04u));
        ebx = (in_ebx & 0xffffff00u) | rd16(rd32(COW_IMG(0x1065cb04u)) + 0x1ccu) != 0u;
    COW_AT(10187891)
        g->edx = edx;
        g->esp = sp0 - 0xc8u;
        cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x40u, 0);
        t28 = g->edx;
        edx = t28;
    COW_AT(1018789d)
        t29 = (uint32_t)(int16_t)rd16(rd32(COW_IMG(0x1065cb04u)) + 0x1ccu);
        wr32(sp0 - 0x54u, t29);
        wr32(sp0 - 0xccu, t29);
        d30 = fr(g, (double)(int32_t)t29 * (double)rdf32(COW_IMG(0x1032a9f4u)));
        wrf32(sp0 - 0xccu, (float)(double)(float)d30);
        g->eax = rd32(COW_IMG(0x1065cb04u));
        g->edx = edx;
        t31 = rd32(COW_IMG(0x1065cb04u));
        g->esp = sp0 - 0xc8u;
        t32 = cow_thiscall(g, COW_IMG(0x10027b80u), sp0 - 0x40u, 1, cow_f2bits((double)(float)d30));
        t33 = g->ecx;
        t34 = g->edx;
        eax = t32;
        ecx = t33;
        edx = t34;
    }
    COW_AT(101878c7)
    d35 = fr(g, sin((double)rdf32(sp0 - 0xb8u)));
    wr32(self + 0xccu, 0u);
    wr32(self + 0xd0u, 0x3f800000u);
    wrf32(self + 0xc4u, (float)d35);
    d36 = fr(g, cos((double)rdf32(sp0 - 0xb8u)));
    wrf32(self + 0xc8u, (float)d36);
    if ((uint8_t)ebx != 0u)
    {
    COW_AT(101878fa)
        wr32(sp0 - 0xccu, self + 0xc4u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xc8u;
        t37 = cow_thiscall(g, COW_IMG(0x10028200u), sp0 - 0x40u, 1, self + 0xc4u);
        t38 = g->ecx;
        t39 = g->edx;
        eax = t37;
        ecx = t38;
        edx = t39;
    }
    COW_AT(10187907)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xc8u;
    t40 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t41 = g->ecx;
    t42 = g->edx;
    eax = t40;
    ecx = t41;
    edx = t42;
    COW_AT(1018790c)
    d43 = fr(g, (double)rdf32(eax + 0x44u) - fr(g, (double)rdf32(self + 0xc4u) * (double)rdf32(COW_IMG(0x1032a3d8u))));
    wrf32(self + 0xd4u, (float)d43);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xc8u;
    t44 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t45 = g->ecx;
    t46 = g->edx;
    eax = t44;
    ecx = t45;
    edx = t46;
    COW_AT(10187923)
    d47 = fr(g, (double)rdf32(eax + 0x48u) - fr(g, (double)rdf32(self + 0xc8u) * (double)rdf32(COW_IMG(0x1032a3d8u))));
    wrf32(self + 0xd8u, (float)d47);
    g->eax = eax;
    g->esp = sp0 - 0xc8u;
    t48 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    eax = t48;
    COW_AT(1018793d)
    t49 = rd32(self + 0xd4u);
    t50 = rd32(self + 0xd8u);
    d51 = fr(g, (double)rdf32(eax + 0x4cu) - fr(g, (double)rdf32(self + 0xccu) * (double)rdf32(COW_IMG(0x1032a3d8u))));
    wr32(self + 0x54u, t49);
    t52 = rd32(self + 0xc4u);
    wr32(self + 0x58u, t50);
    wrf32(self + 0xdcu, (float)d51);
    t53 = rd32(self + 0xc8u);
    t54 = rd32(self + 0xdcu);
    d55 = (double)rdf32(self + 0xd0u);
    wrf32(self + 0xe0u, (float)d55);
    wrf32(self + 0x60u, (float)d55);
    d56 = fr(g, (double)rdf32(sp0 - 0xb8u) + (double)rdf32(COW_IMG(0x10329d30u)));
    wr32(self + 0x48u, t53);
    wr32(self + 0x5cu, t54);
    t57 = rd32(self + 0xccu);
    wr32(self + 0x44u, t52);
    t58 = rd32(self + 0xd0u);
    d59 = (double)rdf32(COW_IMG(0x10329d30u));
    wr32(self + 0x4cu, t57);
    wr32(self + 0x50u, t58);
    if ((cow_fsw(g, d56, d59, 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d56, d59, 1u) & 0x4100u;
        ecx = t57;
        edx = t58;
        x0 = d56;
    }
    else
    {
        eax = cow_fsw(g, d56, d59, 1u) & 0x4100u;
        ecx = t57;
        edx = t58;
        x0 = d56;
    COW_AT(101879b6)
        x0 = fr(g, x0 - (double)rdf32(COW_IMG(0x10329d2cu)));
    }
    COW_AT(101879bc)
    if (!(x0 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329d28u)), 1u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329d28u)), 1u);
    COW_AT(101879c9)
        x0 = fr(g, x0 + (double)rdf32(COW_IMG(0x10329d2cu)));
    }
    COW_AT(101879cf)
    wr32(self + 0xacu, 0u);
    wr32(self + 0xb0u, 0x3f800000u);
    t60 = rd32(sp0 - 0xc8u);
    wrf32(self + 0xa4u, (float)fr(g, sin(x0)));
    wrf32(self + 0xa8u, (float)fr(g, cos(x0)));
    if ((uint8_t)ebx == 0u)
    {
        ebx = t60;
    }
    else
    {
        ebx = t60;
    COW_AT(101879fc)
        wr32(sp0 - 0xc8u, self + 0xa4u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xc4u;
        t61 = cow_thiscall(g, COW_IMG(0x10028200u), sp0 - 0x40u, 1, self + 0xa4u);
        t62 = g->ecx;
        t63 = g->edx;
        eax = t61;
        ecx = t62;
        edx = t63;
    }
    COW_AT(10187a09)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xc4u;
    t64 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t65 = g->ecx;
    t66 = g->edx;
    eax = t64;
    ecx = t65;
    edx = t66;
    COW_AT(10187a0e)
    d67 = fr(g, (double)rdf32(eax + 0x44u) - fr(g, (double)rdf32(self + 0xa4u) * (double)rdf32(COW_IMG(0x10329cd8u))));
    wrf32(self + 0xb4u, (float)d67);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xc4u;
    t68 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t69 = g->ecx;
    t70 = g->edx;
    eax = t68;
    ecx = t69;
    edx = t70;
    COW_AT(10187a24)
    d71 = fr(g, (double)rdf32(eax + 0x48u) - fr(g, (double)rdf32(self + 0xa8u) * (double)rdf32(COW_IMG(0x10329cd8u))));
    wrf32(self + 0xb8u, (float)d71);
    g->eax = eax;
    g->esp = sp0 - 0xc4u;
    t72 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    eax = t72;
    COW_AT(10187a3e)
    t73 = rd32(self + 0xb8u);
    t74 = rd32(self + 0xb4u);
    d75 = fr(g, (double)rdf32(eax + 0x4cu) - fr(g, (double)rdf32(self + 0xacu) * (double)rdf32(COW_IMG(0x10329cd8u))));
    wr32(self + 0x38u, t73);
    t76 = rd32(self + 0xa8u);
    wr32(self + 0x34u, t74);
    wrf32(self + 0xbcu, (float)d75);
    t77 = rd32(self + 0xa4u);
    t78 = rd32(self + 0xbcu);
    d79 = (double)rdf32(self + 0xb0u);
    wrf32(self + 0xc0u, (float)d79);
    wrf32(self + 0x40u, (float)d79);
    d80 = (double)rdf32(self + 0xa8u);
    d81 = (double)rdf32(COW_IMG(0x103295d8u));
    wr32(self + 0x3cu, t78);
    t82 = rd32(self + 0xacu);
    wr32(self + 0x24u, t77);
    t83 = rd32(self + 0xb0u);
    wr32(self + 0x28u, t76);
    wr32(self + 0x2cu, t82);
    wr32(self + 0x30u, t83);
    if (rd32(rd32(COW_IMG(0x10456a28u))) == 0x60u)
    {
        eax = (t83 & 0xffff0000u) | (uint16_t)cow_fsw(g, d80, d81, 0u);
    COW_AT(10187cb1)
        if ((eax & 0x100u) != 0u)
        {
    COW_AT(10187d22)
            t139 = rd32(self + 0xc4u);
            wr32(sp0 - 0xb4u, t139);
            t140 = rd32(self + 0xc8u);
            wr32(sp0 - 0xb0u, t140);
            t141 = rd32(self + 0xccu);
            wr32(sp0 - 0xacu, t141);
            t142 = rd32(self + 0xd0u);
            wr32(sp0 - 0xa8u, t142);
            t143 = rd32(self + 0xd4u);
            wr32(sp0 - 0x94u, t143);
            t144 = rd32(self + 0xd8u);
            wr32(sp0 - 0x90u, t144);
            t145 = rd32(self + 0xdcu);
            wr32(sp0 - 0x8cu, t145);
            t146 = rd32(self + 0xe0u);
            wr32(sp0 - 0x88u, t146);
            t147 = rd32(self + 0xf4u);
            wr32(sp0 - 0x64u, t147);
            eax = rd32(self + 0xfcu);
            ecx = rd32(self + 0x100u);
            edx = rd32(self + 0xf8u);
        }
        else
        {
    COW_AT(10187cb8)
            t130 = rd32(self + 0xa4u);
            wr32(sp0 - 0xb4u, t130);
            t131 = rd32(self + 0xa8u);
            wr32(sp0 - 0xb0u, t131);
            t132 = rd32(self + 0xacu);
            wr32(sp0 - 0xacu, t132);
            t133 = rd32(self + 0xb0u);
            wr32(sp0 - 0xa8u, t133);
            t134 = rd32(self + 0xb4u);
            wr32(sp0 - 0x94u, t134);
            t135 = rd32(self + 0xb8u);
            wr32(sp0 - 0x90u, t135);
            t136 = rd32(self + 0xbcu);
            wr32(sp0 - 0x8cu, t136);
            t137 = rd32(self + 0xc0u);
            wr32(sp0 - 0x88u, t137);
            t138 = rd32(self + 0xe4u);
            wr32(sp0 - 0x64u, t138);
            eax = rd32(self + 0xecu);
            ecx = rd32(self + 0xf0u);
            edx = rd32(self + 0xe8u);
        }
    COW_AT(10187d8b)
        d148 = (double)rdf32(self + 0x28u);
        wr32(sp0 - 0x5cu, eax);
        wr32(sp0 - 0x60u, edx);
        wr32(sp0 - 0x58u, ecx);
        if ((cow_fsw(g, d148, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u) != 0u)
        {
    COW_AT(10187df3)
            t158 = rd32(self + 0x44u);
            wr32(sp0 - 0xa4u, t158);
            t159 = rd32(self + 0x48u);
            wr32(sp0 - 0xa0u, t159);
            t160 = rd32(self + 0x4cu);
            wr32(sp0 - 0x9cu, t160);
            t161 = rd32(self + 0x50u);
            wr32(sp0 - 0x98u, t161);
            t162 = rd32(self + 0x54u);
            wr32(sp0 - 0x84u, t162);
            t163 = rd32(self + 0x58u);
            wr32(sp0 - 0x80u, t163);
            t164 = rd32(self + 0x5cu);
            wr32(sp0 - 0x7cu, t164);
            t165 = rd32(self + 0x60u);
            wr32(sp0 - 0x78u, t165);
            t166 = rd32(self + 0x74u);
            wr32(sp0 - 0x74u, t166);
            eax = rd32(self + 0x7cu);
            ecx = rd32(self + 0x80u);
            edx = rd32(self + 0x78u);
        }
        else
        {
    COW_AT(10187da9)
            t149 = rd32(self + 0x24u);
            wr32(sp0 - 0xa4u, t149);
            t150 = rd32(self + 0x28u);
            wr32(sp0 - 0xa0u, t150);
            t151 = rd32(self + 0x2cu);
            wr32(sp0 - 0x9cu, t151);
            t152 = rd32(self + 0x30u);
            wr32(sp0 - 0x98u, t152);
            t153 = rd32(self + 0x34u);
            wr32(sp0 - 0x84u, t153);
            t154 = rd32(self + 0x38u);
            wr32(sp0 - 0x80u, t154);
            t155 = rd32(self + 0x3cu);
            wr32(sp0 - 0x7cu, t155);
            t156 = rd32(self + 0x40u);
            wr32(sp0 - 0x78u, t156);
            t157 = rd32(self + 0x64u);
            wr32(sp0 - 0x74u, t157);
            eax = rd32(self + 0x6cu);
            ecx = rd32(self + 0x70u);
            edx = rd32(self + 0x68u);
        }
    COW_AT(10187e3e)
        wr32(sp0 - 0x6cu, eax);
        wr32(sp0 - 0x70u, edx);
        wr32(sp0 - 0x68u, ecx);
        if (rd8(self + 0x148u) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x148u);
    COW_AT(10187ecc)
            wr32(sp0 - 0xc8u, self + 0x14cu);
            wr32(sp0 - 0xccu, sp0 - 0xb4u);
            g->ecx = sp0 - 0xb4u;
            g->esp = sp0 - 0xc4u;
            cow_cdecl(g, COW_IMG(0x100270a0u), 2, sp0 - 0xb4u, self + 0x14cu);
            t175 = g->ecx;
            ecx = t175;
    COW_AT(10187edd)
            wr32(sp0 - 0xd0u, sp0 - 0xb4u);
            wr32(sp0 - 0xd4u, sp0 - 0x50u);
            g->eax = sp0 - 0x50u;
            g->edx = sp0 - 0xb4u;
            g->esp = sp0 - 0xccu;
            t176 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x50u, sp0 - 0xb4u);
            t177 = g->edx;
            eax = t176;
            edx = t177;
    COW_AT(10187eec)
            wr32(sp0 - 0xd8u, 0x3dcccccdu);
            wr32(sp0 - 0xdcu, sp0 - 0xb4u);
            g->eax = eax;
            g->ecx = sp0 - 0xb4u;
            g->esp = sp0 - 0xd4u;
            t178 = cow_cdecl(g, COW_IMG(0x100272b0u), 2, sp0 - 0xb4u, 0x3dcccccdu);
            t179 = g->ecx;
            eax = t178;
            ecx = t179;
    COW_AT(10187efb)
            wr32(sp0 - 0xe0u, sp0 - 0xb4u);
            wr32(sp0 - 0xe4u, self + 0x14cu);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = sp0 - 0xb4u;
            g->esp = sp0 - 0xdcu;
            t180 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, self + 0x14cu, sp0 - 0xb4u);
            t181 = g->ecx;
            t182 = g->edx;
            eax = t180;
            ecx = t181;
            edx = t182;
    COW_AT(10187f06)
            wr32(sp0 - 0xe8u, self + 0x14cu);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0xe4u;
            cow_call_regs(g, COW_IMG(0x100274b0u), eax, g->ecx, g->edx, 1, 1, self + 0x14cu);
            t183 = g->ecx;
            t184 = g->edx;
            ecx = t183;
            edx = t184;
    COW_AT(10187f0c)
            wr32(sp0 - 0xecu, self + 0x14cu);
            wr32(sp0 - 0xf0u, sp0 - 0x50u);
            g->eax = sp0 - 0x50u;
            g->edx = edx;
            g->esp = sp0 - 0xe8u;
            t185 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x50u, self + 0x14cu);
            t186 = g->edx;
            d187 = cow_take_float(g);
            eax = t185;
            edx = t186;
            x0 = d187;
    COW_AT(10187f1a)
            wrf32(sp0 - 0xb8u, (float)(double)(float)x0);
            wr32(sp0 - 0xf4u, self + 0x15cu);
            wr32(sp0 - 0xf8u, sp0 - 0x94u);
            g->eax = eax;
            g->ecx = sp0 - 0x94u;
            g->esp = sp0 - 0xf0u;
            t188 = cow_cdecl(g, COW_IMG(0x100270a0u), 2, sp0 - 0x94u, self + 0x15cu);
            t189 = g->ecx;
            eax = t188;
            ecx = t189;
    COW_AT(10187f2f)
            wr32(sp0 - 0xfcu, 0x3dcccccdu);
            wr32(sp0 - 0x100u, sp0 - 0x94u);
            g->ecx = ecx;
            g->edx = sp0 - 0x94u;
            g->esp = sp0 - 0xf8u;
            cow_cdecl(g, COW_IMG(0x100272b0u), 2, sp0 - 0x94u, 0x3dcccccdu);
            t190 = g->ecx;
            t191 = g->edx;
            ecx = t190;
            edx = t191;
    COW_AT(10187f3e)
            wr32(sp0 - 0x104u, sp0 - 0x94u);
            wr32(sp0 - 0x108u, self + 0x15cu);
            g->eax = sp0 - 0x94u;
            g->edx = edx;
            g->esp = sp0 - 0x100u;
            t192 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, self + 0x15cu, sp0 - 0x94u);
            t193 = g->edx;
            eax = t192;
            edx = t193;
    COW_AT(10187f49)
            d194 = (double)rdf32(sp0 - 0xb8u);
            if (!(d194 < (double)rdf32(COW_IMG(0x103295d8u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d194, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                x0 = (double)rdf32(sp0 - 0xb8u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d194, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                x0 = (double)rdf32(sp0 - 0xb8u);
    COW_AT(10187f61)
                x0 = -x0;
            }
    COW_AT(10187f63)
            if (!(x0 < (double)rdf32(COW_IMG(0x10329a08u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a08u)), 0u);
    COW_AT(10187fa0)
                wr32(sp0 - 0xc8u, 0x3f333333u);
                wr32(sp0 - 0xccu, self + 0x16cu);
                g->eax = eax;
                g->ecx = self + 0x16cu;
                g->esp = sp0 - 0xc4u;
                t201 = cow_cdecl(g, COW_IMG(0x100272b0u), 2, self + 0x16cu, 0x3f333333u);
                t202 = g->ecx;
                eax = t201;
                ecx = t202;
    COW_AT(10187fb1)
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a08u)), 0u);
    COW_AT(10187f70)
                wr32(sp0 - 0xc8u, self + 0x16cu);
                wr32(sp0 - 0xccu, sp0 - 0x64u);
                g->eax = eax;
                g->ecx = sp0 - 0x64u;
                g->esp = sp0 - 0xc4u;
                t195 = cow_cdecl(g, COW_IMG(0x100270a0u), 2, sp0 - 0x64u, self + 0x16cu);
                t196 = g->ecx;
                eax = t195;
                ecx = t196;
    COW_AT(10187f81)
                wr32(sp0 - 0xd0u, 0x3dcccccdu);
                wr32(sp0 - 0xd4u, sp0 - 0x64u);
                g->ecx = ecx;
                g->edx = sp0 - 0x64u;
                g->esp = sp0 - 0xccu;
                cow_cdecl(g, COW_IMG(0x100272b0u), 2, sp0 - 0x64u, 0x3dcccccdu);
                t197 = g->ecx;
                t198 = g->edx;
                ecx = t197;
                edx = t198;
    COW_AT(10187f90)
                wr32(sp0 - 0xd8u, sp0 - 0x64u);
                wr32(sp0 - 0xdcu, self + 0x16cu);
                g->eax = sp0 - 0x64u;
                g->ecx = ecx;
                g->esp = sp0 - 0xd4u;
                t199 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, self + 0x16cu, sp0 - 0x64u);
                t200 = g->ecx;
                eax = t199;
                ecx = t200;
    COW_AT(10187f9b)
            }
    COW_AT(10187fb4)
            wr32(sp0 - 0xc8u, self + 0x17cu);
            wr32(sp0 - 0xccu, sp0 - 0xa4u);
            g->edx = sp0 - 0xa4u;
            g->esp = sp0 - 0xc4u;
            cow_cdecl(g, COW_IMG(0x100270a0u), 2, sp0 - 0xa4u, self + 0x17cu);
            t203 = g->edx;
            edx = t203;
    COW_AT(10187fc5)
            wr32(sp0 - 0xd0u, sp0 - 0xa4u);
            wr32(sp0 - 0xd4u, sp0 - 0x50u);
            g->eax = sp0 - 0xa4u;
            g->ecx = sp0 - 0x50u;
            g->esp = sp0 - 0xccu;
            t204 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x50u, sp0 - 0xa4u);
            t205 = g->ecx;
            eax = t204;
            ecx = t205;
    COW_AT(10187fd4)
            wr32(sp0 - 0xd8u, 0x3dcccccdu);
            wr32(sp0 - 0xdcu, sp0 - 0xa4u);
            g->ecx = ecx;
            g->edx = sp0 - 0xa4u;
            g->esp = sp0 - 0xd4u;
            cow_cdecl(g, COW_IMG(0x100272b0u), 2, sp0 - 0xa4u, 0x3dcccccdu);
            t206 = g->ecx;
            t207 = g->edx;
            ecx = t206;
            edx = t207;
    COW_AT(10187fe3)
            wr32(sp0 - 0xe0u, sp0 - 0xa4u);
            wr32(sp0 - 0xe4u, self + 0x17cu);
            g->eax = sp0 - 0xa4u;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0xdcu;
            t208 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, self + 0x17cu, sp0 - 0xa4u);
            t209 = g->ecx;
            t210 = g->edx;
            eax = t208;
            ecx = t209;
            edx = t210;
    COW_AT(10187fee)
            wr32(sp0 - 0xe8u, self + 0x17cu);
            g->edx = edx;
            g->esp = sp0 - 0xe4u;
            t211 = cow_call_regs(g, COW_IMG(0x100274b0u), eax, g->ecx, g->edx, 1, 1, self + 0x17cu);
            t212 = g->edx;
            eax = t211;
            edx = t212;
    COW_AT(10187ff4)
            wr32(sp0 - 0xecu, self + 0x17cu);
            wr32(sp0 - 0xf0u, sp0 - 0x50u);
            g->eax = eax;
            g->ecx = sp0 - 0x50u;
            g->esp = sp0 - 0xe8u;
            t213 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x50u, self + 0x17cu);
            t214 = g->ecx;
            d215 = cow_take_float(g);
            eax = t213;
            ecx = t214;
            x0 = d215;
    COW_AT(10188002)
            wrf32(sp0 - 0xb8u, (float)(double)(float)x0);
            wr32(sp0 - 0xf4u, self + 0x18cu);
            wr32(sp0 - 0xf8u, sp0 - 0x84u);
            g->ecx = ecx;
            g->edx = sp0 - 0x84u;
            g->esp = sp0 - 0xf0u;
            cow_cdecl(g, COW_IMG(0x100270a0u), 2, sp0 - 0x84u, self + 0x18cu);
            t216 = g->ecx;
            t217 = g->edx;
            ecx = t216;
            edx = t217;
    COW_AT(10188017)
            wr32(sp0 - 0xfcu, 0x3dcccccdu);
            wr32(sp0 - 0x100u, sp0 - 0x84u);
            g->eax = sp0 - 0x84u;
            g->edx = edx;
            g->esp = sp0 - 0xf8u;
            t218 = cow_cdecl(g, COW_IMG(0x100272b0u), 2, sp0 - 0x84u, 0x3dcccccdu);
            t219 = g->edx;
            eax = t218;
            edx = t219;
    COW_AT(10188026)
            wr32(sp0 - 0x104u, sp0 - 0x84u);
            wr32(sp0 - 0x108u, self + 0x18cu);
            g->eax = eax;
            g->ecx = sp0 - 0x84u;
            g->edx = edx;
            g->esp = sp0 - 0x100u;
            t220 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, self + 0x18cu, sp0 - 0x84u);
            t221 = g->ecx;
            t222 = g->edx;
            eax = t220;
            ecx = t221;
            edx = t222;
    COW_AT(10188031)
            d223 = (double)rdf32(sp0 - 0xb8u);
            if (!(d223 < (double)rdf32(COW_IMG(0x103295d8u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d223, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                x0 = (double)rdf32(sp0 - 0xb8u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d223, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                x0 = (double)rdf32(sp0 - 0xb8u);
    COW_AT(10188049)
                x0 = -x0;
            }
    COW_AT(1018804b)
            if (!(x0 < (double)rdf32(COW_IMG(0x10329a08u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a08u)), 0u);
    COW_AT(10188088)
                wr32(sp0 - 0xc8u, 0x3f333333u);
                wr32(sp0 - 0xccu, self + 0x19cu);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0xc4u;
                t230 = cow_cdecl(g, COW_IMG(0x100272b0u), 2, self + 0x19cu, 0x3f333333u);
                t231 = g->edx;
                eax = t230;
                edx = t231;
    COW_AT(10188093)
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a08u)), 0u);
    COW_AT(1018805e)
                wr32(sp0 - 0xc8u, self + 0x19cu);
                wr32(sp0 - 0xccu, sp0 - 0x74u);
                g->ecx = ecx;
                g->edx = sp0 - 0x74u;
                g->esp = sp0 - 0xc4u;
                cow_cdecl(g, COW_IMG(0x100270a0u), 2, sp0 - 0x74u, self + 0x19cu);
                t224 = g->ecx;
                t225 = g->edx;
                ecx = t224;
                edx = t225;
    COW_AT(10188069)
                wr32(sp0 - 0xd0u, 0x3dcccccdu);
                wr32(sp0 - 0xd4u, sp0 - 0x74u);
                g->eax = sp0 - 0x74u;
                g->edx = edx;
                g->esp = sp0 - 0xccu;
                t226 = cow_cdecl(g, COW_IMG(0x100272b0u), 2, sp0 - 0x74u, 0x3dcccccdu);
                t227 = g->edx;
                eax = t226;
                edx = t227;
    COW_AT(10188078)
                wr32(sp0 - 0xd8u, sp0 - 0x74u);
                wr32(sp0 - 0xdcu, self + 0x19cu);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0xd4u;
                t228 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, self + 0x19cu, sp0 - 0x74u);
                t229 = g->edx;
                eax = t228;
                edx = t229;
    COW_AT(10188083)
            }
        }
        else
        {
    COW_AT(10187e54)
            wr32(sp0 - 0xc8u, sp0 - 0xb4u);
            wr32(sp0 - 0xccu, self + 0x14cu);
            wr8(self + 0x148u, 1u);
            g->eax = self + 0x14cu;
            g->esp = sp0 - 0xc4u;
            t167 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, self + 0x14cu, sp0 - 0xb4u);
            eax = t167;
    COW_AT(10187e6c)
            wr32(sp0 - 0xd0u, sp0 - 0xa4u);
            wr32(sp0 - 0xd4u, self + 0x17cu);
            g->edx = self + 0x17cu;
            g->esp = sp0 - 0xccu;
            cow_cdecl(g, COW_IMG(0x10026eb0u), 2, self + 0x17cu, sp0 - 0xa4u);
            t168 = g->edx;
            edx = t168;
    COW_AT(10187e7d)
            wr32(sp0 - 0xd8u, sp0 - 0x94u);
            wr32(sp0 - 0xdcu, self + 0x15cu);
            g->ecx = self + 0x15cu;
            g->esp = sp0 - 0xd4u;
            cow_cdecl(g, COW_IMG(0x10026eb0u), 2, self + 0x15cu, sp0 - 0x94u);
            t169 = g->ecx;
            ecx = t169;
    COW_AT(10187e8e)
            wr32(sp0 - 0xe0u, sp0 - 0x84u);
            wr32(sp0 - 0xe4u, self + 0x18cu);
            g->eax = self + 0x18cu;
            g->esp = sp0 - 0xdcu;
            t170 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, self + 0x18cu, sp0 - 0x84u);
            eax = t170;
    COW_AT(10187e9f)
            wr32(sp0 - 0xe8u, sp0 - 0x64u);
            wr32(sp0 - 0xecu, self + 0x16cu);
            g->ecx = sp0 - 0x64u;
            g->edx = self + 0x16cu;
            g->esp = sp0 - 0xe4u;
            cow_cdecl(g, COW_IMG(0x10026eb0u), 2, self + 0x16cu, sp0 - 0x64u);
            t171 = g->ecx;
            t172 = g->edx;
            ecx = t171;
            edx = t172;
    COW_AT(10187eb3)
            wr32(sp0 - 0xf0u, sp0 - 0x74u);
            wr32(sp0 - 0xf4u, self + 0x19cu);
            g->eax = sp0 - 0x74u;
            g->edx = edx;
            g->esp = sp0 - 0xecu;
            t173 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, self + 0x19cu, sp0 - 0x74u);
            t174 = g->edx;
            eax = t173;
            edx = t174;
    COW_AT(10187ec4)
        }
    }
    else
    {
        eax = (t83 & 0xffff0000u) | (uint16_t)cow_fsw(g, d80, d81, 0u);
    COW_AT(10187aba)
        if ((eax & 0x100u) != 0u)
        {
    COW_AT(10187bb0)
            t107 = rd32(self + 0xc4u);
            t108 = rd32(self + 0xc8u);
            t109 = rd32(self + 0xccu);
            wr32(self + 0x14cu, t107);
            t110 = rd32(self + 0xd0u);
            wr32(self + 0x150u, t108);
            t111 = rd32(self + 0xd4u);
            wr32(self + 0x154u, t109);
            t112 = rd32(self + 0xd8u);
            wr32(self + 0x158u, t110);
            t113 = rd32(self + 0xdcu);
            wr32(self + 0x15cu, t111);
            t114 = rd32(self + 0xe0u);
            wr32(self + 0x160u, t112);
            t115 = rd32(self + 0xf4u);
            wr32(self + 0x164u, t113);
            t116 = rd32(self + 0xf8u);
            wr32(self + 0x168u, t114);
            t117 = rd32(self + 0xfcu);
            wr32(self + 0x16cu, t115);
            t118 = rd32(self + 0x100u);
            wr32(self + 0x170u, t116);
            t119 = rd32(self + 0x44u);
            wr32(self + 0x174u, t117);
            t120 = rd32(self + 0x48u);
            wr32(self + 0x178u, t118);
            t121 = rd32(self + 0x4cu);
            wr32(self + 0x17cu, t119);
            t122 = rd32(self + 0x50u);
            wr32(self + 0x180u, t120);
            t123 = rd32(self + 0x54u);
            wr32(self + 0x184u, t121);
            t124 = rd32(self + 0x58u);
            wr32(self + 0x188u, t122);
            t125 = rd32(self + 0x5cu);
            wr32(self + 0x18cu, t123);
            t126 = rd32(self + 0x60u);
            wr32(self + 0x190u, t124);
            t127 = rd32(self + 0x74u);
            wr32(self + 0x194u, t125);
            t128 = rd32(self + 0x78u);
            wr32(self + 0x198u, t126);
            t129 = rd32(self + 0x7cu);
            wr32(self + 0x19cu, t127);
            eax = t129;
            ecx = rd32(self + 0x80u);
            edx = t128;
        }
        else
        {
    COW_AT(10187ac5)
            t84 = rd32(self + 0xa4u);
            t85 = rd32(self + 0xa8u);
            t86 = rd32(self + 0xacu);
            wr32(self + 0x14cu, t84);
            t87 = rd32(self + 0xb0u);
            wr32(self + 0x150u, t85);
            t88 = rd32(self + 0xb4u);
            wr32(self + 0x154u, t86);
            t89 = rd32(self + 0xb8u);
            wr32(self + 0x158u, t87);
            t90 = rd32(self + 0xbcu);
            wr32(self + 0x15cu, t88);
            t91 = rd32(self + 0xc0u);
            wr32(self + 0x160u, t89);
            t92 = rd32(self + 0xe4u);
            wr32(self + 0x164u, t90);
            t93 = rd32(self + 0xe8u);
            wr32(self + 0x168u, t91);
            t94 = rd32(self + 0xecu);
            wr32(self + 0x16cu, t92);
            t95 = rd32(self + 0xf0u);
            wr32(self + 0x170u, t93);
            t96 = rd32(self + 0x24u);
            wr32(self + 0x174u, t94);
            t97 = rd32(self + 0x28u);
            wr32(self + 0x178u, t95);
            t98 = rd32(self + 0x2cu);
            wr32(self + 0x17cu, t96);
            t99 = rd32(self + 0x30u);
            wr32(self + 0x180u, t97);
            t100 = rd32(self + 0x34u);
            wr32(self + 0x184u, t98);
            t101 = rd32(self + 0x38u);
            wr32(self + 0x188u, t99);
            t102 = rd32(self + 0x3cu);
            wr32(self + 0x18cu, t100);
            t103 = rd32(self + 0x40u);
            wr32(self + 0x190u, t101);
            t104 = rd32(self + 0x64u);
            wr32(self + 0x194u, t102);
            t105 = rd32(self + 0x68u);
            wr32(self + 0x198u, t103);
            t106 = rd32(self + 0x6cu);
            wr32(self + 0x19cu, t104);
            eax = t106;
            ecx = rd32(self + 0x70u);
            edx = t105;
        }
    COW_AT(10187c9a)
        wr32(self + 0x1a0u, edx);
        wr32(self + 0x1a4u, eax);
        wr32(self + 0x1a8u, ecx);
    }
    COW_AT(10188096)
    g->esp = sp0 - 0xc4u;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    COW_AT(101880a2)
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0xc0u);
    g->edi = rd32(sp0 - 0xc4u);
    g->ebp = rd32(sp0 - 0xbcu);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10187720(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1018773au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xc4u);
        in_esi = rd32(sp0 - 0xc0u);
        in_ebp = rd32(sp0 - 0xbcu);
        g->esp = sp0 - 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x10187744u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xc4u);
        in_esi = rd32(sp0 - 0xc0u);
        in_ebp = rd32(sp0 - 0xbcu);
        g->esp = sp0 - 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x1018774bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xc4u);
        in_esi = rd32(sp0 - 0xc0u);
        in_ebp = rd32(sp0 - 0xbcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x10187767u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_b8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xc4u);
        in_esi = rd32(sp0 - 0xc0u);
        in_ebp = rd32(sp0 - 0xbcu);
        loc_b8_f = rdf32(sp0 - 0xb8u);
        g->esp = sp0 - 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x1018786fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_b8_f;
        eax = g->eax;
        ecx = g->ecx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xc4u);
        in_esi = rd32(sp0 - 0xc0u);
        in_ebp = rd32(sp0 - 0xbcu);
        loc_b8_f = rdf32(sp0 - 0xb8u);
        g->esp = sp0 - 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x1018787cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xc8u;
        (void)sp0;
        return 1;
    }
    case 0x10187891u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xc8u;
        (void)sp0;
        return 1;
    }
    case 0x1018789du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xc8u;
        (void)sp0;
        return 1;
    }
    case 0x101878c7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xc8u;
        (void)sp0;
        return 1;
    }
    case 0x101878fau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xc8u;
        g->ebp = self + 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x10187907u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xc8u;
        g->ebp = self + 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x1018790cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xc8u;
        g->ebp = self + 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x10187923u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xc8u;
        g->ebp = self + 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x1018793du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xc8u;
        g->ebp = self + 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x101879b6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xc8u;
        g->ebp = self + 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x101879bcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xc8u;
        g->ebp = self + 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x101879c9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xc8u;
        g->ebp = self + 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x101879cfu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xc8u;
        g->ebp = self + 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x101879fcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xc4u;
        g->ebp = self + 0xc4u;
        g->edi = self + 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10187a09u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xc4u;
        g->ebp = self + 0xc4u;
        g->edi = self + 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10187a0eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xc4u;
        g->ebp = self + 0xc4u;
        g->edi = self + 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10187a24u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xc4u;
        g->ebp = self + 0xc4u;
        g->edi = self + 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10187a3eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xc4u;
        g->ebp = self + 0xc4u;
        g->edi = self + 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10187abau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xc4u;
        g->ebp = self + 0xc4u;
        g->edi = self + 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10187ac5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xc4u;
        g->edi = self + 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10187bb0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xc4u;
        g->ebp = self + 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x10187c9au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x10187cb1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xc4u;
        g->ebp = self + 0xc4u;
        g->edi = self + 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10187cb8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xc4u;
        g->edi = self + 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10187d22u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xc4u;
        g->ebp = self + 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x10187d8bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x10187da9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x10187df3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x10187e3eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x10187e54u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x10187e6cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xccu;
        wr32(sp0 - 0xc8u, sp0 - 0xb4u);
        (void)sp0;
        return 1;
    }
    case 0x10187e7du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xd4u;
        wr32(sp0 - 0xd0u, sp0 - 0xa4u);
        wr32(sp0 - 0xc8u, sp0 - 0xb4u);
        (void)sp0;
        return 1;
    }
    case 0x10187e8eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xdcu;
        wr32(sp0 - 0xd8u, sp0 - 0x94u);
        wr32(sp0 - 0xd0u, sp0 - 0xa4u);
        wr32(sp0 - 0xc8u, sp0 - 0xb4u);
        (void)sp0;
        return 1;
    }
    case 0x10187e9fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xe4u;
        wr32(sp0 - 0xe0u, sp0 - 0x84u);
        wr32(sp0 - 0xd8u, sp0 - 0x94u);
        wr32(sp0 - 0xd0u, sp0 - 0xa4u);
        wr32(sp0 - 0xc8u, sp0 - 0xb4u);
        (void)sp0;
        return 1;
    }
    case 0x10187eb3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xecu;
        wr32(sp0 - 0xe8u, sp0 - 0x64u);
        wr32(sp0 - 0xe0u, sp0 - 0x84u);
        wr32(sp0 - 0xd8u, sp0 - 0x94u);
        wr32(sp0 - 0xd0u, sp0 - 0xa4u);
        wr32(sp0 - 0xc8u, sp0 - 0xb4u);
        (void)sp0;
        return 1;
    }
    case 0x10187ec4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0xf4u;
        wr32(sp0 - 0xf0u, sp0 - 0x74u);
        wr32(sp0 - 0xe8u, sp0 - 0x64u);
        wr32(sp0 - 0xe0u, sp0 - 0x84u);
        wr32(sp0 - 0xd8u, sp0 - 0x94u);
        wr32(sp0 - 0xd0u, sp0 - 0xa4u);
        wr32(sp0 - 0xc8u, sp0 - 0xb4u);
        (void)sp0;
        return 1;
    }
    case 0x10187eccu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x10187eddu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xccu;
        g->edi = self + 0x14cu;
        wr32(sp0 - 0xccu, sp0 - 0xb4u);
        (void)sp0;
        return 1;
    }
    case 0x10187eecu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xd4u;
        g->edi = self + 0x14cu;
        wr32(sp0 - 0xd4u, sp0 - 0x50u);
        wr32(sp0 - 0xd0u, sp0 - 0xb4u);
        wr32(sp0 - 0xccu, sp0 - 0xb4u);
        (void)sp0;
        return 1;
    }
    case 0x10187efbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xdcu;
        g->edi = self + 0x14cu;
        wr32(sp0 - 0xdcu, sp0 - 0xb4u);
        wr32(sp0 - 0xd4u, sp0 - 0x50u);
        wr32(sp0 - 0xd0u, sp0 - 0xb4u);
        wr32(sp0 - 0xccu, sp0 - 0xb4u);
        (void)sp0;
        return 1;
    }
    case 0x10187f06u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xe4u;
        g->edi = self + 0x14cu;
        wr32(sp0 - 0xe0u, sp0 - 0xb4u);
        wr32(sp0 - 0xdcu, sp0 - 0xb4u);
        wr32(sp0 - 0xd4u, sp0 - 0x50u);
        wr32(sp0 - 0xd0u, sp0 - 0xb4u);
        wr32(sp0 - 0xccu, sp0 - 0xb4u);
        (void)sp0;
        return 1;
    }
    case 0x10187f0cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xe8u;
        g->edi = self + 0x14cu;
        wr32(sp0 - 0xe0u, sp0 - 0xb4u);
        wr32(sp0 - 0xdcu, sp0 - 0xb4u);
        wr32(sp0 - 0xd4u, sp0 - 0x50u);
        wr32(sp0 - 0xd0u, sp0 - 0xb4u);
        wr32(sp0 - 0xccu, sp0 - 0xb4u);
        (void)sp0;
        return 1;
    }
    case 0x10187f1au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xf0u;
        wr32(sp0 - 0xf0u, sp0 - 0x50u);
        wr32(sp0 - 0xe0u, sp0 - 0xb4u);
        wr32(sp0 - 0xdcu, sp0 - 0xb4u);
        wr32(sp0 - 0xd4u, sp0 - 0x50u);
        wr32(sp0 - 0xd0u, sp0 - 0xb4u);
        wr32(sp0 - 0xccu, sp0 - 0xb4u);
        (void)sp0;
        return 1;
    }
    case 0x10187f2fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xf8u;
        g->edi = self + 0x15cu;
        wr32(sp0 - 0xf8u, sp0 - 0x94u);
        wr32(sp0 - 0xf0u, sp0 - 0x50u);
        wr32(sp0 - 0xe0u, sp0 - 0xb4u);
        wr32(sp0 - 0xdcu, sp0 - 0xb4u);
        wr32(sp0 - 0xd4u, sp0 - 0x50u);
        wr32(sp0 - 0xd0u, sp0 - 0xb4u);
        wr32(sp0 - 0xccu, sp0 - 0xb4u);
        (void)sp0;
        return 1;
    }
    case 0x10187f3eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x100u;
        g->edi = self + 0x15cu;
        wr32(sp0 - 0x100u, sp0 - 0x94u);
        wr32(sp0 - 0xf8u, sp0 - 0x94u);
        wr32(sp0 - 0xf0u, sp0 - 0x50u);
        wr32(sp0 - 0xe0u, sp0 - 0xb4u);
        wr32(sp0 - 0xdcu, sp0 - 0xb4u);
        wr32(sp0 - 0xd4u, sp0 - 0x50u);
        wr32(sp0 - 0xd0u, sp0 - 0xb4u);
        wr32(sp0 - 0xccu, sp0 - 0xb4u);
        (void)sp0;
        return 1;
    }
    case 0x10187f49u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x108u;
        wr32(sp0 - 0x104u, sp0 - 0x94u);
        wr32(sp0 - 0x100u, sp0 - 0x94u);
        wr32(sp0 - 0xf8u, sp0 - 0x94u);
        wr32(sp0 - 0xf0u, sp0 - 0x50u);
        wr32(sp0 - 0xe0u, sp0 - 0xb4u);
        wr32(sp0 - 0xdcu, sp0 - 0xb4u);
        wr32(sp0 - 0xd4u, sp0 - 0x50u);
        wr32(sp0 - 0xd0u, sp0 - 0xb4u);
        wr32(sp0 - 0xccu, sp0 - 0xb4u);
        (void)sp0;
        return 1;
    }
    case 0x10187f61u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xc4u;
        wr32(sp0 - 0x104u, sp0 - 0x94u);
        wr32(sp0 - 0x100u, sp0 - 0x94u);
        wr32(sp0 - 0xf8u, sp0 - 0x94u);
        wr32(sp0 - 0xf0u, sp0 - 0x50u);
        wr32(sp0 - 0xe0u, sp0 - 0xb4u);
        wr32(sp0 - 0xdcu, sp0 - 0xb4u);
        wr32(sp0 - 0xd4u, sp0 - 0x50u);
        wr32(sp0 - 0xd0u, sp0 - 0xb4u);
        wr32(sp0 - 0xccu, sp0 - 0xb4u);
        (void)sp0;
        return 1;
    }
    case 0x10187f63u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xc4u;
        wr32(sp0 - 0x104u, sp0 - 0x94u);
        wr32(sp0 - 0x100u, sp0 - 0x94u);
        wr32(sp0 - 0xf8u, sp0 - 0x94u);
        wr32(sp0 - 0xf0u, sp0 - 0x50u);
        wr32(sp0 - 0xe0u, sp0 - 0xb4u);
        wr32(sp0 - 0xdcu, sp0 - 0xb4u);
        wr32(sp0 - 0xd4u, sp0 - 0x50u);
        wr32(sp0 - 0xd0u, sp0 - 0xb4u);
        wr32(sp0 - 0xccu, sp0 - 0xb4u);
        (void)sp0;
        return 1;
    }
    case 0x10187f70u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xc4u;
        wr32(sp0 - 0x104u, sp0 - 0x94u);
        wr32(sp0 - 0x100u, sp0 - 0x94u);
        wr32(sp0 - 0xf8u, sp0 - 0x94u);
        wr32(sp0 - 0xf0u, sp0 - 0x50u);
        wr32(sp0 - 0xe0u, sp0 - 0xb4u);
        wr32(sp0 - 0xdcu, sp0 - 0xb4u);
        wr32(sp0 - 0xd4u, sp0 - 0x50u);
        wr32(sp0 - 0xd0u, sp0 - 0xb4u);
        wr32(sp0 - 0xccu, sp0 - 0xb4u);
        (void)sp0;
        return 1;
    }
    case 0x10187f81u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xccu;
        g->edi = self + 0x16cu;
        wr32(sp0 - 0x104u, sp0 - 0x94u);
        wr32(sp0 - 0x100u, sp0 - 0x94u);
        wr32(sp0 - 0xf8u, sp0 - 0x94u);
        wr32(sp0 - 0xf0u, sp0 - 0x50u);
        wr32(sp0 - 0xe0u, sp0 - 0xb4u);
        wr32(sp0 - 0xdcu, sp0 - 0xb4u);
        wr32(sp0 - 0xd4u, sp0 - 0x50u);
        wr32(sp0 - 0xd0u, sp0 - 0xb4u);
        wr32(sp0 - 0xccu, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x10187f90u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xd4u;
        g->edi = self + 0x16cu;
        wr32(sp0 - 0x104u, sp0 - 0x94u);
        wr32(sp0 - 0x100u, sp0 - 0x94u);
        wr32(sp0 - 0xf8u, sp0 - 0x94u);
        wr32(sp0 - 0xf0u, sp0 - 0x50u);
        wr32(sp0 - 0xe0u, sp0 - 0xb4u);
        wr32(sp0 - 0xdcu, sp0 - 0xb4u);
        wr32(sp0 - 0xd4u, sp0 - 0x64u);
        wr32(sp0 - 0xccu, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x10187f9bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xdcu;
        wr32(sp0 - 0x104u, sp0 - 0x94u);
        wr32(sp0 - 0x100u, sp0 - 0x94u);
        wr32(sp0 - 0xf8u, sp0 - 0x94u);
        wr32(sp0 - 0xf0u, sp0 - 0x50u);
        wr32(sp0 - 0xe0u, sp0 - 0xb4u);
        wr32(sp0 - 0xd8u, sp0 - 0x64u);
        wr32(sp0 - 0xd4u, sp0 - 0x64u);
        wr32(sp0 - 0xccu, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x10187fa0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xc4u;
        wr32(sp0 - 0x104u, sp0 - 0x94u);
        wr32(sp0 - 0x100u, sp0 - 0x94u);
        wr32(sp0 - 0xf8u, sp0 - 0x94u);
        wr32(sp0 - 0xf0u, sp0 - 0x50u);
        wr32(sp0 - 0xe0u, sp0 - 0xb4u);
        wr32(sp0 - 0xdcu, sp0 - 0xb4u);
        wr32(sp0 - 0xd4u, sp0 - 0x50u);
        wr32(sp0 - 0xd0u, sp0 - 0xb4u);
        wr32(sp0 - 0xccu, sp0 - 0xb4u);
        (void)sp0;
        return 1;
    }
    case 0x10187fb1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xccu;
        wr32(sp0 - 0x104u, sp0 - 0x94u);
        wr32(sp0 - 0x100u, sp0 - 0x94u);
        wr32(sp0 - 0xf8u, sp0 - 0x94u);
        wr32(sp0 - 0xf0u, sp0 - 0x50u);
        wr32(sp0 - 0xe0u, sp0 - 0xb4u);
        wr32(sp0 - 0xdcu, sp0 - 0xb4u);
        wr32(sp0 - 0xd4u, sp0 - 0x50u);
        wr32(sp0 - 0xd0u, sp0 - 0xb4u);
        (void)sp0;
        return 1;
    }
    case 0x10187fb4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xc4u;
        wr32(sp0 - 0x104u, sp0 - 0x94u);
        wr32(sp0 - 0x100u, sp0 - 0x94u);
        wr32(sp0 - 0xf8u, sp0 - 0x94u);
        wr32(sp0 - 0xf0u, sp0 - 0x50u);
        wr32(sp0 - 0xe0u, sp0 - 0xb4u);
        (void)sp0;
        return 1;
    }
    case 0x10187fc5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xccu;
        g->edi = self + 0x17cu;
        wr32(sp0 - 0x104u, sp0 - 0x94u);
        wr32(sp0 - 0x100u, sp0 - 0x94u);
        wr32(sp0 - 0xf8u, sp0 - 0x94u);
        wr32(sp0 - 0xf0u, sp0 - 0x50u);
        wr32(sp0 - 0xe0u, sp0 - 0xb4u);
        wr32(sp0 - 0xccu, sp0 - 0xa4u);
        (void)sp0;
        return 1;
    }
    case 0x10187fd4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xd4u;
        g->edi = self + 0x17cu;
        wr32(sp0 - 0x104u, sp0 - 0x94u);
        wr32(sp0 - 0x100u, sp0 - 0x94u);
        wr32(sp0 - 0xf8u, sp0 - 0x94u);
        wr32(sp0 - 0xf0u, sp0 - 0x50u);
        wr32(sp0 - 0xe0u, sp0 - 0xb4u);
        wr32(sp0 - 0xd4u, sp0 - 0x50u);
        wr32(sp0 - 0xd0u, sp0 - 0xa4u);
        wr32(sp0 - 0xccu, sp0 - 0xa4u);
        (void)sp0;
        return 1;
    }
    case 0x10187fe3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xdcu;
        g->edi = self + 0x17cu;
        wr32(sp0 - 0x104u, sp0 - 0x94u);
        wr32(sp0 - 0x100u, sp0 - 0x94u);
        wr32(sp0 - 0xf8u, sp0 - 0x94u);
        wr32(sp0 - 0xf0u, sp0 - 0x50u);
        wr32(sp0 - 0xe0u, sp0 - 0xb4u);
        wr32(sp0 - 0xdcu, sp0 - 0xa4u);
        wr32(sp0 - 0xd4u, sp0 - 0x50u);
        wr32(sp0 - 0xd0u, sp0 - 0xa4u);
        wr32(sp0 - 0xccu, sp0 - 0xa4u);
        (void)sp0;
        return 1;
    }
    case 0x10187feeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xe4u;
        g->edi = self + 0x17cu;
        wr32(sp0 - 0x104u, sp0 - 0x94u);
        wr32(sp0 - 0x100u, sp0 - 0x94u);
        wr32(sp0 - 0xf8u, sp0 - 0x94u);
        wr32(sp0 - 0xf0u, sp0 - 0x50u);
        wr32(sp0 - 0xe0u, sp0 - 0xa4u);
        wr32(sp0 - 0xdcu, sp0 - 0xa4u);
        wr32(sp0 - 0xd4u, sp0 - 0x50u);
        wr32(sp0 - 0xd0u, sp0 - 0xa4u);
        wr32(sp0 - 0xccu, sp0 - 0xa4u);
        (void)sp0;
        return 1;
    }
    case 0x10187ff4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xe8u;
        g->edi = self + 0x17cu;
        wr32(sp0 - 0x104u, sp0 - 0x94u);
        wr32(sp0 - 0x100u, sp0 - 0x94u);
        wr32(sp0 - 0xf8u, sp0 - 0x94u);
        wr32(sp0 - 0xf0u, sp0 - 0x50u);
        wr32(sp0 - 0xe0u, sp0 - 0xa4u);
        wr32(sp0 - 0xdcu, sp0 - 0xa4u);
        wr32(sp0 - 0xd4u, sp0 - 0x50u);
        wr32(sp0 - 0xd0u, sp0 - 0xa4u);
        wr32(sp0 - 0xccu, sp0 - 0xa4u);
        (void)sp0;
        return 1;
    }
    case 0x10188002u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xf0u;
        wr32(sp0 - 0x104u, sp0 - 0x94u);
        wr32(sp0 - 0x100u, sp0 - 0x94u);
        wr32(sp0 - 0xf8u, sp0 - 0x94u);
        wr32(sp0 - 0xf0u, sp0 - 0x50u);
        wr32(sp0 - 0xe0u, sp0 - 0xa4u);
        wr32(sp0 - 0xdcu, sp0 - 0xa4u);
        wr32(sp0 - 0xd4u, sp0 - 0x50u);
        wr32(sp0 - 0xd0u, sp0 - 0xa4u);
        wr32(sp0 - 0xccu, sp0 - 0xa4u);
        (void)sp0;
        return 1;
    }
    case 0x10188017u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0xf8u;
        g->edi = self + 0x18cu;
        wr32(sp0 - 0x104u, sp0 - 0x94u);
        wr32(sp0 - 0x100u, sp0 - 0x94u);
        wr32(sp0 - 0xf8u, sp0 - 0x84u);
        wr32(sp0 - 0xf0u, sp0 - 0x50u);
        wr32(sp0 - 0xe0u, sp0 - 0xa4u);
        wr32(sp0 - 0xdcu, sp0 - 0xa4u);
        wr32(sp0 - 0xd4u, sp0 - 0x50u);
        wr32(sp0 - 0xd0u, sp0 - 0xa4u);
        wr32(sp0 - 0xccu, sp0 - 0xa4u);
        (void)sp0;
        return 1;
    }
    case 0x10188026u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x100u;
        g->edi = self + 0x18cu;
        wr32(sp0 - 0x104u, sp0 - 0x94u);
        wr32(sp0 - 0x100u, sp0 - 0x84u);
        wr32(sp0 - 0xf8u, sp0 - 0x84u);
        wr32(sp0 - 0xf0u, sp0 - 0x50u);
        wr32(sp0 - 0xe0u, sp0 - 0xa4u);
        wr32(sp0 - 0xdcu, sp0 - 0xa4u);
        wr32(sp0 - 0xd4u, sp0 - 0x50u);
        wr32(sp0 - 0xd0u, sp0 - 0xa4u);
        wr32(sp0 - 0xccu, sp0 - 0xa4u);
        (void)sp0;
        return 1;
    }
    case 0x10188031u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x108u;
        wr32(sp0 - 0x104u, sp0 - 0x84u);
        wr32(sp0 - 0x100u, sp0 - 0x84u);
        wr32(sp0 - 0xf8u, sp0 - 0x84u);
        wr32(sp0 - 0xf0u, sp0 - 0x50u);
        wr32(sp0 - 0xe0u, sp0 - 0xa4u);
        wr32(sp0 - 0xdcu, sp0 - 0xa4u);
        wr32(sp0 - 0xd4u, sp0 - 0x50u);
        wr32(sp0 - 0xd0u, sp0 - 0xa4u);
        wr32(sp0 - 0xccu, sp0 - 0xa4u);
        (void)sp0;
        return 1;
    }
    case 0x10188049u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xc4u;
        wr32(sp0 - 0x104u, sp0 - 0x84u);
        wr32(sp0 - 0x100u, sp0 - 0x84u);
        wr32(sp0 - 0xf8u, sp0 - 0x84u);
        wr32(sp0 - 0xf0u, sp0 - 0x50u);
        wr32(sp0 - 0xe0u, sp0 - 0xa4u);
        wr32(sp0 - 0xdcu, sp0 - 0xa4u);
        wr32(sp0 - 0xd4u, sp0 - 0x50u);
        wr32(sp0 - 0xd0u, sp0 - 0xa4u);
        wr32(sp0 - 0xccu, sp0 - 0xa4u);
        (void)sp0;
        return 1;
    }
    case 0x1018804bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xc4u;
        wr32(sp0 - 0x104u, sp0 - 0x84u);
        wr32(sp0 - 0x100u, sp0 - 0x84u);
        wr32(sp0 - 0xf8u, sp0 - 0x84u);
        wr32(sp0 - 0xf0u, sp0 - 0x50u);
        wr32(sp0 - 0xe0u, sp0 - 0xa4u);
        wr32(sp0 - 0xdcu, sp0 - 0xa4u);
        wr32(sp0 - 0xd4u, sp0 - 0x50u);
        wr32(sp0 - 0xd0u, sp0 - 0xa4u);
        wr32(sp0 - 0xccu, sp0 - 0xa4u);
        (void)sp0;
        return 1;
    }
    case 0x1018805eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi - 0x19cu;
        g->esp = sp0 - 0xc4u;
        wr32(sp0 - 0x104u, sp0 - 0x84u);
        wr32(sp0 - 0x100u, sp0 - 0x84u);
        wr32(sp0 - 0xf8u, sp0 - 0x84u);
        wr32(sp0 - 0xf0u, sp0 - 0x50u);
        wr32(sp0 - 0xe0u, sp0 - 0xa4u);
        wr32(sp0 - 0xdcu, sp0 - 0xa4u);
        wr32(sp0 - 0xd4u, sp0 - 0x50u);
        wr32(sp0 - 0xd0u, sp0 - 0xa4u);
        wr32(sp0 - 0xccu, sp0 - 0xa4u);
        (void)sp0;
        return 1;
    }
    case 0x10188069u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi - 0x19cu;
        g->esp = sp0 - 0xccu;
        wr32(sp0 - 0x104u, sp0 - 0x84u);
        wr32(sp0 - 0x100u, sp0 - 0x84u);
        wr32(sp0 - 0xf8u, sp0 - 0x84u);
        wr32(sp0 - 0xf0u, sp0 - 0x50u);
        wr32(sp0 - 0xe0u, sp0 - 0xa4u);
        wr32(sp0 - 0xdcu, sp0 - 0xa4u);
        wr32(sp0 - 0xd4u, sp0 - 0x50u);
        wr32(sp0 - 0xd0u, sp0 - 0xa4u);
        wr32(sp0 - 0xccu, sp0 - 0x74u);
        (void)sp0;
        return 1;
    }
    case 0x10188078u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi - 0x19cu;
        g->esp = sp0 - 0xd4u;
        wr32(sp0 - 0x104u, sp0 - 0x84u);
        wr32(sp0 - 0x100u, sp0 - 0x84u);
        wr32(sp0 - 0xf8u, sp0 - 0x84u);
        wr32(sp0 - 0xf0u, sp0 - 0x50u);
        wr32(sp0 - 0xe0u, sp0 - 0xa4u);
        wr32(sp0 - 0xdcu, sp0 - 0xa4u);
        wr32(sp0 - 0xd4u, sp0 - 0x74u);
        wr32(sp0 - 0xccu, sp0 - 0x74u);
        (void)sp0;
        return 1;
    }
    case 0x10188083u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0xdcu;
        wr32(sp0 - 0x104u, sp0 - 0x84u);
        wr32(sp0 - 0x100u, sp0 - 0x84u);
        wr32(sp0 - 0xf8u, sp0 - 0x84u);
        wr32(sp0 - 0xf0u, sp0 - 0x50u);
        wr32(sp0 - 0xe0u, sp0 - 0xa4u);
        wr32(sp0 - 0xd8u, sp0 - 0x74u);
        wr32(sp0 - 0xd4u, sp0 - 0x74u);
        wr32(sp0 - 0xccu, sp0 - 0x74u);
        (void)sp0;
        return 1;
    }
    case 0x10188088u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi - 0x19cu;
        g->esp = sp0 - 0xc4u;
        wr32(sp0 - 0x104u, sp0 - 0x84u);
        wr32(sp0 - 0x100u, sp0 - 0x84u);
        wr32(sp0 - 0xf8u, sp0 - 0x84u);
        wr32(sp0 - 0xf0u, sp0 - 0x50u);
        wr32(sp0 - 0xe0u, sp0 - 0xa4u);
        wr32(sp0 - 0xdcu, sp0 - 0xa4u);
        wr32(sp0 - 0xd4u, sp0 - 0x50u);
        wr32(sp0 - 0xd0u, sp0 - 0xa4u);
        wr32(sp0 - 0xccu, sp0 - 0xa4u);
        (void)sp0;
        return 1;
    }
    case 0x10188093u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0xccu;
        wr32(sp0 - 0x104u, sp0 - 0x84u);
        wr32(sp0 - 0x100u, sp0 - 0x84u);
        wr32(sp0 - 0xf8u, sp0 - 0x84u);
        wr32(sp0 - 0xf0u, sp0 - 0x50u);
        wr32(sp0 - 0xe0u, sp0 - 0xa4u);
        wr32(sp0 - 0xdcu, sp0 - 0xa4u);
        wr32(sp0 - 0xd4u, sp0 - 0x50u);
        wr32(sp0 - 0xd0u, sp0 - 0xa4u);
        (void)sp0;
        return 1;
    }
    case 0x10188096u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x101880a2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0xc4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10187720(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10187720(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
