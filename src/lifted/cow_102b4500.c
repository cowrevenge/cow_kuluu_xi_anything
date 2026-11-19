/* f_0x102b4500 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_102b4500(Guest* g)
{
    double d40;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_88;
    uint32_t loc_b0;
    uint32_t loc_d0;
    uint32_t loc_e4;
    uint32_t loc_e8;
    uint32_t loc_ec;
    uint32_t loc_f0;
    uint32_t loc_f4;
    uint32_t loc_f8;
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
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 284u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102b4521u: self = g->ecx; in_edx = g->edx; in_ebp = g->ebp; esi = g->esi; zf = g->zf; in_edi = rd32(sp0 - 0x104u); in_esi = rd32(sp0 - 0x100u); in_ebx = rd32(sp0 - 0xfcu); g->ebx = rd32(sp0 - 0xfcu); g->edi = rd32(sp0 - 0x104u); g->esi = rd32(sp0 - 0x100u); goto E_102b4521;
    case 0x102b452fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; zf = g->zf; in_edi = rd32(sp0 - 0x104u); in_esi = rd32(sp0 - 0x100u); in_ebx = rd32(sp0 - 0xfcu); g->ebx = rd32(sp0 - 0xfcu); g->edi = rd32(sp0 - 0x104u); g->esi = rd32(sp0 - 0x100u); goto E_102b452f;
    case 0x102b4550u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; zf = g->zf; loc_f0 = rd32(sp0 - 0xf0u); goto E_102b4550;
    case 0x102b4553u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; zf = g->zf; loc_f0 = rd32(sp0 - 0xf0u); goto E_102b4553;
    case 0x102b455eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; zf = g->zf; loc_f0 = rd32(sp0 - 0xf0u); goto E_102b455e;
    case 0x102b4594u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_e8 = rd32(sp0 - 0xe8u); goto E_102b4594;
    case 0x102b459du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_d0 = rd32(sp0 - 0xd0u); loc_b0 = rd32(sp0 - 0xb0u); goto E_102b459d;
    case 0x102b459fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_d0 = rd32(sp0 - 0xd0u); loc_b0 = rd32(sp0 - 0xb0u); goto E_102b459f;
    case 0x102b45adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_d0 = rd32(sp0 - 0xd0u); loc_b0 = rd32(sp0 - 0xb0u); goto E_102b45ad;
    case 0x102b45c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_d0 = rd32(sp0 - 0xd0u); loc_b0 = rd32(sp0 - 0xb0u); goto E_102b45c5;
    case 0x102b45d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_d0 = rd32(sp0 - 0xd0u); loc_b0 = rd32(sp0 - 0xb0u); goto E_102b45d0;
    case 0x102b45d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_d0 = rd32(sp0 - 0xd0u); loc_b0 = rd32(sp0 - 0xb0u); goto E_102b45d8;
    case 0x102b45e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_d0 = rd32(sp0 - 0xd0u); loc_b0 = rd32(sp0 - 0xb0u); goto E_102b45e7;
    case 0x102b45eau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_d0 = rd32(sp0 - 0xd0u); loc_b0 = rd32(sp0 - 0xb0u); goto E_102b45ea;
    case 0x102b45feu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_d0 = rd32(sp0 - 0xd0u); loc_b0 = rd32(sp0 - 0xb0u); goto E_102b45fe;
    case 0x102b4608u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_d0 = rd32(sp0 - 0xd0u); loc_b0 = rd32(sp0 - 0xb0u); goto E_102b4608;
    case 0x102b4610u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_d0 = rd32(sp0 - 0xd0u); loc_b0 = rd32(sp0 - 0xb0u); goto E_102b4610;
    case 0x102b4649u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102b4649;
    case 0x102b464cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102b464c;
    case 0x102b4677u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f4 = rd32(sp0 - 0xf4u); goto E_102b4677;
    case 0x102b467cu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_d0 = rd32(sp0 - 0xd0u); loc_b0 = rd32(sp0 - 0xb0u); goto E_102b467c;
    case 0x102b4681u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_d0 = rd32(sp0 - 0xd0u); loc_b0 = rd32(sp0 - 0xb0u); goto E_102b4681;
    case 0x102b46adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_d0 = rd32(sp0 - 0xd0u); loc_b0 = rd32(sp0 - 0xb0u); goto E_102b46ad;
    case 0x102b46b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_d0 = rd32(sp0 - 0xd0u); loc_b0 = rd32(sp0 - 0xb0u); goto E_102b46b2;
    case 0x102b46b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_d0 = rd32(sp0 - 0xd0u); loc_b0 = rd32(sp0 - 0xb0u); goto E_102b46b7;
    case 0x102b46c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_d0 = rd32(sp0 - 0xd0u); loc_b0 = rd32(sp0 - 0xb0u); goto E_102b46c2;
    case 0x102b46c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_d0 = rd32(sp0 - 0xd0u); loc_b0 = rd32(sp0 - 0xb0u); goto E_102b46c9;
    case 0x102b46ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102b46ff;
    case 0x102b4702u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102b4702;
    case 0x102b4719u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_d0 = rd32(sp0 - 0xd0u); loc_b0 = rd32(sp0 - 0xb0u); goto E_102b4719;
    case 0x102b4729u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_d0 = rd32(sp0 - 0xd0u); loc_b0 = rd32(sp0 - 0xb0u); goto E_102b4729;
    case 0x102b4748u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_d0 = rd32(sp0 - 0xd0u); loc_b0 = rd32(sp0 - 0xb0u); goto E_102b4748;
    case 0x102b4754u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_d0 = rd32(sp0 - 0xd0u); loc_b0 = rd32(sp0 - 0xb0u); loc_88 = rd32(sp0 - 0x88u); goto E_102b4754;
    case 0x102b4767u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_d0 = rd32(sp0 - 0xd0u); loc_b0 = rd32(sp0 - 0xb0u); loc_88 = rd32(sp0 - 0x88u); goto E_102b4767;
    case 0x102b476fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_d0 = rd32(sp0 - 0xd0u); loc_b0 = rd32(sp0 - 0xb0u); loc_88 = rd32(sp0 - 0x88u); goto E_102b476f;
    case 0x102b4779u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_d0 = rd32(sp0 - 0xd0u); loc_b0 = rd32(sp0 - 0xb0u); loc_88 = rd32(sp0 - 0x88u); goto E_102b4779;
    case 0x102b4782u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_d0 = rd32(sp0 - 0xd0u); loc_b0 = rd32(sp0 - 0xb0u); loc_88 = rd32(sp0 - 0x88u); goto E_102b4782;
    case 0x102b4783u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_d0 = rd32(sp0 - 0xd0u); loc_b0 = rd32(sp0 - 0xb0u); loc_88 = rd32(sp0 - 0x88u); goto E_102b4783;
    case 0x102b4789u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_d0 = rd32(sp0 - 0xd0u); loc_b0 = rd32(sp0 - 0xb0u); loc_88 = rd32(sp0 - 0x88u); goto E_102b4789;
    case 0x102b47aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_d0 = rd32(sp0 - 0xd0u); loc_b0 = rd32(sp0 - 0xb0u); loc_88 = rd32(sp0 - 0x88u); goto E_102b47aa;
    case 0x102b47adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_d0 = rd32(sp0 - 0xd0u); loc_b0 = rd32(sp0 - 0xb0u); loc_88 = rd32(sp0 - 0x88u); goto E_102b47ad;
    case 0x102b47bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_d0 = rd32(sp0 - 0xd0u); loc_b0 = rd32(sp0 - 0xb0u); loc_88 = rd32(sp0 - 0x88u); goto E_102b47bc;
    case 0x102b47ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_88 = rd32(sp0 - 0x88u); goto E_102b47eb;
    case 0x102b47f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_88 = rd32(sp0 - 0x88u); goto E_102b47f7;
    case 0x102b47fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_88 = rd32(sp0 - 0x88u); goto E_102b47fd;
    case 0x102b4806u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_88 = rd32(sp0 - 0x88u); goto E_102b4806;
    case 0x102b480bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_d0 = rd32(sp0 - 0xd0u); loc_b0 = rd32(sp0 - 0xb0u); goto E_102b480b;
    case 0x102b4812u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_d0 = rd32(sp0 - 0xd0u); loc_b0 = rd32(sp0 - 0xb0u); goto E_102b4812;
    case 0x102b4818u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_d0 = rd32(sp0 - 0xd0u); loc_b0 = rd32(sp0 - 0xb0u); goto E_102b4818;
    case 0x102b481fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_d0 = rd32(sp0 - 0xd0u); loc_b0 = rd32(sp0 - 0xb0u); goto E_102b481f;
    case 0x102b4825u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_d0 = rd32(sp0 - 0xd0u); loc_b0 = rd32(sp0 - 0xb0u); goto E_102b4825;
    case 0x102b4834u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_d0 = rd32(sp0 - 0xd0u); loc_b0 = rd32(sp0 - 0xb0u); goto E_102b4834;
    case 0x102b4837u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_ec = rd32(sp0 - 0xecu); loc_e8 = rd32(sp0 - 0xe8u); loc_e4 = rd32(sp0 - 0xe4u); loc_d0 = rd32(sp0 - 0xd0u); loc_b0 = rd32(sp0 - 0xb0u); goto E_102b4837;
    case 0x102b484cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_88 = rd32(sp0 - 0x88u); goto E_102b484c;
    case 0x102b4853u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_88 = rd32(sp0 - 0x88u); goto E_102b4853;
    case 0x102b4859u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_88 = rd32(sp0 - 0x88u); goto E_102b4859;
    case 0x102b4860u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_88 = rd32(sp0 - 0x88u); goto E_102b4860;
    case 0x102b4866u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_88 = rd32(sp0 - 0x88u); goto E_102b4866;
    case 0x102b487au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_88 = rd32(sp0 - 0x88u); goto E_102b487a;
    case 0x102b4882u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_88 = rd32(sp0 - 0x88u); goto E_102b4882;
    case 0x102b4885u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_88 = rd32(sp0 - 0x88u); goto E_102b4885;
    case 0x102b4889u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_88 = rd32(sp0 - 0x88u); goto E_102b4889;
    case 0x102b4890u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_88 = rd32(sp0 - 0x88u); goto E_102b4890;
    case 0x102b489eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_88 = rd32(sp0 - 0x88u); goto E_102b489e;
    case 0x102b48a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_88 = rd32(sp0 - 0x88u); goto E_102b48a4;
    case 0x102b48abu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_88 = rd32(sp0 - 0x88u); goto E_102b48ab;
    case 0x102b48b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_88 = rd32(sp0 - 0x88u); goto E_102b48b1;
    case 0x102b48c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_88 = rd32(sp0 - 0x88u); goto E_102b48c5;
    case 0x102b48c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_88 = rd32(sp0 - 0x88u); goto E_102b48c8;
    case 0x102b48dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_88 = rd32(sp0 - 0x88u); goto E_102b48df;
    case 0x102b48edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_88 = rd32(sp0 - 0x88u); goto E_102b48ed;
    case 0x102b48efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_88 = rd32(sp0 - 0x88u); goto E_102b48ef;
    case 0x102b48f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_88 = rd32(sp0 - 0x88u); goto E_102b48f7;
    case 0x102b48fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_88 = rd32(sp0 - 0x88u); goto E_102b48fc;
    case 0x102b48feu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_88 = rd32(sp0 - 0x88u); goto E_102b48fe;
    case 0x102b4902u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_88 = rd32(sp0 - 0x88u); goto E_102b4902;
    case 0x102b4909u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_88 = rd32(sp0 - 0x88u); goto E_102b4909;
    case 0x102b4912u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_88 = rd32(sp0 - 0x88u); goto E_102b4912;
    case 0x102b4917u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_88 = rd32(sp0 - 0x88u); goto E_102b4917;
    case 0x102b492cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_88 = rd32(sp0 - 0x88u); goto E_102b492c;
    case 0x102b492fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_88 = rd32(sp0 - 0x88u); goto E_102b492f;
    case 0x102b4942u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_88 = rd32(sp0 - 0x88u); goto E_102b4942;
    case 0x102b49d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); goto E_102b49d0;
    case 0x102b49dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); goto E_102b49da;
    case 0x102b49ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); goto E_102b49dd;
    case 0x102b49e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); goto E_102b49e5;
    case 0x102b49f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); goto E_102b49f0;
    case 0x102b49f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); goto E_102b49f5;
    case 0x102b49f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); goto E_102b49f9;
    case 0x102b4a02u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); goto E_102b4a02;
    case 0x102b4a04u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); goto E_102b4a04;
    case 0x102b4a11u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); goto E_102b4a11;
    case 0x102b4a62u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f4 = rd32(sp0 - 0xf4u); goto E_102b4a62;
    case 0x102b4a68u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f4 = rd32(sp0 - 0xf4u); goto E_102b4a68;
    case 0x102b4a6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f4 = rd32(sp0 - 0xf4u); goto E_102b4a6f;
    case 0x102b4a75u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f4 = rd32(sp0 - 0xf4u); goto E_102b4a75;
    case 0x102b4a8au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f4 = rd32(sp0 - 0xf4u); goto E_102b4a8a;
    case 0x102b4a8du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f4 = rd32(sp0 - 0xf4u); goto E_102b4a8d;
    case 0x102b4a91u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f4 = rd32(sp0 - 0xf4u); goto E_102b4a91;
    case 0x102b4a98u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f4 = rd32(sp0 - 0xf4u); goto E_102b4a98;
    case 0x102b4aa6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f4 = rd32(sp0 - 0xf4u); goto E_102b4aa6;
    case 0x102b4aacu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f4 = rd32(sp0 - 0xf4u); goto E_102b4aac;
    case 0x102b4ab3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f4 = rd32(sp0 - 0xf4u); goto E_102b4ab3;
    case 0x102b4ab9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f4 = rd32(sp0 - 0xf4u); goto E_102b4ab9;
    case 0x102b4acdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f4 = rd32(sp0 - 0xf4u); goto E_102b4acd;
    case 0x102b4ad0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f4 = rd32(sp0 - 0xf4u); goto E_102b4ad0;
    case 0x102b4ae7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f4 = rd32(sp0 - 0xf4u); goto E_102b4ae7;
    case 0x102b4afcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f4 = rd32(sp0 - 0xf4u); goto E_102b4afc;
    case 0x102b4affu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f4 = rd32(sp0 - 0xf4u); goto E_102b4aff;
    case 0x102b4b03u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f4 = rd32(sp0 - 0xf4u); goto E_102b4b03;
    case 0x102b4b0au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f4 = rd32(sp0 - 0xf4u); goto E_102b4b0a;
    case 0x102b4b18u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f4 = rd32(sp0 - 0xf4u); goto E_102b4b18;
    case 0x102b4b1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f4 = rd32(sp0 - 0xf4u); goto E_102b4b1e;
    case 0x102b4b25u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f4 = rd32(sp0 - 0xf4u); goto E_102b4b25;
    case 0x102b4b2bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f4 = rd32(sp0 - 0xf4u); goto E_102b4b2b;
    case 0x102b4b3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f4 = rd32(sp0 - 0xf4u); goto E_102b4b3f;
    case 0x102b4b42u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f4 = rd32(sp0 - 0xf4u); goto E_102b4b42;
    case 0x102b4b59u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f4 = rd32(sp0 - 0xf4u); goto E_102b4b59;
    case 0x102b4b77u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f4 = rd32(sp0 - 0xf4u); goto E_102b4b77;
    case 0x102b4b7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f4 = rd32(sp0 - 0xf4u); goto E_102b4b7c;
    case 0x102b4b82u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f4 = rd32(sp0 - 0xf4u); goto E_102b4b82;
    case 0x102b4b94u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); goto E_102b4b94;
    case 0x102b4ba2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_88 = rd32(sp0 - 0x88u); goto E_102b4ba2;
    case 0x102b4baeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_88 = rd32(sp0 - 0x88u); goto E_102b4bae;
    case 0x102b4bdfu: eax = g->eax; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_ec = rd32(sp0 - 0xecu); goto E_102b4bdf;
    case 0x102b4be1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_ec = rd32(sp0 - 0xecu); goto E_102b4be1;
    case 0x102b4befu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_ec = rd32(sp0 - 0xecu); goto E_102b4bef;
    case 0x102b4bf3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_ec = rd32(sp0 - 0xecu); goto E_102b4bf3;
    case 0x102b4c0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_88 = rd32(sp0 - 0x88u); goto E_102b4c0e;
    case 0x102b4c1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_88 = rd32(sp0 - 0x88u); goto E_102b4c1c;
    case 0x102b4c24u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_88 = rd32(sp0 - 0x88u); goto E_102b4c24;
    case 0x102b4c2cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_88 = rd32(sp0 - 0x88u); goto E_102b4c2c;
    case 0x102b4c7du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102b4c7d;
    case 0x102b4c80u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102b4c80;
    case 0x102b4cb3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_88 = rd32(sp0 - 0x88u); goto E_102b4cb3;
    case 0x102b4cb7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_88 = rd32(sp0 - 0x88u); goto E_102b4cb7;
    case 0x102b4cc5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_88 = rd32(sp0 - 0x88u); goto E_102b4cc5;
    case 0x102b4ce4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102b4ce4;
    case 0x102b4d00u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102b4d00;
    case 0x102b4d0bu: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102b4d0b;
    case 0x102b4d14u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102b4d14;
    case 0x102b4d1au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102b4d1a;
    case 0x102b4d36u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102b4d36;
    case 0x102b4d3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102b4d3c;
    default: break;
    }
#endif

    COW_AT(102b4500)
    wr32(sp0 - 0xfcu, in_ebx);
    wr32(sp0 - 0x100u, in_esi);
    wr32(sp0 - 0x104u, in_edi);
    wr32(sp0 - 0xf4u, 0u);
    if (arg4 == 0u)
    {
        eax = arg4;
        ecx = self;
        edx = in_edx;
    }
    else
    {
    COW_AT(102b4521)
        wr32(sp0 - 0x108u, arg1);
        wr32(sp0 - 0x10cu, COW_IMG(0x103bff90u));
        g->ebx = arg1;
        g->eax = arg4;
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 0x104u;
        t1 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bff90u), arg1);
        t2 = g->ecx;
        t3 = g->edx;
        eax = t1;
        ecx = t2;
        edx = t3;
    }
    COW_AT(102b452f)
    wr32(sp0 - 0x108u, 0x7du);
    wr32(sp0 - 0x10cu, COW_IMG(0x103bff60u));
    wr32(sp0 - 0x110u, 0x18u);
    wr32(sp0 - 0x114u, arg3);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x100u;
    t4 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, arg3, 0x18u, COW_IMG(0x103bff60u), 0x7du, in_edi);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0xf0u, t4);
    if ((int32_t)arg3 <= 0)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        loc_f0 = t4;
    }
    else
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        loc_f0 = t4;
    COW_AT(102b4550)
        eax = eax + 0x10u;
        esi = arg3;
L_102b4553: ;
    COW_AT(102b4553)
        wr32(eax + 4u, 0u);
        wr32(eax, 0u);
        if (esi != 1u)
        {
            eax = eax + 0x18u;
            esi = esi - 1u;
            goto L_102b4553;
        }
        eax = eax + 0x18u;
    }
    COW_AT(102b455e)
    wr32(sp0 - 0x108u, in_ebp);
    wr32(sp0 - 0x10cu, 0x84u);
    wr32(sp0 - 0x110u, COW_IMG(0x103bff60u));
    wr32(sp0 - 0x114u, 0x28u);
    wr32(sp0 - 0x118u, arg1);
    wr32(sp0 - 0xccu, 0u);
    wr32(sp0 - 0xd0u, 0u);
    wr32(sp0 - 0xacu, 0u);
    wr32(sp0 - 0xb0u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x104u;
    t7 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, arg1, 0x28u, COW_IMG(0x103bff60u), 0x84u, in_ebp);
    t8 = g->edx;
    wr32(sp0 - 0xe8u, t7);
    wr32(sp0 - 0xf8u, 0u);
    if ((int32_t)arg1 <= 0)
    {
        edx = t8;
        loc_e8 = t7;
        loc_f8 = 0u;
        loc_b0 = 0u;
        loc_d0 = 0u;
    }
    else
    {
        eax = t7;
        loc_e8 = t7;
    COW_AT(102b4594)
        ecx = arg2;
        esi = eax;
        loc_f8 = 0u;
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_d0 = rd32(sp0 - 0xd0u);
L_102b459d: ;
    COW_AT(102b459d)
        eax = 0u;
L_102b459f: ;
    COW_AT(102b459f)
        wr32(eax * 4u + esi, rd32(ecx));
        if ((int32_t)(eax + 1u) < 3)
        {
            eax = eax + 1u;
            ecx = ecx + 4u;
            goto L_102b459f;
        }
        ecx = ecx + 4u;
    COW_AT(102b45ad)
        wr32(sp0 - 0xecu, ecx);
        t9 = rd32(esi);
        t10 = rd32(esi + 4u);
        wr32(esi + 0x20u, 0u);
        if (t9 == t10)
        {
            loc_ec = ecx;
        }
        else
        {
            eax = t9;
            loc_ec = ecx;
            ecx = t10;
    COW_AT(102b45c5)
            if (eax != rd32(esi + 8u))
            {
                edx = rd32(esi + 8u);
    COW_AT(102b45d0)
                if (ecx != edx)
                {
    COW_AT(102b45d8)
                    wr32(esi + 0x18u, loc_b0);
                    if (loc_b0 != 0u)
                    {
                        eax = loc_b0;
    COW_AT(102b45e7)
                        wr32(eax + 0x1cu, esi);
                    }
    COW_AT(102b45ea)
                    wr32(esi + 0x1cu, sp0 - 0xc8u);
                    wr32(sp0 - 0xb0u, esi);
                    if (rd32(COW_IMG(0x109aecacu)) == 0u)
                    {
                        loc_b0 = esi;
                        goto L_102b467c;
                    }
                    eax = rd32(COW_IMG(0x109aecacu));
                    loc_b0 = esi;
    COW_AT(102b45fe)
                    if (rd8(eax + loc_f8) == 0u) goto L_102b467c;
                    edx = loc_f8;
    COW_AT(102b4608)
                    ecx = sp0 - 0xc8u;
                    ebp = -loc_f4;
                    edi = 0u;
L_102b4610: ;
    COW_AT(102b4610)
                    wr32(sp0 - 0x10cu, 0x9fu);
                    wr32(sp0 - 0x110u, COW_IMG(0x103bff60u));
                    wr32(sp0 - 0x114u, 0x18u);
                    wr32(sp0 - 0x118u, 1u);
                    g->eax = eax;
                    t11 = rd32(edi * 4u + esi);
                    g->esp = sp0 - 0xf4u;
                    t12 = cow_cdecl(g, COW_IMG(0x10275da0u), 9, 1u, 0x18u, COW_IMG(0x103bff60u), 0x9fu, rd32(sp0 - 0x108u), rd32(sp0 - 0x104u), rd32(sp0 - 0x100u), rd32(sp0 - 0xfcu), loc_f8);
                    t13 = cow_divs(g, t11, arg3);
                    t14 = cow_mods(g, t11, arg3);
                    t15 = rd32(t14 * 0x18u + rd32(sp0 - 0xf0u) + 0x10u);
                    t16 = rd32(sp0 - 0xf0u);
                    t17 = rd32(t14 * 0x18u + rd32(sp0 - 0xf0u) + 0x10u);
                    wr32(t12 + 0x10u, t15);
                    if (t17 == 0u)
                    {
                        ecx = t12;
                        edx = t14 * 0x18u + t16;
                    }
                    else
                    {
                        eax = t15;
                        ecx = t12;
                        edx = t14 * 0x18u + t16;
    COW_AT(102b4649)
                        wr32(eax + 0x14u, ecx);
                    }
    COW_AT(102b464c)
                    t18 = rd32(sp0 - 0xf4u);
                    wr32(ecx + 0x14u, edx);
                    wr32(edx + 0x10u, ecx);
                    wr32(ecx + 8u, ebp - 1u);
                    wr32(ecx, esi);
                    wr32(ecx + 4u, 0u);
                    wr32(ecx + 0xcu, ebp - 2u);
                    wr32(edi * 4u + esi + 0xcu, ecx);
                    wr32(sp0 - 0xf4u, t18 + 2u);
                    if ((int32_t)(edi + 1u) < 3)
                    {
                        eax = t18 + 2u;
                        ebp = ebp - 2u;
                        edi = edi + 1u;
                        loc_e8 = rd32(sp0 - 0xe8u);
                        loc_f8 = rd32(sp0 - 0xf8u);
                        loc_ec = rd32(sp0 - 0xecu);
                        loc_b0 = rd32(sp0 - 0xb0u);
                        loc_f4 = t18 + 2u;
                        loc_d0 = rd32(sp0 - 0xd0u);
                        goto L_102b4610;
                    }
                    loc_f4 = t18 + 2u;
    COW_AT(102b4677)
                    loc_e8 = rd32(sp0 - 0xe8u);
                    loc_f8 = rd32(sp0 - 0xf8u);
                    loc_ec = rd32(sp0 - 0xecu);
                    loc_b0 = rd32(sp0 - 0xb0u);
                    loc_d0 = rd32(sp0 - 0xd0u);
                }
            }
        }
L_102b4729: ;
    COW_AT(102b4729)
        wr32(sp0 - 0xf8u, loc_f8 + 1u);
        if ((int32_t)(loc_f8 + 1u) < (int32_t)arg1)
        {
            ecx = loc_ec;
            esi = esi + 0x28u;
            loc_f8 = loc_f8 + 1u;
            goto L_102b459d;
        }
        edx = arg1;
        loc_f8 = loc_f8 + 1u;
    }
    COW_AT(102b4748)
    eax = sp0 - 0x88u;
    ecx = 4u;
    loc_88 = rd32(sp0 - 0x88u);
L_102b4754: ;
    COW_AT(102b4754)
    wr32(eax + 4u, 0u);
    wr32(eax, 0u);
    if (ecx != 1u)
    {
        eax = eax + 0x28u;
        ecx = ecx - 1u;
        goto L_102b4754;
    }
    ecx = ecx - 1u;
    COW_AT(102b4767)
    if (loc_b0 == 0u)
    {
        eax = loc_b0;
        goto L_102b47bc;
    }
    eax = loc_b0;
L_102b476f: ;
    COW_AT(102b476f)
    ecx = 0u;
    edx = eax + 0xcu;
    esi = 3u;
L_102b4779: ;
    COW_AT(102b4779)
    if (rd32(rd32(edx) + 4u) != 0u)
    {
    COW_AT(102b4782)
        ecx = ecx + 1u;
    }
    COW_AT(102b4783)
    if (esi != 1u)
    {
        edx = edx + 4u;
        esi = esi - 1u;
        goto L_102b4779;
    }
    COW_AT(102b4789)
    wr32(eax + 0x24u, ecx);
    t32 = rd32(ecx * 0x28u + sp0 - 0x88u);
    t33 = rd32(eax + 0x18u);
    t34 = rd32(ecx * 0x28u + sp0 - 0x88u);
    wr32(eax + 0x18u, t32);
    if (t34 == 0u)
    {
        edx = t32;
        esi = ecx * 0x28u + sp0 - 0x88u;
        ecx = ecx * 0x28u;
        edi = t33;
    }
    else
    {
        edx = t32;
        esi = ecx * 0x28u + sp0 - 0x88u;
        ecx = ecx * 0x28u;
        edi = t33;
    COW_AT(102b47aa)
        wr32(edx + 0x1cu, eax);
    }
    COW_AT(102b47ad)
    t35 = ecx + sp0 - 0xa0u;
    wr32(eax + 0x1cu, t35);
    wr32(esi, eax);
    if (edi != 0u)
    {
        eax = edi;
        goto L_102b476f;
    }
    eax = edi;
    ecx = t35;
L_102b47bc: ;
    COW_AT(102b47bc)
    wr32(sp0 - 0x10cu, 0xdfu);
    wr32(sp0 - 0x110u, COW_IMG(0x103bff60u));
    wr32(sp0 - 0x114u, 4u);
    wr32(sp0 - 0x118u, 1u);
    wr32(COW_IMG(0x109aeca4u), 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xf4u;
    t36 = cow_cdecl(g, COW_IMG(0x10275da0u), 9, 1u, 4u, COW_IMG(0x103bff60u), 0xdfu, rd32(sp0 - 0x108u), rd32(sp0 - 0x104u), rd32(sp0 - 0x100u), rd32(sp0 - 0xfcu), loc_f8);
    t37 = g->edx;
    wr32(COW_IMG(0x109aeca8u), t36);
    wr32(t36, 0u);
    wr32(sp0 - 0xf4u, 1u);
    edx = t37;
    ebx = 1u;
    loc_f4 = 1u;
    loc_f8 = rd32(sp0 - 0xf8u);
    loc_88 = rd32(sp0 - 0x88u);
L_102b47eb: ;
    COW_AT(102b47eb)
    eax = sp0 - 0x60u;
    ecx = 1u;
L_102b47f7: ;
    COW_AT(102b47f7)
    if (rd32(eax) != 0u)
    {
        edi = rd32(eax);
        goto L_102b484c;
    }
    COW_AT(102b47fd)
    if ((int32_t)(ecx + 1u) < 4)
    {
        eax = eax + 0x28u;
        ecx = ecx + 1u;
        goto L_102b47f7;
    }
    ecx = ecx + 1u;
    COW_AT(102b4806)
    COW_AT(102b4ba2)
    if (arg4 == 0u)
    {
        ebp = rd32(sp0 - 0x108u);
    }
    else
    {
        ebp = rd32(sp0 - 0x108u);
    COW_AT(102b4bae)
        t38 = rd32(rd32(COW_IMG(0x109aeca8u)));
        wr32(sp0 - 0x108u, t38);
        wr32(sp0 - 0x10cu, COW_IMG(0x103bff50u));
        g->ebx = arg4;
        g->esp = sp0 - 0x104u;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bff50u), t38);
        wr32(sp0 - 0xf8u, 0u);
        t39 = rd32(rd32(COW_IMG(0x109aeca8u)));
        wr32(sp0 - 0xecu, t39);
        if (rd32(rd32(COW_IMG(0x109aeca8u))) == 0u)
        {
            eax = t39;
            ecx = 1u;
            edx = 0u;
            loc_f8 = 0u;
            loc_ec = t39;
        }
        else
        {
            eax = t39;
            esi = rd32(COW_IMG(0x109aeca8u));
            loc_ec = t39;
    COW_AT(102b4bdf)
            ecx = 1u;
            edx = 0u;
            edi = eax;
L_102b4be1: ;
    COW_AT(102b4be1)
            if (edi != 1u)
            {
                edx = edx - rd32(ecx * 4u + esi);
                ecx = ecx - rd32(ecx * 4u + esi) + 1u;
                edi = edi - 1u;
                goto L_102b4be1;
            }
            eax = -rd32(ecx * 4u + esi);
            edx = edx - rd32(ecx * 4u + esi);
            ecx = ecx - rd32(ecx * 4u + esi) + 1u;
    COW_AT(102b4bef)
            wr32(sp0 - 0xf8u, edx);
            loc_f8 = edx;
        }
    COW_AT(102b4bf3)
        d40 = fr(g, (double)(int32_t)loc_f8 / (double)(int32_t)loc_ec);
        wrf64(sp0 - 0x10cu, d40);
        wr32(sp0 - 0x110u, COW_IMG(0x103bff34u));
        g->ebx = arg4;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x108u;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bff34u), cow_dlo(d40));
        t41 = g->ecx;
        t42 = g->edx;
        ecx = t41;
        edx = t42;
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_88 = rd32(sp0 - 0x88u);
    }
    COW_AT(102b4c0e)
    if (loc_88 == 0u)
    {
        eax = loc_88;
        edi = 0u;
        goto L_102b4cb3;
    }
    eax = loc_88;
    edi = 0u;
L_102b4c1c: ;
    COW_AT(102b4c1c)
    if (rd32(eax + 0x18u) != 0u)
    {
        eax = rd32(eax + 0x18u);
        edi = edi + 1u;
        goto L_102b4c1c;
    }
    eax = rd32(eax + 0x18u);
    edi = edi + 1u;
    COW_AT(102b4c24)
    if (edi != 0u)
    {
    COW_AT(102b4c2c)
        wr32(sp0 - 0x108u, 0x16cu);
        wr32(sp0 - 0x10cu, COW_IMG(0x103bff60u));
        t43 = edi * 3u + rd32(COW_IMG(0x109aeca4u)) + 1u;
        t44 = rd32(COW_IMG(0x109aeca4u));
        wr32(COW_IMG(0x109aeca4u), t43);
        wr32(sp0 - 0x110u, t43 * 4u);
        wr32(sp0 - 0x114u, rd32(COW_IMG(0x109aeca8u)));
        g->eax = rd32(COW_IMG(0x109aeca8u));
        g->edx = t43 * 4u;
        t45 = rd32(COW_IMG(0x109aeca8u));
        g->esp = sp0 - 0xf0u;
        t46 = cow_thiscall_cdecl(g, COW_IMG(0x10275eb0u), t44, 9, t45, t43 * 4u, COW_IMG(0x103bff60u), 0x16cu, rd32(sp0 - 0x104u), rd32(sp0 - 0x100u), rd32(sp0 - 0xfcu), loc_f8, loc_f4);
        t47 = g->edx;
        t48 = rd32(sp0 - 0xf4u);
        wr32(COW_IMG(0x109aeca8u), t46);
        wr32(t46 + t48 * 4u, edi * 3u);
        t49 = rd32(rd32(COW_IMG(0x109aeca8u))) + 1u;
        wr32(rd32(COW_IMG(0x109aeca8u)), t49);
        if (rd32(sp0 - 0x88u) == 0u)
        {
            eax = rd32(sp0 - 0x88u);
            ecx = t48 + 1u;
            edx = t47;
        }
        else
        {
            eax = rd32(sp0 - 0x88u);
            ecx = t48 + 1u;
    COW_AT(102b4c7d)
            ecx = ecx << 2u;
L_102b4c80: ;
    COW_AT(102b4c80)
            wr32(ecx + rd32(COW_IMG(0x109aeca8u)), rd32(eax));
            t50 = rd32(eax + 4u);
            wr32(ecx + rd32(COW_IMG(0x109aeca8u)) + 4u, t50);
            t51 = rd32(eax + 8u);
            wr32(ecx + rd32(COW_IMG(0x109aeca8u)) + 8u, t51);
            if (rd32(eax + 0x18u) != 0u)
            {
                eax = rd32(eax + 0x18u);
                ecx = ecx + 0xcu;
                goto L_102b4c80;
            }
            eax = rd32(eax + 0x18u);
            ecx = ecx + 0xcu;
            edx = t51;
        }
    }
L_102b4cb3: ;
    COW_AT(102b4cb3)
    if (arg4 != 0u)
    {
    COW_AT(102b4cb7)
        wr32(sp0 - 0x108u, edi);
        wr32(sp0 - 0x10cu, COW_IMG(0x103bff14u));
        g->ebx = arg4;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x104u;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bff14u), edi);
        t52 = g->ecx;
        t53 = g->edx;
        ecx = t52;
        edx = t53;
    }
    COW_AT(102b4cc5)
    wr32(sp0 - 0x108u, 0x17fu);
    wr32(sp0 - 0x10cu, COW_IMG(0x103bff60u));
    t54 = rd32(sp0 - 0xe8u);
    wr32(sp0 - 0x110u, t54);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x104u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, t54, COW_IMG(0x103bff60u), 0x17fu);
    t55 = g->ecx;
    t56 = g->edx;
    if (rd32(sp0 - 0xd0u) == 0u)
    {
        ecx = t55;
        edx = t56;
        goto L_102b4d00;
    }
    eax = rd32(sp0 - 0xd0u);
    ecx = t55;
    edx = t56;
L_102b4ce4: ;
    COW_AT(102b4ce4)
    wr32(sp0 - 0x108u, 0x184u);
    wr32(sp0 - 0x10cu, COW_IMG(0x103bff60u));
    wr32(sp0 - 0x110u, eax);
    g->ecx = ecx;
    g->edx = edx;
    t57 = rd32(eax + 0x10u);
    g->esp = sp0 - 0x104u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103bff60u), 0x184u);
    t58 = g->ecx;
    t59 = g->edx;
    if (t57 != 0u)
    {
        eax = t57;
        ecx = t58;
        edx = t59;
        goto L_102b4ce4;
    }
    ecx = t58;
    edx = t59;
L_102b4d00: ;
    COW_AT(102b4d00)
    if ((int32_t)arg3 <= 0)
    {
        eax = arg3;
    }
    else
    {
    COW_AT(102b4d0b)
        ecx = rd32(sp0 - 0xf0u);
        ebx = arg3;
        edi = rd32(sp0 - 0xf0u) + 0x10u;
L_102b4d14: ;
    COW_AT(102b4d14)
        if (rd32(edi) == 0u)
        {
            eax = rd32(edi);
            goto L_102b4d36;
        }
        eax = rd32(edi);
L_102b4d1a: ;
    COW_AT(102b4d1a)
        wr32(sp0 - 0x108u, 0x18cu);
        wr32(sp0 - 0x10cu, COW_IMG(0x103bff60u));
        wr32(sp0 - 0x110u, eax);
        g->ecx = ecx;
        g->edx = edx;
        t60 = rd32(eax + 0x10u);
        g->esp = sp0 - 0x104u;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103bff60u), 0x18cu);
        t61 = g->ecx;
        t62 = g->edx;
        if (t60 != 0u)
        {
            eax = t60;
            ecx = t61;
            edx = t62;
            goto L_102b4d1a;
        }
        eax = t60;
        ecx = t61;
        edx = t62;
L_102b4d36: ;
    COW_AT(102b4d36)
        if (ebx != 1u)
        {
            ebx = ebx - 1u;
            edi = edi + 0x18u;
            goto L_102b4d14;
        }
    }
    COW_AT(102b4d3c)
    wr32(sp0 - 0x108u, 0x190u);
    wr32(sp0 - 0x10cu, COW_IMG(0x103bff60u));
    t63 = rd32(sp0 - 0xf0u);
    wr32(sp0 - 0x110u, t63);
    g->esp = sp0 - 0x104u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, t63, COW_IMG(0x103bff60u), 0x190u);
    g->ebx = rd32(sp0 - 0xfcu);
    g->esi = rd32(sp0 - 0x100u);
    g->edi = rd32(sp0 - 0x104u);
    g->ebp = ebp;
    return;
L_102b467c: ;
    COW_AT(102b467c)
    eax = 0u;
    ebx = esi + 0xcu;
L_102b4681: ;
    COW_AT(102b4681)
    wr32(sp0 - 0xe4u, eax + 1u);
    t19 = cow_divs(g, eax + 1u, 3u);
    t20 = cow_mods(g, eax + 1u, 3u);
    t21 = rd32(esi + t20 * 4u);
    t22 = cow_divs(g, t21, arg3);
    t23 = cow_mods(g, t21, arg3);
    if (rd32(t23 * 0x18u + rd32(sp0 - 0xf0u) + 0x10u) == 0u)
    {
        ecx = 3u;
        edx = t23 * 3u;
        ebp = t21;
        edi = rd32(ebx - 0xcu);
        loc_e4 = eax + 1u;
        eax = rd32(t23 * 0x18u + rd32(sp0 - 0xf0u) + 0x10u);
        goto L_102b46c9;
    }
    ecx = 3u;
    edx = t23 * 3u;
    ebp = t21;
    edi = rd32(ebx - 0xcu);
    loc_e4 = eax + 1u;
    eax = rd32(t23 * 0x18u + rd32(sp0 - 0xf0u) + 0x10u);
L_102b46ad: ;
    COW_AT(102b46ad)
    if (rd32(eax + 8u) != ebp) goto L_102b46c2;
    COW_AT(102b46b2)
    if (rd32(eax + 0xcu) != edi) goto L_102b46c2;
    COW_AT(102b46b7)
    if (rd32(eax + 4u) == 0u) goto L_102b480b;
    ecx = rd32(eax + 4u);
L_102b46c2: ;
    COW_AT(102b46c2)
    if (rd32(eax + 0x10u) != 0u)
    {
        eax = rd32(eax + 0x10u);
        goto L_102b46ad;
    }
    eax = rd32(eax + 0x10u);
L_102b46c9: ;
    COW_AT(102b46c9)
    wr32(sp0 - 0x10cu, 0xbdu);
    wr32(sp0 - 0x110u, COW_IMG(0x103bff60u));
    wr32(sp0 - 0x114u, 0x18u);
    wr32(sp0 - 0x118u, 1u);
    g->eax = eax;
    g->esp = sp0 - 0xf4u;
    t26 = cow_cdecl(g, COW_IMG(0x10275da0u), 9, 1u, 0x18u, COW_IMG(0x103bff60u), 0xbdu, rd32(sp0 - 0x108u), rd32(sp0 - 0x104u), rd32(sp0 - 0x100u), rd32(sp0 - 0xfcu), loc_f8);
    t27 = cow_divs(g, edi, arg3);
    t28 = cow_mods(g, edi, arg3);
    t29 = rd32(t28 * 0x18u + rd32(sp0 - 0xf0u) + 0x10u);
    t30 = rd32(sp0 - 0xf0u);
    t31 = rd32(t28 * 0x18u + rd32(sp0 - 0xf0u) + 0x10u);
    wr32(t26 + 0x10u, t29);
    if (t31 == 0u)
    {
        ecx = t26;
        edx = t28 * 0x18u + t30;
    }
    else
    {
        eax = t29;
        ecx = t26;
        edx = t28 * 0x18u + t30;
    COW_AT(102b46ff)
        wr32(eax + 0x14u, ecx);
    }
    COW_AT(102b4702)
    wr32(ecx + 0x14u, edx);
    wr32(edx + 0x10u, ecx);
    wr32(ecx, esi);
    wr32(ecx + 4u, 0u);
    wr32(ecx + 8u, edi);
    wr32(ecx + 0xcu, ebp);
    wr32(ebx, ecx);
    loc_e8 = rd32(sp0 - 0xe8u);
    loc_f8 = rd32(sp0 - 0xf8u);
    loc_ec = rd32(sp0 - 0xecu);
    loc_b0 = rd32(sp0 - 0xb0u);
    loc_e4 = rd32(sp0 - 0xe4u);
    loc_d0 = rd32(sp0 - 0xd0u);
    loc_f4 = rd32(sp0 - 0xf4u);
L_102b4719: ;
    COW_AT(102b4719)
    if ((int32_t)loc_e4 < 3)
    {
        eax = loc_e4;
        ebx = ebx + 4u;
        goto L_102b4681;
    }
    goto L_102b4729;
L_102b480b: ;
    COW_AT(102b480b)
    if (rd32(eax + 0x10u) != 0u)
    {
        ecx = rd32(eax + 0x10u);
    COW_AT(102b4812)
        t24 = rd32(eax + 0x14u);
        wr32(ecx + 0x14u, t24);
    }
    COW_AT(102b4818)
    if (rd32(eax + 0x14u) != 0u)
    {
        ecx = rd32(eax + 0x14u);
    COW_AT(102b481f)
        t25 = rd32(eax + 0x10u);
        wr32(ecx + 0x10u, t25);
    }
    COW_AT(102b4825)
    wr32(eax + 0x10u, loc_d0);
    if (loc_d0 != 0u)
    {
        ecx = loc_d0;
    COW_AT(102b4834)
        wr32(ecx + 0x14u, eax);
    }
    COW_AT(102b4837)
    wr32(eax + 0x14u, sp0 - 0xe0u);
    wr32(sp0 - 0xd0u, eax);
    wr32(ebx, eax);
    wr32(eax + 4u, esi);
    loc_d0 = eax;
    goto L_102b4719;
L_102b484c: ;
    COW_AT(102b484c)
    if (rd32(edi + 0x18u) != 0u)
    {
        eax = rd32(edi + 0x18u);
    COW_AT(102b4853)
        t64 = rd32(edi + 0x1cu);
        wr32(eax + 0x1cu, t64);
    }
    COW_AT(102b4859)
    if (rd32(edi + 0x1cu) != 0u)
    {
        eax = rd32(edi + 0x1cu);
    COW_AT(102b4860)
        t65 = rd32(edi + 0x18u);
        wr32(eax + 0x18u, t65);
    }
    COW_AT(102b4866)
    wr32(edi + 0x20u, 1u);
    wr32(sp0 - 0xf8u, 3u);
    edx = edi + 0xcu;
    esi = edi + 0xcu;
    loc_f8 = 3u;
L_102b487a: ;
    COW_AT(102b487a)
    if (rd32(rd32(esi)) != edi)
    {
        eax = rd32(rd32(esi));
    }
    else
    {
        ecx = rd32(esi);
    COW_AT(102b4882)
        eax = rd32(ecx + 4u);
    }
    COW_AT(102b4885)
    if (eax != 0u)
    {
    COW_AT(102b4889)
        if (rd32(eax + 0x20u) == 0u)
        {
    COW_AT(102b4890)
            t66 = rd32(eax + 0x24u) - 1u;
            wr32(eax + 0x24u, t66);
            if (rd32(eax + 0x18u) != 0u)
            {
                ecx = rd32(eax + 0x18u);
    COW_AT(102b489e)
                t67 = rd32(eax + 0x1cu);
                wr32(ecx + 0x1cu, t67);
            }
    COW_AT(102b48a4)
            if (rd32(eax + 0x1cu) != 0u)
            {
                ecx = rd32(eax + 0x1cu);
    COW_AT(102b48ab)
                t68 = rd32(eax + 0x18u);
                wr32(ecx + 0x18u, t68);
            }
    COW_AT(102b48b1)
            t69 = rd32(sp0 + rd32(eax + 0x24u) * 0x28u - 0x88u);
            t70 = rd32(sp0 + rd32(eax + 0x24u) * 0x28u - 0x88u);
            wr32(eax + 0x18u, t69);
            if (t70 != 0u)
            {
                ecx = t69;
    COW_AT(102b48c5)
                wr32(ecx + 0x1cu, eax);
            }
    COW_AT(102b48c8)
            t71 = sp0 + rd32(eax + 0x24u) * 0x28u - 0xa0u;
            t72 = rd32(eax + 0x24u);
            wr32(eax + 0x1cu, t71);
            wr32(sp0 + t72 * 0x28u - 0x88u, eax);
        }
    }
    COW_AT(102b48df)
    wr32(sp0 - 0xf8u, loc_f8 - 1u);
    if (loc_f8 != 1u)
    {
        esi = esi + 4u;
        loc_f8 = loc_f8 - 1u;
        goto L_102b487a;
    }
    loc_f8 = loc_f8 - 1u;
    COW_AT(102b48ed)
    ebp = 0u;
L_102b48ef: ;
    COW_AT(102b48ef)
    if (rd32(rd32(edx)) != edi)
    {
        ecx = rd32(rd32(edx));
    COW_AT(102b48fc)
        eax = ecx;
    }
    else
    {
        eax = rd32(edx);
    COW_AT(102b48f7)
        eax = rd32(eax + 4u);
    }
    COW_AT(102b48fe)
    if (eax == 0u) goto L_102b4909;
    COW_AT(102b4902)
    if (rd32(eax + 0x20u) == 0u) goto L_102b4912;
L_102b4909: ;
    COW_AT(102b4909)
    if ((int32_t)(ebp + 1u) < 3)
    {
        edx = edx + 4u;
        ebp = ebp + 1u;
        goto L_102b48ef;
    }
    ebp = ebp + 1u;
L_102b4912: ;
    COW_AT(102b4912)
    if (ebp != 3u)
    {
    COW_AT(102b4942)
        wr32(sp0 - 0x10cu, 0x10au);
        wr32(sp0 - 0x110u, COW_IMG(0x103bff60u));
        t73 = rd32(COW_IMG(0x109aeca4u)) + 4u;
        t74 = rd32(COW_IMG(0x109aeca8u));
        wr32(COW_IMG(0x109aeca4u), t73);
        wr32(sp0 - 0x114u, t73 * 4u);
        wr32(sp0 - 0x118u, t74);
        g->eax = t73;
        g->esp = sp0 - 0xf4u;
        t75 = cow_thiscall_cdecl(g, COW_IMG(0x10275eb0u), t73 * 4u, 9, t74, t73 * 4u, COW_IMG(0x103bff60u), 0x10au, rd32(sp0 - 0x108u), rd32(sp0 - 0x104u), rd32(sp0 - 0x100u), rd32(sp0 - 0xfcu), loc_f8);
        wr32(COW_IMG(0x109aeca8u), t75);
        wr32(sp0 - 0xf8u, ebx * 4u);
        wr32(ebx * 4u + t75, 0xfffffffdu);
        t76 = cow_divs(g, ebp + 2u, 3u);
        t77 = cow_mods(g, ebp + 2u, 3u);
        t78 = rd32(edi + t77 * 4u);
        wr32(ebx * 4u + rd32(COW_IMG(0x109aeca8u)) + 4u, t78);
        t79 = cow_divs(g, ebp + 3u, 3u);
        t80 = cow_mods(g, ebp + 3u, 3u);
        t81 = rd32(edi + t80 * 4u);
        wr32(ebx * 4u + rd32(COW_IMG(0x109aeca8u)) + 8u, t81);
        t82 = cow_divs(g, ebp + 4u, 3u);
        t83 = cow_mods(g, ebp + 4u, 3u);
        wr32(sp0 - 0xf4u, ebx + 4u);
        t84 = rd32(edi + t83 * 4u);
        wr32(ebx * 4u + rd32(COW_IMG(0x109aeca8u)) + 0xcu, t84);
        edx = t84;
        loc_f8 = ebx * 4u;
        loc_f4 = ebx + 4u;
        ebx = rd32(COW_IMG(0x109aeca8u));
L_102b49d0: ;
    COW_AT(102b49d0)
        if (rd32(rd32(ebp * 4u + edi + 0xcu)) != edi)
        {
            ecx = rd32(ebp * 4u + edi + 0xcu);
            esi = rd32(rd32(ebp * 4u + edi + 0xcu));
        }
        else
        {
            ecx = rd32(ebp * 4u + edi + 0xcu);
    COW_AT(102b49da)
            esi = rd32(ecx + 4u);
        }
    COW_AT(102b49dd)
        if (esi == 0u) goto L_102b4b94;
    COW_AT(102b49e5)
        if (rd32(esi + 0x20u) != 0u) goto L_102b4b94;
    COW_AT(102b49f0)
        eax = esi + 0xcu;
        edi = 0u;
L_102b49f5: ;
    COW_AT(102b49f5)
        if (rd32(eax) == ecx) goto L_102b4a04;
    COW_AT(102b49f9)
        if ((int32_t)(edi + 1u) < 3)
        {
            eax = eax + 4u;
            edi = edi + 1u;
            goto L_102b49f5;
        }
        edi = edi + 1u;
    COW_AT(102b4a02)
L_102b4a11: ;
    COW_AT(102b4a11)
        wr32(sp0 - 0x10cu, 0x127u);
        wr32(sp0 - 0x110u, COW_IMG(0x103bff60u));
        t87 = rd32(COW_IMG(0x109aeca4u)) + 1u;
        wr32(COW_IMG(0x109aeca4u), t87);
        wr32(sp0 - 0x114u, t87 * 4u);
        wr32(sp0 - 0x118u, ebx);
        g->eax = t87;
        g->esp = sp0 - 0xf4u;
        t88 = cow_thiscall_cdecl(g, COW_IMG(0x10275eb0u), ecx, 9, ebx, t87 * 4u, COW_IMG(0x103bff60u), 0x127u, rd32(sp0 - 0x108u), rd32(sp0 - 0x104u), rd32(sp0 - 0x100u), rd32(sp0 - 0xfcu), loc_f8);
        t89 = rd32(sp0 - 0xf4u);
        wr32(COW_IMG(0x109aeca8u), t88);
        t90 = rd32(ebp * 4u + esi);
        wr32(t88 + t89 * 4u, t90);
        wr32(sp0 - 0xf4u, t89 + 1u);
        t91 = rd32(rd32(COW_IMG(0x109aeca8u)) + rd32(sp0 - 0xf8u)) - 1u;
        wr32(rd32(COW_IMG(0x109aeca8u)) + rd32(sp0 - 0xf8u), t91);
        if (rd32(esi + 0x18u) == 0u)
        {
            loc_f4 = t89 + 1u;
        }
        else
        {
            eax = rd32(esi + 0x18u);
            loc_f4 = t89 + 1u;
    COW_AT(102b4a62)
            t92 = rd32(esi + 0x1cu);
            wr32(eax + 0x1cu, t92);
        }
    COW_AT(102b4a68)
        if (rd32(esi + 0x1cu) != 0u)
        {
            eax = rd32(esi + 0x1cu);
    COW_AT(102b4a6f)
            t93 = rd32(esi + 0x18u);
            wr32(eax + 0x18u, t93);
        }
    COW_AT(102b4a75)
        t94 = cow_divs(g, edi + 1u, 3u);
        t95 = cow_mods(g, edi + 1u, 3u);
        if (rd32(rd32(esi + t95 * 4u + 0xcu)) != esi)
        {
            eax = rd32(rd32(esi + t95 * 4u + 0xcu));
            edx = t95;
        }
        else
        {
            ecx = rd32(esi + t95 * 4u + 0xcu);
            edx = t95;
    COW_AT(102b4a8a)
            eax = rd32(ecx + 4u);
        }
    COW_AT(102b4a8d)
        if (eax != 0u)
        {
    COW_AT(102b4a91)
            if (rd32(eax + 0x20u) == 0u)
            {
    COW_AT(102b4a98)
                t96 = rd32(eax + 0x24u) - 1u;
                t97 = rd32(eax + 0x18u);
                wr32(eax + 0x24u, t96);
                if (t97 != 0u)
                {
                    ecx = t97;
    COW_AT(102b4aa6)
                    t98 = rd32(eax + 0x1cu);
                    wr32(ecx + 0x1cu, t98);
                }
    COW_AT(102b4aac)
                if (rd32(eax + 0x1cu) != 0u)
                {
                    ecx = rd32(eax + 0x1cu);
    COW_AT(102b4ab3)
                    t99 = rd32(eax + 0x18u);
                    wr32(ecx + 0x18u, t99);
                }
    COW_AT(102b4ab9)
                t100 = rd32(sp0 + rd32(eax + 0x24u) * 0x28u - 0x88u);
                t101 = rd32(sp0 + rd32(eax + 0x24u) * 0x28u - 0x88u);
                wr32(eax + 0x18u, t100);
                if (t101 != 0u)
                {
                    ecx = t100;
    COW_AT(102b4acd)
                    wr32(ecx + 0x1cu, eax);
                }
    COW_AT(102b4ad0)
                t102 = sp0 + rd32(eax + 0x24u) * 0x28u - 0xa0u;
                t103 = rd32(eax + 0x24u);
                wr32(eax + 0x1cu, t102);
                wr32(sp0 + t103 * 0x28u - 0x88u, eax);
            }
        }
    COW_AT(102b4ae7)
        t104 = cow_divs(g, edx + 1u, 3u);
        t105 = cow_mods(g, edx + 1u, 3u);
        if (rd32(rd32(esi + t105 * 4u + 0xcu)) != esi)
        {
            eax = rd32(rd32(esi + t105 * 4u + 0xcu));
            edx = t105;
        }
        else
        {
            ecx = rd32(esi + t105 * 4u + 0xcu);
            edx = t105;
    COW_AT(102b4afc)
            eax = rd32(ecx + 4u);
        }
    COW_AT(102b4aff)
        if (eax != 0u)
        {
    COW_AT(102b4b03)
            if (rd32(eax + 0x20u) == 0u)
            {
    COW_AT(102b4b0a)
                t106 = rd32(eax + 0x24u) - 1u;
                t107 = rd32(eax + 0x18u);
                wr32(eax + 0x24u, t106);
                if (t107 != 0u)
                {
                    ecx = t107;
    COW_AT(102b4b18)
                    t108 = rd32(eax + 0x1cu);
                    wr32(ecx + 0x1cu, t108);
                }
    COW_AT(102b4b1e)
                if (rd32(eax + 0x1cu) != 0u)
                {
                    ecx = rd32(eax + 0x1cu);
    COW_AT(102b4b25)
                    t109 = rd32(eax + 0x18u);
                    wr32(ecx + 0x18u, t109);
                }
    COW_AT(102b4b2b)
                t110 = rd32(sp0 + rd32(eax + 0x24u) * 0x28u - 0x88u);
                t111 = rd32(sp0 + rd32(eax + 0x24u) * 0x28u - 0x88u);
                wr32(eax + 0x18u, t110);
                if (t111 != 0u)
                {
                    ecx = t110;
    COW_AT(102b4b3f)
                    wr32(ecx + 0x1cu, eax);
                }
    COW_AT(102b4b42)
                t112 = sp0 + rd32(eax + 0x24u) * 0x28u - 0xa0u;
                t113 = rd32(eax + 0x24u);
                wr32(eax + 0x1cu, t112);
                wr32(sp0 + t113 * 0x28u - 0x88u, eax);
                edx = t112;
            }
        }
    COW_AT(102b4b59)
        t114 = rd32(sp0 - 0xf8u);
        wr32(esi + 0x20u, 1u);
        if ((int32_t)(rd32(t114 + rd32(COW_IMG(0x109aeca8u))) & 0x80000001u) >= 0)
        {
            ebx = rd32(COW_IMG(0x109aeca8u));
            edi = esi;
            zf = (rd32(t114 + rd32(COW_IMG(0x109aeca8u))) & 0x80000001u) == 0u;
        }
        else
        {
            ecx = rd32(t114 + rd32(COW_IMG(0x109aeca8u))) & 0x80000001u;
            ebx = rd32(COW_IMG(0x109aeca8u));
            edi = esi;
    COW_AT(102b4b77)
            zf = (ecx - 1u | 0xfffffffeu) + 1u == 0u;
        }
    COW_AT(102b4b7c)
        if (zf)
        {
            loc_f8 = rd32(sp0 - 0xf8u);
        }
        else
        {
    COW_AT(102b4b82)
            t115 = cow_divs(g, ebp + 2u, 3u);
            t116 = cow_mods(g, ebp + 2u, 3u);
            edx = t116;
            ebp = t116;
            loc_f8 = rd32(sp0 - 0xf8u);
        }
        goto L_102b49d0;
    }
    else
    {
    COW_AT(102b4917)
        wr32(edi + 0x18u, loc_88);
        if (loc_88 == 0u)
        {
            edx = loc_88;
        }
        else
        {
            eax = loc_88;
            edx = loc_88;
    COW_AT(102b492c)
            wr32(eax + 0x1cu, edi);
        }
    COW_AT(102b492f)
        wr32(edi + 0x1cu, sp0 - 0xa0u);
        wr32(sp0 - 0x88u, edi);
        loc_88 = edi;
    }
    goto L_102b47eb;
L_102b4a04: ;
    COW_AT(102b4a04)
    t85 = cow_divs(g, edi + 2u, 3u);
    t86 = cow_mods(g, edi + 2u, 3u);
    ecx = 3u;
    ebp = t86;
    goto L_102b4a11;
L_102b4b94: ;
    COW_AT(102b4b94)
    t117 = rd32(ebx) + 1u;
    wr32(ebx, t117);
    ebx = loc_f4;
    loc_88 = rd32(sp0 - 0x88u);
    goto L_102b47eb;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102b4500(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102b4521u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t zf;
        self = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x104u);
        in_esi = rd32(sp0 - 0x100u);
        in_ebx = rd32(sp0 - 0xfcu);
        g->esp = sp0 - 0x104u;
        g->eax = arg4;
        g->ebx = arg1;
        g->edi = 0u;
        wr32(sp0 - 0xf4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102b452fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x104u);
        in_esi = rd32(sp0 - 0x100u);
        in_ebx = rd32(sp0 - 0xfcu);
        g->esp = sp0 - 0x104u;
        g->ebx = arg1;
        g->edi = 0u;
        wr32(sp0 - 0xf4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102b4550u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t loc_f0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        zf = g->zf;
        loc_f0 = rd32(sp0 - 0xf0u);
        g->esp = sp0 - 0x104u;
        g->ebx = arg1;
        g->esi = arg3;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102b4553u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_f0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        loc_f0 = rd32(sp0 - 0xf0u);
        g->esp = sp0 - 0x104u;
        g->ebx = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102b455eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_f0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        zf = g->zf;
        loc_f0 = rd32(sp0 - 0xf0u);
        g->esp = sp0 - 0x104u;
        g->ebx = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102b4594u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_e8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_e8 = rd32(sp0 - 0xe8u);
        g->esp = sp0 - 0x108u;
        wr32(sp0 - 0xf8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102b459du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b0;
        uint32_t loc_d0;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b459fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b0;
        uint32_t loc_d0;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b45adu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b0;
        uint32_t loc_d0;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b45c5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b0;
        uint32_t loc_d0;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b45d0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b0;
        uint32_t loc_d0;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b45d8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b0;
        uint32_t loc_d0;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b45e7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b0;
        uint32_t loc_d0;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b45eau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b0;
        uint32_t loc_d0;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b45feu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b0;
        uint32_t loc_d0;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0x108u;
        g->ecx = sp0 - 0xc8u;
        (void)sp0;
        return 1;
    }
    case 0x102b4608u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b0;
        uint32_t loc_d0;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0x108u;
        g->ecx = sp0 - 0xc8u;
        (void)sp0;
        return 1;
    }
    case 0x102b4610u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b0;
        uint32_t loc_d0;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4649u:
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
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b464cu:
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
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4677u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_f4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f4 = rd32(sp0 - 0xf4u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b467cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b0;
        uint32_t loc_d0;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0x108u;
        g->ecx = sp0 - 0xc8u;
        (void)sp0;
        return 1;
    }
    case 0x102b4681u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b0;
        uint32_t loc_d0;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b46adu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b0;
        uint32_t loc_d0;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b46b2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b0;
        uint32_t loc_d0;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b46b7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b0;
        uint32_t loc_d0;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b46c2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b0;
        uint32_t loc_d0;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b46c9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b0;
        uint32_t loc_d0;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b46ffu:
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
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4702u:
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
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4719u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b0;
        uint32_t loc_d0;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4729u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b0;
        uint32_t loc_d0;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4748u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b0;
        uint32_t loc_d0;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4754u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_b0;
        uint32_t loc_d0;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4767u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_b0;
        uint32_t loc_d0;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b476fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_b0;
        uint32_t loc_d0;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4779u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_b0;
        uint32_t loc_d0;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4782u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_b0;
        uint32_t loc_d0;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4783u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_b0;
        uint32_t loc_d0;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4789u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_b0;
        uint32_t loc_d0;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b47aau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_b0;
        uint32_t loc_d0;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b47adu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_b0;
        uint32_t loc_d0;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b47bcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_b0;
        uint32_t loc_d0;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b47ebu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b47f7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b47fdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4806u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b480bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b0;
        uint32_t loc_d0;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4812u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b0;
        uint32_t loc_d0;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4818u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b0;
        uint32_t loc_d0;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b481fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b0;
        uint32_t loc_d0;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4825u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b0;
        uint32_t loc_d0;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4834u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b0;
        uint32_t loc_d0;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4837u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b0;
        uint32_t loc_d0;
        uint32_t loc_e4;
        uint32_t loc_e8;
        uint32_t loc_ec;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e8 = rd32(sp0 - 0xe8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_b0 = rd32(sp0 - 0xb0u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b484cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4853u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4859u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4860u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4866u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b487au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4882u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4885u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4889u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4890u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b489eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b48a4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b48abu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b48b1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b48c5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b48c8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b48dfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b48edu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b48efu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b48f7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b48fcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b48feu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4902u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4909u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4912u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4917u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b492cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b492fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4942u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b49d0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b49dau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b49ddu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b49e5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b49f0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b49f5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b49f9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4a02u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4a04u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4a11u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4a62u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_f4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f4 = rd32(sp0 - 0xf4u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4a68u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_f4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f4 = rd32(sp0 - 0xf4u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4a6fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_f4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f4 = rd32(sp0 - 0xf4u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4a75u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_f4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f4 = rd32(sp0 - 0xf4u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4a8au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_f4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f4 = rd32(sp0 - 0xf4u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4a8du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_f4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f4 = rd32(sp0 - 0xf4u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4a91u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_f4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f4 = rd32(sp0 - 0xf4u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4a98u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_f4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f4 = rd32(sp0 - 0xf4u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4aa6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_f4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f4 = rd32(sp0 - 0xf4u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4aacu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_f4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f4 = rd32(sp0 - 0xf4u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4ab3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_f4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f4 = rd32(sp0 - 0xf4u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4ab9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_f4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f4 = rd32(sp0 - 0xf4u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4acdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_f4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f4 = rd32(sp0 - 0xf4u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4ad0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_f4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f4 = rd32(sp0 - 0xf4u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4ae7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_f4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f4 = rd32(sp0 - 0xf4u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4afcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_f4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f4 = rd32(sp0 - 0xf4u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4affu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_f4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f4 = rd32(sp0 - 0xf4u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4b03u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_f4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f4 = rd32(sp0 - 0xf4u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4b0au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_f4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f4 = rd32(sp0 - 0xf4u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4b18u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_f4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f4 = rd32(sp0 - 0xf4u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4b1eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_f4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f4 = rd32(sp0 - 0xf4u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4b25u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_f4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f4 = rd32(sp0 - 0xf4u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4b2bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_f4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f4 = rd32(sp0 - 0xf4u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4b3fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_f4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f4 = rd32(sp0 - 0xf4u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4b42u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_f4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f4 = rd32(sp0 - 0xf4u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4b59u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_f4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f4 = rd32(sp0 - 0xf4u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4b77u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_f4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f4 = rd32(sp0 - 0xf4u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4b7cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_f4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f4 = rd32(sp0 - 0xf4u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4b82u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_f4;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f4 = rd32(sp0 - 0xf4u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4b94u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4ba2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0x108u;
        (void)sp0;
        return 1;
    }
    case 0x102b4baeu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0x104u;
        g->ebx = arg4;
        (void)sp0;
        return 1;
    }
    case 0x102b4bdfu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_ec;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_ec = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0x104u;
        g->ecx = 1u;
        g->edx = 0u;
        g->ebx = arg4;
        (void)sp0;
        return 1;
    }
    case 0x102b4be1u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_ec;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_ec = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0x104u;
        g->ebx = arg4;
        (void)sp0;
        return 1;
    }
    case 0x102b4befu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_ec;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_ec = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0x104u;
        g->ebx = arg4;
        (void)sp0;
        return 1;
    }
    case 0x102b4bf3u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_ec;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_ec = rd32(sp0 - 0xecu);
        g->esp = sp0 - 0x104u;
        g->ebx = arg4;
        (void)sp0;
        return 1;
    }
    case 0x102b4c0eu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0x104u;
        g->ebx = arg4;
        (void)sp0;
        return 1;
    }
    case 0x102b4c1cu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0x104u;
        g->ebx = arg4;
        (void)sp0;
        return 1;
    }
    case 0x102b4c24u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0x104u;
        g->ebx = arg4;
        (void)sp0;
        return 1;
    }
    case 0x102b4c2cu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0x104u;
        g->ebx = arg4;
        (void)sp0;
        return 1;
    }
    case 0x102b4c7du:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
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
        g->esp = sp0 - 0x104u;
        g->ebx = arg4;
        (void)sp0;
        return 1;
    }
    case 0x102b4c80u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
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
        g->esp = sp0 - 0x104u;
        g->ebx = arg4;
        (void)sp0;
        return 1;
    }
    case 0x102b4cb3u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0x104u;
        g->ebx = arg4;
        (void)sp0;
        return 1;
    }
    case 0x102b4cb7u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0x104u;
        g->ebx = arg4;
        (void)sp0;
        return 1;
    }
    case 0x102b4cc5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x102b4ce4u:
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
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x102b4d00u:
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
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x102b4d0bu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x104u;
        g->eax = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102b4d14u:
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
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x102b4d1au:
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
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x102b4d36u:
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
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x102b4d3cu:
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
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102b4500(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102b4500(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
