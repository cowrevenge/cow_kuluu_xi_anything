/* f_0x102a0970 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102a0970(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_280;
    uint32_t loc_288;
    uint32_t loc_28c;
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
    cow_frame(g, sp0, 704u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102a09b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x278u); in_esi = rd32(sp0 - 0x274u); in_ebp = rd32(sp0 - 0x270u); g->ebp = rd32(sp0 - 0x270u); g->edi = rd32(sp0 - 0x278u); g->esi = rd32(sp0 - 0x274u); goto E_102a09b3;
    case 0x102a09d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x278u); in_esi = rd32(sp0 - 0x274u); in_ebp = rd32(sp0 - 0x270u); g->ebp = rd32(sp0 - 0x270u); g->edi = rd32(sp0 - 0x278u); g->esi = rd32(sp0 - 0x274u); goto E_102a09d6;
    case 0x102a09f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102a09f1;
    case 0x102a0a29u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102a0a29;
    case 0x102a0a3au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102a0a3a;
    case 0x102a0a5du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102a0a5d;
    case 0x102a0a71u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102a0a71;
    case 0x102a0a91u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102a0a91;
    case 0x102a0aa2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102a0aa2;
    case 0x102a0ac5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102a0ac5;
    case 0x102a0ad9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102a0ad9;
    case 0x102a0af7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_280 = rd32(sp0 - 0x280u); goto E_102a0af7;
    case 0x102a0b1au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102a0b1a;
    case 0x102a0b2bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102a0b2b;
    case 0x102a0b4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102a0b4e;
    case 0x102a0b5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102a0b5f;
    case 0x102a0b82u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102a0b82;
    case 0x102a0b97u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102a0b97;
    case 0x102a0badu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102a0bad;
    case 0x102a0bb7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102a0bb7;
    case 0x102a0bcdu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102a0bcd;
    case 0x102a0bd7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102a0bd7;
    case 0x102a0bedu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102a0bed;
    case 0x102a0bf7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102a0bf7;
    case 0x102a0c0du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102a0c0d;
    case 0x102a0c17u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102a0c17;
    case 0x102a0c2du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102a0c2d;
    case 0x102a0c37u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102a0c37;
    case 0x102a0c4du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102a0c4d;
    case 0x102a0c57u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102a0c57;
    case 0x102a0c6du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102a0c6d;
    case 0x102a0c8du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102a0c8d;
    case 0x102a0ca3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102a0ca3;
    case 0x102a0cc3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102a0cc3;
    case 0x102a0cddu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102a0cdd;
    case 0x102a0cfbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_28c = rd32(sp0 - 0x28cu); loc_288 = rd32(sp0 - 0x288u); loc_280 = rd32(sp0 - 0x280u); goto E_102a0cfb;
    case 0x102a0d08u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102a0d08;
    case 0x102a0d1du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102a0d1d;
    case 0x102a0d7au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102a0d7a;
    case 0x102a0d91u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102a0d91;
    case 0x102a0dcfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102a0dcf;
    case 0x102a0de7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102a0de7;
    case 0x102a0df2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102a0df2;
    case 0x102a0df6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102a0df6;
    case 0x102a0e19u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102a0e19;
    case 0x102a0e1du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102a0e1d;
    case 0x102a0e23u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102a0e23;
    case 0x102a0e26u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102a0e26;
    case 0x102a0e2au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102a0e2a;
    case 0x102a0e2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102a0e2e;
    case 0x102a0e31u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102a0e31;
    case 0x102a0eb3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_28c = rd32(sp0 - 0x28cu); loc_280 = rd32(sp0 - 0x280u); goto E_102a0eb3;
    case 0x102a0ec1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_28c = rd32(sp0 - 0x28cu); loc_280 = rd32(sp0 - 0x280u); goto E_102a0ec1;
    case 0x102a0ec9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_28c = rd32(sp0 - 0x28cu); loc_280 = rd32(sp0 - 0x280u); goto E_102a0ec9;
    case 0x102a0ed7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_28c = rd32(sp0 - 0x28cu); loc_280 = rd32(sp0 - 0x280u); goto E_102a0ed7;
    case 0x102a0edfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_28c = rd32(sp0 - 0x28cu); loc_280 = rd32(sp0 - 0x280u); goto E_102a0edf;
    case 0x102a0eedu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_28c = rd32(sp0 - 0x28cu); loc_280 = rd32(sp0 - 0x280u); goto E_102a0eed;
    case 0x102a0ef5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_28c = rd32(sp0 - 0x28cu); loc_280 = rd32(sp0 - 0x280u); goto E_102a0ef5;
    case 0x102a0f03u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_28c = rd32(sp0 - 0x28cu); loc_280 = rd32(sp0 - 0x280u); goto E_102a0f03;
    case 0x102a0f0bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_28c = rd32(sp0 - 0x28cu); loc_280 = rd32(sp0 - 0x280u); goto E_102a0f0b;
    case 0x102a0f19u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_28c = rd32(sp0 - 0x28cu); loc_280 = rd32(sp0 - 0x280u); goto E_102a0f19;
    case 0x102a0f21u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_28c = rd32(sp0 - 0x28cu); loc_280 = rd32(sp0 - 0x280u); goto E_102a0f21;
    case 0x102a0f2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_28c = rd32(sp0 - 0x28cu); loc_280 = rd32(sp0 - 0x280u); goto E_102a0f2f;
    case 0x102a0f54u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102a0f54;
    case 0x102a0f74u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102a0f74;
    case 0x102a0f92u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_28c = rd32(sp0 - 0x28cu); loc_288 = rd32(sp0 - 0x288u); loc_280 = rd32(sp0 - 0x280u); goto E_102a0f92;
    default: break;
    }
#endif

    COW_AT(102a0970)
    wr32(sp0 - 0x26cu, in_ebx);
    wr32(sp0 - 0x270u, in_ebp);
    wr32(sp0 - 0x274u, in_esi);
    wr32(sp0 - 0x278u, in_edi);
    wr32(sp0 - 0x27cu, sp0 - 0x240u);
    wr8(sp0 - 0x261u, 0u);
    wr8(sp0 - 0x263u, 0u);
    wr8(sp0 - 0x265u, 0u);
    wr8(sp0 - 0x264u, 0u);
    wr8(sp0 - 0x266u, 0u);
    wr8(sp0 - 0x262u, 0u);
    g->eax = sp0 - 0x240u;
    g->edx = in_edx;
    g->esp = sp0 - 0x278u;
    t1 = cow_cdecl(g, COW_IMG(0x1027eb10u), 1, sp0 - 0x240u);
    t2 = g->edx;
    wr32(sp0 - 0x280u, sp0 - 0x250u);
    g->esp = sp0 - 0x27cu;
    t3 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, sp0 - 0x250u, t2, 1, 1, sp0 - 0x250u);
    t4 = g->ecx;
    t5 = g->edx;
    if ((uint8_t)t3 != 0u)
    {
        eax = t3;
        ecx = t4;
        goto L_102a09d6;
    }
    eax = t3;
    ecx = t4;
    edx = t5;
    COW_AT(102a09b3)
    wr32(sp0 - 0x27cu, 0x3f8u);
    wr32(sp0 - 0x280u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x284u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x27cu;
    t6 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 - 0x288u, COW_IMG(0x103bd170u));
    wr32(sp0 - 0x28cu, COW_IMG(0x103bcb40u));
    eax = t6;
    ecx = t7;
    edx = t8;
    ebx = in_ebx;
    loc_288 = COW_IMG(0x103bd170u);
    loc_28c = COW_IMG(0x103bcb40u);
L_102a0f92: ;
    COW_AT(102a0f92)
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x284u;
    t194 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, loc_28c, loc_288);
    t195 = g->edx;
    g->ebx = rd32(sp0 - 0x26cu);
    g->esi = rd32(sp0 - 0x274u);
    g->edi = rd32(sp0 - 0x278u);
    g->ebp = rd32(sp0 - 0x270u);
    g->edx = t195;
    return t194 & 0xffffff00u;
L_102a09d6: ;
    COW_AT(102a09d6)
    wr32(sp0 - 0x27cu, 3u);
    t9 = rd32(sp0 - 0x250u);
    wr32(sp0 - 0x280u, t9);
    wr32(sp0 - 0x284u, arg1);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t9;
    g->esp = sp0 - 0x260u;
    t10 = cow_cdecl(g, COW_IMG(0x10279a80u), 9, arg1, t9, 3u, in_edi, in_esi, in_ebp, in_ebx, rd32(sp0 - 0x268u), rd32(sp0 - 0x264u));
    t11 = g->ecx;
    t12 = g->edx;
    if ((uint8_t)t10 == 0u)
    {
        eax = t10;
        edx = t12;
        goto L_102a0a29;
    }
    eax = t10;
    ecx = t11;
    edx = t12;
    COW_AT(102a09f1)
    wr32(sp0 - 0x27cu, 0x3f8u);
    wr32(sp0 - 0x280u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x284u, COW_IMG(0x103b379cu));
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x27cu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t13 = g->ecx;
    t14 = g->edx;
    t15 = rd32(sp0 - 0x250u);
    wr32(sp0 - 0x288u, t15);
    wr32(sp0 - 0x28cu, COW_IMG(0x103bd170u));
    wr32(sp0 - 0x290u, COW_IMG(0x103bcb24u));
    g->eax = t15;
    g->edx = t14;
    g->esp = sp0 - 0x288u;
    t16 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcb24u), COW_IMG(0x103bd170u));
    t17 = g->edx;
    g->ebx = rd32(sp0 - 0x26cu);
    g->esi = rd32(sp0 - 0x274u);
    g->edi = rd32(sp0 - 0x278u);
    g->ebp = rd32(sp0 - 0x270u);
    g->edx = t17;
    return t16 & 0xffffff00u;
L_102a0a29: ;
    COW_AT(102a0a29)
    wr32(sp0 - 0x27cu, sp0 - 0x25cu);
    g->eax = eax;
    g->esp = sp0 - 0x278u;
    t18 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, sp0 - 0x25cu, edx, 1, 1, sp0 - 0x25cu);
    t19 = g->ecx;
    t20 = g->edx;
    if ((uint8_t)t18 != 0u)
    {
        eax = t18;
        ecx = t19;
        goto L_102a0a5d;
    }
    eax = t18;
    ecx = t19;
    edx = t20;
    COW_AT(102a0a3a)
    wr32(sp0 - 0x27cu, 0x3f9u);
    wr32(sp0 - 0x280u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x284u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x27cu;
    t21 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t22 = g->ecx;
    t23 = g->edx;
    wr32(sp0 - 0x288u, COW_IMG(0x103bd160u));
    wr32(sp0 - 0x28cu, COW_IMG(0x103bcb40u));
    eax = t21;
    ecx = t22;
    edx = t23;
    ebx = in_ebx;
    loc_288 = COW_IMG(0x103bd160u);
    loc_28c = COW_IMG(0x103bcb40u);
    goto L_102a0f92;
L_102a0a5d: ;
    COW_AT(102a0a5d)
    wr32(sp0 - 0x27cu, 1u);
    t24 = rd32(sp0 - 0x25cu);
    wr32(sp0 - 0x280u, t24);
    wr32(sp0 - 0x284u, arg1);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t24;
    g->esp = sp0 - 0x260u;
    t25 = cow_cdecl(g, COW_IMG(0x10279a80u), 9, arg1, t24, 1u, rd32(sp0 - 0x278u), rd32(sp0 - 0x274u), rd32(sp0 - 0x270u), rd32(sp0 - 0x26cu), rd32(sp0 - 0x268u), rd32(sp0 - 0x264u));
    t26 = g->ecx;
    t27 = g->edx;
    if ((uint8_t)t25 != 0u)
    {
        eax = t25;
        edx = t27;
        goto L_102a0a91;
    }
    eax = t25;
    ecx = t26;
    edx = t27;
    COW_AT(102a0a71)
    wr32(sp0 - 0x27cu, 0x3f9u);
    wr32(sp0 - 0x280u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x284u, COW_IMG(0x103b379cu));
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x27cu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t28 = g->ecx;
    t29 = g->edx;
    t30 = rd32(sp0 - 0x25cu);
    wr32(sp0 - 0x27cu, t30);
    wr32(sp0 - 0x280u, 1u);
    eax = t30;
    ecx = t28;
    edx = t29;
    loc_280 = 1u;
L_102a0af7: ;
    COW_AT(102a0af7)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x27cu;
    t44 = cow_cdecl(g, COW_IMG(0x1027a1e0u), 1, loc_280);
    t45 = g->ecx;
    t46 = g->edx;
    wr32(sp0 - 0x280u, t44);
    wr32(sp0 - 0x284u, COW_IMG(0x103bcbe8u));
    g->edx = t46;
    t47 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcbe8u), t44);
    t48 = g->edx;
    g->ebx = rd32(sp0 - 0x26cu);
    g->esi = rd32(sp0 - 0x274u);
    g->edi = rd32(sp0 - 0x278u);
    g->ebp = rd32(sp0 - 0x270u);
    g->edx = t48;
    return t47 & 0xffffff00u;
L_102a0a91: ;
    COW_AT(102a0a91)
    wr32(sp0 - 0x27cu, sp0 - 0x24cu);
    g->eax = eax;
    g->esp = sp0 - 0x278u;
    t31 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, sp0 - 0x24cu, edx, 1, 1, sp0 - 0x24cu);
    t32 = g->ecx;
    t33 = g->edx;
    if ((uint8_t)t31 != 0u)
    {
        eax = t31;
        ecx = t32;
        goto L_102a0ac5;
    }
    eax = t31;
    ecx = t32;
    edx = t33;
    COW_AT(102a0aa2)
    wr32(sp0 - 0x27cu, 0x3fau);
    wr32(sp0 - 0x280u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x284u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x27cu;
    t34 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t35 = g->ecx;
    t36 = g->edx;
    wr32(sp0 - 0x288u, COW_IMG(0x103bd14cu));
    wr32(sp0 - 0x28cu, COW_IMG(0x103bcb40u));
    eax = t34;
    ecx = t35;
    edx = t36;
    ebx = in_ebx;
    loc_288 = COW_IMG(0x103bd14cu);
    loc_28c = COW_IMG(0x103bcb40u);
    goto L_102a0f92;
L_102a0ac5: ;
    COW_AT(102a0ac5)
    wr32(sp0 - 0x27cu, 2u);
    t37 = rd32(sp0 - 0x24cu);
    wr32(sp0 - 0x280u, t37);
    wr32(sp0 - 0x284u, arg1);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t37;
    g->esp = sp0 - 0x260u;
    t38 = cow_cdecl(g, COW_IMG(0x10279a80u), 9, arg1, t37, 2u, rd32(sp0 - 0x278u), rd32(sp0 - 0x274u), rd32(sp0 - 0x270u), rd32(sp0 - 0x26cu), rd32(sp0 - 0x268u), rd32(sp0 - 0x264u));
    t39 = g->ecx;
    t40 = g->edx;
    if ((uint8_t)t38 != 0u)
    {
        eax = t38;
        edx = t40;
        goto L_102a0b1a;
    }
    eax = t38;
    ecx = t39;
    edx = t40;
    COW_AT(102a0ad9)
    wr32(sp0 - 0x27cu, 0x3fau);
    wr32(sp0 - 0x280u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x284u, COW_IMG(0x103b379cu));
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x27cu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t41 = g->ecx;
    t42 = g->edx;
    t43 = rd32(sp0 - 0x24cu);
    wr32(sp0 - 0x27cu, t43);
    wr32(sp0 - 0x280u, 2u);
    eax = t43;
    ecx = t41;
    edx = t42;
    loc_280 = 2u;
    goto L_102a0af7;
L_102a0b1a: ;
    COW_AT(102a0b1a)
    wr32(sp0 - 0x27cu, sp0 - 0x258u);
    g->eax = eax;
    g->esp = sp0 - 0x278u;
    t49 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, sp0 - 0x258u, edx, 1, 1, sp0 - 0x258u);
    t50 = g->ecx;
    t51 = g->edx;
    if ((uint8_t)t49 != 0u)
    {
        eax = t49;
        ecx = t50;
        goto L_102a0b4e;
    }
    eax = t49;
    ecx = t50;
    edx = t51;
    COW_AT(102a0b2b)
    wr32(sp0 - 0x27cu, 0x3fbu);
    wr32(sp0 - 0x280u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x284u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x27cu;
    t52 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t53 = g->ecx;
    t54 = g->edx;
    wr32(sp0 - 0x288u, COW_IMG(0x103bd0f0u));
    wr32(sp0 - 0x28cu, COW_IMG(0x103bc94cu));
    eax = t52;
    ecx = t53;
    edx = t54;
    ebx = in_ebx;
    loc_288 = COW_IMG(0x103bd0f0u);
    loc_28c = COW_IMG(0x103bc94cu);
    goto L_102a0f92;
L_102a0b4e: ;
    COW_AT(102a0b4e)
    wr32(sp0 - 0x27cu, sp0 - 0x254u);
    g->eax = eax;
    g->esp = sp0 - 0x278u;
    t55 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, ecx, sp0 - 0x254u, 1, 1, sp0 - 0x254u);
    t56 = g->ecx;
    t57 = g->edx;
    if ((uint8_t)t55 != 0u)
    {
        ecx = t56;
        edx = t57;
        goto L_102a0b82;
    }
    eax = t55;
    ecx = t56;
    edx = t57;
    COW_AT(102a0b5f)
    wr32(sp0 - 0x27cu, 0x3fcu);
    wr32(sp0 - 0x280u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x284u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x27cu;
    t58 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t59 = g->ecx;
    t60 = g->edx;
    wr32(sp0 - 0x288u, COW_IMG(0x103bd140u));
    wr32(sp0 - 0x28cu, COW_IMG(0x103bc94cu));
    eax = t58;
    ecx = t59;
    edx = t60;
    ebx = in_ebx;
    loc_288 = COW_IMG(0x103bd140u);
    loc_28c = COW_IMG(0x103bc94cu);
    goto L_102a0f92;
L_102a0b82: ;
    COW_AT(102a0b82)
    wr32(sp0 - 0x27cu, sp0 - 0x260u);
    g->eax = sp0 - 0x260u;
    g->esp = sp0 - 0x278u;
    t61 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, ecx, edx, 1, 1, sp0 - 0x260u);
    t62 = g->edx;
    if ((uint8_t)t61 == 0u)
    {
        edx = t62;
        goto L_102a0d1d;
    }
    eax = t61;
    edx = t62;
L_102a0b97: ;
    COW_AT(102a0b97)
    wr32(sp0 - 0x27cu, COW_IMG(0x103bcfbcu));
    t63 = rd32(sp0 - 0x260u);
    wr32(sp0 - 0x280u, t63);
    g->eax = eax;
    g->esp = sp0 - 0x264u;
    t64 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, t63, edx, 1, 7, t63, COW_IMG(0x103bcfbcu), rd32(sp0 - 0x278u), rd32(sp0 - 0x274u), rd32(sp0 - 0x270u), rd32(sp0 - 0x26cu), rd32(sp0 - 0x268u));
    t65 = g->ecx;
    t66 = g->edx;
    if (t64 != 0u)
    {
        eax = t64;
        ecx = t65;
        goto L_102a0bb7;
    }
    eax = t64;
    edx = t66;
    COW_AT(102a0bad)
    wr8(sp0 - 0x261u, 0xffu);
L_102a0d08: ;
    COW_AT(102a0d08)
    wr32(sp0 - 0x27cu, sp0 - 0x260u);
    g->eax = eax;
    g->esp = sp0 - 0x278u;
    t108 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, sp0 - 0x260u, edx, 1, 1, sp0 - 0x260u);
    t109 = g->edx;
    if ((uint8_t)t108 != 0u)
    {
        eax = t108;
        edx = t109;
        goto L_102a0b97;
    }
    edx = t109;
L_102a0d1d: ;
    COW_AT(102a0d1d)
    wr32(sp0 - 0x27cu, sp0 - 0x248u);
    t113 = rd32(sp0 - 0x25cu);
    wr32(sp0 - 0x280u, t113);
    wr32(sp0 - 0x284u, arg1);
    g->ecx = t113;
    g->esp = sp0 - 0x278u;
    cow_cdecl(g, COW_IMG(0x10279d50u), 3, arg1, t113, sp0 - 0x248u);
    t114 = g->ecx;
    wr32(sp0 - 0x288u, sp0 - 0x244u);
    t115 = rd32(sp0 - 0x24cu);
    wr32(sp0 - 0x28cu, t115);
    wr32(sp0 - 0x290u, arg1);
    g->eax = t115;
    g->ecx = t114;
    g->edx = sp0 - 0x244u;
    g->esp = sp0 - 0x284u;
    t116 = cow_cdecl(g, COW_IMG(0x10279d70u), 3, arg1, t115, sp0 - 0x244u);
    t117 = g->ecx;
    t118 = g->edx;
    wr32(sp0 - 0x294u, 0u);
    wr32(sp0 - 0x298u, 0u);
    wr32(sp0 - 0x29cu, 0u);
    g->edx = t118;
    g->esp = sp0 - 0x290u;
    t119 = cow_thiscall_cdecl(g, COW_IMG(0x1027a310u), t117, 3, 0u, 0u, 0u);
    t120 = g->edx;
    t121 = rd32(sp0 - 0x258u);
    wr32(sp0 - 0x27cu, t121);
    g->ecx = t121;
    g->esp = sp0 - 0x27cu;
    t122 = cow_stdcall(g, COW_IMG(0x102afdf0u), 0);
    t123 = g->ecx;
    wr32(sp0 - 0x280u, t122);
    wr32(sp0 - 0x284u, sp0 - 0x200u);
    g->edx = sp0 - 0x200u;
    g->esp = sp0 - 0x278u;
    cow_thiscall_cdecl(g, COW_IMG(0x1027a310u), t123, 3, sp0 - 0x200u, t122, rd32(sp0 - 0x27cu));
    t124 = g->ecx;
    t125 = g->edx;
    wr32(sp0 - 0x288u, sp0 - 0x200u);
    g->edi = t116;
    g->eax = sp0 - 0x200u;
    g->edx = t125;
    g->esp = sp0 - 0x284u;
    t126 = cow_thiscall_cdecl(g, COW_IMG(0x1028a280u), t124, 1, sp0 - 0x200u);
    t127 = g->ecx;
    t128 = g->edx;
    if ((uint8_t)t126 == 0u)
    {
        eax = t126;
        ecx = t127;
        edx = t128;
        ebx = in_ebx;
        goto L_102a0f74;
    }
    eax = t126;
    edx = t128;
    edi = t116;
    COW_AT(102a0d7a)
    wr32(sp0 - 0x27cu, sp0 - 0x200u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x270u;
    t129 = cow_thiscall_cdecl(g, COW_IMG(0x102b0630u), sp0 - 0x200u, 3, sp0 - 0x200u, rd32(sp0 - 0x278u), rd32(sp0 - 0x274u));
    t130 = g->ecx;
    t131 = g->edx;
    if (t129 == 0u)
    {
        eax = t129;
        ecx = t130;
        edx = t131;
        ebx = t129;
        goto L_102a0f74;
    }
    eax = t129;
    ecx = t130;
    edx = t131;
    ebx = t129;
    COW_AT(102a0d91)
    wr32(sp0 - 0x27cu, 0u);
    wr32(sp0 - 0x280u, 0u);
    wr32(sp0 - 0x284u, 0u);
    g->eax = eax;
    g->esp = sp0 - 0x278u;
    t132 = cow_thiscall_cdecl(g, COW_IMG(0x1027a310u), ecx, 3, 0u, 0u, 0u);
    t133 = g->ecx;
    t134 = rd32(sp0 - 0x254u);
    wr32(sp0 - 0x27cu, t134);
    g->ecx = t133;
    g->edx = t134;
    g->esp = sp0 - 0x27cu;
    t135 = cow_stdcall(g, COW_IMG(0x102afdf0u), 0);
    t136 = g->ecx;
    t137 = g->edx;
    wr32(sp0 - 0x280u, t135);
    wr32(sp0 - 0x284u, sp0 - 0x200u);
    g->eax = sp0 - 0x200u;
    g->edx = t137;
    g->esp = sp0 - 0x278u;
    t138 = cow_thiscall_cdecl(g, COW_IMG(0x1027a310u), t136, 3, sp0 - 0x200u, t135, rd32(sp0 - 0x27cu));
    t139 = g->edx;
    wr32(sp0 - 0x288u, sp0 - 0x200u);
    g->edi = edi;
    g->edx = t139;
    g->esp = sp0 - 0x284u;
    t140 = cow_thiscall_cdecl(g, COW_IMG(0x1028a280u), sp0 - 0x200u, 1, sp0 - 0x200u);
    t141 = g->ecx;
    t142 = g->edx;
    if ((uint8_t)t140 == 0u)
    {
        eax = t140;
        ecx = t141;
        edx = t142;
        goto L_102a0f54;
    }
    eax = t140;
    ecx = t141;
    COW_AT(102a0dcf)
    wr32(sp0 - 0x27cu, sp0 - 0x200u);
    wr32(sp0 - 0x280u, edi);
    g->eax = eax;
    g->edx = sp0 - 0x200u;
    g->esp = sp0 - 0x278u;
    t143 = cow_thiscall_cdecl(g, COW_IMG(0x102b0c90u), ecx, 2, edi, sp0 - 0x200u);
    t144 = g->ecx;
    t145 = g->edx;
    if (t143 == 0u)
    {
        eax = t143;
        ecx = t144;
        edx = t145;
        goto L_102a0f54;
    }
    eax = t143;
    ebp = t143;
    COW_AT(102a0de7)
    if (rd8(sp0 - 0x266u) == 0u)
    {
        edi = rd32(ebx + 0x34u);
        goto L_102a0e19;
    }
    edi = rd32(ebx + 0x34u);
    COW_AT(102a0df2)
    ecx = 0u;
L_102a0e26: ;
    COW_AT(102a0e26)
    if (edi != 0u)
    {
    COW_AT(102a0e2e)
        eax = rd32(edi + 0x54u);
    }
    else
    {
    COW_AT(102a0e2a)
        eax = 0u;
    }
L_102a0e31: ;
    COW_AT(102a0e31)
    wr32(sp0 - 0x27cu, 0xffffffe0u);
    wr32(sp0 - 0x280u, sp0 - 0x240u);
    wr32(sp0 - 0x284u, ecx);
    wr32(sp0 - 0x288u, eax);
    t146 = rd32(edi + 0x14u);
    wr32(sp0 - 0x28cu, t146);
    wr32(sp0 - 0x290u, ebp);
    g->eax = t146;
    g->ecx = ecx;
    g->edx = sp0 - 0x240u;
    g->esp = sp0 - 0x278u;
    t147 = cow_cdecl(g, COW_IMG(0x1029a180u), 6, ebp, t146, eax, ecx, sp0 - 0x240u, 0xffffffe0u);
    t148 = g->ecx;
    t149 = g->edx;
    wr32(sp0 - 0x294u, ebp);
    g->ecx = t148;
    g->esp = sp0 - 0x290u;
    t150 = cow_call_regs(g, COW_IMG(0x1029a710u), g->eax, g->ecx, t149, 1, 1, ebp);
    t151 = g->ecx;
    t152 = g->edx;
    wr32(sp0 - 0x298u, edi);
    wr32(sp0 - 0x29cu, ebp);
    g->edx = t152;
    g->esp = sp0 - 0x294u;
    t153 = cow_cdecl(g, COW_IMG(0x1029a250u), 2, ebp, edi);
    t154 = g->edx;
    t155 = rd32(arg1 + 0x58u);
    wr32(sp0 - 0x2a0u, t155);
    wr32(sp0 - 0x2a4u, 3u);
    t156 = rd32(sp0 - 0x250u);
    wr32(sp0 - 0x2a8u, t156);
    wr32(sp0 - 0x2acu, arg1);
    g->esp = sp0 - 0x29cu;
    t157 = cow_thiscall_cdecl(g, COW_IMG(0x102799e0u), t156, 4, arg1, t156, 3u, t155);
    t158 = g->ecx;
    wr32(sp0 - 0x2b0u, t155);
    wr32(sp0 - 0x2b4u, 3u);
    t159 = rd32(sp0 - 0x258u);
    wr32(sp0 - 0x2b8u, t159);
    wr32(sp0 - 0x2bcu, arg1);
    g->edx = t159;
    g->esp = sp0 - 0x2acu;
    cow_thiscall_cdecl(g, COW_IMG(0x10279910u), t158, 4, arg1, t159, 3u, t155);
    t160 = g->edx;
    t161 = rd32(arg1 + 0x44u);
    wr32(sp0 - 0x27cu, t161);
    wr32(sp0 - 0x280u, 2u);
    t162 = rd32(sp0 - 0x254u);
    wr32(sp0 - 0x284u, t162);
    wr32(sp0 - 0x288u, arg1);
    g->esp = sp0 - 0x278u;
    cow_thiscall_cdecl(g, COW_IMG(0x10279910u), t162, 4, arg1, t162, 2u, t161);
    t163 = g->ecx;
    wr32(sp0 - 0x28cu, 0xffu);
    t164 = rd32(sp0 - 0x248u);
    wr32(sp0 - 0x290u, t164);
    wr32(sp0 - 0x294u, sp0 - 0x240u);
    wr32(sp0 - 0x298u, ebx);
    wr32(sp0 - 0x29cu, arg1);
    g->edx = t164;
    g->esp = sp0 - 0x288u;
    cow_thiscall_cdecl(g, COW_IMG(0x102795c0u), t163, 5, arg1, ebx, sp0 - 0x240u, t164, 0xffu);
    t165 = g->edx;
    t166 = (rd32(t155 * 4u + rd32(arg1 + 0x54u)) & 0xffff00ffu) | (uint32_t)(uint8_t)(rd32(t155 * 4u + rd32(arg1 + 0x54u)) >> 8u | 4u) << 8u;
    t167 = rd32(arg1 + 0x54u);
    wr32(t155 * 4u + t167, t166);
    if (rd8(sp0 - 0x261u) == 0u)
    {
        eax = (t155 * 4u + t167 & 0xffffff00u) | rd8(sp0 - 0x261u);
        ecx = t166;
        edx = t165;
        edi = t155;
    }
    else
    {
        edi = t155;
    COW_AT(102a0eb3)
        t168 = rd32(edi * 4u + rd32(arg1 + 0x54u)) | 0x40u;
        t169 = rd32(arg1 + 0x54u);
        wr32(edi * 4u + t169, t168);
        eax = edi * 4u + t169;
        ecx = t168;
        edx = t169;
    }
    COW_AT(102a0ec1)
    if (rd8(sp0 - 0x263u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x263u);
    }
    else
    {
    COW_AT(102a0ec9)
        t170 = (rd32(edi * 4u + rd32(arg1 + 0x54u)) & 0xffffff00u) | (uint8_t)(rd32(edi * 4u + rd32(arg1 + 0x54u)) | 0x80u);
        t171 = rd32(arg1 + 0x54u);
        wr32(edi * 4u + t171, t170);
        eax = edi * 4u + t171;
        ecx = t170;
    }
    COW_AT(102a0ed7)
    if (rd8(sp0 - 0x265u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x265u);
    }
    else
    {
    COW_AT(102a0edf)
        t172 = (rd32(edi * 4u + rd32(arg1 + 0x54u)) & 0xffff00ffu) | (uint32_t)(uint8_t)(rd32(edi * 4u + rd32(arg1 + 0x54u)) >> 8u | 8u) << 8u;
        t173 = rd32(arg1 + 0x54u);
        wr32(edi * 4u + t173, t172);
        eax = edi * 4u + t173;
        ecx = t172;
    }
    COW_AT(102a0eed)
    if (rd8(sp0 - 0x264u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x264u);
    }
    else
    {
    COW_AT(102a0ef5)
        t174 = (rd32(edi * 4u + rd32(arg1 + 0x54u)) & 0xffff00ffu) | (uint32_t)(uint8_t)(rd32(edi * 4u + rd32(arg1 + 0x54u)) >> 8u | 0x20u) << 8u;
        t175 = rd32(arg1 + 0x54u);
        wr32(edi * 4u + t175, t174);
        eax = edi * 4u + t175;
        ecx = t174;
        edx = t175;
    }
    COW_AT(102a0f03)
    if (rd8(sp0 - 0x266u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x266u);
    }
    else
    {
    COW_AT(102a0f0b)
        t176 = (rd32(edi * 4u + rd32(arg1 + 0x54u)) & 0xffff00ffu) | (uint32_t)(uint8_t)(rd32(edi * 4u + rd32(arg1 + 0x54u)) >> 8u | 0x10u) << 8u;
        t177 = rd32(arg1 + 0x54u);
        wr32(edi * 4u + t177, t176);
        eax = edi * 4u + t177;
        ecx = t176;
    }
    COW_AT(102a0f19)
    if (rd8(sp0 - 0x262u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x262u);
    }
    else
    {
    COW_AT(102a0f21)
        t178 = rd32(edi * 4u + rd32(arg1 + 0x54u)) | 0x10u;
        t179 = rd32(arg1 + 0x54u);
        wr32(edi * 4u + t179, t178);
        eax = edi * 4u + t179;
        ecx = t178;
    }
    COW_AT(102a0f2f)
    wr32(sp0 - 0x27cu, ebp);
    wr32(sp0 - 0x280u, arg1);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x26cu;
    t180 = cow_thiscall_cdecl(g, COW_IMG(0x10279550u), ecx, 5, arg1, ebp, rd32(sp0 - 0x278u), rd32(sp0 - 0x274u), rd32(sp0 - 0x270u));
    t181 = g->ecx;
    t182 = g->edx;
    wr32(sp0 - 0x284u, ebx);
    wr32(sp0 - 0x288u, arg1);
    g->edx = t182;
    g->esp = sp0 - 0x27cu;
    t183 = cow_thiscall_cdecl(g, COW_IMG(0x1027a240u), t181, 3, arg1, ebx, arg1);
    t184 = g->ecx;
    t185 = g->edx;
    wr32(sp0 - 0x28cu, ebp);
    wr32(sp0 - 0x290u, arg1);
    g->edx = t185;
    g->esp = sp0 - 0x284u;
    t186 = cow_thiscall_cdecl(g, COW_IMG(0x1027a240u), t184, 3, arg1, ebp, arg1);
    t187 = g->edx;
    g->ebx = rd32(sp0 - 0x26cu);
    g->esi = rd32(sp0 - 0x274u);
    g->edi = rd32(sp0 - 0x278u);
    g->ebp = rd32(sp0 - 0x270u);
    g->edx = t187;
    return (t186 & 0xffffff00u) | (uint8_t)(t186 | 0xffu);
L_102a0bb7: ;
    COW_AT(102a0bb7)
    wr32(sp0 - 0x27cu, COW_IMG(0x103bcfb0u));
    t67 = rd32(sp0 - 0x260u);
    wr32(sp0 - 0x280u, t67);
    g->eax = eax;
    g->esp = sp0 - 0x264u;
    t68 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, t67, 1, 7, t67, COW_IMG(0x103bcfb0u), rd32(sp0 - 0x278u), rd32(sp0 - 0x274u), rd32(sp0 - 0x270u), rd32(sp0 - 0x26cu), rd32(sp0 - 0x268u));
    t69 = g->ecx;
    t70 = g->edx;
    if (t68 != 0u)
    {
        ecx = t69;
        edx = t70;
        goto L_102a0bd7;
    }
    eax = t68;
    edx = t70;
    COW_AT(102a0bcd)
    wr8(sp0 - 0x263u, 0xffu);
    goto L_102a0d08;
L_102a0bd7: ;
    COW_AT(102a0bd7)
    wr32(sp0 - 0x27cu, COW_IMG(0x103bcfa8u));
    t71 = rd32(sp0 - 0x260u);
    wr32(sp0 - 0x280u, t71);
    g->eax = t71;
    g->esp = sp0 - 0x264u;
    t72 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, edx, 1, 7, t71, COW_IMG(0x103bcfa8u), rd32(sp0 - 0x278u), rd32(sp0 - 0x274u), rd32(sp0 - 0x270u), rd32(sp0 - 0x26cu), rd32(sp0 - 0x268u));
    t73 = g->edx;
    if (t72 != 0u)
    {
        eax = t72;
        edx = t73;
        goto L_102a0bf7;
    }
    eax = t72;
    edx = t73;
    COW_AT(102a0bed)
    wr8(sp0 - 0x265u, 0xffu);
    goto L_102a0d08;
L_102a0bf7: ;
    COW_AT(102a0bf7)
    wr32(sp0 - 0x27cu, COW_IMG(0x103bcfa0u));
    t74 = rd32(sp0 - 0x260u);
    wr32(sp0 - 0x280u, t74);
    g->eax = eax;
    g->esp = sp0 - 0x264u;
    t75 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, t74, edx, 1, 7, t74, COW_IMG(0x103bcfa0u), rd32(sp0 - 0x278u), rd32(sp0 - 0x274u), rd32(sp0 - 0x270u), rd32(sp0 - 0x26cu), rd32(sp0 - 0x268u));
    t76 = g->ecx;
    t77 = g->edx;
    if (t75 != 0u)
    {
        eax = t75;
        ecx = t76;
        goto L_102a0c17;
    }
    eax = t75;
    edx = t77;
    COW_AT(102a0c0d)
    wr8(sp0 - 0x264u, 0xffu);
    goto L_102a0d08;
L_102a0c17: ;
    COW_AT(102a0c17)
    wr32(sp0 - 0x27cu, COW_IMG(0x103bcf94u));
    t78 = rd32(sp0 - 0x260u);
    wr32(sp0 - 0x280u, t78);
    g->eax = eax;
    g->esp = sp0 - 0x264u;
    t79 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, t78, 1, 7, t78, COW_IMG(0x103bcf94u), rd32(sp0 - 0x278u), rd32(sp0 - 0x274u), rd32(sp0 - 0x270u), rd32(sp0 - 0x26cu), rd32(sp0 - 0x268u));
    t80 = g->ecx;
    t81 = g->edx;
    if (t79 != 0u)
    {
        ecx = t80;
        edx = t81;
        goto L_102a0c37;
    }
    eax = t79;
    edx = t81;
    COW_AT(102a0c2d)
    wr8(sp0 - 0x266u, 0xffu);
    goto L_102a0d08;
L_102a0c37: ;
    COW_AT(102a0c37)
    wr32(sp0 - 0x27cu, COW_IMG(0x103bcf88u));
    t82 = rd32(sp0 - 0x260u);
    wr32(sp0 - 0x280u, t82);
    g->eax = t82;
    g->esp = sp0 - 0x264u;
    t83 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, edx, 1, 7, t82, COW_IMG(0x103bcf88u), rd32(sp0 - 0x278u), rd32(sp0 - 0x274u), rd32(sp0 - 0x270u), rd32(sp0 - 0x26cu), rd32(sp0 - 0x268u));
    t84 = g->edx;
    if (t83 != 0u)
    {
        eax = t83;
        edx = t84;
        goto L_102a0c57;
    }
    eax = t83;
    edx = t84;
    COW_AT(102a0c4d)
    wr8(sp0 - 0x262u, 0xffu);
    goto L_102a0d08;
L_102a0c57: ;
    COW_AT(102a0c57)
    wr32(sp0 - 0x27cu, COW_IMG(0x103bcf80u));
    t85 = rd32(sp0 - 0x260u);
    wr32(sp0 - 0x280u, t85);
    g->eax = eax;
    g->esp = sp0 - 0x264u;
    t86 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, t85, edx, 1, 7, t85, COW_IMG(0x103bcf80u), rd32(sp0 - 0x278u), rd32(sp0 - 0x274u), rd32(sp0 - 0x270u), rd32(sp0 - 0x26cu), rd32(sp0 - 0x268u));
    t87 = g->ecx;
    t88 = g->edx;
    if (t86 != 0u)
    {
        eax = t86;
        ecx = t87;
        goto L_102a0c8d;
    }
    eax = t86;
    ecx = t87;
    edx = t88;
    COW_AT(102a0c6d)
    wr32(sp0 - 0x27cu, 0x404u);
    wr32(sp0 - 0x280u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x284u, COW_IMG(0x103b27fcu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x27cu;
    t89 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b27fcu), COW_IMG(0x103bc974u));
    t90 = g->ecx;
    t91 = g->edx;
    wr32(sp0 - 0x288u, COW_IMG(0x103bcfa8u));
    wr32(sp0 - 0x28cu, COW_IMG(0x103bcf80u));
    eax = t89;
    ecx = t90;
    edx = t91;
    loc_28c = COW_IMG(0x103bcf80u);
L_102a0cfb: ;
    COW_AT(102a0cfb)
    wr32(sp0 - 0x290u, COW_IMG(0x103bcf48u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x288u;
    t106 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcf48u), loc_28c);
    t107 = g->edx;
    eax = t106;
    edx = t107;
    goto L_102a0d08;
L_102a0c8d: ;
    COW_AT(102a0c8d)
    wr32(sp0 - 0x27cu, COW_IMG(0x103bcf78u));
    t92 = rd32(sp0 - 0x260u);
    wr32(sp0 - 0x280u, t92);
    g->eax = eax;
    g->esp = sp0 - 0x264u;
    t93 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, t92, 1, 7, t92, COW_IMG(0x103bcf78u), rd32(sp0 - 0x278u), rd32(sp0 - 0x274u), rd32(sp0 - 0x270u), rd32(sp0 - 0x26cu), rd32(sp0 - 0x268u));
    t94 = g->ecx;
    t95 = g->edx;
    if (t93 != 0u)
    {
        ecx = t94;
        edx = t95;
        goto L_102a0cc3;
    }
    eax = t93;
    ecx = t94;
    edx = t95;
    COW_AT(102a0ca3)
    wr32(sp0 - 0x27cu, 0x405u);
    wr32(sp0 - 0x280u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x284u, COW_IMG(0x103b27fcu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x27cu;
    t96 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b27fcu), COW_IMG(0x103bc974u));
    t97 = g->ecx;
    t98 = g->edx;
    wr32(sp0 - 0x288u, COW_IMG(0x103bcfa8u));
    wr32(sp0 - 0x28cu, COW_IMG(0x103bcf78u));
    eax = t96;
    ecx = t97;
    edx = t98;
    loc_28c = COW_IMG(0x103bcf78u);
    goto L_102a0cfb;
L_102a0cc3: ;
    COW_AT(102a0cc3)
    wr32(sp0 - 0x27cu, COW_IMG(0x103bcf6cu));
    t99 = rd32(sp0 - 0x260u);
    wr32(sp0 - 0x280u, t99);
    g->eax = t99;
    g->esp = sp0 - 0x264u;
    t100 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, edx, 1, 7, t99, COW_IMG(0x103bcf6cu), rd32(sp0 - 0x278u), rd32(sp0 - 0x274u), rd32(sp0 - 0x270u), rd32(sp0 - 0x26cu), rd32(sp0 - 0x268u));
    t101 = g->ecx;
    t102 = g->edx;
    if (t100 != 0u)
    {
        eax = t100;
        ecx = t101;
        edx = t102;
        goto L_102a0df6;
    }
    eax = t100;
    ecx = t101;
    edx = t102;
    COW_AT(102a0cdd)
    wr32(sp0 - 0x27cu, 0x406u);
    wr32(sp0 - 0x280u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x284u, COW_IMG(0x103b27fcu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x27cu;
    t103 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b27fcu), COW_IMG(0x103bc974u));
    t104 = g->ecx;
    t105 = g->edx;
    wr32(sp0 - 0x288u, COW_IMG(0x103bcf94u));
    wr32(sp0 - 0x28cu, COW_IMG(0x103bcf6cu));
    eax = t103;
    ecx = t104;
    edx = t105;
    loc_28c = COW_IMG(0x103bcf6cu);
    goto L_102a0cfb;
L_102a0df6: ;
    COW_AT(102a0df6)
    wr32(sp0 - 0x27cu, 0x408u);
    wr32(sp0 - 0x280u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x284u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x27cu;
    t110 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t111 = g->ecx;
    t112 = rd32(sp0 - 0x260u);
    wr32(sp0 - 0x288u, t112);
    wr32(sp0 - 0x28cu, COW_IMG(0x103bd11cu));
    eax = t110;
    ecx = t111;
    edx = t112;
    ebx = in_ebx;
    loc_288 = t112;
    loc_28c = COW_IMG(0x103bd11cu);
    goto L_102a0f92;
L_102a0e19: ;
    COW_AT(102a0e19)
    if (edi != 0u) goto L_102a0e23;
    COW_AT(102a0e1d)
    eax = 0u;
    ecx = 0u;
    goto L_102a0e31;
L_102a0e23: ;
    COW_AT(102a0e23)
    ecx = rd32(edi + 0x58u);
    goto L_102a0e26;
L_102a0f54: ;
    COW_AT(102a0f54)
    wr32(sp0 - 0x27cu, 0x41fu);
    wr32(sp0 - 0x280u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x284u, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x27cu;
    t188 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t189 = g->ecx;
    t190 = rd32(sp0 - 0x254u);
    wr32(sp0 - 0x288u, t190);
    wr32(sp0 - 0x28cu, COW_IMG(0x103bd0fcu));
    eax = t188;
    ecx = t189;
    edx = t190;
    loc_288 = t190;
    loc_28c = COW_IMG(0x103bd0fcu);
    goto L_102a0f92;
L_102a0f74: ;
    COW_AT(102a0f74)
    wr32(sp0 - 0x27cu, 0x416u);
    wr32(sp0 - 0x280u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x284u, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x27cu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t191 = g->ecx;
    t192 = g->edx;
    t193 = rd32(sp0 - 0x258u);
    wr32(sp0 - 0x288u, t193);
    wr32(sp0 - 0x28cu, COW_IMG(0x103bcf08u));
    eax = t193;
    ecx = t191;
    edx = t192;
    loc_288 = t193;
    loc_28c = COW_IMG(0x103bcf08u);
    goto L_102a0f92;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102a0970(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102a09b3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x278u);
        in_esi = rd32(sp0 - 0x274u);
        in_ebp = rd32(sp0 - 0x270u);
        g->esp = sp0 - 0x278u;
        wr32(sp0 - 0x280u, sp0 - 0x250u);
        wr32(sp0 - 0x27cu, sp0 - 0x240u);
        wr32(sp0 - 0x26cu, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x102a09d6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x278u);
        in_esi = rd32(sp0 - 0x274u);
        in_ebp = rd32(sp0 - 0x270u);
        g->esp = sp0 - 0x278u;
        wr32(sp0 - 0x280u, sp0 - 0x250u);
        wr32(sp0 - 0x27cu, sp0 - 0x240u);
        wr32(sp0 - 0x26cu, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x102a09f1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x278u;
        (void)sp0;
        return 1;
    }
    case 0x102a0a29u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x278u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a0a3au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x278u;
        wr32(sp0 - 0x27cu, sp0 - 0x25cu);
        (void)sp0;
        return 1;
    }
    case 0x102a0a5du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x278u;
        g->esi = arg1;
        wr32(sp0 - 0x27cu, sp0 - 0x25cu);
        (void)sp0;
        return 1;
    }
    case 0x102a0a71u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x278u;
        (void)sp0;
        return 1;
    }
    case 0x102a0a91u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x278u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a0aa2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x278u;
        wr32(sp0 - 0x27cu, sp0 - 0x24cu);
        (void)sp0;
        return 1;
    }
    case 0x102a0ac5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x278u;
        g->esi = arg1;
        wr32(sp0 - 0x27cu, sp0 - 0x24cu);
        (void)sp0;
        return 1;
    }
    case 0x102a0ad9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x278u;
        (void)sp0;
        return 1;
    }
    case 0x102a0af7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t loc_280;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_280 = rd32(sp0 - 0x280u);
        g->esp = sp0 - 0x280u;
        (void)sp0;
        return 1;
    }
    case 0x102a0b1au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x278u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a0b2bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x278u;
        wr32(sp0 - 0x27cu, sp0 - 0x258u);
        (void)sp0;
        return 1;
    }
    case 0x102a0b4eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x278u;
        g->esi = arg1;
        wr32(sp0 - 0x27cu, sp0 - 0x258u);
        (void)sp0;
        return 1;
    }
    case 0x102a0b5fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x278u;
        wr32(sp0 - 0x27cu, sp0 - 0x254u);
        (void)sp0;
        return 1;
    }
    case 0x102a0b82u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x278u;
        g->esi = arg1;
        wr32(sp0 - 0x27cu, sp0 - 0x254u);
        (void)sp0;
        return 1;
    }
    case 0x102a0b97u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x278u;
        g->esi = arg1;
        wr32(sp0 - 0x27cu, sp0 - 0x260u);
        (void)sp0;
        return 1;
    }
    case 0x102a0badu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x278u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a0bb7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x278u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a0bcdu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x278u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a0bd7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x278u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a0bedu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x278u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a0bf7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x278u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a0c0du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x278u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a0c17u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x278u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a0c2du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x278u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a0c37u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x278u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a0c4du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x278u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a0c57u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x278u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a0c6du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x278u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a0c8du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x278u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a0ca3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x278u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a0cc3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x278u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a0cddu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x278u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a0cfbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t loc_280;
        uint32_t loc_288;
        uint32_t loc_28c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_28c = rd32(sp0 - 0x28cu);
        loc_288 = rd32(sp0 - 0x288u);
        loc_280 = rd32(sp0 - 0x280u);
        g->esp = sp0 - 0x28cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a0d08u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x278u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a0d1du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x278u;
        g->esi = arg1;
        wr32(sp0 - 0x27cu, sp0 - 0x260u);
        (void)sp0;
        return 1;
    }
    case 0x102a0d7au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x278u;
        g->esi = arg1;
        wr32(sp0 - 0x288u, sp0 - 0x200u);
        wr32(sp0 - 0x284u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x102a0d91u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x278u;
        g->esi = arg1;
        wr32(sp0 - 0x288u, sp0 - 0x200u);
        wr32(sp0 - 0x284u, sp0 - 0x200u);
        wr32(sp0 - 0x27cu, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x102a0dcfu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x278u;
        g->esi = arg1;
        wr32(sp0 - 0x288u, sp0 - 0x200u);
        wr32(sp0 - 0x284u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x102a0de7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x278u;
        g->esi = arg1;
        wr32(sp0 - 0x288u, sp0 - 0x200u);
        wr32(sp0 - 0x284u, sp0 - 0x200u);
        wr32(sp0 - 0x27cu, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x102a0df2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x278u;
        g->esi = arg1;
        wr32(sp0 - 0x288u, sp0 - 0x200u);
        wr32(sp0 - 0x284u, sp0 - 0x200u);
        wr32(sp0 - 0x27cu, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x102a0df6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x278u;
        (void)sp0;
        return 1;
    }
    case 0x102a0e19u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x278u;
        g->esi = arg1;
        wr32(sp0 - 0x288u, sp0 - 0x200u);
        wr32(sp0 - 0x284u, sp0 - 0x200u);
        wr32(sp0 - 0x27cu, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x102a0e1du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x278u;
        g->esi = arg1;
        wr32(sp0 - 0x288u, sp0 - 0x200u);
        wr32(sp0 - 0x284u, sp0 - 0x200u);
        wr32(sp0 - 0x27cu, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x102a0e23u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x278u;
        g->esi = arg1;
        wr32(sp0 - 0x288u, sp0 - 0x200u);
        wr32(sp0 - 0x284u, sp0 - 0x200u);
        wr32(sp0 - 0x27cu, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x102a0e26u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x278u;
        g->esi = arg1;
        wr32(sp0 - 0x288u, sp0 - 0x200u);
        wr32(sp0 - 0x284u, sp0 - 0x200u);
        wr32(sp0 - 0x27cu, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x102a0e2au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x278u;
        g->esi = arg1;
        wr32(sp0 - 0x288u, sp0 - 0x200u);
        wr32(sp0 - 0x284u, sp0 - 0x200u);
        wr32(sp0 - 0x27cu, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x102a0e2eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x278u;
        g->esi = arg1;
        wr32(sp0 - 0x288u, sp0 - 0x200u);
        wr32(sp0 - 0x284u, sp0 - 0x200u);
        wr32(sp0 - 0x27cu, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x102a0e31u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x278u;
        g->esi = arg1;
        wr32(sp0 - 0x288u, sp0 - 0x200u);
        wr32(sp0 - 0x284u, sp0 - 0x200u);
        wr32(sp0 - 0x27cu, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x102a0eb3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_280;
        uint32_t loc_28c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_28c = rd32(sp0 - 0x28cu);
        loc_280 = rd32(sp0 - 0x280u);
        g->esp = sp0 - 0x278u;
        g->esi = arg1;
        wr32(sp0 - 0x294u, sp0 - 0x240u);
        (void)sp0;
        return 1;
    }
    case 0x102a0ec1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_280;
        uint32_t loc_28c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_28c = rd32(sp0 - 0x28cu);
        loc_280 = rd32(sp0 - 0x280u);
        g->esp = sp0 - 0x278u;
        g->esi = arg1;
        wr32(sp0 - 0x294u, sp0 - 0x240u);
        (void)sp0;
        return 1;
    }
    case 0x102a0ec9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_280;
        uint32_t loc_28c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_28c = rd32(sp0 - 0x28cu);
        loc_280 = rd32(sp0 - 0x280u);
        g->esp = sp0 - 0x278u;
        g->esi = arg1;
        wr32(sp0 - 0x294u, sp0 - 0x240u);
        (void)sp0;
        return 1;
    }
    case 0x102a0ed7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_280;
        uint32_t loc_28c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_28c = rd32(sp0 - 0x28cu);
        loc_280 = rd32(sp0 - 0x280u);
        g->esp = sp0 - 0x278u;
        g->esi = arg1;
        wr32(sp0 - 0x294u, sp0 - 0x240u);
        (void)sp0;
        return 1;
    }
    case 0x102a0edfu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_280;
        uint32_t loc_28c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_28c = rd32(sp0 - 0x28cu);
        loc_280 = rd32(sp0 - 0x280u);
        g->esp = sp0 - 0x278u;
        g->esi = arg1;
        wr32(sp0 - 0x294u, sp0 - 0x240u);
        (void)sp0;
        return 1;
    }
    case 0x102a0eedu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_280;
        uint32_t loc_28c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_28c = rd32(sp0 - 0x28cu);
        loc_280 = rd32(sp0 - 0x280u);
        g->esp = sp0 - 0x278u;
        g->esi = arg1;
        wr32(sp0 - 0x294u, sp0 - 0x240u);
        (void)sp0;
        return 1;
    }
    case 0x102a0ef5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_280;
        uint32_t loc_28c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_28c = rd32(sp0 - 0x28cu);
        loc_280 = rd32(sp0 - 0x280u);
        g->esp = sp0 - 0x278u;
        g->esi = arg1;
        wr32(sp0 - 0x294u, sp0 - 0x240u);
        (void)sp0;
        return 1;
    }
    case 0x102a0f03u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_280;
        uint32_t loc_28c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_28c = rd32(sp0 - 0x28cu);
        loc_280 = rd32(sp0 - 0x280u);
        g->esp = sp0 - 0x278u;
        g->esi = arg1;
        wr32(sp0 - 0x294u, sp0 - 0x240u);
        (void)sp0;
        return 1;
    }
    case 0x102a0f0bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_280;
        uint32_t loc_28c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_28c = rd32(sp0 - 0x28cu);
        loc_280 = rd32(sp0 - 0x280u);
        g->esp = sp0 - 0x278u;
        g->esi = arg1;
        wr32(sp0 - 0x294u, sp0 - 0x240u);
        (void)sp0;
        return 1;
    }
    case 0x102a0f19u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_280;
        uint32_t loc_28c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_28c = rd32(sp0 - 0x28cu);
        loc_280 = rd32(sp0 - 0x280u);
        g->esp = sp0 - 0x278u;
        g->esi = arg1;
        wr32(sp0 - 0x294u, sp0 - 0x240u);
        (void)sp0;
        return 1;
    }
    case 0x102a0f21u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_280;
        uint32_t loc_28c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_28c = rd32(sp0 - 0x28cu);
        loc_280 = rd32(sp0 - 0x280u);
        g->esp = sp0 - 0x278u;
        g->esi = arg1;
        wr32(sp0 - 0x294u, sp0 - 0x240u);
        (void)sp0;
        return 1;
    }
    case 0x102a0f2fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_280;
        uint32_t loc_28c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_28c = rd32(sp0 - 0x28cu);
        loc_280 = rd32(sp0 - 0x280u);
        g->esp = sp0 - 0x278u;
        g->esi = arg1;
        wr32(sp0 - 0x294u, sp0 - 0x240u);
        (void)sp0;
        return 1;
    }
    case 0x102a0f54u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x278u;
        wr32(sp0 - 0x288u, sp0 - 0x200u);
        wr32(sp0 - 0x284u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x102a0f74u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x278u;
        wr32(sp0 - 0x288u, sp0 - 0x200u);
        wr32(sp0 - 0x284u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x102a0f92u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_280;
        uint32_t loc_288;
        uint32_t loc_28c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_28c = rd32(sp0 - 0x28cu);
        loc_288 = rd32(sp0 - 0x288u);
        loc_280 = rd32(sp0 - 0x280u);
        g->esp = sp0 - 0x28cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102a0970(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102a0970(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
