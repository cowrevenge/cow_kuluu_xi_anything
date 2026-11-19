/* f_0x102d53aa - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102d53aa(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t loc_4;
    uint32_t loc_4d4;
    uint32_t loc_4d8;
    uint32_t loc_4dc;
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
    uint32_t t14;
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
    const uint32_t arg7 = rd32(sp0 + 0x1cu);
    const uint32_t arg8 = rd32(sp0 + 0x20u);
    const uint32_t arg10 = rd32(sp0 + 0x28u);
    const uint32_t arg14 = rd32(sp0 + 0x38u);
    const uint32_t arg15 = rd32(sp0 + 0x3cu);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg17 = rd32(sp0 + 0x44u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 1292u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102d53e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x4dcu); in_esi = rd32(sp0 - 0x4d8u); in_ebx = rd32(sp0 - 0x4d4u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x4d4u); g->edi = rd32(sp0 - 0x4dcu); g->esi = rd32(sp0 - 0x4d8u); goto E_102d53e4;
    case 0x102d53eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 0x4dcu); in_esi = rd32(sp0 - 0x4d8u); in_ebx = rd32(sp0 - 0x4d4u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x4d4u); g->edi = rd32(sp0 - 0x4dcu); g->esi = rd32(sp0 - 0x4d8u); goto E_102d53ee;
    case 0x102d53f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 0x4dcu); in_esi = rd32(sp0 - 0x4d8u); in_ebx = rd32(sp0 - 0x4d4u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x4d4u); g->edi = rd32(sp0 - 0x4dcu); g->esi = rd32(sp0 - 0x4d8u); goto E_102d53f3;
    case 0x102d53f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 0x4dcu); in_esi = rd32(sp0 - 0x4d8u); in_ebx = rd32(sp0 - 0x4d4u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x4d4u); g->edi = rd32(sp0 - 0x4dcu); g->esi = rd32(sp0 - 0x4d8u); goto E_102d53f8;
    case 0x102d53fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 0x4dcu); in_esi = rd32(sp0 - 0x4d8u); in_ebx = rd32(sp0 - 0x4d4u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x4d4u); g->edi = rd32(sp0 - 0x4dcu); g->esi = rd32(sp0 - 0x4d8u); goto E_102d53fd;
    case 0x102d5401u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 0x4dcu); in_esi = rd32(sp0 - 0x4d8u); in_ebx = rd32(sp0 - 0x4d4u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x4d4u); g->edi = rd32(sp0 - 0x4dcu); g->esi = rd32(sp0 - 0x4d8u); goto E_102d5401;
    case 0x102d5406u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x4dcu); in_esi = rd32(sp0 - 0x4d8u); in_ebx = rd32(sp0 - 0x4d4u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x4d4u); g->edi = rd32(sp0 - 0x4dcu); g->esi = rd32(sp0 - 0x4d8u); goto E_102d5406;
    case 0x102d540cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x4dcu); in_esi = rd32(sp0 - 0x4d8u); in_ebx = rd32(sp0 - 0x4d4u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x4d4u); g->edi = rd32(sp0 - 0x4dcu); g->esi = rd32(sp0 - 0x4d8u); goto E_102d540c;
    case 0x102d5424u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102d5424;
    case 0x102d542bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102d542b;
    case 0x102d5430u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102d5430;
    case 0x102d5436u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102d5436;
    case 0x102d5441u: eax = g->eax; edx = g->edx; esi = g->esi; loc_28 = rd32(sp0 - 0x28u); goto E_102d5441;
    case 0x102d5447u: eax = g->eax; edx = g->edx; esi = g->esi; loc_28 = rd32(sp0 - 0x28u); goto E_102d5447;
    case 0x102d544bu: eax = g->eax; edx = g->edx; esi = g->esi; loc_28 = rd32(sp0 - 0x28u); goto E_102d544b;
    case 0x102d5456u: eax = g->eax; edx = g->edx; loc_28 = rd32(sp0 - 0x28u); goto E_102d5456;
    case 0x102d545du: eax = g->eax; edx = g->edx; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_102d545d;
    case 0x102d5467u: eax = g->eax; edx = g->edx; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_102d5467;
    case 0x102d546du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_102d546d;
    case 0x102d5477u: eax = g->eax; edx = g->edx; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_102d5477;
    case 0x102d547cu: eax = g->eax; edx = g->edx; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_102d547c;
    case 0x102d5481u: eax = g->eax; edx = g->edx; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_102d5481;
    case 0x102d5487u: eax = g->eax; edx = g->edx; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_102d5487;
    case 0x102d548cu: eax = g->eax; edx = g->edx; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_102d548c;
    case 0x102d5491u: eax = g->eax; edx = g->edx; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_102d5491;
    case 0x102d5497u: eax = g->eax; edx = g->edx; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_102d5497;
    case 0x102d549cu: eax = g->eax; edx = g->edx; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_102d549c;
    case 0x102d54a1u: eax = g->eax; edx = g->edx; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_102d54a1;
    case 0x102d54a7u: eax = g->eax; edx = g->edx; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_102d54a7;
    case 0x102d54acu: eax = g->eax; edx = g->edx; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_102d54ac;
    case 0x102d54b3u: eax = g->eax; edx = g->edx; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_102d54b3;
    case 0x102d54b8u: eax = g->eax; edx = g->edx; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_102d54b8;
    case 0x102d54bbu: eax = g->eax; edx = g->edx; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_102d54bb;
    case 0x102d54c0u: eax = g->eax; edx = g->edx; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_102d54c0;
    case 0x102d54cbu: eax = g->eax; edx = g->edx; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_102d54cb;
    case 0x102d54d1u: eax = g->eax; edx = g->edx; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_102d54d1;
    case 0x102d54deu: eax = g->eax; edx = g->edx; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_102d54de;
    case 0x102d54e5u: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_102d54e5;
    case 0x102d54e8u: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_102d54e8;
    case 0x102d54f1u: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_102d54f1;
    case 0x102d54fcu: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_102d54fc;
    case 0x102d550au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102d550a;
    case 0x102d550fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102d550f;
    case 0x102d5514u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102d5514;
    case 0x102d5519u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102d5519;
    case 0x102d5552u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102d5552;
    case 0x102d5558u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_102d5558;
    case 0x102d556au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102d556a;
    case 0x102d556fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102d556f;
    case 0x102d5576u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_102d5576;
    case 0x102d5580u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_102d5580;
    case 0x102d55abu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_102d55ab;
    case 0x102d55cbu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_102d55cb;
    case 0x102d55d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_102d55d2;
    case 0x102d55e4u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_102d55e4;
    case 0x102d55ebu: eax = g->eax; ecx = g->ecx; esi = g->esi; loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_102d55eb;
    case 0x102d55f7u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_102d55f7;
    case 0x102d55fdu: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_102d55fd;
    case 0x102d5603u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_102d5603;
    case 0x102d560cu: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_102d560c;
    case 0x102d5616u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_102d5616;
    case 0x102d561bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_102d561b;
    case 0x102d561du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_102d561d;
    case 0x102d5624u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_102d5624;
    case 0x102d5629u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_102d5629;
    case 0x102d5636u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_102d5636;
    case 0x102d5639u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_102d5639;
    case 0x102d566bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102d566b;
    case 0x102d5679u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102d5679;
    case 0x102d567cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102d567c;
    case 0x102d567fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102d567f;
    case 0x102d5699u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102d5699;
    case 0x102d56b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102d56b9;
    case 0x102d56d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102d56d4;
    case 0x102d56d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102d56d6;
    case 0x102d56deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102d56de;
    case 0x102d56e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102d56e4;
    case 0x102d56ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102d56ec;
    case 0x102d56efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102d56ef;
    case 0x102d56f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102d56f2;
    case 0x102d570au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102d570a;
    case 0x102d5728u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102d5728;
    case 0x102d5741u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102d5741;
    case 0x102d5743u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102d5743;
    case 0x102d574bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102d574b;
    case 0x102d5750u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102d5750;
    case 0x102d5753u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102d5753;
    case 0x102d576au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102d576a;
    case 0x102d5778u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102d5778;
    case 0x102d5784u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102d5784;
    case 0x102d578cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102d578c;
    case 0x102d578fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102d578f;
    case 0x102d5792u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102d5792;
    case 0x102d57a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102d57a4;
    case 0x102d57a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102d57a9;
    case 0x102d57acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102d57ac;
    case 0x102d57b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); goto E_102d57b6;
    case 0x102d57b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102d57b8;
    case 0x102d57c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102d57c0;
    case 0x102d57c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102d57c8;
    case 0x102d57cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102d57cb;
    case 0x102d57ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102d57ce;
    case 0x102d57f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); goto E_102d57f4;
    case 0x102d57f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102d57f6;
    case 0x102d57feu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102d57fe;
    case 0x102d5805u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102d5805;
    case 0x102d580fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102d580f;
    case 0x102d5816u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102d5816;
    case 0x102d5820u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102d5820;
    case 0x102d582bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102d582b;
    case 0x102d5833u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102d5833;
    case 0x102d585eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102d585e;
    case 0x102d5868u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102d5868;
    case 0x102d5874u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102d5874;
    case 0x102d587cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102d587c;
    case 0x102d587fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102d587f;
    case 0x102d5882u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102d5882;
    case 0x102d5894u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102d5894;
    case 0x102d5899u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102d5899;
    case 0x102d589cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102d589c;
    case 0x102d58a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); goto E_102d58a6;
    case 0x102d58a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102d58a8;
    case 0x102d58b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102d58b0;
    case 0x102d58b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102d58b8;
    case 0x102d58bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102d58bf;
    case 0x102d58c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102d58c2;
    case 0x102d58e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); goto E_102d58e8;
    case 0x102d58eau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102d58ea;
    case 0x102d58f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102d58f2;
    case 0x102d58f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102d58f9;
    case 0x102d5903u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102d5903;
    case 0x102d590au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102d590a;
    case 0x102d5914u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102d5914;
    case 0x102d5923u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102d5923;
    case 0x102d593bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102d593b;
    case 0x102d5941u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102d5941;
    case 0x102d5949u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102d5949;
    case 0x102d5964u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102d5964;
    case 0x102d596au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102d596a;
    case 0x102d597fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102d597f;
    case 0x102d598du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102d598d;
    case 0x102d5996u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102d5996;
    case 0x102d599fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102d599f;
    case 0x102d59a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102d59a6;
    case 0x102d59afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102d59af;
    case 0x102d59b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102d59b6;
    case 0x102d59bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102d59bf;
    case 0x102d59c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102d59c6;
    case 0x102d59cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_4dc = rd32(sp0 - 0x4dcu); loc_4d8 = rd32(sp0 - 0x4d8u); loc_4d4 = rd32(sp0 - 0x4d4u); loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102d59cf;
    case 0x102d59efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102d59ef;
    default: break;
    }
#endif

    COW_AT(102d53aa)
    wr32(sp0 - 8u, 0xffffffffu);
    wr32(sp0 - 0xcu, COW_IMG(0x10328161u));
    wr32(sp0 - 0x10u, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0x10u);
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x14u, COW_IMG(0x102d53b4u));
    wr32(sp0 - 0x4d4u, in_ebx);
    wr32(sp0 - 0x4d8u, in_esi);
    wr32(sp0 - 0x4dcu, in_edi);
    g->eax = COW_IMG(0x102d53b4u);
    g->edx = in_edx;
    g->esp = sp0 - 0x4dcu;
    t2 = cow_thiscall(g, COW_IMG(0x102daff3u), sp0 - 0x90u, 0);
    t3 = g->edx;
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 0u);
    if (arg1 != 0u)
    {
        eax = t2;
        edx = t3;
        goto L_102d53ee;
    }
    eax = t2;
    edx = t3;
L_102d53e4: ;
    COW_AT(102d53e4)
    ebx = 0u;
    edi = 0x8876086cu;
    loc_4 = in_ebp;
    loc_8 = 0u;
    loc_4d4 = in_ebx;
    loc_4d8 = in_esi;
    loc_4dc = in_edi;
L_102d59cf: ;
    COW_AT(102d59cf)
    wr32(sp0 - 8u, 0xffffffffu);
    g->ebx = ebx;
    g->ebp = sp0 - 4u;
    g->esp = sp0 - 0x4dcu;
    cow_fastcall(g, COW_IMG(0x102db00cu), sp0 - 0x90u, edx, 0);
    t127 = rd32(sp0 - 0x10u);
    t128 = rd32(sp0 - 0x4d4u);
    t129 = rd32(sp0 - 0x4d8u);
    t130 = rd32(sp0 - 0x4dcu);
    wr32(g->fs_base, t127);
    g->ebx = t128;
    g->esi = t129;
    g->edi = t130;
    g->ebp = rd32(sp0 - 4u);
    return edi;
L_102d53ee: ;
    COW_AT(102d53ee)
    if (arg2 == 0u) goto L_102d53e4;
    COW_AT(102d53f3)
    if (arg3 == 0u) goto L_102d53e4;
    COW_AT(102d53f8)
    if (arg17 == 0u) goto L_102d53e4;
    COW_AT(102d53fd)
    if (arg14 != 0u)
    {
        esi = arg14;
    }
    else
    {
    COW_AT(102d5401)
        if (rd32(sp0 + 0x40u) != 0xffffffffu)
        {
            esi = arg14;
        }
        else
        {
    COW_AT(102d5406)
            esi = sp0 - 0xd0u;
        }
    }
    COW_AT(102d540c)
    wr32(sp0 - 0x4e0u, 1u);
    wr32(sp0 - 0x4e4u, esi);
    wr32(sp0 - 0x4e8u, arg3);
    wr32(sp0 - 0x4ecu, arg2);
    g->eax = eax;
    g->esp = sp0 - 0x4dcu;
    t4 = cow_fastcall(g, COW_IMG(0x102dd405u), sp0 - 0x90u, edx, 4, arg2, arg3, esi, 1u);
    t5 = g->edx;
    if ((int32_t)t4 >= 0)
    {
        edx = t5;
    COW_AT(102d542b)
        if (rd32(sp0 + 0x40u) == 0xffffffffu)
        {
    COW_AT(102d5430)
            t6 = rd32(esi + 0x14u);
            wr32(sp0 + 0x40u, t6);
        }
    COW_AT(102d5436)
        wr32(sp0 - 0x28u, 1u);
        eax = rd32(sp0 - 0x44u);
        loc_28 = 1u;
L_102d5447: ;
    COW_AT(102d5447)
        if (eax != 0u) goto L_102d5441;
    COW_AT(102d544b)
        wr32(sp0 - 0x4e0u, 5u);
        wr32(sp0 - 0x2cu, 1u);
        if (rd32(sp0 + 0x40u) != 5u)
        {
            loc_2c = 1u;
            goto L_102d5477;
        }
    COW_AT(102d5456)
        if (rd32(sp0 - 0x40u) == 0u)
        {
            eax = rd32(sp0 - 0x40u);
            goto L_102d546d;
        }
        eax = rd32(sp0 - 0x40u);
        loc_2c = 1u;
L_102d545d: ;
    COW_AT(102d545d)
        wr32(sp0 - 0x2cu, loc_2c + 1u);
        if (rd32(eax + 0x50u) != 0u)
        {
            eax = rd32(eax + 0x50u);
            loc_2c = loc_2c + 1u;
            goto L_102d545d;
        }
        eax = rd32(eax + 0x50u);
        loc_2c = loc_2c + 1u;
    COW_AT(102d5467)
        if (loc_2c == 6u) goto L_102d5477;
L_102d546d: ;
    COW_AT(102d546d)
        ebx = 0u;
        edi = 0x80004005u;
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_4d4 = rd32(sp0 - 0x4d4u);
        loc_4d8 = rd32(sp0 - 0x4d8u);
        loc_4dc = rd32(sp0 - 0x4dcu);
    }
    else
    {
        eax = t4;
        edx = t5;
    COW_AT(102d5424)
        ebx = 0u;
        edi = eax;
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_4d4 = rd32(sp0 - 0x4d4u);
        loc_4d8 = rd32(sp0 - 0x4d8u);
        loc_4dc = rd32(sp0 - 0x4dcu);
    }
    goto L_102d59cf;
L_102d5441: ;
    COW_AT(102d5441)
    wr32(sp0 - 0x28u, loc_28 + 1u);
    eax = rd32(eax + 0x4cu);
    loc_28 = loc_28 + 1u;
    goto L_102d5447;
L_102d5477: ;
    COW_AT(102d5477)
    if (rd32(sp0 + 0x10u) == 0u) goto L_102d5481;
    COW_AT(102d547c)
    if (rd32(sp0 + 0x10u) != 0xffffffffu) goto L_102d5487;
L_102d5481: ;
    COW_AT(102d5481)
    t7 = rd32(sp0 - 0x84u);
    wr32(sp0 + 0x10u, t7);
    eax = t7;
L_102d5487: ;
    COW_AT(102d5487)
    if (rd32(sp0 + 0x14u) == 0u) goto L_102d5491;
    COW_AT(102d548c)
    if (rd32(sp0 + 0x14u) != 0xffffffffu) goto L_102d5497;
L_102d5491: ;
    COW_AT(102d5491)
    t8 = rd32(sp0 - 0x80u);
    wr32(sp0 + 0x14u, t8);
    eax = t8;
L_102d5497: ;
    COW_AT(102d5497)
    if (rd32(sp0 + 0x18u) == 0u) goto L_102d54a1;
    COW_AT(102d549c)
    if (rd32(sp0 + 0x18u) != 0xffffffffu) goto L_102d54a7;
L_102d54a1: ;
    COW_AT(102d54a1)
    t9 = rd32(sp0 - 0x7cu);
    wr32(sp0 + 0x18u, t9);
    eax = t9;
L_102d54a7: ;
    COW_AT(102d54a7)
    if (rd32(sp0 + 0x2cu) == 0xffffffffu)
    {
    COW_AT(102d54ac)
        wr32(sp0 + 0x2cu, 0x80004u);
    }
    COW_AT(102d54b3)
    if (rd32(sp0 + 0x30u) == 0xffffffffu)
    {
    COW_AT(102d54b8)
        wr32(sp0 + 0x30u, 5u);
    }
    COW_AT(102d54bb)
    if (rd32(sp0 + 0x40u) == 5u)
    {
    COW_AT(102d54c0)
        wr32(sp0 + 0x2cu, rd32(sp0 + 0x2cu) | 0x70000u);
        wr32(sp0 + 0x30u, rd32(sp0 + 0x30u) | 0x70000u);
        eax = 0x70000u;
    }
    COW_AT(102d54cb)
    if (rd8(sp0 + 0x2cu) == 1u) goto L_102d54e5;
    COW_AT(102d54d1)
    if ((uint8_t)rd32(sp0 + 0x30u) == 2u)
    {
        eax = (uint8_t)rd32(sp0 + 0x30u);
        goto L_102d54e5;
    }
    eax = (uint8_t)rd32(sp0 + 0x30u);
    COW_AT(102d54de)
    wr32(sp0 - 0x34u, 0u);
    if (eax != 5u)
    {
        loc_34 = 0u;
        goto L_102d54e8;
    }
L_102d54e5: ;
    COW_AT(102d54e5)
    wr32(sp0 - 0x34u, 1u);
    loc_34 = 1u;
L_102d54e8: ;
    COW_AT(102d54e8)
    if (rd32(sp0 + 0x24u) == 0u)
    {
    COW_AT(102d54f1)
        if (rd32(sp0 + 0x34u) == 0u)
        {
            ecx = 1u;
            esi = rd32(sp0 - 0x90u);
        }
        else
        {
            esi = rd32(sp0 - 0x90u);
    COW_AT(102d54fc)
            wr32(sp0 - 0x4e0u, esi);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x4dcu;
            t10 = cow_cdecl(g, COW_IMG(0x102d2626u), 1, esi);
            t11 = g->edx;
            if (rd32(t10 + 4u) == 0u)
            {
                eax = t10;
                ecx = rd32(t10 + 4u);
                edx = t11;
                goto L_102d5514;
            }
            eax = t10;
            ecx = rd32(t10 + 4u);
            edx = t11;
    COW_AT(102d550a)
            if (ecx == 1u) goto L_102d5514;
    COW_AT(102d550f)
            if (ecx != 2u)
            {
                loc_28 = rd32(sp0 - 0x28u);
                loc_2c = rd32(sp0 - 0x2cu);
                loc_34 = rd32(sp0 - 0x34u);
                goto L_102d5558;
            }
L_102d5514: ;
    COW_AT(102d5514)
            if (rd32(eax + 0x10u) != 0u)
            {
                loc_28 = rd32(sp0 - 0x28u);
                loc_2c = rd32(sp0 - 0x2cu);
                loc_34 = rd32(sp0 - 0x34u);
            }
            else
            {
    COW_AT(102d5519)
                wr32(sp0 - 0x4e0u, 9u);
                wr32(sp0 - 0x4e0u, sp0 - 0xb4u);
                t12 = rd32(sp0 + 0x40u);
                wr32(sp0 - 0x4e4u, t12);
                wr32(sp0 - 0x4e8u, arg8);
                esi = eax;
                edi = sp0 - 0xb4u;
                ecx = 9u;
                while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                wr32(sp0 - 0x4ecu, 0u);
                wr32(sp0 - 0xb4u, 0u);
                wr32(sp0 - 0xa4u, 1u);
                g->ebx = 0u;
                g->eax = sp0 - 0xb4u;
                g->esp = sp0 - 0x4dcu;
                t13 = cow_call_regs(g, COW_IMG(0x102d272du), g->eax, ecx, edx, 1, 4, 0u, arg8, t12, sp0 - 0xb4u);
                t14 = g->ecx;
                t15 = g->edx;
                if (t13 != 0u)
                {
                    eax = t13;
                    ecx = t14;
                    edx = t15;
                    esi = t13;
                    loc_28 = rd32(sp0 - 0x28u);
                    loc_2c = rd32(sp0 - 0x2cu);
                    loc_34 = rd32(sp0 - 0x34u);
                }
                else
                {
                    eax = t13;
                    ecx = t14;
                    edx = t15;
    COW_AT(102d5552)
                    esi = rd32(sp0 - 0x90u);
                    loc_28 = rd32(sp0 - 0x28u);
                    loc_2c = rd32(sp0 - 0x2cu);
                    loc_34 = rd32(sp0 - 0x34u);
                }
            }
        }
L_102d5558: ;
    COW_AT(102d5558)
        wr32(sp0 - 0x4e0u, esi);
        g->eax = eax;
        g->esp = sp0 - 0x4dcu;
        t16 = cow_cdecl(g, COW_IMG(0x102d280fu), 1, esi);
        wr32(sp0 + 0x24u, t16);
        if (arg10 == 3u)
        {
            eax = t16;
            loc_28 = rd32(sp0 - 0x28u);
            loc_2c = rd32(sp0 - 0x2cu);
            loc_34 = rd32(sp0 - 0x34u);
        }
        else
        {
            eax = t16;
    COW_AT(102d556a)
            if (eax != 0x14u)
            {
                loc_28 = rd32(sp0 - 0x28u);
                loc_2c = rd32(sp0 - 0x2cu);
                loc_34 = rd32(sp0 - 0x34u);
            }
            else
            {
    COW_AT(102d556f)
                wr32(sp0 + 0x24u, 0x16u);
                loc_28 = rd32(sp0 - 0x28u);
                loc_2c = rd32(sp0 - 0x2cu);
                loc_34 = rd32(sp0 - 0x34u);
            }
        }
    }
    COW_AT(102d5576)
    if (rd32(sp0 - 0x88u) == 0u)
    {
    COW_AT(102d55d2)
        edi = sp0 - 0x4d0u;
        eax = 0xffffffffu;
        ecx = 0x100u;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    }
    else
    {
        esi = rd32(sp0 - 0x88u);
    COW_AT(102d5580)
        t17 = rd32(sp0 + 0x34u);
        eax = rd8(sp0 + 0x36u) | (uint32_t)(uint8_t)t17 << 0x10u | (t17 & 0xff00ff00u);
        ecx = 0u;
        esi = esi - (sp0 - 0x4d0u);
L_102d55ab: ;
    COW_AT(102d55ab)
        t18 = rd32(ecx * 4u + esi + sp0 - 0x4d0u);
        t19 = -(t18 != eax) & t18;
        wr32(ecx * 4u + sp0 - 0x4d0u, t19);
        if (ecx + 1u < 0x100u)
        {
            ecx = ecx + 1u;
            goto L_102d55ab;
        }
        ecx = ecx + 1u;
    COW_AT(102d55cb)
        wr32(sp0 + 0x34u, 0u);
    }
    COW_AT(102d55e4)
    if (arg15 == 0u)
    {
    COW_AT(102d55f7)
        if (rd32(sp0 + 0x24u) == 0x28u) goto L_102d561d;
    COW_AT(102d55fd)
        if (rd32(sp0 + 0x24u) != 0x29u) goto L_102d5624;
    COW_AT(102d5603)
        wr32(sp0 + 0x24u, 0x16u);
        eax = 0u;
L_102d560c: ;
    COW_AT(102d560c)
        if (rd8(eax * 4u + sp0 - 0x4cdu) != 0xffu) goto L_102d561d;
    COW_AT(102d5616)
        if (eax + 1u < 0x100u)
        {
            eax = eax + 1u;
            goto L_102d560c;
        }
    COW_AT(102d561b)
    }
    else
    {
    COW_AT(102d55eb)
        esi = sp0 - 0x4d0u;
        edi = arg15;
        ecx = 0x100u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    }
L_102d5624: ;
    COW_AT(102d5624)
    if (arg10 != 0u) goto L_102d5636;
    COW_AT(102d5629)
    wr32(sp0 - 0x38u, 1u);
    if ((arg8 >> 8u & 2u) == 0u)
    {
        loc_38 = 1u;
        goto L_102d5639;
    }
L_102d5636: ;
    COW_AT(102d5636)
    wr32(sp0 - 0x38u, 0u);
    loc_38 = 0u;
L_102d5639: ;
    COW_AT(102d5639)
    t20 = rd32(sp0 + 0x40u);
    wr32(sp0 - 0x4e0u, t20);
    wr32(sp0 - 0x4e4u, arg10);
    wr32(sp0 - 0x4e8u, sp0 + 0x24u);
    wr32(sp0 - 0x4ecu, sp0 + 0x1cu);
    wr32(sp0 - 0x4f0u, sp0 + 0x18u);
    wr32(sp0 - 0x4f4u, sp0 + 0x14u);
    wr32(sp0 - 0x4f8u, sp0 + 0x10u);
    wr32(sp0 - 0x4fcu, arg1);
    g->eax = sp0 + 0x10u;
    g->ecx = ecx;
    g->esp = sp0 - 0x4d8u;
    t21 = cow_call_regs(g, COW_IMG(0x102d2c36u), g->eax, g->ecx, arg8, 1, 9, arg1, sp0 + 0x10u, sp0 + 0x14u, sp0 + 0x18u, sp0 + 0x1cu, sp0 + 0x24u, arg10, t20, rd32(sp0 - 0x4dcu));
    t22 = g->ecx;
    t23 = g->edx;
    if ((int32_t)t21 < 0)
    {
        edx = t23;
        ebx = 0u;
        edi = t21;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_20 = rd32(sp0 - 0x20u);
    }
    else
    {
        ecx = t22;
        edx = t23;
        edi = t21;
    COW_AT(102d566b)
        if (rd32(sp0 + 0x40u) == 3u)
        {
            ebx = rd32(sp0 + 0x10u);
            esi = rd32(sp0 + 0x24u);
            goto L_102d56b9;
        }
        eax = rd32(sp0 + 0x40u) - 3u;
        ebx = rd32(sp0 + 0x10u);
        esi = rd32(sp0 + 0x24u);
    COW_AT(102d5679)
        if (eax == 1u) goto L_102d5699;
        eax = eax - 1u;
    COW_AT(102d567c)
        if (eax != 1u) goto L_102d56d6;
    COW_AT(102d567f)
        wr32(sp0 - 0x4e0u, sp0 - 0x20u);
        wr32(sp0 - 0x4e4u, arg10);
        wr32(sp0 - 0x4e8u, esi);
        wr32(sp0 - 0x4ecu, arg8);
        wr32(sp0 - 0x4f0u, arg7);
        wr32(sp0 - 0x4f4u, ebx);
        wr32(sp0 - 0x4f8u, arg1);
        g->eax = arg1;
        g->edx = sp0 - 0x20u;
        t24 = rd32(arg1);
        g->esp = sp0 - 0x4dcu;
        t25 = cow_thiscall(g, rd32(t24 + 0x58u), t24, 7, arg1, ebx, arg7, arg8, esi, arg10, sp0 - 0x20u);
        t26 = g->ecx;
        t27 = g->edx;
        eax = t25;
        ecx = t26;
        edx = t27;
L_102d56d4: ;
    COW_AT(102d56d4)
        edi = eax;
L_102d56d6: ;
    COW_AT(102d56d6)
        if ((int32_t)edi < 0)
        {
            loc_1c = rd32(sp0 - 0x1cu);
            loc_18 = rd32(sp0 - 0x18u);
            loc_20 = rd32(sp0 - 0x20u);
        }
        else
        {
    COW_AT(102d56de)
            if (rd32(sp0 - 0x38u) == 0u) goto L_102d5750;
    COW_AT(102d56e4)
            if (rd32(sp0 + 0x40u) == 3u) goto L_102d5728;
            eax = rd32(sp0 + 0x40u) - 3u;
    COW_AT(102d56ec)
            if (eax == 1u) goto L_102d570a;
            eax = eax - 1u;
    COW_AT(102d56ef)
            if (eax != 1u) goto L_102d5743;
    COW_AT(102d56f2)
            wr32(sp0 - 0x4e0u, sp0 - 0x24u);
            wr32(sp0 - 0x4e4u, 2u);
            wr32(sp0 - 0x4e8u, esi);
            wr32(sp0 - 0x4ecu, 0u);
            wr32(sp0 - 0x4f0u, arg7);
            wr32(sp0 - 0x4f4u, ebx);
            wr32(sp0 - 0x4f8u, arg1);
            g->eax = arg1;
            g->edx = sp0 - 0x24u;
            t39 = rd32(arg1);
            g->esp = sp0 - 0x4dcu;
            t40 = cow_thiscall(g, rd32(t39 + 0x58u), t39, 7, arg1, ebx, arg7, 0u, esi, 2u, sp0 - 0x24u);
            t41 = g->ecx;
            t42 = g->edx;
            eax = t40;
            ecx = t41;
            edx = t42;
L_102d5741: ;
    COW_AT(102d5741)
            edi = eax;
L_102d5743: ;
    COW_AT(102d5743)
            if ((int32_t)edi < 0)
            {
                loc_1c = rd32(sp0 - 0x1cu);
                loc_18 = rd32(sp0 - 0x18u);
                loc_20 = rd32(sp0 - 0x20u);
                goto L_102d598d;
            }
    COW_AT(102d574b)
            ebx = rd32(sp0 - 0x24u);
L_102d5753: ;
    COW_AT(102d5753)
            wr32(sp0 - 0x30u, 0u);
            wr32(sp0 - 0x3cu, sp0 - 0x90u);
            if (rd32(sp0 - 0x2cu) == 0u)
            {
                loc_1c = rd32(sp0 - 0x1cu);
                loc_18 = rd32(sp0 - 0x18u);
                goto L_102d593b;
            }
            esi = sp0 - 0x90u;
            loc_30 = 0u;
            loc_3c = sp0 - 0x90u;
            loc_14 = rd32(sp0 - 0x14u);
            loc_1c = rd32(sp0 - 0x1cu);
            loc_18 = rd32(sp0 - 0x18u);
L_102d576a: ;
    COW_AT(102d576a)
            wr32(sp0 - 0x14u, 0u);
            if (rd32(sp0 - 0x28u) == 0u)
            {
                loc_14 = 0u;
                goto L_102d585e;
            }
            loc_14 = 0u;
L_102d5778: ;
    COW_AT(102d5778)
            if (loc_14 >= arg7) goto L_102d585e;
    COW_AT(102d5784)
            if (rd32(sp0 + 0x40u) == 3u) goto L_102d57a9;
            eax = rd32(sp0 + 0x40u) - 3u;
    COW_AT(102d578c)
            if (eax == 1u) goto L_102d57a4;
            eax = eax - 1u;
    COW_AT(102d578f)
            if (eax != 1u) goto L_102d57b8;
    COW_AT(102d5792)
            wr32(sp0 - 0x4e0u, sp0 - 0x18u);
            wr32(sp0 - 0x4e4u, loc_14);
            wr32(sp0 - 0x4e8u, loc_30);
            wr32(sp0 - 0x4ecu, ebx);
            g->eax = rd32(ebx);
            g->edx = edx;
            t54 = rd32(ebx);
            g->esp = sp0 - 0x4dcu;
            t55 = cow_thiscall(g, rd32(t54 + 0x3cu), sp0 - 0x18u, 4, ebx, loc_30, loc_14, sp0 - 0x18u);
            t56 = g->ecx;
            t57 = g->edx;
            eax = t55;
            ecx = t56;
            edx = t57;
            loc_3c = rd32(sp0 - 0x3cu);
L_102d57b6: ;
    COW_AT(102d57b6)
            edi = eax;
            loc_30 = rd32(sp0 - 0x30u);
            loc_14 = rd32(sp0 - 0x14u);
            loc_1c = rd32(sp0 - 0x1cu);
            loc_18 = rd32(sp0 - 0x18u);
L_102d57b8: ;
    COW_AT(102d57b8)
            if ((int32_t)edi < 0)
            {
                loc_20 = rd32(sp0 - 0x20u);
                goto L_102d598d;
            }
    COW_AT(102d57c0)
            if (rd32(sp0 + 0x40u) == 3u) goto L_102d57ce;
            eax = rd32(sp0 + 0x40u) - 3u;
    COW_AT(102d57c8)
            if (eax == 1u) goto L_102d5833;
            eax = eax - 1u;
    COW_AT(102d57cb)
            if (eax != 1u) goto L_102d57f6;
L_102d57ce: ;
    COW_AT(102d57ce)
            t70 = rd32(sp0 + 0x34u);
            wr32(sp0 - 0x4e0u, t70);
            t71 = rd32(sp0 + 0x2cu);
            wr32(sp0 - 0x4e4u, t71);
            wr32(sp0 - 0x4e8u, esi + 0x18u);
            wr32(sp0 - 0x4ecu, sp0 - 0x4d0u);
            t72 = rd32(esi + 0x30u);
            wr32(sp0 - 0x4f0u, t72);
            wr32(sp0 - 0x4f4u, rd32(esi));
            t73 = rd32(esi + 4u);
            wr32(sp0 - 0x4f8u, t73);
            wr32(sp0 - 0x4fcu, 0u);
            wr32(sp0 - 0x500u, arg15);
            wr32(sp0 - 0x504u, loc_18);
            g->eax = sp0 - 0x4d0u;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x4dcu;
            t74 = cow_stdcall(g, COW_IMG(0x102d2888u), 10, loc_18, arg15, 0u, t73, rd32(esi), t72, sp0 - 0x4d0u, esi + 0x18u, t71, t70);
            t75 = g->ecx;
            t76 = g->edx;
            eax = t74;
            ecx = t75;
            edx = t76;
            loc_3c = rd32(sp0 - 0x3cu);
L_102d57f4: ;
    COW_AT(102d57f4)
            edi = eax;
            loc_30 = rd32(sp0 - 0x30u);
            loc_14 = rd32(sp0 - 0x14u);
            loc_1c = rd32(sp0 - 0x1cu);
            loc_18 = rd32(sp0 - 0x18u);
L_102d57f6: ;
    COW_AT(102d57f6)
            if ((int32_t)edi < 0)
            {
                loc_20 = rd32(sp0 - 0x20u);
                goto L_102d598d;
            }
    COW_AT(102d57fe)
            if (loc_1c != 0u)
            {
                eax = loc_1c;
    COW_AT(102d5805)
                wr32(sp0 - 0x4e0u, eax);
                g->edx = edx;
                t77 = rd32(eax);
                g->esp = sp0 - 0x4dcu;
                cow_thiscall(g, rd32(t77 + 8u), t77, 1, eax);
                t78 = g->ecx;
                t79 = g->edx;
                wr32(sp0 - 0x1cu, 0u);
                ecx = t78;
                edx = t79;
                loc_30 = rd32(sp0 - 0x30u);
                loc_3c = rd32(sp0 - 0x3cu);
                loc_14 = rd32(sp0 - 0x14u);
                loc_1c = 0u;
                loc_18 = rd32(sp0 - 0x18u);
            }
    COW_AT(102d580f)
            if (loc_18 != 0u)
            {
                eax = loc_18;
    COW_AT(102d5816)
                wr32(sp0 - 0x4e0u, eax);
                g->edx = edx;
                t80 = rd32(eax);
                g->esp = sp0 - 0x4dcu;
                cow_thiscall(g, rd32(t80 + 8u), t80, 1, eax);
                t81 = g->ecx;
                t82 = g->edx;
                wr32(sp0 - 0x18u, 0u);
                ecx = t81;
                edx = t82;
                loc_30 = rd32(sp0 - 0x30u);
                loc_3c = rd32(sp0 - 0x3cu);
                loc_14 = rd32(sp0 - 0x14u);
                loc_1c = rd32(sp0 - 0x1cu);
                loc_18 = 0u;
            }
    COW_AT(102d5820)
            wr32(sp0 - 0x14u, loc_14 + 1u);
            if (loc_14 + 1u >= rd32(sp0 - 0x28u))
            {
                loc_14 = loc_14 + 1u;
                goto L_102d585e;
            }
            loc_14 = loc_14 + 1u;
    COW_AT(102d582b)
            esi = rd32(esi + 0x4cu);
            goto L_102d5778;
        }
    }
L_102d598d: ;
    COW_AT(102d598d)
    if (loc_1c != 0u)
    {
        eax = loc_1c;
    COW_AT(102d5996)
        wr32(sp0 - 0x4e0u, eax);
        g->edx = edx;
        g->esp = sp0 - 0x4dcu;
        cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
        t122 = g->edx;
        wr32(sp0 - 0x1cu, 0u);
        edx = t122;
        loc_18 = rd32(sp0 - 0x18u);
        loc_20 = rd32(sp0 - 0x20u);
    }
    COW_AT(102d599f)
    if (loc_18 != 0u)
    {
        eax = loc_18;
    COW_AT(102d59a6)
        wr32(sp0 - 0x4e0u, eax);
        g->edx = edx;
        g->esp = sp0 - 0x4dcu;
        cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
        t123 = g->edx;
        wr32(sp0 - 0x18u, 0u);
        edx = t123;
        loc_20 = rd32(sp0 - 0x20u);
    }
    COW_AT(102d59af)
    if (loc_20 != 0u)
    {
        eax = loc_20;
    COW_AT(102d59b6)
        wr32(sp0 - 0x4e0u, eax);
        g->edx = edx;
        g->esp = sp0 - 0x4dcu;
        cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
        t124 = g->edx;
        wr32(sp0 - 0x20u, 0u);
        edx = t124;
    }
    COW_AT(102d59bf)
    if (rd32(sp0 - 0x24u) == 0u)
    {
        eax = rd32(sp0 - 0x24u);
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_4d4 = rd32(sp0 - 0x4d4u);
        loc_4d8 = rd32(sp0 - 0x4d8u);
        loc_4dc = rd32(sp0 - 0x4dcu);
    }
    else
    {
        eax = rd32(sp0 - 0x24u);
    COW_AT(102d59c6)
        wr32(sp0 - 0x4e0u, eax);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x4dcu;
        t125 = cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
        t126 = g->edx;
        wr32(sp0 - 0x24u, 0u);
        eax = t125;
        edx = t126;
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_4d4 = rd32(sp0 - 0x4d4u);
        loc_4d8 = rd32(sp0 - 0x4d8u);
        loc_4dc = rd32(sp0 - 0x4dcu);
    }
    goto L_102d59cf;
L_102d561d: ;
    COW_AT(102d561d)
    wr32(sp0 + 0x24u, 0x15u);
    goto L_102d5624;
L_102d5699: ;
    COW_AT(102d5699)
    wr32(sp0 - 0x4e0u, sp0 - 0x20u);
    wr32(sp0 - 0x4e4u, arg10);
    wr32(sp0 - 0x4e8u, esi);
    wr32(sp0 - 0x4ecu, arg8);
    wr32(sp0 - 0x4f0u, arg7);
    t28 = rd32(sp0 + 0x18u);
    wr32(sp0 - 0x4f4u, t28);
    t29 = rd32(sp0 + 0x14u);
    wr32(sp0 - 0x4f8u, t29);
    wr32(sp0 - 0x4fcu, ebx);
    wr32(sp0 - 0x500u, arg1);
    g->eax = arg1;
    g->edx = sp0 - 0x20u;
    t30 = rd32(arg1);
    g->esp = sp0 - 0x4dcu;
    t31 = cow_thiscall(g, rd32(t30 + 0x54u), t30, 9, arg1, ebx, t29, t28, arg7, arg8, esi, arg10, sp0 - 0x20u);
    t32 = g->ecx;
    t33 = g->edx;
    eax = t31;
    ecx = t32;
    edx = t33;
    goto L_102d56d4;
L_102d56b9: ;
    COW_AT(102d56b9)
    wr32(sp0 - 0x4e0u, sp0 - 0x20u);
    wr32(sp0 - 0x4e4u, arg10);
    wr32(sp0 - 0x4e8u, esi);
    wr32(sp0 - 0x4ecu, arg8);
    wr32(sp0 - 0x4f0u, arg7);
    t34 = rd32(sp0 + 0x14u);
    wr32(sp0 - 0x4f4u, t34);
    wr32(sp0 - 0x4f8u, ebx);
    wr32(sp0 - 0x4fcu, arg1);
    g->eax = arg1;
    g->edx = sp0 - 0x20u;
    t35 = rd32(arg1);
    g->esp = sp0 - 0x4dcu;
    t36 = cow_thiscall(g, rd32(t35 + 0x50u), t35, 8, arg1, ebx, t34, arg7, arg8, esi, arg10, sp0 - 0x20u);
    t37 = g->ecx;
    t38 = g->edx;
    eax = t36;
    ecx = t37;
    edx = t38;
    goto L_102d56d4;
L_102d570a: ;
    COW_AT(102d570a)
    wr32(sp0 - 0x4e0u, sp0 - 0x24u);
    wr32(sp0 - 0x4e4u, 2u);
    wr32(sp0 - 0x4e8u, esi);
    wr32(sp0 - 0x4ecu, 0u);
    wr32(sp0 - 0x4f0u, arg7);
    t43 = rd32(sp0 + 0x18u);
    wr32(sp0 - 0x4f4u, t43);
    t44 = rd32(sp0 + 0x14u);
    wr32(sp0 - 0x4f8u, t44);
    wr32(sp0 - 0x4fcu, ebx);
    wr32(sp0 - 0x500u, arg1);
    g->eax = arg1;
    g->edx = sp0 - 0x24u;
    t45 = rd32(arg1);
    g->esp = sp0 - 0x4dcu;
    t46 = cow_thiscall(g, rd32(t45 + 0x54u), t45, 9, arg1, ebx, t44, t43, arg7, 0u, esi, 2u, sp0 - 0x24u);
    t47 = g->ecx;
    t48 = g->edx;
    eax = t46;
    ecx = t47;
    edx = t48;
    goto L_102d5741;
L_102d5728: ;
    COW_AT(102d5728)
    wr32(sp0 - 0x4e0u, sp0 - 0x24u);
    wr32(sp0 - 0x4e4u, 2u);
    wr32(sp0 - 0x4e8u, esi);
    wr32(sp0 - 0x4ecu, 0u);
    wr32(sp0 - 0x4f0u, arg7);
    t49 = rd32(sp0 + 0x14u);
    wr32(sp0 - 0x4f4u, t49);
    wr32(sp0 - 0x4f8u, ebx);
    wr32(sp0 - 0x4fcu, arg1);
    g->eax = arg1;
    g->edx = sp0 - 0x24u;
    t50 = rd32(arg1);
    g->esp = sp0 - 0x4dcu;
    t51 = cow_thiscall(g, rd32(t50 + 0x50u), t50, 8, arg1, ebx, t49, arg7, 0u, esi, 2u, sp0 - 0x24u);
    t52 = g->ecx;
    t53 = g->edx;
    eax = t51;
    ecx = t52;
    edx = t53;
    goto L_102d5741;
L_102d5750: ;
    COW_AT(102d5750)
    ebx = rd32(sp0 - 0x20u);
    goto L_102d5753;
L_102d57a4: ;
    COW_AT(102d57a4)
    ecx = sp0 - 0x1cu;
L_102d57ac: ;
    COW_AT(102d57ac)
    wr32(sp0 - 0x4e0u, ecx);
    wr32(sp0 - 0x4e4u, loc_14);
    wr32(sp0 - 0x4e8u, ebx);
    g->eax = rd32(ebx);
    g->edx = edx;
    t58 = rd32(ebx);
    g->esp = sp0 - 0x4dcu;
    t59 = cow_thiscall(g, rd32(t58 + 0x3cu), ecx, 3, ebx, loc_14, ecx);
    t60 = g->ecx;
    t61 = g->edx;
    eax = t59;
    ecx = t60;
    edx = t61;
    loc_3c = rd32(sp0 - 0x3cu);
    goto L_102d57b6;
L_102d57a9: ;
    COW_AT(102d57a9)
    ecx = sp0 - 0x18u;
    goto L_102d57ac;
L_102d5833: ;
    COW_AT(102d5833)
    t62 = rd32(sp0 + 0x34u);
    wr32(sp0 - 0x4e0u, t62);
    t63 = rd32(sp0 + 0x2cu);
    wr32(sp0 - 0x4e4u, t63);
    wr32(sp0 - 0x4e8u, esi + 0x18u);
    wr32(sp0 - 0x4ecu, sp0 - 0x4d0u);
    t64 = rd32(esi + 0x34u);
    wr32(sp0 - 0x4f0u, t64);
    t65 = rd32(esi + 0x30u);
    wr32(sp0 - 0x4f4u, t65);
    wr32(sp0 - 0x4f8u, rd32(esi));
    t66 = rd32(esi + 4u);
    wr32(sp0 - 0x4fcu, t66);
    wr32(sp0 - 0x500u, 0u);
    wr32(sp0 - 0x504u, arg15);
    wr32(sp0 - 0x508u, loc_1c);
    g->eax = sp0 - 0x4d0u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x4dcu;
    t67 = cow_stdcall(g, COW_IMG(0x102d2a73u), 11, loc_1c, arg15, 0u, t66, rd32(esi), t65, t64, sp0 - 0x4d0u, esi + 0x18u, t63, t62);
    t68 = g->ecx;
    t69 = g->edx;
    eax = t67;
    ecx = t68;
    edx = t69;
    loc_3c = rd32(sp0 - 0x3cu);
    goto L_102d57f4;
L_102d585e: ;
    COW_AT(102d585e)
    if (rd32(sp0 - 0x34u) != 0u) goto L_102d5923;
    COW_AT(102d5868)
    if (loc_14 >= arg7) goto L_102d5923;
L_102d5874: ;
    COW_AT(102d5874)
    if (rd32(sp0 + 0x40u) == 3u) goto L_102d5899;
    eax = rd32(sp0 + 0x40u) - 3u;
    COW_AT(102d587c)
    if (eax == 1u) goto L_102d5894;
    eax = eax - 1u;
    COW_AT(102d587f)
    if (eax != 1u) goto L_102d58a8;
    COW_AT(102d5882)
    wr32(sp0 - 0x4e0u, sp0 - 0x18u);
    wr32(sp0 - 0x4e4u, loc_14);
    wr32(sp0 - 0x4e8u, loc_30);
    wr32(sp0 - 0x4ecu, ebx);
    g->eax = rd32(ebx);
    g->edx = edx;
    t83 = rd32(ebx);
    g->esp = sp0 - 0x4dcu;
    t84 = cow_thiscall(g, rd32(t83 + 0x3cu), sp0 - 0x18u, 4, ebx, loc_30, loc_14, sp0 - 0x18u);
    t85 = g->ecx;
    t86 = g->edx;
    eax = t84;
    ecx = t85;
    edx = t86;
    loc_3c = rd32(sp0 - 0x3cu);
L_102d58a6: ;
    COW_AT(102d58a6)
    edi = eax;
    loc_30 = rd32(sp0 - 0x30u);
    loc_14 = rd32(sp0 - 0x14u);
    loc_1c = rd32(sp0 - 0x1cu);
    loc_18 = rd32(sp0 - 0x18u);
L_102d58a8: ;
    COW_AT(102d58a8)
    if ((int32_t)edi < 0)
    {
        loc_20 = rd32(sp0 - 0x20u);
        goto L_102d598d;
    }
    COW_AT(102d58b0)
    if (rd32(sp0 + 0x40u) == 3u) goto L_102d58c2;
    eax = rd32(sp0 + 0x40u) - 3u;
    COW_AT(102d58b8)
    if (eax == 1u) goto L_102d59ef;
    eax = eax - 1u;
    COW_AT(102d58bf)
    if (eax != 1u) goto L_102d58ea;
L_102d58c2: ;
    COW_AT(102d58c2)
    t99 = rd32(sp0 + 0x34u);
    wr32(sp0 - 0x4e0u, t99);
    t100 = rd32(sp0 + 0x2cu);
    wr32(sp0 - 0x4e4u, t100);
    wr32(sp0 - 0x4e8u, esi + 0x18u);
    wr32(sp0 - 0x4ecu, sp0 - 0x4d0u);
    t101 = rd32(esi + 0x30u);
    wr32(sp0 - 0x4f0u, t101);
    wr32(sp0 - 0x4f4u, rd32(esi));
    t102 = rd32(esi + 4u);
    wr32(sp0 - 0x4f8u, t102);
    wr32(sp0 - 0x4fcu, 0u);
    wr32(sp0 - 0x500u, arg15);
    wr32(sp0 - 0x504u, loc_18);
    g->eax = sp0 - 0x4d0u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x4dcu;
    t103 = cow_stdcall(g, COW_IMG(0x102d2888u), 10, loc_18, arg15, 0u, t102, rd32(esi), t101, sp0 - 0x4d0u, esi + 0x18u, t100, t99);
    t104 = g->ecx;
    t105 = g->edx;
    eax = t103;
    ecx = t104;
    edx = t105;
    loc_3c = rd32(sp0 - 0x3cu);
L_102d58e8: ;
    COW_AT(102d58e8)
    edi = eax;
    loc_30 = rd32(sp0 - 0x30u);
    loc_14 = rd32(sp0 - 0x14u);
    loc_1c = rd32(sp0 - 0x1cu);
    loc_18 = rd32(sp0 - 0x18u);
L_102d58ea: ;
    COW_AT(102d58ea)
    if ((int32_t)edi < 0)
    {
        loc_20 = rd32(sp0 - 0x20u);
        goto L_102d598d;
    }
    COW_AT(102d58f2)
    if (loc_1c != 0u)
    {
        eax = loc_1c;
    COW_AT(102d58f9)
        wr32(sp0 - 0x4e0u, eax);
        g->edx = edx;
        t106 = rd32(eax);
        g->esp = sp0 - 0x4dcu;
        cow_thiscall(g, rd32(t106 + 8u), t106, 1, eax);
        t107 = g->ecx;
        t108 = g->edx;
        wr32(sp0 - 0x1cu, 0u);
        ecx = t107;
        edx = t108;
        loc_30 = rd32(sp0 - 0x30u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_1c = 0u;
        loc_18 = rd32(sp0 - 0x18u);
    }
    COW_AT(102d5903)
    if (loc_18 != 0u)
    {
        eax = loc_18;
    COW_AT(102d590a)
        wr32(sp0 - 0x4e0u, eax);
        g->edx = edx;
        t109 = rd32(eax);
        g->esp = sp0 - 0x4dcu;
        cow_thiscall(g, rd32(t109 + 8u), t109, 1, eax);
        t110 = g->ecx;
        t111 = g->edx;
        wr32(sp0 - 0x18u, 0u);
        ecx = t110;
        edx = t111;
        loc_30 = rd32(sp0 - 0x30u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = 0u;
    }
    COW_AT(102d5914)
    wr32(sp0 - 0x14u, loc_14 + 1u);
    if (loc_14 + 1u < arg7)
    {
        loc_14 = loc_14 + 1u;
        goto L_102d5874;
    }
    loc_14 = loc_14 + 1u;
L_102d5923: ;
    COW_AT(102d5923)
    wr32(sp0 - 0x30u, loc_30 + 1u);
    t112 = rd32(loc_3c + 0x50u);
    wr32(sp0 - 0x3cu, t112);
    if (loc_30 + 1u < rd32(sp0 - 0x2cu))
    {
        esi = t112;
        loc_30 = loc_30 + 1u;
        loc_3c = t112;
        goto L_102d576a;
    }
L_102d593b: ;
    COW_AT(102d593b)
    if (rd32(sp0 - 0x34u) == 0u) goto L_102d5964;
    COW_AT(102d5941)
    if (rd32(sp0 - 0x28u) >= arg7) goto L_102d5964;
    COW_AT(102d5949)
    t113 = rd32(sp0 + 0x30u);
    wr32(sp0 - 0x4e0u, t113);
    t114 = rd32(sp0 - 0x28u) - 1u;
    wr32(sp0 - 0x4e4u, t114);
    wr32(sp0 - 0x4e8u, sp0 - 0x4d0u);
    wr32(sp0 - 0x4ecu, ebx);
    g->eax = sp0 - 0x4d0u;
    g->esp = sp0 - 0x4dcu;
    t115 = cow_fastcall(g, COW_IMG(0x102d4c17u), ecx, edx, 4, ebx, sp0 - 0x4d0u, t114, t113);
    t116 = g->edx;
    if ((int32_t)t115 < 0)
    {
        edx = t116;
        edi = t115;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_20 = rd32(sp0 - 0x20u);
        goto L_102d598d;
    }
    edx = t116;
    loc_1c = rd32(sp0 - 0x1cu);
    loc_18 = rd32(sp0 - 0x18u);
L_102d5964: ;
    COW_AT(102d5964)
    if (rd32(sp0 - 0x38u) == 0u) goto L_102d597f;
    COW_AT(102d596a)
    t117 = rd32(sp0 - 0x20u);
    wr32(sp0 - 0x4e0u, t117);
    t118 = rd32(sp0 - 0x24u);
    wr32(sp0 - 0x4e4u, t118);
    wr32(sp0 - 0x4e8u, arg1);
    g->eax = arg1;
    g->edx = edx;
    g->esp = sp0 - 0x4dcu;
    t119 = cow_thiscall(g, rd32(rd32(arg1) + 0x74u), rd32(arg1), 3, arg1, t118, t117);
    t120 = g->edx;
    if ((int32_t)t119 < 0)
    {
        edx = t120;
        edi = t119;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_20 = rd32(sp0 - 0x20u);
        goto L_102d598d;
    }
    edx = t120;
    loc_1c = rd32(sp0 - 0x1cu);
    loc_18 = rd32(sp0 - 0x18u);
L_102d597f: ;
    COW_AT(102d597f)
    t121 = rd32(sp0 - 0x20u);
    wr32(sp0 - 0x20u, 0u);
    wr32(arg17, t121);
    edi = 0u;
    loc_20 = 0u;
    goto L_102d598d;
L_102d5894: ;
    COW_AT(102d5894)
    ecx = sp0 - 0x1cu;
L_102d589c: ;
    COW_AT(102d589c)
    wr32(sp0 - 0x4e0u, ecx);
    wr32(sp0 - 0x4e4u, loc_14);
    wr32(sp0 - 0x4e8u, ebx);
    g->eax = rd32(ebx);
    g->edx = edx;
    t87 = rd32(ebx);
    g->esp = sp0 - 0x4dcu;
    t88 = cow_thiscall(g, rd32(t87 + 0x3cu), ecx, 3, ebx, loc_14, ecx);
    t89 = g->ecx;
    t90 = g->edx;
    eax = t88;
    ecx = t89;
    edx = t90;
    loc_3c = rd32(sp0 - 0x3cu);
    goto L_102d58a6;
L_102d5899: ;
    COW_AT(102d5899)
    ecx = sp0 - 0x18u;
    goto L_102d589c;
L_102d59ef: ;
    COW_AT(102d59ef)
    t91 = rd32(sp0 + 0x34u);
    wr32(sp0 - 0x4e0u, t91);
    t92 = rd32(sp0 + 0x2cu);
    wr32(sp0 - 0x4e4u, t92);
    wr32(sp0 - 0x4e8u, esi + 0x18u);
    wr32(sp0 - 0x4ecu, sp0 - 0x4d0u);
    t93 = rd32(esi + 0x34u);
    wr32(sp0 - 0x4f0u, t93);
    t94 = rd32(esi + 0x30u);
    wr32(sp0 - 0x4f4u, t94);
    wr32(sp0 - 0x4f8u, rd32(esi));
    t95 = rd32(esi + 4u);
    wr32(sp0 - 0x4fcu, t95);
    wr32(sp0 - 0x500u, 0u);
    wr32(sp0 - 0x504u, arg15);
    wr32(sp0 - 0x508u, loc_1c);
    g->eax = sp0 - 0x4d0u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x4dcu;
    t96 = cow_stdcall(g, COW_IMG(0x102d2a73u), 11, loc_1c, arg15, 0u, t95, rd32(esi), t94, t93, sp0 - 0x4d0u, esi + 0x18u, t92, t91);
    t97 = g->ecx;
    t98 = g->edx;
    eax = t96;
    ecx = t97;
    edx = t98;
    loc_3c = rd32(sp0 - 0x3cu);
    goto L_102d58e8;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102d53aa(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102d53e4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x4dcu);
        in_esi = rd32(sp0 - 0x4d8u);
        in_ebx = rd32(sp0 - 0x4d4u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x4dcu;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102d53eeu:
    {
        const uint32_t arg14 = rd32(sp0 + 0x38u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 0x4dcu);
        in_esi = rd32(sp0 - 0x4d8u);
        in_ebx = rd32(sp0 - 0x4d4u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x4dcu;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg14;
        g->edi = 0xffffffffu;
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x14u, COW_IMG(0x102d53b4u));
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102d53f3u:
    {
        const uint32_t arg14 = rd32(sp0 + 0x38u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 0x4dcu);
        in_esi = rd32(sp0 - 0x4d8u);
        in_ebx = rd32(sp0 - 0x4d4u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x4dcu;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg14;
        g->edi = 0xffffffffu;
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x14u, COW_IMG(0x102d53b4u));
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102d53f8u:
    {
        const uint32_t arg14 = rd32(sp0 + 0x38u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 0x4dcu);
        in_esi = rd32(sp0 - 0x4d8u);
        in_ebx = rd32(sp0 - 0x4d4u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x4dcu;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg14;
        g->edi = 0xffffffffu;
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x14u, COW_IMG(0x102d53b4u));
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102d53fdu:
    {
        const uint32_t arg14 = rd32(sp0 + 0x38u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 0x4dcu);
        in_esi = rd32(sp0 - 0x4d8u);
        in_ebx = rd32(sp0 - 0x4d4u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x4dcu;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg14;
        g->edi = 0xffffffffu;
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x14u, COW_IMG(0x102d53b4u));
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102d5401u:
    {
        const uint32_t arg14 = rd32(sp0 + 0x38u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 0x4dcu);
        in_esi = rd32(sp0 - 0x4d8u);
        in_ebx = rd32(sp0 - 0x4d4u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x4dcu;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg14;
        g->edi = 0xffffffffu;
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x14u, COW_IMG(0x102d53b4u));
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102d5406u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x4dcu);
        in_esi = rd32(sp0 - 0x4d8u);
        in_ebx = rd32(sp0 - 0x4d4u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x4dcu;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = 0xffffffffu;
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x14u, COW_IMG(0x102d53b4u));
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102d540cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x4dcu);
        in_esi = rd32(sp0 - 0x4d8u);
        in_ebx = rd32(sp0 - 0x4d4u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x4dcu;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = 0xffffffffu;
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x14u, COW_IMG(0x102d53b4u));
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102d5424u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4dcu;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d542bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x4dcu;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x102d5430u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x4dcu;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x102d5436u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x4dcu;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x102d5441u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x4dcu;
        g->ecx = 1u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x102d5447u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x4dcu;
        g->ecx = 1u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x102d544bu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x4dcu;
        g->ecx = 1u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x102d5456u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t loc_28;
        eax = g->eax;
        edx = g->edx;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x4dcu;
        g->ecx = 1u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 5u;
        g->edi = 0xffffffffu;
        wr32(sp0 - 0x2cu, 1u);
        (void)sp0;
        return 1;
    }
    case 0x102d545du:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        edx = g->edx;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x4dcu;
        g->ecx = 1u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 5u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x102d5467u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        edx = g->edx;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x4dcu;
        g->ecx = 1u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 5u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x102d546du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x4dcu;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d5477u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        edx = g->edx;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x4dcu;
        g->ecx = 1u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 5u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x102d547cu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        edx = g->edx;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x4dcu;
        g->ecx = 1u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 5u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x102d5481u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        edx = g->edx;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x4dcu;
        g->ecx = 1u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 5u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x102d5487u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        edx = g->edx;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x4dcu;
        g->ecx = 1u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 5u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x102d548cu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        edx = g->edx;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x4dcu;
        g->ecx = 1u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 5u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x102d5491u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        edx = g->edx;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x4dcu;
        g->ecx = 1u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 5u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x102d5497u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        edx = g->edx;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x4dcu;
        g->ecx = 1u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 5u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x102d549cu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        edx = g->edx;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x4dcu;
        g->ecx = 1u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 5u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x102d54a1u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        edx = g->edx;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x4dcu;
        g->ecx = 1u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 5u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x102d54a7u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        edx = g->edx;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x4dcu;
        g->ecx = 1u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 5u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x102d54acu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        edx = g->edx;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x4dcu;
        g->ecx = 1u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 5u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x102d54b3u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        edx = g->edx;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x4dcu;
        g->ecx = 1u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 5u;
        g->edi = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x102d54b8u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x4dcu;
        g->ecx = 1u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 5u;
        (void)sp0;
        return 1;
    }
    case 0x102d54bbu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x4dcu;
        g->ecx = 1u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 5u;
        (void)sp0;
        return 1;
    }
    case 0x102d54c0u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x4dcu;
        g->ecx = 1u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 5u;
        (void)sp0;
        return 1;
    }
    case 0x102d54cbu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x4dcu;
        g->ecx = 1u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 5u;
        (void)sp0;
        return 1;
    }
    case 0x102d54d1u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x4dcu;
        g->ecx = 1u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 5u;
        (void)sp0;
        return 1;
    }
    case 0x102d54deu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x4dcu;
        g->ecx = 1u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 5u;
        (void)sp0;
        return 1;
    }
    case 0x102d54e5u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_34;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x4dcu;
        g->ecx = 1u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d54e8u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_34;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x4dcu;
        g->ecx = 1u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d54f1u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_34;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x4dcu;
        g->ecx = 1u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d54fcu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_34;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x4dcu;
        g->ecx = 1u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d550au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4dcu;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d550fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4dcu;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d5514u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4dcu;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d5519u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4dcu;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d5552u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4dcu;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x4e0u, sp0 - 0xb4u);
        (void)sp0;
        return 1;
    }
    case 0x102d5558u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x4dcu;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d556au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4dcu;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d556fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4dcu;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d5576u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x4dcu;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d5580u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d55abu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x4dcu;
        g->edx = 0x100u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d55cbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x4dcu;
        g->edx = 0x100u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d55d2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x4dcu;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d55e4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x4dcu;
        g->edx = 0x100u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d55ebu:
    {
        const uint32_t arg15 = rd32(sp0 + 0x3cu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x4dcu;
        g->edx = 0x100u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = arg15;
        (void)sp0;
        return 1;
    }
    case 0x102d55f7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x4dcu;
        g->edx = 0x100u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d55fdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x4dcu;
        g->edx = 0x100u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d5603u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x4dcu;
        g->edx = 0x100u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d560cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x4dcu;
        g->edx = 0x100u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d5616u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x4dcu;
        g->edx = 0x100u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d561bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x4dcu;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d561du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x4dcu;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d5624u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x4dcu;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d5629u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x4dcu;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d5636u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x4dcu;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d5639u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x4dcu;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d566bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x4f8u, sp0 + 0x10u);
        wr32(sp0 - 0x4f4u, sp0 + 0x14u);
        wr32(sp0 - 0x4f0u, sp0 + 0x18u);
        wr32(sp0 - 0x4ecu, sp0 + 0x1cu);
        wr32(sp0 - 0x4e8u, sp0 + 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x102d5679u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x4f8u, sp0 + 0x10u);
        wr32(sp0 - 0x4f4u, sp0 + 0x14u);
        wr32(sp0 - 0x4f0u, sp0 + 0x18u);
        wr32(sp0 - 0x4ecu, sp0 + 0x1cu);
        wr32(sp0 - 0x4e8u, sp0 + 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x102d567cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x4f8u, sp0 + 0x10u);
        wr32(sp0 - 0x4f4u, sp0 + 0x14u);
        wr32(sp0 - 0x4f0u, sp0 + 0x18u);
        wr32(sp0 - 0x4ecu, sp0 + 0x1cu);
        wr32(sp0 - 0x4e8u, sp0 + 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x102d567fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x4f8u, sp0 + 0x10u);
        wr32(sp0 - 0x4f4u, sp0 + 0x14u);
        wr32(sp0 - 0x4f0u, sp0 + 0x18u);
        wr32(sp0 - 0x4ecu, sp0 + 0x1cu);
        wr32(sp0 - 0x4e8u, sp0 + 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x102d5699u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x4f8u, sp0 + 0x10u);
        wr32(sp0 - 0x4f4u, sp0 + 0x14u);
        wr32(sp0 - 0x4f0u, sp0 + 0x18u);
        wr32(sp0 - 0x4ecu, sp0 + 0x1cu);
        wr32(sp0 - 0x4e8u, sp0 + 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x102d56b9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x4f8u, sp0 + 0x10u);
        wr32(sp0 - 0x4f4u, sp0 + 0x14u);
        wr32(sp0 - 0x4f0u, sp0 + 0x18u);
        wr32(sp0 - 0x4ecu, sp0 + 0x1cu);
        wr32(sp0 - 0x4e8u, sp0 + 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x102d56d4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x4e0u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102d56d6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d56deu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d56e4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d56ecu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d56efu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d56f2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d570au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d5728u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d5741u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x4e0u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x102d5743u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d574bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d5750u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d5753u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d576au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d5778u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d5784u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d578cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d578fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d5792u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d57a4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d57a9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d57acu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d57b6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d57b8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d57c0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d57c8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d57cbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d57ceu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d57f4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x4ecu, sp0 - 0x4d0u);
        (void)sp0;
        return 1;
    }
    case 0x102d57f6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d57feu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d5805u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d580fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d5816u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d5820u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d582bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d5833u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d585eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d5868u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d5874u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d587cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d587fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d5882u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d5894u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d5899u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d589cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d58a6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d58a8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d58b0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d58b8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d58bfu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d58c2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d58e8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x4ecu, sp0 - 0x4d0u);
        (void)sp0;
        return 1;
    }
    case 0x102d58eau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d58f2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d58f9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d5903u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d590au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d5914u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d5923u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d593bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d5941u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d5949u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d5964u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d596au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d597fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d598du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d5996u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102d599fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102d59a6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102d59afu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102d59b6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102d59bfu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102d59c6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102d59cfu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_4d4;
        uint32_t loc_4d8;
        uint32_t loc_4dc;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_4dc = rd32(sp0 - 0x4dcu);
        loc_4d8 = rd32(sp0 - 0x4d8u);
        loc_4d4 = rd32(sp0 - 0x4d4u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102d59efu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x4dcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102d53aa(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102d53aa(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
