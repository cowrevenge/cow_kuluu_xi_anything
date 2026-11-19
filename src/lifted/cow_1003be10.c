/* f_0x1003be10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=3 */
uint32_t cow_fn_1003be10(Guest* g)
{
    double d101;
    double d102;
    double d103;
    double d106;
    double d109;
    double d112;
    double d115;
    double d41;
    double d56;
    double d98;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    double loc_34_f;
    uint32_t loc_48;
    uint32_t loc_5c;
    uint32_t loc_60;
    uint32_t loc_64;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t104;
    uint32_t t105;
    uint32_t t107;
    uint32_t t108;
    uint32_t t11;
    uint32_t t110;
    uint32_t t111;
    uint32_t t113;
    uint32_t t114;
    uint32_t t116;
    uint32_t t117;
    uint32_t t118;
    uint32_t t119;
    uint32_t t12;
    uint32_t t120;
    uint32_t t121;
    uint32_t t122;
    uint32_t t123;
    uint32_t t124;
    uint32_t t125;
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
    uint32_t t99;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 128u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1003be75u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003be75;
    case 0x1003be82u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003be82;
    case 0x1003be84u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003be84;
    case 0x1003bea0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003bea0;
    case 0x1003bea7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003bea7;
    case 0x1003bea9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003bea9;
    case 0x1003beadu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003bead;
    case 0x1003beb5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003beb5;
    case 0x1003bf15u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003bf15;
    case 0x1003bf17u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003bf17;
    case 0x1003bf1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003bf1b;
    case 0x1003bf23u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003bf23;
    case 0x1003bf83u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003bf83;
    case 0x1003bf87u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003bf87;
    case 0x1003bf95u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003bf95;
    case 0x1003bff7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003bff7;
    case 0x1003bffbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003bffb;
    case 0x1003c009u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003c009;
    case 0x1003c06bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003c06b;
    case 0x1003c07eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1003c07e;
    case 0x1003c0bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003c0ba;
    case 0x1003c0bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003c0bc;
    case 0x1003c0c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003c0c4;
    case 0x1003c0ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003c0cc;
    case 0x1003c101u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_48 = rd32(sp0 - 0x48u); goto E_1003c101;
    case 0x1003c12eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003c12e;
    case 0x1003c130u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003c130;
    case 0x1003c138u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003c138;
    case 0x1003c140u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003c140;
    case 0x1003c177u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003c177;
    case 0x1003c17fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003c17f;
    case 0x1003c1b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003c1b0;
    case 0x1003c1b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003c1b8;
    case 0x1003c1d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003c1d6;
    case 0x1003c1d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003c1d8;
    case 0x1003c1e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003c1e0;
    case 0x1003c1e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003c1e8;
    case 0x1003c216u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_48 = rd32(sp0 - 0x48u); goto E_1003c216;
    case 0x1003c231u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1003c231;
    case 0x1003c24bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003c24b;
    case 0x1003c24du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003c24d;
    case 0x1003c255u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003c255;
    case 0x1003c25du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003c25d;
    case 0x1003c277u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_48 = rd32(sp0 - 0x48u); goto E_1003c277;
    case 0x1003c2b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); self = rd32(sp0 - 0x2cu); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003c2b4;
    case 0x1003c2bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); self = rd32(sp0 - 0x2cu); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003c2bc;
    case 0x1003c31du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); self = rd32(sp0 - 0x2cu); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003c31d;
    case 0x1003c325u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); self = rd32(sp0 - 0x2cu); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003c325;
    case 0x1003c379u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003c379;
    case 0x1003c37du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003c37d;
    case 0x1003c395u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003c395;
    case 0x1003c3c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003c3c3;
    case 0x1003c3cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003c3cb;
    case 0x1003c3efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003c3ef;
    case 0x1003c3f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003c3f3;
    case 0x1003c401u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003c401;
    case 0x1003c497u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003c497;
    case 0x1003c49bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003c49b;
    case 0x1003c4a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003c4a9;
    case 0x1003c513u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003c513;
    case 0x1003c52au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003c52a;
    case 0x1003c555u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003c555;
    case 0x1003c590u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003c590;
    case 0x1003c5c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1003c5c9;
    case 0x1003c5f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1003c5f0;
    case 0x1003c603u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_5c = rd32(sp0 - 0x5cu); loc_48 = rd32(sp0 - 0x48u); loc_34_f = rdf32(sp0 - 0x34u); goto E_1003c603;
    default: break;
    }
#endif

    COW_AT(1003be10)
    wr32(sp0 - 0x38u, in_ebx);
    wr32(sp0 - 0x3cu, in_ebp);
    wr32(sp0 - 0x40u, in_esi);
    wr32(sp0 - 0x44u, in_edi);
    wr32(sp0 - 0x2cu, self);
    t1 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
    t2 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
    wr32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u, t1);
    wr32(sp0 - 0x30u, t2);
    wr32(sp0 - 0x34u, 0u);
    t3 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
    t4 = rd32(COW_IMG(0x1047cf7cu));
    t5 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
    wr32(t4 + 0xa90u, t3);
    wr32(sp0 - 0x28u, t5);
    g->eax = t4;
    g->edx = t5;
    g->esp = sp0 - 0x44u;
    t6 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self, 0);
    t7 = g->edx;
    g->edx = t7;
    t8 = cow_thiscall(g, COW_IMG(0x1003b700u), self, 0);
    t9 = g->edx;
    if (t6 == 0u)
    {
        eax = t8;
        ebx = t8;
        ebp = t6;
        goto L_1003be82;
    }
    eax = t8;
    edx = t9;
    ebx = t8;
    ebp = t6;
    COW_AT(1003be75)
    g->esp = sp0 - 0x44u;
    t10 = cow_call_regs(g, COW_IMG(0x100845e0u), eax, ebp, g->edx, 1, 0);
    if (t10 != 0u)
    {
        eax = t10;
        edi = t10;
        goto L_1003be84;
    }
    eax = t10;
