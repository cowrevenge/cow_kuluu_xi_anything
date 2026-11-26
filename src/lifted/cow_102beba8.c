/* f_0x102beba8 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102beba8(Guest* g)
{
    uint32_t cf;
    double d104;
    double d105;
    double d106;
    double d107;
    double d109;
    double d11;
    double d110;
    double d114;
    double d115;
    double d119;
    double d121;
    double d125;
    double d126;
    double d132;
    double d133;
    double d137;
    double d138;
    double d142;
    double d144;
    double d148;
    double d149;
    double d153;
    double d155;
    double d159;
    double d160;
    double d164;
    double d166;
    double d170;
    double d171;
    double d175;
    double d177;
    double d181;
    double d182;
    double d186;
    double d188;
    double d192;
    double d193;
    double d26;
    double d27;
    double d30;
    double d34;
    double d35;
    double d39;
    double d40;
    double d44;
    double d46;
    double d50;
    double d51;
    double d55;
    double d57;
    double d61;
    double d62;
    double d66;
    double d68;
    double d7;
    double d72;
    double d73;
    double d77;
    double d79;
    double d8;
    double d83;
    double d84;
    double d88;
    double d90;
    double d94;
    double d95;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    double loc_18_d;
    double loc_20_d;
    uint32_t loc_24;
    double loc_30_d;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t loc_4;
    double loc_c_d;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t101;
    uint32_t t102;
    uint32_t t103;
    uint32_t t108;
    uint32_t t111;
    uint32_t t112;
    uint32_t t113;
    uint32_t t116;
    uint32_t t117;
    uint32_t t118;
    uint32_t t12;
    uint32_t t120;
    uint32_t t122;
    uint32_t t123;
    uint32_t t124;
    uint32_t t127;
    uint32_t t128;
    uint32_t t129;
    uint32_t t13;
    uint32_t t130;
    uint32_t t131;
    uint32_t t134;
    uint32_t t135;
    uint32_t t136;
    uint32_t t139;
    uint32_t t14;
    uint32_t t140;
    uint32_t t141;
    uint32_t t143;
    uint32_t t145;
    uint32_t t146;
    uint32_t t147;
    uint32_t t15;
    uint32_t t150;
    uint32_t t151;
    uint32_t t152;
    uint32_t t154;
    uint32_t t156;
    uint32_t t157;
    uint32_t t158;
    uint32_t t16;
    uint32_t t161;
    uint32_t t162;
    uint32_t t163;
    uint32_t t165;
    uint32_t t167;
    uint32_t t168;
    uint32_t t169;
    uint32_t t17;
    uint32_t t172;
    uint32_t t173;
    uint32_t t174;
    uint32_t t176;
    uint32_t t178;
    uint32_t t179;
    uint32_t t18;
    uint32_t t180;
    uint32_t t183;
    uint32_t t184;
    uint32_t t185;
    uint32_t t187;
    uint32_t t189;
    uint32_t t19;
    uint32_t t190;
    uint32_t t191;
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
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t4;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t45;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t56;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t67;
    uint32_t t69;
    uint32_t t70;
    uint32_t t71;
    uint32_t t74;
    uint32_t t75;
    uint32_t t76;
    uint32_t t78;
    uint32_t t80;
    uint32_t t81;
    uint32_t t82;
    uint32_t t85;
    uint32_t t86;
    uint32_t t87;
    uint32_t t89;
    uint32_t t9;
    uint32_t t91;
    uint32_t t92;
    uint32_t t93;
    uint32_t t96;
    uint32_t t97;
    uint32_t t98;
    uint32_t t99;
    double x0;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 80u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102bebcau: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_102bebca;
    case 0x102bebd3u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_102bebd3;
    case 0x102bebd8u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_102bebd8;
    case 0x102bebe2u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_102bebe2;
    case 0x102bebe5u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_102bebe5;
    case 0x102bebe9u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_102bebe9;
    case 0x102bebeeu: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_102bebee;
    case 0x102bebf7u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_102bebf7;
    case 0x102bec00u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_102bec00;
    case 0x102bec0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_102bec0f;
    case 0x102bec1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_102bec1e;
    case 0x102bec2cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_102bec2c;
    case 0x102bec2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_10 = rd32(sp0 - 0x10u); loc_4 = rd32(sp0 - 4u); goto E_102bec2f;
    case 0x102bec3fu: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_102bec3f;
    case 0x102bec44u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_102bec44;
    case 0x102bec72u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102bec72;
    case 0x102bec79u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_10 = rd32(sp0 - 0x10u); loc_4 = rd32(sp0 - 4u); goto E_102bec79;
    case 0x102bec8eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102bec8e;
    case 0x102bec98u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102bec98;
    case 0x102becb4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102becb4;
    case 0x102becc3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102becc3;
    case 0x102becd2u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102becd2;
    case 0x102becd8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102becd8;
    case 0x102becdfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102becdf;
    case 0x102bece3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102bece3;
    case 0x102bece6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102bece6;
    case 0x102becebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102beceb;
    case 0x102becefu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102becef;
    case 0x102becf3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102becf3;
    case 0x102bed01u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102bed01;
    case 0x102bed07u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102bed07;
    case 0x102bed12u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102bed12;
    case 0x102bed1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102bed1c;
    case 0x102bed39u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); goto E_102bed39;
    case 0x102bed80u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); goto E_102bed80;
    case 0x102bed86u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); goto E_102bed86;
    case 0x102bed89u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); goto E_102bed89;
    case 0x102bed8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); goto E_102bed8c;
    case 0x102bed90u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); goto E_102bed90;
    case 0x102bed98u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); goto E_102bed98;
    case 0x102bed9eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); goto E_102bed9e;
    case 0x102bedb9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); goto E_102bedb9;
    case 0x102bedbfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102bedbf;
    case 0x102bedc4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_30_d = rdf64(sp0 - 0x30u); loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102bedc4;
    case 0x102beddau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102bedda;
    case 0x102bede9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102bede9;
    case 0x102bee06u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102bee06;
    case 0x102bee2bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102bee2b;
    case 0x102bee3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102bee3c;
    case 0x102bee61u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102bee61;
    case 0x102bee72u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102bee72;
    case 0x102bee97u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102bee97;
    case 0x102beeabu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102beeab;
    case 0x102beed3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102beed3;
    case 0x102beee4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102beee4;
    case 0x102bef09u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102bef09;
    case 0x102bef1au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102bef1a;
    case 0x102bef3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102bef3f;
    case 0x102bef53u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); goto E_102bef53;
    case 0x102bef61u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); goto E_102bef61;
    case 0x102bef67u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); goto E_102bef67;
    case 0x102bef76u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); goto E_102bef76;
    case 0x102bef87u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); goto E_102bef87;
    case 0x102bef8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); goto E_102bef8b;
    case 0x102bef99u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); goto E_102bef99;
    case 0x102bf07au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); goto E_102bf07a;
    case 0x102bf0a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102bf0a3;
    case 0x102bf0a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102bf0a8;
    case 0x102bf0b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102bf0b5;
    case 0x102bf0bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102bf0ba;
    case 0x102bf0e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_20_d = rdf64(sp0 - 0x20u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102bf0e7;
    case 0x102bf0eau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_20_d = rdf64(sp0 - 0x20u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102bf0ea;
    case 0x102bf0edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_20_d = rdf64(sp0 - 0x20u); loc_18_d = rdf64(sp0 - 0x18u); loc_c_d = rdf64(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102bf0ed;
    case 0x102bf0f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_20_d = rdf64(sp0 - 0x20u); loc_18_d = rdf64(sp0 - 0x18u); loc_c_d = rdf64(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102bf0f3;
    case 0x102bf111u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_20_d = rdf64(sp0 - 0x20u); loc_18_d = rdf64(sp0 - 0x18u); loc_c_d = rdf64(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102bf111;
    case 0x102bf119u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_20_d = rdf64(sp0 - 0x20u); loc_18_d = rdf64(sp0 - 0x18u); loc_c_d = rdf64(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102bf119;
    case 0x102bf127u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_20_d = rdf64(sp0 - 0x20u); loc_18_d = rdf64(sp0 - 0x18u); loc_c_d = rdf64(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102bf127;
    case 0x102bf152u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102bf152;
    case 0x102bf160u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102bf160;
    case 0x102bf186u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102bf186;
    case 0x102bf197u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102bf197;
    case 0x102bf1aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102bf1ae;
    case 0x102bf1b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102bf1b9;
    case 0x102bf1beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102bf1be;
    case 0x102bf1f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102bf1f0;
    case 0x102bf20eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102bf20e;
    case 0x102bf21cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102bf21c;
    case 0x102bf242u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102bf242;
    case 0x102bf250u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102bf250;
    case 0x102bf276u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102bf276;
    case 0x102bf284u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102bf284;
    case 0x102bf2aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102bf2aa;
    case 0x102bf2b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102bf2b8;
    case 0x102bf2deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102bf2de;
    case 0x102bf2ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102bf2ec;
    case 0x102bf312u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102bf312;
    case 0x102bf323u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102bf323;
    case 0x102bf32fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102bf32f;
    case 0x102bf339u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102bf339;
    case 0x102bf34eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102bf34e;
    case 0x102bf353u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102bf353;
    case 0x102bf387u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102bf387;
    case 0x102bf38cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102bf38c;
    case 0x102bf394u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102bf394;
    case 0x102bf39eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102bf39e;
    case 0x102bf3d3u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_24 = rd32(sp0 - 0x24u); goto E_102bf3d3;
    case 0x102bf3d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_24 = rd32(sp0 - 0x24u); goto E_102bf3d6;
    case 0x102bf3e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_24 = rd32(sp0 - 0x24u); goto E_102bf3e3;
    case 0x102bf3f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_24 = rd32(sp0 - 0x24u); goto E_102bf3f1;
    case 0x102bf3fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_24 = rd32(sp0 - 0x24u); goto E_102bf3fa;
    case 0x102bf49cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_24 = rd32(sp0 - 0x24u); goto E_102bf49c;
    case 0x102bf4a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); goto E_102bf4a9;
    case 0x102bf4b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); goto E_102bf4b3;
    case 0x102bf4bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); goto E_102bf4bd;
    case 0x102bf4ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); goto E_102bf4eb;
    case 0x102bf4efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); goto E_102bf4ef;
    case 0x102bf4f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); goto E_102bf4f1;
    case 0x102bf4f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); goto E_102bf4f5;
    case 0x102bf4f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); goto E_102bf4f9;
    case 0x102bf4fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); goto E_102bf4fd;
    case 0x102bf501u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); goto E_102bf501;
    case 0x102bf505u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); goto E_102bf505;
    case 0x102bf509u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); goto E_102bf509;
    case 0x102bf515u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); goto E_102bf515;
    case 0x102bf51au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); goto E_102bf51a;
    case 0x102bf54bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); goto E_102bf54b;
    default: break;
    }
#endif

    COW_AT(102beba8)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x34u, in_ebx);
    wr32(sp0 - 0x38u, in_esi);
    wr32(sp0 - 0x3cu, in_edi);
    t1 = rd8(rd32(sp0 + 4u) + 0x126u);
    wr32(sp0 - 0x10u, t1);
    if (!(rd32(rd32(sp0 + 4u) + 0x70u) >> 8u & 1u))
    {
        eax = rd32(rd32(sp0 + 4u) + 0x70u);
        ecx = self;
        edx = t1;
        ebx = rd32(sp0 + 4u);
        loc_4 = in_ebp;
        loc_34 = in_ebx;
        loc_38 = in_esi;
        loc_3c = in_edi;
        loc_10 = t1;
    }
    else
    {
        eax = rd32(rd32(sp0 + 4u) + 0x70u);
        edx = t1;
        ebx = rd32(sp0 + 4u);
        loc_10 = t1;
    COW_AT(102bebca)
        if ((eax >> 8u & 0x10u) == 0u)
        {
            ecx = self;
            loc_4 = in_ebp;
            loc_34 = in_ebx;
            loc_38 = in_esi;
            loc_3c = in_edi;
        }
        else
        {
    COW_AT(102bebd3)
            if ((edx & 2u) != 0u) goto L_102bec3f;
    COW_AT(102bebd8)
            if (rd8(ebx + 0x127u) == 1u)
            {
                eax = rd8(ebx + 0x127u) - 1u;
                goto L_102bec1e;
            }
            eax = rd8(ebx + 0x127u) - 1u;
    COW_AT(102bebe2)
            if (eax == 1u)
            {
                eax = eax - 1u;
                goto L_102bec0f;
            }
            eax = eax - 1u;
    COW_AT(102bebe5)
            if (eax == 2u)
            {
                eax = eax - 2u;
                goto L_102bec00;
            }
            eax = eax - 2u;
    COW_AT(102bebe9)
            if (eax == 4u)
            {
                eax = eax - 4u;
                goto L_102bebf7;
            }
            eax = eax - 4u;
    COW_AT(102bebee)
            if (eax != 8u)
            {
                eax = eax - 8u;
                ecx = self;
                loc_4 = in_ebp;
                loc_34 = in_ebx;
                loc_38 = in_esi;
                loc_3c = in_edi;
                goto L_102bec79;
            }
            eax = eax - 8u;
L_102bebf7: ;
    COW_AT(102bebf7)
            eax = (eax & 0xffff0000u) | rd16(ebx + 0x140u);
            ecx = self;
            loc_4 = in_ebp;
            loc_34 = in_ebx;
            loc_38 = in_esi;
            loc_3c = in_edi;
L_102bec2f: ;
    COW_AT(102bec2f)
            wr16(ebx + 0x13cu, (uint16_t)eax);
            wr16(ebx + 0x13au, (uint16_t)eax);
L_102bec72: ;
    COW_AT(102bec72)
            wr16(ebx + 0x13eu, (uint16_t)eax);
            loc_4 = rd32(sp0 - 4u);
            loc_34 = rd32(sp0 - 0x34u);
            loc_38 = rd32(sp0 - 0x38u);
            loc_3c = rd32(sp0 - 0x3cu);
            loc_10 = rd32(sp0 - 0x10u);
        }
    }
L_102bec79: ;
    COW_AT(102bec79)
    esi = ebx + 0x138u;
    edi = ebx + 0x142u;
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr16(edi, rd16(esi)); esi += (g->df ? (uint32_t)-2 : 2u); edi += (g->df ? (uint32_t)-2 : 2u);
    if (edx == 3u)
    {
    COW_AT(102bec8e)
        t6 = rd16(ebx + 0x11au);
        if ((uint16_t)t6 != 0u)
        {
    COW_AT(102bec98)
            d7 = fr(g, (double)rdf32(ebx + 0x160u) * (double)rdf32(ebx + 0x15cu));
            wr32(sp0 - 0x40u, ecx);
            wr32(sp0 - 0x44u, ecx);
            d8 = fr(g, d7 - rdf64(COW_IMG(0x1032a100u)));
            wrf64(sp0 - 0x44u, d8);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x38u;
            COW_RET(0x102becb4u);
            t9 = cow_thiscall_cdecl(g, COW_IMG(0x1031731cu), ecx, 3, cow_dlo(d8), cow_dhi(d8), rd32(sp0 - 0x3cu));
            t10 = g->edx;
            d11 = cow_take_float(g);
            eax = t9;
            edx = t10;
            x0 = d11;
    COW_AT(102becb4)
            if (!(x0 < rdf64(COW_IMG(0x1033cd90u))))
            {
                ecx = rd32(sp0 - 0x40u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, rdf64(COW_IMG(0x1033cd90u)), 0u);
    COW_AT(102becc3)
                if ((int32_t)rd16(ebx + 0x11au) <= 0)
                {
                    ecx = 0u;
                    edi = 0u;
                    goto L_102becef;
                }
                esi = rd16(ebx + 0x11au);
    COW_AT(102becd2)
                ecx = 0u;
                edx = rd32(ebx + 0x188u);
                edi = 0u;
L_102becd8: ;
    COW_AT(102becd8)
                if (rd8(ecx + edx) == 0u)
                {
                    eax = (eax & 0xffffff00u) | rd8(ecx + edx);
                }
                else
                {
                    eax = (eax & 0xffffff00u) | rd8(ecx + edx);
    COW_AT(102becdf)
                    if ((uint8_t)eax != 0xffu)
                    {
    COW_AT(102bece3)
                        edi = 1u;
                    }
                }
    COW_AT(102bece6)
                if ((int32_t)(ecx + 1u) < (int32_t)esi)
                {
                    ecx = ecx + 1u;
                    goto L_102becd8;
                }
                ecx = ecx + 1u;
    COW_AT(102beceb)
                if (edi != 0u) goto L_102becf3;
L_102becef: ;
    COW_AT(102becef)
                t12 = rd8(ebx + 0x71u);
                wr8(ebx + 0x71u, t12 & 0xdfu);
            }
        }
    }
L_102becf3: ;
    COW_AT(102becf3)
    if ((rd32(ebx + 0x70u) & 0x602000u) == 0u)
    {
        eax = rd32(ebx + 0x70u);
    COW_AT(102bf38c)
        if ((int8_t)eax < 0)
        {
    COW_AT(102bf394)
            t196 = rd32(sp0 - 0x10u);
            if (t196 == 3u)
            {
    COW_AT(102bf39e)
                t197 = rd8(ebx + 0x13au);
                t198 = rd16(ebx + 0x11au);
                t199 = rd32(ebx + 0x114u);
                wr8(sp0 + 4u, (uint8_t)t197);
                t200 = rd8(ebx + 0x13cu);
                wr8(sp0 + 5u, (uint8_t)t200);
                wr32(sp0 - 0x24u, t198);
                wr8(sp0 + 6u, rd8(ebx + 0x13eu));
                if ((int32_t)t198 > 0)
                {
                    esi = t199;
                    loc_24 = t198;
    COW_AT(102bf3d3)
                    eax = esi + 2u;
                    ecx = 0u;
L_102bf3d6: ;
    COW_AT(102bf3d6)
                    if (rd8(ecx + rd32(ebx + 0x188u)) != 0u)
                    {
                        edx = (rd32(ebx + 0x188u) & 0xffffff00u) | rd8(ecx + rd32(ebx + 0x188u));
    COW_AT(102bf3f1)
                        if ((uint8_t)edx != 0xffu)
                        {
    COW_AT(102bf3fa)
                            t201 = (uint16_t)(((edi & 0xffff0000u) | rd8(eax - 2u)) * ((esi & 0xffff0000u) | (uint8_t)edx) + (0xffu - ((esi & 0xffff0000u) | (uint8_t)edx)) * ((edi & 0xffff0000u) | rd8(sp0 + 4u)) + 0x80u);
                            t202 = rd8(eax - 2u);
                            t203 = rd8(sp0 + 5u);
                            wr8(eax - 2u, (uint8_t)(uint32_t)((int32_t)(t201 + (t201 >> 8u)) >> 8u));
                            t204 = (0xffu - ((t201 & 0xffff0000u) | rd8(ecx + rd32(ebx + 0x188u)))) * ((((edi & 0xffff0000u) | t202) * ((esi & 0xffff0000u) | (uint8_t)edx) & 0xffff0000u) | t203) + (((((edi & 0xffff0000u) | t202) * ((esi & 0xffff0000u) | (uint8_t)edx) | t203) & 0xffff0000u) | rd8(eax - 1u)) * ((t201 & 0xffff0000u) | rd8(ecx + rd32(ebx + 0x188u))) + 0x80u;
                            t205 = rd8(eax - 1u);
                            t206 = rd8(ecx + rd32(ebx + 0x188u));
                            t207 = rd8(sp0 + 6u);
                            wr8(eax - 1u, (uint8_t)(uint32_t)((int32_t)((uint16_t)t204 + ((uint16_t)t204 >> 8u)) >> 8u));
                            t208 = (0xffu - rd8(ecx + rd32(ebx + 0x188u))) * (((((((edi & 0xffff0000u) | t202) * ((esi & 0xffff0000u) | (uint8_t)edx) | t203) & 0xffff0000u) | t205) * ((t201 & 0xffff0000u) | t206) & 0xffff0000u) | t207) + ((((((((edi & 0xffff0000u) | t202) * ((esi & 0xffff0000u) | (uint8_t)edx) | t203) & 0xffff0000u) | t205) * ((t201 & 0xffff0000u) | t206) | t207) & 0xffff0000u) | rd8(eax)) * rd8(ecx + rd32(ebx + 0x188u)) + 0x80u;
                            t209 = rd8(eax);
                            t210 = rd8(ecx + rd32(ebx + 0x188u));
                            wr8(eax, (uint8_t)(uint32_t)((int32_t)((uint16_t)t208 + ((uint16_t)t208 >> 8u)) >> 8u));
                            edi = ((((((((edi & 0xffff0000u) | t202) * ((esi & 0xffff0000u) | (uint8_t)edx) | t203) & 0xffff0000u) | t205) * ((t201 & 0xffff0000u) | t206) | t207) & 0xffff0000u) | t209) * t210;
                            esi = (uint16_t)t208;
                            loc_24 = rd32(sp0 - 0x24u);
                        }
                    }
                    else
                    {
    COW_AT(102bf3e3)
                        esi = sp0 + 4u;
                        edi = eax - 2u;
                        wr16(edi, rd16(esi)); esi += (g->df ? (uint32_t)-2 : 2u); edi += (g->df ? (uint32_t)-2 : 2u);
                        wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u);
                        loc_24 = rd32(sp0 - 0x24u);
                    }
    COW_AT(102bf49c)
                    if ((int32_t)(ecx + 1u) < (int32_t)loc_24)
                    {
                        eax = eax + 3u;
                        ecx = ecx + 1u;
                        goto L_102bf3d6;
                    }
                }
            }
        }
    }
    else
    {
        eax = rd32(ebx + 0x70u);
    COW_AT(102bed01)
        wr32(sp0 - 0x40u, ebx);
        g->esp = sp0 - 0x3cu;
        COW_RET(0x102bed07u);
        cow_call_regs(g, COW_IMG(0x102c20d9u), eax, g->ecx, edx, 1, 1, ebx);
        t13 = g->edx;
        edx = t13;
    COW_AT(102bed07)
        t14 = rd8(ebx + 0x70u);
        if ((t14 & 0x80u) == 0u)
        {
    COW_AT(102bf32f)
            t195 = rd32(sp0 - 0x10u);
            if (t195 == 3u)
            {
    COW_AT(102bf339)
                if ((int32_t)rd16(ebx + 0x118u) > 0)
                {
                    eax = rd32(ebx + 0x114u);
                    ecx = rd16(ebx + 0x118u);
    COW_AT(102bf34e)
                    eax = eax + 2u;
                    esi = ecx;
L_102bf353: ;
    COW_AT(102bf353)
                    wr8(eax - 2u, rd8(rd32(ebx + 0x164u) + rd8(eax - 2u)));
                    wr8(eax - 1u, rd8(rd32(ebx + 0x164u) + rd8(eax - 1u)));
                    wr8(eax, rd8(rd8(eax) + rd32(ebx + 0x164u)));
                    if (esi != 1u)
                    {
                        eax = eax + 3u;
                        esi = esi - 1u;
                        goto L_102bf353;
                    }
    COW_AT(102bf387)
                }
            }
        }
        else
        {
            ecx = rd32(sp0 - 0x40u);
    COW_AT(102bed12)
            t15 = rd32(sp0 - 0x10u);
            if (t15 != 3u)
            {
    COW_AT(102bf0ba)
                t102 = rd32(sp0 - 0x2cu);
                wr32(sp0 - 0x2cu, 0u);
                t103 = (1u << (rd8(ebx + 0x127u) & 0x1fu)) - 1u;
                wr32(sp0 - 0x30u, t103);
                d104 = (double)(int64_t)cow_i64(t103, 0u);
                wrf64(sp0 - 0x20u, d104);
                wrf64(sp0 - 0x18u, 1.0);
                wrf64(sp0 - 0xcu, 1.0);
                if (rd8(ebx + 0x130u) == 1u)
                {
                    ecx = (ecx & 0xffffff00u) | rd8(ebx + 0x127u);
                    loc_20_d = d104;
                    x0 = (double)(int64_t)cow_i64(t103, 0u);
    COW_AT(102bf119)
                    d107 = (double)rdf32(ebx + 0x160u);
                    wrf64(sp0 - 0x18u, d107);
                    wrf64(sp0 - 0xcu, 1.0);
                    loc_18_d = d107;
                    loc_c_d = 1.0;
                }
                else
                {
                    eax = rd8(ebx + 0x130u) - 1u;
                    ecx = (ecx & 0xffffff00u) | rd8(ebx + 0x127u);
                    loc_20_d = d104;
                    x0 = (double)(int64_t)cow_i64(t103, 0u);
    COW_AT(102bf0e7)
                    if (eax == 1u) goto L_102bf111;
                    eax = eax - 1u;
    COW_AT(102bf0ea)
                    if (eax != 1u)
                    {
                        loc_18_d = 1.0;
                        loc_c_d = 1.0;
                        goto L_102bf127;
                    }
    COW_AT(102bf0ed)
                    eax = ebx + 0x134u;
L_102bf0f3: ;
    COW_AT(102bf0f3)
                    d105 = fr(g, rdf64(COW_IMG(0x1032a100u)) / (double)rdf32(eax));
                    wrf64(sp0 - 0x18u, d105);
                    d106 = fr(g, rdf64(COW_IMG(0x1032a100u)) / fr(g, (double)rdf32(ebx + 0x160u) * (double)rdf32(eax)));
                    wrf64(sp0 - 0xcu, d106);
                    loc_18_d = d105;
                    loc_c_d = d106;
                }
L_102bf127: ;
    COW_AT(102bf127)
                t108 = rd16(ebx + 0x140u);
                wr32(sp0 + 4u, t108);
                d109 = fr(g, 1.0 / x0);
                wrf64(sp0 - 0x28u, d109);
                wrf64(sp0 - 0x44u, loc_18_d);
                d110 = fr(g, (double)(int32_t)rd32(sp0 + 4u) * d109);
                wrf64(sp0 - 0x4cu, d110);
                g->eax = t108;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x3cu;
                COW_RET(0x102bf152u);
                t111 = cow_cdecl(g, COW_IMG(0x10312ce9u), 4, cow_dlo(d110), cow_dhi(d110), cow_dlo(loc_18_d), cow_dhi(loc_18_d));
                t112 = g->ecx;
                t113 = g->edx;
                d114 = cow_take_float(g);
                eax = t111;
                ecx = t112;
                edx = t113;
                x0 = d114;
    COW_AT(102bf152)
                g->ecx = ecx;
                g->edx = edx;
                d115 = fr(g, fr(g, x0 * rdf64(sp0 - 0x20u)) + rdf64(COW_IMG(0x1032ab90u)));
                fpush(g, d115);
                g->esp = sp0 - 0x4cu;
                COW_RET(0x102bf160u);
                t116 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                t117 = g->ecx;
                t118 = g->edx;
                eax = t116;
                ecx = t117;
                edx = t118;
    COW_AT(102bf160)
                d119 = rdf64(sp0 - 0xcu);
                wr16(ebx + 0x14au, (uint16_t)eax);
                wrf64(sp0 - 0x44u, d119);
                t120 = rd16(ebx + 0x140u);
                wr32(sp0 + 4u, t120);
                d121 = fr(g, (double)(int32_t)rd32(sp0 + 4u) * rdf64(sp0 - 0x28u));
                wrf64(sp0 - 0x4cu, d121);
                g->eax = t120;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x3cu;
                COW_RET(0x102bf186u);
                t122 = cow_cdecl(g, COW_IMG(0x10312ce9u), 4, cow_dlo(d121), cow_dhi(d121), cow_dlo(d119), cow_dhi(d119));
                t123 = g->ecx;
                t124 = g->edx;
                d125 = cow_take_float(g);
                eax = t122;
                ecx = t123;
                edx = t124;
                x0 = d125;
    COW_AT(102bf186)
                g->ecx = ecx;
                g->edx = edx;
                d126 = fr(g, fr(g, x0 * rdf64(sp0 - 0x20u)) + rdf64(COW_IMG(0x1032ab90u)));
                fpush(g, d126);
                g->esp = sp0 - 0x3cu;
                COW_RET(0x102bf197u);
                t127 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                t128 = g->ecx;
                t129 = g->edx;
                eax = t127;
                ecx = t128;
                edx = t129;
    COW_AT(102bf197)
                t130 = rd16(ebx + 0x13au);
                wr16(ebx + 0x140u, (uint16_t)eax);
                if ((uint16_t)t130 != rd16(ebx + 0x13cu))
                {
                    ecx = (ecx & 0xffff0000u) | t130;
                    goto L_102bf1f0;
                }
                ecx = (ecx & 0xffff0000u) | t130;
    COW_AT(102bf1ae)
                if ((uint16_t)ecx != rd16(ebx + 0x13eu))
                {
                    edx = ebx + 0x13eu;
                    goto L_102bf1f0;
                }
                edx = ebx + 0x13eu;
    COW_AT(102bf1b9)
                if ((uint16_t)ecx != (uint16_t)eax) goto L_102bf1f0;
    COW_AT(102bf1be)
                t131 = rd16(ebx + 0x14au);
                wr16(edx, (uint16_t)eax);
                wr16(ebx + 0x148u, (uint16_t)t131);
                wr16(ebx + 0x146u, (uint16_t)t131);
                wr16(ebx + 0x144u, (uint16_t)t131);
                wr16(ebx + 0x13cu, (uint16_t)eax);
                wr16(ebx + 0x13au, (uint16_t)eax);
            }
            else
            {
    COW_AT(102bed1c)
                t16 = rd32(ebx + 0x114u);
                wr32(sp0 - 0x24u, t16);
                t17 = rd16(ebx + 0x118u);
                wr32(sp0 - 0x14u, t17);
                if (rd8(ebx + 0x130u) != 2u)
                {
                    eax = (t17 & 0xffffff00u) | rd8(ebx + 0x130u);
                    loc_24 = t16;
                    loc_14 = t17;
    COW_AT(102bed80)
                    if ((uint8_t)eax == 1u)
                    {
                        eax = (uint8_t)eax - 1u;
                        goto L_102bedb9;
                    }
                    eax = (uint8_t)eax - 1u;
    COW_AT(102bed86)
                    if (eax == 1u) goto L_102bed98;
                    eax = eax - 1u;
    COW_AT(102bed89)
                    if (eax == 1u) goto L_102bed90;
                    eax = eax - 1u;
    COW_AT(102bed8c)
                    x0 = 1.0;
L_102bedbf: ;
    COW_AT(102bedbf)
                    wrf64(sp0 - 0x30u, x0);
                    loc_30_d = x0;
                    x0 = 1.0;
L_102bedc4: ;
    COW_AT(102bedc4)
                    wrf64(sp0 - 0x20u, x0);
                    d27 = fr(g, x0 - rdf64(COW_IMG(0x1032a100u)));
                    wr32(sp0 - 0x40u, ecx);
                    wr32(sp0 - 0x44u, ecx);
                    wrf64(sp0 - 0x44u, d27);
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x38u;
                    COW_RET(0x102beddau);
                    t28 = cow_thiscall_cdecl(g, COW_IMG(0x1031731cu), ecx, 3, cow_dlo(d27), cow_dhi(d27), rd32(sp0 - 0x3cu));
                    t29 = g->edx;
                    d30 = cow_take_float(g);
                    eax = t28;
                    edx = t29;
                    x0 = d30;
    COW_AT(102bedda)
                    if (!(x0 < rdf64(COW_IMG(0x1033cd90u))))
                    {
                        ecx = rd32(sp0 - 0x40u);
    COW_AT(102bee06)
                        t33 = rd16(ebx + 0x13au);
                        d34 = rdf64(sp0 - 0x20u);
                        wr32(sp0 + 4u, t33);
                        wrf64(sp0 - 0x44u, d34);
                        d35 = fr(g, (double)(int32_t)rd32(sp0 + 4u) * rdf64(COW_IMG(0x1033cd88u)));
                        wrf64(sp0 - 0x4cu, d35);
                        g->eax = t33;
                        g->ecx = ecx;
                        g->edx = edx;
                        g->esp = sp0 - 0x3cu;
                        COW_RET(0x102bee2bu);
                        t36 = cow_cdecl(g, COW_IMG(0x10312ce9u), 4, cow_dlo(d35), cow_dhi(d35), cow_dlo(d34), cow_dhi(d34));
                        t37 = g->ecx;
                        t38 = g->edx;
                        d39 = cow_take_float(g);
                        eax = t36;
                        ecx = t37;
                        edx = t38;
                        x0 = d39;
    COW_AT(102bee2b)
                        g->ecx = ecx;
                        g->edx = edx;
                        d40 = fr(g, fr(g, x0 * rdf64(COW_IMG(0x10342dc8u))) + rdf64(COW_IMG(0x1032ab90u)));
                        fpush(g, d40);
                        g->esp = sp0 - 0x4cu;
                        COW_RET(0x102bee3cu);
                        t41 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                        t42 = g->ecx;
                        t43 = g->edx;
                        eax = t41;
                        ecx = t42;
                        edx = t43;
    COW_AT(102bee3c)
                        d44 = rdf64(sp0 - 0x20u);
                        wr8(sp0 + 4u, (uint8_t)eax);
                        wrf64(sp0 - 0x44u, d44);
                        t45 = rd16(ebx + 0x13cu);
                        wr32(sp0 - 8u, t45);
                        d46 = fr(g, (double)(int32_t)t45 * rdf64(COW_IMG(0x1033cd88u)));
                        wrf64(sp0 - 0x4cu, d46);
                        g->eax = t45;
                        g->ecx = ecx;
                        g->edx = edx;
                        g->esp = sp0 - 0x3cu;
                        COW_RET(0x102bee61u);
                        t47 = cow_cdecl(g, COW_IMG(0x10312ce9u), 4, cow_dlo(d46), cow_dhi(d46), cow_dlo(d44), cow_dhi(d44));
                        t48 = g->ecx;
                        t49 = g->edx;
                        d50 = cow_take_float(g);
                        eax = t47;
                        ecx = t48;
                        edx = t49;
                        x0 = d50;
    COW_AT(102bee61)
                        g->ecx = ecx;
                        g->edx = edx;
                        d51 = fr(g, fr(g, x0 * rdf64(COW_IMG(0x10342dc8u))) + rdf64(COW_IMG(0x1032ab90u)));
                        fpush(g, d51);
                        g->esp = sp0 - 0x4cu;
                        COW_RET(0x102bee72u);
                        t52 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                        t53 = g->ecx;
                        t54 = g->edx;
                        eax = t52;
                        ecx = t53;
                        edx = t54;
    COW_AT(102bee72)
                        d55 = rdf64(sp0 - 0x20u);
                        wr8(sp0 + 5u, (uint8_t)eax);
                        wrf64(sp0 - 0x44u, d55);
                        t56 = rd16(ebx + 0x13eu);
                        wr32(sp0 - 8u, t56);
                        d57 = fr(g, (double)(int32_t)t56 * rdf64(COW_IMG(0x1033cd88u)));
                        wrf64(sp0 - 0x4cu, d57);
                        g->eax = t56;
                        g->ecx = ecx;
                        g->edx = edx;
                        g->esp = sp0 - 0x3cu;
                        COW_RET(0x102bee97u);
                        t58 = cow_cdecl(g, COW_IMG(0x10312ce9u), 4, cow_dlo(d57), cow_dhi(d57), cow_dlo(d55), cow_dhi(d55));
                        t59 = g->ecx;
                        t60 = g->edx;
                        d61 = cow_take_float(g);
                        eax = t58;
                        ecx = t59;
                        edx = t60;
                        x0 = d61;
    COW_AT(102bee97)
                        g->ecx = ecx;
                        g->edx = edx;
                        d62 = fr(g, fr(g, x0 * rdf64(COW_IMG(0x10342dc8u))) + rdf64(COW_IMG(0x1032ab90u)));
                        fpush(g, d62);
                        g->esp = sp0 - 0x3cu;
                        COW_RET(0x102beeabu);
                        t63 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                        t64 = g->ecx;
                        t65 = g->edx;
                        eax = t63;
                        ecx = t64;
                        edx = t65;
                    }
                    else
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, rdf64(COW_IMG(0x1033cd90u)), 0u);
                        ecx = rd32(sp0 - 0x40u);
    COW_AT(102bede9)
                        t31 = rd8(ebx + 0x13au);
                        wr8(sp0 + 4u, (uint8_t)t31);
                        t32 = rd8(ebx + 0x13cu);
                        wr8(sp0 + 5u, (uint8_t)t32);
                        eax = ((eax | t31 | t32) & 0xffffff00u) | rd8(ebx + 0x13eu);
                    }
    COW_AT(102beeab)
                    d66 = rdf64(sp0 - 0x30u);
                    wr8(sp0 + 6u, (uint8_t)eax);
                    wrf64(sp0 - 0x44u, d66);
                    t67 = rd16(ebx + 0x13au);
                    wr32(sp0 - 8u, t67);
                    d68 = fr(g, (double)(int32_t)t67 * rdf64(COW_IMG(0x1033cd88u)));
                    wrf64(sp0 - 0x4cu, d68);
                    g->eax = t67;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0x3cu;
                    COW_RET(0x102beed3u);
                    t69 = cow_cdecl(g, COW_IMG(0x10312ce9u), 4, cow_dlo(d68), cow_dhi(d68), cow_dlo(d66), cow_dhi(d66));
                    t70 = g->ecx;
                    t71 = g->edx;
                    d72 = cow_take_float(g);
                    eax = t69;
                    ecx = t70;
                    edx = t71;
                    x0 = d72;
    COW_AT(102beed3)
                    g->ecx = ecx;
                    g->edx = edx;
                    d73 = fr(g, fr(g, x0 * rdf64(COW_IMG(0x10342dc8u))) + rdf64(COW_IMG(0x1032ab90u)));
                    fpush(g, d73);
                    g->esp = sp0 - 0x4cu;
                    COW_RET(0x102beee4u);
                    t74 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                    t75 = g->ecx;
                    t76 = g->edx;
                    eax = t74;
                    ecx = t75;
                    edx = t76;
    COW_AT(102beee4)
                    d77 = rdf64(sp0 - 0x30u);
                    wr8(sp0 - 8u, (uint8_t)eax);
                    wrf64(sp0 - 0x44u, d77);
                    t78 = rd16(ebx + 0x13cu);
                    wr32(sp0 - 0x1cu, t78);
                    d79 = fr(g, (double)(int32_t)t78 * rdf64(COW_IMG(0x1033cd88u)));
                    wrf64(sp0 - 0x4cu, d79);
                    g->eax = t78;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0x3cu;
                    COW_RET(0x102bef09u);
                    t80 = cow_cdecl(g, COW_IMG(0x10312ce9u), 4, cow_dlo(d79), cow_dhi(d79), cow_dlo(d77), cow_dhi(d77));
                    t81 = g->ecx;
                    t82 = g->edx;
                    d83 = cow_take_float(g);
                    eax = t80;
                    ecx = t81;
                    edx = t82;
                    x0 = d83;
    COW_AT(102bef09)
                    g->ecx = ecx;
                    g->edx = edx;
                    d84 = fr(g, fr(g, x0 * rdf64(COW_IMG(0x10342dc8u))) + rdf64(COW_IMG(0x1032ab90u)));
                    fpush(g, d84);
                    g->esp = sp0 - 0x4cu;
                    COW_RET(0x102bef1au);
                    t85 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                    t86 = g->ecx;
                    t87 = g->edx;
                    eax = t85;
                    ecx = t86;
                    edx = t87;
    COW_AT(102bef1a)
                    d88 = rdf64(sp0 - 0x30u);
                    wr8(sp0 - 7u, (uint8_t)eax);
                    wrf64(sp0 - 0x44u, d88);
                    t89 = rd16(ebx + 0x13eu);
                    wr32(sp0 - 0x1cu, t89);
                    d90 = fr(g, (double)(int32_t)t89 * rdf64(COW_IMG(0x1033cd88u)));
                    wrf64(sp0 - 0x4cu, d90);
                    g->eax = t89;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0x3cu;
                    COW_RET(0x102bef3fu);
                    t91 = cow_cdecl(g, COW_IMG(0x10312ce9u), 4, cow_dlo(d90), cow_dhi(d90), cow_dlo(d88), cow_dhi(d88));
                    t92 = g->ecx;
                    t93 = g->edx;
                    d94 = cow_take_float(g);
                    eax = t91;
                    ecx = t92;
                    edx = t93;
                    x0 = d94;
    COW_AT(102bef3f)
                    d95 = fr(g, fr(g, x0 * rdf64(COW_IMG(0x10342dc8u))) + rdf64(COW_IMG(0x1032ab90u)));
                    fpush(g, d95);
                    g->esp = sp0 - 0x3cu;
                    COW_RET(0x102bef53u);
                    t96 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                    eax = t96;
                    loc_24 = rd32(sp0 - 0x24u);
                    loc_14 = rd32(sp0 - 0x14u);
                }
                else
                {
                    loc_24 = t16;
                    loc_14 = t17;
    COW_AT(102bed39)
                    t18 = rd32(ebx + 0x164u);
                    t19 = rd8(rd16(ebx + 0x13au) + rd32(ebx + 0x164u));
                    t20 = rd16(ebx + 0x13au);
                    t21 = rd16(ebx + 0x13cu);
                    wr8(sp0 + 4u, (uint8_t)t19);
                    wr8(sp0 + 5u, rd8(t18 + t21));
                    t22 = rd16(ebx + 0x13eu);
                    wr8(sp0 + 6u, rd8(t18 + t22));
                    t23 = rd32(ebx + 0x16cu);
                    t24 = rd8(t20 + rd32(ebx + 0x16cu));
                    wr8(sp0 - 8u, (uint8_t)t24);
                    t25 = rd8(t22 + t23);
                    wr8(sp0 - 7u, rd8(t21 + t23));
                    eax = (t23 & 0xffffff00u) | t25;
                }
    COW_AT(102bef53)
                wr8(sp0 - 6u, (uint8_t)eax);
                if ((int32_t)loc_14 > 0)
                {
    COW_AT(102bef61)
                    ecx = loc_24 + 2u;
                    edx = 0u;
L_102bef67: ;
    COW_AT(102bef67)
                    if ((int32_t)edx >= (int32_t)rd16(ebx + 0x11au)) goto L_102bf07a;
    COW_AT(102bef76)
                    if (rd8(edx + rd32(ebx + 0x188u)) == 0xffu) goto L_102bf07a;
                    eax = (rd32(ebx + 0x188u) & 0xffffff00u) | rd8(edx + rd32(ebx + 0x188u));
    COW_AT(102bef87)
                    if ((uint8_t)eax != 0u) goto L_102bef99;
    COW_AT(102bef8b)
                    esi = sp0 + 4u;
                    edi = ecx - 2u;
                    wr16(edi, rd16(esi)); esi += (g->df ? (uint32_t)-2 : 2u); edi += (g->df ? (uint32_t)-2 : 2u);
                    wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u);
L_102bf0a8: ;
    COW_AT(102bf0a8)
                    if ((int32_t)(edx + 1u) < (int32_t)rd32(sp0 - 0x14u))
                    {
                        ecx = ecx + 3u;
                        edx = edx + 1u;
                        loc_14 = rd32(sp0 - 0x14u);
                        goto L_102bef67;
                    }
    COW_AT(102bf0b5)
                }
            }
        }
    }
L_102bf4a9: ;
    COW_AT(102bf4a9)
    t211 = rd8(ebx + 0x70u);
    if ((t211 & 8u) != 0u)
    {
    COW_AT(102bf4b3)
        t212 = rd32(sp0 - 0x10u);
        if (t212 == 3u)
        {
    COW_AT(102bf4bd)
            wr32(sp0 - 0x40u, 8u);
            t213 = 8u - rd8(ebx + 0x17du);
            t214 = rd8(ebx + 0x17eu);
            t215 = rd8(ebx + 0x17cu);
            wr32(sp0 + 4u, t213);
            wr32(sp0 - 0x14u, 8u - t214);
            if ((int32_t)(8u - t215) < 0)
            {
                eax = t213;
                ecx = 8u - t214;
                loc_14 = 8u - t214;
                goto L_102bf4ef;
            }
            eax = t213;
            ecx = 8u - t214;
            edx = 8u - t215;
            loc_14 = 8u - t214;
    COW_AT(102bf4eb)
            if ((int32_t)edx <= 8) goto L_102bf4f1;
L_102bf4ef: ;
    COW_AT(102bf4ef)
            edx = 0u;
L_102bf4f1: ;
    COW_AT(102bf4f1)
            if ((int32_t)eax < 0) goto L_102bf4f9;
    COW_AT(102bf4f5)
            if ((int32_t)eax <= 8) goto L_102bf4fd;
L_102bf4f9: ;
    COW_AT(102bf4f9)
            t216 = rd32(sp0 + 4u);
            wr32(sp0 + 4u, 0u);
L_102bf4fd: ;
    COW_AT(102bf4fd)
            if ((int32_t)ecx < 0) goto L_102bf505;
    COW_AT(102bf501)
            if ((int32_t)ecx <= 8) goto L_102bf509;
L_102bf505: ;
    COW_AT(102bf505)
            wr32(sp0 - 0x14u, 0u);
            loc_14 = 0u;
L_102bf509: ;
    COW_AT(102bf509)
            if (rd16(ebx + 0x118u) != 0u)
            {
                ecx = (ecx & 0xffff0000u) | rd16(ebx + 0x118u);
    COW_AT(102bf515)
                eax = 0u;
                edi = (uint16_t)ecx;
                cf = 0u;
                pf = PARITY(0u);
                zf = 1u;
                sf = 0u;
                of = 0u;
L_102bf51a: ;
    COW_AT(102bf51a)
                t217 = (edx & 0x1fu) != 0u ? rd8(eax + rd32(ebx + 0x114u)) : 0u;
                if ((edx & 0x1fu) != 0u) wr8(eax + rd32(ebx + 0x114u), (uint8_t)((edx & 0x1fu) != 0u ? (uint8_t)t217 >> (edx & 0x1fu) : (uint8_t)t217));
                t218 = (rd8(sp0 + 4u) & 0x1fu) != 0u ? rd8(eax + rd32(ebx + 0x114u) + 1u) : 0u;
                if ((rd8(sp0 + 4u) & 0x1fu) != 0u) wr8(eax + rd32(ebx + 0x114u) + 1u, (uint8_t)((rd8(sp0 + 4u) & 0x1fu) != 0u ? (uint8_t)t218 >> (rd8(sp0 + 4u) & 0x1fu) : (uint8_t)t218));
                t219 = (rd8(sp0 - 0x14u) & 0x1fu) != 0u ? rd8(eax + rd32(ebx + 0x114u) + 2u) : 0u;
                if ((rd8(sp0 - 0x14u) & 0x1fu) != 0u) wr8(eax + rd32(ebx + 0x114u) + 2u, (uint8_t)((rd8(sp0 - 0x14u) & 0x1fu) != 0u ? (uint8_t)t219 >> (rd8(sp0 - 0x14u) & 0x1fu) : (uint8_t)t219));
                if (edi != 1u)
                {
                    cf = (rd8(sp0 - 0x14u) & 0x1fu) != 0u ? t219 >> (rd8(sp0 - 0x14u) & 0x1fu) - 1u & 1u : eax + 3u < eax;
                    eax = eax + 3u;
                    pf = PARITY((uint8_t)(edi - 1u));
                    zf = edi == 1u;
                    sf = (int32_t)(edi - 1u) < 0;
                    of = edi == 0x80000000u;
                    edi = edi - 1u;
                    loc_14 = rd32(sp0 - 0x14u);
                    goto L_102bf51a;
                }
            }
        }
    }
    COW_AT(102bf54b)
    g->ebx = rd32(sp0 - 0x34u);
    g->esi = rd32(sp0 - 0x38u);
    g->edi = rd32(sp0 - 0x3cu);
    g->ebp = rd32(sp0 - 4u);
    return;
L_102bec00: ;
    COW_AT(102bec00)
    eax = (eax & 0xffff0000u) | (uint16_t)(rd16(ebx + 0x140u) * 0x11u);
    ecx = ebx + 0x140u;
L_102bec2c: ;
    COW_AT(102bec2c)
    wr16(ecx, (uint16_t)eax);
    loc_4 = rd32(sp0 - 4u);
    loc_34 = rd32(sp0 - 0x34u);
    loc_38 = rd32(sp0 - 0x38u);
    loc_3c = rd32(sp0 - 0x3cu);
    loc_10 = rd32(sp0 - 0x10u);
    goto L_102bec2f;
L_102bec0f: ;
    COW_AT(102bec0f)
    eax = (eax & 0xffff0000u) | (uint16_t)(rd16(ebx + 0x140u) * 0x55u);
    ecx = ebx + 0x140u;
    goto L_102bec2c;
L_102bec1e: ;
    COW_AT(102bec1e)
    eax = (eax & 0xffff0000u) | (uint16_t)(rd16(ebx + 0x140u) * 0xffu);
    ecx = ebx + 0x140u;
    goto L_102bec2c;
L_102bec3f: ;
    COW_AT(102bec3f)
    if (edx != 3u)
    {
        ecx = self;
        loc_4 = in_ebp;
        loc_34 = in_ebx;
        loc_38 = in_esi;
        loc_3c = in_edi;
        goto L_102bec79;
    }
    COW_AT(102bec44)
    t2 = rd32(ebx + 0x114u);
    t3 = rd8(ebx + 0x138u);
    t4 = rd8(rd32(ebx + 0x114u) + rd8(ebx + 0x138u) * 3u);
    wr16(ebx + 0x13au, (uint16_t)t4);
    t5 = rd8(t2 + t3 * 3u + 1u);
    wr16(ebx + 0x13cu, (uint16_t)t5);
    eax = (t2 + t3 * 3u & 0xffff0000u) | rd8(t2 + t3 * 3u + 2u);
    ecx = ((t2 | t4) & 0xffff0000u) | t5;
    goto L_102bec72;
L_102bed90: ;
    COW_AT(102bed90)
    eax = ebx + 0x134u;
L_102bed9e: ;
    COW_AT(102bed9e)
    d26 = fr(g, rdf64(COW_IMG(0x1032a100u)) / (double)rdf32(eax));
    wrf64(sp0 - 0x30u, d26);
    loc_30_d = d26;
    x0 = fr(g, rdf64(COW_IMG(0x1032a100u)) / fr(g, (double)rdf32(ebx + 0x160u) * (double)rdf32(eax)));
    goto L_102bedc4;
L_102bed98: ;
    COW_AT(102bed98)
    eax = ebx + 0x15cu;
    goto L_102bed9e;
L_102bedb9: ;
    COW_AT(102bedb9)
    x0 = (double)rdf32(ebx + 0x160u);
    goto L_102bedbf;
L_102bef99: ;
    COW_AT(102bef99)
    t97 = (uint16_t)((0xffu - ((eax & 0xffff0000u) | (uint8_t)eax)) * ((eax & 0xffff0000u) | rd8(sp0 - 8u)) + ((rd8(ecx - 2u) & 0xffff0000u) | rd8(rd32(ebx + 0x16cu) + rd8(ecx - 2u))) * ((eax & 0xffff0000u) | (uint8_t)eax) + 0x80u);
    t98 = rd8(ecx - 1u);
    wr8(ecx - 2u, rd8(rd32(ebx + 0x168u) + (uint8_t)(uint32_t)((int32_t)(t97 + (t97 >> 8u)) >> 8u)));
    t99 = ((t98 & 0xffff0000u) | rd8(t98 + rd32(ebx + 0x16cu))) * ((rd32(ebx + 0x188u) & 0xffff0000u) | rd8(edx + rd32(ebx + 0x188u))) + (0xffu - ((rd32(ebx + 0x188u) & 0xffff0000u) | rd8(edx + rd32(ebx + 0x188u)))) * ((rd32(ebx + 0x188u) & 0xffff0000u) | rd8(sp0 - 7u)) + 0x80u;
    t100 = rd8(ecx);
    wr8(ecx - 1u, rd8(rd32(ebx + 0x168u) + (uint8_t)(uint32_t)((int32_t)((uint16_t)t99 + ((uint16_t)t99 >> 8u)) >> 8u)));
    t101 = ((t100 & 0xffff0000u) | rd8(t100 + rd32(ebx + 0x16cu))) * ((rd32(ebx + 0x188u) & 0xffff0000u) | rd8(edx + rd32(ebx + 0x188u))) + (0xffu - ((rd32(ebx + 0x188u) & 0xffff0000u) | rd8(edx + rd32(ebx + 0x188u)))) * ((rd32(ebx + 0x188u) & 0xffff0000u) | rd8(sp0 - 6u)) + 0x80u;
    eax = (uint8_t)(uint32_t)((int32_t)((uint16_t)t101 + ((uint16_t)t101 >> 8u)) >> 8u);
    esi = rd32(ebx + 0x168u);
L_102bf0a3: ;
    COW_AT(102bf0a3)
    wr8(ecx, rd8(eax + esi));
    goto L_102bf0a8;
L_102bf07a: ;
    COW_AT(102bf07a)
    wr8(ecx - 2u, rd8(rd32(ebx + 0x164u) + rd8(ecx - 2u)));
    wr8(ecx - 1u, rd8(rd32(ebx + 0x164u) + rd8(ecx - 1u)));
    eax = rd8(ecx);
    esi = rd32(ebx + 0x164u);
    goto L_102bf0a3;
L_102bf111: ;
    COW_AT(102bf111)
    eax = ebx + 0x15cu;
    goto L_102bf0f3;
L_102bf1f0: ;
    COW_AT(102bf1f0)
    d132 = rdf64(sp0 - 0x18u);
    wrf64(sp0 - 0x44u, d132);
    wr32(sp0 + 4u, (uint16_t)ecx);
    d133 = fr(g, (double)(int32_t)rd32(sp0 + 4u) * rdf64(sp0 - 0x28u));
    wrf64(sp0 - 0x4cu, d133);
    g->eax = (uint16_t)ecx;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x3cu;
    COW_RET(0x102bf20eu);
    t134 = cow_cdecl(g, COW_IMG(0x10312ce9u), 4, cow_dlo(d133), cow_dhi(d133), cow_dlo(d132), cow_dhi(d132));
    t135 = g->ecx;
    t136 = g->edx;
    d137 = cow_take_float(g);
    eax = t134;
    ecx = t135;
    edx = t136;
    x0 = d137;
    COW_AT(102bf20e)
    g->ecx = ecx;
    g->edx = edx;
    d138 = fr(g, fr(g, x0 * rdf64(sp0 - 0x20u)) + rdf64(COW_IMG(0x1032ab90u)));
    fpush(g, d138);
    g->esp = sp0 - 0x4cu;
    COW_RET(0x102bf21cu);
    t139 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t140 = g->ecx;
    t141 = g->edx;
    eax = t139;
    ecx = t140;
    edx = t141;
    COW_AT(102bf21c)
    d142 = rdf64(sp0 - 0x18u);
    wr16(ebx + 0x144u, (uint16_t)eax);
    wrf64(sp0 - 0x44u, d142);
    t143 = rd16(ebx + 0x13cu);
    wr32(sp0 + 4u, t143);
    d144 = fr(g, (double)(int32_t)rd32(sp0 + 4u) * rdf64(sp0 - 0x28u));
    wrf64(sp0 - 0x4cu, d144);
    g->eax = t143;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x3cu;
    COW_RET(0x102bf242u);
    t145 = cow_cdecl(g, COW_IMG(0x10312ce9u), 4, cow_dlo(d144), cow_dhi(d144), cow_dlo(d142), cow_dhi(d142));
    t146 = g->ecx;
    t147 = g->edx;
    d148 = cow_take_float(g);
    eax = t145;
    ecx = t146;
    edx = t147;
    x0 = d148;
    COW_AT(102bf242)
    g->ecx = ecx;
    g->edx = edx;
    d149 = fr(g, fr(g, x0 * rdf64(sp0 - 0x20u)) + rdf64(COW_IMG(0x1032ab90u)));
    fpush(g, d149);
    g->esp = sp0 - 0x4cu;
    COW_RET(0x102bf250u);
    t150 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t151 = g->ecx;
    t152 = g->edx;
    eax = t150;
    ecx = t151;
    edx = t152;
    COW_AT(102bf250)
    d153 = rdf64(sp0 - 0x18u);
    wr16(ebx + 0x146u, (uint16_t)eax);
    wrf64(sp0 - 0x44u, d153);
    t154 = rd16(ebx + 0x13eu);
    wr32(sp0 + 4u, t154);
    d155 = fr(g, (double)(int32_t)rd32(sp0 + 4u) * rdf64(sp0 - 0x28u));
    wrf64(sp0 - 0x4cu, d155);
    g->eax = t154;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x3cu;
    COW_RET(0x102bf276u);
    t156 = cow_cdecl(g, COW_IMG(0x10312ce9u), 4, cow_dlo(d155), cow_dhi(d155), cow_dlo(d153), cow_dhi(d153));
    t157 = g->ecx;
    t158 = g->edx;
    d159 = cow_take_float(g);
    eax = t156;
    ecx = t157;
    edx = t158;
    x0 = d159;
    COW_AT(102bf276)
    g->ecx = ecx;
    g->edx = edx;
    d160 = fr(g, fr(g, x0 * rdf64(sp0 - 0x20u)) + rdf64(COW_IMG(0x1032ab90u)));
    fpush(g, d160);
    g->esp = sp0 - 0x4cu;
    COW_RET(0x102bf284u);
    t161 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t162 = g->ecx;
    t163 = g->edx;
    eax = t161;
    ecx = t162;
    edx = t163;
    COW_AT(102bf284)
    d164 = rdf64(sp0 - 0xcu);
    wr16(ebx + 0x148u, (uint16_t)eax);
    wrf64(sp0 - 0x44u, d164);
    t165 = rd16(ebx + 0x13au);
    wr32(sp0 + 4u, t165);
    d166 = fr(g, (double)(int32_t)rd32(sp0 + 4u) * rdf64(sp0 - 0x28u));
    wrf64(sp0 - 0x4cu, d166);
    g->eax = t165;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x3cu;
    COW_RET(0x102bf2aau);
    t167 = cow_cdecl(g, COW_IMG(0x10312ce9u), 4, cow_dlo(d166), cow_dhi(d166), cow_dlo(d164), cow_dhi(d164));
    t168 = g->ecx;
    t169 = g->edx;
    d170 = cow_take_float(g);
    eax = t167;
    ecx = t168;
    edx = t169;
    x0 = d170;
    COW_AT(102bf2aa)
    g->ecx = ecx;
    g->edx = edx;
    d171 = fr(g, fr(g, x0 * rdf64(sp0 - 0x20u)) + rdf64(COW_IMG(0x1032ab90u)));
    fpush(g, d171);
    g->esp = sp0 - 0x4cu;
    COW_RET(0x102bf2b8u);
    t172 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t173 = g->ecx;
    t174 = g->edx;
    eax = t172;
    ecx = t173;
    edx = t174;
    COW_AT(102bf2b8)
    d175 = rdf64(sp0 - 0xcu);
    wr16(ebx + 0x13au, (uint16_t)eax);
    wrf64(sp0 - 0x44u, d175);
    t176 = rd16(ebx + 0x13cu);
    wr32(sp0 + 4u, t176);
    d177 = fr(g, (double)(int32_t)rd32(sp0 + 4u) * rdf64(sp0 - 0x28u));
    wrf64(sp0 - 0x4cu, d177);
    g->eax = t176;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x3cu;
    COW_RET(0x102bf2deu);
    t178 = cow_cdecl(g, COW_IMG(0x10312ce9u), 4, cow_dlo(d177), cow_dhi(d177), cow_dlo(d175), cow_dhi(d175));
    t179 = g->ecx;
    t180 = g->edx;
    d181 = cow_take_float(g);
    eax = t178;
    ecx = t179;
    edx = t180;
    x0 = d181;
    COW_AT(102bf2de)
    g->ecx = ecx;
    g->edx = edx;
    d182 = fr(g, fr(g, x0 * rdf64(sp0 - 0x20u)) + rdf64(COW_IMG(0x1032ab90u)));
    fpush(g, d182);
    g->esp = sp0 - 0x4cu;
    COW_RET(0x102bf2ecu);
    t183 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t184 = g->ecx;
    t185 = g->edx;
    eax = t183;
    ecx = t184;
    edx = t185;
    COW_AT(102bf2ec)
    d186 = rdf64(sp0 - 0xcu);
    wr16(ebx + 0x13cu, (uint16_t)eax);
    wrf64(sp0 - 0x44u, d186);
    t187 = rd16(ebx + 0x13eu);
    wr32(sp0 + 4u, t187);
    d188 = fr(g, (double)(int32_t)rd32(sp0 + 4u) * rdf64(sp0 - 0x28u));
    wrf64(sp0 - 0x4cu, d188);
    g->eax = t187;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x3cu;
    COW_RET(0x102bf312u);
    t189 = cow_cdecl(g, COW_IMG(0x10312ce9u), 4, cow_dlo(d188), cow_dhi(d188), cow_dlo(d186), cow_dhi(d186));
    t190 = g->ecx;
    t191 = g->edx;
    d192 = cow_take_float(g);
    eax = t189;
    ecx = t190;
    edx = t191;
    x0 = d192;
    COW_AT(102bf312)
    d193 = fr(g, fr(g, x0 * rdf64(sp0 - 0x20u)) + rdf64(COW_IMG(0x1032ab90u)));
    fpush(g, d193);
    g->esp = sp0 - 0x3cu;
    COW_RET(0x102bf323u);
    t194 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    eax = t194;
    COW_AT(102bf323)
    wr16(ebx + 0x13eu, (uint16_t)eax);
    goto L_102bf4a9;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102beba8(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102bebcau:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bebd3u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bebd8u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bebe2u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bebe5u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bebe9u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bebeeu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bebf7u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bec00u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bec0fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bec1eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bec2cu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bec2fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bec3fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bec44u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bec72u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bec79u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bec8eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bec98u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102becb4u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102becc3u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102becd2u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x3cu;
        g->ecx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102becd8u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102becdfu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bece3u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bece6u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102becebu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102becefu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102becf3u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bed01u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bed07u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bed12u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bed1cu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bed39u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_24;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bed80u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_24;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bed86u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_24;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bed89u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_24;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bed8cu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_24;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bed90u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_24;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bed98u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_24;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bed9eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_24;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bedb9u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_24;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bedbfu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_24;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bedc4u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_24;
        double loc_30_d;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_30_d = rdf64(sp0 - 0x30u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102beddau:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x44u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bede9u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bee06u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bee2bu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bee3cu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bee61u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bee72u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bee97u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102beeabu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102beed3u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102beee4u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bef09u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bef1au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bef3fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bef53u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_24;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bef61u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_24;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x3cu;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bef67u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_24;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bef76u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_24;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bef87u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_24;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bef8bu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_24;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bef99u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_24;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bf07au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_24;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bf0a3u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bf0a8u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bf0b5u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bf0bau:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bf0e7u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_20_d;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_20_d = rdf64(sp0 - 0x20u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        wrf64(sp0 - 0x18u, 1.0);
        wrf64(sp0 - 0xcu, 1.0);
        (void)sp0;
        return 1;
    }
    case 0x102bf0eau:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_20_d;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_20_d = rdf64(sp0 - 0x20u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        wrf64(sp0 - 0x18u, 1.0);
        wrf64(sp0 - 0xcu, 1.0);
        (void)sp0;
        return 1;
    }
    case 0x102bf0edu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_18_d;
        double loc_20_d;
        double loc_c_d;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_20_d = rdf64(sp0 - 0x20u);
        loc_18_d = rdf64(sp0 - 0x18u);
        loc_c_d = rdf64(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bf0f3u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_18_d;
        double loc_20_d;
        double loc_c_d;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_20_d = rdf64(sp0 - 0x20u);
        loc_18_d = rdf64(sp0 - 0x18u);
        loc_c_d = rdf64(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bf111u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_18_d;
        double loc_20_d;
        double loc_c_d;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_20_d = rdf64(sp0 - 0x20u);
        loc_18_d = rdf64(sp0 - 0x18u);
        loc_c_d = rdf64(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bf119u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_18_d;
        double loc_20_d;
        double loc_c_d;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_20_d = rdf64(sp0 - 0x20u);
        loc_18_d = rdf64(sp0 - 0x18u);
        loc_c_d = rdf64(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bf127u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_18_d;
        double loc_20_d;
        double loc_c_d;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_20_d = rdf64(sp0 - 0x20u);
        loc_18_d = rdf64(sp0 - 0x18u);
        loc_c_d = rdf64(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bf152u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bf160u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bf186u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bf197u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bf1aeu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bf1b9u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bf1beu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bf1f0u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bf20eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bf21cu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bf242u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bf250u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bf276u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bf284u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bf2aau:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bf2b8u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bf2deu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bf2ecu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bf312u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bf323u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bf32fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bf339u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bf34eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bf353u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bf387u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bf38cu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bf394u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bf39eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bf3d3u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x3cu;
        g->ecx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bf3d6u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bf3e3u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bf3f1u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bf3fau:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bf49cu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bf4a9u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_24;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bf4b3u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_24;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bf4bdu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_24;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bf4ebu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        uint32_t loc_24;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        g->esi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x102bf4efu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        uint32_t loc_24;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        g->esi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x102bf4f1u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        uint32_t loc_24;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        g->esi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x102bf4f5u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        uint32_t loc_24;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        g->esi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x102bf4f9u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        uint32_t loc_24;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        g->esi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x102bf4fdu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        uint32_t loc_24;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        g->esi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x102bf501u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        uint32_t loc_24;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        g->esi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x102bf505u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_24;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bf509u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_24;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bf515u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_24;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bf51au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_24;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bf54bu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_24;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102beba8(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102beba8(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
