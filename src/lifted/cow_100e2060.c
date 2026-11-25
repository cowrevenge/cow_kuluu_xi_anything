/* f_0x100e2060 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100e2060(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_26c;
    uint32_t loc_290;
    uint32_t loc_294;
    uint32_t loc_298;
    uint32_t loc_29c;
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
    uint32_t t13;
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
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 708u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100e207bu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; in_edi = g->edi; zf = g->zf; in_esi = rd32(sp0 - 0x298u); in_ebp = rd32(sp0 - 0x294u); in_ebx = rd32(sp0 - 0x290u); g->ebp = rd32(sp0 - 0x294u); g->ebx = rd32(sp0 - 0x290u); g->esi = rd32(sp0 - 0x298u); goto E_100e207b;
    case 0x100e2088u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = g->edi; zf = g->zf; goto E_100e2088;
    case 0x100e2093u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = g->edi; zf = g->zf; goto E_100e2093;
    case 0x100e209bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = g->edi; zf = g->zf; goto E_100e209b;
    case 0x100e20acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = g->edi; zf = g->zf; loc_26c = rd32(sp0 - 0x26cu); goto E_100e20ac;
    case 0x100e20b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = g->edi; zf = g->zf; goto E_100e20b8;
    case 0x100e20cau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = g->edi; zf = g->zf; goto E_100e20ca;
    case 0x100e20d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = g->edi; zf = g->zf; goto E_100e20d5;
    case 0x100e20e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = g->edi; zf = g->zf; goto E_100e20e7;
    case 0x100e20f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = g->edi; zf = g->zf; goto E_100e20f2;
    case 0x100e20fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = g->edi; zf = g->zf; goto E_100e20fa;
    case 0x100e2100u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = g->edi; zf = g->zf; goto E_100e2100;
    case 0x100e2125u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = g->edi; zf = g->zf; goto E_100e2125;
    case 0x100e2128u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = g->edi; zf = g->zf; goto E_100e2128;
    case 0x100e216eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_edi = g->edi; zf = g->zf; goto E_100e216e;
    case 0x100e2171u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_edi = g->edi; zf = g->zf; goto E_100e2171;
    case 0x100e2178u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e2178;
    case 0x100e2184u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e2184;
    case 0x100e218bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e218b;
    case 0x100e219au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e219a;
    case 0x100e21a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e21a0;
    case 0x100e21adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e21ad;
    case 0x100e21b9u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e21b9;
    case 0x100e21bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e21bf;
    case 0x100e21c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e21c7;
    case 0x100e21d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e21d6;
    case 0x100e21d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e21d8;
    case 0x100e21e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e21e2;
    case 0x100e21e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e21e9;
    case 0x100e21ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e21eb;
    case 0x100e21f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e21f5;
    case 0x100e2207u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e2207;
    case 0x100e2211u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e2211;
    case 0x100e221bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e221b;
    case 0x100e2230u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e2230;
    case 0x100e2242u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e2242;
    case 0x100e2259u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e2259;
    case 0x100e2268u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e2268;
    case 0x100e2274u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e2274;
    case 0x100e227bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e227b;
    case 0x100e2287u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; zf = g->zf; goto E_100e2287;
    case 0x100e22a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e22a7;
    case 0x100e22b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e22b8;
    case 0x100e22c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e22c2;
    case 0x100e22d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e22d4;
    case 0x100e22e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e22e3;
    case 0x100e22f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e22f5;
    case 0x100e2303u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e2303;
    case 0x100e231au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e231a;
    case 0x100e232eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e232e;
    case 0x100e2333u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e2333;
    case 0x100e2345u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e2345;
    case 0x100e2353u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e2353;
    case 0x100e236au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e236a;
    case 0x100e237eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e237e;
    case 0x100e2383u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e2383;
    case 0x100e2393u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e2393;
    case 0x100e23bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e23ba;
    case 0x100e23c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e23c6;
    case 0x100e23c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e23c9;
    case 0x100e23d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e23d7;
    case 0x100e23e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e23e1;
    case 0x100e23efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e23ef;
    case 0x100e23feu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e23fe;
    case 0x100e2406u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e2406;
    case 0x100e240du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e240d;
    case 0x100e242au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; zf = g->zf; goto E_100e242a;
    case 0x100e244cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e244c;
    case 0x100e2454u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e2454;
    case 0x100e248cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; zf = g->zf; goto E_100e248c;
    case 0x100e24a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e24a3;
    case 0x100e24afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e24af;
    case 0x100e24b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e24b7;
    case 0x100e24c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e24c1;
    case 0x100e24cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e24cf;
    case 0x100e24e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e24e5;
    case 0x100e24f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e24f4;
    case 0x100e24fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e24fc;
    case 0x100e2503u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e2503;
    case 0x100e250du: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e250d;
    case 0x100e2514u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e2514;
    case 0x100e2533u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e2533;
    case 0x100e2536u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e2536;
    case 0x100e2542u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e2542;
    case 0x100e2555u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e2555;
    case 0x100e255fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e255f;
    case 0x100e2577u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; zf = g->zf; goto E_100e2577;
    case 0x100e2587u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; zf = g->zf; goto E_100e2587;
    case 0x100e25b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e25b5;
    case 0x100e25c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e25c1;
    case 0x100e25c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e25c9;
    case 0x100e25ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e25eb;
    case 0x100e25fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e25fb;
    case 0x100e2603u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e2603;
    case 0x100e2606u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e2606;
    case 0x100e2622u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e2622;
    case 0x100e2627u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e2627;
    case 0x100e262eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e262e;
    case 0x100e2666u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e2666;
    case 0x100e2672u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e2672;
    case 0x100e267bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e267b;
    case 0x100e268au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e268a;
    case 0x100e268eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e268e;
    case 0x100e2697u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e2697;
    case 0x100e269bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e269b;
    case 0x100e26a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e26a9;
    case 0x100e26b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e26b0;
    case 0x100e26b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e26b6;
    case 0x100e26c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e26c3;
    case 0x100e26cau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e26ca;
    case 0x100e26cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e26cf;
    case 0x100e26deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e26de;
    case 0x100e26edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e26ed;
    case 0x100e26fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; zf = g->zf; goto E_100e26fa;
    case 0x100e2706u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; edi = g->edi; zf = g->zf; goto E_100e2706;
    case 0x100e2709u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; edi = g->edi; zf = g->zf; goto E_100e2709;
    case 0x100e2714u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; edi = g->edi; zf = g->zf; goto E_100e2714;
    case 0x100e2719u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; edi = g->edi; zf = g->zf; goto E_100e2719;
    case 0x100e2722u: ecx = g->ecx; ebx = g->ebx; edi = g->edi; zf = g->zf; goto E_100e2722;
    case 0x100e273du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; zf = g->zf; goto E_100e273d;
    case 0x100e2742u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; edi = g->edi; zf = g->zf; goto E_100e2742;
    case 0x100e2756u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; zf = g->zf; goto E_100e2756;
    case 0x100e2775u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; zf = g->zf; goto E_100e2775;
    case 0x100e2781u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; zf = g->zf; goto E_100e2781;
    case 0x100e2784u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; zf = g->zf; goto E_100e2784;
    case 0x100e278cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; zf = g->zf; goto E_100e278c;
    case 0x100e2792u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e2792;
    case 0x100e27a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e27a9;
    case 0x100e27bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; zf = g->zf; loc_26c = rd32(sp0 - 0x26cu); goto E_100e27ba;
    case 0x100e27c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; zf = g->zf; goto E_100e27c7;
    case 0x100e27ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; zf = g->zf; goto E_100e27ce;
    case 0x100e27d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; zf = g->zf; goto E_100e27d6;
    case 0x100e27d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; zf = g->zf; goto E_100e27d8;
    case 0x100e27e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; zf = g->zf; goto E_100e27e5;
    case 0x100e27edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; zf = g->zf; goto E_100e27ed;
    case 0x100e27f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; zf = g->zf; goto E_100e27f4;
    case 0x100e27f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100e27f8;
    case 0x100e2805u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; loc_29c = rd32(sp0 - 0x29cu); loc_298 = rd32(sp0 - 0x298u); loc_294 = rd32(sp0 - 0x294u); loc_290 = rd32(sp0 - 0x290u); goto E_100e2805;
    default: break;
    }
#endif

    COW_AT(100e2060)
    wr32(sp0 - 0x290u, in_ebx);
    wr32(sp0 - 0x294u, in_ebp);
    wr32(sp0 - 0x298u, in_esi);
    wr32(sp0 - 0x29cu, in_edi);
    if (arg3 == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        loc_290 = in_ebx;
        loc_294 = in_ebp;
        loc_298 = in_esi;
        loc_29c = in_edi;
        goto L_100e2805;
    }
    COW_AT(100e207b)
    wr32(sp0 - 0x2a0u, sp0 - 0x270u);
    wr32(sp0 - 0x2a4u, rd32(arg3));
    g->eax = sp0 - 0x270u;
    t1 = rd32(arg3);
    g->esp = sp0 - 0x298u;
    t2 = cow_call_regs(g, COW_IMG(0x100d92a0u), g->eax, t1, in_edx, 1, 3, t1, sp0 - 0x270u, in_edi);
    t3 = g->ecx;
    t4 = g->edx;
    eax = t2;
    ecx = t3;
    edx = t4;
    COW_AT(100e2088)
    if (eax != 0u)
    {
        loc_290 = rd32(sp0 - 0x290u);
        loc_294 = rd32(sp0 - 0x294u);
        loc_298 = rd32(sp0 - 0x298u);
        loc_29c = rd32(sp0 - 0x29cu);
        goto L_100e2805;
    }
    COW_AT(100e2093)
    wr32(sp0 - 0x2a0u, rd32(arg3));
    g->eax = eax;
    t5 = rd32(arg3);
    g->esp = sp0 - 0x294u;
    t6 = cow_call_regs(g, COW_IMG(0x100d8aa0u), g->eax, ecx, t5, 1, 3, t5, rd32(sp0 - 0x29cu), rd32(sp0 - 0x298u));
    t7 = g->ecx;
    t8 = g->edx;
    eax = t6;
    ecx = t7;
    edx = t8;
    COW_AT(100e209b)
    wr32(sp0 - 0x26cu, eax);
    if (eax == 0u) goto L_100e27ba;
    ebx = eax;
    loc_26c = eax;
    COW_AT(100e20ac)
    wr32(sp0 - 0x2a0u, ebx);
    wr32(sp0 - 0x2a4u, arg3);
    wr8(sp0 - 0x289u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x29cu;
    t9 = cow_thiscall_cdecl(g, COW_IMG(0x100e2860u), ecx, 2, arg3, ebx);
    t10 = g->ecx;
    t11 = g->edx;
    eax = t9;
    ecx = t10;
    edx = t11;
    COW_AT(100e20b8)
    if ((uint8_t)eax == 0u) goto L_100e26ca;
    COW_AT(100e20ca)
    if (rd8(arg2 + 5u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(arg2 + 5u);
        edi = in_edi;
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(arg2 + 5u);
    COW_AT(100e20d5)
        t12 = rd8(arg2 + 4u);
        wr8(arg2 + 4u, (uint8_t)(t12 + 1u));
        if ((uint8_t)t12 != 0u)
        {
            eax = (eax & 0xffffff00u) | t12;
            edx = (edx & 0xffffff00u) | (uint8_t)(t12 + 1u);
            edi = in_edi;
        }
        else
        {
            eax = (eax & 0xffffff00u) | t12;
            edx = (edx & 0xffffff00u) | (uint8_t)(t12 + 1u);
    COW_AT(100e20e7)
            if (rd32(arg2 + 0x14u) == 0u)
            {
                ecx = rd32(arg2 + 0x14u);
                edi = in_edi;
            }
            else
            {
                ecx = rd32(arg2 + 0x14u);
    COW_AT(100e20f2)
                if (rd32(arg2 + 0x10u) == 2u)
                {
                    eax = rd32(arg2 + 0x10u) - 2u;
                }
                else
                {
                    eax = rd32(arg2 + 0x10u) - 2u;
    COW_AT(100e20fa)
                    t13 = rd16(arg2 + 8u);
                    if ((uint16_t)t13 == 0u)
                    {
    COW_AT(100e2100)
                        t14 = rd16(arg2 + 0xcu);
                        wr16(sp0 - 0x280u, rd16(arg2 + 0xau));
                        wr16(sp0 - 0x27eu, (uint16_t)t14);
                        wr32(sp0 - 0x2a0u, sp0 - 0x288u);
                        t15 = rd32(arg2 + 0x18u);
                        wr32(sp0 - 0x2a4u, t15);
                        wr32(sp0 - 0x288u, 0u);
                        wr32(sp0 - 0x284u, 0u);
                        g->eax = t15;
                        g->edx = sp0 - 0x288u;
                        g->esp = sp0 - 0x2a4u;
                        t16 = cow_thiscall(g, ecx, ecx, 0);
                        t17 = g->edx;
                        eax = t16;
                        edx = t17;
    COW_AT(100e2125)
                    }
    COW_AT(100e2128)
                    wr32(sp0 - 0x288u, 1u);
                    wr32(sp0 - 0x284u, 0u);
                    t18 = rd16(ebx + 0xeu);
                    wr32(sp0 - 0x280u, t18);
                    t19 = rd16(ebx + 0x10u);
                    wr16(sp0 - 0x27cu, (uint16_t)t19);
                    wr16(sp0 - 0x27au, rd16(ebx + 0x12u));
                    wr16(sp0 - 0x278u, rd16(ebx + 0x14u));
                    wr32(sp0 - 0x2a0u, sp0 - 0x288u);
                    t20 = rd32(arg2 + 0x18u);
                    wr32(sp0 - 0x2a4u, t20);
                    t21 = rd16(ebx + 0x16u);
                    wr16(sp0 - 0x276u, (uint16_t)t21);
                    g->eax = sp0 - 0x288u;
                    g->edx = ((edx | t19) & 0xffff0000u) | t21;
                    g->esp = sp0 - 0x2a4u;
                    t22 = cow_thiscall(g, rd32(arg2 + 0x14u), t20, 0);
                    t23 = g->ecx;
                    t24 = g->edx;
                    eax = t22;
                    ecx = t23;
                    edx = t24;
    COW_AT(100e216e)
                }
    COW_AT(100e2171)
                t25 = rd16(arg2 + 8u);
                if ((uint16_t)t25 != 3u)
                {
                    edi = in_edi;
                }
                else
                {
    COW_AT(100e2178)
                    edi = arg2 + 0x20u;
                    eax = 0u;
                    ecx = 0x3du;
                    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                }
            }
        }
    COW_AT(100e2184)
        if ((int8_t)rd8(ebx + 0xau) >= 0)
        {
            eax = (eax & 0xffffff00u) | rd8(ebx + 0xau);
    COW_AT(100e219a)
            wr16(arg2 + 0x1eu, 1u);
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(ebx + 0xau);
    COW_AT(100e218b)
            wr16(arg1 + 2u, 3u);
            edx = arg1;
        }
    }
    COW_AT(100e21a0)
    if (rd16(arg2 + 8u) >= 3u)
    {
        eax = (eax & 0xffff0000u) | rd16(arg2 + 8u);
        ebp = ebx + 0x18u;
        goto L_100e21d8;
    }
    ebp = ebx + 0x18u;
    COW_AT(100e21ad)
    if (rd8(arg2 + 5u) == 0u)
    {
        eax = 0u;
        goto L_100e21eb;
    }
    edi = (edi & 0xffff0000u) | rd8(arg2 + 5u);
    COW_AT(100e21b9)
    eax = 0u;
    ecx = rd16(ebx + 8u);
L_100e21bf: ;
    COW_AT(100e21bf)
    if ((int32_t)(ebp - ebx) >= (int32_t)ecx) goto L_100e21e9;
    COW_AT(100e21c7)
    if ((uint16_t)(eax + 1u) < (uint16_t)edi)
    {
        eax = eax + 1u;
        ebp = ebp + rd8(ebp) + 1u;
        goto L_100e21bf;
    }
    eax = eax + 1u;
    ebp = ebp + rd8(ebp) + 1u;
    COW_AT(100e21d6)
L_100e21eb: ;
    COW_AT(100e21eb)
    if (ebp == 0u)
    {
        ecx = ecx & 0xffffff00u;
        goto L_100e26c3;
    }
    ecx = ecx & 0xffffff00u;
L_100e21f5: ;
    COW_AT(100e21f5)
    if ((int32_t)(ebp - ebx) >= (int32_t)rd16(ebx + 8u))
    {
        edx = rd16(ebx + 8u);
        goto L_100e2697;
    }
    edx = rd16(ebx + 8u);
    edi = ebp - ebx;
    COW_AT(100e2207)
    if (rd16(arg2 + 8u) >= 3u)
    {
        eax = (eax & 0xffff0000u) | rd16(arg2 + 8u);
        goto L_100e221b;
    }
    eax = (eax & 0xffff0000u) | rd16(arg2 + 8u);
    COW_AT(100e2211)
    t35 = rd8(ebp);
    if ((uint8_t)t35 == 0u) goto L_100e2697;
L_100e221b: ;
    COW_AT(100e221b)
    t36 = rd16(arg2 + 0x1cu);
    wr8(sp0 - 0x271u, (uint8_t)((uint8_t)ecx + 1u));
    if ((uint8_t)ecx >= (uint16_t)t36)
    {
        edx = (edx & 0xffff0000u) | (uint8_t)ecx;
        ecx = (ecx & 0xffffff00u) | (uint8_t)((uint8_t)ecx + 1u);
        goto L_100e2697;
    }
    edx = (edx & 0xffff0000u) | (uint8_t)ecx;
    ecx = (ecx & 0xffffff00u) | (uint8_t)((uint8_t)ecx + 1u);
    COW_AT(100e2230)
    t37 = rd8(arg2 + 5u);
    wr8(arg2 + 5u, (uint8_t)(t37 + 1u));
    if ((uint16_t)eax >= 3u)
    {
        edx = (edx & 0xffffff00u) | (uint8_t)(t37 + 1u);
        goto L_100e23d7;
    }
    edx = (edx & 0xffffff00u) | (uint8_t)(t37 + 1u);
    COW_AT(100e2242)
    if ((int32_t)(ebp + rd8(ebp) - ebx) >= (int32_t)rd16(ebx + 8u))
    {
        eax = ebp + rd8(ebp) - ebx;
        ecx = rd16(ebx + 8u);
        goto L_100e26c3;
    }
    ecx = rd16(ebx + 8u);
    COW_AT(100e2259)
    t38 = rd16(arg2 + 6u);
    t39 = rd32(arg2 + 0x14u);
    wr16(arg2 + 6u, (uint16_t)(t38 + 1u));
    if (t39 == 0u)
    {
        eax = t39;
        goto L_100e23c9;
    }
    COW_AT(100e2268)
    if (rd32(arg2 + 0x10u) == 2u)
    {
        eax = rd32(arg2 + 0x10u) - 2u;
        goto L_100e2383;
    }
    eax = rd32(arg2 + 0x10u) - 2u;
    COW_AT(100e2274)
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_100e23c9;
    }
    eax = eax - 1u;
    COW_AT(100e227b)
    wr32(sp0 - 0x2a0u, 1u);
    wr32(sp0 - 0x2a4u, arg2 + 0x20u);
    wr32(sp0 - 0x2a8u, ebp);
    g->ebx = ebx;
    g->ecx = ecx;
    g->esp = sp0 - 0x29cu;
    cow_cdecl(g, COW_IMG(0x101061b0u), 3, ebp, arg2 + 0x20u, 1u);
    t40 = g->ecx;
    ecx = t40;
    COW_AT(100e2287)
    wr32(sp0 - 0x2acu, sp0 - 0x288u);
    t41 = rd32(arg2 + 0x18u);
    wr32(sp0 - 0x2b0u, t41);
    wr32(sp0 - 0x288u, 3u);
    wr32(sp0 - 0x284u, 1u);
    wr32(sp0 - 0x280u, arg2 + 0x20u);
    g->eax = t41;
    g->esp = sp0 - 0x2b0u;
    t42 = cow_thiscall(g, rd32(arg2 + 0x14u), ecx, 0);
    t43 = g->ecx;
    eax = t42;
    ecx = t43;
    COW_AT(100e22a7)
    ebp = ebp + rd8(ebp) + 1u;
L_100e268a: ;
    COW_AT(100e268a)
    if (ebp == 0u) goto L_100e26c3;
    COW_AT(100e268e)
    ecx = (ecx & 0xffffff00u) | rd8(sp0 - 0x271u);
    goto L_100e21f5;
L_100e21d8: ;
    COW_AT(100e21d8)
    if ((uint16_t)eax != 4u) goto L_100e22b8;
    COW_AT(100e21e2)
    if (rd8(arg2 + 5u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(arg2 + 5u);
        goto L_100e21eb;
    }
    eax = (eax & 0xffffff00u) | rd8(arg2 + 5u);
L_100e21e9: ;
    COW_AT(100e21e9)
    ebp = 0u;
    goto L_100e21eb;
L_100e22b8: ;
    COW_AT(100e22b8)
    if ((uint16_t)eax != 3u) goto L_100e21e9;
    COW_AT(100e22c2)
    if ((rd8(ebx + 0xbu) & 0x1fu) - 4u > 0x11u)
    {
        eax = (rd8(ebx + 0xbu) & 0x1fu) - 4u;
        goto L_100e21eb;
    }
    eax = (rd8(ebx + 0xbu) & 0x1fu) - 4u;
    COW_AT(100e22d4)
    t26 = rd32(COW_IMG(0x100e2814u) + rd8(COW_IMG(0x100e2820u) + eax) * 4u);
    ecx = rd8(COW_IMG(0x100e2820u) + eax);
    switch (t26 - RD)
    {
    case 0x100e21ebu: goto L_100e21eb;
    case 0x100e22e3u: goto L_100e22e3;
    case 0x100e2333u: goto L_100e2333;
    default: rt_fatal(g, COW_IMG(0x100e22dcu), "switch");
    }
    return 0;
L_100e22e3: ;
    COW_AT(100e22e3)
    wr16(sp0 - 0x19cu, 0u);
    if (ebp == 0u) goto L_100e21eb;
    edi = 0u;
L_100e22f5: ;
    COW_AT(100e22f5)
    if ((uint16_t)edi >= rd8(arg2 + 5u)) goto L_100e21eb;
    edx = (edx & 0xffff0000u) | rd8(arg2 + 5u);
    COW_AT(100e2303)
    wr32(sp0 - 0x2a0u, sp0 - 0x19cu);
    t31 = ebx + rd16(ebx + 8u);
    wr32(sp0 - 0x2a4u, t31);
    wr32(sp0 - 0x2a8u, ebp);
    g->esi = arg2;
    g->ecx = t31;
    g->edx = edx;
    g->esp = sp0 - 0x29cu;
    t32 = cow_call_regs(g, COW_IMG(0x10106cd0u), sp0 - 0x19cu, g->ecx, g->edx, 1, 3, ebp, t31, sp0 - 0x19cu);
    t33 = g->ecx;
    t34 = g->edx;
    eax = t32;
    ecx = t33;
    edx = t34;
    COW_AT(100e231a)
    wr16(sp0 - 0x19cu, 0u);
    if (eax != 0u)
    {
        ebp = eax;
        edi = edi + 1u;
        goto L_100e22f5;
    }
    ebp = eax;
    COW_AT(100e232e)
    goto L_100e21eb;
L_100e2333: ;
    COW_AT(100e2333)
    wr16(sp0 - 0x19cu, 0u);
    if (ebp == 0u) goto L_100e21eb;
    edi = 0u;
L_100e2345: ;
    COW_AT(100e2345)
    if ((uint16_t)edi >= rd8(arg2 + 5u)) goto L_100e21eb;
    edx = (edx & 0xffff0000u) | rd8(arg2 + 5u);
    COW_AT(100e2353)
    wr32(sp0 - 0x2a0u, sp0 - 0x19cu);
    t27 = ebx + rd16(ebx + 8u);
    wr32(sp0 - 0x2a4u, t27);
    wr32(sp0 - 0x2a8u, ebp);
    g->eax = sp0 - 0x19cu;
    g->ecx = t27;
    g->esp = sp0 - 0x29cu;
    t28 = cow_call_regs(g, COW_IMG(0x10106de0u), g->eax, g->ecx, edx, 1, 3, ebp, t27, sp0 - 0x19cu);
    t29 = g->ecx;
    t30 = g->edx;
    eax = t28;
    ecx = t29;
    edx = t30;
    COW_AT(100e236a)
    wr16(sp0 - 0x19cu, 0u);
    if (eax != 0u)
    {
        ebp = eax;
        edi = edi + 1u;
        goto L_100e2345;
    }
    ebp = eax;
    COW_AT(100e237e)
    goto L_100e21eb;
L_100e2383: ;
    COW_AT(100e2383)
    wr32(sp0 - 0x2a0u, 0u);
    wr32(sp0 - 0x2a4u, sp0 - 0x1e4u);
    wr32(sp0 - 0x2a8u, ebp);
    g->ebx = ebx;
    g->ecx = sp0 - 0x1e4u;
    g->esp = sp0 - 0x29cu;
    cow_cdecl(g, COW_IMG(0x101061b0u), 3, ebp, sp0 - 0x1e4u, 0u);
    t44 = g->ecx;
    ecx = t44;
    COW_AT(100e2393)
    wr32(sp0 - 0x2acu, sp0 - 0x1e4u);
    wr32(sp0 - 0x2b0u, 1u);
    wr32(sp0 - 0x2b4u, arg2 + 0x20u);
    wr32(sp0 - 0x288u, 2u);
    wr32(sp0 - 0x284u, 0u);
    wr32(sp0 - 0x280u, arg2 + 0x20u);
    g->edx = sp0 - 0x1e4u;
    g->esp = sp0 - 0x288u;
    cow_thiscall_cdecl(g, COW_IMG(0x10107370u), ecx, 11, arg2 + 0x20u, 1u, sp0 - 0x1e4u, rd32(sp0 - 0x2a8u), sp0 - 0x1e4u, 0u, rd32(sp0 - 0x29cu), rd32(sp0 - 0x298u), rd32(sp0 - 0x294u), rd32(sp0 - 0x290u), rd32(sp0 - 0x28cu));
    t45 = g->edx;
    edx = t45;
    COW_AT(100e23ba)
    wr32(sp0 - 0x2b8u, sp0 - 0x288u);
    t46 = rd32(arg2 + 0x18u);
    wr32(sp0 - 0x2bcu, t46);
    g->eax = sp0 - 0x288u;
    g->esp = sp0 - 0x2bcu;
    t47 = cow_thiscall(g, rd32(arg2 + 0x14u), t46, 0);
    t48 = g->ecx;
    eax = t47;
    ecx = t48;
    COW_AT(100e23c6)
L_100e23c9: ;
    COW_AT(100e23c9)
    ebp = ebp + rd8(ebp) + 1u;
    goto L_100e268a;
L_100e23d7: ;
    COW_AT(100e23d7)
    if ((uint16_t)eax != 4u) goto L_100e24b7;
    COW_AT(100e23e1)
    if ((int32_t)edi >= (int32_t)rd16(ebx + 8u))
    {
        eax = rd16(ebx + 8u);
    }
    else
    {
    COW_AT(100e23ef)
        t49 = rd16(arg2 + 6u);
        t50 = rd32(arg2 + 0x14u);
        wr16(arg2 + 6u, (uint16_t)(t49 + 1u));
        if (t50 == 0u)
        {
            eax = t50;
        }
        else
        {
    COW_AT(100e23fe)
            if (rd32(arg2 + 0x10u) == 2u)
            {
                eax = rd32(arg2 + 0x10u) - 2u;
    COW_AT(100e2454)
                wr32(sp0 - 0x288u, 2u);
                wr32(sp0 - 0x284u, 4u);
                wr32(sp0 - 0x280u, arg2 + 0x20u);
                wr32(sp0 - 0x2a0u, sp0 - 0x268u);
                t57 = ebx + rd16(ebx + 8u);
                wr32(sp0 - 0x2a4u, t57);
                wr32(sp0 - 0x2a8u, ebp);
                wr32(sp0 - 0x268u, 0u);
                wr8(sp0 - 0x264u, 0u);
                g->eax = eax;
                g->edx = t57;
                g->esp = sp0 - 0x298u;
                t58 = cow_cdecl(g, COW_IMG(0x10106eb0u), 4, ebp, t57, sp0 - 0x268u, rd32(sp0 - 0x29cu));
                t59 = g->edx;
                eax = t58;
                edx = t59;
    COW_AT(100e248c)
                wr32(sp0 - 0x2acu, sp0 - 0x264u);
                t60 = rd32(sp0 - 0x268u);
                wr32(sp0 - 0x2b0u, t60);
                wr32(sp0 - 0x2b4u, COW_IMG(0x10361d70u));
                wr32(sp0 - 0x2b8u, arg2 + 0x20u);
                g->ebx = ebx;
                g->ecx = t60;
                g->esp = sp0 - 0x2a4u;
                cow_cdecl(g, COW_IMG(0x10312031u), 5, arg2 + 0x20u, COW_IMG(0x10361d70u), t60, sp0 - 0x264u, rd32(sp0 - 0x2a8u));
                t61 = g->ecx;
                ecx = t61;
                ebp = eax;
    COW_AT(100e24a3)
                wr32(sp0 - 0x2bcu, sp0 - 0x288u);
                t62 = rd32(arg2 + 0x18u);
                wr32(sp0 - 0x2c0u, t62);
                g->eax = t62;
                g->esp = sp0 - 0x2c0u;
                t63 = cow_thiscall(g, rd32(arg2 + 0x14u), ecx, 0);
                t64 = g->ecx;
                eax = t63;
                ecx = t64;
    COW_AT(100e24af)
            }
            else
            {
                eax = rd32(arg2 + 0x10u) - 2u;
    COW_AT(100e2406)
                if (eax != 1u)
                {
                    eax = eax - 1u;
                }
                else
                {
                    eax = eax - 1u;
    COW_AT(100e240d)
                    wr8(arg2 + 0x24u, 0u);
                    wr32(sp0 - 0x2a0u, arg2 + 0x20u);
                    wr32(arg2 + 0x20u, 0u);
                    t51 = ebx + rd16(ebx + 8u);
                    wr32(sp0 - 0x2a4u, t51);
                    wr32(sp0 - 0x2a8u, ebp);
                    g->eax = eax;
                    g->ecx = t51;
                    g->esp = sp0 - 0x298u;
                    t52 = cow_cdecl(g, COW_IMG(0x10106eb0u), 4, ebp, t51, rd32(sp0 - 0x2a0u), rd32(sp0 - 0x29cu));
                    t53 = g->ecx;
                    eax = t52;
                    ecx = t53;
    COW_AT(100e242a)
                    wr32(sp0 - 0x288u, 3u);
                    wr32(sp0 - 0x2acu, sp0 - 0x288u);
                    t54 = rd32(arg2 + 0x18u);
                    wr32(sp0 - 0x2b0u, t54);
                    wr32(sp0 - 0x284u, 4u);
                    wr32(sp0 - 0x280u, arg2 + 0x20u);
                    g->eax = t54;
                    g->esp = sp0 - 0x2b0u;
                    t55 = cow_thiscall(g, rd32(arg2 + 0x14u), ecx, 0);
                    t56 = g->ecx;
                    ecx = t56;
                    ebp = eax;
                    eax = t55;
    COW_AT(100e244c)
                }
            }
        }
    }
    goto L_100e268a;
L_100e24b7: ;
    COW_AT(100e24b7)
    if ((uint16_t)eax != 3u) goto L_100e26c3;
    COW_AT(100e24c1)
    if ((int32_t)edi >= (int32_t)rd16(ebx + 8u))
    {
        ecx = rd16(ebx + 8u);
        goto L_100e268a;
    }
    ecx = rd16(ebx + 8u);
    COW_AT(100e24cf)
    t65 = rd16(arg2 + 6u);
    wr16(arg2 + 6u, (uint16_t)(t65 + 1u));
    if ((rd8(ebx + 0xbu) & 0x1fu) - 4u > 0x11u)
    {
        eax = (rd8(ebx + 0xbu) & 0x1fu) - 4u;
        goto L_100e268a;
    }
    eax = (rd8(ebx + 0xbu) & 0x1fu) - 4u;
    edx = rd8(ebx + 0xbu) & 0x1fu;
    COW_AT(100e24e5)
    t66 = rd32(COW_IMG(0x100e2834u) + rd8(COW_IMG(0x100e2840u) + eax) * 4u);
    switch (t66 - RD)
    {
    case 0x100e24f4u: ecx = rd8(COW_IMG(0x100e2840u) + eax); goto L_100e24f4;
    case 0x100e25c9u: goto L_100e25c9;
    case 0x100e268au: ecx = rd8(COW_IMG(0x100e2840u) + eax); goto L_100e268a;
    default: rt_fatal(g, COW_IMG(0x100e24edu), "switch");
    }
    return 0;
L_100e24f4: ;
    COW_AT(100e24f4)
    if (rd32(arg2 + 0x10u) == 2u)
    {
    COW_AT(100e255f)
        wr32(sp0 - 0x2a0u, arg2 + 0x20u);
        wr16(arg2 + 0x20u, 0u);
        t83 = ebx + rd16(ebx + 8u);
        wr32(sp0 - 0x2a4u, t83);
        wr32(sp0 - 0x2a8u, ebp);
        g->esi = arg2;
        g->ecx = ecx;
        g->esp = sp0 - 0x29cu;
        t84 = cow_call_regs(g, COW_IMG(0x10106cd0u), t83, g->ecx, g->edx, 1, 3, ebp, t83, rd32(sp0 - 0x2a0u));
        t85 = g->ecx;
        eax = t84;
        ecx = t85;
    COW_AT(100e2577)
        if (rd32(arg2 + 0x14u) == 0u)
        {
            ebp = eax;
            eax = rd32(arg2 + 0x14u);
        }
        else
        {
            ebp = eax;
    COW_AT(100e2587)
            t86 = rd32(arg2 + 0x2cu);
            wr32(sp0 - 0x2a0u, t86);
            t87 = rd32(arg2 + 0x28u);
            wr32(sp0 - 0x2a4u, t87);
            t88 = rd16(arg2 + 0x24u);
            wr32(sp0 - 0x2a8u, t88);
            wr32(sp0 - 0x2acu, COW_IMG(0x10361d60u));
            wr32(sp0 - 0x2b0u, arg2 + 0x20u);
            wr32(sp0 - 0x288u, 2u);
            wr32(sp0 - 0x284u, 0u);
            wr32(sp0 - 0x280u, arg2 + 0x20u);
            g->ebx = ebx;
            g->eax = t88;
            g->esp = sp0 - 0x29cu;
            t89 = cow_cdecl(g, COW_IMG(0x10312031u), 5, arg2 + 0x20u, COW_IMG(0x10361d60u), t88, t87, t86);
            eax = t89;
    COW_AT(100e25b5)
            wr32(sp0 - 0x2b4u, sp0 - 0x288u);
            t90 = rd32(arg2 + 0x18u);
            wr32(sp0 - 0x2b8u, t90);
            g->eax = eax;
            g->esp = sp0 - 0x2b8u;
            t91 = cow_thiscall(g, rd32(arg2 + 0x14u), sp0 - 0x288u, 0);
            t92 = g->ecx;
            eax = t91;
            ecx = t92;
    COW_AT(100e25c1)
        }
    }
    else
    {
        eax = rd32(arg2 + 0x10u) - 2u;
    COW_AT(100e24fc)
        if (eax != 1u)
        {
            eax = eax - 1u;
        }
        else
        {
    COW_AT(100e2503)
            t78 = rd16(arg2 + 0x20u);
            if ((uint16_t)t78 < 0x14u)
            {
                ecx = arg2 + 0x20u;
            }
            else
            {
    COW_AT(100e250d)
                if (rd32(arg2 + 0x14u) != 0u)
                {
                    eax = rd32(arg2 + 0x14u);
    COW_AT(100e2514)
                    wr32(sp0 - 0x280u, arg2 + 0x20u);
                    wr32(sp0 - 0x288u, 3u);
                    wr32(sp0 - 0x2a0u, sp0 - 0x288u);
                    t79 = rd32(arg2 + 0x18u);
                    wr32(sp0 - 0x2a4u, t79);
                    wr32(sp0 - 0x284u, 2u);
                    g->esp = sp0 - 0x2a4u;
                    cow_thiscall(g, eax, t79, 0);
    COW_AT(100e2533)
                }
    COW_AT(100e2536)
                edi = arg2 + 0x20u;
                eax = 0u;
                ecx = 0x3du;
                while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            }
    COW_AT(100e2542)
            wr32(sp0 - 0x2a0u, arg2 + 0x20u);
            t80 = ebx + rd16(ebx + 8u);
            wr32(sp0 - 0x2a4u, t80);
            wr32(sp0 - 0x2a8u, ebp);
            g->esi = arg2;
            g->ecx = ecx;
            g->esp = sp0 - 0x29cu;
            t81 = cow_call_regs(g, COW_IMG(0x10106cd0u), arg2 + 0x20u, g->ecx, g->edx, 1, 3, ebp, t80, arg2 + 0x20u);
            t82 = g->ecx;
            eax = t81;
            ecx = t82;
    COW_AT(100e2555)
            ebp = eax;
        }
    }
    goto L_100e268a;
L_100e25c9: ;
    COW_AT(100e25c9)
    edi = arg2 + 0x20u;
    eax = 0u;
    ecx = 0x67u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x2a0u, arg2 + 0x20u);
    t67 = rd32(sp0 - 0x26cu) + rd16(rd32(sp0 - 0x26cu) + 8u);
    wr32(sp0 - 0x2a4u, t67);
    wr32(sp0 - 0x2a8u, ebp);
    g->eax = rd32(sp0 - 0x26cu);
    t68 = rd32(sp0 - 0x26cu);
    g->esp = sp0 - 0x29cu;
    t69 = cow_call_regs(g, COW_IMG(0x10106de0u), g->eax, g->ecx, edx, 1, 3, ebp, t67, arg2 + 0x20u);
    eax = t69;
    COW_AT(100e25eb)
    if (rd32(arg2 + 0x14u) == 0u)
    {
        ebp = eax;
    }
    else
    {
        ebp = eax;
        eax = rd32(arg2 + 0x14u);
    COW_AT(100e25fb)
        if (rd32(arg2 + 0x10u) == 2u)
        {
    COW_AT(100e2627)
            t71 = rd16(arg2 + 0x20u);
            if ((uint16_t)t71 == 0u) goto L_100e267b;
            edi = 0u;
L_100e262e: ;
    COW_AT(100e262e)
            wr32(sp0 - 0x288u, 2u);
            wr32(sp0 - 0x284u, 0u);
            wr32(sp0 - 0x280u, arg2 + 0x20u);
            t72 = arg2 + (uint16_t)edi * 0x28u + 0x44u;
            wr32(sp0 - 0x2a0u, t72);
            t73 = arg2 + (uint16_t)edi * 0x28u + 0x34u;
            wr32(sp0 - 0x2a4u, t73);
            t74 = rd32(arg2 + (uint16_t)edi * 0x28u + 0x2cu);
            wr32(sp0 - 0x2a8u, t74);
            wr32(sp0 - 0x2acu, COW_IMG(0x10361d4cu));
            wr32(sp0 - 0x2b0u, arg2 + 0x20u);
            g->ebx = arg2 + 0x20u;
            g->eax = t74;
            g->esp = sp0 - 0x29cu;
            t75 = cow_cdecl(g, COW_IMG(0x10312031u), 5, arg2 + 0x20u, COW_IMG(0x10361d4cu), t74, t73, t72);
            eax = t75;
    COW_AT(100e2666)
            wr32(sp0 - 0x2b4u, sp0 - 0x288u);
            t76 = rd32(arg2 + 0x18u);
            wr32(sp0 - 0x2b8u, t76);
            g->esp = sp0 - 0x2b8u;
            cow_thiscall(g, rd32(arg2 + 0x14u), sp0 - 0x288u, 0);
    COW_AT(100e2672)
            if ((uint16_t)(edi + 1u) < rd16(arg2 + 0x20u))
            {
                edi = edi + 1u;
                goto L_100e262e;
            }
        }
        else
        {
            ecx = rd32(arg2 + 0x10u) - 2u;
    COW_AT(100e2603)
            if (ecx == 1u)
            {
    COW_AT(100e2606)
                wr32(sp0 - 0x288u, 3u);
                wr32(sp0 - 0x284u, 3u);
                wr32(sp0 - 0x2a0u, sp0 - 0x288u);
                t70 = rd32(arg2 + 0x18u);
                wr32(sp0 - 0x2a4u, t70);
                wr32(sp0 - 0x280u, arg2 + 0x20u);
                g->esp = sp0 - 0x2a4u;
                cow_thiscall(g, eax, t70, 0);
    COW_AT(100e2622)
            }
        }
    }
L_100e267b: ;
    COW_AT(100e267b)
    t77 = rd32(sp0 - 0x26cu);
    edi = arg2 + 0x20u;
    eax = 0u;
    ecx = 0x67u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ebx = t77;
    goto L_100e268a;
L_100e2697: ;
    COW_AT(100e2697)
    if (ebp == 0u) goto L_100e26c3;
    COW_AT(100e269b)
    if ((int32_t)(ebp - ebx) >= (int32_t)rd16(ebx + 8u))
    {
        eax = ebp - ebx;
        ecx = rd16(ebx + 8u);
        goto L_100e26c3;
    }
    eax = ebp - ebx;
    ecx = rd16(ebx + 8u);
    COW_AT(100e26a9)
    t93 = rd16(arg2 + 8u);
    if ((uint16_t)t93 == 3u) goto L_100e26b6;
    COW_AT(100e26b0)
    t94 = rd8(ebp);
    if ((uint8_t)t94 == 0u) goto L_100e26c3;
L_100e26b6: ;
    COW_AT(100e26b6)
    g->ebx = rd32(sp0 - 0x290u);
    g->esi = rd32(sp0 - 0x298u);
    g->edi = rd32(sp0 - 0x29cu);
    g->ebp = rd32(sp0 - 0x294u);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_100e26c3: ;
    COW_AT(100e26c3)
    if ((int8_t)rd8(ebx + 0xau) >= 0) goto L_100e26cf;
L_100e26ca: ;
    COW_AT(100e26ca)
    wr8(sp0 - 0x289u, 1u);
L_100e26cf: ;
    COW_AT(100e26cf)
    wr32(sp0 - 0x2a0u, rd32(arg3));
    g->eax = rd32(arg3);
    t95 = rd32(arg3);
    g->esp = sp0 - 0x294u;
    t96 = cow_call_regs(g, COW_IMG(0x100d8ae0u), g->eax, ecx, arg3, 1, 3, t95, rd32(sp0 - 0x29cu), rd32(sp0 - 0x298u));
    t97 = g->edx;
    eax = t96;
    edx = t97;
    COW_AT(100e26de)
    if (rd8(sp0 - 0x289u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x289u);
        goto L_100e27a9;
    }
    COW_AT(100e26ed)
    if (rd32(arg2 + 0x14u) != 0u)
    {
        ecx = rd32(arg2 + 0x14u);
    COW_AT(100e26fa)
        if (rd32(arg2 + 0x10u) == 2u)
        {
            eax = rd32(arg2 + 0x10u) - 2u;
    COW_AT(100e2742)
            wr32(sp0 - 0x288u, 2u);
            wr32(sp0 - 0x284u, 0u);
            wr32(sp0 - 0x280u, arg2 + 0x20u);
            g->eax = eax;
            g->esp = sp0 - 0x29cu;
            t102 = cow_stdcall(g, COW_IMG(0x100e1b50u), 0);
            eax = t102;
    COW_AT(100e2756)
            wr32(sp0 - 0x2a0u, (uint16_t)eax);
            t103 = rd16(ebx + 0xeu);
            wr32(sp0 - 0x2a4u, t103);
            t104 = rd16(arg2 + 6u);
            wr32(sp0 - 0x2a8u, t104);
            wr32(sp0 - 0x2acu, COW_IMG(0x10361d3cu));
            wr32(sp0 - 0x2b0u, arg2 + 0x20u);
            g->ebx = ebx;
            g->edx = t104;
            g->esp = sp0 - 0x29cu;
            cow_cdecl(g, COW_IMG(0x10312031u), 5, arg2 + 0x20u, COW_IMG(0x10361d3cu), t104, t103, (uint16_t)eax);
            t105 = g->edx;
            edx = t105;
    COW_AT(100e2775)
            wr32(sp0 - 0x2b4u, sp0 - 0x288u);
            t106 = rd32(arg2 + 0x18u);
            wr32(sp0 - 0x2b8u, t106);
            g->eax = sp0 - 0x288u;
            g->esp = sp0 - 0x2b8u;
            t107 = cow_thiscall(g, rd32(arg2 + 0x14u), t106, 0);
            t108 = g->ecx;
            eax = t107;
            ecx = t108;
    COW_AT(100e2781)
        }
        else
        {
            eax = rd32(arg2 + 0x10u) - 2u;
    COW_AT(100e2706)
            if (eax != 1u)
            {
                eax = eax - 1u;
            }
            else
            {
                eax = eax - 1u;
    COW_AT(100e2709)
                if ((rd8(ebx + 0xbu) & 0x1fu) == 4u) goto L_100e2719;
                ebx = (ebx & 0xffffff00u) | (rd8(ebx + 0xbu) & 0x1fu);
    COW_AT(100e2714)
                if ((uint8_t)ebx != 0x15u) goto L_100e2784;
L_100e2719: ;
    COW_AT(100e2719)
                t98 = rd16(arg2 + 0x20u);
                if ((uint16_t)t98 == 0u)
                {
                    eax = arg2 + 0x20u;
                }
                else
                {
    COW_AT(100e2722)
                    wr32(sp0 - 0x284u, 2u);
                    wr32(sp0 - 0x280u, arg2 + 0x20u);
                    wr32(sp0 - 0x2a0u, sp0 - 0x288u);
                    t99 = rd32(arg2 + 0x18u);
                    wr32(sp0 - 0x2a4u, t99);
                    wr32(sp0 - 0x288u, 3u);
                    g->eax = t99;
                    g->esp = sp0 - 0x2a4u;
                    t100 = cow_thiscall(g, ecx, ecx, 0);
                    t101 = g->ecx;
                    eax = t100;
                    ecx = t101;
    COW_AT(100e273d)
                }
            }
        }
L_100e2784: ;
    COW_AT(100e2784)
        wr32(sp0 - 0x2a0u, 0u);
        t109 = rd32(arg2 + 0x18u);
        wr32(sp0 - 0x2a4u, t109);
        g->edx = t109;
        g->esp = sp0 - 0x2a4u;
        cow_thiscall(g, rd32(arg2 + 0x14u), ecx, 0);
        t110 = g->edx;
        edx = t110;
    COW_AT(100e278c)
        wr32(arg2 + 0x14u, 0u);
    }
    COW_AT(100e2792)
    t111 = rd16(arg1);
    t112 = rd32(sp0 - 0x294u);
    t113 = rd32(sp0 - 0x298u);
    t114 = rd32(sp0 - 0x29cu);
    wr16(arg1, (uint16_t)(t111 + 1u));
    g->ebx = rd32(sp0 - 0x290u);
    g->esi = t113;
    g->edi = t114;
    g->ebp = t112;
    g->edx = edx;
    return (arg1 & 0xffffff00u) | 1u;
L_100e27a9: ;
    COW_AT(100e27a9)
    wr8(arg2 + 5u, 0u);
    g->ebx = rd32(sp0 - 0x290u);
    g->esi = rd32(sp0 - 0x298u);
    g->edi = rd32(sp0 - 0x29cu);
    g->ebp = rd32(sp0 - 0x294u);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_100e27ba: ;
    COW_AT(100e27ba)
    wr32(sp0 - 0x2a0u, sp0 - 0x270u);
    wr32(sp0 - 0x2a4u, rd32(arg3));
    g->eax = sp0 - 0x270u;
    t115 = rd32(arg3);
    g->esp = sp0 - 0x298u;
    t116 = cow_call_regs(g, COW_IMG(0x100d92a0u), g->eax, t115, edx, 1, 3, t115, sp0 - 0x270u, rd32(sp0 - 0x29cu));
    t117 = g->ecx;
    t118 = g->edx;
    eax = t116;
    ecx = t117;
    edx = t118;
    COW_AT(100e27c7)
    if (eax != 0u)
    {
        loc_290 = rd32(sp0 - 0x290u);
        loc_294 = rd32(sp0 - 0x294u);
        loc_298 = rd32(sp0 - 0x298u);
        loc_29c = rd32(sp0 - 0x29cu);
        goto L_100e2805;
    }
    COW_AT(100e27ce)
    if ((int32_t)rd32(sp0 - 0x270u) < 0)
    {
        eax = rd32(sp0 - 0x270u);
        loc_290 = rd32(sp0 - 0x290u);
        loc_294 = rd32(sp0 - 0x294u);
        loc_298 = rd32(sp0 - 0x298u);
        loc_29c = rd32(sp0 - 0x29cu);
        goto L_100e2805;
    }
    eax = rd32(sp0 - 0x270u);
    zf = rd32(sp0 - 0x270u) == 0u;
    COW_AT(100e27d6)
    if (zf)
    {
    COW_AT(100e27d8)
        t119 = rd16(arg2 + 0x1eu);
        if ((uint16_t)t119 != 0u)
        {
    COW_AT(100e27e5)
            wr32(sp0 - 0x2a0u, rd32(arg3));
            g->eax = eax;
            t120 = rd32(arg3);
            g->esp = sp0 - 0x294u;
            t121 = cow_call_regs(g, COW_IMG(0x100d9320u), g->eax, ecx, t120, 1, 3, t120, rd32(sp0 - 0x29cu), rd32(sp0 - 0x298u));
            t122 = g->edx;
            eax = t121;
            edx = t122;
    COW_AT(100e27ed)
            if (eax == 0u)
            {
    COW_AT(100e27f4)
                wr16(arg2 + 0x1eu, 0u);
            }
        }
    }
    COW_AT(100e27f8)
    g->ebx = rd32(sp0 - 0x290u);
    g->esi = rd32(sp0 - 0x298u);
    g->edi = rd32(sp0 - 0x29cu);
    g->ebp = rd32(sp0 - 0x294u);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_100e2805: ;
    COW_AT(100e2805)
    g->ebx = loc_290;
    g->esi = loc_298;
    g->edi = loc_29c;
    g->ebp = loc_294;
    g->edx = edx;
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100e2060(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100e207bu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_edi = g->edi;
        zf = g->zf;
        in_esi = rd32(sp0 - 0x298u);
        in_ebp = rd32(sp0 - 0x294u);
        in_ebx = rd32(sp0 - 0x290u);
        g->esp = sp0 - 0x29cu;
        g->ebp = 0u;
        g->esi = arg3;
        wr32(sp0 - 0x29cu, in_edi);
        (void)sp0;
        return 1;
    }
    case 0x100e2088u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x2a4u;
        g->ebp = 0u;
        g->esi = arg3;
        wr32(sp0 - 0x2a0u, sp0 - 0x270u);
        (void)sp0;
        return 1;
    }
    case 0x100e2093u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->ebp = 0u;
        g->esi = arg3;
        wr32(sp0 - 0x2a0u, sp0 - 0x270u);
        (void)sp0;
        return 1;
    }
    case 0x100e209bu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x2a0u;
        g->ebp = 0u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100e20acu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t loc_26c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = g->edi;
        zf = g->zf;
        loc_26c = rd32(sp0 - 0x26cu);
        g->esp = sp0 - 0x29cu;
        g->ebp = 0u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100e20b8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x2a4u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100e20cau:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->ebp = 0u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e20d5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->ebp = 0u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e20e7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->ebp = 0u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e20f2u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->ebp = 0u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e20fau:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->ebp = 0u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e2100u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->ebp = 0u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e2125u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x2a4u;
        g->ebp = 0u;
        g->esi = arg2;
        wr32(sp0 - 0x2a0u, sp0 - 0x288u);
        (void)sp0;
        return 1;
    }
    case 0x100e2128u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->ebp = 0u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e216eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x2a4u;
        g->esi = arg2;
        wr32(sp0 - 0x2a0u, sp0 - 0x288u);
        (void)sp0;
        return 1;
    }
    case 0x100e2171u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e2178u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e2184u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e218bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e219au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e21a0u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e21adu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e21b9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->eax = 0u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e21bfu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e21c7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e21d6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e21d8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e21e2u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e21e9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e21ebu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e21f5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e2207u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e2211u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e221bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e2230u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e2242u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e2259u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e2268u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e2274u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e227bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e2287u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        zf = g->zf;
        g->esp = sp0 - 0x2a8u;
        g->esi = arg2;
        g->edi = arg2 + 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100e22a7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x2b0u;
        g->esi = arg2;
        wr32(sp0 - 0x2acu, sp0 - 0x288u);
        (void)sp0;
        return 1;
    }
    case 0x100e22b8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e22c2u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e22d4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e22e3u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e22f5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e2303u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e231au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x2a8u;
        g->esi = arg2;
        wr32(sp0 - 0x2a0u, sp0 - 0x19cu);
        (void)sp0;
        return 1;
    }
    case 0x100e232eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        wr32(sp0 - 0x2a0u, sp0 - 0x19cu);
        (void)sp0;
        return 1;
    }
    case 0x100e2333u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e2345u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e2353u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e236au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x2a8u;
        g->esi = arg2;
        wr32(sp0 - 0x2a0u, sp0 - 0x19cu);
        (void)sp0;
        return 1;
    }
    case 0x100e237eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        wr32(sp0 - 0x2a0u, sp0 - 0x19cu);
        (void)sp0;
        return 1;
    }
    case 0x100e2383u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e2393u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x2a8u;
        g->esi = arg2;
        wr32(sp0 - 0x2a4u, sp0 - 0x1e4u);
        wr32(sp0 - 0x2a0u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100e23bau:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x2b4u;
        g->esi = arg2;
        wr32(sp0 - 0x2acu, sp0 - 0x1e4u);
        wr32(sp0 - 0x2a4u, sp0 - 0x1e4u);
        (void)sp0;
        return 1;
    }
    case 0x100e23c6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x2bcu;
        g->esi = arg2;
        wr32(sp0 - 0x2b8u, sp0 - 0x288u);
        wr32(sp0 - 0x2acu, sp0 - 0x1e4u);
        wr32(sp0 - 0x2a4u, sp0 - 0x1e4u);
        (void)sp0;
        return 1;
    }
    case 0x100e23c9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e23d7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e23e1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e23efu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e23feu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e2406u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e240du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e242au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        zf = g->zf;
        g->esp = sp0 - 0x2a8u;
        g->esi = arg2;
        g->edi = arg2 + 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100e244cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x2b0u;
        g->esi = arg2;
        wr32(sp0 - 0x2acu, sp0 - 0x288u);
        (void)sp0;
        return 1;
    }
    case 0x100e2454u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e248cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        zf = g->zf;
        g->esp = sp0 - 0x2a8u;
        g->esi = arg2;
        g->edi = arg2 + 0x20u;
        wr32(sp0 - 0x2a0u, sp0 - 0x268u);
        (void)sp0;
        return 1;
    }
    case 0x100e24a3u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x2b8u;
        g->esi = arg2;
        wr32(sp0 - 0x2acu, sp0 - 0x264u);
        wr32(sp0 - 0x2a0u, sp0 - 0x268u);
        (void)sp0;
        return 1;
    }
    case 0x100e24afu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x2c0u;
        g->esi = arg2;
        wr32(sp0 - 0x2bcu, sp0 - 0x288u);
        wr32(sp0 - 0x2acu, sp0 - 0x264u);
        wr32(sp0 - 0x2a0u, sp0 - 0x268u);
        (void)sp0;
        return 1;
    }
    case 0x100e24b7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e24c1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e24cfu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e24e5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e24f4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e24fcu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e2503u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e250du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->ecx = arg2 + 0x20u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e2514u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->ecx = arg2 + 0x20u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e2533u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x2a4u;
        g->esi = arg2;
        wr32(sp0 - 0x2a0u, sp0 - 0x288u);
        (void)sp0;
        return 1;
    }
    case 0x100e2536u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e2542u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e2555u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x2a8u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e255fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e2577u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        zf = g->zf;
        g->esp = sp0 - 0x2a8u;
        g->esi = arg2;
        g->edi = arg2 + 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100e2587u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        g->edi = arg2 + 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100e25b5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x2b0u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e25c1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x2b8u;
        g->esi = arg2;
        wr32(sp0 - 0x2b4u, sp0 - 0x288u);
        (void)sp0;
        return 1;
    }
    case 0x100e25c9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e25ebu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x2a8u;
        g->ebx = arg2 + 0x20u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e25fbu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->ebx = arg2 + 0x20u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e2603u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->ebx = arg2 + 0x20u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e2606u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->ebx = arg2 + 0x20u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e2622u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x2a4u;
        g->ebx = arg2 + 0x20u;
        g->esi = arg2;
        wr32(sp0 - 0x2a0u, sp0 - 0x288u);
        (void)sp0;
        return 1;
    }
    case 0x100e2627u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->ebx = arg2 + 0x20u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e262eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->ebx = arg2 + 0x20u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e2666u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x2b0u;
        g->ebx = arg2 + 0x20u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e2672u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x2b8u;
        g->ebx = arg2 + 0x20u;
        g->esi = arg2;
        wr32(sp0 - 0x2b4u, sp0 - 0x288u);
        (void)sp0;
        return 1;
    }
    case 0x100e267bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->ebx = arg2 + 0x20u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e268au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e268eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e2697u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e269bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e26a9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e26b0u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e26b6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        (void)sp0;
        return 1;
    }
    case 0x100e26c3u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e26cau:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e26cfu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e26deu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x2a0u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e26edu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e26fau:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->ebp = 0u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e2706u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->edx = 2u;
        g->ebp = 0u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e2709u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->edx = 2u;
        g->ebp = 0u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e2714u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->edx = 2u;
        g->ebp = 0u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e2719u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->edx = 2u;
        g->ebp = 0u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e2722u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t zf;
        ecx = g->ecx;
        ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->eax = arg2 + 0x20u;
        g->edx = 2u;
        g->ebp = 0u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e273du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x2a4u;
        g->ebp = 0u;
        g->esi = arg2;
        wr32(sp0 - 0x2a0u, sp0 - 0x288u);
        (void)sp0;
        return 1;
    }
    case 0x100e2742u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->edx = 2u;
        g->ebp = 0u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e2756u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->ebp = 0u;
        g->esi = arg2;
        g->edi = arg2 + 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100e2775u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x2b0u;
        g->ebp = 0u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e2781u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x2b8u;
        g->ebp = 0u;
        g->esi = arg2;
        wr32(sp0 - 0x2b4u, sp0 - 0x288u);
        (void)sp0;
        return 1;
    }
    case 0x100e2784u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->ebp = 0u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e278cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x2a4u;
        g->ebp = 0u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e2792u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        (void)sp0;
        return 1;
    }
    case 0x100e27a9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e27bau:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_26c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        loc_26c = rd32(sp0 - 0x26cu);
        g->esp = sp0 - 0x29cu;
        g->ebp = 0u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100e27c7u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x2a4u;
        g->ebp = 0u;
        g->esi = arg3;
        wr32(sp0 - 0x2a0u, sp0 - 0x270u);
        (void)sp0;
        return 1;
    }
    case 0x100e27ceu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->ebp = 0u;
        g->esi = arg3;
        wr32(sp0 - 0x2a0u, sp0 - 0x270u);
        (void)sp0;
        return 1;
    }
    case 0x100e27d6u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->ebp = 0u;
        g->esi = arg3;
        wr32(sp0 - 0x2a0u, sp0 - 0x270u);
        (void)sp0;
        return 1;
    }
    case 0x100e27d8u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->ebp = 0u;
        g->esi = arg3;
        wr32(sp0 - 0x2a0u, sp0 - 0x270u);
        (void)sp0;
        return 1;
    }
    case 0x100e27e5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->ebp = 0u;
        g->esi = arg3;
        g->edi = arg2;
        wr32(sp0 - 0x2a0u, sp0 - 0x270u);
        (void)sp0;
        return 1;
    }
    case 0x100e27edu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        zf = g->zf;
        g->esp = sp0 - 0x2a0u;
        g->ebp = 0u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e27f4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        g->ebp = 0u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100e27f8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x29cu;
        (void)sp0;
        return 1;
    }
    case 0x100e2805u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_290;
        uint32_t loc_294;
        uint32_t loc_298;
        uint32_t loc_29c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        loc_29c = rd32(sp0 - 0x29cu);
        loc_298 = rd32(sp0 - 0x298u);
        loc_294 = rd32(sp0 - 0x294u);
        loc_290 = rd32(sp0 - 0x290u);
        g->esp = sp0 - 0x29cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100e2060(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100e2060(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
