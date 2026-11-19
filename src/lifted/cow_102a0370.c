/* f_0x102a0370 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102a0370(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_238;
    uint32_t loc_244;
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
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 624u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102a03a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x230u); g->ebp = rd32(sp0 - 0x230u); goto E_102a03a7;
    case 0x102a03d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x230u); in_ebx = rd32(sp0 - 0x22cu); g->ebp = rd32(sp0 - 0x230u); g->ebx = rd32(sp0 - 0x22cu); goto E_102a03d8;
    case 0x102a03f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_102a03f3;
    case 0x102a0429u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_102a0429;
    case 0x102a043au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_102a043a;
    case 0x102a046bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_102a046b;
    case 0x102a047fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_102a047f;
    case 0x102a049fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_102a049f;
    case 0x102a04b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_102a04b0;
    case 0x102a04e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_102a04e1;
    case 0x102a04f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_102a04f5;
    case 0x102a0513u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; loc_238 = rd32(sp0 - 0x238u); goto E_102a0513;
    case 0x102a0534u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_102a0534;
    case 0x102a0545u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_102a0545;
    case 0x102a0576u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_102a0576;
    case 0x102a0587u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_102a0587;
    case 0x102a05b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_102a05b8;
    case 0x102a05cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_102a05cd;
    case 0x102a05e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_102a05e3;
    case 0x102a05edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_102a05ed;
    case 0x102a0603u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_102a0603;
    case 0x102a060du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_102a060d;
    case 0x102a0623u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_102a0623;
    case 0x102a062du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_102a062d;
    case 0x102a0643u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_102a0643;
    case 0x102a064du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_102a064d;
    case 0x102a0663u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_102a0663;
    case 0x102a066du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_102a066d;
    case 0x102a0683u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_102a0683;
    case 0x102a068du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_102a068d;
    case 0x102a06a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_102a06a3;
    case 0x102a06c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_102a06c3;
    case 0x102a06d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_102a06d9;
    case 0x102a06f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_102a06f9;
    case 0x102a0713u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_102a0713;
    case 0x102a0731u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; loc_244 = rd32(sp0 - 0x244u); loc_238 = rd32(sp0 - 0x238u); goto E_102a0731;
    case 0x102a073eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_102a073e;
    case 0x102a0753u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_102a0753;
    case 0x102a078bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_102a078b;
    case 0x102a07a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_102a07a2;
    case 0x102a07e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a07e1;
    case 0x102a07eau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a07ea;
    case 0x102a07f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a07f6;
    case 0x102a07fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_102a07fd;
    case 0x102a082eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a082e;
    case 0x102a0837u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a0837;
    case 0x102a0840u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a0840;
    case 0x102a0849u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a0849;
    case 0x102a0852u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a0852;
    case 0x102a0859u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a0859;
    case 0x102a085eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a085e;
    case 0x102a0897u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a0897;
    case 0x102a08a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a08a5;
    case 0x102a08adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a08ad;
    case 0x102a08bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a08bb;
    case 0x102a08c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a08c3;
    case 0x102a08d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a08d1;
    case 0x102a08d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a08d9;
    case 0x102a08e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a08e7;
    case 0x102a08efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a08ef;
    case 0x102a08fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a08fd;
    case 0x102a0905u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a0905;
    case 0x102a0913u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a0913;
    case 0x102a092au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_102a092a;
    default: break;
    }
#endif

    COW_AT(102a0370)
    wr32(sp0 - 0x22cu, in_ebx);
    wr32(sp0 - 0x230u, in_ebp);
    wr32(sp0 - 0x234u, sp0 - 0x218u);
    wr8(sp0 - 0x221u, 0u);
    wr8(sp0 - 0x223u, 0u);
    wr8(sp0 - 0x226u, 0u);
    wr8(sp0 - 0x225u, 0u);
    wr8(sp0 - 0x224u, 0u);
    wr8(sp0 - 0x222u, 0u);
    g->eax = sp0 - 0x218u;
    g->esp = sp0 - 0x230u;
    t1 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, self, in_edx, 1, 1, sp0 - 0x218u);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        edx = t3;
        goto L_102a03d8;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(102a03a7)
    wr32(sp0 - 0x234u, 0x388u);
    wr32(sp0 - 0x238u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x23cu, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x234u;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x240u, COW_IMG(0x103bcff0u));
    wr32(sp0 - 0x244u, COW_IMG(0x103bcb40u));
    g->edx = t6;
    g->esp = sp0 - 0x23cu;
    t7 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcb40u), COW_IMG(0x103bcff0u));
    t8 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = t8;
    return t7 & 0xffffff00u;
L_102a03d8: ;
    COW_AT(102a03d8)
    wr32(sp0 - 0x234u, 3u);
    t9 = rd32(sp0 - 0x218u);
    wr32(sp0 - 0x238u, t9);
    wr32(sp0 - 0x23cu, arg1);
    g->eax = eax;
    g->ecx = t9;
    g->edx = edx;
    g->esp = sp0 - 0x218u;
    t10 = cow_cdecl(g, COW_IMG(0x10279a80u), 9, arg1, t9, 3u, in_ebp, in_ebx, rd32(sp0 - 0x228u), rd32(sp0 - 0x224u), rd32(sp0 - 0x220u), rd32(sp0 - 0x21cu));
    t11 = g->ecx;
    t12 = g->edx;
    if ((uint8_t)t10 == 0u)
    {
        ecx = t11;
        edx = t12;
        goto L_102a0429;
    }
    eax = t10;
    ecx = t11;
    edx = t12;
    COW_AT(102a03f3)
    wr32(sp0 - 0x234u, 0x388u);
    wr32(sp0 - 0x238u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x23cu, COW_IMG(0x103b379cu));
    g->ebx = arg1;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x234u;
    t13 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t14 = g->ecx;
    t15 = rd32(sp0 - 0x218u);
    wr32(sp0 - 0x240u, t15);
    wr32(sp0 - 0x244u, COW_IMG(0x103bcff0u));
    wr32(sp0 - 0x248u, COW_IMG(0x103bcb24u));
    g->ebx = arg1;
    g->edx = t15;
    g->esp = sp0 - 0x240u;
    t16 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcb24u), COW_IMG(0x103bcff0u));
    t17 = g->edx;
    g->ebx = rd32(sp0 - 0x22cu);
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = rd32(sp0 - 0x230u);
    g->edx = t17;
    return t16 & 0xffffff00u;
L_102a0429: ;
    COW_AT(102a0429)
    wr32(sp0 - 0x234u, sp0 - 0x21cu);
    g->ebx = arg1;
    g->eax = sp0 - 0x21cu;
    g->esp = sp0 - 0x230u;
    t18 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, ecx, edx, 1, 1, sp0 - 0x21cu);
    t19 = g->ecx;
    t20 = g->edx;
    if ((uint8_t)t18 != 0u)
    {
        eax = t18;
        edx = t20;
        goto L_102a046b;
    }
    eax = t18;
    ecx = t19;
    edx = t20;
    COW_AT(102a043a)
    wr32(sp0 - 0x234u, 0x389u);
    wr32(sp0 - 0x238u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x23cu, COW_IMG(0x103b379cu));
    g->ebx = arg1;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x234u;
    t21 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t22 = g->ecx;
    t23 = g->edx;
    wr32(sp0 - 0x240u, COW_IMG(0x103bcefcu));
    wr32(sp0 - 0x244u, COW_IMG(0x103bcb40u));
    g->ebx = arg1;
    g->edx = t23;
    g->esp = sp0 - 0x23cu;
    t24 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcb40u), COW_IMG(0x103bcefcu));
    t25 = g->edx;
    g->ebx = rd32(sp0 - 0x22cu);
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = rd32(sp0 - 0x230u);
    g->edx = t25;
    return t24 & 0xffffff00u;
L_102a046b: ;
    COW_AT(102a046b)
    wr32(sp0 - 0x234u, 1u);
    t26 = rd32(sp0 - 0x21cu);
    wr32(sp0 - 0x238u, t26);
    wr32(sp0 - 0x23cu, arg1);
    g->eax = eax;
    g->ecx = t26;
    g->edx = edx;
    g->esp = sp0 - 0x218u;
    t27 = cow_cdecl(g, COW_IMG(0x10279a80u), 9, arg1, t26, 1u, rd32(sp0 - 0x230u), rd32(sp0 - 0x22cu), rd32(sp0 - 0x228u), rd32(sp0 - 0x224u), rd32(sp0 - 0x220u), rd32(sp0 - 0x21cu));
    t28 = g->ecx;
    t29 = g->edx;
    if ((uint8_t)t27 != 0u)
    {
        ecx = t28;
        edx = t29;
        goto L_102a049f;
    }
    eax = t27;
    ecx = t28;
    edx = t29;
    COW_AT(102a047f)
    wr32(sp0 - 0x234u, 0x389u);
    wr32(sp0 - 0x238u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x23cu, COW_IMG(0x103b379cu));
    g->ebx = arg1;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x234u;
    t30 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t31 = g->ecx;
    t32 = rd32(sp0 - 0x21cu);
    wr32(sp0 - 0x234u, t32);
    wr32(sp0 - 0x238u, 1u);
    eax = t30;
    ecx = t31;
    edx = t32;
    loc_238 = 1u;
L_102a0513: ;
    COW_AT(102a0513)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x234u;
    t48 = cow_cdecl(g, COW_IMG(0x1027a1e0u), 1, loc_238);
    t49 = g->ecx;
    t50 = g->edx;
    wr32(sp0 - 0x238u, t48);
    wr32(sp0 - 0x23cu, COW_IMG(0x103bcbe8u));
    g->ebx = arg1;
    g->edx = t50;
    t51 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcbe8u), t48);
    t52 = g->edx;
    g->ebx = rd32(sp0 - 0x22cu);
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = rd32(sp0 - 0x230u);
    g->edx = t52;
    return t51 & 0xffffff00u;
L_102a049f: ;
    COW_AT(102a049f)
    wr32(sp0 - 0x234u, sp0 - 0x214u);
    g->ebx = arg1;
    g->eax = sp0 - 0x214u;
    g->esp = sp0 - 0x230u;
    t33 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, ecx, edx, 1, 1, sp0 - 0x214u);
    t34 = g->ecx;
    t35 = g->edx;
    if ((uint8_t)t33 != 0u)
    {
        eax = t33;
        edx = t35;
        goto L_102a04e1;
    }
    eax = t33;
    ecx = t34;
    edx = t35;
    COW_AT(102a04b0)
    wr32(sp0 - 0x234u, 0x38au);
    wr32(sp0 - 0x238u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x23cu, COW_IMG(0x103b379cu));
    g->ebx = arg1;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x234u;
    t36 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t37 = g->ecx;
    t38 = g->edx;
    wr32(sp0 - 0x240u, COW_IMG(0x103bd0acu));
    wr32(sp0 - 0x244u, COW_IMG(0x103bcb40u));
    g->ebx = arg1;
    g->edx = t38;
    g->esp = sp0 - 0x23cu;
    t39 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcb40u), COW_IMG(0x103bd0acu));
    t40 = g->edx;
    g->ebx = rd32(sp0 - 0x22cu);
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = rd32(sp0 - 0x230u);
    g->edx = t40;
    return t39 & 0xffffff00u;
L_102a04e1: ;
    COW_AT(102a04e1)
    wr32(sp0 - 0x234u, 2u);
    t41 = rd32(sp0 - 0x214u);
    wr32(sp0 - 0x238u, t41);
    wr32(sp0 - 0x23cu, arg1);
    g->eax = eax;
    g->ecx = t41;
    g->edx = edx;
    g->esp = sp0 - 0x218u;
    t42 = cow_cdecl(g, COW_IMG(0x10279a80u), 9, arg1, t41, 2u, rd32(sp0 - 0x230u), rd32(sp0 - 0x22cu), rd32(sp0 - 0x228u), rd32(sp0 - 0x224u), rd32(sp0 - 0x220u), rd32(sp0 - 0x21cu));
    t43 = g->ecx;
    t44 = g->edx;
    if ((uint8_t)t42 != 0u)
    {
        ecx = t43;
        edx = t44;
        goto L_102a0534;
    }
    eax = t42;
    ecx = t43;
    edx = t44;
    COW_AT(102a04f5)
    wr32(sp0 - 0x234u, 0x38au);
    wr32(sp0 - 0x238u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x23cu, COW_IMG(0x103b379cu));
    g->ebx = arg1;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x234u;
    t45 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t46 = g->ecx;
    t47 = rd32(sp0 - 0x214u);
    wr32(sp0 - 0x234u, t47);
    wr32(sp0 - 0x238u, 2u);
    eax = t45;
    ecx = t46;
    edx = t47;
    loc_238 = 2u;
    goto L_102a0513;
L_102a0534: ;
    COW_AT(102a0534)
    wr32(sp0 - 0x234u, sp0 - 0x210u);
    g->ebx = arg1;
    g->eax = sp0 - 0x210u;
    g->esp = sp0 - 0x230u;
    t53 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, ecx, edx, 1, 1, sp0 - 0x210u);
    t54 = g->ecx;
    t55 = g->edx;
    if ((uint8_t)t53 != 0u)
    {
        eax = t53;
        edx = t55;
        goto L_102a0576;
    }
    eax = t53;
    ecx = t54;
    edx = t55;
    COW_AT(102a0545)
    wr32(sp0 - 0x234u, 0x38bu);
    wr32(sp0 - 0x238u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x23cu, COW_IMG(0x103b379cu));
    g->ebx = arg1;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x234u;
    t56 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t57 = g->ecx;
    t58 = g->edx;
    wr32(sp0 - 0x240u, COW_IMG(0x103bd0f0u));
    wr32(sp0 - 0x244u, COW_IMG(0x103bc94cu));
    g->ebx = arg1;
    g->edx = t58;
    g->esp = sp0 - 0x23cu;
    t59 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc94cu), COW_IMG(0x103bd0f0u));
    t60 = g->edx;
    g->ebx = rd32(sp0 - 0x22cu);
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = rd32(sp0 - 0x230u);
    g->edx = t60;
    return t59 & 0xffffff00u;
L_102a0576: ;
    COW_AT(102a0576)
    wr32(sp0 - 0x234u, sp0 - 0x20cu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x230u;
    t61 = cow_thiscall_cdecl(g, COW_IMG(0x102afcb0u), sp0 - 0x20cu, 1, sp0 - 0x20cu);
    t62 = g->ecx;
    t63 = g->edx;
    if ((uint8_t)t61 != 0u)
    {
        eax = t61;
        ecx = t62;
        goto L_102a05b8;
    }
    eax = t61;
    ecx = t62;
    edx = t63;
    COW_AT(102a0587)
    wr32(sp0 - 0x234u, 0x38cu);
    wr32(sp0 - 0x238u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x23cu, COW_IMG(0x103b379cu));
    g->ebx = arg1;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x234u;
    t64 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t65 = g->ecx;
    t66 = g->edx;
    wr32(sp0 - 0x240u, COW_IMG(0x103bd0e4u));
    wr32(sp0 - 0x244u, COW_IMG(0x103bca3cu));
    g->ebx = arg1;
    g->edx = t66;
    g->esp = sp0 - 0x23cu;
    t67 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca3cu), COW_IMG(0x103bd0e4u));
    t68 = g->edx;
    g->ebx = rd32(sp0 - 0x22cu);
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = rd32(sp0 - 0x230u);
    g->edx = t68;
    return t67 & 0xffffff00u;
L_102a05b8: ;
    COW_AT(102a05b8)
    wr32(sp0 - 0x234u, sp0 - 0x220u);
    g->ebx = arg1;
    g->eax = eax;
    g->esp = sp0 - 0x230u;
    t69 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, ecx, sp0 - 0x220u, 1, 1, sp0 - 0x220u);
    t70 = g->ecx;
    t71 = g->edx;
    if ((uint8_t)t69 == 0u)
    {
        eax = t69;
        ecx = t70;
        edx = t71;
        goto L_102a0753;
    }
    ecx = t70;
    edx = t71;
L_102a05cd: ;
    COW_AT(102a05cd)
    wr32(sp0 - 0x234u, COW_IMG(0x103bcfbcu));
    t72 = rd32(sp0 - 0x220u);
    wr32(sp0 - 0x238u, t72);
    g->ebx = arg1;
    g->eax = t72;
    g->esp = sp0 - 0x21cu;
    t73 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, edx, 1, 7, t72, COW_IMG(0x103bcfbcu), rd32(sp0 - 0x230u), rd32(sp0 - 0x22cu), rd32(sp0 - 0x228u), rd32(sp0 - 0x224u), rd32(sp0 - 0x220u));
    t74 = g->ecx;
    t75 = g->edx;
    if (t73 != 0u)
    {
        eax = t73;
        edx = t75;
        goto L_102a05ed;
    }
    ecx = t74;
    edx = t75;
    COW_AT(102a05e3)
    wr8(sp0 - 0x221u, 0xffu);
L_102a073e: ;
    COW_AT(102a073e)
    wr32(sp0 - 0x234u, sp0 - 0x220u);
    g->ebx = arg1;
    g->eax = sp0 - 0x220u;
    g->esp = sp0 - 0x230u;
    t119 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, ecx, edx, 1, 1, sp0 - 0x220u);
    t120 = g->ecx;
    t121 = g->edx;
    if ((uint8_t)t119 != 0u)
    {
        ecx = t120;
        edx = t121;
        goto L_102a05cd;
    }
    eax = t119;
    ecx = t120;
    edx = t121;
L_102a0753: ;
    COW_AT(102a0753)
    wr32(sp0 - 0x234u, 0u);
    wr32(sp0 - 0x238u, 0u);
    wr32(sp0 - 0x23cu, 0u);
    g->eax = eax;
    g->esp = sp0 - 0x230u;
    t127 = cow_thiscall_cdecl(g, COW_IMG(0x1027a310u), ecx, 3, 0u, 0u, 0u);
    t128 = g->ecx;
    t129 = rd32(sp0 - 0x210u);
    wr32(sp0 - 0x234u, t129);
    g->ecx = t128;
    g->edx = t129;
    g->esp = sp0 - 0x234u;
    t130 = cow_stdcall(g, COW_IMG(0x102afdf0u), 0);
    t131 = g->ecx;
    t132 = g->edx;
    wr32(sp0 - 0x238u, t130);
    wr32(sp0 - 0x23cu, sp0 - 0x200u);
    g->eax = sp0 - 0x200u;
    g->edx = t132;
    g->esp = sp0 - 0x230u;
    t133 = cow_thiscall_cdecl(g, COW_IMG(0x1027a310u), t131, 3, sp0 - 0x200u, t130, rd32(sp0 - 0x234u));
    t134 = g->edx;
    wr32(sp0 - 0x240u, sp0 - 0x200u);
    g->edx = t134;
    g->esp = sp0 - 0x23cu;
    t135 = cow_thiscall_cdecl(g, COW_IMG(0x1028a280u), sp0 - 0x200u, 1, sp0 - 0x200u);
    t136 = g->ecx;
    t137 = g->edx;
    if ((uint8_t)t135 == 0u)
    {
        eax = t135;
        ecx = t136;
        edx = t137;
        goto L_102a092a;
    }
    eax = t135;
    ecx = t136;
    COW_AT(102a078b)
    wr32(sp0 - 0x234u, sp0 - 0x200u);
    g->eax = eax;
    g->edx = sp0 - 0x200u;
    g->esp = sp0 - 0x228u;
    t138 = cow_thiscall_cdecl(g, COW_IMG(0x102b0630u), ecx, 3, sp0 - 0x200u, rd32(sp0 - 0x230u), rd32(sp0 - 0x22cu));
    t139 = g->ecx;
    t140 = g->edx;
    if (t138 == 0u)
    {
        eax = t138;
        ecx = t139;
        edx = t140;
        goto L_102a092a;
    }
    edx = t140;
    ebp = t138;
    COW_AT(102a07a2)
    wr32(sp0 - 0x234u, in_esi);
    wr32(sp0 - 0x238u, in_edi);
    wr32(sp0 - 0x23cu, sp0 - 0x208u);
    t141 = rd32(sp0 - 0x21cu);
    wr32(sp0 - 0x240u, t141);
    wr32(sp0 - 0x244u, arg1);
    g->eax = sp0 - 0x208u;
    g->ecx = t141;
    g->esp = sp0 - 0x238u;
    t142 = cow_cdecl(g, COW_IMG(0x10279d50u), 3, arg1, t141, sp0 - 0x208u);
    t143 = g->ecx;
    wr32(sp0 - 0x248u, sp0 - 0x204u);
    t144 = rd32(sp0 - 0x214u);
    wr32(sp0 - 0x24cu, t144);
    wr32(sp0 - 0x250u, arg1);
    g->eax = t144;
    g->edx = sp0 - 0x204u;
    g->esp = sp0 - 0x244u;
    t145 = cow_cdecl(g, COW_IMG(0x10279d70u), 3, arg1, t144, sp0 - 0x204u);
    t146 = g->edx;
    t147 = rd32(sp0 - 0x20cu);
    wr32(sp0 - 0x254u, t147);
    wr32(sp0 - 0x258u, t145);
    g->ecx = t147;
    g->edx = t146;
    t148 = cow_cdecl(g, COW_IMG(0x1027c9a0u), 5, t145, t147, arg1, rd32(sp0 - 0x24cu), sp0 - 0x204u);
    t149 = g->ecx;
    t150 = g->edx;
    if (rd8(sp0 - 0x226u) == 0u)
    {
        eax = (t148 & 0xffffff00u) | rd8(sp0 - 0x226u);
        ecx = t149;
        edi = t148 + 0x24u;
        goto L_102a085e;
    }
    eax = (t148 & 0xffffff00u) | rd8(sp0 - 0x226u);
    ecx = t149;
    edx = t150;
    esi = t142;
    edi = t148 + 0x24u;
    COW_AT(102a07e1)
    if (rd8(COW_IMG(0x109a2796u)) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x109a2796u));
        goto L_102a085e;
    }
    COW_AT(102a07ea)
    if (rd32(esi) - 0xf0001u > 4u)
    {
        eax = rd32(esi) - 0xf0001u;
        goto L_102a085e;
    }
    eax = rd32(esi) - 0xf0001u;
    COW_AT(102a07f6)
    t151 = rd32(COW_IMG(0x102a095cu) + eax * 4u);
    switch (t151 - RD)
    {
    case 0x102a082eu: goto L_102a082e;
    case 0x102a0837u: goto L_102a0837;
    case 0x102a0840u: goto L_102a0840;
    case 0x102a0849u: goto L_102a0849;
    case 0x102a0852u: goto L_102a0852;
    default: rt_fatal(g, COW_IMG(0x102a07f6u), "switch");
    }
    return 0;
L_102a05ed: ;
    COW_AT(102a05ed)
    wr32(sp0 - 0x234u, COW_IMG(0x103bcfb0u));
    t76 = rd32(sp0 - 0x220u);
    wr32(sp0 - 0x238u, t76);
    g->ebx = arg1;
    g->eax = eax;
    g->esp = sp0 - 0x21cu;
    t77 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, t76, edx, 1, 7, t76, COW_IMG(0x103bcfb0u), rd32(sp0 - 0x230u), rd32(sp0 - 0x22cu), rd32(sp0 - 0x228u), rd32(sp0 - 0x224u), rd32(sp0 - 0x220u));
    t78 = g->ecx;
    t79 = g->edx;
    if (t77 != 0u)
    {
        eax = t77;
        ecx = t78;
        goto L_102a060d;
    }
    ecx = t78;
    edx = t79;
    COW_AT(102a0603)
    wr8(sp0 - 0x223u, 0xffu);
    goto L_102a073e;
L_102a060d: ;
    COW_AT(102a060d)
    wr32(sp0 - 0x234u, COW_IMG(0x103bcfa8u));
    t80 = rd32(sp0 - 0x220u);
    wr32(sp0 - 0x238u, t80);
    g->ebx = arg1;
    g->eax = eax;
    g->esp = sp0 - 0x21cu;
    t81 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, t80, 1, 7, t80, COW_IMG(0x103bcfa8u), rd32(sp0 - 0x230u), rd32(sp0 - 0x22cu), rd32(sp0 - 0x228u), rd32(sp0 - 0x224u), rd32(sp0 - 0x220u));
    t82 = g->ecx;
    t83 = g->edx;
    if (t81 != 0u)
    {
        ecx = t82;
        edx = t83;
        goto L_102a062d;
    }
    ecx = t82;
    edx = t83;
    COW_AT(102a0623)
    wr8(sp0 - 0x226u, 0xffu);
    goto L_102a073e;
L_102a062d: ;
    COW_AT(102a062d)
    wr32(sp0 - 0x234u, COW_IMG(0x103bcfa0u));
    t84 = rd32(sp0 - 0x220u);
    wr32(sp0 - 0x238u, t84);
    g->ebx = arg1;
    g->eax = t84;
    g->esp = sp0 - 0x21cu;
    t85 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, edx, 1, 7, t84, COW_IMG(0x103bcfa0u), rd32(sp0 - 0x230u), rd32(sp0 - 0x22cu), rd32(sp0 - 0x228u), rd32(sp0 - 0x224u), rd32(sp0 - 0x220u));
    t86 = g->ecx;
    t87 = g->edx;
    if (t85 != 0u)
    {
        eax = t85;
        edx = t87;
        goto L_102a064d;
    }
    ecx = t86;
    edx = t87;
    COW_AT(102a0643)
    wr8(sp0 - 0x225u, 0xffu);
    goto L_102a073e;
L_102a064d: ;
    COW_AT(102a064d)
    wr32(sp0 - 0x234u, COW_IMG(0x103bcf94u));
    t88 = rd32(sp0 - 0x220u);
    wr32(sp0 - 0x238u, t88);
    g->ebx = arg1;
    g->eax = eax;
    g->esp = sp0 - 0x21cu;
    t89 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, t88, edx, 1, 7, t88, COW_IMG(0x103bcf94u), rd32(sp0 - 0x230u), rd32(sp0 - 0x22cu), rd32(sp0 - 0x228u), rd32(sp0 - 0x224u), rd32(sp0 - 0x220u));
    t90 = g->ecx;
    t91 = g->edx;
    if (t89 != 0u)
    {
        eax = t89;
        ecx = t90;
        goto L_102a066d;
    }
    ecx = t90;
    edx = t91;
    COW_AT(102a0663)
    wr8(sp0 - 0x224u, 0xffu);
    goto L_102a073e;
L_102a066d: ;
    COW_AT(102a066d)
    wr32(sp0 - 0x234u, COW_IMG(0x103bcf88u));
    t92 = rd32(sp0 - 0x220u);
    wr32(sp0 - 0x238u, t92);
    g->ebx = arg1;
    g->eax = eax;
    g->esp = sp0 - 0x21cu;
    t93 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, t92, 1, 7, t92, COW_IMG(0x103bcf88u), rd32(sp0 - 0x230u), rd32(sp0 - 0x22cu), rd32(sp0 - 0x228u), rd32(sp0 - 0x224u), rd32(sp0 - 0x220u));
    t94 = g->ecx;
    t95 = g->edx;
    if (t93 != 0u)
    {
        ecx = t94;
        edx = t95;
        goto L_102a068d;
    }
    ecx = t94;
    edx = t95;
    COW_AT(102a0683)
    wr8(sp0 - 0x222u, 0xffu);
    goto L_102a073e;
L_102a068d: ;
    COW_AT(102a068d)
    wr32(sp0 - 0x234u, COW_IMG(0x103bcf80u));
    t96 = rd32(sp0 - 0x220u);
    wr32(sp0 - 0x238u, t96);
    g->ebx = arg1;
    g->eax = t96;
    g->esp = sp0 - 0x21cu;
    t97 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, edx, 1, 7, t96, COW_IMG(0x103bcf80u), rd32(sp0 - 0x230u), rd32(sp0 - 0x22cu), rd32(sp0 - 0x228u), rd32(sp0 - 0x224u), rd32(sp0 - 0x220u));
    t98 = g->ecx;
    t99 = g->edx;
    if (t97 != 0u)
    {
        eax = t97;
        edx = t99;
        goto L_102a06c3;
    }
    eax = t97;
    ecx = t98;
    edx = t99;
    COW_AT(102a06a3)
    wr32(sp0 - 0x234u, 0x394u);
    wr32(sp0 - 0x238u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x23cu, COW_IMG(0x103b27fcu));
    g->ebx = arg1;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x234u;
    t100 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b27fcu), COW_IMG(0x103bc974u));
    t101 = g->ecx;
    t102 = g->edx;
    wr32(sp0 - 0x240u, COW_IMG(0x103bcfa8u));
    wr32(sp0 - 0x244u, COW_IMG(0x103bcf80u));
    eax = t100;
    ecx = t101;
    edx = t102;
    loc_244 = COW_IMG(0x103bcf80u);
L_102a0731: ;
    COW_AT(102a0731)
    wr32(sp0 - 0x248u, COW_IMG(0x103bcf48u));
    g->ebx = arg1;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x240u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcf48u), loc_244);
    t117 = g->ecx;
    t118 = g->edx;
    ecx = t117;
    edx = t118;
    goto L_102a073e;
L_102a06c3: ;
    COW_AT(102a06c3)
    wr32(sp0 - 0x234u, COW_IMG(0x103bcf78u));
    t103 = rd32(sp0 - 0x220u);
    wr32(sp0 - 0x238u, t103);
    g->ebx = arg1;
    g->eax = eax;
    g->esp = sp0 - 0x21cu;
    t104 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, t103, edx, 1, 7, t103, COW_IMG(0x103bcf78u), rd32(sp0 - 0x230u), rd32(sp0 - 0x22cu), rd32(sp0 - 0x228u), rd32(sp0 - 0x224u), rd32(sp0 - 0x220u));
    t105 = g->ecx;
    t106 = g->edx;
    if (t104 != 0u)
    {
        eax = t104;
        ecx = t105;
        goto L_102a06f9;
    }
    eax = t104;
    ecx = t105;
    edx = t106;
    COW_AT(102a06d9)
    wr32(sp0 - 0x234u, 0x395u);
    wr32(sp0 - 0x238u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x23cu, COW_IMG(0x103b27fcu));
    g->ebx = arg1;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x234u;
    t107 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b27fcu), COW_IMG(0x103bc974u));
    t108 = g->ecx;
    t109 = g->edx;
    wr32(sp0 - 0x240u, COW_IMG(0x103bcfa8u));
    wr32(sp0 - 0x244u, COW_IMG(0x103bcf78u));
    eax = t107;
    ecx = t108;
    edx = t109;
    loc_244 = COW_IMG(0x103bcf78u);
    goto L_102a0731;
L_102a06f9: ;
    COW_AT(102a06f9)
    wr32(sp0 - 0x234u, COW_IMG(0x103bcf6cu));
    t110 = rd32(sp0 - 0x220u);
    wr32(sp0 - 0x238u, t110);
    g->ebx = arg1;
    g->eax = eax;
    g->esp = sp0 - 0x21cu;
    t111 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, t110, 1, 7, t110, COW_IMG(0x103bcf6cu), rd32(sp0 - 0x230u), rd32(sp0 - 0x22cu), rd32(sp0 - 0x228u), rd32(sp0 - 0x224u), rd32(sp0 - 0x220u));
    t112 = g->ecx;
    t113 = g->edx;
    if (t111 != 0u)
    {
        eax = t111;
        ecx = t112;
        edx = t113;
        goto L_102a07fd;
    }
    eax = t111;
    ecx = t112;
    edx = t113;
    COW_AT(102a0713)
    wr32(sp0 - 0x234u, 0x396u);
    wr32(sp0 - 0x238u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x23cu, COW_IMG(0x103b27fcu));
    g->ebx = arg1;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x234u;
    t114 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b27fcu), COW_IMG(0x103bc974u));
    t115 = g->ecx;
    t116 = g->edx;
    wr32(sp0 - 0x240u, COW_IMG(0x103bcf94u));
    wr32(sp0 - 0x244u, COW_IMG(0x103bcf6cu));
    eax = t114;
    ecx = t115;
    edx = t116;
    loc_244 = COW_IMG(0x103bcf6cu);
    goto L_102a0731;
L_102a07fd: ;
    COW_AT(102a07fd)
    wr32(sp0 - 0x234u, 0x398u);
    wr32(sp0 - 0x238u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x23cu, COW_IMG(0x103b379cu));
    g->ebx = arg1;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x234u;
    t122 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t123 = g->edx;
    t124 = rd32(sp0 - 0x220u);
    wr32(sp0 - 0x240u, t124);
    wr32(sp0 - 0x244u, COW_IMG(0x103bd0bcu));
    g->ebx = arg1;
    g->edx = t123;
    g->esp = sp0 - 0x23cu;
    t125 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bd0bcu), t124);
    t126 = g->edx;
    g->ebx = rd32(sp0 - 0x22cu);
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = rd32(sp0 - 0x230u);
    g->edx = t126;
    return t125 & 0xffffff00u;
L_102a082e: ;
    COW_AT(102a082e)
    wr32(sp0 - 0x23cu, ebp);
    wr32(sp0 - 0x240u, esi);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x238u;
    t160 = cow_cdecl(g, COW_IMG(0x10299270u), 2, esi, ebp);
    t161 = g->ecx;
    eax = t160;
    ecx = t161;
L_102a0859: ;
    COW_AT(102a0859)
    ebp = eax;
L_102a085e: ;
    COW_AT(102a085e)
    t162 = rd32(arg1 + 0x58u);
    wr32(sp0 - 0x23cu, t162);
    wr32(sp0 - 0x240u, 3u);
    t163 = rd32(sp0 - 0x218u);
    wr32(sp0 - 0x244u, t163);
    wr32(sp0 - 0x248u, arg1);
    g->edx = t163;
    g->esp = sp0 - 0x238u;
    cow_thiscall_cdecl(g, COW_IMG(0x102799e0u), ecx, 4, arg1, t163, 3u, t162);
    t164 = g->ecx;
    t165 = g->edx;
    wr32(sp0 - 0x24cu, t162);
    wr32(sp0 - 0x250u, 3u);
    t166 = rd32(sp0 - 0x210u);
    wr32(sp0 - 0x254u, t166);
    wr32(sp0 - 0x258u, arg1);
    g->eax = t166;
    g->edx = t165;
    g->esp = sp0 - 0x248u;
    t167 = cow_thiscall_cdecl(g, COW_IMG(0x10279910u), t164, 4, arg1, t166, 3u, t162);
    t168 = g->edx;
    wr32(sp0 - 0x25cu, 0u);
    t169 = rd32(sp0 - 0x208u);
    wr32(sp0 - 0x260u, t169);
    wr32(sp0 - 0x264u, edi);
    wr32(sp0 - 0x268u, ebp);
    wr32(sp0 - 0x26cu, arg1);
    g->edx = t168;
    g->esp = sp0 - 0x258u;
    t170 = cow_thiscall_cdecl(g, COW_IMG(0x102795c0u), t169, 5, arg1, ebp, edi, t169, 0u);
    t171 = g->ecx;
    t172 = g->edx;
    if (rd8(sp0 - 0x221u) == 0u)
    {
        eax = (t170 & 0xffffff00u) | rd8(sp0 - 0x221u);
        ecx = t171;
        edx = t172;
        esi = t162;
    }
    else
    {
        esi = t162;
    COW_AT(102a0897)
        t173 = rd32(esi * 4u + rd32(arg1 + 0x54u)) | 0x40u;
        t174 = rd32(arg1 + 0x54u);
        wr32(esi * 4u + t174, t173);
        eax = esi * 4u + t174;
        ecx = t173;
        edx = t174;
    }
    COW_AT(102a08a5)
    if (rd8(sp0 - 0x223u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x223u);
    }
    else
    {
    COW_AT(102a08ad)
        t175 = (rd32(esi * 4u + rd32(arg1 + 0x54u)) & 0xffffff00u) | (uint8_t)(rd32(esi * 4u + rd32(arg1 + 0x54u)) | 0x80u);
        t176 = rd32(arg1 + 0x54u);
        wr32(esi * 4u + t176, t175);
        eax = esi * 4u + t176;
        ecx = t175;
    }
    COW_AT(102a08bb)
    if (rd8(sp0 - 0x226u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x226u);
    }
    else
    {
    COW_AT(102a08c3)
        t177 = (rd32(esi * 4u + rd32(arg1 + 0x54u)) & 0xffff00ffu) | (uint32_t)(uint8_t)(rd32(esi * 4u + rd32(arg1 + 0x54u)) >> 8u | 8u) << 8u;
        t178 = rd32(arg1 + 0x54u);
        wr32(esi * 4u + t178, t177);
        eax = esi * 4u + t178;
        ecx = t177;
    }
    COW_AT(102a08d1)
    if (rd8(sp0 - 0x225u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x225u);
    }
    else
    {
    COW_AT(102a08d9)
        t179 = (rd32(esi * 4u + rd32(arg1 + 0x54u)) & 0xffff00ffu) | (uint32_t)(uint8_t)(rd32(esi * 4u + rd32(arg1 + 0x54u)) >> 8u | 0x20u) << 8u;
        t180 = rd32(arg1 + 0x54u);
        wr32(esi * 4u + t180, t179);
        eax = esi * 4u + t180;
        ecx = t179;
        edx = t180;
    }
    COW_AT(102a08e7)
    if (rd8(sp0 - 0x224u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x224u);
    }
    else
    {
    COW_AT(102a08ef)
        t181 = (rd32(esi * 4u + rd32(arg1 + 0x54u)) & 0xffff00ffu) | (uint32_t)(uint8_t)(rd32(esi * 4u + rd32(arg1 + 0x54u)) >> 8u | 0x10u) << 8u;
        t182 = rd32(arg1 + 0x54u);
        wr32(esi * 4u + t182, t181);
        eax = esi * 4u + t182;
        ecx = t181;
    }
    COW_AT(102a08fd)
    if (rd8(sp0 - 0x222u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x222u);
    }
    else
    {
    COW_AT(102a0905)
        t183 = rd32(esi * 4u + rd32(arg1 + 0x54u)) | 0x10u;
        t184 = rd32(arg1 + 0x54u);
        wr32(esi * 4u + t184, t183);
        eax = esi * 4u + t184;
        ecx = t183;
    }
    COW_AT(102a0913)
    wr32(sp0 - 0x23cu, ebp);
    wr32(sp0 - 0x240u, arg1);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x234u;
    t185 = cow_thiscall_cdecl(g, COW_IMG(0x1027a240u), ecx, 3, arg1, ebp, rd32(sp0 - 0x238u));
    t186 = g->edx;
    g->ebx = rd32(sp0 - 0x22cu);
    g->esi = rd32(sp0 - 0x234u);
    g->edi = rd32(sp0 - 0x238u);
    g->ebp = rd32(sp0 - 0x230u);
    g->edx = t186;
    return (t185 & 0xffffff00u) | (uint8_t)(t185 | 0xffu);
L_102a0837: ;
    COW_AT(102a0837)
    wr32(sp0 - 0x23cu, ebp);
    wr32(sp0 - 0x240u, esi);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x238u;
    t158 = cow_cdecl(g, COW_IMG(0x10299630u), 2, esi, ebp);
    t159 = g->ecx;
    eax = t158;
    ecx = t159;
    goto L_102a0859;
L_102a0840: ;
    COW_AT(102a0840)
    wr32(sp0 - 0x23cu, ebp);
    wr32(sp0 - 0x240u, esi);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x238u;
    t156 = cow_cdecl(g, COW_IMG(0x10290fe0u), 2, esi, ebp);
    t157 = g->ecx;
    eax = t156;
    ecx = t157;
    goto L_102a0859;
L_102a0849: ;
    COW_AT(102a0849)
    wr32(sp0 - 0x23cu, ebp);
    wr32(sp0 - 0x240u, esi);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x238u;
    t154 = cow_cdecl(g, COW_IMG(0x10299ad0u), 2, esi, ebp);
    t155 = g->ecx;
    eax = t154;
    ecx = t155;
    goto L_102a0859;
L_102a0852: ;
    COW_AT(102a0852)
    wr32(sp0 - 0x23cu, ebp);
    wr32(sp0 - 0x240u, esi);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x238u;
    t152 = cow_cdecl(g, COW_IMG(0x10299860u), 2, esi, ebp);
    t153 = g->ecx;
    eax = t152;
    ecx = t153;
    goto L_102a0859;
L_102a092a: ;
    COW_AT(102a092a)
    wr32(sp0 - 0x234u, 0x3a2u);
    wr32(sp0 - 0x238u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x23cu, COW_IMG(0x103b379cu));
    g->ebx = arg1;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x234u;
    t187 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t188 = g->ecx;
    t189 = rd32(sp0 - 0x210u);
    wr32(sp0 - 0x240u, t189);
    wr32(sp0 - 0x244u, COW_IMG(0x103bcf08u));
    g->ebx = arg1;
    g->edx = t189;
    g->esp = sp0 - 0x23cu;
    t190 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcf08u), t189);
    t191 = g->edx;
    g->ebx = rd32(sp0 - 0x22cu);
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = rd32(sp0 - 0x230u);
    g->edx = t191;
    return t190 & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102a0370(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102a03a7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
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
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x230u);
        g->esp = sp0 - 0x230u;
        wr32(sp0 - 0x234u, sp0 - 0x218u);
        wr32(sp0 - 0x22cu, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x102a03d8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x230u);
        in_ebx = rd32(sp0 - 0x22cu);
        g->esp = sp0 - 0x230u;
        wr32(sp0 - 0x234u, sp0 - 0x218u);
        (void)sp0;
        return 1;
    }
    case 0x102a03f3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x230u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a0429u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x230u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a043au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x230u;
        g->ebx = arg1;
        wr32(sp0 - 0x234u, sp0 - 0x21cu);
        (void)sp0;
        return 1;
    }
    case 0x102a046bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x230u;
        g->ebx = arg1;
        wr32(sp0 - 0x234u, sp0 - 0x21cu);
        (void)sp0;
        return 1;
    }
    case 0x102a047fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x230u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a049fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x230u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a04b0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x230u;
        g->ebx = arg1;
        wr32(sp0 - 0x234u, sp0 - 0x214u);
        (void)sp0;
        return 1;
    }
    case 0x102a04e1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x230u;
        g->ebx = arg1;
        wr32(sp0 - 0x234u, sp0 - 0x214u);
        (void)sp0;
        return 1;
    }
    case 0x102a04f5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x230u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a0513u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_238;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        loc_238 = rd32(sp0 - 0x238u);
        g->esp = sp0 - 0x238u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a0534u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x230u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a0545u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x230u;
        g->ebx = arg1;
        wr32(sp0 - 0x234u, sp0 - 0x210u);
        (void)sp0;
        return 1;
    }
    case 0x102a0576u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x230u;
        g->ebx = arg1;
        wr32(sp0 - 0x234u, sp0 - 0x210u);
        (void)sp0;
        return 1;
    }
    case 0x102a0587u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x230u;
        g->ebx = arg1;
        wr32(sp0 - 0x234u, sp0 - 0x20cu);
        (void)sp0;
        return 1;
    }
    case 0x102a05b8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x230u;
        g->ebx = arg1;
        wr32(sp0 - 0x234u, sp0 - 0x20cu);
        (void)sp0;
        return 1;
    }
    case 0x102a05cdu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x230u;
        g->ebx = arg1;
        wr32(sp0 - 0x234u, sp0 - 0x220u);
        (void)sp0;
        return 1;
    }
    case 0x102a05e3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x230u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a05edu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x230u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a0603u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x230u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a060du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x230u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a0623u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x230u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a062du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x230u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a0643u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x230u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a064du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x230u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a0663u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x230u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a066du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x230u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a0683u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x230u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a068du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x230u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a06a3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x230u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a06c3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x230u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a06d9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x230u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a06f9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x230u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a0713u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x230u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a0731u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_238;
        uint32_t loc_244;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        loc_244 = rd32(sp0 - 0x244u);
        loc_238 = rd32(sp0 - 0x238u);
        g->esp = sp0 - 0x244u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a073eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x230u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a0753u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x230u;
        g->ebx = arg1;
        wr32(sp0 - 0x234u, sp0 - 0x220u);
        (void)sp0;
        return 1;
    }
    case 0x102a078bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x230u;
        g->ebx = arg1;
        wr32(sp0 - 0x240u, sp0 - 0x200u);
        wr32(sp0 - 0x23cu, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x102a07a2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x230u;
        g->ebx = arg1;
        wr32(sp0 - 0x240u, sp0 - 0x200u);
        wr32(sp0 - 0x23cu, sp0 - 0x200u);
        wr32(sp0 - 0x234u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x102a07e1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x238u;
        g->ebx = arg1;
        wr32(sp0 - 0x248u, sp0 - 0x204u);
        wr32(sp0 - 0x23cu, sp0 - 0x208u);
        (void)sp0;
        return 1;
    }
    case 0x102a07eau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x238u;
        g->ebx = arg1;
        wr32(sp0 - 0x248u, sp0 - 0x204u);
        wr32(sp0 - 0x23cu, sp0 - 0x208u);
        (void)sp0;
        return 1;
    }
    case 0x102a07f6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x238u;
        g->ebx = arg1;
        wr32(sp0 - 0x248u, sp0 - 0x204u);
        wr32(sp0 - 0x23cu, sp0 - 0x208u);
        (void)sp0;
        return 1;
    }
    case 0x102a07fdu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x230u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a082eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x238u;
        g->ebx = arg1;
        wr32(sp0 - 0x248u, sp0 - 0x204u);
        wr32(sp0 - 0x23cu, sp0 - 0x208u);
        (void)sp0;
        return 1;
    }
    case 0x102a0837u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x238u;
        g->ebx = arg1;
        wr32(sp0 - 0x248u, sp0 - 0x204u);
        wr32(sp0 - 0x23cu, sp0 - 0x208u);
        (void)sp0;
        return 1;
    }
    case 0x102a0840u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x238u;
        g->ebx = arg1;
        wr32(sp0 - 0x248u, sp0 - 0x204u);
        wr32(sp0 - 0x23cu, sp0 - 0x208u);
        (void)sp0;
        return 1;
    }
    case 0x102a0849u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x238u;
        g->ebx = arg1;
        wr32(sp0 - 0x248u, sp0 - 0x204u);
        wr32(sp0 - 0x23cu, sp0 - 0x208u);
        (void)sp0;
        return 1;
    }
    case 0x102a0852u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x238u;
        g->ebx = arg1;
        wr32(sp0 - 0x248u, sp0 - 0x204u);
        wr32(sp0 - 0x23cu, sp0 - 0x208u);
        (void)sp0;
        return 1;
    }
    case 0x102a0859u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x240u;
        g->ebx = arg1;
        wr32(sp0 - 0x248u, sp0 - 0x204u);
        (void)sp0;
        return 1;
    }
    case 0x102a085eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x238u;
        g->ebx = arg1;
        wr32(sp0 - 0x248u, sp0 - 0x204u);
        (void)sp0;
        return 1;
    }
    case 0x102a0897u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x238u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a08a5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x238u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a08adu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x238u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a08bbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x238u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a08c3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x238u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a08d1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x238u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a08d9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x238u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a08e7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x238u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a08efu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x238u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a08fdu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x238u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a0905u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x238u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a0913u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x238u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a092au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x230u;
        g->ebx = arg1;
        wr32(sp0 - 0x240u, sp0 - 0x200u);
        wr32(sp0 - 0x23cu, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102a0370(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102a0370(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
