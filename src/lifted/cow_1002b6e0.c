/* f_0x1002b6e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=7 */
void cow_fn_1002b6e0(Guest* g)
{
    double d13;
    double d31;
    double d34;
    double d35;
    double d36;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_90;
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
    uint32_t t32;
    uint32_t t33;
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
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg6 = rd32(sp0 + 0x18u);
    const uint32_t arg7 = rd32(sp0 + 0x1cu);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 164u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1002b76du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; loc_90 = rd32(sp0 - 0x90u); in_edi = rd32(sp0 - 0x8cu); in_esi = rd32(sp0 - 0x88u); in_ebp = rd32(sp0 - 0x84u); in_ebx = rd32(sp0 - 0x80u); g->ebp = rd32(sp0 - 0x84u); g->ebx = rd32(sp0 - 0x80u); g->edi = rd32(sp0 - 0x8cu); g->esi = rd32(sp0 - 0x88u); goto E_1002b76d;
    case 0x1002b776u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; loc_90 = rd32(sp0 - 0x90u); in_edi = rd32(sp0 - 0x8cu); in_esi = rd32(sp0 - 0x88u); in_ebp = rd32(sp0 - 0x84u); in_ebx = rd32(sp0 - 0x80u); g->ebp = rd32(sp0 - 0x84u); g->ebx = rd32(sp0 - 0x80u); g->edi = rd32(sp0 - 0x8cu); g->esi = rd32(sp0 - 0x88u); goto E_1002b776;
    case 0x1002b786u: eax = g->eax; edx = g->edx; self = g->ebp; edi = g->edi; loc_90 = rd32(sp0 - 0x90u); in_edi = rd32(sp0 - 0x8cu); in_esi = rd32(sp0 - 0x88u); in_ebp = rd32(sp0 - 0x84u); in_ebx = rd32(sp0 - 0x80u); g->ebp = rd32(sp0 - 0x84u); g->ebx = rd32(sp0 - 0x80u); g->edi = rd32(sp0 - 0x8cu); g->esi = rd32(sp0 - 0x88u); goto E_1002b786;
    case 0x1002b796u: eax = g->eax; edx = g->edx; self = g->ebp; edi = g->edi; loc_90 = rd32(sp0 - 0x90u); in_edi = rd32(sp0 - 0x8cu); in_esi = rd32(sp0 - 0x88u); in_ebp = rd32(sp0 - 0x84u); in_ebx = rd32(sp0 - 0x80u); g->ebp = rd32(sp0 - 0x84u); g->ebx = rd32(sp0 - 0x80u); g->edi = rd32(sp0 - 0x8cu); g->esi = rd32(sp0 - 0x88u); goto E_1002b796;
    case 0x1002b7b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1002b7b0;
    case 0x1002b7c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; loc_90 = rd32(sp0 - 0x90u); in_edi = rd32(sp0 - 0x8cu); in_esi = rd32(sp0 - 0x88u); in_ebp = rd32(sp0 - 0x84u); in_ebx = rd32(sp0 - 0x80u); g->ebp = rd32(sp0 - 0x84u); g->ebx = rd32(sp0 - 0x80u); g->edi = rd32(sp0 - 0x8cu); g->esi = rd32(sp0 - 0x88u); goto E_1002b7c5;
    case 0x1002b7e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_90 = rd32(sp0 - 0x90u); in_edi = rd32(sp0 - 0x8cu); in_esi = rd32(sp0 - 0x88u); in_ebp = rd32(sp0 - 0x84u); in_ebx = rd32(sp0 - 0x80u); g->ebp = rd32(sp0 - 0x84u); g->ebx = rd32(sp0 - 0x80u); g->edi = rd32(sp0 - 0x8cu); g->esi = rd32(sp0 - 0x88u); goto E_1002b7e3;
    case 0x1002b901u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; loc_90 = rd32(sp0 - 0x90u); goto E_1002b901;
    case 0x1002b92fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; goto E_1002b92f;
    case 0x1002b933u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; goto E_1002b933;
    case 0x1002b938u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; goto E_1002b938;
    case 0x1002b961u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; goto E_1002b961;
    case 0x1002ba17u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; goto E_1002ba17;
    case 0x1002ba23u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; goto E_1002ba23;
    case 0x1002baebu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; goto E_1002baeb;
    case 0x1002bb0cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_90 = rd32(sp0 - 0x90u); goto E_1002bb0c;
    case 0x1002bb15u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; goto E_1002bb15;
    case 0x1002bb1du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; goto E_1002bb1d;
    case 0x1002bb26u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; goto E_1002bb26;
    case 0x1002bb58u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_90 = rd32(sp0 - 0x90u); goto E_1002bb58;
    case 0x1002be45u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_90 = rd32(sp0 - 0x90u); goto E_1002be45;
    case 0x1002be75u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_90 = rd32(sp0 - 0x90u); goto E_1002be75;
    case 0x1002be81u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_90 = rd32(sp0 - 0x90u); goto E_1002be81;
    case 0x1002be86u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_90 = rd32(sp0 - 0x90u); goto E_1002be86;
    case 0x1002bebdu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; goto E_1002bebd;
    case 0x1002becdu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_90 = rd32(sp0 - 0x90u); goto E_1002becd;
    case 0x1002bed5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_90 = rd32(sp0 - 0x90u); goto E_1002bed5;
    case 0x1002bf12u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; goto E_1002bf12;
    case 0x1002bf24u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; goto E_1002bf24;
    case 0x1002bf30u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_90 = rd32(sp0 - 0x90u); goto E_1002bf30;
    case 0x1002c243u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_90 = rd32(sp0 - 0x90u); goto E_1002c243;
    case 0x1002c259u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1002c259;
    default: break;
    }
#endif

    COW_AT(1002b6e0)
    wr32(sp0 - 0x80u, in_ebx);
    wr32(sp0 - 0x84u, in_ebp);
    wr32(sp0 - 0x88u, in_esi);
    wr32(sp0 - 0x8cu, in_edi);
    wr32(sp0 - 0x90u, arg4);
    wr32(sp0 - 0x94u, sp0 - 0x50u);
    g->eax = arg4;
    g->edx = in_edx;
    g->esp = sp0 - 0x8cu;
    t1 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, sp0 - 0x50u, arg4);
    t2 = g->edx;
    wr32(sp0 - 0x90u, 0u);
    t3 = rd32(COW_IMG(0x1045666cu));
    wr32(COW_IMG(0x104574a8u), 0u);
    t4 = cow_fastcall(g, COW_IMG(0x1000be10u), t3, t2, 1, 0u);
    wr32(sp0 - 0x90u, COW_IMG(0x10457270u));
    wr32(sp0 - 0x94u, 0x100u);
    t5 = rd32(self + 0x30u) | 1u;
    wr32(self + 0x30u, t5);
    t6 = rd32(arg1 + 0xbcu);
    wr32(sp0 - 0x7cu, t6);
    g->edx = t6;
    t7 = cow_thiscall(g, COW_IMG(0x1000bdb0u), rd32(COW_IMG(0x1045666cu)), 2, 0x100u, COW_IMG(0x10457270u));
    t8 = g->edx;
    wr32(sp0 - 0x90u, COW_IMG(0x10457228u));
    wr32(sp0 - 0x94u, 2u);
    g->edx = t8;
    t9 = cow_thiscall(g, COW_IMG(0x1000bdb0u), rd32(COW_IMG(0x1045666cu)), 2, 2u, COW_IMG(0x10457228u));
    t10 = g->edx;
    wr32(sp0 - 0x90u, COW_IMG(0x10457468u));
    wr32(sp0 - 0x94u, 3u);
    g->edx = t10;
    t11 = cow_thiscall(g, COW_IMG(0x1000bdb0u), rd32(COW_IMG(0x1045666cu)), 2, 3u, COW_IMG(0x10457468u));
    t12 = g->edx;
    if (rd8(COW_IMG(0x10457460u)) != 0u)
    {
        eax = t11;
        edx = t12;
        goto L_1002b776;
    }
    eax = t11;
    edx = t12;
    COW_AT(1002b76d)
    if (rd8(self + 0xb8u) == 1u) goto L_1002b7e3;