L_1003be82: ;
    COW_AT(1003be82)
    edi = ebx;
L_1003be84: ;
    COW_AT(1003be84)
    t11 = rd32(self + 4u);
    if ((t11 & 0xfu) + (rd8(self + 6u) & 1u) * 0x10u > 0x1bu) goto L_1003c5f0;
    eax = (t11 & 0xfu) + (rd8(self + 6u) & 1u) * 0x10u;
    ecx = t11;
    edx = t11 & 0xfu;
    COW_AT(1003bea0)
    t12 = rd32(COW_IMG(0x1003c650u) + eax * 4u);
    switch (t12 - RD)
    {
    case 0x1003bea7u: goto L_1003bea7;
    case 0x1003bea9u: goto L_1003bea9;
    case 0x1003bf15u: goto L_1003bf15;
    case 0x1003bf17u: goto L_1003bf17;
    case 0x1003bf83u: goto L_1003bf83;
    case 0x1003bff7u: goto L_1003bff7;
    case 0x1003c06bu: goto L_1003c06b;
    case 0x1003c0bau: goto L_1003c0ba;
    case 0x1003c0bcu: goto L_1003c0bc;
    case 0x1003c12eu: goto L_1003c12e;
    case 0x1003c130u: goto L_1003c130;
    case 0x1003c177u: goto L_1003c177;
    case 0x1003c1b0u: goto L_1003c1b0;
    case 0x1003c1d6u: goto L_1003c1d6;
    case 0x1003c1d8u: goto L_1003c1d8;
    case 0x1003c24bu: goto L_1003c24b;
    case 0x1003c24du: goto L_1003c24d;
    case 0x1003c2b4u: goto L_1003c2b4;
    case 0x1003c31du: goto L_1003c31d;
    case 0x1003c379u: goto L_1003c379;
    case 0x1003c3c3u: goto L_1003c3c3;
    case 0x1003c3efu: goto L_1003c3ef;
    case 0x1003c497u: goto L_1003c497;
    case 0x1003c513u: goto L_1003c513;
    case 0x1003c52au: goto L_1003c52a;
    case 0x1003c555u: goto L_1003c555;
    case 0x1003c590u: goto L_1003c590;
    case 0x1003c5f0u: goto L_1003c5f0;
    default: rt_fatal(g, COW_IMG(0x1003bea0u), "switch");
    }
    return 0;
L_1003bea7: ;
    COW_AT(1003bea7)
    ebx = edi;
L_1003bea9: ;
    COW_AT(1003bea9)
    if (ebp != 0u) goto L_1003beb5;
    COW_AT(1003bead)
    if (ebx == 0u) goto L_1003c37d;
L_1003beb5: ;
    COW_AT(1003beb5)
    wr32(sp0 - 0x48u, arg2);
    wr32(sp0 - 0x4cu, ebx);
    wr32(sp0 - 0x50u, ebp);
    t113 = (ecx >> 0x12u & 1u) * 0x40u + (ecx >> 4u & 0x3fu);
    wr32(sp0 - 0x54u, t113);
    wr32(sp0 - 0x58u, sp0 - 0xcu);
    g->esp = sp0 - 0x44u;
    cow_cdecl(g, COW_IMG(0x1003ba20u), 5, sp0 - 0xcu, t113, ebp, ebx, arg2);
    wr32(sp0 - 0x5cu, arg3);
    wr32(sp0 - 0x60u, ebp);
    wr32(sp0 - 0x64u, ebx);
    t114 = rd32(self + 4u) >> 0xau & 0x3fu;
    wr32(sp0 - 0x68u, t114);
    wr32(sp0 - 0x6cu, sp0 - 0x18u);
    g->esp = sp0 - 0x58u;
    cow_cdecl(g, COW_IMG(0x1003ba20u), 5, sp0 - 0x18u, t114, ebx, ebp, arg3);
    wr32(sp0 - 0x70u, 1u);
    wr32(sp0 - 0x74u, sp0 - 0x18u);
    wr32(sp0 - 0x78u, sp0 - 0xcu);
    wr32(sp0 - 0x7cu, arg1);
    g->esp = sp0 - 0x24u;
    cow_bridge_indirect(g, COW_IMG(0x1003b980u), 0u, 22u, (const uint32_t[]){arg1, sp0 - 0xcu, sp0 - 0x18u, 1u, sp0 - 0x18u, rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), arg3, sp0 - 0xcu, rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), arg2, in_edi, in_esi, in_ebp, in_ebx, 0u, rd32(sp0 - 0x30u), self, rd32(sp0 - 0x28u)}, g->ecx, g->edx, g->eax, 88u);
    d115 = cow_take_float(g);
    loc_34_f = cow_bits2f(0u);
L_1003c603: ;
    COW_AT(1003c603)
    t116 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
    t117 = rd32(COW_IMG(0x1047cf7cu));
    t118 = rd32(sp0 - 0x3cu);
    t119 = rd32(sp0 - 0x40u);
    t120 = rd32(sp0 - 0x44u);
    wr32(t117 + 0xa90u, t116);
    t121 = rd32(sp0 - 0x28u);
    t122 = rd32(sp0 - 0x38u);
    wr32(t116 * 4u + t117 + 0xa10u, t121);
    t123 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
    t124 = rd32(COW_IMG(0x1047cf7cu));
    t125 = rd32(sp0 - 0x30u);
    wr32(t124 + 0xa90u, t123);
    wr32(t123 * 4u + t124 + 0xa10u, t125);
    g->ebx = t122;
    g->esi = t119;
    g->edi = t120;
    g->ebp = t118;
    g->edx = t125;
    fpush(g, loc_34_f);
    return t124;
L_1003bf15: ;
    COW_AT(1003bf15)
    ebx = edi;
L_1003bf17: ;
    COW_AT(1003bf17)
    if (ebp != 0u) goto L_1003bf23;
    COW_AT(1003bf1b)
    if (ebx == 0u) goto L_1003c5f0;
