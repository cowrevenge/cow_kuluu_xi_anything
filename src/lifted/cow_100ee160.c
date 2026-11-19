/* f_0x100ee160 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100ee160(Guest* g)
{
    unsigned cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_6c;
    uint32_t loc_70;
    uint32_t loc_74;
    uint32_t loc_78;
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 144u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100ee170u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x74u); in_esi = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x74u); g->esi = rd32(sp0 - 0x70u); goto E_100ee170;
    case 0x100ee17au: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x74u); in_esi = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x74u); g->esi = rd32(sp0 - 0x70u); goto E_100ee17a;
    case 0x100ee184u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x74u); in_esi = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x74u); g->esi = rd32(sp0 - 0x70u); goto E_100ee184;
    case 0x100ee18bu: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x74u); in_esi = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x74u); g->esi = rd32(sp0 - 0x70u); goto E_100ee18b;
    case 0x100ee190u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x74u); in_esi = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x74u); g->esi = rd32(sp0 - 0x70u); goto E_100ee190;
    case 0x100ee19du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x74u); in_esi = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x74u); g->esi = rd32(sp0 - 0x70u); goto E_100ee19d;
    case 0x100ee1a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x74u); in_esi = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x74u); g->esi = rd32(sp0 - 0x70u); goto E_100ee1a4;
    case 0x100ee1abu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x74u); in_esi = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x74u); g->esi = rd32(sp0 - 0x70u); goto E_100ee1ab;
    case 0x100ee1e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_78 = rd32(sp0 - 0x78u); goto E_100ee1e9;
    case 0x100ee1ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); goto E_100ee1eb;
    case 0x100ee1f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x74u); in_esi = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x74u); g->esi = rd32(sp0 - 0x70u); goto E_100ee1f4;
    case 0x100ee21fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_78 = rd32(sp0 - 0x78u); goto E_100ee21f;
    case 0x100ee22fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x74u); in_esi = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x74u); g->esi = rd32(sp0 - 0x70u); goto E_100ee22f;
    case 0x100ee253u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x74u); in_esi = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x74u); g->esi = rd32(sp0 - 0x70u); goto E_100ee253;
    case 0x100ee2c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x74u); in_esi = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x74u); g->esi = rd32(sp0 - 0x70u); goto E_100ee2c5;
    case 0x100ee2e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x74u); in_esi = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x74u); g->esi = rd32(sp0 - 0x70u); goto E_100ee2e4;
    case 0x100ee2f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x74u); in_esi = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x74u); g->esi = rd32(sp0 - 0x70u); goto E_100ee2f3;
    case 0x100ee2f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_78 = rd32(sp0 - 0x78u); in_edi = rd32(sp0 - 0x74u); in_esi = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x74u); g->esi = rd32(sp0 - 0x70u); goto E_100ee2f5;
    case 0x100ee313u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x74u); in_esi = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x74u); g->esi = rd32(sp0 - 0x70u); goto E_100ee313;
    case 0x100ee317u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x74u); in_esi = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x74u); g->esi = rd32(sp0 - 0x70u); goto E_100ee317;
    case 0x100ee31bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x74u); in_esi = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x74u); g->esi = rd32(sp0 - 0x70u); goto E_100ee31b;
    case 0x100ee31fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x74u); in_esi = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x74u); g->esi = rd32(sp0 - 0x70u); goto E_100ee31f;
    case 0x100ee348u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_78 = rd32(sp0 - 0x78u); goto E_100ee348;
    case 0x100ee35eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100ee35e;
    case 0x100ee36fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100ee36f;
    case 0x100ee37au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100ee37a;
    case 0x100ee388u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; zf = g->zf; sf = g->sf; goto E_100ee388;
    case 0x100ee3adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x74u); in_esi = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x74u); g->esi = rd32(sp0 - 0x70u); goto E_100ee3ad;
    case 0x100ee3d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; loc_78 = rd32(sp0 - 0x78u); goto E_100ee3d8;
    case 0x100ee3dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_78 = rd32(sp0 - 0x78u); goto E_100ee3da;
    case 0x100ee3f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_78 = rd32(sp0 - 0x78u); goto E_100ee3f0;
    case 0x100ee3ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x74u); in_esi = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x74u); g->esi = rd32(sp0 - 0x70u); goto E_100ee3ff;
    case 0x100ee424u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_78 = rd32(sp0 - 0x78u); goto E_100ee424;
    case 0x100ee43eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_78 = rd32(sp0 - 0x78u); goto E_100ee43e;
    case 0x100ee449u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_78 = rd32(sp0 - 0x78u); goto E_100ee449;
    case 0x100ee45fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100ee45f;
    case 0x100ee474u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100ee474;
    case 0x100ee48au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100ee48a;
    case 0x100ee4afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100ee4af;
    case 0x100ee4bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x74u); in_esi = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x74u); g->esi = rd32(sp0 - 0x70u); goto E_100ee4bf;
    case 0x100ee4eau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; loc_78 = rd32(sp0 - 0x78u); goto E_100ee4ea;
    case 0x100ee4f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_78 = rd32(sp0 - 0x78u); goto E_100ee4f0;
    case 0x100ee506u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x74u); in_esi = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x74u); g->esi = rd32(sp0 - 0x70u); goto E_100ee506;
    case 0x100ee51du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_78 = rd32(sp0 - 0x78u); goto E_100ee51d;
    case 0x100ee53du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_78 = rd32(sp0 - 0x78u); goto E_100ee53d;
    case 0x100ee54du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x74u); in_esi = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x74u); g->esi = rd32(sp0 - 0x70u); goto E_100ee54d;
    case 0x100ee579u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; loc_78 = rd32(sp0 - 0x78u); goto E_100ee579;
    case 0x100ee57fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_78 = rd32(sp0 - 0x78u); goto E_100ee57f;
    case 0x100ee595u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x74u); in_esi = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x74u); g->esi = rd32(sp0 - 0x70u); goto E_100ee595;
    case 0x100ee5a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x74u); in_esi = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x74u); g->esi = rd32(sp0 - 0x70u); goto E_100ee5a1;
    case 0x100ee5c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100ee5c7;
    case 0x100ee5c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100ee5c9;
    case 0x100ee5d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100ee5d7;
    case 0x100ee5e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x74u); in_esi = rd32(sp0 - 0x70u); in_ebx = rd32(sp0 - 0x6cu); g->ebx = rd32(sp0 - 0x6cu); g->edi = rd32(sp0 - 0x74u); g->esi = rd32(sp0 - 0x70u); goto E_100ee5e0;
    case 0x100ee605u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100ee605;
    case 0x100ee619u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100ee619;
    case 0x100ee626u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_78 = rd32(sp0 - 0x78u); goto E_100ee626;
    default: break;
    }
#endif

    COW_AT(100ee160)
    wr32(sp0 - 0x6cu, in_ebx);
    wr32(sp0 - 0x70u, in_esi);
    wr32(sp0 - 0x74u, in_edi);
    if (rd32(COW_IMG(0x104df770u)) != 0u)
    {
        edx = rd32(COW_IMG(0x104df770u));
        goto L_100ee17a;
    }
    COW_AT(100ee170)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return 0xffffffffu;
L_100ee17a: ;
    COW_AT(100ee17a)
    if (rd32(arg1) != 0u)
    {
        eax = rd32(arg1);
        goto L_100ee18b;
    }
    eax = rd32(arg1);
    COW_AT(100ee184)
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 0x74u;
    cow_stdcall(g, COW_IMG(0x100edea0u), 0);
    t1 = g->ecx;
    t2 = g->edx;
    ecx = t1;
    edx = t2;
L_100ee19d: ;
    COW_AT(100ee19d)
    if (rd32(arg1) > 0x16u)
    {
        loc_6c = in_ebx;
        loc_70 = in_esi;
        loc_74 = in_edi;
        goto L_100ee1eb;
    }
    eax = rd32(arg1);
    COW_AT(100ee1a4)
    t6 = rd32(COW_IMG(0x100ee630u) + eax * 4u);
    switch (t6 - RD)
    {
    case 0x100ee1abu: goto L_100ee1ab;
    case 0x100ee1f4u: goto L_100ee1f4;
    case 0x100ee22fu: goto L_100ee22f;
    case 0x100ee253u: goto L_100ee253;
    case 0x100ee2c5u: goto L_100ee2c5;
    case 0x100ee2e4u: goto L_100ee2e4;
    case 0x100ee2f3u: goto L_100ee2f3;
    case 0x100ee313u: goto L_100ee313;
    case 0x100ee317u: goto L_100ee317;
    case 0x100ee31bu: goto L_100ee31b;
    case 0x100ee31fu: goto L_100ee31f;
    case 0x100ee3adu: goto L_100ee3ad;
    case 0x100ee3ffu: goto L_100ee3ff;
    case 0x100ee4bfu: goto L_100ee4bf;
    case 0x100ee506u: goto L_100ee506;
    case 0x100ee54du: goto L_100ee54d;
    case 0x100ee595u: goto L_100ee595;
    case 0x100ee5a1u: goto L_100ee5a1;
    case 0x100ee5e0u: goto L_100ee5e0;
    default: rt_fatal(g, COW_IMG(0x100ee1a4u), "switch");
    }
    return 0;
L_100ee18b: ;
    COW_AT(100ee18b)
    if ((int32_t)eax > 9)
    {
        ecx = self;
        goto L_100ee19d;
    }
    COW_AT(100ee190)
    g->eax = eax;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 0x74u;
    t3 = cow_stdcall(g, COW_IMG(0x100edeb0u), 0);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 != 0u)
    {
        eax = t3;
        goto L_100ee626;
    }
    ecx = t4;
    edx = t5;
    goto L_100ee19d;
L_100ee1ab: ;
    COW_AT(100ee1ab)
    wr32(sp0 - 0x78u, 0xc4u);
    wr32(sp0 - 0x7cu, 8u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x74u;
    t109 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0xc4u);
    t110 = g->ecx;
    t111 = g->edx;
    wr32(sp0 - 0x80u, t109);
    g->esp = sp0 - 0x7cu;
    cow_thiscall_cdecl(g, COW_IMG(0x100f0000u), t110, 1, t109);
    wr32(sp0 - 0x84u, arg2);
    wr32(rd32(COW_IMG(0x104df770u)) + 0x136acu, 0u);
    t112 = rd32(rd32(COW_IMG(0x104df770u)) + 0x13690u);
    wr32(sp0 - 0x88u, t112);
    g->esp = sp0 - 0x4cu;
    cow_thiscall_cdecl(g, COW_IMG(0x10115690u), arg2, 15, t112, arg2, rd32(sp0 - 0x80u), 8u, 0xc4u, in_edi, in_esi, in_ebx, rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u));
L_100ee1e9: ;
    COW_AT(100ee1e9)
    wr32(arg1, rd32(arg1) + 1u);
    loc_6c = rd32(sp0 - 0x6cu);
    loc_70 = rd32(sp0 - 0x70u);
    loc_74 = rd32(sp0 - 0x74u);
L_100ee1eb: ;
    COW_AT(100ee1eb)
    g->ebx = loc_6c;
    g->esi = loc_70;
    g->edi = loc_74;
    return 0u;
L_100ee1f4: ;
    COW_AT(100ee1f4)
    wr32(sp0 - 0x78u, 0xc5u);
    wr32(sp0 - 0x7cu, 8u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x74u;
    t101 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0xc5u);
    t102 = g->ecx;
    t103 = g->edx;
    wr32(sp0 - 0x80u, t101);
    g->esp = sp0 - 0x7cu;
    t104 = cow_thiscall_cdecl(g, COW_IMG(0x100f0000u), t102, 1, t101);
    t105 = rd32(rd32(COW_IMG(0x104df770u)) + 0x13690u);
    wr32(sp0 - 0x84u, t105);
    g->esp = sp0 - 0x80u;
    t106 = cow_cdecl(g, COW_IMG(0x101163a0u), 1, t105);
    if (t106 != 0u)
    {
        loc_6c = in_ebx;
        loc_70 = in_esi;
        loc_74 = in_edi;
        goto L_100ee1eb;
    }
    COW_AT(100ee21f)
    t107 = rd32(arg1) + 2u;
    t108 = rd32(sp0 - 0x74u);
    wr32(arg1, t107);
    g->ebx = rd32(sp0 - 0x6cu);
    g->esi = rd32(sp0 - 0x70u);
    g->edi = t108;
    return 0u;
L_100ee22f: ;
    COW_AT(100ee22f)
    wr32(sp0 - 0x78u, edx + 0x136dcu);
    t99 = rd32(edx + 0x13690u);
    wr32(sp0 - 0x7cu, t99);
    g->esp = sp0 - 0x74u;
    cow_cdecl(g, COW_IMG(0x10115970u), 2, t99, edx + 0x136dcu);
    t100 = rd32(arg1) + 1u;
    wr32(arg1, t100);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return 0u;
L_100ee253: ;
    COW_AT(100ee253)
    t89 = rd32(edx + 0x13800u);
    wr32(edx, t89);
    t90 = (edx & 0xffff0000u) | rd16(rd32(COW_IMG(0x104df770u)) + 0x13804u);
    wr32(sp0 - 0x78u, t90);
    g->eax = t89;
    g->edx = t90;
    g->esp = sp0 - 0x74u;
    t91 = cow_stdcall(g, rd32(COW_IMG(0x10329480u)), 1, t90);   /* ws2_32.dll!htons */
    t92 = g->edx;
    wr16(rd32(COW_IMG(0x104df770u)) + 0xcu, (uint16_t)t91);
    t93 = (t92 & 0xffff0000u) | rd16(rd32(COW_IMG(0x104df770u)) + 0x1380cu);
    wr32(sp0 - 0x78u, t93);
    t94 = rd32(rd32(COW_IMG(0x104df770u)) + 0x13808u);
    wr32(sp0 - 0x7cu, t94);
    t95 = rd32(rd32(COW_IMG(0x104df770u)) + 0x1369cu);
    wr32(sp0 - 0x80u, t95);
    g->edx = t95;
    cow_cdecl(g, COW_IMG(0x100e1790u), 3, t95, t94, t93);
    t96 = g->edx;
    t97 = rd32(rd32(COW_IMG(0x104df770u)) + 0x13690u);
    wr32(sp0 - 0x84u, t97);
    g->esp = sp0 - 0x78u;
    cow_cdecl(g, COW_IMG(0x10115870u), 3, t97, rd32(sp0 - 0x80u), rd32(sp0 - 0x7cu));
    t98 = rd32(arg1) + 1u;
    wr32(arg1, t98);
    wr32(COW_IMG(0x104ca430u), 1u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return 0u;
L_100ee2c5: ;
    COW_AT(100ee2c5)
    g->esp = sp0 - 0x74u;
    cow_stdcall(g, COW_IMG(0x101152e0u), 0);
    wr32(COW_IMG(0x104ca430u), 0u);
    t88 = rd32(arg1) + 2u;
    wr32(arg1, t88);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return 0u;
L_100ee2e4: ;
    COW_AT(100ee2e4)
    wr32(arg1, 0xau);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return 0u;
L_100ee2f3: ;
    COW_AT(100ee2f3)
    wr32(sp0 - 0x78u, 0xcu);
    loc_78 = 0xcu;
L_100ee2f5: ;
    COW_AT(100ee2f5)
    wr32(sp0 - 0x7cu, 8u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x74u;
    t84 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, loc_78);
    t85 = g->ecx;
    t86 = g->edx;
    wr32(sp0 - 0x80u, t84);
    g->esp = sp0 - 0x7cu;
    cow_thiscall_cdecl(g, COW_IMG(0x100f0000u), t85, 1, t84);
    t87 = rd32(arg1) + 1u;
    wr32(arg1, t87);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return 0u;
L_100ee313: ;
    COW_AT(100ee313)
    wr32(sp0 - 0x78u, 0xdu);
    loc_78 = 0xdu;
    goto L_100ee2f5;
L_100ee317: ;
    COW_AT(100ee317)
    wr32(sp0 - 0x78u, 0xeu);
    loc_78 = 0xeu;
    goto L_100ee2f5;
L_100ee31b: ;
    COW_AT(100ee31b)
    wr32(sp0 - 0x78u, 0xfu);
    loc_78 = 0xfu;
    goto L_100ee2f5;
L_100ee31f: ;
    COW_AT(100ee31f)
    wr32(sp0 - 0x78u, 0x10u);
    wr32(sp0 - 0x7cu, 8u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x74u;
    t70 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0x10u);
    t71 = g->ecx;
    t72 = g->edx;
    wr32(sp0 - 0x80u, t70);
    g->esp = sp0 - 0x7cu;
    t73 = cow_thiscall_cdecl(g, COW_IMG(0x100f0000u), t71, 1, t70);
    t74 = g->ecx;
    wr32(sp0 - 0x84u, arg2);
    g->ecx = t74;
    g->edx = arg2;
    g->esp = sp0 - 0x80u;
    t75 = cow_cdecl(g, COW_IMG(0x100efda0u), 1, arg2);
    t76 = g->ecx;
    t77 = g->edx;
    if ((int32_t)t75 < 0)
    {
        eax = t75;
        edi = t75;
        goto L_100ee449;
    }
    ecx = t76;
    edx = t77;
    edi = t75;
    COW_AT(100ee348)
    wr32(sp0 - 0x78u, sp0 - 0x68u);
    wr32(sp0 - 0x7cu, edi);
    g->eax = sp0 - 0x68u;
    g->esp = sp0 - 0x74u;
    t78 = cow_cdecl(g, COW_IMG(0x1030ffe1u), 2, edi, sp0 - 0x68u);
    if ((int32_t)t78 < 0)
    {
        eax = t78;
        goto L_100ee449;
    }
    COW_AT(100ee35e)
    t79 = rd32(sp0 - 0x58u);
    if ((t79 & 0x8000u) != 0u)
    {
        eax = t79 & 0x8000u;
        ecx = t79;
        zf = (t79 & 0x8000u) == 0u;
        sf = (int32_t)(t79 & 0x8000u) < 0;
        goto L_100ee388;
    }
    COW_AT(100ee36f)
    if ((int32_t)rd32(arg1) >= 20)
    {
        eax = rd32(arg1);
        goto L_100ee626;
    }
    eax = rd32(arg1);
    COW_AT(100ee37a)
    t80 = rd32(sp0 - 0x74u);
    wr32(arg1, eax + 2u);
    g->ebx = rd32(sp0 - 0x6cu);
    g->esi = rd32(sp0 - 0x70u);
    g->edi = t80;
    return 0u;
L_100ee388: ;
    COW_AT(100ee388)
    wr32(sp0 - 0x78u, 1u);
    t81 = rd32(sp0 - 0x54u);
    edx = t81;
    cf = 0u;
    pf = PARITY(0u);
    of = 0u;
    { /* shrd ecx, edx, 0x10 */ { unsigned c = (unsigned)(0x10u) & 31u; if (c) { uint32_t a = ecx, b = edx, r; r = (a >> c) | (b << (32 - c)); cf = (a >> (c - 1)) & 1u; of = ((r ^ a) >> 31) & 1u; zf = (uint32_t)r == 0; sf = ((r) >> 31) & 1u; pf = PARITY(r); ecx = (uint32_t)(r); } } }
    wr32(sp0 - 0x7cu, 0xffffffffu);
    wr32(sp0 - 0x80u, 0xfffffffeu);
    wr32(sp0 - 0x84u, 0u);
    wr32(sp0 - 0x88u, edi);
    wr32(sp0 - 0x8cu, ecx & 0x3fu);
    g->eax = eax;
    g->esp = sp0 - 0x74u;
    t82 = cow_cdecl(g, COW_IMG(0x103100a7u), 6, ecx & 0x3fu, edi, 0u, 0xfffffffeu, 0xffffffffu, 1u);
    eax = t82;
L_100ee51d: ;
    COW_AT(100ee51d)
    wr32(rd32(COW_IMG(0x104df770u)) + 0x136a8u, eax);
    if ((int32_t)rd32(rd32(COW_IMG(0x104df770u)) + 0x136a8u) >= 0) goto L_100ee1e9;
    eax = rd32(rd32(COW_IMG(0x104df770u)) + 0x136a8u);
    ecx = rd32(COW_IMG(0x104df770u));
    COW_AT(100ee53d)
    t83 = rd32(sp0 - 0x74u);
    wr32(ecx + 0x136acu, eax);
    g->ebx = rd32(sp0 - 0x6cu);
    g->esi = rd32(sp0 - 0x70u);
    g->edi = t83;
    return 0xffffffffu;
L_100ee3ad: ;
    COW_AT(100ee3ad)
    wr32(sp0 - 0x78u, 0x11u);
    wr32(sp0 - 0x7cu, 8u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x74u;
    t60 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0x11u);
    t61 = g->ecx;
    t62 = g->edx;
    wr32(sp0 - 0x80u, t60);
    g->edx = t62;
    g->esp = sp0 - 0x7cu;
    cow_thiscall_cdecl(g, COW_IMG(0x100f0000u), t61, 1, t60);
    t63 = g->edx;
    t64 = rd32(rd32(COW_IMG(0x104df770u)) + 0x136a8u);
    wr32(sp0 - 0x84u, t64);
    g->eax = rd32(COW_IMG(0x104df770u));
    t65 = rd32(COW_IMG(0x104df770u));
    g->esp = sp0 - 0x80u;
    t66 = cow_cdecl(g, COW_IMG(0x103100b2u), 1, t64);
    if (t66 == 0u)
    {
        loc_6c = in_ebx;
        loc_70 = in_esi;
        loc_74 = in_edi;
        goto L_100ee1eb;
    }
    eax = t66;
    sf = (int32_t)t66 < 0;
    COW_AT(100ee3d8)
    if (!sf) goto L_100ee3f0;
    COW_AT(100ee3da)
    t67 = rd32(sp0 - 0x6cu);
    t68 = rd32(sp0 - 0x70u);
    t69 = rd32(sp0 - 0x74u);
    wr32(rd32(COW_IMG(0x104df770u)) + 0x136acu, eax);
    g->ebx = t67;
    g->esi = t68;
    g->edi = t69;
    return 0xffffffffu;
L_100ee3f0: ;
    COW_AT(100ee3f0)
    wr32(arg1, 0x16u);
    g->ebx = rd32(sp0 - 0x6cu);
    g->esi = rd32(sp0 - 0x70u);
    g->edi = rd32(sp0 - 0x74u);
    return 0u;
L_100ee3ff: ;
    COW_AT(100ee3ff)
    wr32(sp0 - 0x78u, 0x12u);
    wr32(sp0 - 0x7cu, 8u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x74u;
    t36 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0x12u);
    t37 = g->ecx;
    t38 = g->edx;
    wr32(sp0 - 0x80u, t36);
    g->edx = t38;
    g->esp = sp0 - 0x7cu;
    cow_thiscall_cdecl(g, COW_IMG(0x100f0000u), t37, 1, t36);
    t39 = g->ecx;
    t40 = g->edx;
    wr32(sp0 - 0x84u, arg2);
    g->eax = arg2;
    g->ecx = t39;
    g->edx = t40;
    g->esp = sp0 - 0x80u;
    t41 = cow_cdecl(g, COW_IMG(0x100efda0u), 1, arg2);
    t42 = g->ecx;
    t43 = g->edx;
    if ((int32_t)t41 >= 0)
    {
        eax = t41;
        ecx = t42;
        edx = t43;
        ebx = t41;
        goto L_100ee43e;
    }
    eax = t41;
    COW_AT(100ee424)
    t44 = rd32(sp0 - 0x70u);
    t45 = rd32(sp0 - 0x74u);
    wr32(rd32(COW_IMG(0x104df770u)) + 0x136acu, 0xffffffffu);
    g->ebx = rd32(sp0 - 0x6cu);
    g->esi = t44;
    g->edi = t45;
    return 0xffffffffu;
L_100ee43e: ;
    COW_AT(100ee43e)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x74u;
    t46 = cow_stdcall(g, COW_IMG(0x100efd20u), 0);
    t47 = g->ecx;
    t48 = g->edx;
    if ((int32_t)t46 >= 0)
    {
        eax = t46;
        ecx = t47;
        edx = t48;
        edi = t46;
        goto L_100ee45f;
    }
    eax = t46;
    edi = t46;
L_100ee449: ;
    COW_AT(100ee449)
    wr32(rd32(COW_IMG(0x104df770u)) + 0x136acu, edi);
    g->ebx = rd32(sp0 - 0x6cu);
    g->esi = rd32(sp0 - 0x70u);
    g->edi = rd32(sp0 - 0x74u);
    return 0xffffffffu;
L_100ee45f: ;
    COW_AT(100ee45f)
    wr32(sp0 - 0x78u, edi);
    wr32(sp0 - 0x7cu, ebx);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x74u;
    t49 = cow_cdecl(g, COW_IMG(0x1031002eu), 2, ebx, edi);
    t50 = g->ecx;
    t51 = g->edx;
    wr32(sp0 - 0x80u, edi);
    wr32(sp0 - 0x84u, ebx);
    g->ecx = t50;
    g->edx = t51;
    g->esp = sp0 - 0x7cu;
    t52 = cow_cdecl(g, COW_IMG(0x10310023u), 2, ebx, edi);
    t53 = g->ecx;
    t54 = g->edx;
    if ((int32_t)t52 >= 0)
    {
        eax = t52;
        ecx = t53;
        edx = t54;
        goto L_100ee48a;
    }
    eax = t52;
    COW_AT(100ee474)
    t55 = rd32(sp0 - 0x6cu);
    t56 = rd32(sp0 - 0x70u);
    t57 = rd32(sp0 - 0x74u);
    wr32(rd32(COW_IMG(0x104df770u)) + 0x136acu, eax);
    g->ebx = t55;
    g->esi = t56;
    g->edi = t57;
    return 0xffffffffu;
L_100ee48a: ;
    COW_AT(100ee48a)
    g->eax = eax;
    g->esp = sp0 - 0x74u;
    t58 = cow_stdcall(g, COW_IMG(0x1030fff7u), 0);
    wr32(rd32(COW_IMG(0x104df770u)) + 0x136a8u, t58);
    if ((int32_t)rd32(rd32(COW_IMG(0x104df770u)) + 0x136a8u) >= 0) goto L_100ee1e9;
    eax = rd32(rd32(COW_IMG(0x104df770u)) + 0x136a8u);
    ecx = rd32(COW_IMG(0x104df770u));
    COW_AT(100ee4af)
    t59 = rd32(sp0 - 0x74u);
    wr32(ecx + 0x136acu, eax);
    g->ebx = rd32(sp0 - 0x6cu);
    g->esi = rd32(sp0 - 0x70u);
    g->edi = t59;
    return 0xffffffffu;
L_100ee4bf: ;
    COW_AT(100ee4bf)
    wr32(sp0 - 0x78u, 0x13u);
    wr32(sp0 - 0x7cu, 8u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x74u;
    t26 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0x13u);
    t27 = g->ecx;
    t28 = g->edx;
    wr32(sp0 - 0x80u, t26);
    g->edx = t28;
    g->esp = sp0 - 0x7cu;
    cow_thiscall_cdecl(g, COW_IMG(0x100f0000u), t27, 1, t26);
    t29 = g->edx;
    t30 = rd32(rd32(COW_IMG(0x104df770u)) + 0x136a8u);
    wr32(sp0 - 0x84u, t30);
    g->eax = rd32(COW_IMG(0x104df770u));
    t31 = rd32(COW_IMG(0x104df770u));
    g->esp = sp0 - 0x80u;
    t32 = cow_cdecl(g, COW_IMG(0x10310002u), 1, t30);
    if (t32 == 0u)
    {
        loc_6c = in_ebx;
        loc_70 = in_esi;
        loc_74 = in_edi;
        goto L_100ee1eb;
    }
    eax = t32;
    sf = (int32_t)t32 < 0;
    COW_AT(100ee4ea)
    if (!sf) goto L_100ee1e9;
    COW_AT(100ee4f0)
    t33 = rd32(sp0 - 0x6cu);
    t34 = rd32(sp0 - 0x70u);
    t35 = rd32(sp0 - 0x74u);
    wr32(rd32(COW_IMG(0x104df770u)) + 0x136acu, eax);
    g->ebx = t33;
    g->esi = t34;
    g->edi = t35;
    return 0xffffffffu;
L_100ee506: ;
    COW_AT(100ee506)
    wr32(sp0 - 0x78u, 0x14u);
    wr32(sp0 - 0x7cu, 8u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x74u;
    t19 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0x14u);
    t20 = g->ecx;
    t21 = g->edx;
    wr32(sp0 - 0x80u, t19);
    g->edx = t21;
    g->esp = sp0 - 0x7cu;
    t22 = cow_thiscall_cdecl(g, COW_IMG(0x100f0000u), t20, 1, t19);
    t23 = g->ecx;
    t24 = g->edx;
    g->esp = sp0 - 0x74u;
    t25 = cow_stdcall(g, COW_IMG(0x1031000du), 0);
    eax = t25;
    goto L_100ee51d;
L_100ee54d: ;
    COW_AT(100ee54d)
    wr32(sp0 - 0x78u, 0x15u);
    wr32(sp0 - 0x7cu, 8u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x74u;
    t10 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0x15u);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0x80u, t10);
    g->esp = sp0 - 0x7cu;
    cow_thiscall_cdecl(g, COW_IMG(0x100f0000u), t11, 1, t10);
    t13 = g->ecx;
    t14 = rd32(rd32(COW_IMG(0x104df770u)) + 0x136a8u);
    wr32(sp0 - 0x84u, t14);
    g->eax = t14;
    g->esp = sp0 - 0x80u;
    t15 = cow_cdecl(g, COW_IMG(0x10310002u), 1, t14);
    if (t15 == 0u)
    {
        loc_6c = in_ebx;
        loc_70 = in_esi;
        loc_74 = in_edi;
        goto L_100ee1eb;
    }
    eax = t15;
    sf = (int32_t)t15 < 0;
    COW_AT(100ee579)
    if (!sf) goto L_100ee1e9;
    COW_AT(100ee57f)
    t16 = rd32(sp0 - 0x6cu);
    t17 = rd32(sp0 - 0x70u);
    t18 = rd32(sp0 - 0x74u);
    wr32(rd32(COW_IMG(0x104df770u)) + 0x136acu, eax);
    g->ebx = t16;
    g->esi = t17;
    g->edi = t18;
    return 0xffffffffu;
