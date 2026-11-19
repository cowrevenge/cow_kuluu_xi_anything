/* f_0x100ed7e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100ed7e0(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_7c;
    uint32_t loc_80;
    uint32_t loc_84;
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
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 172u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100ed7f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x84u); in_esi = rd32(sp0 - 0x80u); in_ebx = rd32(sp0 - 0x7cu); g->ebx = rd32(sp0 - 0x7cu); g->edi = rd32(sp0 - 0x84u); g->esi = rd32(sp0 - 0x80u); goto E_100ed7f1;
    case 0x100ed7fbu: eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x84u); in_esi = rd32(sp0 - 0x80u); in_ebx = rd32(sp0 - 0x7cu); g->ebx = rd32(sp0 - 0x7cu); g->edi = rd32(sp0 - 0x84u); g->esi = rd32(sp0 - 0x80u); goto E_100ed7fb;
    case 0x100ed806u: eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x84u); in_esi = rd32(sp0 - 0x80u); in_ebx = rd32(sp0 - 0x7cu); g->ebx = rd32(sp0 - 0x7cu); g->edi = rd32(sp0 - 0x84u); g->esi = rd32(sp0 - 0x80u); goto E_100ed806;
    case 0x100ed80bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100ed80b;
    case 0x100ed813u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100ed813;
    case 0x100ed817u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100ed817;
    case 0x100ed81cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100ed81c;
    case 0x100ed821u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); goto E_100ed821;
    case 0x100ed82cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); goto E_100ed82c;
    case 0x100ed833u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); goto E_100ed833;
    case 0x100ed83bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100ed83b;
    case 0x100ed841u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100ed841;
    case 0x100ed84du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100ed84d;
    case 0x100ed857u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100ed857;
    case 0x100ed876u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100ed876;
    case 0x100ed886u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100ed886;
    case 0x100ed890u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); goto E_100ed890;
    case 0x100ed89cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); goto E_100ed89c;
    case 0x100ed8adu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100ed8ad;
    case 0x100ed8b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; goto E_100ed8b5;
    case 0x100ed8b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100ed8b7;
    case 0x100ed8bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100ed8bb;
    case 0x100ed8d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100ed8d1;
    case 0x100ed8d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; goto E_100ed8d9;
    case 0x100ed8dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100ed8db;
    case 0x100ed8e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100ed8e3;
    case 0x100ed93du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100ed93d;
    case 0x100ed95du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100ed95d;
    case 0x100ed9b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100ed9b6;
    case 0x100ed9cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100ed9cd;
    case 0x100ed9e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); goto E_100ed9e8;
    case 0x100ed9f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); goto E_100ed9f8;
    case 0x100eda01u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100eda01;
    case 0x100eda07u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100eda07;
    case 0x100eda18u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100eda18;
    case 0x100eda1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100eda1b;
    case 0x100eda1du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); goto E_100eda1d;
    case 0x100eda26u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); goto E_100eda26;
    case 0x100eda39u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100eda39;
    case 0x100eda4au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); goto E_100eda4a;
    case 0x100eda52u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); goto E_100eda52;
    case 0x100eda5cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); goto E_100eda5c;
    case 0x100eda62u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100eda62;
    case 0x100eda6au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100eda6a;
    case 0x100eda79u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100eda79;
    case 0x100eda7eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); goto E_100eda7e;
    case 0x100eda98u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100eda98;
    case 0x100edaa9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); goto E_100edaa9;
    case 0x100edab2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100edab2;
    case 0x100edab8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100edab8;
    case 0x100edac9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100edac9;
    case 0x100edadau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); goto E_100edada;
    case 0x100edae3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100edae3;
    case 0x100edae9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100edae9;
    case 0x100edafbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100edafb;
    case 0x100edb0cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); goto E_100edb0c;
    case 0x100edb15u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100edb15;
    case 0x100edb1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100edb1b;
    case 0x100edb2bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100edb2b;
    case 0x100edb4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100edb4e;
    case 0x100edb5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); goto E_100edb5e;
    case 0x100edb6au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100edb6a;
    case 0x100edb75u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; goto E_100edb75;
    case 0x100edb7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100edb7b;
    case 0x100edb91u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); goto E_100edb91;
    case 0x100edb9au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100edb9a;
    case 0x100edba0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100edba0;
    case 0x100edba5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100edba5;
    case 0x100edbafu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100edbaf;
    case 0x100edbb6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100edbb6;
    case 0x100edbccu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_100edbcc;
    case 0x100edbe2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100edbe2;
    case 0x100edbecu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100edbec;
    case 0x100edc03u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100edc03;
    case 0x100edc34u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100edc34;
    case 0x100edc46u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100edc46;
    case 0x100edc51u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100edc51;
    case 0x100edc53u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100edc53;
    case 0x100edc59u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100edc59;
    case 0x100edc6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100edc6c;
    case 0x100edc87u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100edc87;
    case 0x100edcb0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100edcb0;
    case 0x100edcb9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100edcb9;
    case 0x100edccau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100edcca;
    case 0x100edcdbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); goto E_100edcdb;
    case 0x100edce4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100edce4;
    case 0x100edceau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100edcea;
    case 0x100edd0cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100edd0c;
    case 0x100edd23u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100edd23;
    case 0x100edd32u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100edd32;
    case 0x100edd3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100edd3b;
    case 0x100edd41u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100edd41;
    case 0x100edd58u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100edd58;
    case 0x100edd79u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100edd79;
    case 0x100edd8au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); goto E_100edd8a;
    case 0x100edd93u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100edd93;
    case 0x100edd99u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100edd99;
    case 0x100eddabu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100eddab;
    case 0x100eddbcu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); goto E_100eddbc;
    case 0x100eddcfu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100eddcf;
    case 0x100edde0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); goto E_100edde0;
    case 0x100eddecu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); goto E_100eddec;
    case 0x100eddffu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100eddff;
    case 0x100ede0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100ede0f;
    case 0x100ede11u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100ede11;
    case 0x100ede20u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100ede20;
    case 0x100ede29u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100ede29;
    case 0x100ede2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100ede2e;
    case 0x100ede36u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100ede36;
    default: break;
    }
#endif

    COW_AT(100ed7e0)
    wr32(sp0 - 0x7cu, in_ebx);
    wr32(sp0 - 0x80u, in_esi);
    wr32(sp0 - 0x84u, in_edi);
    if (rd32(COW_IMG(0x104df770u)) != 0u)
    {
        eax = rd32(COW_IMG(0x104df770u));
        goto L_100ed7fb;
    }
    eax = rd32(COW_IMG(0x104df770u));
    COW_AT(100ed7f1)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return 0xffffffffu;
L_100ed7fb: ;
    COW_AT(100ed7fb)
    if (rd32(arg1) != 0u)
    {
        edx = in_edx;
        loc_7c = in_ebx;
        loc_80 = in_esi;
        loc_84 = in_edi;
        goto L_100ed821;
    }
    COW_AT(100ed806)
    g->eax = eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x84u;
    t1 = cow_stdcall(g, COW_IMG(0x100eded0u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(100ed80b)
    if ((int32_t)eax < 0) goto L_100ede36;
    COW_AT(100ed813)
    if (rd32(arg1) == 0u)
    {
    COW_AT(100ed817)
        g->edx = edx;
        g->esp = sp0 - 0x84u;
        cow_stdcall(g, COW_IMG(0x100edea0u), 0);
        t4 = g->edx;
        edx = t4;
    }
    COW_AT(100ed81c)
    eax = rd32(COW_IMG(0x104df770u));
    loc_7c = rd32(sp0 - 0x7cu);
    loc_80 = rd32(sp0 - 0x80u);
    loc_84 = rd32(sp0 - 0x84u);
L_100ed821: ;
    COW_AT(100ed821)
    if (rd32(arg1) > 0x15u) goto L_100eda1d;
    ecx = rd32(arg1);
    COW_AT(100ed82c)
    t5 = rd32(COW_IMG(0x100ede40u) + ecx * 4u);
    switch (t5 - RD)
    {
    case 0x100ed833u: goto L_100ed833;
    case 0x100ed890u: goto L_100ed890;
    case 0x100ed9f8u: goto L_100ed9f8;
    case 0x100eda26u: goto L_100eda26;
    case 0x100eda4au: goto L_100eda4a;
    case 0x100edaa9u: goto L_100edaa9;
    case 0x100edadau: goto L_100edada;
    case 0x100edb0cu: goto L_100edb0c;
    case 0x100edb5eu: goto L_100edb5e;
    case 0x100edb91u: goto L_100edb91;
    case 0x100edcdbu: goto L_100edcdb;
    case 0x100edd8au: goto L_100edd8a;
    case 0x100eddbcu: goto L_100eddbc;
    case 0x100edde0u: goto L_100edde0;
    case 0x100eddecu: goto L_100eddec;
    default: rt_fatal(g, COW_IMG(0x100ed82cu), "switch");
    }
    return 0;
L_100ed833: ;
    COW_AT(100ed833)
    wr32(sp0 - 0x88u, 0u);
    wr32(sp0 - 0x8cu, 8u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x84u;
    t88 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0u);
    t89 = g->ecx;
    t90 = g->edx;
    eax = t88;
    ecx = t89;
    edx = t90;
    COW_AT(100ed83b)
    wr32(sp0 - 0x90u, eax);
    g->edx = edx;
    g->esp = sp0 - 0x8cu;
    cow_thiscall_cdecl(g, COW_IMG(0x100f0000u), ecx, 1, eax);
    t91 = g->ecx;
    t92 = g->edx;
    ecx = t91;
    edx = t92;
    COW_AT(100ed841)
    if (rd32(COW_IMG(0x104ca430u)) != 0u) goto L_100ed886;
    eax = rd32(COW_IMG(0x104ca430u));
    COW_AT(100ed84d)
    wr32(sp0 - 0x88u, COW_IMG(0x10362044u));
    g->eax = eax;
    g->esp = sp0 - 0x88u;
    t93 = cow_stdcall(g, COW_IMG(0x103101a4u), 0);
    eax = t93;
    COW_AT(100ed857)
    wr32(rd32(COW_IMG(0x104df770u)) + 0x136b0u, eax);
    if ((int32_t)rd32(rd32(COW_IMG(0x104df770u)) + 0x136b0u) >= 0)
    {
        ecx = rd32(COW_IMG(0x104df770u));
        goto L_100ed886;
    }
    eax = rd32(rd32(COW_IMG(0x104df770u)) + 0x136b0u);
    ecx = rd32(COW_IMG(0x104df770u));
    COW_AT(100ed876)
    t94 = rd32(sp0 - 0x84u);
    wr32(ecx + 0x136acu, eax);
    g->ebx = rd32(sp0 - 0x7cu);
    g->esi = rd32(sp0 - 0x80u);
    g->edi = t94;
    return 0xffffffffu;
L_100ed886: ;
    COW_AT(100ed886)
    t95 = rd32(arg1) + 1u;
    wr32(arg1, t95);
    eax = rd32(COW_IMG(0x104df770u));
    loc_7c = rd32(sp0 - 0x7cu);
    loc_80 = rd32(sp0 - 0x80u);
    loc_84 = rd32(sp0 - 0x84u);
L_100ed890: ;
    COW_AT(100ed890)
    if (rd32(COW_IMG(0x104ca430u)) != 0u) goto L_100ed9e8;
    COW_AT(100ed89c)
    wr32(sp0 - 0x88u, sp0 - 0x54u);
    t96 = rd32(eax + 0x136b0u);
    wr32(sp0 - 0x8cu, t96);
    g->eax = t96;
    g->esp = sp0 - 0x8cu;
    t97 = cow_stdcall(g, COW_IMG(0x103101afu), 0);
    eax = t97;
    COW_AT(100ed8ad)
    if ((int32_t)(uint32_t)((int32_t)eax >> 0x1fu) > 0) goto L_100ed8e3;
    edx = (uint32_t)((int32_t)eax >> 0x1fu);
    sf = (int32_t)(uint32_t)((int32_t)eax >> 0x1fu) < 0;
    COW_AT(100ed8b5)
    if (sf) goto L_100ed8bb;
    COW_AT(100ed8b7)
    if (1u) goto L_100ed8d1;
L_100ed8bb: ;
    COW_AT(100ed8bb)
    t98 = rd32(sp0 - 0x7cu);
    t99 = rd32(sp0 - 0x80u);
    t100 = rd32(sp0 - 0x84u);
    wr32(rd32(COW_IMG(0x104df770u)) + 0x136acu, eax);
    g->ebx = t98;
    g->esi = t99;
    g->edi = t100;
    return 0xffffffffu;
L_100ed8d1: ;
    COW_AT(100ed8d1)
    if ((int32_t)edx < 0)
    {
        loc_7c = rd32(sp0 - 0x7cu);
        loc_80 = rd32(sp0 - 0x80u);
        loc_84 = rd32(sp0 - 0x84u);
        goto L_100eda1d;
    }
    zf = edx == 0u;
    sf = (int32_t)edx < 0;
    COW_AT(100ed8d9)
    if (!zf && !sf) goto L_100ed8e3;
    COW_AT(100ed8db)
    if (eax == 0u)
    {
        loc_7c = rd32(sp0 - 0x7cu);
        loc_80 = rd32(sp0 - 0x80u);
        loc_84 = rd32(sp0 - 0x84u);
        goto L_100eda1d;
    }
L_100ed8e3: ;
    COW_AT(100ed8e3)
    t101 = rd32(COW_IMG(0x104df770u)) + 0x14u;
    wr32(rd32(COW_IMG(0x104df770u)) + 0x136b4u, t101);
    t102 = rd32(COW_IMG(0x104df770u)) + 0xc8u;
    wr32(rd32(COW_IMG(0x104df770u)) + 0x136b8u, t102);
    t103 = (((uint32_t)(uint8_t)rd32(sp0 - 0x50u) << 8u | (uint8_t)rd32(sp0 - 0x4fu)) << 8u | (uint8_t)rd32(sp0 - 0x4eu)) << 8u | (uint8_t)rd32(sp0 - 0x4du);
    wr32(sp0 - 0x88u, t103);
    g->eax = (uint8_t)rd32(sp0 - 0x4du);
    t104 = rd32(sp0 - 0x4du);
    g->esp = sp0 - 0x84u;
    t105 = cow_call_regs(g, COW_IMG(0x100dc3a0u), g->eax, (uint8_t)rd32(sp0 - 0x4eu), t103, 1, 1, t103);
    eax = t105;
    COW_AT(100ed93d)
    t106 = rd32(COW_IMG(0x104df770u));
    wr32(t106 + 0x136bcu, eax);
    t107 = (eax & 0xffff0000u) | rd16(rd32(COW_IMG(0x104df770u)) + 0x10u);
    wr32(sp0 - 0x88u, t107);
    g->eax = t107;
    g->esp = sp0 - 0x84u;
    t108 = cow_stdcall(g, rd32(COW_IMG(0x10329480u)), 1, t107);   /* ws2_32.dll!htons */
    eax = t108;
    COW_AT(100ed95d)
    wr32(rd32(COW_IMG(0x104df770u)) + 0x136c0u, (uint16_t)eax);
    t109 = rd32(COW_IMG(0x104df770u));
    wr32(t109 + 0x136ccu, rd32(COW_IMG(0x104ca638u)));
    t110 = rd32(COW_IMG(0x104ca63cu));
    wr32(t109 + 0x136d0u, t110);
    t111 = rd32(COW_IMG(0x104ca640u));
    wr32(t109 + 0x136d4u, t111);
    wr16(t109 + 0x136d8u, rd16(COW_IMG(0x104ca644u)));
    t112 = rd8(COW_IMG(0x104ca646u));
    wr8(t109 + 0x136dau, (uint8_t)t112);
    t113 = rd32(COW_IMG(0x104df770u));
    wr8(t113 + 0x136dbu, 0u);
    g->ecx = t113;
    g->esp = sp0 - 0x84u;
    cow_stdcall(g, COW_IMG(0x101152d0u), 0);
    t114 = g->ecx;
    ecx = t114;
    COW_AT(100ed9b6)
    t115 = rd32(COW_IMG(0x104df770u)) + 0x136b4u;
    wr32(sp0 - 0x88u, t115);
    t116 = rd32(COW_IMG(0x104df770u)) + 0x13690u;
    wr32(sp0 - 0x8cu, t116);
    g->esp = sp0 - 0x84u;
    cow_cdecl(g, COW_IMG(0x10115500u), 2, t116, t115);
    COW_AT(100ed9cd)
    wr32(COW_IMG(0x104ca430u), 2u);
    t117 = rd32(arg1) + 1u;
    wr32(arg1, t117);
    g->ebx = rd32(sp0 - 0x7cu);
    g->esi = rd32(sp0 - 0x80u);
    g->edi = rd32(sp0 - 0x84u);
    return 0u;
