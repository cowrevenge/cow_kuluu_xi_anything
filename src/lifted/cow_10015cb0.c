/* f_0x10015cb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10015cb0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_1220;
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
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 4660u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10015cbau: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10015cba;
    case 0x10015ccfu: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x121cu); in_esi = rd32(sp0 - 0x1218u); in_ebx = rd32(sp0 - 0x1214u); g->ebx = rd32(sp0 - 0x1214u); g->edi = rd32(sp0 - 0x121cu); g->esi = rd32(sp0 - 0x1218u); goto E_10015ccf;
    case 0x10015cd6u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x121cu); in_esi = rd32(sp0 - 0x1218u); in_ebx = rd32(sp0 - 0x1214u); g->ebx = rd32(sp0 - 0x1214u); g->edi = rd32(sp0 - 0x121cu); g->esi = rd32(sp0 - 0x1218u); goto E_10015cd6;
    case 0x10015ce0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1220 = rd32(sp0 - 0x1220u); goto E_10015ce0;
    case 0x10015ce7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1220 = rd32(sp0 - 0x1220u); goto E_10015ce7;
    case 0x10015cf2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1220 = rd32(sp0 - 0x1220u); goto E_10015cf2;
    case 0x10015cf9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1220 = rd32(sp0 - 0x1220u); goto E_10015cf9;
    case 0x10015d03u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1220 = rd32(sp0 - 0x1220u); goto E_10015d03;
    case 0x10015d0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1220 = rd32(sp0 - 0x1220u); goto E_10015d0f;
    case 0x10015d17u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10015d17;
    case 0x10015d20u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10015d20;
    case 0x10015d31u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1220 = rd32(sp0 - 0x1220u); goto E_10015d31;
    case 0x10015d35u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1220 = rd32(sp0 - 0x1220u); goto E_10015d35;
    case 0x10015d3du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1220 = rd32(sp0 - 0x1220u); goto E_10015d3d;
    case 0x10015d43u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10015d43;
    case 0x10015d52u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x121cu); in_esi = rd32(sp0 - 0x1218u); in_ebx = rd32(sp0 - 0x1214u); g->ebx = rd32(sp0 - 0x1214u); g->edi = rd32(sp0 - 0x121cu); g->esi = rd32(sp0 - 0x1218u); goto E_10015d52;
    case 0x10015d5cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1220 = rd32(sp0 - 0x1220u); goto E_10015d5c;
    case 0x10015d63u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1220 = rd32(sp0 - 0x1220u); goto E_10015d63;
    case 0x10015d6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1220 = rd32(sp0 - 0x1220u); goto E_10015d6e;
    case 0x10015d75u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1220 = rd32(sp0 - 0x1220u); goto E_10015d75;
    case 0x10015d7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1220 = rd32(sp0 - 0x1220u); goto E_10015d7f;
    case 0x10015d8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1220 = rd32(sp0 - 0x1220u); goto E_10015d8b;
    case 0x10015d93u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10015d93;
    case 0x10015d9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10015d9c;
    case 0x10015dadu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1220 = rd32(sp0 - 0x1220u); goto E_10015dad;
    case 0x10015db1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1220 = rd32(sp0 - 0x1220u); goto E_10015db1;
    case 0x10015db5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1220 = rd32(sp0 - 0x1220u); goto E_10015db5;
    case 0x10015dbbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10015dbb;
    case 0x10015dbeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1220 = rd32(sp0 - 0x1220u); goto E_10015dbe;
    case 0x10015dceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1220 = rd32(sp0 - 0x1220u); goto E_10015dce;
    case 0x10015ddau: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x121cu); in_esi = rd32(sp0 - 0x1218u); in_ebx = rd32(sp0 - 0x1214u); g->ebx = rd32(sp0 - 0x1214u); g->edi = rd32(sp0 - 0x121cu); g->esi = rd32(sp0 - 0x1218u); goto E_10015dda;
    case 0x10015de4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1220 = rd32(sp0 - 0x1220u); goto E_10015de4;
    case 0x10015debu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1220 = rd32(sp0 - 0x1220u); goto E_10015deb;
    case 0x10015df6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1220 = rd32(sp0 - 0x1220u); goto E_10015df6;
    case 0x10015df8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1220 = rd32(sp0 - 0x1220u); goto E_10015df8;
    case 0x10015dfau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1220 = rd32(sp0 - 0x1220u); goto E_10015dfa;
    case 0x10015e10u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1220 = rd32(sp0 - 0x1220u); goto E_10015e10;
    case 0x10015e18u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1220 = rd32(sp0 - 0x1220u); goto E_10015e18;
    case 0x10015e1au: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x121cu); in_esi = rd32(sp0 - 0x1218u); in_ebx = rd32(sp0 - 0x1214u); g->ebx = rd32(sp0 - 0x1214u); g->edi = rd32(sp0 - 0x121cu); g->esi = rd32(sp0 - 0x1218u); goto E_10015e1a;
    case 0x10015e50u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1220 = rd32(sp0 - 0x1220u); goto E_10015e50;
    case 0x10015e57u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1220 = rd32(sp0 - 0x1220u); goto E_10015e57;
    case 0x10015e66u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10015e66;
    case 0x10015e6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1220 = rd32(sp0 - 0x1220u); goto E_10015e6b;
    case 0x10015e83u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10015e83;
    case 0x10015e86u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10015e86;
    case 0x10015ebeu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10015ebe;
    case 0x10015ed4u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10015ed4;
    case 0x10015ee3u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10015ee3;
    case 0x10015eedu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10015eed;
    case 0x10015ef5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10015ef5;
    case 0x10015f00u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1220 = rd32(sp0 - 0x1220u); goto E_10015f00;
    case 0x10015f02u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10015f02;
    case 0x10015f04u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1220 = rd32(sp0 - 0x1220u); goto E_10015f04;
    case 0x10015f1du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1220 = rd32(sp0 - 0x1220u); goto E_10015f1d;
    case 0x10015f25u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_1220 = rd32(sp0 - 0x1220u); goto E_10015f25;
    default: break;
    }
#endif

    COW_AT(10015cb0)
    COW_AT(10015cba)
    wr32(sp0 - 0x1214u, in_ebx);
    wr32(sp0 - 0x1218u, in_esi);
    wr32(sp0 - 0x121cu, in_edi);
    if (rd32(rd32(COW_IMG(0x103d3cb8u)) + 0x20u) - 1u > 3u) goto L_10015e1a;
    eax = rd32(rd32(COW_IMG(0x103d3cb8u)) + 0x20u) - 1u;
    COW_AT(10015ccf)
    t1 = rd32(COW_IMG(0x10015f34u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x10015cd6u: goto L_10015cd6;
    case 0x10015d52u: goto L_10015d52;
    case 0x10015ddau: goto L_10015dda;
    default: rt_fatal(g, COW_IMG(0x10015ccfu), "switch");
    }
    return 0;
L_10015cd6: ;
    COW_AT(10015cd6)
    wr32(sp0 - 0x1220u, 0x90u);
    g->eax = eax;
    g->esp = sp0 - 0x1214u;
    t27 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 3, 0x90u, in_edi, in_esi);
    t28 = g->ecx;
    t29 = g->edx;
    eax = t27;
    ecx = t28;
    edx = t29;
    COW_AT(10015ce0)
    if (eax == 0u)
    {
    COW_AT(10015cf9)
        wr32(COW_IMG(0x10662dccu), 0u);
    }
    else
    {
    COW_AT(10015ce7)
        wr32(sp0 - 0x1220u, 0u);
        wr32(sp0 - 0x1224u, 1u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x121cu;
        t30 = cow_thiscall(g, COW_IMG(0x101c4530u), eax, 2, 1u, 0u);
        t31 = g->ecx;
        t32 = g->edx;
        eax = t30;
        ecx = t31;
        edx = t32;
    COW_AT(10015cf2)
        wr32(COW_IMG(0x10662dccu), eax);
    }
    COW_AT(10015d03)
    wr32(sp0 - 0x1220u, 0u);
    wr32(sp0 - 0x1224u, 0u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    t33 = rd32(COW_IMG(0x10329118u));
    g->esp = sp0 - 0x121cu;
    t34 = cow_stdcall(g, t33, 2, 0u, 0u);   /* kernel32.dll!GetCurrentDirectoryA */
    t35 = g->ecx;
    t36 = g->edx;
    eax = t34;
    ecx = t35;
    edx = t36;
    ebx = t33;
    COW_AT(10015d0f)
    wr32(sp0 - 0x1220u, eax);
    g->eax = eax;
    g->esp = sp0 - 0x1214u;
    t37 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, eax, rd32(sp0 - 0x121cu), rd32(sp0 - 0x1218u));
    t38 = g->ecx;
    t39 = g->edx;
    ecx = t38;
    edx = t39;
    edi = eax;
    eax = t37;
    COW_AT(10015d17)
    wr32(sp0 - 0x1220u, eax);
    wr32(sp0 - 0x1224u, edi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x121cu;
    t40 = cow_thiscall(g, ebx, ecx, 2, edi, eax);
    t41 = g->edx;
    edx = t41;
    esi = eax;
    eax = t40;
    COW_AT(10015d20)
    wr32(sp0 - 0x1220u, 0x100u);
    wr32(sp0 - 0x1224u, esi);
    g->eax = eax;
    g->edx = edx;
    t42 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 0x121cu;
    t43 = cow_thiscall(g, COW_IMG(0x101c4590u), t42, 2, esi, 0x100u);
    t44 = g->ecx;
    t45 = g->edx;
    eax = t43;
    ecx = t44;
    edx = t45;
    COW_AT(10015d31)
    if ((int32_t)eax >= 0) goto L_10015db1;
L_10015d35: ;
    COW_AT(10015d35)
    if (esi == 0u)
    {
        ebp = in_ebp;
        goto L_10015f25;
    }
    COW_AT(10015d3d)
    wr32(sp0 - 0x1220u, esi);
    g->eax = eax;
    g->esp = sp0 - 0x121cu;
    t46 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, esi);
    eax = t46;
    COW_AT(10015d43)
    g->ebx = rd32(sp0 - 0x1214u);
    g->esi = rd32(sp0 - 0x1218u);
    g->edi = rd32(sp0 - 0x121cu);
    g->ebp = in_ebp;
    return eax & 0xffffff00u;
