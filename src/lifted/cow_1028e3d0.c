/* f_0x1028e3d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_1028e3d0(Guest* g)
{
    double d197;
    double d216;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_18;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
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
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 88u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1028e3fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1028e3fd;
    case 0x1028e4e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1028e4e4;
    case 0x1028e4edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1028e4ed;
    case 0x1028e4efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1028e4ef;
    case 0x1028e4f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1028e4f9;
    case 0x1028e4feu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1028e4fe;
    case 0x1028e508u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1028e508;
    case 0x1028e50du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1028e50d;
    case 0x1028e517u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1028e517;
    case 0x1028e528u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1028e528;
    case 0x1028e55bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_1028e55b;
    case 0x1028e55du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1028e55d;
    case 0x1028e5aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1028e5ae;
    case 0x1028e61au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); goto E_1028e61a;
    case 0x1028e6a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); goto E_1028e6a3;
    case 0x1028e6deu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); goto E_1028e6de;
    case 0x1028e705u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); goto E_1028e705;
    case 0x1028e712u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); goto E_1028e712;
    case 0x1028e716u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); goto E_1028e716;
    case 0x1028e723u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); goto E_1028e723;
    case 0x1028e728u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); goto E_1028e728;
    case 0x1028e733u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); goto E_1028e733;
    case 0x1028e73bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); goto E_1028e73b;
    case 0x1028e78eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); goto E_1028e78e;
    case 0x1028e7adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); goto E_1028e7ad;
    case 0x1028e83du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); goto E_1028e83d;
    case 0x1028e865u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1028e865;
    case 0x1028e8a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1028e8a3;
    case 0x1028e8a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1028e8a5;
    case 0x1028e90fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1028e90f;
    case 0x1028e913u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1028e913;
    case 0x1028e997u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1028e997;
    default: break;
    }
#endif

    COW_AT(1028e3d0)
    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_ebp);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    wr32(sp0 - 0x14u, arg3);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    t4 = rd32(sp0 + 4u);
    wr32(sp0 - 0x18u, t4);
    wr32(sp0 - 0x1cu, COW_IMG(0x103ba93cu));
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 0x14u;
    t5 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103ba93cu), t4);
    t6 = g->ecx;
    t7 = g->edx;
    if ((int32_t)rd32(sp0 + 8u) < 1)
    {
        eax = t5;
        ecx = t6;
        edx = t7;
        ebx = rd32(sp0 + 8u);
        esi = t4;
    }
    else
    {
        eax = t5;
        ecx = t6;
        edx = t7;
        ebx = rd32(sp0 + 8u);
        esi = t4;
    COW_AT(1028e3fd)
        wr32(sp0 - 0x14u, arg3 + 1u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, in_edi, in_esi);
        t8 = g->ecx;
        t9 = g->edx;
        t10 = rd32(esi + 0x14u);
        wr32(sp0 - 0x18u, t10);
        wr32(sp0 - 0x1cu, COW_IMG(0x103ba92cu));
        g->ebx = ebx;
        g->eax = t10;
        g->ecx = t8;
        g->edx = t9;
        g->esp = sp0 - 0x14u;
        t11 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103ba92cu), t10);
        t12 = g->ecx;
        t13 = g->edx;
        wr32(sp0 - 0x20u, arg3 + 1u);
        g->edx = t13;
        t14 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103ba92cu), rd32(sp0 - 0x18u));
        t15 = g->edx;
        t16 = rd32(esi + 0x18u);
        wr32(sp0 - 0x24u, t16);
        wr32(sp0 - 0x28u, COW_IMG(0x103ba91cu));
        g->ebx = ebx;
        g->ecx = t16;
        g->edx = t15;
        g->esp = sp0 - 0x20u;
        t17 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103ba91cu), t16);
        t18 = g->ecx;
        t19 = g->edx;
        wr32(sp0 - 0x2cu, arg3 + 1u);
        g->ecx = t18;
        t20 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103ba91cu), rd32(sp0 - 0x24u));
        t21 = g->ecx;
        t22 = rd32(esi + 0x1cu);
        wr32(sp0 - 0x30u, t22);
        wr32(sp0 - 0x34u, COW_IMG(0x103ba90cu));
        g->ebx = ebx;
        g->ecx = t21;
        g->edx = t22;
        g->esp = sp0 - 0x2cu;
        t23 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103ba90cu), t22);
        t24 = g->ecx;
        t25 = g->edx;
        wr32(sp0 - 0x38u, arg3 + 1u);
        g->ecx = t24;
        g->edx = t25;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103ba90cu), rd32(sp0 - 0x30u));
        t26 = g->ecx;
        t27 = g->edx;
        t28 = rd32(esi + 0x20u);
        wr32(sp0 - 0x3cu, t28);
        wr32(sp0 - 0x40u, COW_IMG(0x103ba8fcu));
        g->ebx = ebx;
        g->eax = t28;
        g->ecx = t26;
        g->edx = t27;
        g->esp = sp0 - 0x38u;
        t29 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103ba8fcu), t28);
        t30 = g->ecx;
        t31 = g->edx;
        wr32(sp0 - 0x44u, arg3 + 1u);
        g->edx = t31;
        t32 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103ba8fcu), rd32(sp0 - 0x3cu));
        t33 = g->edx;
        t34 = rd32(esi + 0x24u);
        wr32(sp0 - 0x48u, t34);
        wr32(sp0 - 0x4cu, COW_IMG(0x103ba8ecu));
        g->ebx = ebx;
        g->ecx = t34;
        g->edx = t33;
        g->esp = sp0 - 0x44u;
        t35 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103ba8ecu), t34);
        t36 = g->ecx;
        t37 = g->edx;
        wr32(sp0 - 0x50u, arg3 + 1u);
        g->ecx = t36;
        t38 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103ba8ecu), rd32(sp0 - 0x48u));
        t39 = g->ecx;
        t40 = rd8(esi + 0x2cu);
        wr32(sp0 - 0x14u, t40);
        wr32(sp0 - 0x18u, COW_IMG(0x103ba8dcu));
        g->ebx = ebx;
        g->ecx = t39;
        g->edx = t40;
        g->esp = sp0 - 0x10u;
        t41 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103ba8dcu), t40);
        t42 = g->ecx;
        t43 = g->edx;
        wr32(sp0 - 0x1cu, arg3 + 1u);
        g->ecx = t42;
        g->edx = t43;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103ba8dcu), rd32(sp0 - 0x14u));
        t44 = g->ecx;
        t45 = g->edx;
        t46 = rd32(esi + 0x30u);
        wr32(sp0 - 0x20u, t46);
        wr32(sp0 - 0x24u, COW_IMG(0x103ba8ccu));
        g->ebx = ebx;
        g->eax = t46;
        g->ecx = t44;
        g->edx = t45;
        g->esp = sp0 - 0x1cu;
        t47 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103ba8ccu), t46);
        t48 = g->ecx;
        t49 = g->edx;
        wr32(sp0 - 0x28u, arg3 + 1u);
        g->edx = t49;
        t50 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103ba8ccu), rd32(sp0 - 0x20u));
        t51 = g->edx;
        t52 = rd32(esi + 0x34u);
        wr32(sp0 - 0x2cu, t52);
        wr32(sp0 - 0x30u, COW_IMG(0x103ba8bcu));
        g->ebx = ebx;
        g->ecx = t52;
        g->edx = t51;
        g->esp = sp0 - 0x28u;
        t53 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103ba8bcu), t52);
        t54 = g->ecx;
        t55 = g->edx;
        wr32(sp0 - 0x34u, arg3 + 1u);
        g->ecx = t54;
        t56 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103ba8bcu), rd32(sp0 - 0x2cu));
        t57 = g->ecx;
        t58 = rd32(esi + 0x40u);
        wr32(sp0 - 0x38u, t58);
        wr32(sp0 - 0x3cu, COW_IMG(0x103ba8acu));
        g->ebx = ebx;
        g->ecx = t57;
        g->edx = t58;
        g->esp = sp0 - 0x34u;
        t59 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103ba8acu), t58);
        t60 = g->ecx;
        t61 = g->edx;
        wr32(sp0 - 0x40u, arg3 + 1u);
        g->ecx = t60;
        g->edx = t61;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103ba8acu), rd32(sp0 - 0x38u));
        t62 = g->ecx;
        t63 = g->edx;
        t64 = rd32(esi + 0x44u);
        wr32(sp0 - 0x44u, t64);
        wr32(sp0 - 0x48u, COW_IMG(0x103ba89cu));
        g->ebx = ebx;
        g->eax = t64;
        g->ecx = t62;
        g->edx = t63;
        g->esp = sp0 - 0x40u;
        t65 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103ba89cu), t64);
        t66 = g->ecx;
        t67 = g->edx;
        wr32(sp0 - 0x4cu, arg3 + 1u);
        g->edx = t67;
        t68 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103ba89cu), rd32(sp0 - 0x44u));
        t69 = g->edx;
        t70 = rd32(esi + 0x48u);
        wr32(sp0 - 0x50u, t70);
        wr32(sp0 - 0x54u, COW_IMG(0x103ba88cu));
        g->ebx = ebx;
        g->ecx = t70;
        g->edx = t69;
        g->esp = sp0 - 0x4cu;
        t71 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103ba88cu), t70);
        t72 = g->ecx;
        t73 = g->edx;
        eax = t71;
        ecx = t72;
        edx = t73;
    }
    COW_AT(1028e4e4)
    if ((int32_t)ebx < 2)
    {
        loc_4 = in_ebx;
        loc_8 = in_ebp;
        loc_c = in_esi;
        loc_10 = in_edi;
    }
    else
    {
        zf = ebx == 2u;
    COW_AT(1028e4ed)
        if (!zf)
        {
    COW_AT(1028e4f9)
            if (ebx != 3u)
            {
    COW_AT(1028e508)
                if (ebx != 4u)
                {
    COW_AT(1028e517)
                    t74 = (-(ebx != 5u) & 3u) + 3u;
                    wr32(sp0 + 4u, t74);
                    ebx = t74;
                }
                else
                {
    COW_AT(1028e50d)
                    wr32(sp0 + 4u, 2u);
                }
            }
            else
            {
    COW_AT(1028e4fe)
                wr32(sp0 + 4u, 1u);
            }
        }
        else
        {
    COW_AT(1028e4ef)
            wr32(sp0 + 4u, 0u);
        }
    COW_AT(1028e528)
        wr32(sp0 - 0x14u, arg3 + 1u);
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp0 - 8u;
        t75 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, in_edi, in_esi);
        t76 = g->ecx;
        t77 = rd32(esi + 0x14u);
        wr32(sp0 - 0x18u, t77);
        wr32(sp0 - 0x1cu, COW_IMG(0x103ba87cu));
        g->ebx = ebx;
        g->ecx = t76;
        g->edx = t77;
        g->esp = sp0 - 0x14u;
        t78 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103ba87cu), t77);
        t79 = g->ecx;
        t80 = g->edx;
        wr32(sp0 - 0x20u, arg3 + 1u);
        g->ecx = t79;
        g->edx = t80;
        t81 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103ba87cu), rd32(sp0 - 0x18u));
        t82 = g->ecx;
        t83 = g->edx;
        wr32(sp0 - 0x24u, COW_IMG(0x103ba878u));
        g->ebx = ebx;
        g->ecx = t82;
        g->edx = t83;
        g->esp = sp0 - 0x1cu;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103ba878u), arg3 + 1u);
        t84 = g->ecx;
        t85 = g->edx;
        if ((int32_t)rd32(esi + 0x14u) <= 0)
        {
            ecx = t84;
            edx = t85;
            edi = 0u;
        }
        else
        {
            ecx = t84;
            edx = t85;
    COW_AT(1028e55b)
            ebx = 0u;
            edi = 0u;
L_1028e55d: ;
    COW_AT(1028e55d)
            wr32(sp0 - 0x14u, arg3 + 2u);
            g->eax = arg3 + 2u;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t86 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
            t87 = g->ecx;
            t88 = g->edx;
            wr32(sp0 - 0x18u, edi);
            wr32(sp0 - 0x1cu, COW_IMG(0x103ba870u));
            g->ebx = ebx;
            g->ecx = t87;
            g->edx = t88;
            g->esp = sp0 - 0x14u;
            cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103ba870u), edi);
            t89 = g->ecx;
            t90 = g->edx;
            wr32(sp0 - 0x20u, arg3 + 3u);
            g->edx = t90;
            cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 3u, COW_IMG(0x103ba870u), rd32(sp0 - 0x18u));
            t91 = g->edx;
            t92 = rd32(ebx + rd32(esi + 0x18u));
            wr32(sp0 - 0x24u, t92);
            wr32(sp0 - 0x28u, COW_IMG(0x103ba864u));
            g->ebx = ebx;
            g->esp = sp0 - 0x20u;
            cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103ba864u), t92);
            wr32(sp0 - 0x2cu, arg3 + 4u);
            t93 = rd32(sp0 + 4u);
            wr32(sp0 - 0x30u, t93);
            t94 = rd32(ebx + rd32(esi + 0x18u));
            wr32(sp0 - 0x34u, t94);
            g->ecx = t94;
            g->edx = t93;
            g->esp = sp0 - 0x18u;
            cow_cdecl(g, COW_IMG(0x10291190u), 7, t94, t93, arg3 + 4u, COW_IMG(0x103ba864u), rd32(sp0 - 0x24u), arg3 + 3u, COW_IMG(0x103ba870u));
            t95 = g->ecx;
            t96 = g->edx;
            if ((int32_t)(edi + 1u) < (int32_t)rd32(esi + 0x14u))
            {
                ecx = t95;
                edx = t96;
                ebx = ebx + 0xcu;
                edi = edi + 1u;
                goto L_1028e55d;
            }
            ecx = t95;
            edx = t96;
            ebx = ebx + 0xcu;
            edi = edi + 1u;
        }
    COW_AT(1028e5ae)
        wr32(sp0 - 0x14u, arg3 + 3u);
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 3u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
        t97 = rd32(edi * 0xcu + rd32(esi + 0x18u) + 4u);
        wr32(sp0 - 0x18u, t97);
        wr32(sp0 - 0x1cu, COW_IMG(0x103ba858u));
        g->ebx = ebx;
        g->eax = rd32(esi + 0x18u);
        g->ecx = t97;
        g->edx = edi * 3u;
        t98 = rd32(esi + 0x18u);
        g->esp = sp0 - 0x14u;
        t99 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103ba858u), t97);
        t100 = g->ecx;
        t101 = g->edx;
        wr32(sp0 - 0x20u, arg3 + 2u);
        g->ecx = t100;
        g->edx = t101;
        t102 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103ba858u), rd32(sp0 - 0x18u));
        t103 = g->ecx;
        t104 = g->edx;
        wr32(sp0 - 0x24u, COW_IMG(0x103b3238u));
        g->ebx = arg3 + 2u;
        g->ecx = t103;
        g->edx = t104;
        g->esp = sp0 - 0x1cu;
        t105 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3238u), arg3 + 2u);
        t106 = g->ecx;
        t107 = g->edx;
        wr32(sp0 - 0x28u, arg3 + 1u);
        g->ecx = t106;
        t108 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103b3238u), arg3 + 2u);
        t109 = g->ecx;
        t110 = rd32(esi + 0x20u);
        wr32(sp0 - 0x2cu, t110);
        wr32(sp0 - 0x30u, COW_IMG(0x103ba848u));
        g->ebx = arg3 + 2u;
        g->ecx = t109;
        g->edx = t110;
        g->esp = sp0 - 0x28u;
        t111 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103ba848u), t110);
        t112 = g->ecx;
        t113 = g->edx;
        wr32(sp0 - 0x34u, arg3 + 1u);
        g->ecx = t112;
        g->edx = t113;
        t114 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103ba848u), rd32(sp0 - 0x2cu));
        t115 = g->ecx;
        t116 = g->edx;
        wr32(sp0 - 0x38u, COW_IMG(0x103ba878u));
        g->ebx = arg3 + 2u;
        g->ecx = t115;
        g->edx = t116;
        g->esp = sp0 - 0x30u;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103ba878u), arg3 + 1u);
        t117 = g->ecx;
        t118 = g->edx;
        t119 = rd32(esi + 0x20u);
        wr32(sp0 + 8u, 0u);
        if ((int32_t)t119 <= 0)
        {
            ecx = t117;
            edx = t118;
            goto L_1028e6a3;
        }
        eax = t119;
        ecx = t117;
        edx = t118;
        edi = 0u;
L_1028e61a: ;
    COW_AT(1028e61a)
        wr32(sp0 - 0x14u, arg3 + 2u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
        t120 = g->ecx;
        t121 = g->edx;
        t122 = rd32(sp0 + 8u);
        wr32(sp0 - 0x18u, t122);
        wr32(sp0 - 0x1cu, COW_IMG(0x103ba870u));
        g->ebx = arg3 + 2u;
        g->ecx = t120;
        g->edx = t121;
        g->esp = sp0 - 0x14u;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103ba870u), t122);
        t123 = g->ecx;
        t124 = g->edx;
        wr32(sp0 - 0x20u, arg3 + 3u);
        g->eax = arg3 + 3u;
        t125 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 3u, COW_IMG(0x103ba870u), rd32(sp0 - 0x18u));
        t126 = rd32(edi + rd32(esi + 0x24u));
        wr32(sp0 - 0x24u, t126);
        wr32(sp0 - 0x28u, COW_IMG(0x103ba864u));
        g->ebx = arg3 + 2u;
        g->esp = sp0 - 0x20u;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103ba864u), t126);
        wr32(sp0 - 0x2cu, arg3 + 4u);
        t127 = rd32(sp0 + 4u);
        wr32(sp0 - 0x30u, t127);
        t128 = rd32(edi + rd32(esi + 0x24u));
        wr32(sp0 - 0x34u, t128);
        g->ecx = rd32(esi + 0x24u);
        g->edx = t128;
        t129 = rd32(esi + 0x24u);
        g->esp = sp0 - 0x18u;
        cow_cdecl(g, COW_IMG(0x1026e370u), 7, t128, t127, arg3 + 4u, COW_IMG(0x103ba864u), rd32(sp0 - 0x24u), arg3 + 3u, COW_IMG(0x103ba870u));
        t130 = g->ecx;
        t131 = g->edx;
        wr32(sp0 - 0x38u, arg3 + 3u);
        g->edx = t131;
        g->esp = sp0 - 0x2cu;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 3u, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
        t132 = g->edx;
        t133 = rd32(edi + rd32(esi + 0x24u) + 4u);
        wr32(sp0 - 0x3cu, t133);
        wr32(sp0 - 0x40u, COW_IMG(0x103ba858u));
        g->ebx = arg3 + 2u;
        g->eax = rd32(esi + 0x24u);
        g->ecx = t133;
        g->edx = t132;
        t134 = rd32(esi + 0x24u);
        g->esp = sp0 - 0x38u;
        t135 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103ba858u), t133);
        t136 = g->ecx;
        t137 = g->edx;
        wr32(sp0 - 0x44u, arg3 + 2u);
        g->ecx = t136;
        g->edx = t137;
        t138 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103ba858u), rd32(sp0 - 0x3cu));
        t139 = g->ecx;
        t140 = g->edx;
        wr32(sp0 - 0x48u, COW_IMG(0x103b3238u));
        g->ebx = arg3 + 2u;
        g->edx = t140;
        g->esp = sp0 - 0x40u;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3238u), arg3 + 2u);
        t141 = g->edx;
        t142 = rd32(sp0 + 8u) + 1u;
        t143 = rd32(esi + 0x20u);
        t144 = rd32(sp0 + 8u);
        wr32(sp0 + 8u, t142);
        if ((int32_t)(t144 + 1u) < (int32_t)t143)
        {
            eax = t142;
            ecx = t143;
            edx = t141;
            edi = edi + 0xcu;
            goto L_1028e61a;
        }
        ecx = t143;
        edx = t141;
L_1028e6a3: ;
    COW_AT(1028e6a3)
        wr32(sp0 - 0x14u, arg3 + 1u);
        g->eax = arg3 + 1u;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t145 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
        t146 = g->ecx;
        t147 = g->edx;
        wr32(sp0 - 0x18u, COW_IMG(0x103b3238u));
        g->ebx = arg3 + 2u;
        g->ecx = t146;
        g->edx = t147;
        g->esp = sp0 - 0x10u;
        t148 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3238u), arg3 + 1u);
        t149 = g->ecx;
        t150 = g->edx;
        wr32(sp0 - 0x1cu, arg3);
        g->ecx = t149;
        t151 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3, COW_IMG(0x103b3238u), arg3 + 1u);
        t152 = g->ecx;
        t153 = rd32(esi + 0x34u);
        wr32(sp0 - 0x20u, t153);
        wr32(sp0 - 0x24u, COW_IMG(0x103ba838u));
        g->ebx = arg3 + 2u;
        g->ecx = t152;
        g->edx = t153;
        g->esp = sp0 - 0x1cu;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103ba838u), t153);
        t154 = g->ecx;
        t155 = g->edx;
        t156 = rd32(esi + 0x34u);
        wr32(sp0 + 8u, 0u);
        if ((int32_t)t156 <= 0)
        {
            eax = t156;
            ecx = t154;
            edx = t155;
            goto L_1028e83d;
        }
        ecx = t154;
        edx = t155;
        edi = 0u;
L_1028e6de: ;
    COW_AT(1028e6de)
        wr32(sp0 - 0x14u, arg3 + 1u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
        t157 = g->ecx;
        t158 = g->edx;
        t159 = rd32(sp0 + 8u);
        wr32(sp0 - 0x18u, t159);
        wr32(sp0 - 0x1cu, COW_IMG(0x103ba828u));
        g->ebx = arg3 + 2u;
        g->edx = t158;
        g->esp = sp0 - 0x14u;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103ba828u), t159);
        t160 = g->edx;
        if (rd32(edi + rd32(esi + 0x40u) + 0x28u) != 2u)
        {
            eax = rd32(edi + rd32(esi + 0x40u) + 0x28u);
            ecx = rd32(esi + 0x40u);
            edx = t160;
            goto L_1028e712;
        }
        eax = rd32(edi + rd32(esi + 0x40u) + 0x28u);
        ecx = rd32(esi + 0x40u);
        edx = t160;
    COW_AT(1028e705)
        wr32(sp0 - 0x14u, arg3 + 2u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t161 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
        t162 = g->ecx;
        t163 = g->edx;
        wr32(sp0 - 0x18u, COW_IMG(0x103ba810u));
        eax = t161;
        ecx = t162;
        edx = t163;
        loc_18 = COW_IMG(0x103ba810u);
L_1028e733: ;
    COW_AT(1028e733)
        g->ebx = arg3 + 2u;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t170 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, loc_18, rd32(sp0 - 0x14u));
        t171 = g->ecx;
        t172 = g->edx;
        eax = t170;
        ecx = t171;
        edx = t172;
L_1028e73b: ;
    COW_AT(1028e73b)
        wr32(sp0 - 0x14u, arg3 + 2u);
        g->ecx = ecx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
        t173 = g->ecx;
        t174 = rd32(edi + rd32(esi + 0x40u));
        wr32(sp0 - 0x18u, t174);
        wr32(sp0 - 0x1cu, COW_IMG(0x103ba7c0u));
        g->ebx = arg3 + 2u;
        g->eax = t174;
        g->ecx = t173;
        g->edx = rd32(esi + 0x40u);
        t175 = rd32(esi + 0x40u);
        g->esp = sp0 - 0x14u;
        t176 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103ba7c0u), t174);
        t177 = g->ecx;
        t178 = g->edx;
        wr32(sp0 - 0x20u, arg3 + 2u);
        t179 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103ba7c0u), rd32(sp0 - 0x18u));
        t180 = rd32(edi + rd32(esi + 0x40u) + 4u);
        wr32(sp0 - 0x24u, t180);
        wr32(sp0 - 0x28u, COW_IMG(0x103ba7acu));
        g->ebx = arg3 + 2u;
        g->ecx = rd32(esi + 0x40u);
        g->edx = t180;
        t181 = rd32(esi + 0x40u);
        g->esp = sp0 - 0x20u;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103ba7acu), t180);
        t182 = g->ecx;
        t183 = g->edx;
        wr32(sp0 - 0x2cu, arg3 + 3u);
        g->eax = arg3 + 3u;
        g->ecx = t182;
        g->edx = t183;
        t184 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 3u, COW_IMG(0x103ba7acu), rd32(sp0 - 0x24u));
        t185 = g->ecx;
        t186 = g->edx;
        wr32(sp0 - 0x30u, COW_IMG(0x103ba794u));
        g->ebx = arg3 + 2u;
        g->edx = t186;
        g->esp = sp0 - 0x28u;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103ba794u), arg3 + 3u);
        t187 = g->edx;
        if ((int32_t)rd32(edi + rd32(esi + 0x40u) + 4u) <= 0)
        {
            eax = edi + rd32(esi + 0x40u);
            ecx = rd32(edi + rd32(esi + 0x40u) + 4u);
            edx = t187;
            ebx = 0u;
            goto L_1028e7ad;
        }
        eax = edi + rd32(esi + 0x40u);
        ebx = 0u;
L_1028e78e: ;
    COW_AT(1028e78e)
        t188 = rd32(ebx * 4u + rd32(eax + 8u));
        wr32(sp0 - 0x14u, t188);
        wr32(sp0 - 0x18u, COW_IMG(0x103ba78cu));
        g->ebx = ebx;
        g->ecx = rd32(eax + 8u);
        g->edx = t188;
        t189 = rd32(eax + 8u);
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103ba78cu), t188);
        t190 = g->ecx;
        t191 = g->edx;
        if ((int32_t)(ebx + 1u) < (int32_t)rd32(edi + rd32(esi + 0x40u) + 4u))
        {
            eax = edi + rd32(esi + 0x40u);
            ebx = ebx + 1u;
            goto L_1028e78e;
        }
        eax = edi + rd32(esi + 0x40u);
        ecx = t190;
        edx = t191;
        ebx = ebx + 1u;
L_1028e7ad: ;
    COW_AT(1028e7ad)
        wr32(sp0 - 0x14u, COW_IMG(0x10350e4cu));
        g->ebx = ebx;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t192 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x10350e4cu), rd32(sp0 - 0x10u));
        t193 = g->ecx;
        t194 = g->edx;
        wr32(sp0 - 0x18u, arg3 + 2u);
        g->edx = t194;
        t195 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x10350e4cu), rd32(sp0 - 0x10u));
        t196 = g->edx;
        d197 = (double)rdf32(edi + rd32(esi + 0x40u) + 0x10u);
        wrf64(sp0 - 0x18u, d197);
        wr32(sp0 - 0x1cu, COW_IMG(0x103ba77cu));
        g->ebx = arg3 + 2u;
        g->ecx = rd32(esi + 0x40u);
        g->edx = t196;
        t198 = rd32(esi + 0x40u);
        g->esp = sp0 - 0x14u;
        t199 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103ba77cu), cow_dlo(d197));
        t200 = g->ecx;
        t201 = g->edx;
        wr32(sp0 - 0x20u, arg3 + 2u);
        g->ecx = t200;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103ba77cu), rd32(sp0 - 0x18u));
        t202 = g->ecx;
        t203 = rd32(edi + rd32(esi + 0x40u) + 0x14u);
        wr32(sp0 - 0x24u, t203);
        wr32(sp0 - 0x28u, COW_IMG(0x103ba764u));
        g->ebx = arg3 + 2u;
        g->eax = t203;
        g->ecx = t202;
        g->edx = rd32(esi + 0x40u);
        t204 = rd32(esi + 0x40u);
        g->esp = sp0 - 0x20u;
        t205 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103ba764u), t203);
        t206 = g->ecx;
        t207 = g->edx;
        wr32(sp0 - 0x2cu, arg3 + 2u);
        t208 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103ba764u), rd32(sp0 - 0x24u));
        t209 = rd8(edi + rd32(esi + 0x40u) + 0x24u);
        wr32(sp0 - 0x30u, t209);
        wr32(sp0 - 0x34u, COW_IMG(0x103ba748u));
        g->ebx = arg3 + 2u;
        g->ecx = rd32(esi + 0x40u);
        g->edx = t209;
        t210 = rd32(esi + 0x40u);
        g->esp = sp0 - 0x2cu;
        t211 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103ba748u), t209);
        t212 = g->ecx;
        t213 = g->edx;
        wr32(sp0 - 0x38u, arg3 + 2u);
        g->ecx = t212;
        g->edx = t213;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103ba748u), rd32(sp0 - 0x30u));
        t214 = g->ecx;
        t215 = g->edx;
        d216 = (double)rdf32(edi + rd32(esi + 0x40u) + 0x18u);
        wrf64(sp0 - 0x18u, d216);
        wr32(sp0 - 0x1cu, COW_IMG(0x103ba72cu));
        g->ebx = arg3 + 2u;
        g->edx = t215;
        g->esp = sp0 - 0x14u;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103ba72cu), cow_dlo(d216));
        t217 = g->edx;
        t218 = rd32(sp0 + 8u) + 1u;
        t219 = rd32(esi + 0x34u);
        t220 = rd32(sp0 + 8u);
        wr32(sp0 + 8u, t218);
        if ((int32_t)(t220 + 1u) < (int32_t)t219)
        {
            ecx = t219;
            edx = t217;
            edi = edi + 0x30u;
            goto L_1028e6de;
        }
        eax = t218;
        ecx = t219;
        edx = t217;
L_1028e83d: ;
    COW_AT(1028e83d)
        wr32(sp0 - 0x14u, arg3);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t221 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
        t222 = g->edx;
        t223 = rd32(esi + 0x44u);
        wr32(sp0 - 0x18u, t223);
        wr32(sp0 - 0x1cu, COW_IMG(0x103ba71cu));
        g->ebx = arg3 + 2u;
        g->ecx = t223;
        g->edx = t222;
        g->esp = sp0 - 0x14u;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103ba71cu), t223);
        t224 = g->ecx;
        t225 = g->edx;
        t226 = rd32(esi + 0x44u);
        wr32(sp0 + 8u, 0u);
        if ((int32_t)t226 <= 0)
        {
            eax = t226;
            edx = t225;
            loc_4 = rd32(sp0 - 4u);
            loc_8 = rd32(sp0 - 8u);
            loc_c = rd32(sp0 - 0xcu);
            loc_10 = rd32(sp0 - 0x10u);
            goto L_1028e997;
        }
        ecx = t224;
        edx = t225;
        ebx = arg3 + 2u;
        edi = 0u;
L_1028e865: ;
    COW_AT(1028e865)
        wr32(sp0 - 0x14u, arg3 + 1u);
        g->ecx = ecx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
        t227 = g->ecx;
        t228 = rd32(edi + rd32(esi + 0x48u) + 4u);
        wr32(sp0 - 0x18u, t228);
        wr32(sp0 - 0x1cu, COW_IMG(0x103ba70cu));
        g->ebx = ebx;
        g->ecx = t227;
        g->edx = rd32(esi + 0x48u);
        t229 = rd32(esi + 0x48u);
        g->esp = sp0 - 0x14u;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103ba70cu), t228);
        t230 = g->ecx;
        t231 = g->edx;
        wr32(sp0 - 0x20u, arg3 + 2u);
        g->eax = arg3 + 2u;
        g->ecx = t230;
        g->edx = t231;
        t232 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, COW_IMG(0x103ba70cu), rd32(sp0 - 0x18u));
        t233 = g->ecx;
        t234 = g->edx;
        wr32(sp0 - 0x24u, COW_IMG(0x103ba878u));
        g->ebx = ebx;
        g->edx = t234;
        g->esp = sp0 - 0x1cu;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103ba878u), arg3 + 2u);
        t235 = g->edx;
        if ((int32_t)rd32(edi + rd32(esi + 0x48u) + 4u) <= 0)
        {
            ecx = rd32(esi + 0x48u);
            edx = t235;
            ebx = 0u;
        }
        else
        {
            ecx = rd32(esi + 0x48u);
    COW_AT(1028e8a3)
            ebx = 0u;
            ebp = 0u;
L_1028e8a5: ;
    COW_AT(1028e8a5)
            wr32(sp0 - 0x14u, arg3 + 3u);
            g->eax = arg3 + 3u;
            g->ecx = ecx;
            g->edx = arg3;
            g->esp = sp0 - 8u;
            t236 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 3u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
            t237 = g->ecx;
            t238 = g->edx;
            wr32(sp0 - 0x18u, ebx);
            wr32(sp0 - 0x1cu, COW_IMG(0x103ba870u));
            g->ebx = ebx;
            g->ecx = t237;
            g->edx = t238;
            g->esp = sp0 - 0x14u;
            cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103ba870u), ebx);
            t239 = g->ecx;
            t240 = g->edx;
            wr32(sp0 - 0x20u, arg3 + 4u);
            cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 4u, COW_IMG(0x103ba870u), rd32(sp0 - 0x18u));
            t241 = rd32(ebp + rd32(edi + rd32(esi + 0x48u) + 0x28u));
            wr32(sp0 - 0x24u, t241);
            wr32(sp0 - 0x28u, COW_IMG(0x103ba864u));
            g->ebx = ebx;
            g->esp = sp0 - 0x20u;
            cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103ba864u), t241);
            wr32(sp0 - 0x2cu, arg3 + 5u);
            t242 = rd32(sp0 + 4u);
            wr32(sp0 - 0x30u, t242);
            t243 = rd32(ebp + rd32(edi + rd32(esi + 0x48u) + 0x28u));
            wr32(sp0 - 0x34u, t243);
            g->ecx = rd32(edi + rd32(esi + 0x48u) + 0x28u);
            g->edx = t243;
            t244 = rd32(edi + rd32(esi + 0x48u) + 0x28u);
            g->esp = sp0 - 0x28u;
            cow_cdecl(g, COW_IMG(0x102857a0u), 3, t243, t242, arg3 + 5u);
            t245 = g->ecx;
            t246 = g->edx;
            if ((int32_t)(ebx + 1u) < (int32_t)rd32(edi + rd32(esi + 0x48u) + 4u))
            {
                ecx = t245;
                ebx = ebx + 1u;
                ebp = ebp + 0x90u;
                goto L_1028e8a5;
            }
            ecx = t245;
            edx = t246;
            ebx = ebx + 1u;
    COW_AT(1028e90f)
        }
    COW_AT(1028e913)
        wr32(sp0 - 0x14u, arg3 + 4u);
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 4u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
        t247 = rd32(ebx * 0x90u + rd32(edi + rd32(esi + 0x48u) + 0x28u) + 4u);
        wr32(sp0 - 0x18u, t247);
        wr32(sp0 - 0x1cu, COW_IMG(0x103ba858u));
        g->ebx = ebx * 0x90u;
        g->ecx = rd32(esi + 0x48u);
        g->edx = rd32(edi + rd32(esi + 0x48u) + 0x28u);
        t248 = rd32(esi + 0x48u);
        t249 = rd32(edi + rd32(esi + 0x48u) + 0x28u);
        g->esp = sp0 - 0x14u;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103ba858u), t247);
        t250 = g->ecx;
        t251 = g->edx;
        wr32(sp0 - 0x20u, arg3 + 4u);
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 4u, COW_IMG(0x103ba858u), rd32(sp0 - 0x18u));
        t252 = rd32(ebx * 0x90u + rd32(edi + rd32(esi + 0x48u) + 0x28u) + 0x18u);
        wr32(sp0 - 0x24u, t252);
        wr32(sp0 - 0x28u, COW_IMG(0x103ba6fcu));
        g->ebx = ebx * 0x90u;
        g->ecx = rd32(esi + 0x48u);
        g->edx = rd32(edi + rd32(esi + 0x48u) + 0x28u);
        t253 = rd32(esi + 0x48u);
        t254 = rd32(edi + rd32(esi + 0x48u) + 0x28u);
        g->esp = sp0 - 0x20u;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103ba6fcu), t252);
        t255 = g->ecx;
        t256 = g->edx;
        wr32(sp0 - 0x2cu, arg3 + 4u);
        g->eax = arg3 + 4u;
        g->ecx = t255;
        g->edx = t256;
        t257 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 4u, COW_IMG(0x103ba6fcu), rd32(sp0 - 0x24u));
        t258 = g->ecx;
        t259 = g->edx;
        wr32(sp0 - 0x30u, COW_IMG(0x103ba6f4u));
        g->ebx = ebx * 0x90u;
        g->ecx = t258;
        g->edx = t259;
        g->esp = sp0 - 0x28u;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103ba6f4u), arg3 + 4u);
        t260 = g->ecx;
        t261 = g->edx;
        wr32(sp0 - 0x34u, arg3 + 3u);
        g->eax = arg3 + 3u;
        g->ecx = t260;
        g->edx = t261;
        t262 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 3u, COW_IMG(0x103ba6f4u), arg3 + 4u);
        t263 = g->ecx;
        t264 = g->edx;
        wr32(sp0 - 0x38u, COW_IMG(0x103b3238u));
        g->ebx = ebx * 0x90u;
        g->edx = t264;
        g->esp = sp0 - 0x30u;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3238u), arg3 + 3u);
        t265 = g->edx;
        t266 = rd32(sp0 + 8u) + 1u;
        t267 = rd32(esi + 0x44u);
        t268 = rd32(sp0 + 8u);
        wr32(sp0 + 8u, t266);
        if ((int32_t)(t268 + 1u) < (int32_t)t267)
        {
            ecx = t267;
            edx = t265;
            ebx = ebx * 0x90u;
            edi = edi + 0x2cu;
            goto L_1028e865;
        }
        eax = t266;
        edx = t265;
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
    }
L_1028e997: ;
    COW_AT(1028e997)
    g->ebx = loc_4;
    g->esi = loc_c;
    g->edi = loc_10;
    g->ebp = loc_8;
    g->edx = edx;
    return eax;
L_1028e712: ;
    COW_AT(1028e712)
    if (eax != 0u) goto L_1028e723;
    COW_AT(1028e716)
    wr32(sp0 - 0x14u, arg3 + 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t164 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t165 = g->ecx;
    t166 = g->edx;
    wr32(sp0 - 0x18u, COW_IMG(0x103ba7f4u));
    eax = t164;
    ecx = t165;
    edx = t166;
    loc_18 = COW_IMG(0x103ba7f4u);
    goto L_1028e733;
L_1028e723: ;
    COW_AT(1028e723)
    if (eax != 1u) goto L_1028e73b;
    COW_AT(1028e728)
    wr32(sp0 - 0x14u, arg3 + 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t167 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t168 = g->ecx;
    t169 = g->edx;
    wr32(sp0 - 0x18u, COW_IMG(0x103ba7d4u));
    eax = t167;
    ecx = t168;
    edx = t169;
    loc_18 = COW_IMG(0x103ba7d4u);
    goto L_1028e733;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1028e3d0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1028e3fdu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1028e4e4u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1028e4edu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1028e4efu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1028e4f9u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1028e4feu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1028e508u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1028e50du:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1028e517u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1028e528u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1028e55bu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x10u;
        g->ebp = arg3;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1028e55du:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x10u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1028e5aeu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x10u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1028e61au:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg3 + 2u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1028e6a3u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg3 + 2u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1028e6deu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg3 + 2u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1028e705u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg3 + 2u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1028e712u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg3 + 2u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1028e716u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg3 + 2u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1028e723u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg3 + 2u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1028e728u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg3 + 2u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1028e733u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x18u;
        g->ebx = arg3 + 2u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1028e73bu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg3 + 2u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1028e78eu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1028e7adu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1028e83du:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg3 + 2u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1028e865u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x10u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1028e8a3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1028e8a5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1028e90fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1028e913u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x10u;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1028e997u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_18;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1028e3d0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1028e3d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