L_100ed9e8: ;
    COW_AT(100ed9e8)
    t118 = rd32(arg1) + 2u;
    wr32(arg1, t118);
    g->ebx = loc_7c;
    g->esi = loc_80;
    g->edi = loc_84;
    return 0u;
L_100ed9f8: ;
    COW_AT(100ed9f8)
    wr32(sp0 - 0x88u, 1u);
    wr32(sp0 - 0x8cu, 8u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x84u;
    t83 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 1u);
    t84 = g->ecx;
    t85 = g->edx;
    eax = t83;
    ecx = t84;
    edx = t85;
    COW_AT(100eda01)
    wr32(sp0 - 0x90u, eax);
    g->edx = edx;
    g->esp = sp0 - 0x8cu;
    cow_thiscall_cdecl(g, COW_IMG(0x100f0000u), ecx, 1, eax);
    t86 = g->edx;
    edx = t86;
    COW_AT(100eda07)
    t87 = rd32(rd32(COW_IMG(0x104df770u)) + 0x13690u);
    wr32(sp0 - 0x94u, t87);
    g->esp = sp0 - 0x88u;
    cow_cdecl(g, COW_IMG(0x10115820u), 3, t87, rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu));
    COW_AT(100eda18)
L_100eda1b: ;
    COW_AT(100eda1b)
    wr32(arg1, rd32(arg1) + 1u);
    loc_7c = rd32(sp0 - 0x7cu);
    loc_80 = rd32(sp0 - 0x80u);
    loc_84 = rd32(sp0 - 0x84u);
