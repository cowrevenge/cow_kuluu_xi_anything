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
    uint32_t loc_900;
    uint32_t loc_904;
    uint32_t loc_908;
    uint32_t loc_918;
    uint32_t loc_91c;
    uint32_t loc_920;
    uint32_t loc_924;
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
    uint32_t t12;
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
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 2376u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101b2100u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x924u); in_esi = rd32(sp0 - 0x920u); in_ebp = rd32(sp0 - 0x91cu); in_ebx = rd32(sp0 - 0x918u); g->ebp = rd32(sp0 - 0x91cu); g->ebx = rd32(sp0 - 0x918u); g->edi = rd32(sp0 - 0x924u); g->esi = rd32(sp0 - 0x920u); goto E_101b2100;
    case 0x101b2112u: self = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x924u); in_esi = rd32(sp0 - 0x920u); in_ebp = rd32(sp0 - 0x91cu); in_ebx = rd32(sp0 - 0x918u); g->ebp = rd32(sp0 - 0x91cu); g->ebx = rd32(sp0 - 0x918u); g->edi = rd32(sp0 - 0x924u); g->esi = rd32(sp0 - 0x920u); goto E_101b2112;
    case 0x101b211fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b211f;
    case 0x101b216eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_928 = rd32(sp0 - 0x928u); loc_918 = rd32(sp0 - 0x918u); loc_904 = rd32(sp0 - 0x904u); goto E_101b216e;
    case 0x101b2191u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2191;
    case 0x101b2195u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_928 = rd32(sp0 - 0x928u); loc_918 = rd32(sp0 - 0x918u); loc_904 = rd32(sp0 - 0x904u); goto E_101b2195;
    case 0x101b2291u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_908 = rd32(sp0 - 0x908u); goto E_101b2291;
    case 0x101b229eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b229e;
    case 0x101b22acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b22ac;
    case 0x101b22c2u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b22c2;
    case 0x101b22dfu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b22df;
    case 0x101b22e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b22e6;
    case 0x101b22f3u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b22f3;
    case 0x101b2309u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2309;
    case 0x101b230du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_928 = rd32(sp0 - 0x928u); loc_924 = rd32(sp0 - 0x924u); goto E_101b230d;
    case 0x101b235fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_928 = rd32(sp0 - 0x928u); loc_924 = rd32(sp0 - 0x924u); goto E_101b235f;
    case 0x101b2367u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_928 = rd32(sp0 - 0x928u); loc_924 = rd32(sp0 - 0x924u); goto E_101b2367;
    case 0x101b236fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_928 = rd32(sp0 - 0x928u); loc_924 = rd32(sp0 - 0x924u); goto E_101b236f;
    case 0x101b2371u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_928 = rd32(sp0 - 0x928u); loc_924 = rd32(sp0 - 0x924u); goto E_101b2371;
    case 0x101b237bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_928 = rd32(sp0 - 0x928u); loc_924 = rd32(sp0 - 0x924u); goto E_101b237b;
    case 0x101b238bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_928 = rd32(sp0 - 0x928u); goto E_101b238b;
    case 0x101b23a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b23a3;
    case 0x101b23a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_918 = rd32(sp0 - 0x918u); loc_908 = rd32(sp0 - 0x908u); loc_900 = rd32(sp0 - 0x900u); goto E_101b23a7;
    case 0x101b23beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_918 = rd32(sp0 - 0x918u); loc_908 = rd32(sp0 - 0x908u); loc_900 = rd32(sp0 - 0x900u); goto E_101b23be;
    case 0x101b23c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_918 = rd32(sp0 - 0x918u); loc_908 = rd32(sp0 - 0x908u); loc_900 = rd32(sp0 - 0x900u); goto E_101b23c5;
    case 0x101b23ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_918 = rd32(sp0 - 0x918u); loc_908 = rd32(sp0 - 0x908u); loc_900 = rd32(sp0 - 0x900u); goto E_101b23cc;
    case 0x101b23d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_918 = rd32(sp0 - 0x918u); loc_908 = rd32(sp0 - 0x908u); loc_900 = rd32(sp0 - 0x900u); goto E_101b23d0;
    case 0x101b23d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_918 = rd32(sp0 - 0x918u); loc_908 = rd32(sp0 - 0x908u); loc_900 = rd32(sp0 - 0x900u); goto E_101b23d7;
    case 0x101b23deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_918 = rd32(sp0 - 0x918u); loc_908 = rd32(sp0 - 0x908u); loc_900 = rd32(sp0 - 0x900u); goto E_101b23de;
    case 0x101b23e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_918 = rd32(sp0 - 0x918u); loc_908 = rd32(sp0 - 0x908u); loc_900 = rd32(sp0 - 0x900u); goto E_101b23e0;
    case 0x101b23e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_918 = rd32(sp0 - 0x918u); loc_908 = rd32(sp0 - 0x908u); loc_900 = rd32(sp0 - 0x900u); goto E_101b23e9;
    case 0x101b23eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_918 = rd32(sp0 - 0x918u); loc_908 = rd32(sp0 - 0x908u); loc_900 = rd32(sp0 - 0x900u); goto E_101b23ee;
    case 0x101b23f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_918 = rd32(sp0 - 0x918u); loc_908 = rd32(sp0 - 0x908u); loc_900 = rd32(sp0 - 0x900u); goto E_101b23f3;
    case 0x101b23ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_918 = rd32(sp0 - 0x918u); loc_908 = rd32(sp0 - 0x908u); loc_900 = rd32(sp0 - 0x900u); goto E_101b23ff;
    case 0x101b240eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_930 = rd32(sp0 - 0x930u); loc_92c = rd32(sp0 - 0x92cu); loc_928 = rd32(sp0 - 0x928u); loc_924 = rd32(sp0 - 0x924u); loc_918 = rd32(sp0 - 0x918u); loc_908 = rd32(sp0 - 0x908u); loc_900 = rd32(sp0 - 0x900u); goto E_101b240e;
    case 0x101b2416u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_934 = rd32(sp0 - 0x934u); loc_92c = rd32(sp0 - 0x92cu); loc_928 = rd32(sp0 - 0x928u); goto E_101b2416;
    case 0x101b2442u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2442;
    case 0x101b2456u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2456;
    case 0x101b2465u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2465;
    case 0x101b2474u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2474;
    case 0x101b2498u: self = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x924u); in_esi = rd32(sp0 - 0x920u); in_ebp = rd32(sp0 - 0x91cu); in_ebx = rd32(sp0 - 0x918u); g->ebp = rd32(sp0 - 0x91cu); g->ebx = rd32(sp0 - 0x918u); g->edi = rd32(sp0 - 0x924u); g->esi = rd32(sp0 - 0x920u); goto E_101b2498;
    case 0x101b24a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b24a5;
    case 0x101b24c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b24c4;
    case 0x101b24cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b24cd;
    case 0x101b24f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b24f1;
    case 0x101b2529u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_924 = rd32(sp0 - 0x924u); loc_920 = rd32(sp0 - 0x920u); loc_91c = rd32(sp0 - 0x91cu); goto E_101b2529;
    case 0x101b253eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b253e;
    case 0x101b2547u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2547;
    case 0x101b254eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b254e;
    case 0x101b2585u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2585;
    case 0x101b25b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b25b0;
    case 0x101b25b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_92c = rd32(sp0 - 0x92cu); loc_924 = rd32(sp0 - 0x924u); loc_91c = rd32(sp0 - 0x91cu); goto E_101b25b6;
    case 0x101b25cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b25cd;
    case 0x101b25d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b25d2;
    case 0x101b25d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b25d4;
    case 0x101b25d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b25d9;
    case 0x101b25e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_92c = rd32(sp0 - 0x92cu); loc_924 = rd32(sp0 - 0x924u); loc_91c = rd32(sp0 - 0x91cu); goto E_101b25e1;
    case 0x101b25f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_92c = rd32(sp0 - 0x92cu); loc_924 = rd32(sp0 - 0x924u); loc_91c = rd32(sp0 - 0x91cu); goto E_101b25f4;
    case 0x101b25fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_92c = rd32(sp0 - 0x92cu); loc_924 = rd32(sp0 - 0x924u); loc_91c = rd32(sp0 - 0x91cu); goto E_101b25fb;
    case 0x101b2602u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_92c = rd32(sp0 - 0x92cu); loc_924 = rd32(sp0 - 0x924u); loc_91c = rd32(sp0 - 0x91cu); goto E_101b2602;
    case 0x101b2606u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_92c = rd32(sp0 - 0x92cu); loc_924 = rd32(sp0 - 0x924u); loc_91c = rd32(sp0 - 0x91cu); goto E_101b2606;
    case 0x101b260au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_92c = rd32(sp0 - 0x92cu); loc_924 = rd32(sp0 - 0x924u); loc_91c = rd32(sp0 - 0x91cu); goto E_101b260a;
    case 0x101b260eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_92c = rd32(sp0 - 0x92cu); loc_924 = rd32(sp0 - 0x924u); loc_91c = rd32(sp0 - 0x91cu); goto E_101b260e;
    case 0x101b2612u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_92c = rd32(sp0 - 0x92cu); loc_924 = rd32(sp0 - 0x924u); loc_91c = rd32(sp0 - 0x91cu); goto E_101b2612;
    case 0x101b2623u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b2623;
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
    case 0x101b2684u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_934 = rd32(sp0 - 0x934u); loc_92c = rd32(sp0 - 0x92cu); loc_924 = rd32(sp0 - 0x924u); loc_920 = rd32(sp0 - 0x920u); loc_91c = rd32(sp0 - 0x91cu); goto E_101b2684;
    case 0x101b268bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_92c = rd32(sp0 - 0x92cu); loc_924 = rd32(sp0 - 0x924u); loc_920 = rd32(sp0 - 0x920u); loc_91c = rd32(sp0 - 0x91cu); goto E_101b268b;
    case 0x101b26a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101b26a8;
    case 0x101b26ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_928 = rd32(sp0 - 0x928u); goto E_101b26cc;
    case 0x101b26dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_928 = rd32(sp0 - 0x928u); loc_920 = rd32(sp0 - 0x920u); goto E_101b26db;
    case 0x101b26eau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_928 = rd32(sp0 - 0x928u); loc_924 = rd32(sp0 - 0x924u); loc_920 = rd32(sp0 - 0x920u); loc_91c = rd32(sp0 - 0x91cu); loc_918 = rd32(sp0 - 0x918u); loc_904 = rd32(sp0 - 0x904u); goto E_101b26ea;
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
    t1 = cow_call_regs(g, COW_IMG(0x101b6e90u), in_eax, self, g->edx, 1, 0);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        loc_918 = in_ebx;
        loc_91c = in_ebp;
        loc_920 = in_esi;
        loc_924 = in_edi;
        goto L_101b26ea;
    }
    edx = t2;
    COW_AT(101b2100)
    if ((arg2 >> 8u & 8u) == 0u) goto L_101b2498;
    COW_AT(101b2112)
    g->eax = arg2;
    g->edx = edx;
    g->esp = sp0 - 0x924u;
    t3 = cow_thiscall(g, COW_IMG(0x101b5c90u), self, 0);
    t4 = g->edx;
    if ((uint8_t)t3 == 0u)
    {
        eax = t3;
        edx = t4;
        goto L_101b2456;
    }
    edx = t4;
    COW_AT(101b211f)
    t5 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x928u, t5);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    g->ecx = t5;
    t6 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x924u;
    t7 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t5);
    t8 = g->ecx;
    wr32(sp0 - 0x928u, 0x1c2u);
    wr32(sp0 - 0x92cu, sp0 - 0x8d4u);
    wr32(sp0 - 0x930u, 0x800u);
    wr32(sp0 - 0x934u, t7);
    g->edx = sp0 - 0x8d4u;
    g->esp = sp0 - 0x92cu;
    t9 = cow_stdcall(g, COW_IMG(0x102bc888u), 2, t7, 0x800u);
    t10 = g->edx;
    wr8(sp0 + t9 - 0x8dcu, 0u);
    wr32(sp0 - 0x930u, t7);
    t11 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x934u, t11);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    t12 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x914u;
    t13 = cow_stdcall(g, COW_IMG(0x101aff60u), 8, t11, t7, sp0 - 0x8d4u, 0x1c2u, rd32(sp0 - 0x924u), rd32(sp0 - 0x920u), rd32(sp0 - 0x91cu), rd32(sp0 - 0x918u));
    wr32(sp0 - 0x900u, sp0 - 0x8c4u);
    wr32(sp0 - 0x904u, 0u);
    if (rd8(sp0 - 0x8c4u) == 0u)
    {
        eax = (t13 & 0xffffff00u) | rd8(sp0 - 0x8c4u);
        loc_904 = 0u;
        goto L_101b2195;
    }
    edx = sp0 - 0x8c4u;
    edi = 0u;
