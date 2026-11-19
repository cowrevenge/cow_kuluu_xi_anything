/* f_0x100da750 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100da750(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_18;
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
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100da75eu: in_eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebp = g->ebp; in_edi = g->edi; zf = g->zf; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100da75e;
    case 0x100da768u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebp = g->ebp; in_edi = g->edi; zf = g->zf; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100da768;
    case 0x100da770u: in_eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; zf = g->zf; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100da770;
    case 0x100da77du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; zf = g->zf; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100da77d;
    case 0x100da798u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebp = g->ebp; in_edi = g->edi; zf = g->zf; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100da798;
    case 0x100da7b3u: eax = g->eax; self = g->ecx; in_edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100da7b3;
    case 0x100da7bcu: eax = g->eax; self = g->ecx; in_edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100da7bc;
    case 0x100da7c7u: eax = g->eax; self = g->ecx; in_edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100da7c7;
    case 0x100da7cfu: eax = g->eax; self = g->ecx; in_edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100da7cf;
    case 0x100da7dau: eax = g->eax; self = g->ecx; in_edx = g->edx; zf = g->zf; in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100da7da;
    case 0x100da7e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100da7e3;
    case 0x100da7ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100da7eb;
    case 0x100da7f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100da7f4;
    case 0x100da802u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100da802;
    case 0x100da80fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100da80f;
    case 0x100da818u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100da818;
    case 0x100da820u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100da820;
    case 0x100da829u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100da829;
    case 0x100da836u: eax = g->eax; self = g->ecx; edx = g->edx; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100da836;
    case 0x100da841u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100da841;
    case 0x100da845u: eax = g->eax; self = g->ecx; edx = g->edx; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100da845;
    case 0x100da850u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100da850;
    case 0x100da856u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100da856;
    case 0x100da85du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100da85d;
    case 0x100da863u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100da863;
    case 0x100da87bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100da87b;
    case 0x100da88au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100da88a;
    case 0x100da8a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100da8a9;
    case 0x100da8bau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100da8ba;
    case 0x100da8c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100da8c7;
    case 0x100da8d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100da8d8;
    case 0x100da8e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100da8e4;
    case 0x100da8ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100da8ec;
    case 0x100da8f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100da8f9;
    case 0x100da90au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100da90a;
    case 0x100da916u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100da916;
    case 0x100da91eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100da91e;
    case 0x100da92bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100da92b;
    case 0x100da93cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100da93c;
    case 0x100da948u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100da948;
    case 0x100da950u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100da950;
    case 0x100da95du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100da95d;
    case 0x100da975u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100da975;
    case 0x100da981u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100da981;
    case 0x100da98au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100da98a;
    case 0x100da994u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100da994;
    case 0x100da9a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100da9a1;
    case 0x100da9b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100da9b9;
    case 0x100da9c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100da9c5;
    case 0x100da9d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100da9d2;
    case 0x100da9eau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100da9ea;
    case 0x100da9f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100da9f6;
    case 0x100daa03u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100daa03;
    case 0x100daa1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100daa1f;
    case 0x100daa2bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100daa2b;
    case 0x100daa38u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100daa38;
    case 0x100daa54u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100daa54;
    case 0x100daa60u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100daa60;
    case 0x100daa6du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100daa6d;
    case 0x100daa7eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100daa7e;
    case 0x100daa8au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100daa8a;
    case 0x100daa93u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100daa93;
    case 0x100daa9du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100daa9d;
    case 0x100daaaau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100daaaa;
    case 0x100daabbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100daabb;
    case 0x100daac7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100daac7;
    case 0x100daad0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100daad0;
    case 0x100daadau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100daada;
    case 0x100daae7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100daae7;
    case 0x100dab03u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100dab03;
    case 0x100dab0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100dab0f;
    case 0x100dab2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100dab2f;
    case 0x100dab3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100dab3b;
    case 0x100dab57u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100dab57;
    case 0x100dab63u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100dab63;
    case 0x100dab78u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100dab78;
    case 0x100dab84u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100dab84;
    case 0x100dab99u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100dab99;
    case 0x100daba4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100daba4;
    case 0x100dabb5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100dabb5;
    case 0x100dabc1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100dabc1;
    case 0x100dabcau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100dabca;
    case 0x100dabd1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100dabd1;
    case 0x100dabd7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100dabd7;
    case 0x100dabeeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100dabee;
    case 0x100dabffu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100dabff;
    case 0x100dac08u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100dac08;
    case 0x100dac0du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100dac0d;
    case 0x100dac14u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100dac14;
    case 0x100dac16u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100dac16;
    case 0x100dac2au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100dac2a;
    case 0x100dac3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100dac3b;
    case 0x100dac42u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100dac42;
    case 0x100dac44u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100dac44;
    case 0x100dac56u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100dac56;
    case 0x100dac5bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100dac5b;
    case 0x100dac62u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100dac62;
    case 0x100dac64u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100dac64;
    case 0x100dac78u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100dac78;
    case 0x100dac82u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100dac82;
    case 0x100dac97u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100dac97;
    case 0x100daca6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100daca6;
    case 0x100dacb7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100dacb7;
    case 0x100dacc0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100dacc0;
    case 0x100dacc5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100dacc5;
    case 0x100dacceu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100dacce;
    case 0x100dace7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100dace7;
    case 0x100dacf8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100dacf8;
    case 0x100dacffu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100dacff;
    case 0x100dad01u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100dad01;
    case 0x100dad18u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100dad18;
    case 0x100dad1du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100dad1d;
    case 0x100dad26u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100dad26;
    case 0x100dad2cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100dad2c;
    case 0x100dad38u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 8u); goto E_100dad38;
    case 0x100dad3au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; in_edi = g->edi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100dad3a;
    default: break;
    }
#endif

    COW_AT(100da750)
    if ((int32_t)rd32(self + 0x8cu) >= 0)
    {
    COW_AT(100da75e)
        wr32(self + 0x8cu, 0xffffffffu);
    }
    COW_AT(100da768)
    if (rd32(self + 0x98u) != 0u) goto L_100da798;
    COW_AT(100da770)
    if (rd32(self + 0x90u) != 0x64u)
    {
        eax = in_eax;
        goto L_100dad3a;
    }
    COW_AT(100da77d)
    t1 = rd32(self + 0x88u);
    wr32(self + 0x90u, 0x65u);
    wr32(self + 0x8cu, t1);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return (t1 & 0xffffff00u) | 1u;
L_100da798: ;
    COW_AT(100da798)
    if (rd32(self + 0x88u) == 0xcu)
    {
        eax = rd32(self + 0x88u);
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x88u);
    COW_AT(100da7b3)
        if (eax == 0x15u)
        {
            ecx = self;
            edx = in_edx;
        }
        else
        {
    COW_AT(100da7bc)
            if (eax == 0xcau)
            {
                ecx = self;
                edx = in_edx;
            }
            else
            {
    COW_AT(100da7c7)
                if (eax == 0xcbu)
                {
                    ecx = self;
                    edx = in_edx;
                }
                else
                {
    COW_AT(100da7cf)
                    if (eax == 0xc9u)
                    {
                        ecx = self;
                        edx = in_edx;
                    }
                    else
                    {
    COW_AT(100da7da)
                        g->eax = eax;
                        g->ecx = self;
                        g->edx = in_edx;
                        g->esp = sp0 - 0x10u;
                        t2 = cow_stdcall(g, COW_IMG(0x100ef870u), 0);
                        t3 = g->ecx;
                        t4 = g->edx;
                        if (t2 == 0u)
                        {
                            eax = t2;
                            ecx = t3;
                            edx = t4;
                        }
                        else
                        {
                            eax = t2;
                            edx = t4;
    COW_AT(100da7e3)
                            if (rd32(self + 0x88u) != 9u)
                            {
    COW_AT(100da7eb)
                                g->ebx = 0u;
                                g->ebp = 0xcbu;
                                g->eax = eax;
                                g->esp = sp0 - 0x10u;
                                t5 = cow_fastcall(g, COW_IMG(0x100db170u), self, edx, 2, 0xcbu, 0u);
                                t6 = g->edx;
                                eax = t5;
                                edx = t6;
                            }
    COW_AT(100da7f4)
                            g->ebx = 0u;
                            g->ebp = 0xcbu;
                            g->eax = eax;
                            g->esp = sp0 - 0x10u;
                            t7 = cow_fastcall(g, COW_IMG(0x100db170u), self, edx, 2, 0xau, 0u);
                            t8 = g->ecx;
                            t9 = g->edx;
                            if (t7 != 0u)
                            {
                                eax = t7;
                                ecx = t8;
                                edx = t9;
                            }
                            else
                            {
                                eax = t7;
                                edx = t9;
    COW_AT(100da802)
                                g->ebx = 0u;
                                g->ebp = 0xcbu;
                                g->eax = eax;
                                g->esp = sp0 - 0x10u;
                                t10 = cow_fastcall(g, COW_IMG(0x100db170u), self, edx, 2, 0xc9u, 0u);
                                t11 = g->ecx;
                                t12 = g->edx;
                                eax = t10;
                                ecx = t11;
                                edx = t12;
                            }
                        }
    COW_AT(100da80f)
                        g->eax = eax;
                        g->ecx = ecx;
                        g->edx = edx;
                        g->esp = sp0 - 0x10u;
                        t13 = cow_stdcall(g, COW_IMG(0x100ef8b0u), 0);
                        t14 = g->ecx;
                        t15 = g->edx;
                        if (t13 == 0u)
                        {
                            eax = t13;
                            ecx = t14;
                            edx = t15;
                        }
                        else
                        {
                            eax = t13;
                            edx = t15;
    COW_AT(100da818)
                            if (rd32(self + 0x88u) != 9u)
                            {
    COW_AT(100da820)
                                g->ebx = 0u;
                                g->ebp = 0xcbu;
                                g->esp = sp0 - 0x10u;
                                cow_fastcall(g, COW_IMG(0x100db170u), self, edx, 2, 0xcbu, 0u);
                                t16 = g->edx;
                                edx = t16;
                            }
    COW_AT(100da829)
                            if (rd32(self + 0xa0u) != 0u)
                            {
                                eax = rd32(self + 0xa0u);
                                goto L_100da845;
                            }
                            eax = rd32(self + 0xa0u);
    COW_AT(100da836)
                            g->ebx = 0u;
                            g->ebp = 0xcbu;
                            g->eax = eax;
                            g->esp = sp0 - 0x10u;
                            t17 = cow_fastcall(g, COW_IMG(0x100db170u), self, edx, 2, 0xeu, 0u);
                            t18 = g->ecx;
                            t19 = g->edx;
                            if (t17 != 0u)
                            {
                                eax = t17;
                                ecx = t18;
                                edx = t19;
                                goto L_100da85d;
                            }
                            eax = t17;
                            edx = t19;
    COW_AT(100da841)
                            loc_18 = 0xcbu;
L_100da856: ;
    COW_AT(100da856)
                            g->ebx = 0u;
                            g->ebp = 0xcbu;
                            g->eax = eax;
                            g->esp = sp0 - 0x10u;
                            t23 = cow_fastcall(g, COW_IMG(0x100db170u), self, edx, 2, loc_18, 0u);
                            t24 = g->ecx;
                            t25 = g->edx;
                            eax = t23;
                            ecx = t24;
                            edx = t25;
L_100da85d: ;
    COW_AT(100da85d)
                            wr32(self + 0xa0u, 0u);
                        }
                    }
                }
            }
        }
    }
    COW_AT(100da863)
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_stdcall(g, COW_IMG(0x10103920u), 0);
    t26 = g->edx;
    if (rd32(self + 0x88u) > 0xcbu) goto L_100dac82;
    eax = rd32(self + 0x88u);
    edx = t26;
    COW_AT(100da87b)
    t27 = rd32(COW_IMG(0x100dad40u) + rd8(COW_IMG(0x100dad94u) + eax) * 4u);
    switch (t27 - RD)
    {
    case 0x100da88au: ecx = rd8(COW_IMG(0x100dad94u) + eax); goto L_100da88a;
    case 0x100da8bau: ecx = rd8(COW_IMG(0x100dad94u) + eax); goto L_100da8ba;
    case 0x100da8ecu: ecx = rd8(COW_IMG(0x100dad94u) + eax); goto L_100da8ec;
    case 0x100da91eu: goto L_100da91e;
    case 0x100da950u: goto L_100da950;
    case 0x100da994u: goto L_100da994;
    case 0x100da9c5u: goto L_100da9c5;
    case 0x100da9f6u: goto L_100da9f6;
    case 0x100daa2bu: goto L_100daa2b;
    case 0x100daa60u: ecx = rd8(COW_IMG(0x100dad94u) + eax); goto L_100daa60;
    case 0x100daa9du: ecx = rd8(COW_IMG(0x100dad94u) + eax); goto L_100daa9d;
    case 0x100daadau: goto L_100daada;
    case 0x100dab0fu: ecx = rd8(COW_IMG(0x100dad94u) + eax); goto L_100dab0f;
    case 0x100dab3bu: ecx = rd8(COW_IMG(0x100dad94u) + eax); goto L_100dab3b;
    case 0x100dab63u: ecx = rd8(COW_IMG(0x100dad94u) + eax); goto L_100dab63;
    case 0x100dab84u: goto L_100dab84;
    case 0x100daba4u: ecx = rd8(COW_IMG(0x100dad94u) + eax); goto L_100daba4;
    case 0x100dabeeu: ecx = rd8(COW_IMG(0x100dad94u) + eax); goto L_100dabee;
    case 0x100dac2au: goto L_100dac2a;
    case 0x100dac78u: goto L_100dac78;
    case 0x100dac82u: goto L_100dac82;
    default: rt_fatal(g, COW_IMG(0x100da883u), "switch");
    }
    return 0;
L_100da845: ;
    COW_AT(100da845)
    g->ebx = 0u;
    g->ebp = 0xcbu;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t20 = cow_fastcall(g, COW_IMG(0x100db170u), self, edx, 2, 0xbu, 0u);
    t21 = g->ecx;
    t22 = g->edx;
    if (t20 != 0u)
    {
        eax = t20;
        ecx = t21;
        edx = t22;
        goto L_100da85d;
    }
    eax = t20;
    edx = t22;
    COW_AT(100da850)
    loc_18 = 0xc9u;
    goto L_100da856;
L_100da88a: ;
    COW_AT(100da88a)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t88 = cow_stdcall(g, COW_IMG(0x102535d0u), 0);
    t89 = g->ecx;
    t90 = g->edx;
    cow_stdcall(g, COW_IMG(0x10253650u), 0);
    t91 = rd32(self + 0x90u);
    wr32(self + 0x90u, 0x65u);
    if (t91 == 0x64u)
    {
    COW_AT(100da8a9)
        t92 = rd32(self + 0x88u);
        wr32(self + 0x8cu, t92);
    }
L_100dac82: ;
    COW_AT(100dac82)
    if (rd32(self + 0x88u) - 0xcu > 0xbfu)
    {
        eax = rd32(self + 0x88u);
        goto L_100dad38;
    }
    eax = rd32(self + 0x88u);
    ecx = rd32(self + 0x88u) - 0xcu;
    COW_AT(100dac97)
    t93 = rd32(COW_IMG(0x100dae60u) + rd8(COW_IMG(0x100dae70u) + ecx) * 4u);
    switch (t93 - RD)
    {
    case 0x100daca6u: edx = rd8(COW_IMG(0x100dae70u) + ecx); goto L_100daca6;
    case 0x100dace7u: goto L_100dace7;
    case 0x100dad2cu: goto L_100dad2c;
    case 0x100dad38u: goto L_100dad38;
    default: rt_fatal(g, COW_IMG(0x100dac9fu), "switch");
    }
    return 0;
L_100da8ba: ;
    COW_AT(100da8ba)
    if (rd32(self + 0x90u) != 0x64u) goto L_100dac82;
    COW_AT(100da8c7)
    g->eax = self + 0xcu;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t85 = cow_cdecl(g, COW_IMG(0x100ed7e0u), 1, self + 0xcu);
    t86 = g->edx;
    if (t85 != 0xffffffffu)
    {
        eax = t85;
        goto L_100da8e4;
    }
    eax = t85;
    edx = t86;
    COW_AT(100da8d8)
    zf = rd32(self + 0x88u) == 1u;
L_100dac42: ;
    COW_AT(100dac42)
    if (zf)
    {
    COW_AT(100dac44)
        wr32(self + 0x94u, 0xcbu);
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        g->esp = sp0 - 0x10u;
        cow_fastcall(g, COW_IMG(0x100db170u), self, edx, 2, 0xcbu, 0u);
    }
    goto L_100dac82;
L_100da8e4: ;
    COW_AT(100da8e4)
    zf = eax == 1u;
L_100dabd1: ;
    COW_AT(100dabd1)
    if (!zf) goto L_100dac82;
L_100dabd7: ;
    COW_AT(100dabd7)
    t87 = rd32(self + 0x88u);
    wr32(self + 0x90u, 0x65u);
    wr32(self + 0x8cu, t87);
    goto L_100dac82;
L_100da8ec: ;
    COW_AT(100da8ec)
    if (rd32(self + 0x90u) != 0x64u) goto L_100dac82;
    COW_AT(100da8f9)
    g->edx = self + 0xcu;
    g->esp = sp0 - 0x10u;
    t82 = cow_call_regs(g, COW_IMG(0x100ee0a0u), eax, g->ecx, g->edx, 1, 1, self + 0xcu);
    t83 = g->edx;
    if (t82 != 0xffffffffu)
    {
        eax = t82;
        goto L_100da916;
    }
    eax = t82;
    edx = t83;
    COW_AT(100da90a)
    zf = rd32(self + 0x88u) == 0x13u;
    goto L_100dac42;
L_100da916: ;
    COW_AT(100da916)
    zf = eax == 1u;
L_100dac14: ;
    COW_AT(100dac14)
    if (!zf) goto L_100dac82;
L_100dac16: ;
    COW_AT(100dac16)
    t84 = rd32(self + 0x88u);
    wr32(self + 0x90u, 0x65u);
    wr32(self + 0x8cu, t84);
    goto L_100dac82;
L_100da91e: ;
    COW_AT(100da91e)
    if (rd32(self + 0x90u) != 0x64u) goto L_100dac82;
    COW_AT(100da92b)
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t79 = cow_call_regs(g, COW_IMG(0x100edfb0u), eax, g->ecx, g->edx, 1, 1, self + 0xcu);
    t80 = g->edx;
    if (t79 != 0xffffffffu)
    {
        eax = t79;
        goto L_100da948;
    }
    eax = t79;
    edx = t80;
    COW_AT(100da93c)
    zf = rd32(self + 0x88u) == 2u;
    goto L_100dac42;
L_100da948: ;
    COW_AT(100da948)
    zf = eax == 1u;
L_100dac62: ;
    COW_AT(100dac62)
    if (!zf) goto L_100dac82;
L_100dac64: ;
    COW_AT(100dac64)
    t81 = rd32(self + 0x88u);
    wr32(self + 0x90u, 0x65u);
    wr32(self + 0x8cu, t81);
    goto L_100dac82;
L_100da950: ;
    COW_AT(100da950)
    if (rd32(self + 0x90u) != 0x64u) goto L_100dac82;
    COW_AT(100da95d)
    t75 = rd32(self + 0x80u);
    g->ecx = self + 0xcu;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t76 = cow_call_regs(g, COW_IMG(0x100ee160u), t75, g->ecx, g->edx, 1, 2, self + 0xcu, t75);
    t77 = g->ecx;
    t78 = g->edx;
    if (t76 != 0xffffffffu)
    {
        eax = t76;
        ecx = t77;
        edx = t78;
        goto L_100da981;
    }
    eax = t76;
    edx = t78;
    COW_AT(100da975)
    zf = rd32(self + 0x88u) == 3u;
    goto L_100dac42;
L_100da981: ;
    COW_AT(100da981)
    if (eax != 1u) goto L_100dac82;
    COW_AT(100da98a)
    g->esp = sp0 - 0x10u;
    cow_stdcall(g, COW_IMG(0x100f05f0u), 0);
    goto L_100dac64;
L_100da994: ;
    COW_AT(100da994)
    if (rd32(self + 0x90u) != 0x64u) goto L_100dac82;
    COW_AT(100da9a1)
    t71 = rd32(self + 0x80u);
    g->edi = 9u;
    g->ecx = self + 0xcu;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t72 = cow_call_regs(g, COW_IMG(0x100ee900u), t71, g->ecx, g->edx, 1, 2, self + 0xcu, t71);
    t73 = g->ecx;
    t74 = g->edx;
    if (t72 != 0xffffffffu)
    {
        eax = t72;
        ecx = t73;
        edx = t74;
        goto L_100da981;
    }
    eax = t72;
    edx = t74;
    COW_AT(100da9b9)
    zf = rd32(self + 0x88u) == 0x14u;
    goto L_100dac42;
L_100da9c5: ;
    COW_AT(100da9c5)
    if (rd32(self + 0x90u) != 0x64u) goto L_100dac82;
    COW_AT(100da9d2)
    t67 = rd32(self + 0x80u);
    g->edi = 9u;
    g->ecx = self + 0xcu;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t68 = cow_call_regs(g, COW_IMG(0x100eeb70u), t67, g->ecx, g->edx, 1, 2, self + 0xcu, t67);
    t69 = g->ecx;
    t70 = g->edx;
    if (t68 != 0xffffffffu)
    {
        eax = t68;
        ecx = t69;
        edx = t70;
        goto L_100da981;
    }
    eax = t68;
    edx = t70;
    COW_AT(100da9ea)
    zf = rd32(self + 0x88u) == 0x16u;
    goto L_100dac42;
L_100da9f6: ;
    COW_AT(100da9f6)
    if (rd32(self + 0x90u) != 0x64u) goto L_100dac82;
    COW_AT(100daa03)
    t63 = rd32(self + 0x80u);
    g->ecx = self + 0xcu;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t64 = cow_call_regs(g, COW_IMG(0x100eede0u), t63, g->ecx, g->edx, 1, 2, self + 0xcu, t63);
    t65 = g->ecx;
    t66 = g->edx;
    if (t64 != 0xffffffffu)
    {
        eax = t64;
        ecx = t65;
        edx = t66;
        goto L_100da981;
    }
    eax = t64;
    edx = t66;
    COW_AT(100daa1f)
    zf = rd32(self + 0x88u) == 0x17u;
    goto L_100dac42;
L_100daa2b: ;
    COW_AT(100daa2b)
    if (rd32(self + 0x90u) != 0x64u) goto L_100dac82;
    COW_AT(100daa38)
    t59 = rd32(self + 0x80u);
    g->edi = 9u;
    g->ecx = self + 0xcu;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t60 = cow_call_regs(g, COW_IMG(0x100ee690u), t59, g->ecx, g->edx, 1, 2, self + 0xcu, t59);
    t61 = g->ecx;
    t62 = g->edx;
    if (t60 != 0xffffffffu)
    {
        eax = t60;
        ecx = t61;
        edx = t62;
        goto L_100da981;
    }
    eax = t60;
    edx = t62;
    COW_AT(100daa54)
    zf = rd32(self + 0x88u) == 4u;
    goto L_100dac42;
L_100daa60: ;
    COW_AT(100daa60)
    if (rd32(self + 0x90u) != 0x64u) goto L_100dac82;
    COW_AT(100daa6d)
    g->eax = self + 0xcu;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t56 = cow_cdecl(g, COW_IMG(0x100eef80u), 3, self + 0xcu, in_edi, in_ebp);
    t57 = g->ecx;
    t58 = g->edx;
    if (t56 != 0xffffffffu)
    {
        eax = t56;
        ecx = t57;
        edx = t58;
        goto L_100daa8a;
    }
    eax = t56;
    edx = t58;
    COW_AT(100daa7e)
    zf = rd32(self + 0x88u) == 0x12u;
    goto L_100dac42;
L_100daa8a: ;
    COW_AT(100daa8a)
    if (eax != 1u) goto L_100dac82;
    COW_AT(100daa93)
    g->esp = sp0 - 0x10u;
    cow_stdcall(g, COW_IMG(0x100f05f0u), 0);
    goto L_100dabd7;
L_100daa9d: ;
    COW_AT(100daa9d)
    if (rd32(self + 0x90u) != 0x64u) goto L_100dac82;
    COW_AT(100daaaa)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = self + 0xcu;
    g->esp = sp0 - 8u;
    t53 = cow_cdecl(g, COW_IMG(0x100eee90u), 3, self + 0xcu, in_edi, in_ebp);
    t54 = g->ecx;
    t55 = g->edx;
    if (t53 != 0xffffffffu)
    {
        eax = t53;
        ecx = t54;
        edx = t55;
        goto L_100daac7;
    }
    eax = t53;
    edx = t55;
    COW_AT(100daabb)
    zf = rd32(self + 0x88u) == 0x11u;
    goto L_100dac42;
L_100daac7: ;
    COW_AT(100daac7)
    if (eax != 1u) goto L_100dac82;
    COW_AT(100daad0)
    g->esp = sp0 - 0x10u;
    cow_stdcall(g, COW_IMG(0x100f05f0u), 0);
    goto L_100dac16;
L_100daada: ;
    COW_AT(100daada)
    if (rd32(self + 0x90u) != 0x64u) goto L_100dac82;
    COW_AT(100daae7)
    t50 = rd32(self + 0x80u);
    g->edx = self + 0xcu;
    g->esp = sp0 - 0x10u;
    t51 = cow_call_regs(g, COW_IMG(0x100ef020u), eax, g->ecx, g->edx, 1, 2, self + 0xcu, t50);
    t52 = g->edx;
    if (t51 != 0xffffffffu)
    {
        eax = t51;
        goto L_100da916;
    }
    eax = t51;
    edx = t52;
    COW_AT(100dab03)
    zf = rd32(self + 0x88u) == 5u;
    goto L_100dac42;
L_100dab0f: ;
    COW_AT(100dab0f)
    t44 = (ecx & 0xffffff00u) | rd8(self + 0xcu);
    g->ebx = 0x65u;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t45 = cow_call_regs(g, COW_IMG(0x10253610u), eax, t44, g->edx, 1, 2, 2u, t44);
    t46 = g->ecx;
    t47 = g->edx;
    g->ebx = 0x65u;
    g->edx = t47;
    g->esp = sp0 - 0x18u;
    t48 = cow_cdecl(g, COW_IMG(0x100ef0e0u), 1, self + 0xcu);
    t49 = g->edx;
    if (t48 != 0xffffffffu)
    {
        eax = t48;
        goto L_100dac56;
    }
    eax = t48;
    edx = t49;
    COW_AT(100dab2f)
    zf = rd32(self + 0x88u) == 6u;
    goto L_100dac42;
L_100dab3b: ;
    COW_AT(100dab3b)
    t38 = (eax & 0xffffff00u) | rd8(self + 0xcu);
    g->ebx = 0x65u;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t39 = cow_call_regs(g, COW_IMG(0x10253610u), t38, ecx, g->edx, 1, 2, 7u, t38);
    t40 = g->ecx;
    t41 = g->edx;
    g->ebx = 0x65u;
    g->edx = t41;
    t42 = cow_thiscall_cdecl(g, COW_IMG(0x100ef4c0u), t40, 3, self + 0xcu, 7u, t38);
    t43 = g->edx;
    if (t42 != 0xffffffffu)
    {
        eax = t42;
        goto L_100dabc1;
    }
    eax = t42;
    edx = t43;
    COW_AT(100dab57)
    zf = rd32(self + 0x88u) == 7u;
    goto L_100dac42;
L_100dab63: ;
    COW_AT(100dab63)
    g->ebx = 0x65u;
    g->eax = eax;
    g->edx = self + 0xcu;
    g->esp = sp0 - 8u;
    t36 = cow_cdecl(g, COW_IMG(0x100ef550u), 3, self + 0xcu, in_edi, in_ebp);
    t37 = g->edx;
    if (t36 != 0xffffffffu)
    {
        eax = t36;
        goto L_100dac08;
    }
    eax = t36;
    edx = t37;
    COW_AT(100dab78)
    zf = rd32(self + 0x88u) == 8u;
    goto L_100dac42;
L_100dab84: ;
    COW_AT(100dab84)
    g->ebx = 0x65u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t34 = cow_cdecl(g, COW_IMG(0x100ef5b0u), 1, self + 0xcu);
    t35 = g->edx;
    if (t34 != 0xffffffffu)
    {
        eax = t34;
        goto L_100dac56;
    }
    eax = t34;
    edx = t35;
    COW_AT(100dab99)
    zf = rd32(self + 0x88u) == 9u;
    goto L_100dac42;
L_100daba4: ;
    COW_AT(100daba4)
    g->ebx = 0x65u;
    g->eax = self + 0xcu;
    g->esp = sp0 - 0x10u;
    t32 = cow_call_regs(g, COW_IMG(0x100ef640u), g->eax, g->ecx, edx, 1, 1, self + 0xcu);
    t33 = g->edx;
    if (t32 != 0xffffffffu)
    {
        eax = t32;
        goto L_100dabc1;
    }
    eax = t32;
    edx = t33;
    COW_AT(100dabb5)
    zf = rd32(self + 0x88u) == 0xau;
    goto L_100dac42;
L_100dabc1: ;
    COW_AT(100dabc1)
    if (eax != 1u) goto L_100dac82;
    COW_AT(100dabca)
    zf = rd32(self + 0x90u) == 0x64u;
    goto L_100dabd1;
L_100dabee: ;
    COW_AT(100dabee)
    g->ebx = 0x65u;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t30 = cow_call_regs(g, COW_IMG(0x100ef680u), g->eax, g->ecx, self + 0xcu, 1, 1, self + 0xcu);
    t31 = g->edx;
    if (t30 != 0xffffffffu)
    {
        eax = t30;
        goto L_100dac08;
    }
    eax = t30;
    edx = t31;
    COW_AT(100dabff)
    zf = rd32(self + 0x88u) == 0xbu;
    goto L_100dac42;
L_100dac08: ;
    COW_AT(100dac08)
    if (eax != 1u) goto L_100dac82;
    COW_AT(100dac0d)
    zf = rd32(self + 0x90u) == 0x64u;
    goto L_100dac14;
L_100dac2a: ;
    COW_AT(100dac2a)
    g->ebx = 0x65u;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t28 = cow_call_regs(g, COW_IMG(0x100ef680u), g->eax, g->ecx, edx, 1, 1, self + 0xcu);
    t29 = g->edx;
    if (t28 != 0xffffffffu)
    {
        eax = t28;
        goto L_100dac56;
    }
    eax = t28;
    edx = t29;
    COW_AT(100dac3b)
    zf = rd32(self + 0x88u) == 0xeu;
    goto L_100dac42;
L_100dac56: ;
    COW_AT(100dac56)
    if (eax != 1u) goto L_100dac82;
    COW_AT(100dac5b)
    zf = rd32(self + 0x90u) == 0x64u;
    goto L_100dac62;
L_100dac78: ;
    COW_AT(100dac78)
    wr32(self + 0x88u, 0u);
    goto L_100dac82;
L_100daca6: ;
    COW_AT(100daca6)
    g->eax = self + 0xcu;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t96 = cow_cdecl(g, COW_IMG(0x100ef780u), 1, self + 0xcu);
    t97 = g->edx;
    if (t96 != 0xffffffffu)
    {
        eax = t96;
        goto L_100dacc0;
    }
    eax = t96;
    edx = t97;
    COW_AT(100dacb7)
    zf = rd32(self + 0x88u) == 0xcu;
L_100dacff: ;
    COW_AT(100dacff)
    if (!zf) goto L_100dad38;
    COW_AT(100dad01)
    wr32(self + 0x94u, 0xcbu);
    g->ebx = 0x65u;
    g->ebp = 0xcbu;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t98 = cow_fastcall(g, COW_IMG(0x100db170u), self, edx, 2, 0xcbu, 0u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return (t98 & 0xffffff00u) | 1u;
L_100dacc0: ;
    COW_AT(100dacc0)
    if (eax != 1u) goto L_100dad38;
    COW_AT(100dacc5)
    if (rd32(self + 0x90u) != 0x64u) goto L_100dad38;
    COW_AT(100dacce)
    t99 = rd32(self + 0x88u);
    wr32(self + 0x8cu, t99);
    wr32(self + 0x90u, 0x65u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return (eax & 0xffffff00u) | 1u;
L_100dace7: ;
    COW_AT(100dace7)
    g->eax = eax;
    g->edx = self + 0xcu;
    g->esp = sp0 - 0x10u;
    t94 = cow_cdecl(g, COW_IMG(0x100ef780u), 1, self + 0xcu);
    t95 = g->edx;
    if (t94 != 0xffffffffu)
    {
        eax = t94;
        goto L_100dad18;
    }
    eax = t94;
    edx = t95;
    COW_AT(100dacf8)
    zf = rd32(self + 0x88u) == 0x15u;
    goto L_100dacff;
L_100dad18: ;
    COW_AT(100dad18)
    if (eax != 1u) goto L_100dad38;
    COW_AT(100dad1d)
    if (rd32(self + 0x90u) != 0x64u) goto L_100dad38;
    COW_AT(100dad26)
    eax = rd32(self + 0x88u);
L_100dad2c: ;
    COW_AT(100dad2c)
    wr32(self + 0x8cu, eax);
    wr32(self + 0x90u, 0x65u);
L_100dad38: ;
    COW_AT(100dad38)
L_100dad3a: ;
    COW_AT(100dad3a)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return (eax & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100da750(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100da75eu:
    {
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
        in_ebp = g->ebp;
        in_edi = g->edi;
        zf = g->zf;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x100da768u:
    {
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
        in_ebp = g->ebp;
        in_edi = g->edi;
        zf = g->zf;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x100da770u:
    {
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        in_eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100da77du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100da798u:
    {
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        in_edi = g->edi;
        zf = g->zf;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x100da7b3u:
    {
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 0xcbu;
        g->esi = self;
        g->edi = 9u;
        (void)sp0;
        return 1;
    }
    case 0x100da7bcu:
    {
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 0xcbu;
        g->esi = self;
        g->edi = 9u;
        (void)sp0;
        return 1;
    }
    case 0x100da7c7u:
    {
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 0xcbu;
        g->esi = self;
        g->edi = 9u;
        (void)sp0;
        return 1;
    }
    case 0x100da7cfu:
    {
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 0xcbu;
        g->esi = self;
        g->edi = 9u;
        (void)sp0;
        return 1;
    }
    case 0x100da7dau:
    {
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 0xcbu;
        g->esi = self;
        g->edi = 9u;
        (void)sp0;
        return 1;
    }
    case 0x100da7e3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 0xcbu;
        g->edi = 9u;
        (void)sp0;
        return 1;
    }
    case 0x100da7ebu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 0xcbu;
        g->edi = 9u;
        (void)sp0;
        return 1;
    }
    case 0x100da7f4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 0xcbu;
        g->edi = 9u;
        (void)sp0;
        return 1;
    }
    case 0x100da802u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 0xcbu;
        g->edi = 9u;
        (void)sp0;
        return 1;
    }
    case 0x100da80fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 0xcbu;
        g->edi = 9u;
        (void)sp0;
        return 1;
    }
    case 0x100da818u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 0xcbu;
        g->edi = 9u;
        (void)sp0;
        return 1;
    }
    case 0x100da820u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 0xcbu;
        g->edi = 9u;
        (void)sp0;
        return 1;
    }
    case 0x100da829u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 0xcbu;
        g->edi = 9u;
        (void)sp0;
        return 1;
    }
    case 0x100da836u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        g->ebp = 0xcbu;
        g->esi = self;
        g->edi = 9u;
        wr32(sp0 - 0x14u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100da841u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 0xcbu;
        g->edi = 9u;
        (void)sp0;
        return 1;
    }
    case 0x100da845u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        g->ebp = 0xcbu;
        g->esi = self;
        g->edi = 9u;
        wr32(sp0 - 0x14u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100da850u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 0xcbu;
        g->edi = 9u;
        (void)sp0;
        return 1;
    }
    case 0x100da856u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        g->ebp = 0xcbu;
        g->edi = 9u;
        wr32(sp0 - 0x14u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100da85du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = 0xcbu;
        g->edi = 9u;
        (void)sp0;
        return 1;
    }
    case 0x100da863u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = 0xcbu;
        g->edi = 9u;
        (void)sp0;
        return 1;
    }
    case 0x100da87bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        g->edi = 9u;
        (void)sp0;
        return 1;
    }
    case 0x100da88au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100da8a9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100da8bau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100da8c7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100da8d8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100da8e4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100da8ecu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100da8f9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100da90au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100da916u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100da91eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100da92bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100da93cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100da948u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100da950u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100da95du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100da975u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100da981u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100da98au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100da994u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        g->edi = 9u;
        (void)sp0;
        return 1;
    }
    case 0x100da9a1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        g->edi = 9u;
        (void)sp0;
        return 1;
    }
    case 0x100da9b9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100da9c5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        g->edi = 9u;
        (void)sp0;
        return 1;
    }
    case 0x100da9d2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        g->edi = 9u;
        (void)sp0;
        return 1;
    }
    case 0x100da9eau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100da9f6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100daa03u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100daa1fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100daa2bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        g->edi = 9u;
        (void)sp0;
        return 1;
    }
    case 0x100daa38u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        g->edi = 9u;
        (void)sp0;
        return 1;
    }
    case 0x100daa54u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100daa60u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100daa6du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100daa7eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100daa8au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100daa93u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100daa9du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100daaaau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100daabbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100daac7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100daad0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100daadau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100daae7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100dab03u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100dab0fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100dab2fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100dab3bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100dab57u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100dab63u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100dab78u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100dab84u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        g->edi = 9u;
        (void)sp0;
        return 1;
    }
    case 0x100dab99u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        g->edi = 9u;
        (void)sp0;
        return 1;
    }
    case 0x100daba4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100dabb5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100dabc1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100dabcau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100dabd1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100dabd7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100dabeeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100dabffu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100dac08u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100dac0du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100dac14u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100dac16u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100dac2au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100dac3bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100dac42u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100dac44u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100dac56u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100dac5bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100dac62u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100dac64u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100dac78u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100dac82u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100dac97u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100daca6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100dacb7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100dacc0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        (void)sp0;
        return 1;
    }
    case 0x100dacc5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        (void)sp0;
        return 1;
    }
    case 0x100dacceu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        (void)sp0;
        return 1;
    }
    case 0x100dace7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100dacf8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100dacffu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100dad01u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        g->ebp = 0xcbu;
        (void)sp0;
        return 1;
    }
    case 0x100dad18u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        (void)sp0;
        return 1;
    }
    case 0x100dad1du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        (void)sp0;
        return 1;
    }
    case 0x100dad26u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        (void)sp0;
        return 1;
    }
    case 0x100dad2cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0x65u;
        (void)sp0;
        return 1;
    }
    case 0x100dad38u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100dad3au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        in_edi = g->edi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100da750(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100da750(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
