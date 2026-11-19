/* f_0x100016c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_100016c0(Guest* g)
{
    double d79;
    double d81;
    double d88;
    double d93;
    double d98;
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
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t loc_3c;
    int64_t q54;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t101;
    uint32_t t102;
    uint32_t t103;
    uint32_t t104;
    uint32_t t105;
    uint32_t t106;
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
    uint32_t t8;
    uint32_t t80;
    uint32_t t82;
    uint32_t t83;
    uint32_t t84;
    uint32_t t85;
    uint32_t t86;
    uint32_t t87;
    uint32_t t89;
    uint32_t t9;
    uint32_t t90;
    uint32_t t91;
    uint32_t t92;
    uint32_t t94;
    uint32_t t95;
    uint32_t t96;
    uint32_t t97;
    uint32_t t99;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 76u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100016dfu: in_eax = g->eax; self = g->ecx; in_edx = g->edx; ebp = g->ebp; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebp = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x30u); g->ebp = rd32(sp0 - 0x34u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_100016df;
    case 0x100016e5u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; ebp = g->ebp; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebp = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x30u); g->ebp = rd32(sp0 - 0x34u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_100016e5;
    case 0x100016f1u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; ebp = g->ebp; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebp = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x30u); g->ebp = rd32(sp0 - 0x34u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_100016f1;
    case 0x100016f7u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; ebp = g->ebp; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebp = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x30u); g->ebp = rd32(sp0 - 0x34u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_100016f7;
    case 0x10001700u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; ebp = g->ebp; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebp = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x30u); g->ebp = rd32(sp0 - 0x34u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_10001700;
    case 0x1000170cu: eax = g->eax; self = g->ecx; in_edx = g->edx; ebp = g->ebp; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebp = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x30u); g->ebp = rd32(sp0 - 0x34u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_1000170c;
    case 0x10001715u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebp = g->ebp; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebp = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x30u); g->ebp = rd32(sp0 - 0x34u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_10001715;
    case 0x1000171du: eax = g->eax; self = g->ecx; in_edx = g->edx; ebp = g->ebp; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebp = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x30u); g->ebp = rd32(sp0 - 0x34u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_1000171d;
    case 0x10001729u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebp = g->ebp; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebp = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x30u); g->ebp = rd32(sp0 - 0x34u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_10001729;
    case 0x10001736u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; goto E_10001736;
    case 0x10001742u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebp = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x30u); g->ebp = rd32(sp0 - 0x34u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_10001742;
    case 0x1000174au: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebp = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x30u); g->ebp = rd32(sp0 - 0x34u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_1000174a;
    case 0x1000174eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); goto E_1000174e;
    case 0x1000175cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); goto E_1000175c;
    case 0x10001765u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); goto E_10001765;
    case 0x1000176eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); goto E_1000176e;
    case 0x10001777u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); goto E_10001777;
    case 0x10001783u: in_eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebp = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x30u); g->ebp = rd32(sp0 - 0x34u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_10001783;
    case 0x10001791u: in_eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebp = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x30u); g->ebp = rd32(sp0 - 0x34u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_10001791;
    case 0x1000179fu: in_eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebp = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x30u); g->ebp = rd32(sp0 - 0x34u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_1000179f;
    case 0x100017adu: in_eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebp = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x30u); g->ebp = rd32(sp0 - 0x34u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_100017ad;
    case 0x100017b9u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebp = g->ebp; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebp = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x30u); g->ebp = rd32(sp0 - 0x34u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_100017b9;
    case 0x100017c2u: self = g->ecx; in_edx = g->edx; ebp = g->ebp; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebp = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x30u); g->ebp = rd32(sp0 - 0x34u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_100017c2;
    case 0x100017cbu: ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebp = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x30u); g->ebp = rd32(sp0 - 0x34u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_100017cb;
    case 0x100017d9u: ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebp = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x30u); g->ebp = rd32(sp0 - 0x34u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_100017d9;
    case 0x100017e2u: self = g->ecx; in_edx = g->edx; ebp = g->ebp; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebp = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x30u); g->ebp = rd32(sp0 - 0x34u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_100017e2;
    case 0x100017ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; goto E_100017eb;
    case 0x100017f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; goto E_100017f0;
    case 0x100017fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; goto E_100017fa;
    case 0x10001803u: in_eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebp = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x30u); g->ebp = rd32(sp0 - 0x34u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_10001803;
    case 0x1000180du: in_eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebp = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x30u); g->ebp = rd32(sp0 - 0x34u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_1000180d;
    case 0x10001816u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebp = g->ebp; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebp = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x30u); g->ebp = rd32(sp0 - 0x34u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_10001816;
    case 0x10001821u: self = g->ecx; in_edx = g->edx; ebp = g->ebp; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebp = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x30u); g->ebp = rd32(sp0 - 0x34u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_10001821;
    case 0x10001828u: ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebp = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x30u); g->ebp = rd32(sp0 - 0x34u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_10001828;
    case 0x10001832u: ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebp = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x30u); g->ebp = rd32(sp0 - 0x34u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_10001832;
    case 0x1000183bu: ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebp = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x30u); g->ebp = rd32(sp0 - 0x34u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_1000183b;
    case 0x10001845u: ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebp = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x30u); g->ebp = rd32(sp0 - 0x34u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_10001845;
    case 0x1000184eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; goto E_1000184e;
    case 0x1000185bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); goto E_1000185b;
    case 0x10001868u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); goto E_10001868;
    case 0x10001877u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); goto E_10001877;
    case 0x1000187eu: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); goto E_1000187e;
    case 0x10001887u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10001887;
    case 0x1000189bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); goto E_1000189b;
    case 0x100018dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100018df;
    case 0x100018eau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100018ea;
    case 0x100018f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100018f7;
    case 0x1000190du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_1000190d;
    case 0x10001943u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10001943;
    case 0x10001949u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10001949;
    case 0x10001a11u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10001a11;
    case 0x10001a1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10001a1f;
    case 0x10001a23u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10001a23;
    case 0x10001a29u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10001a29;
    case 0x10001a32u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10001a32;
    case 0x10001a47u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10001a47;
    case 0x10001a4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10001a4c;
    case 0x10001a51u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10001a51;
    case 0x10001a56u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10001a56;
    case 0x10001a5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10001a5f;
    case 0x10001a68u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10001a68;
    case 0x10001a6au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10001a6a;
    case 0x10001a95u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); goto E_10001a95;
    case 0x10001aa8u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); goto E_10001aa8;
    case 0x10001abbu: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); goto E_10001abb;
    case 0x10001aceu: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); goto E_10001ace;
    case 0x10001ae1u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); goto E_10001ae1;
    case 0x10001af4u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); goto E_10001af4;
    case 0x10001affu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10001aff;
    default: break;
    }
#endif

    COW_AT(100016c0)
    wr32(sp0 - 0x30u, in_ebx);
    wr32(sp0 - 0x34u, in_ebp);
    wr32(sp0 - 0x38u, in_esi);
    wr32(sp0 - 0x3cu, in_edi);
    if (arg2 > 0x10fu) goto L_10001816;
    COW_AT(100016df)
    if (arg2 == 0x10fu)
    {
    COW_AT(10001803)
        if (rd32(COW_IMG(0x10662d40u)) == 0u)
        {
            eax = in_eax;
            ecx = rd32(COW_IMG(0x10662d40u));
            edx = in_edx;
            loc_30 = in_ebx;
            loc_34 = in_ebp;
            loc_38 = in_esi;
            loc_3c = in_edi;
        }
        else
        {
            ecx = rd32(COW_IMG(0x10662d40u));
    COW_AT(1000180d)
            wr32(sp0 - 0x40u, arg4);
            wr32(sp0 - 0x44u, arg3);
            g->edx = in_edx;
            g->esp = sp0 - 0x3cu;
            t21 = cow_call_regs(g, COW_IMG(0x101b20e0u), in_eax, ecx, g->edx, 0, 2, arg3, arg4);
            t22 = g->ecx;
            t23 = g->edx;
            eax = t21;
            ecx = t22;
            edx = t23;
            loc_30 = in_ebx;
            loc_34 = in_ebp;
            loc_38 = in_esi;
            loc_3c = in_edi;
        }
    }
    else
    {
    COW_AT(100016e5)
        if (arg2 > 0x102u)
        {
    COW_AT(100017b9)
            if (arg2 == 0x105u)
            {
    COW_AT(100017e2)
                g->ecx = self;
                g->edx = in_edx;
                g->esp = sp0 - 0x3cu;
                t15 = cow_call_regs(g, COW_IMG(0x100164b0u), arg2 - 0x105u, g->ecx, g->edx, 1, 0);
                t16 = g->ecx;
                t17 = g->edx;
                if ((uint8_t)t15 != 1u)
                {
                    eax = t15;
                    ecx = t16;
                    edx = t17;
                    loc_30 = in_ebx;
                    loc_34 = in_ebp;
                    loc_38 = in_esi;
                    loc_3c = in_edi;
                }
                else
                {
                    eax = t15;
                    ecx = t16;
                    edx = t17;
    COW_AT(100017eb)
                    if (arg3 != 0x79u)
                    {
                        loc_30 = rd32(sp0 - 0x30u);
                        loc_34 = rd32(sp0 - 0x34u);
                        loc_38 = rd32(sp0 - 0x38u);
                        loc_3c = rd32(sp0 - 0x3cu);
                    }
                    else
                    {
    COW_AT(100017f0)
                        if (rd32(COW_IMG(0x10662d40u)) == 0u)
                        {
                            ecx = rd32(COW_IMG(0x10662d40u));
                            loc_30 = rd32(sp0 - 0x30u);
                            loc_34 = rd32(sp0 - 0x34u);
                            loc_38 = rd32(sp0 - 0x38u);
                            loc_3c = rd32(sp0 - 0x3cu);
                        }
                        else
                        {
                            ecx = rd32(COW_IMG(0x10662d40u));
    COW_AT(100017fa)
                            wr32(sp0 - 0x40u, arg4);
                            wr32(sp0 - 0x44u, arg3);
                            g->edx = edx;
                            g->esp = sp0 - 0x3cu;
                            t18 = cow_call_regs(g, COW_IMG(0x101b20e0u), eax, ecx, g->edx, 0, 2, arg3, arg4);
                            t19 = g->ecx;
                            t20 = g->edx;
                            eax = t18;
                            ecx = t19;
                            edx = t20;
                            loc_30 = rd32(sp0 - 0x30u);
                            loc_34 = rd32(sp0 - 0x34u);
                            loc_38 = rd32(sp0 - 0x38u);
                            loc_3c = rd32(sp0 - 0x3cu);
                        }
                    }
                }
            }
            else
            {
    COW_AT(100017c2)
                if (arg2 - 0x105u != 8u)
                {
                    eax = arg2 - 0x10du;
                    ecx = self;
                    edx = in_edx;
                    loc_30 = in_ebx;
                    loc_34 = in_ebp;
                    loc_38 = in_esi;
                    loc_3c = in_edi;
                }
                else
                {
    COW_AT(100017cb)
                    if (rd32(COW_IMG(0x10662d40u)) == 0u)
                    {
                        eax = arg2 - 0x10du;
                        ecx = rd32(COW_IMG(0x10662d40u));
                        edx = in_edx;
                        loc_30 = in_ebx;
                        loc_34 = in_ebp;
                        loc_38 = in_esi;
                        loc_3c = in_edi;
                    }
                    else
                    {
                        ecx = rd32(COW_IMG(0x10662d40u));
    COW_AT(100017d9)
                        wr32(sp0 - 0x40u, arg4);
                        wr32(sp0 - 0x44u, arg3);
                        g->eax = arg2 - 0x10du;
                        g->ecx = ecx;
                        g->edx = in_edx;
                        g->esp = sp0 - 0x3cu;
                        t12 = cow_stdcall(g, COW_IMG(0x101b2800u), 2, arg3, arg4);
                        t13 = g->ecx;
                        t14 = g->edx;
                        eax = t12;
                        ecx = t13;
                        edx = t14;
                        loc_30 = in_ebx;
                        loc_34 = in_ebp;
                        loc_38 = in_esi;
                        loc_3c = in_edi;
                    }
                }
            }
        }
        else
        {
    COW_AT(100016f1)
            if (arg2 == 0x102u)
            {
    COW_AT(1000179f)
                if (rd32(COW_IMG(0x10455c20u)) == 0u)
                {
                    eax = in_eax;
                    ecx = rd32(COW_IMG(0x10455c20u));
                    edx = in_edx;
                    loc_30 = in_ebx;
                    loc_34 = in_ebp;
                    loc_38 = in_esi;
                    loc_3c = in_edi;
                }
                else
                {
                    ecx = rd32(COW_IMG(0x10455c20u));
    COW_AT(100017ad)
                    wr32(sp0 - 0x40u, arg4);
                    wr32(sp0 - 0x44u, arg3);
                    g->ebx = arg2;
                    g->ecx = ecx;
                    g->esp = sp0 - 0x3cu;
                    t9 = cow_call_regs(g, COW_IMG(0x10007860u), in_eax, g->ecx, in_edx, 0, 2, arg3, arg4);
                    t10 = g->ecx;
                    t11 = g->edx;
                    eax = t9;
                    ecx = t10;
                    edx = t11;
                    loc_30 = in_ebx;
                    loc_34 = in_ebp;
                    loc_38 = in_esi;
                    loc_3c = in_edi;
                }
            }
            else
            {
    COW_AT(100016f7)
                if (arg2 == 6u)
                {
    COW_AT(10001783)
                    if (rd32(COW_IMG(0x10455c20u)) == 0u)
                    {
                        eax = in_eax;
                        ecx = rd32(COW_IMG(0x10455c20u));
                        edx = in_edx;
                        loc_30 = in_ebx;
                        loc_34 = in_ebp;
                        loc_38 = in_esi;
                        loc_3c = in_edi;
                    }
                    else
                    {
                        ecx = rd32(COW_IMG(0x10455c20u));
    COW_AT(10001791)
                        wr32(sp0 - 0x40u, arg4);
                        wr32(sp0 - 0x44u, arg3);
                        wr32(sp0 - 0x48u, 6u);
                        g->eax = in_eax;
                        g->esp = sp0 - 0x3cu;
                        t6 = cow_fastcall(g, COW_IMG(0x100087d0u), ecx, in_edx, 3, 6u, arg3, arg4);
                        t7 = g->ecx;
                        t8 = g->edx;
                        eax = t6;
                        ecx = t7;
                        edx = t8;
                        loc_30 = in_ebx;
                        loc_34 = in_ebp;
                        loc_38 = in_esi;
                        loc_3c = in_edi;
                    }
                }
                else
                {
    COW_AT(10001700)
                    if (arg2 != 0x100u)
                    {
                        eax = in_eax;
                        ecx = self;
                        edx = in_edx;
                        loc_30 = in_ebx;
                        loc_34 = in_ebp;
                        loc_38 = in_esi;
                        loc_3c = in_edi;
                    }
                    else
                    {
    COW_AT(1000170c)
                        if (rd32(COW_IMG(0x104566e8u)) == 0u)
                        {
                            eax = rd32(COW_IMG(0x104566e8u));
                            edx = in_edx;
                            loc_30 = in_ebx;
                            loc_34 = in_ebp;
                            loc_38 = in_esi;
                            loc_3c = in_edi;
                        }
                        else
                        {
                            eax = rd32(COW_IMG(0x104566e8u));
    COW_AT(10001715)
                            if (arg3 != 0xe5u)
                            {
    COW_AT(10001742)
                                if (arg3 != 0xffu)
                                {
                                    edx = in_edx;
                                    loc_30 = in_ebx;
                                    loc_34 = in_ebp;
                                    loc_38 = in_esi;
                                    loc_3c = in_edi;
                                }
                                else
                                {
    COW_AT(1000174a)
                                    wr8(eax + 0x14u, 1u);
                                    edx = in_edx;
                                    loc_30 = in_ebx;
                                    loc_34 = in_ebp;
                                    loc_38 = in_esi;
                                    loc_3c = in_edi;
                                }
                            }
                            else
                            {
    COW_AT(1000171d)
                                if (rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u) == 0u)
                                {
                                    eax = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
                                    edx = in_edx;
                                    loc_30 = in_ebx;
                                    loc_34 = in_ebp;
                                    loc_38 = in_esi;
                                    loc_3c = in_edi;
                                }
                                else
                                {
                                    eax = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    COW_AT(10001729)
                                    wr32(sp0 - 0x40u, eax);
                                    g->eax = eax;
                                    g->edx = in_edx;
                                    g->esp = sp0 - 0x3cu;
                                    t1 = cow_stdcall(g, COW_IMG(0x102bc840u), 1, eax);
                                    t2 = g->edx;
                                    if (t1 != 0xffu)
                                    {
                                        eax = t1;
                                        edx = t2;
                                        loc_30 = in_ebx;
                                        loc_34 = in_ebp;
                                        loc_38 = in_esi;
                                        loc_3c = in_edi;
                                    }
                                    else
                                    {
                                        eax = t1;
                                        edx = t2;
    COW_AT(10001736)
                                        wr8(rd32(COW_IMG(0x104566e8u)) + 0x14u, 1u);
                                        loc_30 = rd32(sp0 - 0x30u);
                                        loc_34 = rd32(sp0 - 0x34u);
                                        loc_38 = rd32(sp0 - 0x38u);
                                        loc_3c = rd32(sp0 - 0x3cu);
                                    }
                                }
                            }
                        }
    COW_AT(1000174e)
                        if (rd32(COW_IMG(0x10662d40u)) == 0u)
                        {
                            ecx = rd32(COW_IMG(0x10662d40u));
                        }
                        else
                        {
                            ecx = rd32(COW_IMG(0x10662d40u));
    COW_AT(1000175c)
                            if (arg3 != 0xdu)
                            {
    COW_AT(10001765)
                                if (arg3 != 0x1bu)
                                {
    COW_AT(1000176e)
                                    if (arg3 != 0x6cu)
                                    {
    COW_AT(10001777)
                                        wr32(sp0 - 0x40u, arg4);
                                        wr32(sp0 - 0x44u, arg3);
                                        g->ebx = arg2;
                                        g->eax = eax;
                                        g->esp = sp0 - 0x3cu;
                                        t3 = cow_fastcall(g, COW_IMG(0x101b29f0u), ecx, edx, 2, arg3, arg4);
                                        t4 = g->ecx;
                                        t5 = g->edx;
                                        eax = t3;
                                        ecx = t4;
                                        edx = t5;
                                        loc_30 = rd32(sp0 - 0x30u);
                                        loc_34 = rd32(sp0 - 0x34u);
                                        loc_38 = rd32(sp0 - 0x38u);
                                        loc_3c = rd32(sp0 - 0x3cu);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
L_1000185b: ;
    COW_AT(1000185b)
    if (rd8(COW_IMG(0x1034f92cu)) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1034f92cu));
        goto L_10001aff;
    }
    COW_AT(10001868)
    if (arg2 - 0x200u > 0xau)
    {
        eax = arg2 - 0x200u;
        goto L_10001aff;
    }
    COW_AT(10001877)
    t35 = rd32(COW_IMG(0x10001b20u) + arg2 * 4u - 0x800u);
    switch (t35 - RD)
    {
    case 0x1000187eu: goto L_1000187e;
    case 0x1000189bu: goto L_1000189b;
    case 0x10001a95u: goto L_10001a95;
    case 0x10001aa8u: goto L_10001aa8;
    case 0x10001abbu: goto L_10001abb;
    case 0x10001aceu: goto L_10001ace;
    case 0x10001ae1u: goto L_10001ae1;
    case 0x10001af4u: goto L_10001af4;
    case 0x10001affu: eax = arg2 - 0x200u; goto L_10001aff;
    default: rt_fatal(g, COW_IMG(0x10001877u), "switch");
    }
    return 0;
L_10001816: ;
    COW_AT(10001816)
    if (arg2 - 0x281u > 5u)
    {
        eax = arg2 - 0x281u;
        ecx = self;
        edx = in_edx;
        loc_30 = in_ebx;
        loc_34 = in_ebp;
        loc_38 = in_esi;
        loc_3c = in_edi;
        goto L_1000185b;
    }
    COW_AT(10001821)
    t24 = rd32(COW_IMG(0x10001b08u) + arg2 * 4u - 0xa04u);
    switch (t24 - RD)
    {
    case 0x10001828u: goto L_10001828;
    case 0x1000183bu: goto L_1000183b;
    case 0x1000185bu: eax = arg2 - 0x281u; ecx = self; edx = in_edx; loc_30 = in_ebx; loc_34 = in_ebp; loc_38 = in_esi; loc_3c = in_edi; goto L_1000185b;
    case 0x10001affu: eax = arg2 - 0x281u; edx = in_edx; loc_30 = in_ebx; loc_34 = in_ebp; loc_38 = in_esi; loc_3c = in_edi; goto L_10001aff;
    default: rt_fatal(g, COW_IMG(0x10001821u), "switch");
    }
    return 0;
L_10001828: ;
    COW_AT(10001828)
    if (rd32(COW_IMG(0x10662d40u)) == 0u)
    {
        eax = arg2 - 0x281u;
        ecx = rd32(COW_IMG(0x10662d40u));
        edx = in_edx;
        loc_30 = in_ebx;
        loc_34 = in_ebp;
        loc_38 = in_esi;
        loc_3c = in_edi;
    }
    else
    {
        ecx = rd32(COW_IMG(0x10662d40u));
    COW_AT(10001832)
        wr32(sp0 - 0x40u, arg4);
        wr32(sp0 - 0x44u, arg3);
        g->eax = arg2 - 0x281u;
        g->ecx = ecx;
        g->edx = in_edx;
        g->esp = sp0 - 0x3cu;
        t32 = cow_stdcall(g, COW_IMG(0x101b27f0u), 2, arg3, arg4);
        t33 = g->ecx;
        t34 = g->edx;
        eax = t32;
        ecx = t33;
        edx = t34;
        loc_30 = in_ebx;
        loc_34 = in_ebp;
        loc_38 = in_esi;
        loc_3c = in_edi;
    }
    goto L_1000185b;
L_1000183b: ;
    COW_AT(1000183b)
    if (rd32(COW_IMG(0x10662d40u)) == 0u)
    {
        eax = arg2 - 0x281u;
        ecx = rd32(COW_IMG(0x10662d40u));
        edx = in_edx;
        loc_30 = in_ebx;
        loc_34 = in_ebp;
        loc_38 = in_esi;
        loc_3c = in_edi;
    }
    else
    {
        ecx = rd32(COW_IMG(0x10662d40u));
    COW_AT(10001845)
        g->eax = arg2 - 0x281u;
        g->edx = in_edx;
        g->esp = sp0 - 0x3cu;
        t25 = cow_thiscall(g, COW_IMG(0x101b5c90u), ecx, 0);
        t26 = g->ecx;
        t27 = g->edx;
        if ((uint8_t)t25 == 0u)
        {
            eax = t25;
            ecx = t26;
            edx = t27;
            loc_30 = in_ebx;
            loc_34 = in_ebp;
            loc_38 = in_esi;
            loc_3c = in_edi;
        }
        else
        {
            eax = t25;
            edx = t27;
    COW_AT(1000184e)
            wr32(sp0 - 0x40u, arg4);
            wr32(sp0 - 0x44u, arg3);
            g->ebx = arg2;
            g->edx = edx;
            t28 = rd32(COW_IMG(0x10662d40u));
            g->esp = sp0 - 0x3cu;
            t29 = cow_call_regs(g, COW_IMG(0x101b2710u), eax, t28, g->edx, 0, 2, arg3, arg4);
            t30 = g->ecx;
            t31 = g->edx;
            eax = t29;
            ecx = t30;
            edx = t31;
            loc_30 = rd32(sp0 - 0x30u);
            loc_34 = rd32(sp0 - 0x34u);
            loc_38 = rd32(sp0 - 0x38u);
            loc_3c = rd32(sp0 - 0x3cu);
        }
    }
    goto L_1000185b;
L_1000187e: ;
    COW_AT(1000187e)
    g->eax = arg2 - 0x200u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x3cu;
    t48 = cow_stdcall(g, COW_IMG(0x1025e070u), 0);
    t49 = g->ecx;
    t50 = g->edx;
    if ((uint8_t)t48 == 0u)
    {
        loc_30 = rd32(sp0 - 0x30u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_3c = rd32(sp0 - 0x3cu);
        goto L_1000189b;
    }
    eax = t48;
    ecx = t49;
    edx = t50;
    COW_AT(10001887)
    wr32(sp0 - 0x40u, arg3 >> 0x10u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x3cu;
    t51 = cow_cdecl(g, COW_IMG(0x10001d90u), 1, arg3 >> 0x10u);
    t52 = g->edx;
    g->ebx = rd32(sp0 - 0x30u);
    g->esi = rd32(sp0 - 0x38u);
    g->edi = rd32(sp0 - 0x3cu);
    g->ebp = rd32(sp0 - 0x34u);
    g->edx = t52;
    return t51;
L_1000189b: ;
    COW_AT(1000189b)
    t53 = rd32(COW_IMG(0x104e1d4cu));
    wr16(t53 + 0x84u, arg3 >> 0x10u);
    q54 = (int64_t)cow_muls(0x88888889u, (uint32_t)(int16_t)(arg3 >> 0x10u));
    t55 = (uint32_t)((int32_t)(cow_qhi(q54) + (uint32_t)(int16_t)(arg3 >> 0x10u)) >> 6u);
    t56 = t55 + (t55 >> 0x1fu);
    t57 = rd32(rd32(COW_IMG(0x104e1d4cu)) + 4u);
    wr32(sp0 - 0x20u, t57);
    t58 = rd32(rd32(COW_IMG(0x104e1d4cu)) + 8u);
    wr32(sp0 - 0x1cu, t58);
    g->eax = rd32(COW_IMG(0x104e1d4cu));
    g->edx = t56;
    t59 = rd32(COW_IMG(0x104e1d4cu));
    g->esp = sp0 - 0x3cu;
    t60 = cow_stdcall(g, COW_IMG(0x1025e070u), 0);
    t61 = g->edx;
    if ((uint8_t)t60 == 0u)
    {
        edx = t61;
        ebx = t56;
        ebp = t57;
    COW_AT(100018ea)
        eax = arg4 >> 0x10u;
        esi = (uint16_t)arg4;
    }
    else
    {
        edx = t61;
        ebx = t56;
        ebp = t57;
    COW_AT(100018df)
        eax = (uint32_t)(int16_t)(arg4 >> 0x10u);
        esi = (uint32_t)(int16_t)arg4;
    }
    COW_AT(100018f7)
    wr32(sp0 - 0x28u, esi);
    wr32(sp0 - 0x24u, eax);
    if (rd32(COW_IMG(0x10456a7cu)) != 0u)
    {
        loc_28 = esi;
        loc_24 = eax;
    COW_AT(1000190d)
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        t62 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
        wr32(sp0 - 0x44u, t62);
        g->eax = rd32(COW_IMG(0x103d3c64u));
        g->ecx = t62;
        g->edx = sp0 - 0x10u;
        t63 = rd32(COW_IMG(0x103d3c64u));
        g->esp = sp0 - 0x3cu;
        t64 = cow_stdcall(g, rd32(COW_IMG(0x103293e4u)), 2, t62, sp0 - 0x10u);   /* user32.dll!GetWindowRect */
        t65 = g->ecx;
        t66 = g->edx;
        wr32(sp0 - 0x40u, 0x20u);
        g->ecx = t65;
        g->edx = t66;
        t67 = rd32(COW_IMG(0x103293a0u));
        t68 = cow_stdcall(g, t67, 1, 0x20u);   /* user32.dll!GetSystemMetrics */
        t69 = g->ecx;
        t70 = g->edx;
        wr32(sp0 - 0x40u, 0x21u);
        g->edx = t70;
        t71 = cow_thiscall(g, t67, t69, 1, 0x21u);
        t72 = g->ecx;
        t73 = g->edx;
        wr32(sp0 - 0x40u, 4u);
        t74 = cow_thiscall(g, t67, t72, 1, 4u);
        if (rd32(COW_IMG(0x10456a7cu)) != 3u)
        {
            ebp = t74;
            esi = t68;
            edi = t71;
        }
        else
        {
    COW_AT(10001943)
            ebp = 0u;
            esi = 0u;
            edi = 0u;
        }
    COW_AT(10001949)
        t75 = rd32(sp0 - 8u);
        t76 = t75 - rd32(sp0 - 0x10u);
        t77 = rd32(sp0 - 0x10u);
        wr32(sp0 + 4u, t76);
        t78 = t75 - esi * 2u - t77;
        d79 = fr(g, (double)(int32_t)rd32(sp0 - 0x28u) * (double)(int32_t)rd32(sp0 + 4u));
        t80 = rd32(sp0 + 4u);
        wr32(sp0 + 4u, t78);
        d81 = fr(g, d79 / (double)(int32_t)rd32(sp0 + 4u));
        fpush(g, d81);
        g->esp = sp0 - 0x3cu;
        t82 = cow_call_regs(g, COW_IMG(0x10311c6cu), t78, g->ecx, g->edx, 1, 0);
        wr32(sp0 - 0x28u, t82);
        t83 = rd32(sp0 - 4u);
        t84 = t83 - rd32(sp0 - 0xcu);
        t85 = rd32(sp0 - 0xcu);
        wr32(sp0 + 4u, t84);
        t86 = rd32(sp0 + 4u);
        wrf32(sp0 + 4u, (float)(double)(int32_t)t86);
        t87 = t83 - edi * 2u - t85 - ebp;
        wr32(sp0 - 0x2cu, t87);
        g->edx = edi * 2u;
        d88 = fr(g, fr(g, (double)(int32_t)rd32(sp0 - 0x24u) * (double)rdf32(sp0 + 4u)) / (double)(int32_t)t87);
        fpush(g, d88);
        t89 = cow_call_regs(g, COW_IMG(0x10311c6cu), t87, g->ecx, g->edx, 1, 0);
        t90 = g->edx;
        wr32(sp0 - 0x24u, t89);
        t91 = (uint32_t)(int16_t)rd16(COW_IMG(0x106218b8u)) - (uint32_t)(int16_t)rd16(COW_IMG(0x106218b4u));
        wr32(sp0 - 0x2cu, t91);
        g->ecx = t91;
        t92 = rd16(COW_IMG(0x106218b4u));
        d93 = fr(g, (double)(int32_t)t91 * fr(g, (double)(int32_t)rd32(sp0 - 0x28u) / (double)(int32_t)t80));
        fpush(g, d93);
        t94 = cow_call_regs(g, COW_IMG(0x10311c6cu), (uint32_t)(int16_t)t92, g->ecx, g->edx, 1, 0);
        t95 = g->ecx;
        wr32(sp0 - 0x28u, t94);
        t96 = (uint32_t)(int16_t)rd16(COW_IMG(0x106218bau)) - (uint32_t)(int16_t)rd16(COW_IMG(0x106218b6u));
        wr32(sp0 - 0x2cu, t96);
        g->edx = (uint32_t)(int16_t)rd16(COW_IMG(0x106218b6u));
        t97 = rd16(COW_IMG(0x106218b6u));
        d98 = fr(g, (double)(int32_t)t96 * fr(g, (double)(int32_t)rd32(sp0 - 0x24u) / (double)rdf32(sp0 + 4u)));
        fpush(g, d98);
        t99 = cow_call_regs(g, COW_IMG(0x10311c6cu), t96, g->ecx, g->edx, 1, 0);
        t100 = g->edx;
        wr32(sp0 - 0x24u, t99);
        eax = t99;
        edx = t100;
        ebp = rd32(sp0 - 0x20u);
        esi = t94;
    }
    COW_AT(10001a11)
    if (rd32(COW_IMG(0x104e1d4cu)) == 0u)
    {
        loc_30 = rd32(sp0 - 0x30u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_3c = rd32(sp0 - 0x3cu);
        goto L_10001aff;
    }
    ecx = rd32(COW_IMG(0x104e1d4cu));
    COW_AT(10001a1f)
    if (esi != ebp) goto L_10001a32;
    COW_AT(10001a23)
    if (eax != rd32(sp0 - 0x1cu)) goto L_10001a32;
    COW_AT(10001a29)
    if ((uint16_t)ebx == 0u)
    {
        loc_30 = rd32(sp0 - 0x30u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_3c = rd32(sp0 - 0x3cu);
        goto L_10001aff;
    }
L_10001a32: ;
    COW_AT(10001a32)
    wr32(sp0 - 0x18u, esi - ebp);
    t101 = eax - rd32(sp0 - 0x1cu);
    wr32(sp0 - 0x14u, t101);
    if ((uint16_t)ebx != 0u)
    {
        eax = t101;
        edx = rd32(sp0 - 0x1cu);
        goto L_10001a5f;
    }
    eax = t101;
    edx = rd32(sp0 - 0x1cu);
    esi = esi - ebp;
    COW_AT(10001a47)
    if ((int32_t)esi < -2) goto L_10001a5f;
    COW_AT(10001a4c)
    if ((int32_t)esi > 2) goto L_10001a5f;
    COW_AT(10001a51)
    if ((int32_t)eax < -2) goto L_10001a5f;
    COW_AT(10001a56)
    if ((int32_t)eax <= 2)
    {
        loc_30 = rd32(sp0 - 0x30u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_3c = rd32(sp0 - 0x3cu);
        goto L_10001aff;
    }
L_10001a5f: ;
    COW_AT(10001a5f)
    g->eax = eax;
    g->esp = sp0 - 0x3cu;
    t102 = cow_stdcall(g, COW_IMG(0x1025e070u), 0);
    if ((uint8_t)t102 == 0u)
    {
        eax = t102;
    }
    else
    {
        eax = t102;
    COW_AT(10001a68)
        ebx = 0u;
    }
    COW_AT(10001a6a)
    wr32(sp0 - 0x40u, sp0 - 0x28u);
    wr32(sp0 - 0x44u, ebx);
    wr32(sp0 - 0x48u, sp0 - 0x18u);
    g->eax = eax;
    g->edx = sp0 - 0x18u;
    g->esp = sp0 - 0x3cu;
    t103 = cow_thiscall(g, COW_IMG(0x101245d0u), rd32(COW_IMG(0x104e1d4cu)), 3, sp0 - 0x18u, ebx, sp0 - 0x28u);
    t104 = g->edx;
    wr32(sp0 - 0x40u, 1u);
    t105 = cow_fastcall(g, COW_IMG(0x101252f0u), rd32(COW_IMG(0x104e1d4cu)), t104, 1, 1u);
    t106 = g->edx;
    g->ebx = rd32(sp0 - 0x30u);
    g->esi = rd32(sp0 - 0x38u);
    g->edi = rd32(sp0 - 0x3cu);
    g->ebp = rd32(sp0 - 0x34u);
    g->edx = t106;
    return t105;
L_10001a95: ;
    COW_AT(10001a95)
    g->eax = arg2 - 0x200u;
    g->edx = edx;
    g->esp = sp0 - 0x3cu;
    t46 = cow_thiscall(g, COW_IMG(0x10124930u), rd32(COW_IMG(0x104e1d4cu)), 0);
    t47 = g->edx;
    g->ebx = rd32(sp0 - 0x30u);
    g->esi = rd32(sp0 - 0x38u);
    g->edi = rd32(sp0 - 0x3cu);
    g->ebp = rd32(sp0 - 0x34u);
    g->edx = t47;
    return t46;
L_10001aa8: ;
    COW_AT(10001aa8)
    g->eax = arg2 - 0x200u;
    g->edx = edx;
    g->esp = sp0 - 0x3cu;
    t44 = cow_thiscall(g, COW_IMG(0x101249e0u), rd32(COW_IMG(0x104e1d4cu)), 0);
    t45 = g->edx;
    g->ebx = rd32(sp0 - 0x30u);
    g->esi = rd32(sp0 - 0x38u);
    g->edi = rd32(sp0 - 0x3cu);
    g->ebp = rd32(sp0 - 0x34u);
    g->edx = t45;
    return t44;
L_10001abb: ;
    COW_AT(10001abb)
    g->eax = arg2 - 0x200u;
    g->edx = edx;
    g->esp = sp0 - 0x3cu;
    t42 = cow_thiscall(g, COW_IMG(0x10124a00u), rd32(COW_IMG(0x104e1d4cu)), 0);
    t43 = g->edx;
    g->ebx = rd32(sp0 - 0x30u);
    g->esi = rd32(sp0 - 0x38u);
    g->edi = rd32(sp0 - 0x3cu);
    g->ebp = rd32(sp0 - 0x34u);
    g->edx = t43;
    return t42;
L_10001ace: ;
    COW_AT(10001ace)
    g->eax = arg2 - 0x200u;
    g->edx = edx;
    g->esp = sp0 - 0x3cu;
    t40 = cow_thiscall(g, COW_IMG(0x10124ab0u), rd32(COW_IMG(0x104e1d4cu)), 0);
    t41 = g->edx;
    g->ebx = rd32(sp0 - 0x30u);
    g->esi = rd32(sp0 - 0x38u);
    g->edi = rd32(sp0 - 0x3cu);
    g->ebp = rd32(sp0 - 0x34u);
    g->edx = t41;
    return t40;
L_10001ae1: ;
    COW_AT(10001ae1)
    g->eax = arg2 - 0x200u;
    g->edx = edx;
    g->esp = sp0 - 0x3cu;
    t38 = cow_thiscall(g, COW_IMG(0x10124ad0u), rd32(COW_IMG(0x104e1d4cu)), 0);
    t39 = g->edx;
    g->ebx = rd32(sp0 - 0x30u);
    g->esi = rd32(sp0 - 0x38u);
    g->edi = rd32(sp0 - 0x3cu);
    g->ebp = rd32(sp0 - 0x34u);
    g->edx = t39;
    return t38;
L_10001af4: ;
    COW_AT(10001af4)
    g->eax = arg2 - 0x200u;
    g->edx = edx;
    g->esp = sp0 - 0x3cu;
    t36 = cow_thiscall(g, COW_IMG(0x10124b50u), rd32(COW_IMG(0x104e1d4cu)), 0);
    t37 = g->edx;
    eax = t36;
    edx = t37;
    loc_30 = rd32(sp0 - 0x30u);
    loc_34 = rd32(sp0 - 0x34u);
    loc_38 = rd32(sp0 - 0x38u);
    loc_3c = rd32(sp0 - 0x3cu);
L_10001aff: ;
    COW_AT(10001aff)
    g->ebx = loc_30;
    g->esi = loc_38;
    g->edi = loc_3c;
    g->ebp = loc_34;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100016c0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100016dfu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebp;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebp = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        g->ebx = arg2;
        g->esi = arg3;
        g->edi = arg4;
        g->zf = (uint8_t)(arg2 == 0x10fu);
        (void)sp0;
        return 1;
    }
    case 0x100016e5u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebp;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebp = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        g->ebx = arg2;
        g->esi = arg3;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x100016f1u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebp;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebp = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        g->ebx = arg2;
        g->esi = arg3;
        g->edi = arg4;
        g->zf = (uint8_t)(arg2 == 0x102u);
        (void)sp0;
        return 1;
    }
    case 0x100016f7u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebp;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebp = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        g->ebx = arg2;
        g->esi = arg3;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x10001700u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebp;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebp = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        g->ebx = arg2;
        g->esi = arg3;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x1000170cu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebp = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        g->ebx = arg2;
        g->esi = arg3;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x10001715u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebp = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        g->ebx = arg2;
        g->esi = arg3;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x1000171du:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebp = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        g->ebx = arg2;
        g->esi = arg3;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x10001729u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebp = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        g->ebx = arg2;
        g->esi = arg3;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x10001736u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        g->esp = sp0 - 0x3cu;
        g->ebx = arg2;
        g->esi = arg3;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x10001742u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebp = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        g->ebx = arg2;
        g->esi = arg3;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x1000174au:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebp = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        g->ebx = arg2;
        g->esi = arg3;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x1000174eu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        g->ebx = arg2;
        g->esi = arg3;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x1000175cu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        g->ebx = arg2;
        g->esi = arg3;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x10001765u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        g->ebx = arg2;
        g->esi = arg3;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x1000176eu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        g->ebx = arg2;
        g->esi = arg3;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x10001777u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        g->ebx = arg2;
        g->esi = arg3;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x10001783u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebp = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        g->ebx = arg2;
        g->esi = arg3;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x10001791u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebp = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        g->ebx = arg2;
        g->esi = arg3;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x1000179fu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebp = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        g->ebx = arg2;
        g->esi = arg3;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x100017adu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebp = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        g->ebx = arg2;
        g->esi = arg3;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x100017b9u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebp = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        g->ebx = arg2;
        g->esi = arg3;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x100017c2u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebp;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebp = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        g->eax = arg2 - 0x105u;
        g->ebx = arg2;
        g->esi = arg3;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x100017cbu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebp = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        g->eax = arg2 - 0x10du;
        g->ebx = arg2;
        g->esi = arg3;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x100017d9u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebp = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        g->eax = arg2 - 0x10du;
        g->ebx = arg2;
        g->esi = arg3;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x100017e2u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebp;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebp = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        g->eax = arg2 - 0x105u;
        g->ebx = arg2;
        g->esi = arg3;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x100017ebu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        g->esp = sp0 - 0x3cu;
        g->ebx = arg2;
        g->esi = arg3;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x100017f0u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        g->esp = sp0 - 0x3cu;
        g->ebx = arg2;
        g->esi = arg3;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x100017fau:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        g->esp = sp0 - 0x3cu;
        g->ebx = arg2;
        g->esi = arg3;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x10001803u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebp = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        g->ebx = arg2;
        g->esi = arg3;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x1000180du:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebp = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        g->ebx = arg2;
        g->esi = arg3;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x10001816u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebp = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        g->ebx = arg2;
        g->esi = arg3;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x10001821u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebp;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebp = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        g->eax = arg2 - 0x281u;
        g->ebx = arg2;
        g->esi = arg3;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x10001828u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebp = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        g->eax = arg2 - 0x281u;
        g->ebx = arg2;
        g->esi = arg3;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x10001832u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebp = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        g->eax = arg2 - 0x281u;
        g->ebx = arg2;
        g->esi = arg3;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x1000183bu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebp = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        g->eax = arg2 - 0x281u;
        g->ebx = arg2;
        g->esi = arg3;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x10001845u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebp = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        g->eax = arg2 - 0x281u;
        g->ebx = arg2;
        g->esi = arg3;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x1000184eu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        g->esp = sp0 - 0x3cu;
        g->ebx = arg2;
        g->esi = arg3;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x1000185bu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        g->ebx = arg2;
        g->esi = arg3;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x10001868u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        g->ebx = arg2;
        g->esi = arg3;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x10001877u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        g->eax = arg2 - 0x200u;
        g->esi = arg3;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x1000187eu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        g->eax = arg2 - 0x200u;
        g->esi = arg3;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x10001887u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x3cu;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1000189bu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        g->esi = arg3;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x100018dfu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x3cu;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x100018eau:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x3cu;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x100018f7u:
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
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1000190du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10001943u:
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
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10001949u:
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
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10001a11u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10001a1fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10001a23u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10001a29u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10001a32u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10001a47u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10001a4cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10001a51u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10001a56u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10001a5fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10001a68u:
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
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10001a6au:
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
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10001a95u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        g->eax = arg2 - 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x10001aa8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        g->eax = arg2 - 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x10001abbu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        g->eax = arg2 - 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x10001aceu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        g->eax = arg2 - 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x10001ae1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        g->eax = arg2 - 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x10001af4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x3cu;
        g->eax = arg2 - 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x10001affu:
    {
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
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100016c0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100016c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