L_101b216e: ;
    COW_AT(101b216e)
    wr32(sp0 - 0x918u, sp0 - 0x900u);
    t14 = edi + sp0 - 0x1b4u;
    wr32(sp0 - 0x91cu, t14);
    g->eax = sp0 - 0x900u;
    g->esp = sp0 - 0x90cu;
    t15 = cow_thiscall_cdecl(g, COW_IMG(0x101243b0u), t14, 4, t14, sp0 - 0x900u, rd32(sp0 - 0x914u), rd32(sp0 - 0x910u));
    if (rd8(sp0 - 0x8c4u) != 0u)
    {
        edx = (uint32_t)(int16_t)t15;
        edi = edi + (uint32_t)(int16_t)t15;
        goto L_101b216e;
    }
    edi = edi + (uint32_t)(int16_t)t15;
    COW_AT(101b2191)
    wr32(sp0 - 0x904u, edi);
    eax = sp0 - 0x8c4u;
    loc_904 = edi;
L_101b2195: ;
    COW_AT(101b2195)
    t16 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x918u, t16);
    g->eax = eax;
    g->ecx = rd32(COW_IMG(0x103d3c64u));
    g->edx = t16;
    t17 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x8ecu;
    t18 = cow_stdcall(g, COW_IMG(0x101aff50u), 11, t16, rd32(sp0 - 0x914u), rd32(sp0 - 0x910u), rd32(sp0 - 0x90cu), rd32(sp0 - 0x908u), loc_904, sp0 - 0x8c4u, rd32(sp0 - 0x8fcu), rd32(sp0 - 0x8f8u), rd32(sp0 - 0x8f4u), rd32(sp0 - 0x8f0u));
    t19 = g->ecx;
    t20 = g->edx;
    wr32(sp0 - 0x8f0u, 0x1c2u);
    wr32(sp0 - 0x8f4u, sp0 - 0x89cu);
    wr32(sp0 - 0x8f8u, 8u);
    wr32(sp0 - 0x8fcu, t18);
    g->eax = sp0 - 0x89cu;
    g->edx = t20;
    g->esp = sp0 - 0x8f8u;
    t21 = cow_stdcall(g, COW_IMG(0x102bc888u), 1, t18);
    t22 = g->edx;
    wr32(sp0 - 0x8fcu, 0x1c2u);
    wr32(sp0 - 0x900u, sp0 - 0x35cu);
    wr32(sp0 - 0x904u, 0x10u);
    wr32(sp0 - 0x908u, t18);
    g->ecx = sp0 - 0x35cu;
    g->esp = sp0 - 0x8fcu;
    t23 = cow_stdcall(g, COW_IMG(0x102bc888u), 3, t18, 0x10u, sp0 - 0x35cu);
    t24 = g->ecx;
    wr32(sp0 - 0x900u, 0x1c2u);
    wr32(sp0 - 0x904u, sp0 - 0x6e8u);
    wr32(sp0 - 0x908u, 1u);
    wr32(sp0 - 0x90cu, t18);
    wr8(sp0 + t23 - 0x360u, 0u);
    g->ecx = t24;
    g->edx = sp0 - 0x6e8u;
    g->esp = sp0 - 0x90cu;
    t25 = cow_stdcall(g, COW_IMG(0x102bc888u), 0);
    t26 = g->ecx;
    t27 = g->edx;
    wr32(sp0 - 0x910u, 0x1c2u);
    wr32(sp0 - 0x914u, sp0 - 0x534u);
    wr32(sp0 - 0x918u, 0x200u);
    wr32(sp0 - 0x91cu, t18);
    wr8(sp0 + t25 - 0x6f8u, 0u);
    g->eax = sp0 - 0x534u;
    g->esp = sp0 - 0x91cu;
    t28 = cow_stdcall(g, COW_IMG(0x102bc888u), 0);
    wr32(sp0 - 0x920u, sp0 - 0x8fcu);
    wr32(sp0 - 0x924u, sp0 - 0x900u);
    wr32(sp0 - 0x928u, t18);
    wr8(sp0 + t28 - 0x544u, 0u);
    g->edx = sp0 - 0x900u;
    g->esp = sp0 - 0x918u;
    cow_stdcall(g, COW_IMG(0x102bc882u), 4, t18, sp0 - 0x900u, sp0 - 0x8fcu, rd32(sp0 - 0x91cu));
    t29 = g->edx;
    wr32(sp0 - 0x91cu, t18);
    t30 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x920u, t30);
    g->esp = sp0 - 0x920u;
    cow_stdcall(g, COW_IMG(0x101aff60u), 0);
    wr32(sp0 - 0x924u, 0x1c2u);
    wr32(sp0 - 0x928u, sp0 - 0x1c0u);
    g->ebx = t25;
    g->eax = sp0 - 0x1c0u;
    g->edx = 0x1c2u;
    t31 = cow_thiscall(g, COW_IMG(0x101b6c00u), self, 2, sp0 - 0x1c0u, 0x1c2u);
    t32 = g->edx;
    wr32(sp0 - 0x924u, COW_IMG(0x10377cbcu));
    wr8(self + 0xf120u, 0u);
    wr8(self + 0xf123u, 0u);
    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10377cbcu));
    wr32(self + 0xf128u, 0u);
    wr32(self + 0xf2f0u, 0u);
    t33 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x924u, t33);
    g->ecx = rd32(COW_IMG(0x103d3c64u));
    g->edx = t33;
    t34 = rd32(COW_IMG(0x103d3c64u));
    t35 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t33);
    t36 = g->ecx;
    t37 = g->edx;
    wr32(sp0 - 0x908u, t35);
    if (t21 == 0u)
    {
        edx = t37;
        ebx = t25;
        ebp = t21;
        edi = t35;
        loc_900 = 0x1c2u;
        loc_918 = 0x200u;
        goto L_101b23a7;
    }
    eax = t35;
    ecx = t36;
    edx = t37;
    ebx = t25;
    ebp = t21;
    loc_908 = t35;
    COW_AT(101b2291)
    g->edx = edx;
    g->esp = sp0 - 0x920u;
    t38 = cow_call_regs(g, COW_IMG(0x100164b0u), eax, g->ecx, g->edx, 1, 0);
    t39 = g->edx;
    if ((uint8_t)t38 != 1u)
    {
        edx = t39;
        goto L_101b23a3;
    }
    edx = t39;
    COW_AT(101b229e)
    if (rd32(rd32(COW_IMG(0x10456a28u))) == 0x40u) goto L_101b23a3;
    COW_AT(101b22ac)
    wr8(sp0 - 0x8fcu, ~(uint8_t)((sp0 - 0x6e8u) >> 4u) & 1u);
    if (~(uint8_t)((sp0 - 0x6e8u) >> 4u) & 1u)
    {
        ecx = ((sp0 - 0x6e8u) >> 4u & 0xffffff00u) | (~(uint8_t)((sp0 - 0x6e8u) >> 4u) & 1u);
    }
    else
    {
    COW_AT(101b22c2)
        if (ebp != 2u)
        {
            eax = (uint32_t)(uint8_t)rd32(sp0 - 0x8cfu) << 8u | (uint8_t)rd32(sp0 - 0x8d0u);
    COW_AT(101b2309)
            eax = (eax & 0xffffff00u) | rd8(sp0 - 0x8d0u);
        }
        else
        {
            eax = (uint32_t)(uint8_t)rd32(sp0 - 0x8cfu) << 8u | (uint8_t)rd32(sp0 - 0x8d0u);
            edx = (uint8_t)rd32(sp0 - 0x8d0u);
    COW_AT(101b22df)
            if (eax != 0x8f81u)
            {
    COW_AT(101b22f3)
                wr32(sp0 - 0x924u, 0u);
                wr32(sp0 - 0x928u, eax);
                g->eax = eax;
                g->esp = sp0 - 0x920u;
                t40 = cow_cdecl(g, COW_IMG(0x101b4450u), 2, eax, 0u);
                wr8(sp0 - 0x8d0u, (uint8_t)t40);
                wr8(sp0 - 0x8cfu, 0u);
                eax = t40;
            }
            else
            {
    COW_AT(101b22e6)
                wr8(sp0 - 0x8cfu, 0u);
                wr8(sp0 - 0x8d0u, 0x5cu);
                eax = (eax & 0xffffff00u) | 0x5cu;
            }
        }
    COW_AT(101b230d)
        wr32(sp0 - 0x8f8u, COW_IMG(0x1037c478u));
        wr32(sp0 - 0x8f4u, COW_IMG(0x1037c474u));
        wr32(sp0 - 0x8f0u, COW_IMG(0x1037c470u));
        wr32(sp0 - 0x8ecu, COW_IMG(0x1037c46cu));
        wr32(sp0 - 0x8e8u, COW_IMG(0x1037c468u));
        wr32(sp0 - 0x8e4u, COW_IMG(0x1037c464u));
        wr32(sp0 - 0x8e0u, COW_IMG(0x1037c460u));
        wr32(sp0 - 0x8dcu, COW_IMG(0x103514ecu));
        wr32(sp0 - 0x8d8u, COW_IMG(0x1037c45cu));
        wr32(sp0 - 0x8d4u, COW_IMG(0x10362468u));
        ecx = 0u;
L_101b235f: ;
    COW_AT(101b235f)
        if (rd8(rd32(ecx * 4u + sp0 - 0x8f8u)) == (uint8_t)eax)
        {
            edx = rd32(ecx * 4u + sp0 - 0x8f8u);
            goto L_101b2371;
        }
        edx = rd32(ecx * 4u + sp0 - 0x8f8u);
    COW_AT(101b2367)
        if (ecx + 2u < 0xau)
        {
            ecx = ecx + 2u;
            goto L_101b235f;
        }
    COW_AT(101b236f)
L_101b237b: ;
    COW_AT(101b237b)
        wr32(sp0 - 0x924u, (uint32_t)(int8_t)eax);
        g->eax = eax;
        g->esp = sp0 - 0x920u;
        t43 = cow_call_regs(g, COW_IMG(0x10313bb4u), g->eax, (uint32_t)(int8_t)eax, edx, 1, 1, (uint32_t)(int8_t)eax);
        t44 = g->ecx;
        wr8(sp0 - 0x8d0u, (uint8_t)t43);
        ecx = t44;
    }
    COW_AT(101b238b)
    t45 = rd32(sp0 - 0x8fcu);
    wr32(sp0 - 0x924u, t45);
    wr32(sp0 - 0x928u, sp0 - 0x8d0u);
    g->ecx = ecx;
    g->esp = sp0 - 0x920u;
    cow_cdecl(g, COW_IMG(0x10017010u), 2, sp0 - 0x8d0u, t45);
    t46 = g->ecx;
    ecx = t46;
    edi = rd32(sp0 - 0x908u);