L_100eda1d: ;
    COW_AT(100eda1d)
    g->ebx = loc_7c;
    g->esi = loc_80;
    g->edi = loc_84;
    return 0u;
L_100eda26: ;
    COW_AT(100eda26)
    wr32(sp0 - 0x88u, eax + 0x13698u);
    t81 = rd32(eax + 0x13690u);
    wr32(sp0 - 0x8cu, t81);
    g->esp = sp0 - 0x58u;
    cow_thiscall_cdecl(g, COW_IMG(0x10115d50u), ecx, 13, t81, eax + 0x13698u, loc_84, loc_80, loc_7c, rd32(sp0 - 0x78u), rd32(sp0 - 0x74u), rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu));
    COW_AT(100eda39)
    t82 = rd32(arg1) + 1u;
    wr32(arg1, t82);
    g->ebx = rd32(sp0 - 0x7cu);
    g->esi = rd32(sp0 - 0x80u);
    g->edi = rd32(sp0 - 0x84u);
    return 0u;
L_100eda4a: ;
    COW_AT(100eda4a)
    if (rd32(eax + 0x136acu) != 0u) goto L_100eda7e;
    COW_AT(100eda52)
    if (rd32(eax + 0x13690u) == 0u) goto L_100eda7e;
    ecx = rd32(eax + 0x13690u);
    COW_AT(100eda5c)
    wr32(sp0 - 0x88u, ecx);
    g->eax = eax;
    g->esp = sp0 - 0x84u;
    t78 = cow_cdecl(g, COW_IMG(0x101163a0u), 1, ecx);
    eax = t78;
    COW_AT(100eda62)
    if (eax != 1u) goto L_100eda79;
    COW_AT(100eda6a)
    wr32(arg1, 0x15u);
    g->ebx = rd32(sp0 - 0x7cu);
    g->esi = rd32(sp0 - 0x80u);
    g->edi = rd32(sp0 - 0x84u);
    return 0u;
