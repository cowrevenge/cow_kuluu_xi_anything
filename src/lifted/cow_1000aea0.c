/* f_0x1000aea0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
/* COW_FRAME_ANSWER 0 of 16 */
uint32_t cow_fn_1000aea0(Guest* g)
{
    double d1;
    double d10;
    double d18;
    double d19;
    double d20;
    double d5;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    double loc_10_f;
    double loc_18_f;
    uint32_t loc_1c;
    uint32_t loc_24;
    double loc_c_f;
    uint32_t t100;
    uint32_t t101;
    uint32_t t102;
    uint32_t t103;
    uint32_t t104;
    uint32_t t105;
    uint32_t t106;
    uint32_t t107;
    uint32_t t108;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t2;
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
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1000aeb2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_1000aeb2;
    case 0x1000aebfu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_1000aebf;
    case 0x1000aeceu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_1000aece;
    case 0x1000aef8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_1000aef8;
    case 0x1000af11u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_1000af11;
    case 0x1000af15u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_1000af15;
    case 0x1000af20u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_1000af20;
    case 0x1000af22u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_1000af22;
    case 0x1000af30u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_1000af30;
    case 0x1000af5cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x20u); goto E_1000af5c;
    case 0x1000af76u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x20u); goto E_1000af76;
    case 0x1000af89u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x20u); goto E_1000af89;
    case 0x1000af98u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x20u); goto E_1000af98;
    case 0x1000afa4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x20u); goto E_1000afa4;
    case 0x1000afabu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x20u); goto E_1000afab;
    case 0x1000afc6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; loc_24 = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x20u); goto E_1000afc6;
    case 0x1000afe1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; loc_24 = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x20u); goto E_1000afe1;
    case 0x1000affbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; loc_24 = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x20u); goto E_1000affb;
    case 0x1000b015u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; loc_24 = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x20u); goto E_1000b015;
    case 0x1000b031u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; loc_24 = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x20u); goto E_1000b031;
    case 0x1000b04bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; loc_24 = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x20u); goto E_1000b04b;
    case 0x1000b065u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; loc_24 = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x20u); goto E_1000b065;
    case 0x1000b089u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; loc_24 = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x20u); goto E_1000b089;
    case 0x1000b098u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; loc_24 = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x20u); goto E_1000b098;
    case 0x1000b0aau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; loc_24 = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x20u); goto E_1000b0aa;
    case 0x1000b0b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; loc_24 = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x20u); goto E_1000b0b9;
    case 0x1000b0c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; loc_24 = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x20u); goto E_1000b0c9;
    case 0x1000b0dau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; loc_24 = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x20u); goto E_1000b0da;
    case 0x1000b0ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; loc_24 = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x20u); goto E_1000b0eb;
    case 0x1000b0fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; loc_24 = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x20u); goto E_1000b0fc;
    case 0x1000b10du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; loc_24 = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x20u); goto E_1000b10d;
    case 0x1000b11fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; loc_24 = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x20u); goto E_1000b11f;
    case 0x1000b131u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; loc_24 = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x20u); goto E_1000b131;
    case 0x1000b13fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; loc_24 = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x20u); goto E_1000b13f;
    case 0x1000b151u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; loc_24 = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x20u); goto E_1000b151;
    case 0x1000b161u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; loc_24 = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x20u); goto E_1000b161;
    case 0x1000b171u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; loc_24 = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x20u); goto E_1000b171;
    case 0x1000b184u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; loc_24 = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x20u); goto E_1000b184;
    case 0x1000b193u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; loc_24 = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x20u); goto E_1000b193;
    case 0x1000b1a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); in_edi = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x20u); goto E_1000b1a2;
    default: break;
    }