L_101b2416: ;
    COW_AT(101b2416)
    t48 = rd32(sp0 - 0x900u);
    wr32(sp0 - 0x924u, t48);
    wr32(sp0 - 0x928u, sp0 - 0x6e8u);
    wr32(sp0 - 0x92cu, edi);
    g->eax = sp0 - 0x6e8u;
    g->esp = sp0 - 0x92cu;
    t49 = cow_stdcall(g, COW_IMG(0x102bc894u), 0);
    wr32(sp0 - 0x930u, edi);
    t50 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x934u, t50);
    g->esp = sp0 - 0x924u;
    cow_stdcall(g, COW_IMG(0x101aff60u), 4, t50, edi, rd32(sp0 - 0x92cu), sp0 - 0x6e8u);
    if ((int32_t)(sp0 - 0x534u) <= 0)
    {
        loc_918 = rd32(sp0 - 0x918u);
        loc_91c = rd32(sp0 - 0x91cu);
        loc_920 = rd32(sp0 - 0x920u);
        loc_924 = rd32(sp0 - 0x924u);
        goto L_101b26ea;
    }
    COW_AT(101b2442)
    wr8(self + 0xf120u, 1u);
    g->ebx = rd32(sp0 - 0x918u);
    g->esi = rd32(sp0 - 0x920u);
    g->edi = rd32(sp0 - 0x924u);
    g->ebp = rd32(sp0 - 0x91cu);
    return;
L_101b2371: ;
    COW_AT(101b2371)
    t41 = rd32(ecx * 4u + sp0 - 0x8f4u);
    t42 = rd8(rd32(ecx * 4u + sp0 - 0x8f4u));
    wr8(sp0 - 0x8d0u, (uint8_t)t42);
    eax = (t41 & 0xffffff00u) | t42;
    goto L_101b237b;
L_101b23a3: ;
    COW_AT(101b23a3)
    edi = rd32(sp0 - 0x908u);
    loc_900 = rd32(sp0 - 0x900u);
    loc_918 = rd32(sp0 - 0x918u);
L_101b23a7: ;
    COW_AT(101b23a7)
    if (ebp != 2u)
    {
        eax = (uint32_t)rd8(sp0 - 0x8d0u) << 8u | (uint8_t)rd32(sp0 - 0x8cfu);
        ecx = (uint8_t)rd32(sp0 - 0x8cfu);
    }
    else
    {
        eax = (uint32_t)rd8(sp0 - 0x8d0u) << 8u | (uint8_t)rd32(sp0 - 0x8cfu);
        ecx = (uint8_t)rd32(sp0 - 0x8cfu);
    COW_AT(101b23be)
        if (eax < 0x8260u) goto L_101b23d0;
    COW_AT(101b23c5)
        if (eax >= 0x8280u) goto L_101b23d7;
    COW_AT(101b23cc)
        eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax - 0x1fu);
L_101b23e0: ;
    COW_AT(101b23e0)
        wr8(sp0 - 0x8d0u, (uint8_t)eax);
        ebp = 1u;