L_1003bf23: ;
    COW_AT(1003bf23)
    wr32(sp0 - 0x48u, arg2);
    wr32(sp0 - 0x4cu, ebx);
    wr32(sp0 - 0x50u, ebp);
    t110 = (ecx >> 0x12u & 1u) * 0x40u + (ecx >> 4u & 0x3fu);
    wr32(sp0 - 0x54u, t110);
    wr32(sp0 - 0x58u, sp0 - 0xcu);
    g->esp = sp0 - 0x44u;
    cow_cdecl(g, COW_IMG(0x1003ba20u), 5, sp0 - 0xcu, t110, ebp, ebx, arg2);
    wr32(sp0 - 0x5cu, arg3);
    wr32(sp0 - 0x60u, ebp);
    wr32(sp0 - 0x64u, ebx);
    t111 = rd32(self + 4u) >> 0xau & 0x3fu;
    wr32(sp0 - 0x68u, t111);
    wr32(sp0 - 0x6cu, sp0 - 0x18u);
    g->esp = sp0 - 0x58u;
    cow_cdecl(g, COW_IMG(0x1003ba20u), 5, sp0 - 0x18u, t111, ebx, ebp, arg3);
    wr32(sp0 - 0x70u, 0u);
    wr32(sp0 - 0x74u, sp0 - 0xcu);
    wr32(sp0 - 0x78u, sp0 - 0x18u);
    wr32(sp0 - 0x7cu, arg1);
    g->esp = sp0 - 0x24u;
    cow_bridge_indirect(g, COW_IMG(0x1003b980u), 0u, 22u, (const uint32_t[]){arg1, sp0 - 0x18u, sp0 - 0xcu, 0u, sp0 - 0x18u, rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), arg3, sp0 - 0xcu, rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), arg2, in_edi, in_esi, in_ebp, in_ebx, 0u, rd32(sp0 - 0x30u), self, rd32(sp0 - 0x28u)}, g->ecx, g->edx, g->eax, 88u);
    d112 = cow_take_float(g);
    loc_34_f = cow_bits2f(0u);
    goto L_1003c603;
L_1003bf83: ;
    COW_AT(1003bf83)
    if (ebp != 0u)
    {
    COW_AT(1003bf95)
        wr32(sp0 - 0x48u, arg2);
        wr32(sp0 - 0x4cu, ebp);
        wr32(sp0 - 0x50u, ebp);
        t107 = (ecx >> 0x12u & 1u) * 0x40u + (ecx >> 4u & 0x3fu);
        wr32(sp0 - 0x54u, t107);
        wr32(sp0 - 0x58u, sp0 - 0x18u);
        g->esp = sp0 - 0x44u;
        cow_cdecl(g, COW_IMG(0x1003ba20u), 5, sp0 - 0x18u, t107, ebp, ebp, arg2);
        wr32(sp0 - 0x5cu, arg3);
        wr32(sp0 - 0x60u, ebp);
        wr32(sp0 - 0x64u, ebp);
        t108 = rd32(self + 4u) >> 0xau & 0x3fu;
        wr32(sp0 - 0x68u, t108);
        wr32(sp0 - 0x6cu, sp0 - 0xcu);
        g->esp = sp0 - 0x58u;
        cow_cdecl(g, COW_IMG(0x1003ba20u), 5, sp0 - 0xcu, t108, ebp, ebp, arg3);
        wr32(sp0 - 0x70u, 0u);
        wr32(sp0 - 0x74u, sp0 - 0xcu);
        wr32(sp0 - 0x78u, sp0 - 0x18u);
        wr32(sp0 - 0x7cu, arg1);
        g->esp = sp0 - 0x24u;
        cow_bridge_indirect(g, COW_IMG(0x1003b980u), 0u, 22u, (const uint32_t[]){arg1, sp0 - 0x18u, sp0 - 0xcu, 0u, sp0 - 0xcu, rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), arg3, sp0 - 0x18u, rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), arg2, in_edi, in_esi, in_ebp, in_ebx, 0u, rd32(sp0 - 0x30u), self, rd32(sp0 - 0x28u)}, g->ecx, g->edx, g->eax, 88u);
        d109 = cow_take_float(g);
        wrf32(sp0 - 0x34u, (float)(double)(float)d109);
        loc_34_f = (double)(float)d109;
    }
    else
    {
    COW_AT(1003bf87)
        g->esp = sp0 - 0x44u;
        cow_thiscall(g, COW_IMG(0x100746a0u), arg1, 0);
        loc_34_f = cow_bits2f(0u);
    }
    goto L_1003c603;
L_1003bff7: ;
    COW_AT(1003bff7)
    if (ebx != 0u)
    {
    COW_AT(1003c009)
        wr32(sp0 - 0x48u, arg2);
        wr32(sp0 - 0x4cu, ebx);
        wr32(sp0 - 0x50u, ebx);
        t104 = (ecx >> 0x12u & 1u) * 0x40u + (ecx >> 4u & 0x3fu);
        wr32(sp0 - 0x54u, t104);
        wr32(sp0 - 0x58u, sp0 - 0x18u);
        g->esp = sp0 - 0x44u;
        cow_cdecl(g, COW_IMG(0x1003ba20u), 5, sp0 - 0x18u, t104, ebx, ebx, arg2);
        wr32(sp0 - 0x5cu, arg3);
        wr32(sp0 - 0x60u, ebx);
        wr32(sp0 - 0x64u, ebx);
        t105 = rd32(self + 4u) >> 0xau & 0x3fu;
        wr32(sp0 - 0x68u, t105);
        wr32(sp0 - 0x6cu, sp0 - 0xcu);
        g->esp = sp0 - 0x58u;
        cow_cdecl(g, COW_IMG(0x1003ba20u), 5, sp0 - 0xcu, t105, ebx, ebx, arg3);
        wr32(sp0 - 0x70u, 0u);
        wr32(sp0 - 0x74u, sp0 - 0xcu);
        wr32(sp0 - 0x78u, sp0 - 0x18u);
        wr32(sp0 - 0x7cu, arg1);
        g->esp = sp0 - 0x24u;
        cow_bridge_indirect(g, COW_IMG(0x1003b980u), 0u, 22u, (const uint32_t[]){arg1, sp0 - 0x18u, sp0 - 0xcu, 0u, sp0 - 0xcu, rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), arg3, sp0 - 0x18u, rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), arg2, in_edi, in_esi, in_ebp, in_ebx, 0u, rd32(sp0 - 0x30u), self, rd32(sp0 - 0x28u)}, g->ecx, g->edx, g->eax, 88u);
        d106 = cow_take_float(g);
        wrf32(sp0 - 0x34u, (float)(double)(float)d106);
        loc_34_f = (double)(float)d106;
    }
    else
    {
    COW_AT(1003bffb)
        g->esp = sp0 - 0x44u;
        cow_thiscall(g, COW_IMG(0x100746a0u), arg1, 0);
        loc_34_f = cow_bits2f(0u);
    }
    goto L_1003c603;
