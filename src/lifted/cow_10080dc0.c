/* f_0x10080dc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10080dc0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_404;
    uint32_t loc_408;
    uint32_t loc_40c;
    uint32_t loc_410;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t10;
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
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 1068u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10080defu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x410u); in_esi = rd32(sp0 - 0x40cu); in_ebp = rd32(sp0 - 0x408u); g->ebp = rd32(sp0 - 0x408u); g->edi = rd32(sp0 - 0x410u); g->esi = rd32(sp0 - 0x40cu); goto E_10080def;
    case 0x10080e06u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x410u); in_esi = rd32(sp0 - 0x40cu); in_ebp = rd32(sp0 - 0x408u); loc_404 = rd32(sp0 - 0x404u); g->ebp = rd32(sp0 - 0x408u); g->edi = rd32(sp0 - 0x410u); g->esi = rd32(sp0 - 0x40cu); goto E_10080e06;
    case 0x10080e12u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x410u); in_esi = rd32(sp0 - 0x40cu); in_ebp = rd32(sp0 - 0x408u); g->ebp = rd32(sp0 - 0x408u); g->edi = rd32(sp0 - 0x410u); g->esi = rd32(sp0 - 0x40cu); goto E_10080e12;
    case 0x10080e1du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x410u); in_esi = rd32(sp0 - 0x40cu); in_ebp = rd32(sp0 - 0x408u); loc_404 = rd32(sp0 - 0x404u); g->ebp = rd32(sp0 - 0x408u); g->edi = rd32(sp0 - 0x410u); g->esi = rd32(sp0 - 0x40cu); goto E_10080e1d;
    case 0x10080e29u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x410u); in_esi = rd32(sp0 - 0x40cu); in_ebp = rd32(sp0 - 0x408u); g->ebp = rd32(sp0 - 0x408u); g->edi = rd32(sp0 - 0x410u); g->esi = rd32(sp0 - 0x40cu); goto E_10080e29;
    case 0x10080e34u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x410u); in_esi = rd32(sp0 - 0x40cu); in_ebp = rd32(sp0 - 0x408u); g->ebp = rd32(sp0 - 0x408u); g->edi = rd32(sp0 - 0x410u); g->esi = rd32(sp0 - 0x40cu); goto E_10080e34;
    case 0x10080e3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x410u); in_esi = rd32(sp0 - 0x40cu); in_ebp = rd32(sp0 - 0x408u); g->ebp = rd32(sp0 - 0x408u); g->edi = rd32(sp0 - 0x410u); g->esi = rd32(sp0 - 0x40cu); goto E_10080e3f;
    case 0x10080e48u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x410u); in_esi = rd32(sp0 - 0x40cu); in_ebp = rd32(sp0 - 0x408u); g->ebp = rd32(sp0 - 0x408u); g->edi = rd32(sp0 - 0x410u); g->esi = rd32(sp0 - 0x40cu); goto E_10080e48;
    case 0x10080e5du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x410u); in_esi = rd32(sp0 - 0x40cu); in_ebp = rd32(sp0 - 0x408u); g->ebp = rd32(sp0 - 0x408u); g->edi = rd32(sp0 - 0x410u); g->esi = rd32(sp0 - 0x40cu); goto E_10080e5d;
    case 0x10080e65u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x410u); in_esi = rd32(sp0 - 0x40cu); in_ebp = rd32(sp0 - 0x408u); g->ebp = rd32(sp0 - 0x408u); g->edi = rd32(sp0 - 0x410u); g->esi = rd32(sp0 - 0x40cu); goto E_10080e65;
    case 0x10080e77u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10080e77;
    case 0x10080e8au: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10080e8a;
    case 0x10080e8du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10080e8d;
    case 0x10080e99u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10080e99;
    case 0x10080e9du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10080e9d;
    case 0x10080ea3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10080ea3;
    case 0x10080eb3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10080eb3;
    case 0x10080ebfu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_410 = rd32(sp0 - 0x410u); loc_40c = rd32(sp0 - 0x40cu); loc_408 = rd32(sp0 - 0x408u); loc_404 = rd32(sp0 - 0x404u); goto E_10080ebf;
    case 0x10080f38u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10080f38;
    case 0x10080f44u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10080f44;
    case 0x10080f50u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10080f50;
    case 0x10080f5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10080f5e;
    case 0x10080f68u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10080f68;
    case 0x10080f6du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10080f6d;
    case 0x10080f83u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10080f83;
    case 0x10080f8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10080f8c;
    case 0x10080f96u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10080f96;
    case 0x10080fb2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10080fb2;
    case 0x10080fbbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10080fbb;
    case 0x10080fc3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10080fc3;
    case 0x10080fcau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10080fca;
    case 0x10080fd4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10080fd4;
    case 0x10080ff1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10080ff1;
    case 0x10081006u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10081006;
    case 0x10081023u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10081023;
    case 0x10081030u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10081030;
    case 0x1008103cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1008103c;
    case 0x10081042u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10081042;
    case 0x10081051u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10081051;
    case 0x10081054u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10081054;
    case 0x1008105au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1008105a;
    case 0x10081061u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10081061;
    case 0x10081074u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10081074;
    case 0x1008107bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1008107b;
    case 0x1008107fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1008107f;
    case 0x1008108du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1008108d;
    case 0x1008108fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1008108f;
    case 0x10081099u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10081099;
    case 0x100810a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100810a3;
    case 0x100810a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100810a7;
    case 0x100810b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100810b3;
    case 0x100810c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100810c3;
    case 0x100810cau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_404 = rd32(sp0 - 0x404u); goto E_100810ca;
    case 0x100810d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_404 = rd32(sp0 - 0x404u); goto E_100810d7;
    case 0x100810e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_404 = rd32(sp0 - 0x404u); goto E_100810e3;
    case 0x100810fbu: ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_404 = rd32(sp0 - 0x404u); goto E_100810fb;
    case 0x10081102u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_404 = rd32(sp0 - 0x404u); goto E_10081102;
    case 0x1008111bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1008111b;
    case 0x10081123u: ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_404 = rd32(sp0 - 0x404u); goto E_10081123;
    case 0x1008113cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1008113c;
    case 0x10081141u: ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_404 = rd32(sp0 - 0x404u); goto E_10081141;
    case 0x1008115au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1008115a;
    case 0x1008115fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_404 = rd32(sp0 - 0x404u); goto E_1008115f;
    case 0x10081178u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10081178;
    case 0x1008117du: ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_404 = rd32(sp0 - 0x404u); goto E_1008117d;
    case 0x10081196u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10081196;
    case 0x1008119bu: ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_404 = rd32(sp0 - 0x404u); goto E_1008119b;
    case 0x100811a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_404 = rd32(sp0 - 0x404u); goto E_100811a4;
    case 0x100811abu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_404 = rd32(sp0 - 0x404u); goto E_100811ab;
    case 0x100811adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_404 = rd32(sp0 - 0x404u); goto E_100811ad;
    case 0x100811bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100811bc;
    case 0x100811c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100811c4;
    case 0x100811d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100811d3;
    case 0x100811d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_404 = rd32(sp0 - 0x404u); goto E_100811d6;
    case 0x100811dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100811df;
    case 0x100811e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_100811e5;
    case 0x100811e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_404 = rd32(sp0 - 0x404u); goto E_100811e8;
    case 0x100811f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_404 = rd32(sp0 - 0x404u); goto E_100811f1;
    case 0x10081200u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10081200;
    case 0x10081203u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_404 = rd32(sp0 - 0x404u); goto E_10081203;
    default: break;
    }
#endif

    COW_AT(10080dc0)
    wr32(sp0 - 0x408u, in_ebp);
    wr32(sp0 - 0x40cu, in_esi);
    wr32(sp0 - 0x410u, in_edi);
    wr32(sp0 - 0x414u, 0x200u);
    wr32(sp0 - 0x418u, sp0 - 0x200u);
    wr32(sp0 - 0x41cu, arg1);
    wr32(sp0 - 0x404u, 0u);
    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x10662da4u));
    g->esp = sp0 - 0x410u;
    cow_thiscall(g, COW_IMG(0x101ad4b0u), t1, 3, arg1, sp0 - 0x200u, 0x200u);
    t2 = g->ecx;
    t3 = g->edx;
    ecx = t2;
    edx = t3;
    COW_AT(10080def)
    t4 = rd32(COW_IMG(0x1047d3f0u));
    wr8(sp0 - 1u, 0u);
    wr32(COW_IMG(0x1047d3f8u), 0u);
    if (t4 != 0u)
    {
        eax = t4;
        goto L_10080e12;
    }
    COW_AT(10080e06)
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return 0u;
L_10080e12: ;
    COW_AT(10080e12)
    if (rd8(sp0 - 0x200u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x200u);
        goto L_10080e29;
    }
    COW_AT(10080e1d)
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return 0u;
L_10080e29: ;
    COW_AT(10080e29)
    if ((uint8_t)arg2 == 1u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg2;
        goto L_10080e3f;
    }
    eax = (eax & 0xffffff00u) | (uint8_t)arg2;
    COW_AT(10080e34)
    wr8(COW_IMG(0x1047d3feu), 1u);
    if ((uint8_t)eax != 2u)
    {
        zf = (uint8_t)((uint8_t)eax - 2u) == 0u;
        goto L_10080e48;
    }
L_10080e3f: ;
    COW_AT(10080e3f)
    wr8(COW_IMG(0x1047d3feu), 0u);
    zf = (uint8_t)((uint8_t)eax - 2u) == 0u;
L_10080e48: ;
    COW_AT(10080e48)
    t5 = rd32(COW_IMG(0x1057876cu));
    wr8(COW_IMG(0x1047d497u), zf);
    if (rd8(t5 + 0x59u) != 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(t5 + 0x59u);
        edx = (edx & 0xffffff00u) | zf;
        goto L_10080e65;
    }
    eax = t5;
    ecx = (ecx & 0xffffff00u) | rd8(t5 + 0x59u);
    edx = (edx & 0xffffff00u) | zf;
    COW_AT(10080e5d)
    t6 = rd32(eax + 0xc4u);
    if (t6 == 0u)
    {
        loc_408 = in_ebp;
        loc_40c = in_esi;
        loc_410 = in_edi;
        loc_404 = 0u;
        goto L_10080ebf;
    }
L_10080e65: ;
    COW_AT(10080e65)
    wr32(sp0 - 0x414u, sp0 - 0x200u);
    wr32(sp0 - 0x418u, COW_IMG(0x10355408u));
    g->edx = edx;
    g->esp = sp0 - 0x410u;
    t7 = cow_call_regs(g, COW_IMG(0x10077b40u), sp0 - 0x200u, g->ecx, g->edx, 1, 2, COW_IMG(0x10355408u), sp0 - 0x200u);
    t8 = g->edx;
    eax = t7;
    edx = t8;
    COW_AT(10080e77)
    if ((uint8_t)arg2 == 1u) goto L_10080e99;
    COW_AT(10080e8a)
    if ((uint8_t)arg2 != 2u)
    {
        loc_408 = rd32(sp0 - 0x408u);
        loc_40c = rd32(sp0 - 0x40cu);
        loc_410 = rd32(sp0 - 0x410u);
        loc_404 = rd32(sp0 - 0x404u);
        goto L_10080ebf;
    }
    COW_AT(10080e8d)
    g->esi = rd32(sp0 - 0x40cu);
    g->edi = rd32(sp0 - 0x410u);
    g->ebp = rd32(sp0 - 0x408u);
    return 0u;
L_10080e99: ;
    COW_AT(10080e99)
    if (eax == 0u) goto L_10080ea3;
    COW_AT(10080e9d)
    t9 = rd8(eax + 0x16u);
    if ((t9 & 2u) != 0u)
    {
        loc_408 = rd32(sp0 - 0x408u);
        loc_40c = rd32(sp0 - 0x40cu);
        loc_410 = rd32(sp0 - 0x410u);
        loc_404 = rd32(sp0 - 0x404u);
        goto L_10080ebf;
    }
L_10080ea3: ;
    COW_AT(10080ea3)
    wr32(sp0 - 0x414u, 0xa4u);
    g->esp = sp0 - 0x410u;
    cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0xa4u);
    COW_AT(10080eb3)
    g->esi = rd32(sp0 - 0x40cu);
    g->edi = rd32(sp0 - 0x410u);
    g->ebp = rd32(sp0 - 0x408u);
    return 0u;
L_10080ebf: ;
    COW_AT(10080ebf)
    wr32(sp0 - 0x414u, 0x200u);
    edi = COW_IMG(0x10354fe0u);
    eax = 0u;
    ecx = 0x80u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    edi = COW_IMG(0x10354be0u);
    ecx = 0x80u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    edi = COW_IMG(0x10354de0u);
    ecx = 0x80u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    edi = COW_IMG(0x1047d400u);
    ecx = 0x12u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    edi = COW_IMG(0x1047d448u);
    ecx = 0x12u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x418u, COW_IMG(0x10354be0u));
    wr32(sp0 - 0x41cu, sp0 - 0x200u);
    wr32(COW_IMG(0x1047d3f4u), 1u);
    wr32(COW_IMG(0x1047d490u), 0u);
    wr32(COW_IMG(0x103551e0u), COW_IMG(0x1047d400u));
    wr32(COW_IMG(0x103551e4u), COW_IMG(0x1047d448u));
    g->ecx = sp0 - 0x200u;
    g->edx = edx;
    g->esp = sp0 - 0x3d8u;
    t10 = cow_bridge_indirect(g, COW_IMG(0x10076ab0u), 0u, 17u, (const uint32_t[]){sp0 - 0x200u, COW_IMG(0x10354be0u), rd32(sp0 - 0x414u), rd32(sp0 - 0x410u), rd32(sp0 - 0x40cu), rd32(sp0 - 0x408u), rd32(sp0 - 0x404u), rd32(sp0 - 0x400u), rd32(sp0 - 0x3fcu), rd32(sp0 - 0x3f8u), rd32(sp0 - 0x3f4u), rd32(sp0 - 0x3f0u), rd32(sp0 - 0x3ecu), rd32(sp0 - 0x3e8u), rd32(sp0 - 0x3e4u), rd32(sp0 - 0x3e0u), rd32(sp0 - 0x3dcu)}, g->ecx, g->edx, eax, 68u);
    t11 = g->ecx;
    t12 = g->edx;
    eax = t10;
    ecx = t11;
    edx = t12;
    COW_AT(10080f38)
    if (rd8(COW_IMG(0x10354be0u)) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10354be0u));
        goto L_10080f50;
    }
    COW_AT(10080f44)
    g->esi = rd32(sp0 - 0x40cu);
    g->edi = rd32(sp0 - 0x410u);
    g->ebp = rd32(sp0 - 0x408u);
    return 0u;
L_10080f50: ;
    COW_AT(10080f50)
    if ((uint8_t)eax == 0x2fu)
    {
        esi = 0x96u;
        edi = COW_IMG(0x10354de0u);
    }
    else
    {
    COW_AT(10080f5e)
        if (rd32(COW_IMG(0x10662da4u)) == 0u)
        {
            ecx = rd32(COW_IMG(0x10662da4u));
            esi = 0x96u;
            edi = COW_IMG(0x10354de0u);
        }
        else
        {
            ecx = rd32(COW_IMG(0x10662da4u));
    COW_AT(10080f68)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x410u;
            t13 = cow_thiscall(g, COW_IMG(0x101ad820u), ecx, 0);
            t14 = g->ecx;
            t15 = g->edx;
            eax = t13;
            ecx = t14;
            edx = t15;
    COW_AT(10080f6d)
            t16 = eax;
            edi = t16;
            eax = 0u;
            ecx = 0xffffffffu;
            cf = 0u;
            pf = PARITY(0u);
            af = 0u;
            zf = 1u;
            sf = 0u;
            of = 0u;
            while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
            if (~ecx - 1u >= 0x96u)
            {
                ecx = ~ecx - 1u;
            }
            else
            {
                ecx = ~ecx - 1u;
                esi = t16;
    COW_AT(10080f83)
                eax = esi;
                edx = COW_IMG(0x10354de0u) - esi;
L_10080f8c: ;
    COW_AT(10080f8c)
                t17 = rd8(eax);
                wr8(eax + edx, (uint8_t)t17);
                if ((uint8_t)t17 != 0u)
                {
                    eax = eax + 1u;
                    ecx = (ecx & 0xffffff00u) | t17;
                    goto L_10080f8c;
                }
                ecx = (ecx & 0xffffff00u) | t17;
            }
    COW_AT(10080f96)
            edi = COW_IMG(0x10354de0u);
            eax = 0u;
            ecx = 0xffffffffu;
            cf = 0u;
            pf = PARITY(0u);
            af = 0u;
            zf = 1u;
            sf = 0u;
            of = 0u;
            while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
            esi = 0x96u - (~ecx - 1u);
            edi = COW_IMG(0x10354de0u) + ~ecx - 1u;
            ecx = ~ecx - 1u;
        }
    }
    COW_AT(10080fb2)
    if ((int32_t)esi <= 0) goto L_10080fd4;
    ebp = COW_IMG(0x10354be0u);
L_10080fbb: ;
    COW_AT(10080fbb)
    wr32(sp0 - 0x414u, esi);
    wr32(sp0 - 0x418u, ebp);
    wr32(sp0 - 0x41cu, edi);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x400u;
    t18 = cow_call_regs(g, COW_IMG(0x100769f0u), g->eax, g->ecx, edx, 1, 7, edi, ebp, esi, rd32(sp0 - 0x410u), rd32(sp0 - 0x40cu), rd32(sp0 - 0x408u), rd32(sp0 - 0x404u));
    t19 = g->ecx;
    t20 = g->edx;
    eax = t18;
    ecx = t19;
    edx = t20;
    COW_AT(10080fc3)
    if (eax == 0u) goto L_10080fd4;
    COW_AT(10080fca)
    if ((int32_t)(esi - eax) > 0)
    {
        ebp = eax + ebp;
        esi = esi - eax;
        edi = eax + edi;
        goto L_10080fbb;
    }
L_10080fd4: ;
    COW_AT(10080fd4)
    wr32(sp0 - 0x414u, 0u);
    wr32(sp0 - 0x418u, 0x11u);
    wr32(sp0 - 0x41cu, COW_IMG(0x1047d448u));
    wr32(sp0 - 0x420u, COW_IMG(0x1047d400u));
    wr32(sp0 - 0x424u, COW_IMG(0x10354fe0u));
    wr32(sp0 - 0x428u, COW_IMG(0x10354de0u));
    g->ecx = ecx;
    g->esp = sp0 - 0x3e0u;
    t21 = cow_bridge_indirect(g, COW_IMG(0x10076830u), 0u, 18u, (const uint32_t[]){COW_IMG(0x10354de0u), COW_IMG(0x10354fe0u), COW_IMG(0x1047d400u), COW_IMG(0x1047d448u), 0x11u, 0u, rd32(sp0 - 0x410u), rd32(sp0 - 0x40cu), rd32(sp0 - 0x408u), rd32(sp0 - 0x404u), rd32(sp0 - 0x400u), rd32(sp0 - 0x3fcu), rd32(sp0 - 0x3f8u), rd32(sp0 - 0x3f4u), rd32(sp0 - 0x3f0u), rd32(sp0 - 0x3ecu), rd32(sp0 - 0x3e8u), rd32(sp0 - 0x3e4u)}, g->ecx, edx, eax, 72u);
    t22 = g->ecx;
    t23 = g->edx;
    eax = t21;
    ecx = t22;
    edx = t23;
    COW_AT(10080ff1)
    wr32(COW_IMG(0x1047d490u), eax);
    if (rd8(COW_IMG(0x10354de0u)) != 0x2fu)
    {
        loc_404 = rd32(sp0 - 0x404u);
        goto L_100811e8;
    }
    COW_AT(10081006)
    t24 = rd32(COW_IMG(0x103551e0u));
    wr32(COW_IMG(0x1047d3f4u), 0u);
    wr32(sp0 - 0x414u, rd32(t24));
    wr32(sp0 - 0x418u, COW_IMG(0x10355408u));
    g->eax = rd32(t24);
    g->ecx = ecx;
    t25 = rd32(t24);
    g->esp = sp0 - 0x404u;
    t26 = cow_call_regs(g, COW_IMG(0x10077ad0u), g->eax, g->ecx, t24, 1, 5, COW_IMG(0x10355408u), t25, rd32(sp0 - 0x410u), rd32(sp0 - 0x40cu), rd32(sp0 - 0x408u));
    t27 = g->ecx;
    t28 = g->edx;
    eax = t26;
    ecx = t27;
    edx = t28;
    COW_AT(10081023)
    if (eax == 0u)
    {
        loc_404 = rd32(sp0 - 0x404u);
        goto L_100810ca;
    }
    esi = eax;
    COW_AT(10081030)
    if ((uint32_t)(int16_t)rd16(esi + 0x14u) == 0u)
    {
        loc_404 = rd32(sp0 - 0x404u);
        goto L_100810ca;
    }
    edi = (uint32_t)(int16_t)rd16(esi + 0x14u);
    COW_AT(1008103c)
    t29 = rd8(esi + 0x17u);
    if ((t29 & 0x20u) != 0u)
    {
    COW_AT(10081042)
        wr32(sp0 - 0x414u, COW_IMG(0x10354de0u));
        wr32(sp0 - 0x418u, COW_IMG(0x1034f7e0u));
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x410u;
        t30 = cow_cdecl(g, COW_IMG(0x10077e30u), 2, COW_IMG(0x1034f7e0u), COW_IMG(0x10354de0u));
        t31 = g->ecx;
        t32 = g->edx;
        eax = t30;
        ecx = t31;
        edx = t32;
    COW_AT(10081051)
    }
    COW_AT(10081054)
    wr32(sp0 - 0x414u, esi);
    g->edx = edx;
    g->esp = sp0 - 0x3f8u;
    t33 = cow_call_regs(g, COW_IMG(0x10081230u), eax, ecx, g->edx, 1, 7, esi, rd32(sp0 - 0x410u), rd32(sp0 - 0x40cu), rd32(sp0 - 0x408u), rd32(sp0 - 0x404u), rd32(sp0 - 0x400u), rd32(sp0 - 0x3fcu));
    t34 = g->ecx;
    t35 = g->edx;
    eax = t33;
    ecx = t34;
    edx = t35;
    COW_AT(1008105a)
    if ((uint8_t)eax == 0u)
    {
        loc_404 = rd32(sp0 - 0x404u);
        goto L_100810ca;
    }
    COW_AT(10081061)
    if (rd32(COW_IMG(0x10356e30u)) == 0x1d4u)
    {
        eax = COW_IMG(0x10356e30u);
        ecx = rd32(COW_IMG(0x10356e30u));
        loc_404 = rd32(sp0 - 0x404u);
        goto L_100810ca;
    }
    eax = COW_IMG(0x10356e30u);
L_10081074: ;
    COW_AT(10081074)
    if (rd32(eax + 4u) == 0u)
    {
        ecx = rd32(eax + 4u);
        loc_404 = rd32(sp0 - 0x404u);
        goto L_100810ca;
    }
    COW_AT(1008107b)
    if (edi == rd32(eax)) goto L_1008108f;
    COW_AT(1008107f)
    if (rd32(eax + 0xcu) != 0x1d4u)
    {
        eax = eax + 0xcu;
        goto L_10081074;
    }
    ecx = rd32(eax + 0xcu);
    eax = eax + 0xcu;
    COW_AT(1008108d)
    loc_404 = rd32(sp0 - 0x404u);
L_100810ca: ;
    COW_AT(100810ca)
    if (rd8(COW_IMG(0x1047d498u)) != 0u) goto L_100811e8;
    COW_AT(100810d7)
    if ((int32_t)loc_404 >= 0) goto L_100811e8;
    COW_AT(100810e3)
    if ((uint8_t)arg2 - 3u > 4u) goto L_1008119b;
    COW_AT(100810fb)
    t39 = rd32(COW_IMG(0x10081214u) + (uint8_t)arg2 * 4u - 0xcu);
    switch (t39 - RD)
    {
    case 0x10081102u: goto L_10081102;
    case 0x10081123u: goto L_10081123;
    case 0x10081141u: goto L_10081141;
    case 0x1008115fu: goto L_1008115f;
    case 0x1008117du: goto L_1008117d;
    default: rt_fatal(g, COW_IMG(0x100810fbu), "switch");
    }
    return 0;
L_1008108f: ;
    COW_AT(1008108f)
    if (rd32(eax + 4u) == 0u)
    {
        ecx = rd32(eax + 4u);
        eax = (eax & 0xffffff00u) | rd8(eax + 8u);
        loc_404 = rd32(sp0 - 0x404u);
        goto L_100810ca;
    }
    ecx = rd32(eax + 4u);
    eax = (eax & 0xffffff00u) | rd8(eax + 8u);
    COW_AT(10081099)
    if (rd8(COW_IMG(0x1047d498u)) == 0u) goto L_100810b3;
    COW_AT(100810a3)
    if ((uint8_t)eax != 0u) goto L_100810b3;
    COW_AT(100810a7)
    g->esi = rd32(sp0 - 0x40cu);
    g->edi = rd32(sp0 - 0x410u);
    g->ebp = rd32(sp0 - 0x408u);
    return 0u;
L_100810b3: ;
    COW_AT(100810b3)
    wr32(sp0 - 0x414u, edi);
    wr32(sp0 - 0x418u, COW_IMG(0x10354de0u));
    wr32(sp0 - 0x41cu, sp0 - 0x200u);
    g->eax = eax;
    g->edx = sp0 - 0x200u;
    g->esp = sp0 - 0x410u;
    t36 = cow_thiscall_cdecl(g, ecx, ecx, 3, sp0 - 0x200u, COW_IMG(0x10354de0u), edi);
    t37 = g->ecx;
    t38 = g->edx;
    eax = t36;
    ecx = t37;
    edx = t38;
    COW_AT(100810c3)
    wr32(sp0 - 0x404u, eax);
    loc_404 = eax;
    goto L_100810ca;
L_10081102: ;
    COW_AT(10081102)
    wr32(sp0 - 0x414u, COW_IMG(0x10357f88u));
    wr32(sp0 - 0x418u, COW_IMG(0x103551e8u));
    wr32(sp0 - 0x41cu, COW_IMG(0x10350ff8u));
    wr32(sp0 - 0x420u, sp0 - 0x400u);
    g->eax = sp0 - 0x400u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x40cu;
    t52 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x400u, COW_IMG(0x10350ff8u), COW_IMG(0x103551e8u), COW_IMG(0x10357f88u), rd32(sp0 - 0x410u));
    t53 = g->ecx;
    t54 = g->edx;
    eax = t52;
    ecx = t53;
    edx = t54;
    COW_AT(1008111b)
L_100811bc: ;
    COW_AT(100811bc)
    if (rd8(sp0 - 0x400u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x400u);
        loc_404 = rd32(sp0 - 0x404u);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x400u);
    COW_AT(100811c4)
        wr32(sp0 - 0x414u, sp0 - 0x400u);
        wr32(sp0 - 0x418u, COW_IMG(0x10358164u));
        g->eax = eax;
        g->ecx = ecx;
        g->edx = sp0 - 0x400u;
        g->esp = sp0 - 0x410u;
        t56 = cow_cdecl(g, COW_IMG(0x10077e30u), 2, COW_IMG(0x10358164u), sp0 - 0x400u);
        t57 = g->ecx;
        t58 = g->edx;
        eax = t56;
        ecx = t57;
        edx = t58;
    COW_AT(100811d3)
        loc_404 = rd32(sp0 - 0x404u);
    }
L_100811d6: ;
    COW_AT(100811d6)
    wr32(sp0 - 0x414u, 0x78u);
    wr32(sp0 - 0x418u, 9u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x410u;
    t59 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x78u);
    t60 = g->ecx;
    t61 = g->edx;
    eax = t59;
    ecx = t60;
    edx = t61;
    COW_AT(100811df)
    wr32(sp0 - 0x41cu, eax);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x414u;
    cow_cdecl(g, COW_IMG(0x10077e30u), 2, eax, 9u);
    t62 = g->ecx;
    t63 = g->edx;
    ecx = t62;
    edx = t63;
    COW_AT(100811e5)
    loc_404 = rd32(sp0 - 0x404u);
L_100811e8: ;
    COW_AT(100811e8)
    if (rd32(COW_IMG(0x1047d3f4u)) != 0u)
    {
        eax = rd32(COW_IMG(0x1047d3f4u));
    COW_AT(100811f1)
        wr32(sp0 - 0x414u, COW_IMG(0x10354de0u));
        wr32(sp0 - 0x418u, COW_IMG(0x1034f7e0u));
        g->esp = sp0 - 0x410u;
        cow_cdecl(g, COW_IMG(0x10077e30u), 2, COW_IMG(0x1034f7e0u), COW_IMG(0x10354de0u));
    COW_AT(10081200)
        loc_404 = rd32(sp0 - 0x404u);
    }
    COW_AT(10081203)
    g->esi = rd32(sp0 - 0x40cu);
    g->edi = rd32(sp0 - 0x410u);
    g->ebp = rd32(sp0 - 0x408u);
    return loc_404;
L_10081123: ;
    COW_AT(10081123)
    wr32(sp0 - 0x414u, COW_IMG(0x10357f80u));
    wr32(sp0 - 0x418u, COW_IMG(0x103551e8u));
    wr32(sp0 - 0x41cu, COW_IMG(0x10350ff8u));
    wr32(sp0 - 0x420u, sp0 - 0x400u);
    g->eax = (uint8_t)arg2 - 3u;
    g->ecx = sp0 - 0x400u;
    g->edx = edx;
    g->esp = sp0 - 0x40cu;
    t49 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x400u, COW_IMG(0x10350ff8u), COW_IMG(0x103551e8u), COW_IMG(0x10357f80u), rd32(sp0 - 0x410u));
    t50 = g->ecx;
    t51 = g->edx;
    eax = t49;
    ecx = t50;
    edx = t51;
    COW_AT(1008113c)
    goto L_100811bc;
L_10081141: ;
    COW_AT(10081141)
    wr32(sp0 - 0x414u, COW_IMG(0x10357f78u));
    wr32(sp0 - 0x418u, COW_IMG(0x103551e8u));
    wr32(sp0 - 0x41cu, COW_IMG(0x10350ff8u));
    wr32(sp0 - 0x420u, sp0 - 0x400u);
    g->eax = (uint8_t)arg2 - 3u;
    g->ecx = ecx;
    g->edx = sp0 - 0x400u;
    g->esp = sp0 - 0x40cu;
    t46 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x400u, COW_IMG(0x10350ff8u), COW_IMG(0x103551e8u), COW_IMG(0x10357f78u), rd32(sp0 - 0x410u));
    t47 = g->ecx;
    t48 = g->edx;
    eax = t46;
    ecx = t47;
    edx = t48;
    COW_AT(1008115a)
    goto L_100811bc;
L_1008115f: ;
    COW_AT(1008115f)
    wr32(sp0 - 0x414u, COW_IMG(0x10357f70u));
    wr32(sp0 - 0x418u, COW_IMG(0x103551e8u));
    wr32(sp0 - 0x41cu, COW_IMG(0x10350ff8u));
    wr32(sp0 - 0x420u, sp0 - 0x400u);
    g->eax = sp0 - 0x400u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x40cu;
    t43 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x400u, COW_IMG(0x10350ff8u), COW_IMG(0x103551e8u), COW_IMG(0x10357f70u), rd32(sp0 - 0x410u));
    t44 = g->ecx;
    t45 = g->edx;
    eax = t43;
    ecx = t44;
    edx = t45;
    COW_AT(10081178)
    goto L_100811bc;
L_1008117d: ;
    COW_AT(1008117d)
    wr32(sp0 - 0x414u, COW_IMG(0x10357f68u));
    wr32(sp0 - 0x418u, COW_IMG(0x103551e8u));
    wr32(sp0 - 0x41cu, COW_IMG(0x10350ff8u));
    wr32(sp0 - 0x420u, sp0 - 0x400u);
    g->eax = (uint8_t)arg2 - 3u;
    g->ecx = sp0 - 0x400u;
    g->edx = edx;
    g->esp = sp0 - 0x40cu;
    t40 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x400u, COW_IMG(0x10350ff8u), COW_IMG(0x103551e8u), COW_IMG(0x10357f68u), rd32(sp0 - 0x410u));
    t41 = g->ecx;
    t42 = g->edx;
    eax = t40;
    ecx = t41;
    edx = t42;
    COW_AT(10081196)
    goto L_100811bc;
L_1008119b: ;
    COW_AT(1008119b)
    if (rd8(COW_IMG(0x1047d3feu)) == 0u) goto L_100811ab;
    eax = ((uint8_t)arg2 - 3u & 0xffffff00u) | rd8(COW_IMG(0x1047d3feu));
    COW_AT(100811a4)
    wr8(sp0 - 0x400u, 0u);
    goto L_100811d6;
L_100811ab: ;
    COW_AT(100811ab)
    eax = 0u;
L_100811ad: ;
    COW_AT(100811ad)
    t55 = rd8(COW_IMG(0x10354de0u) + eax);
    wr8(eax + sp0 - 0x400u, (uint8_t)t55);
    if ((uint8_t)t55 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t55;
        loc_404 = rd32(sp0 - 0x404u);
        goto L_100811ad;
    }
    eax = eax + 1u;
    ecx = (ecx & 0xffffff00u) | t55;
    goto L_100811bc;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10080dc0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10080defu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x410u);
        in_esi = rd32(sp0 - 0x40cu);
        in_ebp = rd32(sp0 - 0x408u);
        g->esp = sp0 - 0x410u;
        g->ebp = 0u;
        wr32(sp0 - 0x418u, sp0 - 0x200u);
        wr32(sp0 - 0x404u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10080e06u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_404;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x410u);
        in_esi = rd32(sp0 - 0x40cu);
        in_ebp = rd32(sp0 - 0x408u);
        loc_404 = rd32(sp0 - 0x404u);
        g->esp = sp0 - 0x410u;
        wr32(sp0 - 0x418u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x10080e12u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x410u);
        in_esi = rd32(sp0 - 0x40cu);
        in_ebp = rd32(sp0 - 0x408u);
        g->esp = sp0 - 0x410u;
        g->ebp = 0u;
        wr32(sp0 - 0x418u, sp0 - 0x200u);
        wr32(sp0 - 0x404u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10080e1du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_404;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x410u);
        in_esi = rd32(sp0 - 0x40cu);
        in_ebp = rd32(sp0 - 0x408u);
        loc_404 = rd32(sp0 - 0x404u);
        g->esp = sp0 - 0x410u;
        wr32(sp0 - 0x418u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x10080e29u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x410u);
        in_esi = rd32(sp0 - 0x40cu);
        in_ebp = rd32(sp0 - 0x408u);
        g->esp = sp0 - 0x410u;
        g->ebp = 0u;
        wr32(sp0 - 0x418u, sp0 - 0x200u);
        wr32(sp0 - 0x404u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10080e34u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x410u);
        in_esi = rd32(sp0 - 0x40cu);
        in_ebp = rd32(sp0 - 0x408u);
        g->esp = sp0 - 0x410u;
        g->ebp = 0u;
        wr32(sp0 - 0x418u, sp0 - 0x200u);
        wr32(sp0 - 0x404u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10080e3fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x410u);
        in_esi = rd32(sp0 - 0x40cu);
        in_ebp = rd32(sp0 - 0x408u);
        g->esp = sp0 - 0x410u;
        g->ebp = 0u;
        wr32(sp0 - 0x418u, sp0 - 0x200u);
        wr32(sp0 - 0x404u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10080e48u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x410u);
        in_esi = rd32(sp0 - 0x40cu);
        in_ebp = rd32(sp0 - 0x408u);
        g->esp = sp0 - 0x410u;
        g->ebp = 0u;
        wr32(sp0 - 0x418u, sp0 - 0x200u);
        wr32(sp0 - 0x404u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10080e5du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x410u);
        in_esi = rd32(sp0 - 0x40cu);
        in_ebp = rd32(sp0 - 0x408u);
        g->esp = sp0 - 0x410u;
        g->ebp = 0u;
        wr32(sp0 - 0x418u, sp0 - 0x200u);
        wr32(sp0 - 0x404u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10080e65u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x410u);
        in_esi = rd32(sp0 - 0x40cu);
        in_ebp = rd32(sp0 - 0x408u);
        g->esp = sp0 - 0x410u;
        g->ebp = 0u;
        wr32(sp0 - 0x418u, sp0 - 0x200u);
        wr32(sp0 - 0x404u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10080e77u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x418u;
        g->ebp = 0u;
        wr32(sp0 - 0x414u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x10080e8au:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x410u;
        g->ecx = (uint8_t)arg2 - 1u;
        g->ebp = 0u;
        wr32(sp0 - 0x414u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x10080e8du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x410u;
        wr32(sp0 - 0x414u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x10080e99u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x410u;
        g->ebp = 0u;
        wr32(sp0 - 0x414u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x10080e9du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x410u;
        g->ebp = 0u;
        wr32(sp0 - 0x414u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x10080ea3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x410u;
        wr32(sp0 - 0x414u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x10080eb3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x410u;
        (void)sp0;
        return 1;
    }
    case 0x10080ebfu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_404;
        uint32_t loc_408;
        uint32_t loc_40c;
        uint32_t loc_410;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_410 = rd32(sp0 - 0x410u);
        loc_40c = rd32(sp0 - 0x40cu);
        loc_408 = rd32(sp0 - 0x408u);
        loc_404 = rd32(sp0 - 0x404u);
        g->esp = sp0 - 0x410u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10080f38u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x41cu;
        g->ebp = 0u;
        wr32(sp0 - 0x41cu, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x10080f44u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x410u;
        wr32(sp0 - 0x41cu, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x10080f50u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x410u;
        g->ebp = 0u;
        wr32(sp0 - 0x41cu, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x10080f5eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x410u;
        g->ebp = 0u;
        g->esi = 0x96u;
        g->edi = COW_IMG(0x10354de0u);
        wr32(sp0 - 0x41cu, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x10080f68u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x410u;
        wr32(sp0 - 0x41cu, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x10080f6du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x410u;
        wr32(sp0 - 0x41cu, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x10080f83u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x410u;
        wr32(sp0 - 0x41cu, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x10080f8cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x410u;
        (void)sp0;
        return 1;
    }
    case 0x10080f96u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x410u;
        (void)sp0;
        return 1;
    }
    case 0x10080fb2u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x410u;
        (void)sp0;
        return 1;
    }
    case 0x10080fbbu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x410u;
        (void)sp0;
        return 1;
    }
    case 0x10080fc3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x41cu;
        (void)sp0;
        return 1;
    }
    case 0x10080fcau:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x410u;
        (void)sp0;
        return 1;
    }
    case 0x10080fd4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x410u;
        (void)sp0;
        return 1;
    }
    case 0x10080ff1u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x428u;
        (void)sp0;
        return 1;
    }
    case 0x10081006u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x410u;
        (void)sp0;
        return 1;
    }
    case 0x10081023u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x418u;
        (void)sp0;
        return 1;
    }
    case 0x10081030u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x410u;
        (void)sp0;
        return 1;
    }
    case 0x1008103cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x410u;
        (void)sp0;
        return 1;
    }
    case 0x10081042u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x410u;
        (void)sp0;
        return 1;
    }
    case 0x10081051u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x418u;
        (void)sp0;
        return 1;
    }
    case 0x10081054u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x410u;
        (void)sp0;
        return 1;
    }
    case 0x1008105au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x414u;
        (void)sp0;
        return 1;
    }
    case 0x10081061u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x410u;
        (void)sp0;
        return 1;
    }
    case 0x10081074u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x410u;
        (void)sp0;
        return 1;
    }
    case 0x1008107bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x410u;
        (void)sp0;
        return 1;
    }
    case 0x1008107fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x410u;
        (void)sp0;
        return 1;
    }
    case 0x1008108du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x410u;
        (void)sp0;
        return 1;
    }
    case 0x1008108fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x410u;
        (void)sp0;
        return 1;
    }
    case 0x10081099u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x410u;
        (void)sp0;
        return 1;
    }
    case 0x100810a3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x410u;
        (void)sp0;
        return 1;
    }
    case 0x100810a7u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x410u;
        (void)sp0;
        return 1;
    }
    case 0x100810b3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x410u;
        (void)sp0;
        return 1;
    }
    case 0x100810c3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x41cu;
        wr32(sp0 - 0x41cu, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x100810cau:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_404;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_404 = rd32(sp0 - 0x404u);
        g->esp = sp0 - 0x410u;
        (void)sp0;
        return 1;
    }
    case 0x100810d7u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_404;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_404 = rd32(sp0 - 0x404u);
        g->esp = sp0 - 0x410u;
        (void)sp0;
        return 1;
    }
    case 0x100810e3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_404;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_404 = rd32(sp0 - 0x404u);
        g->esp = sp0 - 0x410u;
        (void)sp0;
        return 1;
    }
    case 0x100810fbu:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_404;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_404 = rd32(sp0 - 0x404u);
        g->esp = sp0 - 0x410u;
        g->eax = (uint8_t)arg2 - 3u;
        (void)sp0;
        return 1;
    }
    case 0x10081102u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_404;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_404 = rd32(sp0 - 0x404u);
        g->esp = sp0 - 0x410u;
        (void)sp0;
        return 1;
    }
    case 0x1008111bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x420u;
        wr32(sp0 - 0x420u, sp0 - 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x10081123u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_404;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_404 = rd32(sp0 - 0x404u);
        g->esp = sp0 - 0x410u;
        g->eax = (uint8_t)arg2 - 3u;
        (void)sp0;
        return 1;
    }
    case 0x1008113cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x420u;
        wr32(sp0 - 0x420u, sp0 - 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x10081141u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_404;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_404 = rd32(sp0 - 0x404u);
        g->esp = sp0 - 0x410u;
        g->eax = (uint8_t)arg2 - 3u;
        (void)sp0;
        return 1;
    }
    case 0x1008115au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x420u;
        wr32(sp0 - 0x420u, sp0 - 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x1008115fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_404;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_404 = rd32(sp0 - 0x404u);
        g->esp = sp0 - 0x410u;
        (void)sp0;
        return 1;
    }
    case 0x10081178u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x420u;
        wr32(sp0 - 0x420u, sp0 - 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x1008117du:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_404;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_404 = rd32(sp0 - 0x404u);
        g->esp = sp0 - 0x410u;
        g->eax = (uint8_t)arg2 - 3u;
        (void)sp0;
        return 1;
    }
    case 0x10081196u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x420u;
        wr32(sp0 - 0x420u, sp0 - 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x1008119bu:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_404;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_404 = rd32(sp0 - 0x404u);
        g->esp = sp0 - 0x410u;
        g->eax = (uint8_t)arg2 - 3u;
        (void)sp0;
        return 1;
    }
    case 0x100811a4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_404;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_404 = rd32(sp0 - 0x404u);
        g->esp = sp0 - 0x410u;
        (void)sp0;
        return 1;
    }
    case 0x100811abu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_404;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_404 = rd32(sp0 - 0x404u);
        g->esp = sp0 - 0x410u;
        (void)sp0;
        return 1;
    }
    case 0x100811adu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_404;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_404 = rd32(sp0 - 0x404u);
        g->esp = sp0 - 0x410u;
        (void)sp0;
        return 1;
    }
    case 0x100811bcu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x410u;
        (void)sp0;
        return 1;
    }
    case 0x100811c4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x410u;
        (void)sp0;
        return 1;
    }
    case 0x100811d3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x418u;
        wr32(sp0 - 0x414u, sp0 - 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x100811d6u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_404;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_404 = rd32(sp0 - 0x404u);
        g->esp = sp0 - 0x410u;
        (void)sp0;
        return 1;
    }
    case 0x100811dfu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x418u;
        wr32(sp0 - 0x418u, 9u);
        (void)sp0;
        return 1;
    }
    case 0x100811e5u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x41cu;
        (void)sp0;
        return 1;
    }
    case 0x100811e8u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_404;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_404 = rd32(sp0 - 0x404u);
        g->esp = sp0 - 0x410u;
        (void)sp0;
        return 1;
    }
    case 0x100811f1u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_404;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_404 = rd32(sp0 - 0x404u);
        g->esp = sp0 - 0x410u;
        (void)sp0;
        return 1;
    }
    case 0x10081200u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x418u;
        (void)sp0;
        return 1;
    }
    case 0x10081203u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_404;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_404 = rd32(sp0 - 0x404u);
        g->esp = sp0 - 0x410u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10080dc0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10080dc0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