L_101b23e9: ;
    COW_AT(101b23e9)
        wr8(ebp + sp0 - 0x8d0u, 0u);
    }
    COW_AT(101b23ee)
    if (ebp != 1u)
    {
    COW_AT(101b23ff)
        wr32(sp0 - 0x924u, ebx);
        wr32(sp0 - 0x928u, sp0 - 0x70cu);
        wr32(sp0 - 0x92cu, ebp);
        wr32(sp0 - 0x930u, sp0 - 0x8d0u);
        eax = sp0 - 0x70cu;
        ecx = sp0 - 0x8d0u;
        loc_92c = ebp;
        loc_928 = sp0 - 0x70cu;
        loc_924 = ebx;
        loc_930 = sp0 - 0x8d0u;
    }
    else
    {
    COW_AT(101b23f3)
        wr32(sp0 - 0x924u, ebp);
        wr32(sp0 - 0x928u, sp0 - 0x8d0u);
        wr32(sp0 - 0x92cu, 0u);
        wr32(sp0 - 0x930u, 0u);
        edx = sp0 - 0x8d0u;
        loc_92c = 0u;
        loc_928 = sp0 - 0x8d0u;
        loc_924 = ebp;
        loc_930 = 0u;
    }
    COW_AT(101b240e)
    wr32(sp0 - 0x934u, 9u);
    wr32(sp0 - 0x938u, edi);
    g->ecx = ecx;
    g->esp = sp0 - 0x920u;
    cow_stdcall(g, COW_IMG(0x102bc88eu), 6, edi, 9u, loc_930, loc_92c, loc_928, loc_924);
    t47 = g->ecx;
    ecx = t47;
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
    t51 = cow_thiscall(g, COW_IMG(0x101b5cc0u), self, 0);
    t52 = g->edx;
    if ((uint8_t)t51 == 0u)
    {
        loc_918 = rd32(sp0 - 0x918u);
        loc_91c = rd32(sp0 - 0x91cu);
        loc_920 = rd32(sp0 - 0x920u);
        loc_924 = rd32(sp0 - 0x924u);
        goto L_101b26ea;
    }
    edx = t52;
    COW_AT(101b2465)
    g->eax = rd32(self);
    t53 = rd32(self);
    g->esp = sp0 - 0x924u;
    t54 = cow_thiscall(g, rd32(t53 + 0x40u), self, 0);
    if ((uint8_t)t54 == 0u)
    {
        loc_918 = rd32(sp0 - 0x918u);
        loc_91c = rd32(sp0 - 0x91cu);
        loc_920 = rd32(sp0 - 0x920u);
        loc_924 = rd32(sp0 - 0x924u);
        goto L_101b26ea;
    }
    eax = t54;
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
    cow_thiscall(g, rd32(rd32(self) + 0x28u), self, 8, 4u, 0u, 5u, 0x78u, 0u, 0u, 0u, 0xau);
    g->ebx = rd32(sp0 - 0x918u);
    g->esi = rd32(sp0 - 0x920u);
    g->edi = rd32(sp0 - 0x924u);
    g->ebp = rd32(sp0 - 0x91cu);
    return;
L_101b2498: ;
    COW_AT(101b2498)
    g->eax = arg2;
    g->edx = edx;
    g->esp = sp0 - 0x924u;
    t55 = cow_thiscall(g, COW_IMG(0x101b5c90u), self, 0);
    t56 = g->edx;
    if ((uint8_t)t55 == 0u)
    {
        edx = t56;
        goto L_101b26a8;
    }
    edx = t56;
    COW_AT(101b24a5)
    t57 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x928u, t57);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    g->ecx = t57;
    g->edx = edx;
    t58 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x918u;
    t59 = cow_stdcall(g, COW_IMG(0x101aff50u), 4, t57, rd32(sp0 - 0x924u), rd32(sp0 - 0x920u), rd32(sp0 - 0x91cu));
    t60 = g->ecx;
    t61 = g->edx;
    if (rd32(self + 0xf10cu) == 1u)
    {
        eax = rd32(self + 0xf10cu);
        edx = t61;
        ebx = t59;
        goto L_101b2585;
    }
    eax = rd32(self + 0xf10cu);
    ecx = t60;
    edx = t61;
    ebx = t59;
    COW_AT(101b24c4)
    if (eax == 2u) goto L_101b2585;
    COW_AT(101b24cd)
    wr32(sp0 - 0x91cu, ebx);
    t62 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x920u, t62);
    g->eax = t62;
    g->esp = sp0 - 0x920u;
    t63 = cow_stdcall(g, COW_IMG(0x101aff60u), 0);
    g->edx = rd32(self);
    t64 = rd32(self);
    g->esp = sp0 - 0x918u;
    t65 = cow_thiscall(g, rd32(t64 + 0x68u), self, 2, rd32(sp0 - 0x920u), rd32(sp0 - 0x91cu));
    t66 = g->edx;
    g->edx = t66;
    t67 = cow_call_regs(g, COW_IMG(0x101b6e90u), t65, self, g->edx, 1, 0);
    t68 = g->edx;
    if ((uint8_t)t67 == 0u)
    {
        eax = t67;
        edi = t65;
    }
    else
    {
        edx = t68;
        edi = t65;
    COW_AT(101b24f1)
        g->eax = rd32(self);
        t69 = rd32(self);
        g->esp = sp0 - 0x918u;
        t70 = cow_thiscall(g, rd32(t69 + 0x68u), self, 0);
        wr32(sp0 - 0x91cu, t70);
        g->edx = rd32(self);
        t71 = rd32(self);
        g->esp = sp0 - 0x91cu;
        t72 = cow_thiscall(g, rd32(t71 + 0x64u), self, 0);
        t73 = g->edx;
        wr32(sp0 - 0x920u, t72);
        g->edx = t73;
        g->esp = sp0 - 0x918u;
        cow_thiscall(g, COW_IMG(0x101b6ee0u), self, 2, t72, rd32(sp0 - 0x91cu));
        t74 = g->edx;
        t75 = rd32(self);
        wr8(self + 0xf123u, 0u);
        g->eax = t75;
        g->edx = t74;
        t76 = cow_thiscall(g, rd32(t75 + 0x70u), self, 0);
        t77 = g->edx;
        wr32(sp0 - 0x91cu, 0u);
        wr32(sp0 - 0x920u, 0u);
        wr32(sp0 - 0x924u, COW_IMG(0x10377cbcu));
        g->ebx = ebx;
        t78 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10377cbcu), 0u, 0u);
        eax = t78;
    }
    COW_AT(101b2529)
    t79 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x91cu, t79);
    g->eax = eax;
    g->ecx = rd32(COW_IMG(0x103d3c64u));
    g->edx = t79;
    t80 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x918u;
    t81 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t79);
    t82 = g->ecx;
    t83 = g->edx;
    if ((int32_t)edi <= 0)
    {
        ecx = t82;
        edx = t83;
        ebx = t81;
    COW_AT(101b2547)
        wr8(self + 0xf120u, 0u);
    }
    else
    {
        ecx = t82;
        edx = t83;
        ebx = t81;
    COW_AT(101b253e)
        wr8(self + 0xf120u, 1u);
    }
    COW_AT(101b254e)
    wr32(sp0 - 0x91cu, 0x1c2u);
    wr32(sp0 - 0x920u, self + 0xf12cu);
    wr32(sp0 - 0x924u, 0x10u);
    wr32(sp0 - 0x928u, ebx);
    g->eax = self + 0xf12cu;
    g->esp = sp0 - 0x924u;
    t84 = cow_stdcall(g, COW_IMG(0x102bc888u), 1, ebx);
    wr32(self + 0xf2f0u, t84);
    wr32(sp0 - 0x928u, ebx);
    t85 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x92cu, t85);
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t85, ebx);
    g->ebx = rd32(sp0 - 0x918u);
    g->esi = self + 0xf12cu;
    g->edi = 0x10u;
    g->ebp = 0x1c2u;
    return;
L_101b2585: ;
    COW_AT(101b2585)
    wr32(sp0 - 0x91cu, 0x1c2u);
    wr32(sp0 - 0x920u, sp0 - 0x8c8u);
    wr32(sp0 - 0x924u, 1u);
    wr32(sp0 - 0x928u, ebx);
    g->eax = eax;
    g->ecx = sp0 - 0x8c8u;
    g->edx = edx;
    g->esp = sp0 - 0x928u;
    t86 = cow_stdcall(g, COW_IMG(0x102bc888u), 0);
    t87 = g->ecx;
    t88 = g->edx;
    wr32(sp0 - 0x92cu, 0u);
    wr32(sp0 - 0x930u, ebx);
    wr8(self + 0xf2f4u, 0u);
    g->ecx = t87;
    g->edx = t88;
    g->esp = sp0 - 0x930u;
    t89 = cow_stdcall(g, COW_IMG(0x102bc876u), 0);
    t90 = g->ecx;
    t91 = g->edx;
    if ((int32_t)t86 <= 0)
    {
        eax = t89;
        loc_91c = 0x1c2u;
        loc_920 = sp0 - 0x8c8u;
        loc_924 = 1u;
        loc_92c = 0u;
        goto L_101b268b;
    }
    eax = t89;
    ecx = t90;
    edx = t91;
    ebp = t86;
    COW_AT(101b25b0)
    if ((int32_t)ebp <= 0)
    {
        loc_91c = 0x1c2u;
        loc_924 = 1u;
        loc_92c = 0u;
        goto L_101b25e1;
    }
    edi = 0u;
    loc_91c = 0x1c2u;
    loc_924 = 1u;
    loc_92c = 0u;
L_101b25b6: ;
    COW_AT(101b25b6)
    t92 = (uint32_t)rd8(edi + sp0 - 0x8e0u) << 8u | rd8(edi + sp0 - 0x8dfu);
    wr32(sp0 - 0x934u, t92);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t92;
    g->esp = sp0 - 0x930u;
    t93 = cow_cdecl(g, COW_IMG(0x10315c54u), 1, t92);
    t94 = g->ecx;
    t95 = g->edx;
    if (t93 == 0u)
    {
        eax = t93;
        ecx = t94;
        edx = t95;
    COW_AT(101b25d2)
        eax = eax & 0xffffff00u;
    }
    else
    {
        eax = t93;
        ecx = t94;
        edx = t95;
    COW_AT(101b25cd)
        eax = (eax & 0xffffff00u) | 1u;
        edi = edi + 1u;
    }
    COW_AT(101b25d4)
    if ((int32_t)(edi + 1u) < (int32_t)ebp)
    {
        edi = edi + 1u;
        loc_91c = rd32(sp0 - 0x91cu);
        loc_924 = rd32(sp0 - 0x924u);
        loc_92c = rd32(sp0 - 0x92cu);
        goto L_101b25b6;
    }
    COW_AT(101b25d9)
    if ((uint8_t)eax != 0u)
    {
        loc_91c = rd32(sp0 - 0x91cu);
        loc_920 = sp0 - 0x8c8u;
        loc_924 = rd32(sp0 - 0x924u);
        loc_92c = rd32(sp0 - 0x92cu);
        goto L_101b268b;
    }
    loc_91c = rd32(sp0 - 0x91cu);
    loc_924 = rd32(sp0 - 0x924u);
    loc_92c = rd32(sp0 - 0x92cu);