L_1003c06b: ;
    COW_AT(1003c06b)
    g->eax = eax;
    g->esp = sp0 - 0x44u;
    t99 = cow_thiscall(g, COW_IMG(0x100746a0u), arg1, 0);
    t100 = g->ecx;
    if (ebx == 0u)
    {
        loc_34_f = cow_bits2f(0u);
    }
    else
    {
        eax = t99;
        ecx = t100;
    COW_AT(1003c07e)
        wr32(sp0 - 0x48u, 0u);
        wr32(sp0 - 0x4cu, ebp);
        wr32(sp0 - 0x50u, ebx);
        wr32(sp0 - 0x54u, 2u);
        wr32(sp0 - 0x58u, sp0 - 0x18u);
        g->esp = sp0 - 0x44u;
        cow_cdecl(g, COW_IMG(0x1003ba20u), 5, sp0 - 0x18u, 2u, ebx, ebp, 0u);
        d101 = fr(g, (double)rdf32(sp0 - 0x18u) + (double)rdf32(arg1 + 0x30u));
        wrf32(arg1 + 0x30u, (float)d101);
        d102 = fr(g, fr(g, (double)rdf32(sp0 - 0x14u) + (double)rdf32(arg1 + 0x34u)) + (double)rdf32(COW_IMG(0x1032ab24u)));
        wrf32(arg1 + 0x34u, (float)d102);
        d103 = fr(g, (double)rdf32(sp0 - 0x10u) + (double)rdf32(arg1 + 0x38u));
        wrf32(arg1 + 0x38u, (float)d103);
        loc_34_f = (double)rdf32(sp0 - 0x34u);
    }
    goto L_1003c603;
L_1003c0ba: ;
    COW_AT(1003c0ba)
    ebx = edi;
L_1003c0bc: ;
    COW_AT(1003c0bc)
    if (ebp == 0u) goto L_1003c5f0;
    COW_AT(1003c0c4)
    if (ebx == 0u) goto L_1003c5f0;
    COW_AT(1003c0cc)
    wr32(sp0 - 0x48u, arg2);
    wr32(sp0 - 0x4cu, ebx);
    wr32(sp0 - 0x50u, ebp);
    t97 = (ecx >> 0x12u & 1u) * 0x40u + (ecx >> 4u & 0x3fu);
    wr32(sp0 - 0x54u, t97);
    wr32(sp0 - 0x58u, sp0 - 0x18u);
    g->esp = sp0 - 0x44u;
    cow_cdecl(g, COW_IMG(0x1003ba20u), 5, sp0 - 0x18u, t97, ebp, ebx, arg2);
    wr32(sp0 - 0x5cu, arg3);
    wr32(sp0 - 0x60u, ebp);
    wr32(sp0 - 0x64u, ebx);
    ecx = arg3;
    edx = rd32(self + 4u) >> 0xau & 0x3fu;
    loc_48 = arg2;
    loc_5c = arg3;
    loc_60 = ebp;
    loc_64 = ebx;
L_1003c101: ;
    COW_AT(1003c101)
    wr32(sp0 - 0x68u, edx);
    wr32(sp0 - 0x6cu, sp0 - 0xcu);
    g->esp = sp0 - 0x64u;
    cow_cdecl(g, COW_IMG(0x1003ba20u), 2, sp0 - 0xcu, edx);
    wr32(sp0 - 0x70u, 0u);
    wr32(sp0 - 0x74u, sp0 - 0xcu);
    wr32(sp0 - 0x78u, sp0 - 0x18u);
    wr32(sp0 - 0x7cu, arg1);
    g->esp = sp0 - 0x24u;
    cow_bridge_indirect(g, COW_IMG(0x1003b980u), 0u, 22u, (const uint32_t[]){arg1, sp0 - 0x18u, sp0 - 0xcu, 0u, sp0 - 0xcu, rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), sp0 - 0x18u, rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u)}, g->ecx, g->edx, g->eax, 88u);
    d98 = cow_take_float(g);
    wrf32(sp0 - 0x34u, (float)(double)(float)d98);
    loc_34_f = (double)(float)d98;
    goto L_1003c603;
L_1003c12e: ;
    COW_AT(1003c12e)
    ebx = edi;
L_1003c130: ;
    COW_AT(1003c130)
    if (ebp == 0u) goto L_1003c5f0;
    COW_AT(1003c138)
    if (ebx == 0u) goto L_1003c5f0;
    COW_AT(1003c140)
    wr32(sp0 - 0x48u, arg3);
    wr32(sp0 - 0x4cu, ebp);
    wr32(sp0 - 0x50u, ebx);
    t95 = ecx >> 0xau & 0x3fu;
    wr32(sp0 - 0x54u, t95);
    wr32(sp0 - 0x58u, sp0 - 0x18u);
    g->esp = sp0 - 0x44u;
    cow_cdecl(g, COW_IMG(0x1003ba20u), 5, sp0 - 0x18u, t95, ebx, ebp, arg3);
    t96 = rd32(self + 4u);
    wr32(sp0 - 0x5cu, arg2);
    wr32(sp0 - 0x60u, ebx);
    wr32(sp0 - 0x64u, ebp);
    ecx = arg2;
    edx = (t96 >> 0x12u & 1u) * 0x40u + (t96 >> 4u & 0x3fu);
    loc_48 = arg3;
    loc_5c = arg2;
    loc_60 = ebx;
    loc_64 = ebp;
    goto L_1003c101;
