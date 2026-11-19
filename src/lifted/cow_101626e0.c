/* f_0x101626e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101626e0(Guest* g)
{
    double d46;
    double d54;
    double d61;
    double d65;
    double d68;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_28;
    uint32_t loc_2c;
    int64_t q117;
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
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t66;
    uint32_t t67;
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
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 84u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101626f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = g->edi; zf = g->zf; in_esi = rd32(sp0 - 0x2cu); in_ebp = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x2cu); goto E_101626f7;
    case 0x10162702u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = g->edi; zf = g->zf; goto E_10162702;
    case 0x10162709u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = g->edi; zf = g->zf; goto E_10162709;
    case 0x1016271du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1016271d;
    case 0x1016272au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1016272a;
    case 0x10162739u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162739;
    case 0x1016273bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1016273b;
    case 0x1016275bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_1016275b;
    case 0x10162773u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162773;
    case 0x1016277eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1016277e;
    case 0x10162782u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_1c = rd32(sp0 - 0x1cu); goto E_10162782;
    case 0x10162786u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_1c = rd32(sp0 - 0x1cu); goto E_10162786;
    case 0x1016278au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_1016278a;
    case 0x10162793u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_10162793;
    case 0x101627a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101627a6;
    case 0x101627adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101627ad;
    case 0x101627b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101627b4;
    case 0x101627bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101627bb;
    case 0x101627c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101627c2;
    case 0x101627cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101627cb;
    case 0x101627d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101627d0;
    case 0x101627dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101627db;
    case 0x101627e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101627e5;
    case 0x101627e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101627e9;
    case 0x101627efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101627ef;
    case 0x101627f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101627f6;
    case 0x10162800u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162800;
    case 0x10162804u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162804;
    case 0x1016280au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1016280a;
    case 0x1016280fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1016280f;
    case 0x10162822u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162822;
    case 0x10162833u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162833;
    case 0x10162838u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162838;
    case 0x1016283fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1016283f;
    case 0x10162846u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162846;
    case 0x1016284du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1016284d;
    case 0x10162854u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162854;
    case 0x1016285bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1016285b;
    case 0x10162864u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162864;
    case 0x1016286fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1016286f;
    case 0x10162879u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162879;
    case 0x1016287du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1016287d;
    case 0x10162883u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162883;
    case 0x1016288au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1016288a;
    case 0x10162894u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162894;
    case 0x10162898u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162898;
    case 0x1016289cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1016289c;
    case 0x1016289eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1016289e;
    case 0x101628acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101628ac;
    case 0x101628b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101628b3;
    case 0x101628bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101628bf;
    case 0x101628cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101628cd;
    case 0x101628ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101628dd;
    case 0x101628e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101628e5;
    case 0x1016290bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1016290b;
    case 0x1016290eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1016290e;
    case 0x10162913u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162913;
    case 0x10162938u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162938;
    case 0x1016293bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1016293b;
    case 0x10162940u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162940;
    case 0x10162943u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162943;
    case 0x1016294eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1016294e;
    case 0x1016297eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1016297e;
    case 0x10162981u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162981;
    case 0x10162997u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162997;
    case 0x101629a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101629a1;
    case 0x101629acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101629ac;
    case 0x101629bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101629bb;
    case 0x101629c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101629c2;
    case 0x101629ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101629cc;
    case 0x101629d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101629d0;
    case 0x10162a2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162a2f;
    case 0x10162a5bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162a5b;
    case 0x10162a69u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_10 = rd32(sp0 - 0x10u); goto E_10162a69;
    case 0x10162a7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162a7b;
    case 0x10162a7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162a7f;
    case 0x10162a87u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162a87;
    case 0x10162a99u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162a99;
    case 0x10162abcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162abc;
    case 0x10162ae1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162ae1;
    case 0x10162af0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162af0;
    case 0x10162af7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162af7;
    case 0x10162b04u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162b04;
    case 0x10162b0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162b0e;
    case 0x10162b17u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162b17;
    case 0x10162b24u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162b24;
    case 0x10162b28u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162b28;
    case 0x10162b32u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162b32;
    case 0x10162b3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162b3b;
    case 0x10162b48u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162b48;
    case 0x10162b51u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162b51;
    case 0x10162b53u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162b53;
    case 0x10162b59u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162b59;
    case 0x10162b5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162b5e;
    case 0x10162b83u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162b83;
    case 0x10162ba5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162ba5;
    case 0x10162bb2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162bb2;
    case 0x10162bbeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162bbe;
    case 0x10162bd1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162bd1;
    case 0x10162be0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162be0;
    case 0x10162bf5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162bf5;
    case 0x10162c01u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162c01;
    case 0x10162c13u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162c13;
    case 0x10162c2du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162c2d;
    case 0x10162c36u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162c36;
    case 0x10162c3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162c3c;
    case 0x10162c50u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162c50;
    case 0x10162c56u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162c56;
    case 0x10162c5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162c5f;
    case 0x10162c68u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162c68;
    case 0x10162c72u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162c72;
    case 0x10162c80u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; goto E_10162c80;
    case 0x10162c8au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; zf = g->zf; goto E_10162c8a;
    case 0x10162c8fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; zf = g->zf; goto E_10162c8f;
    case 0x10162c93u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; zf = g->zf; goto E_10162c93;
    case 0x10162ca2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; zf = g->zf; goto E_10162ca2;
    case 0x10162ca7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; zf = g->zf; goto E_10162ca7;
    case 0x10162cacu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; zf = g->zf; goto E_10162cac;
    case 0x10162cb3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_10162cb3;
    default: break;
    }
#endif

    COW_AT(101626e0)
    wr32(sp0 - 0x28u, in_ebp);
    wr32(sp0 - 0x2cu, in_esi);
    if (rd8(rd32(COW_IMG(0x104568fcu)) + 8u) == 0u)
    {
        ebx = in_ebx;
        edi = in_edi;
        loc_28 = in_ebp;
        loc_2c = in_esi;
        goto L_10162cb3;
    }
    eax = rd32(COW_IMG(0x104568fcu));
    COW_AT(101626f7)
    g->eax = eax;
    g->edx = rd32(self);
    t1 = rd32(self);
    g->esp = sp0 - 0x2cu;
    t2 = cow_thiscall(g, rd32(t1 + 0x4cu), self, 0);
    t3 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        edx = t3;
    }
    else
    {
        eax = t2;
        edx = t3;
    COW_AT(10162702)
        g->esp = sp0 - 0x2cu;
        cow_fastcall(g, COW_IMG(0x10162f60u), self, edx, 0);
        t4 = g->edx;
        edx = t4;
    }
    COW_AT(10162709)
    wr32(sp0 - 0x30u, in_ebx);
    wr32(sp0 - 0x34u, in_edi);
    t5 = rd32(self + 8u);
    wr32(sp0 - 0x38u, t5);
    g->eax = t5;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t6 = cow_thiscall(g, COW_IMG(0x1015ed80u), COW_IMG(0x10621838u), 1, t5);
    t7 = g->edx;
    if ((uint8_t)t6 == 0u)
    {
        eax = t6;
        edx = t7;
        goto L_10162739;
    }
    eax = t6;
    edx = t7;
    COW_AT(1016271d)
    if (rd16(rd32(COW_IMG(0x1057876cu)) + 0x68u) == 1u) goto L_10162739;
    COW_AT(1016272a)
    wr32(sp0 - 0x38u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t8 = cow_thiscall(g, COW_IMG(0x1015e830u), COW_IMG(0x10621838u), 1, 0u);
    t9 = g->edx;
    eax = t8;
    edx = t9;
L_1016273b: ;
    COW_AT(1016273b)
    t10 = rd8(self + 0x31u);
    t11 = rd16(self + 0x2cu);
    wr8(sp0 - 0x21u, 0u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 0u);
    t12 = (edx & 0xffff0000u) | t11;
    wr32(sp0 - 0x14u, t12);
    if ((int8_t)t10 <= 0)
    {
        eax = (eax & 0xffffff00u) | t10;
        edx = t12;
        ebp = 0u;
        edi = 0u;
        loc_1c = 0u;
        loc_20 = 0u;
        goto L_10162793;
    }
    edx = t12;
    edi = 0u;
    loc_1c = 0u;
    loc_20 = 0u;
L_1016275b: ;
    COW_AT(1016275b)
    wr32(sp0 - 0x38u, sp0 - 0x18u);
    wr32(sp0 - 0x3cu, sp0 - 0x14u);
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t13 = cow_call_regs(g, COW_IMG(0x101292e0u), sp0 - 0x18u, rd32(self + 0x18u), g->edx, 0, 2, sp0 - 0x14u, sp0 - 0x18u);
    t14 = g->edx;
    if (t13 == 0u)
    {
        eax = t13;
        edx = t14;
        ebp = t13;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
        goto L_10162793;
    }
    eax = t13;
    ebp = t13;
    COW_AT(10162773)
    if (rd8(rd32(sp0 - 0x18u) + 0x12u) != 1u)
    {
        eax = (eax & 0xffffff00u) | rd8(rd32(sp0 - 0x18u) + 0x12u);
        edx = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(rd32(sp0 - 0x18u) + 0x12u);
        edx = rd32(sp0 - 0x18u);
    COW_AT(1016277e)
        t15 = rd32(sp0 - 0x1cu) + 1u;
        wr32(sp0 - 0x1cu, t15);
        loc_1c = t15;
    }
    COW_AT(10162782)
    if ((uint8_t)eax != 2u)
    {
        loc_20 = rd32(sp0 - 0x20u);
    }
    else
    {
    COW_AT(10162786)
        t16 = rd32(sp0 - 0x20u) + 1u;
        wr32(sp0 - 0x20u, t16);
        loc_20 = t16;
    }
    COW_AT(1016278a)
    if ((int32_t)(edi + 1u) < (int8_t)rd8(self + 0x31u))
    {
        edi = edi + 1u;
        goto L_1016275b;
    }
    eax = (uint32_t)(int8_t)rd8(self + 0x31u);
    edi = edi + 1u;
L_10162793: ;
    COW_AT(10162793)
    wr32(sp0 - 0x38u, 0x1000u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t17 = cow_thiscall(g, COW_IMG(0x1015ecc0u), COW_IMG(0x10621838u), 1, 0x1000u);
    t18 = g->ecx;
    t19 = g->edx;
    if ((uint8_t)t17 != 0u)
    {
        edx = t19;
        goto L_101627cb;
    }
    ecx = t18;
    edx = t19;
    COW_AT(101627a6)
    if (rd32(self + 0x20u) == 0u)
    {
        eax = rd32(self + 0x20u);
        goto L_101627bb;
    }
    eax = rd32(self + 0x20u);
    COW_AT(101627ad)
    if (rd32(eax + 8u) == 0u)
    {
        eax = rd32(eax + 8u);
        goto L_101627bb;
    }
    eax = rd32(eax + 8u);
    COW_AT(101627b4)
    if (rd8(eax + 0x69u) != 0u) goto L_101627cb;
L_101627bb: ;
    COW_AT(101627bb)
    if (rd32(self + 0x1cu) == 0u) goto L_101627d0;
    ecx = rd32(self + 0x1cu);
    COW_AT(101627c2)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t20 = cow_thiscall(g, COW_IMG(0x10137550u), ecx, 0);
    t21 = g->edx;
    if ((uint8_t)t20 == 0u)
    {
        edx = t21;
        goto L_101627d0;
    }
    edx = t21;
L_101627cb: ;
    COW_AT(101627cb)
    wr8(sp0 - 0x21u, 1u);
L_101627d0: ;
    COW_AT(101627d0)
    if (rd32(self + 0x1cu) == 0u)
    {
        ecx = rd32(sp0 - 0x18u);
        goto L_101627ef;
    }
    eax = rd32(self + 0x1cu);
    ecx = rd32(sp0 - 0x18u);
    COW_AT(101627db)
    if ((int32_t)rd32(eax + 0x24u) < (int16_t)rd16(sp0 - 0x20u))
    {
        edx = (uint32_t)(int16_t)rd16(sp0 - 0x20u);
        goto L_101627ef;
    }
    edx = (uint32_t)(int16_t)rd16(sp0 - 0x20u);
    COW_AT(101627e5)
    if (ebp == 0u) goto L_101627ef;
    COW_AT(101627e9)
    if (rd8(ecx + 0x12u) == 2u) goto L_1016280a;
L_101627ef: ;
    COW_AT(101627ef)
    if (rd32(self + 0x20u) == 0u)
    {
        eax = rd32(self + 0x20u);
        goto L_1016280f;
    }
    eax = rd32(self + 0x20u);
    COW_AT(101627f6)
    if ((int32_t)rd32(eax + 0x24u) < (int16_t)rd16(sp0 - 0x1cu))
    {
        edx = (uint32_t)(int16_t)rd16(sp0 - 0x1cu);
        goto L_1016280f;
    }
    edx = (uint32_t)(int16_t)rd16(sp0 - 0x1cu);
    COW_AT(10162800)
    if (ebp == 0u) goto L_1016280f;
    COW_AT(10162804)
    if (rd8(ecx + 0x12u) != 1u) goto L_1016280f;
L_1016280a: ;
    COW_AT(1016280a)
    wr8(sp0 - 0x21u, 1u);
L_1016280f: ;
    COW_AT(1016280f)
    g->eax = eax;
    g->edx = edx;
    t22 = rd32(COW_IMG(0x10662d98u));
    g->esp = sp0 - 0x34u;
    t23 = cow_thiscall(g, COW_IMG(0x1011ba40u), t22, 0);
    t24 = g->ecx;
    t25 = g->edx;
    if ((uint8_t)t23 == 0u)
    {
        eax = t23;
        ecx = t24;
        edx = t25;
        goto L_10162bf5;
    }
    edx = t25;
    COW_AT(10162822)
    if ((int32_t)rd32(self + 0x34u) > (int32_t)((uint32_t)(int16_t)rd16(self + 0x54u) * 2u))
    {
        eax = (uint32_t)(int16_t)rd16(self + 0x54u) * 2u;
        ecx = rd32(self + 0x34u);
        goto L_10162bf5;
    }
    eax = (uint32_t)(int16_t)rd16(self + 0x54u) * 2u;
    ecx = rd32(self + 0x34u);
    COW_AT(10162833)
    wr8(sp0 - 0x21u, 1u);
L_10162838: ;
    COW_AT(10162838)
    if (rd8(self + 0x59u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x59u);
        goto L_101628b3;
    }
    COW_AT(1016283f)
    if (rd32(self + 0x20u) == 0u)
    {
        eax = rd32(self + 0x20u);
        goto L_10162854;
    }
    eax = rd32(self + 0x20u);
    COW_AT(10162846)
    if (rd32(eax + 8u) == 0u)
    {
        eax = rd32(eax + 8u);
        goto L_10162854;
    }
    eax = rd32(eax + 8u);
    COW_AT(1016284d)
    if (rd8(eax + 0x69u) != 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 0x69u);
        goto L_101628b3;
    }
L_10162854: ;
    COW_AT(10162854)
    if (rd32(self + 0x1cu) == 0u) goto L_10162864;
    ecx = rd32(self + 0x1cu);
    COW_AT(1016285b)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t32 = cow_thiscall(g, COW_IMG(0x10137550u), ecx, 0);
    t33 = g->ecx;
    t34 = g->edx;
    if ((uint8_t)t32 != 0u)
    {
        eax = t32;
        ecx = t33;
        goto L_101628b3;
    }
    edx = t34;
L_10162864: ;
    COW_AT(10162864)
    if (rd32(self + 0x1cu) == 0u)
    {
        ecx = rd32(sp0 - 0x18u);
        goto L_10162883;
    }
    eax = rd32(self + 0x1cu);
    ecx = rd32(sp0 - 0x18u);
    COW_AT(1016286f)
    if ((int32_t)rd32(eax + 0x24u) < (int16_t)rd16(sp0 - 0x20u))
    {
        edx = (uint32_t)(int16_t)rd16(sp0 - 0x20u);
        goto L_10162883;
    }
    edx = (uint32_t)(int16_t)rd16(sp0 - 0x20u);
    COW_AT(10162879)
    if (ebp == 0u) goto L_10162883;
    COW_AT(1016287d)
    if (rd8(ecx + 0x12u) == 2u) goto L_101628b3;
L_10162883: ;
    COW_AT(10162883)
    if (rd32(self + 0x20u) == 0u)
    {
        eax = rd32(self + 0x20u);
        goto L_1016289e;
    }
    eax = rd32(self + 0x20u);
    COW_AT(1016288a)
    if ((int32_t)rd32(eax + 0x24u) < (int16_t)rd16(sp0 - 0x1cu))
    {
        edx = (uint32_t)(int16_t)rd16(sp0 - 0x1cu);
        goto L_1016289e;
    }
    edx = (uint32_t)(int16_t)rd16(sp0 - 0x1cu);
    COW_AT(10162894)
    if (ebp == 0u) goto L_1016289e;
    COW_AT(10162898)
    zf = (uint8_t)(rd8(ecx + 0x12u) - 1u) == 0u;
L_1016289c: ;
    COW_AT(1016289c)
    if (zf) goto L_101628b3;
L_1016289e: ;
    COW_AT(1016289e)
    g->eax = eax;
    g->esp = sp0 - 0x34u;
    t35 = cow_fastcall(g, COW_IMG(0x1015dce0u), COW_IMG(0x10621838u), edx, 0);
    t36 = g->ecx;
    t37 = g->edx;
    if ((uint8_t)t35 != 0u)
    {
        eax = t35;
        ecx = t36;
    }
    else
    {
        eax = t35;
        edx = t37;
    COW_AT(101628ac)
        g->eax = eax;
        g->esp = sp0 - 0x34u;
        t38 = cow_thiscall(g, COW_IMG(0x101624b0u), self, 0);
        t39 = g->ecx;
        eax = t38;
        ecx = t39;
    }
L_101628b3: ;
    COW_AT(101628b3)
    t40 = rd8(sp0 + 4u);
    wr8(self + 0x59u, 0u);
    if ((uint8_t)t40 != 0u)
    {
    COW_AT(101628bf)
        t41 = (uint32_t)(int16_t)rd16(self + 0x54u) * (uint32_t)(int16_t)rd16(self + 0x4eu);
        t42 = rd16(self + 0x4eu);
        wr32(self + 0x34u, t41);
        ecx = (uint32_t)(int16_t)t42;
    }
    COW_AT(101628cd)
    if ((int32_t)rd32(self + 0x34u) <= (int32_t)((uint32_t)(int16_t)rd16(self + 0x50u) * (uint32_t)(int16_t)rd16(self + 0x54u)))
    {
        eax = (uint32_t)(int16_t)rd16(self + 0x54u);
        edx = (uint32_t)(int16_t)rd16(self + 0x50u) * (uint32_t)(int16_t)rd16(self + 0x54u);
    }
    else
    {
        eax = (uint32_t)(int16_t)rd16(self + 0x54u);
        edx = (uint32_t)(int16_t)rd16(self + 0x50u) * (uint32_t)(int16_t)rd16(self + 0x54u);
    COW_AT(101628dd)
        if (rd8(sp0 - 0x21u) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(sp0 - 0x21u);
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(sp0 - 0x21u);
    COW_AT(101628e5)
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x34u;
            t43 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
            t44 = g->ecx;
            t45 = g->edx;
            d46 = cow_take_float(g);
            fpush(g, d46);
            t47 = cow_call_regs(g, COW_IMG(0x10311c6cu), t43, g->ecx, g->edx, 1, 0);
            t48 = rd32(self + 0x34u) - (uint32_t)(int16_t)t47;
            t49 = rd16(self + 0x50u);
            t50 = rd16(self + 0x54u);
            wr32(self + 0x34u, t48);
            if ((int32_t)t48 >= (int32_t)((uint32_t)(int16_t)t49 * (uint32_t)(int16_t)t50))
            {
                eax = (uint32_t)(int16_t)t49 * (uint32_t)(int16_t)t50;
                ecx = t48;
                edx = (uint32_t)(int16_t)t50;
                edi = t48;
            }
            else
            {
                eax = (uint32_t)(int16_t)t49 * (uint32_t)(int16_t)t50;
                ecx = t48;
                edx = (uint32_t)(int16_t)t50;
                edi = t48;
    COW_AT(1016290b)
                wr32(self + 0x34u, eax);
            }
        }
    }
    COW_AT(1016290e)
    if ((int32_t)rd32(self + 0x38u) > 0)
    {
    COW_AT(10162913)
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t51 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
        t52 = g->ecx;
        t53 = g->edx;
        d54 = cow_take_float(g);
        g->edx = t53;
        fpush(g, d54);
        t55 = cow_call_regs(g, COW_IMG(0x10311c6cu), t51, g->ecx, g->edx, 1, 0);
        t56 = g->edx;
        t57 = rd32(self + 0x38u) - (uint32_t)(int16_t)t55;
        t58 = rd16(self + 0x4eu);
        wr32(self + 0x38u, t57);
        if ((int32_t)t57 <= (int32_t)((uint32_t)(int16_t)t58 * 0x14u))
        {
            ecx = t57;
            edx = t56;
        }
        else
        {
            eax = (uint32_t)(int16_t)t58 * 0x14u;
            ecx = t57;
            edx = t56;
    COW_AT(10162938)
            wr32(self + 0x38u, eax);
        }
    COW_AT(1016293b)
        if ((int32_t)rd32(self + 0x38u) < 0)
        {
    COW_AT(10162940)
            wr32(self + 0x38u, 0u);
        }
    }
    COW_AT(10162943)
    t59 = rd32(self + 0x3cu);
    t60 = rd32(self + 0x3cu);
    wr32(sp0 + 4u, t59);
    if ((int32_t)t60 > 0)
    {
        eax = t59;
    COW_AT(1016294e)
        d61 = (double)(float)(double)(int32_t)rd32(sp0 + 4u);
        wrf32(sp0 - 0x14u, (float)d61);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t62 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
        t63 = g->ecx;
        t64 = g->edx;
        d65 = cow_take_float(g);
        g->edx = t64;
        fpush(g, d65);
        t66 = cow_call_regs(g, COW_IMG(0x10311c6cu), t62, g->ecx, g->edx, 1, 0);
        t67 = g->edx;
        wr32(sp0 + 4u, (uint32_t)(int16_t)t66);
        d68 = fr(g, (double)rdf32(sp0 - 0x14u) - fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(self + 0x48u)));
        fpush(g, d68);
        t69 = cow_call_regs(g, COW_IMG(0x10311c6cu), t66, g->ecx, g->edx, 1, 0);
        wr32(self + 0x3cu, t69);
        if ((int32_t)t69 <= 0)
        {
    COW_AT(1016297e)
            wr32(self + 0x3cu, 0u);
        }
    }
    COW_AT(10162981)
    t70 = cow_divs(g, rd32(self + 0x34u), (uint32_t)(int16_t)rd16(self + 0x54u));
    t71 = cow_mods(g, rd32(self + 0x34u), (uint32_t)(int16_t)rd16(self + 0x54u));
    wr8(self + 0x31u, (uint8_t)t70);
    wr8(self + 0x30u, (uint8_t)((uint8_t)t70 + 1u));
    if ((int32_t)t71 <= 0)
    {
        edx = t71;
    }
    else
    {
        eax = (t70 & 0xffffff00u) | (uint8_t)((uint8_t)t70 + 1u);
        edx = t71;
    COW_AT(10162997)
        wr8(self + 0x31u, (uint8_t)eax);
        wr8(self + 0x30u, (uint8_t)((uint8_t)eax + 1u));
        edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)eax + 1u);
    }
    COW_AT(101629a1)
    g->eax = rd32(self);
    g->edx = edx;
    t72 = rd32(self);
    g->esp = sp0 - 0x34u;
    t73 = cow_thiscall(g, rd32(t72 + 0x4cu), self, 0);
    t74 = g->edx;
    if ((uint8_t)t73 == 0u)
    {
        eax = t73;
        edx = t74;
    }
    else
    {
        eax = t73;
        edx = t74;
    COW_AT(101629ac)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t75 = cow_thiscall(g, COW_IMG(0x1011ba40u), rd32(COW_IMG(0x10662d98u)), 0);
        t76 = g->edx;
        if ((uint8_t)t75 != 0u)
        {
            eax = t75;
            edx = t76;
            goto L_101629c2;
        }
        eax = t75;
        edx = t76;
    COW_AT(101629bb)
        if (rd8(self + 0x4cu) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x4cu);
            goto L_101629d0;
        }
        eax = (eax & 0xffffff00u) | rd8(self + 0x4cu);
L_101629c2: ;
    COW_AT(101629c2)
        t77 = rd8(self + 0x30u);
        wr8(self + 0x30u, (uint8_t)(t77 - 1u));
        if ((int8_t)(t77 - 1u) >= 0)
        {
            eax = (eax & 0xffffff00u) | (uint8_t)(t77 - 1u);
        }
        else
        {
            eax = (eax & 0xffffff00u) | (uint8_t)(t77 - 1u);
    COW_AT(101629cc)
            wr8(self + 0x30u, 0u);
        }
    }
L_101629d0: ;
    COW_AT(101629d0)
    wr32(sp0 - 0x38u, sp0 - 0xcu);
    t78 = rd32(self + 8u);
    t79 = rd8(self + 0x31u);
    t80 = rd16(self + 0x26u);
    wr16(sp0 - 0xcu, 0u);
    t81 = rd16(self + 0x2au);
    wr16(sp0 - 0xau, 0u);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    g->esp = sp0 - 0x34u;
    cow_call_regs(g, COW_IMG(0x10118f70u), eax, t78, g->edx, 0, 1, sp0 - 0xcu);
    t82 = cow_divs(g, rd32(self + 0x38u), 0xau);
    t83 = cow_mods(g, rd32(self + 0x38u), 0xau);
    wr32(sp0 - 0x38u, t83);
    t84 = (((edi & 0xffff0000u) | (uint16_t)(uint32_t)(int8_t)t79) * 0x10u - 0x80u & 0xffff0000u) | (uint16_t)(t81 + (uint16_t)((uint16_t)(((edi & 0xffff0000u) | (uint16_t)(uint32_t)(int8_t)t79) * 0x10u - 0x80u) - t80));
    wr32(sp0 - 0x3cu, t84);
    t85 = rd32(sp0 - 6u) - rd32(sp0 - 0xau);
    wr32(sp0 - 0x40u, t85);
    g->eax = t82;
    g->edx = t83;
    g->esp = sp0 - 0x20u;
    t86 = cow_cdecl(g, COW_IMG(0x10162cc0u), 8, t85, t84, t83, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
    t87 = g->edx;
    if ((uint16_t)t85 == (uint16_t)t86)
    {
        eax = t86;
    }
    else
    {
        eax = t86;
        edx = t87;
        ebp = t85;
        edi = t86;
    COW_AT(10162a2f)
        wr32(sp0 - 0x38u, 0u);
        wr32(sp0 - 0x3cu, 0u);
        wr32(sp0 - 0x40u, 1u);
        wr32(sp0 - 0x44u, edi);
        t88 = (edx & 0xffff0000u) | (uint16_t)(rd16(self + 0x32u) + 0xeu);
        wr32(sp0 - 0x48u, t88);
        t89 = (eax & 0xffff0000u) | (uint16_t)(rd16(rd32(self + 8u) + 0x40u) - (uint16_t)edi);
        wr32(sp0 - 0x4cu, t89);
        t90 = (t88 & 0xffff0000u) | rd16(rd32(self + 8u) + 0x3au);
        wr32(sp0 - 0x50u, t90);
        g->edx = t90;
        g->esp = sp0 - 0x34u;
        cow_thiscall(g, COW_IMG(0x1011a5a0u), rd32(self + 8u), 7, t90, t89, t88, edi, 1u, 0u, 0u);
        t91 = g->edx;
        if (rd32(COW_IMG(0x104e1d4cu)) == 0u)
        {
            eax = rd32(COW_IMG(0x104e1d4cu));
            edx = t91;
            loc_10 = rd32(sp0 - 0x10u);
        }
        else
        {
            eax = rd32(COW_IMG(0x104e1d4cu));
    COW_AT(10162a5b)
            t92 = rd32(eax + 4u);
            wr32(sp0 - 0x14u, t92);
            t93 = rd32(eax + 8u);
            wr32(sp0 - 0x10u, t93);
            edx = t93;
            loc_10 = t93;
        }
    COW_AT(10162a69)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t94 = cow_thiscall(g, COW_IMG(0x10160c90u), COW_IMG(0x10621838u), 0);
        t95 = g->ecx;
        t96 = g->edx;
        if (rd8(sp0 - 0x21u) == 0u)
        {
            eax = t94;
        }
        else
        {
            eax = t94;
            edx = t96;
    COW_AT(10162a7b)
            if (eax != 0u)
            {
    COW_AT(10162a7f)
                if ((rd32(eax + 0x34u) >> 8u & 0x10u) != 0u)
                {
    COW_AT(10162a87)
                    wr32(sp0 - 0x38u, sp0 - 0x14u);
                    g->eax = eax;
                    g->esp = sp0 - 0x34u;
                    t97 = cow_thiscall(g, COW_IMG(0x10118c10u), eax, 1, sp0 - 0x14u);
                    if ((uint8_t)t97 == 0u)
                    {
                        eax = t97;
                    }
                    else
                    {
    COW_AT(10162a99)
                        wr32(sp0 - 0x38u, 0u);
                        wr32(sp0 - 0x3cu, sp0 - 0x14u);
                        t98 = (uint32_t)(int16_t)ebp + rd32(sp0 - 0x10u) - (uint32_t)(int16_t)edi;
                        wr32(sp0 - 0x10u, t98);
                        g->esp = sp0 - 0x34u;
                        t99 = cow_call_regs(g, COW_IMG(0x10124700u), (uint32_t)(int16_t)ebp - (uint32_t)(int16_t)edi, rd32(COW_IMG(0x104e1d4cu)), g->edx, 0, 2, sp0 - 0x14u, 0u);
                        eax = t99;
                    }
                }
            }
        }
    }
    COW_AT(10162abc)
    wr32(sp0 - 0x38u, self + 0x40u);
    g->edx = self + 0x40u;
    g->esp = sp0 - 0x34u;
    cow_call_regs(g, COW_IMG(0x10118f70u), eax, rd32(self + 8u), g->edx, 0, 1, self + 0x40u);
    t100 = g->edx;
    t101 = rd32(self);
    wr16(self + 0x46u, (uint16_t)(rd16(self + 0x46u) + 0xfffcu));
    wr16(self + 0x42u, (uint16_t)(rd16(self + 0x42u) + 3u));
    wr16(self + 0x2eu, 0u);
    g->eax = t101;
    g->edx = t100;
    t102 = cow_thiscall(g, rd32(t101 + 0x4cu), self, 0);
    t103 = g->edx;
    if ((uint8_t)t102 == 0u)
    {
        edx = t103;
    }
    else
    {
        eax = t102;
        edx = t103;
    COW_AT(10162ae1)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t104 = cow_thiscall(g, COW_IMG(0x1011ba40u), rd32(COW_IMG(0x10662d98u)), 0);
        t105 = g->edx;
        if ((uint8_t)t104 != 0u)
        {
            edx = t105;
            goto L_10162af7;
        }
        eax = t104;
        edx = t105;
    COW_AT(10162af0)
        if (rd8(self + 0x4cu) == 0u) goto L_10162b04;
L_10162af7: ;
    COW_AT(10162af7)
        wr16(self + 0x46u, (uint16_t)(rd16(self + 0x46u) + 0xfff0u));
        wr16(self + 0x2eu, (uint16_t)(rd16(self + 0x2eu) + 0xfff0u));
    }
L_10162b04: ;
    COW_AT(10162b04)
    if (rd32(rd32(self + 0x20u) + 8u) == 0u)
    {
        ebx = 0u;
    }
    else
    {
        eax = rd32(rd32(self + 0x20u) + 8u);
        ecx = rd32(self + 0x20u);
    COW_AT(10162b0e)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t106 = cow_thiscall(g, COW_IMG(0x1011ba40u), ecx, 0);
        t107 = g->edx;
        if ((uint8_t)t106 != 1u)
        {
            edx = t107;
            ebx = 0u;
        }
        else
        {
            edx = t107;
    COW_AT(10162b17)
            if (rd8(rd32(rd32(self + 0x20u) + 8u) + 0x69u) == 0u)
            {
                edx = (edx & 0xffffff00u) | rd8(rd32(rd32(self + 0x20u) + 8u) + 0x69u);
                ebx = 0u;
            }
            else
            {
                eax = rd32(self + 0x20u);
                edx = (edx & 0xffffff00u) | rd8(rd32(rd32(self + 0x20u) + 8u) + 0x69u);
    COW_AT(10162b24)
                ebx = rd16(eax + 0x4eu);
            }
        }
    }
    COW_AT(10162b28)
    if (rd32(rd32(self + 0x1cu) + 8u) == 0u)
    {
        eax = rd32(rd32(self + 0x1cu) + 8u);
    }
    else
    {
        eax = rd32(rd32(self + 0x1cu) + 8u);
        ecx = rd32(self + 0x1cu);
    COW_AT(10162b32)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t108 = cow_thiscall(g, COW_IMG(0x1011ba40u), ecx, 0);
        t109 = g->ecx;
        t110 = g->edx;
        if ((uint8_t)t108 != 1u)
        {
            eax = t108;
            edx = t110;
        }
        else
        {
            ecx = t109;
    COW_AT(10162b3b)
            if (rd8(rd32(rd32(self + 0x1cu) + 8u) + 0x69u) == 0u)
            {
                eax = rd32(self + 0x1cu);
                edx = rd32(rd32(self + 0x1cu) + 8u);
            }
            else
            {
                eax = rd32(self + 0x1cu);
                edx = rd32(rd32(self + 0x1cu) + 8u);
    COW_AT(10162b48)
                if ((int16_t)ebx >= (int16_t)rd16(eax + 0x4eu))
                {
                    eax = (eax & 0xffff0000u) | rd16(eax + 0x4eu);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | rd16(eax + 0x4eu);
    COW_AT(10162b51)
                    ebx = eax;
                }
            }
        }
    }
    COW_AT(10162b53)
    if ((int16_t)ebx > 4)
    {
    COW_AT(10162b59)
        ebx = 4u;
    }
    COW_AT(10162b5e)
    t111 = rd8(self + 0x30u);
    t112 = rd32(self + 0x18u);
    wr16(self + 0x42u, (uint16_t)(rd16(self + 0x42u) + (uint16_t)(ebx << 4u)));
    wr8(self + 0x30u, (uint8_t)(t111 - (uint8_t)ebx));
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t113 = cow_call_regs(g, COW_IMG(0x10129c60u), (eax & 0xffffff00u) | (uint8_t)(t111 - (uint8_t)ebx), t112, g->edx, 1, 0);
    t114 = g->edx;
    if ((int32_t)rd32(self + 0x3cu) <= 0)
    {
        eax = t113;
        edx = t114;
        ebx = t113;
        edi = rd32(self + 0x3cu);
    }
    else
    {
        ebx = t113;
        edi = rd32(self + 0x3cu);
    COW_AT(10162b83)
        t115 = cow_divs(g, edi, 0x14u);
        t116 = cow_mods(g, edi, 0x14u);
        q117 = (int64_t)cow_muls(0x66666667u, (uint32_t)(int16_t)t116 << 4u);
        t118 = (uint32_t)((int32_t)cow_qhi(q117) >> 3u);
        wr16(self + 0x2eu, (uint16_t)(rd16(self + 0x2eu) + (uint16_t)(t118 + (t118 >> 0x1fu))));
        eax = t118 >> 0x1fu;
        edx = t118 + (t118 >> 0x1fu);
    }
    COW_AT(10162ba5)
    if (rd16(self + 0x2cu) == (uint16_t)ebx)
    {
    COW_AT(10162c68)
        t129 = cow_divs(g, edi, 0x14u);
        t130 = cow_mods(g, edi, 0x14u);
        wr32(self + 0x3cu, t130);
        eax = t129;
        edx = t130;
    }
    else
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x2cu);
    COW_AT(10162bb2)
        if ((uint32_t)(int16_t)ebx == (uint32_t)(int16_t)eax)
        {
            edi = 0u;
            goto L_10162bd1;
        }
        eax = (uint32_t)(int16_t)eax;
        ebx = (uint32_t)(int16_t)ebx;
        edi = 0u;
L_10162bbe: ;
    COW_AT(10162bbe)
        wr32(sp0 - 0x38u, 0u);
        wr32(sp0 - 0x3cu, eax);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t119 = cow_thiscall(g, COW_IMG(0x10129c20u), rd32(self + 0x18u), 2, eax, 0u);
        t120 = g->edx;
        if (ebx != (uint32_t)(int16_t)t119)
        {
            eax = (uint32_t)(int16_t)t119;
            edx = t120;
            edi = edi + 1u;
            goto L_10162bbe;
        }
        edi = edi + 1u;
L_10162bd1: ;
    COW_AT(10162bd1)
        t121 = cow_divs(g, rd32(self + 0x3cu), 0x14u);
        t122 = cow_mods(g, rd32(self + 0x3cu), 0x14u);
        if ((int16_t)edi <= (int32_t)t121)
        {
            ecx = (uint32_t)(int16_t)edi;
            edx = t122;
    COW_AT(10162c2d)
            t126 = ecx * 0x14u + edx;
            wr32(self + 0x3cu, t126);
            eax = ecx * 5u;
        }
        else
        {
            eax = t121;
            edx = t122;
    COW_AT(10162be0)
            wr32(sp0 - 0x38u, 0u);
            t123 = (edx & 0xffff0000u) | rd16(self + 0x2cu);
            wr32(sp0 - 0x3cu, t123);
            g->eax = eax;
            g->edx = t123;
            g->esp = sp0 - 0x34u;
            t124 = cow_thiscall(g, COW_IMG(0x10129c20u), rd32(self + 0x18u), 2, t123, 0u);
            t125 = g->edx;
            wr16(self + 0x2cu, (uint16_t)t124);
            eax = t124;
            edx = t125;
        }
    COW_AT(10162c36)
        if ((int16_t)edi <= 64)
        {
    COW_AT(10162c50)
            if ((int16_t)edi <= 4)
            {
    COW_AT(10162c5f)
                wr32(self + 0x48u, 0x3f800000u);
            }
            else
            {
    COW_AT(10162c56)
                wr32(self + 0x48u, 0x41a00000u);
            }
        }
        else
        {
    COW_AT(10162c3c)
            t127 = rd16(rd32(self + 0x18u) + 0x14u);
            t128 = rd32(self + 0x18u);
            wr32(self + 0x3cu, 0u);
            wr16(self + 0x2cu, (uint16_t)t127);
            eax = (eax & 0xffff0000u) | t127;
            edx = t128;
        }
    }
    COW_AT(10162c72)
    g->eax = eax;
    t131 = rd32(self + 8u);
    g->esp = sp0 - 0x34u;
    t132 = cow_thiscall(g, COW_IMG(0x10118220u), t131, 0);
    t133 = g->ecx;
    if (t132 == 0u)
    {
        ebx = rd32(sp0 - 0x30u);
        edi = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_2c = rd32(sp0 - 0x2cu);
        goto L_10162cb3;
    }
    eax = t132;
    ecx = t133;
    ebx = rd32(sp0 - 0x30u);
    edi = rd32(sp0 - 0x34u);
    COW_AT(10162c80)
    if (rd8(self + 0x31u) != 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 0x44u);
        goto L_10162ca2;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 0x44u);
    COW_AT(10162c8a)
    if ((uint8_t)ecx == 3u) goto L_10162c93;
    COW_AT(10162c8f)
    if ((uint8_t)ecx != 0u)
    {
        loc_28 = rd32(sp0 - 0x28u);
        loc_2c = rd32(sp0 - 0x2cu);
        goto L_10162cb3;
    }
L_10162c93: ;
    COW_AT(10162c93)
    wr32(eax + 0x48u, 0x14u);
    t134 = rd32(sp0 - 0x2cu);
    wr8(eax + 0x44u, 2u);
    g->ebx = ebx;
    g->esi = t134;
    g->edi = edi;
    g->ebp = rd32(sp0 - 0x28u);
    return;
L_10162739: ;
    COW_AT(10162739)
    goto L_1016273b;
L_10162bf5: ;
    COW_AT(10162bf5)
    if (rd8(sp0 - 0x21u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x21u);
        goto L_10162838;
    }
    eax = (eax & 0xffffff00u) | rd8(sp0 - 0x21u);
    COW_AT(10162c01)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t26 = cow_thiscall(g, COW_IMG(0x1015edb0u), COW_IMG(0x10621838u), 0);
    t27 = g->ecx;
    t28 = g->edx;
    if ((uint8_t)t26 != 0u)
    {
        eax = t26;
        ecx = t27;
        edx = t28;
        goto L_10162838;
    }
    eax = t26;
    ecx = t27;
    edx = t28;
    COW_AT(10162c13)
    wr32(sp0 - 0x38u, 0xffffffffu);
    wr32(sp0 - 0x3cu, 1u);
    wr32(sp0 - 0x40u, 0x95u);
    wr32(sp0 - 0x44u, 0x3bu);
    g->ebx = 0u;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t29 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3bu, 0x95u, 1u, 0xffffffffu, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu));
    t30 = g->ecx;
    t31 = g->edx;
    eax = t29;
    ecx = t30;
    edx = t31;
    zf = (uint8_t)t29 == 0u;
    goto L_1016289c;
L_10162ca2: ;
    COW_AT(10162ca2)
    if ((uint8_t)ecx == 2u) goto L_10162cac;
    COW_AT(10162ca7)
    if ((uint8_t)ecx != 1u)
    {
        loc_28 = rd32(sp0 - 0x28u);
        loc_2c = rd32(sp0 - 0x2cu);
        goto L_10162cb3;
    }
L_10162cac: ;
    COW_AT(10162cac)
    wr8(eax + 0x44u, 3u);
    wr32(eax + 0x48u, 0x14u);
    loc_28 = rd32(sp0 - 0x28u);
    loc_2c = rd32(sp0 - 0x2cu);
L_10162cb3: ;
    COW_AT(10162cb3)
    g->ebx = ebx;
    g->esi = loc_2c;
    g->edi = edi;
    g->ebp = loc_28;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101626e0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101626f7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        in_esi = rd32(sp0 - 0x2cu);
        in_ebp = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x10162702u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x10162709u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1016271du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1016272au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10162739u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1016273bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1016275bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10162773u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        wr32(sp0 - 0x3cu, sp0 - 0x14u);
        wr32(sp0 - 0x38u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1016277eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        wr32(sp0 - 0x3cu, sp0 - 0x14u);
        wr32(sp0 - 0x38u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x10162782u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        wr32(sp0 - 0x3cu, sp0 - 0x14u);
        wr32(sp0 - 0x38u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x10162786u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        wr32(sp0 - 0x3cu, sp0 - 0x14u);
        wr32(sp0 - 0x38u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1016278au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        wr32(sp0 - 0x3cu, sp0 - 0x14u);
        wr32(sp0 - 0x38u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x10162793u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101627a6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101627adu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101627b4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101627bbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101627c2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101627cbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101627d0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101627dbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101627e5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101627e9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101627efu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101627f6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10162800u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10162804u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1016280au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1016280fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10162822u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10162833u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10162838u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1016283fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10162846u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1016284du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10162854u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1016285bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10162864u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1016286fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10162879u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1016287du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10162883u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1016288au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10162894u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10162898u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1016289cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1016289eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101628acu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101628b3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101628bfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101628cdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101628ddu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101628e5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1016290bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1016290eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10162913u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10162938u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1016293bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10162940u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10162943u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1016294eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1016297eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10162981u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10162997u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101629a1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101629acu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101629bbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101629c2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101629ccu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101629d0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10162a2fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10162a5bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10162a69u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10162a7bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10162a7fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10162a87u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10162a99u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        wr32(sp0 - 0x38u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x10162abcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10162ae1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10162af0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10162af7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10162b04u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10162b0eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10162b17u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10162b24u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10162b28u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10162b32u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10162b3bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10162b48u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10162b51u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10162b53u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10162b59u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10162b5eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x10162b83u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebp = 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10162ba5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebp = 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10162bb2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebp = 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10162bbeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebp = 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10162bd1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebp = 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10162be0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebp = 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10162bf5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10162c01u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10162c13u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10162c2du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebp = 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10162c36u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebp = 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10162c3cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebp = 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10162c50u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebp = 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10162c56u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebp = 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10162c5fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebp = 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10162c68u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebp = 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10162c72u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x34u;
        g->ebp = 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10162c80u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x2cu;
        g->ebp = 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10162c8au:
    {
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
        g->esp = sp0 - 0x2cu;
        g->ebp = 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10162c8fu:
    {
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
        g->esp = sp0 - 0x2cu;
        g->ebp = 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10162c93u:
    {
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
        g->esp = sp0 - 0x2cu;
        g->ebp = 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10162ca2u:
    {
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
        g->esp = sp0 - 0x2cu;
        g->ebp = 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10162ca7u:
    {
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
        g->esp = sp0 - 0x2cu;
        g->ebp = 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10162cacu:
    {
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
        g->esp = sp0 - 0x2cu;
        g->ebp = 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10162cb3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101626e0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_101626e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