L_101b25e1: ;
    COW_AT(101b25e1)
    if ((uint32_t)(int8_t)rd8(ebp + sp0 - 0x8e1u) + 0x4fu > 4u)
    {
        eax = (eax & 0xffffff00u) | rd8(ebp + sp0 - 0x8e1u);
        edi = ebp + sp0 - 0x8e1u;
        goto L_101b2612;
    }
    eax = (eax & 0xffffff00u) | rd8(ebp + sp0 - 0x8e1u);
    ecx = (uint32_t)(int8_t)rd8(ebp + sp0 - 0x8e1u) + 0x4fu;
    COW_AT(101b25f4)
    t96 = rd32(COW_IMG(0x101b26f8u) + ecx * 4u);
    switch (t96 - RD)
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
    wr32(sp0 - 0x934u, 0x61u);
    loc_920 = sp0 - 0x8c8u;
    loc_934 = 0x61u;
L_101b2684: ;
    COW_AT(101b2684)
    g->esp = sp0 - 0x930u;
    t105 = cow_call_regs(g, COW_IMG(0x101b6810u), eax, self, g->edx, 0, 1, loc_934);
    eax = t105;
    loc_91c = rd32(sp0 - 0x91cu);
    loc_920 = rd32(sp0 - 0x920u);
    loc_924 = rd32(sp0 - 0x924u);
    loc_92c = rd32(sp0 - 0x92cu);
L_101b268b: ;
    COW_AT(101b268b)
    wr32(sp0 - 0x934u, ebx);
    t106 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x938u, t106);
    g->esp = sp0 - 0x924u;
    cow_stdcall(g, COW_IMG(0x101aff60u), 5, t106, ebx, rd32(sp0 - 0x930u), loc_92c, rd32(sp0 - 0x928u));
    g->ebx = rd32(sp0 - 0x918u);
    g->esi = rd32(sp0 - 0x920u);
    g->edi = rd32(sp0 - 0x924u);
    g->ebp = rd32(sp0 - 0x91cu);
    return;
L_101b2602: ;
    COW_AT(101b2602)
    wr32(sp0 - 0x934u, 0x69u);
    loc_920 = sp0 - 0x8c8u;
    loc_934 = 0x69u;
    goto L_101b2684;
L_101b2606: ;
    COW_AT(101b2606)
    wr32(sp0 - 0x934u, 0x75u);
    loc_920 = sp0 - 0x8c8u;
    loc_934 = 0x75u;
    goto L_101b2684;
L_101b260a: ;
    COW_AT(101b260a)
    wr32(sp0 - 0x934u, 0x65u);
    loc_920 = sp0 - 0x8c8u;
    loc_934 = 0x65u;
    goto L_101b2684;
L_101b260e: ;
    COW_AT(101b260e)
    wr32(sp0 - 0x934u, 0x6fu);
    loc_920 = sp0 - 0x8c8u;
    loc_934 = 0x6fu;
    goto L_101b2684;
L_101b2612: ;
    COW_AT(101b2612)
    wr32(sp0 - 0x934u, ebp);
    t97 = (eax & 0xffff0000u) | (uint16_t)(uint32_t)(int8_t)eax;
    wr32(sp0 - 0x938u, t97);
    g->edx = edx;
    g->esp = sp0 - 0x930u;
    t98 = cow_call_regs(g, COW_IMG(0x101b6d50u), t97, self, g->edx, 0, 2, t97, ebp);
    t99 = g->ecx;
    t100 = g->edx;
    if ((uint8_t)t98 != 1u)
    {
        eax = t98;
        loc_91c = rd32(sp0 - 0x91cu);
        loc_920 = sp0 - 0x8c8u;
        loc_924 = rd32(sp0 - 0x924u);
        loc_92c = rd32(sp0 - 0x92cu);
        goto L_101b268b;
    }
    eax = t98;
    ecx = t99;
    edx = t100;
    COW_AT(101b2623)
    g->edx = edx;
    g->esp = sp0 - 0x930u;
    t101 = cow_call_regs(g, COW_IMG(0x100164b0u), eax, g->ecx, g->edx, 1, 0);
    t102 = g->edx;
    if ((uint8_t)t101 != 1u)
    {
        eax = t101;
        edx = t102;
        goto L_101b2681;
    }
    eax = t101;
    edx = t102;
    COW_AT(101b262c)
    if (rd32(rd32(COW_IMG(0x10456a28u))) == 0x40u) goto L_101b2681;
    COW_AT(101b2637)
    if (rd32(sp0 - 8u) < 0x824fu)
    {
        eax = rd32(sp0 - 8u);
        goto L_101b2650;
    }
    eax = rd32(sp0 - 8u);
    COW_AT(101b2645)
    if (eax > 0x8258u) goto L_101b2650;
    COW_AT(101b264c)
    eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax - 0x1fu);
L_101b2672: ;
    COW_AT(101b2672)
    wr8(sp0 - 0x920u, (uint8_t)eax);
    if ((uint8_t)eax == 0u)
    {
        loc_91c = rd32(sp0 - 0x91cu);
        loc_920 = rd32(sp0 - 0x920u);
        loc_924 = rd32(sp0 - 0x924u);
        loc_92c = rd32(sp0 - 0x92cu);
        goto L_101b268b;
    }
    COW_AT(101b267a)
    t103 = rd32(sp0 - 0x920u);
    wr32(sp0 - 0x934u, t103);
    edx = t103;
    loc_91c = rd32(sp0 - 0x91cu);
    loc_920 = rd32(sp0 - 0x920u);
    loc_924 = rd32(sp0 - 0x924u);
    loc_92c = rd32(sp0 - 0x92cu);
    loc_934 = t103;
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
    if (eax < 0x8281u)
    {
        loc_91c = rd32(sp0 - 0x91cu);
        loc_920 = sp0 - 0x8c8u;
        loc_924 = rd32(sp0 - 0x924u);
        loc_92c = rd32(sp0 - 0x92cu);
        goto L_101b268b;
    }
    COW_AT(101b2669)
    if (eax > 0x8290u)
    {
        loc_91c = rd32(sp0 - 0x91cu);
        loc_920 = sp0 - 0x8c8u;
        loc_924 = rd32(sp0 - 0x924u);
        loc_92c = rd32(sp0 - 0x92cu);
        goto L_101b268b;
    }
    COW_AT(101b2670)
    eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax - 0x20u);
    goto L_101b2672;
L_101b2681: ;
    COW_AT(101b2681)
    t104 = (eax & 0xffffff00u) | rd8(edi);
    wr32(sp0 - 0x934u, t104);
    eax = t104;
    loc_91c = rd32(sp0 - 0x91cu);
    loc_920 = sp0 - 0x8c8u;
    loc_924 = rd32(sp0 - 0x924u);
    loc_92c = rd32(sp0 - 0x92cu);
    loc_934 = t104;
    goto L_101b2684;
L_101b26a8: ;
    COW_AT(101b26a8)
    wr32(sp0 - 0x928u, 0u);
    g->eax = rd32(self);
    t107 = rd32(self);
    g->esp = sp0 - 0x928u;
    t108 = cow_thiscall(g, rd32(t107 + 0x60u), self, 0);
    t109 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x92cu, t109);
    g->ecx = rd32(COW_IMG(0x103d3c64u));
    g->edx = t109;
    t110 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x91cu;
    t111 = cow_stdcall(g, COW_IMG(0x101aff50u), 4, t109, 0u, rd32(sp0 - 0x924u), rd32(sp0 - 0x920u));
    t112 = g->ecx;
    t113 = g->edx;
    wr32(sp0 - 0x920u, t111);
    g->ecx = t112;
    g->edx = t113;
    t114 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, t111);
    t115 = g->ecx;
    t116 = g->edx;
    if (t114 == 0u)
    {
        edx = t116;
        edi = t111;
    }
    else
    {
        eax = t114;
        ecx = t115;
        edx = t116;
        edi = t111;
    COW_AT(101b26cc)
        wr32(sp0 - 0x920u, 0u);
        wr32(sp0 - 0x924u, edi);
        wr8(self + 0xf121u, 1u);
        g->edx = edx;
        g->esp = sp0 - 0x91cu;
        cow_stdcall(g, COW_IMG(0x102bc876u), 2, edi, 0u);
        t117 = g->edx;
        edx = t117;
    }
    COW_AT(101b26db)
    wr32(sp0 - 0x920u, edi);
    t118 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x924u, t118);
    g->esp = sp0 - 0x924u;
    cow_stdcall(g, COW_IMG(0x101aff60u), 0);
    loc_918 = rd32(sp0 - 0x918u);
    loc_91c = rd32(sp0 - 0x91cu);
    loc_920 = rd32(sp0 - 0x920u);
    loc_924 = rd32(sp0 - 0x924u);