L_1003c177: ;
    COW_AT(1003c177)
    if (ebp == 0u) goto L_1003c5f0;
    COW_AT(1003c17f)
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x4cu, ebx);
    wr32(sp0 - 0x50u, ebp);
    t87 = (ecx >> 0x12u & 1u) * 0x40u + (ecx >> 4u & 0x3fu);
    wr32(sp0 - 0x54u, t87);
    wr32(sp0 - 0x58u, sp0 - 0x24u);
    g->eax = sp0 - 0x24u;
    g->esp = sp0 - 0x44u;
    t88 = cow_cdecl(g, COW_IMG(0x1003ba20u), 5, sp0 - 0x24u, t87, ebp, ebx, 0u);
    eax = t88;
    ecx = ebp;
    edx = rd32(ebp);
    edi = rd32(rd32(COW_IMG(0x1047cf7cu)));
L_1003c216: ;
    COW_AT(1003c216)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t89 = cow_thiscall(g, rd32(edx + 0x1c0u), ecx, 0);
    t90 = g->edx;
    t91 = rd32(t89 + 4u);
    wr32(sp0 - 0x48u, t91);
    wr32(sp0 - 0x4cu, arg1);
    cow_thiscall(g, rd32(edi + 0x64u), rd32(COW_IMG(0x1047cf7cu)), 2, arg1, t91);
L_1003c231: ;
    COW_AT(1003c231)
    t92 = rd32(sp0 - 0x24u);
    t93 = rd32(sp0 - 0x1cu);
    t94 = rd32(sp0 - 0x20u);
    wr32(arg1 + 0x30u, t92);
    wr32(arg1 + 0x34u, t94);
    wr32(arg1 + 0x38u, t93);
    loc_34_f = (double)rdf32(sp0 - 0x34u);
    goto L_1003c603;
L_1003c1b0: ;
    COW_AT(1003c1b0)
    if (ebx == 0u) goto L_1003c5f0;
    COW_AT(1003c1b8)
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x4cu, ebp);
    wr32(sp0 - 0x50u, ebx);
    t78 = ecx >> 0xau & 0x3fu;
    wr32(sp0 - 0x54u, t78);
    wr32(sp0 - 0x58u, sp0 - 0x24u);
    g->esp = sp0 - 0x44u;
    cow_cdecl(g, COW_IMG(0x1003ba20u), 5, sp0 - 0x24u, t78, ebx, ebp, 0u);
    eax = rd32(ebx);
    ecx = ebx;
L_1003c277: ;
    COW_AT(1003c277)
    g->eax = eax;
    g->edx = rd32(COW_IMG(0x1047cf7cu));
    t79 = rd32(COW_IMG(0x1047cf7cu));
    t80 = rd32(rd32(COW_IMG(0x1047cf7cu)));
    g->esp = sp0 - 0x44u;
    t81 = cow_thiscall(g, rd32(eax + 0x1c0u), ecx, 0);
    t82 = g->edx;
    t83 = rd32(t81 + 4u);
    wr32(sp0 - 0x48u, t83);
    wr32(sp0 - 0x4cu, arg1);
    cow_thiscall(g, rd32(t80 + 0x64u), rd32(COW_IMG(0x1047cf7cu)), 2, arg1, t83);
    t84 = rd32(sp0 - 0x24u);
    t85 = rd32(sp0 - 0x20u);
    t86 = rd32(sp0 - 0x1cu);
    wr32(arg1 + 0x30u, t84);
    wr32(arg1 + 0x34u, t85);
    wr32(arg1 + 0x38u, t86);
    loc_34_f = (double)rdf32(sp0 - 0x34u);
    goto L_1003c603;
L_1003c1d6: ;
    COW_AT(1003c1d6)
    ebx = edi;
L_1003c1d8: ;
    COW_AT(1003c1d8)
    if (ebp == 0u) goto L_1003c5f0;
    COW_AT(1003c1e0)
    if (ebx == 0u) goto L_1003c5f0;
    COW_AT(1003c1e8)
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x4cu, ebx);
    wr32(sp0 - 0x50u, ebp);
    t76 = (ecx >> 0x12u & 1u) * 0x40u + (ecx >> 4u & 0x3fu);
    wr32(sp0 - 0x54u, t76);
    wr32(sp0 - 0x58u, sp0 - 0x24u);
    g->eax = sp0 - 0x24u;
    g->esp = sp0 - 0x44u;
    t77 = cow_cdecl(g, COW_IMG(0x1003ba20u), 5, sp0 - 0x24u, t76, ebp, ebx, 0u);
    eax = t77;
    ecx = ebx;
    edx = rd32(ebx);
    edi = rd32(rd32(COW_IMG(0x1047cf7cu)));
    goto L_1003c216;
L_1003c24b: ;
    COW_AT(1003c24b)
    ebx = edi;
L_1003c24d: ;
    COW_AT(1003c24d)
    if (ebp == 0u) goto L_1003c5f0;
    COW_AT(1003c255)
    if (ebx == 0u) goto L_1003c5f0;
    COW_AT(1003c25d)
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x4cu, ebp);
    wr32(sp0 - 0x50u, ebx);
    t75 = ecx >> 0xau & 0x3fu;
    wr32(sp0 - 0x54u, t75);
    wr32(sp0 - 0x58u, sp0 - 0x24u);
    g->esp = sp0 - 0x44u;
    cow_cdecl(g, COW_IMG(0x1003ba20u), 5, sp0 - 0x24u, t75, ebx, ebp, 0u);
    eax = rd32(ebp);
    ecx = ebp;
    goto L_1003c277;