L_100eda79: ;
    COW_AT(100eda79)
    eax = rd32(COW_IMG(0x104df770u));
    loc_7c = rd32(sp0 - 0x7cu);
    loc_80 = rd32(sp0 - 0x80u);
    loc_84 = rd32(sp0 - 0x84u);
L_100eda7e: ;
    COW_AT(100eda7e)
    wr32(eax + 0x136acu, 0u);
    wr32(sp0 - 0x88u, 1u);
    t79 = rd32(rd32(COW_IMG(0x104df770u)) + 0x13690u);
    wr32(sp0 - 0x8cu, t79);
    g->esp = sp0 - 0x84u;
    cow_cdecl(g, COW_IMG(0x101158a0u), 2, t79, 1u);
    COW_AT(100eda98)
    t80 = rd32(arg1) + 1u;
    wr32(arg1, t80);
    g->ebx = rd32(sp0 - 0x7cu);
    g->esi = rd32(sp0 - 0x80u);
    g->edi = rd32(sp0 - 0x84u);
    return 0u;
L_100edaa9: ;
    COW_AT(100edaa9)
    wr32(sp0 - 0x88u, 2u);
    wr32(sp0 - 0x8cu, 8u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x84u;
    t72 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 2u);
    t73 = g->ecx;
    t74 = g->edx;
    eax = t72;
    ecx = t73;
    edx = t74;
    COW_AT(100edab2)
    wr32(sp0 - 0x90u, eax);
    g->edx = edx;
    g->esp = sp0 - 0x8cu;
    cow_thiscall_cdecl(g, COW_IMG(0x100f0000u), ecx, 1, eax);
    t75 = g->edx;
    edx = t75;
    COW_AT(100edab8)
    t76 = rd32(rd32(COW_IMG(0x104df770u)) + 0x13690u);
    wr32(sp0 - 0x94u, t76);
    g->esp = sp0 - 0x88u;
    cow_cdecl(g, COW_IMG(0x101157e0u), 3, t76, rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu));
    COW_AT(100edac9)
    t77 = rd32(arg1) + 1u;
    wr32(arg1, t77);
    g->ebx = rd32(sp0 - 0x7cu);
    g->esi = rd32(sp0 - 0x80u);
    g->edi = rd32(sp0 - 0x84u);
    return 0u;
L_100edada: ;
    COW_AT(100edada)
    wr32(sp0 - 0x88u, 3u);
    wr32(sp0 - 0x8cu, 8u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x84u;
    t66 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 3u);
    t67 = g->ecx;
    t68 = g->edx;
    eax = t66;
    ecx = t67;
    edx = t68;
    COW_AT(100edae3)
    wr32(sp0 - 0x90u, eax);
    g->esp = sp0 - 0x8cu;
    cow_thiscall_cdecl(g, COW_IMG(0x100f0000u), ecx, 1, eax);
    t69 = g->ecx;
    ecx = t69;
    COW_AT(100edae9)
    t70 = rd32(rd32(COW_IMG(0x104df770u)) + 0x13690u);
    wr32(sp0 - 0x94u, t70);
    g->esp = sp0 - 0x90u;
    cow_cdecl(g, COW_IMG(0x10115570u), 1, t70);
    COW_AT(100edafb)
    t71 = rd32(arg1) + 1u;
    wr32(arg1, t71);
    g->ebx = rd32(sp0 - 0x7cu);
    g->esi = rd32(sp0 - 0x80u);
    g->edi = rd32(sp0 - 0x84u);
    return 0u;
