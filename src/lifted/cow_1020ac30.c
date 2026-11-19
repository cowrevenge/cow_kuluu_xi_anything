/* f_0x1020ac30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1020ac30(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_84;
    uint32_t loc_88;
    uint32_t loc_8c;
    uint32_t loc_90;
    uint32_t loc_94;
    uint32_t loc_98;
    uint32_t loc_9c;
    uint32_t loc_a0;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
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
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 184u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1020ac45u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x98u); in_ebx = rd32(sp0 - 0x94u); g->ebp = rd32(sp0 - 0x98u); g->ebx = rd32(sp0 - 0x94u); goto E_1020ac45;
    case 0x1020ac4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x98u); in_ebx = rd32(sp0 - 0x94u); g->ebp = rd32(sp0 - 0x98u); g->ebx = rd32(sp0 - 0x94u); goto E_1020ac4f;
    case 0x1020ac5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x9cu); in_ebp = rd32(sp0 - 0x98u); in_ebx = rd32(sp0 - 0x94u); g->ebp = rd32(sp0 - 0x98u); g->ebx = rd32(sp0 - 0x94u); g->esi = rd32(sp0 - 0x9cu); goto E_1020ac5e;
    case 0x1020ac6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = g->edi; in_esi = rd32(sp0 - 0x9cu); in_ebp = rd32(sp0 - 0x98u); in_ebx = rd32(sp0 - 0x94u); g->ebp = rd32(sp0 - 0x98u); g->ebx = rd32(sp0 - 0x94u); g->esi = rd32(sp0 - 0x9cu); goto E_1020ac6f;
    case 0x1020ac96u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 0x9cu); in_ebp = rd32(sp0 - 0x98u); in_ebx = rd32(sp0 - 0x94u); g->ebp = rd32(sp0 - 0x98u); g->ebx = rd32(sp0 - 0x94u); g->esi = rd32(sp0 - 0x9cu); goto E_1020ac96;
    case 0x1020aca4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 0x9cu); in_ebp = rd32(sp0 - 0x98u); in_ebx = rd32(sp0 - 0x94u); g->ebp = rd32(sp0 - 0x98u); g->ebx = rd32(sp0 - 0x94u); g->esi = rd32(sp0 - 0x9cu); goto E_1020aca4;
    case 0x1020acafu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 0x9cu); in_ebp = rd32(sp0 - 0x98u); in_ebx = rd32(sp0 - 0x94u); g->ebp = rd32(sp0 - 0x98u); g->ebx = rd32(sp0 - 0x94u); g->esi = rd32(sp0 - 0x9cu); goto E_1020acaf;
    case 0x1020acddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1020acdd;
    case 0x1020acf9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1020acf9;
    case 0x1020ad00u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1020ad00;
    case 0x1020ad08u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1020ad08;
    case 0x1020ad0bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1020ad0b;
    case 0x1020ad12u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1020ad12;
    case 0x1020ad19u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1020ad19;
    case 0x1020ad1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1020ad1e;
    case 0x1020ad68u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1020ad68;
    case 0x1020ad78u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); goto E_1020ad78;
    case 0x1020ad98u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1020ad98;
    case 0x1020ada7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xa0u); in_ebp = rd32(sp0 - 0x98u); in_ebx = rd32(sp0 - 0x94u); g->ebp = rd32(sp0 - 0x98u); g->ebx = rd32(sp0 - 0x94u); g->edi = rd32(sp0 - 0xa0u); goto E_1020ada7;
    case 0x1020adb4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xa0u); in_ebp = rd32(sp0 - 0x98u); in_ebx = rd32(sp0 - 0x94u); g->ebp = rd32(sp0 - 0x98u); g->ebx = rd32(sp0 - 0x94u); g->edi = rd32(sp0 - 0xa0u); goto E_1020adb4;
    case 0x1020adbeu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xa0u); in_ebp = rd32(sp0 - 0x98u); in_ebx = rd32(sp0 - 0x94u); g->ebp = rd32(sp0 - 0x98u); g->ebx = rd32(sp0 - 0x94u); g->edi = rd32(sp0 - 0xa0u); goto E_1020adbe;
    case 0x1020adc5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xa0u); in_ebp = rd32(sp0 - 0x98u); in_ebx = rd32(sp0 - 0x94u); g->ebp = rd32(sp0 - 0x98u); g->ebx = rd32(sp0 - 0x94u); g->edi = rd32(sp0 - 0xa0u); goto E_1020adc5;
    case 0x1020adceu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xa0u); in_ebp = rd32(sp0 - 0x98u); in_ebx = rd32(sp0 - 0x94u); g->ebp = rd32(sp0 - 0x98u); g->ebx = rd32(sp0 - 0x94u); g->edi = rd32(sp0 - 0xa0u); goto E_1020adce;
    case 0x1020add9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xa0u); in_ebp = rd32(sp0 - 0x98u); in_ebx = rd32(sp0 - 0x94u); g->ebp = rd32(sp0 - 0x98u); g->ebx = rd32(sp0 - 0x94u); g->edi = rd32(sp0 - 0xa0u); goto E_1020add9;
    case 0x1020adecu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xa0u); in_ebp = rd32(sp0 - 0x98u); in_ebx = rd32(sp0 - 0x94u); g->ebp = rd32(sp0 - 0x98u); g->ebx = rd32(sp0 - 0x94u); g->edi = rd32(sp0 - 0xa0u); goto E_1020adec;
    case 0x1020adf3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xa0u); in_ebp = rd32(sp0 - 0x98u); in_ebx = rd32(sp0 - 0x94u); g->ebp = rd32(sp0 - 0x98u); g->ebx = rd32(sp0 - 0x94u); g->edi = rd32(sp0 - 0xa0u); goto E_1020adf3;
    case 0x1020ae00u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xa0u); in_esi = rd32(sp0 - 0x9cu); in_ebp = rd32(sp0 - 0x98u); in_ebx = rd32(sp0 - 0x94u); g->ebp = rd32(sp0 - 0x98u); g->ebx = rd32(sp0 - 0x94u); g->edi = rd32(sp0 - 0xa0u); g->esi = rd32(sp0 - 0x9cu); goto E_1020ae00;
    case 0x1020ae2bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xa0u); in_esi = rd32(sp0 - 0x9cu); in_ebp = rd32(sp0 - 0x98u); in_ebx = rd32(sp0 - 0x94u); loc_84 = rd32(sp0 - 0x84u); g->ebp = rd32(sp0 - 0x98u); g->ebx = rd32(sp0 - 0x94u); g->edi = rd32(sp0 - 0xa0u); g->esi = rd32(sp0 - 0x9cu); goto E_1020ae2b;
    case 0x1020ae30u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xa0u); in_esi = rd32(sp0 - 0x9cu); in_ebp = rd32(sp0 - 0x98u); in_ebx = rd32(sp0 - 0x94u); loc_84 = rd32(sp0 - 0x84u); g->ebp = rd32(sp0 - 0x98u); g->ebx = rd32(sp0 - 0x94u); g->edi = rd32(sp0 - 0xa0u); g->esi = rd32(sp0 - 0x9cu); goto E_1020ae30;
    case 0x1020ae45u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xa0u); in_esi = rd32(sp0 - 0x9cu); in_ebp = rd32(sp0 - 0x98u); in_ebx = rd32(sp0 - 0x94u); loc_84 = rd32(sp0 - 0x84u); g->ebp = rd32(sp0 - 0x98u); g->ebx = rd32(sp0 - 0x94u); g->edi = rd32(sp0 - 0xa0u); g->esi = rd32(sp0 - 0x9cu); goto E_1020ae45;
    case 0x1020ae56u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1020ae56;
    case 0x1020ae70u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1020ae70;
    case 0x1020ae94u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xa0u); in_esi = rd32(sp0 - 0x9cu); in_ebp = rd32(sp0 - 0x98u); in_ebx = rd32(sp0 - 0x94u); loc_84 = rd32(sp0 - 0x84u); g->ebp = rd32(sp0 - 0x98u); g->ebx = rd32(sp0 - 0x94u); g->edi = rd32(sp0 - 0xa0u); g->esi = rd32(sp0 - 0x9cu); goto E_1020ae94;
    case 0x1020ae9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_84 = rd32(sp0 - 0x84u); goto E_1020ae9c;
    case 0x1020aea4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_84 = rd32(sp0 - 0x84u); goto E_1020aea4;
    case 0x1020aebdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_84 = rd32(sp0 - 0x84u); goto E_1020aebd;
    case 0x1020aecfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1020aecf;
    case 0x1020aed2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_84 = rd32(sp0 - 0x84u); goto E_1020aed2;
    case 0x1020aedau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_84 = rd32(sp0 - 0x84u); goto E_1020aeda;
    case 0x1020aedfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_90 = rd32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_1020aedf;
    case 0x1020af05u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xa0u); in_ebp = rd32(sp0 - 0x98u); in_ebx = rd32(sp0 - 0x94u); g->ebp = rd32(sp0 - 0x98u); g->ebx = rd32(sp0 - 0x94u); g->edi = rd32(sp0 - 0xa0u); goto E_1020af05;
    case 0x1020af0du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xa0u); in_ebp = rd32(sp0 - 0x98u); in_ebx = rd32(sp0 - 0x94u); g->ebp = rd32(sp0 - 0x98u); g->ebx = rd32(sp0 - 0x94u); g->edi = rd32(sp0 - 0xa0u); goto E_1020af0d;
    case 0x1020af12u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xa0u); in_esi = rd32(sp0 - 0x9cu); in_ebp = rd32(sp0 - 0x98u); in_ebx = rd32(sp0 - 0x94u); g->ebp = rd32(sp0 - 0x98u); g->ebx = rd32(sp0 - 0x94u); g->edi = rd32(sp0 - 0xa0u); g->esi = rd32(sp0 - 0x9cu); goto E_1020af12;
    case 0x1020af39u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1020af39;
    case 0x1020af56u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1020af56;
    case 0x1020af8au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1020af8a;
    case 0x1020af8du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1020af8d;
    case 0x1020af9eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8c = rd32(sp0 - 0x8cu); goto E_1020af9e;
    case 0x1020afa9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_90 = rd32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); goto E_1020afa9;
    case 0x1020afb2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_90 = rd32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); goto E_1020afb2;
    case 0x1020b002u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1020b002;
    case 0x1020b011u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1020b011;
    case 0x1020b016u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_90 = rd32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); goto E_1020b016;
    case 0x1020b03bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_90 = rd32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); goto E_1020b03b;
    case 0x1020b040u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xa0u); in_ebp = rd32(sp0 - 0x98u); in_ebx = rd32(sp0 - 0x94u); g->ebp = rd32(sp0 - 0x98u); g->ebx = rd32(sp0 - 0x94u); g->edi = rd32(sp0 - 0xa0u); goto E_1020b040;
    case 0x1020b04au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xa0u); in_ebp = rd32(sp0 - 0x98u); in_ebx = rd32(sp0 - 0x94u); g->ebp = rd32(sp0 - 0x98u); g->ebx = rd32(sp0 - 0x94u); g->edi = rd32(sp0 - 0xa0u); goto E_1020b04a;
    case 0x1020b063u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xa0u); in_esi = rd32(sp0 - 0x9cu); in_ebp = rd32(sp0 - 0x98u); in_ebx = rd32(sp0 - 0x94u); loc_88 = rd32(sp0 - 0x88u); g->ebp = rd32(sp0 - 0x98u); g->ebx = rd32(sp0 - 0x94u); g->edi = rd32(sp0 - 0xa0u); g->esi = rd32(sp0 - 0x9cu); goto E_1020b063;
    case 0x1020b06au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_90 = rd32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); goto E_1020b06a;
    case 0x1020b071u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_90 = rd32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); goto E_1020b071;
    case 0x1020b07au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_90 = rd32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); goto E_1020b07a;
    case 0x1020b0c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1020b0c0;
    case 0x1020b0cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1020b0cb;
    case 0x1020b0d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_90 = rd32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); goto E_1020b0d0;
    case 0x1020b0dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_90 = rd32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); goto E_1020b0db;
    case 0x1020b0e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_90 = rd32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); goto E_1020b0e4;
    case 0x1020b12au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1020b12a;
    case 0x1020b135u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1020b135;
    case 0x1020b13au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_90 = rd32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); goto E_1020b13a;
    case 0x1020b15fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_90 = rd32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); goto E_1020b15f;
    case 0x1020b164u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xa0u); in_esi = rd32(sp0 - 0x9cu); in_ebp = rd32(sp0 - 0x98u); in_ebx = rd32(sp0 - 0x94u); g->ebp = rd32(sp0 - 0x98u); g->ebx = rd32(sp0 - 0x94u); g->edi = rd32(sp0 - 0xa0u); g->esi = rd32(sp0 - 0x9cu); goto E_1020b164;
    case 0x1020b169u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xa0u); in_esi = rd32(sp0 - 0x9cu); in_ebp = rd32(sp0 - 0x98u); in_ebx = rd32(sp0 - 0x94u); g->ebp = rd32(sp0 - 0x98u); g->ebx = rd32(sp0 - 0x94u); g->edi = rd32(sp0 - 0xa0u); g->esi = rd32(sp0 - 0x9cu); goto E_1020b169;
    case 0x1020b172u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xa0u); in_esi = rd32(sp0 - 0x9cu); in_ebp = rd32(sp0 - 0x98u); in_ebx = rd32(sp0 - 0x94u); g->ebp = rd32(sp0 - 0x98u); g->ebx = rd32(sp0 - 0x94u); g->edi = rd32(sp0 - 0xa0u); g->esi = rd32(sp0 - 0x9cu); goto E_1020b172;
    case 0x1020b17eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xa0u); in_esi = rd32(sp0 - 0x9cu); in_ebp = rd32(sp0 - 0x98u); in_ebx = rd32(sp0 - 0x94u); g->ebp = rd32(sp0 - 0x98u); g->ebx = rd32(sp0 - 0x94u); g->edi = rd32(sp0 - 0xa0u); g->esi = rd32(sp0 - 0x9cu); goto E_1020b17e;
    case 0x1020b185u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xa0u); in_esi = rd32(sp0 - 0x9cu); in_ebp = rd32(sp0 - 0x98u); in_ebx = rd32(sp0 - 0x94u); g->ebp = rd32(sp0 - 0x98u); g->ebx = rd32(sp0 - 0x94u); g->edi = rd32(sp0 - 0xa0u); g->esi = rd32(sp0 - 0x9cu); goto E_1020b185;
    case 0x1020b191u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xa0u); in_esi = rd32(sp0 - 0x9cu); in_ebp = rd32(sp0 - 0x98u); in_ebx = rd32(sp0 - 0x94u); g->ebp = rd32(sp0 - 0x98u); g->ebx = rd32(sp0 - 0x94u); g->edi = rd32(sp0 - 0xa0u); g->esi = rd32(sp0 - 0x9cu); goto E_1020b191;
    case 0x1020b19cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xa0u); in_esi = rd32(sp0 - 0x9cu); in_ebp = rd32(sp0 - 0x98u); in_ebx = rd32(sp0 - 0x94u); g->ebp = rd32(sp0 - 0x98u); g->ebx = rd32(sp0 - 0x94u); g->edi = rd32(sp0 - 0xa0u); g->esi = rd32(sp0 - 0x9cu); goto E_1020b19c;
    case 0x1020b1abu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xa0u); in_esi = rd32(sp0 - 0x9cu); in_ebp = rd32(sp0 - 0x98u); in_ebx = rd32(sp0 - 0x94u); g->ebp = rd32(sp0 - 0x98u); g->ebx = rd32(sp0 - 0x94u); g->edi = rd32(sp0 - 0xa0u); g->esi = rd32(sp0 - 0x9cu); goto E_1020b1ab;
    case 0x1020b1cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1020b1cb;
    case 0x1020b1d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1020b1d4;
    case 0x1020b1d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1020b1d7;
    case 0x1020b1e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1020b1e4;
    case 0x1020b1e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1020b1e6;
    case 0x1020b1e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1020b1e8;
    case 0x1020b1f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); goto E_1020b1f7;
    case 0x1020b1fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); goto E_1020b1fc;
    case 0x1020b21eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); goto E_1020b21e;
    case 0x1020b238u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); goto E_1020b238;
    case 0x1020b26bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); goto E_1020b26b;
    case 0x1020b2c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1020b2c0;
    case 0x1020b2e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1020b2e3;
    case 0x1020b2f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xa0u); in_esi = rd32(sp0 - 0x9cu); in_ebp = rd32(sp0 - 0x98u); in_ebx = rd32(sp0 - 0x94u); g->ebp = rd32(sp0 - 0x98u); g->ebx = rd32(sp0 - 0x94u); g->edi = rd32(sp0 - 0xa0u); g->esi = rd32(sp0 - 0x9cu); goto E_1020b2f7;
    case 0x1020b2fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xa0u); in_esi = rd32(sp0 - 0x9cu); in_ebp = rd32(sp0 - 0x98u); in_ebx = rd32(sp0 - 0x94u); g->ebp = rd32(sp0 - 0x98u); g->ebx = rd32(sp0 - 0x94u); g->edi = rd32(sp0 - 0xa0u); g->esi = rd32(sp0 - 0x9cu); goto E_1020b2fd;
    case 0x1020b30cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xa0u); in_esi = rd32(sp0 - 0x9cu); in_ebp = rd32(sp0 - 0x98u); in_ebx = rd32(sp0 - 0x94u); g->ebp = rd32(sp0 - 0x98u); g->ebx = rd32(sp0 - 0x94u); g->edi = rd32(sp0 - 0xa0u); g->esi = rd32(sp0 - 0x9cu); goto E_1020b30c;
    case 0x1020b312u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xa0u); in_esi = rd32(sp0 - 0x9cu); in_ebp = rd32(sp0 - 0x98u); in_ebx = rd32(sp0 - 0x94u); g->ebp = rd32(sp0 - 0x98u); g->ebx = rd32(sp0 - 0x94u); g->edi = rd32(sp0 - 0xa0u); g->esi = rd32(sp0 - 0x9cu); goto E_1020b312;
    case 0x1020b321u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xa0u); in_esi = rd32(sp0 - 0x9cu); in_ebp = rd32(sp0 - 0x98u); in_ebx = rd32(sp0 - 0x94u); g->ebp = rd32(sp0 - 0x98u); g->ebx = rd32(sp0 - 0x94u); g->edi = rd32(sp0 - 0xa0u); g->esi = rd32(sp0 - 0x9cu); goto E_1020b321;
    case 0x1020b325u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); goto E_1020b325;
    default: break;
    }
#endif

    COW_AT(1020ac30)
    wr32(sp0 - 0x94u, in_ebx);
    wr32(sp0 - 0x98u, in_ebp);
    wr32(sp0 - 0x9cu, in_esi);
    wr32(sp0 - 0xa0u, in_edi);
    if (rd32(COW_IMG(0x105781f8u)) == 0u)
    {
        eax = rd32(COW_IMG(0x105781f8u));
        edx = in_edx;
    }
    else
    {
        eax = rd32(COW_IMG(0x105781f8u));
    COW_AT(1020ac45)
        wr32(sp0 - 0xa4u, 8u);
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 0xa0u;
        t1 = cow_thiscall(g, COW_IMG(0x10221300u), eax + 0x20u, 1, 8u);
        t2 = g->edx;
        eax = t1;
        edx = t2;
    }
    COW_AT(1020ac4f)
    if (arg2 != 0u) goto L_1020ada7;
    COW_AT(1020ac5e)
    if (rd16(COW_IMG(0x10385a04u)) != 1u)
    {
    COW_AT(1020ac96)
        if (rd32(COW_IMG(0x106644e4u)) == 0u)
        {
            loc_94 = in_ebx;
            loc_98 = in_ebp;
            loc_9c = in_esi;
            loc_a0 = in_edi;
        }
        else
        {
            ecx = rd32(COW_IMG(0x106644e4u));
    COW_AT(1020aca4)
            if (rd32(ecx + 0x1cu) == 0u)
            {
                loc_94 = in_ebx;
                loc_98 = in_ebp;
                loc_9c = in_esi;
                loc_a0 = in_edi;
            }
            else
            {
                eax = rd32(ecx + 0x1cu);
    COW_AT(1020acaf)
                t8 = rd32(ecx + 8u);
                wr32(sp0 - 0xa4u, t8);
                wr32(sp0 - 0xa8u, eax);
                g->ebx = arg2;
                g->edx = edx;
                g->esp = sp0 - 0xa0u;
                cow_cdecl(g, COW_IMG(0x1020b330u), 2, eax, t8);
                t9 = g->edx;
                wr32(sp0 - 0xa4u, 1u);
                t10 = (t9 & 0xffff0000u) | rd16(rd32(COW_IMG(0x106644e4u)) + 8u);
                wr32(sp0 - 0xa8u, t10);
                t11 = rd32(rd32(COW_IMG(0x106644e4u)) + 0x1cu);
                wr32(sp0 - 0xacu, t11);
                g->esi = arg1;
                cow_fastcall(g, COW_IMG(0x101f7020u), arg1, t10, 3, t11, t10, 1u);
                t12 = g->ecx;
                t13 = g->edx;
                if (rd32(rd32(COW_IMG(0x106644e4u)) + 8u) != 0u)
                {
                    eax = rd32(COW_IMG(0x106644e4u));
                    ecx = t12;
                    edx = t13;
                }
                else
                {
                    eax = rd32(COW_IMG(0x106644e4u));
                    ecx = t12;
                    edx = t13;
    COW_AT(1020acdd)
                    wr32(sp0 - 0xa4u, 0x6bu);
                    wr32(sp0 - 0xa8u, 7u);
                    g->eax = eax;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0xa0u;
                    t14 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 7u, 0x6bu);
                    t15 = g->ecx;
                    t16 = g->edx;
                    wr32(arg1 + 0x3cu, t14);
                    wr8(arg1 + 0x44u, 0x20u);
                    wr8(arg1 + 0x45u, 0x18u);
                    eax = rd32(COW_IMG(0x106644e4u));
                    ecx = t15;
                    edx = t16;
                }
    COW_AT(1020acf9)
                if (rd8(eax + 0x17u) == 0u)
                {
                    loc_94 = rd32(sp0 - 0x94u);
                    loc_98 = rd32(sp0 - 0x98u);
                    loc_9c = rd32(sp0 - 0x9cu);
                    loc_a0 = rd32(sp0 - 0xa0u);
                }
                else
                {
    COW_AT(1020ad00)
                    if (rd8(eax + 0x16u) == 1u)
                    {
    COW_AT(1020ad19)
                        ecx = 0x35u;
                    }
                    else
                    {
                        ecx = rd8(eax + 0x16u) - 1u;
    COW_AT(1020ad08)
                        if (ecx == 1u)
                        {
    COW_AT(1020ad12)
                            ecx = 6u;
                        }
                        else
                        {
    COW_AT(1020ad0b)
                            ecx = 5u;
                        }
                    }
    COW_AT(1020ad1e)
                    t17 = rd32(eax + 0xcu) - rd32(COW_IMG(0x106644f0u));
                    wr32(sp0 - 0xa4u, t17);
                    wr32(sp0 - 0xa8u, ecx);
                    wr32(sp0 - 0xacu, 0xau);
                    wr32(sp0 - 0xb0u, 0x80u);
                    wr32(sp0 - 0xb4u, sp0 - 0x80u);
                    g->eax = sp0 - 0x80u;
                    g->edx = t17;
                    t18 = rd32(COW_IMG(0x106644f0u));
                    g->esp = sp0 - 0xa0u;
                    t19 = cow_cdecl(g, COW_IMG(0x10153150u), 5, sp0 - 0x80u, 0x80u, 0xau, ecx, t17);
                    t20 = g->edx;
                    wr32(sp0 - 0xa4u, sp0 - 0x80u);
                    g->ebx = t18;
                    cow_thiscall(g, COW_IMG(0x10129e80u), rd32(COW_IMG(0x10578158u)), 1, sp0 - 0x80u);
                    if (rd32(COW_IMG(0x106644f0u)) + rd32(rd32(COW_IMG(0x106644e4u)) + 8u) - 1u >= rd32(rd32(COW_IMG(0x106644e4u)) + 0xcu))
                    {
                        edx = rd32(COW_IMG(0x106644f0u)) + rd32(rd32(COW_IMG(0x106644e4u)) + 8u) - 1u;
                        loc_94 = rd32(sp0 - 0x94u);
                        loc_98 = rd32(sp0 - 0x98u);
                        loc_9c = rd32(sp0 - 0x9cu);
                        loc_a0 = rd32(sp0 - 0xa0u);
                    }
                    else
                    {
                        eax = rd32(COW_IMG(0x106644e4u));
                        edx = rd32(COW_IMG(0x106644f0u)) + rd32(rd32(COW_IMG(0x106644e4u)) + 8u) - 1u;
                        ebx = t18;
    COW_AT(1020ad68)
                        wr32(sp0 - 0xa4u, 0xbfu);
                        g->ebx = ebx;
                        g->edx = edx;
                        g->esp = sp0 - 0xa0u;
                        cow_thiscall(g, COW_IMG(0x10129de0u), rd32(COW_IMG(0x10578158u)), 1, 0xbfu);
                        t21 = g->edx;
                        edx = t21;
                        loc_94 = rd32(sp0 - 0x94u);
                        loc_98 = rd32(sp0 - 0x98u);
                        loc_9c = rd32(sp0 - 0x9cu);
                        loc_a0 = rd32(sp0 - 0xa0u);
                    }
                }
            }
        }
    }
    else
    {
    COW_AT(1020ac6f)
        wr32(sp0 - 0xa4u, 1u);
        wr32(sp0 - 0xa8u, 0u);
        wr32(sp0 - 0xacu, 0u);
        g->esi = arg1;
        g->eax = eax;
        g->esp = sp0 - 0xa0u;
        t3 = cow_fastcall(g, COW_IMG(0x101f7020u), arg1, edx, 3, 0u, 0u, 1u);
        t4 = g->ecx;
        t5 = g->edx;
        wr32(sp0 - 0xa4u, 0x65u);
        wr32(sp0 - 0xa8u, 7u);
        g->edx = t5;
        t6 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 7u, 0x65u);
        t7 = g->edx;
        wr32(arg1 + 0x3cu, t6);
        wr8(arg1 + 0x44u, 0x20u);
        wr8(arg1 + 0x45u, 0x18u);
        edx = t7;
        loc_94 = in_ebx;
        loc_98 = in_ebp;
        loc_9c = in_esi;
        loc_a0 = in_edi;
    }
    COW_AT(1020ad78)
    g->edx = edx;
    g->esp = sp0 - 0xa0u;
    cow_thiscall(g, rd32(rd32(arg1) + 0x84u), arg1, 0);
    t22 = g->edx;
    t23 = rd32(COW_IMG(0x106644e4u));
    wr16(COW_IMG(0x10385a04u), 4u);
    if (t23 == 0u)
    {
        eax = t23;
        edx = t22;
        loc_94 = rd32(sp0 - 0x94u);
        loc_98 = rd32(sp0 - 0x98u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_a0 = rd32(sp0 - 0xa0u);
        goto L_1020b325;
    }
    eax = t23;
    edx = t22;
    COW_AT(1020ad98)
    t24 = rd32(sp0 - 0x98u);
    t25 = rd32(sp0 - 0x9cu);
    t26 = rd32(sp0 - 0xa0u);
    wr8(eax + 0x16u, 0u);
    g->ebx = rd32(sp0 - 0x94u);
    g->esi = t25;
    g->edi = t26;
    g->ebp = t24;
    g->edx = edx;
    return eax;
L_1020ada7: ;
    COW_AT(1020ada7)
    if (rd32(COW_IMG(0x106644e4u)) == 0u)
    {
        eax = rd32(COW_IMG(0x106644e4u));
        loc_94 = in_ebx;
        loc_98 = in_ebp;
        loc_9c = in_esi;
        loc_a0 = in_edi;
        goto L_1020b325;
    }
    eax = rd32(COW_IMG(0x106644e4u));
    COW_AT(1020adb4)
    if (rd32(arg2) == 0u) goto L_1020b2f7;
    ecx = rd32(arg2);
    COW_AT(1020adbe)
    if (ecx == 1u)
    {
        ecx = ecx - 1u;
        goto L_1020b164;
    }
    ecx = ecx - 1u;
    COW_AT(1020adc5)
    if (ecx != 2u)
    {
        loc_94 = in_ebx;
        loc_98 = in_ebp;
        loc_9c = in_esi;
        loc_a0 = in_edi;
        goto L_1020b325;
    }
    COW_AT(1020adce)
    if (rd32(eax + 0x1cu) == 0u)
    {
        loc_94 = in_ebx;
        loc_98 = in_ebp;
        loc_9c = in_esi;
        loc_a0 = in_edi;
        goto L_1020b325;
    }
    edi = rd32(eax + 0x1cu);
    COW_AT(1020add9)
    if (rd32(arg2 + 4u) == 2u)
    {
        ecx = rd32(arg2 + 4u) - 2u;
    COW_AT(1020b040)
        if (rd32(arg1 + 0x58u) != 5u)
        {
            esi = in_esi;
            loc_94 = in_ebx;
            loc_98 = in_ebp;
            loc_9c = in_esi;
            loc_a0 = in_edi;
        }
        else
        {
    COW_AT(1020b04a)
            wr32(sp0 - 0x8cu, 0u);
            t49 = rd32(arg2 + 8u);
            wr32(sp0 - 0x88u, t49);
            if (rd16(t49) == 0u)
            {
                esi = in_esi;
                loc_94 = in_ebx;
                loc_98 = in_ebp;
                loc_9c = in_esi;
                loc_a0 = in_edi;
            }
            else
            {
                ebx = t49;
                loc_88 = t49;
    COW_AT(1020b063)
                wr32(sp0 - 0x90u, ebx + 4u);
                loc_94 = in_ebx;
                loc_98 = in_ebp;
                loc_9c = in_esi;
                loc_a0 = in_edi;
                loc_8c = 0u;
                loc_90 = ebx + 4u;
                ebx = ebx + 4u;
L_1020b06a: ;
    COW_AT(1020b06a)
                if ((int32_t)rd32(ebx + 4u) >= 0)
                {
    COW_AT(1020b071)
                    if ((int32_t)rd32(eax + 8u) < (int32_t)rd32(eax))
                    {
                        ecx = rd32(eax + 8u);
    COW_AT(1020b07a)
                        t50 = ecx * 0x4cu + rd32(eax + 0x20u);
                        wr32(sp0 - 0xa4u, t50);
                        t51 = ecx * 0x54u + rd32(eax + 0x1cu);
                        wr32(sp0 - 0xa8u, t51);
                        wr32(t50 + 4u, rd32(ebx));
                        t52 = rd32(ebx + 4u);
                        wr32(t50 + 8u, t52);
                        t53 = rd32(ebx + 8u);
                        wr32(t50, 3u);
                        wr32(t50 + 0xcu, t53);
                        g->eax = t50 + 4u;
                        g->esp = sp0 - 0xa0u;
                        t54 = cow_thiscall(g, rd32(rd32(arg1) + 0x78u), arg1, 2, t51, t50);
                        if ((uint8_t)t54 == 0u)
                        {
                            edi = t51;
                        }
                        else
                        {
                            esi = t50;
                            edi = t51;
    COW_AT(1020b0c0)
                            wr32(edi + 0x48u, esi);
                            wr32(rd32(COW_IMG(0x106644e4u)) + 8u, rd32(rd32(COW_IMG(0x106644e4u)) + 8u) + 1u);
                        }
    COW_AT(1020b0cb)
                        eax = rd32(COW_IMG(0x106644e4u));
                        loc_94 = rd32(sp0 - 0x94u);
                        loc_98 = rd32(sp0 - 0x98u);
                        loc_9c = rd32(sp0 - 0x9cu);
                        loc_a0 = rd32(sp0 - 0xa0u);
                        loc_8c = rd32(sp0 - 0x8cu);
                        loc_88 = rd32(sp0 - 0x88u);
                        loc_90 = rd32(sp0 - 0x90u);
                    }
                }
    COW_AT(1020b0d0)
                if ((int32_t)rd32(loc_90 + 8u) >= 0)
                {
                    ebx = loc_90;
    COW_AT(1020b0db)
                    if ((int32_t)rd32(eax + 8u) < (int32_t)rd32(eax))
                    {
                        ecx = rd32(eax + 8u);
    COW_AT(1020b0e4)
                        t55 = ecx * 0x4cu + rd32(eax + 0x20u);
                        wr32(sp0 - 0xa4u, t55);
                        t56 = ecx * 0x54u + rd32(eax + 0x1cu);
                        wr32(sp0 - 0xa8u, t56);
                        wr32(t55 + 4u, rd32(ebx));
                        t57 = rd32(ebx + 4u);
                        wr32(t55 + 8u, t57);
                        t58 = rd32(ebx + 8u);
                        wr32(t55, 4u);
                        wr32(t55 + 0xcu, t58);
                        g->eax = t55 + 4u;
                        g->esp = sp0 - 0xa0u;
                        t59 = cow_thiscall(g, rd32(rd32(arg1) + 0x78u), arg1, 2, t56, t55);
                        if ((uint8_t)t59 == 0u)
                        {
                            edi = t56;
                        }
                        else
                        {
                            esi = t55;
                            edi = t56;
    COW_AT(1020b12a)
                            wr32(edi + 0x48u, esi);
                            wr32(rd32(COW_IMG(0x106644e4u)) + 8u, rd32(rd32(COW_IMG(0x106644e4u)) + 8u) + 1u);
                        }
    COW_AT(1020b135)
                        eax = rd32(COW_IMG(0x106644e4u));
                        loc_94 = rd32(sp0 - 0x94u);
                        loc_98 = rd32(sp0 - 0x98u);
                        loc_9c = rd32(sp0 - 0x9cu);
                        loc_a0 = rd32(sp0 - 0xa0u);
                        loc_8c = rd32(sp0 - 0x8cu);
                        loc_88 = rd32(sp0 - 0x88u);
                        loc_90 = rd32(sp0 - 0x90u);
                    }
                }
    COW_AT(1020b13a)
                wr32(sp0 - 0x8cu, loc_8c + 1u);
                wr32(sp0 - 0x90u, loc_90 + 0xcu);
                if ((int32_t)(loc_8c + 1u) < (int32_t)rd16(loc_88))
                {
                    ebx = loc_90 + 0xcu;
                    loc_8c = loc_8c + 1u;
                    loc_90 = loc_90 + 0xcu;
                    goto L_1020b06a;
                }
                ecx = loc_8c + 1u;
                esi = loc_88;
    COW_AT(1020b15f)
            }
        }
    }
    else
    {
        ecx = rd32(arg2 + 4u) - 2u;
    COW_AT(1020adec)
        if (ecx == 1u)
        {
    COW_AT(1020af05)
            if (rd32(arg1 + 0x58u) == 6u) goto L_1020af12;
            ecx = rd32(arg1 + 0x58u);
    COW_AT(1020af0d)
            if (ecx != 7u)
            {
                esi = in_esi;
                loc_94 = in_ebx;
                loc_98 = in_ebp;
                loc_9c = in_esi;
                loc_a0 = in_edi;
                goto L_1020aedf;
            }
L_1020af12: ;
    COW_AT(1020af12)
            t36 = rd32(arg2 + 8u);
            wr32(sp0 - 0x88u, t36);
            wr32(sp0 - 0xa4u, rd16(t36));
            wr32(sp0 - 0xa8u, t36);
            g->esp = sp0 - 0xa0u;
            cow_thiscall(g, rd32(rd32(arg1) + 0x88u), arg1, 2, t36, rd16(t36));
            if (rd32(rd32(COW_IMG(0x106644e4u)) + 8u) != 0u)
            {
                eax = rd32(COW_IMG(0x106644e4u));
                esi = t36;
                edi = 0u;
            }
            else
            {
                eax = rd32(COW_IMG(0x106644e4u));
                esi = t36;
    COW_AT(1020af39)
                t37 = rd32(sp0 - 0x88u);
                wr32(sp0 - 0xa4u, t37);
                t38 = rd32(eax + 0x1cu);
                wr32(sp0 - 0xa8u, t38);
                g->eax = t38;
                g->esp = sp0 - 0xa0u;
                t39 = cow_thiscall(g, rd32(rd32(arg1) + 0x8cu), arg1, 2, t38, t37);
                if ((uint8_t)t39 == 0u)
                {
                    eax = rd32(COW_IMG(0x106644e4u));
                    edi = 0u;
                }
                else
                {
                    eax = rd32(COW_IMG(0x106644e4u));
    COW_AT(1020af56)
                    wr32(sp0 - 0xa4u, 1u);
                    t40 = rd32(eax + 8u) + 1u;
                    wr32(eax + 8u, t40);
                    t41 = (t40 & 0xffff0000u) | rd16(rd32(COW_IMG(0x106644e4u)) + 8u);
                    wr32(sp0 - 0xa8u, t41);
                    t42 = rd32(rd32(COW_IMG(0x106644e4u)) + 0x1cu);
                    wr32(sp0 - 0xacu, t42);
                    g->esi = esi;
                    g->edi = 0u;
                    g->esp = sp0 - 0xa0u;
                    cow_fastcall(g, COW_IMG(0x101f7020u), arg1, t42, 3, t42, t41, 1u);
                    if ((int32_t)(rd16(esi) + rd32(rd32(COW_IMG(0x106644e4u)) + 8u)) < 10)
                    {
                        eax = rd32(COW_IMG(0x106644e4u));
                        edi = 0u;
                    }
                    else
                    {
                        eax = rd32(COW_IMG(0x106644e4u));
                        ecx = rd16(esi) + rd32(rd32(COW_IMG(0x106644e4u)) + 8u);
    COW_AT(1020af8a)
                        edi = ecx - 0xau;
                    }
                }
            }
    COW_AT(1020af8d)
            wr32(sp0 - 0x8cu, edi);
            if ((int32_t)edi >= (int32_t)rd16(esi))
            {
                ecx = rd16(esi);
                loc_94 = rd32(sp0 - 0x94u);
                loc_98 = rd32(sp0 - 0x98u);
                loc_9c = rd32(sp0 - 0x9cu);
                loc_a0 = rd32(sp0 - 0xa0u);
            }
            else
            {
                loc_8c = edi;
    COW_AT(1020af9e)
                t43 = edi * 0x28u + esi + 0xcu;
                wr32(sp0 - 0x90u, t43);
                loc_90 = t43;
L_1020afa9: ;
    COW_AT(1020afa9)
                if ((int32_t)rd32(eax + 8u) < (int32_t)rd32(eax))
                {
                    ecx = rd32(eax + 8u);
    COW_AT(1020afb2)
                    t44 = ecx * 0x54u + rd32(eax + 0x1cu);
                    wr32(sp0 - 0x84u, t44);
                    t45 = ecx * 0x4cu + rd32(eax + 0x20u);
                    wr32(sp0 - 0xa4u, t45);
                    wr32(sp0 - 0xa8u, t44);
                    t46 = rd32(eax + 0x20u);
                    wr32(t45, 5u);
                    esi = loc_90;
                    edi = t45 + 4u;
                    ecx = 0xau;
                    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                    wr16(t45 + 0x2cu, rd16(rd32(sp0 - 0x88u) + 2u));
                    g->eax = rd32(arg1);
                    t47 = rd32(arg1);
                    g->esp = sp0 - 0xa0u;
                    t48 = cow_thiscall(g, rd32(t47 + 0x78u), arg1, 2, t44, t45);
                    if ((uint8_t)t48 != 0u)
                    {
                        ebx = t45;
    COW_AT(1020b002)
                        wr32(rd32(sp0 - 0x84u) + 0x48u, ebx);
                        wr32(rd32(COW_IMG(0x106644e4u)) + 8u, rd32(rd32(COW_IMG(0x106644e4u)) + 8u) + 1u);
                    }
    COW_AT(1020b011)
                    eax = rd32(COW_IMG(0x106644e4u));
                    loc_8c = rd32(sp0 - 0x8cu);
                    loc_90 = rd32(sp0 - 0x90u);
                }
    COW_AT(1020b016)
                wr32(sp0 - 0x8cu, loc_8c + 1u);
                wr32(sp0 - 0x90u, loc_90 + 0x28u);
                if ((int32_t)(loc_8c + 1u) < (int32_t)rd16(rd32(sp0 - 0x88u)))
                {
                    loc_8c = loc_8c + 1u;
                    loc_90 = loc_90 + 0x28u;
                    goto L_1020afa9;
                }
                ecx = loc_8c + 1u;
                esi = rd32(sp0 - 0x88u);
                edi = loc_90 + 0x28u;
    COW_AT(1020b03b)
                loc_94 = rd32(sp0 - 0x94u);
                loc_98 = rd32(sp0 - 0x98u);
                loc_9c = rd32(sp0 - 0x9cu);
                loc_a0 = rd32(sp0 - 0xa0u);
            }
        }
        else
        {
    COW_AT(1020adf3)
            if ((int32_t)rd32(eax + 8u) >= (int32_t)rd32(eax))
            {
                ecx = rd32(eax + 8u);
                esi = in_esi;
                loc_94 = in_ebx;
                loc_98 = in_ebp;
                loc_9c = in_esi;
                loc_a0 = in_edi;
            }
            else
            {
                ecx = rd32(eax + 8u);
    COW_AT(1020ae00)
                t27 = ecx * 0x54u + edi;
                wr32(sp0 - 0x84u, t27);
                if (rd32(COW_IMG(0x106644e8u)) == 0u)
                {
                    ebx = ecx * 0x4cu + rd32(eax + 0x20u);
                    eax = rd32(COW_IMG(0x106644e8u));
                    esi = rd32(arg2 + 8u);
                    loc_94 = in_ebx;
                    loc_98 = in_ebp;
                    loc_9c = in_esi;
                    loc_a0 = in_edi;
                    loc_84 = t27;
                    goto L_1020aea4;
                }
                edx = t27;
                ebx = ecx * 0x4cu + rd32(eax + 0x20u);
                eax = rd32(COW_IMG(0x106644e8u));
                esi = rd32(arg2 + 8u);
                loc_84 = t27;
    COW_AT(1020ae2b)
                if (eax == rd32(esi + 0x34u))
                {
                    loc_94 = in_ebx;
                    loc_98 = in_ebp;
                    loc_9c = in_esi;
                    loc_a0 = in_edi;
                    goto L_1020aea4;
                }
    COW_AT(1020ae30)
                wr32(ebx, 2u);
                t28 = rd32(esi + 0x34u);
                wr32(ebx + 0x44u, t28);
                if (rd8(COW_IMG(0x106644ecu)) != 0u) goto L_1020ae94;
    COW_AT(1020ae45)
                wr32(sp0 - 0xa4u, ebx);
                wr32(sp0 - 0xa8u, edx);
                g->eax = rd32(arg1);
                t29 = rd32(arg1);
                g->esp = sp0 - 0xa0u;
                t30 = cow_thiscall(g, rd32(t29 + 0x80u), arg1, 2, edx, ebx);
                if ((uint8_t)t30 == 0u)
                {
                    loc_84 = rd32(sp0 - 0x84u);
                    loc_94 = in_ebx;
                    loc_98 = in_ebp;
                    loc_9c = in_esi;
                    loc_a0 = in_edi;
                    goto L_1020ae9c;
                }
    COW_AT(1020ae56)
                t31 = rd32(rd32(COW_IMG(0x106644e4u)) + 8u) + 1u;
                wr32(rd32(COW_IMG(0x106644e4u)) + 8u, t31);
                if ((int32_t)rd32(rd32(COW_IMG(0x106644e4u)) + 8u) >= (int32_t)rd32(rd32(COW_IMG(0x106644e4u))))
                {
                    eax = rd32(COW_IMG(0x106644e4u));
                    ecx = rd32(rd32(COW_IMG(0x106644e4u)) + 8u);
                    edi = t31;
                    loc_94 = rd32(sp0 - 0x94u);
                    loc_98 = rd32(sp0 - 0x98u);
                    loc_9c = rd32(sp0 - 0x9cu);
                    loc_a0 = rd32(sp0 - 0xa0u);
                    goto L_1020aedf;
                }
                eax = rd32(COW_IMG(0x106644e4u));
                ecx = rd32(rd32(COW_IMG(0x106644e4u)) + 8u);
    COW_AT(1020ae70)
                t32 = ecx * 0x54u + rd32(eax + 0x1cu);
                wr32(sp0 - 0x84u, t32);
                ebx = ecx * 0x4cu + rd32(eax + 0x20u);
                loc_84 = t32;
                loc_94 = rd32(sp0 - 0x94u);
                loc_98 = rd32(sp0 - 0x98u);
                loc_9c = rd32(sp0 - 0x9cu);
                loc_a0 = rd32(sp0 - 0xa0u);
L_1020ae9c: ;
    COW_AT(1020ae9c)
                t33 = rd32(esi + 0x34u);
                wr32(COW_IMG(0x106644e8u), t33);
                eax = t33;
L_1020aea4: ;
    COW_AT(1020aea4)
                wr32(ebx, 0u);
                edi = ebx + 4u;
                ecx = 0x12u;
                while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                if (rd8(COW_IMG(0x106644ecu)) != 0u) goto L_1020aed2;
                eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x106644ecu));
    COW_AT(1020aebd)
                wr32(sp0 - 0xa4u, ebx);
                wr32(sp0 - 0xa8u, loc_84);
                g->eax = eax;
                g->esp = sp0 - 0xa0u;
                t34 = cow_thiscall(g, rd32(rd32(arg1) + 0x78u), arg1, 2, loc_84, ebx);
                t35 = g->ecx;
                if ((uint8_t)t34 == 0u)
                {
                    ecx = t35;
                    esi = loc_84;
                    loc_94 = rd32(sp0 - 0x94u);
                    loc_98 = rd32(sp0 - 0x98u);
                    loc_9c = rd32(sp0 - 0x9cu);
                    loc_a0 = rd32(sp0 - 0xa0u);
                    goto L_1020aeda;
                }
                ecx = t35;
                esi = loc_84;
    COW_AT(1020aecf)
                wr32(esi + 0x48u, ebx);
                loc_94 = rd32(sp0 - 0x94u);
                loc_98 = rd32(sp0 - 0x98u);
                loc_9c = rd32(sp0 - 0x9cu);
                loc_a0 = rd32(sp0 - 0xa0u);
L_1020aed2: ;
    COW_AT(1020aed2)
                wr32(rd32(COW_IMG(0x106644e4u)) + 8u, rd32(rd32(COW_IMG(0x106644e4u)) + 8u) + 1u);
L_1020aeda: ;
    COW_AT(1020aeda)
                eax = rd32(COW_IMG(0x106644e4u));
            }
        }
    }
L_1020aedf: ;
    COW_AT(1020aedf)
    wr32(sp0 - 0xa4u, 1u);
    t60 = (ecx & 0xffff0000u) | rd16(eax + 8u);
    wr32(sp0 - 0xa8u, t60);
    t61 = rd32(eax + 0x1cu);
    wr32(sp0 - 0xacu, t61);
    g->esi = esi;
    g->edi = edi;
    g->eax = eax;
    g->esp = sp0 - 0xa0u;
    t62 = cow_fastcall(g, COW_IMG(0x101f7020u), arg1, t61, 3, t61, t60, 1u);
    t63 = g->edx;
    t64 = rd32(sp0 - 0x98u);
    t65 = rd32(sp0 - 0x9cu);
    t66 = rd32(sp0 - 0xa0u);
    wr16(COW_IMG(0x10385a04u), 3u);
    g->ebx = rd32(sp0 - 0x94u);
    g->esi = t65;
    g->edi = t66;
    g->ebp = t64;
    g->edx = t63;
    return t62;
L_1020ae94: ;
    COW_AT(1020ae94)
    wr32(rd32(COW_IMG(0x106644e4u)) + 8u, rd32(rd32(COW_IMG(0x106644e4u)) + 8u) + 1u);
    loc_94 = in_ebx;
    loc_98 = in_ebp;
    loc_9c = in_esi;
    loc_a0 = in_edi;
    goto L_1020ae9c;
L_1020b164: ;
    COW_AT(1020b164)
    if (rd32(eax + 0x1cu) != 0u)
    {
    COW_AT(1020b169)
        if (rd32(eax + 0x1cu) == 0u)
        {
            esi = eax;
        }
        else
        {
            esi = eax;
            eax = rd32(eax + 0x1cu);
    COW_AT(1020b172)
            wr32(sp0 - 0xa4u, eax);
            g->esp = sp0 - 0xa0u;
            cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
            t67 = g->ecx;
            t68 = g->edx;
            wr32(esi + 0x1cu, 0u);
            ecx = t67;
            edx = t68;
        }
    COW_AT(1020b17e)
        if (rd32(esi + 0x20u) != 0u)
        {
            eax = rd32(esi + 0x20u);
    COW_AT(1020b185)
            wr32(sp0 - 0xa4u, eax);
            g->esp = sp0 - 0xa0u;
            cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
            wr32(esi + 0x20u, 0u);
        }
    COW_AT(1020b191)
        wr32(esi, 0xffffffffu);
        eax = rd32(COW_IMG(0x106644e4u));
    }
    COW_AT(1020b19c)
    t69 = rd32(eax + 4u);
    wr32(eax, t69);
    if (rd32(rd32(COW_IMG(0x106644e4u)) + 0x1cu) != 0u)
    {
        eax = rd32(COW_IMG(0x106644e4u));
        ecx = t69;
        loc_94 = in_ebx;
        loc_98 = in_ebp;
        loc_9c = in_esi;
        loc_a0 = in_edi;
    }
    else
    {
        eax = rd32(COW_IMG(0x106644e4u));
        ecx = t69;
    COW_AT(1020b1ab)
        t70 = rd32(eax) * 0x54u;
        wr32(sp0 - 0xa4u, t70);
        g->eax = rd32(eax) * 8u - rd32(eax);
        t71 = rd32(eax);
        g->esp = sp0 - 0x98u;
        t72 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, t70, 1, 3, t70, in_edi, in_esi);
        t73 = g->ecx;
        t74 = g->edx;
        if (t72 == 0u)
        {
            ecx = t73;
    COW_AT(1020b1e6)
            ebp = 0u;
        }
        else
        {
            ecx = t73;
            edx = t74;
            ebp = t72;
            esi = t71;
    COW_AT(1020b1cb)
            if ((int32_t)(esi - 1u) >= 0)
            {
                eax = esi - 1u;
                edi = ebp;
    COW_AT(1020b1d4)
                esi = eax + 1u;
L_1020b1d7: ;
    COW_AT(1020b1d7)
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0xa0u;
                t75 = cow_thiscall(g, COW_IMG(0x101f4af0u), edi, 0);
                t76 = g->ecx;
                t77 = g->edx;
                if (esi != 1u)
                {
                    eax = t75;
                    edx = t77;
                    esi = esi - 1u;
                    edi = edi + 0x54u;
                    goto L_1020b1d7;
                }
                ecx = t76;
    COW_AT(1020b1e4)
            }
        }
    COW_AT(1020b1e8)
        wr32(rd32(COW_IMG(0x106644e4u)) + 0x1cu, ebp);
        eax = rd32(COW_IMG(0x106644e4u));
        loc_94 = rd32(sp0 - 0x94u);
        loc_98 = rd32(sp0 - 0x98u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_a0 = rd32(sp0 - 0xa0u);
    }
    COW_AT(1020b1f7)
    if (rd32(eax + 0x20u) == 0u)
    {
    COW_AT(1020b1fc)
        t78 = rd32(eax) * 0x4cu;
        wr32(sp0 - 0xa4u, t78);
        g->eax = rd32(eax);
        t79 = rd32(eax);
        g->esp = sp0 - 0x98u;
        t80 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t79 * 9u, t78, 1, 3, t78, loc_a0, loc_9c);
        t81 = rd32(COW_IMG(0x106644e4u));
        wr32(t81 + 0x20u, t80);
        eax = rd32(COW_IMG(0x106644e4u));
        ecx = t81;
        loc_94 = rd32(sp0 - 0x94u);
        loc_98 = rd32(sp0 - 0x98u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_a0 = rd32(sp0 - 0xa0u);
    }
    COW_AT(1020b21e)
    wr32(COW_IMG(0x106644f0u), 0u);
    t82 = rd32(arg2 + 8u);
    wr32(eax + 0xcu, t82);
    t83 = rd32(COW_IMG(0x106644e4u));
    wr32(t83 + 8u, 0u);
    if (rd16(arg2 + 0xcu) != 0u)
    {
        eax = t83;
    COW_AT(1020b238)
        t84 = rd32(COW_IMG(0x106644e4u));
        wr16(t84 + 0x10u, rd16(arg2 + 0xeu));
        wr16(rd32(COW_IMG(0x106644e4u)) + 0x12u, rd16(arg2 + 0x10u));
        wr16(rd32(COW_IMG(0x106644e4u)) + 0x14u, rd16(arg2 + 0x12u));
        wr32(COW_IMG(0x106644e8u), 0xffffffffu);
    }
    COW_AT(1020b26b)
    t85 = rd32(rd32(COW_IMG(0x106644e4u)) + 0x20u) + rd32(rd32(COW_IMG(0x106644e4u)) + 8u) * 0x4cu;
    wr32(sp0 - 0xa4u, t85);
    wr32(t85, 1u);
    wr32(arg1 + 0x3cu, 0u);
    wr8(arg1 + 0x44u, 0x20u);
    wr8(arg1 + 0x45u, 0x18u);
    t86 = rd32(rd32(COW_IMG(0x106644e4u)) + 0x1cu) + rd32(rd32(COW_IMG(0x106644e4u)) + 8u) * 0x54u;
    wr32(sp0 - 0xa8u, t86);
    g->eax = rd32(rd32(COW_IMG(0x106644e4u)) + 8u) * 0x15u;
    g->edx = t86;
    t87 = rd32(rd32(COW_IMG(0x106644e4u)) + 8u);
    t88 = rd32(arg1);
    g->esp = sp0 - 0xa0u;
    t89 = cow_thiscall(g, rd32(t88 + 0x7cu), arg1, 2, t86, t85);
    t90 = g->ecx;
    t91 = g->edx;
    if ((uint8_t)t89 == 0u)
    {
        eax = t89;
        edx = t91;
    }
    else
    {
        ecx = t90;
        edi = t88;
    COW_AT(1020b2c0)
        wr32(sp0 - 0xa4u, 1u);
        t92 = rd32(rd32(COW_IMG(0x106644e4u)) + 8u) + 1u;
        wr32(rd32(COW_IMG(0x106644e4u)) + 8u, t92);
        t93 = (ecx & 0xffff0000u) | rd16(rd32(COW_IMG(0x106644e4u)) + 8u);
        wr32(sp0 - 0xa8u, t93);
        t94 = rd32(rd32(COW_IMG(0x106644e4u)) + 0x1cu);
        wr32(sp0 - 0xacu, t94);
        g->esi = arg1;
        g->edi = edi;
        g->eax = rd32(COW_IMG(0x106644e4u));
        t95 = rd32(COW_IMG(0x106644e4u));
        g->esp = sp0 - 0xa0u;
        t96 = cow_fastcall(g, COW_IMG(0x101f7020u), arg1, t94, 3, t94, t93, 1u);
        t97 = g->edx;
        eax = t96;
        edx = t97;
    }
    COW_AT(1020b2e3)
    t98 = rd32(sp0 - 0x98u);
    t99 = rd32(sp0 - 0x9cu);
    t100 = rd32(sp0 - 0xa0u);
    wr16(COW_IMG(0x10385a04u), 2u);
    g->ebx = rd32(sp0 - 0x94u);
    g->esi = t99;
    g->edi = t100;
    g->ebp = t98;
    g->edx = edx;
    return eax;
L_1020b2f7: ;
    COW_AT(1020b2f7)
    if (rd16(arg2 + 8u) != 0u) goto L_1020b30c;
    COW_AT(1020b2fd)
    wr8(eax + 0x16u, 2u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return eax;
L_1020b30c: ;
    COW_AT(1020b30c)
    if (rd16(arg2 + 0xau) != 0u) goto L_1020b321;
    COW_AT(1020b312)
    wr8(eax + 0x16u, 0u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return eax;
L_1020b321: ;
    COW_AT(1020b321)
    wr8(eax + 0x16u, 1u);
    loc_94 = in_ebx;
    loc_98 = in_ebp;
    loc_9c = in_esi;
    loc_a0 = in_edi;
L_1020b325: ;
    COW_AT(1020b325)
    g->ebx = loc_94;
    g->esi = loc_9c;
    g->edi = loc_a0;
    g->ebp = loc_98;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1020ac30(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1020ac45u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x98u);
        in_ebx = rd32(sp0 - 0x94u);
        g->esp = sp0 - 0xa0u;
        g->ebp = 0u;
        wr32(sp0 - 0xa0u, in_edi);
        wr32(sp0 - 0x9cu, in_esi);
        (void)sp0;
        return 1;
    }
    case 0x1020ac4fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x98u);
        in_ebx = rd32(sp0 - 0x94u);
        g->esp = sp0 - 0xa0u;
        g->ebp = 0u;
        wr32(sp0 - 0xa0u, in_edi);
        wr32(sp0 - 0x9cu, in_esi);
        (void)sp0;
        return 1;
    }
    case 0x1020ac5eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x9cu);
        in_ebp = rd32(sp0 - 0x98u);
        in_ebx = rd32(sp0 - 0x94u);
        g->esp = sp0 - 0xa0u;
        g->ebx = arg2;
        g->ebp = 0u;
        wr32(sp0 - 0xa0u, in_edi);
        (void)sp0;
        return 1;
    }
    case 0x1020ac6fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x9cu);
        in_ebp = rd32(sp0 - 0x98u);
        in_ebx = rd32(sp0 - 0x94u);
        g->esp = sp0 - 0xa0u;
        g->ebp = 0u;
        g->esi = arg1;
        wr32(sp0 - 0xa0u, in_edi);
        (void)sp0;
        return 1;
    }
    case 0x1020ac96u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x9cu);
        in_ebp = rd32(sp0 - 0x98u);
        in_ebx = rd32(sp0 - 0x94u);
        g->esp = sp0 - 0xa0u;
        g->ebx = arg2;
        g->ebp = 0u;
        g->esi = arg1;
        wr32(sp0 - 0xa0u, in_edi);
        (void)sp0;
        return 1;
    }
    case 0x1020aca4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x9cu);
        in_ebp = rd32(sp0 - 0x98u);
        in_ebx = rd32(sp0 - 0x94u);
        g->esp = sp0 - 0xa0u;
        g->ebx = arg2;
        g->ebp = 0u;
        g->esi = arg1;
        wr32(sp0 - 0xa0u, in_edi);
        (void)sp0;
        return 1;
    }
    case 0x1020acafu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x9cu);
        in_ebp = rd32(sp0 - 0x98u);
        in_ebx = rd32(sp0 - 0x94u);
        g->esp = sp0 - 0xa0u;
        g->ebx = arg2;
        g->ebp = 0u;
        g->esi = arg1;
        wr32(sp0 - 0xa0u, in_edi);
        (void)sp0;
        return 1;
    }
    case 0x1020acddu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0xa0u;
        g->ebp = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1020acf9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0xa0u;
        g->ebp = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1020ad00u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0xa0u;
        g->ebp = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1020ad08u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0xa0u;
        g->ebp = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1020ad0bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0xa0u;
        g->ebp = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1020ad12u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0xa0u;
        g->ebp = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1020ad19u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0xa0u;
        g->ebp = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1020ad1eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0xa0u;
        g->ebp = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1020ad68u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0xa0u;
        g->ebp = 0u;
        g->esi = arg1;
        wr32(sp0 - 0xb4u, sp0 - 0x80u);
        wr32(sp0 - 0xa4u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1020ad78u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        g->esp = sp0 - 0xa0u;
        g->ebp = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1020ad98u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa0u;
        (void)sp0;
        return 1;
    }
    case 0x1020ada7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xa0u);
        in_ebp = rd32(sp0 - 0x98u);
        in_ebx = rd32(sp0 - 0x94u);
        g->esp = sp0 - 0xa0u;
        g->ebx = arg2;
        g->ebp = 0u;
        wr32(sp0 - 0x9cu, in_esi);
        (void)sp0;
        return 1;
    }
    case 0x1020adb4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xa0u);
        in_ebp = rd32(sp0 - 0x98u);
        in_ebx = rd32(sp0 - 0x94u);
        g->esp = sp0 - 0xa0u;
        g->ebx = arg2;
        g->ebp = 0u;
        wr32(sp0 - 0x9cu, in_esi);
        (void)sp0;
        return 1;
    }
    case 0x1020adbeu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xa0u);
        in_ebp = rd32(sp0 - 0x98u);
        in_ebx = rd32(sp0 - 0x94u);
        g->esp = sp0 - 0xa0u;
        g->ebx = arg2;
        g->ebp = 0u;
        wr32(sp0 - 0x9cu, in_esi);
        (void)sp0;
        return 1;
    }
    case 0x1020adc5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xa0u);
        in_ebp = rd32(sp0 - 0x98u);
        in_ebx = rd32(sp0 - 0x94u);
        g->esp = sp0 - 0xa0u;
        g->ebx = arg2;
        g->ebp = 0u;
        wr32(sp0 - 0x9cu, in_esi);
        (void)sp0;
        return 1;
    }
    case 0x1020adceu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xa0u);
        in_ebp = rd32(sp0 - 0x98u);
        in_ebx = rd32(sp0 - 0x94u);
        g->esp = sp0 - 0xa0u;
        g->ebx = arg2;
        g->ebp = 0u;
        wr32(sp0 - 0x9cu, in_esi);
        (void)sp0;
        return 1;
    }
    case 0x1020add9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xa0u);
        in_ebp = rd32(sp0 - 0x98u);
        in_ebx = rd32(sp0 - 0x94u);
        g->esp = sp0 - 0xa0u;
        g->ebx = arg2;
        wr32(sp0 - 0x9cu, in_esi);
        (void)sp0;
        return 1;
    }
    case 0x1020adecu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xa0u);
        in_ebp = rd32(sp0 - 0x98u);
        in_ebx = rd32(sp0 - 0x94u);
        g->esp = sp0 - 0xa0u;
        g->ebx = arg2;
        g->ebp = arg1;
        wr32(sp0 - 0x9cu, in_esi);
        (void)sp0;
        return 1;
    }
    case 0x1020adf3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xa0u);
        in_ebp = rd32(sp0 - 0x98u);
        in_ebx = rd32(sp0 - 0x94u);
        g->esp = sp0 - 0xa0u;
        g->ebx = arg2;
        g->ebp = arg1;
        wr32(sp0 - 0x9cu, in_esi);
        (void)sp0;
        return 1;
    }
    case 0x1020ae00u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xa0u);
        in_esi = rd32(sp0 - 0x9cu);
        in_ebp = rd32(sp0 - 0x98u);
        in_ebx = rd32(sp0 - 0x94u);
        g->esp = sp0 - 0xa0u;
        g->ebx = arg2;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1020ae2bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_84;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xa0u);
        in_esi = rd32(sp0 - 0x9cu);
        in_ebp = rd32(sp0 - 0x98u);
        in_ebx = rd32(sp0 - 0x94u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0xa0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1020ae30u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_84;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xa0u);
        in_esi = rd32(sp0 - 0x9cu);
        in_ebp = rd32(sp0 - 0x98u);
        in_ebx = rd32(sp0 - 0x94u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0xa0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1020ae45u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_84;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xa0u);
        in_esi = rd32(sp0 - 0x9cu);
        in_ebp = rd32(sp0 - 0x98u);
        in_ebx = rd32(sp0 - 0x94u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0xa0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1020ae56u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1020ae70u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1020ae94u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_84;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xa0u);
        in_esi = rd32(sp0 - 0x9cu);
        in_ebp = rd32(sp0 - 0x98u);
        in_ebx = rd32(sp0 - 0x94u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0xa0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1020ae9cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_84;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0xa0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1020aea4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_84;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0xa0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1020aebdu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_84;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0xa0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1020aecfu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1020aed2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_84;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0xa0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1020aedau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_84;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0xa0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1020aedfu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_8c;
        uint32_t loc_90;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0xa0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1020af05u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xa0u);
        in_ebp = rd32(sp0 - 0x98u);
        in_ebx = rd32(sp0 - 0x94u);
        g->esp = sp0 - 0xa0u;
        g->ebx = arg2;
        g->ebp = arg1;
        wr32(sp0 - 0x9cu, in_esi);
        (void)sp0;
        return 1;
    }
    case 0x1020af0du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xa0u);
        in_ebp = rd32(sp0 - 0x98u);
        in_ebx = rd32(sp0 - 0x94u);
        g->esp = sp0 - 0xa0u;
        g->ebx = arg2;
        g->ebp = arg1;
        wr32(sp0 - 0x9cu, in_esi);
        (void)sp0;
        return 1;
    }
    case 0x1020af12u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xa0u);
        in_esi = rd32(sp0 - 0x9cu);
        in_ebp = rd32(sp0 - 0x98u);
        in_ebx = rd32(sp0 - 0x94u);
        g->esp = sp0 - 0xa0u;
        g->ebx = arg2;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1020af39u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0xa0u;
        g->ebp = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1020af56u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0xa0u;
        g->ebp = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1020af8au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1020af8du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1020af9eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8c = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0xa0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1020afa9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8c;
        uint32_t loc_90;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_90 = rd32(sp0 - 0x90u);
        loc_8c = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0xa0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1020afb2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8c;
        uint32_t loc_90;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_90 = rd32(sp0 - 0x90u);
        loc_8c = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0xa0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1020b002u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1020b011u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1020b016u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8c;
        uint32_t loc_90;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_90 = rd32(sp0 - 0x90u);
        loc_8c = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0xa0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1020b03bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8c;
        uint32_t loc_90;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_90 = rd32(sp0 - 0x90u);
        loc_8c = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0xa0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1020b040u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xa0u);
        in_ebp = rd32(sp0 - 0x98u);
        in_ebx = rd32(sp0 - 0x94u);
        g->esp = sp0 - 0xa0u;
        g->ebx = arg2;
        g->ebp = arg1;
        wr32(sp0 - 0x9cu, in_esi);
        (void)sp0;
        return 1;
    }
    case 0x1020b04au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xa0u);
        in_ebp = rd32(sp0 - 0x98u);
        in_ebx = rd32(sp0 - 0x94u);
        g->esp = sp0 - 0xa0u;
        g->ebx = arg2;
        g->ebp = arg1;
        wr32(sp0 - 0x9cu, in_esi);
        (void)sp0;
        return 1;
    }
    case 0x1020b063u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_88;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xa0u);
        in_esi = rd32(sp0 - 0x9cu);
        in_ebp = rd32(sp0 - 0x98u);
        in_ebx = rd32(sp0 - 0x94u);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xa0u;
        g->ebp = arg1;
        wr32(sp0 - 0x8cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1020b06au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_8c;
        uint32_t loc_90;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xa0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1020b071u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_8c;
        uint32_t loc_90;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xa0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1020b07au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_8c;
        uint32_t loc_90;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xa0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1020b0c0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1020b0cbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1020b0d0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_8c;
        uint32_t loc_90;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xa0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1020b0dbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_8c;
        uint32_t loc_90;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xa0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1020b0e4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_8c;
        uint32_t loc_90;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xa0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1020b12au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1020b135u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1020b13au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_8c;
        uint32_t loc_90;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xa0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1020b15fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_88;
        uint32_t loc_8c;
        uint32_t loc_90;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0xa0u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1020b164u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xa0u);
        in_esi = rd32(sp0 - 0x9cu);
        in_ebp = rd32(sp0 - 0x98u);
        in_ebx = rd32(sp0 - 0x94u);
        g->esp = sp0 - 0xa0u;
        g->ebx = arg2;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1020b169u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xa0u);
        in_esi = rd32(sp0 - 0x9cu);
        in_ebp = rd32(sp0 - 0x98u);
        in_ebx = rd32(sp0 - 0x94u);
        g->esp = sp0 - 0xa0u;
        g->ebx = arg2;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1020b172u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xa0u);
        in_esi = rd32(sp0 - 0x9cu);
        in_ebp = rd32(sp0 - 0x98u);
        in_ebx = rd32(sp0 - 0x94u);
        g->esp = sp0 - 0xa0u;
        g->ebx = arg2;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1020b17eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xa0u);
        in_esi = rd32(sp0 - 0x9cu);
        in_ebp = rd32(sp0 - 0x98u);
        in_ebx = rd32(sp0 - 0x94u);
        g->esp = sp0 - 0xa0u;
        g->ebx = arg2;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1020b185u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xa0u);
        in_esi = rd32(sp0 - 0x9cu);
        in_ebp = rd32(sp0 - 0x98u);
        in_ebx = rd32(sp0 - 0x94u);
        g->esp = sp0 - 0xa0u;
        g->ebx = arg2;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1020b191u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xa0u);
        in_esi = rd32(sp0 - 0x9cu);
        in_ebp = rd32(sp0 - 0x98u);
        in_ebx = rd32(sp0 - 0x94u);
        g->esp = sp0 - 0xa0u;
        g->ebx = arg2;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1020b19cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xa0u);
        in_esi = rd32(sp0 - 0x9cu);
        in_ebp = rd32(sp0 - 0x98u);
        in_ebx = rd32(sp0 - 0x94u);
        g->esp = sp0 - 0xa0u;
        g->ebx = arg2;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1020b1abu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xa0u);
        in_esi = rd32(sp0 - 0x9cu);
        in_ebp = rd32(sp0 - 0x98u);
        in_ebx = rd32(sp0 - 0x94u);
        g->esp = sp0 - 0xa0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1020b1cbu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1020b1d4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1020b1d7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1020b1e4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1020b1e6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1020b1e8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1020b1f7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        g->esp = sp0 - 0xa0u;
        g->ebx = arg2;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1020b1fcu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        g->esp = sp0 - 0xa0u;
        g->ebx = arg2;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1020b21eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        g->esp = sp0 - 0xa0u;
        g->ebx = arg2;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1020b238u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        g->esp = sp0 - 0xa0u;
        g->ebx = arg2;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1020b26bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        g->esp = sp0 - 0xa0u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1020b2c0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0xa0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1020b2e3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa0u;
        (void)sp0;
        return 1;
    }
    case 0x1020b2f7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xa0u);
        in_esi = rd32(sp0 - 0x9cu);
        in_ebp = rd32(sp0 - 0x98u);
        in_ebx = rd32(sp0 - 0x94u);
        g->esp = sp0 - 0xa0u;
        g->ebx = arg2;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1020b2fdu:
    {
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xa0u);
        in_esi = rd32(sp0 - 0x9cu);
        in_ebp = rd32(sp0 - 0x98u);
        in_ebx = rd32(sp0 - 0x94u);
        g->esp = sp0 - 0xa0u;
        (void)sp0;
        return 1;
    }
    case 0x1020b30cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xa0u);
        in_esi = rd32(sp0 - 0x9cu);
        in_ebp = rd32(sp0 - 0x98u);
        in_ebx = rd32(sp0 - 0x94u);
        g->esp = sp0 - 0xa0u;
        g->ebx = arg2;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1020b312u:
    {
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xa0u);
        in_esi = rd32(sp0 - 0x9cu);
        in_ebp = rd32(sp0 - 0x98u);
        in_ebx = rd32(sp0 - 0x94u);
        g->esp = sp0 - 0xa0u;
        (void)sp0;
        return 1;
    }
    case 0x1020b321u:
    {
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xa0u);
        in_esi = rd32(sp0 - 0x9cu);
        in_ebp = rd32(sp0 - 0x98u);
        in_ebx = rd32(sp0 - 0x94u);
        g->esp = sp0 - 0xa0u;
        (void)sp0;
        return 1;
    }
    case 0x1020b325u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        g->esp = sp0 - 0xa0u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1020ac30(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1020ac30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
