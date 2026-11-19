/* f_0x102ef619 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102ef619(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
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
    uint32_t t64;
    uint32_t t65;
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t69;
    uint32_t t7;
    uint32_t t70;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 60u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102ef627u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102ef627;
    case 0x102ef62eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102ef62e;
    case 0x102ef63bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102ef63b;
    case 0x102ef645u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102ef645;
    case 0x102ef656u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102ef656;
    case 0x102ef65du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102ef65d;
    case 0x102ef664u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102ef664;
    case 0x102ef667u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102ef667;
    case 0x102ef66au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102ef66a;
    case 0x102ef66du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102ef66d;
    case 0x102ef674u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102ef674;
    case 0x102ef681u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; zf = g->zf; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102ef681;
    case 0x102ef68du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102ef68d;
    case 0x102ef696u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102ef696;
    case 0x102ef6a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102ef6a3;
    case 0x102ef6a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102ef6a8;
    case 0x102ef6afu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102ef6af;
    case 0x102ef6c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102ef6c3;
    case 0x102ef6c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102ef6c8;
    case 0x102ef6ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102ef6cc;
    case 0x102ef6d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102ef6d5;
    case 0x102ef6deu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102ef6de;
    case 0x102ef6e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102ef6e3;
    case 0x102ef6e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102ef6e7;
    case 0x102ef6f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102ef6f7;
    case 0x102ef6fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102ef6fc;
    case 0x102ef700u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102ef700;
    case 0x102ef709u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102ef709;
    case 0x102ef712u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102ef712;
    case 0x102ef71bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102ef71b;
    case 0x102ef71fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102ef71f;
    case 0x102ef728u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102ef728;
    case 0x102ef72bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102ef72b;
    case 0x102ef731u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102ef731;
    case 0x102ef736u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; zf = g->zf; loc_10 = rd32(sp0 - 0x10u); in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102ef736;
    case 0x102ef747u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102ef747;
    case 0x102ef749u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102ef749;
    case 0x102ef74fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; zf = g->zf; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102ef74f;
    case 0x102ef75cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; zf = g->zf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102ef75c;
    case 0x102ef772u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102ef772;
    case 0x102ef77bu: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102ef77b;
    case 0x102ef783u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102ef783;
    case 0x102ef789u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102ef789;
    case 0x102ef7c9u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; zf = g->zf; loc_14 = rd32(sp0 - 0x14u); goto E_102ef7c9;
    case 0x102ef7d6u: ecx = g->ecx; edx = g->edx; zf = g->zf; loc_14 = rd32(sp0 - 0x14u); goto E_102ef7d6;
    case 0x102ef7dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; loc_14 = rd32(sp0 - 0x14u); goto E_102ef7df;
    case 0x102ef7e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102ef7e1;
    case 0x102ef7fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102ef7fc;
    case 0x102ef7ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102ef7ff;
    case 0x102ef815u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102ef815;
    case 0x102ef824u: eax = g->eax; edx = g->edx; zf = g->zf; loc_14 = rd32(sp0 - 0x14u); goto E_102ef824;
    case 0x102ef828u: eax = g->eax; edx = g->edx; ebx = g->ebx; zf = g->zf; loc_14 = rd32(sp0 - 0x14u); goto E_102ef828;
    case 0x102ef82fu: eax = g->eax; edx = g->edx; ebx = g->ebx; zf = g->zf; loc_14 = rd32(sp0 - 0x14u); goto E_102ef82f;
    case 0x102ef834u: eax = g->eax; edx = g->edx; ebx = g->ebx; zf = g->zf; loc_14 = rd32(sp0 - 0x14u); goto E_102ef834;
    case 0x102ef83du: eax = g->eax; edx = g->edx; zf = g->zf; loc_14 = rd32(sp0 - 0x14u); goto E_102ef83d;
    case 0x102ef846u: eax = g->eax; edx = g->edx; ebx = g->ebx; zf = g->zf; loc_14 = rd32(sp0 - 0x14u); goto E_102ef846;
    case 0x102ef848u: eax = g->eax; edx = g->edx; ebx = g->ebx; zf = g->zf; loc_14 = rd32(sp0 - 0x14u); goto E_102ef848;
    case 0x102ef84du: eax = g->eax; edx = g->edx; ebx = g->ebx; zf = g->zf; loc_14 = rd32(sp0 - 0x14u); goto E_102ef84d;
    case 0x102ef852u: eax = g->eax; edx = g->edx; ebx = g->ebx; zf = g->zf; loc_14 = rd32(sp0 - 0x14u); goto E_102ef852;
    case 0x102ef85au: eax = g->eax; edx = g->edx; ebx = g->ebx; zf = g->zf; loc_14 = rd32(sp0 - 0x14u); goto E_102ef85a;
    case 0x102ef867u: eax = g->eax; edx = g->edx; ebx = g->ebx; zf = g->zf; loc_14 = rd32(sp0 - 0x14u); goto E_102ef867;
    case 0x102ef86fu: eax = g->eax; edx = g->edx; ebx = g->ebx; zf = g->zf; loc_14 = rd32(sp0 - 0x14u); goto E_102ef86f;
    case 0x102ef8feu: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; goto E_102ef8fe;
    case 0x102ef905u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; goto E_102ef905;
    case 0x102ef90eu: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; goto E_102ef90e;
    case 0x102ef915u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; goto E_102ef915;
    case 0x102ef920u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; goto E_102ef920;
    case 0x102ef936u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; goto E_102ef936;
    case 0x102ef93bu: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; goto E_102ef93b;
    case 0x102ef955u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); goto E_102ef955;
    case 0x102ef95au: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); goto E_102ef95a;
    case 0x102ef96du: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; goto E_102ef96d;
    case 0x102ef977u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; goto E_102ef977;
    case 0x102ef984u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); goto E_102ef984;
    case 0x102ef989u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); goto E_102ef989;
    case 0x102ef98du: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102ef98d;
    case 0x102ef996u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); goto E_102ef996;
    case 0x102ef9a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; zf = g->zf; goto E_102ef9a8;
    case 0x102ef9bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; zf = g->zf; goto E_102ef9bc;
    default: break;
    }
#endif

    COW_AT(102ef619)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    if ((rd8(arg1 + 0x5cu) & 0x40u) != 0u)
    {
        eax = in_eax;
        ecx = self;
        edx = in_edx;
    }
    else
    {
    COW_AT(102ef627)
        wr32(sp0 - 0x10u, arg1);
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t1 = cow_call_regs(g, COW_IMG(0x102f7e44u), in_eax, self, g->edx, 1, 3, arg1, in_edi, in_esi);
        t2 = g->edx;
        eax = t1;
        ecx = arg1;
        edx = t2;
    }
    COW_AT(102ef62e)
    if (rd8(arg1 + 0x113u) == 0u) goto L_102ef747;
    COW_AT(102ef63b)
    if ((rd8(arg1 + 0x60u) & 2u) == 0u) goto L_102ef747;
    COW_AT(102ef645)
    if (rd8(arg1 + 0x114u) == 0u)
    {
        eax = rd8(arg1 + 0x114u);
        goto L_102ef71f;
    }
    eax = rd8(arg1 + 0x114u);
    COW_AT(102ef656)
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_102ef700;
    }
    eax = eax - 1u;
    COW_AT(102ef65d)
    if (eax == 1u) goto L_102ef6e7;
    eax = eax - 1u;
    COW_AT(102ef664)
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_102ef6cc;
    }
    eax = eax - 1u;
    COW_AT(102ef667)
    if (eax == 1u) goto L_102ef6af;
    eax = eax - 1u;
    COW_AT(102ef66a)
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_102ef68d;
    }
    eax = eax - 1u;
    COW_AT(102ef66d)
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_102ef749;
    }
    eax = eax - 1u;
    COW_AT(102ef674)
    if (rd8(arg1 + 0xd4u) & 1u) goto L_102ef749;
L_102ef681: ;
    COW_AT(102ef681)
    wr32(sp0 - 0x10u, arg1);
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x102f87d1u), g->eax, ecx, edx, 1, 1, arg1);
    t8 = g->edx;
    edx = t8;
    ebx = in_ebx;
L_102ef9bc: ;
    COW_AT(102ef9bc)
    g->ebx = ebx;
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return;
L_102ef68d: ;
    COW_AT(102ef68d)
    if (rd8(arg1 + 0xd4u) & 1u) goto L_102ef6a3;
    COW_AT(102ef696)
    if (rd32(arg1 + 0xb8u) >= 2u) goto L_102ef749;
L_102ef6a3: ;
    COW_AT(102ef6a3)
    if (arg3 == 0u) goto L_102ef681;
    COW_AT(102ef6a8)
    wr32(sp0 - 0x10u, 0x55u);
    loc_10 = 0x55u;
L_102ef736: ;
    COW_AT(102ef736)
    wr32(sp0 - 0x14u, arg3);
    wr32(sp0 - 0x18u, arg1);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t5 = cow_cdecl(g, COW_IMG(0x102f77eau), 5, arg1, arg3, loc_10, in_edi, in_esi);
    t6 = g->ecx;
    t7 = g->edx;
    eax = t5;
    ecx = t6;
    edx = t7;
    goto L_102ef681;
L_102ef6af: ;
    COW_AT(102ef6af)
    t3 = rd32(arg1 + 0xd4u);
    if ((t3 & 3u) == 2u)
    {
        eax = t3;
        ecx = (t3 & 0xffffff00u) | (t3 & 3u);
        goto L_102ef749;
    }
    eax = t3;
    ecx = (t3 & 0xffffff00u) | (t3 & 3u);
    COW_AT(102ef6c3)
    if (arg3 == 0u) goto L_102ef681;
    COW_AT(102ef6c8)
    zf = (eax & 2u) == 0u;
L_102ef72b: ;
    COW_AT(102ef72b)
    if (zf) goto L_102ef681;
    COW_AT(102ef731)
    wr32(sp0 - 0x10u, 0xffu);
    loc_10 = 0xffu;
    goto L_102ef736;
L_102ef6cc: ;
    COW_AT(102ef6cc)
    if ((rd8(arg1 + 0xd4u) & 3u) != 0u) goto L_102ef6de;
    COW_AT(102ef6d5)
    if (rd32(arg1 + 0xb8u) >= 3u) goto L_102ef749;
L_102ef6de: ;
    COW_AT(102ef6de)
    if (arg3 == 0u) goto L_102ef681;
    COW_AT(102ef6e3)
    wr32(sp0 - 0x10u, 0x33u);
    loc_10 = 0x33u;
    goto L_102ef736;
L_102ef6e7: ;
    COW_AT(102ef6e7)
    t4 = rd32(arg1 + 0xd4u);
    if ((t4 & 7u) == 4u)
    {
        eax = t4;
        ecx = (t4 & 0xffffff00u) | (t4 & 7u);
        goto L_102ef749;
    }
    eax = t4;
    ecx = (t4 & 0xffffff00u) | (t4 & 7u);
    COW_AT(102ef6f7)
    if (arg3 == 0u) goto L_102ef681;
    COW_AT(102ef6fc)
    zf = (eax & 4u) == 0u;
    goto L_102ef72b;
L_102ef700: ;
    COW_AT(102ef700)
    if ((rd8(arg1 + 0xd4u) & 7u) != 0u) goto L_102ef712;
    COW_AT(102ef709)
    if (rd32(arg1 + 0xb8u) >= 5u) goto L_102ef749;
L_102ef712: ;
    COW_AT(102ef712)
    if (arg3 == 0u) goto L_102ef681;
    COW_AT(102ef71b)
    wr32(sp0 - 0x10u, 0xfu);
    loc_10 = 0xfu;
    goto L_102ef736;
L_102ef71f: ;
    COW_AT(102ef71f)
    if ((rd8(arg1 + 0xd4u) & 7u) == 0u) goto L_102ef749;
    COW_AT(102ef728)
    zf = arg3 == 0u;
    goto L_102ef72b;
L_102ef747: ;
    COW_AT(102ef747)
L_102ef749: ;
    COW_AT(102ef749)
    if ((rd8(arg1 + 0x58u) & 4u) != 0u) goto L_102ef75c;
    COW_AT(102ef74f)
    wr32(sp0 - 0x10u, COW_IMG(0x10348058u));
    wr32(sp0 - 0x14u, arg1);
    g->esi = arg1;
    g->esp = sp0 - 0xcu;
    cow_fastcall(g, COW_IMG(0x102ef234u), ecx, edx, 2, arg1, COW_IMG(0x10348058u));
    rt_fatal(g, COW_IMG(0x102ef755u), "no way on");
L_102ef75c: ;
    COW_AT(102ef75c)
    t9 = rd32(arg1 + 0xdcu);
    wr32(arg1 + 0x70u, t9);
    wr32(sp0 - 0x10u, in_ebx);
    t10 = rd32(arg1 + 0xccu);
    wr32(arg1 + 0x74u, t10);
    eax = t10;
    loc_4 = in_ebp;
    loc_8 = in_esi;
    loc_c = in_edi;
    loc_10 = in_ebx;
L_102ef772: ;
    COW_AT(102ef772)
    if (rd32(arg1 + 0x68u) != 0u) goto L_102ef815;
    COW_AT(102ef77b)
    if (rd32(arg1 + 0xfcu) != 0u) goto L_102ef7e1;
    COW_AT(102ef783)
L_102ef789: ;
    COW_AT(102ef789)
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, arg1);
    g->ecx = ecx;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x102f7fe0u), g->eax, g->ecx, edx, 1, 5, arg1, 0u, loc_10, loc_c, loc_8);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0x1cu, 4u);
    wr32(sp0 - 0x20u, sp0 + 4u);
    wr32(sp0 - 0x24u, arg1);
    g->ecx = t11;
    g->esp = sp0 - 0x18u;
    cow_call_regs(g, COW_IMG(0x102f1f8fu), g->eax, g->ecx, t12, 1, 3, arg1, sp0 + 4u, 4u);
    t13 = g->ecx;
    t14 = g->edx;
    wr32(sp0 - 0x28u, sp0 + 4u);
    g->eax = sp0 + 4u;
    g->ecx = t13;
    g->edx = t14;
    g->esp = sp0 - 0x24u;
    t15 = cow_cdecl(g, COW_IMG(0x102f76dau), 1, sp0 + 4u);
    t16 = g->ecx;
    t17 = g->edx;
    wr32(sp0 - 0x2cu, arg1);
    wr32(arg1 + 0xfcu, t15);
    g->ecx = t16;
    g->edx = t17;
    g->esp = sp0 - 0x28u;
    t18 = cow_cdecl(g, COW_IMG(0x102f20e1u), 1, arg1);
    t19 = g->ecx;
    t20 = g->edx;
    wr32(sp0 - 0x30u, 4u);
    wr32(sp0 - 0x34u, arg1 + 0x10cu);
    wr32(sp0 - 0x38u, arg1);
    g->esp = sp0 - 0x24u;
    cow_call_regs(g, COW_IMG(0x102f7710u), g->eax, g->ecx, t20, 1, 5, arg1, arg1 + 0x10cu, 4u, arg1, sp0 + 4u);
    t21 = g->edx;
    if (rd32(arg1 + 0x10cu) == rd32(COW_IMG(0x10347edcu)))
    {
        ecx = rd32(arg1 + 0x10cu);
        edx = t21;
        goto L_102ef7d6;
    }
    ecx = rd32(arg1 + 0x10cu);
    edx = t21;
    COW_AT(102ef7c9)
    wr32(sp0 - 0x14u, COW_IMG(0x10348040u));
    wr32(sp0 - 0x18u, arg1);
    g->esi = arg1;
    g->esp = sp0 - 0x10u;
    cow_fastcall(g, COW_IMG(0x102ef234u), ecx, edx, 2, arg1, COW_IMG(0x10348040u));
    rt_fatal(g, COW_IMG(0x102ef7cfu), "no way on");
L_102ef7d6: ;
    COW_AT(102ef7d6)
    if (rd32(arg1 + 0xfcu) == 0u)
    {
        eax = COW_IMG(0x10347edcu);
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        goto L_102ef789;
    }
    COW_AT(102ef7df)
    loc_4 = rd32(sp0 - 4u);
    loc_8 = rd32(sp0 - 8u);
    loc_c = rd32(sp0 - 0xcu);
    loc_10 = rd32(sp0 - 0x10u);
L_102ef7e1: ;
    COW_AT(102ef7e1)
    t22 = rd32(arg1 + 0xa0u);
    t23 = rd32(arg1 + 0x9cu);
    t24 = rd32(arg1 + 0xfcu);
    t25 = rd32(arg1 + 0xa0u);
    wr32(arg1 + 0x68u, t22);
    wr32(arg1 + 0x64u, t23);
    if (t25 <= t24)
    {
        eax = t22;
        ecx = t23;
        edx = t24;
    }
    else
    {
        eax = t22;
        ecx = t23;
        edx = t24;
    COW_AT(102ef7fc)
        wr32(arg1 + 0x68u, edx);
    }
    COW_AT(102ef7ff)
    t26 = rd32(arg1 + 0x68u);
    wr32(sp0 - 0x14u, t26);
    wr32(sp0 - 0x18u, ecx);
    wr32(sp0 - 0x1cu, arg1);
    g->ecx = ecx;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x102f7710u), g->eax, g->ecx, edx, 1, 5, arg1, ecx, t26, loc_10, loc_c);
    t27 = g->ecx;
    t28 = g->edx;
    t29 = rd32(arg1 + 0x68u);
    wr32(arg1 + 0xfcu, rd32(arg1 + 0xfcu) - t29);
    eax = t29;
    ecx = t27;
    edx = t28;
    loc_4 = rd32(sp0 - 4u);
    loc_8 = rd32(sp0 - 8u);
    loc_c = rd32(sp0 - 0xcu);
    loc_10 = rd32(sp0 - 0x10u);
L_102ef815: ;
    COW_AT(102ef815)
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, arg1 + 0x64u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t30 = cow_cdecl(g, COW_IMG(0x102f7138u), 2, arg1 + 0x64u, 1u);
    t31 = g->edx;
    if (t30 == 1u)
    {
        eax = t30;
        edx = t31;
        goto L_102ef848;
    }
    eax = t30;
    edx = t31;
    COW_AT(102ef824)
    if (eax == 0u) goto L_102ef83d;
    COW_AT(102ef828)
    if (rd32(arg1 + 0x7cu) != 0u)
    {
        eax = rd32(arg1 + 0x7cu);
    }
    else
    {
    COW_AT(102ef82f)
        eax = COW_IMG(0x1034802cu);
    }
    COW_AT(102ef834)
    wr32(sp0 - 0x14u, eax);
    wr32(sp0 - 0x18u, arg1);
    g->esi = arg1;
    g->esp = sp0 - 0x10u;
    cow_fastcall(g, COW_IMG(0x102ef234u), 1u, edx, 2, arg1, eax);
    rt_fatal(g, COW_IMG(0x102ef836u), "no way on");
L_102ef83d: ;
    COW_AT(102ef83d)
    if (rd32(arg1 + 0x74u) != 0u)
    {
        ecx = 1u;
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        goto L_102ef772;
    }
    COW_AT(102ef846)
L_102ef86f: ;
    COW_AT(102ef86f)
    t32 = rd8(arg1 + 0x116u);
    t33 = rd8(arg1 + 0x11au);
    wr8(arg1 + 0xfau, (uint8_t)t33);
    t34 = rd8(arg1 + 0x117u);
    wr8(arg1 + 0xf9u, (uint8_t)t34);
    t35 = rd8(arg1 + 0x119u);
    wr8(arg1 + 0xfbu, (uint8_t)t35);
    wr8(arg1 + 0xf8u, (uint8_t)t32);
    t36 = rd32(arg1 + 0xd0u);
    t37 = rd32(arg1 + 0xd0u);
    wr32(arg1 + 0xf0u, t36);
    t38 = ((uint8_t)t35 * t37 + 7u) >> 3u;
    t39 = rd32(arg1 + 0xdcu);
    wr32(arg1 + 0xf4u, t38);
    wr32(sp0 - 0x14u, rd8(t39));
    t40 = rd32(arg1 + 0xd8u) + 1u;
    wr32(sp0 - 0x18u, t40);
    wr32(sp0 - 0x1cu, t39 + 1u);
    wr32(sp0 - 0x20u, arg1 + 0xf0u);
    wr32(sp0 - 0x24u, arg1);
    g->ecx = t40;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x102f7cc9u), g->eax, g->ecx, edx, 1, 7, arg1, arg1 + 0xf0u, t39 + 1u, t40, rd8(t39), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t41 = g->ecx;
    t42 = g->edx;
    t43 = rd32(arg1 + 0xc8u) + 1u;
    wr32(sp0 - 0x28u, t43);
    t44 = rd32(arg1 + 0xdcu);
    wr32(sp0 - 0x2cu, t44);
    t45 = rd32(arg1 + 0xd8u);
    wr32(sp0 - 0x30u, t45);
    wr32(sp0 - 0x34u, arg1);
    g->eax = t43;
    g->ecx = t41;
    g->edx = t42;
    g->esp = sp0 - 0x1cu;
    t46 = cow_cdecl(g, COW_IMG(0x102f7686u), 6, arg1, t45, t44, t43, arg1, arg1 + 0xf0u);
    t47 = g->ecx;
    t48 = g->edx;
    if (rd32(arg1 + 0x60u) == 0u)
    {
        eax = t46;
        ecx = t47;
        edx = t48;
    }
    else
    {
        eax = t46;
        ecx = t47;
        edx = t48;
    COW_AT(102ef8fe)
        wr32(sp0 - 0x14u, arg1);
        g->ebx = 0u;
        g->eax = eax;
        g->esp = sp0 - 8u;
        t49 = cow_call_regs(g, COW_IMG(0x102f1c49u), g->eax, ecx, edx, 1, 3, arg1, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
        t50 = g->edx;
        eax = t49;
        ecx = arg1;
        edx = t50;
    }
    COW_AT(102ef905)
    if (rd8(arg1 + 0x113u) == 0u) goto L_102ef96d;
    COW_AT(102ef90e)
    if ((rd32(arg1 + 0x60u) & 2u) == 0u)
    {
        eax = rd32(arg1 + 0x60u);
        goto L_102ef96d;
    }
    eax = rd32(arg1 + 0x60u);
    COW_AT(102ef915)
    if (rd8(arg1 + 0x114u) >= 6u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(arg1 + 0x114u);
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | rd8(arg1 + 0x114u);
    COW_AT(102ef920)
        wr32(sp0 - 0x14u, eax);
        wr32(sp0 - 0x18u, (uint8_t)ecx);
        t51 = rd32(arg1 + 0xdcu) + 1u;
        wr32(sp0 - 0x1cu, t51);
        wr32(sp0 - 0x20u, arg1 + 0xf0u);
        g->eax = t51;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t52 = cow_cdecl(g, COW_IMG(0x102f7a00u), 4, arg1 + 0xf0u, t51, (uint8_t)ecx, eax);
        t53 = g->ecx;
        t54 = g->edx;
        eax = t52;
        ecx = t53;
        edx = t54;
    }
    COW_AT(102ef936)
    if (arg3 != 0u)
    {
    COW_AT(102ef93b)
        t55 = rd32(COW_IMG(0x10347eb8u) + rd8(arg1 + 0x114u) * 4u);
        wr32(sp0 - 0x14u, t55);
        wr32(sp0 - 0x18u, arg3);
        wr32(sp0 - 0x1cu, arg1);
        g->eax = rd8(arg1 + 0x114u);
        g->ecx = ecx;
        g->edx = edx;
        t56 = rd8(arg1 + 0x114u);
        g->esp = sp0 - 8u;
        t57 = cow_cdecl(g, COW_IMG(0x102f77eau), 5, arg1, arg3, t55, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
        t58 = g->ecx;
        t59 = g->edx;
        eax = t57;
        ecx = t58;
        edx = t59;
    }
    COW_AT(102ef955)
    if (arg2 == 0u) goto L_102ef996;
    COW_AT(102ef95a)
    t60 = rd32(COW_IMG(0x10347e9cu) + rd8(arg1 + 0x114u) * 4u);
    wr32(sp0 - 0x14u, t60);
    wr32(sp0 - 0x18u, arg2);
    eax = rd8(arg1 + 0x114u);
    loc_18 = arg2;
    loc_14 = t60;
L_102ef98d: ;
    COW_AT(102ef98d)
    wr32(sp0 - 0x1cu, arg1);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t64 = cow_cdecl(g, COW_IMG(0x102f77eau), 5, arg1, loc_18, loc_14, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t65 = g->ecx;
    t66 = g->edx;
    eax = t64;
    ecx = t65;
    edx = t66;
L_102ef996: ;
    COW_AT(102ef996)
    wr32(sp0 - 0x14u, arg1);
    g->ebx = 0u;
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x102f87d1u), g->eax, ecx, edx, 1, 5, arg1, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u), rd32(sp0 - 4u));
    t67 = g->edx;
    if (rd32(arg1 + 0x16cu) == 0u)
    {
        edx = t67;
        ebx = rd32(sp0 - 0x10u);
    }
    else
    {
        eax = rd32(arg1 + 0x16cu);
        edx = t67;
        ebx = rd32(sp0 - 0x10u);
    COW_AT(102ef9a8)
        t68 = rd8(arg1 + 0x114u);
        wr32(sp0 - 0x10u, t68);
        t69 = rd32(arg1 + 0xd4u);
        wr32(sp0 - 0x14u, t69);
        wr32(sp0 - 0x18u, arg1);
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        cow_thiscall_cdecl(g, eax, t68, 3, arg1, t69, t68);
        t70 = g->edx;
        edx = t70;
    }
    goto L_102ef9bc;
L_102ef848: ;
    COW_AT(102ef848)
    if (rd32(arg1 + 0x74u) != 0u) goto L_102ef85a;
    COW_AT(102ef84d)
    if (rd32(arg1 + 0x68u) != 0u) goto L_102ef85a;
    COW_AT(102ef852)
    if (rd32(arg1 + 0xfcu) == 0u) goto L_102ef867;
L_102ef85a: ;
    COW_AT(102ef85a)
    wr32(sp0 - 0x14u, COW_IMG(0x10348014u));
    wr32(sp0 - 0x18u, arg1);
    g->esi = arg1;
    g->esp = sp0 - 0x10u;
    cow_fastcall(g, COW_IMG(0x102ef234u), 1u, edx, 2, arg1, COW_IMG(0x10348014u));
    rt_fatal(g, COW_IMG(0x102ef860u), "no way on");
L_102ef867: ;
    COW_AT(102ef867)
    wr32(arg1 + 0x58u, rd32(arg1 + 0x58u) | 8u);
    wr32(arg1 + 0x5cu, rd32(arg1 + 0x5cu) | 0x20u);
    goto L_102ef86f;
L_102ef96d: ;
    COW_AT(102ef96d)
    if (arg2 != 0u)
    {
    COW_AT(102ef977)
        wr32(sp0 - 0x14u, 0xffu);
        wr32(sp0 - 0x18u, arg2);
        wr32(sp0 - 0x1cu, arg1);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t61 = cow_cdecl(g, COW_IMG(0x102f77eau), 5, arg1, arg2, 0xffu, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
        t62 = g->ecx;
        t63 = g->edx;
        eax = t61;
        ecx = t62;
        edx = t63;
    }
    COW_AT(102ef984)
    if (arg3 == 0u) goto L_102ef996;
    COW_AT(102ef989)
    wr32(sp0 - 0x14u, 0xffu);
    wr32(sp0 - 0x18u, arg3);
    loc_18 = arg3;
    loc_14 = 0xffu;
    goto L_102ef98d;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102ef619(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102ef627u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t zf;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ef62eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ef63bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ef645u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ef656u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102ef65du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102ef664u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102ef667u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102ef66au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102ef66du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102ef674u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102ef681u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        zf = g->zf;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ef68du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102ef696u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102ef6a3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102ef6a8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ef6afu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102ef6c3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102ef6c8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ef6ccu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102ef6d5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102ef6deu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102ef6e3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ef6e7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102ef6f7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102ef6fcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ef700u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102ef709u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102ef712u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102ef71bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ef71fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102ef728u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102ef72bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ef731u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ef736u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        zf = g->zf;
        loc_10 = rd32(sp0 - 0x10u);
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ef747u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ef749u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102ef74fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        zf = g->zf;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ef75cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102ef772u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg1 + 0x64u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102ef77bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg1 + 0x64u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102ef783u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg1 + 0x64u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ef789u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg1 + 0x64u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg1 + 0x10cu;
        (void)sp0;
        return 1;
    }
    case 0x102ef7c9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_14;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        zf = g->zf;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->eax = COW_IMG(0x10347edcu);
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x28u, sp0 + 4u);
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ef7d6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_14;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->eax = COW_IMG(0x10347edcu);
        g->ebx = arg1 + 0x64u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg1 + 0x10cu;
        wr32(sp0 - 0x28u, sp0 + 4u);
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ef7dfu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_14;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg1 + 0x64u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x28u, sp0 + 4u);
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102ef7e1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg1 + 0x64u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102ef7fcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg1 + 0x64u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102ef7ffu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg1 + 0x64u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102ef815u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg1 + 0x64u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102ef824u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t loc_14;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        zf = g->zf;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ecx = 1u;
        g->ebx = arg1 + 0x64u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102ef828u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t loc_14;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        zf = g->zf;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ecx = 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102ef82fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t loc_14;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        zf = g->zf;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ecx = 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ef834u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t loc_14;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        zf = g->zf;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ecx = 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ef83du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t loc_14;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        zf = g->zf;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ecx = 1u;
        g->ebx = arg1 + 0x64u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102ef846u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t loc_14;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        zf = g->zf;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ecx = 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ef848u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t loc_14;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        zf = g->zf;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ecx = 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102ef84du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t loc_14;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        zf = g->zf;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ecx = 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102ef852u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t loc_14;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        zf = g->zf;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ecx = 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102ef85au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t loc_14;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        zf = g->zf;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ecx = 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ef867u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t loc_14;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        zf = g->zf;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ecx = 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ef86fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t loc_14;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        zf = g->zf;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ecx = 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ef8feu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg1 + 0xf0u;
        (void)sp0;
        return 1;
    }
    case 0x102ef905u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg1 + 0xf0u;
        (void)sp0;
        return 1;
    }
    case 0x102ef90eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg1 + 0xf0u;
        (void)sp0;
        return 1;
    }
    case 0x102ef915u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg1 + 0xf0u;
        (void)sp0;
        return 1;
    }
    case 0x102ef920u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg1 + 0xf0u;
        (void)sp0;
        return 1;
    }
    case 0x102ef936u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ef93bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ef955u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ef95au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ef96du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ef977u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x102ef984u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x102ef989u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x102ef98du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ef996u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ef9a8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        zf = g->zf;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ef9bcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        zf = g->zf;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102ef619(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102ef619(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