L_1002b776: ;
    COW_AT(1002b776)
    if (rd32(arg6 + 0xcu) == 0xbf800000u) goto L_1002b7c5;
    COW_AT(1002b786)
    d13 = (double)rdf32(arg6 + 0xcu);
    if (d13 == (double)rdf32(COW_IMG(0x103295d8u))) goto L_1002b7c5;
    COW_AT(1002b796)
    wr32(sp0 - 0x90u, arg6);
    t14 = rd32(sp0 - 0x7cu);
    wr32(sp0 - 0x94u, t14);
    wr32(sp0 - 0x98u, arg2);
    wr32(sp0 - 0x9cu, arg1);
    g->eax = t14;
    g->edx = edx;
    g->esp = sp0 - 0x8cu;
    t15 = cow_thiscall(g, COW_IMG(0x1002c2d0u), self, 4, arg1, arg2, t14, arg6);
    t16 = g->edx;
    if ((uint8_t)t15 != 0u)
    {
        eax = t15;
        edx = t16;
        goto L_1002b7e3;
    }
    COW_AT(1002b7b0)
    t17 = rd32(sp0 - 0x8cu);
    wr32(self + 0xb4u, rd32(COW_IMG(0x104574a8u)));
    g->ebx = rd32(sp0 - 0x80u);
    g->esi = rd32(sp0 - 0x88u);
    g->edi = t17;
    g->ebp = rd32(sp0 - 0x84u);
    return;
L_1002b7c5: ;
    COW_AT(1002b7c5)
    wr32(sp0 - 0x90u, 0u);
    t18 = rd32(sp0 - 0x7cu);
    wr32(sp0 - 0x94u, t18);
    wr32(sp0 - 0x98u, arg2);
    wr32(sp0 - 0x9cu, arg1);
    g->eax = arg2;
    g->edx = t18;
    g->esp = sp0 - 0x8cu;
    t19 = cow_thiscall(g, COW_IMG(0x1002c2d0u), self, 4, arg1, arg2, t18, 0u);
    t20 = g->edx;
    if ((uint8_t)t19 == 0u) goto L_1002c259;
    eax = t19;
    edx = t20;