L_100edb0c: ;
    COW_AT(100edb0c)
    wr32(sp0 - 0x88u, 4u);
    wr32(sp0 - 0x8cu, 8u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x84u;
    t58 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 4u);
    t59 = g->ecx;
    t60 = g->edx;
    eax = t58;
    ecx = t59;
    edx = t60;
    COW_AT(100edb15)
    wr32(sp0 - 0x90u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x8cu;
    t61 = cow_thiscall_cdecl(g, COW_IMG(0x100f0000u), ecx, 1, eax);
    t62 = g->ecx;
    t63 = g->edx;
    eax = t61;
    ecx = t62;
    edx = t63;
    COW_AT(100edb1b)
    wr32(sp0 - 0x94u, 1u);
    wr32(sp0 - 0x98u, 0xffffffffu);
    wr32(sp0 - 0x9cu, 0xfffffffeu);
    wr32(sp0 - 0xa0u, 0u);
    wr32(sp0 - 0xa4u, 0xffffffffu);
    wr32(sp0 - 0xa8u, 0xfffffffeu);
    g->eax = eax;
    g->esp = sp0 - 0xa8u;
    t64 = cow_stdcall(g, COW_IMG(0x103100a7u), 0);
    eax = t64;
    COW_AT(100edb2b)
    wr32(rd32(COW_IMG(0x104df770u)) + 0x136a8u, eax);
    if ((int32_t)rd32(rd32(COW_IMG(0x104df770u)) + 0x136a8u) >= 0) goto L_100eda1b;
    eax = rd32(rd32(COW_IMG(0x104df770u)) + 0x136a8u);
    ecx = rd32(COW_IMG(0x104df770u));
    COW_AT(100edb4e)
    t65 = rd32(sp0 - 0x84u);
    wr32(ecx + 0x136acu, eax);
    g->ebx = rd32(sp0 - 0x7cu);
    g->esi = rd32(sp0 - 0x80u);
    g->edi = t65;
    return 0xffffffffu;
L_100edb5e: ;
    COW_AT(100edb5e)
    t53 = rd32(eax + 0x136a8u);
    wr32(sp0 - 0x88u, t53);
    g->eax = eax;
    g->esp = sp0 - 0x88u;
    t54 = cow_stdcall(g, COW_IMG(0x103100b2u), 0);
    eax = t54;
    COW_AT(100edb6a)
    if (eax == 0u)
    {
        loc_7c = rd32(sp0 - 0x7cu);
        loc_80 = rd32(sp0 - 0x80u);
        loc_84 = rd32(sp0 - 0x84u);
        goto L_100eda1d;
    }
    sf = (int32_t)eax < 0;
    COW_AT(100edb75)
    if (!sf) goto L_100eda1b;
    COW_AT(100edb7b)
    t55 = rd32(sp0 - 0x7cu);
    t56 = rd32(sp0 - 0x80u);
    t57 = rd32(sp0 - 0x84u);
    wr32(rd32(COW_IMG(0x104df770u)) + 0x136acu, eax);
    g->ebx = t55;
    g->esi = t56;
    g->edi = t57;
    return 0xffffffffu;
L_100edb91: ;
    COW_AT(100edb91)
    wr32(sp0 - 0x88u, 5u);
    wr32(sp0 - 0x8cu, 8u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x84u;
    t26 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 5u);
    t27 = g->ecx;
    t28 = g->edx;
    eax = t26;
    ecx = t27;
    edx = t28;
    COW_AT(100edb9a)
    wr32(sp0 - 0x90u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x8cu;
    t29 = cow_thiscall_cdecl(g, COW_IMG(0x100f0000u), ecx, 1, eax);
    t30 = g->ecx;
    t31 = g->edx;
    eax = t29;
    ecx = t30;
    edx = t31;
    COW_AT(100edba0)
    g->ebx = 0u;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x90u;
    t32 = cow_stdcall(g, COW_IMG(0x100f7740u), 0);
    t33 = g->ecx;
    eax = t32;
    ecx = t33;
    COW_AT(100edba5)
    wr32(sp0 - 0x94u, sp0 - 0x40u);
    g->eax = eax;
    g->esp = sp0 - 0x94u;
    t34 = cow_stdcall(g, COW_IMG(0x10310f4eu), 0);
    eax = t34;
    COW_AT(100edbaf)
    if ((int32_t)eax >= 0)
    {
        pf = PARITY((uint8_t)eax);
        zf = eax == 0u;
        sf = (int32_t)eax < 0;
        goto L_100edbcc;
    }
    COW_AT(100edbb6)
    t35 = rd32(sp0 - 0x7cu);
    t36 = rd32(sp0 - 0x80u);
    t37 = rd32(sp0 - 0x84u);
    wr32(rd32(COW_IMG(0x104df770u)) + 0x136acu, eax);
    g->ebx = t35;
    g->esi = t36;
    g->edi = t37;
    return 0xffffffffu;
L_100edbcc: ;
    COW_AT(100edbcc)
    wr32(sp0 - 0x88u, sp0 - 0x40u);
    t38 = rd32(rd32(COW_IMG(0x104df770u)) + 0x13690u);
    wr32(sp0 - 0x8cu, t38);
    g->cf = 0u;
    g->pf = pf;
    g->af = 0u;
    g->zf = zf;
    g->sf = sf;
    g->of = 0u;
    g->eax = rd32(COW_IMG(0x104df770u));
    g->ecx = t38;
    t39 = rd32(COW_IMG(0x104df770u));
    g->esp = sp0 - 0x7cu;
    t40 = cow_cdecl(g, COW_IMG(0x101163c0u), 4, t38, sp0 - 0x40u, rd32(sp0 - 0x84u), rd32(sp0 - 0x80u));
    t41 = g->ecx;
    eax = t40;
    ecx = t41;
    COW_AT(100edbe2)
    wr32(sp0 - 0x90u, sp0 - 0x64u);
    g->esp = sp0 - 0x90u;
    cow_stdcall(g, COW_IMG(0x10311082u), 0);
    COW_AT(100edbec)
    wr32(sp0 - 0x94u, sp0 - 0x64u);
    t42 = rd32(rd32(COW_IMG(0x104df770u)) + 0x13690u);
    wr32(sp0 - 0x98u, t42);
    g->edx = t42;
    g->esp = sp0 - 0x90u;
    cow_cdecl(g, COW_IMG(0x101164d0u), 2, t42, sp0 - 0x64u);
    t43 = g->edx;
    edx = t43;
    COW_AT(100edc03)
    wr32(sp0 - 0x6cu, 0u);
    wr32(sp0 - 0x68u, 0u);
    t44 = rd32(COW_IMG(0x104df770u));
    wr8(sp0 - 0x6cu, rd8(rd32(COW_IMG(0x103601bcu)) + 0xa8u));
    wr32(sp0 - 0x9cu, sp0 - 0x6cu);
    t45 = rd32(t44 + 0x13690u);
    wr32(sp0 - 0xa0u, t45);
    g->esp = sp0 - 0x98u;
    cow_cdecl(g, COW_IMG(0x101163f0u), 2, t45, sp0 - 0x6cu);
    COW_AT(100edc34)
    ecx = 1u;
    edx = rd32(rd32(COW_IMG(0x10456a28u)) + 0x10u);
    esi = 1u;
    cf = sp0 - 0x84u < sp0 - 0xa0u;
    pf = PARITY((uint8_t)(sp0 - 0x84u));
    zf = sp0 == 0x84u;
    sf = (int32_t)(sp0 - 0x84u) < 0;
    of = ((sp0 - 0xa0u ^ sp0 - 0x84u) & (sp0 - 0x84u ^ 0x1cu)) >> 0x1fu;
L_100edc46: ;
    COW_AT(100edc46)
    if ((1u << (ecx & 0x1fu) & edx) == 0u)
    {
        eax = 1u << (ecx & 0x1fu);
    }
    else
    {
        eax = 1u << (ecx & 0x1fu);
    COW_AT(100edc51)
        esi = esi | eax;
    }
    COW_AT(100edc53)
    if ((int32_t)(ecx + 1u) < 32)
    {
        cf = ecx + 1u < 0x20u;
        pf = PARITY((uint8_t)(ecx - 0x1fu));
        zf = ecx == 0x1fu;
        sf = (int32_t)(ecx - 0x1fu) < 0;
        of = ((ecx + 1u ^ 0x20u) & (ecx + 1u ^ ecx - 0x1fu)) >> 0x1fu;
        ecx = ecx + 1u;
        goto L_100edc46;
    }
    COW_AT(100edc59)
    wr32(sp0 - 0x88u, esi);
    t46 = rd32(rd32(COW_IMG(0x104df770u)) + 0x13690u);
    wr32(sp0 - 0x8cu, t46);
    g->esp = sp0 - 0x84u;
    cow_cdecl(g, COW_IMG(0x10116420u), 2, t46, esi);
    COW_AT(100edc6c)
    wr32(rd32(COW_IMG(0x103601bcu)) + 0xb0u, esi);
    esi = 0u;
L_100edc87: ;
    COW_AT(100edc87)
    t47 = rd32(esi * 4u + rd32(COW_IMG(0x10456a28u)) + 0x1cu);
    t48 = rd32(COW_IMG(0x104df770u));
    t49 = rd32(rd32(COW_IMG(0x104df770u)) + 0x13690u);
    wr32(esi * 4u + sp0 - 0x74u, t47);
    wr32(sp0 - 0x88u, t47);
    wr32(sp0 - 0x8cu, esi + 2u);
    wr32(sp0 - 0x90u, t49);
    g->edx = t49;
    g->esp = sp0 - 0x84u;
    cow_cdecl(g, COW_IMG(0x10116480u), 3, t49, esi + 2u, t47);
    t50 = g->edx;
    edx = t50;
    COW_AT(100edcb0)
    if ((int32_t)(esi + 1u) < 2)
    {
        esi = esi + 1u;
        goto L_100edc87;
    }
    COW_AT(100edcb9)
    t51 = rd32(rd32(COW_IMG(0x104df770u)) + 0x13690u);
    wr32(sp0 - 0x88u, t51);
    g->esp = sp0 - 0x84u;
    cow_cdecl(g, COW_IMG(0x10115600u), 1, t51);
    COW_AT(100edcca)
    t52 = rd32(arg1) + 1u;
    wr32(arg1, t52);
    g->ebx = rd32(sp0 - 0x7cu);
    g->esi = rd32(sp0 - 0x80u);
    g->edi = rd32(sp0 - 0x84u);
    return 0u;
L_100edcdb: ;
    COW_AT(100edcdb)
    wr32(sp0 - 0x88u, 6u);
    wr32(sp0 - 0x8cu, 8u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x84u;
    t17 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 6u);
    t18 = g->ecx;
    t19 = g->edx;
    eax = t17;
    ecx = t18;
    edx = t19;
    COW_AT(100edce4)
    wr32(sp0 - 0x90u, eax);
    g->esp = sp0 - 0x8cu;
    cow_thiscall_cdecl(g, COW_IMG(0x100f0000u), ecx, 1, eax);
    COW_AT(100edcea)
    wr32(sp0 - 0x78u, 1u);
    wr32(sp0 - 0x74u, 0u);
    wr32(sp0 - 0x94u, sp0 - 0x78u);
    t20 = rd32(rd32(COW_IMG(0x104df770u)) + 0x13690u);
    wr32(sp0 - 0x98u, t20);
    g->esp = sp0 - 0x90u;
    cow_cdecl(g, COW_IMG(0x10116440u), 2, t20, sp0 - 0x78u);
    COW_AT(100edd0c)
    wr32(rd32(COW_IMG(0x103601bcu)) + 0xacu, 1u);
    ecx = 1u;
    cf = sp0 - 0x84u < sp0 - 0x98u;
    pf = PARITY((uint8_t)(sp0 - 0x84u));
    zf = sp0 == 0x84u;
    sf = (int32_t)(sp0 - 0x84u) < 0;
    of = ((sp0 - 0x98u ^ sp0 - 0x84u) & (sp0 - 0x84u ^ 0x14u)) >> 0x1fu;
L_100edd23: ;
    COW_AT(100edd23)
    if (1u << (ecx & 0x1fu) & 1u)
    {
        eax = 1u << (ecx & 0x1fu);
    COW_AT(100edd32)
        wr32(rd32(COW_IMG(0x10456a28u)) + 0x14u, rd32(rd32(COW_IMG(0x10456a28u)) + 0x14u) | eax);
    }
    COW_AT(100edd3b)
    if ((int32_t)(ecx + 1u) < 32)
    {
        cf = ecx + 1u < 0x20u;
        pf = PARITY((uint8_t)(ecx - 0x1fu));
        zf = ecx == 0x1fu;
        sf = (int32_t)(ecx - 0x1fu) < 0;
        of = ((ecx + 1u ^ 0x20u) & (ecx + 1u ^ ecx - 0x1fu)) >> 0x1fu;
        ecx = ecx + 1u;
        goto L_100edd23;
    }
    COW_AT(100edd41)
    wr32(sp0 - 0x88u, sp0 - 0x74u);
    t21 = rd32(rd32(COW_IMG(0x104df770u)) + 0x13690u);
    wr32(sp0 - 0x8cu, t21);
    g->esp = sp0 - 0x84u;
    cow_cdecl(g, COW_IMG(0x10116460u), 2, t21, sp0 - 0x74u);
    COW_AT(100edd58)
    t22 = rd32(sp0 - 0x74u);
    t23 = rd32(COW_IMG(0x103601bcu));
    wr32(t23 + 0xb4u, t22);
    t24 = rd32(rd32(COW_IMG(0x104df770u)) + 0x13690u);
    wr32(sp0 - 0x90u, t24);
    g->esp = sp0 - 0x54u;
    cow_thiscall_cdecl(g, COW_IMG(0x10115610u), t24, 15, t24, rd32(sp0 - 0x8cu), sp0 - 0x74u, rd32(sp0 - 0x84u), rd32(sp0 - 0x80u), rd32(sp0 - 0x7cu), rd32(sp0 - 0x78u), rd32(sp0 - 0x74u), rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u));
    COW_AT(100edd79)
    t25 = rd32(arg1) + 1u;
    wr32(arg1, t25);
    g->ebx = rd32(sp0 - 0x7cu);
    g->esi = rd32(sp0 - 0x80u);
    g->edi = rd32(sp0 - 0x84u);
    return 0u;
L_100edd8a: ;
    COW_AT(100edd8a)
    wr32(sp0 - 0x88u, 7u);
    wr32(sp0 - 0x8cu, 8u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x84u;
    t11 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 7u);
    t12 = g->ecx;
    t13 = g->edx;
    eax = t11;
    ecx = t12;
    edx = t13;
    COW_AT(100edd93)
    wr32(sp0 - 0x90u, eax);
    g->esp = sp0 - 0x8cu;
    cow_thiscall_cdecl(g, COW_IMG(0x100f0000u), ecx, 1, eax);
    t14 = g->ecx;
    ecx = t14;
    COW_AT(100edd99)
    t15 = rd32(rd32(COW_IMG(0x104df770u)) + 0x13690u);
    wr32(sp0 - 0x94u, t15);
    g->esp = sp0 - 0x58u;
    cow_thiscall_cdecl(g, COW_IMG(0x10115bb0u), ecx, 15, t15, rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u), rd32(sp0 - 0x84u), rd32(sp0 - 0x80u), rd32(sp0 - 0x7cu), rd32(sp0 - 0x78u), rd32(sp0 - 0x74u), rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu));
    COW_AT(100eddab)
    t16 = rd32(arg1) + 1u;
    wr32(arg1, t16);
    g->ebx = rd32(sp0 - 0x7cu);
    g->esi = rd32(sp0 - 0x80u);
    g->edi = rd32(sp0 - 0x84u);
    return 0u;