L_100ee595: ;
    COW_AT(100ee595)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return 1u;
L_100ee5a1: ;
    COW_AT(100ee5a1)
    wr32(sp0 - 0x78u, edx + 0x13698u);
    t9 = rd32(edx + 0x13690u);
    wr32(sp0 - 0x7cu, t9);
    g->esp = sp0 - 0x48u;
    cow_thiscall_cdecl(g, COW_IMG(0x10115d50u), t9, 13, t9, edx + 0x13698u, in_edi, in_esi, in_ebx, rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu));
    if (rd32(rd32(COW_IMG(0x104df770u)) + 0x13698u) == 0u)
    {
    COW_AT(100ee5c7)
        wr32(arg1, rd32(arg1) + 1u);
    }
    COW_AT(100ee5c9)
    if (rd32(rd32(COW_IMG(0x104df770u)) + 0x13698u) == 0xffffffffu)
    {
        eax = rd32(COW_IMG(0x104df770u));
        goto L_100ee626;
    }
    COW_AT(100ee5d7)
    g->ebx = rd32(sp0 - 0x6cu);
    g->esi = rd32(sp0 - 0x70u);
    g->edi = rd32(sp0 - 0x74u);
    return 0u;
L_100ee5e0: ;
    COW_AT(100ee5e0)
    wr32(sp0 - 0x78u, edx + 0x13698u);
    t7 = rd32(edx + 0x13690u);
    wr32(sp0 - 0x7cu, t7);
    g->esp = sp0 - 0x48u;
    cow_thiscall_cdecl(g, COW_IMG(0x10115d50u), edx + 0x13698u, 13, t7, edx + 0x13698u, in_edi, in_esi, in_ebx, rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu));
    if (rd32(rd32(COW_IMG(0x104df770u)) + 0x13698u) != 0u)
    {
        eax = rd32(COW_IMG(0x104df770u));
    }
    else
    {
        eax = rd32(COW_IMG(0x104df770u));
    COW_AT(100ee605)
        wr32(eax + 0x13690u, 0u);
        t8 = rd32(arg1) + 1u;
        wr32(arg1, t8);
        eax = rd32(COW_IMG(0x104df770u));
    }
    COW_AT(100ee619)
    if (rd32(eax + 0x13698u) != 0xffffffffu)
    {
        loc_6c = rd32(sp0 - 0x6cu);
        loc_70 = rd32(sp0 - 0x70u);
        loc_74 = rd32(sp0 - 0x74u);
        goto L_100ee1eb;
    }