L_1002b7e3: ;
    COW_AT(1002b7e3)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x8cu;
    t21 = cow_thiscall(g, COW_IMG(0x100279b0u), COW_IMG(0x10457198u), 0);
    t22 = g->ecx;
    t23 = g->edx;
    wr32(COW_IMG(0x104571acu), 0xbf800000u);
    wr32(COW_IMG(0x104571c0u), 0xbf800000u);
    g->edx = t23;
    t24 = cow_stdcall(g, COW_IMG(0x10015240u), 0);
    t25 = g->edx;
    wr32(sp0 - 0x90u, t24);
    g->edx = t25;
    t26 = cow_thiscall(g, COW_IMG(0x10027f60u), COW_IMG(0x10457198u), 1, t24);
    t27 = g->edx;
    wr32(sp0 - 0x90u, COW_IMG(0x1045b7c0u));
    g->edx = t27;
    t28 = cow_thiscall(g, COW_IMG(0x10027f60u), COW_IMG(0x10457198u), 1, COW_IMG(0x1045b7c0u));
    t29 = g->edx;
    cow_thiscall(g, COW_IMG(0x100279b0u), COW_IMG(0x10457108u), 0);
    wr32(sp0 - 0x70u, 0u);
    esi = COW_IMG(0x10351518u);
    edi = COW_IMG(0x104571e0u);
    ecx = 0x11u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(COW_IMG(0x10457130u), 0u);
    wr32(sp0 - 0x74u, (uint8_t)arg7);
    wr32(sp0 - 0x70u, 0u);
    t30 = (uint8_t)(arg7 >> 8u);
    d31 = fr(g, (double)(int64_t)cow_i64((uint8_t)arg7, 0u) * (double)rdf32(COW_IMG(0x1032a778u)));
    wr32(sp0 - 0x74u, t30);
    t32 = rd32(COW_IMG(0x1045666cu));
    wrf32(COW_IMG(0x104571f0u), (float)d31);
    wr32(sp0 - 0x70u, 0u);
    t33 = (uint8_t)(arg7 >> 0x10u);
    wr32(sp0 - 0x74u, t33);
    wr32(COW_IMG(0x10457140u), 0xbf800000u);
    d34 = fr(g, (double)(int64_t)cow_i64(t30, 0u) * (double)rdf32(COW_IMG(0x1032a778u)));
    wr32(sp0 - 0x90u, COW_IMG(0x104571e0u));
    wrf32(COW_IMG(0x104571f4u), (float)d34);
    wr32(sp0 - 0x74u, arg7 >> 0x18u);
    wr32(sp0 - 0x70u, 0u);
    d35 = fr(g, (double)(int64_t)cow_i64(t33, 0u) * (double)rdf32(COW_IMG(0x1032a778u)));
    wrf32(COW_IMG(0x104571f8u), (float)d35);
    d36 = fr(g, (double)(int64_t)cow_i64(arg7 >> 0x18u, 0u) * (double)rdf32(COW_IMG(0x1032a778u)));
    wrf32(COW_IMG(0x104571fcu), (float)d36);
    t37 = rd32(t32 + 0xcu);
    wr32(sp0 - 0x94u, t37);
    g->eax = t37;
    t38 = cow_thiscall(g, rd32(rd32(t37) + 0xa8u), rd32(t37), 2, t37, COW_IMG(0x104571e0u));
    wr32(COW_IMG(0x104574acu), arg7);
    if ((arg7 & 0xff000000u) != 0u)
    {
        eax = t38;
    COW_AT(1002b901)
        wr32(sp0 - 0x90u, sp0 - 0x74u);
        t39 = (arg7 & 0xff808080u) | 0x808080u;
        wr32(COW_IMG(0x104574acu), t39);
        wr8(sp0 - 0x78u, 0u);
        g->edx = sp0 - 0x74u;
        g->esp = sp0 - 0x8cu;
        t40 = cow_call_regs(g, COW_IMG(0x10039410u), eax, self + 0x9cu, g->edx, 0, 1, sp0 - 0x74u);
        t41 = g->edx;
        if (rd32(t40) == 0u)
        {
            edx = t41;
        }
        else
        {
            eax = rd32(t40);
            edx = t41;
    COW_AT(1002b92f)
            if (rd32(eax) != 0u)
            {
    COW_AT(1002b933)
                wr8(sp0 - 0x78u, 1u);
            }
        }
    COW_AT(1002b938)
        t42 = rd32(sp0 - 0x78u);
        wr32(sp0 - 0x90u, t42);
        wr32(sp0 - 0x94u, rd32(COW_IMG(0x104574acu)));
        g->eax = t42;
        g->edx = edx;
        g->esp = sp0 - 0x8cu;
        t43 = cow_thiscall(g, COW_IMG(0x1001d390u), self + 0x74u, 2, rd32(COW_IMG(0x104574acu)), t42);
        t44 = g->edx;
        g->ebx = 0u;
        g->edx = t44;
        t45 = cow_call_regs(g, COW_IMG(0x1001d240u), t43, self + 0x74u, g->edx, 1, 0);
        t46 = g->edx;
        if (rd8(COW_IMG(0x104570fcu)) == 0u)
        {
            eax = t45;
            edx = t46;
        }
        else
        {
            eax = t45;
            edx = t46;
    COW_AT(1002b961)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x8cu;
            t47 = cow_thiscall(g, COW_IMG(0x100279b0u), COW_IMG(0x10457158u), 0);
            t48 = g->ecx;
            t49 = g->edx;
            g->edx = t49;
            t50 = cow_stdcall(g, COW_IMG(0x10015240u), 0);
            t51 = g->edx;
            wr32(sp0 - 0x90u, t50);
            g->edx = t51;
            t52 = cow_thiscall(g, COW_IMG(0x10027f60u), COW_IMG(0x10457158u), 1, t50);
            t53 = g->edx;
            wr32(sp0 - 0x74u, 0x3f000000u);
            wr32(sp0 - 0x70u, 0x3f000000u);
            wr32(sp0 - 0x6cu, 0x3f000000u);
            wr32(sp0 - 0x68u, 0x3f000000u);
            wr32(sp0 - 0x64u, 0x3f000000u);
            wr32(sp0 - 0x60u, 0x3f000000u);
            g->edx = t53;
            t54 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
            t55 = g->edx;
            t56 = cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x40u, 0);
            wr32(sp0 - 0x90u, sp0 - 0x74u);
            g->edx = sp0 - 0x74u;
            cow_thiscall(g, COW_IMG(0x10027b30u), sp0 - 0x40u, 1, sp0 - 0x74u);
            t57 = g->edx;
            wr32(sp0 - 0x90u, sp0 - 0x68u);
            g->eax = sp0 - 0x68u;
            g->edx = t57;
            t58 = cow_thiscall(g, COW_IMG(0x10027cf0u), sp0 - 0x40u, 1, sp0 - 0x68u);
            t59 = g->edx;
            wr32(sp0 - 0x90u, sp0 - 0x40u);
            cow_thiscall(g, COW_IMG(0x10027d10u), COW_IMG(0x10457158u), 1, sp0 - 0x40u);
            wr32(sp0 - 0x90u, rd32(COW_IMG(0x104570f8u)));
            wr32(sp0 - 0x94u, rd32(COW_IMG(0x10457100u)));
            wr32(sp0 - 0x98u, rd32(COW_IMG(0x10457268u)));
            wr32(sp0 - 0x9cu, rd32(COW_IMG(0x104574b0u)));
            g->eax = rd32(COW_IMG(0x10457100u));
            g->edx = rd32(COW_IMG(0x104574b0u));
            t60 = rd32(COW_IMG(0x10457100u));
            t61 = rd32(COW_IMG(0x104574b0u));
            t62 = cow_stdcall(g, COW_IMG(0x10026210u), 4, t61, rd32(COW_IMG(0x10457268u)), t60, rd32(COW_IMG(0x104570f8u)));
            t63 = g->edx;
            g->edx = t63;
            t64 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
            t65 = g->edx;
            eax = t64;
            edx = t65;
        }
    COW_AT(1002ba17)
        if (rd8(COW_IMG(0x104572b0u)) != 0u)
        {
    COW_AT(1002ba23)
            wr32(sp0 - 0x90u, COW_IMG(0x10457468u));
            g->esp = sp0 - 0x8cu;
            cow_thiscall(g, COW_IMG(0x100279f0u), COW_IMG(0x104574f8u), 1, COW_IMG(0x10457468u));
            wr32(sp0 - 0x70u, rd32(COW_IMG(0x1045726cu)));
            wr32(sp0 - 0x90u, sp0 - 0x74u);
            wr32(sp0 - 0x74u, rd32(COW_IMG(0x10457458u)));
            wr32(sp0 - 0x6cu, 0u);
            g->eax = rd32(COW_IMG(0x10457458u));
            g->edx = sp0 - 0x74u;
            t66 = rd32(COW_IMG(0x10457458u));
            t67 = cow_thiscall(g, COW_IMG(0x10028200u), COW_IMG(0x104574f8u), 1, sp0 - 0x74u);
            t68 = g->edx;
            wr32(sp0 - 0x68u, 0x3f000000u);
            wr32(sp0 - 0x64u, 0xbf000000u);
            wr32(sp0 - 0x60u, 0x3f000000u);
            wr32(sp0 - 0x5cu, 0x3f000000u);
            wr32(sp0 - 0x58u, 0x3f000000u);
            wr32(sp0 - 0x54u, 0x3f000000u);
            g->edx = t68;
            t69 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
            t70 = g->edx;
            g->edx = t70;
            cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x40u, 0);
            t71 = g->edx;
            wr32(sp0 - 0x90u, sp0 - 0x68u);
            g->eax = sp0 - 0x68u;
            g->edx = t71;
            t72 = cow_thiscall(g, COW_IMG(0x10027b30u), sp0 - 0x40u, 1, sp0 - 0x68u);
            t73 = g->edx;
            wr32(sp0 - 0x90u, sp0 - 0x5cu);
            t74 = cow_thiscall(g, COW_IMG(0x10027cf0u), sp0 - 0x40u, 1, sp0 - 0x5cu);
            wr32(sp0 - 0x90u, sp0 - 0x40u);
            g->edx = sp0 - 0x40u;
            cow_thiscall(g, COW_IMG(0x10027d10u), COW_IMG(0x104574f8u), 1, sp0 - 0x40u);
            t75 = g->ecx;
            t76 = g->edx;
            wr32(sp0 - 0x90u, sp0 - 0x74u);
            wr32(sp0 - 0x94u, COW_IMG(0x10457528u));
            g->edx = t76;
            cow_cdecl(g, COW_IMG(0x10026f50u), 2, COW_IMG(0x10457528u), sp0 - 0x74u);
            t77 = g->edx;
            if (rd32(rd32(COW_IMG(0x1045666cu)) + 0x194u) == 0u)
            {
                eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0x194u);
                edx = t77;
            }
            else
            {
                eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0x194u);
    COW_AT(1002baeb)
                wr32(sp0 - 0x90u, rd32(COW_IMG(0x1045726cu)));
                wr32(sp0 - 0x94u, rd32(COW_IMG(0x10457458u)));
                wr32(sp0 - 0x98u, eax);
                wr32(sp0 - 0x9cu, rd32(COW_IMG(0x104574b4u)));
                g->eax = eax;
                g->edx = rd32(COW_IMG(0x104574b4u));
                t78 = rd32(COW_IMG(0x104574b4u));
                g->esp = sp0 - 0x8cu;
                t79 = cow_thiscall(g, COW_IMG(0x10025870u), self + 0x90u, 4, t78, eax, rd32(COW_IMG(0x10457458u)), rd32(COW_IMG(0x1045726cu)));
                t80 = g->edx;
                eax = t79;
                edx = t80;
            }
    COW_AT(1002bb0c)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x8cu;
            t81 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
            t82 = g->edx;
            eax = t81;
            edx = t82;
        }
    COW_AT(1002bb15)
        if (rd8(COW_IMG(0x10457460u)) == 0u)
        {
    COW_AT(1002bb1d)
            if (rd8(self + 0xb8u) == 1u)
            {
    COW_AT(1002bb26)
                wr32(sp0 - 0x90u, self + 0x34u);
                g->eax = self + 0x34u;
                g->edx = edx;
                g->esp = sp0 - 0x8cu;
                t83 = cow_thiscall(g, COW_IMG(0x10027cf0u), COW_IMG(0x10457270u), 1, self + 0x34u);
                t84 = g->edx;
                wr32(sp0 - 0x90u, COW_IMG(0x10457270u));
                wr32(sp0 - 0x94u, 0x100u);
                g->edx = t84;
                t85 = cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(COW_IMG(0x1045666cu)), 2, 0x100u, COW_IMG(0x10457270u));
                t86 = g->edx;
                wr32(sp0 - 0x90u, COW_IMG(0x10457270u));
                g->edx = t86;
                t87 = cow_thiscall(g, COW_IMG(0x100279f0u), COW_IMG(0x1045b780u), 1, COW_IMG(0x10457270u));
                t88 = g->edx;
                eax = t87;
                edx = t88;
            }
        }
    COW_AT(1002bb58)
        g->esp = sp0 - 0x8cu;
        cow_call_regs(g, COW_IMG(0x10009920u), eax, rd32(COW_IMG(0x1045666cu)), g->edx, 1, 0);
        wr32(sp0 - 0x90u, 5u);
        wr32(sp0 - 0x94u, 0x19u);
        t89 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x98u, t89);
        g->edx = rd32(t89);
        t90 = rd32(t89);
        cow_thiscall(g, rd32(t90 + 0xc8u), rd32(COW_IMG(0x1045666cu)), 3, t89, 0x19u, 5u);
        t91 = g->edx;
        wr32(sp0 - 0x90u, 1u);
        wr32(sp0 - 0x94u, 7u);
        t92 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x98u, t92);
        cow_thiscall(g, rd32(rd32(t92) + 0xc8u), rd32(t92), 3, t92, 7u, 1u);
        wr32(sp0 - 0x90u, 1u);
        wr32(sp0 - 0x94u, 0xeu);
        t93 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x98u, t93);
        cow_thiscall(g, rd32(rd32(t93) + 0xc8u), rd32(t93), 3, t93, 0xeu, 1u);
        wr32(sp0 - 0x90u, 2u);
        wr32(sp0 - 0x94u, 9u);
        t94 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x98u, t94);
        cow_thiscall(g, rd32(rd32(t94) + 0xc8u), rd32(t94), 3, t94, 9u, 2u);
        wr32(sp0 - 0x90u, 1u);
        wr32(sp0 - 0x94u, 0x8fu);
        t95 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x98u, t95);
        cow_thiscall(g, rd32(rd32(t95) + 0xc8u), rd32(t95), 3, t95, 0x8fu, 1u);
        wr32(sp0 - 0x90u, 2u);
        wr32(sp0 - 0x94u, 0x10u);
        wr32(sp0 - 0x98u, 0u);
        t96 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x9cu, t96);
        cow_thiscall(g, rd32(rd32(t96) + 0xfcu), rd32(t96), 4, t96, 0u, 0x10u, 2u);
        wr32(sp0 - 0x90u, 2u);
        wr32(sp0 - 0x94u, 0x11u);
        wr32(sp0 - 0x98u, 0u);
        t97 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x9cu, t97);
        cow_thiscall(g, rd32(rd32(t97) + 0xfcu), rd32(t97), 4, t97, 0u, 0x11u, 2u);
        wr32(sp0 - 0x90u, 3u);
        wr32(sp0 - 0x94u, 0xdu);
        wr32(sp0 - 0x98u, 0u);
        t98 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x9cu, t98);
        cow_thiscall(g, rd32(rd32(t98) + 0xfcu), rd32(t98), 4, t98, 0u, 0xdu, 3u);
        wr32(sp0 - 0x90u, 3u);
        wr32(sp0 - 0x94u, 0xeu);
        wr32(sp0 - 0x98u, 0u);
        t99 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x9cu, t99);
        cow_thiscall(g, rd32(rd32(t99) + 0xfcu), rd32(t99), 4, t99, 0u, 0xeu, 3u);
        wr32(sp0 - 0x90u, 5u);
        wr32(sp0 - 0x94u, 1u);
        wr32(sp0 - 0x98u, 0u);
        t100 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x9cu, t100);
        cow_thiscall(g, rd32(rd32(t100) + 0xfcu), rd32(t100), 4, t100, 0u, 1u, 5u);
        wr32(sp0 - 0x90u, 2u);
        wr32(sp0 - 0x94u, 2u);
        wr32(sp0 - 0x98u, 0u);
        t101 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x9cu, t101);
        cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xfcu), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 4, t101, 0u, 2u, 2u);
        wr32(sp0 - 0x90u, 1u);
        wr32(sp0 - 0x94u, 3u);
        wr32(sp0 - 0x98u, 0u);
        t102 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x9cu, t102);
        cow_thiscall(g, rd32(rd32(t102) + 0xfcu), rd32(t102), 4, t102, 0u, 3u, 1u);
        wr32(sp0 - 0x90u, 5u);
        wr32(sp0 - 0x94u, 4u);
        wr32(sp0 - 0x98u, 0u);
        t103 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x9cu, t103);
        cow_thiscall(g, rd32(rd32(t103) + 0xfcu), rd32(t103), 4, t103, 0u, 4u, 5u);
        wr32(sp0 - 0x90u, 2u);
        wr32(sp0 - 0x94u, 5u);
        wr32(sp0 - 0x98u, 0u);
        t104 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x9cu, t104);
        cow_thiscall(g, rd32(rd32(t104) + 0xfcu), rd32(t104), 4, t104, 0u, 5u, 2u);
        wr32(sp0 - 0x90u, 3u);
        wr32(sp0 - 0x94u, 6u);
        wr32(sp0 - 0x98u, 0u);
        t105 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x9cu, t105);
        cow_thiscall(g, rd32(rd32(t105) + 0xfcu), rd32(t105), 4, t105, 0u, 6u, 3u);
        wr32(sp0 - 0x90u, 2u);
        wr32(sp0 - 0x94u, 0x10u);
        wr32(sp0 - 0x98u, 1u);
        t106 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x9cu, t106);
        cow_thiscall(g, rd32(rd32(t106) + 0xfcu), rd32(t106), 4, t106, 1u, 0x10u, 2u);
        wr32(sp0 - 0x90u, 2u);
        wr32(sp0 - 0x94u, 0x11u);
        wr32(sp0 - 0x98u, 1u);
        t107 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x9cu, t107);
        cow_thiscall(g, rd32(rd32(t107) + 0xfcu), rd32(t107), 4, t107, 1u, 0x11u, 2u);
        wr32(sp0 - 0x90u, 0u);
        wr32(sp0 - 0x94u, 0x12u);
        wr32(sp0 - 0x98u, 1u);
        t108 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x9cu, t108);
        cow_thiscall(g, rd32(rd32(t108) + 0xfcu), rd32(t108), 4, t108, 1u, 0x12u, 0u);
        wr32(sp0 - 0x90u, 3u);
        wr32(sp0 - 0x94u, 0xdu);
        wr32(sp0 - 0x98u, 1u);
        t109 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x9cu, t109);
        cow_thiscall(g, rd32(rd32(t109) + 0xfcu), rd32(t109), 4, t109, 1u, 0xdu, 3u);
        wr32(sp0 - 0x90u, 3u);
        wr32(sp0 - 0x94u, 0xeu);
        wr32(sp0 - 0x98u, 1u);
        t110 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x9cu, t110);
        cow_thiscall(g, rd32(rd32(t110) + 0xfcu), rd32(t110), 4, t110, 1u, 0xeu, 3u);
        wr32(sp0 - 0x90u, 5u);
        wr32(sp0 - 0x94u, 1u);
        wr32(sp0 - 0x98u, 1u);
        t111 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x9cu, t111);
        cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xfcu), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 4, t111, 1u, 1u, 5u);
        wr32(sp0 - 0x90u, 1u);
        wr32(sp0 - 0x94u, 2u);
        wr32(sp0 - 0x98u, 1u);
        t112 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x9cu, t112);
        cow_thiscall(g, rd32(rd32(t112) + 0xfcu), rd32(t112), 4, t112, 1u, 2u, 1u);
        wr32(sp0 - 0x90u, 3u);
        wr32(sp0 - 0x94u, 3u);
        wr32(sp0 - 0x98u, 1u);
        t113 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x9cu, t113);
        cow_thiscall(g, rd32(rd32(t113) + 0xfcu), rd32(t113), 4, t113, 1u, 3u, 3u);
        wr32(sp0 - 0x90u, 6u);
        wr32(sp0 - 0x94u, 4u);
        wr32(sp0 - 0x98u, 1u);
        t114 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x9cu, t114);
        cow_thiscall(g, rd32(rd32(t114) + 0xfcu), rd32(t114), 4, t114, 1u, 4u, 6u);
        wr32(sp0 - 0x90u, 1u);
        wr32(sp0 - 0x94u, 5u);
        wr32(sp0 - 0x98u, 1u);
        t115 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x9cu, t115);
        cow_thiscall(g, rd32(rd32(t115) + 0xfcu), rd32(t115), 4, t115, 1u, 5u, 1u);
        wr32(sp0 - 0x90u, 3u);
        wr32(sp0 - 0x94u, 6u);
        wr32(sp0 - 0x98u, 1u);
        t116 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x9cu, t116);
        cow_thiscall(g, rd32(rd32(t116) + 0xfcu), rd32(t116), 4, t116, 1u, 6u, 3u);
        wr32(sp0 - 0x90u, 0u);
        wr32(sp0 - 0x94u, 0xbu);
        wr32(sp0 - 0x98u, 1u);
        t117 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x9cu, t117);
        cow_thiscall(g, rd32(rd32(t117) + 0xfcu), rd32(t117), 4, t117, 1u, 0xbu, 0u);
        wr32(sp0 - 0x90u, 0u);
        wr32(sp0 - 0x94u, 0x18u);
        wr32(sp0 - 0x98u, 1u);
        t118 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x9cu, t118);
        cow_thiscall(g, rd32(rd32(t118) + 0xfcu), rd32(t118), 4, t118, 1u, 0x18u, 0u);
        wr32(sp0 - 0x90u, 1u);
        wr32(sp0 - 0x94u, 1u);
        wr32(sp0 - 0x98u, 2u);
        t119 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x9cu, t119);
        cow_thiscall(g, rd32(rd32(t119) + 0xfcu), rd32(t119), 4, t119, 2u, 1u, 1u);
        wr32(sp0 - 0x90u, 1u);
        wr32(sp0 - 0x94u, 4u);
        wr32(sp0 - 0x98u, 2u);
        t120 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x9cu, t120);
        cow_thiscall(g, rd32(rd32(t120) + 0xfcu), rd32(t120), 4, t120, 2u, 4u, 1u);
        wr32(sp0 - 0x90u, 1u);
        wr32(sp0 - 0x94u, 0x1cu);
        t121 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x98u, t121);
        t122 = rd32(t121);
        cow_thiscall(g, rd32(t122 + 0xc8u), t122, 3, t121, 0x1cu, 1u);
        t123 = g->ecx;
        if (rd8(rd32(COW_IMG(0x1045666cu)) + 0x92du) == 0u)
        {
            eax = rd32(COW_IMG(0x1045666cu));
            ecx = t123;
            goto L_1002becd;
        }
        eax = rd32(COW_IMG(0x1045666cu));
        ecx = t123;
    COW_AT(1002be45)
        wr32(sp0 - 0x90u, 0u);
        wr32(sp0 - 0x94u, 0x8cu);
        t124 = rd32(eax + 0xcu);
        wr32(sp0 - 0x98u, t124);
        g->edx = rd32(t124);
        t125 = rd32(t124);
        g->esp = sp0 - 0x8cu;
        cow_thiscall(g, rd32(t125 + 0xc8u), ecx, 3, t124, 0x8cu, 0u);
        t126 = g->edx;
        wr32(sp0 - 0x90u, 3u);
        wr32(sp0 - 0x94u, 0x23u);
        t127 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x98u, t127);
        cow_thiscall(g, rd32(rd32(t127) + 0xc8u), rd32(t127), 3, t127, 0x23u, 3u);
        eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        edx = rd32(COW_IMG(0x1045666cu));