L_101b26ea: ;
    COW_AT(101b26ea)
    g->ebx = loc_918;
    g->esi = loc_920;
    g->edi = loc_924;
    g->ebp = loc_91c;
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
    case 0x101b2100u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x924u);
        in_esi = rd32(sp0 - 0x920u);
        in_ebp = rd32(sp0 - 0x91cu);
        in_ebx = rd32(sp0 - 0x918u);
        g->esp = sp0 - 0x924u;
        (void)sp0;
        return 1;
    }
    case 0x101b2112u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x924u);
        in_esi = rd32(sp0 - 0x920u);
        in_ebp = rd32(sp0 - 0x91cu);
        in_ebx = rd32(sp0 - 0x918u);
        g->esp = sp0 - 0x924u;
        g->eax = arg2;
        g->esi = self;
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
    case 0x101b216eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_904;
        uint32_t loc_918;
        uint32_t loc_928;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_928 = rd32(sp0 - 0x928u);
        loc_918 = rd32(sp0 - 0x918u);
        loc_904 = rd32(sp0 - 0x904u);
        g->esp = sp0 - 0x914u;
        wr32(sp0 - 0x92cu, sp0 - 0x8d4u);
        wr32(sp0 - 0x900u, sp0 - 0x8c4u);
        (void)sp0;
        return 1;
    }
    case 0x101b2191u:
    {
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x914u;
        g->eax = sp0 - 0x8c4u;
        wr32(sp0 - 0x92cu, sp0 - 0x8d4u);
        wr32(sp0 - 0x918u, sp0 - 0x900u);
        wr32(sp0 - 0x900u, sp0 - 0x8c4u);
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
        uint32_t loc_904;
        uint32_t loc_918;
        uint32_t loc_928;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_928 = rd32(sp0 - 0x928u);
        loc_918 = rd32(sp0 - 0x918u);
        loc_904 = rd32(sp0 - 0x904u);
        g->esp = sp0 - 0x914u;
        wr32(sp0 - 0x92cu, sp0 - 0x8d4u);
        wr32(sp0 - 0x900u, sp0 - 0x8c4u);
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
        uint32_t loc_908;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_908 = rd32(sp0 - 0x908u);
        g->esp = sp0 - 0x920u;
        wr32(sp0 - 0x92cu, sp0 - 0x8d4u);
        wr32(sp0 - 0x928u, sp0 - 0x1c0u);
        wr32(sp0 - 0x918u, 0x200u);
        wr32(sp0 - 0x914u, sp0 - 0x534u);
        wr32(sp0 - 0x904u, sp0 - 0x6e8u);
        wr32(sp0 - 0x900u, 0x1c2u);
        wr32(sp0 - 0x8fcu, 0x1c2u);
        wr32(sp0 - 0x8f4u, sp0 - 0x89cu);
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
        g->esp = sp0 - 0x920u;
        wr32(sp0 - 0x92cu, sp0 - 0x8d4u);
        wr32(sp0 - 0x928u, sp0 - 0x1c0u);
        wr32(sp0 - 0x914u, sp0 - 0x534u);
        wr32(sp0 - 0x904u, sp0 - 0x6e8u);
        wr32(sp0 - 0x8f4u, sp0 - 0x89cu);
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
        g->esp = sp0 - 0x920u;
        wr32(sp0 - 0x92cu, sp0 - 0x8d4u);
        wr32(sp0 - 0x928u, sp0 - 0x1c0u);
        wr32(sp0 - 0x914u, sp0 - 0x534u);
        wr32(sp0 - 0x904u, sp0 - 0x6e8u);
        wr32(sp0 - 0x8f4u, sp0 - 0x89cu);
        (void)sp0;
        return 1;
    }
    case 0x101b22c2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x920u;
        g->ecx = ((sp0 - 0x6e8u) >> 4u & 0xffffff00u) | (~(uint8_t)((sp0 - 0x6e8u) >> 4u) & 1u);
        wr32(sp0 - 0x92cu, sp0 - 0x8d4u);
        wr32(sp0 - 0x928u, sp0 - 0x1c0u);
        wr32(sp0 - 0x914u, sp0 - 0x534u);
        wr32(sp0 - 0x904u, sp0 - 0x6e8u);
        wr32(sp0 - 0x8f4u, sp0 - 0x89cu);
        (void)sp0;
        return 1;
    }
    case 0x101b22dfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x920u;
        g->ecx = ((sp0 - 0x6e8u) >> 4u & 0xffffff00u) | (~(uint8_t)((sp0 - 0x6e8u) >> 4u) & 1u);
        wr32(sp0 - 0x92cu, sp0 - 0x8d4u);
        wr32(sp0 - 0x928u, sp0 - 0x1c0u);
        wr32(sp0 - 0x914u, sp0 - 0x534u);
        wr32(sp0 - 0x904u, sp0 - 0x6e8u);
        wr32(sp0 - 0x8f4u, sp0 - 0x89cu);
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
        g->esp = sp0 - 0x920u;
        wr32(sp0 - 0x92cu, sp0 - 0x8d4u);
        wr32(sp0 - 0x928u, sp0 - 0x1c0u);
        wr32(sp0 - 0x914u, sp0 - 0x534u);
        wr32(sp0 - 0x904u, sp0 - 0x6e8u);
        wr32(sp0 - 0x8f4u, sp0 - 0x89cu);
        (void)sp0;
        return 1;
    }
    case 0x101b22f3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x920u;
        g->ecx = ((sp0 - 0x6e8u) >> 4u & 0xffffff00u) | (~(uint8_t)((sp0 - 0x6e8u) >> 4u) & 1u);
        wr32(sp0 - 0x92cu, sp0 - 0x8d4u);
        wr32(sp0 - 0x928u, sp0 - 0x1c0u);
        wr32(sp0 - 0x914u, sp0 - 0x534u);
        wr32(sp0 - 0x904u, sp0 - 0x6e8u);
        wr32(sp0 - 0x8f4u, sp0 - 0x89cu);
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
        g->esp = sp0 - 0x920u;
        wr32(sp0 - 0x92cu, sp0 - 0x8d4u);
        wr32(sp0 - 0x928u, sp0 - 0x1c0u);
        wr32(sp0 - 0x914u, sp0 - 0x534u);
        wr32(sp0 - 0x904u, sp0 - 0x6e8u);
        wr32(sp0 - 0x8f4u, sp0 - 0x89cu);
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
        uint32_t loc_924;
        uint32_t loc_928;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_928 = rd32(sp0 - 0x928u);
        loc_924 = rd32(sp0 - 0x924u);
        g->esp = sp0 - 0x920u;
        wr32(sp0 - 0x92cu, sp0 - 0x8d4u);
        wr32(sp0 - 0x914u, sp0 - 0x534u);
        wr32(sp0 - 0x904u, sp0 - 0x6e8u);
        wr32(sp0 - 0x8f4u, sp0 - 0x89cu);
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
        uint32_t loc_924;
        uint32_t loc_928;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_928 = rd32(sp0 - 0x928u);
        loc_924 = rd32(sp0 - 0x924u);
        g->esp = sp0 - 0x920u;
        wr32(sp0 - 0x92cu, sp0 - 0x8d4u);
        wr32(sp0 - 0x914u, sp0 - 0x534u);
        wr32(sp0 - 0x904u, sp0 - 0x6e8u);
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
        uint32_t loc_924;
        uint32_t loc_928;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_928 = rd32(sp0 - 0x928u);
        loc_924 = rd32(sp0 - 0x924u);
        g->esp = sp0 - 0x920u;
        wr32(sp0 - 0x92cu, sp0 - 0x8d4u);
        wr32(sp0 - 0x914u, sp0 - 0x534u);
        wr32(sp0 - 0x904u, sp0 - 0x6e8u);
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
        uint32_t loc_924;
        uint32_t loc_928;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_928 = rd32(sp0 - 0x928u);
        loc_924 = rd32(sp0 - 0x924u);
        g->esp = sp0 - 0x920u;
        wr32(sp0 - 0x92cu, sp0 - 0x8d4u);
        wr32(sp0 - 0x914u, sp0 - 0x534u);
        wr32(sp0 - 0x904u, sp0 - 0x6e8u);
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
        uint32_t loc_924;
        uint32_t loc_928;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_928 = rd32(sp0 - 0x928u);
        loc_924 = rd32(sp0 - 0x924u);
        g->esp = sp0 - 0x920u;
        wr32(sp0 - 0x92cu, sp0 - 0x8d4u);
        wr32(sp0 - 0x914u, sp0 - 0x534u);
        wr32(sp0 - 0x904u, sp0 - 0x6e8u);
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
        uint32_t loc_924;
        uint32_t loc_928;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_928 = rd32(sp0 - 0x928u);
        loc_924 = rd32(sp0 - 0x924u);
        g->esp = sp0 - 0x920u;
        wr32(sp0 - 0x92cu, sp0 - 0x8d4u);
        wr32(sp0 - 0x914u, sp0 - 0x534u);
        wr32(sp0 - 0x904u, sp0 - 0x6e8u);
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
        uint32_t loc_928;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_928 = rd32(sp0 - 0x928u);
        g->esp = sp0 - 0x920u;
        wr32(sp0 - 0x92cu, sp0 - 0x8d4u);
        wr32(sp0 - 0x914u, sp0 - 0x534u);
        wr32(sp0 - 0x904u, sp0 - 0x6e8u);
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
        g->esp = sp0 - 0x920u;
        wr32(sp0 - 0x92cu, sp0 - 0x8d4u);
        wr32(sp0 - 0x928u, sp0 - 0x1c0u);
        wr32(sp0 - 0x914u, sp0 - 0x534u);
        wr32(sp0 - 0x904u, sp0 - 0x6e8u);
        wr32(sp0 - 0x8f4u, sp0 - 0x89cu);
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
        uint32_t loc_900;
        uint32_t loc_908;
        uint32_t loc_918;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_918 = rd32(sp0 - 0x918u);
        loc_908 = rd32(sp0 - 0x908u);
        loc_900 = rd32(sp0 - 0x900u);
        g->esp = sp0 - 0x920u;
        wr32(sp0 - 0x92cu, sp0 - 0x8d4u);
        wr32(sp0 - 0x928u, sp0 - 0x1c0u);
        wr32(sp0 - 0x914u, sp0 - 0x534u);
        wr32(sp0 - 0x904u, sp0 - 0x6e8u);
        wr32(sp0 - 0x8f4u, sp0 - 0x89cu);
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
        uint32_t loc_900;
        uint32_t loc_908;
        uint32_t loc_918;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_918 = rd32(sp0 - 0x918u);
        loc_908 = rd32(sp0 - 0x908u);
        loc_900 = rd32(sp0 - 0x900u);
        g->esp = sp0 - 0x920u;
        wr32(sp0 - 0x92cu, sp0 - 0x8d4u);
        wr32(sp0 - 0x928u, sp0 - 0x1c0u);
        wr32(sp0 - 0x914u, sp0 - 0x534u);
        wr32(sp0 - 0x904u, sp0 - 0x6e8u);
        wr32(sp0 - 0x8f4u, sp0 - 0x89cu);
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
        uint32_t loc_900;
        uint32_t loc_908;
        uint32_t loc_918;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_918 = rd32(sp0 - 0x918u);
        loc_908 = rd32(sp0 - 0x908u);
        loc_900 = rd32(sp0 - 0x900u);
        g->esp = sp0 - 0x920u;
        wr32(sp0 - 0x92cu, sp0 - 0x8d4u);
        wr32(sp0 - 0x928u, sp0 - 0x1c0u);
        wr32(sp0 - 0x914u, sp0 - 0x534u);
        wr32(sp0 - 0x904u, sp0 - 0x6e8u);
        wr32(sp0 - 0x8f4u, sp0 - 0x89cu);
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
        uint32_t loc_900;
        uint32_t loc_908;
        uint32_t loc_918;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_918 = rd32(sp0 - 0x918u);
        loc_908 = rd32(sp0 - 0x908u);
        loc_900 = rd32(sp0 - 0x900u);
        g->esp = sp0 - 0x920u;
        wr32(sp0 - 0x92cu, sp0 - 0x8d4u);
        wr32(sp0 - 0x928u, sp0 - 0x1c0u);
        wr32(sp0 - 0x914u, sp0 - 0x534u);
        wr32(sp0 - 0x904u, sp0 - 0x6e8u);
        wr32(sp0 - 0x8f4u, sp0 - 0x89cu);
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
        uint32_t loc_900;
        uint32_t loc_908;
        uint32_t loc_918;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_918 = rd32(sp0 - 0x918u);
        loc_908 = rd32(sp0 - 0x908u);
        loc_900 = rd32(sp0 - 0x900u);
        g->esp = sp0 - 0x920u;
        wr32(sp0 - 0x92cu, sp0 - 0x8d4u);
        wr32(sp0 - 0x928u, sp0 - 0x1c0u);
        wr32(sp0 - 0x914u, sp0 - 0x534u);
        wr32(sp0 - 0x904u, sp0 - 0x6e8u);
        wr32(sp0 - 0x8f4u, sp0 - 0x89cu);
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
        uint32_t loc_900;
        uint32_t loc_908;
        uint32_t loc_918;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_918 = rd32(sp0 - 0x918u);
        loc_908 = rd32(sp0 - 0x908u);
        loc_900 = rd32(sp0 - 0x900u);
        g->esp = sp0 - 0x920u;
        wr32(sp0 - 0x92cu, sp0 - 0x8d4u);
        wr32(sp0 - 0x928u, sp0 - 0x1c0u);
        wr32(sp0 - 0x914u, sp0 - 0x534u);
        wr32(sp0 - 0x904u, sp0 - 0x6e8u);
        wr32(sp0 - 0x8f4u, sp0 - 0x89cu);
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
        uint32_t loc_900;
        uint32_t loc_908;
        uint32_t loc_918;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_918 = rd32(sp0 - 0x918u);
        loc_908 = rd32(sp0 - 0x908u);
        loc_900 = rd32(sp0 - 0x900u);
        g->esp = sp0 - 0x920u;
        wr32(sp0 - 0x92cu, sp0 - 0x8d4u);
        wr32(sp0 - 0x928u, sp0 - 0x1c0u);
        wr32(sp0 - 0x914u, sp0 - 0x534u);
        wr32(sp0 - 0x904u, sp0 - 0x6e8u);
        wr32(sp0 - 0x8f4u, sp0 - 0x89cu);
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
        uint32_t loc_900;
        uint32_t loc_908;
        uint32_t loc_918;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_918 = rd32(sp0 - 0x918u);
        loc_908 = rd32(sp0 - 0x908u);
        loc_900 = rd32(sp0 - 0x900u);
        g->esp = sp0 - 0x920u;
        wr32(sp0 - 0x92cu, sp0 - 0x8d4u);
        wr32(sp0 - 0x928u, sp0 - 0x1c0u);
        wr32(sp0 - 0x914u, sp0 - 0x534u);
        wr32(sp0 - 0x904u, sp0 - 0x6e8u);
        wr32(sp0 - 0x8f4u, sp0 - 0x89cu);
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
        uint32_t loc_900;
        uint32_t loc_908;
        uint32_t loc_918;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_918 = rd32(sp0 - 0x918u);
        loc_908 = rd32(sp0 - 0x908u);
        loc_900 = rd32(sp0 - 0x900u);
        g->esp = sp0 - 0x920u;
        wr32(sp0 - 0x92cu, sp0 - 0x8d4u);
        wr32(sp0 - 0x928u, sp0 - 0x1c0u);
        wr32(sp0 - 0x914u, sp0 - 0x534u);
        wr32(sp0 - 0x904u, sp0 - 0x6e8u);
        wr32(sp0 - 0x8f4u, sp0 - 0x89cu);
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
        uint32_t loc_900;
        uint32_t loc_908;
        uint32_t loc_918;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_918 = rd32(sp0 - 0x918u);
        loc_908 = rd32(sp0 - 0x908u);
        loc_900 = rd32(sp0 - 0x900u);
        g->esp = sp0 - 0x920u;
        wr32(sp0 - 0x92cu, sp0 - 0x8d4u);
        wr32(sp0 - 0x928u, sp0 - 0x1c0u);
        wr32(sp0 - 0x914u, sp0 - 0x534u);
        wr32(sp0 - 0x904u, sp0 - 0x6e8u);
        wr32(sp0 - 0x8f4u, sp0 - 0x89cu);
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
        uint32_t loc_900;
        uint32_t loc_908;
        uint32_t loc_918;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_918 = rd32(sp0 - 0x918u);
        loc_908 = rd32(sp0 - 0x908u);
        loc_900 = rd32(sp0 - 0x900u);
        g->esp = sp0 - 0x920u;
        wr32(sp0 - 0x92cu, sp0 - 0x8d4u);
        wr32(sp0 - 0x928u, sp0 - 0x1c0u);
        wr32(sp0 - 0x914u, sp0 - 0x534u);
        wr32(sp0 - 0x904u, sp0 - 0x6e8u);
        wr32(sp0 - 0x8f4u, sp0 - 0x89cu);
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
        uint32_t loc_900;
        uint32_t loc_908;
        uint32_t loc_918;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_918 = rd32(sp0 - 0x918u);
        loc_908 = rd32(sp0 - 0x908u);
        loc_900 = rd32(sp0 - 0x900u);
        g->esp = sp0 - 0x920u;
        wr32(sp0 - 0x92cu, sp0 - 0x8d4u);
        wr32(sp0 - 0x928u, sp0 - 0x1c0u);
        wr32(sp0 - 0x914u, sp0 - 0x534u);
        wr32(sp0 - 0x904u, sp0 - 0x6e8u);
        wr32(sp0 - 0x8f4u, sp0 - 0x89cu);
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
        uint32_t loc_900;
        uint32_t loc_908;
        uint32_t loc_918;
        uint32_t loc_924;
        uint32_t loc_928;
        uint32_t loc_92c;
        uint32_t loc_930;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_930 = rd32(sp0 - 0x930u);
        loc_92c = rd32(sp0 - 0x92cu);
        loc_928 = rd32(sp0 - 0x928u);
        loc_924 = rd32(sp0 - 0x924u);
        loc_918 = rd32(sp0 - 0x918u);
        loc_908 = rd32(sp0 - 0x908u);
        loc_900 = rd32(sp0 - 0x900u);
        g->esp = sp0 - 0x930u;
        wr32(sp0 - 0x914u, sp0 - 0x534u);
        wr32(sp0 - 0x904u, sp0 - 0x6e8u);
        wr32(sp0 - 0x8f4u, sp0 - 0x89cu);
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
        uint32_t loc_928;
        uint32_t loc_92c;
        uint32_t loc_934;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_934 = rd32(sp0 - 0x934u);
        loc_92c = rd32(sp0 - 0x92cu);
        loc_928 = rd32(sp0 - 0x928u);
        g->esp = sp0 - 0x920u;
        wr32(sp0 - 0x914u, sp0 - 0x534u);
        wr32(sp0 - 0x904u, sp0 - 0x6e8u);
        (void)sp0;
        return 1;
    }
    case 0x101b2442u:
    {
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x924u;
        g->eax = sp0 - 0x534u;
        wr32(sp0 - 0x928u, sp0 - 0x6e8u);
        wr32(sp0 - 0x914u, sp0 - 0x534u);
        wr32(sp0 - 0x904u, sp0 - 0x6e8u);
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
    case 0x101b2498u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x924u);
        in_esi = rd32(sp0 - 0x920u);
        in_ebp = rd32(sp0 - 0x91cu);
        in_ebx = rd32(sp0 - 0x918u);
        g->esp = sp0 - 0x924u;
        g->eax = arg2;
        g->esi = self;
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
        g->esp = sp0 - 0x918u;
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
        g->esp = sp0 - 0x918u;
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
        g->esp = sp0 - 0x918u;
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
        uint32_t loc_91c;
        uint32_t loc_920;
        uint32_t loc_924;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_924 = rd32(sp0 - 0x924u);
        loc_920 = rd32(sp0 - 0x920u);
        loc_91c = rd32(sp0 - 0x91cu);
        g->esp = sp0 - 0x918u;
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
        g->esp = sp0 - 0x918u;
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
        g->esp = sp0 - 0x918u;
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
        g->esp = sp0 - 0x918u;
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
        g->esp = sp0 - 0x918u;
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
        g->esp = sp0 - 0x930u;
        wr32(sp0 - 0x92cu, 0u);
        wr32(sp0 - 0x924u, 1u);
        wr32(sp0 - 0x920u, sp0 - 0x8c8u);
        wr32(sp0 - 0x91cu, 0x1c2u);
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
        uint32_t loc_91c;
        uint32_t loc_924;
        uint32_t loc_92c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_92c = rd32(sp0 - 0x92cu);
        loc_924 = rd32(sp0 - 0x924u);
        loc_91c = rd32(sp0 - 0x91cu);
        g->esp = sp0 - 0x930u;
        wr32(sp0 - 0x920u, sp0 - 0x8c8u);
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
        g->esp = sp0 - 0x930u;
        wr32(sp0 - 0x920u, sp0 - 0x8c8u);
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
        g->esp = sp0 - 0x930u;
        wr32(sp0 - 0x920u, sp0 - 0x8c8u);
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
        g->esp = sp0 - 0x930u;
        wr32(sp0 - 0x920u, sp0 - 0x8c8u);
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
        g->esp = sp0 - 0x930u;
        wr32(sp0 - 0x920u, sp0 - 0x8c8u);
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
        uint32_t loc_91c;
        uint32_t loc_924;
        uint32_t loc_92c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_92c = rd32(sp0 - 0x92cu);
        loc_924 = rd32(sp0 - 0x924u);
        loc_91c = rd32(sp0 - 0x91cu);
        g->esp = sp0 - 0x930u;
        wr32(sp0 - 0x920u, sp0 - 0x8c8u);
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
        uint32_t loc_91c;
        uint32_t loc_924;
        uint32_t loc_92c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_92c = rd32(sp0 - 0x92cu);
        loc_924 = rd32(sp0 - 0x924u);
        loc_91c = rd32(sp0 - 0x91cu);
        g->esp = sp0 - 0x930u;
        wr32(sp0 - 0x920u, sp0 - 0x8c8u);
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
        uint32_t loc_91c;
        uint32_t loc_924;
        uint32_t loc_92c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_92c = rd32(sp0 - 0x92cu);
        loc_924 = rd32(sp0 - 0x924u);
        loc_91c = rd32(sp0 - 0x91cu);
        g->esp = sp0 - 0x930u;
        wr32(sp0 - 0x920u, sp0 - 0x8c8u);
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
        uint32_t loc_91c;
        uint32_t loc_924;
        uint32_t loc_92c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_92c = rd32(sp0 - 0x92cu);
        loc_924 = rd32(sp0 - 0x924u);
        loc_91c = rd32(sp0 - 0x91cu);
        g->esp = sp0 - 0x930u;
        wr32(sp0 - 0x920u, sp0 - 0x8c8u);
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
        uint32_t loc_91c;
        uint32_t loc_924;
        uint32_t loc_92c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_92c = rd32(sp0 - 0x92cu);
        loc_924 = rd32(sp0 - 0x924u);
        loc_91c = rd32(sp0 - 0x91cu);
        g->esp = sp0 - 0x930u;
        wr32(sp0 - 0x920u, sp0 - 0x8c8u);
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
        uint32_t loc_91c;
        uint32_t loc_924;
        uint32_t loc_92c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_92c = rd32(sp0 - 0x92cu);
        loc_924 = rd32(sp0 - 0x924u);
        loc_91c = rd32(sp0 - 0x91cu);
        g->esp = sp0 - 0x930u;
        wr32(sp0 - 0x920u, sp0 - 0x8c8u);
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
        uint32_t loc_91c;
        uint32_t loc_924;
        uint32_t loc_92c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_92c = rd32(sp0 - 0x92cu);
        loc_924 = rd32(sp0 - 0x924u);
        loc_91c = rd32(sp0 - 0x91cu);
        g->esp = sp0 - 0x930u;
        wr32(sp0 - 0x920u, sp0 - 0x8c8u);
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
        uint32_t loc_91c;
        uint32_t loc_924;
        uint32_t loc_92c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_92c = rd32(sp0 - 0x92cu);
        loc_924 = rd32(sp0 - 0x924u);
        loc_91c = rd32(sp0 - 0x91cu);
        g->esp = sp0 - 0x930u;
        wr32(sp0 - 0x920u, sp0 - 0x8c8u);
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
        g->esp = sp0 - 0x930u;
        wr32(sp0 - 0x920u, sp0 - 0x8c8u);
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
        g->esp = sp0 - 0x930u;
        wr32(sp0 - 0x920u, sp0 - 0x8c8u);
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
        g->esp = sp0 - 0x930u;
        wr32(sp0 - 0x920u, sp0 - 0x8c8u);
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
        g->esp = sp0 - 0x930u;
        wr32(sp0 - 0x920u, sp0 - 0x8c8u);
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
        g->esp = sp0 - 0x930u;
        wr32(sp0 - 0x920u, sp0 - 0x8c8u);
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
        g->esp = sp0 - 0x930u;
        wr32(sp0 - 0x920u, sp0 - 0x8c8u);
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
        g->esp = sp0 - 0x930u;
        wr32(sp0 - 0x920u, sp0 - 0x8c8u);
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
        g->esp = sp0 - 0x930u;
        wr32(sp0 - 0x920u, sp0 - 0x8c8u);
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
        g->esp = sp0 - 0x930u;
        wr32(sp0 - 0x920u, sp0 - 0x8c8u);
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
        g->esp = sp0 - 0x930u;
        wr32(sp0 - 0x920u, sp0 - 0x8c8u);
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
        g->esp = sp0 - 0x930u;
        wr32(sp0 - 0x920u, sp0 - 0x8c8u);
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
        g->esp = sp0 - 0x930u;
        wr32(sp0 - 0x920u, sp0 - 0x8c8u);
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
        g->esp = sp0 - 0x930u;
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
        g->esp = sp0 - 0x930u;
        wr32(sp0 - 0x920u, sp0 - 0x8c8u);
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
        uint32_t loc_91c;
        uint32_t loc_920;
        uint32_t loc_924;
        uint32_t loc_92c;
        uint32_t loc_934;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_934 = rd32(sp0 - 0x934u);
        loc_92c = rd32(sp0 - 0x92cu);
        loc_924 = rd32(sp0 - 0x924u);
        loc_920 = rd32(sp0 - 0x920u);
        loc_91c = rd32(sp0 - 0x91cu);
        g->esp = sp0 - 0x934u;
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
        uint32_t loc_91c;
        uint32_t loc_920;
        uint32_t loc_924;
        uint32_t loc_92c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_92c = rd32(sp0 - 0x92cu);
        loc_924 = rd32(sp0 - 0x924u);
        loc_920 = rd32(sp0 - 0x920u);
        loc_91c = rd32(sp0 - 0x91cu);
        g->esp = sp0 - 0x930u;
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
    case 0x101b26ccu:
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
        g->esp = sp0 - 0x91cu;
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
        uint32_t loc_920;
        uint32_t loc_928;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_928 = rd32(sp0 - 0x928u);
        loc_920 = rd32(sp0 - 0x920u);
        g->esp = sp0 - 0x91cu;
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
        uint32_t loc_904;
        uint32_t loc_918;
        uint32_t loc_91c;
        uint32_t loc_920;
        uint32_t loc_924;
        uint32_t loc_928;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_928 = rd32(sp0 - 0x928u);
        loc_924 = rd32(sp0 - 0x924u);
        loc_920 = rd32(sp0 - 0x920u);
        loc_91c = rd32(sp0 - 0x91cu);
        loc_918 = rd32(sp0 - 0x918u);
        loc_904 = rd32(sp0 - 0x904u);
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