L_1003c2b4: ;
    COW_AT(1003c2b4)
    if (ebp == 0u) goto L_1003c5f0;
    COW_AT(1003c2bc)
    wr32(sp0 - 0x48u, 0u);
    esi = rd32(COW_IMG(0x1047bfa8u)) + 0xc10u;
    edi = arg1;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x4cu, ebx);
    t70 = rd32(self + 4u);
    wr32(sp0 - 0x50u, ebp);
    t71 = (t70 >> 0x12u & 1u) * 0x40u + (t70 >> 4u & 0x3fu);
    wr32(sp0 - 0x54u, t71);
    wr32(sp0 - 0x58u, sp0 - 0x24u);
    g->esp = sp0 - 0x44u;
    cow_cdecl(g, COW_IMG(0x1003ba20u), 5, sp0 - 0x24u, t71, ebp, ebx, 0u);
    t72 = rd32(sp0 - 0x24u);
    t73 = rd32(sp0 - 0x20u);
    wr32(arg1 + 0x30u, t72);
    t74 = rd32(sp0 - 0x1cu);
    wr32(arg1 + 0x34u, t73);
    wr32(arg1 + 0x38u, t74);
    loc_34_f = cow_bits2f(0u);
    goto L_1003c603;
L_1003c31d: ;
    COW_AT(1003c31d)
    if (ebx == 0u) goto L_1003c5f0;
    COW_AT(1003c325)
    wr32(sp0 - 0x48u, 0u);
    esi = rd32(COW_IMG(0x1047bfa8u)) + 0xc10u;
    edi = arg1;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x4cu, ebp);
    wr32(sp0 - 0x50u, ebx);
    t66 = rd32(self + 4u) >> 0xau & 0x3fu;
    wr32(sp0 - 0x54u, t66);
    wr32(sp0 - 0x58u, sp0 - 0x24u);
    g->esp = sp0 - 0x44u;
    cow_cdecl(g, COW_IMG(0x1003ba20u), 5, sp0 - 0x24u, t66, ebx, ebp, 0u);
    t67 = rd32(sp0 - 0x24u);
    t68 = rd32(sp0 - 0x20u);
    wr32(arg1 + 0x30u, t67);
    t69 = rd32(sp0 - 0x1cu);
    wr32(arg1 + 0x34u, t68);
    wr32(arg1 + 0x38u, t69);
    loc_34_f = cow_bits2f(0u);
    goto L_1003c603;
L_1003c379: ;
    COW_AT(1003c379)
    if (ebp != 0u) goto L_1003c395;
L_1003c37d: ;
    COW_AT(1003c37d)
    wr32(sp0 - 0x48u, arg1);
    g->esp = sp0 - 0x44u;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0xc4u), rd32(COW_IMG(0x1047cf7cu)), 1, arg1);
    loc_34_f = cow_bits2f(0u);
    goto L_1003c603;
L_1003c395: ;
    COW_AT(1003c395)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t62 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self, 0);
    t63 = g->ecx;
    t64 = g->edx;
    wr32(sp0 - 0x48u, t62);
    t65 = (ecx >> 0x12u & 1u) * 0x40u + (ecx >> 4u & 0x3fu);
    wr32(sp0 - 0x4cu, t65);
    wr32(sp0 - 0x50u, arg1);
    cow_cdecl(g, COW_IMG(0x1003bd90u), 3, arg1, t65, t62);
    loc_34_f = cow_bits2f(0u);
    goto L_1003c603;
L_1003c3c3: ;
    COW_AT(1003c3c3)
    if (ebx == 0u) goto L_1003c5f0;
    COW_AT(1003c3cb)
    g->eax = eax;
    g->esp = sp0 - 0x44u;
    t60 = cow_thiscall(g, COW_IMG(0x1003b700u), self, 0);
    wr32(sp0 - 0x48u, t60);
    t61 = rd32(self + 4u) >> 0xau & 0x3fu;
    wr32(sp0 - 0x4cu, t61);
    wr32(sp0 - 0x50u, arg1);
    cow_cdecl(g, COW_IMG(0x1003bd90u), 3, arg1, t61, t60);
    loc_34_f = cow_bits2f(0u);
    goto L_1003c603;
L_1003c3ef: ;
    COW_AT(1003c3ef)
    if (ebp != 0u)
    {
    COW_AT(1003c401)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x44u;
        t42 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self, 0);
        t43 = g->ecx;
        t44 = g->edx;
        wr32(sp0 - 0x48u, t42);
        t45 = (ecx >> 0x12u & 1u) * 0x40u + (ecx >> 4u & 0x3fu);
        wr32(sp0 - 0x4cu, t45);
        t46 = rd32(sp0 - 0x30u);
        wr32(sp0 - 0x50u, t46);
        g->edx = t44;
        cow_cdecl(g, COW_IMG(0x1003bd90u), 3, t46, t45, t42);
        t47 = g->edx;
        t48 = rd32(self + 4u);
        wr32(sp0 - 0x48u, 0u);
        g->eax = t48 >> 4u & 0x3fu;
        g->edx = t47;
        t49 = cow_thiscall_cdecl(g, COW_IMG(0x1003b700u), self, 1, 0u);
        t50 = g->edx;
        wr32(sp0 - 0x4cu, t49);
        g->edx = t50;
        g->esp = sp0 - 0x48u;
        t51 = cow_thiscall_cdecl(g, COW_IMG(0x1003b6d0u), self, 1, t49);
        t52 = g->ecx;
        t53 = g->edx;
        wr32(sp0 - 0x50u, t51);
        t54 = (t48 >> 0x12u & 1u) * 0x40u + (t48 >> 4u & 0x3fu);
        wr32(sp0 - 0x54u, t54);
        wr32(sp0 - 0x58u, sp0 - 0x24u);
        g->eax = sp0 - 0x24u;
        g->esp = sp0 - 0x4cu;
        t55 = cow_cdecl(g, COW_IMG(0x1003ba20u), 3, sp0 - 0x24u, t54, t51);
        d56 = fr(g, atan2((double)rdf32(t46 + 0x28u), (double)rdf32(t46 + 0x20u)));
        wrf32(sp0 - 0x48u, (float)(double)(float)-d56);
        wr32(sp0 - 0x4cu, arg1);
        g->esp = sp0 - 0x44u;
        cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x64u), rd32(COW_IMG(0x1047cf7cu)), 2, arg1, cow_f2bits((double)(float)-d56));
        t57 = rd32(sp0 - 0x24u);
        t58 = rd32(sp0 - 0x20u);
        t59 = rd32(sp0 - 0x1cu);
        wr32(arg1 + 0x30u, t57);
        wr32(arg1 + 0x34u, t58);
        wr32(arg1 + 0x38u, t59);
        loc_34_f = cow_bits2f(0u);
    }
    else
    {
    COW_AT(1003c3f3)
        g->esp = sp0 - 0x44u;
        cow_thiscall(g, COW_IMG(0x100746a0u), arg1, 0);
        loc_34_f = cow_bits2f(0u);
    }
    goto L_1003c603;