L_1002be75: ;
    COW_AT(1002be75)
        wr32(sp0 - 0x90u, 0u);
        wr32(sp0 - 0x94u, 0x30u);
        wr32(sp0 - 0x98u, eax);
        t136 = rd32(eax);
        g->esp = sp0 - 0x8cu;
        cow_thiscall(g, rd32(t136 + 0xc8u), t136, 3, eax, 0x30u, 0u);
        t137 = g->ecx;
        ecx = t137;
L_1002be81: ;
    COW_AT(1002be81)
        eax = rd32(COW_IMG(0x1045666cu));
L_1002be86: ;
    COW_AT(1002be86)
        wr32(sp0 - 0x90u, 0u);
        wr32(sp0 - 0x94u, 0x1bu);
        t138 = rd32(eax + 0xcu);
        wr32(sp0 - 0x98u, t138);
        g->edx = rd32(t138);
        t139 = rd32(t138);
        g->esp = sp0 - 0x8cu;
        cow_thiscall(g, rd32(t139 + 0xc8u), ecx, 3, t138, 0x1bu, 0u);
        t140 = g->edx;
        wr32(sp0 - 0x90u, 0u);
        wr32(sp0 - 0x94u, 0x1du);
        t141 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x98u, t141);
        cow_thiscall(g, rd32(rd32(t141) + 0xc8u), rd32(t141), 3, t141, 0x1du, 0u);
        if (rd32(COW_IMG(0x10456a98u)) == 0u)
        {
            eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
            edx = rd32(COW_IMG(0x1045666cu));
    COW_AT(1002bf24)
            wr32(sp0 - 0x90u, 0u);
            wr32(sp0 - 0x94u, 0x12u);
            wr32(sp0 - 0x98u, 0u);
            wr32(sp0 - 0x9cu, eax);
            g->esp = sp0 - 0x8cu;
            cow_thiscall(g, rd32(ecx + 0xfcu), ecx, 4, eax, 0u, 0x12u, 0u);
            wr32(sp0 - 0x90u, 0u);
            loc_90 = 0u;
        }
        else
        {
            eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
            edx = rd32(COW_IMG(0x1045666cu));
    COW_AT(1002bebd)
            wr32(sp0 - 0x90u, 2u);
            wr32(sp0 - 0x94u, 0x12u);
            wr32(sp0 - 0x98u, 0u);
            wr32(sp0 - 0x9cu, eax);
            g->esp = sp0 - 0x8cu;
            cow_thiscall(g, rd32(ecx + 0xfcu), ecx, 4, eax, 0u, 0x12u, 2u);
            wr32(sp0 - 0x90u, 2u);
            loc_90 = 2u;
        }
    COW_AT(1002bf30)
        wr32(sp0 - 0x94u, 0x12u);
        wr32(sp0 - 0x98u, 1u);
        t142 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x9cu, t142);
        g->esp = sp0 - 0x90u;
        cow_thiscall(g, rd32(rd32(t142) + 0xfcu), rd32(t142), 3, t142, 1u, 0x12u);
        wr32(sp0 - 0x94u, 0x45u);
        wr32(sp0 - 0x98u, 0x18u);
        t143 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x9cu, t143);
        cow_thiscall(g, rd32(rd32(t143) + 0xc8u), rd32(t143), 3, t143, 0x18u, 0x45u);
        t144 = rd32(sp0 - 0x80u);
        wr32(sp0 - 0x94u, t144);
        wr32(sp0 - 0x98u, rd32(sp0));
        cow_thiscall(g, COW_IMG(0x1002c360u), self, 2, rd32(sp0), t144);
        wr32(sp0 - 0x94u, 1u);
        t145 = rd32(COW_IMG(0x10456904u)) + 1u;
        t146 = rd32(COW_IMG(0x1045666cu));
        wr32(COW_IMG(0x10456904u), t145);
        wr32(sp0 - 0x98u, 0x16u);
        t147 = rd32(t146 + 0xcu);
        wr32(sp0 - 0x9cu, t147);
        g->edx = rd32(t147);
        t148 = rd32(t147);
        cow_thiscall(g, rd32(t148 + 0xc8u), t146, 3, t147, 0x16u, 1u);
        t149 = g->edx;
        wr32(sp0 - 0x94u, 8u);
        wr32(sp0 - 0x98u, 0x19u);
        t150 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x9cu, t150);
        cow_thiscall(g, rd32(rd32(t150) + 0xc8u), rd32(t150), 3, t150, 0x19u, 8u);
        wr32(sp0 - 0x94u, 0x60u);
        wr32(sp0 - 0x98u, 0x18u);
        t151 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x9cu, t151);
        cow_thiscall(g, rd32(rd32(t151) + 0xc8u), rd32(t151), 3, t151, 0x18u, 0x60u);
        wr32(sp0 - 0x94u, 2u);
        wr32(sp0 - 0x98u, 9u);
        t152 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x9cu, t152);
        cow_thiscall(g, rd32(rd32(t152) + 0xc8u), rd32(t152), 3, t152, 9u, 2u);
        wr32(sp0 - 0x94u, 0u);
        wr32(sp0 - 0x98u, 0x8fu);
        t153 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x9cu, t153);
        cow_thiscall(g, rd32(rd32(t153) + 0xc8u), rd32(t153), 3, t153, 0x8fu, 0u);
        wr32(sp0 - 0x94u, 2u);
        wr32(sp0 - 0x98u, 0x10u);
        wr32(sp0 - 0x9cu, 0u);
        t154 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xa0u, t154);
        cow_thiscall(g, rd32(rd32(t154) + 0xfcu), rd32(t154), 4, t154, 0u, 0x10u, 2u);
        wr32(sp0 - 0x94u, 2u);
        wr32(sp0 - 0x98u, 0x11u);
        wr32(sp0 - 0x9cu, 0u);
        t155 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xa0u, t155);
        cow_thiscall(g, rd32(rd32(t155) + 0xfcu), rd32(t155), 4, t155, 0u, 0x11u, 2u);
        wr32(sp0 - 0x94u, 3u);
        wr32(sp0 - 0x98u, 0xdu);
        wr32(sp0 - 0x9cu, 0u);
        t156 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xa0u, t156);
        cow_thiscall(g, rd32(rd32(t156) + 0xfcu), rd32(t156), 4, t156, 0u, 0xdu, 3u);
        wr32(sp0 - 0x94u, 3u);
        wr32(sp0 - 0x98u, 0xeu);
        wr32(sp0 - 0x9cu, 0u);
        t157 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xa0u, t157);
        cow_thiscall(g, rd32(rd32(t157) + 0xfcu), rd32(t157), 4, t157, 0u, 0xeu, 3u);
        wr32(sp0 - 0x94u, 5u);
        wr32(sp0 - 0x98u, 1u);
        wr32(sp0 - 0x9cu, 0u);
        t158 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xa0u, t158);
        cow_thiscall(g, rd32(rd32(t158) + 0xfcu), rd32(t158), 4, t158, 0u, 1u, 5u);
        wr32(sp0 - 0x94u, 2u);
        wr32(sp0 - 0x98u, 2u);
        wr32(sp0 - 0x9cu, 0u);
        t159 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xa0u, t159);
        cow_thiscall(g, rd32(rd32(t159) + 0xfcu), rd32(t159), 4, t159, 0u, 2u, 2u);
        wr32(sp0 - 0x94u, 1u);
        wr32(sp0 - 0x98u, 3u);
        wr32(sp0 - 0x9cu, 0u);
        t160 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xa0u, t160);
        cow_thiscall(g, rd32(rd32(t160) + 0xfcu), rd32(t160), 4, t160, 0u, 3u, 1u);
        wr32(sp0 - 0x94u, 5u);
        wr32(sp0 - 0x98u, 4u);
        wr32(sp0 - 0x9cu, 0u);
        t161 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xa0u, t161);
        cow_thiscall(g, rd32(rd32(t161) + 0xfcu), rd32(t161), 4, t161, 0u, 4u, 5u);
        wr32(sp0 - 0x94u, 2u);
        wr32(sp0 - 0x98u, 5u);
        wr32(sp0 - 0x9cu, 0u);
        t162 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xa0u, t162);
        cow_thiscall(g, rd32(rd32(t162) + 0xfcu), rd32(t162), 4, t162, 0u, 5u, 2u);
        wr32(sp0 - 0x94u, 1u);
        wr32(sp0 - 0x98u, 6u);
        wr32(sp0 - 0x9cu, 0u);
        t163 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xa0u, t163);
        cow_thiscall(g, rd32(rd32(t163) + 0xfcu), rd32(t163), 4, t163, 0u, 6u, 1u);
        wr32(sp0 - 0x94u, 1u);
        wr32(sp0 - 0x98u, 1u);
        wr32(sp0 - 0x9cu, 1u);
        t164 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xa0u, t164);
        cow_thiscall(g, rd32(rd32(t164) + 0xfcu), rd32(t164), 4, t164, 1u, 1u, 1u);
        wr32(sp0 - 0x94u, 1u);
        wr32(sp0 - 0x98u, 4u);
        wr32(sp0 - 0x9cu, 1u);
        t165 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xa0u, t165);
        cow_thiscall(g, rd32(rd32(t165) + 0xfcu), rd32(t165), 4, t165, 1u, 4u, 1u);
        wr32(sp0 - 0x94u, 0u);
        wr32(sp0 - 0x98u, 0xbu);
        wr32(sp0 - 0x9cu, 1u);
        t166 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xa0u, t166);
        cow_thiscall(g, rd32(rd32(t166) + 0xfcu), rd32(t166), 4, t166, 1u, 0xbu, 0u);
        wr32(sp0 - 0x94u, 0u);
        wr32(sp0 - 0x98u, 0x18u);
        wr32(sp0 - 0x9cu, 1u);
        t167 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xa0u, t167);
        cow_thiscall(g, rd32(rd32(t167) + 0xfcu), rd32(t167), 4, t167, 1u, 0x18u, 0u);
        wr32(sp0 - 0x94u, 0u);
        wr32(sp0 - 0x98u, 0x1bu);
        t168 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x9cu, t168);
        cow_thiscall(g, rd32(rd32(t168) + 0xc8u), rd32(t168), 3, t168, 0x1bu, 0u);
        wr32(sp0 - 0x94u, 0u);
        wr32(sp0 - 0x98u, 0x1cu);
        t169 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x9cu, t169);
        cow_thiscall(g, rd32(rd32(t169) + 0xc8u), rd32(t169), 3, t169, 0x1cu, 0u);
        wr32(sp0 - 0x94u, 0u);
        wr32(sp0 - 0x98u, 0x30u);
        t170 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x9cu, t170);
        cow_thiscall(g, rd32(rd32(t170) + 0xc8u), rd32(t170), 3, t170, 0x30u, 0u);
        wr32(sp0 - 0x94u, 0u);
        wr32(sp0 - 0x98u, 0x1du);
        t171 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x9cu, t171);
        g->eax = t171;
        g->edx = rd32(COW_IMG(0x1045666cu));
        t172 = rd32(COW_IMG(0x1045666cu));
        t173 = cow_thiscall(g, rd32(rd32(t171) + 0xc8u), rd32(t171), 3, t171, 0x1du, 0u);
        t174 = g->edx;
        t175 = cow_fastcall(g, COW_IMG(0x1001d350u), self + 0x74u, t174, 0);
        wr32(sp0 - 0x94u, rd32(COW_IMG(0x104574acu)));
        g->edx = rd32(COW_IMG(0x104574acu));
        t176 = rd32(COW_IMG(0x104574acu));
        t177 = cow_stdcall(g, COW_IMG(0x10038a70u), 1, t176);
        t178 = g->edx;
        g->ebx = 0u;
        g->edx = t178;
        t179 = cow_call_regs(g, COW_IMG(0x10038a80u), t177, self + 0x9cu, g->edx, 1, 0);
        t180 = g->edx;
        g->edx = t180;
        cow_call_regs(g, COW_IMG(0x10038e10u), t179, self + 0x9cu, g->edx, 1, 0);
        t181 = g->edx;
        wr32(sp0 - 0x94u, 1u);
        wr32(sp0 - 0x98u, 0x10u);
        wr32(sp0 - 0x9cu, 0u);
        t182 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xa0u, t182);
        cow_thiscall(g, rd32(rd32(t182) + 0xfcu), rd32(t182), 4, t182, 0u, 0x10u, 1u);
        wr32(sp0 - 0x94u, 1u);
        wr32(sp0 - 0x98u, 0x11u);
        wr32(sp0 - 0x9cu, 0u);
        t183 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xa0u, t183);
        g->eax = t183;
        g->edx = rd32(COW_IMG(0x1045666cu));
        t184 = rd32(COW_IMG(0x1045666cu));
        t185 = cow_thiscall(g, rd32(rd32(t183) + 0xfcu), rd32(t183), 4, t183, 0u, 0x11u, 1u);
        t186 = g->edx;
        cow_call_regs(g, COW_IMG(0x1001d3b0u), t185, self + 0x74u, g->edx, 1, 0);
        wr32(sp0 - 0x94u, 2u);
        wr32(sp0 - 0x98u, 0x10u);
        wr32(sp0 - 0x9cu, 0u);
        t187 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xa0u, t187);
        cow_thiscall(g, rd32(rd32(t187) + 0xfcu), rd32(t187), 4, t187, 0u, 0x10u, 2u);
        wr32(sp0 - 0x94u, 2u);
        wr32(sp0 - 0x98u, 0x11u);
        wr32(sp0 - 0x9cu, 0u);
        t188 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xa0u, t188);
        g->eax = t188;
        t189 = cow_thiscall(g, rd32(rd32(t188) + 0xfcu), rd32(t188), 4, t188, 0u, 0x11u, 2u);
        wr32(sp0 - 0x94u, sp0 - 0x54u);
        g->edx = sp0 - 0x54u;
        cow_call_regs(g, COW_IMG(0x10033da0u), t189, self + 0x48u, g->edx, 0, 1, sp0 - 0x54u);
        t190 = g->edx;
        wr32(sp0 - 0x94u, 2u);
        wr32(sp0 - 0x98u, 0x10u);
        wr32(sp0 - 0x9cu, 0u);
        t191 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xa0u, t191);
        cow_thiscall(g, rd32(rd32(t191) + 0xfcu), rd32(t191), 4, t191, 0u, 0x10u, 2u);
        wr32(sp0 - 0x94u, 2u);
        wr32(sp0 - 0x98u, 0x11u);
        wr32(sp0 - 0x9cu, 0u);
        t192 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xa0u, t192);
        g->esp = sp0 - 0x8cu;
        cow_thiscall(g, rd32(rd32(t192) + 0xfcu), rd32(t192), 5, t192, 0u, 0x11u, 2u, rd32(sp0 - 0x90u));
    }
    COW_AT(1002c243)
    t193 = rd32(sp0 - 0x8cu);
    wr32(self + 0xb4u, rd32(COW_IMG(0x104574a8u)));
    g->ebx = rd32(sp0 - 0x80u);
    g->esi = rd32(sp0 - 0x88u);
    g->edi = t193;
    g->ebp = rd32(sp0 - 0x84u);
    return;
