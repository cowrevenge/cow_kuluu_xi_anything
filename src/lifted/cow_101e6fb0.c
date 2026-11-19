/* f_0x101e6fb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101e6fb0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_18;
    uint32_t loc_1c;
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
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101e6ff4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); self = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e6ff4;
    case 0x101e7003u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); self = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e7003;
    case 0x101e700du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); self = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e700d;
    case 0x101e701cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); self = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e701c;
    case 0x101e7026u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); self = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e7026;
    case 0x101e7035u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); self = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e7035;
    case 0x101e703du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e703d;
    case 0x101e7049u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e7049;
    case 0x101e704fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e704f;
    case 0x101e7057u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e7057;
    case 0x101e705du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e705d;
    case 0x101e7067u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e7067;
    case 0x101e7072u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e7072;
    case 0x101e7086u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e7086;
    case 0x101e7095u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e7095;
    case 0x101e709fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e709f;
    case 0x101e70aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e70ae;
    case 0x101e70b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e70b3;
    case 0x101e70bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e70bf;
    case 0x101e70c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e70c5;
    case 0x101e70cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e70cd;
    case 0x101e70d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e70d3;
    case 0x101e70ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e70dd;
    case 0x101e70e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e70e8;
    case 0x101e70f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e70f2;
    case 0x101e7101u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e7101;
    case 0x101e710bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e710b;
    case 0x101e711au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e711a;
    case 0x101e7124u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e7124;
    case 0x101e7133u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e7133;
    case 0x101e7138u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e7138;
    case 0x101e7144u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e7144;
    case 0x101e714eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e714e;
    case 0x101e7153u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e7153;
    case 0x101e715bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e715b;
    case 0x101e7161u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e7161;
    case 0x101e716bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e716b;
    case 0x101e7176u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e7176;
    case 0x101e718au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e718a;
    case 0x101e7199u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e7199;
    case 0x101e71a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e71a3;
    case 0x101e71b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e71b2;
    case 0x101e71b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e71b7;
    case 0x101e71c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e71c3;
    case 0x101e71cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e71cb;
    case 0x101e71d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e71d3;
    case 0x101e71dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e71db;
    case 0x101e71e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e71e1;
    case 0x101e71e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e71e9;
    case 0x101e71efu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e71ef;
    case 0x101e71f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e71f3;
    case 0x101e71f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e71f5;
    case 0x101e71ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e71ff;
    case 0x101e720au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e720a;
    case 0x101e7215u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e7215;
    case 0x101e7225u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e7225;
    case 0x101e7245u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e7245;
    case 0x101e724bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e724b;
    case 0x101e7253u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e7253;
    case 0x101e7263u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e7263;
    case 0x101e7283u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e7283;
    case 0x101e7289u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e7289;
    case 0x101e7291u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e7291;
    case 0x101e72a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e72a1;
    case 0x101e72c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e72c1;
    case 0x101e72c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e72c7;
    case 0x101e72cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e72cf;
    case 0x101e72dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e72df;
    case 0x101e72ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e72ff;
    case 0x101e7305u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e7305;
    case 0x101e730du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e730d;
    case 0x101e731du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e731d;
    case 0x101e733du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e733d;
    case 0x101e7343u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e7343;
    case 0x101e734bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e734b;
    case 0x101e735bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e735b;
    case 0x101e737bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e737b;
    case 0x101e7381u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e7381;
    case 0x101e7389u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e7389;
    case 0x101e7399u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e7399;
    case 0x101e73b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e73b9;
    case 0x101e73bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e73bf;
    case 0x101e73c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e73c7;
    case 0x101e73d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e73d7;
    case 0x101e73f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e73f7;
    case 0x101e73fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e73fd;
    case 0x101e7405u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e7405;
    case 0x101e7415u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e7415;
    case 0x101e7435u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e7435;
    case 0x101e743bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e743b;
    case 0x101e7443u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e7443;
    case 0x101e7453u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e7453;
    case 0x101e7473u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e7473;
    case 0x101e7479u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e7479;
    case 0x101e7481u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e7481;
    case 0x101e7491u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e7491;
    case 0x101e74b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e74b1;
    case 0x101e74b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e74b7;
    case 0x101e74bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e74bf;
    case 0x101e74cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e74cf;
    case 0x101e74efu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e74ef;
    case 0x101e74f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e74f5;
    case 0x101e74fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e74fd;
    case 0x101e750du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e750d;
    case 0x101e7535u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e7535;
    case 0x101e753bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101e753b;
    default: break;
    }
#endif

    COW_AT(101e6fb0)
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x101ee230u), self, 5, 0u, 0u, 0u, 0u, 0x3f800000u);
    t1 = g->edx;
    wr32(self, COW_IMG(0x10339bc0u));
    wr32(COW_IMG(0x1066358cu), 0u);
    wr8(COW_IMG(0x10663588u), 0u);
    wr32(COW_IMG(0x10663644u), 0u);
    wr32(self + 0x158u, 0u);
    eax = COW_IMG(0x1037f45cu);
    ecx = COW_IMG(0x1037fcecu);
    edx = t1;
L_101e6ff4: ;
    COW_AT(101e6ff4)
    wr32(ecx, eax);
    if ((int32_t)(eax + 8u) < (int32_t)COW_IMG(0x1037f47cu))
    {
        eax = eax + 8u;
        ecx = ecx + 0x20u;
        goto L_101e6ff4;
    }
    COW_AT(101e7003)
    eax = COW_IMG(0x1037f4d0u);
    ecx = COW_IMG(0x1037fd6cu);
L_101e700d: ;
    COW_AT(101e700d)
    wr32(ecx, eax);
    if ((int32_t)(eax + 8u) < (int32_t)COW_IMG(0x1037f568u))
    {
        eax = eax + 8u;
        ecx = ecx + 0x20u;
        goto L_101e700d;
    }
    COW_AT(101e701c)
    eax = COW_IMG(0x1037f630u);
    ecx = COW_IMG(0x1037ffccu);
L_101e7026: ;
    COW_AT(101e7026)
    wr32(ecx, eax);
    if ((int32_t)(eax + 8u) < (int32_t)COW_IMG(0x1037fac0u))
    {
        eax = eax + 8u;
        ecx = ecx + 0x20u;
        goto L_101e7026;
    }
    eax = eax + 8u;
    COW_AT(101e7035)
    esi = COW_IMG(0x1037fce8u);
L_101e703d: ;
    COW_AT(101e703d)
    if (rd16(rd32(esi + 4u) + 4u) == 0xffffu)
    {
        eax = (eax & 0xffff0000u) | rd16(rd32(esi + 4u) + 4u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | rd16(rd32(esi + 4u) + 4u);
        ecx = rd32(esi + 4u);
    COW_AT(101e7049)
        if (rd16(ecx + 2u) != 0xffffu)
        {
    COW_AT(101e7057)
            ecx = (uint32_t)(int16_t)eax;
            loc_18 = (uint32_t)(int16_t)eax;
            loc_1c = 0x15u;
        }
        else
        {
    COW_AT(101e704f)
            loc_18 = (uint32_t)(int16_t)eax;
            eax = (uint32_t)(int16_t)eax;
            loc_1c = 0x13u;
        }
    COW_AT(101e705d)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t2 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, loc_1c, loc_18);
        t3 = g->edx;
        wr32(esi, t2);
        eax = t2;
        edx = t3;
    }
    COW_AT(101e7067)
    if ((int32_t)(esi + 0x20u) < (int32_t)COW_IMG(0x10381208u))
    {
        esi = esi + 0x20u;
        goto L_101e703d;
    }
    COW_AT(101e7072)
    wr32(COW_IMG(0x1038120cu), COW_IMG(0x1037f47cu));
    eax = COW_IMG(0x1037f568u);
    ecx = COW_IMG(0x1038122cu);
L_101e7086: ;
    COW_AT(101e7086)
    wr32(ecx, eax);
    if ((int32_t)(eax + 8u) < (int32_t)COW_IMG(0x1037f590u))
    {
        eax = eax + 8u;
        ecx = ecx + 0x20u;
        goto L_101e7086;
    }
    COW_AT(101e7095)
    eax = COW_IMG(0x1037fac0u);
    ecx = COW_IMG(0x103812ccu);
L_101e709f: ;
    COW_AT(101e709f)
    wr32(ecx, eax);
    if ((int32_t)(eax + 8u) < (int32_t)COW_IMG(0x1037fba0u))
    {
        eax = eax + 8u;
        ecx = ecx + 0x20u;
        goto L_101e709f;
    }
    eax = eax + 8u;
    COW_AT(101e70ae)
    esi = COW_IMG(0x10381208u);
L_101e70b3: ;
    COW_AT(101e70b3)
    if (rd16(rd32(esi + 4u) + 4u) == 0xffffu)
    {
        eax = (eax & 0xffff0000u) | rd16(rd32(esi + 4u) + 4u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | rd16(rd32(esi + 4u) + 4u);
        ecx = rd32(esi + 4u);
    COW_AT(101e70bf)
        if (rd16(ecx + 2u) != 0xffffu)
        {
    COW_AT(101e70cd)
            loc_18 = (uint32_t)(int16_t)eax;
            eax = (uint32_t)(int16_t)eax;
            loc_1c = 0x15u;
        }
        else
        {
    COW_AT(101e70c5)
            edx = (uint32_t)(int16_t)eax;
            loc_18 = (uint32_t)(int16_t)eax;
            loc_1c = 0x13u;
        }
    COW_AT(101e70d3)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t4 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, loc_1c, loc_18);
        t5 = g->edx;
        wr32(esi, t4);
        eax = t4;
        edx = t5;
    }
    COW_AT(101e70dd)
    if ((int32_t)(esi + 0x20u) < (int32_t)COW_IMG(0x10381648u))
    {
        esi = esi + 0x20u;
        goto L_101e70b3;
    }
    COW_AT(101e70e8)
    eax = COW_IMG(0x1037f488u);
    ecx = COW_IMG(0x1038164cu);
L_101e70f2: ;
    COW_AT(101e70f2)
    wr32(ecx, eax);
    if ((int32_t)(eax + 8u) < (int32_t)COW_IMG(0x1037f4c8u))
    {
        eax = eax + 8u;
        ecx = ecx + 0x20u;
        goto L_101e70f2;
    }
    COW_AT(101e7101)
    eax = COW_IMG(0x1037f590u);
    ecx = COW_IMG(0x1038174cu);
L_101e710b: ;
    COW_AT(101e710b)
    wr32(ecx, eax);
    if ((int32_t)(eax + 8u) < (int32_t)COW_IMG(0x1037f5d0u))
    {
        eax = eax + 8u;
        ecx = ecx + 0x20u;
        goto L_101e710b;
    }
    COW_AT(101e711a)
    eax = COW_IMG(0x1037fba0u);
    ecx = COW_IMG(0x1038184cu);
L_101e7124: ;
    COW_AT(101e7124)
    wr32(ecx, eax);
    if ((int32_t)(eax + 8u) < (int32_t)COW_IMG(0x1037fc70u))
    {
        eax = eax + 8u;
        ecx = ecx + 0x20u;
        goto L_101e7124;
    }
    eax = eax + 8u;
    COW_AT(101e7133)
    esi = COW_IMG(0x10381648u);
L_101e7138: ;
    COW_AT(101e7138)
    if (rd16(rd32(esi + 4u) + 4u) == 0xffffu)
    {
        eax = (eax & 0xffff0000u) | rd16(rd32(esi + 4u) + 4u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | rd16(rd32(esi + 4u) + 4u);
        ecx = rd32(esi + 4u);
    COW_AT(101e7144)
        if (rd16(ecx + 2u) == 0xfffeu)
        {
            ecx = (ecx & 0xffff0000u) | rd16(ecx + 2u);
            goto L_101e715b;
        }
        ecx = (ecx & 0xffff0000u) | rd16(ecx + 2u);
    COW_AT(101e714e)
        if ((uint16_t)ecx == 0xffffu) goto L_101e715b;
    COW_AT(101e7153)
        ecx = (uint32_t)(int16_t)eax;
        loc_18 = (uint32_t)(int16_t)eax;
        loc_1c = 0x15u;
L_101e7161: ;
    COW_AT(101e7161)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t6 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, loc_1c, loc_18);
        t7 = g->edx;
        wr32(esi, t6);
        eax = t6;
        edx = t7;
    }
    COW_AT(101e716b)
    if ((int32_t)(esi + 0x20u) < (int32_t)COW_IMG(0x10381b88u))
    {
        esi = esi + 0x20u;
        goto L_101e7138;
    }
    COW_AT(101e7176)
    wr32(COW_IMG(0x10381b8cu), COW_IMG(0x1037f4c8u));
    eax = COW_IMG(0x1037f5d0u);
    ecx = COW_IMG(0x10381bacu);
L_101e718a: ;
    COW_AT(101e718a)
    wr32(ecx, eax);
    if ((int32_t)(eax + 8u) < (int32_t)COW_IMG(0x1037f610u))
    {
        eax = eax + 8u;
        ecx = ecx + 0x20u;
        goto L_101e718a;
    }
    COW_AT(101e7199)
    eax = COW_IMG(0x1037fc70u);
    ecx = COW_IMG(0x10381cacu);
L_101e71a3: ;
    COW_AT(101e71a3)
    wr32(ecx, eax);
    if ((int32_t)(eax + 8u) < (int32_t)COW_IMG(0x1037fcd0u))
    {
        eax = eax + 8u;
        ecx = ecx + 0x20u;
        goto L_101e71a3;
    }
    eax = eax + 8u;
    COW_AT(101e71b2)
    esi = COW_IMG(0x10381b88u);
L_101e71b7: ;
    COW_AT(101e71b7)
    if (rd16(rd32(esi + 4u) + 4u) == 0xffffu)
    {
        eax = (eax & 0xffff0000u) | rd16(rd32(esi + 4u) + 4u);
        ecx = rd32(esi + 4u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | rd16(rd32(esi + 4u) + 4u);
        ecx = rd32(esi + 4u);
    COW_AT(101e71c3)
        if ((int32_t)esi >= (int32_t)COW_IMG(0x10381ba8u))
        {
    COW_AT(101e71d3)
            if ((int32_t)esi >= (int32_t)COW_IMG(0x10381ca8u)) goto L_101e71ef;
    COW_AT(101e71db)
            if (rd16(ecx) != 9u) goto L_101e71e9;
    COW_AT(101e71e1)
            ecx = (uint32_t)(int16_t)eax;
            loc_18 = (uint32_t)(int16_t)eax;
            loc_1c = 0x13u;
        }
        else
        {
    COW_AT(101e71cb)
            loc_18 = (uint32_t)(int16_t)eax;
            eax = (uint32_t)(int16_t)eax;
            loc_1c = 0x13u;
        }
L_101e71f5: ;
    COW_AT(101e71f5)
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t8 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, loc_1c, loc_18);
        t9 = g->ecx;
        t10 = g->edx;
        wr32(esi, t8);
        eax = t8;
        ecx = t9;
        edx = t10;
    }
    COW_AT(101e71ff)
    if ((int32_t)(esi + 0x20u) < (int32_t)COW_IMG(0x10381e28u))
    {
        esi = esi + 0x20u;
        goto L_101e71b7;
    }
    COW_AT(101e720a)
    if (rd32(COW_IMG(0x10663650u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10663650u));
    }
    else
    {
        eax = rd32(COW_IMG(0x10663650u));
    COW_AT(101e7215)
        g->eax = eax;
        g->esp = sp0 - 0xcu;
        t11 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x68u, in_edi, in_esi);
        t12 = g->ecx;
        t13 = g->edx;
        if (t11 == 0u)
        {
            eax = t11;
            ecx = t12;
            edx = t13;
    COW_AT(101e7245)
            wr32(COW_IMG(0x10663650u), 0u);
        }
        else
        {
            eax = t11;
            edx = t13;
            esi = t11;
    COW_AT(101e7225)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t14 = cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t15 = g->ecx;
            t16 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x10339b78u));
            wr32(COW_IMG(0x10663650u), esi);
            eax = t14;
            ecx = t15;
            edx = t16;
        }
    }
    COW_AT(101e724b)
    if (rd32(COW_IMG(0x1066364cu)) == 0u)
    {
    COW_AT(101e7253)
        g->eax = eax;
        g->esp = sp0 - 0xcu;
        t17 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x24u, in_edi, in_esi);
        t18 = g->ecx;
        t19 = g->edx;
        if (t17 == 0u)
        {
            eax = t17;
            ecx = t18;
            edx = t19;
    COW_AT(101e7283)
            wr32(COW_IMG(0x1066364cu), 0u);
        }
        else
        {
            eax = t17;
            edx = t19;
            esi = t17;
    COW_AT(101e7263)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t20 = cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t21 = g->ecx;
            t22 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x10339b30u));
            wr32(COW_IMG(0x1066364cu), esi);
            eax = t20;
            ecx = t21;
            edx = t22;
        }
    }
    COW_AT(101e7289)
    if (rd32(COW_IMG(0x10663654u)) == 0u)
    {
    COW_AT(101e7291)
        g->eax = eax;
        g->esp = sp0 - 0xcu;
        t23 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, in_edi, in_esi);
        t24 = g->ecx;
        t25 = g->edx;
        if (t23 == 0u)
        {
            eax = t23;
            ecx = t24;
            edx = t25;
    COW_AT(101e72c1)
            wr32(COW_IMG(0x10663654u), 0u);
        }
        else
        {
            eax = t23;
            edx = t25;
            esi = t23;
    COW_AT(101e72a1)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t26 = cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t27 = g->ecx;
            t28 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x10339ae8u));
            wr32(COW_IMG(0x10663654u), esi);
            eax = t26;
            ecx = t27;
            edx = t28;
        }
    }
    COW_AT(101e72c7)
    if (rd32(COW_IMG(0x10663658u)) == 0u)
    {
    COW_AT(101e72cf)
        g->eax = eax;
        g->esp = sp0 - 0xcu;
        t29 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x3cu, in_edi, in_esi);
        t30 = g->ecx;
        t31 = g->edx;
        if (t29 == 0u)
        {
            eax = t29;
            ecx = t30;
            edx = t31;
    COW_AT(101e72ff)
            wr32(COW_IMG(0x10663658u), 0u);
        }
        else
        {
            eax = t29;
            edx = t31;
            esi = t29;
    COW_AT(101e72df)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t32 = cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t33 = g->ecx;
            t34 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x10339aa0u));
            wr32(COW_IMG(0x10663658u), esi);
            eax = t32;
            ecx = t33;
            edx = t34;
        }
    }
    COW_AT(101e7305)
    if (rd32(COW_IMG(0x1066365cu)) == 0u)
    {
    COW_AT(101e730d)
        g->eax = eax;
        g->esp = sp0 - 0xcu;
        t35 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x40u, in_edi, in_esi);
        t36 = g->ecx;
        t37 = g->edx;
        if (t35 == 0u)
        {
            eax = t35;
            ecx = t36;
            edx = t37;
    COW_AT(101e733d)
            wr32(COW_IMG(0x1066365cu), 0u);
        }
        else
        {
            eax = t35;
            edx = t37;
            esi = t35;
    COW_AT(101e731d)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t38 = cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t39 = g->ecx;
            t40 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x10339a58u));
            wr32(COW_IMG(0x1066365cu), esi);
            eax = t38;
            ecx = t39;
            edx = t40;
        }
    }
    COW_AT(101e7343)
    if (rd32(COW_IMG(0x10663660u)) == 0u)
    {
    COW_AT(101e734b)
        g->eax = eax;
        g->esp = sp0 - 0xcu;
        t41 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, in_edi, in_esi);
        t42 = g->ecx;
        t43 = g->edx;
        if (t41 == 0u)
        {
            eax = t41;
            ecx = t42;
            edx = t43;
    COW_AT(101e737b)
            wr32(COW_IMG(0x10663660u), 0u);
        }
        else
        {
            eax = t41;
            edx = t43;
            esi = t41;
    COW_AT(101e735b)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t44 = cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t45 = g->ecx;
            t46 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x10339a10u));
            wr32(COW_IMG(0x10663660u), esi);
            eax = t44;
            ecx = t45;
            edx = t46;
        }
    }
    COW_AT(101e7381)
    if (rd32(COW_IMG(0x10663664u)) == 0u)
    {
    COW_AT(101e7389)
        g->eax = eax;
        g->esp = sp0 - 0xcu;
        t47 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x18u, in_edi, in_esi);
        t48 = g->ecx;
        t49 = g->edx;
        if (t47 == 0u)
        {
            eax = t47;
            ecx = t48;
            edx = t49;
    COW_AT(101e73b9)
            wr32(COW_IMG(0x10663664u), 0u);
        }
        else
        {
            eax = t47;
            edx = t49;
            esi = t47;
    COW_AT(101e7399)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t50 = cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t51 = g->ecx;
            t52 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x103399c8u));
            wr32(COW_IMG(0x10663664u), esi);
            eax = t50;
            ecx = t51;
            edx = t52;
        }
    }
    COW_AT(101e73bf)
    if (rd32(COW_IMG(0x10663668u)) == 0u)
    {
    COW_AT(101e73c7)
        g->eax = eax;
        g->esp = sp0 - 0xcu;
        t53 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x60u, in_edi, in_esi);
        t54 = g->ecx;
        t55 = g->edx;
        if (t53 == 0u)
        {
            eax = t53;
            ecx = t54;
            edx = t55;
    COW_AT(101e73f7)
            wr32(COW_IMG(0x10663668u), 0u);
        }
        else
        {
            eax = t53;
            edx = t55;
            esi = t53;
    COW_AT(101e73d7)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t56 = cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t57 = g->ecx;
            t58 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x10339980u));
            wr32(COW_IMG(0x10663668u), esi);
            eax = t56;
            ecx = t57;
            edx = t58;
        }
    }
    COW_AT(101e73fd)
    if (rd32(COW_IMG(0x1066366cu)) == 0u)
    {
    COW_AT(101e7405)
        g->eax = eax;
        g->esp = sp0 - 0xcu;
        t59 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x40u, in_edi, in_esi);
        t60 = g->ecx;
        t61 = g->edx;
        if (t59 == 0u)
        {
            eax = t59;
            ecx = t60;
            edx = t61;
    COW_AT(101e7435)
            wr32(COW_IMG(0x1066366cu), 0u);
        }
        else
        {
            eax = t59;
            edx = t61;
            esi = t59;
    COW_AT(101e7415)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t62 = cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t63 = g->ecx;
            t64 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x10339938u));
            wr32(COW_IMG(0x1066366cu), esi);
            eax = t62;
            ecx = t63;
            edx = t64;
        }
    }
    COW_AT(101e743b)
    if (rd32(COW_IMG(0x10663670u)) == 0u)
    {
    COW_AT(101e7443)
        g->eax = eax;
        g->esp = sp0 - 0xcu;
        t65 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, in_edi, in_esi);
        t66 = g->ecx;
        t67 = g->edx;
        if (t65 == 0u)
        {
            eax = t65;
            ecx = t66;
            edx = t67;
    COW_AT(101e7473)
            wr32(COW_IMG(0x10663670u), 0u);
        }
        else
        {
            eax = t65;
            edx = t67;
            esi = t65;
    COW_AT(101e7453)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t68 = cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t69 = g->ecx;
            t70 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x103398f0u));
            wr32(COW_IMG(0x10663670u), esi);
            eax = t68;
            ecx = t69;
            edx = t70;
        }
    }
    COW_AT(101e7479)
    if (rd32(COW_IMG(0x10663674u)) == 0u)
    {
    COW_AT(101e7481)
        g->eax = eax;
        g->esp = sp0 - 0xcu;
        t71 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x1cu, in_edi, in_esi);
        t72 = g->ecx;
        t73 = g->edx;
        if (t71 == 0u)
        {
            eax = t71;
            ecx = t72;
            edx = t73;
    COW_AT(101e74b1)
            wr32(COW_IMG(0x10663674u), 0u);
        }
        else
        {
            eax = t71;
            edx = t73;
            esi = t71;
    COW_AT(101e7491)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t74 = cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t75 = g->ecx;
            t76 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x103398a8u));
            wr32(COW_IMG(0x10663674u), esi);
            eax = t74;
            ecx = t75;
            edx = t76;
        }
    }
    COW_AT(101e74b7)
    if (rd32(COW_IMG(0x10663678u)) == 0u)
    {
    COW_AT(101e74bf)
        g->eax = eax;
        g->esp = sp0 - 0xcu;
        t77 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x1cu, in_edi, in_esi);
        t78 = g->ecx;
        t79 = g->edx;
        if (t77 == 0u)
        {
            eax = t77;
            ecx = t78;
            edx = t79;
    COW_AT(101e74ef)
            wr32(COW_IMG(0x10663678u), 0u);
        }
        else
        {
            eax = t77;
            edx = t79;
            esi = t77;
    COW_AT(101e74cf)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t80 = cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t81 = g->ecx;
            t82 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x10339860u));
            wr32(COW_IMG(0x10663678u), esi);
            eax = t80;
            ecx = t81;
            edx = t82;
        }
    }
    COW_AT(101e74f5)
    if (rd32(COW_IMG(0x1066367cu)) != 0u) goto L_101e753b;
    COW_AT(101e74fd)
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t83 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, in_edi, in_esi);
    t84 = g->edx;
    if (t83 == 0u) goto L_101e7535;
    eax = t83;
    edx = t84;
    esi = t83;
    COW_AT(101e750d)
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
    wr16(esi + 0xeu, 0xffffu);
    wr32(esi + 8u, 0u);
    wr8(esi + 0xcu, 1u);
    wr32(esi, COW_IMG(0x10339818u));
    wr32(COW_IMG(0x1066367cu), esi);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return self;
L_101e715b: ;
    COW_AT(101e715b)
    edx = (uint32_t)(int16_t)eax;
    loc_18 = (uint32_t)(int16_t)eax;
    loc_1c = 0x13u;
    goto L_101e7161;
L_101e71e9: ;
    COW_AT(101e71e9)
    edx = (uint32_t)(int16_t)eax;
    loc_18 = (uint32_t)(int16_t)eax;
L_101e71f3: ;
    COW_AT(101e71f3)
    loc_1c = 0x15u;
    goto L_101e71f5;
L_101e71ef: ;
    COW_AT(101e71ef)
    loc_18 = (uint32_t)(int16_t)eax;
    eax = (uint32_t)(int16_t)eax;
    goto L_101e71f3;
L_101e7535: ;
    COW_AT(101e7535)
    wr32(COW_IMG(0x1066367cu), 0u);
L_101e753b: ;
    COW_AT(101e753b)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return self;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101e6fb0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101e6ff4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->edi = 0u;
        wr32(sp0 - 0xcu, in_ebp);
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101e7003u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->edi = 0u;
        wr32(sp0 - 0xcu, in_ebp);
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101e700du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->edi = 0u;
        wr32(sp0 - 0xcu, in_ebp);
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101e701cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->edi = 0u;
        wr32(sp0 - 0xcu, in_ebp);
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101e7026u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->edi = 0u;
        wr32(sp0 - 0xcu, in_ebp);
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101e7035u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->edi = 0u;
        wr32(sp0 - 0xcu, in_ebp);
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101e703du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101e7049u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101e704fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101e7057u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101e705du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101e7067u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101e7072u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101e7086u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101e7095u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101e709fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101e70aeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101e70b3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101e70bfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101e70c5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101e70cdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101e70d3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101e70ddu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101e70e8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101e70f2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101e7101u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101e710bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101e711au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101e7124u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101e7133u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101e7138u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101e7144u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101e714eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101e7153u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101e715bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101e7161u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101e716bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101e7176u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101e718au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101e7199u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101e71a3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101e71b2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101e71b7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101e71c3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101e71cbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101e71d3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101e71dbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101e71e1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101e71e9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101e71efu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101e71f3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101e71f5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101e71ffu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101e720au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101e7215u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e7225u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e7245u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e724bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e7253u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e7263u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e7283u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e7289u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e7291u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e72a1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e72c1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e72c7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e72cfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e72dfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e72ffu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e7305u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e730du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e731du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e733du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e7343u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e734bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e735bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e737bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e7381u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e7389u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e7399u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e73b9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e73bfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e73c7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e73d7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e73f7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e73fdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e7405u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e7415u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e7435u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e743bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e7443u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e7453u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e7473u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e7479u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e7481u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e7491u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e74b1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e74b7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e74bfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e74cfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e74efu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e74f5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e74fdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e750du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0xffffffffu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e7535u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e753bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101e6fb0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101e6fb0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
