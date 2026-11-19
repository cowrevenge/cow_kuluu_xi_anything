/* f_0x1029fa70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1029fa70(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_27c;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 676u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1029faaau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x268u); in_ebp = rd32(sp0 - 0x264u); in_ebx = rd32(sp0 - 0x260u); g->ebp = rd32(sp0 - 0x264u); g->ebx = rd32(sp0 - 0x260u); g->edi = rd32(sp0 - 0x268u); goto E_1029faaa;
    case 0x1029fadcu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x264u); in_ebx = rd32(sp0 - 0x260u); g->ebp = rd32(sp0 - 0x264u); g->ebx = rd32(sp0 - 0x260u); goto E_1029fadc;
    case 0x1029fc1du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_1029fc1d;
    case 0x1029fc33u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_1029fc33;
    case 0x1029fc48u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; goto E_1029fc48;
    case 0x1029fc7au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_1029fc7a;
    case 0x1029fc90u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_1029fc90;
    case 0x1029fc98u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_1029fc98;
    case 0x1029fcaeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_1029fcae;
    case 0x1029fcb8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_1029fcb8;
    case 0x1029fcceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_1029fcce;
    case 0x1029fcd8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_1029fcd8;
    case 0x1029fceeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_1029fcee;
    case 0x1029fcf8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_1029fcf8;
    case 0x1029fd0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_1029fd0e;
    case 0x1029fd18u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_1029fd18;
    case 0x1029fd2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_1029fd2e;
    case 0x1029fd38u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_1029fd38;
    case 0x1029fd4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_1029fd4e;
    case 0x1029fd6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_1029fd6e;
    case 0x1029fd84u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_1029fd84;
    case 0x1029fda4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_1029fda4;
    case 0x1029fdbeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_1029fdbe;
    case 0x1029fddcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; loc_27c = rd32(sp0 - 0x27cu); goto E_1029fddc;
    case 0x1029fde9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_1029fde9;
    case 0x1029fdfeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_1029fdfe;
    case 0x1029fe36u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; goto E_1029fe36;
    case 0x1029fe4du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; goto E_1029fe4d;
    case 0x1029fe6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; goto E_1029fe6c;
    case 0x1029fe76u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; goto E_1029fe76;
    case 0x1029fe83u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; goto E_1029fe83;
    case 0x1029fe8au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; goto E_1029fe8a;
    case 0x1029febcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; goto E_1029febc;
    case 0x1029fec5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; goto E_1029fec5;
    case 0x1029feceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; goto E_1029fece;
    case 0x1029fed7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; goto E_1029fed7;
    case 0x1029fee0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; goto E_1029fee0;
    case 0x1029fee7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; goto E_1029fee7;
    case 0x1029feecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; goto E_1029feec;
    case 0x1029ff29u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1029ff29;
    case 0x1029ff37u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1029ff37;
    case 0x1029ff3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1029ff3f;
    case 0x1029ff4du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1029ff4d;
    case 0x1029ff55u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1029ff55;
    case 0x1029ff63u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1029ff63;
    case 0x1029ff6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1029ff6b;
    case 0x1029ff79u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1029ff79;
    case 0x1029ff81u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1029ff81;
    case 0x1029ff8fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1029ff8f;
    case 0x1029ff97u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1029ff97;
    case 0x1029ffa5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1029ffa5;
    case 0x1029ffbcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; goto E_1029ffbc;
    default: break;
    }
#endif

    COW_AT(1029fa70)
    wr32(sp0 - 0x260u, in_ebx);
    wr32(sp0 - 0x264u, in_ebp);
    wr32(sp0 - 0x268u, in_edi);
    wr32(sp0 - 0x26cu, sp0 - 0x240u);
    wr8(sp0 - 0x251u, 0u);
    wr8(sp0 - 0x259u, 0u);
    wr8(sp0 - 0x252u, 0u);
    wr8(sp0 - 0x254u, 0u);
    wr8(sp0 - 0x253u, 0u);
    g->eax = sp0 - 0x240u;
    g->edx = in_edx;
    g->esp = sp0 - 0x268u;
    t1 = cow_cdecl(g, COW_IMG(0x1027eb10u), 1, sp0 - 0x240u);
    t2 = g->edx;
    wr32(sp0 - 0x270u, sp0 - 0x24cu);
    g->ebx = in_ebx & 0xffffff00u;
    g->esp = sp0 - 0x26cu;
    t3 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, sp0 - 0x24cu, t2, 1, 1, sp0 - 0x24cu);
    t4 = g->ecx;
    t5 = g->edx;
    if ((uint8_t)t3 != 0u)
    {
        eax = t3;
        ecx = t4;
        goto L_1029fadc;
    }
    eax = t3;
    ecx = t4;
    edx = t5;
    COW_AT(1029faaa)
    wr32(sp0 - 0x26cu, 0x2deu);
    wr32(sp0 - 0x270u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x274u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx & 0xffffff00u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x26cu;
    t6 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 - 0x278u, COW_IMG(0x103bcff0u));
    wr32(sp0 - 0x27cu, COW_IMG(0x103bcb40u));
    g->ebx = in_ebx & 0xffffff00u;
    g->edx = t8;
    g->esp = sp0 - 0x274u;
    t9 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcb40u), COW_IMG(0x103bcff0u));
    t10 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = t10;
    return t9 & 0xffffff00u;
L_1029fadc: ;
    COW_AT(1029fadc)
    wr32(sp0 - 0x26cu, 3u);
    t11 = rd32(sp0 - 0x24cu);
    wr32(sp0 - 0x270u, t11);
    wr32(sp0 - 0x274u, arg1);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t11;
    g->esp = sp0 - 0x250u;
    t12 = cow_cdecl(g, COW_IMG(0x10279a80u), 9, arg1, t11, 3u, in_edi, in_ebp, in_ebx, rd32(sp0 - 0x25cu), rd32(sp0 - 0x258u), rd32(sp0 - 0x254u));
    t13 = g->ecx;
    t14 = g->edx;
    if ((uint8_t)t12 == 0u)
    {
        eax = t12;
        edx = t14;
        goto L_1029fb2e;
    }
    eax = t12;
    ecx = t13;
    edx = t14;
    COW_AT(1029faf7)
    wr32(sp0 - 0x26cu, 0x2deu);
    wr32(sp0 - 0x270u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x274u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx & 0xffffff00u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x26cu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t15 = g->ecx;
    t16 = g->edx;
    t17 = rd32(sp0 - 0x24cu);
    wr32(sp0 - 0x278u, t17);
    wr32(sp0 - 0x27cu, COW_IMG(0x103bcff0u));
    wr32(sp0 - 0x280u, COW_IMG(0x103bcb24u));
    g->ebx = in_ebx & 0xffffff00u;
    g->eax = t17;
    g->edx = t16;
    g->esp = sp0 - 0x278u;
    t18 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcb24u), COW_IMG(0x103bcff0u));
    t19 = g->edx;
    g->ebx = rd32(sp0 - 0x260u);
    g->esi = in_esi;
    g->edi = rd32(sp0 - 0x268u);
    g->ebp = rd32(sp0 - 0x264u);
    g->edx = t19;
    return t18 & 0xffffff00u;
L_1029fb2e: ;
    COW_AT(1029fb2e)
    wr32(sp0 - 0x26cu, sp0 - 0x250u);
    g->ebx = in_ebx & 0xffffff00u;
    g->eax = eax;
    g->esp = sp0 - 0x268u;
    t20 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, sp0 - 0x250u, edx, 1, 1, sp0 - 0x250u);
    t21 = g->ecx;
    t22 = g->edx;
    if ((uint8_t)t20 != 0u)
    {
        eax = t20;
        ecx = t21;
        goto L_1029fb71;
    }
    eax = t20;
    ecx = t21;
    edx = t22;
    COW_AT(1029fb3f)
    wr32(sp0 - 0x26cu, 0x2dfu);
    wr32(sp0 - 0x270u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x274u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx & 0xffffff00u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x26cu;
    t23 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t24 = g->ecx;
    t25 = g->edx;
    wr32(sp0 - 0x278u, COW_IMG(0x103bcefcu));
    wr32(sp0 - 0x27cu, COW_IMG(0x103bcb40u));
    g->ebx = in_ebx & 0xffffff00u;
    g->edx = t25;
    g->esp = sp0 - 0x274u;
    t26 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcb40u), COW_IMG(0x103bcefcu));
    t27 = g->edx;
    g->ebx = rd32(sp0 - 0x260u);
    g->esi = in_esi;
    g->edi = rd32(sp0 - 0x268u);
    g->ebp = rd32(sp0 - 0x264u);
    g->edx = t27;
    return t26 & 0xffffff00u;
L_1029fb71: ;
    COW_AT(1029fb71)
    wr32(sp0 - 0x26cu, 1u);
    t28 = rd32(sp0 - 0x250u);
    wr32(sp0 - 0x270u, t28);
    wr32(sp0 - 0x274u, arg1);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t28;
    g->esp = sp0 - 0x250u;
    t29 = cow_cdecl(g, COW_IMG(0x10279a80u), 9, arg1, t28, 1u, rd32(sp0 - 0x268u), rd32(sp0 - 0x264u), rd32(sp0 - 0x260u), rd32(sp0 - 0x25cu), rd32(sp0 - 0x258u), rd32(sp0 - 0x254u));
    t30 = g->ecx;
    t31 = g->edx;
    if ((uint8_t)t29 != 0u)
    {
        eax = t29;
        edx = t31;
        goto L_1029fbc5;
    }
    eax = t29;
    ecx = t30;
    edx = t31;
    COW_AT(1029fb85)
    wr32(sp0 - 0x26cu, 0x2dfu);
    wr32(sp0 - 0x270u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x274u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx & 0xffffff00u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x26cu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t32 = g->ecx;
    t33 = g->edx;
    t34 = rd32(sp0 - 0x250u);
    wr32(sp0 - 0x26cu, t34);
    wr32(sp0 - 0x270u, 1u);
    g->eax = t34;
    g->ecx = t32;
    g->edx = t33;
    t35 = cow_cdecl(g, COW_IMG(0x1027a1e0u), 1, 1u);
    t36 = g->ecx;
    t37 = g->edx;
    wr32(sp0 - 0x270u, t35);
    wr32(sp0 - 0x274u, COW_IMG(0x103bcbe8u));
    g->ebx = in_ebx & 0xffffff00u;
    g->edx = t37;
    t38 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcbe8u), t35);
    t39 = g->edx;
    g->ebx = rd32(sp0 - 0x260u);
    g->esi = in_esi;
    g->edi = rd32(sp0 - 0x268u);
    g->ebp = rd32(sp0 - 0x264u);
    g->edx = t39;
    return t38 & 0xffffff00u;
L_1029fbc5: ;
    COW_AT(1029fbc5)
    wr32(sp0 - 0x26cu, sp0 - 0x248u);
    g->ebx = in_ebx & 0xffffff00u;
    g->eax = eax;
    g->esp = sp0 - 0x268u;
    t40 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, sp0 - 0x248u, edx, 1, 1, sp0 - 0x248u);
    t41 = g->ecx;
    t42 = g->edx;
    if ((uint8_t)t40 != 0u)
    {
        eax = t40;
        ecx = t41;
        goto L_1029fc08;
    }
    eax = t40;
    ecx = t41;
    edx = t42;
    COW_AT(1029fbd6)
    wr32(sp0 - 0x26cu, 0x2e0u);
    wr32(sp0 - 0x270u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x274u, COW_IMG(0x103b379cu));
    g->ebx = in_ebx & 0xffffff00u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x26cu;
    t43 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t44 = g->ecx;
    t45 = g->edx;
    wr32(sp0 - 0x278u, COW_IMG(0x103bcfe4u));
    wr32(sp0 - 0x27cu, COW_IMG(0x103bc94cu));
    g->ebx = in_ebx & 0xffffff00u;
    g->edx = t45;
    g->esp = sp0 - 0x274u;
    t46 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc94cu), COW_IMG(0x103bcfe4u));
    t47 = g->edx;
    g->ebx = rd32(sp0 - 0x260u);
    g->esi = in_esi;
    g->edi = rd32(sp0 - 0x268u);
    g->ebp = rd32(sp0 - 0x264u);
    g->edx = t47;
    return t46 & 0xffffff00u;
L_1029fc08: ;
    COW_AT(1029fc08)
    wr32(sp0 - 0x26cu, sp0 - 0x258u);
    g->ebx = in_ebx & 0xffffff00u;
    g->eax = eax;
    g->esp = sp0 - 0x268u;
    t48 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, ecx, sp0 - 0x258u, 1, 1, sp0 - 0x258u);
    t49 = g->ecx;
    t50 = g->edx;
    if ((uint8_t)t48 == 0u)
    {
        eax = t48;
        ecx = t49;
        edx = t50;
        ebx = in_ebx & 0xffffff00u;
        goto L_1029fdfe;
    }
    ecx = t49;
    edx = t50;
    ebx = in_ebx & 0xffffff00u;
L_1029fc1d: ;
    COW_AT(1029fc1d)
    wr32(sp0 - 0x26cu, COW_IMG(0x103b3ec4u));
    t51 = rd32(sp0 - 0x258u);
    wr32(sp0 - 0x270u, t51);
    g->ebx = ebx;
    g->eax = t51;
    g->esp = sp0 - 0x254u;
    t52 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, edx, 1, 7, t51, COW_IMG(0x103b3ec4u), rd32(sp0 - 0x268u), rd32(sp0 - 0x264u), rd32(sp0 - 0x260u), rd32(sp0 - 0x25cu), rd32(sp0 - 0x258u));
    t53 = g->ecx;
    t54 = g->edx;
    if (t52 != 0u)
    {
        eax = t52;
        ecx = t53;
        goto L_1029fc7a;
    }
    eax = t52;
    edx = t54;
    COW_AT(1029fc33)
    wr32(sp0 - 0x26cu, sp0 - 0x240u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x250u;
    t55 = cow_thiscall_cdecl(g, COW_IMG(0x102afda0u), sp0 - 0x240u, 7, sp0 - 0x240u, rd32(sp0 - 0x268u), rd32(sp0 - 0x264u), rd32(sp0 - 0x260u), rd32(sp0 - 0x25cu), rd32(sp0 - 0x258u), rd32(sp0 - 0x254u));
    t56 = g->ecx;
    t57 = g->edx;
    if ((uint8_t)t55 != 0u)
    {
        eax = t55;
        ecx = t56;
        goto L_1029fde9;
    }
    eax = t55;
    ecx = t56;
    edx = t57;
    COW_AT(1029fc48)
    wr32(sp0 - 0x26cu, 0x2e2u);
    wr32(sp0 - 0x270u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x274u, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x26cu;
    t58 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t59 = g->ecx;
    t60 = g->edx;
    wr32(sp0 - 0x278u, COW_IMG(0x103b3ec4u));
    wr32(sp0 - 0x27cu, COW_IMG(0x103bcfc4u));
    g->ebx = ebx;
    g->edx = t60;
    g->esp = sp0 - 0x274u;
    t61 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcfc4u), COW_IMG(0x103b3ec4u));
    t62 = g->edx;
    g->ebx = rd32(sp0 - 0x260u);
    g->esi = in_esi;
    g->edi = rd32(sp0 - 0x268u);
    g->ebp = rd32(sp0 - 0x264u);
    g->edx = t62;
    return t61 & 0xffffff00u;
L_1029fc7a: ;
    COW_AT(1029fc7a)
    wr32(sp0 - 0x26cu, COW_IMG(0x103bcfbcu));
    t63 = rd32(sp0 - 0x258u);
    wr32(sp0 - 0x270u, t63);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x254u;
    t64 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, t63, 1, 7, t63, COW_IMG(0x103bcfbcu), rd32(sp0 - 0x268u), rd32(sp0 - 0x264u), rd32(sp0 - 0x260u), rd32(sp0 - 0x25cu), rd32(sp0 - 0x258u));
    t65 = g->ecx;
    t66 = g->edx;
    if (t64 != 0u)
    {
        ecx = t65;
        edx = t66;
        goto L_1029fc98;
    }
    eax = t64;
    ecx = t65;
    COW_AT(1029fc90)
    ebx = (ebx & 0xffffff00u) | (uint8_t)(ebx | 0xffu);
L_1029fde9: ;
    COW_AT(1029fde9)
    wr32(sp0 - 0x26cu, sp0 - 0x258u);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x268u;
    t108 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, ecx, sp0 - 0x258u, 1, 1, sp0 - 0x258u);
    t109 = g->ecx;
    t110 = g->edx;
    if ((uint8_t)t108 != 0u)
    {
        ecx = t109;
        edx = t110;
        goto L_1029fc1d;
    }
    eax = t108;
    ecx = t109;
    edx = t110;
L_1029fdfe: ;
    COW_AT(1029fdfe)
    wr32(sp0 - 0x26cu, 0u);
    wr32(sp0 - 0x270u, 0u);
    wr32(sp0 - 0x274u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x268u;
    t116 = cow_thiscall_cdecl(g, COW_IMG(0x1027a310u), ecx, 3, 0u, 0u, 0u);
    t117 = g->edx;
    t118 = rd32(sp0 - 0x248u);
    wr32(sp0 - 0x26cu, t118);
    g->ecx = t118;
    g->esp = sp0 - 0x26cu;
    t119 = cow_stdcall(g, COW_IMG(0x102afdf0u), 0);
    t120 = g->ecx;
    wr32(sp0 - 0x270u, t119);
    wr32(sp0 - 0x274u, sp0 - 0x200u);
    g->edx = sp0 - 0x200u;
    g->esp = sp0 - 0x268u;
    cow_thiscall_cdecl(g, COW_IMG(0x1027a310u), t120, 3, sp0 - 0x200u, t119, rd32(sp0 - 0x26cu));
    t121 = g->ecx;
    t122 = g->edx;
    wr32(sp0 - 0x278u, sp0 - 0x200u);
    g->eax = sp0 - 0x200u;
    g->edx = t122;
    g->esp = sp0 - 0x274u;
    t123 = cow_thiscall_cdecl(g, COW_IMG(0x1028a280u), t121, 1, sp0 - 0x200u);
    t124 = g->ecx;
    t125 = g->edx;
    if ((uint8_t)t123 == 0u)
    {
        eax = t123;
        ecx = t124;
        edx = t125;
        goto L_1029ffbc;
    }
    eax = t123;
    edx = t125;
    COW_AT(1029fe36)
    wr32(sp0 - 0x26cu, sp0 - 0x200u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x260u;
    t126 = cow_thiscall_cdecl(g, COW_IMG(0x102b0630u), sp0 - 0x200u, 3, sp0 - 0x200u, rd32(sp0 - 0x268u), rd32(sp0 - 0x264u));
    t127 = g->ecx;
    t128 = g->edx;
    if (t126 == 0u)
    {
        eax = t126;
        ecx = t127;
        edx = t128;
        goto L_1029ffbc;
    }
    ecx = t127;
    edi = t126;
    COW_AT(1029fe4d)
    wr32(sp0 - 0x26cu, sp0 - 0x244u);
    t129 = rd32(sp0 - 0x250u);
    wr32(sp0 - 0x270u, t129);
    wr32(sp0 - 0x274u, arg1);
    g->eax = t129;
    g->ecx = ecx;
    g->edx = sp0 - 0x244u;
    g->esp = sp0 - 0x268u;
    t130 = cow_cdecl(g, COW_IMG(0x10279d50u), 3, arg1, t129, sp0 - 0x244u);
    t131 = g->ecx;
    t132 = g->edx;
    if (rd8(sp0 - 0x259u) == 0u)
    {
        eax = t130;
        edx = t132;
        goto L_1029feec;
    }
    eax = t130;
    ecx = (t131 & 0xffffff00u) | rd8(sp0 - 0x259u);
    edx = t132;
    COW_AT(1029fe6c)
    if (rd8(COW_IMG(0x109a2796u)) != 0u) goto L_1029feec;
    COW_AT(1029fe76)
    if (rd32(eax) - 0xf0001u > 4u) goto L_1029feec;
    ecx = rd32(eax) - 0xf0001u;
    COW_AT(1029fe83)
    t133 = rd32(COW_IMG(0x1029fff0u) + ecx * 4u);
    switch (t133 - RD)
    {
    case 0x1029febcu: goto L_1029febc;
    case 0x1029fec5u: goto L_1029fec5;
    case 0x1029feceu: goto L_1029fece;
    case 0x1029fed7u: goto L_1029fed7;
    case 0x1029fee0u: goto L_1029fee0;
    default: rt_fatal(g, COW_IMG(0x1029fe83u), "switch");
    }
    return 0;
L_1029fc98: ;
    COW_AT(1029fc98)
    wr32(sp0 - 0x26cu, COW_IMG(0x103bcfb0u));
    t67 = rd32(sp0 - 0x258u);
    wr32(sp0 - 0x270u, t67);
    g->ebx = ebx;
    g->eax = t67;
    g->esp = sp0 - 0x254u;
    t68 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, edx, 1, 7, t67, COW_IMG(0x103bcfb0u), rd32(sp0 - 0x268u), rd32(sp0 - 0x264u), rd32(sp0 - 0x260u), rd32(sp0 - 0x25cu), rd32(sp0 - 0x258u));
    t69 = g->ecx;
    t70 = g->edx;
    if (t68 != 0u)
    {
        eax = t68;
        edx = t70;
        goto L_1029fcb8;
    }
    eax = t68;
    ecx = t69;
    COW_AT(1029fcae)
    wr8(sp0 - 0x251u, 0xffu);
    goto L_1029fde9;
L_1029fcb8: ;
    COW_AT(1029fcb8)
    wr32(sp0 - 0x26cu, COW_IMG(0x103bcfa8u));
    t71 = rd32(sp0 - 0x258u);
    wr32(sp0 - 0x270u, t71);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x254u;
    t72 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, t71, edx, 1, 7, t71, COW_IMG(0x103bcfa8u), rd32(sp0 - 0x268u), rd32(sp0 - 0x264u), rd32(sp0 - 0x260u), rd32(sp0 - 0x25cu), rd32(sp0 - 0x258u));
    t73 = g->ecx;
    if (t72 != 0u)
    {
        eax = t72;
        ecx = t73;
        goto L_1029fcd8;
    }
    eax = t72;
    ecx = t73;
    COW_AT(1029fcce)
    wr8(sp0 - 0x259u, 0xffu);
    goto L_1029fde9;
L_1029fcd8: ;
    COW_AT(1029fcd8)
    wr32(sp0 - 0x26cu, COW_IMG(0x103bcfa0u));
    t74 = rd32(sp0 - 0x258u);
    wr32(sp0 - 0x270u, t74);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x254u;
    t75 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, t74, 1, 7, t74, COW_IMG(0x103bcfa0u), rd32(sp0 - 0x268u), rd32(sp0 - 0x264u), rd32(sp0 - 0x260u), rd32(sp0 - 0x25cu), rd32(sp0 - 0x258u));
    t76 = g->ecx;
    t77 = g->edx;
    if (t75 != 0u)
    {
        ecx = t76;
        edx = t77;
        goto L_1029fcf8;
    }
    eax = t75;
    ecx = t76;
    COW_AT(1029fcee)
    wr8(sp0 - 0x252u, 0xffu);
    goto L_1029fde9;
L_1029fcf8: ;
    COW_AT(1029fcf8)
    wr32(sp0 - 0x26cu, COW_IMG(0x103bcf94u));
    t78 = rd32(sp0 - 0x258u);
    wr32(sp0 - 0x270u, t78);
    g->ebx = ebx;
    g->eax = t78;
    g->esp = sp0 - 0x254u;
    t79 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, edx, 1, 7, t78, COW_IMG(0x103bcf94u), rd32(sp0 - 0x268u), rd32(sp0 - 0x264u), rd32(sp0 - 0x260u), rd32(sp0 - 0x25cu), rd32(sp0 - 0x258u));
    t80 = g->ecx;
    t81 = g->edx;
    if (t79 != 0u)
    {
        eax = t79;
        edx = t81;
        goto L_1029fd18;
    }
    eax = t79;
    ecx = t80;
    COW_AT(1029fd0e)
    wr8(sp0 - 0x254u, 0xffu);
    goto L_1029fde9;
L_1029fd18: ;
    COW_AT(1029fd18)
    wr32(sp0 - 0x26cu, COW_IMG(0x103bcf88u));
    t82 = rd32(sp0 - 0x258u);
    wr32(sp0 - 0x270u, t82);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x254u;
    t83 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, t82, edx, 1, 7, t82, COW_IMG(0x103bcf88u), rd32(sp0 - 0x268u), rd32(sp0 - 0x264u), rd32(sp0 - 0x260u), rd32(sp0 - 0x25cu), rd32(sp0 - 0x258u));
    t84 = g->ecx;
    if (t83 != 0u)
    {
        eax = t83;
        ecx = t84;
        goto L_1029fd38;
    }
    eax = t83;
    ecx = t84;
    COW_AT(1029fd2e)
    wr8(sp0 - 0x253u, 0xffu);
    goto L_1029fde9;
L_1029fd38: ;
    COW_AT(1029fd38)
    wr32(sp0 - 0x26cu, COW_IMG(0x103bcf80u));
    t85 = rd32(sp0 - 0x258u);
    wr32(sp0 - 0x270u, t85);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x254u;
    t86 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, t85, 1, 7, t85, COW_IMG(0x103bcf80u), rd32(sp0 - 0x268u), rd32(sp0 - 0x264u), rd32(sp0 - 0x260u), rd32(sp0 - 0x25cu), rd32(sp0 - 0x258u));
    t87 = g->ecx;
    t88 = g->edx;
    if (t86 != 0u)
    {
        ecx = t87;
        edx = t88;
        goto L_1029fd6e;
    }
    eax = t86;
    ecx = t87;
    edx = t88;
    COW_AT(1029fd4e)
    wr32(sp0 - 0x26cu, 0x2e9u);
    wr32(sp0 - 0x270u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x274u, COW_IMG(0x103b27fcu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x26cu;
    t89 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b27fcu), COW_IMG(0x103bc974u));
    t90 = g->ecx;
    t91 = g->edx;
    wr32(sp0 - 0x278u, COW_IMG(0x103bcfa8u));
    wr32(sp0 - 0x27cu, COW_IMG(0x103bcf80u));
    eax = t89;
    ecx = t90;
    edx = t91;
    loc_27c = COW_IMG(0x103bcf80u);
L_1029fddc: ;
    COW_AT(1029fddc)
    wr32(sp0 - 0x280u, COW_IMG(0x103bcf48u));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x278u;
    t106 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcf48u), loc_27c);
    t107 = g->ecx;
    eax = t106;
    ecx = t107;
    goto L_1029fde9;
L_1029fd6e: ;
    COW_AT(1029fd6e)
    wr32(sp0 - 0x26cu, COW_IMG(0x103bcf78u));
    t92 = rd32(sp0 - 0x258u);
    wr32(sp0 - 0x270u, t92);
    g->ebx = ebx;
    g->eax = t92;
    g->esp = sp0 - 0x254u;
    t93 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, ecx, edx, 1, 7, t92, COW_IMG(0x103bcf78u), rd32(sp0 - 0x268u), rd32(sp0 - 0x264u), rd32(sp0 - 0x260u), rd32(sp0 - 0x25cu), rd32(sp0 - 0x258u));
    t94 = g->ecx;
    t95 = g->edx;
    if (t93 != 0u)
    {
        eax = t93;
        edx = t95;
        goto L_1029fda4;
    }
    eax = t93;
    ecx = t94;
    edx = t95;
    COW_AT(1029fd84)
    wr32(sp0 - 0x26cu, 0x2eau);
    wr32(sp0 - 0x270u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x274u, COW_IMG(0x103b27fcu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x26cu;
    t96 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b27fcu), COW_IMG(0x103bc974u));
    t97 = g->ecx;
    t98 = g->edx;
    wr32(sp0 - 0x278u, COW_IMG(0x103bcfa8u));
    wr32(sp0 - 0x27cu, COW_IMG(0x103bcf78u));
    eax = t96;
    ecx = t97;
    edx = t98;
    loc_27c = COW_IMG(0x103bcf78u);
    goto L_1029fddc;
L_1029fda4: ;
    COW_AT(1029fda4)
    wr32(sp0 - 0x26cu, COW_IMG(0x103bcf6cu));
    t99 = rd32(sp0 - 0x258u);
    wr32(sp0 - 0x270u, t99);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x254u;
    t100 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, t99, edx, 1, 7, t99, COW_IMG(0x103bcf6cu), rd32(sp0 - 0x268u), rd32(sp0 - 0x264u), rd32(sp0 - 0x260u), rd32(sp0 - 0x25cu), rd32(sp0 - 0x258u));
    t101 = g->ecx;
    t102 = g->edx;
    if (t100 != 0u)
    {
        eax = t100;
        ecx = t101;
        edx = t102;
        goto L_1029fe8a;
    }
    eax = t100;
    ecx = t101;
    edx = t102;
    COW_AT(1029fdbe)
    wr32(sp0 - 0x26cu, 0x2ebu);
    wr32(sp0 - 0x270u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x274u, COW_IMG(0x103b27fcu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x26cu;
    t103 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b27fcu), COW_IMG(0x103bc974u));
    t104 = g->ecx;
    t105 = g->edx;
    wr32(sp0 - 0x278u, COW_IMG(0x103bcf94u));
    wr32(sp0 - 0x27cu, COW_IMG(0x103bcf6cu));
    eax = t103;
    ecx = t104;
    edx = t105;
    loc_27c = COW_IMG(0x103bcf6cu);
    goto L_1029fddc;
L_1029fe8a: ;
    COW_AT(1029fe8a)
    wr32(sp0 - 0x26cu, 0x2edu);
    wr32(sp0 - 0x270u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x274u, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x26cu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t111 = g->ecx;
    t112 = g->edx;
    t113 = rd32(sp0 - 0x258u);
    wr32(sp0 - 0x278u, t113);
    wr32(sp0 - 0x27cu, COW_IMG(0x103bcf28u));
    g->ebx = ebx;
    g->eax = t113;
    g->edx = t112;
    g->esp = sp0 - 0x274u;
    t114 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcf28u), t113);
    t115 = g->edx;
    g->ebx = rd32(sp0 - 0x260u);
    g->esi = in_esi;
    g->edi = rd32(sp0 - 0x268u);
    g->ebp = rd32(sp0 - 0x264u);
    g->edx = t115;
    return t114 & 0xffffff00u;
L_1029febc: ;
    COW_AT(1029febc)
    wr32(sp0 - 0x26cu, edi);
    wr32(sp0 - 0x270u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x268u;
    t142 = cow_cdecl(g, COW_IMG(0x10299270u), 2, eax, edi);
    t143 = g->edx;
    eax = t142;
    edx = t143;
L_1029fee7: ;
    COW_AT(1029fee7)
    edi = eax;
L_1029feec: ;
    COW_AT(1029feec)
    wr32(sp0 - 0x26cu, in_esi);
    t144 = rd32(arg1 + 0x58u);
    wr32(sp0 - 0x270u, t144);
    wr32(sp0 - 0x274u, 3u);
    t145 = rd32(sp0 - 0x24cu);
    wr32(sp0 - 0x278u, t145);
    wr32(sp0 - 0x27cu, arg1);
    g->eax = eax;
    g->esp = sp0 - 0x26cu;
    t146 = cow_thiscall_cdecl(g, COW_IMG(0x102799e0u), t145, 4, arg1, t145, 3u, t144);
    t147 = g->ecx;
    wr32(sp0 - 0x280u, t144);
    wr32(sp0 - 0x284u, 3u);
    t148 = rd32(sp0 - 0x248u);
    wr32(sp0 - 0x288u, t148);
    wr32(sp0 - 0x28cu, arg1);
    g->edx = t148;
    g->esp = sp0 - 0x27cu;
    cow_thiscall_cdecl(g, COW_IMG(0x10279910u), t147, 4, arg1, t148, 3u, t144);
    t149 = g->edx;
    wr32(sp0 - 0x290u, 0xffu);
    t150 = rd32(sp0 - 0x244u);
    wr32(sp0 - 0x294u, t150);
    wr32(sp0 - 0x298u, sp0 - 0x240u);
    wr32(sp0 - 0x29cu, edi);
    wr32(sp0 - 0x2a0u, arg1);
    g->eax = t150;
    g->edx = t149;
    g->esp = sp0 - 0x28cu;
    t151 = cow_thiscall_cdecl(g, COW_IMG(0x102795c0u), sp0 - 0x240u, 5, arg1, edi, sp0 - 0x240u, t150, 0xffu);
    t152 = g->ecx;
    t153 = g->edx;
    if ((uint8_t)ebx == 0u)
    {
        eax = t151;
        ecx = t152;
        edx = t153;
        esi = t144;
    }
    else
    {
        esi = t144;
    COW_AT(1029ff29)
        t154 = rd32(esi * 4u + rd32(arg1 + 0x54u)) | 0x40u;
        t155 = rd32(arg1 + 0x54u);
        wr32(esi * 4u + t155, t154);
        eax = esi * 4u + t155;
        ecx = t154;
        edx = t155;
    }
    COW_AT(1029ff37)
    if (rd8(sp0 - 0x251u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x251u);
    }
    else
    {
    COW_AT(1029ff3f)
        t156 = (rd32(esi * 4u + rd32(arg1 + 0x54u)) & 0xffffff00u) | (uint8_t)(rd32(esi * 4u + rd32(arg1 + 0x54u)) | 0x80u);
        t157 = rd32(arg1 + 0x54u);
        wr32(esi * 4u + t157, t156);
        eax = esi * 4u + t157;
        ecx = t156;
    }
    COW_AT(1029ff4d)
    if (rd8(sp0 - 0x259u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x259u);
    }
    else
    {
    COW_AT(1029ff55)
        t158 = (rd32(esi * 4u + rd32(arg1 + 0x54u)) & 0xffff00ffu) | (uint32_t)(uint8_t)(rd32(esi * 4u + rd32(arg1 + 0x54u)) >> 8u | 8u) << 8u;
        t159 = rd32(arg1 + 0x54u);
        wr32(esi * 4u + t159, t158);
        eax = esi * 4u + t159;
        ecx = t158;
    }
    COW_AT(1029ff63)
    if (rd8(sp0 - 0x252u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x252u);
    }
    else
    {
    COW_AT(1029ff6b)
        t160 = (rd32(esi * 4u + rd32(arg1 + 0x54u)) & 0xffff00ffu) | (uint32_t)(uint8_t)(rd32(esi * 4u + rd32(arg1 + 0x54u)) >> 8u | 0x20u) << 8u;
        t161 = rd32(arg1 + 0x54u);
        wr32(esi * 4u + t161, t160);
        eax = esi * 4u + t161;
        ecx = t160;
        edx = t161;
    }
    COW_AT(1029ff79)
    if (rd8(sp0 - 0x254u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x254u);
    }
    else
    {
    COW_AT(1029ff81)
        t162 = (rd32(esi * 4u + rd32(arg1 + 0x54u)) & 0xffff00ffu) | (uint32_t)(uint8_t)(rd32(esi * 4u + rd32(arg1 + 0x54u)) >> 8u | 0x10u) << 8u;
        t163 = rd32(arg1 + 0x54u);
        wr32(esi * 4u + t163, t162);
        eax = esi * 4u + t163;
        ecx = t162;
    }
    COW_AT(1029ff8f)
    if (rd8(sp0 - 0x253u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x253u);
    }
    else
    {
    COW_AT(1029ff97)
        t164 = rd32(esi * 4u + rd32(arg1 + 0x54u)) | 0x10u;
        t165 = rd32(arg1 + 0x54u);
        wr32(esi * 4u + t165, t164);
        eax = esi * 4u + t165;
        ecx = t164;
    }
    COW_AT(1029ffa5)
    wr32(sp0 - 0x270u, edi);
    wr32(sp0 - 0x274u, arg1);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x268u;
    t166 = cow_thiscall_cdecl(g, COW_IMG(0x1027a240u), ecx, 3, arg1, edi, rd32(sp0 - 0x26cu));
    t167 = g->edx;
    g->ebx = rd32(sp0 - 0x260u);
    g->esi = rd32(sp0 - 0x26cu);
    g->edi = rd32(sp0 - 0x268u);
    g->ebp = rd32(sp0 - 0x264u);
    g->edx = t167;
    return (t166 & 0xffffff00u) | (uint8_t)(t166 | 0xffu);
L_1029fec5: ;
    COW_AT(1029fec5)
    wr32(sp0 - 0x26cu, edi);
    wr32(sp0 - 0x270u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x268u;
    t140 = cow_cdecl(g, COW_IMG(0x10299630u), 2, eax, edi);
    t141 = g->edx;
    eax = t140;
    edx = t141;
    goto L_1029fee7;
L_1029fece: ;
    COW_AT(1029fece)
    wr32(sp0 - 0x26cu, edi);
    wr32(sp0 - 0x270u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x268u;
    t138 = cow_cdecl(g, COW_IMG(0x10290fe0u), 2, eax, edi);
    t139 = g->edx;
    eax = t138;
    edx = t139;
    goto L_1029fee7;
L_1029fed7: ;
    COW_AT(1029fed7)
    wr32(sp0 - 0x26cu, edi);
    wr32(sp0 - 0x270u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x268u;
    t136 = cow_cdecl(g, COW_IMG(0x10299ad0u), 2, eax, edi);
    t137 = g->edx;
    eax = t136;
    edx = t137;
    goto L_1029fee7;
L_1029fee0: ;
    COW_AT(1029fee0)
    wr32(sp0 - 0x26cu, edi);
    wr32(sp0 - 0x270u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x268u;
    t134 = cow_cdecl(g, COW_IMG(0x10299860u), 2, eax, edi);
    t135 = g->edx;
    eax = t134;
    edx = t135;
    goto L_1029fee7;
L_1029ffbc: ;
    COW_AT(1029ffbc)
    wr32(sp0 - 0x26cu, 0x2f7u);
    wr32(sp0 - 0x270u, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x274u, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x26cu;
    t168 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u));
    t169 = g->ecx;
    t170 = rd32(sp0 - 0x248u);
    wr32(sp0 - 0x278u, t170);
    wr32(sp0 - 0x27cu, COW_IMG(0x103bcf08u));
    g->ebx = ebx;
    g->edx = t170;
    g->esp = sp0 - 0x274u;
    t171 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcf08u), t170);
    t172 = g->edx;
    g->ebx = rd32(sp0 - 0x260u);
    g->esi = in_esi;
    g->edi = rd32(sp0 - 0x268u);
    g->ebp = rd32(sp0 - 0x264u);
    g->edx = t172;
    return t171 & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1029fa70(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1029faaau:
    {
        uint32_t eax;
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
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x268u);
        in_ebp = rd32(sp0 - 0x264u);
        in_ebx = rd32(sp0 - 0x260u);
        g->esp = sp0 - 0x268u;
        g->ebx = in_ebx & 0xffffff00u;
        wr32(sp0 - 0x270u, sp0 - 0x24cu);
        wr32(sp0 - 0x26cu, sp0 - 0x240u);
        (void)sp0;
        return 1;
    }
    case 0x1029fadcu:
    {
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
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x264u);
        in_ebx = rd32(sp0 - 0x260u);
        g->esp = sp0 - 0x268u;
        g->ebx = in_ebx & 0xffffff00u;
        wr32(sp0 - 0x270u, sp0 - 0x24cu);
        wr32(sp0 - 0x26cu, sp0 - 0x240u);
        wr32(sp0 - 0x268u, in_edi);
        (void)sp0;
        return 1;
    }
    case 0x1029fc1du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x268u;
        g->ebp = arg1;
        wr32(sp0 - 0x26cu, sp0 - 0x258u);
        (void)sp0;
        return 1;
    }
    case 0x1029fc33u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x268u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029fc48u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x268u;
        wr32(sp0 - 0x26cu, sp0 - 0x240u);
        (void)sp0;
        return 1;
    }
    case 0x1029fc7au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x268u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029fc90u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x268u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029fc98u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x268u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029fcaeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x268u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029fcb8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x268u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029fcceu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x268u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029fcd8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x268u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029fceeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x268u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029fcf8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x268u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029fd0eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x268u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029fd18u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x268u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029fd2eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x268u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029fd38u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x268u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029fd4eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x268u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029fd6eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x268u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029fd84u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x268u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029fda4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x268u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029fdbeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x268u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029fddcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_27c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        loc_27c = rd32(sp0 - 0x27cu);
        g->esp = sp0 - 0x27cu;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029fde9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x268u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1029fdfeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x268u;
        g->ebp = arg1;
        wr32(sp0 - 0x26cu, sp0 - 0x258u);
        (void)sp0;
        return 1;
    }
    case 0x1029fe36u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x268u;
        g->ebp = arg1;
        wr32(sp0 - 0x278u, sp0 - 0x200u);
        wr32(sp0 - 0x274u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x1029fe4du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x268u;
        g->ebp = arg1;
        wr32(sp0 - 0x278u, sp0 - 0x200u);
        wr32(sp0 - 0x274u, sp0 - 0x200u);
        wr32(sp0 - 0x26cu, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x1029fe6cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x268u;
        g->ebp = arg1;
        wr32(sp0 - 0x278u, sp0 - 0x200u);
        wr32(sp0 - 0x26cu, sp0 - 0x244u);
        (void)sp0;
        return 1;
    }
    case 0x1029fe76u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x268u;
        g->ebp = arg1;
        wr32(sp0 - 0x278u, sp0 - 0x200u);
        wr32(sp0 - 0x26cu, sp0 - 0x244u);
        (void)sp0;
        return 1;
    }
    case 0x1029fe83u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x268u;
        g->ebp = arg1;
        wr32(sp0 - 0x278u, sp0 - 0x200u);
        wr32(sp0 - 0x26cu, sp0 - 0x244u);
        (void)sp0;
        return 1;
    }
    case 0x1029fe8au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x268u;
        (void)sp0;
        return 1;
    }
    case 0x1029febcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x268u;
        g->ebp = arg1;
        wr32(sp0 - 0x278u, sp0 - 0x200u);
        wr32(sp0 - 0x26cu, sp0 - 0x244u);
        (void)sp0;
        return 1;
    }
    case 0x1029fec5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x268u;
        g->ebp = arg1;
        wr32(sp0 - 0x278u, sp0 - 0x200u);
        wr32(sp0 - 0x26cu, sp0 - 0x244u);
        (void)sp0;
        return 1;
    }
    case 0x1029feceu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x268u;
        g->ebp = arg1;
        wr32(sp0 - 0x278u, sp0 - 0x200u);
        wr32(sp0 - 0x26cu, sp0 - 0x244u);
        (void)sp0;
        return 1;
    }
    case 0x1029fed7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x268u;
        g->ebp = arg1;
        wr32(sp0 - 0x278u, sp0 - 0x200u);
        wr32(sp0 - 0x26cu, sp0 - 0x244u);
        (void)sp0;
        return 1;
    }
    case 0x1029fee0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x268u;
        g->ebp = arg1;
        wr32(sp0 - 0x278u, sp0 - 0x200u);
        wr32(sp0 - 0x26cu, sp0 - 0x244u);
        (void)sp0;
        return 1;
    }
    case 0x1029fee7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x270u;
        g->ebp = arg1;
        wr32(sp0 - 0x278u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x1029feecu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x268u;
        g->ebp = arg1;
        wr32(sp0 - 0x278u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x1029ff29u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x26cu;
        g->ebp = arg1;
        wr32(sp0 - 0x298u, sp0 - 0x240u);
        (void)sp0;
        return 1;
    }
    case 0x1029ff37u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x26cu;
        g->ebp = arg1;
        wr32(sp0 - 0x298u, sp0 - 0x240u);
        (void)sp0;
        return 1;
    }
    case 0x1029ff3fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x26cu;
        g->ebp = arg1;
        wr32(sp0 - 0x298u, sp0 - 0x240u);
        (void)sp0;
        return 1;
    }
    case 0x1029ff4du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x26cu;
        g->ebp = arg1;
        wr32(sp0 - 0x298u, sp0 - 0x240u);
        (void)sp0;
        return 1;
    }
    case 0x1029ff55u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x26cu;
        g->ebp = arg1;
        wr32(sp0 - 0x298u, sp0 - 0x240u);
        (void)sp0;
        return 1;
    }
    case 0x1029ff63u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x26cu;
        g->ebp = arg1;
        wr32(sp0 - 0x298u, sp0 - 0x240u);
        (void)sp0;
        return 1;
    }
    case 0x1029ff6bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x26cu;
        g->ebp = arg1;
        wr32(sp0 - 0x298u, sp0 - 0x240u);
        (void)sp0;
        return 1;
    }
    case 0x1029ff79u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x26cu;
        g->ebp = arg1;
        wr32(sp0 - 0x298u, sp0 - 0x240u);
        (void)sp0;
        return 1;
    }
    case 0x1029ff81u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x26cu;
        g->ebp = arg1;
        wr32(sp0 - 0x298u, sp0 - 0x240u);
        (void)sp0;
        return 1;
    }
    case 0x1029ff8fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x26cu;
        g->ebp = arg1;
        wr32(sp0 - 0x298u, sp0 - 0x240u);
        (void)sp0;
        return 1;
    }
    case 0x1029ff97u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x26cu;
        g->ebp = arg1;
        wr32(sp0 - 0x298u, sp0 - 0x240u);
        (void)sp0;
        return 1;
    }
    case 0x1029ffa5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x26cu;
        g->ebp = arg1;
        wr32(sp0 - 0x298u, sp0 - 0x240u);
        (void)sp0;
        return 1;
    }
    case 0x1029ffbcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x268u;
        wr32(sp0 - 0x278u, sp0 - 0x200u);
        wr32(sp0 - 0x274u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
/* blocks no state can start at, and why (the gittable lists their sites):
     1029faf7: holds in_ebx, which no location here says
     1029fb2e: holds in_ebx, which no location here says
     1029fb3f: holds in_ebx, which no location here says
     1029fb71: holds in_ebx, which no location here says
     1029fb85: holds in_ebx, which no location here says
     1029fbc5: holds in_ebx, which no location here says
     1029fbd6: holds in_ebx, which no location here says
     1029fc08: holds in_ebx, which no location here says
*/
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1029fa70(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1029fa70(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