L_1003c497: ;
    COW_AT(1003c497)
    if (ebx != 0u) goto L_1003c4a9;
    COW_AT(1003c49b)
    g->esp = sp0 - 0x44u;
    cow_thiscall(g, COW_IMG(0x100746a0u), arg1, 0);
    loc_34_f = cow_bits2f(0u);
    goto L_1003c603;
L_1003c4a9: ;
    COW_AT(1003c4a9)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t29 = cow_thiscall(g, COW_IMG(0x1003b700u), self, 0);
    t30 = g->ecx;
    t31 = g->edx;
    wr32(sp0 - 0x48u, t29);
    t32 = rd32(self + 4u) >> 0xau & 0x3fu;
    wr32(sp0 - 0x4cu, t32);
    t33 = rd32(sp0 - 0x30u);
    wr32(sp0 - 0x50u, t33);
    g->eax = t32;
    g->edx = t31;
    t34 = cow_cdecl(g, COW_IMG(0x1003bd90u), 3, t33, t32, t29);
    t35 = g->edx;
    wr32(sp0 - 0x48u, 0u);
    g->edx = t35;
    t36 = cow_thiscall_cdecl(g, COW_IMG(0x1003b6d0u), self, 1, 0u);
    t37 = g->edx;
    wr32(sp0 - 0x4cu, t36);
    g->esp = sp0 - 0x48u;
    t38 = cow_thiscall_cdecl(g, COW_IMG(0x1003b700u), self, 1, t36);
    wr32(sp0 - 0x50u, t38);
    t39 = rd32(self + 4u) >> 0xau & 0x3fu;
    wr32(sp0 - 0x54u, t39);
    wr32(sp0 - 0x58u, sp0 - 0x24u);
    g->edx = sp0 - 0x24u;
    g->esp = sp0 - 0x4cu;
    cow_cdecl(g, COW_IMG(0x1003ba20u), 3, sp0 - 0x24u, t39, t38);
    t40 = g->edx;
    d41 = fr(g, atan2((double)rdf32(t33 + 0x28u), (double)rdf32(t33 + 0x20u)));
    wrf32(sp0 - 0x48u, (float)(double)(float)-d41);
    wr32(sp0 - 0x4cu, arg1);
    g->esp = sp0 - 0x44u;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x64u), rd32(COW_IMG(0x1047cf7cu)), 2, arg1, cow_f2bits((double)(float)-d41));
    goto L_1003c231;
L_1003c513: ;
    COW_AT(1003c513)
    g->eax = eax;
    g->esp = sp0 - 0x44u;
    t28 = cow_stdcall(g, COW_IMG(0x101773f0u), 0);
    esi = t28;
    edi = arg1;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    loc_34_f = cow_bits2f(0u);
    goto L_1003c603;
L_1003c52a: ;
    COW_AT(1003c52a)
    g->eax = eax;
    g->esp = sp0 - 0x44u;
    t27 = cow_stdcall(g, COW_IMG(0x101773f0u), 0);
    esi = t27;
    edi = arg1;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(arg1 + 0x3cu, 0x3f800000u);
    wr32(arg1 + 0x30u, 0u);
    wr32(arg1 + 0x34u, 0u);
    wr32(arg1 + 0x38u, 0u);
    loc_34_f = cow_bits2f(0u);
    goto L_1003c603;
L_1003c555: ;
    COW_AT(1003c555)
    g->eax = eax;
    g->esp = sp0 - 0x44u;
    t18 = cow_stdcall(g, COW_IMG(0x101773f0u), 0);
    esi = t18;
    edi = arg1;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(arg1 + 0x30u, 0u);
    wr32(arg1 + 0x34u, 0u);
    wr32(arg1 + 0x38u, 0u);
    wr32(arg1 + 0x3cu, 0x3f800000u);
    g->eax = 0u;
    g->edx = rd32(COW_IMG(0x1047cf7cu));
    t19 = rd32(COW_IMG(0x1047cf7cu));
    t20 = rd32(rd32(COW_IMG(0x1047cf7cu)));
    t21 = cow_thiscall(g, COW_IMG(0x10186eb0u), rd32(COW_IMG(0x1065cb04u)), 0);
    t22 = g->edx;
    eax = t21;
    edx = t22;
    esi = t20;
L_1003c5c9: ;
    COW_AT(1003c5c9)
    wr32(sp0 - 0x48u, eax);
    wr32(sp0 - 0x4cu, arg1);
    wr32(sp0 - 0x50u, sp0 - 0x24u);
    g->eax = sp0 - 0x24u;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t23 = cow_thiscall(g, rd32(esi + 0x50u), rd32(COW_IMG(0x1047cf7cu)), 3, sp0 - 0x24u, arg1, eax);
    t24 = g->edx;
    g->edx = t24;
    t25 = cow_thiscall(g, COW_IMG(0x100746a0u), arg1, 0);
    t26 = g->edx;
    wr32(sp0 - 0x48u, sp0 - 0x24u);
    wr32(sp0 - 0x4cu, arg1);
    cow_cdecl(g, COW_IMG(0x1006ad30u), 2, arg1, sp0 - 0x24u);
    loc_34_f = (double)rdf32(sp0 - 0x34u);
    goto L_1003c603;
