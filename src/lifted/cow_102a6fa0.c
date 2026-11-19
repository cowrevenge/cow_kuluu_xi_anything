/* f_0x102a6fa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102a6fa0(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_3c;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
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
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 148u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102a6fc1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x50u); in_esi = rd32(sp0 - 0x4cu); in_ebp = rd32(sp0 - 0x48u); in_ebx = rd32(sp0 - 0x44u); g->ebp = rd32(sp0 - 0x48u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x4cu); goto E_102a6fc1;
    case 0x102a6feau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x50u); in_esi = rd32(sp0 - 0x4cu); in_ebp = rd32(sp0 - 0x48u); in_ebx = rd32(sp0 - 0x44u); g->ebp = rd32(sp0 - 0x48u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x4cu); goto E_102a6fea;
    case 0x102a6ff3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x50u); in_esi = rd32(sp0 - 0x4cu); in_ebp = rd32(sp0 - 0x48u); in_ebx = rd32(sp0 - 0x44u); g->ebp = rd32(sp0 - 0x48u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x4cu); goto E_102a6ff3;
    case 0x102a6ffdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x50u); in_esi = rd32(sp0 - 0x4cu); in_ebp = rd32(sp0 - 0x48u); in_ebx = rd32(sp0 - 0x44u); g->ebp = rd32(sp0 - 0x48u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x4cu); goto E_102a6ffd;
    case 0x102a708cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102a708c;
    case 0x102a70d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102a70d2;
    case 0x102a70dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102a70db;
    case 0x102a70f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102a70f4;
    case 0x102a710du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102a710d;
    case 0x102a7172u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102a7172;
    case 0x102a71aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); goto E_102a71ae;
    case 0x102a71b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_102a71b5;
    case 0x102a71d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_102a71d4;
    case 0x102a71ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_102a71dd;
    case 0x102a71ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); goto E_102a71ec;
    case 0x102a7207u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); goto E_102a7207;
    case 0x102a7218u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_102a7218;
    case 0x102a7230u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_102a7230;
    case 0x102a7235u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_102a7235;
    case 0x102a723cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_102a723c;
    case 0x102a726au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102a726a;
    case 0x102a727du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102a727d;
    case 0x102a729au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_102a729a;
    case 0x102a72a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_102a72a2;
    case 0x102a72a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102a72a8;
    case 0x102a72abu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_102a72ab;
    case 0x102a72ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102a72ff;
    case 0x102a7315u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_4 = rd32(sp0 - 4u); goto E_102a7315;
    case 0x102a7325u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_4 = rd32(sp0 - 4u); goto E_102a7325;
    case 0x102a7350u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_2c = rd32(sp0 - 0x2cu); loc_20 = rd32(sp0 - 0x20u); loc_4 = rd32(sp0 - 4u); goto E_102a7350;
    case 0x102a7364u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_2c = rd32(sp0 - 0x2cu); loc_20 = rd32(sp0 - 0x20u); loc_4 = rd32(sp0 - 4u); goto E_102a7364;
    case 0x102a7371u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); loc_2c = rd32(sp0 - 0x2cu); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102a7371;
    case 0x102a738fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); loc_2c = rd32(sp0 - 0x2cu); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102a738f;
    case 0x102a73a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); loc_2c = rd32(sp0 - 0x2cu); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102a73a0;
    case 0x102a73b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); loc_2c = rd32(sp0 - 0x2cu); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102a73b3;
    case 0x102a73b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); loc_2c = rd32(sp0 - 0x2cu); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102a73b5;
    case 0x102a73bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); loc_2c = rd32(sp0 - 0x2cu); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102a73bd;
    case 0x102a73dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); loc_2c = rd32(sp0 - 0x2cu); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102a73df;
    case 0x102a73efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); loc_2c = rd32(sp0 - 0x2cu); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102a73ef;
    case 0x102a73f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); loc_2c = rd32(sp0 - 0x2cu); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102a73f3;
    case 0x102a73f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); loc_2c = rd32(sp0 - 0x2cu); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102a73f7;
    case 0x102a7411u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); loc_2c = rd32(sp0 - 0x2cu); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102a7411;
    case 0x102a7415u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); loc_2c = rd32(sp0 - 0x2cu); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102a7415;
    case 0x102a742du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); loc_2c = rd32(sp0 - 0x2cu); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102a742d;
    case 0x102a7435u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); loc_2c = rd32(sp0 - 0x2cu); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102a7435;
    case 0x102a7448u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); loc_2c = rd32(sp0 - 0x2cu); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102a7448;
    case 0x102a744au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); loc_2c = rd32(sp0 - 0x2cu); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102a744a;
    case 0x102a745au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); loc_2c = rd32(sp0 - 0x2cu); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102a745a;
    case 0x102a747cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); loc_2c = rd32(sp0 - 0x2cu); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102a747c;
    case 0x102a748cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); loc_2c = rd32(sp0 - 0x2cu); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102a748c;
    case 0x102a7490u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); loc_2c = rd32(sp0 - 0x2cu); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102a7490;
    case 0x102a7494u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); loc_2c = rd32(sp0 - 0x2cu); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102a7494;
    case 0x102a74aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); loc_2c = rd32(sp0 - 0x2cu); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102a74ae;
    case 0x102a74b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); loc_2c = rd32(sp0 - 0x2cu); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102a74b2;
    case 0x102a74c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); loc_2c = rd32(sp0 - 0x2cu); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102a74c7;
    case 0x102a74dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102a74db;
    case 0x102a74e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102a74e3;
    case 0x102a74f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102a74f5;
    case 0x102a74ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102a74ff;
    case 0x102a7505u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102a7505;
    case 0x102a750fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102a750f;
    case 0x102a751fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102a751f;
    case 0x102a7528u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102a7528;
    case 0x102a752cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102a752c;
    case 0x102a7541u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102a7541;
    case 0x102a7555u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102a7555;
    case 0x102a755du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102a755d;
    case 0x102a7573u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102a7573;
    case 0x102a757du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102a757d;
    case 0x102a7583u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102a7583;
    case 0x102a758du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102a758d;
    case 0x102a759du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102a759d;
    case 0x102a75a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102a75a6;
    case 0x102a75aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102a75aa;
    case 0x102a75bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102a75bf;
    case 0x102a75f9u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102a75f9;
    case 0x102a75fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102a75fc;
    case 0x102a7612u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); loc_2c = rd32(sp0 - 0x2cu); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102a7612;
    case 0x102a7657u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_102a7657;
    default: break;
    }
#endif

    COW_AT(102a6fa0)
    wr32(sp0 - 0x44u, in_ebx);
    wr32(sp0 - 0x48u, in_ebp);
    wr32(sp0 - 0x4cu, in_esi);
    wr32(sp0 - 0x50u, in_edi);
    wr32(sp0 - 0x54u, COW_IMG(0x1036bf68u));
    t1 = rd32(sp0 + 8u);
    wr32(sp0 - 0x58u, t1);
    g->edx = in_edx;
    g->esp = sp0 - 0x50u;
    t2 = cow_thiscall_cdecl(g, COW_IMG(0x10291220u), self, 2, t1, COW_IMG(0x1036bf68u));
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 != 0u)
    {
        ecx = t3;
        ebx = t1;
        esi = t2;
        goto L_102a6fea;
    }
    eax = t2;
    ecx = t3;
    edx = t4;
    ebx = t1;
    COW_AT(102a6fc1)
    wr32(sp0 - 0x54u, 0x6cu);
    wr32(sp0 - 0x58u, COW_IMG(0x103be434u));
    wr32(sp0 - 0x5cu, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x54u;
    t5 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103be434u));
    t6 = g->ecx;
    t7 = g->edx;
    wr32(sp0 - 0x60u, ebx);
    wr32(sp0 - 0x64u, COW_IMG(0x103be41cu));
    g->ebx = ebx;
    g->esp = sp0 - 0x5cu;
    t8 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be41cu), ebx);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return t8 & 0xffffff00u;
L_102a6fea: ;
    COW_AT(102a6fea)
    eax = ebx;
    edx = COW_IMG(0x109aa8a8u) - ebx;
L_102a6ff3: ;
    COW_AT(102a6ff3)
    t9 = rd8(eax);
    wr8(eax + edx, (uint8_t)t9);
    if ((uint8_t)t9 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t9;
        goto L_102a6ff3;
    }
    eax = eax + 1u;
    ecx = (ecx & 0xffffff00u) | t9;
    COW_AT(102a6ffd)
    wr32(sp0 - 0x54u, 0x74u);
    wr32(sp0 - 0x58u, COW_IMG(0x103be434u));
    wr32(sp0 - 0x5cu, 0x63cu);
    wr32(sp0 - 0x60u, 1u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x4cu;
    t10 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, 1u, 0x63cu, COW_IMG(0x103be434u), 0x74u, in_edi);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0x64u, sp0 - 0x3eu);
    wr32(sp0 - 0x68u, 3u);
    wr32(sp0 - 0x6cu, 2u);
    wr32(t10 + 0x620u, 1u);
    wr32(t10 + 0x61cu, 1u);
    wr16(t10 + 0x604u, 0u);
    wr32(t10 + 0x608u, 0u);
    wr32(t10 + 0x638u, 1u);
    wr32(sp0 - 0x70u, esi);
    wr32(COW_IMG(0x109a286cu), 0u);
    wr16(COW_IMG(0x109aa89cu), 0u);
    g->eax = sp0 - 0x3eu;
    g->esp = sp0 - 0x54u;
    t13 = cow_call_regs(g, COW_IMG(0x102a7750u), g->eax, g->ecx, t12, 1, 7, esi, 2u, 3u, sp0 - 0x3eu, 1u, 0x63cu, COW_IMG(0x103be434u));
    t14 = g->edx;
    wr32(sp0 - 0x74u, sp0 - 0x40u);
    wr32(sp0 - 0x78u, 3u);
    wr32(sp0 - 0x7cu, 2u);
    wr32(sp0 - 0x80u, esi);
    g->ecx = sp0 - 0x40u;
    g->esp = sp0 - 0x64u;
    t15 = cow_call_regs(g, COW_IMG(0x102a7750u), g->eax, g->ecx, t14, 1, 7, esi, 2u, 3u, sp0 - 0x40u, rd32(sp0 - 0x70u), 2u, 3u);
    t16 = g->ecx;
    t17 = g->edx;
    wr32(sp0 - 0x84u, COW_IMG(0x109a286cu));
    wr32(sp0 - 0x88u, 4u);
    wr32(sp0 - 0x8cu, 4u);
    wr32(sp0 - 0x90u, esi);
    g->ecx = t16;
    g->esp = sp0 - 0x74u;
    t18 = cow_call_regs(g, COW_IMG(0x102a7750u), g->eax, g->ecx, t17, 1, 7, esi, 4u, 4u, COW_IMG(0x109a286cu), rd32(sp0 - 0x80u), 2u, 3u);
    t19 = g->ecx;
    wr32(sp0 - 0x54u, sp0 - 0x18u);
    wr32(sp0 - 0x58u, 3u);
    wr32(sp0 - 0x5cu, 2u);
    wr32(sp0 - 0x60u, esi);
    g->ecx = t19;
    g->esp = sp0 - 0x44u;
    t20 = cow_call_regs(g, COW_IMG(0x102a7750u), g->eax, g->ecx, sp0 - 0x18u, 1, 7, esi, 2u, 3u, sp0 - 0x18u, in_edi, in_esi, in_ebp);
    t21 = g->ecx;
    t22 = g->edx;
    if (rd16(sp0 - 0x40u) == 0x2au)
    {
        eax = t20;
        ecx = t21;
        edx = t22;
        ebx = t10;
        goto L_102a70d2;
    }
    eax = t20;
    ecx = t21;
    edx = t22;
    ebx = t10;
    COW_AT(102a708c)
    wr32(sp0 - 0x54u, esi);
    g->edi = 0u;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x48u;
    t23 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, edx, 1, 3, esi, rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu));
    t24 = g->ecx;
    t25 = g->edx;
    wr32(sp0 - 0x58u, 0x85u);
    wr32(sp0 - 0x5cu, COW_IMG(0x103be434u));
    wr32(sp0 - 0x60u, ebx);
    g->ecx = t24;
    g->edx = t25;
    g->esp = sp0 - 0x54u;
    t26 = cow_cdecl(g, COW_IMG(0x10276110u), 3, ebx, COW_IMG(0x103be434u), 0x85u);
    t27 = g->ecx;
    t28 = g->edx;
    wr32(sp0 - 0x64u, 0x86u);
    wr32(sp0 - 0x68u, COW_IMG(0x103be434u));
    wr32(sp0 - 0x6cu, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->ecx = t27;
    g->edx = t28;
    g->esp = sp0 - 0x64u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103be434u));
    t29 = g->ecx;
    t30 = g->edx;
    t31 = rd32(sp0 + 8u);
    wr32(sp0 - 0x70u, t31);
    wr32(sp0 - 0x74u, COW_IMG(0x103be404u));
    g->ebx = ebx;
    g->eax = t31;
    g->esp = sp0 - 0x6cu;
    t32 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be404u), t31);
    g->ebx = rd32(sp0 - 0x44u);
    g->esi = rd32(sp0 - 0x4cu);
    g->edi = rd32(sp0 - 0x50u);
    g->ebp = rd32(sp0 - 0x48u);
    return t32 & 0xffffff00u;
L_102a70d2: ;
    COW_AT(102a70d2)
    if (rd16(sp0 - 0x18u) == 0u)
    {
        edi = 0u;
        goto L_102a70f4;
    }
    edi = 0u;
L_102a70db: ;
    COW_AT(102a70db)
    wr32(sp0 - 0x54u, ebx);
    wr32(sp0 - 0x58u, esi);
    g->ebp = 1u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x50u;
    t33 = cow_cdecl(g, COW_IMG(0x102a7880u), 2, esi, ebx);
    t34 = g->edx;
    if ((int32_t)(edi + 1u) < (int32_t)(uint16_t)rd32(sp0 - 0x18u))
    {
        eax = t33;
        ecx = (uint16_t)rd32(sp0 - 0x18u);
        edx = t34;
        edi = edi + 1u;
        goto L_102a70db;
    }
    eax = t33;
    edx = t34;
    edi = edi + 1u;
L_102a70f4: ;
    COW_AT(102a70f4)
    t35 = rd32(COW_IMG(0x109a286cu)) + 4u;
    wr32(COW_IMG(0x109a286cu), t35);
    if (rd16(ebx + 0x604u) != 0u)
    {
        ecx = t35;
    }
    else
    {
        ecx = t35;
    COW_AT(102a710d)
        wr32(sp0 - 0x54u, 0x93u);
        wr32(sp0 - 0x58u, COW_IMG(0x103be434u));
        wr32(sp0 - 0x5cu, 1u);
        t36 = rd32(ebx + 0x630u);
        wr32(sp0 - 0x60u, t36);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = t36;
        g->esp = sp0 - 0x4cu;
        t37 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t36, 1u, COW_IMG(0x103be434u), 0x93u, rd32(sp0 - 0x50u));
        t38 = g->ecx;
        t39 = g->edx;
        wr32(ebx, t37);
        wr32(sp0 - 0x64u, 0u);
        t40 = rd32(ebx + 0x634u);
        wr32(sp0 - 0x68u, t40);
        wr32(sp0 - 0x6cu, esi);
        g->eax = t40;
        g->esp = sp0 - 0x60u;
        t41 = cow_call_regs(g, COW_IMG(0x10313d30u), g->eax, g->ecx, t39, 1, 3, esi, t40, 0u);
        wr32(sp0 - 0x70u, esi);
        wr32(sp0 - 0x74u, 1u);
        t42 = rd32(ebx + 0x630u);
        wr32(sp0 - 0x78u, t42);
        wr32(sp0 - 0x7cu, rd32(ebx));
        g->ecx = t42;
        t43 = rd32(ebx);
        g->esp = sp0 - 0x64u;
        t44 = cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, t43, 1, 6, t43, t42, 1u, esi, rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u));
        t45 = g->ecx;
        t46 = g->edx;
        wr32(sp0 - 0x80u, 0x98u);
        wr32(sp0 - 0x84u, COW_IMG(0x103be434u));
        wr32(sp0 - 0x88u, 2u);
        wr32(sp0 - 0x8cu, 1u);
        wr16(ebx + 0x604u, 1u);
        g->ecx = t45;
        g->edx = t46;
        g->esp = sp0 - 0x78u;
        t47 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, 1u, 2u, COW_IMG(0x103be434u), 0x98u, rd32(sp0 - 0x7cu));
        t48 = g->ecx;
        t49 = g->edx;
        t50 = rd16(ebx + 0x630u);
        wr32(ebx + 0x608u, t47);
        wr16(t47, (uint16_t)t50);
        eax = t47;
        ecx = (t48 & 0xffff0000u) | t50;
        edx = t49;
    }
    COW_AT(102a7172)
    wr32(sp0 - 0x54u, esi);
    g->edi = edi;
    g->esp = sp0 - 0x48u;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, edx, 1, 3, esi, rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu));
    t51 = g->edx;
    t52 = rd32(ebx + 0x614u);
    wr32(sp0 - 0x28u, t52);
    t53 = rd32(ebx + 0x628u);
    wr32(sp0 - 0x30u, t53);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x3cu, 0u);
    if (rd32(ebx + 0x614u) > 3u)
    {
        eax = rd32(ebx + 0x624u);
        ecx = t53;
        edx = t51;
        esi = t52;
        goto L_102a7657;
    }
    eax = rd32(ebx + 0x624u);
    ecx = t53;
    edx = t51;
    ebp = rd32(ebx + 0x618u);
    esi = t52;
    loc_28 = t52;
    loc_30 = t53;
    COW_AT(102a71ae)
    t54 = rd32(COW_IMG(0x102a769cu) + esi * 4u);
    switch (t54 - RD)
    {
    case 0x102a71b5u: goto L_102a71b5;
    case 0x102a71ecu: goto L_102a71ec;
    case 0x102a7207u: goto L_102a7207;
    default: rt_fatal(g, COW_IMG(0x102a71aeu), "switch");
    }
    return 0;
L_102a71b5: ;
    COW_AT(102a71b5)
    t57 = cow_divu(g, 8u, ecx);
    t58 = cow_modu(g, 8u, ecx);
    t59 = cow_divu(g, rd32(ebx + 0x60cu), t57);
    t60 = cow_modu(g, rd32(ebx + 0x60cu), t57);
    wr32(ebx + 0x62cu, t59);
    if (t60 == 0u)
    {
        eax = t59;
        edx = t60;
    }
    else
    {
        eax = t59;
        edx = t60;
    COW_AT(102a71d4)
        wr32(ebx + 0x62cu, eax + 1u);
    }
    COW_AT(102a71dd)
    wr32(sp0 - 0x24u, edx);
    wr32(sp0 - 0x3cu, eax);
    edi = 3u;
    loc_24 = edx;
    loc_3c = eax;
L_102a7218: ;
    COW_AT(102a7218)
    t61 = rd32(ebx + 0x610u) * rd32(ebx + 0x62cu);
    wr32(ebx + 0x630u, t61);
    if (ebp == 1u)
    {
        ecx = t61;
        goto L_102a72ab;
    }
    eax = ebp - 1u;
    ecx = t61;
    COW_AT(102a7230)
    if (eax == 4u)
    {
        eax = eax - 4u;
        goto L_102a72a2;
    }
    eax = eax - 4u;
    COW_AT(102a7235)
    if (eax == 0x8000u)
    {
        eax = eax - 0x8000u;
        goto L_102a729a;
    }
    eax = eax - 0x8000u;
    COW_AT(102a723c)
    wr32(sp0 - 0x54u, 0xebu);
    wr32(sp0 - 0x58u, COW_IMG(0x103be434u));
    wr32(sp0 - 0x5cu, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x54u;
    t62 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103be434u));
    t63 = g->ecx;
    t64 = g->edx;
    wr32(sp0 - 0x60u, (uint16_t)ebp);
    wr32(sp0 - 0x64u, COW_IMG(0x103be3e8u));
    g->ebx = ebx;
    g->ecx = t63;
    g->edx = t64;
    g->esp = sp0 - 0x5cu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be3e8u), (uint16_t)ebp);
    t65 = g->ecx;
    t66 = g->edx;
    if (rd32(ebx) == 0u)
    {
        eax = rd32(ebx);
        ecx = t65;
        edx = t66;
    }
    else
    {
        eax = rd32(ebx);
        ecx = t65;
        edx = t66;
    COW_AT(102a726a)
        wr32(sp0 - 0x54u, 0xedu);
        wr32(sp0 - 0x58u, COW_IMG(0x103be434u));
        wr32(sp0 - 0x5cu, eax);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x50u;
        t67 = cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103be434u), 0xedu);
        t68 = g->ecx;
        t69 = g->edx;
        eax = t67;
        ecx = t68;
        edx = t69;
    }
    COW_AT(102a727d)
    wr32(sp0 - 0x54u, 0xeeu);
    wr32(sp0 - 0x58u, COW_IMG(0x103be434u));
    wr32(sp0 - 0x5cu, ebx);
    g->eax = eax;
    g->esp = sp0 - 0x50u;
    t70 = cow_cdecl(g, COW_IMG(0x10276110u), 3, ebx, COW_IMG(0x103be434u), 0xeeu);
    g->ebx = rd32(sp0 - 0x44u);
    g->esi = rd32(sp0 - 0x4cu);
    g->edi = rd32(sp0 - 0x50u);
    g->ebp = rd32(sp0 - 0x48u);
    return t70 & 0xffffff00u;
L_102a71ec: ;
    COW_AT(102a71ec)
    wr32(sp0 - 0x30u, 8u);
    t56 = rd32(ebx + 0x60cu) * eax;
    wr32(ebx + 0x62cu, t56);
    edx = t56;
    edi = eax;
    loc_30 = 8u;
    loc_24 = 0u;
    loc_3c = 0u;
    goto L_102a7218;
L_102a7207: ;
    COW_AT(102a7207)
    t55 = rd32(ebx + 0x60cu);
    wr32(ebx + 0x62cu, t55);
    edi = 1u;
    loc_24 = 0u;
    loc_3c = 0u;
    goto L_102a7218;
L_102a729a: ;
    COW_AT(102a729a)
    wr32(sp0 - 0x54u, ebx);
    g->ecx = ecx;
    g->esp = sp0 - 0x30u;
    cow_cdecl(g, COW_IMG(0x102a7e50u), 9, ebx, rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), loc_3c, rd32(sp0 - 0x38u), rd32(sp0 - 0x34u));
    t71 = g->ecx;
    ecx = t71;
L_102a72a8: ;
    COW_AT(102a72a8)
    loc_28 = rd32(sp0 - 0x28u);
    loc_30 = rd32(sp0 - 0x30u);
    loc_24 = rd32(sp0 - 0x24u);
    loc_3c = rd32(sp0 - 0x3cu);
L_102a72ab: ;
    COW_AT(102a72ab)
    t73 = rd32(ebx + 0x60cu);
    t74 = rd32(ebx);
    wr32(sp0 + 8u, t73);
    wr32(arg1 + 0x1cu, t73);
    t75 = rd32(ebx + 0x610u);
    wr32(sp0 - 0x38u, t75);
    wr32(arg1 + 0x20u, t75);
    wr32(sp0 - 0x54u, 0x105u);
    wr32(sp0 - 0x58u, COW_IMG(0x103be434u));
    t76 = t75 * t73 * edi;
    wr32(sp0 - 0x5cu, t76);
    wr32(sp0 - 0x60u, 1u);
    wr32(sp0 - 0x34u, t74);
    wr32(arg1 + 0x24u, edi);
    g->eax = t76;
    g->edx = t74;
    g->esp = sp0 - 0x3cu;
    t77 = cow_cdecl(g, COW_IMG(0x10275da0u), 9, 1u, t76, COW_IMG(0x103be434u), 0x105u, rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u));
    t78 = g->edx;
    t79 = rd32(sp0 - 0x28u);
    wr32(arg1 + 0x28u, t77);
    t80 = rd32(COW_IMG(0x102a76acu) + t79 * 4u);
    switch (t80 - RD)
    {
    case 0x102a72ffu: esi = t77; goto L_102a72ff;
    case 0x102a74dbu: edx = t78; ebp = t75 * t73; esi = t77; goto L_102a74db;
    case 0x102a7555u: ecx = t79; edx = t78; ebp = t75 * t73; esi = t77; goto L_102a7555;
    default: rt_fatal(g, COW_IMG(0x102a72f8u), "switch");
    }
    return 0;
L_102a72a2: ;
    COW_AT(102a72a2)
    wr32(sp0 - 0x54u, ebx);
    g->ecx = ecx;
    g->esp = sp0 - 0x30u;
    cow_cdecl(g, COW_IMG(0x102a8010u), 9, ebx, rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), loc_3c, rd32(sp0 - 0x38u), rd32(sp0 - 0x34u));
    t72 = g->ecx;
    ecx = t72;
    goto L_102a72a8;
L_102a72ff: ;
    COW_AT(102a72ff)
    t87 = cow_divu(g, 8u, rd32(sp0 - 0x30u));
    t88 = cow_modu(g, 8u, rd32(sp0 - 0x30u));
    wr32(sp0 - 4u, t87);
    if (rd32(sp0 - 0x30u) != 8u)
    {
        ecx = rd32(sp0 - 0x30u);
        edx = t88;
        loc_4 = t87;
    COW_AT(102a7325)
        t89 = (-(ecx != 4u) & 3u) + 4u;
        wr32(sp0 - 0x2cu, t89);
        t90 = ((-(ecx != 4u) & 0xffffff00u) | (-(ecx != 4u) & 0x90u)) + 0xf0u;
        wr32(sp0 - 0x20u, t90);
        ecx = t89;
        loc_20 = t90;
        loc_2c = t89;
    }
    else
    {
        edx = t88;
        loc_4 = t87;
    COW_AT(102a7315)
        wr32(sp0 - 0x20u, 0xffu);
        wr32(sp0 - 0x2cu, 0u);
        ecx = 0u;
        loc_20 = 0xffu;
        loc_2c = 0u;
    }
    COW_AT(102a7350)
    wr32(sp0 - 0x1cu, 0u);
    if (rd32(sp0 - 0x38u) != 0u)
    {
    COW_AT(102a7364)
        t91 = (uint16_t)rd32(sp0 - 0x3cu);
        wr32(sp0 - 0x14u, t91);
        loc_1c = 0u;
        loc_14 = t91;
L_102a7371: ;
    COW_AT(102a7371)
        t92 = (rd32(sp0 - 0x38u) - loc_1c - 1u) * loc_14;
        wr32(sp0 - 0x3cu, t92);
        if (loc_14 == 0u)
        {
            loc_3c = t92;
        }
        else
        {
            edx = loc_14;
            loc_3c = t92;
    COW_AT(102a738f)
            wr32(sp0 - 8u, edx);
            wr32(sp0 - 0x10u, (uint16_t)loc_4);
            loc_8 = edx;
            loc_10 = (uint16_t)loc_4;
L_102a73a0: ;
    COW_AT(102a73a0)
            if (rd32(sp0 - 0x28u) != 0u)
            {
                eax = (loc_3c & 0xffffff00u) | rd8(loc_3c + rd32(sp0 - 0x34u));
            }
            else
            {
                eax = (loc_3c & 0xffffff00u) | rd8(loc_3c + rd32(sp0 - 0x34u));
    COW_AT(102a73b3)
                eax = (eax & 0xffffff00u) | (uint8_t)~(uint8_t)eax;
            }
    COW_AT(102a73b5)
            if (loc_10 != 0u)
            {
                edx = loc_10;
    COW_AT(102a73bd)
                wr8(sp0 + 8u, (uint8_t)(8u - (uint8_t)ecx));
                wr32(sp0 - 0xcu, loc_10);
                ebp = (uint16_t)ecx;
                edi = (uint16_t)loc_20;
                loc_c = loc_10;
L_102a73df: ;
    COW_AT(102a73df)
                if (rd32(sp0 - 0x30u) == 1u)
                {
                    ecx = ebp;
                    edx = (uint32_t)(int8_t)eax & edi;
                    cf = rd32(sp0 - 0x30u) < 1u;
                    pf = PARITY((uint8_t)(rd32(sp0 - 0x30u) - 1u));
                    zf = rd32(sp0 - 0x30u) == 1u;
                    sf = (int32_t)(rd32(sp0 - 0x30u) - 1u) < 0;
                    of = ((rd32(sp0 - 0x30u) ^ 1u) & (rd32(sp0 - 0x30u) ^ rd32(sp0 - 0x30u) - 1u)) >> 0x1fu;
    COW_AT(102a73f3)
                    cf = (uint8_t)(uint32_t)((int32_t)edx >> ((ecx & 0x1fu) < 0x20u ? ecx & 0x1fu : 0x1fu)) != 0u;
                    edx = ((uint32_t)((int32_t)edx >> ((ecx & 0x1fu) < 0x20u ? ecx & 0x1fu : 0x1fu)) & 0xffffff00u) | (uint8_t)-(uint8_t)(uint32_t)((int32_t)edx >> ((ecx & 0x1fu) < 0x20u ? ecx & 0x1fu : 0x1fu));
                }
                else
                {
                    ecx = ebp;
                    edx = (uint32_t)(int8_t)eax & edi;
                    cf = rd32(sp0 - 0x30u) < 1u;
                    pf = PARITY((uint8_t)(rd32(sp0 - 0x30u) - 1u));
                    zf = rd32(sp0 - 0x30u) == 1u;
                    sf = (int32_t)(rd32(sp0 - 0x30u) - 1u) < 0;
                    of = ((rd32(sp0 - 0x30u) ^ 1u) & (rd32(sp0 - 0x30u) ^ rd32(sp0 - 0x30u) - 1u)) >> 0x1fu;
    COW_AT(102a73ef)
                    cf = (ecx & 0x1fu) != 0u ? (uint32_t)((int32_t)edx >> ((ecx & 0x1fu) < 0x20u ? ecx & 0x1fu : 0x1fu) - ((ecx & 0x1fu) < 0x20u)) & 1u : cf;
                    edx = (uint32_t)((int32_t)edx >> ((ecx & 0x1fu) < 0x20u ? ecx & 0x1fu : 0x1fu));
                }
    COW_AT(102a73f7)
                t93 = rd8(sp0 + 8u);
                wr8(esi, (uint8_t)edx);
                wr8(esi + 1u, (uint8_t)edx);
                wr8(esi + 2u, (uint8_t)edx);
                wr32(sp0 - 0xcu, loc_c - 1u);
                if (loc_c != 1u)
                {
                    eax = (eax & 0xffffff00u) | (uint8_t)((t93 & 0x1fu) != 0u ? (uint8_t)((uint32_t)(uint8_t)eax << (t93 & 0x1fu)) : (uint8_t)eax);
                    esi = esi + 3u;
                    loc_c = loc_c - 1u;
                    goto L_102a73df;
                }
                esi = esi + 3u;
    COW_AT(102a7411)
                ecx = loc_2c;
            }
    COW_AT(102a7415)
            wr32(sp0 - 0x3cu, loc_3c + 1u);
            wr32(sp0 - 8u, loc_8 - 1u);
            if (loc_8 != 1u)
            {
                loc_3c = loc_3c + 1u;
                loc_8 = loc_8 - 1u;
                goto L_102a73a0;
            }
            loc_3c = loc_3c + 1u;
        }
    COW_AT(102a742d)
        if (rd16(sp0 - 0x24u) != 0u)
        {
    COW_AT(102a7435)
            if (rd32(sp0 - 0x28u) != 0u)
            {
                eax = (rd32(sp0 - 0x34u) & 0xffffff00u) | rd8(loc_3c + rd32(sp0 - 0x34u));
            }
            else
            {
                eax = (rd32(sp0 - 0x34u) & 0xffffff00u) | rd8(loc_3c + rd32(sp0 - 0x34u));
    COW_AT(102a7448)
                eax = (eax & 0xffffff00u) | (uint8_t)~(uint8_t)eax;
            }
    COW_AT(102a744a)
            t94 = (uint16_t)rd32(sp0 - 0x24u);
            wr32(sp0 - 8u, t94);
            if ((uint16_t)rd32(sp0 - 0x24u) != 0u)
            {
                edx = t94;
                loc_8 = t94;
    COW_AT(102a745a)
                wr8(sp0 + 8u, (uint8_t)(8u - (uint8_t)ecx));
                wr32(sp0 - 8u, loc_8);
                ebp = (uint16_t)ecx;
                edi = (uint16_t)loc_20;
L_102a747c: ;
    COW_AT(102a747c)
                if (rd32(sp0 - 0x30u) == 1u)
                {
                    ecx = ebp;
                    edx = (uint32_t)(int8_t)eax & edi;
                    cf = rd32(sp0 - 0x30u) < 1u;
                    pf = PARITY((uint8_t)(rd32(sp0 - 0x30u) - 1u));
                    zf = rd32(sp0 - 0x30u) == 1u;
                    sf = (int32_t)(rd32(sp0 - 0x30u) - 1u) < 0;
                    of = ((rd32(sp0 - 0x30u) ^ 1u) & (rd32(sp0 - 0x30u) ^ rd32(sp0 - 0x30u) - 1u)) >> 0x1fu;
    COW_AT(102a7490)
                    cf = (uint8_t)(uint32_t)((int32_t)edx >> ((ecx & 0x1fu) < 0x20u ? ecx & 0x1fu : 0x1fu)) != 0u;
                    edx = ((uint32_t)((int32_t)edx >> ((ecx & 0x1fu) < 0x20u ? ecx & 0x1fu : 0x1fu)) & 0xffffff00u) | (uint8_t)-(uint8_t)(uint32_t)((int32_t)edx >> ((ecx & 0x1fu) < 0x20u ? ecx & 0x1fu : 0x1fu));
                }
                else
                {
                    ecx = ebp;
                    edx = (uint32_t)(int8_t)eax & edi;
                    cf = rd32(sp0 - 0x30u) < 1u;
                    pf = PARITY((uint8_t)(rd32(sp0 - 0x30u) - 1u));
                    zf = rd32(sp0 - 0x30u) == 1u;
                    sf = (int32_t)(rd32(sp0 - 0x30u) - 1u) < 0;
                    of = ((rd32(sp0 - 0x30u) ^ 1u) & (rd32(sp0 - 0x30u) ^ rd32(sp0 - 0x30u) - 1u)) >> 0x1fu;
    COW_AT(102a748c)
                    cf = (ecx & 0x1fu) != 0u ? (uint32_t)((int32_t)edx >> ((ecx & 0x1fu) < 0x20u ? ecx & 0x1fu : 0x1fu) - ((ecx & 0x1fu) < 0x20u)) & 1u : cf;
                    edx = (uint32_t)((int32_t)edx >> ((ecx & 0x1fu) < 0x20u ? ecx & 0x1fu : 0x1fu));
                }
    COW_AT(102a7494)
                t95 = rd8(sp0 + 8u);
                wr8(esi, (uint8_t)edx);
                wr8(esi + 1u, (uint8_t)edx);
                wr8(esi + 2u, (uint8_t)edx);
                wr32(sp0 - 8u, loc_8 - 1u);
                if (loc_8 != 1u)
                {
                    eax = (eax & 0xffffff00u) | (uint8_t)((t95 & 0x1fu) != 0u ? (uint8_t)((uint32_t)(uint8_t)eax << (t95 & 0x1fu)) : (uint8_t)eax);
                    esi = esi + 3u;
                    loc_8 = loc_8 - 1u;
                    goto L_102a747c;
                }
                esi = esi + 3u;
    COW_AT(102a74ae)
                ecx = loc_2c;
            }
        }
    COW_AT(102a74b2)
        wr32(sp0 - 0x1cu, loc_1c + 1u);
        if (loc_1c + 1u < rd32(sp0 - 0x38u))
        {
            loc_1c = loc_1c + 1u;
            goto L_102a7371;
        }
        edx = rd32(sp0 - 0x38u);
    }
    COW_AT(102a74c7)
    wr32(arg1 + 0x30u, 0u);
    wr32(arg1 + 0x34u, 0u);
    wr32(arg1 + 0x38u, 0u);
    ecx = 0u;
L_102a7612: ;
    COW_AT(102a7612)
    wr32(sp0 - 0x54u, 0x195u);
    wr32(sp0 - 0x58u, COW_IMG(0x103be434u));
    wr32(sp0 - 0x5cu, rd32(ebx));
    g->eax = rd32(ebx);
    g->edx = edx;
    t96 = rd32(ebx);
    g->esp = sp0 - 0x50u;
    t97 = cow_cdecl(g, COW_IMG(0x10276110u), 3, t96, COW_IMG(0x103be434u), 0x195u);
    t98 = g->edx;
    wr32(sp0 - 0x60u, 0x196u);
    wr32(sp0 - 0x64u, COW_IMG(0x103be434u));
    t99 = rd32(ebx + 0x608u);
    wr32(sp0 - 0x68u, t99);
    g->ecx = t99;
    g->edx = t98;
    g->esp = sp0 - 0x5cu;
    t100 = cow_cdecl(g, COW_IMG(0x10276110u), 3, t99, COW_IMG(0x103be434u), 0x196u);
    t101 = g->ecx;
    t102 = g->edx;
    wr32(sp0 - 0x6cu, 0x197u);
    wr32(sp0 - 0x70u, COW_IMG(0x103be434u));
    wr32(sp0 - 0x74u, ebx);
    g->esp = sp0 - 0x68u;
    t103 = cow_cdecl(g, COW_IMG(0x10276110u), 3, ebx, COW_IMG(0x103be434u), 0x197u);
    g->ebx = rd32(sp0 - 0x44u);
    g->esi = rd32(sp0 - 0x4cu);
    g->edi = rd32(sp0 - 0x50u);
    g->ebp = rd32(sp0 - 0x48u);
    return (t103 & 0xffffff00u) | (uint8_t)(t103 | 0xffu);
L_102a74db: ;
    COW_AT(102a74db)
    if (rd32(sp0 - 0x38u) != 0u)
    {
        eax = rd32(sp0 - 0x38u);
    COW_AT(102a74e3)
        wr32(sp0 - 0x1cu, ebp);
        t86 = -rd32(sp0 + 8u);
        wr32(sp0 - 4u, t86);
        wr32(sp0 - 8u, eax);
        edx = t86;
        loc_1c = ebp;
        loc_4 = t86;
        loc_8 = eax;
L_102a74f5: ;
    COW_AT(102a74f5)
        if (rd32(sp0 + 8u) == 0u) goto L_102a752c;
        ecx = 0u;
L_102a74ff: ;
    COW_AT(102a74ff)
        if (edi != 0u)
        {
    COW_AT(102a7505)
            eax = 0u;
            ebp = (ecx + loc_1c) * edi;
L_102a750f: ;
    COW_AT(102a750f)
            wr8(esi, rd8(eax + ebp + rd32(ebx)));
            if (eax + 1u < edi)
            {
                eax = eax + 1u;
                esi = esi + 1u;
                goto L_102a750f;
            }
            esi = esi + 1u;
        }
    COW_AT(102a751f)
        if (ecx + 1u < rd32(sp0 + 8u))
        {
            ecx = ecx + 1u;
            goto L_102a74ff;
        }
    COW_AT(102a7528)
        edx = loc_4;
L_102a752c: ;
    COW_AT(102a752c)
        wr32(sp0 - 0x1cu, edx + loc_1c);
        wr32(sp0 - 8u, loc_8 - 1u);
        if (loc_8 != 1u)
        {
            loc_1c = edx + loc_1c;
            loc_8 = loc_8 - 1u;
            goto L_102a74f5;
        }
    }
    COW_AT(102a7541)
    wr32(arg1 + 0x30u, 0u);
    wr32(arg1 + 0x34u, 0u);
    wr32(arg1 + 0x38u, 0u);
    ecx = 0u;
    goto L_102a7612;
L_102a7555: ;
    COW_AT(102a7555)
    if (rd32(sp0 - 0x38u) == 0u)
    {
        eax = rd32(sp0 - 0x38u);
    }
    else
    {
    COW_AT(102a755d)
        wr32(sp0 - 0x1cu, ebp);
        t81 = -rd32(sp0 + 8u);
        wr32(sp0 - 4u, t81);
        t82 = rd32(sp0 - 0x38u);
        wr32(sp0 - 8u, t82);
        eax = t81;
        loc_1c = ebp;
        loc_4 = t81;
        loc_8 = t82;
L_102a7573: ;
    COW_AT(102a7573)
        if (rd32(sp0 + 8u) == 0u) goto L_102a75aa;
        ecx = 0u;
L_102a757d: ;
    COW_AT(102a757d)
        if (edi != 0u)
        {
    COW_AT(102a7583)
            eax = 0u;
            ebp = (ecx + loc_1c) * edi;
L_102a758d: ;
    COW_AT(102a758d)
            wr8(esi, rd8(eax + ebp + rd32(ebx)));
            if (eax + 1u < edi)
            {
                eax = eax + 1u;
                esi = esi + 1u;
                goto L_102a758d;
            }
            esi = esi + 1u;
        }
    COW_AT(102a759d)
        if (ecx + 1u < rd32(sp0 + 8u))
        {
            ecx = ecx + 1u;
            goto L_102a757d;
        }
    COW_AT(102a75a6)
        eax = loc_4;
L_102a75aa: ;
    COW_AT(102a75aa)
        wr32(sp0 - 0x1cu, eax + loc_1c);
        wr32(sp0 - 8u, loc_8 - 1u);
        if (loc_8 != 1u)
        {
            loc_1c = eax + loc_1c;
            loc_8 = loc_8 - 1u;
            goto L_102a7573;
        }
        ecx = loc_8 - 1u;
        edx = eax + loc_1c;
    }
    COW_AT(102a75bf)
    wr32(sp0 - 0x54u, 0x142u);
    wr32(sp0 - 0x58u, COW_IMG(0x103be434u));
    wr32(sp0 - 0x5cu, 1u);
    wr32(sp0 - 0x60u, 0x300u);
    wr32(arg1 + 0x30u, 3u);
    wr32(arg1 + 0x34u, 0x100u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x4cu;
    t83 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, 0x300u, 1u, COW_IMG(0x103be434u), 0x142u, rd32(sp0 - 0x50u));
    t84 = g->edx;
    t85 = rd32(arg1 + 0x34u);
    wr32(arg1 + 0x38u, t83);
    if (t85 * 3u == 0u)
    {
        ecx = t85 * 3u;
        edx = t84;
    }
    else
    {
        ecx = t85 * 3u;
    COW_AT(102a75f9)
        eax = 0u;
        edi = ebx + 4u;
L_102a75fc: ;
    COW_AT(102a75fc)
        wr8(eax + rd32(arg1 + 0x38u), rd8(edi));
        if (eax + 1u < rd32(arg1 + 0x34u) * 3u)
        {
            eax = eax + 1u;
            ecx = rd32(arg1 + 0x34u);
            edi = edi + 2u;
            goto L_102a75fc;
        }
        ecx = rd32(arg1 + 0x34u);
        edx = rd32(arg1 + 0x34u) * 3u;
    }
    goto L_102a7612;
L_102a7657: ;
    COW_AT(102a7657)
    wr32(sp0 - 0x54u, 0xd4u);
    wr32(sp0 - 0x58u, COW_IMG(0x103be434u));
    wr32(sp0 - 0x5cu, ebx);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x50u;
    t104 = cow_cdecl(g, COW_IMG(0x10276110u), 3, ebx, COW_IMG(0x103be434u), 0xd4u);
    t105 = g->ecx;
    t106 = g->edx;
    wr32(sp0 - 0x60u, 0xd5u);
    wr32(sp0 - 0x64u, COW_IMG(0x103be434u));
    wr32(sp0 - 0x68u, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->ecx = t105;
    g->edx = t106;
    g->esp = sp0 - 0x60u;
    t107 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103be434u));
    t108 = g->ecx;
    t109 = g->edx;
    wr32(sp0 - 0x6cu, (uint16_t)esi);
    wr32(sp0 - 0x70u, COW_IMG(0x103be3c4u));
    g->ebx = ebx;
    g->esp = sp0 - 0x68u;
    t110 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be3c4u), (uint16_t)esi);
    g->ebx = rd32(sp0 - 0x44u);
    g->esi = rd32(sp0 - 0x4cu);
    g->edi = rd32(sp0 - 0x50u);
    g->ebp = rd32(sp0 - 0x48u);
    return t110 & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102a6fa0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102a6fc1u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x50u);
        in_esi = rd32(sp0 - 0x4cu);
        in_ebp = rd32(sp0 - 0x48u);
        in_ebx = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a6feau:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x50u);
        in_esi = rd32(sp0 - 0x4cu);
        in_ebp = rd32(sp0 - 0x48u);
        in_ebx = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x50u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102a6ff3u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x50u);
        in_esi = rd32(sp0 - 0x4cu);
        in_ebp = rd32(sp0 - 0x48u);
        in_ebx = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x50u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102a6ffdu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x50u);
        in_esi = rd32(sp0 - 0x4cu);
        in_ebp = rd32(sp0 - 0x48u);
        in_ebx = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x50u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102a708cu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        g->edi = 0u;
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        wr32(sp0 - 0x64u, sp0 - 0x3eu);
        wr32(sp0 - 0x54u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x102a70d2u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        g->ebp = 1u;
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        wr32(sp0 - 0x64u, sp0 - 0x3eu);
        wr32(sp0 - 0x54u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x102a70dbu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        g->ebp = 1u;
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        wr32(sp0 - 0x64u, sp0 - 0x3eu);
        (void)sp0;
        return 1;
    }
    case 0x102a70f4u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        g->ebp = 1u;
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        wr32(sp0 - 0x64u, sp0 - 0x3eu);
        (void)sp0;
        return 1;
    }
    case 0x102a710du:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        g->ebp = 1u;
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        wr32(sp0 - 0x64u, sp0 - 0x3eu);
        (void)sp0;
        return 1;
    }
    case 0x102a7172u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a71aeu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_30;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x50u;
        g->edi = 0u;
        wr32(sp0 - 0x3cu, 0u);
        wr32(sp0 - 0x24u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102a71b5u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_30;
        uint32_t loc_3c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x50u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102a71d4u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_30;
        uint32_t loc_3c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a71ddu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_30;
        uint32_t loc_3c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a71ecu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_30;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x3cu, 0u);
        wr32(sp0 - 0x24u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102a7207u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_30;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x3cu, 0u);
        wr32(sp0 - 0x24u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102a7218u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_30;
        uint32_t loc_3c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a7230u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_30;
        uint32_t loc_3c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a7235u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_30;
        uint32_t loc_3c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a723cu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_30;
        uint32_t loc_3c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a726au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a727du:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a729au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_30;
        uint32_t loc_3c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a72a2u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_30;
        uint32_t loc_3c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a72a8u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x102a72abu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_30;
        uint32_t loc_3c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a72ffu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a7315u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a7325u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a7350u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_2c;
        uint32_t loc_4;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a7364u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_2c;
        uint32_t loc_4;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x1cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102a7371u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_2c;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a738fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_2c;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a73a0u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_2c;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a73b3u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_2c;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a73b5u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_2c;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a73bdu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_2c;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a73dfu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_2c;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a73efu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_2c;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a73f3u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_2c;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a73f7u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_2c;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a7411u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_2c;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a7415u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_2c;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a742du:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_2c;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a7435u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_2c;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a7448u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_2c;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a744au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_2c;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a745au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_2c;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a747cu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_2c;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a748cu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_2c;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a7490u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_2c;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a7494u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_2c;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a74aeu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_2c;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a74b2u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_2c;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a74c7u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_2c;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a74dbu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a74e3u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a74f5u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a74ffu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a7505u:
    {
        uint32_t cf;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        g->eax = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102a750fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a751fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a7528u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a752cu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a7541u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a7555u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a755du:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a7573u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a757du:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a7583u:
    {
        uint32_t cf;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        g->eax = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102a758du:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a759du:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a75a6u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a75aau:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a75bfu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a75f9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        g->eax = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a75fcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a7612u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_2c;
        uint32_t loc_3c;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102a7657u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_30;
        uint32_t loc_3c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102a6fa0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102a6fa0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