L_100ee626: ;
    COW_AT(100ee626)
    g->ebx = rd32(sp0 - 0x6cu);
    g->esi = rd32(sp0 - 0x70u);
    g->edi = rd32(sp0 - 0x74u);
    return 0xffffffffu;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100ee160(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100ee170u:
    {
        unsigned cf;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x74u);
        in_esi = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x100ee17au:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x74u);
        in_esi = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x100ee184u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x74u);
        in_esi = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x74u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ee18bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x74u);
        in_esi = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x74u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ee190u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x74u);
        in_esi = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x74u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ee19du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x74u);
        in_esi = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x74u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ee1a4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x74u);
        in_esi = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x74u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ee1abu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x74u);
        in_esi = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x74u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ee1e9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_78;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_78 = rd32(sp0 - 0x78u);
        g->esp = sp0 - 0x74u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ee1ebu:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_78;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x100ee1f4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x74u);
        in_esi = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x74u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ee21fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_78;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_78 = rd32(sp0 - 0x78u);
        g->esp = sp0 - 0x74u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ee22fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x74u);
        in_esi = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x74u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ee253u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x74u);
        in_esi = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x74u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ee2c5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x74u);
        in_esi = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x74u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ee2e4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x74u);
        in_esi = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x74u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ee2f3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x74u);
        in_esi = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x74u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ee2f5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_78;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_78 = rd32(sp0 - 0x78u);
        in_edi = rd32(sp0 - 0x74u);
        in_esi = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ee313u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x74u);
        in_esi = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x74u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ee317u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x74u);
        in_esi = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x74u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ee31bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x74u);
        in_esi = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x74u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ee31fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x74u);
        in_esi = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x74u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ee348u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_78;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_78 = rd32(sp0 - 0x78u);
        g->esp = sp0 - 0x74u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ee35eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x74u;
        g->esi = arg1;
        wr32(sp0 - 0x78u, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x100ee36fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x74u;
        g->esi = arg1;
        wr32(sp0 - 0x78u, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x100ee37au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x74u;
        g->esi = arg1;
        wr32(sp0 - 0x78u, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x100ee388u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x74u;
        g->esi = arg1;
        g->cf = (uint8_t)(0u);
        g->pf = (uint8_t)(PARITY(0u));
        g->of = (uint8_t)(0u);
        wr32(sp0 - 0x78u, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x100ee3adu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x74u);
        in_esi = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x74u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ee3d8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_78;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        loc_78 = rd32(sp0 - 0x78u);
        g->esp = sp0 - 0x74u;
        g->esi = arg1;
        g->of = (uint8_t)(0u);
        (void)sp0;
        return 1;
    }
    case 0x100ee3dau:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_78;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_78 = rd32(sp0 - 0x78u);
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x100ee3f0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_78;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_78 = rd32(sp0 - 0x78u);
        g->esp = sp0 - 0x74u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ee3ffu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x74u);
        in_esi = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x74u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ee424u:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_78;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_78 = rd32(sp0 - 0x78u);
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x100ee43eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_78;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_78 = rd32(sp0 - 0x78u);
        g->esp = sp0 - 0x74u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ee449u:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_78;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_78 = rd32(sp0 - 0x78u);
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x100ee45fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x74u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ee474u:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x100ee48au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x74u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ee4afu:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x100ee4bfu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x74u);
        in_esi = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x74u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ee4eau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_78;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        loc_78 = rd32(sp0 - 0x78u);
        g->esp = sp0 - 0x74u;
        g->esi = arg1;
        g->of = (uint8_t)(0u);
        (void)sp0;
        return 1;
    }
    case 0x100ee4f0u:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_78;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_78 = rd32(sp0 - 0x78u);
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x100ee506u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x74u);
        in_esi = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x74u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ee51du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_78;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_78 = rd32(sp0 - 0x78u);
        g->esp = sp0 - 0x74u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ee53du:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_78;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_78 = rd32(sp0 - 0x78u);
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x100ee54du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x74u);
        in_esi = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x74u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ee579u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_78;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        loc_78 = rd32(sp0 - 0x78u);
        g->esp = sp0 - 0x74u;
        g->esi = arg1;
        g->of = (uint8_t)(0u);
        (void)sp0;
        return 1;
    }
    case 0x100ee57fu:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_78;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_78 = rd32(sp0 - 0x78u);
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x100ee595u:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x74u);
        in_esi = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x100ee5a1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x74u);
        in_esi = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x74u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ee5c7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x74u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ee5c9u:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x100ee5d7u:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x100ee5e0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x74u);
        in_esi = rd32(sp0 - 0x70u);
        in_ebx = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x74u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ee605u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x74u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ee619u:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x100ee626u:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_78;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_78 = rd32(sp0 - 0x78u);
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100ee160(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100ee160(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
