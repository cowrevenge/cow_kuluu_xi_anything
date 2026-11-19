/* f_0x102df604 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102df604(Guest* g)
{
    double d57;
    double d58;
    double d59;
    double d60;
    double d61;
    double d62;
    double d63;
    double d64;
    double d65;
    double d66;
    double d67;
    double d68;
    double d69;
    double d70;
    double d71;
    double d72;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_4;
    uint32_t loc_74;
    uint32_t loc_78;
    uint32_t loc_7c;
    uint32_t loc_8;
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t73;
    uint32_t t74;
    uint32_t t75;
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
    uint32_t t80;
    uint32_t t9;
    double x0;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 144u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102df61au: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_esi = g->esi; in_edi = g->edi; zf = g->zf; in_ebx = rd32(sp0 - 0x74u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x74u); goto E_102df61a;
    case 0x102df624u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_esi = g->esi; in_edi = g->edi; zf = g->zf; in_ebx = rd32(sp0 - 0x74u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x74u); goto E_102df624;
    case 0x102df63fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x7cu); in_esi = rd32(sp0 - 0x78u); in_ebx = rd32(sp0 - 0x74u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x74u); g->edi = rd32(sp0 - 0x7cu); g->esi = rd32(sp0 - 0x78u); goto E_102df63f;
    case 0x102df648u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x7cu); in_esi = rd32(sp0 - 0x78u); in_ebx = rd32(sp0 - 0x74u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x74u); g->edi = rd32(sp0 - 0x7cu); g->esi = rd32(sp0 - 0x78u); goto E_102df648;
    case 0x102df650u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x7cu); in_esi = rd32(sp0 - 0x78u); in_ebx = rd32(sp0 - 0x74u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x74u); g->edi = rd32(sp0 - 0x7cu); g->esi = rd32(sp0 - 0x78u); goto E_102df650;
    case 0x102df662u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x7cu); in_esi = rd32(sp0 - 0x78u); in_ebx = rd32(sp0 - 0x74u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x74u); g->edi = rd32(sp0 - 0x7cu); g->esi = rd32(sp0 - 0x78u); goto E_102df662;
    case 0x102df66bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x7cu); in_esi = rd32(sp0 - 0x78u); in_ebx = rd32(sp0 - 0x74u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x74u); g->edi = rd32(sp0 - 0x7cu); g->esi = rd32(sp0 - 0x78u); goto E_102df66b;
    case 0x102df677u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x7cu); in_esi = rd32(sp0 - 0x78u); in_ebx = rd32(sp0 - 0x74u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x74u); g->edi = rd32(sp0 - 0x7cu); g->esi = rd32(sp0 - 0x78u); goto E_102df677;
    case 0x102df686u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x7cu); in_esi = rd32(sp0 - 0x78u); in_ebx = rd32(sp0 - 0x74u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x74u); g->edi = rd32(sp0 - 0x7cu); g->esi = rd32(sp0 - 0x78u); goto E_102df686;
    case 0x102df692u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x7cu); in_esi = rd32(sp0 - 0x78u); in_ebx = rd32(sp0 - 0x74u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x74u); g->edi = rd32(sp0 - 0x7cu); g->esi = rd32(sp0 - 0x78u); goto E_102df692;
    case 0x102df696u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x7cu); in_esi = rd32(sp0 - 0x78u); in_ebx = rd32(sp0 - 0x74u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x74u); g->edi = rd32(sp0 - 0x7cu); g->esi = rd32(sp0 - 0x78u); goto E_102df696;
    case 0x102df69au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x7cu); in_esi = rd32(sp0 - 0x78u); in_ebx = rd32(sp0 - 0x74u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x74u); g->edi = rd32(sp0 - 0x7cu); g->esi = rd32(sp0 - 0x78u); goto E_102df69a;
    case 0x102df6b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x7cu); in_esi = rd32(sp0 - 0x78u); in_ebx = rd32(sp0 - 0x74u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x74u); g->edi = rd32(sp0 - 0x7cu); g->esi = rd32(sp0 - 0x78u); goto E_102df6b1;
    case 0x102df6bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x7cu); in_esi = rd32(sp0 - 0x78u); in_ebx = rd32(sp0 - 0x74u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x74u); g->edi = rd32(sp0 - 0x7cu); g->esi = rd32(sp0 - 0x78u); goto E_102df6bf;
    case 0x102df6c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x7cu); in_esi = rd32(sp0 - 0x78u); in_ebx = rd32(sp0 - 0x74u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x74u); g->edi = rd32(sp0 - 0x7cu); g->esi = rd32(sp0 - 0x78u); goto E_102df6c4;
    case 0x102df6ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x7cu); in_esi = rd32(sp0 - 0x78u); in_ebx = rd32(sp0 - 0x74u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x74u); g->edi = rd32(sp0 - 0x7cu); g->esi = rd32(sp0 - 0x78u); goto E_102df6ce;
    case 0x102df6dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x7cu); in_esi = rd32(sp0 - 0x78u); in_ebx = rd32(sp0 - 0x74u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x74u); g->edi = rd32(sp0 - 0x7cu); g->esi = rd32(sp0 - 0x78u); goto E_102df6df;
    case 0x102df6ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x7cu); in_esi = rd32(sp0 - 0x78u); in_ebx = rd32(sp0 - 0x74u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x74u); g->edi = rd32(sp0 - 0x7cu); g->esi = rd32(sp0 - 0x78u); goto E_102df6ec;
    case 0x102df6f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x7cu); in_esi = rd32(sp0 - 0x78u); in_ebx = rd32(sp0 - 0x74u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x74u); g->edi = rd32(sp0 - 0x7cu); g->esi = rd32(sp0 - 0x78u); goto E_102df6f9;
    case 0x102df6feu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x7cu); in_esi = rd32(sp0 - 0x78u); in_ebx = rd32(sp0 - 0x74u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x74u); g->edi = rd32(sp0 - 0x7cu); g->esi = rd32(sp0 - 0x78u); goto E_102df6fe;
    case 0x102df700u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x7cu); in_esi = rd32(sp0 - 0x78u); in_ebx = rd32(sp0 - 0x74u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x74u); g->edi = rd32(sp0 - 0x7cu); g->esi = rd32(sp0 - 0x78u); goto E_102df700;
    case 0x102df70cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x7cu); in_esi = rd32(sp0 - 0x78u); in_ebx = rd32(sp0 - 0x74u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x74u); g->edi = rd32(sp0 - 0x7cu); g->esi = rd32(sp0 - 0x78u); goto E_102df70c;
    case 0x102df713u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x7cu); in_esi = rd32(sp0 - 0x78u); in_ebx = rd32(sp0 - 0x74u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x74u); g->edi = rd32(sp0 - 0x7cu); g->esi = rd32(sp0 - 0x78u); goto E_102df713;
    case 0x102df71cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x7cu); in_esi = rd32(sp0 - 0x78u); in_ebx = rd32(sp0 - 0x74u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x74u); g->edi = rd32(sp0 - 0x7cu); g->esi = rd32(sp0 - 0x78u); goto E_102df71c;
    case 0x102df725u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x7cu); in_esi = rd32(sp0 - 0x78u); in_ebx = rd32(sp0 - 0x74u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x74u); g->edi = rd32(sp0 - 0x7cu); g->esi = rd32(sp0 - 0x78u); goto E_102df725;
    case 0x102df72eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x7cu); in_esi = rd32(sp0 - 0x78u); in_ebx = rd32(sp0 - 0x74u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x74u); g->edi = rd32(sp0 - 0x7cu); g->esi = rd32(sp0 - 0x78u); goto E_102df72e;
    case 0x102df737u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x7cu); in_esi = rd32(sp0 - 0x78u); in_ebx = rd32(sp0 - 0x74u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x74u); g->edi = rd32(sp0 - 0x7cu); g->esi = rd32(sp0 - 0x78u); goto E_102df737;
    case 0x102df740u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x7cu); in_esi = rd32(sp0 - 0x78u); in_ebx = rd32(sp0 - 0x74u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x74u); g->edi = rd32(sp0 - 0x7cu); g->esi = rd32(sp0 - 0x78u); goto E_102df740;
    case 0x102df749u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x7cu); in_esi = rd32(sp0 - 0x78u); in_ebx = rd32(sp0 - 0x74u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x74u); g->edi = rd32(sp0 - 0x7cu); g->esi = rd32(sp0 - 0x78u); goto E_102df749;
    case 0x102df752u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x7cu); in_esi = rd32(sp0 - 0x78u); in_ebx = rd32(sp0 - 0x74u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x74u); g->edi = rd32(sp0 - 0x7cu); g->esi = rd32(sp0 - 0x78u); goto E_102df752;
    case 0x102df757u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x7cu); in_esi = rd32(sp0 - 0x78u); in_ebx = rd32(sp0 - 0x74u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x74u); g->edi = rd32(sp0 - 0x7cu); g->esi = rd32(sp0 - 0x78u); goto E_102df757;
    case 0x102df75au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x7cu); in_esi = rd32(sp0 - 0x78u); in_ebx = rd32(sp0 - 0x74u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x74u); g->edi = rd32(sp0 - 0x7cu); g->esi = rd32(sp0 - 0x78u); goto E_102df75a;
    case 0x102df75fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x7cu); in_esi = rd32(sp0 - 0x78u); in_ebx = rd32(sp0 - 0x74u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x74u); g->edi = rd32(sp0 - 0x7cu); g->esi = rd32(sp0 - 0x78u); goto E_102df75f;
    case 0x102df762u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x7cu); in_esi = rd32(sp0 - 0x78u); in_ebx = rd32(sp0 - 0x74u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x74u); g->edi = rd32(sp0 - 0x7cu); g->esi = rd32(sp0 - 0x78u); goto E_102df762;
    case 0x102df767u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x7cu); in_esi = rd32(sp0 - 0x78u); in_ebx = rd32(sp0 - 0x74u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x74u); g->edi = rd32(sp0 - 0x7cu); g->esi = rd32(sp0 - 0x78u); goto E_102df767;
    case 0x102df76au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x7cu); in_esi = rd32(sp0 - 0x78u); in_ebx = rd32(sp0 - 0x74u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x74u); g->edi = rd32(sp0 - 0x7cu); g->esi = rd32(sp0 - 0x78u); goto E_102df76a;
    case 0x102df76du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x7cu); in_esi = rd32(sp0 - 0x78u); in_ebx = rd32(sp0 - 0x74u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x74u); g->edi = rd32(sp0 - 0x7cu); g->esi = rd32(sp0 - 0x78u); goto E_102df76d;
    case 0x102df776u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x7cu); in_esi = rd32(sp0 - 0x78u); in_ebx = rd32(sp0 - 0x74u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x74u); g->edi = rd32(sp0 - 0x7cu); g->esi = rd32(sp0 - 0x78u); goto E_102df776;
    case 0x102df77fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x7cu); in_esi = rd32(sp0 - 0x78u); in_ebx = rd32(sp0 - 0x74u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x74u); g->edi = rd32(sp0 - 0x7cu); g->esi = rd32(sp0 - 0x78u); goto E_102df77f;
    case 0x102df788u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x7cu); in_esi = rd32(sp0 - 0x78u); in_ebx = rd32(sp0 - 0x74u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x74u); g->edi = rd32(sp0 - 0x7cu); g->esi = rd32(sp0 - 0x78u); goto E_102df788;
    case 0x102df791u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x7cu); in_esi = rd32(sp0 - 0x78u); in_ebx = rd32(sp0 - 0x74u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x74u); g->edi = rd32(sp0 - 0x7cu); g->esi = rd32(sp0 - 0x78u); goto E_102df791;
    case 0x102df798u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102df798;
    case 0x102df79cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102df79c;
    case 0x102df7a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102df7a3;
    case 0x102df7c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_102df7c8;
    case 0x102df7dau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_102df7da;
    case 0x102df7deu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_20 = rd32(sp0 - 0x20u); goto E_102df7de;
    case 0x102df7e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_20 = rd32(sp0 - 0x20u); loc_8 = rd32(sp0 - 8u); goto E_102df7e8;
    case 0x102df7f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_20 = rd32(sp0 - 0x20u); loc_8 = rd32(sp0 - 8u); goto E_102df7f2;
    case 0x102df803u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_20 = rd32(sp0 - 0x20u); loc_8 = rd32(sp0 - 8u); goto E_102df803;
    case 0x102df81du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_102df81d;
    case 0x102df82cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_102df82c;
    case 0x102df82eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_102df82e;
    case 0x102df83au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_20 = rd32(sp0 - 0x20u); loc_8 = rd32(sp0 - 8u); goto E_102df83a;
    case 0x102df856u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_102df856;
    case 0x102df865u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_102df865;
    case 0x102df867u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_102df867;
    case 0x102df87eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_18 = rd32(sp0 - 0x18u); loc_8 = rd32(sp0 - 8u); goto E_102df87e;
    case 0x102df888u: ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); goto E_102df888;
    case 0x102df892u: ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); goto E_102df892;
    case 0x102df8a0u: ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); goto E_102df8a0;
    case 0x102df8a8u: ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); goto E_102df8a8;
    case 0x102df8b4u: ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); goto E_102df8b4;
    case 0x102df8c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); goto E_102df8c9;
    case 0x102df8e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102df8e1;
    case 0x102df8efu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102df8ef;
    case 0x102df900u: eax = g->eax; ecx = g->ecx; self = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102df900;
    case 0x102df90cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_24 = rd32(sp0 - 0x24u); x0 = ST(0); goto E_102df90c;
    case 0x102df9b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_24 = rd32(sp0 - 0x24u); x0 = ST(0); goto E_102df9b4;
    case 0x102df9b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_24 = rd32(sp0 - 0x24u); goto E_102df9b6;
    case 0x102df9dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); goto E_102df9db;
    case 0x102df9e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); goto E_102df9e6;
    case 0x102df9f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x7cu); in_esi = rd32(sp0 - 0x78u); in_ebx = rd32(sp0 - 0x74u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x74u); g->edi = rd32(sp0 - 0x7cu); g->esi = rd32(sp0 - 0x78u); goto E_102df9f3;
    case 0x102df9f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_30 = rd32(sp0 - 0x30u); loc_20 = rd32(sp0 - 0x20u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102df9f8;
    case 0x102df9fau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_30 = rd32(sp0 - 0x30u); loc_20 = rd32(sp0 - 0x20u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102df9fa;
    default: break;
    }
#endif

    COW_AT(102df604)
    wr32(sp0 - 8u, 0xffffffffu);
    wr32(sp0 - 0xcu, COW_IMG(0x1032821bu));
    wr32(sp0 - 0x10u, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0x10u);
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x14u, COW_IMG(0x102df60eu));
    wr32(sp0 - 0x74u, in_ebx);
    if (rd8(self + 8u) == 5u)
    {
        loc_10 = t1;
        goto L_102df624;
    }
    loc_10 = t1;
    COW_AT(102df61a)
    eax = 0x80004005u;
    edx = in_edx;
    esi = in_esi;
    edi = in_edi;
    loc_4 = in_ebp;
    loc_74 = in_ebx;
L_102df9fa: ;
    COW_AT(102df9fa)
    wr32(g->fs_base, loc_10);
    g->ebx = loc_74;
    g->esi = esi;
    g->edi = edi;
    g->ebp = loc_4;
    g->edx = edx;
    return eax;
L_102df624: ;
    COW_AT(102df624)
    wr32(sp0 - 0x78u, in_esi);
    wr32(sp0 - 0x7cu, in_edi);
    t2 = rd32(rd32(self) + 0x1058u);
    if (rd32(rd32(self + 4u) + 0x1058u) == t2 >> 1u)
    {
        eax = t2;
        ecx = rd32(self);
        edx = rd32(self + 4u);
        goto L_102df650;
    }
    eax = t2;
    ecx = rd32(self);
    edx = rd32(self + 4u);
    esi = rd32(rd32(self + 4u) + 0x1058u);
    COW_AT(102df63f)
    if (esi != 1u) goto L_102df9f3;
    COW_AT(102df648)
    if (eax != esi) goto L_102df9f3;
L_102df650: ;
    COW_AT(102df650)
    if (rd32(edx + 0x105cu) == rd32(ecx + 0x105cu) >> 1u) goto L_102df677;
    esi = rd32(edx + 0x105cu);
    COW_AT(102df662)
    if (esi != 1u) goto L_102df9f3;
    COW_AT(102df66b)
    if (rd32(ecx + 0x105cu) != esi) goto L_102df9f3;
L_102df677: ;
    COW_AT(102df677)
    if (rd32(edx + 0x1060u) != 1u) goto L_102df9f3;
    COW_AT(102df686)
    if (rd32(ecx + 0x1060u) != 1u) goto L_102df9f3;
    COW_AT(102df692)
    if (eax > 1u)
    {
    COW_AT(102df696)
        if (eax & 1u)
        {
    COW_AT(102df69a)
            wr32(ecx + 0x1058u, eax & 0xfffffffeu);
            wr32(rd32(self) + 0x1064u, rd32(rd32(self) + 0x1064u) - rd32(rd32(self) + 0x1068u));
        }
    }
    COW_AT(102df6b1)
    if (rd32(rd32(self) + 0x105cu) <= 1u)
    {
        ecx = rd32(self) + 0x105cu;
    }
    else
    {
        eax = rd32(rd32(self) + 0x105cu);
        ecx = rd32(self) + 0x105cu;
    COW_AT(102df6bf)
        wr32(ecx, eax & 0xfffffffeu);
    }
    COW_AT(102df6c4)
    if ((rd8(self + 0xau) & 8u) != 0u)
    {
        loc_4 = in_ebp;
        loc_8 = 0xffffffffu;
        loc_74 = in_ebx;
        loc_78 = in_esi;
        loc_7c = in_edi;
        goto L_102df7a3;
    }
    COW_AT(102df6ce)
    if (rd32(rd32(self) + 4u) != rd32(rd32(self + 4u) + 4u))
    {
        ecx = rd32(rd32(self) + 4u);
        edx = rd32(self + 4u);
        loc_4 = in_ebp;
        loc_8 = 0xffffffffu;
        loc_74 = in_ebx;
        loc_78 = in_esi;
        loc_7c = in_edi;
        goto L_102df7a3;
    }
    eax = rd32(self);
    ecx = rd32(rd32(self) + 4u);
    edx = rd32(self + 4u);
    COW_AT(102df6df)
    if (rd32(eax + 0x1058u) < 2u)
    {
        loc_4 = in_ebp;
        loc_8 = 0xffffffffu;
        loc_74 = in_ebx;
        loc_78 = in_esi;
        loc_7c = in_edi;
        goto L_102df7a3;
    }
    COW_AT(102df6ec)
    if (rd32(eax + 0x105cu) < 2u)
    {
        loc_4 = in_ebp;
        loc_8 = 0xffffffffu;
        loc_74 = in_ebx;
        loc_78 = in_esi;
        loc_7c = in_edi;
        goto L_102df7a3;
    }
    COW_AT(102df6f9)
    if ((int32_t)ecx > 28) goto L_102df752;
    zf = ecx == 0x1cu;
    COW_AT(102df6fe)
    if (zf) goto L_102df77f;
    COW_AT(102df700)
    if (ecx - 0x14u > 7u)
    {
        ecx = ecx - 0x14u;
        loc_4 = in_ebp;
        loc_8 = 0xffffffffu;
        loc_74 = in_ebx;
        loc_78 = in_esi;
        loc_7c = in_edi;
        goto L_102df7a3;
    }
    ecx = ecx - 0x14u;
    COW_AT(102df70c)
    t3 = rd32(COW_IMG(0x102dfa07u) + ecx * 4u);
    switch (t3 - RD)
    {
    case 0x102df713u: goto L_102df713;
    case 0x102df71cu: goto L_102df71c;
    case 0x102df725u: goto L_102df725;
    case 0x102df72eu: goto L_102df72e;
    case 0x102df737u: goto L_102df737;
    case 0x102df740u: goto L_102df740;
    case 0x102df749u: goto L_102df749;
    case 0x102df7a3u: loc_4 = in_ebp; loc_8 = 0xffffffffu; loc_74 = in_ebx; loc_78 = in_esi; loc_7c = in_edi; goto L_102df7a3;
    default: rt_fatal(g, COW_IMG(0x102df70cu), "switch");
    }
    return 0;
L_102df713: ;
    COW_AT(102df713)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x7cu;
    t22 = cow_thiscall(g, COW_IMG(0x102de080u), self, 0);
    t23 = g->ecx;
    t24 = g->edx;
    eax = t22;
    ecx = t23;
    edx = t24;
L_102df798: ;
    COW_AT(102df798)
    if ((int32_t)eax < 0)
    {
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_78 = rd32(sp0 - 0x78u);
        loc_7c = rd32(sp0 - 0x7cu);
        goto L_102df7a3;
    }
    COW_AT(102df79c)
    eax = 0u;
    loc_4 = rd32(sp0 - 4u);
    loc_10 = rd32(sp0 - 0x10u);
    loc_74 = rd32(sp0 - 0x74u);
    loc_78 = rd32(sp0 - 0x78u);
    loc_7c = rd32(sp0 - 0x7cu);
L_102df9f8: ;
    COW_AT(102df9f8)
    esi = loc_78;
    edi = loc_7c;
    goto L_102df9fa;
L_102df71c: ;
    COW_AT(102df71c)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x7cu;
    t19 = cow_thiscall(g, COW_IMG(0x102de36eu), self, 0);
    t20 = g->ecx;
    t21 = g->edx;
    eax = t19;
    ecx = t20;
    edx = t21;
    goto L_102df798;
L_102df725: ;
    COW_AT(102df725)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t16 = cow_bridge_indirect(g, COW_IMG(0x102de39fu), 0u, 23u, (const uint32_t[]){in_edi, in_esi, in_ebx, rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u)}, self, g->edx, g->eax, 92u);
    t17 = g->ecx;
    t18 = g->edx;
    eax = t16;
    ecx = t17;
    edx = t18;
    goto L_102df798;
L_102df72e: ;
    COW_AT(102df72e)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t13 = cow_bridge_indirect(g, COW_IMG(0x102de4efu), 0u, 19u, (const uint32_t[]){in_edi, in_esi, in_ebx, rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u)}, self, g->edx, g->eax, 76u);
    t14 = g->ecx;
    t15 = g->edx;
    eax = t13;
    ecx = t14;
    edx = t15;
    goto L_102df798;
L_102df737: ;
    COW_AT(102df737)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t10 = cow_bridge_indirect(g, COW_IMG(0x102de613u), 0u, 23u, (const uint32_t[]){in_edi, in_esi, in_ebx, rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u)}, self, g->edx, g->eax, 92u);
    t11 = g->ecx;
    t12 = g->edx;
    eax = t10;
    ecx = t11;
    edx = t12;
    goto L_102df798;
L_102df740: ;
    COW_AT(102df740)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t7 = cow_bridge_indirect(g, COW_IMG(0x102de762u), 0u, 23u, (const uint32_t[]){in_edi, in_esi, in_ebx, rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u)}, self, g->edx, g->eax, 92u);
    t8 = g->ecx;
    t9 = g->edx;
    eax = t7;
    ecx = t8;
    edx = t9;
    goto L_102df798;
L_102df749: ;
    COW_AT(102df749)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t4 = cow_bridge_indirect(g, COW_IMG(0x102de8b5u), 0u, 21u, (const uint32_t[]){in_edi, in_esi, in_ebx, rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu)}, self, g->edx, g->eax, 84u);
    t5 = g->ecx;
    t6 = g->edx;
    eax = t4;
    ecx = t5;
    edx = t6;
    goto L_102df798;
L_102df752: ;
    COW_AT(102df752)
    if (ecx == 0x1du) goto L_102df791;
    ecx = ecx - 0x1du;
    COW_AT(102df757)
    if (ecx == 1u) goto L_102df788;
    ecx = ecx - 1u;
    COW_AT(102df75a)
    if (ecx == 0xau)
    {
        ecx = ecx - 0xau;
        loc_4 = in_ebp;
        loc_8 = 0xffffffffu;
        loc_74 = in_ebx;
        loc_78 = in_esi;
        loc_7c = in_edi;
        goto L_102df7a3;
    }
    ecx = ecx - 0xau;
    COW_AT(102df75f)
    if (ecx == 1u)
    {
        ecx = ecx - 1u;
        loc_4 = in_ebp;
        loc_8 = 0xffffffffu;
        loc_74 = in_ebx;
        loc_78 = in_esi;
        loc_7c = in_edi;
        goto L_102df7a3;
    }
    ecx = ecx - 1u;
    COW_AT(102df762)
    if (ecx == 9u) goto L_102df77f;
    ecx = ecx - 9u;
    COW_AT(102df767)
    if (ecx == 1u) goto L_102df776;
    ecx = ecx - 1u;
    COW_AT(102df76a)
    if (ecx != 1u)
    {
        ecx = ecx - 1u;
        loc_4 = in_ebp;
        loc_8 = 0xffffffffu;
        loc_74 = in_ebx;
        loc_78 = in_esi;
        loc_7c = in_edi;
        goto L_102df7a3;
    }
    COW_AT(102df76d)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t25 = cow_bridge_indirect(g, COW_IMG(0x102dee54u), 0u, 21u, (const uint32_t[]){in_edi, in_esi, in_ebx, rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu)}, self, g->edx, g->eax, 84u);
    t26 = g->ecx;
    t27 = g->edx;
    eax = t25;
    ecx = t26;
    edx = t27;
    goto L_102df798;
L_102df776: ;
    COW_AT(102df776)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t28 = cow_bridge_indirect(g, COW_IMG(0x102ded08u), 0u, 21u, (const uint32_t[]){in_edi, in_esi, in_ebx, rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu)}, self, g->edx, g->eax, 84u);
    t29 = g->ecx;
    t30 = g->edx;
    eax = t28;
    ecx = t29;
    edx = t30;
    goto L_102df798;
L_102df77f: ;
    COW_AT(102df77f)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x7cu;
    t31 = cow_thiscall(g, COW_IMG(0x102de9f4u), self, 0);
    t32 = g->ecx;
    t33 = g->edx;
    eax = t31;
    ecx = t32;
    edx = t33;
    goto L_102df798;
L_102df788: ;
    COW_AT(102df788)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t34 = cow_bridge_indirect(g, COW_IMG(0x102debdbu), 0u, 19u, (const uint32_t[]){in_edi, in_esi, in_ebx, rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u)}, self, g->edx, g->eax, 76u);
    t35 = g->ecx;
    t36 = g->edx;
    eax = t34;
    ecx = t35;
    edx = t36;
    goto L_102df798;
L_102df791: ;
    COW_AT(102df791)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t37 = cow_bridge_indirect(g, COW_IMG(0x102dea8fu), 0u, 21u, (const uint32_t[]){in_edi, in_esi, in_ebx, rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu)}, self, g->edx, g->eax, 84u);
    t38 = g->ecx;
    t39 = g->edx;
    eax = t37;
    ecx = t38;
    edx = t39;
    goto L_102df798;
L_102df7a3: ;
    COW_AT(102df7a3)
    t40 = rd32(rd32(self + 4u) + 0x1058u);
    wr32(sp0 - 0x80u, t40 << 4u);
    g->eax = t40 << 4u;
    g->esp = sp0 - 0x74u;
    t41 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, t40 << 4u, loc_7c, loc_78);
    t42 = g->edx;
    wr32(sp0 - 0x30u, t41);
    wr32(sp0 - 8u, 0u);
    if (t41 == 0u)
    {
        ecx = rd32(sp0 - 0x80u);
        edx = t42;
    COW_AT(102df7da)
        wr32(sp0 - 0x20u, 0u);
        loc_20 = 0u;
    }
    else
    {
        eax = t41;
        ecx = rd32(sp0 - 0x80u);
        edx = t42;
        esi = t40;
        loc_30 = t41;
    COW_AT(102df7c8)
        wr32(sp0 - 0x80u, COW_IMG(0x102d2a17u));
        wr32(sp0 - 0x84u, esi);
        wr32(sp0 - 0x88u, 0x10u);
        wr32(sp0 - 0x8cu, eax);
        g->ecx = ecx;
        g->esp = sp0 - 0x7cu;
        cow_call_regs(g, COW_IMG(0x102d31edu), g->eax, g->ecx, edx, 0, 4, eax, 0x10u, esi, COW_IMG(0x102d2a17u));
        t43 = g->ecx;
        t44 = g->edx;
        t45 = rd32(sp0 - 0x30u);
        wr32(sp0 - 0x20u, t45);
        ecx = t43;
        edx = t44;
        loc_20 = t45;
    }
    COW_AT(102df7de)
    wr32(sp0 - 8u, 0xffffffffu);
    if (loc_20 != 0u)
    {
    COW_AT(102df7f2)
        if (rd32(rd32(self) + 0x105cu) != 1u)
        {
            esi = rd32(rd32(self) + 0x1058u);
    COW_AT(102df83a)
            t50 = esi << 1u << 4u;
            wr32(sp0 - 0x80u, t50);
            g->eax = t50;
            g->esp = sp0 - 0x74u;
            t51 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, t50, rd32(sp0 - 0x7cu), rd32(sp0 - 0x78u));
            t52 = g->edx;
            wr32(sp0 - 0x30u, t51);
            wr32(sp0 - 8u, 2u);
            if (t51 == 0u)
            {
                edx = t52;
    COW_AT(102df865)
                ecx = 0u;
            }
            else
            {
                eax = t51;
                ecx = rd32(sp0 - 0x80u);
                edx = t52;
                esi = esi << 1u;
                loc_30 = t51;
    COW_AT(102df856)
                wr32(sp0 - 0x80u, COW_IMG(0x102d2a17u));
                wr32(sp0 - 0x84u, esi);
                wr32(sp0 - 0x88u, 0x10u);
                wr32(sp0 - 0x8cu, eax);
                g->esp = sp0 - 0x7cu;
                cow_call_regs(g, COW_IMG(0x102d31edu), g->eax, g->ecx, edx, 0, 4, eax, 0x10u, esi, COW_IMG(0x102d2a17u));
                t53 = g->edx;
                ecx = rd32(sp0 - 0x30u);
                edx = t53;
            }
    COW_AT(102df867)
            wr32(sp0 - 8u, 0xffffffffu);
            wr32(sp0 - 0x28u, ecx);
            wr32(sp0 - 0x18u, ecx);
            eax = ecx + rd32(rd32(self) + 0x1058u) * 0x10u;
            loc_28 = ecx;
            loc_18 = ecx;
        }
        else
        {
            esi = rd32(rd32(self) + 0x1058u);
    COW_AT(102df803)
            wr32(sp0 - 0x80u, esi << 4u);
            g->eax = esi << 4u;
            g->esp = sp0 - 0x74u;
            t46 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, esi << 4u, rd32(sp0 - 0x7cu), rd32(sp0 - 0x78u));
            t47 = g->edx;
            wr32(sp0 - 0x30u, t46);
            wr32(sp0 - 8u, 1u);
            if (t46 == 0u)
            {
                ecx = rd32(sp0 - 0x80u);
                edx = t47;
    COW_AT(102df82c)
                eax = 0u;
            }
            else
            {
                eax = t46;
                ecx = rd32(sp0 - 0x80u);
                edx = t47;
                loc_30 = t46;
    COW_AT(102df81d)
                wr32(sp0 - 0x80u, COW_IMG(0x102d2a17u));
                wr32(sp0 - 0x84u, esi);
                wr32(sp0 - 0x88u, 0x10u);
                wr32(sp0 - 0x8cu, eax);
                g->ecx = ecx;
                g->esp = sp0 - 0x7cu;
                cow_call_regs(g, COW_IMG(0x102d31edu), g->eax, g->ecx, edx, 0, 4, eax, 0x10u, esi, COW_IMG(0x102d2a17u));
                t48 = g->ecx;
                t49 = g->edx;
                eax = rd32(sp0 - 0x30u);
                ecx = t48;
                edx = t49;
            }
    COW_AT(102df82e)
            wr32(sp0 - 8u, 0xffffffffu);
            wr32(sp0 - 0x28u, eax);
            wr32(sp0 - 0x18u, eax);
            loc_28 = eax;
            loc_18 = eax;
        }
    COW_AT(102df87e)
        wr32(sp0 - 0x14u, eax);
        if (loc_28 != 0u)
        {
            loc_14 = eax;
    COW_AT(102df892)
            if (rd32(rd32(self) + 0x1058u) != 1u)
            {
                ecx = loc_18;
    COW_AT(102df8a8)
                wr32(sp0 - 0x2cu, ecx + 0x10u);
                loc_2c = ecx + 0x10u;
                ecx = loc_14 + 0x10u;
            }
            else
            {
                ecx = loc_18;
    COW_AT(102df8a0)
                wr32(sp0 - 0x2cu, ecx);
                loc_2c = ecx;
                ecx = loc_14;
            }
    COW_AT(102df8b4)
            wr32(sp0 - 0x30u, ecx);
            wr32(sp0 - 0x1cu, 0u);
            if (rd32(rd32(self + 4u) + 0x105cu) == 0u)
            {
                eax = 0u;
                ecx = rd32(self + 4u);
                goto L_102df9db;
            }
            loc_30 = ecx;
            loc_1c = 0u;
L_102df8c9: ;
    COW_AT(102df8c9)
            wr32(sp0 - 0x80u, loc_18);
            wr32(sp0 - 0x84u, 0u);
            wr32(sp0 - 0x88u, loc_1c * 2u);
            g->edx = edx;
            g->esp = sp0 - 0x7cu;
            cow_thiscall(g, rd32(rd32(rd32(self)) + 4u), rd32(self), 3, loc_1c * 2u, 0u, loc_18);
            t54 = g->edx;
            if (rd32(sp0 - 0x14u) != loc_18)
            {
                edx = t54;
                esi = loc_1c * 2u;
    COW_AT(102df8e1)
                t55 = rd32(sp0 - 0x14u);
                wr32(sp0 - 0x80u, t55);
                wr32(sp0 - 0x84u, 0u);
                wr32(sp0 - 0x88u, esi + 1u);
                g->esp = sp0 - 0x7cu;
                cow_thiscall(g, rd32(rd32(rd32(self)) + 4u), rd32(self), 3, esi + 1u, 0u, t55);
            }
    COW_AT(102df8ef)
            if (rd32(rd32(self + 4u) + 0x1058u) == 0u)
            {
                edx = 0u;
            }
            else
            {
    COW_AT(102df900)
                t56 = rd32(sp0 - 0x20u);
                wr32(sp0 - 0x24u, t56);
                edx = 0u;
                loc_24 = t56;
                x0 = (double)rdf32(COW_IMG(0x10329ce4u));
L_102df90c: ;
    COW_AT(102df90c)
                d57 = fr(g, (double)rdf32(edx * 0x20u + rd32(sp0 - 0x2cu)) + (double)rdf32(edx * 0x20u + rd32(sp0 - 0x18u)));
                wr32(sp0 - 0x24u, loc_24 + 0x10u);
                d58 = fr(g, (double)rdf32(edx * 0x20u + rd32(sp0 - 0x2cu) + 8u) + (double)rdf32(edx * 0x20u + rd32(sp0 - 0x18u) + 8u));
                d59 = fr(g, (double)rdf32(edx * 0x20u + rd32(sp0 - 0x2cu) + 4u) + (double)rdf32(edx * 0x20u + rd32(sp0 - 0x18u) + 4u));
                wrf32(sp0 - 0x48u, (float)(double)(float)d58);
                d60 = fr(g, (double)rdf32(edx * 0x20u + rd32(sp0 - 0x2cu) + 0xcu) + (double)rdf32(edx * 0x20u + rd32(sp0 - 0x18u) + 0xcu));
                wrf32(sp0 - 0x44u, (float)(double)(float)d60);
                d61 = fr(g, d57 + (double)rdf32(edx * 0x20u + rd32(sp0 - 0x14u)));
                wrf32(sp0 - 0x60u, (float)(double)(float)d61);
                d62 = fr(g, (double)(float)d60 + (double)rdf32(edx * 0x20u + rd32(sp0 - 0x14u) + 0xcu));
                d63 = fr(g, (double)(float)d58 + (double)rdf32(edx * 0x20u + rd32(sp0 - 0x14u) + 8u));
                d64 = fr(g, d59 + (double)rdf32(edx * 0x20u + rd32(sp0 - 0x14u) + 4u));
                wrf32(sp0 - 0x54u, (float)(double)(float)d62);
                d65 = fr(g, (double)(float)d61 + (double)rdf32(edx * 0x20u + rd32(sp0 - 0x30u)));
                wrf32(sp0 - 0x70u, (float)(double)(float)d65);
                d66 = fr(g, d64 + (double)rdf32(edx * 0x20u + rd32(sp0 - 0x30u) + 4u));
                wrf32(sp0 - 0x6cu, (float)(double)(float)d66);
                d67 = fr(g, (double)(float)d62 + (double)rdf32(edx * 0x20u + rd32(sp0 - 0x30u) + 0xcu));
                d68 = fr(g, d63 + (double)rdf32(edx * 0x20u + rd32(sp0 - 0x30u) + 8u));
                d69 = (double)(float)fr(g, (double)(float)d65 * x0);
                wrf32(sp0 - 0x40u, (float)d69);
                d70 = (double)(float)fr(g, (double)(float)d66 * x0);
                wrf32(sp0 - 0x3cu, (float)d70);
                d71 = (double)(float)fr(g, d68 * x0);
                wrf32(sp0 - 0x38u, (float)d71);
                d72 = (double)(float)fr(g, d67 * x0);
                wrf32(sp0 - 0x34u, (float)d72);
                esi = sp0 - 0x40u;
                edi = loc_24;
                wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
                wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
                wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
                wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
                if (edx + 1u < rd32(rd32(self + 4u) + 0x1058u))
                {
                    edx = edx + 1u;
                    loc_24 = loc_24 + 0x10u;
                    goto L_102df90c;
                }
                edx = edx + 1u;
    COW_AT(102df9b4)
            }
    COW_AT(102df9b6)
            t73 = rd32(sp0 - 0x20u);
            wr32(sp0 - 0x80u, t73);
            wr32(sp0 - 0x84u, 0u);
            t74 = rd32(sp0 - 0x1cu);
            wr32(sp0 - 0x88u, t74);
            g->edx = edx;
            g->esp = sp0 - 0x7cu;
            cow_thiscall(g, rd32(rd32(rd32(self + 4u)) + 8u), rd32(self + 4u), 3, t74, 0u, t73);
            t75 = g->edx;
            t76 = rd32(sp0 - 0x1cu) + 1u;
            wr32(sp0 - 0x1cu, t76);
            if (t76 < rd32(rd32(self + 4u) + 0x105cu))
            {
                edx = t75;
                loc_30 = rd32(sp0 - 0x30u);
                loc_28 = rd32(sp0 - 0x28u);
                loc_18 = rd32(sp0 - 0x18u);
                loc_14 = rd32(sp0 - 0x14u);
                loc_2c = rd32(sp0 - 0x2cu);
                loc_1c = t76;
                goto L_102df8c9;
            }
            eax = rd32(self + 4u);
            ecx = t76;
            edx = t75;
            loc_28 = rd32(sp0 - 0x28u);
L_102df9db: ;
    COW_AT(102df9db)
            wr32(sp0 - 0x80u, loc_28);
            g->eax = eax;
            g->esp = sp0 - 0x7cu;
            t77 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, loc_28);
            t78 = g->edx;
            eax = t77;
            ecx = rd32(sp0 - 0x80u);
            edx = t78;
            esi = 0u;
        }
        else
        {
    COW_AT(102df888)
            eax = 0u;
            esi = 0x8007000eu;
        }
    COW_AT(102df9e6)
        t79 = rd32(sp0 - 0x20u);
        wr32(sp0 - 0x80u, t79);
        g->esp = sp0 - 0x7cu;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, t79);
        t80 = g->edx;
        eax = esi;
        edx = t80;
        loc_4 = rd32(sp0 - 4u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_78 = rd32(sp0 - 0x78u);
        loc_7c = rd32(sp0 - 0x7cu);
    }
    else
    {
    COW_AT(102df7e8)
        eax = 0x8007000eu;
        loc_4 = rd32(sp0 - 4u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_78 = rd32(sp0 - 0x78u);
        loc_7c = rd32(sp0 - 0x7cu);
    }
    goto L_102df9f8;
L_102df9f3: ;
    COW_AT(102df9f3)
    eax = 0x80004005u;
    loc_4 = in_ebp;
    loc_74 = in_ebx;
    loc_78 = in_esi;
    loc_7c = in_edi;
    goto L_102df9f8;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102df604(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102df61au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        in_ebx = rd32(sp0 - 0x74u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x74u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df624u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        in_ebx = rd32(sp0 - 0x74u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x74u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102df63fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x7cu);
        in_esi = rd32(sp0 - 0x78u);
        in_ebx = rd32(sp0 - 0x74u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102df648u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x7cu);
        in_esi = rd32(sp0 - 0x78u);
        in_ebx = rd32(sp0 - 0x74u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102df650u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x7cu);
        in_esi = rd32(sp0 - 0x78u);
        in_ebx = rd32(sp0 - 0x74u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102df662u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x7cu);
        in_esi = rd32(sp0 - 0x78u);
        in_ebx = rd32(sp0 - 0x74u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102df66bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x7cu);
        in_esi = rd32(sp0 - 0x78u);
        in_ebx = rd32(sp0 - 0x74u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102df677u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x7cu);
        in_esi = rd32(sp0 - 0x78u);
        in_ebx = rd32(sp0 - 0x74u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102df686u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x7cu);
        in_esi = rd32(sp0 - 0x78u);
        in_ebx = rd32(sp0 - 0x74u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        g->esi = 1u;
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102df692u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x7cu);
        in_esi = rd32(sp0 - 0x78u);
        in_ebx = rd32(sp0 - 0x74u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        g->esi = 1u;
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102df696u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x7cu);
        in_esi = rd32(sp0 - 0x78u);
        in_ebx = rd32(sp0 - 0x74u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        g->esi = 1u;
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102df69au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x7cu);
        in_esi = rd32(sp0 - 0x78u);
        in_ebx = rd32(sp0 - 0x74u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        g->esi = 1u;
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102df6b1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x7cu);
        in_esi = rd32(sp0 - 0x78u);
        in_ebx = rd32(sp0 - 0x74u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        g->esi = 1u;
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102df6bfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x7cu);
        in_esi = rd32(sp0 - 0x78u);
        in_ebx = rd32(sp0 - 0x74u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102df6c4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x7cu);
        in_esi = rd32(sp0 - 0x78u);
        in_ebx = rd32(sp0 - 0x74u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102df6ceu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x7cu);
        in_esi = rd32(sp0 - 0x78u);
        in_ebx = rd32(sp0 - 0x74u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102df6dfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x7cu);
        in_esi = rd32(sp0 - 0x78u);
        in_ebx = rd32(sp0 - 0x74u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102df6ecu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x7cu);
        in_esi = rd32(sp0 - 0x78u);
        in_ebx = rd32(sp0 - 0x74u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102df6f9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x7cu);
        in_esi = rd32(sp0 - 0x78u);
        in_ebx = rd32(sp0 - 0x74u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102df6feu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x7cu);
        in_esi = rd32(sp0 - 0x78u);
        in_ebx = rd32(sp0 - 0x74u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102df700u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x7cu);
        in_esi = rd32(sp0 - 0x78u);
        in_ebx = rd32(sp0 - 0x74u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102df70cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x7cu);
        in_esi = rd32(sp0 - 0x78u);
        in_ebx = rd32(sp0 - 0x74u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102df713u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x7cu);
        in_esi = rd32(sp0 - 0x78u);
        in_ebx = rd32(sp0 - 0x74u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102df71cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x7cu);
        in_esi = rd32(sp0 - 0x78u);
        in_ebx = rd32(sp0 - 0x74u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102df725u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x7cu);
        in_esi = rd32(sp0 - 0x78u);
        in_ebx = rd32(sp0 - 0x74u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102df72eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x7cu);
        in_esi = rd32(sp0 - 0x78u);
        in_ebx = rd32(sp0 - 0x74u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102df737u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x7cu);
        in_esi = rd32(sp0 - 0x78u);
        in_ebx = rd32(sp0 - 0x74u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102df740u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x7cu);
        in_esi = rd32(sp0 - 0x78u);
        in_ebx = rd32(sp0 - 0x74u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102df749u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x7cu);
        in_esi = rd32(sp0 - 0x78u);
        in_ebx = rd32(sp0 - 0x74u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102df752u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x7cu);
        in_esi = rd32(sp0 - 0x78u);
        in_ebx = rd32(sp0 - 0x74u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102df757u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x7cu);
        in_esi = rd32(sp0 - 0x78u);
        in_ebx = rd32(sp0 - 0x74u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102df75au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x7cu);
        in_esi = rd32(sp0 - 0x78u);
        in_ebx = rd32(sp0 - 0x74u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102df75fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x7cu);
        in_esi = rd32(sp0 - 0x78u);
        in_ebx = rd32(sp0 - 0x74u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102df762u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x7cu);
        in_esi = rd32(sp0 - 0x78u);
        in_ebx = rd32(sp0 - 0x74u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102df767u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x7cu);
        in_esi = rd32(sp0 - 0x78u);
        in_ebx = rd32(sp0 - 0x74u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102df76au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x7cu);
        in_esi = rd32(sp0 - 0x78u);
        in_ebx = rd32(sp0 - 0x74u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102df76du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x7cu);
        in_esi = rd32(sp0 - 0x78u);
        in_ebx = rd32(sp0 - 0x74u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102df776u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x7cu);
        in_esi = rd32(sp0 - 0x78u);
        in_ebx = rd32(sp0 - 0x74u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102df77fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x7cu);
        in_esi = rd32(sp0 - 0x78u);
        in_ebx = rd32(sp0 - 0x74u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102df788u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x7cu);
        in_esi = rd32(sp0 - 0x78u);
        in_ebx = rd32(sp0 - 0x74u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102df791u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x7cu);
        in_esi = rd32(sp0 - 0x78u);
        in_ebx = rd32(sp0 - 0x74u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102df798u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df79cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df7a3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_74;
        uint32_t loc_78;
        uint32_t loc_7c;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df7c8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        g->edi = COW_IMG(0x102d2a17u);
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102df7dau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        g->edi = COW_IMG(0x102d2a17u);
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102df7deu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_20;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        g->edi = COW_IMG(0x102d2a17u);
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102df7e8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_30;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df7f2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_20;
        uint32_t loc_30;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        g->edi = COW_IMG(0x102d2a17u);
        (void)sp0;
        return 1;
    }
    case 0x102df803u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_20;
        uint32_t loc_30;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        g->edi = COW_IMG(0x102d2a17u);
        (void)sp0;
        return 1;
    }
    case 0x102df81du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        g->edi = COW_IMG(0x102d2a17u);
        wr32(sp0 - 8u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x102df82cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x102df82eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x102df83au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_20;
        uint32_t loc_30;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        g->edi = COW_IMG(0x102d2a17u);
        (void)sp0;
        return 1;
    }
    case 0x102df856u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        g->edi = COW_IMG(0x102d2a17u);
        wr32(sp0 - 8u, 2u);
        (void)sp0;
        return 1;
    }
    case 0x102df865u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 2u);
        (void)sp0;
        return 1;
    }
    case 0x102df867u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 2u);
        (void)sp0;
        return 1;
    }
    case 0x102df87eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_18;
        uint32_t loc_28;
        uint32_t loc_30;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df888u:
    {
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_28;
        uint32_t loc_30;
        uint32_t loc_8;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x7cu;
        g->eax = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df892u:
    {
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_28;
        uint32_t loc_30;
        uint32_t loc_8;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x7cu;
        g->eax = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df8a0u:
    {
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_28;
        uint32_t loc_30;
        uint32_t loc_8;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x7cu;
        g->eax = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df8a8u:
    {
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_28;
        uint32_t loc_30;
        uint32_t loc_8;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x7cu;
        g->eax = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df8b4u:
    {
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_8;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x7cu;
        g->eax = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df8c9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df8e1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df8efu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df900u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x7cu;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df90cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_24;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_24 = rd32(sp0 - 0x24u);
        x0 = ST(0);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df9b4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_24;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_24 = rd32(sp0 - 0x24u);
        x0 = ST(0);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df9b6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_24;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df9dbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df9e6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_28;
        uint32_t loc_30;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df9f3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x7cu);
        in_esi = rd32(sp0 - 0x78u);
        in_ebx = rd32(sp0 - 0x74u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df9f8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_20;
        uint32_t loc_30;
        uint32_t loc_4;
        uint32_t loc_74;
        uint32_t loc_78;
        uint32_t loc_7c;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102df9fau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_20;
        uint32_t loc_30;
        uint32_t loc_4;
        uint32_t loc_74;
        uint32_t loc_78;
        uint32_t loc_7c;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x74u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102df604(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102df604(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
