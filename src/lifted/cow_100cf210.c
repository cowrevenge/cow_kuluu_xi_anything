/* f_0x100cf210 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_100cf210(Guest* g)
{
    double d51;
    double d55;
    double d66;
    double d70;
    double d76;
    double d77;
    double d78;
    double d86;
    double d91;
    double d94;
    double d95;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_20;
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
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
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
    uint32_t t67;
    uint32_t t68;
    uint32_t t69;
    uint32_t t7;
    uint32_t t71;
    uint32_t t72;
    uint32_t t73;
    uint32_t t74;
    uint32_t t75;
    uint32_t t79;
    uint32_t t8;
    uint32_t t80;
    uint32_t t81;
    uint32_t t82;
    uint32_t t83;
    uint32_t t84;
    uint32_t t85;
    uint32_t t87;
    uint32_t t88;
    uint32_t t89;
    uint32_t t9;
    uint32_t t90;
    uint32_t t92;
    uint32_t t93;
    uint32_t t96;
    uint32_t t97;
    uint32_t t98;
    uint32_t t99;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 68u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100cf228u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_100cf228;
    case 0x100cf239u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf239;
    case 0x100cf245u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf245;
    case 0x100cf250u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf250;
    case 0x100cf25au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf25a;
    case 0x100cf266u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf266;
    case 0x100cf271u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf271;
    case 0x100cf275u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf275;
    case 0x100cf27au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf27a;
    case 0x100cf27cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf27c;
    case 0x100cf28cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf28c;
    case 0x100cf294u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf294;
    case 0x100cf2a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf2a3;
    case 0x100cf2aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf2ae;
    case 0x100cf2b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf2b9;
    case 0x100cf2c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf2c1;
    case 0x100cf2cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf2cb;
    case 0x100cf2d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf2d6;
    case 0x100cf2dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf2db;
    case 0x100cf2ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf2dd;
    case 0x100cf2eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf2ee;
    case 0x100cf2ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf2ff;
    case 0x100cf309u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf309;
    case 0x100cf311u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf311;
    case 0x100cf31au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf31a;
    case 0x100cf32bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_100cf32b;
    case 0x100cf336u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf336;
    case 0x100cf33bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf33b;
    case 0x100cf343u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf343;
    case 0x100cf349u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf349;
    case 0x100cf351u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf351;
    case 0x100cf357u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf357;
    case 0x100cf35eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf35e;
    case 0x100cf368u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf368;
    case 0x100cf36eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf36e;
    case 0x100cf375u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf375;
    case 0x100cf37fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf37f;
    case 0x100cf385u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf385;
    case 0x100cf38cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf38c;
    case 0x100cf396u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf396;
    case 0x100cf39cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf39c;
    case 0x100cf3a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf3a3;
    case 0x100cf3adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf3ad;
    case 0x100cf3b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf3b3;
    case 0x100cf3bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf3ba;
    case 0x100cf3c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf3c4;
    case 0x100cf3cau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf3ca;
    case 0x100cf3d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf3d1;
    case 0x100cf3dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf3db;
    case 0x100cf3e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf3e1;
    case 0x100cf3e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf3e8;
    case 0x100cf3f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf3f2;
    case 0x100cf3f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf3f8;
    case 0x100cf3ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf3ff;
    case 0x100cf409u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf409;
    case 0x100cf40fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf40f;
    case 0x100cf417u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf417;
    case 0x100cf420u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf420;
    case 0x100cf428u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf428;
    case 0x100cf431u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf431;
    case 0x100cf439u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf439;
    case 0x100cf442u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf442;
    case 0x100cf44au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf44a;
    case 0x100cf453u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf453;
    case 0x100cf45au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf45a;
    case 0x100cf464u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf464;
    case 0x100cf46au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf46a;
    case 0x100cf471u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf471;
    case 0x100cf476u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf476;
    case 0x100cf480u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf480;
    case 0x100cf488u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf488;
    case 0x100cf492u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf492;
    case 0x100cf498u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf498;
    case 0x100cf49fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf49f;
    case 0x100cf4a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf4a3;
    case 0x100cf4adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf4ad;
    case 0x100cf4b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf4b5;
    case 0x100cf4bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf4bf;
    case 0x100cf4c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf4c5;
    case 0x100cf4d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf4d0;
    case 0x100cf4dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf4dc;
    case 0x100cf4e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf4e6;
    case 0x100cf4eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf4ee;
    case 0x100cf4f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf4f8;
    case 0x100cf500u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf500;
    case 0x100cf50au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf50a;
    case 0x100cf50eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf50e;
    case 0x100cf518u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf518;
    case 0x100cf51fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf51f;
    case 0x100cf52bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cf52b;
    case 0x100cf536u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf536;
    case 0x100cf540u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf540;
    case 0x100cf54au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf54a;
    case 0x100cf54eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf54e;
    case 0x100cf558u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf558;
    case 0x100cf55du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cf55d;
    case 0x100cf572u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf572;
    case 0x100cf57cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf57c;
    case 0x100cf586u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf586;
    case 0x100cf58au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf58a;
    case 0x100cf599u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf599;
    case 0x100cf5a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf5a3;
    case 0x100cf5a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf5a7;
    case 0x100cf5b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf5b1;
    case 0x100cf5beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf5be;
    case 0x100cf5c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cf5c6;
    case 0x100cf5d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf5d1;
    case 0x100cf5d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cf5d9;
    case 0x100cf5f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf5f6;
    case 0x100cf5feu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cf5fe;
    case 0x100cf60bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cf60b;
    case 0x100cf61au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf61a;
    case 0x100cf624u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf624;
    case 0x100cf62eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf62e;
    case 0x100cf632u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf632;
    case 0x100cf63cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf63c;
    case 0x100cf641u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf641;
    case 0x100cf64du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cf64d;
    case 0x100cf655u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf655;
    case 0x100cf65cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf65c;
    case 0x100cf663u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf663;
    case 0x100cf665u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf665;
    case 0x100cf66fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf66f;
    case 0x100cf68bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cf68b;
    case 0x100cf696u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf696;
    case 0x100cf6a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cf6a2;
    case 0x100cf6aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf6ae;
    case 0x100cf6b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf6b3;
    case 0x100cf6b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf6b8;
    case 0x100cf6bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf6bb;
    case 0x100cf6c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf6c6;
    case 0x100cf6dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf6dc;
    case 0x100cf6e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf6e2;
    case 0x100cf6e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf6e8;
    case 0x100cf6f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf6f3;
    case 0x100cf6f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf6f9;
    case 0x100cf703u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf703;
    case 0x100cf70cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf70c;
    case 0x100cf71bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf71b;
    case 0x100cf725u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_100cf725;
    case 0x100cf72eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf72e;
    case 0x100cf732u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf732;
    case 0x100cf73eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_100cf73e;
    default: break;
    }
#endif

    COW_AT(100cf210)
    wr32(sp0 - 0x24u, in_ebp);
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, in_edi);
    t1 = rd32(sp0 + 4u);
    wr32(sp0 - 0x30u, t1);
    g->edx = in_edx;
    g->esp = sp0 - 0x2cu;
    t2 = cow_stdcall(g, COW_IMG(0x10072fb0u), 1, t1);
    t3 = g->edx;
    eax = t2;
    edx = t3;
    ebp = t1;
    COW_AT(100cf228)
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x34u, 0x29u);
    wr32(sp0 - 0x38u, eax);
    wr32(sp0 - 0x3cu, sp0 - 0x20u);
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    cow_call_regs(g, COW_IMG(0x10072430u), eax, g->ecx, g->edx, 0, 4, sp0 - 0x20u, eax, 0x29u, 0u);
    t4 = g->edx;
    edx = t4;
    COW_AT(100cf239)
    if (rd32(sp0 - 0x20u) == 0u)
    {
        ebx = in_ebx;
        goto L_100cf70c;
    }
    eax = rd32(sp0 - 0x20u);
    COW_AT(100cf245)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t5 = cow_thiscall(g, COW_IMG(0x1002b6a0u), self + 0x674u, 0);
    t6 = g->edx;
    eax = t5;
    edx = t6;
    COW_AT(100cf250)
    if (eax == 0u)
    {
        ebx = in_ebx;
        goto L_100cf73e;
    }
    edi = eax;
    COW_AT(100cf25a)
    t7 = rd32(sp0 - 0x20u);
    wr32(sp0 - 0x30u, t7);
    g->edx = t7;
    g->esp = sp0 - 0x2cu;
    cow_thiscall(g, COW_IMG(0x10029e50u), edi, 1, t7);
    t8 = g->edx;
    edx = t8;
    COW_AT(100cf266)
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    cow_call_regs(g, COW_IMG(0x10071e90u), rd32(sp0 - 0x20u), rd32(rd32(sp0 - 0x20u)), g->edx, 1, 0);
    t9 = g->edx;
    edx = t9;
    COW_AT(100cf271)
    if (ebp == 0u)
    {
    COW_AT(100cf27a)
        eax = 0u;
    }
    else
    {
    COW_AT(100cf275)
        eax = rd32(ebp);
    }
    COW_AT(100cf27c)
    wr32(sp0 - 0x30u, 0xffffffffu);
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x38u, 0x2au);
    wr32(sp0 - 0x3cu, eax);
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    cow_thiscall(g, COW_IMG(0x100742b0u), sp0 - 0x1cu, 4, eax, 0x2au, 0u, 0xffffffffu);
    t10 = g->edx;
    edx = t10;
    COW_AT(100cf28c)
    if (rd32(sp0 - 8u) == 0u)
    {
        eax = rd32(sp0 - 8u);
        goto L_100cf2c1;
    }
    eax = rd32(sp0 - 8u);
L_100cf294: ;
    COW_AT(100cf294)
    t11 = rd32(eax + 0x14u);
    wr32(sp0 - 0x30u, t11);
    wr32(sp0 - 0x20u, t11);
    g->eax = t11;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t12 = cow_thiscall(g, COW_IMG(0x10029f70u), edi, 1, t11);
    t13 = g->edx;
    eax = t12;
    edx = t13;
    COW_AT(100cf2a3)
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t14 = cow_call_regs(g, COW_IMG(0x10071e90u), eax, rd32(rd32(sp0 - 0x20u)), g->edx, 1, 0);
    t15 = g->edx;
    eax = t14;
    edx = t15;
    COW_AT(100cf2ae)
    wr32(sp0 - 0x30u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x1cu, 1, 0u);
    t16 = g->edx;
    edx = t16;
    COW_AT(100cf2b9)
    if (rd32(sp0 - 8u) != 0u)
    {
        eax = rd32(sp0 - 8u);
        goto L_100cf294;
    }
    eax = rd32(sp0 - 8u);
L_100cf2c1: ;
    COW_AT(100cf2c1)
    g->eax = eax;
    g->edx = rd32(self);
    t17 = rd32(self);
    g->esp = sp0 - 0x2cu;
    t18 = cow_thiscall(g, rd32(t17 + 0x358u), self, 0);
    t19 = g->edx;
    eax = t18;
    edx = t19;
    COW_AT(100cf2cb)
    wr8(sp0 + 4u, eax != 0u);
    if (ebp == 0u)
    {
    COW_AT(100cf2db)
        eax = 0u;
    }
    else
    {
    COW_AT(100cf2d6)
        eax = rd32(ebp);
    }
    COW_AT(100cf2dd)
    wr32(sp0 - 0x30u, in_ebx);
    wr32(sp0 - 0x34u, 0xffffffffu);
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x3cu, 0x45u);
    wr32(sp0 - 0x40u, eax);
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    cow_thiscall(g, COW_IMG(0x100742b0u), sp0 - 0x1cu, 4, eax, 0x45u, 0u, 0xffffffffu);
    t20 = g->ecx;
    t21 = g->edx;
    ecx = t20;
    edx = t21;
    COW_AT(100cf2ee)
    if (rd32(sp0 - 8u) == 0u) goto L_100cf4dc;
    eax = rd32(sp0 - 8u);
L_100cf2ff: ;
    COW_AT(100cf2ff)
    if (eax != 0u)
    {
        ebp = eax;
    COW_AT(100cf309)
        if (rd8(sp0 + 4u) == 0u)
        {
            ecx = (ecx & 0xffffff00u) | rd8(sp0 + 4u);
            goto L_100cf357;
        }
        ecx = (ecx & 0xffffff00u) | rd8(sp0 + 4u);
    COW_AT(100cf311)
        t22 = rd32(eax + 0x20u);
        if (t22 != 0x6e756f6du) goto L_100cf33b;
    COW_AT(100cf31a)
        wr32(sp0 - 0x34u, eax + 0x30u);
        g->eax = eax + 0x30u;
        g->edx = edx;
        g->esp = sp0 - 0x30u;
        t23 = cow_thiscall(g, COW_IMG(0x10022270u), self + 0x878u, 1, eax + 0x30u);
        t24 = g->edx;
        eax = t23;
        edx = t24;
    COW_AT(100cf32b)
        wr32(sp0 - 0x34u, ebp + 0x38u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x30u;
        t25 = cow_thiscall(g, COW_IMG(0x10022300u), self + 0x878u, 1, ebp + 0x38u);
        t26 = g->edx;
        eax = t25;
        edx = t26;
    COW_AT(100cf336)
    }
L_100cf4c5: ;
    COW_AT(100cf4c5)
    wr32(sp0 - 0x34u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x1cu, 1, 0u);
    t35 = g->ecx;
    t36 = g->edx;
    ecx = t35;
    edx = t36;
    COW_AT(100cf4d0)
    if (rd32(sp0 - 8u) != 0u)
    {
        eax = rd32(sp0 - 8u);
        goto L_100cf2ff;
    }
L_100cf4dc: ;
    COW_AT(100cf4dc)
    g->eax = rd32(self);
    g->edx = edx;
    t37 = rd32(self);
    g->esp = sp0 - 0x30u;
    t38 = cow_thiscall(g, rd32(t37 + 0x34cu), self, 0);
    t39 = g->ecx;
    t40 = g->edx;
    eax = t38;
    ecx = t39;
    edx = t40;
    COW_AT(100cf4e6)
    if (eax != 0u) goto L_100cf665;
    COW_AT(100cf4ee)
    g->eax = eax;
    g->edx = rd32(self);
    t41 = rd32(self);
    g->esp = sp0 - 0x30u;
    t42 = cow_thiscall(g, rd32(t41 + 0x358u), self, 0);
    t43 = g->ecx;
    t44 = g->edx;
    eax = t42;
    ecx = t43;
    edx = t44;
    COW_AT(100cf4f8)
    if (eax != 0u) goto L_100cf665;
    COW_AT(100cf500)
    g->eax = rd32(self);
    g->edx = edx;
    t45 = rd32(self);
    g->esp = sp0 - 0x30u;
    t46 = cow_thiscall(g, rd32(t45 + 0x360u), self, 0);
    t47 = g->ecx;
    t48 = g->edx;
    eax = t46;
    ecx = t47;
    edx = t48;
    COW_AT(100cf50a)
    if (eax == 0u) goto L_100cf540;
    COW_AT(100cf50e)
    if (rd32(self + 0x768u) == 0u) goto L_100cf536;
    edi = rd32(self + 0x768u);
    COW_AT(100cf518)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t49 = cow_thiscall(g, COW_IMG(0x10084500u), edi, 0);
    t50 = g->edx;
    eax = t49;
    edx = t50;
    COW_AT(100cf51f)
    wr32(sp0 - 0x34u, eax);
    g->esp = sp0 - 0x30u;
    cow_thiscall(g, COW_IMG(0x10022120u), edi + 0x878u, 1, eax);
    d51 = cow_take_float(g);
    x0 = d51;
    COW_AT(100cf52b)
    wrf32(self + 0x754u, (float)x0);
L_100cf6bb: ;
    COW_AT(100cf6bb)
    if (rd32(self + 0x814u) != 0u)
    {
        ebx = rd32(sp0 - 0x30u);
    }
    else
    {
        ebx = rd32(sp0 - 0x30u);
    COW_AT(100cf6c6)
        wr32(sp0 - 0x30u, 0x62697666u);
        wr32(sp0 - 0x34u, 5u);
        wr32(sp0 - 0x38u, sp0 + 4u);
        g->eax = sp0 + 4u;
        g->edx = rd32(self);
        t96 = rd32(self);
        g->esp = sp0 - 0x2cu;
        t97 = cow_thiscall(g, rd32(t96 + 0x1ecu), self, 3, sp0 + 4u, 5u, 0x62697666u);
        t98 = g->edx;
        eax = t97;
        edx = t98;
    COW_AT(100cf6dc)
        if (rd32(eax) != 0u)
        {
            eax = rd32(eax);
    COW_AT(100cf6e2)
            if (rd32(eax) != 0u)
            {
                eax = rd32(eax);
    COW_AT(100cf6e8)
                wr32(sp0 - 0x30u, 0u);
                wr32(sp0 - 0x34u, self);
                wr32(sp0 - 0x38u, self);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x2cu;
                t99 = cow_thiscall(g, COW_IMG(0x100536c0u), eax, 3, self, self, 0u);
                t100 = g->edx;
                eax = t99;
                edx = t100;
    COW_AT(100cf6f3)
                if (eax != 0u)
                {
                    edi = eax;
    COW_AT(100cf6f9)
                    wr32(edi + 0x64u, self);
                    g->esp = sp0 - 0x2cu;
                    cow_call_regs(g, COW_IMG(0x10071e90u), eax, edi, g->edx, 1, 0);
    COW_AT(100cf703)
                    t101 = rd32(edi + 0x14u);
                    wr32(self + 0x814u, t101);
                }
            }
        }
    }
L_100cf70c: ;
    COW_AT(100cf70c)
    wr32(sp0 - 0x30u, sp0 + 4u);
    g->eax = sp0 + 4u;
    g->edx = rd32(self);
    t102 = rd32(self);
    g->esp = sp0 - 0x2cu;
    t103 = cow_thiscall(g, rd32(t102 + 0x1e0u), self, 1, sp0 + 4u);
    t104 = g->edx;
    eax = t103;
    edx = t104;
    COW_AT(100cf71b)
    wr32(sp0 - 0x20u, rd32(eax));
    if (rd32(eax) == 0u)
    {
        eax = rd32(eax);
    }
    else
    {
        loc_20 = rd32(eax);
        eax = rd32(eax);
    COW_AT(100cf725)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x2cu;
        t105 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 0x20u, 0);
        t106 = g->edx;
        eax = t105;
        edx = t106;
    COW_AT(100cf72e)
        if ((uint8_t)eax != 0u)
        {
    COW_AT(100cf732)
            t107 = rd32(sp0 - 0x20u);
            wr32(sp0 - 0x30u, t107);
            g->eax = eax;
            g->esp = sp0 - 0x2cu;
            t108 = cow_fastcall(g, COW_IMG(0x10085060u), self, edx, 1, t107);
            t109 = g->edx;
            eax = t108;
            edx = t109;
        }
    }
L_100cf73e: ;
    COW_AT(100cf73e)
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    g->ebp = rd32(sp0 - 0x24u);
    g->edx = edx;
    return eax;
L_100cf33b: ;
    COW_AT(100cf33b)
    if (rd8(eax + 0x3fu) == 0xffu)
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 0x3fu);
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 0x3fu);
    COW_AT(100cf343)
        wr8(self + 0x89cu, (uint8_t)ecx);
    }
    COW_AT(100cf349)
    if (rd8(eax + 0x3eu) == 0xffu)
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 0x3eu);
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 0x3eu);
    COW_AT(100cf351)
        wr8(self + 0x89du, (uint8_t)ecx);
    }
L_100cf357: ;
    COW_AT(100cf357)
    if ((int8_t)rd8(eax + 0x30u) < 0)
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 0x30u);
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 0x30u);
    COW_AT(100cf35e)
        if ((int8_t)rd8(self + 0x878u) >= 0)
        {
            edx = (edx & 0xffffff00u) | rd8(self + 0x878u);
        }
        else
        {
            edx = (edx & 0xffffff00u) | rd8(self + 0x878u);
    COW_AT(100cf368)
            wr8(self + 0x878u, (uint8_t)ecx);
        }
    }
    COW_AT(100cf36e)
    if ((int8_t)rd8(eax + 0x31u) < 0)
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 0x31u);
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 0x31u);
    COW_AT(100cf375)
        if ((int8_t)rd8(self + 0x879u) >= 0)
        {
            edx = (edx & 0xffffff00u) | rd8(self + 0x879u);
        }
        else
        {
            edx = (edx & 0xffffff00u) | rd8(self + 0x879u);
    COW_AT(100cf37f)
            wr8(self + 0x879u, (uint8_t)ecx);
        }
    }
    COW_AT(100cf385)
    if ((int8_t)rd8(eax + 0x32u) < 0)
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 0x32u);
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 0x32u);
    COW_AT(100cf38c)
        if ((int8_t)rd8(self + 0x87au) >= 0)
        {
            edx = (edx & 0xffffff00u) | rd8(self + 0x87au);
        }
        else
        {
            edx = (edx & 0xffffff00u) | rd8(self + 0x87au);
    COW_AT(100cf396)
            wr8(self + 0x87au, (uint8_t)ecx);
        }
    }
    COW_AT(100cf39c)
    if ((int8_t)rd8(eax + 0x33u) < 0)
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 0x33u);
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 0x33u);
    COW_AT(100cf3a3)
        if ((int8_t)rd8(self + 0x87bu) >= 0)
        {
            edx = (edx & 0xffffff00u) | rd8(self + 0x87bu);
        }
        else
        {
            edx = (edx & 0xffffff00u) | rd8(self + 0x87bu);
    COW_AT(100cf3ad)
            wr8(self + 0x87bu, (uint8_t)ecx);
        }
    }
    COW_AT(100cf3b3)
    if ((int8_t)rd8(eax + 0x34u) < 0)
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 0x34u);
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 0x34u);
    COW_AT(100cf3ba)
        if ((int8_t)rd8(self + 0x87cu) >= 0)
        {
            edx = (edx & 0xffffff00u) | rd8(self + 0x87cu);
        }
        else
        {
            edx = (edx & 0xffffff00u) | rd8(self + 0x87cu);
    COW_AT(100cf3c4)
            wr8(self + 0x87cu, (uint8_t)ecx);
        }
    }
    COW_AT(100cf3ca)
    if ((int8_t)rd8(eax + 0x38u) < 0)
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 0x38u);
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 0x38u);
    COW_AT(100cf3d1)
        if ((int8_t)rd8(self + 0x889u) >= 0)
        {
            edx = (edx & 0xffffff00u) | rd8(self + 0x889u);
        }
        else
        {
            edx = (edx & 0xffffff00u) | rd8(self + 0x889u);
    COW_AT(100cf3db)
            wr8(self + 0x889u, (uint8_t)ecx);
        }
    }
    COW_AT(100cf3e1)
    if ((int8_t)rd8(eax + 0x35u) < 0)
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 0x35u);
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 0x35u);
    COW_AT(100cf3e8)
        if ((int8_t)rd8(self + 0x87du) >= 0)
        {
            edx = (edx & 0xffffff00u) | rd8(self + 0x87du);
        }
        else
        {
            edx = (edx & 0xffffff00u) | rd8(self + 0x87du);
    COW_AT(100cf3f2)
            wr8(self + 0x87du, (uint8_t)ecx);
        }
    }
    COW_AT(100cf3f8)
    if ((int8_t)rd8(eax + 0x39u) < 0)
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 0x39u);
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 0x39u);
    COW_AT(100cf3ff)
        if ((int8_t)rd8(self + 0x881u) >= 0)
        {
            edx = (edx & 0xffffff00u) | rd8(self + 0x881u);
        }
        else
        {
            edx = (edx & 0xffffff00u) | rd8(self + 0x881u);
    COW_AT(100cf409)
            wr8(self + 0x881u, (uint8_t)ecx);
        }
    }
    COW_AT(100cf40f)
    t27 = rd8(self + 0x882u);
    if ((uint8_t)t27 == 0xffu)
    {
    COW_AT(100cf417)
        t28 = rd8(eax + 0x3au);
        wr8(self + 0x882u, (uint8_t)t28);
        ecx = (ecx & 0xffffff00u) | t28;
    }
    COW_AT(100cf420)
    t29 = rd8(self + 0x883u);
    if ((uint8_t)t29 == 0xffu)
    {
    COW_AT(100cf428)
        t30 = rd8(eax + 0x3bu);
        wr8(self + 0x883u, (uint8_t)t30);
        edx = (edx & 0xffffff00u) | t30;
    }
    COW_AT(100cf431)
    t31 = rd8(self + 0x884u);
    if ((uint8_t)t31 == 0xffu)
    {
    COW_AT(100cf439)
        t32 = rd8(eax + 0x3cu);
        wr8(self + 0x884u, (uint8_t)t32);
        ecx = (ecx & 0xffffff00u) | t32;
    }
    COW_AT(100cf442)
    t33 = rd8(self + 0x885u);
    if ((uint8_t)t33 == 0xffu)
    {
    COW_AT(100cf44a)
        t34 = rd8(eax + 0x3du);
        wr8(self + 0x885u, (uint8_t)t34);
        edx = (edx & 0xffffff00u) | t34;
    }
    COW_AT(100cf453)
    if ((int8_t)rd8(eax + 0x3eu) < 0)
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 0x3eu);
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 0x3eu);
    COW_AT(100cf45a)
        if ((int8_t)rd8(self + 0x886u) >= 0)
        {
            edx = (edx & 0xffffff00u) | rd8(self + 0x886u);
        }
        else
        {
            edx = (edx & 0xffffff00u) | rd8(self + 0x886u);
    COW_AT(100cf464)
            wr8(self + 0x886u, (uint8_t)ecx);
        }
    }
    COW_AT(100cf46a)
    if ((int8_t)rd8(eax + 0x36u) < 0)
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 0x36u);
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 0x36u);
    COW_AT(100cf471)
        if ((int8_t)ecx < 121)
        {
    COW_AT(100cf488)
            if ((int8_t)rd8(self + 0x87eu) >= 0)
            {
                edx = (edx & 0xffffff00u) | rd8(self + 0x87eu);
            }
            else
            {
                edx = (edx & 0xffffff00u) | rd8(self + 0x87eu);
    COW_AT(100cf492)
                wr8(self + 0x87eu, (uint8_t)ecx);
            }
        }
        else
        {
    COW_AT(100cf476)
            if ((int8_t)rd8(self + 0x888u) >= 0)
            {
                edx = (edx & 0xffffff00u) | rd8(self + 0x888u);
            }
            else
            {
                edx = (edx & 0xffffff00u) | rd8(self + 0x888u);
    COW_AT(100cf480)
                wr8(self + 0x888u, (uint8_t)ecx);
            }
        }
    }
    COW_AT(100cf498)
    if ((int8_t)rd8(eax + 0x3fu) < 0)
    {
        eax = (eax & 0xffffff00u) | rd8(eax + 0x3fu);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(eax + 0x3fu);
    COW_AT(100cf49f)
        if ((int8_t)eax < 121)
        {
    COW_AT(100cf4b5)
            if ((int8_t)rd8(self + 0x87eu) < 0)
            {
    COW_AT(100cf4bf)
                wr8(self + 0x87eu, (uint8_t)eax);
            }
        }
        else
        {
    COW_AT(100cf4a3)
            if ((int8_t)rd8(self + 0x888u) < 0)
            {
    COW_AT(100cf4ad)
                wr8(self + 0x888u, (uint8_t)eax);
            }
        }
    }
    goto L_100cf4c5;
L_100cf536: ;
    COW_AT(100cf536)
    wr32(sp0 - 0x34u, COW_IMG(0x1035f964u));
L_100cf6b3: ;
    COW_AT(100cf6b3)
    g->esp = sp0 - 0x34u;
    cow_stdcall(g, COW_IMG(0x10017d30u), 0);
    COW_AT(100cf6b8)
    goto L_100cf6bb;
L_100cf540: ;
    COW_AT(100cf540)
    g->eax = eax;
    g->edx = rd32(self);
    t52 = rd32(self);
    g->esp = sp0 - 0x30u;
    t53 = cow_thiscall(g, rd32(t52 + 0x394u), self, 0);
    t54 = g->edx;
    eax = t53;
    edx = t54;
    COW_AT(100cf54a)
    if (eax == 0u) goto L_100cf57c;
    COW_AT(100cf54e)
    if (rd32(self + 0x790u) == 0u)
    {
        ecx = rd32(self + 0x790u);
        goto L_100cf572;
    }
    ecx = rd32(self + 0x790u);
    COW_AT(100cf558)
    g->esp = sp0 - 0x30u;
    cow_thiscall(g, COW_IMG(0x10084540u), ecx, 0);
    d55 = cow_take_float(g);
    x0 = d55;
    COW_AT(100cf55d)
    wrf32(self + 0x754u, (float)x0);
    wr32(self + 0x75cu, 0x3f800000u);
    goto L_100cf6bb;
L_100cf572: ;
    COW_AT(100cf572)
    wr32(sp0 - 0x34u, COW_IMG(0x1035f928u));
    goto L_100cf6b3;
L_100cf57c: ;
    COW_AT(100cf57c)
    g->eax = rd32(self);
    t56 = rd32(self);
    g->esp = sp0 - 0x30u;
    t57 = cow_thiscall(g, rd32(t56 + 0x3a4u), self, 0);
    eax = t57;
    COW_AT(100cf586)
    if (eax == 0u) goto L_100cf599;
    COW_AT(100cf58a)
    wr32(self + 0x754u, 0u);
    goto L_100cf6bb;
L_100cf599: ;
    COW_AT(100cf599)
    g->eax = eax;
    g->edx = rd32(self);
    t58 = rd32(self);
    g->esp = sp0 - 0x30u;
    t59 = cow_thiscall(g, rd32(t58 + 0x36cu), self, 0);
    t60 = g->ecx;
    t61 = g->edx;
    eax = t59;
    ecx = t60;
    edx = t61;
    COW_AT(100cf5a3)
    if (eax == 0u) goto L_100cf624;
    COW_AT(100cf5a7)
    if (rd32(self + 0x768u) == 0u) goto L_100cf61a;
    edi = rd32(self + 0x768u);
    COW_AT(100cf5b1)
    g->eax = eax;
    g->esp = sp0 - 0x30u;
    t62 = cow_fastcall(g, COW_IMG(0x10084420u), edi, edx, 0);
    t63 = g->edx;
    eax = t62;
    edx = t63;
    COW_AT(100cf5be)
    wr32(sp0 - 0x34u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t64 = cow_thiscall(g, COW_IMG(0x10022190u), self + 0x878u, 1, eax);
    t65 = g->edx;
    d66 = cow_take_float(g);
    eax = t64;
    edx = t65;
    x0 = d66;
    COW_AT(100cf5c6)
    wrf32(sp0 + 4u, (float)x0);
    g->eax = eax;
    g->esp = sp0 - 0x30u;
    t67 = cow_fastcall(g, COW_IMG(0x10084420u), edi, edx, 0);
    t68 = g->edx;
    eax = t67;
    edx = t68;
    COW_AT(100cf5d1)
    wr32(sp0 - 0x34u, eax);
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    cow_thiscall(g, COW_IMG(0x100221e0u), self + 0x878u, 1, eax);
    t69 = g->edx;
    d70 = cow_take_float(g);
    edx = t69;
    x0 = d70;
    COW_AT(100cf5d9)
    t71 = rd32(sp0 + 4u);
    wrf32(self + 0x758u, (float)x0);
    wr32(self + 0x760u, t71);
    g->eax = t71;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t72 = cow_thiscall(g, COW_IMG(0x10084500u), edi, 0);
    t73 = g->edx;
    eax = t72;
    edx = t73;
    ebx = edi + 0x878u;
    COW_AT(100cf5f6)
    wr32(sp0 - 0x34u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t74 = cow_thiscall(g, COW_IMG(0x10022120u), ebx, 1, eax);
    t75 = g->edx;
    d76 = cow_take_float(g);
    eax = t74;
    edx = t75;
    x0 = d76;
    COW_AT(100cf5fe)
    wrf32(sp0 + 4u, (float)x0);
    wr32(sp0 - 0x34u, 1u);
    g->esp = sp0 - 0x30u;
    cow_thiscall(g, COW_IMG(0x10022120u), ebx, 1, 1u);
    d77 = cow_take_float(g);
    x0 = d77;
    COW_AT(100cf60b)
    d78 = fr(g, (double)rdf32(sp0 + 4u) / x0);
    wrf32(self + 0x754u, (float)d78);
    goto L_100cf6bb;
L_100cf61a: ;
    COW_AT(100cf61a)
    wr32(sp0 - 0x34u, COW_IMG(0x1035f8ecu));
    goto L_100cf6b3;
L_100cf624: ;
    COW_AT(100cf624)
    g->eax = eax;
    g->edx = rd32(self);
    t79 = rd32(self);
    g->esp = sp0 - 0x30u;
    t80 = cow_thiscall(g, rd32(t79 + 0x378u), self, 0);
    t81 = g->edx;
    eax = t80;
    edx = t81;
    COW_AT(100cf62e)
    if (eax == 0u) goto L_100cf65c;
    COW_AT(100cf632)
    if (rd32(self + 0x76cu) == 0u)
    {
        ecx = rd32(self + 0x76cu);
        goto L_100cf655;
    }
    ecx = rd32(self + 0x76cu);
    COW_AT(100cf63c)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t82 = cow_thiscall(g, COW_IMG(0x10084520u), ecx, 0);
    t83 = g->edx;
    eax = t82;
    edx = t83;
L_100cf641: ;
    COW_AT(100cf641)
    wr32(sp0 - 0x34u, eax);
    g->esp = sp0 - 0x30u;
    cow_thiscall(g, COW_IMG(0x10022120u), self + 0x878u, 1, eax);
    d86 = cow_take_float(g);
    x0 = d86;
    COW_AT(100cf64d)
    wrf32(self + 0x754u, (float)x0);
    goto L_100cf6bb;
L_100cf655: ;
    COW_AT(100cf655)
    wr32(sp0 - 0x34u, COW_IMG(0x1035f8b0u));
    goto L_100cf6b3;
L_100cf65c: ;
    COW_AT(100cf65c)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t84 = cow_thiscall(g, COW_IMG(0x10084500u), self, 0);
    t85 = g->edx;
    eax = t84;
    edx = t85;
    COW_AT(100cf663)
    goto L_100cf641;
L_100cf665: ;
    COW_AT(100cf665)
    if (rd32(self + 0x768u) == 0u) goto L_100cf6ae;
    edi = rd32(self + 0x768u);
    COW_AT(100cf66f)
    t87 = rd8(edi + 0x885u);
    wr8(sp0 + 4u, (uint8_t)t87);
    t88 = (uint8_t)rd32(sp0 + 4u);
    wr32(sp0 - 0x34u, t88);
    g->eax = (eax & 0xffffff00u) | t87;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t89 = cow_thiscall(g, COW_IMG(0x10022120u), self + 0x878u, 1, t88);
    t90 = g->edx;
    d91 = cow_take_float(g);
    eax = t89;
    edx = t90;
    x0 = d91;
    COW_AT(100cf68b)
    wrf32(sp0 + 4u, (float)x0);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t92 = cow_thiscall(g, COW_IMG(0x10084500u), edi, 0);
    t93 = g->edx;
    eax = t92;
    edx = t93;
    COW_AT(100cf696)
    wr32(sp0 - 0x34u, eax);
    g->esp = sp0 - 0x30u;
    cow_thiscall(g, COW_IMG(0x10022120u), edi + 0x878u, 1, eax);
    d94 = cow_take_float(g);
    x0 = d94;
    COW_AT(100cf6a2)
    d95 = fr(g, x0 * (double)rdf32(sp0 + 4u));
    wrf32(self + 0x754u, (float)d95);
    goto L_100cf6bb;
L_100cf6ae: ;
    COW_AT(100cf6ae)
    wr32(sp0 - 0x34u, COW_IMG(0x1035f870u));
    goto L_100cf6b3;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100cf210(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100cf228u:
    {
        uint32_t eax;
        uint32_t ebp;
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
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x100cf239u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x3cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100cf245u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x3cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100cf250u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x3cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100cf25au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x3cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100cf266u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x3cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100cf271u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x3cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100cf275u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x3cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100cf27au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x3cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100cf27cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x3cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100cf28cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x100cf294u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x100cf2a3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x100cf2aeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x100cf2b9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x100cf2c1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x100cf2cbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x100cf2d6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x100cf2dbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x100cf2ddu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x100cf2eeu:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x100cf2ffu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf309u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf311u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf31au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf32bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        g->edi = self + 0x878u;
        (void)sp0;
        return 1;
    }
    case 0x100cf336u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf33bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf343u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf349u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf351u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf357u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf35eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf368u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf36eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf375u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf37fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf385u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf38cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf396u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf39cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf3a3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf3adu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf3b3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf3bau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf3c4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf3cau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf3d1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf3dbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf3e1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf3e8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf3f2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf3f8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf3ffu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf409u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf40fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf417u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf420u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf428u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf431u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf439u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf442u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf44au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf453u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf45au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf464u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf46au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf471u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf476u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf480u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf488u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf492u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf498u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf49fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf4a3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf4adu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf4b5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf4bfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf4c5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf4d0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf4dcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf4e6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf4eeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf4f8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf500u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x100cf50au:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x100cf50eu:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x100cf518u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x100cf51fu:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x100cf52bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x100cf536u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x100cf540u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x100cf54au:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x100cf54eu:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x100cf558u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x100cf55du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x100cf572u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x100cf57cu:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x100cf586u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x100cf58au:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x100cf599u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x100cf5a3u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x100cf5a7u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x100cf5b1u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x100cf5beu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = self + 0x878u;
        (void)sp0;
        return 1;
    }
    case 0x100cf5c6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x30u;
        g->ebx = self + 0x878u;
        (void)sp0;
        return 1;
    }
    case 0x100cf5d1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = self + 0x878u;
        (void)sp0;
        return 1;
    }
    case 0x100cf5d9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x100cf5f6u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x100cf5feu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x100cf60bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x100cf61au:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x100cf624u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x100cf62eu:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x100cf632u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x100cf63cu:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x100cf641u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x100cf64du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x100cf655u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x100cf65cu:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x100cf663u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x100cf665u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf66fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x100cf68bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x100cf696u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x100cf6a2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x100cf6aeu:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x100cf6b3u:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x100cf6b8u:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x100cf6bbu:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x100cf6c6u:
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
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x100cf6dcu:
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
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x38u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x100cf6e2u:
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
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x38u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x100cf6e8u:
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
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x38u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x100cf6f3u:
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
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x100cf6f9u:
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
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x100cf703u:
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
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x100cf70cu:
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
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x100cf71bu:
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
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x30u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x100cf725u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x30u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x100cf72eu:
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
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x30u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x100cf732u:
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
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x30u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x100cf73eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100cf210(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100cf210(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