L_10015d52: ;
    COW_AT(10015d52)
    wr32(sp0 - 0x1220u, 0x90u);
    g->eax = eax;
    g->esp = sp0 - 0x1214u;
    t8 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 3, 0x90u, in_edi, in_esi);
    t9 = g->ecx;
    t10 = g->edx;
    eax = t8;
    ecx = t9;
    edx = t10;
    COW_AT(10015d5c)
    if (eax == 0u)
    {
    COW_AT(10015d75)
        wr32(COW_IMG(0x10662dccu), 0u);
    }
    else
    {
    COW_AT(10015d63)
        wr32(sp0 - 0x1220u, 4u);
        wr32(sp0 - 0x1224u, 1u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x121cu;
        t11 = cow_thiscall(g, COW_IMG(0x101c4530u), eax, 2, 1u, 4u);
        t12 = g->ecx;
        t13 = g->edx;
        eax = t11;
        ecx = t12;
        edx = t13;
    COW_AT(10015d6e)
        wr32(COW_IMG(0x10662dccu), eax);
    }
    COW_AT(10015d7f)
    wr32(sp0 - 0x1220u, 0u);
    wr32(sp0 - 0x1224u, 0u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    t14 = rd32(COW_IMG(0x10329118u));
    g->esp = sp0 - 0x121cu;
    t15 = cow_stdcall(g, t14, 2, 0u, 0u);   /* kernel32.dll!GetCurrentDirectoryA */
    t16 = g->ecx;
    t17 = g->edx;
    eax = t15;
    ecx = t16;
    edx = t17;
    ebx = t14;
    COW_AT(10015d8b)
    wr32(sp0 - 0x1220u, eax);
    g->eax = eax;
    g->esp = sp0 - 0x1214u;
    t18 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, eax, rd32(sp0 - 0x121cu), rd32(sp0 - 0x1218u));
    t19 = g->ecx;
    t20 = g->edx;
    ecx = t19;
    edx = t20;
    edi = eax;
    eax = t18;
    COW_AT(10015d93)
    wr32(sp0 - 0x1220u, eax);
    wr32(sp0 - 0x1224u, edi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x121cu;
    t21 = cow_thiscall(g, ebx, ecx, 2, edi, eax);
    t22 = g->edx;
    edx = t22;
    esi = eax;
    eax = t21;
    COW_AT(10015d9c)
    wr32(sp0 - 0x1220u, 0x100u);
    wr32(sp0 - 0x1224u, esi);
    g->eax = eax;
    g->edx = edx;
    t23 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 0x121cu;
    t24 = cow_thiscall(g, COW_IMG(0x101c4590u), t23, 2, esi, 0x100u);
    t25 = g->ecx;
    t26 = g->edx;
    eax = t24;
    ecx = t25;
    edx = t26;
    COW_AT(10015dad)
    if ((int32_t)eax < 0) goto L_10015d35;
L_10015db1: ;
    COW_AT(10015db1)
    if (esi == 0u)
    {
        ebp = in_ebp;
    }
    else
    {
    COW_AT(10015db5)
        wr32(sp0 - 0x1220u, esi);
        g->eax = eax;
        g->esp = sp0 - 0x121cu;
        t47 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, esi);
        t48 = g->edx;
        eax = t47;
        edx = t48;
    COW_AT(10015dbb)
        ebp = in_ebp;
    }
L_10015dbe: ;
    COW_AT(10015dbe)
    wr32(sp0 - 0x1220u, COW_IMG(0x10456ae0u));
    g->eax = eax;
    g->esp = sp0 - 0x121cu;
    t63 = cow_thiscall(g, COW_IMG(0x101c4c50u), rd32(COW_IMG(0x10662dccu)), 1, COW_IMG(0x10456ae0u));
    eax = t63;
    COW_AT(10015dce)
    g->ebx = rd32(sp0 - 0x1214u);
    g->esi = rd32(sp0 - 0x1218u);
    g->edi = rd32(sp0 - 0x121cu);
    g->ebp = ebp;
    return (eax & 0xffffff00u) | 1u;
L_10015dda: ;
    COW_AT(10015dda)
    wr32(sp0 - 0x1220u, 0x90u);
    g->eax = eax;
    g->esp = sp0 - 0x1214u;
    t2 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 3, 0x90u, in_edi, in_esi);
    t3 = g->edx;
    eax = t2;
    edx = t3;
    COW_AT(10015de4)
    if (eax == 0u)
    {
    COW_AT(10015df8)
        eax = 0u;
    }
    else
    {
    COW_AT(10015deb)
        wr32(sp0 - 0x1220u, 2u);
        wr32(sp0 - 0x1224u, 2u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x121cu;
        t4 = cow_thiscall(g, COW_IMG(0x101c4530u), eax, 2, 2u, 2u);
        t5 = g->edx;
        eax = t4;
        edx = t5;
    COW_AT(10015df6)
    }
    COW_AT(10015dfa)
    wr32(sp0 - 0x1220u, 0x100u);
    wr32(sp0 - 0x1224u, COW_IMG(0x103d3c84u));
    wr32(COW_IMG(0x10662dccu), eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x121cu;
    t6 = cow_thiscall(g, COW_IMG(0x101c4590u), eax, 2, COW_IMG(0x103d3c84u), 0x100u);
    t7 = g->edx;
    eax = t6;
    edx = t7;
    COW_AT(10015e10)
    if ((int32_t)eax < 0)
    {
        ebp = in_ebp;
        goto L_10015f25;
    }
    COW_AT(10015e18)
    ebp = in_ebp;
    goto L_10015dbe;
L_10015e1a: ;
    COW_AT(10015e1a)
    esi = COW_IMG(0x10350680u);
    edi = sp0 - 0x1108u;
    ecx = 6u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr16(edi, rd16(esi)); esi += (g->df ? (uint32_t)-2 : 2u); edi += (g->df ? (uint32_t)-2 : 2u);
    edi = sp0 - 0x10eeu;
    eax = 0u;
    ecx = 0x3au;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr16(edi, (uint16_t)(uint16_t)eax); edi += (g->df ? (uint32_t)-2 : 2u);
    wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u);
    wr8(sp0 - 0x1000u, 0u);
    wr32(sp0 - 0x1220u, in_ebp);
    edx = in_edx;
    ebx = COW_IMG(0x10350560u);
    loc_1220 = in_ebp;
L_10015e50: ;
    COW_AT(10015e50)
    t49 = rd8(rd32(ebx));
    if ((uint8_t)t49 != 0u)
    {
        eax = rd32(ebx);
    COW_AT(10015e6b)
        wr32(sp0 - 0x1224u, eax);
        wr32(sp0 - 0x1228u, sp0 - 0x1108u);
        wr32(sp0 - 0x122cu, COW_IMG(0x10350670u));
        wr32(sp0 - 0x1230u, sp0 - 0x1210u);
        g->ebx = ebx;
        g->ecx = ecx;
        g->esp = sp0 - 0x121cu;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x1210u, COW_IMG(0x10350670u), sp0 - 0x1108u, eax, loc_1220);
        t51 = g->ecx;
        ecx = t51;
    COW_AT(10015e83)
    }
    else
    {
        eax = rd32(ebx);
    COW_AT(10015e57)
        wr32(sp0 - 0x1224u, COW_IMG(0x10350678u));
        wr32(sp0 - 0x1228u, sp0 - 0x1210u);
        g->ebx = ebx;
        g->ecx = sp0 - 0x1210u;
        g->esp = sp0 - 0x1214u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x1210u, COW_IMG(0x10350678u), loc_1220, rd32(sp0 - 0x121cu), rd32(sp0 - 0x1218u));
        t50 = g->ecx;
        ecx = t50;
    COW_AT(10015e66)
    }
    COW_AT(10015e86)
    edi = sp0 - 0x1210u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t52 = edi - ~ecx;
    t53 = ecx;
    edi = sp0 - 0x1000u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0xffu);
    af = 0u;
    zf = 0u;
    sf = 1u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t54 = edi;
    esi = t52;
    edi = t54 - 1u;
    ecx = ~t53 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = ~t53 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    if (ebx != COW_IMG(0x10350594u))
    {
    COW_AT(10015ebe)
        t55 = ecx;
        edi = sp0 - 0x1000u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0xffu);
        af = 0u;
        zf = 0u;
        sf = 1u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        t56 = rd16(COW_IMG(0x1034f2b8u));
        wr16(edi - 1u, (uint16_t)t56);
        eax = (eax & 0xffff0000u) | t56;
    }
    COW_AT(10015ed4)
    if ((int32_t)(ebx + 4u) < (int32_t)COW_IMG(0x10350598u))
    {
        edx = sp0 - 0x1000u;
        ebx = ebx + 4u;
        loc_1220 = rd32(sp0 - 0x1220u);
        goto L_10015e50;
    }
    COW_AT(10015ee3)
    wr32(sp0 - 0x1224u, 0x90u);
    g->eax = eax;
    g->esp = sp0 - 0x1218u;
    t57 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, sp0 - 0x1000u, 1, 3, 0x90u, rd32(sp0 - 0x1220u), rd32(sp0 - 0x121cu));
    t58 = g->edx;
    eax = t57;
    edx = t58;
    COW_AT(10015eed)
    if (eax == 0u)
    {
        ebp = rd32(sp0 - 0x1220u);
    COW_AT(10015f02)
        eax = 0u;
    }
    else
    {
        ebp = rd32(sp0 - 0x1220u);
    COW_AT(10015ef5)
        wr32(sp0 - 0x1220u, 0u);
        wr32(sp0 - 0x1224u, 0u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x121cu;
        t59 = cow_thiscall(g, COW_IMG(0x101c4530u), eax, 2, 0u, 0u);
        t60 = g->edx;
        eax = t59;
        edx = t60;
    COW_AT(10015f00)
    }
    COW_AT(10015f04)
    wr32(sp0 - 0x1220u, 0x100u);
    wr32(sp0 - 0x1224u, sp0 - 0x1000u);
    wr32(COW_IMG(0x10662dccu), eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x121cu;
    t61 = cow_thiscall(g, COW_IMG(0x101c4590u), eax, 2, sp0 - 0x1000u, 0x100u);
    t62 = g->edx;
    eax = t61;
    edx = t62;
    COW_AT(10015f1d)
    if ((int32_t)eax >= 0) goto L_10015dbe;
L_10015f25: ;
    COW_AT(10015f25)
    g->ebx = rd32(sp0 - 0x1214u);
    g->esi = rd32(sp0 - 0x1218u);
    g->edi = rd32(sp0 - 0x121cu);
    g->ebp = ebp;
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10015cb0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10015cbau:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1210u;
        (void)sp0;
        return 1;
    }
    case 0x10015ccfu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x121cu);
        in_esi = rd32(sp0 - 0x1218u);
        in_ebx = rd32(sp0 - 0x1214u);
        g->esp = sp0 - 0x121cu;
        (void)sp0;
        return 1;
    }
    case 0x10015cd6u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x121cu);
        in_esi = rd32(sp0 - 0x1218u);
        in_ebx = rd32(sp0 - 0x1214u);
        g->esp = sp0 - 0x121cu;
        (void)sp0;
        return 1;
    }
    case 0x10015ce0u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_1220;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1220 = rd32(sp0 - 0x1220u);
        g->esp = sp0 - 0x1220u;
        (void)sp0;
        return 1;
    }
    case 0x10015ce7u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_1220;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1220 = rd32(sp0 - 0x1220u);
        g->esp = sp0 - 0x121cu;
        (void)sp0;
        return 1;
    }
    case 0x10015cf2u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_1220;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1220 = rd32(sp0 - 0x1220u);
        g->esp = sp0 - 0x121cu;
        (void)sp0;
        return 1;
    }
    case 0x10015cf9u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_1220;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1220 = rd32(sp0 - 0x1220u);
        g->esp = sp0 - 0x121cu;
        (void)sp0;
        return 1;
    }
    case 0x10015d03u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_1220;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1220 = rd32(sp0 - 0x1220u);
        g->esp = sp0 - 0x121cu;
        (void)sp0;
        return 1;
    }
    case 0x10015d0fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_1220;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1220 = rd32(sp0 - 0x1220u);
        g->esp = sp0 - 0x121cu;
        (void)sp0;
        return 1;
    }
    case 0x10015d17u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1220u;
        (void)sp0;
        return 1;
    }
    case 0x10015d20u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x121cu;
        (void)sp0;
        return 1;
    }
    case 0x10015d31u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_1220;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1220 = rd32(sp0 - 0x1220u);
        g->esp = sp0 - 0x121cu;
        (void)sp0;
        return 1;
    }
    case 0x10015d35u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_1220;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1220 = rd32(sp0 - 0x1220u);
        g->esp = sp0 - 0x121cu;
        (void)sp0;
        return 1;
    }
    case 0x10015d3du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_1220;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1220 = rd32(sp0 - 0x1220u);
        g->esp = sp0 - 0x121cu;
        (void)sp0;
        return 1;
    }
    case 0x10015d43u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1220u;
        (void)sp0;
        return 1;
    }
    case 0x10015d52u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x121cu);
        in_esi = rd32(sp0 - 0x1218u);
        in_ebx = rd32(sp0 - 0x1214u);
        g->esp = sp0 - 0x121cu;
        (void)sp0;
        return 1;
    }
    case 0x10015d5cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_1220;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1220 = rd32(sp0 - 0x1220u);
        g->esp = sp0 - 0x1220u;
        (void)sp0;
        return 1;
    }
    case 0x10015d63u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_1220;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1220 = rd32(sp0 - 0x1220u);
        g->esp = sp0 - 0x121cu;
        (void)sp0;
        return 1;
    }
    case 0x10015d6eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_1220;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1220 = rd32(sp0 - 0x1220u);
        g->esp = sp0 - 0x121cu;
        (void)sp0;
        return 1;
    }
    case 0x10015d75u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_1220;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1220 = rd32(sp0 - 0x1220u);
        g->esp = sp0 - 0x121cu;
        (void)sp0;
        return 1;
    }
    case 0x10015d7fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_1220;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1220 = rd32(sp0 - 0x1220u);
        g->esp = sp0 - 0x121cu;
        (void)sp0;
        return 1;
    }
    case 0x10015d8bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_1220;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1220 = rd32(sp0 - 0x1220u);
        g->esp = sp0 - 0x121cu;
        (void)sp0;
        return 1;
    }
    case 0x10015d93u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1220u;
        (void)sp0;
        return 1;
    }
    case 0x10015d9cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x121cu;
        (void)sp0;
        return 1;
    }
    case 0x10015dadu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_1220;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1220 = rd32(sp0 - 0x1220u);
        g->esp = sp0 - 0x121cu;
        (void)sp0;
        return 1;
    }
    case 0x10015db1u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_1220;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1220 = rd32(sp0 - 0x1220u);
        g->esp = sp0 - 0x121cu;
        (void)sp0;
        return 1;
    }
    case 0x10015db5u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_1220;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1220 = rd32(sp0 - 0x1220u);
        g->esp = sp0 - 0x121cu;
        (void)sp0;
        return 1;
    }
    case 0x10015dbbu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1220u;
        (void)sp0;
        return 1;
    }
    case 0x10015dbeu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1220;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1220 = rd32(sp0 - 0x1220u);
        g->esp = sp0 - 0x121cu;
        (void)sp0;
        return 1;
    }
    case 0x10015dceu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1220;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1220 = rd32(sp0 - 0x1220u);
        g->esp = sp0 - 0x121cu;
        (void)sp0;
        return 1;
    }
    case 0x10015ddau:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x121cu);
        in_esi = rd32(sp0 - 0x1218u);
        in_ebx = rd32(sp0 - 0x1214u);
        g->esp = sp0 - 0x121cu;
        (void)sp0;
        return 1;
    }
    case 0x10015de4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_1220;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1220 = rd32(sp0 - 0x1220u);
        g->esp = sp0 - 0x1220u;
        (void)sp0;
        return 1;
    }
    case 0x10015debu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_1220;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1220 = rd32(sp0 - 0x1220u);
        g->esp = sp0 - 0x121cu;
        (void)sp0;
        return 1;
    }
    case 0x10015df6u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_1220;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1220 = rd32(sp0 - 0x1220u);
        g->esp = sp0 - 0x121cu;
        (void)sp0;
        return 1;
    }
    case 0x10015df8u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_1220;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1220 = rd32(sp0 - 0x1220u);
        g->esp = sp0 - 0x121cu;
        (void)sp0;
        return 1;
    }
    case 0x10015dfau:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_1220;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1220 = rd32(sp0 - 0x1220u);
        g->esp = sp0 - 0x121cu;
        (void)sp0;
        return 1;
    }
    case 0x10015e10u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_1220;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1220 = rd32(sp0 - 0x1220u);
        g->esp = sp0 - 0x121cu;
        (void)sp0;
        return 1;
    }
    case 0x10015e18u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_1220;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1220 = rd32(sp0 - 0x1220u);
        g->esp = sp0 - 0x121cu;
        (void)sp0;
        return 1;
    }
    case 0x10015e1au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x121cu);
        in_esi = rd32(sp0 - 0x1218u);
        in_ebx = rd32(sp0 - 0x1214u);
        g->esp = sp0 - 0x121cu;
        (void)sp0;
        return 1;
    }
    case 0x10015e50u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1220;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1220 = rd32(sp0 - 0x1220u);
        g->esp = sp0 - 0x1220u;
        (void)sp0;
        return 1;
    }
    case 0x10015e57u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1220;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1220 = rd32(sp0 - 0x1220u);
        g->esp = sp0 - 0x1220u;
        (void)sp0;
        return 1;
    }
    case 0x10015e66u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
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
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1228u;
        wr32(sp0 - 0x1228u, sp0 - 0x1210u);
        (void)sp0;
        return 1;
    }
    case 0x10015e6bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1220;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1220 = rd32(sp0 - 0x1220u);
        g->esp = sp0 - 0x1220u;
        (void)sp0;
        return 1;
    }
    case 0x10015e83u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
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
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1230u;
        wr32(sp0 - 0x1230u, sp0 - 0x1210u);
        wr32(sp0 - 0x1228u, sp0 - 0x1108u);
        (void)sp0;
        return 1;
    }
    case 0x10015e86u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
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
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1220u;
        (void)sp0;
        return 1;
    }
    case 0x10015ebeu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1220u;
        g->edx = sp0 - 0x1000u;
        (void)sp0;
        return 1;
    }
    case 0x10015ed4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1220u;
        g->edx = sp0 - 0x1000u;
        (void)sp0;
        return 1;
    }
    case 0x10015ee3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1220u;
        g->edx = sp0 - 0x1000u;
        (void)sp0;
        return 1;
    }
    case 0x10015eedu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
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
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x1224u;
        (void)sp0;
        return 1;
    }
    case 0x10015ef5u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
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
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x121cu;
        (void)sp0;
        return 1;
    }
    case 0x10015f00u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1220;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1220 = rd32(sp0 - 0x1220u);
        g->esp = sp0 - 0x121cu;
        (void)sp0;
        return 1;
    }
    case 0x10015f02u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
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
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x121cu;
        (void)sp0;
        return 1;
    }
    case 0x10015f04u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1220;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1220 = rd32(sp0 - 0x1220u);
        g->esp = sp0 - 0x121cu;
        (void)sp0;
        return 1;
    }
    case 0x10015f1du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1220;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1220 = rd32(sp0 - 0x1220u);
        g->esp = sp0 - 0x121cu;
        wr32(sp0 - 0x1224u, sp0 - 0x1000u);
        (void)sp0;
        return 1;
    }
    case 0x10015f25u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1220;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_1220 = rd32(sp0 - 0x1220u);
        g->esp = sp0 - 0x121cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10015cb0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10015cb0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
