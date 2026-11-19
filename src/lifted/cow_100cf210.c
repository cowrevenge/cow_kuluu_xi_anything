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
    double d46;
    double d50;
    double d61;
    double d65;
    double d71;
    double d72;
    double d73;
    double d81;
    double d86;
    double d89;
    double d90;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t101;
    uint32_t t102;
    uint32_t t103;
    uint32_t t104;
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
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
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
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t69;
    uint32_t t7;
    uint32_t t70;
    uint32_t t74;
    uint32_t t75;
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
    uint32_t t80;
    uint32_t t82;
    uint32_t t83;
    uint32_t t84;
    uint32_t t85;
    uint32_t t87;
    uint32_t t88;
    uint32_t t9;
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
    cow_frame(g, sp0, 68u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100cf245u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_100cf245;
    case 0x100cf25au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf25a;
    case 0x100cf275u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf275;
    case 0x100cf27au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf27a;
    case 0x100cf27cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf27c;
    case 0x100cf294u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf294;
    case 0x100cf2c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf2c1;
    case 0x100cf2d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf2d6;
    case 0x100cf2dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf2db;
    case 0x100cf2ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf2dd;
    case 0x100cf2ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf2ff;
    case 0x100cf309u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf309;
    case 0x100cf311u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf311;
    case 0x100cf31au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf31a;
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
    case 0x100cf4dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf4dc;
    case 0x100cf4eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf4ee;
    case 0x100cf500u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf500;
    case 0x100cf50eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf50e;
    case 0x100cf518u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf518;
    case 0x100cf536u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf536;
    case 0x100cf540u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf540;
    case 0x100cf54eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf54e;
    case 0x100cf558u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf558;
    case 0x100cf572u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf572;
    case 0x100cf57cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf57c;
    case 0x100cf58au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf58a;
    case 0x100cf599u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf599;
    case 0x100cf5a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf5a7;
    case 0x100cf5b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf5b1;
    case 0x100cf61au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf61a;
    case 0x100cf624u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf624;
    case 0x100cf632u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf632;
    case 0x100cf63cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf63c;
    case 0x100cf641u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf641;
    case 0x100cf655u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf655;
    case 0x100cf65cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf65c;
    case 0x100cf665u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf665;
    case 0x100cf66fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf66f;
    case 0x100cf6aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf6ae;
    case 0x100cf6b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf6b3;
    case 0x100cf6bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf6bb;
    case 0x100cf6c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf6c6;
    case 0x100cf6e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf6e2;
    case 0x100cf6e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf6e8;
    case 0x100cf6f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100cf6f9;
    case 0x100cf70cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_100cf70c;
    case 0x100cf725u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_100cf725;
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
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x34u, 0x29u);
    wr32(sp0 - 0x38u, t2);
    wr32(sp0 - 0x3cu, sp0 - 0x20u);
    g->edx = t3;
    cow_call_regs(g, COW_IMG(0x10072430u), t2, g->ecx, g->edx, 0, 4, sp0 - 0x20u, t2, 0x29u, 0u);
    t4 = g->edx;
    if (rd32(sp0 - 0x20u) == 0u)
    {
        ebx = in_ebx;
        loc_24 = in_ebp;
        loc_28 = in_esi;
        loc_2c = in_edi;
        goto L_100cf70c;
    }
    eax = rd32(sp0 - 0x20u);
    edx = t4;
    ebp = t1;
    COW_AT(100cf245)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t5 = cow_thiscall(g, COW_IMG(0x1002b6a0u), self + 0x674u, 0);
    t6 = g->edx;
    if (t5 == 0u)
    {
        eax = t5;
        edx = t6;
        ebx = in_ebx;
        goto L_100cf73e;
    }
    eax = t5;
    edi = t5;
    COW_AT(100cf25a)
    t7 = rd32(sp0 - 0x20u);
    wr32(sp0 - 0x30u, t7);
    g->edx = t7;
    g->esp = sp0 - 0x2cu;
    cow_thiscall(g, COW_IMG(0x10029e50u), edi, 1, t7);
    t8 = g->edx;
    g->edx = t8;
    cow_call_regs(g, COW_IMG(0x10071e90u), rd32(sp0 - 0x20u), rd32(rd32(sp0 - 0x20u)), g->edx, 1, 0);
    t9 = g->edx;
    if (ebp == 0u)
    {
        edx = t9;
    COW_AT(100cf27a)
        eax = 0u;
    }
    else
    {
        edx = t9;
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
    if (rd32(sp0 - 8u) == 0u)
    {
        eax = rd32(sp0 - 8u);
        goto L_100cf2c1;
    }
    eax = rd32(sp0 - 8u);
    edx = t10;
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
    g->edx = t13;
    t14 = cow_call_regs(g, COW_IMG(0x10071e90u), t12, rd32(rd32(sp0 - 0x20u)), g->edx, 1, 0);
    t15 = g->edx;
    wr32(sp0 - 0x30u, 0u);
    g->edx = t15;
    cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x1cu, 1, 0u);
    t16 = g->edx;
    if (rd32(sp0 - 8u) != 0u)
    {
        eax = rd32(sp0 - 8u);
        edx = t16;
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
    wr8(sp0 + 4u, t18 != 0u);
    if (ebp == 0u)
    {
        edx = t19;
    COW_AT(100cf2db)
        eax = 0u;
    }
    else
    {
        edx = t19;
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
    if (rd32(sp0 - 8u) == 0u)
    {
        edx = t21;
        goto L_100cf4dc;
    }
    eax = rd32(sp0 - 8u);
    ecx = t20;
    edx = t21;
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
        if (rd32(eax + 0x20u) != 0x6e756f6du) goto L_100cf33b;
    COW_AT(100cf31a)
        wr32(sp0 - 0x34u, eax + 0x30u);
        g->eax = eax + 0x30u;
        g->edx = edx;
        g->esp = sp0 - 0x30u;
        t22 = cow_thiscall(g, COW_IMG(0x10022270u), self + 0x878u, 1, eax + 0x30u);
        t23 = g->edx;
        wr32(sp0 - 0x34u, ebp + 0x38u);
        g->edx = t23;
        t24 = cow_thiscall(g, COW_IMG(0x10022300u), self + 0x878u, 1, ebp + 0x38u);
        t25 = g->edx;
        eax = t24;
        edx = t25;
    }
L_100cf4c5: ;
    COW_AT(100cf4c5)
    wr32(sp0 - 0x34u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x1cu, 1, 0u);
    t30 = g->ecx;
    t31 = g->edx;
    if (rd32(sp0 - 8u) != 0u)
    {
        eax = rd32(sp0 - 8u);
        ecx = t30;
        edx = t31;
        goto L_100cf2ff;
    }
    edx = t31;
L_100cf4dc: ;
    COW_AT(100cf4dc)
    g->eax = rd32(self);
    g->edx = edx;
    t32 = rd32(self);
    g->esp = sp0 - 0x30u;
    t33 = cow_thiscall(g, rd32(t32 + 0x34cu), self, 0);
    t34 = g->ecx;
    t35 = g->edx;
    if (t33 != 0u)
    {
        eax = t33;
        ecx = t34;
        edx = t35;
        goto L_100cf665;
    }
    eax = t33;
    COW_AT(100cf4ee)
    g->eax = eax;
    g->edx = rd32(self);
    t36 = rd32(self);
    g->esp = sp0 - 0x30u;
    t37 = cow_thiscall(g, rd32(t36 + 0x358u), self, 0);
    t38 = g->ecx;
    t39 = g->edx;
    if (t37 != 0u)
    {
        eax = t37;
        ecx = t38;
        edx = t39;
        goto L_100cf665;
    }
    edx = t39;
    COW_AT(100cf500)
    g->eax = rd32(self);
    g->edx = edx;
    t40 = rd32(self);
    g->esp = sp0 - 0x30u;
    t41 = cow_thiscall(g, rd32(t40 + 0x360u), self, 0);
    t42 = g->ecx;
    t43 = g->edx;
    if (t41 == 0u)
    {
        eax = t41;
        goto L_100cf540;
    }
    eax = t41;
    ecx = t42;
    edx = t43;
    COW_AT(100cf50e)
    if (rd32(self + 0x768u) == 0u) goto L_100cf536;
    edi = rd32(self + 0x768u);
    COW_AT(100cf518)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t44 = cow_thiscall(g, COW_IMG(0x10084500u), edi, 0);
    t45 = g->edx;
    wr32(sp0 - 0x34u, t44);
    cow_thiscall(g, COW_IMG(0x10022120u), edi + 0x878u, 1, t44);
    d46 = cow_take_float(g);
    wrf32(self + 0x754u, (float)d46);
L_100cf6bb: ;
    COW_AT(100cf6bb)
    if (rd32(self + 0x814u) != 0u)
    {
        ebx = rd32(sp0 - 0x30u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_2c = rd32(sp0 - 0x2cu);
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
        t91 = rd32(self);
        g->esp = sp0 - 0x2cu;
        t92 = cow_thiscall(g, rd32(t91 + 0x1ecu), self, 3, sp0 + 4u, 5u, 0x62697666u);
        t93 = g->edx;
        if (rd32(t92) == 0u)
        {
            loc_24 = rd32(sp0 - 0x24u);
            loc_28 = rd32(sp0 - 0x28u);
            loc_2c = rd32(sp0 - 0x2cu);
        }
        else
        {
            eax = rd32(t92);
            edx = t93;
    COW_AT(100cf6e2)
            if (rd32(eax) == 0u)
            {
                loc_24 = rd32(sp0 - 0x24u);
                loc_28 = rd32(sp0 - 0x28u);
                loc_2c = rd32(sp0 - 0x2cu);
            }
            else
            {
                eax = rd32(eax);
    COW_AT(100cf6e8)
                wr32(sp0 - 0x30u, 0u);
                wr32(sp0 - 0x34u, self);
                wr32(sp0 - 0x38u, self);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x2cu;
                t94 = cow_thiscall(g, COW_IMG(0x100536c0u), eax, 3, self, self, 0u);
                t95 = g->edx;
                if (t94 == 0u)
                {
                    loc_24 = rd32(sp0 - 0x24u);
                    loc_28 = rd32(sp0 - 0x28u);
                    loc_2c = rd32(sp0 - 0x2cu);
                }
                else
                {
                    eax = t94;
                    edx = t95;
                    edi = t94;
    COW_AT(100cf6f9)
                    wr32(edi + 0x64u, self);
                    g->esp = sp0 - 0x2cu;
                    cow_call_regs(g, COW_IMG(0x10071e90u), eax, edi, g->edx, 1, 0);
                    t96 = rd32(edi + 0x14u);
                    wr32(self + 0x814u, t96);
                    loc_24 = rd32(sp0 - 0x24u);
                    loc_28 = rd32(sp0 - 0x28u);
                    loc_2c = rd32(sp0 - 0x2cu);
                }
            }
        }
    }
L_100cf70c: ;
    COW_AT(100cf70c)
    wr32(sp0 - 0x30u, sp0 + 4u);
    g->eax = sp0 + 4u;
    g->edx = rd32(self);
    t97 = rd32(self);
    g->esp = sp0 - 0x2cu;
    t98 = cow_thiscall(g, rd32(t97 + 0x1e0u), self, 1, sp0 + 4u);
    t99 = g->edx;
    wr32(sp0 - 0x20u, rd32(t98));
    if (rd32(t98) == 0u)
    {
        eax = rd32(t98);
        edx = t99;
    }
    else
    {
        eax = rd32(t98);
        edx = t99;
        loc_20 = rd32(t98);
    COW_AT(100cf725)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x2cu;
        t100 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 0x20u, 0);
        t101 = g->edx;
        if ((uint8_t)t100 == 0u)
        {
            eax = t100;
            edx = t101;
        }
        else
        {
            eax = t100;
            edx = t101;
    COW_AT(100cf732)
            t102 = rd32(sp0 - 0x20u);
            wr32(sp0 - 0x30u, t102);
            g->eax = eax;
            g->esp = sp0 - 0x2cu;
            t103 = cow_fastcall(g, COW_IMG(0x10085060u), self, edx, 1, t102);
            t104 = g->edx;
            eax = t103;
            edx = t104;
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
    if (rd8(self + 0x882u) == 0xffu)
    {
    COW_AT(100cf417)
        t26 = rd8(eax + 0x3au);
        wr8(self + 0x882u, (uint8_t)t26);
        ecx = (ecx & 0xffffff00u) | t26;
    }
    COW_AT(100cf420)
    if (rd8(self + 0x883u) == 0xffu)
    {
    COW_AT(100cf428)
        t27 = rd8(eax + 0x3bu);
        wr8(self + 0x883u, (uint8_t)t27);
        edx = (edx & 0xffffff00u) | t27;
    }
    COW_AT(100cf431)
    if (rd8(self + 0x884u) == 0xffu)
    {
    COW_AT(100cf439)
        t28 = rd8(eax + 0x3cu);
        wr8(self + 0x884u, (uint8_t)t28);
        ecx = (ecx & 0xffffff00u) | t28;
    }
    COW_AT(100cf442)
    if (rd8(self + 0x885u) == 0xffu)
    {
    COW_AT(100cf44a)
        t29 = rd8(eax + 0x3du);
        wr8(self + 0x885u, (uint8_t)t29);
        edx = (edx & 0xffffff00u) | t29;
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
    goto L_100cf6bb;
L_100cf540: ;
    COW_AT(100cf540)
    g->eax = eax;
    g->edx = rd32(self);
    t47 = rd32(self);
    g->esp = sp0 - 0x30u;
    t48 = cow_thiscall(g, rd32(t47 + 0x394u), self, 0);
    t49 = g->edx;
    if (t48 == 0u)
    {
        edx = t49;
        goto L_100cf57c;
    }
    eax = t48;
    edx = t49;
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
    d50 = cow_take_float(g);
    wrf32(self + 0x754u, (float)d50);
    wr32(self + 0x75cu, 0x3f800000u);
    goto L_100cf6bb;
L_100cf572: ;
    COW_AT(100cf572)
    wr32(sp0 - 0x34u, COW_IMG(0x1035f928u));
    goto L_100cf6b3;
L_100cf57c: ;
    COW_AT(100cf57c)
    g->eax = rd32(self);
    t51 = rd32(self);
    g->esp = sp0 - 0x30u;
    t52 = cow_thiscall(g, rd32(t51 + 0x3a4u), self, 0);
    if (t52 == 0u)
    {
        eax = t52;
        goto L_100cf599;
    }
    COW_AT(100cf58a)
    wr32(self + 0x754u, 0u);
    goto L_100cf6bb;
L_100cf599: ;
    COW_AT(100cf599)
    g->eax = eax;
    g->edx = rd32(self);
    t53 = rd32(self);
    g->esp = sp0 - 0x30u;
    t54 = cow_thiscall(g, rd32(t53 + 0x36cu), self, 0);
    t55 = g->ecx;
    t56 = g->edx;
    if (t54 == 0u)
    {
        eax = t54;
        goto L_100cf624;
    }
    eax = t54;
    ecx = t55;
    edx = t56;
    COW_AT(100cf5a7)
    if (rd32(self + 0x768u) == 0u) goto L_100cf61a;
    edi = rd32(self + 0x768u);
    COW_AT(100cf5b1)
    g->eax = eax;
    g->esp = sp0 - 0x30u;
    t57 = cow_fastcall(g, COW_IMG(0x10084420u), edi, edx, 0);
    t58 = g->edx;
    wr32(sp0 - 0x34u, t57);
    g->edx = t58;
    t59 = cow_thiscall(g, COW_IMG(0x10022190u), self + 0x878u, 1, t57);
    t60 = g->edx;
    d61 = cow_take_float(g);
    wrf32(sp0 + 4u, (float)d61);
    t62 = cow_fastcall(g, COW_IMG(0x10084420u), edi, t60, 0);
    t63 = g->edx;
    wr32(sp0 - 0x34u, t62);
    g->edx = t63;
    cow_thiscall(g, COW_IMG(0x100221e0u), self + 0x878u, 1, t62);
    t64 = g->edx;
    d65 = cow_take_float(g);
    t66 = rd32(sp0 + 4u);
    wrf32(self + 0x758u, (float)d65);
    wr32(self + 0x760u, t66);
    g->eax = t66;
    g->edx = t64;
    t67 = cow_thiscall(g, COW_IMG(0x10084500u), edi, 0);
    t68 = g->edx;
    wr32(sp0 - 0x34u, t67);
    g->edx = t68;
    t69 = cow_thiscall(g, COW_IMG(0x10022120u), edi + 0x878u, 1, t67);
    t70 = g->edx;
    d71 = cow_take_float(g);
    wrf32(sp0 + 4u, (float)d71);
    wr32(sp0 - 0x34u, 1u);
    cow_thiscall(g, COW_IMG(0x10022120u), edi + 0x878u, 1, 1u);
    d72 = cow_take_float(g);
    d73 = fr(g, (double)rdf32(sp0 + 4u) / d72);
    wrf32(self + 0x754u, (float)d73);
    goto L_100cf6bb;
L_100cf61a: ;
    COW_AT(100cf61a)
    wr32(sp0 - 0x34u, COW_IMG(0x1035f8ecu));
    goto L_100cf6b3;
L_100cf624: ;
    COW_AT(100cf624)
    g->eax = eax;
    g->edx = rd32(self);
    t74 = rd32(self);
    g->esp = sp0 - 0x30u;
    t75 = cow_thiscall(g, rd32(t74 + 0x378u), self, 0);
    t76 = g->edx;
    if (t75 == 0u)
    {
        eax = t75;
        edx = t76;
        goto L_100cf65c;
    }
    eax = t75;
    edx = t76;
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
    t77 = cow_thiscall(g, COW_IMG(0x10084520u), ecx, 0);
    t78 = g->edx;
    eax = t77;
    edx = t78;
L_100cf641: ;
    COW_AT(100cf641)
    wr32(sp0 - 0x34u, eax);
    g->esp = sp0 - 0x30u;
    cow_thiscall(g, COW_IMG(0x10022120u), self + 0x878u, 1, eax);
    d81 = cow_take_float(g);
    wrf32(self + 0x754u, (float)d81);
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
    t79 = cow_thiscall(g, COW_IMG(0x10084500u), self, 0);
    t80 = g->edx;
    eax = t79;
    edx = t80;
    goto L_100cf641;
L_100cf665: ;
    COW_AT(100cf665)
    if (rd32(self + 0x768u) == 0u) goto L_100cf6ae;
    edi = rd32(self + 0x768u);
    COW_AT(100cf66f)
    t82 = rd8(edi + 0x885u);
    wr8(sp0 + 4u, (uint8_t)t82);
    t83 = (uint8_t)rd32(sp0 + 4u);
    wr32(sp0 - 0x34u, t83);
    g->eax = (eax & 0xffffff00u) | t82;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t84 = cow_thiscall(g, COW_IMG(0x10022120u), self + 0x878u, 1, t83);
    t85 = g->edx;
    d86 = cow_take_float(g);
    wrf32(sp0 + 4u, (float)d86);
    g->edx = t85;
    t87 = cow_thiscall(g, COW_IMG(0x10084500u), edi, 0);
    t88 = g->edx;
    wr32(sp0 - 0x34u, t87);
    cow_thiscall(g, COW_IMG(0x10022120u), edi + 0x878u, 1, t87);
    d89 = cow_take_float(g);
    d90 = fr(g, d89 * (double)rdf32(sp0 + 4u));
    wrf32(self + 0x754u, (float)d90);
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
    case 0x100cf245u:
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
    case 0x100cf70cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x2cu;
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