#endif

    COW_AT(1000aea0)
    g->ecx = self;
    g->edx = in_edx;
    d1 = (double)rdf32(self + 0x178u);
    fpush(g, d1);
    g->esp = sp0 - 0x20u;
    COW_RET(0x1000aeb2u);
    t2 = cow_call_regs(g, COW_IMG(0x10311c6cu), in_eax, g->ecx, g->edx, 1, 0);
    t3 = g->ecx;
    t4 = g->edx;
    eax = t2;
    ecx = t3;
    edx = t4;
    COW_AT(1000aeb2)
    g->edx = edx;
    d5 = (double)rdf32(self + 0x174u);
    fpush(g, d5);
    g->esp = sp0 - 0x20u;
    COW_RET(0x1000aebfu);
    t6 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t7 = g->edx;
    edx = t7;
    edi = eax;
    eax = t6;
    COW_AT(1000aebf)
    if (edi * eax == 0x4000u)
    {
        loc_1c = in_esi;
    }
    else
    {
    COW_AT(1000aece)
        d8 = (double)(float)fr(g, fr(g, (double)rdf32(self + 0x178u) * (double)rdf32(self + 0x174u)) * (double)rdf32(COW_IMG(0x10329a1cu)));
        d9 = fr(g, fr(g, (double)rdf32(self + 0x178u) * (double)rdf32(self + 0x174u)) * (double)rdf32(COW_IMG(0x10329a1cu)));
        if ((cow_fsw(g, d9, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u) != 0u)
        {
            eax = rd32(self + 0xcu);
            ecx = rd32(rd32(self + 0xcu));
    COW_AT(1000af15)
            g->esp = sp0 - 0x20u;
            COW_RET(0x1000af20u);
            cow_thiscall(g, rd32(ecx + 0xc8u), ecx, 3, eax, 0x13u, 1u);
            t12 = g->ecx;
            ecx = t12;
    COW_AT(1000af20)
            loc_24 = 3u;
        }
        else
        {
            eax = rd32(self + 0xcu);
            ecx = rd32(rd32(self + 0xcu));
            loc_18_f = d8;
    COW_AT(1000aef8)
            d10 = (double)(float)fr(g, loc_18_f - (double)rdf32(COW_IMG(0x1032961cu)));
            g->esp = sp0 - 0x20u;
            COW_RET(0x1000af11u);
            cow_thiscall(g, rd32(ecx + 0xc8u), ecx, 3, eax, 0x13u, 3u);
            t11 = g->ecx;
            ecx = t11;
    COW_AT(1000af11)
            loc_24 = 2u;
        }
    COW_AT(1000af22)
        t13 = rd32(self + 0xcu);
        g->eax = t13;
        g->edx = rd32(t13);
        t14 = rd32(t13);
        g->esp = sp0 - 0x24u;
        COW_RET(0x1000af30u);
        t15 = cow_thiscall(g, rd32(t14 + 0xc8u), ecx, 2, t13, 0x14u);
        t16 = g->ecx;
        t17 = g->edx;
        eax = t15;
        ecx = t16;
        edx = t17;
    COW_AT(1000af30)
        d18 = (double)(float)fr(g, cow_bits2f(in_esi) * (double)rdf32(self + 0x180u));
        d19 = (double)(float)fr(g, cow_bits2f(in_esi) * (double)rdf32(self + 0x184u));
        g->ecx = ecx;
        g->edx = edx;
        d20 = fr(g, cow_bits2f(in_esi) * (double)rdf32(self + 0x17cu));
        fpush(g, d20);
        g->esp = sp0 - 0x28u;
        COW_RET(0x1000af5cu);
        t21 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        t22 = g->ecx;
        t23 = g->edx;
        eax = t21;
        ecx = t22;
        edx = t23;
        loc_10_f = d18;
        loc_c_f = d19;
    COW_AT(1000af5c)
        g->ecx = ecx;
        g->edx = edx;
        fpush(g, loc_10_f);
        g->esp = sp0 - 0x28u;
        COW_RET(0x1000af76u);
        t24 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        t25 = g->ecx;
        t26 = g->edx;
        ecx = t25;
        edx = t26;
        ebx = ((uint8_t)eax | 0xffff8000u) << 8u;
        eax = t24;
    COW_AT(1000af76)
        g->edx = edx;
        fpush(g, loc_c_f);
        g->esp = sp0 - 0x28u;
        COW_RET(0x1000af89u);
        t27 = cow_call_regs(g, COW_IMG(0x10311c6cu), (uint8_t)eax, g->ecx, g->edx, 1, 0);
        t28 = g->edx;
        edx = t28;
        ebx = (ebx | (uint8_t)eax) << 8u;
        eax = t27;
    COW_AT(1000af89)
        ecx = ebx | (uint8_t)eax;
        eax = COW_IMG(0x1034fe50u);
L_1000af98: ;
    COW_AT(1000af98)
        wr32(eax, ecx);
        if ((int32_t)(eax + 0x14u) < (int32_t)COW_IMG(0x1034fea0u))
        {
            eax = eax + 0x14u;
            goto L_1000af98;
        }
        eax = eax + 0x14u;
    COW_AT(1000afa4)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        COW_RET(0x1000afabu);
        t29 = cow_thiscall(g, COW_IMG(0x10009e00u), self, 0);
        t30 = g->ecx;
        t31 = g->edx;
        eax = t29;
        ecx = t30;
        edx = t31;
    COW_AT(1000afab)
        t32 = rd32(eax);
        wrf32(COW_IMG(0x1034fe40u), (float)(double)(int64_t)cow_i64(t32, 0u));
        g->eax = t32;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        COW_RET(0x1000afc6u);
        t33 = cow_thiscall(g, COW_IMG(0x10009e00u), ecx, 0);
        t34 = g->edx;
        eax = t33;
        edx = t34;
    COW_AT(1000afc6)
        t35 = rd32(eax);
        wrf32(COW_IMG(0x1034fe68u), (float)(double)(int64_t)cow_i64(t35, 0u));
        g->eax = eax;
        g->esp = sp0 - 0x24u;
        COW_RET(0x1000afe1u);
        t36 = cow_thiscall(g, COW_IMG(0x10009e00u), self, 0);
        t37 = g->ecx;
        eax = t36;
        ecx = t37;
    COW_AT(1000afe1)
        t38 = rd32(eax + 8u);
        wrf32(COW_IMG(0x1034fe54u), (float)(double)(int64_t)cow_i64(t38, 0u));
        g->eax = eax;
        g->edx = t38;
        g->esp = sp0 - 0x24u;
        COW_RET(0x1000affbu);
        t39 = cow_thiscall(g, COW_IMG(0x10009e00u), ecx, 0);
        t40 = g->ecx;
        t41 = g->edx;
        eax = t39;
        ecx = t40;
        edx = t41;
    COW_AT(1000affb)
        t42 = rd32(eax + 8u);
        wrf32(COW_IMG(0x1034fe7cu), (float)(double)(int64_t)cow_i64(t42, 0u));
        g->eax = t42;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        COW_RET(0x1000b015u);
        t43 = cow_thiscall(g, COW_IMG(0x10009e00u), ecx, 0);
        t44 = g->edx;
        eax = t43;
        edx = t44;
    COW_AT(1000b015)
        t45 = rd32(eax + 4u);
        wrf32(COW_IMG(0x1034fe44u), (float)(double)(int64_t)cow_i64(t45, 0u));
        g->eax = eax;
        g->esp = sp0 - 0x24u;
        COW_RET(0x1000b031u);
        t46 = cow_thiscall(g, COW_IMG(0x10009e00u), self, 0);
        t47 = g->ecx;
        eax = t46;
        ecx = t47;
    COW_AT(1000b031)
        t48 = rd32(eax + 4u);
        wrf32(COW_IMG(0x1034fe58u), (float)(double)(int64_t)cow_i64(t48, 0u));
        g->eax = eax;
        g->edx = t48;
        g->esp = sp0 - 0x24u;
        COW_RET(0x1000b04bu);
        t49 = cow_thiscall(g, COW_IMG(0x10009e00u), ecx, 0);
        t50 = g->ecx;
        t51 = g->edx;
        eax = t49;
        ecx = t50;
        edx = t51;
    COW_AT(1000b04b)
        t52 = rd32(eax + 0xcu);
        wrf32(COW_IMG(0x1034fe6cu), (float)(double)(int64_t)cow_i64(t52, 0u));
        g->eax = t52;
        g->esp = sp0 - 0x24u;
        COW_RET(0x1000b065u);
        t53 = cow_thiscall(g, COW_IMG(0x10009e00u), ecx, 0);
        eax = t53;
    COW_AT(1000b065)
        t54 = rd32(eax + 0xcu);
        wrf32(COW_IMG(0x1034fe80u), (float)(double)(int64_t)cow_i64(t54, 0u));
        t55 = rd32(self + 0xcu);
        g->edx = rd32(t55);
        t56 = rd32(t55);
        g->esp = sp0 - 0x24u;
        COW_RET(0x1000b089u);
        cow_thiscall(g, rd32(t56 + 0xc8u), t54, 3, t55, 7u, 0u);
        t57 = g->edx;
        edx = t57;
        loc_1c = t54;
    COW_AT(1000b089)
        t58 = rd32(self + 0xcu);
        t59 = rd32(t58);
        g->esp = sp0 - 0x24u;
        COW_RET(0x1000b098u);
        cow_thiscall(g, rd32(t59 + 0xc8u), t59, 3, t58, 0xeu, 0u);
        t60 = g->ecx;
        ecx = t60;
    COW_AT(1000b098)
        t61 = rd32(self + 0xcu);
        g->edx = rd32(t61);
        t62 = rd32(t61);
        g->esp = sp0 - 0x24u;
        COW_RET(0x1000b0aau);
        cow_thiscall(g, rd32(t62 + 0xc8u), ecx, 3, t61, 0x89u, 0u);
        t63 = g->edx;
        edx = t63;
    COW_AT(1000b0aa)
        t64 = rd32(self + 0xcu);
        t65 = rd32(t64);
        g->esp = sp0 - 0x24u;
        COW_RET(0x1000b0b9u);
        cow_thiscall(g, rd32(t65 + 0xc8u), t65, 3, t64, 0x1cu, 0u);
        t66 = g->ecx;
        ecx = t66;
    COW_AT(1000b0b9)
        t67 = rd32(self + 0xcu);
        g->edx = rd32(t67);
        t68 = rd32(t67);
        g->esp = sp0 - 0x24u;
        COW_RET(0x1000b0c9u);
        cow_thiscall(g, rd32(t68 + 0xc8u), ecx, 3, t67, 0x1bu, 1u);
        t69 = g->edx;
        edx = t69;
    COW_AT(1000b0c9)
        t70 = rd32(self + 0xcu);
        t71 = rd32(rd32(self + 0xcu));
        g->esp = sp0 - 0x24u;
        COW_RET(0x1000b0dau);
        cow_thiscall(g, rd32(t71 + 0xfcu), t71, 4, t70, 0u, 1u, 2u);
        t72 = g->ecx;
        ecx = t72;
    COW_AT(1000b0da)
        t73 = rd32(self + 0xcu);
        g->edx = rd32(rd32(self + 0xcu));
        t74 = rd32(rd32(self + 0xcu));
        g->esp = sp0 - 0x24u;
        COW_RET(0x1000b0ebu);
        cow_thiscall(g, rd32(t74 + 0xfcu), ecx, 4, t73, 0u, 2u, 1u);
        t75 = g->edx;
        edx = t75;
    COW_AT(1000b0eb)
        t76 = rd32(self + 0xcu);
        t77 = rd32(rd32(self + 0xcu));
        g->esp = sp0 - 0x24u;
        COW_RET(0x1000b0fcu);
        cow_thiscall(g, rd32(t77 + 0xfcu), t77, 4, t76, 0u, 4u, 2u);
        t78 = g->ecx;
        ecx = t78;
    COW_AT(1000b0fc)
        t79 = rd32(self + 0xcu);
        g->edx = rd32(rd32(self + 0xcu));
        t80 = rd32(rd32(self + 0xcu));
        g->esp = sp0 - 0x24u;
        COW_RET(0x1000b10du);
        cow_thiscall(g, rd32(t80 + 0xfcu), ecx, 4, t79, 0u, 5u, 1u);
        t81 = g->edx;
        edx = t81;
    COW_AT(1000b10d)
        t82 = rd32(self + 0xcu);
        t83 = rd32(rd32(self + 0xcu));
        g->esp = sp0 - 0x24u;
        COW_RET(0x1000b11fu);
        cow_thiscall(g, rd32(t83 + 0xfcu), t83, 4, t82, 1u, 1u, 1u);
        t84 = g->ecx;
        ecx = t84;
    COW_AT(1000b11f)
        t85 = rd32(self + 0xcu);
        g->edx = rd32(rd32(self + 0xcu));
        t86 = rd32(rd32(self + 0xcu));
        g->esp = sp0 - 0x24u;
        COW_RET(0x1000b131u);
        cow_thiscall(g, rd32(t86 + 0xfcu), ecx, 4, t85, 1u, 4u, 1u);
        t87 = g->edx;
        edx = t87;
    COW_AT(1000b131)
        t88 = rd32(self + 0xcu);
        g->eax = t88;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        COW_RET(0x1000b13fu);
        t89 = cow_thiscall(g, rd32(rd32(t88) + 0x130u), rd32(t88), 2, t88, 0x44u);
        t90 = g->edx;
        eax = t89;
        edx = t90;
    COW_AT(1000b13f)
        g->esp = sp0 - 0x24u;
        COW_RET(0x1000b151u);
        cow_thiscall(g, COW_IMG(0x1000cd00u), self, 4, 5u, 2u, COW_IMG(0x1034fe40u), 0x14u);
        t91 = g->ecx;
        ecx = t91;
    COW_AT(1000b151)
        t92 = rd32(self + 0xcu);
        g->edx = rd32(t92);
        t93 = rd32(t92);
        g->esp = sp0 - 0x24u;
        COW_RET(0x1000b161u);
        cow_thiscall(g, rd32(t93 + 0xc8u), ecx, 3, t92, 7u, 1u);
        t94 = g->edx;
        edx = t94;
    COW_AT(1000b161)
        t95 = rd32(self + 0xcu);
        t96 = rd32(t95);
        g->esp = sp0 - 0x24u;
        COW_RET(0x1000b171u);
        cow_thiscall(g, rd32(t96 + 0xc8u), t96, 3, t95, 0xeu, 1u);
        t97 = g->ecx;
        ecx = t97;
    COW_AT(1000b171)
        t98 = rd32(self + 0xcu);
        g->edx = rd32(t98);
        t99 = rd32(t98);
        g->esp = sp0 - 0x24u;
        COW_RET(0x1000b184u);
        cow_thiscall(g, rd32(t99 + 0xc8u), ecx, 3, t98, 0x89u, 1u);
        t100 = g->edx;
        edx = t100;
    COW_AT(1000b184)
        t101 = rd32(self + 0xcu);
        g->eax = t101;
        t102 = rd32(t101);
        g->esp = sp0 - 0x24u;
        COW_RET(0x1000b193u);
        t103 = cow_thiscall(g, rd32(t102 + 0xc8u), t102, 3, t101, 0x1cu, 0u);
        t104 = g->ecx;
        eax = t103;
        ecx = t104;
    COW_AT(1000b193)
        t105 = rd32(self + 0xcu);
        g->eax = eax;
        g->edx = rd32(rd32(self + 0xcu));
        t106 = rd32(rd32(self + 0xcu));
        g->esp = sp0 - 0x20u;
        COW_RET(0x1000b1a2u);
        t107 = cow_thiscall(g, rd32(t106 + 0xc8u), ecx, 4, t105, 0x1bu, 0u, loc_24);
        t108 = g->edx;
        eax = t107;
        edx = t108;
    }
    COW_AT(1000b1a2)
    g->ebx = in_ebx;
    g->esi = loc_1c;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1000aea0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1000aeb2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1000aebfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1000aeceu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1000aef8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_18_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1000af11u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_18_f;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1000af15u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_18_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1000af20u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_18_f;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1000af22u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_18_f;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1000af30u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_18_f;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1000af5cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        double loc_10_f;
        double loc_18_f;
        uint32_t loc_1c;
        uint32_t loc_24;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x28u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1000af76u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        double loc_10_f;
        double loc_18_f;
        uint32_t loc_1c;
        uint32_t loc_24;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1000af89u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        double loc_10_f;
        double loc_18_f;
        uint32_t loc_1c;
        uint32_t loc_24;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1000af98u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        double loc_10_f;
        double loc_18_f;
        uint32_t loc_1c;
        uint32_t loc_24;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1000afa4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        double loc_10_f;
        double loc_18_f;
        uint32_t loc_1c;
        uint32_t loc_24;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1000afabu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        double loc_10_f;
        double loc_18_f;
        uint32_t loc_1c;
        uint32_t loc_24;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1000afc6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        double loc_10_f;
        uint32_t loc_1c;
        uint32_t loc_24;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000afe1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        double loc_10_f;
        uint32_t loc_1c;
        uint32_t loc_24;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000affbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        double loc_10_f;
        uint32_t loc_1c;
        uint32_t loc_24;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000b015u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        double loc_10_f;
        uint32_t loc_1c;
        uint32_t loc_24;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000b031u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        double loc_10_f;
        uint32_t loc_1c;
        uint32_t loc_24;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000b04bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        double loc_10_f;
        uint32_t loc_1c;
        uint32_t loc_24;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000b065u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        double loc_10_f;
        uint32_t loc_1c;
        uint32_t loc_24;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000b089u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        double loc_10_f;
        uint32_t loc_1c;
        uint32_t loc_24;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000b098u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        double loc_10_f;
        uint32_t loc_1c;
        uint32_t loc_24;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000b0aau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        double loc_10_f;
        uint32_t loc_1c;
        uint32_t loc_24;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000b0b9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        double loc_10_f;
        uint32_t loc_1c;
        uint32_t loc_24;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000b0c9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        double loc_10_f;
        uint32_t loc_1c;
        uint32_t loc_24;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000b0dau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        double loc_10_f;
        uint32_t loc_1c;
        uint32_t loc_24;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000b0ebu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        double loc_10_f;
        uint32_t loc_1c;
        uint32_t loc_24;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000b0fcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        double loc_10_f;
        uint32_t loc_1c;
        uint32_t loc_24;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000b10du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        double loc_10_f;
        uint32_t loc_1c;
        uint32_t loc_24;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000b11fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        double loc_10_f;
        uint32_t loc_1c;
        uint32_t loc_24;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000b131u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        double loc_10_f;
        uint32_t loc_1c;
        uint32_t loc_24;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000b13fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        double loc_10_f;
        uint32_t loc_1c;
        uint32_t loc_24;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000b151u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        double loc_10_f;
        uint32_t loc_1c;
        uint32_t loc_24;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000b161u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        double loc_10_f;
        uint32_t loc_1c;
        uint32_t loc_24;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000b171u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        double loc_10_f;
        uint32_t loc_1c;
        uint32_t loc_24;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000b184u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        double loc_10_f;
        uint32_t loc_1c;
        uint32_t loc_24;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000b193u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        double loc_10_f;
        uint32_t loc_1c;
        uint32_t loc_24;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000b1a2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        double loc_10_f;
        uint32_t loc_1c;
        uint32_t loc_24;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        in_edi = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1000aea0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1000aea0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