L_100eddbc: ;
    COW_AT(100eddbc)
    wr32(sp0 - 0x88u, eax + 0x136dcu);
    t9 = rd32(eax + 0x13690u);
    wr32(sp0 - 0x8cu, t9);
    g->esp = sp0 - 0x84u;
    cow_cdecl(g, COW_IMG(0x10115970u), 2, t9, eax + 0x136dcu);
    COW_AT(100eddcf)
    t10 = rd32(arg1) + 1u;
    wr32(arg1, t10);
    g->ebx = rd32(sp0 - 0x7cu);
    g->esi = rd32(sp0 - 0x80u);
    g->edi = rd32(sp0 - 0x84u);
    return 0u;
L_100edde0: ;
    COW_AT(100edde0)
    g->ebx = loc_7c;
    g->esi = loc_80;
    g->edi = loc_84;
    return 1u;
L_100eddec: ;
    COW_AT(100eddec)
    wr32(sp0 - 0x88u, eax + 0x13698u);
    t6 = rd32(eax + 0x13690u);
    wr32(sp0 - 0x8cu, t6);
    g->edx = t6;
    g->esp = sp0 - 0x58u;
    cow_thiscall_cdecl(g, COW_IMG(0x10115d50u), eax + 0x13698u, 13, t6, eax + 0x13698u, loc_84, loc_80, loc_7c, rd32(sp0 - 0x78u), rd32(sp0 - 0x74u), rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu));
    t7 = g->edx;
    edx = t7;
    COW_AT(100eddff)
    if (rd32(rd32(COW_IMG(0x104df770u)) + 0x13698u) != 0u)
    {
        eax = rd32(COW_IMG(0x104df770u));
    }
    else
    {
        eax = rd32(COW_IMG(0x104df770u));
    COW_AT(100ede0f)
        wr32(arg1, rd32(arg1) + 1u);
    }
    COW_AT(100ede11)
    if (rd32(rd32(COW_IMG(0x104df770u)) + 0x13698u) == 0xffffffffu) goto L_100ede36;
    ecx = rd32(COW_IMG(0x104df770u));
    COW_AT(100ede20)
    if ((int32_t)rd32(arg1) < 14)
    {
        loc_7c = rd32(sp0 - 0x7cu);
        loc_80 = rd32(sp0 - 0x80u);
        loc_84 = rd32(sp0 - 0x84u);
        goto L_100eda1d;
    }
    COW_AT(100ede29)
    g->eax = eax;
    g->esp = sp0 - 0x84u;
    t8 = cow_stdcall(g, COW_IMG(0x100edeb0u), 0);
    eax = t8;
    COW_AT(100ede2e)
    if (eax == 0u)
    {
        loc_7c = rd32(sp0 - 0x7cu);
        loc_80 = rd32(sp0 - 0x80u);
        loc_84 = rd32(sp0 - 0x84u);
        goto L_100eda1d;
    }
