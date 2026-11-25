/* f_0x1024e780 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1024e780(Guest* g)
{
    double d101;
    double d105;
    double d112;
    double d114;
    double d116;
    double d118;
    double d119;
    double d12;
    double d120;
    double d122;
    double d123;
    double d133;
    double d135;
    double d136;
    double d14;
    double d146;
    double d148;
    double d149;
    double d153;
    double d157;
    double d162;
    double d163;
    double d164;
    double d165;
    double d166;
    double d169;
    double d23;
    double d25;
    double d26;
    double d27;
    double d29;
    double d3;
    double d30;
    double d31;
    double d32;
    double d33;
    double d36;
    double d37;
    double d38;
    double d39;
    double d4;
    double d41;
    double d42;
    double d43;
    double d44;
    double d45;
    double d46;
    double d47;
    double d5;
    double d50;
    double d51;
    double d52;
    double d59;
    double d62;
    double d63;
    double d64;
    double d65;
    double d69;
    double d7;
    double d73;
    double d74;
    double d78;
    double d80;
    double d84;
    double d85;
    double d87;
    double d88;
    double d96;
    double d97;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_68;
    double loc_6c_f;
    uint32_t loc_8c;
    uint32_t loc_94;
    double loc_ac_f;
    double loc_b0_f;
    double loc_b4_f;
    double loc_cc_f;
    double loc_dc_f;
    double loc_e4_f;
    uint32_t loc_f0;
    uint32_t loc_f8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t102;
    uint32_t t103;
    uint32_t t104;
    uint32_t t106;
    uint32_t t107;
    uint32_t t108;
    uint32_t t109;
    uint32_t t11;
    uint32_t t110;
    uint32_t t111;
    uint32_t t113;
    uint32_t t115;
    uint32_t t117;
    uint32_t t121;
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
    uint32_t t134;
    uint32_t t137;
    uint32_t t138;
    uint32_t t139;
    uint32_t t140;
    uint32_t t141;
    uint32_t t142;
    uint32_t t143;
    uint32_t t144;
    uint32_t t145;
    uint32_t t147;
    uint32_t t15;
    uint32_t t150;
    uint32_t t151;
    uint32_t t152;
    uint32_t t154;
    uint32_t t155;
    uint32_t t156;
    uint32_t t158;
    uint32_t t159;
    uint32_t t16;
    uint32_t t160;
    uint32_t t161;
    uint32_t t167;
    uint32_t t168;
    uint32_t t17;
    uint32_t t170;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t24;
    uint32_t t28;
    uint32_t t34;
    uint32_t t35;
    uint32_t t40;
    uint32_t t48;
    uint32_t t49;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t70;
    uint32_t t71;
    uint32_t t72;
    uint32_t t75;
    uint32_t t76;
    uint32_t t77;
    uint32_t t79;
    uint32_t t8;
    uint32_t t81;
    uint32_t t82;
    uint32_t t83;
    uint32_t t86;
    uint32_t t89;
    uint32_t t9;
    uint32_t t90;
    uint32_t t91;
    uint32_t t92;
    uint32_t t93;
    uint32_t t94;
    uint32_t t95;
    uint32_t t98;
    uint32_t t99;
    double x0;
    double x1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 312u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1024e794u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 0xecu); g->esi = rd32(sp0 - 0xecu); goto E_1024e794;
    case 0x1024e7aau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 0xecu); g->esi = rd32(sp0 - 0xecu); goto E_1024e7aa;
    case 0x1024e7b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 0xecu); g->esi = rd32(sp0 - 0xecu); goto E_1024e7b8;
    case 0x1024e7c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; loc_f8 = rd32(sp0 - 0xf8u); in_esi = rd32(sp0 - 0xecu); g->esi = rd32(sp0 - 0xecu); goto E_1024e7c6;
    case 0x1024e7cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_1024e7cb;
    case 0x1024e804u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; loc_f8 = rd32(sp0 - 0xf8u); loc_f0 = rd32(sp0 - 0xf0u); goto E_1024e804;
    case 0x1024e80bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; loc_f8 = rd32(sp0 - 0xf8u); loc_f0 = rd32(sp0 - 0xf0u); goto E_1024e80b;
    case 0x1024e821u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; loc_f8 = rd32(sp0 - 0xf8u); loc_f0 = rd32(sp0 - 0xf0u); goto E_1024e821;
    case 0x1024e82cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; loc_f8 = rd32(sp0 - 0xf8u); loc_f0 = rd32(sp0 - 0xf0u); goto E_1024e82c;
    case 0x1024e839u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; loc_f8 = rd32(sp0 - 0xf8u); loc_f0 = rd32(sp0 - 0xf0u); goto E_1024e839;
    case 0x1024e840u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; loc_f8 = rd32(sp0 - 0xf8u); loc_f0 = rd32(sp0 - 0xf0u); goto E_1024e840;
    case 0x1024e854u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; loc_f8 = rd32(sp0 - 0xf8u); loc_f0 = rd32(sp0 - 0xf0u); goto E_1024e854;
    case 0x1024e85du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; loc_f8 = rd32(sp0 - 0xf8u); loc_f0 = rd32(sp0 - 0xf0u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1024e85d;
    case 0x1024e860u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; loc_f8 = rd32(sp0 - 0xf8u); loc_f0 = rd32(sp0 - 0xf0u); goto E_1024e860;
    case 0x1024e867u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; loc_f8 = rd32(sp0 - 0xf8u); loc_f0 = rd32(sp0 - 0xf0u); goto E_1024e867;
    case 0x1024e86eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; loc_f8 = rd32(sp0 - 0xf8u); loc_f0 = rd32(sp0 - 0xf0u); goto E_1024e86e;
    case 0x1024e873u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; loc_f8 = rd32(sp0 - 0xf8u); loc_f0 = rd32(sp0 - 0xf0u); goto E_1024e873;
    case 0x1024e898u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; loc_f8 = rd32(sp0 - 0xf8u); loc_f0 = rd32(sp0 - 0xf0u); goto E_1024e898;
    case 0x1024e8b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; loc_f8 = rd32(sp0 - 0xf8u); loc_f0 = rd32(sp0 - 0xf0u); goto E_1024e8b3;
    case 0x1024e8d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; loc_f8 = rd32(sp0 - 0xf8u); loc_f0 = rd32(sp0 - 0xf0u); loc_94 = rd32(sp0 - 0x94u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1024e8d6;
    case 0x1024e8deu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; loc_f8 = rd32(sp0 - 0xf8u); loc_f0 = rd32(sp0 - 0xf0u); loc_94 = rd32(sp0 - 0x94u); loc_8c = rd32(sp0 - 0x8cu); goto E_1024e8de;
    case 0x1024e8e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1024e8e3;
    case 0x1024e8e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_1024e8e8;
    case 0x1024e8ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_1024e8ec;
    case 0x1024e8efu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_f8 = rd32(sp0 - 0xf8u); loc_f0 = rd32(sp0 - 0xf0u); loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0_f = rdf32(sp0 - 0xb0u); loc_ac_f = rdf32(sp0 - 0xacu); goto E_1024e8ef;
    case 0x1024e936u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1024e936;
    case 0x1024e969u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0_f = rdf32(sp0 - 0xb0u); loc_ac_f = rdf32(sp0 - 0xacu); goto E_1024e969;
    case 0x1024e96au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_f8 = rd32(sp0 - 0xf8u); loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0_f = rdf32(sp0 - 0xb0u); loc_ac_f = rdf32(sp0 - 0xacu); goto E_1024e96a;
    case 0x1024e9e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1024e9e7;
    case 0x1024ea13u: ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1024ea13;
    case 0x1024ea57u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1024ea57;
    case 0x1024ea82u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1024ea82;
    case 0x1024ea97u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1024ea97;
    case 0x1024eabfu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1024eabf;
    case 0x1024eac8u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1024eac8;
    case 0x1024ead8u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1024ead8;
    case 0x1024eb14u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_cc_f = rdf32(sp0 - 0xccu); loc_6c_f = rdf32(sp0 - 0x6cu); goto E_1024eb14;
    case 0x1024eb29u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_cc_f = rdf32(sp0 - 0xccu); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); goto E_1024eb29;
    case 0x1024eb34u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_cc_f = rdf32(sp0 - 0xccu); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); goto E_1024eb34;
    case 0x1024eb49u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1024eb49;
    case 0x1024eb51u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1024eb51;
    case 0x1024eb65u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_e4_f = rdf32(sp0 - 0xe4u); goto E_1024eb65;
    case 0x1024eb72u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1024eb72;
    case 0x1024eb77u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1024eb77;
    case 0x1024eb7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1024eb7f;
    case 0x1024eb83u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1024eb83;
    case 0x1024eb9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1024eb9c;
    case 0x1024eba4u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_dc_f = rdf32(sp0 - 0xdcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1024eba4;
    case 0x1024ebc2u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1024ebc2;
    case 0x1024ebd6u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1024ebd6;
    case 0x1024ebe2u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_e4_f = rdf32(sp0 - 0xe4u); goto E_1024ebe2;
    case 0x1024ebeau: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_f8 = rd32(sp0 - 0xf8u); goto E_1024ebea;
    case 0x1024ebefu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1024ebef;
    case 0x1024ec13u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1024ec13;
    case 0x1024ec2du: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1024ec2d;
    case 0x1024ec3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1024ec3f;
    case 0x1024ec44u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1024ec44;
    case 0x1024ec64u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1024ec64;
    case 0x1024ec7eu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1024ec7e;
    case 0x1024ecaau: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1024ecaa;
    case 0x1024ecbeu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1024ecbe;
    case 0x1024ecd0u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1024ecd0;
    case 0x1024ecd3u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1024ecd3;
    case 0x1024ecffu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1024ecff;
    case 0x1024ed13u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1024ed13;
    case 0x1024ed25u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1024ed25;
    case 0x1024ed28u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_f0 = rd32(sp0 - 0xf0u); goto E_1024ed28;
    case 0x1024ed3au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1024ed3a;
    case 0x1024ed52u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1024ed52;
    case 0x1024ed6au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1024ed6a;
    case 0x1024ed7du: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1024ed7d;
    case 0x1024ed90u: ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1024ed90;
    case 0x1024edceu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1024edce;
    case 0x1024edf1u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1024edf1;
    case 0x1024ee06u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1024ee06;
    case 0x1024ee2cu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1024ee2c;
    case 0x1024ee4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1024ee4e;
    case 0x1024ee6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1024ee6b;
    case 0x1024ee80u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1024ee80;
    case 0x1024ee89u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_f8 = rd32(sp0 - 0xf8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1024ee89;
    case 0x1024ee92u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1024ee92;
    case 0x1024eeb2u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1024eeb2;
    case 0x1024eeccu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1024eecc;
    case 0x1024eedeu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1024eede;
    case 0x1024eee7u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1024eee7;
    case 0x1024eef0u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1024eef0;
    case 0x1024ef10u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1024ef10;
    case 0x1024ef2du: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1024ef2d;
    case 0x1024ef5cu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1024ef5c;
    case 0x1024ef70u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1024ef70;
    case 0x1024ef82u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1024ef82;
    case 0x1024ef85u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_f0 = rd32(sp0 - 0xf0u); goto E_1024ef85;
    case 0x1024efb1u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1024efb1;
    case 0x1024efc5u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1024efc5;
    case 0x1024efd7u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1024efd7;
    case 0x1024efdau: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_f0 = rd32(sp0 - 0xf0u); goto E_1024efda;
    case 0x1024efecu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1024efec;
    case 0x1024f00eu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1024f00e;
    case 0x1024f016u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1024f016;
    case 0x1024f026u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1024f026;
    case 0x1024f02cu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1024f02c;
    case 0x1024f03eu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1024f03e;
    case 0x1024f049u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1024f049;
    case 0x1024f04cu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_f8 = rd32(sp0 - 0xf8u); loc_f0 = rd32(sp0 - 0xf0u); goto E_1024f04c;
    case 0x1024f056u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1024f056;
    default: break;
    }
#endif

    COW_AT(1024e780)
    wr32(sp0 - 0xecu, in_esi);
    wr32(sp0 - 0xf0u, sp0 - 0x34u);
    g->esp = sp0 - 0xecu;
    cow_cdecl(g, COW_IMG(0x10271eb0u), 1, sp0 - 0x34u);
    COW_AT(1024e794)
    if (!(rd32(sp0 - 0x34u) >> 8u & 1u))
    {
    COW_AT(1024e7b8)
        wr32(sp0 - 0xf0u, sp0 - 0xe8u);
        wr32(sp0 - 0xf4u, sp0 - 0x84u);
        t1 = rd32(arg1 + 0x1cu);
        wr32(sp0 - 0xf8u, t1);
        eax = sp0 - 0xe8u;
        ecx = sp0 - 0x84u;
        edx = t1;
        loc_f8 = t1;
    }
    else
    {
        eax = rd32(sp0 - 0x34u);
    COW_AT(1024e7aa)
        wr32(sp0 - 0xf0u, sp0 - 0xe8u);
        wr32(sp0 - 0xf4u, sp0 - 0x84u);
        wr32(sp0 - 0xf8u, 6u);
        ecx = sp0 - 0xe8u;
        edx = sp0 - 0x84u;
        loc_f8 = 6u;
    }
    COW_AT(1024e7c6)
    g->edx = edx;
    g->esp = sp0 - 0xecu;
    cow_cdecl(g, COW_IMG(0x10273390u), 3, loc_f8, sp0 - 0x84u, sp0 - 0xe8u);
    t2 = g->edx;
    edx = t2;
    COW_AT(1024e7cb)
    wr32(sp0 - 0xf0u, 0xffffffffu);
    d3 = (double)(float)(double)rdf32(rd32(sp0 - 0xe8u) + 0x5cu);
    wrf32(sp0 - 0xb4u, (float)d3);
    wr32(sp0 - 0xf4u, 4u);
    wr32(sp0 - 0xf8u, 0x4fu);
    d4 = (double)(float)(double)rdf32(rd32(sp0 - 0xe8u) + 0x64u);
    wrf32(sp0 - 0xacu, (float)d4);
    d5 = (double)(float)(double)rdf32(rd32(sp0 - 0xe8u) + 0x5cu);
    wrf32(sp0 - 0x10u, (float)d5);
    wr32(sp0 - 0xfcu, 0x3fu);
    t6 = rd32(rd32(sp0 - 0xe8u) + 0x60u);
    wr32(sp0 - 0xb0u, t6);
    d7 = (double)(float)(double)rdf32(rd32(sp0 - 0xe8u) + 0x64u);
    wrf32(sp0 - 8u, (float)d7);
    g->edx = edx;
    t8 = rd32(sp0 - 0xe8u);
    g->esp = sp0 - 0xe0u;
    t9 = cow_call_regs(g, COW_IMG(0x10123a70u), t8, t6, g->edx, 1, 7, 0x3fu, 0x4fu, 4u, 0xffffffffu, rd32(sp0 - 0xecu), t8, rd32(sp0 - 0xe4u));
    t10 = g->ecx;
    t11 = g->edx;
    eax = t9;
    ecx = t10;
    edx = t11;
    COW_AT(1024e804)
    if ((uint8_t)eax == 0u) goto L_1024e82c;
    COW_AT(1024e80b)
    d12 = (double)rdf32(rd32(sp0 - 0x84u) + 0x14u);
    if ((cow_fsw(g, d12, (double)rdf32(COW_IMG(0x1033cd7cu)), 0u) & 0x4100u) != 0u) goto L_1024e860;
    ecx = rd32(sp0 - 0x84u);
    COW_AT(1024e821)
    x0 = fr(g, (double)rdf32(ecx + 0x14u) - (double)rdf32(COW_IMG(0x103313a0u)));
L_1024e85d: ;
    COW_AT(1024e85d)
    wrf32(ecx + 0x14u, (float)x0);
L_1024e860: ;
    COW_AT(1024e860)
    if ((rd32(arg1) >> 8u & 0x10u) == 0u) goto L_1024e8b3;
    COW_AT(1024e867)
    if ((int32_t)rd32(arg1 + 0x24u) < 0) goto L_1024e898;
    eax = rd32(arg1 + 0x24u);
    COW_AT(1024e86e)
    if ((int32_t)eax >= 15) goto L_1024e898;
    COW_AT(1024e873)
    t15 = rd32(COW_IMG(0x103890f4u) + eax * 0x24u);
    wr32(sp0 - 0x94u, t15);
    ecx = rd32(arg1 + 8u) * 3u;
    edx = rd32(COW_IMG(0x103890f8u) + eax * 0x24u);
    eax = eax * 0x24u;
    loc_94 = t15;
    x0 = (double)rdf32(COW_IMG(0x103894c0u) + rd32(arg1 + 8u) * 0xcu);
L_1024e8d6: ;
    COW_AT(1024e8d6)
    wrf32(sp0 - 0x90u, (float)(double)(float)x0);
    wr32(sp0 - 0x8cu, edx);
    loc_8c = edx;
L_1024e8de: ;
    COW_AT(1024e8de)
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xecu;
    t20 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t21 = g->ecx;
    t22 = g->edx;
    d23 = cow_take_float(g);
    eax = t20;
    ecx = t21;
    edx = t22;
    x0 = d23;
    COW_AT(1024e8e3)
    fpush(g, x0);
    g->esp = sp0 - 0xecu;
    t24 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    eax = t24;
    COW_AT(1024e8e8)
    if ((int32_t)eax <= 0)
    {
        edi = in_edi;
        loc_b4_f = (double)rdf32(sp0 - 0xb4u);
        loc_b0_f = (double)rdf32(sp0 - 0xb0u);
        loc_ac_f = (double)rdf32(sp0 - 0xacu);
    }
    else
    {
    COW_AT(1024e8ec)
        wr32(sp0 - 0xf0u, in_edi);
        edi = eax;
        loc_f0 = in_edi;
        loc_b4_f = (double)rdf32(sp0 - 0xb4u);
        loc_b0_f = (double)rdf32(sp0 - 0xb0u);
        loc_ac_f = (double)rdf32(sp0 - 0xacu);
L_1024e8ef: ;
    COW_AT(1024e8ef)
        d25 = fr(g, (double)rdf32(sp0 - 0x94u) - loc_b4_f);
        wr32(sp0 - 0xf4u, 0x3e000000u);
        wr32(sp0 - 0xf8u, sp0 - 0x44u);
        wr32(sp0 - 0xfcu, sp0 - 0x44u);
        wrf32(sp0 - 0x44u, (float)(double)(float)d25);
        d26 = fr(g, (double)rdf32(sp0 - 0x90u) - loc_b0_f);
        wrf32(sp0 - 0x40u, (float)(double)(float)d26);
        d27 = fr(g, (double)rdf32(sp0 - 0x8cu) - loc_ac_f);
        wrf32(sp0 - 0x3cu, (float)(double)(float)d27);
        g->eax = eax;
        g->esp = sp0 - 0xf0u;
        t28 = cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0x44u, sp0 - 0x44u, 0x3e000000u);
        eax = t28;
    COW_AT(1024e936)
        d29 = fr(g, (double)rdf32(sp0 - 0x44u) + (double)rdf32(sp0 - 0xb4u));
        wrf32(sp0 - 0xb4u, (float)(double)(float)d29);
        d30 = fr(g, (double)rdf32(sp0 - 0x40u) + (double)rdf32(sp0 - 0xb0u));
        wrf32(sp0 - 0xb0u, (float)(double)(float)d30);
        d31 = fr(g, (double)rdf32(sp0 - 0x3cu) + (double)rdf32(sp0 - 0xacu));
        wrf32(sp0 - 0xacu, (float)(double)(float)d31);
        if (edi != 1u)
        {
            edi = edi - 1u;
            loc_f0 = rd32(sp0 - 0xf0u);
            loc_b4_f = (double)(float)d29;
            loc_b0_f = (double)(float)d30;
            loc_ac_f = (double)(float)d31;
            goto L_1024e8ef;
        }
        loc_b4_f = (double)(float)d29;
        loc_b0_f = (double)(float)d30;
        loc_ac_f = (double)(float)d31;
    COW_AT(1024e969)
        edi = rd32(sp0 - 0xf0u);
    }
    COW_AT(1024e96a)
    wrf32(rd32(sp0 - 0xe8u) + 0x5cu, (float)loc_b4_f);
    d32 = (double)rdf32(sp0 - 0xb0u);
    wrf32(rd32(sp0 - 0xe8u) + 0x60u, (float)d32);
    d33 = (double)rdf32(sp0 - 0xacu);
    wrf32(rd32(sp0 - 0xe8u) + 0x64u, (float)d33);
    t34 = rd32(rd32(sp0 - 0xe8u) + 0x28u);
    wr32(sp0 - 0x54u, t34);
    t35 = rd32(rd32(sp0 - 0xe8u) + 0x48u);
    wr32(sp0 - 0x4cu, t35);
    d36 = fr(g, (double)rdf32(sp0 - 0xb4u) - cow_bits2f(t34));
    wr32(sp0 - 0xf0u, sp0 - 0xc4u);
    wr32(sp0 - 0xf4u, sp0 - 0xc4u);
    wrf32(sp0 - 0xe0u, (float)(double)(float)d36);
    wrf32(sp0 - 0xc4u, (float)(double)(float)d36);
    d37 = fr(g, (double)rdf32(sp0 - 0xb0u) - (double)rdf32(rd32(sp0 - 0xe8u) + 0x38u));
    wrf32(sp0 - 0xc0u, (float)(double)(float)d37);
    d38 = fr(g, (double)rdf32(sp0 - 0xacu) - cow_bits2f(t35));
    wrf32(sp0 - 0xccu, (float)(double)(float)d38);
    wrf32(sp0 - 0xbcu, (float)(double)(float)d38);
    g->esp = sp0 - 0xecu;
    cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0xc4u, sp0 - 0xc4u);
    d39 = cow_take_float(g);
    x0 = d39;
    COW_AT(1024e9e7)
    t40 = rd32(sp0 - 0xe8u);
    wrf32(t40 + 0x78u, (float)fr(g, sqrt(x0)));
    wr32(sp0 - 0x7cu, 0u);
    wr32(sp0 - 0xc0u, 0u);
    wr32(sp0 - 0xf0u, sp0 - 0xc4u);
    if ((rd32(arg1) >> 8u & 0x10u) == 0u) goto L_1024ed90;
    edx = t40;
    COW_AT(1024ea13)
    d41 = fr(g, (double)rdf32(sp0 - 0x54u) - (double)rdf32(sp0 - 0x94u));
    wr32(sp0 - 0xf4u, sp0 - 0xc4u);
    wrf32(sp0 - 0xc4u, (float)(double)(float)d41);
    d42 = fr(g, (double)rdf32(sp0 - 0x4cu) - (double)rdf32(sp0 - 0x8cu));
    wrf32(sp0 - 0xbcu, (float)(double)(float)d42);
    d43 = fr(g, (double)rdf32(arg1 + 0x88u) - (double)rdf32(sp0 - 0x94u));
    wrf32(sp0 - 0x80u, (float)(double)(float)d43);
    d44 = fr(g, (double)rdf32(arg1 + 0x90u) - (double)rdf32(sp0 - 0x8cu));
    wrf32(sp0 - 0x78u, (float)(double)(float)d44);
    g->esp = sp0 - 0xecu;
    cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0xc4u, sp0 - 0xc4u);
    d45 = cow_take_float(g);
    x0 = d45;
    COW_AT(1024ea57)
    d46 = (double)(float)fr(g, sqrt(x0));
    wrf32(sp0 - 0xe0u, (float)d46);
    d47 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / d46);
    wrf32(sp0 - 0xdcu, (float)(double)(float)d47);
    wr32(sp0 - 0xf8u, cow_f2bits((double)(float)d47));
    wr32(sp0 - 0xfcu, sp0 - 0xc4u);
    wr32(sp0 - 0x100u, sp0 - 0x20u);
    g->ecx = sp0 - 0x20u;
    g->esp = sp0 - 0xf4u;
    cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0x20u, sp0 - 0xc4u, cow_f2bits((double)(float)d47));
    t48 = g->ecx;
    ecx = t48;
    COW_AT(1024ea82)
    wr32(sp0 - 0x104u, sp0 - 0x80u);
    wr32(sp0 - 0x108u, sp0 - 0x80u);
    g->eax = sp0 - 0x80u;
    g->esp = sp0 - 0x100u;
    t49 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x80u, sp0 - 0x80u);
    d50 = cow_take_float(g);
    eax = t49;
    x0 = d50;
    COW_AT(1024ea97)
    d51 = (double)(float)fr(g, sqrt(x0));
    wrf32(sp0 - 0xc8u, (float)d51);
    d52 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / d51);
    wrf32(sp0 - 0xf0u, (float)(double)(float)d52);
    wr32(sp0 - 0xf4u, sp0 - 0x80u);
    wr32(sp0 - 0xf8u, sp0 - 0x30u);
    g->eax = eax;
    g->ecx = sp0 - 0x80u;
    g->edx = sp0 - 0x30u;
    g->esp = sp0 - 0xecu;
    t53 = cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0x30u, sp0 - 0x80u, cow_f2bits((double)(float)d52));
    t54 = g->ecx;
    t55 = g->edx;
    eax = t53;
    ecx = t54;
    edx = t55;
    COW_AT(1024eabf)
    wr32(sp0 - 0xfcu, 6u);
    wr32(sp0 - 0x100u, 0x3fu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xf0u;
    t56 = cow_thiscall_cdecl(g, COW_IMG(0x10123970u), ecx, 4, 0x3fu, 6u, sp0 - 0x30u, sp0 - 0x80u);
    t57 = g->ecx;
    t58 = g->edx;
    d59 = cow_take_float(g);
    eax = t56;
    ecx = t57;
    edx = t58;
    x0 = d59;
    COW_AT(1024eac8)
    wrf32(sp0 - 0x70u, (float)(double)(float)x0);
    wr32(sp0 - 0x104u, 7u);
    wr32(sp0 - 0x108u, 0x3fu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xf8u;
    t60 = cow_thiscall_cdecl(g, COW_IMG(0x10123970u), ecx, 4, 0x3fu, 7u, 0x3fu, 6u);
    t61 = g->edx;
    d62 = cow_take_float(g);
    eax = t60;
    edx = t61;
    x0 = d62;
    COW_AT(1024ead8)
    wrf32(sp0 - 0xccu, (float)(double)(float)x0);
    d63 = fr(g, (double)rdf32(sp0 - 0xdcu) * (double)rdf32(COW_IMG(0x10336690u)));
    wr32(sp0 - 0x68u, 0x3e000000u);
    d64 = (double)(float)fr(g, atan2(d63, 1.0));
    wrf32(sp0 - 0x6cu, (float)d64);
    d65 = fabs((double)rdf32(sp0 - 0x70u));
    if ((cow_fsw(g, d65, rdf64(COW_IMG(0x1033cd70u)), 0u) & 0x4100u) == 0u)
    {
        loc_cc_f = (double)(float)x0;
        loc_6c_f = d64;
        goto L_1024eb29;
    }
    eax = cow_fsw(g, d65, rdf64(COW_IMG(0x1033cd70u)), 0u) & 0x4100u;
    loc_cc_f = (double)(float)x0;
    loc_6c_f = d64;
    COW_AT(1024eb14)
    if ((cow_fsw(g, fabs(loc_cc_f), rdf64(COW_IMG(0x1033cd70u)), 0u) & 0x4100u) != 0u)
    {
        loc_68 = 0x3e000000u;
        goto L_1024eb34;
    }
L_1024eb29: ;
    COW_AT(1024eb29)
    wr32(sp0 - 0x68u, 0x3d23d70au);
    loc_68 = 0x3d23d70au;
L_1024eb34: ;
    COW_AT(1024eb34)
    wr32(sp0 - 0xf0u, sp0 - 0x30u);
    wr32(sp0 - 0xf4u, sp0 - 0x20u);
    g->eax = sp0 - 0x30u;
    g->ecx = sp0 - 0x20u;
    g->edx = edx;
    g->esp = sp0 - 0xecu;
    t66 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x20u, sp0 - 0x30u);
    t67 = g->ecx;
    t68 = g->edx;
    d69 = cow_take_float(g);
    eax = t66;
    ecx = t67;
    edx = t68;
    x0 = d69;
    COW_AT(1024eb49)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    fpush(g, x0);
    g->esp = sp0 - 0xe4u;
    t70 = cow_cdecl(g, COW_IMG(0x10313820u), 2, rd32(sp0 - 0xecu), rd32(sp0 - 0xe8u));
    t71 = g->ecx;
    t72 = g->edx;
    d73 = cow_take_float(g);
    eax = t70;
    ecx = t71;
    edx = t72;
    x0 = d73;
    COW_AT(1024eb51)
    wrf32(sp0 - 0xe4u, (float)(double)(float)x0);
    d74 = (double)rdf32(sp0 - 0x6cu);
    if ((cow_fsw(g, x0, d74, 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, x0, d74, 0u) & 0x4100u;
    COW_AT(1024ebe2)
        wr32(sp0 - 0xe4u, 0u);
    }
    else
    {
        eax = cow_fsw(g, x0, d74, 0u) & 0x4100u;
        loc_e4_f = (double)(float)x0;
    COW_AT(1024eb65)
        wr32(sp0 - 0xdcu, 0u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0xecu;
        t75 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
        t76 = g->ecx;
        t77 = g->edx;
        d78 = cow_take_float(g);
        eax = t75;
        ecx = t76;
        edx = t77;
        x0 = d78;
    COW_AT(1024eb72)
        fpush(g, x0);
        g->esp = sp0 - 0xecu;
        t79 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        eax = t79;
    COW_AT(1024eb77)
        if ((int32_t)eax <= 0)
        {
            loc_dc_f = (double)rdf32(sp0 - 0xdcu);
            x0 = (double)rdf32(sp0 - 0xdcu);
        }
        else
        {
            x0 = (double)rdf32(sp0 - 0xdcu);
    COW_AT(1024eb7f)
            x1 = (double)rdf32(sp0 - 0xe4u);
L_1024eb83: ;
    COW_AT(1024eb83)
            d80 = fr(g, fr(g, x1 - (double)rdf32(sp0 - 0x6cu)) * (double)rdf32(sp0 - 0x68u));
            if (eax != 1u)
            {
                eax = eax - 1u;
                x1 = fr(g, x1 - d80);
                x0 = fr(g, x0 + d80);
                goto L_1024eb83;
            }
            x1 = fr(g, x1 - d80);
            x0 = fr(g, x0 + d80);
    COW_AT(1024eb9c)
            wrf32(sp0 - 0xdcu, (float)(double)(float)x0);
            loc_dc_f = (double)(float)x0;
        }
    COW_AT(1024eba4)
        wrf32(sp0 - 0xe4u, (float)(double)(float)x0);
        wr32(sp0 - 0xf0u, sp0 - 0x30u);
        wr32(sp0 - 0xf4u, sp0 - 0x20u);
        wr32(sp0 - 0xf8u, sp0 - 0xc4u);
        g->eax = sp0 - 0x20u;
        g->ecx = sp0 - 0xc4u;
        g->edx = sp0 - 0x30u;
        g->esp = sp0 - 0xecu;
        t81 = cow_cdecl(g, COW_IMG(0x10027550u), 3, sp0 - 0xc4u, sp0 - 0x20u, sp0 - 0x30u);
        t82 = g->ecx;
        t83 = g->edx;
        eax = t81;
        ecx = t82;
        edx = t83;
    COW_AT(1024ebc2)
        d84 = (double)rdf32(sp0 - 0xc0u);
        if (!(d84 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d84, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d84, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(1024ebd6)
            d85 = (double)(float)-(double)rdf32(sp0 - 0xdcu);
            wrf32(sp0 - 0xe4u, (float)d85);
        }
    }
    COW_AT(1024ebea)
    g->ecx = ecx;
    g->esp = sp0 - 0xecu;
    cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t86 = g->ecx;
    d87 = cow_take_float(g);
    ecx = t86;
    x0 = d87;
    COW_AT(1024ebef)
    d88 = fr(g, fr(g, fr(g, x0 * (double)rdf32(sp0 - 0x70u)) * (double)rdf32(COW_IMG(0x1032a840u))) + (double)rdf32(sp0 - 0xe4u));
    wrf32(sp0 - 0xe4u, (float)(double)(float)d88);
    wr32(sp0 - 0xf0u, cow_f2bits((double)(float)d88));
    wr32(sp0 - 0xf4u, sp0 - 0x64u);
    g->esp = sp0 - 0xecu;
    cow_cdecl(g, COW_IMG(0x1027abf0u), 2, sp0 - 0x64u, cow_f2bits((double)(float)d88));
    COW_AT(1024ec13)
    t89 = rd32(sp0 - 0xe8u) + 0x68u;
    wr32(sp0 - 0xf8u, t89);
    wr32(sp0 - 0xfcu, sp0 - 0x64u);
    wr32(sp0 - 0x100u, sp0 - 0xa4u);
    g->eax = sp0 - 0xa4u;
    g->esp = sp0 - 0xf4u;
    t90 = cow_cdecl(g, COW_IMG(0x1027b190u), 3, sp0 - 0xa4u, sp0 - 0x64u, t89);
    eax = t90;
    COW_AT(1024ec2d)
    wr32(sp0 - 0x104u, sp0 - 0xa4u);
    t91 = rd32(sp0 - 0xe8u) + 0x68u;
    wr32(sp0 - 0x108u, t91);
    g->eax = eax;
    g->ecx = sp0 - 0xa4u;
    g->edx = t91;
    g->esp = sp0 - 0x100u;
    t92 = cow_cdecl(g, COW_IMG(0x1027a720u), 2, t91, sp0 - 0xa4u);
    t93 = g->ecx;
    t94 = g->edx;
    eax = t92;
    ecx = t93;
    edx = t94;
    COW_AT(1024ec3f)
    g->edx = edx;
    g->esp = sp0 - 0x108u;
    cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t95 = g->edx;
    d96 = cow_take_float(g);
    edx = t95;
    x0 = d96;
    COW_AT(1024ec44)
    d97 = fr(g, fr(g, x0 * (double)rdf32(sp0 - 0xccu)) * (double)rdf32(COW_IMG(0x1032a840u)));
    wrf32(sp0 - 0xe4u, (float)(double)(float)d97);
    wr32(sp0 - 0x10cu, cow_f2bits((double)(float)d97));
    wr32(sp0 - 0x110u, sp0 - 0x64u);
    g->esp = sp0 - 0x108u;
    cow_cdecl(g, COW_IMG(0x1027abc0u), 2, sp0 - 0x64u, cow_f2bits((double)(float)d97));
    COW_AT(1024ec64)
    wr32(sp0 - 0x114u, sp0 - 0x64u);
    t98 = rd32(sp0 - 0xe8u) + 0x68u;
    wr32(sp0 - 0x118u, t98);
    wr32(sp0 - 0x11cu, sp0 - 0xa4u);
    g->esp = sp0 - 0x110u;
    cow_cdecl(g, COW_IMG(0x1027b190u), 3, sp0 - 0xa4u, t98, sp0 - 0x64u);
    COW_AT(1024ec7e)
    wr32(sp0 - 0x120u, sp0 - 0xd8u);
    wr32(sp0 - 0x124u, sp0 - 0xa4u);
    wr32(sp0 - 0x128u, sp0 - 0xd8u);
    wr32(sp0 - 0xd8u, 0u);
    wr32(sp0 - 0xd4u, 0x3f800000u);
    wr32(sp0 - 0xd0u, 0u);
    g->eax = sp0 - 0xa4u;
    g->ecx = sp0 - 0xd8u;
    g->esp = sp0 - 0x11cu;
    t99 = cow_cdecl(g, COW_IMG(0x1027b0a0u), 3, sp0 - 0xd8u, sp0 - 0xa4u, sp0 - 0xd8u);
    t100 = g->ecx;
    eax = t99;
    ecx = t100;
    COW_AT(1024ecaa)
    d101 = (double)rdf32(sp0 - 0xd4u);
    if (d101 < (double)rdf32(COW_IMG(0x1032c9a4u)))
    {
    COW_AT(1024ecbe)
        t102 = rd32(sp0 - 0xe8u) + 0x68u;
        wr32(sp0 - 0xf0u, t102);
        wr32(sp0 - 0xf4u, sp0 - 0xa4u);
        g->esp = sp0 - 0xecu;
        cow_cdecl(g, COW_IMG(0x1027a720u), 2, sp0 - 0xa4u, t102);
    COW_AT(1024ecd0)
    }
    COW_AT(1024ecd3)
    wr32(sp0 - 0xf0u, sp0 - 0xd8u);
    wr32(sp0 - 0xf4u, sp0 - 0xa4u);
    wr32(sp0 - 0xf8u, sp0 - 0xd8u);
    wr32(sp0 - 0xd8u, 0u);
    wr32(sp0 - 0xd4u, 0u);
    wr32(sp0 - 0xd0u, 0x3f800000u);
    g->eax = sp0 - 0xd8u;
    g->edx = sp0 - 0xa4u;
    g->esp = sp0 - 0xecu;
    t103 = cow_cdecl(g, COW_IMG(0x1027b0a0u), 3, sp0 - 0xd8u, sp0 - 0xa4u, sp0 - 0xd8u);
    t104 = g->edx;
    eax = t103;
    edx = t104;
    COW_AT(1024ecff)
    d105 = (double)rdf32(sp0 - 0xd4u);
    if (d105 < (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d105, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(1024ed13)
        t106 = rd32(sp0 - 0xe8u) + 0x68u;
        wr32(sp0 - 0xf0u, t106);
        wr32(sp0 - 0xf4u, sp0 - 0xa4u);
        g->edx = sp0 - 0xa4u;
        g->esp = sp0 - 0xecu;
        cow_cdecl(g, COW_IMG(0x1027a720u), 2, sp0 - 0xa4u, t106);
        t107 = g->edx;
        edx = t107;
    COW_AT(1024ed25)
    }
    COW_AT(1024ed28)
    wr32(sp0 - 0xf0u, sp0 - 0xa4u);
    t108 = rd32(sp0 - 0xe8u) + 0x68u;
    wr32(sp0 - 0xf4u, t108);
    g->eax = sp0 - 0xa4u;
    g->ecx = t108;
    g->edx = edx;
    g->esp = sp0 - 0xecu;
    t109 = cow_cdecl(g, COW_IMG(0x1027a720u), 2, t108, sp0 - 0xa4u);
    t110 = g->ecx;
    t111 = g->edx;
    eax = t109;
    ecx = t110;
    edx = t111;
    COW_AT(1024ed3a)
    d112 = fr(g, (double)rdf32(sp0 - 0xe0u) - (double)rdf32(sp0 - 0xc8u));
    if (!(d112 < (double)rdf32(COW_IMG(0x1033cd7cu))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d112, (double)rdf32(COW_IMG(0x1033cd7cu)), 1u);
        x0 = d112;
        goto L_1024ed6a;
    }
    x0 = d112;
    COW_AT(1024ed52)
    t113 = rd32(sp0 - 0xe8u);
    d114 = fr(g, (double)rdf32(sp0 - 0xc8u) + (double)rdf32(COW_IMG(0x1033cd7cu)));
    wrf32(t113 + 0x78u, (float)d114);
    edx = t113;
L_1024f04c: ;
    COW_AT(1024f04c)
    t170 = rd32(sp0 - 0xe8u);
    wr32(sp0 - 0xf0u, t170);
    g->esp = sp0 - 0xecu;
    cow_cdecl(g, COW_IMG(0x1026e210u), 1, t170);
    COW_AT(1024f056)
    g->esi = rd32(sp0 - 0xecu);
    g->edi = edi;
    return;
L_1024e82c: ;
    COW_AT(1024e82c)
    wr32(sp0 - 0xf0u, 0xffffffffu);
    wr32(sp0 - 0xf4u, 4u);
    wr32(sp0 - 0xf8u, 0x50u);
    wr32(sp0 - 0xfcu, 0x3fu);
    g->esp = sp0 - 0xe0u;
    t13 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3fu, 0x50u, 4u, 0xffffffffu, rd32(sp0 - 0xecu), rd32(sp0 - 0xe8u), rd32(sp0 - 0xe4u));
    eax = t13;
    COW_AT(1024e839)
    if ((uint8_t)eax == 0u) goto L_1024e860;
    COW_AT(1024e840)
    d14 = (double)rdf32(rd32(sp0 - 0x84u) + 0x14u);
    if (!(d14 < (double)rdf32(COW_IMG(0x1033cd78u)))) goto L_1024e860;
    ecx = rd32(sp0 - 0x84u);
    COW_AT(1024e854)
    x0 = fr(g, (double)rdf32(ecx + 0x14u) + (double)rdf32(COW_IMG(0x103313a0u)));
    goto L_1024e85d;
L_1024e898: ;
    COW_AT(1024e898)
    t16 = rd32(rd32(sp0 - 0xe8u) + 0x5cu);
    wr32(sp0 - 0x94u, t16);
    t17 = rd32(rd32(sp0 - 0xe8u) + 0x60u);
    wr32(sp0 - 0x90u, t17);
    t18 = rd32(rd32(sp0 - 0xe8u) + 0x64u);
    wr32(sp0 - 0x8cu, t18);
    eax = t18;
    ecx = t16;
    edx = t17;
    loc_94 = t16;
    loc_8c = t18;
    goto L_1024e8de;
L_1024e8b3: ;
    COW_AT(1024e8b3)
    t19 = rd32(arg1 + 0x88u);
    wr32(sp0 - 0x94u, t19);
    eax = rd32(arg1 + 8u) * 3u;
    ecx = t19;
    edx = rd32(arg1 + 0x90u);
    loc_94 = t19;
    x0 = fr(g, (double)rdf32(arg1 + 0x8cu) + (double)rdf32(COW_IMG(0x103894c0u) + rd32(arg1 + 8u) * 0xcu));
    goto L_1024e8d6;
L_1024ed6a: ;
    COW_AT(1024ed6a)
    if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032d6bcu)), 0u) & 0x4100u) != 0u) goto L_1024f04c;
    COW_AT(1024ed7d)
    eax = rd32(sp0 - 0xe8u);
    x0 = fr(g, (double)rdf32(sp0 - 0xc8u) + (double)rdf32(COW_IMG(0x1032d6bcu)));
L_1024f049: ;
    COW_AT(1024f049)
    wrf32(eax + 0x78u, (float)x0);
    goto L_1024f04c;
L_1024ed90: ;
    COW_AT(1024ed90)
    t115 = rd32(sp0 - 0xe0u);
    d116 = fr(g, (double)rdf32(sp0 - 0x10u) - (double)rdf32(sp0 - 0x54u));
    wr32(sp0 - 0x80u, t115);
    wr32(sp0 - 0xf4u, sp0 - 0xc4u);
    t117 = rd32(sp0 - 0xccu);
    wr32(sp0 - 0x78u, t117);
    wrf32(sp0 - 0xc4u, (float)(double)(float)d116);
    d118 = fr(g, (double)rdf32(sp0 - 8u) - (double)rdf32(sp0 - 0x4cu));
    wrf32(sp0 - 0xbcu, (float)(double)(float)d118);
    g->esp = sp0 - 0xecu;
    cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0xc4u, sp0 - 0xc4u);
    d119 = cow_take_float(g);
    x0 = d119;
    COW_AT(1024edce)
    d120 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(x0)));
    wrf32(sp0 - 0xdcu, (float)(double)(float)d120);
    wr32(sp0 - 0xf8u, cow_f2bits((double)(float)d120));
    wr32(sp0 - 0xfcu, sp0 - 0xc4u);
    wr32(sp0 - 0x100u, sp0 - 0x20u);
    g->ecx = sp0 - 0x20u;
    g->esp = sp0 - 0xf4u;
    cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0x20u, sp0 - 0xc4u, cow_f2bits((double)(float)d120));
    t121 = g->ecx;
    ecx = t121;
    COW_AT(1024edf1)
    wr32(sp0 - 0x104u, sp0 - 0x80u);
    wr32(sp0 - 0x108u, sp0 - 0x80u);
    g->esp = sp0 - 0x100u;
    cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x80u, sp0 - 0x80u);
    d122 = cow_take_float(g);
    x0 = d122;
    COW_AT(1024ee06)
    d123 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt(x0)));
    wrf32(sp0 - 0xe0u, (float)(double)(float)d123);
    wr32(sp0 - 0x10cu, cow_f2bits((double)(float)d123));
    wr32(sp0 - 0x110u, sp0 - 0x80u);
    wr32(sp0 - 0x114u, sp0 - 0x30u);
    g->esp = sp0 - 0x108u;
    cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0x30u, sp0 - 0x80u, cow_f2bits((double)(float)d123));
    COW_AT(1024ee2c)
    wr32(sp0 - 0x118u, 0x40c90fdbu);
    wr32(sp0 - 0x11cu, sp0 - 0x30u);
    wr32(sp0 - 0x120u, sp0 - 0x20u);
    wr32(sp0 - 0x124u, sp0 - 0x64u);
    g->esp = sp0 - 0x114u;
    cow_cdecl(g, COW_IMG(0x1027ad10u), 4, sp0 - 0x64u, sp0 - 0x20u, sp0 - 0x30u, 0x40c90fdbu);
    COW_AT(1024ee4e)
    t124 = rd32(sp0 - 0xe8u) + 0x68u;
    wr32(sp0 - 0x128u, t124);
    wr32(sp0 - 0x12cu, sp0 - 0x64u);
    wr32(sp0 - 0x130u, sp0 - 0xa4u);
    g->eax = sp0 - 0xa4u;
    g->esp = sp0 - 0x124u;
    t125 = cow_cdecl(g, COW_IMG(0x1027b190u), 3, sp0 - 0xa4u, sp0 - 0x64u, t124);
    eax = t125;
    COW_AT(1024ee6b)
    wr32(sp0 - 0xf0u, sp0 - 0xa4u);
    t126 = rd32(sp0 - 0xe8u) + 0x68u;
    wr32(sp0 - 0xf4u, t126);
    g->eax = eax;
    g->ecx = sp0 - 0xa4u;
    g->edx = t126;
    g->esp = sp0 - 0xecu;
    t127 = cow_cdecl(g, COW_IMG(0x1027a720u), 2, t126, sp0 - 0xa4u);
    t128 = g->ecx;
    t129 = g->edx;
    eax = t127;
    ecx = t128;
    edx = t129;
    COW_AT(1024ee80)
    wr32(sp0 - 0xf8u, 6u);
    wr32(sp0 - 0xfcu, 0x3fu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xecu;
    t130 = cow_thiscall_cdecl(g, COW_IMG(0x10123970u), ecx, 4, 0x3fu, 6u, rd32(sp0 - 0xf4u), sp0 - 0xa4u);
    t131 = g->ecx;
    t132 = g->edx;
    d133 = cow_take_float(g);
    eax = t130;
    ecx = t131;
    edx = t132;
    x0 = d133;
    COW_AT(1024ee89)
    wrf32(sp0 - 0xe0u, (float)(double)(float)x0);
    g->edx = edx;
    g->esp = sp0 - 0xfcu;
    cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t134 = g->edx;
    d135 = cow_take_float(g);
    edx = t134;
    x0 = d135;
    COW_AT(1024ee92)
    d136 = fr(g, fr(g, x0 * (double)rdf32(sp0 - 0xe0u)) * (double)rdf32(COW_IMG(0x1032a840u)));
    wrf32(sp0 - 0xe4u, (float)(double)(float)d136);
    wr32(sp0 - 0x100u, cow_f2bits((double)(float)d136));
    wr32(sp0 - 0x104u, sp0 - 0x64u);
    g->esp = sp0 - 0xfcu;
    cow_cdecl(g, COW_IMG(0x1027abf0u), 2, sp0 - 0x64u, cow_f2bits((double)(float)d136));
    COW_AT(1024eeb2)
    t137 = rd32(sp0 - 0xe8u) + 0x68u;
    wr32(sp0 - 0x108u, t137);
    wr32(sp0 - 0x10cu, sp0 - 0x64u);
    wr32(sp0 - 0x110u, sp0 - 0xa4u);
    g->ecx = sp0 - 0xa4u;
    g->esp = sp0 - 0x104u;
    cow_cdecl(g, COW_IMG(0x1027b190u), 3, sp0 - 0xa4u, sp0 - 0x64u, t137);
    t138 = g->ecx;
    ecx = t138;
    COW_AT(1024eecc)
    wr32(sp0 - 0x114u, sp0 - 0xa4u);
    t139 = rd32(sp0 - 0xe8u) + 0x68u;
    wr32(sp0 - 0x118u, t139);
    g->eax = t139;
    g->ecx = ecx;
    g->edx = sp0 - 0xa4u;
    g->esp = sp0 - 0x110u;
    t140 = cow_cdecl(g, COW_IMG(0x1027a720u), 2, t139, sp0 - 0xa4u);
    t141 = g->ecx;
    t142 = g->edx;
    eax = t140;
    ecx = t141;
    edx = t142;
    COW_AT(1024eede)
    wr32(sp0 - 0x11cu, 7u);
    wr32(sp0 - 0x120u, 0x3fu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x110u;
    t143 = cow_thiscall_cdecl(g, COW_IMG(0x10123970u), ecx, 4, 0x3fu, 7u, rd32(sp0 - 0x118u), sp0 - 0xa4u);
    t144 = g->ecx;
    t145 = g->edx;
    d146 = cow_take_float(g);
    eax = t143;
    ecx = t144;
    edx = t145;
    x0 = d146;
    COW_AT(1024eee7)
    wrf32(sp0 - 0xe0u, (float)(double)(float)x0);
    g->esp = sp0 - 0x120u;
    t147 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    d148 = cow_take_float(g);
    eax = t147;
    x0 = d148;
    COW_AT(1024eef0)
    d149 = fr(g, fr(g, x0 * (double)rdf32(sp0 - 0xe0u)) * (double)rdf32(COW_IMG(0x1032a840u)));
    wrf32(sp0 - 0xe4u, (float)(double)(float)d149);
    wr32(sp0 - 0x124u, cow_f2bits((double)(float)d149));
    wr32(sp0 - 0x128u, sp0 - 0x64u);
    g->esp = sp0 - 0x120u;
    cow_cdecl(g, COW_IMG(0x1027abc0u), 2, sp0 - 0x64u, cow_f2bits((double)(float)d149));
    COW_AT(1024ef10)
    wr32(sp0 - 0x12cu, sp0 - 0x64u);
    t150 = rd32(sp0 - 0xe8u) + 0x68u;
    wr32(sp0 - 0x130u, t150);
    wr32(sp0 - 0x134u, sp0 - 0xa4u);
    g->esp = sp0 - 0x128u;
    cow_cdecl(g, COW_IMG(0x1027b190u), 3, sp0 - 0xa4u, t150, sp0 - 0x64u);
    COW_AT(1024ef2d)
    wr32(sp0 - 0xf0u, sp0 - 0xd8u);
    wr32(sp0 - 0xf4u, sp0 - 0xa4u);
    wr32(sp0 - 0xf8u, sp0 - 0xd8u);
    wr32(sp0 - 0xd8u, 0u);
    wr32(sp0 - 0xd4u, 0x3f800000u);
    wr32(sp0 - 0xd0u, 0u);
    g->eax = sp0 - 0xd8u;
    g->edx = sp0 - 0xd8u;
    g->esp = sp0 - 0xecu;
    t151 = cow_cdecl(g, COW_IMG(0x1027b0a0u), 3, sp0 - 0xd8u, sp0 - 0xa4u, sp0 - 0xd8u);
    t152 = g->edx;
    eax = t151;
    edx = t152;
    COW_AT(1024ef5c)
    d153 = (double)rdf32(sp0 - 0xd4u);
    if (d153 < (double)rdf32(COW_IMG(0x1032a378u)))
    {
    COW_AT(1024ef70)
        t154 = rd32(sp0 - 0xe8u) + 0x68u;
        wr32(sp0 - 0xf0u, t154);
        wr32(sp0 - 0xf4u, sp0 - 0xa4u);
        g->esp = sp0 - 0xecu;
        cow_cdecl(g, COW_IMG(0x1027a720u), 2, sp0 - 0xa4u, t154);
    COW_AT(1024ef82)
    }
    COW_AT(1024ef85)
    wr32(sp0 - 0xf0u, sp0 - 0xd8u);
    wr32(sp0 - 0xf4u, sp0 - 0xa4u);
    wr32(sp0 - 0xf8u, sp0 - 0xd8u);
    wr32(sp0 - 0xd8u, 0u);
    wr32(sp0 - 0xd4u, 0u);
    wr32(sp0 - 0xd0u, 0x3f800000u);
    g->eax = sp0 - 0xa4u;
    g->ecx = sp0 - 0xd8u;
    g->esp = sp0 - 0xecu;
    t155 = cow_cdecl(g, COW_IMG(0x1027b0a0u), 3, sp0 - 0xd8u, sp0 - 0xa4u, sp0 - 0xd8u);
    t156 = g->ecx;
    eax = t155;
    ecx = t156;
    COW_AT(1024efb1)
    d157 = (double)rdf32(sp0 - 0xd4u);
    if (!(d157 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d157, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    }
    else
    {
    COW_AT(1024efc5)
        t158 = rd32(sp0 - 0xe8u) + 0x68u;
        wr32(sp0 - 0xf0u, t158);
        wr32(sp0 - 0xf4u, sp0 - 0xa4u);
        g->eax = sp0 - 0xa4u;
        g->esp = sp0 - 0xecu;
        t159 = cow_cdecl(g, COW_IMG(0x1027a720u), 2, sp0 - 0xa4u, t158);
        eax = t159;
    COW_AT(1024efd7)
    }
    COW_AT(1024efda)
    wr32(sp0 - 0xf0u, sp0 - 0xa4u);
    t160 = rd32(sp0 - 0xe8u) + 0x68u;
    wr32(sp0 - 0xf4u, t160);
    g->eax = eax;
    g->esp = sp0 - 0xecu;
    t161 = cow_cdecl(g, COW_IMG(0x1027a720u), 2, t160, sp0 - 0xa4u);
    eax = t161;
    COW_AT(1024efec)
    d162 = (double)rdf32(rd32(sp0 - 0xe8u) + 0x78u);
    d163 = (double)rdf32(COW_IMG(0x103894bcu) + rd32(arg1 + 8u) * 0xcu);
    if ((cow_fsw(g, d162, d163, 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, d162, d163, 0u) & 0x100u;
        ecx = rd32(arg1 + 8u) * 0xcu;
        edx = rd32(sp0 - 0xe8u);
        goto L_1024f016;
    }
    eax = cow_fsw(g, d162, d163, 0u) & 0x100u;
    ecx = rd32(arg1 + 8u) * 0xcu;
    edx = rd32(sp0 - 0xe8u);
    COW_AT(1024f00e)
    x0 = (double)rdf32(COW_IMG(0x103894bcu) + ecx);
L_1024f02c: ;
    COW_AT(1024f02c)
    d166 = fr(g, fr(g, x0 - (double)rdf32(edx + 0x78u)) * (double)rdf32(COW_IMG(0x1032a3bcu)));
    wrf32(sp0 - 0xe4u, (float)(double)(float)d166);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xecu;
    cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t167 = g->ecx;
    t168 = g->edx;
    d169 = cow_take_float(g);
    ecx = t167;
    edx = t168;
    x0 = d169;
    COW_AT(1024f03e)
    eax = rd32(sp0 - 0xe8u);
    x0 = fr(g, fr(g, x0 * (double)rdf32(sp0 - 0xe4u)) + (double)rdf32(rd32(sp0 - 0xe8u) + 0x78u));
    goto L_1024f049;
L_1024f016: ;
    COW_AT(1024f016)
    d164 = (double)rdf32(edx + 0x78u);
    d165 = (double)rdf32(COW_IMG(0x103894b8u) + ecx);
    if (!(d164 < d165)) goto L_1024f04c;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d164, d165, 0u);
    COW_AT(1024f026)
    x0 = (double)rdf32(COW_IMG(0x103894b8u) + ecx);
    goto L_1024f02c;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1024e780(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1024e794u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0xf0u;
        wr32(sp0 - 0xf0u, sp0 - 0x34u);
        (void)sp0;
        return 1;
    }
    case 0x1024e7aau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0xecu;
        g->esi = arg1;
        wr32(sp0 - 0xf0u, sp0 - 0x34u);
        (void)sp0;
        return 1;
    }
    case 0x1024e7b8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0xecu;
        g->esi = arg1;
        wr32(sp0 - 0xf0u, sp0 - 0x34u);
        (void)sp0;
        return 1;
    }
    case 0x1024e7c6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_f8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        loc_f8 = rd32(sp0 - 0xf8u);
        in_esi = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0xf8u;
        g->esi = arg1;
        wr32(sp0 - 0xf4u, sp0 - 0x84u);
        wr32(sp0 - 0xf0u, sp0 - 0xe8u);
        (void)sp0;
        return 1;
    }
    case 0x1024e7cbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0xf8u;
        g->esi = arg1;
        wr32(sp0 - 0xf4u, sp0 - 0x84u);
        wr32(sp0 - 0xf0u, sp0 - 0xe8u);
        (void)sp0;
        return 1;
    }
    case 0x1024e804u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t loc_f0;
        uint32_t loc_f8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f0 = rd32(sp0 - 0xf0u);
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1024e80bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t loc_f0;
        uint32_t loc_f8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f0 = rd32(sp0 - 0xf0u);
        g->esp = sp0 - 0xecu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1024e821u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t loc_f0;
        uint32_t loc_f8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f0 = rd32(sp0 - 0xf0u);
        g->esp = sp0 - 0xecu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1024e82cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t loc_f0;
        uint32_t loc_f8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f0 = rd32(sp0 - 0xf0u);
        g->esp = sp0 - 0xecu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1024e839u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t loc_f0;
        uint32_t loc_f8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f0 = rd32(sp0 - 0xf0u);
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1024e840u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t loc_f0;
        uint32_t loc_f8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f0 = rd32(sp0 - 0xf0u);
        g->esp = sp0 - 0xecu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1024e854u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t loc_f0;
        uint32_t loc_f8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f0 = rd32(sp0 - 0xf0u);
        g->esp = sp0 - 0xecu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1024e85du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t loc_f0;
        uint32_t loc_f8;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f0 = rd32(sp0 - 0xf0u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xecu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1024e860u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t loc_f0;
        uint32_t loc_f8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f0 = rd32(sp0 - 0xf0u);
        g->esp = sp0 - 0xecu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1024e867u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t loc_f0;
        uint32_t loc_f8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f0 = rd32(sp0 - 0xf0u);
        g->esp = sp0 - 0xecu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1024e86eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t loc_f0;
        uint32_t loc_f8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f0 = rd32(sp0 - 0xf0u);
        g->esp = sp0 - 0xecu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1024e873u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t loc_f0;
        uint32_t loc_f8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f0 = rd32(sp0 - 0xf0u);
        g->esp = sp0 - 0xecu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1024e898u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t loc_f0;
        uint32_t loc_f8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f0 = rd32(sp0 - 0xf0u);
        g->esp = sp0 - 0xecu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1024e8b3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t loc_f0;
        uint32_t loc_f8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f0 = rd32(sp0 - 0xf0u);
        g->esp = sp0 - 0xecu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1024e8d6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t loc_94;
        uint32_t loc_f0;
        uint32_t loc_f8;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f0 = rd32(sp0 - 0xf0u);
        loc_94 = rd32(sp0 - 0x94u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xecu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1024e8deu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t loc_8c;
        uint32_t loc_94;
        uint32_t loc_f0;
        uint32_t loc_f8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f0 = rd32(sp0 - 0xf0u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_8c = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0xecu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1024e8e3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xecu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1024e8e8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0xecu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1024e8ecu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0xecu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1024e8efu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_ac_f;
        double loc_b0_f;
        double loc_b4_f;
        uint32_t loc_f0;
        uint32_t loc_f8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f0 = rd32(sp0 - 0xf0u);
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0_f = rdf32(sp0 - 0xb0u);
        loc_ac_f = rdf32(sp0 - 0xacu);
        g->esp = sp0 - 0xf0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1024e936u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        wr32(sp0 - 0xfcu, sp0 - 0x44u);
        wr32(sp0 - 0xf8u, sp0 - 0x44u);
        (void)sp0;
        return 1;
    }
    case 0x1024e969u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_ac_f;
        double loc_b0_f;
        double loc_b4_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0_f = rdf32(sp0 - 0xb0u);
        loc_ac_f = rdf32(sp0 - 0xacu);
        g->esp = sp0 - 0xf0u;
        g->esi = arg1;
        wr32(sp0 - 0xfcu, sp0 - 0x44u);
        wr32(sp0 - 0xf8u, sp0 - 0x44u);
        (void)sp0;
        return 1;
    }
    case 0x1024e96au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_ac_f;
        double loc_b0_f;
        double loc_b4_f;
        uint32_t loc_f8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0_f = rdf32(sp0 - 0xb0u);
        loc_ac_f = rdf32(sp0 - 0xacu);
        g->esp = sp0 - 0xecu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1024e9e7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xf4u;
        g->esi = arg1;
        wr32(sp0 - 0xf4u, sp0 - 0xc4u);
        wr32(sp0 - 0xf0u, sp0 - 0xc4u);
        (void)sp0;
        return 1;
    }
    case 0x1024ea13u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xf0u;
        g->eax = sp0 - 0xc4u;
        g->esi = arg1;
        wr32(sp0 - 0xf0u, sp0 - 0xc4u);
        wr32(sp0 - 0xc0u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1024ea57u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xf4u;
        wr32(sp0 - 0xf4u, sp0 - 0xc4u);
        wr32(sp0 - 0xf0u, sp0 - 0xc4u);
        (void)sp0;
        return 1;
    }
    case 0x1024ea82u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x100u;
        wr32(sp0 - 0x100u, sp0 - 0x20u);
        wr32(sp0 - 0xfcu, sp0 - 0xc4u);
        wr32(sp0 - 0xf4u, sp0 - 0xc4u);
        wr32(sp0 - 0xf0u, sp0 - 0xc4u);
        (void)sp0;
        return 1;
    }
    case 0x1024ea97u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x108u;
        wr32(sp0 - 0x108u, sp0 - 0x80u);
        wr32(sp0 - 0x104u, sp0 - 0x80u);
        wr32(sp0 - 0x100u, sp0 - 0x20u);
        wr32(sp0 - 0xfcu, sp0 - 0xc4u);
        wr32(sp0 - 0xf4u, sp0 - 0xc4u);
        wr32(sp0 - 0xf0u, sp0 - 0xc4u);
        (void)sp0;
        return 1;
    }
    case 0x1024eabfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xf8u;
        wr32(sp0 - 0x108u, sp0 - 0x80u);
        wr32(sp0 - 0x104u, sp0 - 0x80u);
        wr32(sp0 - 0x100u, sp0 - 0x20u);
        wr32(sp0 - 0xfcu, sp0 - 0xc4u);
        wr32(sp0 - 0xf8u, sp0 - 0x30u);
        wr32(sp0 - 0xf4u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1024eac8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x100u;
        wr32(sp0 - 0x108u, sp0 - 0x80u);
        wr32(sp0 - 0x104u, sp0 - 0x80u);
        wr32(sp0 - 0x100u, 0x3fu);
        wr32(sp0 - 0xfcu, 6u);
        wr32(sp0 - 0xf8u, sp0 - 0x30u);
        wr32(sp0 - 0xf4u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1024ead8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x108u;
        wr32(sp0 - 0xf8u, sp0 - 0x30u);
        wr32(sp0 - 0xf4u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1024eb14u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_6c_f;
        double loc_cc_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_cc_f = rdf32(sp0 - 0xccu);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        g->esp = sp0 - 0xecu;
        wr32(sp0 - 0xf8u, sp0 - 0x30u);
        wr32(sp0 - 0xf4u, sp0 - 0x80u);
        wr32(sp0 - 0x68u, 0x3e000000u);
        (void)sp0;
        return 1;
    }
    case 0x1024eb29u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_68;
        double loc_6c_f;
        double loc_cc_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_cc_f = rdf32(sp0 - 0xccu);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        g->esp = sp0 - 0xecu;
        wr32(sp0 - 0xf8u, sp0 - 0x30u);
        wr32(sp0 - 0xf4u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1024eb34u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_68;
        double loc_6c_f;
        double loc_cc_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_cc_f = rdf32(sp0 - 0xccu);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        g->esp = sp0 - 0xecu;
        wr32(sp0 - 0xf8u, sp0 - 0x30u);
        wr32(sp0 - 0xf4u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1024eb49u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xf4u;
        wr32(sp0 - 0xf8u, sp0 - 0x30u);
        wr32(sp0 - 0xf4u, sp0 - 0x20u);
        wr32(sp0 - 0xf0u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x1024eb51u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xecu;
        wr32(sp0 - 0xf8u, sp0 - 0x30u);
        wr32(sp0 - 0xf4u, sp0 - 0x20u);
        wr32(sp0 - 0xf0u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x1024eb65u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_e4_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_e4_f = rdf32(sp0 - 0xe4u);
        g->esp = sp0 - 0xecu;
        wr32(sp0 - 0xf8u, sp0 - 0x30u);
        wr32(sp0 - 0xf4u, sp0 - 0x20u);
        wr32(sp0 - 0xf0u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x1024eb72u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xecu;
        wr32(sp0 - 0xf8u, sp0 - 0x30u);
        wr32(sp0 - 0xf4u, sp0 - 0x20u);
        wr32(sp0 - 0xf0u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x1024eb77u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xecu;
        wr32(sp0 - 0xf8u, sp0 - 0x30u);
        wr32(sp0 - 0xf4u, sp0 - 0x20u);
        wr32(sp0 - 0xf0u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x1024eb7fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xecu;
        wr32(sp0 - 0xf8u, sp0 - 0x30u);
        wr32(sp0 - 0xf4u, sp0 - 0x20u);
        wr32(sp0 - 0xf0u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x1024eb83u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0xecu;
        wr32(sp0 - 0xf8u, sp0 - 0x30u);
        wr32(sp0 - 0xf4u, sp0 - 0x20u);
        wr32(sp0 - 0xf0u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x1024eb9cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0xecu;
        wr32(sp0 - 0xf8u, sp0 - 0x30u);
        wr32(sp0 - 0xf4u, sp0 - 0x20u);
        wr32(sp0 - 0xf0u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x1024eba4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_dc_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_dc_f = rdf32(sp0 - 0xdcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xecu;
        wr32(sp0 - 0xf8u, sp0 - 0x30u);
        wr32(sp0 - 0xf4u, sp0 - 0x20u);
        wr32(sp0 - 0xf0u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x1024ebc2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xf8u;
        wr32(sp0 - 0xf8u, sp0 - 0xc4u);
        wr32(sp0 - 0xf4u, sp0 - 0x20u);
        wr32(sp0 - 0xf0u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x1024ebd6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xecu;
        wr32(sp0 - 0xf8u, sp0 - 0xc4u);
        wr32(sp0 - 0xf4u, sp0 - 0x20u);
        wr32(sp0 - 0xf0u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x1024ebe2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double loc_e4_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_e4_f = rdf32(sp0 - 0xe4u);
        g->esp = sp0 - 0xecu;
        wr32(sp0 - 0xf8u, sp0 - 0x30u);
        wr32(sp0 - 0xf4u, sp0 - 0x20u);
        wr32(sp0 - 0xf0u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x1024ebeau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_f8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_f8 = rd32(sp0 - 0xf8u);
        g->esp = sp0 - 0xecu;
        wr32(sp0 - 0xf4u, sp0 - 0x20u);
        wr32(sp0 - 0xf0u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x1024ebefu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xecu;
        wr32(sp0 - 0xf4u, sp0 - 0x20u);
        wr32(sp0 - 0xf0u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x1024ec13u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xf4u;
        wr32(sp0 - 0xf4u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x1024ec2du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x100u;
        wr32(sp0 - 0x100u, sp0 - 0xa4u);
        wr32(sp0 - 0xfcu, sp0 - 0x64u);
        wr32(sp0 - 0xf4u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x1024ec3fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x108u;
        wr32(sp0 - 0x104u, sp0 - 0xa4u);
        wr32(sp0 - 0x100u, sp0 - 0xa4u);
        wr32(sp0 - 0xfcu, sp0 - 0x64u);
        wr32(sp0 - 0xf4u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x1024ec44u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x108u;
        wr32(sp0 - 0x104u, sp0 - 0xa4u);
        wr32(sp0 - 0x100u, sp0 - 0xa4u);
        wr32(sp0 - 0xfcu, sp0 - 0x64u);
        wr32(sp0 - 0xf4u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x1024ec64u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x110u;
        wr32(sp0 - 0x110u, sp0 - 0x64u);
        wr32(sp0 - 0x104u, sp0 - 0xa4u);
        wr32(sp0 - 0x100u, sp0 - 0xa4u);
        wr32(sp0 - 0xfcu, sp0 - 0x64u);
        wr32(sp0 - 0xf4u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x1024ec7eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x11cu;
        wr32(sp0 - 0x11cu, sp0 - 0xa4u);
        wr32(sp0 - 0x114u, sp0 - 0x64u);
        wr32(sp0 - 0x110u, sp0 - 0x64u);
        wr32(sp0 - 0x104u, sp0 - 0xa4u);
        wr32(sp0 - 0x100u, sp0 - 0xa4u);
        wr32(sp0 - 0xfcu, sp0 - 0x64u);
        wr32(sp0 - 0xf4u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x1024ecaau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x128u, sp0 - 0xd8u);
        wr32(sp0 - 0x124u, sp0 - 0xa4u);
        wr32(sp0 - 0x120u, sp0 - 0xd8u);
        wr32(sp0 - 0x11cu, sp0 - 0xa4u);
        wr32(sp0 - 0x114u, sp0 - 0x64u);
        wr32(sp0 - 0x110u, sp0 - 0x64u);
        wr32(sp0 - 0x104u, sp0 - 0xa4u);
        wr32(sp0 - 0x100u, sp0 - 0xa4u);
        wr32(sp0 - 0xfcu, sp0 - 0x64u);
        wr32(sp0 - 0xf4u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x1024ecbeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xecu;
        wr32(sp0 - 0x128u, sp0 - 0xd8u);
        wr32(sp0 - 0x124u, sp0 - 0xa4u);
        wr32(sp0 - 0x120u, sp0 - 0xd8u);
        wr32(sp0 - 0x11cu, sp0 - 0xa4u);
        wr32(sp0 - 0x114u, sp0 - 0x64u);
        wr32(sp0 - 0x110u, sp0 - 0x64u);
        wr32(sp0 - 0x104u, sp0 - 0xa4u);
        wr32(sp0 - 0x100u, sp0 - 0xa4u);
        wr32(sp0 - 0xfcu, sp0 - 0x64u);
        wr32(sp0 - 0xf4u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x1024ecd0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xf4u;
        wr32(sp0 - 0x128u, sp0 - 0xd8u);
        wr32(sp0 - 0x124u, sp0 - 0xa4u);
        wr32(sp0 - 0x120u, sp0 - 0xd8u);
        wr32(sp0 - 0x11cu, sp0 - 0xa4u);
        wr32(sp0 - 0x114u, sp0 - 0x64u);
        wr32(sp0 - 0x110u, sp0 - 0x64u);
        wr32(sp0 - 0x104u, sp0 - 0xa4u);
        wr32(sp0 - 0x100u, sp0 - 0xa4u);
        wr32(sp0 - 0xfcu, sp0 - 0x64u);
        wr32(sp0 - 0xf4u, sp0 - 0xa4u);
        (void)sp0;
        return 1;
    }
    case 0x1024ecd3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xecu;
        wr32(sp0 - 0x128u, sp0 - 0xd8u);
        wr32(sp0 - 0x124u, sp0 - 0xa4u);
        wr32(sp0 - 0x120u, sp0 - 0xd8u);
        wr32(sp0 - 0x11cu, sp0 - 0xa4u);
        wr32(sp0 - 0x114u, sp0 - 0x64u);
        wr32(sp0 - 0x110u, sp0 - 0x64u);
        wr32(sp0 - 0x104u, sp0 - 0xa4u);
        wr32(sp0 - 0x100u, sp0 - 0xa4u);
        wr32(sp0 - 0xfcu, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x1024ecffu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xf8u;
        wr32(sp0 - 0x128u, sp0 - 0xd8u);
        wr32(sp0 - 0x124u, sp0 - 0xa4u);
        wr32(sp0 - 0x120u, sp0 - 0xd8u);
        wr32(sp0 - 0x11cu, sp0 - 0xa4u);
        wr32(sp0 - 0x114u, sp0 - 0x64u);
        wr32(sp0 - 0x110u, sp0 - 0x64u);
        wr32(sp0 - 0x104u, sp0 - 0xa4u);
        wr32(sp0 - 0x100u, sp0 - 0xa4u);
        wr32(sp0 - 0xfcu, sp0 - 0x64u);
        wr32(sp0 - 0xf8u, sp0 - 0xd8u);
        wr32(sp0 - 0xf4u, sp0 - 0xa4u);
        wr32(sp0 - 0xf0u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x1024ed13u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xecu;
        wr32(sp0 - 0x128u, sp0 - 0xd8u);
        wr32(sp0 - 0x124u, sp0 - 0xa4u);
        wr32(sp0 - 0x120u, sp0 - 0xd8u);
        wr32(sp0 - 0x11cu, sp0 - 0xa4u);
        wr32(sp0 - 0x114u, sp0 - 0x64u);
        wr32(sp0 - 0x110u, sp0 - 0x64u);
        wr32(sp0 - 0x104u, sp0 - 0xa4u);
        wr32(sp0 - 0x100u, sp0 - 0xa4u);
        wr32(sp0 - 0xfcu, sp0 - 0x64u);
        wr32(sp0 - 0xf8u, sp0 - 0xd8u);
        wr32(sp0 - 0xf4u, sp0 - 0xa4u);
        wr32(sp0 - 0xf0u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x1024ed25u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xf4u;
        wr32(sp0 - 0x128u, sp0 - 0xd8u);
        wr32(sp0 - 0x124u, sp0 - 0xa4u);
        wr32(sp0 - 0x120u, sp0 - 0xd8u);
        wr32(sp0 - 0x11cu, sp0 - 0xa4u);
        wr32(sp0 - 0x114u, sp0 - 0x64u);
        wr32(sp0 - 0x110u, sp0 - 0x64u);
        wr32(sp0 - 0x104u, sp0 - 0xa4u);
        wr32(sp0 - 0x100u, sp0 - 0xa4u);
        wr32(sp0 - 0xfcu, sp0 - 0x64u);
        wr32(sp0 - 0xf8u, sp0 - 0xd8u);
        wr32(sp0 - 0xf4u, sp0 - 0xa4u);
        (void)sp0;
        return 1;
    }
    case 0x1024ed28u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_f0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_f0 = rd32(sp0 - 0xf0u);
        g->esp = sp0 - 0xecu;
        wr32(sp0 - 0x128u, sp0 - 0xd8u);
        wr32(sp0 - 0x124u, sp0 - 0xa4u);
        wr32(sp0 - 0x120u, sp0 - 0xd8u);
        wr32(sp0 - 0x11cu, sp0 - 0xa4u);
        wr32(sp0 - 0x114u, sp0 - 0x64u);
        wr32(sp0 - 0x110u, sp0 - 0x64u);
        wr32(sp0 - 0x104u, sp0 - 0xa4u);
        wr32(sp0 - 0x100u, sp0 - 0xa4u);
        wr32(sp0 - 0xfcu, sp0 - 0x64u);
        wr32(sp0 - 0xf8u, sp0 - 0xd8u);
        wr32(sp0 - 0xf4u, sp0 - 0xa4u);
        (void)sp0;
        return 1;
    }
    case 0x1024ed3au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xf4u;
        wr32(sp0 - 0x128u, sp0 - 0xd8u);
        wr32(sp0 - 0x124u, sp0 - 0xa4u);
        wr32(sp0 - 0x120u, sp0 - 0xd8u);
        wr32(sp0 - 0x11cu, sp0 - 0xa4u);
        wr32(sp0 - 0x114u, sp0 - 0x64u);
        wr32(sp0 - 0x110u, sp0 - 0x64u);
        wr32(sp0 - 0x104u, sp0 - 0xa4u);
        wr32(sp0 - 0x100u, sp0 - 0xa4u);
        wr32(sp0 - 0xfcu, sp0 - 0x64u);
        wr32(sp0 - 0xf8u, sp0 - 0xd8u);
        wr32(sp0 - 0xf0u, sp0 - 0xa4u);
        (void)sp0;
        return 1;
    }
    case 0x1024ed52u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xecu;
        wr32(sp0 - 0x128u, sp0 - 0xd8u);
        wr32(sp0 - 0x124u, sp0 - 0xa4u);
        wr32(sp0 - 0x120u, sp0 - 0xd8u);
        wr32(sp0 - 0x11cu, sp0 - 0xa4u);
        wr32(sp0 - 0x114u, sp0 - 0x64u);
        wr32(sp0 - 0x110u, sp0 - 0x64u);
        wr32(sp0 - 0x104u, sp0 - 0xa4u);
        wr32(sp0 - 0x100u, sp0 - 0xa4u);
        wr32(sp0 - 0xfcu, sp0 - 0x64u);
        wr32(sp0 - 0xf8u, sp0 - 0xd8u);
        wr32(sp0 - 0xf0u, sp0 - 0xa4u);
        (void)sp0;
        return 1;
    }
    case 0x1024ed6au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xecu;
        wr32(sp0 - 0x128u, sp0 - 0xd8u);
        wr32(sp0 - 0x124u, sp0 - 0xa4u);
        wr32(sp0 - 0x120u, sp0 - 0xd8u);
        wr32(sp0 - 0x11cu, sp0 - 0xa4u);
        wr32(sp0 - 0x114u, sp0 - 0x64u);
        wr32(sp0 - 0x110u, sp0 - 0x64u);
        wr32(sp0 - 0x104u, sp0 - 0xa4u);
        wr32(sp0 - 0x100u, sp0 - 0xa4u);
        wr32(sp0 - 0xfcu, sp0 - 0x64u);
        wr32(sp0 - 0xf8u, sp0 - 0xd8u);
        wr32(sp0 - 0xf0u, sp0 - 0xa4u);
        (void)sp0;
        return 1;
    }
    case 0x1024ed7du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xecu;
        wr32(sp0 - 0x128u, sp0 - 0xd8u);
        wr32(sp0 - 0x124u, sp0 - 0xa4u);
        wr32(sp0 - 0x120u, sp0 - 0xd8u);
        wr32(sp0 - 0x11cu, sp0 - 0xa4u);
        wr32(sp0 - 0x114u, sp0 - 0x64u);
        wr32(sp0 - 0x110u, sp0 - 0x64u);
        wr32(sp0 - 0x104u, sp0 - 0xa4u);
        wr32(sp0 - 0x100u, sp0 - 0xa4u);
        wr32(sp0 - 0xfcu, sp0 - 0x64u);
        wr32(sp0 - 0xf8u, sp0 - 0xd8u);
        wr32(sp0 - 0xf0u, sp0 - 0xa4u);
        (void)sp0;
        return 1;
    }
    case 0x1024ed90u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xf0u;
        g->eax = sp0 - 0xc4u;
        g->esi = arg1;
        wr32(sp0 - 0xf0u, sp0 - 0xc4u);
        (void)sp0;
        return 1;
    }
    case 0x1024edceu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xf4u;
        g->esi = arg1;
        wr32(sp0 - 0xf4u, sp0 - 0xc4u);
        wr32(sp0 - 0xf0u, sp0 - 0xc4u);
        (void)sp0;
        return 1;
    }
    case 0x1024edf1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x100u;
        g->esi = arg1;
        wr32(sp0 - 0x100u, sp0 - 0x20u);
        wr32(sp0 - 0xfcu, sp0 - 0xc4u);
        wr32(sp0 - 0xf4u, sp0 - 0xc4u);
        wr32(sp0 - 0xf0u, sp0 - 0xc4u);
        (void)sp0;
        return 1;
    }
    case 0x1024ee06u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x108u;
        g->esi = arg1;
        wr32(sp0 - 0x108u, sp0 - 0x80u);
        wr32(sp0 - 0x104u, sp0 - 0x80u);
        wr32(sp0 - 0x100u, sp0 - 0x20u);
        wr32(sp0 - 0xfcu, sp0 - 0xc4u);
        wr32(sp0 - 0xf4u, sp0 - 0xc4u);
        wr32(sp0 - 0xf0u, sp0 - 0xc4u);
        (void)sp0;
        return 1;
    }
    case 0x1024ee2cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x114u;
        g->esi = arg1;
        wr32(sp0 - 0x114u, sp0 - 0x30u);
        wr32(sp0 - 0x110u, sp0 - 0x80u);
        wr32(sp0 - 0x108u, sp0 - 0x80u);
        wr32(sp0 - 0x104u, sp0 - 0x80u);
        wr32(sp0 - 0x100u, sp0 - 0x20u);
        wr32(sp0 - 0xfcu, sp0 - 0xc4u);
        wr32(sp0 - 0xf4u, sp0 - 0xc4u);
        wr32(sp0 - 0xf0u, sp0 - 0xc4u);
        (void)sp0;
        return 1;
    }
    case 0x1024ee4eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x124u;
        g->esi = arg1;
        wr32(sp0 - 0x124u, sp0 - 0x64u);
        wr32(sp0 - 0x120u, sp0 - 0x20u);
        wr32(sp0 - 0x11cu, sp0 - 0x30u);
        wr32(sp0 - 0x114u, sp0 - 0x30u);
        wr32(sp0 - 0x110u, sp0 - 0x80u);
        wr32(sp0 - 0x108u, sp0 - 0x80u);
        wr32(sp0 - 0x104u, sp0 - 0x80u);
        wr32(sp0 - 0x100u, sp0 - 0x20u);
        wr32(sp0 - 0xfcu, sp0 - 0xc4u);
        wr32(sp0 - 0xf4u, sp0 - 0xc4u);
        wr32(sp0 - 0xf0u, sp0 - 0xc4u);
        (void)sp0;
        return 1;
    }
    case 0x1024ee6bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->esi = arg1;
        wr32(sp0 - 0x130u, sp0 - 0xa4u);
        wr32(sp0 - 0x12cu, sp0 - 0x64u);
        wr32(sp0 - 0x124u, sp0 - 0x64u);
        wr32(sp0 - 0x120u, sp0 - 0x20u);
        wr32(sp0 - 0x11cu, sp0 - 0x30u);
        wr32(sp0 - 0x114u, sp0 - 0x30u);
        wr32(sp0 - 0x110u, sp0 - 0x80u);
        wr32(sp0 - 0x108u, sp0 - 0x80u);
        wr32(sp0 - 0x104u, sp0 - 0x80u);
        wr32(sp0 - 0x100u, sp0 - 0x20u);
        wr32(sp0 - 0xfcu, sp0 - 0xc4u);
        wr32(sp0 - 0xf4u, sp0 - 0xc4u);
        wr32(sp0 - 0xf0u, sp0 - 0xc4u);
        (void)sp0;
        return 1;
    }
    case 0x1024ee80u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xf4u;
        g->esi = arg1;
        wr32(sp0 - 0x130u, sp0 - 0xa4u);
        wr32(sp0 - 0x12cu, sp0 - 0x64u);
        wr32(sp0 - 0x124u, sp0 - 0x64u);
        wr32(sp0 - 0x120u, sp0 - 0x20u);
        wr32(sp0 - 0x11cu, sp0 - 0x30u);
        wr32(sp0 - 0x114u, sp0 - 0x30u);
        wr32(sp0 - 0x110u, sp0 - 0x80u);
        wr32(sp0 - 0x108u, sp0 - 0x80u);
        wr32(sp0 - 0x104u, sp0 - 0x80u);
        wr32(sp0 - 0x100u, sp0 - 0x20u);
        wr32(sp0 - 0xfcu, sp0 - 0xc4u);
        wr32(sp0 - 0xf0u, sp0 - 0xa4u);
        (void)sp0;
        return 1;
    }
    case 0x1024ee89u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_f8;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_f8 = rd32(sp0 - 0xf8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        wr32(sp0 - 0x130u, sp0 - 0xa4u);
        wr32(sp0 - 0x12cu, sp0 - 0x64u);
        wr32(sp0 - 0x124u, sp0 - 0x64u);
        wr32(sp0 - 0x120u, sp0 - 0x20u);
        wr32(sp0 - 0x11cu, sp0 - 0x30u);
        wr32(sp0 - 0x114u, sp0 - 0x30u);
        wr32(sp0 - 0x110u, sp0 - 0x80u);
        wr32(sp0 - 0x108u, sp0 - 0x80u);
        wr32(sp0 - 0x104u, sp0 - 0x80u);
        wr32(sp0 - 0x100u, sp0 - 0x20u);
        wr32(sp0 - 0xf0u, sp0 - 0xa4u);
        (void)sp0;
        return 1;
    }
    case 0x1024ee92u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        wr32(sp0 - 0x130u, sp0 - 0xa4u);
        wr32(sp0 - 0x12cu, sp0 - 0x64u);
        wr32(sp0 - 0x124u, sp0 - 0x64u);
        wr32(sp0 - 0x120u, sp0 - 0x20u);
        wr32(sp0 - 0x11cu, sp0 - 0x30u);
        wr32(sp0 - 0x114u, sp0 - 0x30u);
        wr32(sp0 - 0x110u, sp0 - 0x80u);
        wr32(sp0 - 0x108u, sp0 - 0x80u);
        wr32(sp0 - 0x104u, sp0 - 0x80u);
        wr32(sp0 - 0x100u, sp0 - 0x20u);
        wr32(sp0 - 0xf0u, sp0 - 0xa4u);
        (void)sp0;
        return 1;
    }
    case 0x1024eeb2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x104u;
        g->esi = arg1;
        wr32(sp0 - 0x130u, sp0 - 0xa4u);
        wr32(sp0 - 0x12cu, sp0 - 0x64u);
        wr32(sp0 - 0x124u, sp0 - 0x64u);
        wr32(sp0 - 0x120u, sp0 - 0x20u);
        wr32(sp0 - 0x11cu, sp0 - 0x30u);
        wr32(sp0 - 0x114u, sp0 - 0x30u);
        wr32(sp0 - 0x110u, sp0 - 0x80u);
        wr32(sp0 - 0x108u, sp0 - 0x80u);
        wr32(sp0 - 0x104u, sp0 - 0x64u);
        wr32(sp0 - 0xf0u, sp0 - 0xa4u);
        (void)sp0;
        return 1;
    }
    case 0x1024eeccu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x110u;
        g->esi = arg1;
        wr32(sp0 - 0x130u, sp0 - 0xa4u);
        wr32(sp0 - 0x12cu, sp0 - 0x64u);
        wr32(sp0 - 0x124u, sp0 - 0x64u);
        wr32(sp0 - 0x120u, sp0 - 0x20u);
        wr32(sp0 - 0x11cu, sp0 - 0x30u);
        wr32(sp0 - 0x114u, sp0 - 0x30u);
        wr32(sp0 - 0x110u, sp0 - 0xa4u);
        wr32(sp0 - 0x10cu, sp0 - 0x64u);
        wr32(sp0 - 0x104u, sp0 - 0x64u);
        wr32(sp0 - 0xf0u, sp0 - 0xa4u);
        (void)sp0;
        return 1;
    }
    case 0x1024eedeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x118u;
        g->esi = arg1;
        wr32(sp0 - 0x130u, sp0 - 0xa4u);
        wr32(sp0 - 0x12cu, sp0 - 0x64u);
        wr32(sp0 - 0x124u, sp0 - 0x64u);
        wr32(sp0 - 0x120u, sp0 - 0x20u);
        wr32(sp0 - 0x11cu, sp0 - 0x30u);
        wr32(sp0 - 0x114u, sp0 - 0xa4u);
        wr32(sp0 - 0x110u, sp0 - 0xa4u);
        wr32(sp0 - 0x10cu, sp0 - 0x64u);
        wr32(sp0 - 0x104u, sp0 - 0x64u);
        wr32(sp0 - 0xf0u, sp0 - 0xa4u);
        (void)sp0;
        return 1;
    }
    case 0x1024eee7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x120u;
        g->esi = arg1;
        wr32(sp0 - 0x130u, sp0 - 0xa4u);
        wr32(sp0 - 0x12cu, sp0 - 0x64u);
        wr32(sp0 - 0x124u, sp0 - 0x64u);
        wr32(sp0 - 0x114u, sp0 - 0xa4u);
        wr32(sp0 - 0x110u, sp0 - 0xa4u);
        wr32(sp0 - 0x10cu, sp0 - 0x64u);
        wr32(sp0 - 0x104u, sp0 - 0x64u);
        wr32(sp0 - 0xf0u, sp0 - 0xa4u);
        (void)sp0;
        return 1;
    }
    case 0x1024eef0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x120u;
        g->esi = arg1;
        wr32(sp0 - 0x130u, sp0 - 0xa4u);
        wr32(sp0 - 0x12cu, sp0 - 0x64u);
        wr32(sp0 - 0x124u, sp0 - 0x64u);
        wr32(sp0 - 0x114u, sp0 - 0xa4u);
        wr32(sp0 - 0x110u, sp0 - 0xa4u);
        wr32(sp0 - 0x10cu, sp0 - 0x64u);
        wr32(sp0 - 0x104u, sp0 - 0x64u);
        wr32(sp0 - 0xf0u, sp0 - 0xa4u);
        (void)sp0;
        return 1;
    }
    case 0x1024ef10u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x128u;
        g->esi = arg1;
        wr32(sp0 - 0x130u, sp0 - 0xa4u);
        wr32(sp0 - 0x12cu, sp0 - 0x64u);
        wr32(sp0 - 0x128u, sp0 - 0x64u);
        wr32(sp0 - 0x114u, sp0 - 0xa4u);
        wr32(sp0 - 0x110u, sp0 - 0xa4u);
        wr32(sp0 - 0x10cu, sp0 - 0x64u);
        wr32(sp0 - 0x104u, sp0 - 0x64u);
        wr32(sp0 - 0xf0u, sp0 - 0xa4u);
        (void)sp0;
        return 1;
    }
    case 0x1024ef2du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x134u;
        g->esi = arg1;
        wr32(sp0 - 0x134u, sp0 - 0xa4u);
        wr32(sp0 - 0x12cu, sp0 - 0x64u);
        wr32(sp0 - 0x128u, sp0 - 0x64u);
        wr32(sp0 - 0x114u, sp0 - 0xa4u);
        wr32(sp0 - 0x110u, sp0 - 0xa4u);
        wr32(sp0 - 0x10cu, sp0 - 0x64u);
        wr32(sp0 - 0x104u, sp0 - 0x64u);
        wr32(sp0 - 0xf0u, sp0 - 0xa4u);
        (void)sp0;
        return 1;
    }
    case 0x1024ef5cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xf8u;
        g->esi = arg1;
        wr32(sp0 - 0x134u, sp0 - 0xa4u);
        wr32(sp0 - 0x12cu, sp0 - 0x64u);
        wr32(sp0 - 0x128u, sp0 - 0x64u);
        wr32(sp0 - 0x114u, sp0 - 0xa4u);
        wr32(sp0 - 0x110u, sp0 - 0xa4u);
        wr32(sp0 - 0x10cu, sp0 - 0x64u);
        wr32(sp0 - 0x104u, sp0 - 0x64u);
        wr32(sp0 - 0xf8u, sp0 - 0xd8u);
        wr32(sp0 - 0xf4u, sp0 - 0xa4u);
        wr32(sp0 - 0xf0u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x1024ef70u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xecu;
        g->esi = arg1;
        wr32(sp0 - 0x134u, sp0 - 0xa4u);
        wr32(sp0 - 0x12cu, sp0 - 0x64u);
        wr32(sp0 - 0x128u, sp0 - 0x64u);
        wr32(sp0 - 0x114u, sp0 - 0xa4u);
        wr32(sp0 - 0x110u, sp0 - 0xa4u);
        wr32(sp0 - 0x10cu, sp0 - 0x64u);
        wr32(sp0 - 0x104u, sp0 - 0x64u);
        wr32(sp0 - 0xf8u, sp0 - 0xd8u);
        wr32(sp0 - 0xf4u, sp0 - 0xa4u);
        wr32(sp0 - 0xf0u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x1024ef82u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xf4u;
        g->esi = arg1;
        wr32(sp0 - 0x134u, sp0 - 0xa4u);
        wr32(sp0 - 0x12cu, sp0 - 0x64u);
        wr32(sp0 - 0x128u, sp0 - 0x64u);
        wr32(sp0 - 0x114u, sp0 - 0xa4u);
        wr32(sp0 - 0x110u, sp0 - 0xa4u);
        wr32(sp0 - 0x10cu, sp0 - 0x64u);
        wr32(sp0 - 0x104u, sp0 - 0x64u);
        wr32(sp0 - 0xf8u, sp0 - 0xd8u);
        wr32(sp0 - 0xf4u, sp0 - 0xa4u);
        (void)sp0;
        return 1;
    }
    case 0x1024ef85u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_f0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_f0 = rd32(sp0 - 0xf0u);
        g->esp = sp0 - 0xecu;
        g->esi = arg1;
        wr32(sp0 - 0x134u, sp0 - 0xa4u);
        wr32(sp0 - 0x12cu, sp0 - 0x64u);
        wr32(sp0 - 0x128u, sp0 - 0x64u);
        wr32(sp0 - 0x114u, sp0 - 0xa4u);
        wr32(sp0 - 0x110u, sp0 - 0xa4u);
        wr32(sp0 - 0x10cu, sp0 - 0x64u);
        wr32(sp0 - 0x104u, sp0 - 0x64u);
        wr32(sp0 - 0xf8u, sp0 - 0xd8u);
        wr32(sp0 - 0xf4u, sp0 - 0xa4u);
        (void)sp0;
        return 1;
    }
    case 0x1024efb1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xf8u;
        g->esi = arg1;
        wr32(sp0 - 0x134u, sp0 - 0xa4u);
        wr32(sp0 - 0x12cu, sp0 - 0x64u);
        wr32(sp0 - 0x128u, sp0 - 0x64u);
        wr32(sp0 - 0x114u, sp0 - 0xa4u);
        wr32(sp0 - 0x110u, sp0 - 0xa4u);
        wr32(sp0 - 0x10cu, sp0 - 0x64u);
        wr32(sp0 - 0x104u, sp0 - 0x64u);
        wr32(sp0 - 0xf8u, sp0 - 0xd8u);
        wr32(sp0 - 0xf4u, sp0 - 0xa4u);
        wr32(sp0 - 0xf0u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x1024efc5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xecu;
        g->esi = arg1;
        wr32(sp0 - 0x134u, sp0 - 0xa4u);
        wr32(sp0 - 0x12cu, sp0 - 0x64u);
        wr32(sp0 - 0x128u, sp0 - 0x64u);
        wr32(sp0 - 0x114u, sp0 - 0xa4u);
        wr32(sp0 - 0x110u, sp0 - 0xa4u);
        wr32(sp0 - 0x10cu, sp0 - 0x64u);
        wr32(sp0 - 0x104u, sp0 - 0x64u);
        wr32(sp0 - 0xf8u, sp0 - 0xd8u);
        wr32(sp0 - 0xf4u, sp0 - 0xa4u);
        wr32(sp0 - 0xf0u, sp0 - 0xd8u);
        (void)sp0;
        return 1;
    }
    case 0x1024efd7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xf4u;
        g->esi = arg1;
        wr32(sp0 - 0x134u, sp0 - 0xa4u);
        wr32(sp0 - 0x12cu, sp0 - 0x64u);
        wr32(sp0 - 0x128u, sp0 - 0x64u);
        wr32(sp0 - 0x114u, sp0 - 0xa4u);
        wr32(sp0 - 0x110u, sp0 - 0xa4u);
        wr32(sp0 - 0x10cu, sp0 - 0x64u);
        wr32(sp0 - 0x104u, sp0 - 0x64u);
        wr32(sp0 - 0xf8u, sp0 - 0xd8u);
        wr32(sp0 - 0xf4u, sp0 - 0xa4u);
        (void)sp0;
        return 1;
    }
    case 0x1024efdau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_f0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_f0 = rd32(sp0 - 0xf0u);
        g->esp = sp0 - 0xecu;
        g->esi = arg1;
        wr32(sp0 - 0x134u, sp0 - 0xa4u);
        wr32(sp0 - 0x12cu, sp0 - 0x64u);
        wr32(sp0 - 0x128u, sp0 - 0x64u);
        wr32(sp0 - 0x114u, sp0 - 0xa4u);
        wr32(sp0 - 0x110u, sp0 - 0xa4u);
        wr32(sp0 - 0x10cu, sp0 - 0x64u);
        wr32(sp0 - 0x104u, sp0 - 0x64u);
        wr32(sp0 - 0xf8u, sp0 - 0xd8u);
        wr32(sp0 - 0xf4u, sp0 - 0xa4u);
        (void)sp0;
        return 1;
    }
    case 0x1024efecu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xf4u;
        g->esi = arg1;
        wr32(sp0 - 0x134u, sp0 - 0xa4u);
        wr32(sp0 - 0x12cu, sp0 - 0x64u);
        wr32(sp0 - 0x128u, sp0 - 0x64u);
        wr32(sp0 - 0x114u, sp0 - 0xa4u);
        wr32(sp0 - 0x110u, sp0 - 0xa4u);
        wr32(sp0 - 0x10cu, sp0 - 0x64u);
        wr32(sp0 - 0x104u, sp0 - 0x64u);
        wr32(sp0 - 0xf8u, sp0 - 0xd8u);
        wr32(sp0 - 0xf0u, sp0 - 0xa4u);
        (void)sp0;
        return 1;
    }
    case 0x1024f00eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xecu;
        wr32(sp0 - 0x134u, sp0 - 0xa4u);
        wr32(sp0 - 0x12cu, sp0 - 0x64u);
        wr32(sp0 - 0x128u, sp0 - 0x64u);
        wr32(sp0 - 0x114u, sp0 - 0xa4u);
        wr32(sp0 - 0x110u, sp0 - 0xa4u);
        wr32(sp0 - 0x10cu, sp0 - 0x64u);
        wr32(sp0 - 0x104u, sp0 - 0x64u);
        wr32(sp0 - 0xf8u, sp0 - 0xd8u);
        wr32(sp0 - 0xf0u, sp0 - 0xa4u);
        (void)sp0;
        return 1;
    }
    case 0x1024f016u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xecu;
        wr32(sp0 - 0x134u, sp0 - 0xa4u);
        wr32(sp0 - 0x12cu, sp0 - 0x64u);
        wr32(sp0 - 0x128u, sp0 - 0x64u);
        wr32(sp0 - 0x114u, sp0 - 0xa4u);
        wr32(sp0 - 0x110u, sp0 - 0xa4u);
        wr32(sp0 - 0x10cu, sp0 - 0x64u);
        wr32(sp0 - 0x104u, sp0 - 0x64u);
        wr32(sp0 - 0xf8u, sp0 - 0xd8u);
        wr32(sp0 - 0xf0u, sp0 - 0xa4u);
        (void)sp0;
        return 1;
    }
    case 0x1024f026u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xecu;
        wr32(sp0 - 0x134u, sp0 - 0xa4u);
        wr32(sp0 - 0x12cu, sp0 - 0x64u);
        wr32(sp0 - 0x128u, sp0 - 0x64u);
        wr32(sp0 - 0x114u, sp0 - 0xa4u);
        wr32(sp0 - 0x110u, sp0 - 0xa4u);
        wr32(sp0 - 0x10cu, sp0 - 0x64u);
        wr32(sp0 - 0x104u, sp0 - 0x64u);
        wr32(sp0 - 0xf8u, sp0 - 0xd8u);
        wr32(sp0 - 0xf0u, sp0 - 0xa4u);
        (void)sp0;
        return 1;
    }
    case 0x1024f02cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xecu;
        wr32(sp0 - 0x134u, sp0 - 0xa4u);
        wr32(sp0 - 0x12cu, sp0 - 0x64u);
        wr32(sp0 - 0x128u, sp0 - 0x64u);
        wr32(sp0 - 0x114u, sp0 - 0xa4u);
        wr32(sp0 - 0x110u, sp0 - 0xa4u);
        wr32(sp0 - 0x10cu, sp0 - 0x64u);
        wr32(sp0 - 0x104u, sp0 - 0x64u);
        wr32(sp0 - 0xf8u, sp0 - 0xd8u);
        wr32(sp0 - 0xf0u, sp0 - 0xa4u);
        (void)sp0;
        return 1;
    }
    case 0x1024f03eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xecu;
        wr32(sp0 - 0x134u, sp0 - 0xa4u);
        wr32(sp0 - 0x12cu, sp0 - 0x64u);
        wr32(sp0 - 0x128u, sp0 - 0x64u);
        wr32(sp0 - 0x114u, sp0 - 0xa4u);
        wr32(sp0 - 0x110u, sp0 - 0xa4u);
        wr32(sp0 - 0x10cu, sp0 - 0x64u);
        wr32(sp0 - 0x104u, sp0 - 0x64u);
        wr32(sp0 - 0xf8u, sp0 - 0xd8u);
        wr32(sp0 - 0xf0u, sp0 - 0xa4u);
        (void)sp0;
        return 1;
    }
    case 0x1024f049u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xecu;
        wr32(sp0 - 0xf8u, sp0 - 0xd8u);
        wr32(sp0 - 0xf0u, sp0 - 0xa4u);
        (void)sp0;
        return 1;
    }
    case 0x1024f04cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_f0;
        uint32_t loc_f8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f0 = rd32(sp0 - 0xf0u);
        g->esp = sp0 - 0xecu;
        (void)sp0;
        return 1;
    }
    case 0x1024f056u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xf0u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1024e780(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1024e780(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
