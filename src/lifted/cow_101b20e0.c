/* f_0x101b20e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_101b20e0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_90c;
    uint32_t loc_910;
    uint32_t loc_914;
    uint32_t loc_928;
    uint32_t loc_92c;
    uint32_t loc_930;
    uint32_t loc_934;
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
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 2376u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101b20f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b20f8;
    case 0x101b2100u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2100;
    case 0x101b2112u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101b2112;
    case 0x101b2117u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2117;
    case 0x101b211fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b211f;
    case 0x101b212du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b212d;
    case 0x101b2144u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2144;
    case 0x101b2158u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2158;
    case 0x101b216eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_914 = rd32(sp0 - 0x914u); loc_910 = rd32(sp0 - 0x910u); goto E_101b216e;
    case 0x101b2180u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2180;
    case 0x101b2191u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2191;
    case 0x101b2195u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_914 = rd32(sp0 - 0x914u); loc_910 = rd32(sp0 - 0x910u); goto E_101b2195;
    case 0x101b21a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b21a4;
    case 0x101b21b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b21b8;
    case 0x101b21cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b21cf;
    case 0x101b21ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b21ec;
    case 0x101b220eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b220e;
    case 0x101b2226u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2226;
    case 0x101b2235u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2235;
    case 0x101b2249u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2249;
    case 0x101b2266u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2266;
    case 0x101b2283u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2283;
    case 0x101b2291u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_90c = rd32(sp0 - 0x90cu); goto E_101b2291;
    case 0x101b2296u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2296;
    case 0x101b229eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b229e;
    case 0x101b22acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b22ac;
    case 0x101b22c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b22c2;
    case 0x101b22dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b22df;
    case 0x101b22e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b22e6;
    case 0x101b22f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b22f3;
    case 0x101b22fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b22fb;
    case 0x101b2309u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2309;
    case 0x101b230du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b230d;
    case 0x101b235fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b235f;
    case 0x101b2367u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2367;
    case 0x101b236fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b236f;
    case 0x101b2371u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2371;
    case 0x101b237bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b237b;
    case 0x101b2384u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2384;
    case 0x101b238bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b238b;
    case 0x101b239au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b239a;
    case 0x101b23a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b23a3;
    case 0x101b23a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_90c = rd32(sp0 - 0x90cu); goto E_101b23a7;
    case 0x101b23beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_90c = rd32(sp0 - 0x90cu); goto E_101b23be;
    case 0x101b23c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_90c = rd32(sp0 - 0x90cu); goto E_101b23c5;
    case 0x101b23ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_90c = rd32(sp0 - 0x90cu); goto E_101b23cc;
    case 0x101b23d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_90c = rd32(sp0 - 0x90cu); goto E_101b23d0;
    case 0x101b23d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_90c = rd32(sp0 - 0x90cu); goto E_101b23d7;
    case 0x101b23deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_90c = rd32(sp0 - 0x90cu); goto E_101b23de;
    case 0x101b23e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_90c = rd32(sp0 - 0x90cu); goto E_101b23e0;
    case 0x101b23e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_90c = rd32(sp0 - 0x90cu); goto E_101b23e9;
    case 0x101b23eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_90c = rd32(sp0 - 0x90cu); goto E_101b23ee;
    case 0x101b23f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_90c = rd32(sp0 - 0x90cu); goto E_101b23f3;
    case 0x101b23ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_90c = rd32(sp0 - 0x90cu); goto E_101b23ff;
    case 0x101b240eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_934 = rd32(sp0 - 0x934u); loc_930 = rd32(sp0 - 0x930u); loc_92c = rd32(sp0 - 0x92cu); loc_928 = rd32(sp0 - 0x928u); loc_90c = rd32(sp0 - 0x90cu); goto E_101b240e;
    case 0x101b2416u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2416;
    case 0x101b2426u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2426;
    case 0x101b2436u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2436;
    case 0x101b2442u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2442;
    case 0x101b2456u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2456;
    case 0x101b245du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b245d;
    case 0x101b2465u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2465;
    case 0x101b246cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b246c;
    case 0x101b2474u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2474;
    case 0x101b248bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101b248b;
    case 0x101b2498u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101b2498;
    case 0x101b249du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b249d;
    case 0x101b24a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b24a5;
    case 0x101b24b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b24b3;
    case 0x101b24c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b24c4;
    case 0x101b24cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b24cd;
    case 0x101b24ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b24dd;
    case 0x101b24e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b24e4;
    case 0x101b24edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b24ed;
    case 0x101b24f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b24f1;
    case 0x101b24f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b24f8;
    case 0x101b2500u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2500;
    case 0x101b2508u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2508;
    case 0x101b2516u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2516;
    case 0x101b2529u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2529;
    case 0x101b2538u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2538;
    case 0x101b253eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b253e;
    case 0x101b2547u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2547;
    case 0x101b254eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b254e;
    case 0x101b2562u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2562;
    case 0x101b2578u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101b2578;
    case 0x101b2585u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2585;
    case 0x101b2597u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2597;
    case 0x101b25a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b25a8;
    case 0x101b25b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b25b0;
    case 0x101b25b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b25b6;
    case 0x101b25c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b25c6;
    case 0x101b25cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b25cd;
    case 0x101b25d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b25d2;
    case 0x101b25d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b25d4;
    case 0x101b25d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b25d9;
    case 0x101b25e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b25e1;
    case 0x101b25f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b25f4;
    case 0x101b25fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b25fb;
    case 0x101b2602u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2602;
    case 0x101b2606u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2606;
    case 0x101b260au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b260a;
    case 0x101b260eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b260e;
    case 0x101b2612u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2612;
    case 0x101b261fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b261f;
    case 0x101b2623u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2623;
    case 0x101b2628u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2628;
    case 0x101b262cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b262c;
    case 0x101b2637u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2637;
    case 0x101b2645u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2645;
    case 0x101b264cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b264c;
    case 0x101b2650u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2650;
    case 0x101b2657u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2657;
    case 0x101b265eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b265e;
    case 0x101b2662u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2662;
    case 0x101b2669u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2669;
    case 0x101b2670u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2670;
    case 0x101b2672u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2672;
    case 0x101b267au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b267a;
    case 0x101b2681u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2681;
    case 0x101b2684u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_928 = rd32(sp0 - 0x928u); goto E_101b2684;
    case 0x101b268bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101b268b;
    case 0x101b269bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101b269b;
    case 0x101b26a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b26a8;
    case 0x101b26b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b26b1;
    case 0x101b26c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b26c0;
    case 0x101b26c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b26c8;
    case 0x101b26ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b26cc;
    case 0x101b26dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101b26db;
    case 0x101b26eau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101b26ea;
    default: break;
    }
#endif

    COW_AT(101b20e0)
    wr32(sp0 - 0x918u, in_ebx);
    wr32(sp0 - 0x91cu, in_ebp);
    wr32(sp0 - 0x920u, in_esi);
    wr32(sp0 - 0x924u, in_edi);
    wr8(self + 0xef22u, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 0x924u;
    COW_RET(0x101b20f8u);
    t1 = cow_call_regs(g, COW_IMG(0x101b6e90u), in_eax, self, g->edx, 1, 0);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    COW_AT(101b20f8)
    if ((uint8_t)eax != 0u) goto L_101b26ea;
    COW_AT(101b2100)
    if ((rd32(sp0 + 8u) >> 8u & 8u) == 0u)
    {
        eax = rd32(sp0 + 8u);
        goto L_101b2498;
    }
    eax = rd32(sp0 + 8u);
    COW_AT(101b2112)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x924u;
    COW_RET(0x101b2117u);
    t3 = cow_thiscall(g, COW_IMG(0x101b5c90u), self, 0);
    t4 = g->edx;
    eax = t3;
    edx = t4;
    COW_AT(101b2117)
    if ((uint8_t)eax == 0u) goto L_101b2456;
    COW_AT(101b211f)
    t5 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x928u, t5);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    g->ecx = t5;
    t6 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x924u;
    COW_RET(0x101b212du);
    t7 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t5);
    t8 = g->ecx;
    eax = t7;
    ecx = t8;
    COW_AT(101b212d)
    wr32(sp0 - 0x928u, 0x1c2u);
    wr32(sp0 - 0x92cu, sp0 - 0x8d4u);
    wr32(sp0 - 0x930u, 0x800u);
    wr32(sp0 - 0x934u, eax);
    g->eax = eax;
    g->edx = sp0 - 0x8d4u;
    g->esp = sp0 - 0x924u;
    COW_RET(0x101b2144u);
    t9 = cow_stdcall(g, COW_IMG(0x102bc888u), 4, eax, 0x800u, sp0 - 0x8d4u, 0x1c2u);
    t10 = g->edx;
    edx = t10;
    edi = eax;
    eax = t9;
    COW_AT(101b2144)
    wr8(eax + sp0 - 0x8d4u, 0u);
    wr32(sp0 - 0x928u, edi);
    t11 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x92cu, t11);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    t12 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x924u;
    COW_RET(0x101b2158u);
    t13 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t11, edi);
    eax = t13;
    COW_AT(101b2158)
    wr32(sp0 - 0x910u, sp0 - 0x8d4u);
    wr32(sp0 - 0x914u, 0u);
    if (rd8(sp0 - 0x8d4u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x8d4u);
        loc_914 = 0u;
        goto L_101b2195;
    }
    edx = sp0 - 0x8d4u;
    edi = 0u;
    loc_910 = sp0 - 0x8d4u;
L_101b216e: ;
    COW_AT(101b216e)
    wr32(sp0 - 0x928u, sp0 - 0x910u);
    t14 = edi + sp0 - 0x1c4u;
    wr32(sp0 - 0x92cu, t14);
    g->eax = sp0 - 0x910u;
    g->esp = sp0 - 0x924u;
    COW_RET(0x101b2180u);
    t15 = cow_thiscall_cdecl(g, COW_IMG(0x101243b0u), t14, 2, t14, sp0 - 0x910u);
    eax = t15;
    COW_AT(101b2180)
    t16 = rd8(rd32(sp0 - 0x910u));
    if ((uint8_t)t16 != 0u)
    {
        edx = (uint32_t)(int16_t)eax;
        edi = edi + (uint32_t)(int16_t)eax;
        loc_910 = rd32(sp0 - 0x910u);
        goto L_101b216e;
    }
    edi = edi + (uint32_t)(int16_t)eax;
    eax = rd32(sp0 - 0x910u);
    COW_AT(101b2191)
    wr32(sp0 - 0x914u, edi);
    loc_914 = edi;
L_101b2195: ;
    COW_AT(101b2195)
    t17 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x928u, t17);
    g->eax = eax;
    g->ecx = rd32(COW_IMG(0x103d3c64u));
    g->edx = t17;
    t18 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x924u;
    COW_RET(0x101b21a4u);
    t19 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t17);
    t20 = g->ecx;
    t21 = g->edx;
    eax = t19;
    ecx = t20;
    edx = t21;
    COW_AT(101b21a4)
    wr32(sp0 - 0x928u, 0x1c2u);
    wr32(sp0 - 0x92cu, sp0 - 0x8d4u);
    wr32(sp0 - 0x930u, 8u);
    wr32(sp0 - 0x934u, eax);
    g->eax = sp0 - 0x8d4u;
    g->edx = edx;
    g->esp = sp0 - 0x924u;
    COW_RET(0x101b21b8u);
    t22 = cow_stdcall(g, COW_IMG(0x102bc888u), 4, eax, 8u, sp0 - 0x8d4u, 0x1c2u);
    t23 = g->edx;
    edx = t23;
    edi = eax;
    eax = t22;
    COW_AT(101b21b8)
    wr32(sp0 - 0x928u, 0x1c2u);
    wr32(sp0 - 0x92cu, sp0 - 0x388u);
    wr32(sp0 - 0x930u, 0x10u);
    wr32(sp0 - 0x934u, edi);
    g->eax = eax;
    g->ecx = sp0 - 0x388u;
    g->esp = sp0 - 0x924u;
    COW_RET(0x101b21cfu);
    t24 = cow_stdcall(g, COW_IMG(0x102bc888u), 4, edi, 0x10u, sp0 - 0x388u, 0x1c2u);
    t25 = g->ecx;
    ecx = t25;
    ebp = eax;
    eax = t24;
    COW_AT(101b21cf)
    wr32(sp0 - 0x928u, 0x1c2u);
    wr32(sp0 - 0x92cu, sp0 - 0x710u);
    wr32(sp0 - 0x930u, 1u);
    wr32(sp0 - 0x934u, edi);
    wr8(eax + sp0 - 0x388u, 0u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = sp0 - 0x710u;
    g->esp = sp0 - 0x924u;
    COW_RET(0x101b21ecu);
    t26 = cow_stdcall(g, COW_IMG(0x102bc888u), 4, rd32(sp0 - 0x934u), rd32(sp0 - 0x930u), rd32(sp0 - 0x92cu), rd32(sp0 - 0x928u));
    t27 = g->ecx;
    t28 = g->edx;
    eax = t26;
    ecx = t27;
    edx = t28;
    COW_AT(101b21ec)
    wr32(sp0 - 0x928u, 0x1c2u);
    wr32(sp0 - 0x92cu, sp0 - 0x54cu);
    wr32(sp0 - 0x930u, 0x200u);
    wr32(sp0 - 0x934u, edi);
    wr8(eax + sp0 - 0x710u, 0u);
    g->eax = sp0 - 0x54cu;
    g->esp = sp0 - 0x924u;
    COW_RET(0x101b220eu);
    t29 = cow_stdcall(g, COW_IMG(0x102bc888u), 4, rd32(sp0 - 0x934u), rd32(sp0 - 0x930u), rd32(sp0 - 0x92cu), rd32(sp0 - 0x928u));
    ebx = eax;
    eax = t29;
    COW_AT(101b220e)
    wr32(sp0 - 0x928u, sp0 - 0x904u);
    wr32(sp0 - 0x92cu, sp0 - 0x908u);
    wr32(sp0 - 0x930u, edi);
    wr8(eax + sp0 - 0x54cu, 0u);
    g->edx = sp0 - 0x908u;
    g->esp = sp0 - 0x924u;
    COW_RET(0x101b2226u);
    cow_stdcall(g, COW_IMG(0x102bc882u), 3, rd32(sp0 - 0x930u), rd32(sp0 - 0x92cu), rd32(sp0 - 0x928u));
    t30 = g->edx;
    edx = t30;
    COW_AT(101b2226)
    wr32(sp0 - 0x928u, edi);
    t31 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x92cu, t31);
    g->esp = sp0 - 0x924u;
    COW_RET(0x101b2235u);
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t31, edi);
    COW_AT(101b2235)
    t32 = rd32(sp0 - 0x914u);
    wr32(sp0 - 0x928u, t32);
    wr32(sp0 - 0x92cu, sp0 - 0x1c4u);
    g->ebx = ebx;
    g->eax = sp0 - 0x1c4u;
    g->edx = t32;
    g->esp = sp0 - 0x924u;
    COW_RET(0x101b2249u);
    t33 = cow_thiscall(g, COW_IMG(0x101b6c00u), self, 2, sp0 - 0x1c4u, t32);
    t34 = g->edx;
    eax = t33;
    edx = t34;
    COW_AT(101b2249)
    wr32(sp0 - 0x928u, COW_IMG(0x10377cbcu));
    wr8(self + 0xf120u, 0u);
    wr8(self + 0xf123u, 0u);
    g->esp = sp0 - 0x924u;
    COW_RET(0x101b2266u);
    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, rd32(sp0 - 0x928u));
    COW_AT(101b2266)
    wr32(self + 0xf128u, 0u);
    wr32(self + 0xf2f0u, 0u);
    t35 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x928u, t35);
    g->eax = 0u;
    g->ecx = rd32(COW_IMG(0x103d3c64u));
    g->edx = t35;
    t36 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x924u;
    COW_RET(0x101b2283u);
    t37 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t35);
    t38 = g->ecx;
    t39 = g->edx;
    eax = t37;
    ecx = t38;
    edx = t39;
    COW_AT(101b2283)
    wr32(sp0 - 0x90cu, eax);
    if (ebp == 0u)
    {
        edi = eax;
        goto L_101b23a7;
    }
    loc_90c = eax;
    COW_AT(101b2291)
    g->edx = edx;
    g->esp = sp0 - 0x924u;
    COW_RET(0x101b2296u);
    t40 = cow_call_regs(g, COW_IMG(0x100164b0u), eax, g->ecx, g->edx, 1, 0);
    t41 = g->edx;
    eax = t40;
    edx = t41;
    COW_AT(101b2296)
    if ((uint8_t)eax != 1u) goto L_101b23a3;
    COW_AT(101b229e)
    t42 = rd32(rd32(COW_IMG(0x10456a28u)));
    if (t42 == 0x40u) goto L_101b23a3;
    COW_AT(101b22ac)
    t43 = rd32(sp0 - 0x908u);
    wr8(sp0 - 0x900u, ~(uint8_t)(t43 >> 4u) & 1u);
    if (~(uint8_t)(t43 >> 4u) & 1u)
    {
        ecx = (t43 >> 4u & 0xffffff00u) | (~(uint8_t)(t43 >> 4u) & 1u);
    }
    else
    {
        ecx = (t43 >> 4u & 0xffffff00u) | (~(uint8_t)(t43 >> 4u) & 1u);
    COW_AT(101b22c2)
        if (ebp != 2u)
        {
            eax = (uint32_t)(uint8_t)rd32(sp0 - 0x8d3u) << 8u | (uint8_t)rd32(sp0 - 0x8d4u);
    COW_AT(101b2309)
            eax = (eax & 0xffffff00u) | rd8(sp0 - 0x8d4u);
        }
        else
        {
            eax = (uint32_t)(uint8_t)rd32(sp0 - 0x8d3u) << 8u | (uint8_t)rd32(sp0 - 0x8d4u);
            edx = (uint8_t)rd32(sp0 - 0x8d4u);
    COW_AT(101b22df)
            if (eax != 0x8f81u)
            {
    COW_AT(101b22f3)
                wr32(sp0 - 0x928u, 0u);
                wr32(sp0 - 0x92cu, eax);
                g->eax = eax;
                g->esp = sp0 - 0x924u;
                COW_RET(0x101b22fbu);
                t44 = cow_cdecl(g, COW_IMG(0x101b4450u), 2, eax, 0u);
                eax = t44;
    COW_AT(101b22fb)
                wr8(sp0 - 0x8d4u, (uint8_t)eax);
                wr8(sp0 - 0x8d3u, 0u);
            }
            else
            {
    COW_AT(101b22e6)
                wr8(sp0 - 0x8d3u, 0u);
                wr8(sp0 - 0x8d4u, 0x5cu);
                eax = (eax & 0xffffff00u) | 0x5cu;
            }
        }
    COW_AT(101b230d)
        wr32(sp0 - 0x8fcu, COW_IMG(0x1037c478u));
        wr32(sp0 - 0x8f8u, COW_IMG(0x1037c474u));
        wr32(sp0 - 0x8f4u, COW_IMG(0x1037c470u));
        wr32(sp0 - 0x8f0u, COW_IMG(0x1037c46cu));
        wr32(sp0 - 0x8ecu, COW_IMG(0x1037c468u));
        wr32(sp0 - 0x8e8u, COW_IMG(0x1037c464u));
        wr32(sp0 - 0x8e4u, COW_IMG(0x1037c460u));
        wr32(sp0 - 0x8e0u, COW_IMG(0x103514ecu));
        wr32(sp0 - 0x8dcu, COW_IMG(0x1037c45cu));
        wr32(sp0 - 0x8d8u, COW_IMG(0x10362468u));
        ecx = 0u;
L_101b235f: ;
    COW_AT(101b235f)
        t45 = rd8(rd32(ecx * 4u + sp0 - 0x8fcu));
        if ((uint8_t)t45 == (uint8_t)eax)
        {
            edx = rd32(ecx * 4u + sp0 - 0x8fcu);
            goto L_101b2371;
        }
        edx = rd32(ecx * 4u + sp0 - 0x8fcu);
    COW_AT(101b2367)
        if (ecx + 2u < 0xau)
        {
            ecx = ecx + 2u;
            goto L_101b235f;
        }
    COW_AT(101b236f)
L_101b237b: ;
    COW_AT(101b237b)
        wr32(sp0 - 0x928u, (uint32_t)(int8_t)eax);
        g->eax = eax;
        g->esp = sp0 - 0x924u;
        COW_RET(0x101b2384u);
        t48 = cow_call_regs(g, COW_IMG(0x10313bb4u), g->eax, (uint32_t)(int8_t)eax, edx, 1, 1, (uint32_t)(int8_t)eax);
        t49 = g->ecx;
        eax = t48;
        ecx = t49;
    COW_AT(101b2384)
        wr8(sp0 - 0x8d4u, (uint8_t)eax);
    }
    COW_AT(101b238b)
    t50 = rd32(sp0 - 0x900u);
    wr32(sp0 - 0x928u, t50);
    wr32(sp0 - 0x92cu, sp0 - 0x8d4u);
    g->ecx = ecx;
    g->esp = sp0 - 0x924u;
    COW_RET(0x101b239au);
    cow_cdecl(g, COW_IMG(0x10017010u), 2, sp0 - 0x8d4u, t50);
    t51 = g->ecx;
    ecx = t51;
    COW_AT(101b239a)
    edi = rd32(sp0 - 0x90cu);
L_101b2416: ;
    COW_AT(101b2416)
    t53 = rd32(sp0 - 0x904u);
    wr32(sp0 - 0x928u, t53);
    t54 = rd32(sp0 - 0x908u);
    wr32(sp0 - 0x92cu, t54);
    wr32(sp0 - 0x930u, edi);
    g->eax = t54;
    g->esp = sp0 - 0x924u;
    COW_RET(0x101b2426u);
    t55 = cow_stdcall(g, COW_IMG(0x102bc894u), 3, edi, t54, t53);
    eax = t55;
    COW_AT(101b2426)
    wr32(sp0 - 0x928u, edi);
    t56 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x92cu, t56);
    g->esp = sp0 - 0x924u;
    COW_RET(0x101b2436u);
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t56, edi);
    COW_AT(101b2436)
    if ((int32_t)rd32(sp0 - 0x914u) <= 0) goto L_101b26ea;
    COW_AT(101b2442)
    wr8(self + 0xf120u, 1u);
    g->ebx = rd32(sp0 - 0x918u);
    g->esi = rd32(sp0 - 0x920u);
    g->edi = rd32(sp0 - 0x924u);
    g->ebp = rd32(sp0 - 0x91cu);
    return;
L_101b2371: ;
    COW_AT(101b2371)
    t46 = rd32(ecx * 4u + sp0 - 0x8f8u);
    t47 = rd8(rd32(ecx * 4u + sp0 - 0x8f8u));
    wr8(sp0 - 0x8d4u, (uint8_t)t47);
    eax = (t46 & 0xffffff00u) | t47;
    goto L_101b237b;
L_101b23a3: ;
    COW_AT(101b23a3)
    edi = rd32(sp0 - 0x90cu);
L_101b23a7: ;
    COW_AT(101b23a7)
    if (ebp != 2u)
    {
        eax = (uint32_t)rd8(sp0 - 0x8d4u) << 8u | (uint8_t)rd32(sp0 - 0x8d3u);
        ecx = (uint8_t)rd32(sp0 - 0x8d3u);
    }
    else
    {
        eax = (uint32_t)rd8(sp0 - 0x8d4u) << 8u | (uint8_t)rd32(sp0 - 0x8d3u);
        ecx = (uint8_t)rd32(sp0 - 0x8d3u);
    COW_AT(101b23be)
        if (eax < 0x8260u) goto L_101b23d0;
    COW_AT(101b23c5)
        if (eax >= 0x8280u) goto L_101b23d7;
    COW_AT(101b23cc)
        eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax - 0x1fu);
L_101b23e0: ;
    COW_AT(101b23e0)
        wr8(sp0 - 0x8d4u, (uint8_t)eax);
        ebp = 1u;
L_101b23e9: ;
    COW_AT(101b23e9)
        wr8(ebp + sp0 - 0x8d4u, 0u);
    }
    COW_AT(101b23ee)
    if (ebp != 1u)
    {
    COW_AT(101b23ff)
        wr32(sp0 - 0x928u, ebx);
        wr32(sp0 - 0x92cu, sp0 - 0x710u);
        wr32(sp0 - 0x930u, ebp);
        wr32(sp0 - 0x934u, sp0 - 0x8d4u);
        eax = sp0 - 0x710u;
        ecx = sp0 - 0x8d4u;
        loc_928 = ebx;
        loc_92c = sp0 - 0x710u;
        loc_930 = ebp;
        loc_934 = sp0 - 0x8d4u;
    }
    else
    {
    COW_AT(101b23f3)
        wr32(sp0 - 0x928u, ebp);
        wr32(sp0 - 0x92cu, sp0 - 0x8d4u);
        wr32(sp0 - 0x930u, 0u);
        wr32(sp0 - 0x934u, 0u);
        edx = sp0 - 0x8d4u;
        loc_928 = ebp;
        loc_92c = sp0 - 0x8d4u;
        loc_930 = 0u;
        loc_934 = 0u;
    }
    COW_AT(101b240e)
    wr32(sp0 - 0x938u, 9u);
    wr32(sp0 - 0x93cu, edi);
    g->ecx = ecx;
    g->esp = sp0 - 0x924u;
    COW_RET(0x101b2416u);
    cow_stdcall(g, COW_IMG(0x102bc88eu), 6, edi, 9u, loc_934, loc_930, loc_92c, loc_928);
    t52 = g->ecx;
    ecx = t52;
    goto L_101b2416;
L_101b23d0: ;
    COW_AT(101b23d0)
    if (eax < 0x8280u) goto L_101b23e9;
L_101b23d7: ;
    COW_AT(101b23d7)
    if (eax >= 0x82a0u) goto L_101b23e9;
    COW_AT(101b23de)
    eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax - 0x20u);
    goto L_101b23e0;
L_101b2456: ;
    COW_AT(101b2456)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x924u;
    COW_RET(0x101b245du);
    t57 = cow_thiscall(g, COW_IMG(0x101b5cc0u), self, 0);
    t58 = g->edx;
    eax = t57;
    edx = t58;
    COW_AT(101b245d)
    if ((uint8_t)eax == 0u) goto L_101b26ea;
    COW_AT(101b2465)
    g->eax = rd32(self);
    t59 = rd32(self);
    g->esp = sp0 - 0x924u;
    COW_RET(0x101b246cu);
    t60 = cow_thiscall(g, rd32(t59 + 0x40u), self, 0);
    eax = t60;
    COW_AT(101b246c)
    if ((uint8_t)eax == 0u) goto L_101b26ea;
    COW_AT(101b2474)
    wr32(sp0 - 0x928u, 0xau);
    wr32(sp0 - 0x92cu, 0u);
    wr32(sp0 - 0x930u, 0u);
    wr32(sp0 - 0x934u, 0u);
    wr32(sp0 - 0x938u, 0x78u);
    wr32(sp0 - 0x93cu, 5u);
    wr32(sp0 - 0x940u, 0u);
    wr32(sp0 - 0x944u, 4u);
    g->esp = sp0 - 0x924u;
    COW_RET(0x101b248bu);
    cow_thiscall(g, rd32(rd32(self) + 0x28u), self, 8, 4u, 0u, 5u, 0x78u, 0u, 0u, 0u, 0xau);
    COW_AT(101b248b)
    g->ebx = rd32(sp0 - 0x918u);
    g->esi = rd32(sp0 - 0x920u);
    g->edi = rd32(sp0 - 0x924u);
    g->ebp = rd32(sp0 - 0x91cu);
    return;
L_101b2498: ;
    COW_AT(101b2498)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x924u;
    COW_RET(0x101b249du);
    t61 = cow_thiscall(g, COW_IMG(0x101b5c90u), self, 0);
    t62 = g->edx;
    eax = t61;
    edx = t62;
    COW_AT(101b249d)
    if ((uint8_t)eax == 0u) goto L_101b26a8;
    COW_AT(101b24a5)
    t63 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x928u, t63);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    g->ecx = t63;
    g->edx = edx;
    t64 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x924u;
    COW_RET(0x101b24b3u);
    t65 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t63);
    t66 = g->ecx;
    t67 = g->edx;
    eax = t65;
    ecx = t66;
    edx = t67;
    COW_AT(101b24b3)
    if (rd32(self + 0xf10cu) == 1u)
    {
        ebx = eax;
        eax = rd32(self + 0xf10cu);
        goto L_101b2585;
    }
    ebx = eax;
    eax = rd32(self + 0xf10cu);
    COW_AT(101b24c4)
    if (eax == 2u) goto L_101b2585;
    COW_AT(101b24cd)
    wr32(sp0 - 0x928u, ebx);
    t68 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x92cu, t68);
    g->eax = t68;
    g->esp = sp0 - 0x924u;
    COW_RET(0x101b24ddu);
    t69 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t68, ebx);
    eax = t69;
    COW_AT(101b24dd)
    g->eax = eax;
    g->edx = rd32(self);
    t70 = rd32(self);
    g->esp = sp0 - 0x924u;
    COW_RET(0x101b24e4u);
    t71 = cow_thiscall(g, rd32(t70 + 0x68u), self, 0);
    t72 = g->edx;
    eax = t71;
    edx = t72;
    COW_AT(101b24e4)
    g->edx = edx;
    g->esp = sp0 - 0x924u;
    COW_RET(0x101b24edu);
    t73 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t74 = g->edx;
    edx = t74;
    edi = eax;
    eax = t73;
    COW_AT(101b24ed)
    if ((uint8_t)eax != 0u)
    {
    COW_AT(101b24f1)
        g->eax = rd32(self);
        t75 = rd32(self);
        g->esp = sp0 - 0x924u;
        COW_RET(0x101b24f8u);
        t76 = cow_thiscall(g, rd32(t75 + 0x68u), self, 0);
        eax = t76;
    COW_AT(101b24f8)
        wr32(sp0 - 0x928u, eax);
        g->eax = eax;
        g->edx = rd32(self);
        t77 = rd32(self);
        g->esp = sp0 - 0x928u;
        COW_RET(0x101b2500u);
        t78 = cow_thiscall(g, rd32(t77 + 0x64u), self, 0);
        t79 = g->edx;
        eax = t78;
        edx = t79;
    COW_AT(101b2500)
        wr32(sp0 - 0x92cu, eax);
        g->edx = edx;
        g->esp = sp0 - 0x924u;
        COW_RET(0x101b2508u);
        cow_thiscall(g, COW_IMG(0x101b6ee0u), self, 2, eax, rd32(sp0 - 0x928u));
        t80 = g->edx;
        edx = t80;
    COW_AT(101b2508)
        t81 = rd32(self);
        wr8(self + 0xf123u, 0u);
        g->eax = t81;
        g->edx = edx;
        g->esp = sp0 - 0x924u;
        COW_RET(0x101b2516u);
        t82 = cow_thiscall(g, rd32(t81 + 0x70u), self, 0);
        t83 = g->edx;
        eax = t82;
        edx = t83;
    COW_AT(101b2516)
        wr32(sp0 - 0x928u, 0u);
        wr32(sp0 - 0x92cu, 0u);
        wr32(sp0 - 0x930u, COW_IMG(0x10377cbcu));
        g->ebx = ebx;
        g->eax = eax;
        g->esp = sp0 - 0x924u;
        COW_RET(0x101b2529u);
        t84 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10377cbcu), 0u, 0u);
        eax = t84;
    }
    COW_AT(101b2529)
    t85 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x928u, t85);
    g->eax = eax;
    g->ecx = rd32(COW_IMG(0x103d3c64u));
    g->edx = t85;
    t86 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x924u;
    COW_RET(0x101b2538u);
    t87 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t85);
    t88 = g->ecx;
    t89 = g->edx;
    eax = t87;
    ecx = t88;
    edx = t89;
    COW_AT(101b2538)
    if ((int32_t)edi <= 0)
    {
        ebx = eax;
    COW_AT(101b2547)
        wr8(self + 0xf120u, 0u);
    }
    else
    {
        ebx = eax;
    COW_AT(101b253e)
        wr8(self + 0xf120u, 1u);
    }
    COW_AT(101b254e)
    wr32(sp0 - 0x928u, 0x1c2u);
    wr32(sp0 - 0x92cu, self + 0xf12cu);
    wr32(sp0 - 0x930u, 0x10u);
    wr32(sp0 - 0x934u, ebx);
    g->eax = self + 0xf12cu;
    g->esp = sp0 - 0x924u;
    COW_RET(0x101b2562u);
    t90 = cow_stdcall(g, COW_IMG(0x102bc888u), 4, ebx, 0x10u, self + 0xf12cu, 0x1c2u);
    eax = t90;
    COW_AT(101b2562)
    wr32(self + 0xf2f0u, eax);
    wr32(sp0 - 0x928u, ebx);
    t91 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x92cu, t91);
    g->esp = sp0 - 0x924u;
    COW_RET(0x101b2578u);
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t91, ebx);
    COW_AT(101b2578)
    g->ebx = rd32(sp0 - 0x918u);
    g->esi = rd32(sp0 - 0x920u);
    g->edi = rd32(sp0 - 0x924u);
    g->ebp = rd32(sp0 - 0x91cu);
    return;
L_101b2585: ;
    COW_AT(101b2585)
    wr32(sp0 - 0x928u, 0x1c2u);
    wr32(sp0 - 0x92cu, sp0 - 0x8d4u);
    wr32(sp0 - 0x930u, 1u);
    wr32(sp0 - 0x934u, ebx);
    g->eax = eax;
    g->ecx = sp0 - 0x8d4u;
    g->edx = edx;
    g->esp = sp0 - 0x924u;
    COW_RET(0x101b2597u);
    t92 = cow_stdcall(g, COW_IMG(0x102bc888u), 4, ebx, 1u, sp0 - 0x8d4u, 0x1c2u);
    t93 = g->ecx;
    t94 = g->edx;
    eax = t92;
    ecx = t93;
    edx = t94;
    COW_AT(101b2597)
    wr32(sp0 - 0x928u, 0u);
    wr32(sp0 - 0x92cu, ebx);
    wr8(self + 0xf2f4u, 0u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x924u;
    COW_RET(0x101b25a8u);
    t95 = cow_stdcall(g, COW_IMG(0x102bc876u), 2, rd32(sp0 - 0x92cu), rd32(sp0 - 0x928u));
    t96 = g->ecx;
    t97 = g->edx;
    ecx = t96;
    edx = t97;
    ebp = eax;
    eax = t95;
    COW_AT(101b25a8)
    if ((int32_t)ebp <= 0) goto L_101b268b;
    COW_AT(101b25b0)
    if ((int32_t)ebp <= 0) goto L_101b25e1;
    edi = 0u;
L_101b25b6: ;
    COW_AT(101b25b6)
    t98 = (uint32_t)rd8(edi + sp0 - 0x8d4u) << 8u | rd8(edi + sp0 - 0x8d3u);
    wr32(sp0 - 0x928u, t98);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t98;
    g->esp = sp0 - 0x924u;
    COW_RET(0x101b25c6u);
    t99 = cow_cdecl(g, COW_IMG(0x10315c54u), 1, t98);
    t100 = g->ecx;
    t101 = g->edx;
    eax = t99;
    ecx = t100;
    edx = t101;
    COW_AT(101b25c6)
    if (eax == 0u)
    {
    COW_AT(101b25d2)
        eax = eax & 0xffffff00u;
    }
    else
    {
    COW_AT(101b25cd)
        eax = (eax & 0xffffff00u) | 1u;
        edi = edi + 1u;
    }
    COW_AT(101b25d4)
    if ((int32_t)(edi + 1u) < (int32_t)ebp)
    {
        edi = edi + 1u;
        goto L_101b25b6;
    }
    COW_AT(101b25d9)
    if ((uint8_t)eax != 0u) goto L_101b268b;
L_101b25e1: ;
    COW_AT(101b25e1)
    if ((uint32_t)(int8_t)rd8(ebp + sp0 - 0x8d5u) + 0x4fu > 4u)
    {
        eax = (eax & 0xffffff00u) | rd8(ebp + sp0 - 0x8d5u);
        edi = ebp + sp0 - 0x8d5u;
        goto L_101b2612;
    }
    eax = (eax & 0xffffff00u) | rd8(ebp + sp0 - 0x8d5u);
    ecx = (uint32_t)(int8_t)rd8(ebp + sp0 - 0x8d5u) + 0x4fu;
    COW_AT(101b25f4)
    t102 = rd32(COW_IMG(0x101b26f8u) + ecx * 4u);
    switch (t102 - RD)
    {
    case 0x101b25fbu: goto L_101b25fb;
    case 0x101b2602u: goto L_101b2602;
    case 0x101b2606u: goto L_101b2606;
    case 0x101b260au: goto L_101b260a;
    case 0x101b260eu: goto L_101b260e;
    default: rt_fatal(g, COW_IMG(0x101b25f4u), "switch");
    }
    return;
L_101b25fb: ;
    COW_AT(101b25fb)
    wr32(sp0 - 0x928u, 0x61u);
    loc_928 = 0x61u;
L_101b2684: ;
    COW_AT(101b2684)
    g->esp = sp0 - 0x924u;
    COW_RET(0x101b268bu);
    t112 = cow_call_regs(g, COW_IMG(0x101b6810u), eax, self, g->edx, 0, 1, loc_928);
    eax = t112;
L_101b268b: ;
    COW_AT(101b268b)
    wr32(sp0 - 0x928u, ebx);
    t113 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x92cu, t113);
    g->esp = sp0 - 0x924u;
    COW_RET(0x101b269bu);
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t113, ebx);
    COW_AT(101b269b)
    g->ebx = rd32(sp0 - 0x918u);
    g->esi = rd32(sp0 - 0x920u);
    g->edi = rd32(sp0 - 0x924u);
    g->ebp = rd32(sp0 - 0x91cu);
    return;
L_101b2602: ;
    COW_AT(101b2602)
    wr32(sp0 - 0x928u, 0x69u);
    loc_928 = 0x69u;
    goto L_101b2684;
L_101b2606: ;
    COW_AT(101b2606)
    wr32(sp0 - 0x928u, 0x75u);
    loc_928 = 0x75u;
    goto L_101b2684;
L_101b260a: ;
    COW_AT(101b260a)
    wr32(sp0 - 0x928u, 0x65u);
    loc_928 = 0x65u;
    goto L_101b2684;
L_101b260e: ;
    COW_AT(101b260e)
    wr32(sp0 - 0x928u, 0x6fu);
    loc_928 = 0x6fu;
    goto L_101b2684;
L_101b2612: ;
    COW_AT(101b2612)
    wr32(sp0 - 0x928u, ebp);
    t103 = (eax & 0xffff0000u) | (uint16_t)(uint32_t)(int8_t)eax;
    wr32(sp0 - 0x92cu, t103);
    g->edx = edx;
    g->esp = sp0 - 0x924u;
    COW_RET(0x101b261fu);
    t104 = cow_call_regs(g, COW_IMG(0x101b6d50u), t103, self, g->edx, 0, 2, t103, ebp);
    t105 = g->ecx;
    t106 = g->edx;
    eax = t104;
    ecx = t105;
    edx = t106;
    COW_AT(101b261f)
    if ((uint8_t)eax != 1u) goto L_101b268b;
    COW_AT(101b2623)
    g->edx = edx;
    g->esp = sp0 - 0x924u;
    COW_RET(0x101b2628u);
    t107 = cow_call_regs(g, COW_IMG(0x100164b0u), eax, g->ecx, g->edx, 1, 0);
    t108 = g->edx;
    eax = t107;
    edx = t108;
    COW_AT(101b2628)
    if ((uint8_t)eax != 1u) goto L_101b2681;
    COW_AT(101b262c)
    t109 = rd32(rd32(COW_IMG(0x10456a28u)));
    if (t109 == 0x40u) goto L_101b2681;
    COW_AT(101b2637)
    if (rd32(sp0 + 4u) < 0x824fu)
    {
        eax = rd32(sp0 + 4u);
        goto L_101b2650;
    }
    eax = rd32(sp0 + 4u);
    COW_AT(101b2645)
    if (eax > 0x8258u) goto L_101b2650;
    COW_AT(101b264c)
    eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax - 0x1fu);
L_101b2672: ;
    COW_AT(101b2672)
    wr8(sp0 - 0x914u, (uint8_t)eax);
    if ((uint8_t)eax == 0u) goto L_101b268b;
    COW_AT(101b267a)
    t110 = rd32(sp0 - 0x914u);
    wr32(sp0 - 0x928u, t110);
    edx = t110;
    loc_928 = t110;
    goto L_101b2684;
L_101b2650: ;
    COW_AT(101b2650)
    if (eax < 0x8260u) goto L_101b2662;
    COW_AT(101b2657)
    if (eax > 0x8279u) goto L_101b2662;
    COW_AT(101b265e)
    eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax - 0x1fu);
    goto L_101b2672;
L_101b2662: ;
    COW_AT(101b2662)
    if (eax < 0x8281u) goto L_101b268b;
    COW_AT(101b2669)
    if (eax > 0x8290u) goto L_101b268b;
    COW_AT(101b2670)
    eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax - 0x20u);
    goto L_101b2672;
L_101b2681: ;
    COW_AT(101b2681)
    t111 = (eax & 0xffffff00u) | rd8(edi);
    wr32(sp0 - 0x928u, t111);
    eax = t111;
    loc_928 = t111;
    goto L_101b2684;
L_101b26a8: ;
    COW_AT(101b26a8)
    wr32(sp0 - 0x928u, 0u);
    g->eax = rd32(self);
    t114 = rd32(self);
    g->esp = sp0 - 0x924u;
    COW_RET(0x101b26b1u);
    t115 = cow_thiscall(g, rd32(t114 + 0x60u), self, 1, 0u);
    eax = t115;
    COW_AT(101b26b1)
    t116 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x928u, t116);
    g->eax = eax;
    g->ecx = rd32(COW_IMG(0x103d3c64u));
    g->edx = t116;
    t117 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x924u;
    COW_RET(0x101b26c0u);
    t118 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t116);
    t119 = g->ecx;
    t120 = g->edx;
    eax = t118;
    ecx = t119;
    edx = t120;
    COW_AT(101b26c0)
    wr32(sp0 - 0x928u, eax);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x924u;
    COW_RET(0x101b26c8u);
    t121 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, eax);
    t122 = g->ecx;
    t123 = g->edx;
    ecx = t122;
    edx = t123;
    edi = eax;
    eax = t121;
    COW_AT(101b26c8)
    if (eax != 0u)
    {
    COW_AT(101b26cc)
        wr32(sp0 - 0x928u, 0u);
        wr32(sp0 - 0x92cu, edi);
        wr8(self + 0xf121u, 1u);
        g->edx = edx;
        g->esp = sp0 - 0x924u;
        COW_RET(0x101b26dbu);
        cow_stdcall(g, COW_IMG(0x102bc876u), 2, rd32(sp0 - 0x92cu), rd32(sp0 - 0x928u));
        t124 = g->edx;
        edx = t124;
    }
    COW_AT(101b26db)
    wr32(sp0 - 0x928u, edi);
    t125 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x92cu, t125);
    g->esp = sp0 - 0x924u;
    COW_RET(0x101b26eau);
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t125, edi);
L_101b26ea: ;
    COW_AT(101b26ea)
    g->ebx = rd32(sp0 - 0x918u);
    g->esi = rd32(sp0 - 0x920u);
    g->edi = rd32(sp0 - 0x924u);
    g->ebp = rd32(sp0 - 0x91cu);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101b20e0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101b20f8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b2100u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b2112u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x101b2117u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b211fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b212du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b2144u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b2158u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b216eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_910;
        uint32_t loc_914;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_914 = rd32(sp0 - 0x914u);
        loc_910 = rd32(sp0 - 0x910u);
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b2180u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x92cu;
        (void)sp0;
        return 1;
    }
    case 0x101b2191u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b2195u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_910;
        uint32_t loc_914;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_914 = rd32(sp0 - 0x914u);
        loc_910 = rd32(sp0 - 0x910u);
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b21a4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b21b8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b21cfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b21ecu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b220eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b2226u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b2235u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b2249u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b2266u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b2283u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b2291u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_90c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_90c = rd32(sp0 - 0x90cu);
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b2296u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b229eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b22acu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b22c2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b22dfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b22e6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b22f3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b22fbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x92cu;
        (void)sp0;
        return 1;
    }
    case 0x101b2309u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b230du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b235fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b2367u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b236fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b2371u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b237bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b2384u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x928u;
        (void)sp0;
        return 1;
    }
    case 0x101b238bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b239au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x92cu;
        (void)sp0;
        return 1;
    }
    case 0x101b23a3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b23a7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_90c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_90c = rd32(sp0 - 0x90cu);
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b23beu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_90c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_90c = rd32(sp0 - 0x90cu);
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b23c5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_90c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_90c = rd32(sp0 - 0x90cu);
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b23ccu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_90c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_90c = rd32(sp0 - 0x90cu);
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b23d0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_90c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_90c = rd32(sp0 - 0x90cu);
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b23d7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_90c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_90c = rd32(sp0 - 0x90cu);
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b23deu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_90c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_90c = rd32(sp0 - 0x90cu);
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b23e0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_90c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_90c = rd32(sp0 - 0x90cu);
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b23e9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_90c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_90c = rd32(sp0 - 0x90cu);
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b23eeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_90c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_90c = rd32(sp0 - 0x90cu);
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b23f3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_90c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_90c = rd32(sp0 - 0x90cu);
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b23ffu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_90c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_90c = rd32(sp0 - 0x90cu);
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b240eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_90c;
        uint32_t loc_928;
        uint32_t loc_92c;
        uint32_t loc_930;
        uint32_t loc_934;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_934 = rd32(sp0 - 0x934u);
        loc_930 = rd32(sp0 - 0x930u);
        loc_92c = rd32(sp0 - 0x92cu);
        loc_928 = rd32(sp0 - 0x928u);
        loc_90c = rd32(sp0 - 0x90cu);
        g->esp = sp0 - 0x934u;
        (void)sp0;
        return 1;
    }
    case 0x101b2416u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b2426u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b2436u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b2442u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b2456u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b245du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b2465u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b246cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b2474u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b248bu:
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
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b2498u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x101b249du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b24a5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b24b3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b24c4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b24cdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b24ddu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b24e4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b24edu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b24f1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b24f8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b2500u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x928u;
        (void)sp0;
        return 1;
    }
    case 0x101b2508u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b2516u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b2529u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b2538u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b253eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b2547u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b254eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b2562u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b2578u:
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
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b2585u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b2597u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b25a8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b25b0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b25b6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b25c6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x928u;
        (void)sp0;
        return 1;
    }
    case 0x101b25cdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b25d2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b25d4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b25d9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b25e1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b25f4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b25fbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b2602u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b2606u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b260au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b260eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b2612u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b261fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b2623u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b2628u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b262cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b2637u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b2645u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b264cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b2650u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b2657u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b265eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b2662u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b2669u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b2670u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b2672u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b267au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b2681u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b2684u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_928;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_928 = rd32(sp0 - 0x928u);
        g->esp = sp0 - 0x928u;
        (void)sp0;
        return 1;
    }
    case 0x101b268bu:
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
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b269bu:
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
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b26a8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b26b1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b26c0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b26c8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b26ccu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b26dbu:
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
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b26eau:
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
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101b20e0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_101b20e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