L_1002becd: ;
    COW_AT(1002becd)
    if (rd8(eax + 0x92eu) == 0u) goto L_1002be86;
    COW_AT(1002bed5)
    wr32(sp0 - 0x90u, 3u);
    wr32(sp0 - 0x94u, 0x8cu);
    t128 = rd32(eax + 0xcu);
    wr32(sp0 - 0x98u, t128);
    g->edx = rd32(t128);
    t129 = rd32(t128);
    g->esp = sp0 - 0x8cu;
    cow_thiscall(g, rd32(t129 + 0xc8u), ecx, 3, t128, 0x8cu, 3u);
    t130 = g->edx;
    wr32(sp0 - 0x90u, 0u);
    wr32(sp0 - 0x94u, 0x23u);
    t131 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x98u, t131);
    g->edx = t130;
    t132 = rd32(t131);
    cow_thiscall(g, rd32(t132 + 0xc8u), t132, 3, t131, 0x23u, 0u);
    t133 = g->ecx;
    t134 = g->edx;
    if (rd8(rd32(COW_IMG(0x1045666cu)) + 0x92fu) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        edx = t134;
        goto L_1002be75;
    }
    eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    ecx = (t133 & 0xffffff00u) | rd8(rd32(COW_IMG(0x1045666cu)) + 0x92fu);
    COW_AT(1002bf12)
    wr32(sp0 - 0x90u, 1u);
    wr32(sp0 - 0x94u, 0x30u);
    wr32(sp0 - 0x98u, eax);
    g->esp = sp0 - 0x8cu;
    cow_thiscall(g, rd32(rd32(eax) + 0xc8u), ecx, 3, eax, 0x30u, 1u);
    t135 = g->ecx;
    ecx = t135;
    goto L_1002be81;
