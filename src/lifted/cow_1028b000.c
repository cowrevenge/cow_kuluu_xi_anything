/* f_0x1028b000 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1028b000(Guest* g)
{
    double d121;
    double d125;
    double d129;
    double d133;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_8;
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
    uint32_t t122;
    uint32_t t123;
    uint32_t t124;
    uint32_t t126;
    uint32_t t127;
    uint32_t t128;
    uint32_t t13;
    uint32_t t130;
    uint32_t t131;
    uint32_t t132;
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
    cow_frame(g, sp0, 68u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1028b01du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_1028b01d;
    case 0x1028b031u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_1028b031;
    case 0x1028b037u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028b037;
    case 0x1028b03fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028b03f;
    case 0x1028b062u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028b062;
    case 0x1028b06au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028b06a;
    case 0x1028b094u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028b094;
    case 0x1028b0a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028b0a8;
    case 0x1028b0adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028b0ad;
    case 0x1028b0b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028b0b2;
    case 0x1028b0e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028b0e2;
    case 0x1028b0f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028b0f6;
    case 0x1028b107u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028b107;
    case 0x1028b10au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_1028b10a;
    case 0x1028b120u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_1028b120;
    case 0x1028b126u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028b126;
    case 0x1028b14du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028b14d;
    case 0x1028b160u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028b160;
    case 0x1028b163u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_1028b163;
    case 0x1028b17fu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_1028b17f;
    case 0x1028b185u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028b185;
    case 0x1028b18du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028b18d;
    case 0x1028b1bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); goto E_1028b1bf;
    case 0x1028b1c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); goto E_1028b1c7;
    case 0x1028b1cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); goto E_1028b1cd;
    case 0x1028b1dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028b1db;
    case 0x1028b1f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028b1f2;
    case 0x1028b203u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028b203;
    case 0x1028b206u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_1028b206;
    case 0x1028b21eu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_1028b21e;
    case 0x1028b223u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028b223;
    case 0x1028b242u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028b242;
    case 0x1028b254u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028b254;
    case 0x1028b257u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_1028b257;
    case 0x1028b26eu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_1028b26e;
    case 0x1028b274u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028b274;
    case 0x1028b294u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028b294;
    case 0x1028b2a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028b2a8;
    case 0x1028b2abu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_1028b2ab;
    case 0x1028b2c2u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_1028b2c2;
    case 0x1028b2c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028b2c7;
    case 0x1028b2edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028b2ed;
    case 0x1028b2feu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028b2fe;
    case 0x1028b301u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_1028b301;
    case 0x1028b316u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_1028b316;
    case 0x1028b31bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028b31b;
    case 0x1028b320u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028b320;
    case 0x1028b325u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028b325;
    case 0x1028b32au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028b32a;
    case 0x1028b32fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028b32f;
    case 0x1028b348u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028b348;
    case 0x1028b350u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028b350;
    case 0x1028b361u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028b361;
    case 0x1028b371u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028b371;
    case 0x1028b37bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028b37b;
    case 0x1028b381u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028b381;
    case 0x1028b386u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028b386;
    case 0x1028b3c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_1028b3c0;
    case 0x1028b3c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_1028b3c5;
    case 0x1028b3eau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_20 = rd32(sp0 - 0x20u); goto E_1028b3ea;
    case 0x1028b425u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028b425;
    case 0x1028b449u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_1028b449;
    case 0x1028b44eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_1028b44e;
    case 0x1028b45bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_1028b45b;
    case 0x1028b46bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_1028b46b;
    case 0x1028b475u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_1028b475;
    case 0x1028b47bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028b47b;
    case 0x1028b480u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_1028b480;
    case 0x1028b4bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_1028b4ba;
    case 0x1028b4bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); goto E_1028b4bf;
    case 0x1028b4e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_20 = rd32(sp0 - 0x20u); goto E_1028b4e4;
    case 0x1028b51fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028b51f;
    case 0x1028b541u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_1028b541;
    case 0x1028b546u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_1028b546;
    case 0x1028b557u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_1028b557;
    case 0x1028b565u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_1028b565;
    case 0x1028b576u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_1028b576;
    case 0x1028b581u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_1028b581;
    case 0x1028b587u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028b587;
    case 0x1028b58cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_1028b58c;
    case 0x1028b5aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028b5aa;
    case 0x1028b5bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028b5bf;
    case 0x1028b5d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); goto E_1028b5d5;
    case 0x1028b5e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_1028b5e2;
    case 0x1028b5e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_1028b5e7;
    case 0x1028b60au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_20 = rd32(sp0 - 0x20u); goto E_1028b60a;
    case 0x1028b643u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028b643;
    case 0x1028b666u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_1028b666;
    case 0x1028b66bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_1028b66b;
    case 0x1028b67bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_1028b67b;
    case 0x1028b688u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_1028b688;
    case 0x1028b698u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_1028b698;
    case 0x1028b6a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_1028b6a2;
    case 0x1028b6a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028b6a8;
    case 0x1028b6adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_1028b6ad;
    case 0x1028b6e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_1028b6e7;
    case 0x1028b6ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); goto E_1028b6ec;
    case 0x1028b711u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_20 = rd32(sp0 - 0x20u); goto E_1028b711;
    case 0x1028b74cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028b74c;
    case 0x1028b76eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_1028b76e;
    case 0x1028b773u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_1028b773;
    case 0x1028b780u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_1028b780;
    case 0x1028b790u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_1028b790;
    case 0x1028b79au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_1028b79a;
    case 0x1028b7a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028b7a0;
    case 0x1028b7a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_1028b7a5;
    case 0x1028b7dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_1028b7dc;
    case 0x1028b7e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); goto E_1028b7e1;
    case 0x1028b803u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_20 = rd32(sp0 - 0x20u); goto E_1028b803;
    case 0x1028b824u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_8 = rd32(sp0 - 8u); goto E_1028b824;
    case 0x1028b832u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_1028b832;
    case 0x1028b843u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028b843;
    case 0x1028b853u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028b853;
    case 0x1028b864u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028b864;
    case 0x1028b882u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_8 = rd32(sp0 - 8u); goto E_1028b882;
    case 0x1028b88eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028b88e;
    case 0x1028b8acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_1028b8ac;
    case 0x1028b8b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028b8b4;
    case 0x1028b8bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028b8bc;
    case 0x1028b8ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; goto E_1028b8ce;
    case 0x1028b8d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; goto E_1028b8d8;
    case 0x1028b90bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_1028b90b;
    case 0x1028b910u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_1028b910;
    case 0x1028b92fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_1028b92f;
    case 0x1028b934u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_1028b934;
    case 0x1028b93du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_1028b93d;
    case 0x1028b947u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_1028b947;
    case 0x1028b97bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_1028b97b;
    case 0x1028b980u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); goto E_1028b980;
    case 0x1028b99cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_1028b99c;
    case 0x1028b9a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_1028b9a1;
    case 0x1028b9b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_1028b9b2;
    case 0x1028b9c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_1028b9c0;
    case 0x1028b9cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_1028b9cb;
    case 0x1028b9e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028b9e3;
    case 0x1028b9f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028b9f8;
    case 0x1028ba0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); goto E_1028ba0e;
    case 0x1028ba1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_1028ba1b;
    case 0x1028ba20u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_1028ba20;
    case 0x1028ba3du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_1028ba3d;
    case 0x1028ba42u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_1028ba42;
    case 0x1028ba52u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_1028ba52;
    case 0x1028ba5bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_1028ba5b;
    case 0x1028ba65u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_1028ba65;
    case 0x1028ba99u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_1028ba99;
    case 0x1028ba9eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); goto E_1028ba9e;
    case 0x1028babau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_1028baba;
    case 0x1028babfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_1028babf;
    case 0x1028bac8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_1028bac8;
    case 0x1028bad2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_1028bad2;
    case 0x1028bb03u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_1028bb03;
    case 0x1028bb08u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); goto E_1028bb08;
    case 0x1028bb21u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); goto E_1028bb21;
    default: break;
    }
#endif

    COW_AT(1028b000)
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    if ((int32_t)(rd32(rd32(COW_IMG(0x1099d200u)) + 0xb18u) + 1u) <= 0)
    {
        eax = rd32(COW_IMG(0x1099d200u));
        ecx = rd32(rd32(COW_IMG(0x1099d200u)) + 0xb18u) + 1u;
        edx = in_edx;
        loc_10 = in_ebx;
        loc_14 = in_ebp;
        loc_18 = in_esi;
        loc_1c = in_edi;
        goto L_1028b316;
    }
    eax = rd32(COW_IMG(0x1099d200u));
    edx = in_edx;
    esi = 0u;
    loc_10 = in_ebx;
    loc_14 = in_ebp;
    loc_18 = in_esi;
    loc_1c = in_edi;
L_1028b01d: ;
    COW_AT(1028b01d)
    if ((rd32(eax + esi * 8u + 0xa20u) & 0x10u) != 0u)
    {
        eax = rd32(eax + esi * 8u + 0xa20u) & 0x10u;
    COW_AT(1028b031)
        wr32(sp0 - 0x20u, esi);
        g->eax = eax;
        g->ecx = 0u;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        COW_RET(0x1028b037u);
        t1 = cow_cdecl(g, COW_IMG(0x1028bb30u), 3, esi, loc_1c, loc_18);
        t2 = g->ecx;
        t3 = g->edx;
        eax = t1;
        ecx = t2;
        edx = t3;
    COW_AT(1028b037)
        if (esi != 1u) goto L_1028b0ad;
    COW_AT(1028b03f)
        t4 = rd32(rd32(COW_IMG(0x1099d200u)) + 0xa24u);
        wr32(sp0 - 4u, t4);
        t5 = rd32(rd32(COW_IMG(0x1099d200u)) + 0xa20u);
        if ((t5 & 0x40000u) != 0u)
        {
            ecx = rd32(COW_IMG(0x1099d200u));
            goto L_1028b06a;
        }
        ecx = rd32(COW_IMG(0x1099d200u));
        edx = t5;
    COW_AT(1028b062)
        if ((edx & esi) == 0u)
        {
            eax = 0u;
            edx = edx & esi;
            goto L_1028b0ad;
        }
L_1028b06a: ;
    COW_AT(1028b06a)
        t6 = rd32(ecx + 0x930u);
        wr32(sp0 - 0x20u, t6);
        t7 = rd32(ecx + 0x938u);
        wr32(sp0 - 0x24u, t7);
        t8 = rd32(ecx + 0x91cu);
        wr32(sp0 - 0x28u, t8);
        t9 = rd32(ecx + 0x918u);
        wr32(sp0 - 0x2cu, t9);
        wr32(sp0 - 0x30u, 0u);
        t10 = rd32(ecx + 0x940u);
        wr32(sp0 - 0x34u, t10);
        g->ecx = t10;
        g->esp = sp0 - 0x1cu;
        COW_RET(0x1028b094u);
        cow_cdecl(g, COW_IMG(0x1029c970u), 6, t10, 0u, t9, t8, t7, t6);
        t11 = g->ecx;
        ecx = t11;
    COW_AT(1028b094)
        wr32(sp0 - 0x38u, 1u);
        t12 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x938u);
        wr32(sp0 - 0x3cu, t12);
        g->esp = sp0 - 0x34u;
        COW_RET(0x1028b0a8u);
        cow_cdecl(g, COW_IMG(0x1028a790u), 2, t12, 1u);
    COW_AT(1028b0a8)
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
    }
L_1028b10a: ;
    COW_AT(1028b10a)
    if ((rd32(esi * 8u + rd32(COW_IMG(0x1099d200u)) + 0xa20u) & 8u) != 0u)
    {
        eax = rd32(esi * 8u + rd32(COW_IMG(0x1099d200u)) + 0xa20u) & 8u;
        edx = rd32(COW_IMG(0x1099d200u));
    COW_AT(1028b120)
        wr32(sp0 - 0x20u, esi);
        g->esp = sp0 - 0x14u;
        COW_RET(0x1028b126u);
        cow_cdecl(g, COW_IMG(0x1028bb30u), 3, esi, loc_1c, loc_18);
    COW_AT(1028b126)
        t22 = rd32(esi * 4u + rd32(COW_IMG(0x1099d200u)) + 0x934u);
        wr32(sp0 - 0x24u, t22);
        t23 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x91cu);
        wr32(sp0 - 0x28u, t23);
        t24 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x918u);
        wr32(sp0 - 0x2cu, t24);
        t25 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x940u);
        wr32(sp0 - 0x30u, t25);
        g->edx = t25;
        g->esp = sp0 - 0xcu;
        COW_RET(0x1028b14du);
        cow_cdecl(g, COW_IMG(0x1029c630u), 9, t25, t24, t23, t22, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
        t26 = g->edx;
        edx = t26;
    COW_AT(1028b14d)
        wr32(sp0 - 0x34u, esi);
        t27 = rd32(esi * 4u + rd32(COW_IMG(0x1099d200u)) + 0x934u);
        wr32(sp0 - 0x38u, t27);
        g->esp = sp0 - 0x30u;
        COW_RET(0x1028b160u);
        cow_cdecl(g, COW_IMG(0x1028a790u), 2, t27, esi);
    COW_AT(1028b160)
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
    }
    COW_AT(1028b163)
    if ((rd32(esi * 8u + rd32(COW_IMG(0x1099d200u)) + 0xa20u) & 0x100000u) != 0u)
    {
        eax = rd32(esi * 8u + rd32(COW_IMG(0x1099d200u)) + 0xa20u) & 0x100000u;
        edx = rd32(COW_IMG(0x1099d200u));
    COW_AT(1028b17f)
        wr32(sp0 - 0x20u, esi);
        g->eax = eax;
        g->ecx = 0u;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        COW_RET(0x1028b185u);
        t28 = cow_cdecl(g, COW_IMG(0x1028bb30u), 3, esi, loc_1c, loc_18);
        t29 = g->ecx;
        t30 = g->edx;
        eax = t28;
        ecx = t29;
        edx = t30;
    COW_AT(1028b185)
        g->esp = sp0 - 0x1cu;
        COW_RET(0x1028b18du);
        cow_stdcall(g, COW_IMG(0x1028bb90u), 0);
    COW_AT(1028b18d)
        t31 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x93cu);
        wr32(sp0 - 0x20u, t31);
        t32 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x91cu);
        wr32(sp0 - 0x24u, t32);
        t33 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x920u);
        wr32(sp0 - 0x28u, t33);
        t34 = rd32(esi * 4u + rd32(COW_IMG(0x1099d200u)) + 0x934u);
        wr32(sp0 - 0x2cu, t34);
        if (rd32(rd32(COW_IMG(0x1099d200u)) + 0xe24u) == 0u)
        {
            eax = rd32(COW_IMG(0x1099d200u));
            edx = rd32(rd32(COW_IMG(0x1099d200u)) + 0x918u);
            loc_20 = t31;
            loc_24 = t32;
            loc_28 = t33;
            loc_2c = t34;
    COW_AT(1028b1c7)
            ecx = rd32(eax + 0x928u);
        }
        else
        {
            eax = rd32(COW_IMG(0x1099d200u));
            edx = rd32(rd32(COW_IMG(0x1099d200u)) + 0x918u);
            loc_20 = t31;
            loc_24 = t32;
            loc_28 = t33;
            loc_2c = t34;
    COW_AT(1028b1bf)
            ecx = rd32(eax + 0x92cu);
        }
    COW_AT(1028b1cd)
        wr32(sp0 - 0x30u, ecx);
        wr32(sp0 - 0x34u, edx);
        t35 = rd32(eax + 0x940u);
        wr32(sp0 - 0x38u, t35);
        g->eax = t35;
        g->esp = sp0 - 4u;
        COW_RET(0x1028b1dbu);
        t36 = cow_cdecl(g, COW_IMG(0x1029c4a0u), 13, t35, edx, ecx, loc_2c, loc_28, loc_24, loc_20, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u));
        eax = t36;
    COW_AT(1028b1db)
        wr32(sp0 - 0x20u, esi);
        t37 = rd32(esi * 4u + rd32(COW_IMG(0x1099d200u)) + 0x934u);
        wr32(sp0 - 0x24u, t37);
        g->edx = t37;
        g->esp = sp0 - 0x1cu;
        COW_RET(0x1028b1f2u);
        cow_cdecl(g, COW_IMG(0x1028a790u), 2, t37, esi);
        t38 = g->edx;
        edx = t38;
    COW_AT(1028b1f2)
        t39 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x93cu);
        wr32(sp0 - 0x28u, t39);
        g->esp = sp0 - 0x24u;
        COW_RET(0x1028b203u);
        cow_cdecl(g, COW_IMG(0x1028a7b0u), 1, t39);
    COW_AT(1028b203)
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
    }
    COW_AT(1028b206)
    if ((rd32(esi * 8u + rd32(COW_IMG(0x1099d200u)) + 0xa20u) & 0x8000000u) == 0u)
    {
        edx = rd32(COW_IMG(0x1099d200u));
    }
    else
    {
        eax = rd32(esi * 8u + rd32(COW_IMG(0x1099d200u)) + 0xa20u) & 0x8000000u;
        edx = rd32(COW_IMG(0x1099d200u));
    COW_AT(1028b21e)
        g->esp = sp0 - 0x1cu;
        COW_RET(0x1028b223u);
        cow_stdcall(g, COW_IMG(0x1028bb90u), 0);
    COW_AT(1028b223)
        t40 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x93cu);
        wr32(sp0 - 0x20u, t40);
        t41 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x91cu);
        wr32(sp0 - 0x24u, t41);
        t42 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x940u);
        wr32(sp0 - 0x28u, t42);
        g->eax = t42;
        g->esp = sp0 - 0x1cu;
        COW_RET(0x1028b242u);
        t43 = cow_cdecl(g, COW_IMG(0x1029bf70u), 3, t42, t41, t40);
        eax = t43;
    COW_AT(1028b242)
        t44 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x93cu);
        wr32(sp0 - 0x2cu, t44);
        g->edx = t44;
        g->esp = sp0 - 0x28u;
        COW_RET(0x1028b254u);
        cow_cdecl(g, COW_IMG(0x1028a7b0u), 1, t44);
        t45 = g->edx;
        edx = t45;
    COW_AT(1028b254)
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
    }
    COW_AT(1028b257)
    if ((rd32(esi * 8u + rd32(COW_IMG(0x1099d200u)) + 0xa20u) & 0x20000000u) != 0u)
    {
        eax = rd32(esi * 8u + rd32(COW_IMG(0x1099d200u)) + 0xa20u) & 0x20000000u;
    COW_AT(1028b26e)
        wr32(sp0 - 0x20u, esi);
        g->esp = sp0 - 0x14u;
        COW_RET(0x1028b274u);
        cow_cdecl(g, COW_IMG(0x1028bb30u), 3, esi, loc_1c, loc_18);
    COW_AT(1028b274)
        t46 = rd32(esi * 4u + rd32(COW_IMG(0x1099d200u)) + 0x934u);
        wr32(sp0 - 0x24u, t46);
        t47 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x918u);
        wr32(sp0 - 0x28u, t47);
        t48 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x940u);
        wr32(sp0 - 0x2cu, t48);
        g->eax = t48;
        g->esp = sp0 - 0x20u;
        COW_RET(0x1028b294u);
        t49 = cow_cdecl(g, COW_IMG(0x10297340u), 3, t48, t47, t46);
        eax = t49;
    COW_AT(1028b294)
        wr32(sp0 - 0x30u, esi);
        t50 = rd32(esi * 4u + rd32(COW_IMG(0x1099d200u)) + 0x934u);
        wr32(sp0 - 0x34u, t50);
        g->edx = t50;
        g->esp = sp0 - 0x2cu;
        COW_RET(0x1028b2a8u);
        cow_cdecl(g, COW_IMG(0x1028a790u), 2, t50, esi);
        t51 = g->edx;
        edx = t51;
    COW_AT(1028b2a8)
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
    }
    COW_AT(1028b2ab)
    if ((rd32(esi * 8u + rd32(COW_IMG(0x1099d200u)) + 0xa20u) & 0x40000u) == 0u)
    {
        ecx = 0u;
    }
    else
    {
        eax = rd32(esi * 8u + rd32(COW_IMG(0x1099d200u)) + 0xa20u) & 0x40000u;
    COW_AT(1028b2c2)
        g->esp = sp0 - 0x1cu;
        COW_RET(0x1028b2c7u);
        cow_stdcall(g, COW_IMG(0x1028bb90u), 0);
    COW_AT(1028b2c7)
        t52 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x93cu);
        wr32(sp0 - 0x20u, t52);
        t53 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x91cu);
        wr32(sp0 - 0x24u, t53);
        t54 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x918u);
        wr32(sp0 - 0x28u, t54);
        t55 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x940u);
        wr32(sp0 - 0x2cu, t55);
        g->edx = t55;
        g->esp = sp0 - 0x1cu;
        COW_RET(0x1028b2edu);
        cow_cdecl(g, COW_IMG(0x1029bd70u), 4, t55, t54, t53, t52);
        t56 = g->edx;
        edx = t56;
    COW_AT(1028b2ed)
        t57 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x93cu);
        wr32(sp0 - 0x30u, t57);
        g->ecx = t57;
        g->esp = sp0 - 0x2cu;
        COW_RET(0x1028b2feu);
        cow_cdecl(g, COW_IMG(0x1028a7b0u), 1, t57);
        t58 = g->ecx;
        ecx = t58;
    COW_AT(1028b2fe)
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
    }
    COW_AT(1028b301)
    if ((int32_t)(esi + 1u) < (int32_t)(rd32(rd32(COW_IMG(0x1099d200u)) + 0xb18u) + 1u))
    {
        eax = rd32(COW_IMG(0x1099d200u));
        edx = rd32(rd32(COW_IMG(0x1099d200u)) + 0xb18u) + 1u;
        esi = esi + 1u;
        goto L_1028b01d;
    }
    eax = rd32(COW_IMG(0x1099d200u));
    edx = rd32(rd32(COW_IMG(0x1099d200u)) + 0xb18u) + 1u;
L_1028b316: ;
    COW_AT(1028b316)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    COW_RET(0x1028b31bu);
    t59 = cow_stdcall(g, COW_IMG(0x10284ee0u), 0);
    t60 = g->ecx;
    t61 = g->edx;
    eax = t59;
    ecx = t60;
    edx = t61;
    COW_AT(1028b31b)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    COW_RET(0x1028b320u);
    t62 = cow_stdcall(g, COW_IMG(0x10283260u), 0);
    t63 = g->ecx;
    t64 = g->edx;
    eax = t62;
    ecx = t63;
    edx = t64;
    COW_AT(1028b320)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    COW_RET(0x1028b325u);
    t65 = cow_stdcall(g, COW_IMG(0x10284430u), 0);
    t66 = g->ecx;
    t67 = g->edx;
    eax = t65;
    ecx = t66;
    edx = t67;
    COW_AT(1028b325)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    COW_RET(0x1028b32au);
    t68 = cow_stdcall(g, COW_IMG(0x10283440u), 0);
    t69 = g->ecx;
    t70 = g->edx;
    eax = t68;
    ecx = t69;
    edx = t70;
    COW_AT(1028b32a)
    g->esp = sp0 - 0x1cu;
    cow_call_regs(g, COW_IMG(0x10281dd0u), g->eax, g->ecx, edx, 1, 0);
    COW_AT(1028b32f)
    if (rd32(rd32(COW_IMG(0x1099d200u)) + 0x2d0u) != 0u)
    {
        eax = rd32(COW_IMG(0x1099d200u));
        ecx = rd32(rd32(COW_IMG(0x1099d200u)) + 0x940u);
        goto L_1028b8b4;
    }
    eax = rd32(COW_IMG(0x1099d200u));
    ecx = rd32(rd32(COW_IMG(0x1099d200u)) + 0x940u);
    COW_AT(1028b348)
    if (ecx == 0u) goto L_1028bb21;
    COW_AT(1028b350)
    if (!(rd8(eax + 0xa30u) & 1u))
    {
        ebx = 0u;
    }
    else
    {
    COW_AT(1028b361)
        if ((int32_t)rd32(eax + 0x95cu) < (int32_t)rd32(eax + 0x940u))
        {
    COW_AT(1028b371)
            if (rd32(eax + 0x958u) != 0u)
            {
                ecx = rd32(eax + 0x958u);
    COW_AT(1028b37b)
                wr32(sp0 - 0x20u, ecx);
                g->esp = sp0 - 0x1cu;
                COW_RET(0x1028b381u);
                cow_thiscall(g, rd32(rd32(ecx) + 8u), ecx, 1, ecx);
    COW_AT(1028b381)
                eax = rd32(COW_IMG(0x1099d200u));
            }
    COW_AT(1028b386)
            t71 = rd32(eax + 0x940u);
            wr32(eax + 0x95cu, t71);
            t72 = rd32(COW_IMG(0x1099d200u)) + 0x958u;
            wr32(sp0 - 0x20u, t72);
            wr32(sp0 - 0x24u, 0u);
            wr32(sp0 - 0x28u, 2u);
            wr32(sp0 - 0x2cu, 0x208u);
            t73 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x95cu) * 0xcu;
            wr32(sp0 - 0x30u, t73);
            wr32(sp0 - 0x34u, rd32(COW_IMG(0x1066941cu)));
            g->esp = sp0 - 0x1cu;
            COW_RET(0x1028b3c0u);
            cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x5cu), rd32(COW_IMG(0x1066941cu)), 6, rd32(COW_IMG(0x1066941cu)), t73, 0x208u, 2u, 0u, t72);
    COW_AT(1028b3c0)
            eax = rd32(COW_IMG(0x1099d200u));
        }
    COW_AT(1028b3c5)
        wr32(sp0 - 0x20u, 0x2000u);
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        t74 = rd32(eax + 0x940u) * 0xcu;
        wr32(sp0 - 0x28u, t74);
        wr32(sp0 - 0x2cu, 0u);
        t75 = rd32(eax + 0x958u);
        wr32(sp0 - 0x30u, t75);
        g->esp = sp0 - 0x1cu;
        COW_RET(0x1028b3eau);
        cow_thiscall(g, rd32(rd32(rd32(eax + 0x958u)) + 0x2cu), t75, 5, t75, 0u, t74, sp0 - 0xcu, 0x2000u);
    COW_AT(1028b3ea)
        t76 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x940u) * 0xcu;
        t77 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x918u);
        t78 = rd32(sp0 - 0xcu);
        esi = t77;
        edi = t78;
        ecx = t76 >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = t76 & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        t79 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x958u);
        wr32(sp0 - 0x20u, t79);
        g->esp = sp0 - 0x1cu;
        COW_RET(0x1028b425u);
        cow_thiscall(g, rd32(rd32(t79) + 0x30u), rd32(t79), 1, t79);
    COW_AT(1028b425)
        wr32(sp0 - 0x20u, 0xcu);
        t80 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x958u);
        wr32(sp0 - 0x24u, t80);
        wr32(sp0 - 0x28u, 0u);
        wr32(sp0 - 0x2cu, rd32(COW_IMG(0x1066941cu)));
        g->esp = sp0 - 0x1cu;
        COW_RET(0x1028b449u);
        cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x14cu), t80, 4, rd32(COW_IMG(0x1066941cu)), 0u, t80, 0xcu);
    COW_AT(1028b449)
        eax = rd32(COW_IMG(0x1099d200u));
        ebx = 1u;
    }
    COW_AT(1028b44e)
    t81 = rd8(eax + 0xa30u);
    if ((t81 & 2u) != 0u)
    {
    COW_AT(1028b45b)
        if ((int32_t)rd32(eax + 0x964u) < (int32_t)rd32(eax + 0x940u))
        {
            edx = rd32(eax + 0x964u);
    COW_AT(1028b46b)
            if (rd32(eax + 0x960u) != 0u)
            {
                ecx = rd32(eax + 0x960u);
    COW_AT(1028b475)
                wr32(sp0 - 0x20u, ecx);
                g->esp = sp0 - 0x1cu;
                COW_RET(0x1028b47bu);
                cow_thiscall(g, rd32(rd32(ecx) + 8u), ecx, 1, ecx);
    COW_AT(1028b47b)
                eax = rd32(COW_IMG(0x1099d200u));
            }
    COW_AT(1028b480)
            t82 = rd32(eax + 0x940u);
            wr32(eax + 0x964u, t82);
            t83 = rd32(COW_IMG(0x1099d200u)) + 0x960u;
            wr32(sp0 - 0x20u, t83);
            wr32(sp0 - 0x24u, 0u);
            wr32(sp0 - 0x28u, 0x10u);
            wr32(sp0 - 0x2cu, 0x208u);
            t84 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x964u) * 0xcu;
            wr32(sp0 - 0x30u, t84);
            wr32(sp0 - 0x34u, rd32(COW_IMG(0x1066941cu)));
            g->esp = sp0 - 0x1cu;
            COW_RET(0x1028b4bau);
            cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x5cu), rd32(COW_IMG(0x1066941cu)), 6, rd32(COW_IMG(0x1066941cu)), t84, 0x208u, 0x10u, 0u, t83);
    COW_AT(1028b4ba)
            eax = rd32(COW_IMG(0x1099d200u));
        }
    COW_AT(1028b4bf)
        wr32(sp0 - 0x20u, 0x2000u);
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        t85 = rd32(eax + 0x940u) * 0xcu;
        wr32(sp0 - 0x28u, t85);
        wr32(sp0 - 0x2cu, 0u);
        t86 = rd32(eax + 0x960u);
        wr32(sp0 - 0x30u, t86);
        g->esp = sp0 - 0x1cu;
        COW_RET(0x1028b4e4u);
        cow_thiscall(g, rd32(rd32(rd32(eax + 0x960u)) + 0x2cu), t86, 5, t86, 0u, t85, sp0 - 0xcu, 0x2000u);
    COW_AT(1028b4e4)
        t87 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x940u) * 0xcu;
        t88 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x91cu);
        t89 = rd32(sp0 - 0xcu);
        esi = t88;
        edi = t89;
        ecx = t87 >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = t87 & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        t90 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x960u);
        wr32(sp0 - 0x20u, t90);
        g->esp = sp0 - 0x1cu;
        COW_RET(0x1028b51fu);
        cow_thiscall(g, rd32(rd32(t90) + 0x30u), rd32(t90), 1, t90);
    COW_AT(1028b51f)
        wr32(sp0 - 0x20u, 0xcu);
        t91 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x960u);
        wr32(sp0 - 0x24u, t91);
        wr32(sp0 - 0x28u, ebx);
        wr32(sp0 - 0x2cu, rd32(COW_IMG(0x1066941cu)));
        g->esp = sp0 - 0x1cu;
        COW_RET(0x1028b541u);
        cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x14cu), rd32(COW_IMG(0x1066941cu)), 4, rd32(COW_IMG(0x1066941cu)), ebx, t91, 0xcu);
        ebx = ebx + 1u;
    COW_AT(1028b541)
        eax = rd32(COW_IMG(0x1099d200u));
    }
    COW_AT(1028b546)
    if ((int32_t)(rd32(eax + 0xb18u) + 1u) <= 0) goto L_1028b67b;
    ebp = 0u;
L_1028b557: ;
    COW_AT(1028b557)
    t92 = rd8(eax + ebp * 4u + 0xa34u);
    if ((t92 & 4u) != 0u)
    {
    COW_AT(1028b565)
        if ((int32_t)rd32(eax + ebp * 4u + 0x970u) < (int32_t)rd32(eax + 0x940u))
        {
            edx = rd32(eax + ebp * 4u + 0x970u);
    COW_AT(1028b576)
            if (rd32(eax + ebp * 4u + 0x968u) != 0u)
            {
                ecx = rd32(eax + ebp * 4u + 0x968u);
    COW_AT(1028b581)
                wr32(sp0 - 0x20u, ecx);
                g->esp = sp0 - 0x1cu;
                COW_RET(0x1028b587u);
                cow_thiscall(g, rd32(rd32(ecx) + 8u), ecx, 1, ecx);
    COW_AT(1028b587)
                eax = rd32(COW_IMG(0x1099d200u));
            }
    COW_AT(1028b58c)
            t93 = rd32(eax + 0x940u);
            wr32(eax + ebp * 4u + 0x970u, t93);
            if (ebp != 0u)
            {
                eax = rd32(COW_IMG(0x1066941cu));
                ecx = rd32(COW_IMG(0x1099d200u));
                edx = rd32(rd32(COW_IMG(0x1066941cu)));
    COW_AT(1028b5bf)
                t94 = ebp * 4u + ecx + 0x968u;
                wr32(sp0 - 0x20u, t94);
                wr32(sp0 - 0x24u, 0u);
                wr32(sp0 - 0x28u, 0x200u);
                ecx = rd32(ebp * 4u + ecx + 0x970u);
                loc_20 = t94;
                loc_24 = 0u;
                loc_28 = 0x200u;
            }
            else
            {
                eax = rd32(COW_IMG(0x1066941cu));
                ecx = rd32(COW_IMG(0x1099d200u));
                edx = rd32(rd32(COW_IMG(0x1066941cu)));
    COW_AT(1028b5aa)
                wr32(sp0 - 0x20u, ecx + 0x968u);
                wr32(sp0 - 0x24u, ebp);
                wr32(sp0 - 0x28u, 0x100u);
                loc_20 = ecx + 0x968u;
                ecx = rd32(ecx + 0x970u);
                loc_24 = ebp;
                loc_28 = 0x100u;
            }
    COW_AT(1028b5d5)
            wr32(sp0 - 0x2cu, 0x208u);
            wr32(sp0 - 0x30u, ecx << 3u);
            wr32(sp0 - 0x34u, eax);
            g->esp = sp0 - 0x1cu;
            COW_RET(0x1028b5e2u);
            cow_thiscall(g, rd32(edx + 0x5cu), ecx << 3u, 6, eax, ecx << 3u, 0x208u, loc_28, loc_24, loc_20);
    COW_AT(1028b5e2)
            eax = rd32(COW_IMG(0x1099d200u));
        }
    COW_AT(1028b5e7)
        wr32(sp0 - 0x20u, 0x2000u);
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        t95 = rd32(eax + 0x940u) << 3u;
        wr32(sp0 - 0x28u, t95);
        wr32(sp0 - 0x2cu, 0u);
        t96 = rd32(eax + ebp * 4u + 0x968u);
        wr32(sp0 - 0x30u, t96);
        g->esp = sp0 - 0x1cu;
        COW_RET(0x1028b60au);
        cow_thiscall(g, rd32(rd32(rd32(eax + ebp * 4u + 0x968u)) + 0x2cu), t96, 5, t96, 0u, t95, sp0 - 0xcu, 0x2000u);
    COW_AT(1028b60a)
        t97 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x940u) << 3u;
        t98 = rd32(ebp * 4u + rd32(COW_IMG(0x1099d200u)) + 0x920u);
        t99 = rd32(sp0 - 0xcu);
        esi = t98;
        edi = t99;
        ecx = t97 >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = t97 & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        t100 = rd32(ebp * 4u + rd32(COW_IMG(0x1099d200u)) + 0x968u);
        wr32(sp0 - 0x20u, t100);
        g->esp = sp0 - 0x1cu;
        COW_RET(0x1028b643u);
        cow_thiscall(g, rd32(rd32(t100) + 0x30u), rd32(t100), 1, t100);
    COW_AT(1028b643)
        wr32(sp0 - 0x20u, 8u);
        t101 = rd32(ebp * 4u + rd32(COW_IMG(0x1099d200u)) + 0x968u);
        wr32(sp0 - 0x24u, t101);
        wr32(sp0 - 0x28u, ebx);
        wr32(sp0 - 0x2cu, rd32(COW_IMG(0x1066941cu)));
        g->esp = sp0 - 0x1cu;
        COW_RET(0x1028b666u);
        cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x14cu), rd32(COW_IMG(0x1066941cu)), 4, rd32(COW_IMG(0x1066941cu)), ebx, t101, 8u);
        ebx = ebx + 1u;
    COW_AT(1028b666)
        eax = rd32(COW_IMG(0x1099d200u));
    }
    COW_AT(1028b66b)
    if ((int32_t)(ebp + 1u) < (int32_t)(rd32(eax + 0xb18u) + 1u))
    {
        ebp = ebp + 1u;
        goto L_1028b557;
    }
L_1028b67b: ;
    COW_AT(1028b67b)
    t102 = rd8(eax + 0xa30u);
    if ((t102 & 0x10u) != 0u)
    {
    COW_AT(1028b688)
        if ((int32_t)rd32(eax + 0x97cu) < (int32_t)rd32(eax + 0x940u))
        {
            edx = rd32(eax + 0x97cu);
    COW_AT(1028b698)
            if (rd32(eax + 0x978u) != 0u)
            {
                ecx = rd32(eax + 0x978u);
    COW_AT(1028b6a2)
                wr32(sp0 - 0x20u, ecx);
                g->esp = sp0 - 0x1cu;
                COW_RET(0x1028b6a8u);
                cow_thiscall(g, rd32(rd32(ecx) + 8u), ecx, 1, ecx);
    COW_AT(1028b6a8)
                eax = rd32(COW_IMG(0x1099d200u));
            }
    COW_AT(1028b6ad)
            t103 = rd32(eax + 0x940u);
            wr32(eax + 0x97cu, t103);
            t104 = rd32(COW_IMG(0x1099d200u)) + 0x978u;
            wr32(sp0 - 0x20u, t104);
            wr32(sp0 - 0x24u, 0u);
            wr32(sp0 - 0x28u, 0u);
            wr32(sp0 - 0x2cu, 0x208u);
            t105 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x97cu) * 0xcu;
            wr32(sp0 - 0x30u, t105);
            wr32(sp0 - 0x34u, rd32(COW_IMG(0x1066941cu)));
            g->esp = sp0 - 0x1cu;
            COW_RET(0x1028b6e7u);
            cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x5cu), rd32(COW_IMG(0x1066941cu)), 6, rd32(COW_IMG(0x1066941cu)), t105, 0x208u, 0u, 0u, t104);
    COW_AT(1028b6e7)
            eax = rd32(COW_IMG(0x1099d200u));
        }
    COW_AT(1028b6ec)
        wr32(sp0 - 0x20u, 0x2000u);
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        t106 = rd32(eax + 0x940u) * 0xcu;
        wr32(sp0 - 0x28u, t106);
        wr32(sp0 - 0x2cu, 0u);
        t107 = rd32(eax + 0x978u);
        wr32(sp0 - 0x30u, t107);
        g->esp = sp0 - 0x1cu;
        COW_RET(0x1028b711u);
        cow_thiscall(g, rd32(rd32(rd32(eax + 0x978u)) + 0x2cu), t107, 5, t107, 0u, t106, sp0 - 0xcu, 0x2000u);
    COW_AT(1028b711)
        t108 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x940u) * 0xcu;
        t109 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x928u);
        t110 = rd32(sp0 - 0xcu);
        esi = t109;
        edi = t110;
        ecx = t108 >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = t108 & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        t111 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x978u);
        wr32(sp0 - 0x20u, t111);
        g->esp = sp0 - 0x1cu;
        COW_RET(0x1028b74cu);
        cow_thiscall(g, rd32(rd32(t111) + 0x30u), rd32(t111), 1, t111);
    COW_AT(1028b74c)
        wr32(sp0 - 0x20u, 0xcu);
        t112 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x978u);
        wr32(sp0 - 0x24u, t112);
        wr32(sp0 - 0x28u, ebx);
        wr32(sp0 - 0x2cu, rd32(COW_IMG(0x1066941cu)));
        g->esp = sp0 - 0x1cu;
        COW_RET(0x1028b76eu);
        cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x14cu), rd32(COW_IMG(0x1066941cu)), 4, rd32(COW_IMG(0x1066941cu)), ebx, t112, 0xcu);
        ebx = ebx + 1u;
    COW_AT(1028b76e)
        eax = rd32(COW_IMG(0x1099d200u));
    }
    COW_AT(1028b773)
    t113 = rd8(eax + 0xa30u);
    if ((t113 & 8u) == 0u) goto L_1028bb21;
    COW_AT(1028b780)
    if ((int32_t)rd32(eax + 0x98cu) < (int32_t)rd32(eax + 0x940u))
    {
    COW_AT(1028b790)
        if (rd32(eax + 0x988u) != 0u)
        {
            ecx = rd32(eax + 0x988u);
    COW_AT(1028b79a)
            wr32(sp0 - 0x20u, ecx);
            g->esp = sp0 - 0x1cu;
            COW_RET(0x1028b7a0u);
            cow_thiscall(g, rd32(rd32(ecx) + 8u), ecx, 1, ecx);
    COW_AT(1028b7a0)
            eax = rd32(COW_IMG(0x1099d200u));
        }
    COW_AT(1028b7a5)
        t114 = rd32(eax + 0x940u);
        wr32(eax + 0x98cu, t114);
        t115 = rd32(COW_IMG(0x1099d200u)) + 0x988u;
        wr32(sp0 - 0x20u, t115);
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, 0u);
        wr32(sp0 - 0x2cu, 0x208u);
        t116 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x98cu) << 2u;
        wr32(sp0 - 0x30u, t116);
        wr32(sp0 - 0x34u, rd32(COW_IMG(0x1066941cu)));
        g->esp = sp0 - 0x1cu;
        COW_RET(0x1028b7dcu);
        cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x5cu), t116, 6, rd32(COW_IMG(0x1066941cu)), t116, 0x208u, 0u, 0u, t115);
    COW_AT(1028b7dc)
        eax = rd32(COW_IMG(0x1099d200u));
    }
    COW_AT(1028b7e1)
    wr32(sp0 - 0x20u, 0x2000u);
    wr32(sp0 - 0x24u, sp0 - 0xcu);
    t117 = rd32(eax + 0x940u) << 2u;
    wr32(sp0 - 0x28u, t117);
    wr32(sp0 - 0x2cu, 0u);
    t118 = rd32(eax + 0x988u);
    wr32(sp0 - 0x30u, t118);
    g->edx = rd32(rd32(eax + 0x988u));
    t119 = rd32(rd32(eax + 0x988u));
    g->esp = sp0 - 0x1cu;
    COW_RET(0x1028b803u);
    cow_thiscall(g, rd32(t119 + 0x2cu), t118, 5, t118, 0u, t117, sp0 - 0xcu, 0x2000u);
    t120 = g->edx;
    edx = t120;
    COW_AT(1028b803)
    wr32(sp0 - 8u, 0u);
    if ((int32_t)rd32(rd32(COW_IMG(0x1099d200u)) + 0x940u) <= 0)
    {
        eax = rd32(COW_IMG(0x1099d200u));
        goto L_1028b882;
    }
    eax = rd32(COW_IMG(0x1099d200u));
    ecx = rd32(rd32(COW_IMG(0x1099d200u)) + 0x940u);
    esi = rd32(sp0 - 0xcu);
    edi = rd32(rd32(COW_IMG(0x1099d200u)) + 0x930u);
    loc_8 = 0u;
L_1028b824: ;
    COW_AT(1028b824)
    g->ecx = ecx;
    g->edx = edx;
    d121 = fr(g, (double)rdf32(edi + 8u) * (double)rdf32(COW_IMG(0x10329a20u)));
    fpush(g, d121);
    g->esp = sp0 - 0x1cu;
    t122 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t123 = g->ecx;
    t124 = g->edx;
    eax = t122;
    ecx = t123;
    edx = t124;
    COW_AT(1028b832)
    wr8(esi, (uint8_t)eax);
    g->ecx = ecx;
    g->edx = edx;
    d125 = fr(g, (double)rdf32(edi + 4u) * (double)rdf32(COW_IMG(0x10329a20u)));
    fpush(g, d125);
    g->esp = sp0 - 0x1cu;
    t126 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t127 = g->ecx;
    t128 = g->edx;
    eax = t126;
    ecx = t127;
    edx = t128;
    esi = esi + 1u;
    COW_AT(1028b843)
    wr8(esi, (uint8_t)eax);
    g->ecx = ecx;
    g->edx = edx;
    d129 = fr(g, (double)rdf32(edi) * (double)rdf32(COW_IMG(0x10329a20u)));
    fpush(g, d129);
    g->esp = sp0 - 0x1cu;
    t130 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t131 = g->ecx;
    t132 = g->edx;
    eax = t130;
    ecx = t131;
    edx = t132;
    esi = esi + 1u;
    COW_AT(1028b853)
    wr8(esi, (uint8_t)eax);
    d133 = fr(g, (double)rdf32(edi + 0xcu) * (double)rdf32(COW_IMG(0x10329a20u)));
    fpush(g, d133);
    g->esp = sp0 - 0x1cu;
    t134 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    eax = t134;
    esi = esi + 1u;
    COW_AT(1028b864)
    t135 = rd32(sp0 - 8u);
    wr8(esi, (uint8_t)eax);
    wr32(sp0 - 8u, t135 + 1u);
    if ((int32_t)(t135 + 1u) < (int32_t)rd32(rd32(COW_IMG(0x1099d200u)) + 0x940u))
    {
        eax = rd32(COW_IMG(0x1099d200u));
        ecx = t135 + 1u;
        edx = rd32(rd32(COW_IMG(0x1099d200u)) + 0x940u);
        esi = esi + 1u;
        edi = edi + 0x10u;
        loc_8 = t135 + 1u;
        goto L_1028b824;
    }
    eax = rd32(COW_IMG(0x1099d200u));
    edx = rd32(rd32(COW_IMG(0x1099d200u)) + 0x940u);
L_1028b882: ;
    COW_AT(1028b882)
    t136 = rd32(eax + 0x988u);
    wr32(sp0 - 0x20u, t136);
    g->esp = sp0 - 0x1cu;
    COW_RET(0x1028b88eu);
    cow_thiscall(g, rd32(rd32(t136) + 0x30u), rd32(t136), 1, t136);
    COW_AT(1028b88e)
    wr32(sp0 - 0x20u, 4u);
    t137 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x988u);
    wr32(sp0 - 0x24u, t137);
    wr32(sp0 - 0x28u, ebx);
    wr32(sp0 - 0x2cu, rd32(COW_IMG(0x1066941cu)));
    g->esp = sp0 - 0x1cu;
    COW_RET(0x1028b8acu);
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x14cu), t137, 4, rd32(COW_IMG(0x1066941cu)), ebx, t137, 4u);
    COW_AT(1028b8ac)
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = rd32(sp0 - 0x14u);
    return;
L_1028b0ad: ;
    COW_AT(1028b0ad)
    g->esp = sp0 - 0x1cu;
    COW_RET(0x1028b0b2u);
    cow_stdcall(g, COW_IMG(0x1028bb90u), 0);
    COW_AT(1028b0b2)
    t13 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x93cu);
    wr32(sp0 - 0x20u, t13);
    t14 = rd32(esi * 4u + rd32(COW_IMG(0x1099d200u)) + 0x934u);
    wr32(sp0 - 0x24u, t14);
    t15 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x91cu);
    wr32(sp0 - 0x28u, t15);
    t16 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x918u);
    wr32(sp0 - 0x2cu, t16);
    wr32(sp0 - 0x30u, 1u);
    t17 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x940u);
    wr32(sp0 - 0x34u, t17);
    g->eax = t17;
    g->esp = sp0 - 0x1cu;
    COW_RET(0x1028b0e2u);
    t18 = cow_cdecl(g, COW_IMG(0x1029c970u), 6, t17, 1u, t16, t15, t14, t13);
    eax = t18;
    COW_AT(1028b0e2)
    wr32(sp0 - 0x38u, esi);
    t19 = rd32(esi * 4u + rd32(COW_IMG(0x1099d200u)) + 0x934u);
    wr32(sp0 - 0x3cu, t19);
    g->edx = t19;
    g->esp = sp0 - 0x34u;
    COW_RET(0x1028b0f6u);
    cow_cdecl(g, COW_IMG(0x1028a790u), 2, t19, esi);
    t20 = g->edx;
    edx = t20;
    COW_AT(1028b0f6)
    t21 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x93cu);
    wr32(sp0 - 0x40u, t21);
    g->esp = sp0 - 0x3cu;
    COW_RET(0x1028b107u);
    cow_cdecl(g, COW_IMG(0x1028a7b0u), 1, t21);
    COW_AT(1028b107)
    loc_10 = rd32(sp0 - 0x10u);
    loc_14 = rd32(sp0 - 0x14u);
    loc_18 = rd32(sp0 - 0x18u);
    loc_1c = rd32(sp0 - 0x1cu);
    goto L_1028b10a;
L_1028b8b4: ;
    COW_AT(1028b8b4)
    if (ecx != 0u)
    {
    COW_AT(1028b8bc)
        if (!(rd8(eax + 0xa30u) & 1u))
        {
            edi = 0u;
        }
        else
        {
    COW_AT(1028b8ce)
            if (rd32(eax + 0x95cu) == 0u)
            {
    COW_AT(1028b8d8)
                wr32(eax + 0x95cu, 0xc00u);
                t138 = rd32(COW_IMG(0x1099d200u)) + 0x958u;
                wr32(sp0 - 0x20u, t138);
                wr32(sp0 - 0x24u, 0u);
                wr32(sp0 - 0x28u, 2u);
                wr32(sp0 - 0x2cu, 0x208u);
                t139 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x95cu) * 0xcu;
                wr32(sp0 - 0x30u, t139);
                wr32(sp0 - 0x34u, rd32(COW_IMG(0x1066941cu)));
                g->esp = sp0 - 0x1cu;
                COW_RET(0x1028b90bu);
                cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x5cu), rd32(COW_IMG(0x1066941cu)), 6, rd32(COW_IMG(0x1066941cu)), t139, 0x208u, 2u, 0u, t138);
    COW_AT(1028b90b)
                eax = rd32(COW_IMG(0x1099d200u));
            }
    COW_AT(1028b910)
            wr32(sp0 - 0x20u, 0xcu);
            t140 = rd32(eax + 0x958u);
            wr32(sp0 - 0x24u, t140);
            wr32(sp0 - 0x28u, 0u);
            wr32(sp0 - 0x2cu, rd32(COW_IMG(0x1066941cu)));
            g->esp = sp0 - 0x1cu;
            COW_RET(0x1028b92fu);
            cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x14cu), rd32(COW_IMG(0x1066941cu)), 4, rd32(COW_IMG(0x1066941cu)), 0u, t140, 0xcu);
    COW_AT(1028b92f)
            eax = rd32(COW_IMG(0x1099d200u));
            edi = 1u;
        }
    COW_AT(1028b934)
        t141 = rd8(eax + 0xa30u);
        if ((t141 & 2u) != 0u)
        {
    COW_AT(1028b93d)
            if (rd32(eax + 0x964u) == 0u)
            {
    COW_AT(1028b947)
                wr32(eax + 0x964u, 0xc00u);
                t142 = rd32(COW_IMG(0x1099d200u)) + 0x960u;
                wr32(sp0 - 0x20u, t142);
                wr32(sp0 - 0x24u, 0u);
                wr32(sp0 - 0x28u, 0x10u);
                wr32(sp0 - 0x2cu, 0x208u);
                t143 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x964u) * 0xcu;
                wr32(sp0 - 0x30u, t143);
                wr32(sp0 - 0x34u, rd32(COW_IMG(0x1066941cu)));
                g->esp = sp0 - 0x1cu;
                COW_RET(0x1028b97bu);
                cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x5cu), rd32(COW_IMG(0x1066941cu)), 6, rd32(COW_IMG(0x1066941cu)), t143, 0x208u, 0x10u, 0u, t142);
    COW_AT(1028b97b)
                eax = rd32(COW_IMG(0x1099d200u));
            }
    COW_AT(1028b980)
            wr32(sp0 - 0x20u, 0xcu);
            t144 = rd32(eax + 0x960u);
            wr32(sp0 - 0x24u, t144);
            wr32(sp0 - 0x28u, edi);
            wr32(sp0 - 0x2cu, rd32(COW_IMG(0x1066941cu)));
            g->esp = sp0 - 0x1cu;
            COW_RET(0x1028b99cu);
            cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x14cu), edi, 4, rd32(COW_IMG(0x1066941cu)), edi, t144, 0xcu);
            edi = edi + 1u;
    COW_AT(1028b99c)
            eax = rd32(COW_IMG(0x1099d200u));
        }
    COW_AT(1028b9a1)
        if ((int32_t)(rd32(eax + 0xb18u) + 1u) <= 0) goto L_1028ba52;
        esi = 0u;
L_1028b9b2: ;
    COW_AT(1028b9b2)
        t145 = rd8(eax + esi * 4u + 0xa34u);
        if ((t145 & 4u) != 0u)
        {
    COW_AT(1028b9c0)
            if (rd32(eax + esi * 4u + 0x970u) == 0u)
            {
    COW_AT(1028b9cb)
                wr32(eax + esi * 4u + 0x970u, 0xc00u);
                if (esi != 0u)
                {
                    eax = rd32(COW_IMG(0x1066941cu));
                    ecx = rd32(COW_IMG(0x1099d200u));
                    edx = rd32(rd32(COW_IMG(0x1066941cu)));
    COW_AT(1028b9f8)
                    t146 = ecx + esi * 4u + 0x968u;
                    wr32(sp0 - 0x20u, t146);
                    wr32(sp0 - 0x24u, 0u);
                    wr32(sp0 - 0x28u, 0x200u);
                    ecx = rd32(ecx + esi * 4u + 0x970u);
                    loc_20 = t146;
                    loc_24 = 0u;
                    loc_28 = 0x200u;
                }
                else
                {
                    eax = rd32(COW_IMG(0x1066941cu));
                    ecx = rd32(COW_IMG(0x1099d200u));
                    edx = rd32(rd32(COW_IMG(0x1066941cu)));
    COW_AT(1028b9e3)
                    wr32(sp0 - 0x20u, ecx + 0x968u);
                    wr32(sp0 - 0x24u, esi);
                    wr32(sp0 - 0x28u, 0x100u);
                    loc_20 = ecx + 0x968u;
                    ecx = rd32(ecx + 0x970u);
                    loc_24 = esi;
                    loc_28 = 0x100u;
                }
    COW_AT(1028ba0e)
                wr32(sp0 - 0x2cu, 0x208u);
                wr32(sp0 - 0x30u, ecx << 3u);
                wr32(sp0 - 0x34u, eax);
                g->esp = sp0 - 0x1cu;
                COW_RET(0x1028ba1bu);
                cow_thiscall(g, rd32(edx + 0x5cu), ecx << 3u, 6, eax, ecx << 3u, 0x208u, loc_28, loc_24, loc_20);
    COW_AT(1028ba1b)
                eax = rd32(COW_IMG(0x1099d200u));
            }
    COW_AT(1028ba20)
            wr32(sp0 - 0x20u, 8u);
            t147 = rd32(eax + esi * 4u + 0x968u);
            wr32(sp0 - 0x24u, t147);
            wr32(sp0 - 0x28u, edi);
            wr32(sp0 - 0x2cu, rd32(COW_IMG(0x1066941cu)));
            g->esp = sp0 - 0x1cu;
            COW_RET(0x1028ba3du);
            cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x14cu), edi, 4, rd32(COW_IMG(0x1066941cu)), edi, t147, 8u);
            edi = edi + 1u;
    COW_AT(1028ba3d)
            eax = rd32(COW_IMG(0x1099d200u));
        }
    COW_AT(1028ba42)
        if ((int32_t)(esi + 1u) < (int32_t)(rd32(eax + 0xb18u) + 1u))
        {
            esi = esi + 1u;
            goto L_1028b9b2;
        }
L_1028ba52: ;
    COW_AT(1028ba52)
        t148 = rd8(eax + 0xa30u);
        if ((t148 & 0x10u) != 0u)
        {
    COW_AT(1028ba5b)
            if (rd32(eax + 0x97cu) == 0u)
            {
    COW_AT(1028ba65)
                wr32(eax + 0x97cu, 0xc00u);
                t149 = rd32(COW_IMG(0x1099d200u)) + 0x978u;
                wr32(sp0 - 0x20u, t149);
                wr32(sp0 - 0x24u, 0u);
                wr32(sp0 - 0x28u, 0u);
                wr32(sp0 - 0x2cu, 0x208u);
                t150 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x97cu) * 0xcu;
                wr32(sp0 - 0x30u, t150);
                wr32(sp0 - 0x34u, rd32(COW_IMG(0x1066941cu)));
                g->esp = sp0 - 0x1cu;
                COW_RET(0x1028ba99u);
                cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x5cu), rd32(COW_IMG(0x1066941cu)), 6, rd32(COW_IMG(0x1066941cu)), t150, 0x208u, 0u, 0u, t149);
    COW_AT(1028ba99)
                eax = rd32(COW_IMG(0x1099d200u));
            }
    COW_AT(1028ba9e)
            wr32(sp0 - 0x20u, 0xcu);
            t151 = rd32(eax + 0x978u);
            wr32(sp0 - 0x24u, t151);
            wr32(sp0 - 0x28u, edi);
            wr32(sp0 - 0x2cu, rd32(COW_IMG(0x1066941cu)));
            g->esp = sp0 - 0x1cu;
            COW_RET(0x1028babau);
            cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x14cu), edi, 4, rd32(COW_IMG(0x1066941cu)), edi, t151, 0xcu);
            edi = edi + 1u;
    COW_AT(1028baba)
            eax = rd32(COW_IMG(0x1099d200u));
        }
    COW_AT(1028babf)
        t152 = rd8(eax + 0xa30u);
        if ((t152 & 8u) != 0u)
        {
    COW_AT(1028bac8)
            if (rd32(eax + 0x98cu) == 0u)
            {
    COW_AT(1028bad2)
                wr32(eax + 0x98cu, 0xc00u);
                t153 = rd32(COW_IMG(0x1099d200u)) + 0x988u;
                wr32(sp0 - 0x20u, t153);
                wr32(sp0 - 0x24u, 0u);
                wr32(sp0 - 0x28u, 0u);
                wr32(sp0 - 0x2cu, 0x208u);
                t154 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x98cu) << 2u;
                wr32(sp0 - 0x30u, t154);
                wr32(sp0 - 0x34u, rd32(COW_IMG(0x1066941cu)));
                g->esp = sp0 - 0x1cu;
                COW_RET(0x1028bb03u);
                cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x5cu), t154, 6, rd32(COW_IMG(0x1066941cu)), t154, 0x208u, 0u, 0u, t153);
    COW_AT(1028bb03)
                eax = rd32(COW_IMG(0x1099d200u));
            }
    COW_AT(1028bb08)
            wr32(sp0 - 0x20u, 4u);
            t155 = rd32(eax + 0x988u);
            wr32(sp0 - 0x24u, t155);
            wr32(sp0 - 0x28u, edi);
            wr32(sp0 - 0x2cu, rd32(COW_IMG(0x1066941cu)));
            g->esp = sp0 - 0x1cu;
            COW_RET(0x1028bb21u);
            cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x14cu), rd32(COW_IMG(0x1066941cu)), 4, rd32(COW_IMG(0x1066941cu)), edi, t155, 4u);
        }
    }
L_1028bb21: ;
    COW_AT(1028bb21)
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = rd32(sp0 - 0x14u);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1028b000(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1028b01du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b031u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ecx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1028b037u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1028b03fu:
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b062u:
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b06au:
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b094u:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1028b0a8u:
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
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b0adu:
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b0b2u:
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b0e2u:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1028b0f6u:
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
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b107u:
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
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1028b10au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b120u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ecx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1028b126u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1028b14du:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1028b160u:
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
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x1028b163u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b17fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ecx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1028b185u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1028b18du:
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b1bfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b1c7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b1cdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b1dbu:
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
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x1028b1f2u:
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
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1028b203u:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1028b206u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b21eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ecx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1028b223u:
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b242u:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1028b254u:
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
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b257u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b26eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ecx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1028b274u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1028b294u:
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
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b2a8u:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1028b2abu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b2c2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ecx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1028b2c7u:
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b2edu:
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
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b2feu:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1028b301u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b316u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b31bu:
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b320u:
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b325u:
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b32au:
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b32fu:
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b348u:
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b350u:
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b361u:
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b371u:
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b37bu:
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b381u:
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b386u:
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b3c0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b3c5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b3eau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_20;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        g->esi = sp0 - 0xcu;
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1028b425u:
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b449u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1028b44eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b45bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b46bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b475u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b47bu:
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b480u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b4bau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b4bfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b4e4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_20;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        g->esi = sp0 - 0xcu;
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1028b51fu:
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b541u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b546u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b557u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b565u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b576u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b581u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b587u:
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b58cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b5aau:
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b5bfu:
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b5d5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1028b5e2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b5e7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b60au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_20;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        g->esi = sp0 - 0xcu;
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1028b643u:
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b666u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b66bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b67bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b688u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b698u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b6a2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b6a8u:
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b6adu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b6e7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b6ecu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b711u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_20;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        g->esi = sp0 - 0xcu;
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1028b74cu:
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b76eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b773u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b780u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b790u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b79au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b7a0u:
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b7a5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b7dcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b7e1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b803u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_20;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        g->esi = sp0 - 0xcu;
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1028b824u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b832u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b843u:
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b853u:
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b864u:
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b882u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b88eu:
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b8acu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b8b4u:
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b8bcu:
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028b8ceu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0xc00u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1028b8d8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0xc00u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1028b90bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0xc00u;
        (void)sp0;
        return 1;
    }
    case 0x1028b910u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0xc00u;
        (void)sp0;
        return 1;
    }
    case 0x1028b92fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0xc00u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1028b934u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0xc00u;
        (void)sp0;
        return 1;
    }
    case 0x1028b93du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0xc00u;
        (void)sp0;
        return 1;
    }
    case 0x1028b947u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0xc00u;
        (void)sp0;
        return 1;
    }
    case 0x1028b97bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0xc00u;
        (void)sp0;
        return 1;
    }
    case 0x1028b980u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0xc00u;
        (void)sp0;
        return 1;
    }
    case 0x1028b99cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0xc00u;
        (void)sp0;
        return 1;
    }
    case 0x1028b9a1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0xc00u;
        (void)sp0;
        return 1;
    }
    case 0x1028b9b2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0xc00u;
        (void)sp0;
        return 1;
    }
    case 0x1028b9c0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0xc00u;
        (void)sp0;
        return 1;
    }
    case 0x1028b9cbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0xc00u;
        (void)sp0;
        return 1;
    }
    case 0x1028b9e3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0xc00u;
        (void)sp0;
        return 1;
    }
    case 0x1028b9f8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0xc00u;
        (void)sp0;
        return 1;
    }
    case 0x1028ba0eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x28u;
        g->ebx = 0xc00u;
        (void)sp0;
        return 1;
    }
    case 0x1028ba1bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0xc00u;
        (void)sp0;
        return 1;
    }
    case 0x1028ba20u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0xc00u;
        (void)sp0;
        return 1;
    }
    case 0x1028ba3du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0xc00u;
        (void)sp0;
        return 1;
    }
    case 0x1028ba42u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0xc00u;
        (void)sp0;
        return 1;
    }
    case 0x1028ba52u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0xc00u;
        (void)sp0;
        return 1;
    }
    case 0x1028ba5bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0xc00u;
        (void)sp0;
        return 1;
    }
    case 0x1028ba65u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0xc00u;
        (void)sp0;
        return 1;
    }
    case 0x1028ba99u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0xc00u;
        (void)sp0;
        return 1;
    }
    case 0x1028ba9eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0xc00u;
        (void)sp0;
        return 1;
    }
    case 0x1028babau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0xc00u;
        (void)sp0;
        return 1;
    }
    case 0x1028babfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0xc00u;
        (void)sp0;
        return 1;
    }
    case 0x1028bac8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0xc00u;
        (void)sp0;
        return 1;
    }
    case 0x1028bad2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0xc00u;
        (void)sp0;
        return 1;
    }
    case 0x1028bb03u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028bb08u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1028bb21u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1028b000(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1028b000(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