L_100ede36: ;
    COW_AT(100ede36)
    g->ebx = rd32(sp0 - 0x7cu);
    g->esi = rd32(sp0 - 0x80u);
    g->edi = rd32(sp0 - 0x84u);
    return 0xffffffffu;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100ed7e0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100ed7f1u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x84u);
        in_esi = rd32(sp0 - 0x80u);
        in_ebx = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0x84u;
        (void)sp0;
        return 1;
    }
    case 0x100ed7fbu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x84u);
        in_esi = rd32(sp0 - 0x80u);
        in_ebx = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0x84u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100ed806u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x84u);
        in_esi = rd32(sp0 - 0x80u);
        in_ebx = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0x84u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ed80bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x84u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ed813u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x84u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ed817u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x84u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ed81cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x84u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ed821u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0x84u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ed82cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0x84u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ed833u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0x84u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ed83bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ed841u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x90u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ed84du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x84u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ed857u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ed876u:
    {
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x84u;
        (void)sp0;
        return 1;
    }
    case 0x100ed886u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x84u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ed890u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0x84u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ed89cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0x84u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ed8adu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        g->edi = arg1;
        wr32(sp0 - 0x88u, sp0 - 0x54u);
        (void)sp0;
        return 1;
    }
    case 0x100ed8b5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x84u;
        g->ebx = 0u;
        g->edi = arg1;
        g->of = (uint8_t)(0u);
        wr32(sp0 - 0x88u, sp0 - 0x54u);
        (void)sp0;
        return 1;
    }
    case 0x100ed8b7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x84u;
        g->ebx = 0u;
        g->edi = arg1;
        wr32(sp0 - 0x88u, sp0 - 0x54u);
        (void)sp0;
        return 1;
    }
    case 0x100ed8bbu:
    {
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x84u;
        wr32(sp0 - 0x88u, sp0 - 0x54u);
        (void)sp0;
        return 1;
    }
    case 0x100ed8d1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x84u;
        g->ebx = 0u;
        g->edi = arg1;
        wr32(sp0 - 0x88u, sp0 - 0x54u);
        (void)sp0;
        return 1;
    }
    case 0x100ed8d9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x84u;
        g->ebx = 0u;
        g->edi = arg1;
        g->of = (uint8_t)(0u);
        wr32(sp0 - 0x88u, sp0 - 0x54u);
        (void)sp0;
        return 1;
    }
    case 0x100ed8dbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x84u;
        g->ebx = 0u;
        g->edi = arg1;
        wr32(sp0 - 0x88u, sp0 - 0x54u);
        (void)sp0;
        return 1;
    }
    case 0x100ed8e3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x84u;
        g->ebx = 0u;
        g->edi = arg1;
        wr32(sp0 - 0x88u, sp0 - 0x54u);
        (void)sp0;
        return 1;
    }
    case 0x100ed93du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ed95du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x84u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ed9b6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x84u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ed9cdu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x8cu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ed9e8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0x84u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ed9f8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0x84u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100eda01u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x8cu;
        g->edi = arg1;
        wr32(sp0 - 0x8cu, 8u);
        (void)sp0;
        return 1;
    }
    case 0x100eda07u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x90u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100eda18u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x94u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100eda1bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x84u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100eda1du:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0x84u;
        (void)sp0;
        return 1;
    }
    case 0x100eda26u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0x84u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100eda39u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x8cu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100eda4au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0x84u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100eda52u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0x84u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100eda5cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0x84u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100eda62u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100eda6au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x84u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100eda79u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x84u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100eda7eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0x84u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100eda98u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x8cu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100edaa9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0x84u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100edab2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x8cu;
        g->edi = arg1;
        wr32(sp0 - 0x8cu, 8u);
        (void)sp0;
        return 1;
    }
    case 0x100edab8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x90u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100edac9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x94u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100edadau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0x84u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100edae3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x8cu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100edae9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x90u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100edafbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x94u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100edb0cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0x84u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100edb15u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100edb1bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x90u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100edb2bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xa8u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100edb4eu:
    {
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x84u;
        (void)sp0;
        return 1;
    }
    case 0x100edb5eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0x84u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100edb6au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100edb75u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x84u;
        g->edi = arg1;
        g->of = (uint8_t)(0u);
        (void)sp0;
        return 1;
    }
    case 0x100edb7bu:
    {
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x84u;
        (void)sp0;
        return 1;
    }
    case 0x100edb91u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0x84u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100edb9au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100edba0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x90u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100edba5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x90u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100edbafu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x94u;
        g->ebx = 0u;
        g->edi = arg1;
        wr32(sp0 - 0x94u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100edbb6u:
    {
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x84u;
        wr32(sp0 - 0x94u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100edbccu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x84u;
        g->edi = arg1;
        g->cf = (uint8_t)(0u);
        g->af = (uint8_t)(0u);
        g->of = (uint8_t)(0u);
        wr32(sp0 - 0x94u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100edbe2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x8cu;
        g->edi = arg1;
        wr32(sp0 - 0x94u, sp0 - 0x40u);
        wr32(sp0 - 0x88u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100edbecu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x90u;
        g->edi = arg1;
        wr32(sp0 - 0x94u, sp0 - 0x40u);
        wr32(sp0 - 0x90u, sp0 - 0x64u);
        wr32(sp0 - 0x88u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100edc03u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x98u;
        g->edi = arg1;
        wr32(sp0 - 0x94u, sp0 - 0x64u);
        wr32(sp0 - 0x90u, sp0 - 0x64u);
        wr32(sp0 - 0x88u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100edc34u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xa0u;
        g->edi = arg1;
        wr32(sp0 - 0x9cu, sp0 - 0x6cu);
        wr32(sp0 - 0x94u, sp0 - 0x64u);
        wr32(sp0 - 0x90u, sp0 - 0x64u);
        wr32(sp0 - 0x88u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100edc46u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x84u;
        g->edi = arg1;
        wr32(sp0 - 0x9cu, sp0 - 0x6cu);
        wr32(sp0 - 0x94u, sp0 - 0x64u);
        wr32(sp0 - 0x90u, sp0 - 0x64u);
        wr32(sp0 - 0x88u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100edc51u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x84u;
        g->edi = arg1;
        wr32(sp0 - 0x9cu, sp0 - 0x6cu);
        wr32(sp0 - 0x94u, sp0 - 0x64u);
        wr32(sp0 - 0x90u, sp0 - 0x64u);
        wr32(sp0 - 0x88u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100edc53u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x84u;
        g->edi = arg1;
        wr32(sp0 - 0x9cu, sp0 - 0x6cu);
        wr32(sp0 - 0x94u, sp0 - 0x64u);
        wr32(sp0 - 0x90u, sp0 - 0x64u);
        wr32(sp0 - 0x88u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100edc59u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x84u;
        g->edi = arg1;
        wr32(sp0 - 0x9cu, sp0 - 0x6cu);
        wr32(sp0 - 0x94u, sp0 - 0x64u);
        wr32(sp0 - 0x90u, sp0 - 0x64u);
        wr32(sp0 - 0x88u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100edc6cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x8cu;
        g->edi = arg1;
        wr32(sp0 - 0x9cu, sp0 - 0x6cu);
        wr32(sp0 - 0x94u, sp0 - 0x64u);
        wr32(sp0 - 0x90u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x100edc87u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x84u;
        g->ebx = 0x1cu - (sp0 - 0x74u);
        g->edi = arg1;
        wr32(sp0 - 0x9cu, sp0 - 0x6cu);
        wr32(sp0 - 0x94u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x100edcb0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x90u;
        g->ebx = 0x1cu - (sp0 - 0x74u);
        g->edi = arg1;
        wr32(sp0 - 0x9cu, sp0 - 0x6cu);
        wr32(sp0 - 0x94u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x100edcb9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x84u;
        g->edi = arg1;
        wr32(sp0 - 0x9cu, sp0 - 0x6cu);
        wr32(sp0 - 0x94u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x100edccau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x88u;
        g->edi = arg1;
        wr32(sp0 - 0x9cu, sp0 - 0x6cu);
        wr32(sp0 - 0x94u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x100edcdbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0x84u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100edce4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100edceau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x90u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100edd0cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x98u;
        g->edi = arg1;
        wr32(sp0 - 0x94u, sp0 - 0x78u);
        wr32(sp0 - 0x78u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x100edd23u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x84u;
        g->edi = arg1;
        wr32(sp0 - 0x94u, sp0 - 0x78u);
        wr32(sp0 - 0x78u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x100edd32u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x84u;
        g->edi = arg1;
        wr32(sp0 - 0x94u, sp0 - 0x78u);
        wr32(sp0 - 0x78u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x100edd3bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x84u;
        g->edi = arg1;
        wr32(sp0 - 0x94u, sp0 - 0x78u);
        wr32(sp0 - 0x78u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x100edd41u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x84u;
        g->edi = arg1;
        wr32(sp0 - 0x94u, sp0 - 0x78u);
        wr32(sp0 - 0x78u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x100edd58u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x8cu;
        g->edi = arg1;
        wr32(sp0 - 0x94u, sp0 - 0x78u);
        wr32(sp0 - 0x88u, sp0 - 0x74u);
        (void)sp0;
        return 1;
    }
    case 0x100edd79u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x90u;
        g->edi = arg1;
        wr32(sp0 - 0x94u, sp0 - 0x78u);
        wr32(sp0 - 0x88u, sp0 - 0x74u);
        (void)sp0;
        return 1;
    }
    case 0x100edd8au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0x84u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100edd93u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x8cu;
        g->edi = arg1;
        wr32(sp0 - 0x8cu, 8u);
        wr32(sp0 - 0x88u, 7u);
        (void)sp0;
        return 1;
    }
    case 0x100edd99u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x90u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100eddabu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x94u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100eddbcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0x84u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100eddcfu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x8cu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100edde0u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0x84u;
        (void)sp0;
        return 1;
    }
    case 0x100eddecu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0x84u;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100eddffu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x8cu;
        g->ebx = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ede0fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x84u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ede11u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x84u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ede20u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x84u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ede29u:
    {
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x84u;
        (void)sp0;
        return 1;
    }
    case 0x100ede2eu:
    {
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x84u;
        (void)sp0;
        return 1;
    }
    case 0x100ede36u:
    {
        uint32_t cf;
        uint32_t eax;
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
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x84u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100ed7e0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100ed7e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