L_1002c259: ;
    COW_AT(1002c259)
    t194 = rd32(sp0 - 0x8cu);
    wr32(self + 0xb4u, rd32(COW_IMG(0x104574a8u)));
    g->ebx = rd32(sp0 - 0x80u);
    g->esi = rd32(sp0 - 0x88u);
    g->edi = t194;
    g->ebp = rd32(sp0 - 0x84u);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1002b6e0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1002b76du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_90;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        loc_90 = rd32(sp0 - 0x90u);
        in_edi = rd32(sp0 - 0x8cu);
        in_esi = rd32(sp0 - 0x88u);
        in_ebp = rd32(sp0 - 0x84u);
        in_ebx = rd32(sp0 - 0x80u);
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1002b776u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_90;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        loc_90 = rd32(sp0 - 0x90u);
        in_edi = rd32(sp0 - 0x8cu);
        in_esi = rd32(sp0 - 0x88u);
        in_ebp = rd32(sp0 - 0x84u);
        in_ebx = rd32(sp0 - 0x80u);
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1002b786u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_90;
        eax = g->eax;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        loc_90 = rd32(sp0 - 0x90u);
        in_edi = rd32(sp0 - 0x8cu);
        in_esi = rd32(sp0 - 0x88u);
        in_ebp = rd32(sp0 - 0x84u);
        in_ebx = rd32(sp0 - 0x80u);
        g->esp = sp0 - 0x8cu;
        g->ecx = arg6;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1002b796u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_90;
        eax = g->eax;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        loc_90 = rd32(sp0 - 0x90u);
        in_edi = rd32(sp0 - 0x8cu);
        in_esi = rd32(sp0 - 0x88u);
        in_ebp = rd32(sp0 - 0x84u);
        in_ebx = rd32(sp0 - 0x80u);
        g->esp = sp0 - 0x8cu;
        g->ecx = arg6;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1002b7b0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x1002b7c5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_90;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        loc_90 = rd32(sp0 - 0x90u);
        in_edi = rd32(sp0 - 0x8cu);
        in_esi = rd32(sp0 - 0x88u);
        in_ebp = rd32(sp0 - 0x84u);
        in_ebx = rd32(sp0 - 0x80u);
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1002b7e3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_90;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_90 = rd32(sp0 - 0x90u);
        in_edi = rd32(sp0 - 0x8cu);
        in_esi = rd32(sp0 - 0x88u);
        in_ebp = rd32(sp0 - 0x84u);
        in_ebx = rd32(sp0 - 0x80u);
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1002b901u:
    {
        const uint32_t arg7 = rd32(sp0 + 0x1cu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_90;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        loc_90 = rd32(sp0 - 0x90u);
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        g->esi = arg7;
        (void)sp0;
        return 1;
    }
    case 0x1002b92fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        g->esi = self + 0x9cu;
        wr32(sp0 - 0x90u, sp0 - 0x74u);
        (void)sp0;
        return 1;
    }
    case 0x1002b933u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        g->esi = self + 0x9cu;
        wr32(sp0 - 0x90u, sp0 - 0x74u);
        (void)sp0;
        return 1;
    }
    case 0x1002b938u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        g->esi = self + 0x9cu;
        wr32(sp0 - 0x90u, sp0 - 0x74u);
        (void)sp0;
        return 1;
    }
    case 0x1002b961u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        g->esi = self + 0x9cu;
        g->edi = self + 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x1002ba17u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        g->esi = self + 0x9cu;
        g->edi = self + 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x1002ba23u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        g->esi = self + 0x9cu;
        g->edi = self + 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x1002baebu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        g->esi = self + 0x9cu;
        g->edi = self + 0x74u;
        wr32(sp0 - 0x90u, sp0 - 0x74u);
        (void)sp0;
        return 1;
    }
    case 0x1002bb0cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_90;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_90 = rd32(sp0 - 0x90u);
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        g->esi = self + 0x9cu;
        g->edi = self + 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x1002bb15u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        g->esi = self + 0x9cu;
        g->edi = self + 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x1002bb1du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        g->esi = self + 0x9cu;
        g->edi = self + 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x1002bb26u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        g->esi = self + 0x9cu;
        g->edi = self + 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x1002bb58u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_90;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_90 = rd32(sp0 - 0x90u);
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        g->esi = self + 0x9cu;
        g->edi = self + 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x1002be45u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_90;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_90 = rd32(sp0 - 0x90u);
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        g->esi = self + 0x9cu;
        g->edi = self + 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x1002be75u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_90;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_90 = rd32(sp0 - 0x90u);
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        g->esi = self + 0x9cu;
        g->edi = self + 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x1002be81u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_90;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_90 = rd32(sp0 - 0x90u);
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        g->esi = self + 0x9cu;
        g->edi = self + 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x1002be86u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_90;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_90 = rd32(sp0 - 0x90u);
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        g->esi = self + 0x9cu;
        g->edi = self + 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x1002bebdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        g->esi = self + 0x9cu;
        g->edi = self + 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x1002becdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_90;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_90 = rd32(sp0 - 0x90u);
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        g->esi = self + 0x9cu;
        g->edi = self + 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x1002bed5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_90;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_90 = rd32(sp0 - 0x90u);
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        g->esi = self + 0x9cu;
        g->edi = self + 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x1002bf12u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        g->esi = self + 0x9cu;
        g->edi = self + 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x1002bf24u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        g->esi = self + 0x9cu;
        g->edi = self + 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x1002bf30u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_90;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_90 = rd32(sp0 - 0x90u);
        g->esp = sp0 - 0x90u;
        g->ebx = 0u;
        g->esi = self + 0x9cu;
        g->edi = self + 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x1002c243u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_90;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_90 = rd32(sp0 - 0x90u);
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    case 0x1002c259u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1002b6e0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1002b6e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 28u);
}
/* COW_ADAPTER END */