L_1003c590: ;
    COW_AT(1003c590)
    g->eax = eax;
    g->esp = sp0 - 0x44u;
    t13 = cow_stdcall(g, COW_IMG(0x101773f0u), 0);
    esi = t13;
    edi = arg1;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(arg1 + 0x30u, 0u);
    wr32(arg1 + 0x34u, 0u);
    wr32(arg1 + 0x38u, 0u);
    wr32(arg1 + 0x3cu, 0x3f800000u);
    g->eax = 0u;
    g->edx = rd32(COW_IMG(0x1047cf7cu));
    t14 = rd32(COW_IMG(0x1047cf7cu));
    t15 = rd32(rd32(COW_IMG(0x1047cf7cu)));
    t16 = cow_thiscall(g, COW_IMG(0x10186e90u), rd32(COW_IMG(0x1065cb04u)), 0);
    t17 = g->edx;
    eax = t16;
    edx = t17;
    esi = t15;
    goto L_1003c5c9;
L_1003c5f0: ;
    COW_AT(1003c5f0)
    wr32(sp0 - 0x48u, arg1);
    g->esp = sp0 - 0x44u;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0xc4u), rd32(COW_IMG(0x1047cf7cu)), 1, arg1);
    loc_34_f = cow_bits2f(0u);
    goto L_1003c603;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1003be10(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1003be75u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        wr32(sp0 - 0x2cu, self);
        (void)sp0;
        return 1;
    }
    case 0x1003be82u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        wr32(sp0 - 0x2cu, self);
        (void)sp0;
        return 1;
    }
    case 0x1003be84u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        wr32(sp0 - 0x2cu, self);
        (void)sp0;
        return 1;
    }
    case 0x1003bea0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        wr32(sp0 - 0x2cu, self);
        (void)sp0;
        return 1;
    }
    case 0x1003bea7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        wr32(sp0 - 0x2cu, self);
        (void)sp0;
        return 1;
    }
    case 0x1003bea9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        wr32(sp0 - 0x2cu, self);
        (void)sp0;
        return 1;
    }
    case 0x1003beadu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        wr32(sp0 - 0x2cu, self);
        (void)sp0;
        return 1;
    }
    case 0x1003beb5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        wr32(sp0 - 0x2cu, self);
        (void)sp0;
        return 1;
    }
    case 0x1003bf15u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        wr32(sp0 - 0x2cu, self);
        (void)sp0;
        return 1;
    }
    case 0x1003bf17u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        wr32(sp0 - 0x2cu, self);
        (void)sp0;
        return 1;
    }
    case 0x1003bf1bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        wr32(sp0 - 0x2cu, self);
        (void)sp0;
        return 1;
    }
    case 0x1003bf23u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        wr32(sp0 - 0x2cu, self);
        (void)sp0;
        return 1;
    }
    case 0x1003bf83u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        wr32(sp0 - 0x2cu, self);
        (void)sp0;
        return 1;
    }
    case 0x1003bf87u:
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
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1003bf95u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        wr32(sp0 - 0x2cu, self);
        (void)sp0;
        return 1;
    }
    case 0x1003bff7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        wr32(sp0 - 0x2cu, self);
        (void)sp0;
        return 1;
    }
    case 0x1003bffbu:
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
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1003c009u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        wr32(sp0 - 0x2cu, self);
        (void)sp0;
        return 1;
    }
    case 0x1003c06bu:
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
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1003c07eu:
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
        g->esp = sp0 - 0x44u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1003c0bau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        wr32(sp0 - 0x2cu, self);
        (void)sp0;
        return 1;
    }
    case 0x1003c0bcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        wr32(sp0 - 0x2cu, self);
        (void)sp0;
        return 1;
    }
    case 0x1003c0c4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        wr32(sp0 - 0x2cu, self);
        (void)sp0;
        return 1;
    }
    case 0x1003c0ccu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        wr32(sp0 - 0x2cu, self);
        (void)sp0;
        return 1;
    }
    case 0x1003c101u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_48;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_64;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x58u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1003c12eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        wr32(sp0 - 0x2cu, self);
        (void)sp0;
        return 1;
    }
    case 0x1003c130u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        wr32(sp0 - 0x2cu, self);
        (void)sp0;
        return 1;
    }
    case 0x1003c138u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        wr32(sp0 - 0x2cu, self);
        (void)sp0;
        return 1;
    }
    case 0x1003c140u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        wr32(sp0 - 0x2cu, self);
        (void)sp0;
        return 1;
    }
    case 0x1003c177u:
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
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1003c17fu:
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
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1003c1b0u:
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
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1003c1b8u:
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
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1003c1d6u:
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
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1003c1d8u:
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
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1003c1e0u:
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
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1003c1e8u:
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
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1003c216u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x58u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x1003c231u:
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
        g->esp = sp0 - 0x44u;
        g->esi = arg1;
        wr32(sp0 - 0x58u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x1003c24bu:
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
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1003c24du:
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
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1003c255u:
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
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1003c25du:
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
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1003c277u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x58u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x1003c2b4u:
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
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        self = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1003c2bcu:
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
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        self = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1003c31du:
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
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        self = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1003c325u:
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
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        self = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1003c379u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1003c37du:
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
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1003c395u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1003c3c3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1003c3cbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1003c3efu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1003c3f3u:
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
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1003c401u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1003c497u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1003c49bu:
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
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1003c4a9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1003c513u:
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
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1003c52au:
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
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1003c555u:
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
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1003c590u:
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
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1003c5c9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x44u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1003c5f0u:
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
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1003c603u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_34_f;
        uint32_t loc_48;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_34_f = rdf32(sp0 - 0x34u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1003be10(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1003be10(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
