/* f_0x100cb4e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100cb4e0(Guest* g)
{
    double d101;
    double d104;
    double d108;
    double d109;
    double d110;
    double d114;
    double d118;
    double d123;
    double d124;
    double d19;
    double d2;
    double d20;
    double d21;
    double d22;
    double d3;
    double d34;
    double d35;
    double d36;
    double d37;
    double d38;
    double d39;
    double d40;
    double d41;
    double d72;
    double d74;
    double d76;
    double d77;
    double d78;
    double d82;
    double d86;
    double d87;
    double d88;
    double d92;
    double d96;
    double d99;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t loc_40;
    uint32_t loc_50;
    uint32_t loc_58;
    uint32_t loc_60;
    uint32_t loc_64;
    uint32_t loc_68;
    uint32_t loc_6c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t102;
    uint32_t t103;
    uint32_t t105;
    uint32_t t106;
    uint32_t t107;
    uint32_t t11;
    uint32_t t111;
    uint32_t t112;
    uint32_t t113;
    uint32_t t115;
    uint32_t t116;
    uint32_t t117;
    uint32_t t119;
    uint32_t t12;
    uint32_t t120;
    uint32_t t121;
    uint32_t t122;
    uint32_t t125;
    uint32_t t126;
    uint32_t t127;
    uint32_t t128;
    uint32_t t129;
    uint32_t t13;
    uint32_t t130;
    uint32_t t131;
    uint32_t t132;
    uint32_t t133;
    uint32_t t134;
    uint32_t t135;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t4;
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
    uint32_t t73;
    uint32_t t75;
    uint32_t t79;
    uint32_t t8;
    uint32_t t80;
    uint32_t t81;
    uint32_t t83;
    uint32_t t84;
    uint32_t t85;
    uint32_t t89;
    uint32_t t9;
    uint32_t t90;
    uint32_t t91;
    uint32_t t93;
    uint32_t t94;
    uint32_t t95;
    uint32_t t97;
    uint32_t t98;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 136u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100cb4f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x6cu); in_esi = rd32(sp0 - 0x68u); in_ebp = rd32(sp0 - 0x64u); in_ebx = rd32(sp0 - 0x60u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 0x64u); g->ebx = rd32(sp0 - 0x60u); g->edi = rd32(sp0 - 0x6cu); g->esi = rd32(sp0 - 0x68u); goto E_100cb4f2;
    case 0x100cb50bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x6cu); in_esi = rd32(sp0 - 0x68u); in_ebp = rd32(sp0 - 0x64u); in_ebx = rd32(sp0 - 0x60u); g->ebp = rd32(sp0 - 0x64u); g->ebx = rd32(sp0 - 0x60u); g->edi = rd32(sp0 - 0x6cu); g->esi = rd32(sp0 - 0x68u); goto E_100cb50b;
    case 0x100cb513u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x6cu); in_esi = rd32(sp0 - 0x68u); in_ebp = rd32(sp0 - 0x64u); in_ebx = rd32(sp0 - 0x60u); g->ebp = rd32(sp0 - 0x64u); g->ebx = rd32(sp0 - 0x60u); g->edi = rd32(sp0 - 0x6cu); g->esi = rd32(sp0 - 0x68u); goto E_100cb513;
    case 0x100cb551u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_58 = rd32(sp0 - 0x58u); loc_50 = rd32(sp0 - 0x50u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_100cb551;
    case 0x100cb55au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_58 = rd32(sp0 - 0x58u); loc_50 = rd32(sp0 - 0x50u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_100cb55a;
    case 0x100cb573u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_58 = rd32(sp0 - 0x58u); loc_50 = rd32(sp0 - 0x50u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_100cb573;
    case 0x100cb5d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100cb5d1;
    case 0x100cb5ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100cb5dd;
    case 0x100cb5f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100cb5f1;
    case 0x100cb610u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cb610;
    case 0x100cb620u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cb620;
    case 0x100cb628u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cb628;
    case 0x100cb630u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cb630;
    case 0x100cb638u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cb638;
    case 0x100cb645u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cb645;
    case 0x100cb64bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cb64b;
    case 0x100cb650u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cb650;
    case 0x100cb659u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cb659;
    case 0x100cb66eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cb66e;
    case 0x100cb681u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cb681;
    case 0x100cb683u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_58 = rd32(sp0 - 0x58u); loc_50 = rd32(sp0 - 0x50u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_100cb683;
    case 0x100cb698u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_58 = rd32(sp0 - 0x58u); loc_50 = rd32(sp0 - 0x50u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_100cb698;
    case 0x100cb69du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_58 = rd32(sp0 - 0x58u); loc_50 = rd32(sp0 - 0x50u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_100cb69d;
    case 0x100cb6beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_58 = rd32(sp0 - 0x58u); loc_50 = rd32(sp0 - 0x50u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_100cb6be;
    case 0x100cb6c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_58 = rd32(sp0 - 0x58u); loc_50 = rd32(sp0 - 0x50u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_100cb6c6;
    case 0x100cb6cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_58 = rd32(sp0 - 0x58u); loc_50 = rd32(sp0 - 0x50u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_100cb6cf;
    case 0x100cb6e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_58 = rd32(sp0 - 0x58u); loc_50 = rd32(sp0 - 0x50u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_100cb6e9;
    case 0x100cb6f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_58 = rd32(sp0 - 0x58u); loc_50 = rd32(sp0 - 0x50u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_100cb6f3;
    case 0x100cb6fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_58 = rd32(sp0 - 0x58u); loc_50 = rd32(sp0 - 0x50u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_100cb6fd;
    case 0x100cb740u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_58 = rd32(sp0 - 0x58u); loc_50 = rd32(sp0 - 0x50u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_100cb740;
    case 0x100cb7c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_58 = rd32(sp0 - 0x58u); loc_50 = rd32(sp0 - 0x50u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_100cb7c2;
    case 0x100cb7c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_58 = rd32(sp0 - 0x58u); loc_50 = rd32(sp0 - 0x50u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_100cb7c4;
    case 0x100cb7ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_58 = rd32(sp0 - 0x58u); loc_50 = rd32(sp0 - 0x50u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_100cb7cc;
    case 0x100cb7ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_58 = rd32(sp0 - 0x58u); loc_50 = rd32(sp0 - 0x50u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_100cb7dd;
    case 0x100cb7e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_58 = rd32(sp0 - 0x58u); loc_50 = rd32(sp0 - 0x50u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_100cb7e3;
    case 0x100cb7e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_58 = rd32(sp0 - 0x58u); loc_50 = rd32(sp0 - 0x50u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_100cb7e8;
    case 0x100cb7f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_58 = rd32(sp0 - 0x58u); loc_50 = rd32(sp0 - 0x50u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_100cb7f1;
    case 0x100cb806u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_58 = rd32(sp0 - 0x58u); loc_50 = rd32(sp0 - 0x50u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_100cb806;
    case 0x100cb80au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_58 = rd32(sp0 - 0x58u); loc_50 = rd32(sp0 - 0x50u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_100cb80a;
    case 0x100cb817u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_58 = rd32(sp0 - 0x58u); loc_50 = rd32(sp0 - 0x50u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_100cb817;
    case 0x100cb824u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_58 = rd32(sp0 - 0x58u); loc_50 = rd32(sp0 - 0x50u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_100cb824;
    case 0x100cb82bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_58 = rd32(sp0 - 0x58u); loc_50 = rd32(sp0 - 0x50u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_100cb82b;
    case 0x100cb833u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_58 = rd32(sp0 - 0x58u); loc_50 = rd32(sp0 - 0x50u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_100cb833;
    case 0x100cb842u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_58 = rd32(sp0 - 0x58u); loc_50 = rd32(sp0 - 0x50u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_100cb842;
    case 0x100cb85cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100cb85c;
    case 0x100cb863u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100cb863;
    case 0x100cb869u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100cb869;
    case 0x100cb877u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100cb877;
    case 0x100cb87cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_58 = rd32(sp0 - 0x58u); loc_50 = rd32(sp0 - 0x50u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_100cb87c;
    case 0x100cb883u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_58 = rd32(sp0 - 0x58u); loc_50 = rd32(sp0 - 0x50u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_100cb883;
    case 0x100cb891u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_58 = rd32(sp0 - 0x58u); loc_50 = rd32(sp0 - 0x50u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_100cb891;
    case 0x100cb8a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_58 = rd32(sp0 - 0x58u); loc_50 = rd32(sp0 - 0x50u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_100cb8a1;
    case 0x100cb8a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_58 = rd32(sp0 - 0x58u); loc_50 = rd32(sp0 - 0x50u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_100cb8a5;
    case 0x100cb8aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_58 = rd32(sp0 - 0x58u); loc_50 = rd32(sp0 - 0x50u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_100cb8ae;
    case 0x100cb8b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_58 = rd32(sp0 - 0x58u); loc_50 = rd32(sp0 - 0x50u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_100cb8b3;
    case 0x100cb8b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_58 = rd32(sp0 - 0x58u); loc_50 = rd32(sp0 - 0x50u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_100cb8b5;
    case 0x100cb8d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100cb8d1;
    case 0x100cb8eau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100cb8ea;
    case 0x100cb8f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100cb8f0;
    case 0x100cb8f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100cb8f6;
    case 0x100cb8fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100cb8fc;
    case 0x100cb901u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100cb901;
    case 0x100cb911u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100cb911;
    case 0x100cb91du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100cb91d;
    case 0x100cb927u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100cb927;
    case 0x100cb939u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100cb939;
    case 0x100cb943u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100cb943;
    case 0x100cb95fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100cb95f;
    case 0x100cb96au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100cb96a;
    case 0x100cb96eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100cb96e;
    case 0x100cb978u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100cb978;
    case 0x100cb981u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100cb981;
    case 0x100cb989u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100cb989;
    case 0x100cb996u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100cb996;
    case 0x100cb9a5u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100cb9a5;
    case 0x100cb9b6u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100cb9b6;
    case 0x100cb9c2u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100cb9c2;
    case 0x100cb9ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100cb9ce;
    case 0x100cb9e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100cb9e3;
    case 0x100cb9f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100cb9f1;
    case 0x100cb9f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cb9f7;
    case 0x100cba60u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100cba60;
    case 0x100cba7au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100cba7a;
    case 0x100cba8eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100cba8e;
    case 0x100cba96u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); goto E_100cba96;
    case 0x100cbaa7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); goto E_100cbaa7;
    case 0x100cbaafu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); goto E_100cbaaf;
    case 0x100cbac0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cbac0;
    case 0x100cbac8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cbac8;
    case 0x100cbadbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cbadb;
    case 0x100cbae3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cbae3;
    case 0x100cbaf6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cbaf6;
    case 0x100cbafeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cbafe;
    case 0x100cbb0du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cbb0d;
    case 0x100cbb15u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cbb15;
    case 0x100cbb1au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100cbb1a;
    case 0x100cbb28u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100cbb28;
    case 0x100cbb36u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100cbb36;
    case 0x100cbb9eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100cbb9e;
    case 0x100cbbb2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100cbbb2;
    case 0x100cbbbau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); goto E_100cbbba;
    case 0x100cbbcbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); goto E_100cbbcb;
    case 0x100cbbd3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); goto E_100cbbd3;
    case 0x100cbbe4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); goto E_100cbbe4;
    case 0x100cbbecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_100cbbec;
    case 0x100cbbffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_100cbbff;
    case 0x100cbc07u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_100cbc07;
    case 0x100cbc1au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_100cbc1a;
    case 0x100cbc22u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_100cbc22;
    case 0x100cbc35u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_100cbc35;
    case 0x100cbc3du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); goto E_100cbc3d;
    case 0x100cbc46u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100cbc46;
    case 0x100cbc54u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100cbc54;
    case 0x100cbc62u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100cbc62;
    case 0x100cbc6du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cbc6d;
    case 0x100cbc86u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100cbc86;
    case 0x100cbcb0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100cbcb0;
    case 0x100cbcbfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100cbcbf;
    case 0x100cbcc7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100cbcc7;
    case 0x100cbce6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100cbce6;
    case 0x100cbcfeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100cbcfe;
    case 0x100cbd16u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100cbd16;
    case 0x100cbd22u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100cbd22;
    case 0x100cbd2cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100cbd2c;
    case 0x100cbd32u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100cbd32;
    case 0x100cbd38u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100cbd38;
    case 0x100cbd3du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100cbd3d;
    case 0x100cbd4du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100cbd4d;
    default: break;
    }
#endif

    COW_AT(100cb4e0)
    wr32(sp0 - 0x60u, in_ebx);
    wr32(sp0 - 0x64u, in_ebp);
    wr32(sp0 - 0x68u, in_esi);
    wr32(sp0 - 0x6cu, in_edi);
    wr32(sp0 - 0x58u, self);
    g->esp = sp0 - 0x6cu;
    t1 = cow_call_regs(g, COW_IMG(0x10014cf0u), in_eax, g->ecx, g->edx, 1, 0);
    d2 = cow_take_float(g);
    eax = t1;
    x0 = d2;
    COW_AT(100cb4f2)
    d3 = fr(g, x0 * (double)rdf32(COW_IMG(0x1032df40u)));
    wrf32(sp0 - 0x5cu, (float)(double)(float)d3);
    if ((cow_fsw(g, d3, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, d3, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x100u;
    }
    else
    {
        eax = cow_fsw(g, d3, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x100u;
    COW_AT(100cb50b)
        wr32(sp0 - 0x5cu, 0x3f800000u);
    }
    COW_AT(100cb513)
    wr32(sp0 - 0x30u, 0x461c4000u);
    wr32(sp0 - 0x40u, 0u);
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x2cu, 0x461c4000u);
    wr32(sp0 - 0x28u, 0x461c4000u);
    wr32(sp0 - 0x24u, 0x461c4000u);
    wr32(sp0 - 0x50u, 0u);
    ebx = 0u;
    ebp = self;
    esi = self + 0x184u;
    edi = 0u;
    loc_60 = in_ebx;
    loc_64 = in_ebp;
    loc_68 = in_esi;
    loc_6c = in_edi;
    loc_58 = self;
    loc_40 = 0u;
    loc_50 = 0u;
L_100cb551: ;
    COW_AT(100cb551)
    if ((int32_t)edi >= 4) goto L_100cb698;
    COW_AT(100cb55a)
    t4 = rd32(esi + 0x204u);
    wr32(esi - 4u, t4);
    if (rd32(esi + 0x204u) != 1u)
    {
        eax = rd32(esi + 0x204u) - 1u;
    }
    else
    {
        ebp = esi - 4u;
    COW_AT(100cb573)
        t5 = rd32(esi + 0x208u);
        wr32(esi, t5);
        t6 = rd32(esi + 0x20cu);
        wr32(esi + 4u, t6);
        t7 = rd32(esi + 0x210u);
        wr32(esi + 8u, t7);
        t8 = rd32(esi + 0x214u);
        wr32(esi + 0xcu, t8);
        t9 = rd32(esi + 0x238u);
        wr32(esi + 0x30u, t9);
        t10 = rd32(esi + 0x23cu);
        wr32(esi + 0x34u, t10);
        t11 = rd32(esi + 0x240u);
        wr32(esi + 0x38u, t11);
        t12 = rd32(esi + 0x250u);
        wr32(esi + 0x48u, t12);
        t13 = rd32(esi + 0x260u);
        wr32(esi + 0x58u, t13);
        g->eax = t13;
        g->edx = rd32(loc_58);
        t14 = rd32(loc_58);
        g->esp = sp0 - 0x6cu;
        t15 = cow_thiscall(g, rd32(t14 + 0x1bcu), loc_58, 0);
        t16 = g->ecx;
        t17 = g->edx;
        eax = t15;
        ecx = t16;
        edx = t17;
        edi = esi + 0x30u;
    COW_AT(100cb5d1)
        wr32(sp0 - 0x70u, eax);
        wr32(sp0 - 0x74u, edi);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        g->esp = sp0 - 0x6cu;
        cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x10u, edi, eax);
    COW_AT(100cb5dd)
        wr32(sp0 - 0x7cu, sp0 - 0x10u);
        wr32(sp0 - 0x80u, sp0 - 0x10u);
        wr32(sp0 - 0x84u, sp0 - 0x20u);
        g->eax = sp0 - 0x20u;
        g->esp = sp0 - 0x78u;
        t18 = cow_cdecl(g, COW_IMG(0x10027340u), 3, sp0 - 0x20u, sp0 - 0x10u, sp0 - 0x10u);
        eax = t18;
    COW_AT(100cb5f1)
        d19 = fr(g, fr(g, (double)rdf32(sp0 - 0x18u) + (double)rdf32(sp0 - 0x1cu)) + (double)rdf32(sp0 - 0x20u));
        d20 = (double)rdf32(esi + 0x48u);
        if ((cow_fsw(g, fr(g, sqrt(d19)), d20, 1u) & 0x4100u) == 0u)
        {
            eax = cow_fsw(g, fr(g, sqrt(d19)), d20, 1u) & 0x4100u;
            x0 = d19;
            goto L_100cb681;
        }
        eax = cow_fsw(g, fr(g, sqrt(d19)), d20, 1u) & 0x4100u;
        x0 = d19;
    COW_AT(100cb610)
        d21 = fr(g, x0 * (double)rdf32(esi + 0x58u));
        if (!(d21 <= (double)rdf32(COW_IMG(0x1032a1a8u))))
        {
            x0 = d21;
        }
        else
        {
            x0 = d21;
    COW_AT(100cb620)
            x0 = (double)rdf32(COW_IMG(0x1032a1a8u));
        }
    COW_AT(100cb628)
        ecx = 0u;
        x0 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x0);
L_100cb630: ;
    COW_AT(100cb630)
        if (rd32(ecx * 4u + sp0 - 0x40u) == 0u)
        {
            eax = rd32(ecx * 4u + sp0 - 0x40u);
            goto L_100cb64b;
        }
        eax = rd32(ecx * 4u + sp0 - 0x40u);
    COW_AT(100cb638)
        d22 = (double)rdf32(ecx * 4u + sp0 - 0x30u);
        if ((cow_fsw(g, x0, d22, 1u) & 0x4100u) == 0u)
        {
            eax = cow_fsw(g, x0, d22, 1u) & 0x4100u;
            goto L_100cb64b;
        }
        eax = cow_fsw(g, x0, d22, 1u) & 0x4100u;
    COW_AT(100cb645)
        if ((int32_t)(ecx + 1u) < 4)
        {
            ecx = ecx + 1u;
            goto L_100cb630;
        }
        ecx = ecx + 1u;
L_100cb64b: ;
    COW_AT(100cb64b)
        if (ecx == 4u) goto L_100cb681;
    COW_AT(100cb650)
        if ((int32_t)ecx > 2) goto L_100cb66e;
        eax = 2u;
L_100cb659: ;
    COW_AT(100cb659)
        t23 = rd32(eax * 4u + sp0 - 0x40u);
        wr32(eax * 4u + sp0 - 0x3cu, t23);
        t24 = rd32(eax * 4u + sp0 - 0x30u);
        wr32(eax * 4u + sp0 - 0x2cu, t24);
        if ((int32_t)(eax - 1u) >= (int32_t)ecx)
        {
            eax = eax - 1u;
            goto L_100cb659;
        }
L_100cb66e: ;
    COW_AT(100cb66e)
        t25 = rd32(sp0 - 0x50u);
        wr32(ecx * 4u + sp0 - 0x40u, ebp);
        wrf32(ecx * 4u + sp0 - 0x30u, (float)x0);
        wr32(sp0 - 0x50u, t25 + 1u);
        eax = t25 + 1u;
        loc_60 = rd32(sp0 - 0x60u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_68 = rd32(sp0 - 0x68u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_50 = t25 + 1u;
    }
L_100cb683: ;
    COW_AT(100cb683)
    if ((int32_t)(ebx + 1u) < 5)
    {
        ebx = ebx + 1u;
        ebp = loc_58;
        esi = esi + 0x68u;
        edi = loc_50;
        goto L_100cb551;
    }
    ebp = loc_58;
    edi = loc_50;
L_100cb698: ;
    COW_AT(100cb698)
    if ((int32_t)edi > 1)
    {
    COW_AT(100cb69d)
        wr32(sp0 - 0x2cu, 0u);
        wr32(sp0 - 0x3cu, 0u);
        wr32(sp0 - 0x28u, 0u);
        wr32(sp0 - 0x38u, 0u);
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x34u, 0u);
        eax = 0u;
        edi = 1u;
    }
    COW_AT(100cb6be)
    ecx = ebp + 0x184u;
    ebx = 0u;
L_100cb6c6: ;
    COW_AT(100cb6c6)
    if ((int32_t)edi >= 4) goto L_100cb824;
    COW_AT(100cb6cf)
    t26 = rd32(ecx + 0x204u);
    wr32(ecx - 4u, t26);
    if (rd32(ecx + 0x204u) != 3u)
    {
        eax = rd32(ecx + 0x204u);
    }
    else
    {
        eax = rd32(ecx + 0x204u);
        esi = ecx - 4u;
    COW_AT(100cb6e9)
        if (rd8(ebp + 0xb0u) == 0u) goto L_100cb740;
    COW_AT(100cb6f3)
        if (rd16(ebp + 0xb2u) != 0u) goto L_100cb740;
    COW_AT(100cb6fd)
        t27 = rd32(ecx + 0x208u);
        wr32(ecx, t27);
        t28 = rd32(ecx + 0x20cu);
        wr32(ecx + 4u, t28);
        t29 = rd32(ecx + 0x210u);
        wr32(ecx + 8u, t29);
        t30 = rd32(ecx + 0x214u);
        wr32(ecx + 0xcu, t30);
        t31 = rd32(ecx + 0x244u);
        wr32(ecx + 0x3cu, t31);
        t32 = rd32(ecx + 0x248u);
        wr32(ecx + 0x40u, t32);
        t33 = rd32(ecx + 0x24cu);
        wr32(ecx + 0x44u, t33);
L_100cb7c2: ;
    COW_AT(100cb7c2)
        edx = 0u;
L_100cb7c4: ;
    COW_AT(100cb7c4)
        if (rd32(edx * 4u + sp0 - 0x40u) == 0u)
        {
            eax = rd32(edx * 4u + sp0 - 0x40u);
            goto L_100cb7e3;
        }
        eax = rd32(edx * 4u + sp0 - 0x40u);
    COW_AT(100cb7cc)
        d41 = (double)rdf32(edx * 4u + sp0 - 0x30u);
        if (d41 < (double)rdf32(COW_IMG(0x1032a22cu)))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d41, (double)rdf32(COW_IMG(0x1032a22cu)), 0u);
            goto L_100cb7e3;
        }
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d41, (double)rdf32(COW_IMG(0x1032a22cu)), 0u);
    COW_AT(100cb7dd)
        if ((int32_t)(edx + 1u) < 4)
        {
            edx = edx + 1u;
            goto L_100cb7c4;
        }
        edx = edx + 1u;
L_100cb7e3: ;
    COW_AT(100cb7e3)
        if (edx != 4u)
        {
    COW_AT(100cb7e8)
            if ((int32_t)edx > 2)
            {
                eax = 2u;
                goto L_100cb80a;
            }
            eax = 2u;
L_100cb7f1: ;
    COW_AT(100cb7f1)
            t42 = rd32(eax * 4u + sp0 - 0x40u);
            wr32(eax * 4u + sp0 - 0x3cu, t42);
            t43 = rd32(eax * 4u + sp0 - 0x30u);
            wr32(eax * 4u + sp0 - 0x2cu, t43);
            if ((int32_t)(eax - 1u) >= (int32_t)edx)
            {
                eax = eax - 1u;
                goto L_100cb7f1;
            }
            eax = eax - 1u;
    COW_AT(100cb806)
            ebp = loc_58;
L_100cb80a: ;
    COW_AT(100cb80a)
            wr32(edx * 4u + sp0 - 0x40u, esi);
            wr32(edx * 4u + sp0 - 0x30u, 0x3a83126fu);
            edi = edi + 1u;
        }
    }
    COW_AT(100cb817)
    if ((int32_t)(ebx + 1u) < 5)
    {
        ecx = ecx + 0x68u;
        ebx = ebx + 1u;
        goto L_100cb6c6;
    }
L_100cb824: ;
    COW_AT(100cb824)
    ebx = 0u;
    ebp = COW_IMG(0x104572b8u);
L_100cb82b: ;
    COW_AT(100cb82b)
    if (rd32(ebx + sp0 - 0x40u) == 0u)
    {
    COW_AT(100cb87c)
        wr32(ebp, 0u);
    }
    else
    {
        esi = rd32(ebx + sp0 - 0x40u);
    COW_AT(100cb833)
        edi = ebp;
        ecx = 0x1au;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        if (rd32(ebp) == 1u)
        {
    COW_AT(100cb842)
            wr32(ebp, 3u);
            wr32(sp0 - 0x70u, ebp + 0x34u);
            g->eax = eax;
            g->edx = rd32(loc_58);
            t44 = rd32(loc_58);
            g->esp = sp0 - 0x6cu;
            t45 = cow_thiscall_cdecl(g, rd32(t44 + 0x1bcu), loc_58, 1, ebp + 0x34u);
            t46 = g->ecx;
            t47 = g->edx;
            eax = t45;
            ecx = t46;
            edx = t47;
            esi = ebp + 0x40u;
    COW_AT(100cb85c)
            wr32(sp0 - 0x74u, eax);
            wr32(sp0 - 0x78u, esi);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x6cu;
            t48 = cow_cdecl(g, COW_IMG(0x10027120u), 3, esi, eax, rd32(sp0 - 0x70u));
            t49 = g->ecx;
            t50 = g->edx;
            eax = t48;
            ecx = t49;
            edx = t50;
    COW_AT(100cb863)
            wr32(sp0 - 0x7cu, esi);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x78u;
            cow_call_regs(g, COW_IMG(0x100274b0u), eax, g->ecx, g->edx, 1, 1, esi);
            t51 = g->ecx;
            t52 = g->edx;
            ecx = t51;
            edx = t52;
    COW_AT(100cb869)
            t53 = rd32(ebx + sp0 - 0x30u);
            wr32(sp0 - 0x80u, t53);
            wr32(sp0 - 0x84u, esi - 0x3cu);
            g->eax = t53;
            g->esp = sp0 - 0x7cu;
            t54 = cow_cdecl(g, COW_IMG(0x100272b0u), 2, esi - 0x3cu, t53);
            eax = t54;
    COW_AT(100cb877)
            loc_60 = rd32(sp0 - 0x60u);
            loc_64 = rd32(sp0 - 0x64u);
            loc_68 = rd32(sp0 - 0x68u);
            loc_6c = rd32(sp0 - 0x6cu);
            loc_58 = rd32(sp0 - 0x58u);
            loc_40 = rd32(sp0 - 0x40u);
        }
    }
    COW_AT(100cb883)
    if ((int32_t)(ebp + 0x68u) < (int32_t)COW_IMG(0x10457458u))
    {
        ebx = ebx + 4u;
        ebp = ebp + 0x68u;
        goto L_100cb82b;
    }
    COW_AT(100cb891)
    eax = 0u;
    ecx = loc_58 + 0x180u;
    edx = loc_40;
    edi = loc_58;
L_100cb8a1: ;
    COW_AT(100cb8a1)
    if (ecx == edx) goto L_100cb8ae;
    COW_AT(100cb8a5)
    if ((int32_t)(eax + 1u) < 4)
    {
        eax = eax + 1u;
        ecx = ecx + 0x68u;
        goto L_100cb8a1;
    }
    eax = eax + 1u;
L_100cb8ae: ;
    COW_AT(100cb8ae)
    if (eax == 4u)
    {
    COW_AT(100cb8b3)
        eax = 0u;
    }
    COW_AT(100cb8b5)
    t55 = eax * 0x68u + edi + 0x388u;
    wr32(COW_IMG(0x1048a308u), t55);
    g->eax = t55;
    g->edx = rd32(edi);
    t56 = rd32(edi);
    g->esp = sp0 - 0x6cu;
    t57 = cow_thiscall(g, rd32(t56 + 0x230u), edi, 0);
    t58 = g->edx;
    eax = t57;
    edx = t58;
    COW_AT(100cb8d1)
    wr32(sp0 - 0x70u, sp0 - 0x50u);
    g->edx = edx;
    g->esp = sp0 - 0x6cu;
    t59 = cow_call_regs(g, COW_IMG(0x10039410u), sp0 - 0x50u, edi + 0x710u, g->edx, 0, 1, sp0 - 0x50u);
    t60 = g->edx;
    edx = t60;
    ebx = edi + 0x710u;
    esi = -(eax != 0u) + 1u;
    eax = t59;
    COW_AT(100cb8ea)
    if (rd32(eax) == 0u)
    {
        eax = rd32(eax);
        goto L_100cb91d;
    }
    eax = rd32(eax);
    COW_AT(100cb8f0)
    if (rd32(eax) == 0u)
    {
        eax = rd32(eax);
        goto L_100cb91d;
    }
    eax = rd32(eax);
    COW_AT(100cb8f6)
    if ((rd8(eax + 0x30u) & 2u) == 0u)
    {
    COW_AT(100cb8fc)
        eax = COW_IMG(0x104572b8u);
L_100cb901: ;
    COW_AT(100cb901)
        wr32(eax, 0u);
        if ((int32_t)(eax + 0x68u) < (int32_t)COW_IMG(0x10457458u))
        {
            eax = eax + 0x68u;
            goto L_100cb901;
        }
    }
    COW_AT(100cb911)
    wr32(COW_IMG(0x104571d8u), 0x80707070u);
L_100cb939: ;
    COW_AT(100cb939)
    g->eax = rd32(edi);
    t65 = rd32(edi);
    g->esp = sp0 - 0x6cu;
    t66 = cow_thiscall(g, rd32(t65 + 0x188u), edi, 0);
    eax = t66;
    COW_AT(100cb943)
    wr32(sp0 - 0x70u, eax);
    wr32(sp0 - 0x74u, esi);
    wr32(sp0 - 0x78u, sp0 - 0x48u);
    wr32(sp0 - 0x7cu, sp0 - 0x44u);
    wr32(sp0 - 0x80u, sp0 - 0x4cu);
    g->eax = sp0 - 0x4cu;
    g->edx = sp0 - 0x44u;
    g->esp = sp0 - 0x6cu;
    t67 = cow_thiscall(g, COW_IMG(0x1018ba20u), rd32(COW_IMG(0x1065cb04u)), 5, sp0 - 0x4cu, sp0 - 0x44u, sp0 - 0x48u, esi, eax);
    t68 = g->edx;
    eax = t67;
    edx = t68;
    COW_AT(100cb95f)
    g->edx = edx;
    g->esp = sp0 - 0x6cu;
    t69 = cow_call_regs(g, COW_IMG(0x10157cf0u), eax, rd32(COW_IMG(0x1057876cu)), g->edx, 1, 0);
    t70 = g->edx;
    eax = t69;
    edx = t70;
    COW_AT(100cb96a)
    if (eax == 0u)
    {
    COW_AT(100cb96e)
        g->eax = eax;
        g->esp = sp0 - 0x6cu;
        t71 = cow_thiscall(g, COW_IMG(0x10081600u), COW_IMG(0x10487f58u), 0);
        eax = t71;
    }
    COW_AT(100cb978)
    if (eax == edi) goto L_100cb996;
    COW_AT(100cb981)
    if ((rd32(edi + 0x88u) & 0x200u) != 0u) goto L_100cb996;
    COW_AT(100cb989)
    eax = (rd32(edi + 0x840u) & 0xffffff00u) | (rd32(edi + 0x840u) & 0xfbu);
L_100cbcc7: ;
    COW_AT(100cbcc7)
    wr32(edi + 0x840u, eax);
    t128 = rd32(sp0 - 0x4cu);
    wr32(sp0 - 0x70u, t128);
    wr32(sp0 - 0x74u, 0x22u);
    t129 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x78u, t129);
    g->esp = sp0 - 0x6cu;
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xc8u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t129, 0x22u, t128);
    COW_AT(100cbce6)
    t130 = rd32(sp0 - 0x48u);
    wr32(sp0 - 0x70u, t130);
    wr32(sp0 - 0x74u, 0x24u);
    t131 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x78u, t131);
    g->esp = sp0 - 0x6cu;
    cow_thiscall(g, rd32(rd32(t131) + 0xc8u), rd32(t131), 3, t131, 0x24u, t130);
    COW_AT(100cbcfe)
    t132 = rd32(sp0 - 0x44u);
    wr32(sp0 - 0x70u, t132);
    wr32(sp0 - 0x74u, 0x25u);
    t133 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x78u, t133);
    g->edx = t132;
    g->esp = sp0 - 0x6cu;
    cow_thiscall(g, rd32(rd32(t133) + 0xc8u), rd32(t133), 3, t133, 0x25u, t132);
    t134 = g->edx;
    edx = t134;
    COW_AT(100cbd16)
    wr32(sp0 - 0x70u, sp0 - 0x50u);
    g->esp = sp0 - 0x6cu;
    t135 = cow_call_regs(g, COW_IMG(0x10039410u), sp0 - 0x50u, ebx, g->edx, 0, 1, sp0 - 0x50u);
    eax = t135;
    COW_AT(100cbd22)
    if (rd32(eax) == 0u)
    {
        ebx = rd32(sp0 - 0x60u);
        ebp = rd32(sp0 - 0x64u);
        esi = rd32(sp0 - 0x68u);
        edi = rd32(sp0 - 0x6cu);
    }
    else
    {
        eax = rd32(eax);
        ebx = rd32(sp0 - 0x60u);
        ebp = rd32(sp0 - 0x64u);
        esi = rd32(sp0 - 0x68u);
        edi = rd32(sp0 - 0x6cu);
    COW_AT(100cbd2c)
        if (rd32(eax) != 0u)
        {
            eax = rd32(eax);
    COW_AT(100cbd32)
            if ((rd8(eax + 0x30u) & 2u) == 0u)
            {
    COW_AT(100cbd38)
                eax = COW_IMG(0x104572b8u);
L_100cbd3d: ;
    COW_AT(100cbd3d)
                wr32(eax, 0u);
                if ((int32_t)(eax + 0x68u) < (int32_t)COW_IMG(0x10457458u))
                {
                    eax = eax + 0x68u;
                    goto L_100cbd3d;
                }
            }
        }
    }
    COW_AT(100cbd4d)
    g->ebx = ebx;
    g->esi = esi;
    g->edi = edi;
    g->ebp = ebp;
    return;
L_100cb681: ;
    COW_AT(100cb681)
    loc_60 = rd32(sp0 - 0x60u);
    loc_64 = rd32(sp0 - 0x64u);
    loc_68 = rd32(sp0 - 0x68u);
    loc_6c = rd32(sp0 - 0x6cu);
    loc_58 = rd32(sp0 - 0x58u);
    loc_40 = rd32(sp0 - 0x40u);
    loc_50 = rd32(sp0 - 0x50u);
    goto L_100cb683;
L_100cb740: ;
    COW_AT(100cb740)
    d34 = fr(g, fr(g, fr(g, (double)rdf32(ecx + 0x208u) - (double)rdf32(ecx)) * (double)rdf32(sp0 - 0x5cu)) + (double)rdf32(ecx));
    wrf32(ecx, (float)d34);
    d35 = fr(g, fr(g, fr(g, (double)rdf32(ecx + 0x20cu) - (double)rdf32(ecx + 4u)) * (double)rdf32(sp0 - 0x5cu)) + (double)rdf32(ecx + 4u));
    wrf32(ecx + 4u, (float)d35);
    d36 = fr(g, fr(g, fr(g, (double)rdf32(ecx + 0x210u) - (double)rdf32(ecx + 8u)) * (double)rdf32(sp0 - 0x5cu)) + (double)rdf32(ecx + 8u));
    wrf32(ecx + 8u, (float)d36);
    d37 = fr(g, fr(g, fr(g, (double)rdf32(ecx + 0x214u) - (double)rdf32(ecx + 0xcu)) * (double)rdf32(sp0 - 0x5cu)) + (double)rdf32(ecx + 0xcu));
    wrf32(ecx + 0xcu, (float)d37);
    d38 = fr(g, fr(g, fr(g, (double)rdf32(ecx + 0x244u) - (double)rdf32(ecx + 0x3cu)) * (double)rdf32(sp0 - 0x5cu)) + (double)rdf32(ecx + 0x3cu));
    wrf32(ecx + 0x3cu, (float)d38);
    d39 = fr(g, fr(g, fr(g, (double)rdf32(ecx + 0x248u) - (double)rdf32(ecx + 0x40u)) * (double)rdf32(sp0 - 0x5cu)) + (double)rdf32(ecx + 0x40u));
    wrf32(ecx + 0x40u, (float)d39);
    d40 = fr(g, fr(g, fr(g, (double)rdf32(ecx + 0x24cu) - (double)rdf32(ecx + 0x44u)) * (double)rdf32(sp0 - 0x5cu)) + (double)rdf32(ecx + 0x44u));
    wrf32(ecx + 0x44u, (float)d40);
    goto L_100cb7c2;
L_100cb91d: ;
    COW_AT(100cb91d)
    g->eax = eax;
    g->edx = rd32(edi);
    t61 = rd32(edi);
    g->esp = sp0 - 0x6cu;
    t62 = cow_thiscall(g, rd32(t61 + 0x188u), edi, 0);
    t63 = g->edx;
    eax = t62;
    edx = t63;
    COW_AT(100cb927)
    wr32(sp0 - 0x70u, eax);
    wr32(sp0 - 0x74u, esi);
    wr32(sp0 - 0x78u, COW_IMG(0x104571d8u));
    g->edx = edx;
    g->esp = sp0 - 0x6cu;
    cow_thiscall(g, COW_IMG(0x1018b9e0u), rd32(COW_IMG(0x1065cb04u)), 3, COW_IMG(0x104571d8u), esi, eax);
    t64 = g->edx;
    edx = t64;
    goto L_100cb939;
L_100cb996: ;
    COW_AT(100cb996)
    if ((rd32(edi + 0x840u) & 4u) != 0u)
    {
        eax = rd32(edi + 0x840u);
    }
    else
    {
        eax = rd32(edi + 0x840u);
    COW_AT(100cb9a5)
        wr32(edi + 0x844u, 0x42200000u);
        wr32(edi + 0x840u, eax | 0x6000000u);
        eax = eax | 0x6000000u;
    }
    COW_AT(100cb9b6)
    if ((rd32(edi + 0x840u) & 0x6000000u) != 0u) goto L_100cb9ce;
    COW_AT(100cb9c2)
    if ((rd32(edi + 0x88u) & 0x200u) == 0u) goto L_100cbcbf;
L_100cb9ce: ;
    COW_AT(100cb9ce)
    d72 = (double)rdf32(edi + 0x844u);
    if ((cow_fsw(g, d72, (double)rdf32(COW_IMG(0x10329ce0u)), 0u) & 0x4100u) != 0u)
    {
    COW_AT(100cb9f1)
        x0 = (double)rdf32(edi + 0x844u);
    }
    else
    {
    COW_AT(100cb9e3)
        x0 = fr(g, (double)rdf32(COW_IMG(0x10331380u)) - (double)rdf32(edi + 0x844u));
    }
    COW_AT(100cb9f7)
    wr32(sp0 - 0x54u, 0u);
    t73 = (uint8_t)rd32(COW_IMG(0x104571d8u));
    d74 = fr(g, x0 * (double)rdf32(COW_IMG(0x1032a3e0u)));
    wr32(sp0 - 0x58u, t73);
    wrf32(sp0 - 0x50u, (float)(double)(float)d74);
    t75 = (uint8_t)(rd32(COW_IMG(0x104571d8u)) >> 8u);
    wr32(sp0 - 0x58u, t75);
    wr32(sp0 - 0x70u, t73);
    d76 = (double)(float)(double)(int64_t)cow_i64(t73, 0u);
    wrf32(sp0 - 0x40u, (float)d76);
    wr32(sp0 - 0x58u, rd8(COW_IMG(0x104571dau)));
    wrf32(sp0 - 0x3cu, (float)(double)(float)(double)(int32_t)t75);
    d77 = (double)(float)(double)(int32_t)rd8(COW_IMG(0x104571dau));
    wrf32(sp0 - 0x38u, (float)d77);
    d78 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)(float)d74);
    wrf32(sp0 - 0x70u, (float)(double)(float)d78);
    wr32(sp0 - 0x74u, sp0 - 0x40u);
    g->eax = rd8(COW_IMG(0x104571dau));
    g->ecx = sp0 - 0x40u;
    t79 = rd8(COW_IMG(0x104571dau));
    g->esp = sp0 - 0x6cu;
    t80 = cow_cdecl(g, COW_IMG(0x100272b0u), 2, sp0 - 0x40u, cow_f2bits((double)(float)d78));
    t81 = g->ecx;
    eax = t80;
    ecx = t81;
    COW_AT(100cba60)
    d82 = fr(g, (double)rdf32(sp0 - 0x50u) * (double)rdf32(COW_IMG(0x1033137cu)));
    wrf32(sp0 - 0x70u, (float)(double)(float)d82);
    wr32(sp0 - 0x74u, sp0 - 0x40u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = sp0 - 0x40u;
    g->esp = sp0 - 0x6cu;
    t83 = cow_cdecl(g, COW_IMG(0x10027020u), 2, sp0 - 0x40u, cow_f2bits((double)(float)d82));
    t84 = g->ecx;
    t85 = g->edx;
    eax = t83;
    ecx = t84;
    edx = t85;
    COW_AT(100cba7a)
    d86 = (double)rdf32(sp0 - 0x40u);
    if (!(d86 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d86, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        loc_40 = rd32(sp0 - 0x40u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d86, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100cba8e)
        wr32(sp0 - 0x40u, 0u);
        loc_40 = 0u;
    }
    COW_AT(100cba96)
    d87 = (double)rdf32(sp0 - 0x3cu);
    if (!(d87 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d87, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        loc_3c = rd32(sp0 - 0x3cu);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d87, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100cbaa7)
        wr32(sp0 - 0x3cu, 0u);
        loc_3c = 0u;
    }
    COW_AT(100cbaaf)
    d88 = (double)rdf32(sp0 - 0x38u);
    if (!(d88 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d88, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = d88;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d88, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = d88;
    COW_AT(100cbac0)
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(100cbac8)
    if ((cow_fsw(g, cow_bits2f(loc_40), (double)rdf32(COW_IMG(0x10329a20u)), 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, cow_bits2f(loc_40), (double)rdf32(COW_IMG(0x10329a20u)), 1u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, cow_bits2f(loc_40), (double)rdf32(COW_IMG(0x10329a20u)), 1u) & 0x4100u;
    COW_AT(100cbadb)
        wr32(sp0 - 0x40u, 0x437f0000u);
        loc_40 = 0x437f0000u;
    }
    COW_AT(100cbae3)
    if ((cow_fsw(g, cow_bits2f(loc_3c), (double)rdf32(COW_IMG(0x10329a20u)), 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, cow_bits2f(loc_3c), (double)rdf32(COW_IMG(0x10329a20u)), 1u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, cow_bits2f(loc_3c), (double)rdf32(COW_IMG(0x10329a20u)), 1u) & 0x4100u;
    COW_AT(100cbaf6)
        wr32(sp0 - 0x3cu, 0x437f0000u);
        loc_3c = 0x437f0000u;
    }
    COW_AT(100cbafe)
    if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a20u)), 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a20u)), 1u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a20u)), 1u) & 0x4100u;
    COW_AT(100cbb0d)
        x0 = (double)rdf32(COW_IMG(0x10329a20u));
    }
    COW_AT(100cbb15)
    g->ecx = ecx;
    g->edx = edx;
    fpush(g, x0);
    g->esp = sp0 - 0x6cu;
    t89 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t90 = g->ecx;
    t91 = g->edx;
    eax = t89;
    ecx = t90;
    edx = t91;
    COW_AT(100cbb1a)
    g->ecx = ecx;
    g->edx = edx;
    d92 = (double)rdf32(sp0 - 0x3cu);
    fpush(g, d92);
    g->esp = sp0 - 0x6cu;
    t93 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t94 = g->ecx;
    t95 = g->edx;
    ecx = t94;
    edx = t95;
    ebp = eax << 8u;
    eax = t93;
    COW_AT(100cbb28)
    d96 = (double)rdf32(sp0 - 0x40u);
    fpush(g, d96);
    g->esp = sp0 - 0x6cu;
    t97 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    ebp = (ebp | eax) << 8u;
    eax = t97;
    COW_AT(100cbb36)
    t98 = rd32(sp0 - 0x4cu);
    wr32(COW_IMG(0x104571d8u), ebp | eax);
    wr32(sp0 - 0x58u, (uint8_t)t98);
    wr32(sp0 - 0x54u, 0u);
    wr32(sp0 - 0x54u, 0u);
    d99 = (double)(float)(double)(int64_t)cow_i64((uint8_t)t98, 0u);
    wrf32(sp0 - 0x40u, (float)d99);
    t100 = (uint8_t)(t98 >> 8u);
    wr32(sp0 - 0x58u, t100);
    wr32(sp0 - 0x54u, 0u);
    d101 = (double)(float)(double)(int64_t)cow_i64(t100, 0u);
    wrf32(sp0 - 0x3cu, (float)d101);
    t102 = (uint8_t)(t98 >> 0x10u);
    wr32(sp0 - 0x58u, t102);
    t103 = rd32(sp0 - 0x50u);
    wr32(sp0 - 0x70u, t103);
    wr32(sp0 - 0x74u, sp0 - 0x40u);
    d104 = (double)(float)(double)(int64_t)cow_i64(t102, 0u);
    wrf32(sp0 - 0x38u, (float)d104);
    g->eax = t103;
    g->ecx = sp0 - 0x40u;
    g->edx = t100;
    g->esp = sp0 - 0x6cu;
    t105 = cow_cdecl(g, COW_IMG(0x100272b0u), 2, sp0 - 0x40u, t103);
    t106 = g->ecx;
    t107 = g->edx;
    eax = t105;
    ecx = t106;
    edx = t107;
    COW_AT(100cbb9e)
    d108 = (double)rdf32(sp0 - 0x40u);
    if (!(d108 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d108, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        loc_40 = rd32(sp0 - 0x40u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d108, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100cbbb2)
        wr32(sp0 - 0x40u, 0u);
        loc_40 = 0u;
    }
    COW_AT(100cbbba)
    d109 = (double)rdf32(sp0 - 0x3cu);
    if (!(d109 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d109, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        loc_3c = rd32(sp0 - 0x3cu);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d109, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100cbbcb)
        wr32(sp0 - 0x3cu, 0u);
        loc_3c = 0u;
    }
    COW_AT(100cbbd3)
    d110 = (double)rdf32(sp0 - 0x38u);
    if (!(d110 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d110, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        loc_38 = rd32(sp0 - 0x38u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d110, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100cbbe4)
        wr32(sp0 - 0x38u, 0u);
        loc_38 = 0u;
    }
    COW_AT(100cbbec)
    if ((cow_fsw(g, cow_bits2f(loc_40), (double)rdf32(COW_IMG(0x10329a20u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, cow_bits2f(loc_40), (double)rdf32(COW_IMG(0x10329a20u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, cow_bits2f(loc_40), (double)rdf32(COW_IMG(0x10329a20u)), 0u) & 0x4100u;
    COW_AT(100cbbff)
        wr32(sp0 - 0x40u, 0x437f0000u);
        loc_40 = 0x437f0000u;
    }
    COW_AT(100cbc07)
    if ((cow_fsw(g, cow_bits2f(loc_3c), (double)rdf32(COW_IMG(0x10329a20u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, cow_bits2f(loc_3c), (double)rdf32(COW_IMG(0x10329a20u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, cow_bits2f(loc_3c), (double)rdf32(COW_IMG(0x10329a20u)), 0u) & 0x4100u;
    COW_AT(100cbc1a)
        wr32(sp0 - 0x3cu, 0x437f0000u);
        loc_3c = 0x437f0000u;
    }
    COW_AT(100cbc22)
    if ((cow_fsw(g, cow_bits2f(loc_38), (double)rdf32(COW_IMG(0x10329a20u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, cow_bits2f(loc_38), (double)rdf32(COW_IMG(0x10329a20u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, cow_bits2f(loc_38), (double)rdf32(COW_IMG(0x10329a20u)), 0u) & 0x4100u;
    COW_AT(100cbc35)
        wr32(sp0 - 0x38u, 0x437f0000u);
        loc_38 = 0x437f0000u;
    }
    COW_AT(100cbc3d)
    g->ecx = ecx;
    g->edx = edx;
    fpush(g, cow_bits2f(loc_38));
    g->esp = sp0 - 0x6cu;
    t111 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t112 = g->ecx;
    t113 = g->edx;
    eax = t111;
    ecx = t112;
    edx = t113;
    COW_AT(100cbc46)
    g->ecx = ecx;
    g->edx = edx;
    d114 = (double)rdf32(sp0 - 0x3cu);
    fpush(g, d114);
    g->esp = sp0 - 0x6cu;
    t115 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t116 = g->ecx;
    t117 = g->edx;
    ecx = t116;
    edx = t117;
    ebp = eax << 8u;
    eax = t115;
    COW_AT(100cbc54)
    g->ecx = ecx;
    g->edx = edx;
    d118 = (double)rdf32(sp0 - 0x40u);
    fpush(g, d118);
    g->esp = sp0 - 0x6cu;
    t119 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t120 = g->ecx;
    t121 = g->edx;
    ecx = t120;
    edx = t121;
    ebp = (ebp | eax) << 8u;
    eax = t119;
    COW_AT(100cbc62)
    wr32(sp0 - 0x4cu, ebp | eax);
    g->esp = sp0 - 0x6cu;
    t122 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    d123 = cow_take_float(g);
    eax = t122;
    x0 = d123;
    COW_AT(100cbc6d)
    d124 = fr(g, (double)rdf32(edi + 0x844u) - x0);
    wrf32(edi + 0x844u, (float)d124);
    if (d124 < (double)rdf32(COW_IMG(0x103295d8u)))
    {
    COW_AT(100cbc86)
        t125 = rd32(edi + 0x840u);
        wr32(edi + 0x844u, 0x42200000u);
        t126 = (((t125 & 0xfe000000u) - 1u ^ t125) & 0x6000000u) ^ t125;
        wr32(edi + 0x840u, t126);
        if ((((t125 & 0xfe000000u) - 1u ^ t125 ^ t125) & 0x6000000u) == 0u)
        {
    COW_AT(100cbcb0)
            t127 = (rd32(edi + 0x88u) & 0xffff00ffu) | (rd32(edi + 0x88u) >> 8u & 0xfdu) << 8u;
            wr32(edi + 0x88u, t127);
        }
    }
L_100cbcbf: ;
    COW_AT(100cbcbf)
    eax = (rd32(edi + 0x840u) & 0xffffff00u) | (uint8_t)(rd32(edi + 0x840u) | 4u);
    goto L_100cbcc7;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100cb4e0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100cb4f2u:
    {
        uint32_t eax;
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
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x6cu);
        in_esi = rd32(sp0 - 0x68u);
        in_ebp = rd32(sp0 - 0x64u);
        in_ebx = rd32(sp0 - 0x60u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x6cu;
        wr32(sp0 - 0x58u, self);
        (void)sp0;
        return 1;
    }
    case 0x100cb50bu:
    {
        uint32_t eax;
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
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x6cu);
        in_esi = rd32(sp0 - 0x68u);
        in_ebp = rd32(sp0 - 0x64u);
        in_ebx = rd32(sp0 - 0x60u);
        g->esp = sp0 - 0x6cu;
        wr32(sp0 - 0x58u, self);
        (void)sp0;
        return 1;
    }
    case 0x100cb513u:
    {
        uint32_t eax;
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
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x6cu);
        in_esi = rd32(sp0 - 0x68u);
        in_ebp = rd32(sp0 - 0x64u);
        in_ebx = rd32(sp0 - 0x60u);
        g->esp = sp0 - 0x6cu;
        wr32(sp0 - 0x58u, self);
        (void)sp0;
        return 1;
    }
    case 0x100cb551u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_50;
        uint32_t loc_58;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x100cb55au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_50;
        uint32_t loc_58;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x100cb573u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_50;
        uint32_t loc_58;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x100cb5d1u:
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
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x100cb5ddu:
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
        g->esp = sp0 - 0x78u;
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100cb5f1u:
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
        g->esp = sp0 - 0x84u;
        wr32(sp0 - 0x84u, sp0 - 0x20u);
        wr32(sp0 - 0x80u, sp0 - 0x10u);
        wr32(sp0 - 0x7cu, sp0 - 0x10u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100cb610u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x6cu;
        wr32(sp0 - 0x84u, sp0 - 0x20u);
        wr32(sp0 - 0x80u, sp0 - 0x10u);
        wr32(sp0 - 0x7cu, sp0 - 0x10u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100cb620u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x6cu;
        wr32(sp0 - 0x84u, sp0 - 0x20u);
        wr32(sp0 - 0x80u, sp0 - 0x10u);
        wr32(sp0 - 0x7cu, sp0 - 0x10u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100cb628u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x6cu;
        wr32(sp0 - 0x84u, sp0 - 0x20u);
        wr32(sp0 - 0x80u, sp0 - 0x10u);
        wr32(sp0 - 0x7cu, sp0 - 0x10u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100cb630u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x6cu;
        wr32(sp0 - 0x84u, sp0 - 0x20u);
        wr32(sp0 - 0x80u, sp0 - 0x10u);
        wr32(sp0 - 0x7cu, sp0 - 0x10u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100cb638u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x6cu;
        wr32(sp0 - 0x84u, sp0 - 0x20u);
        wr32(sp0 - 0x80u, sp0 - 0x10u);
        wr32(sp0 - 0x7cu, sp0 - 0x10u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100cb645u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x6cu;
        wr32(sp0 - 0x84u, sp0 - 0x20u);
        wr32(sp0 - 0x80u, sp0 - 0x10u);
        wr32(sp0 - 0x7cu, sp0 - 0x10u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100cb64bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x6cu;
        wr32(sp0 - 0x84u, sp0 - 0x20u);
        wr32(sp0 - 0x80u, sp0 - 0x10u);
        wr32(sp0 - 0x7cu, sp0 - 0x10u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100cb650u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x6cu;
        wr32(sp0 - 0x84u, sp0 - 0x20u);
        wr32(sp0 - 0x80u, sp0 - 0x10u);
        wr32(sp0 - 0x7cu, sp0 - 0x10u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100cb659u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x6cu;
        wr32(sp0 - 0x84u, sp0 - 0x20u);
        wr32(sp0 - 0x80u, sp0 - 0x10u);
        wr32(sp0 - 0x7cu, sp0 - 0x10u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100cb66eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x6cu;
        wr32(sp0 - 0x84u, sp0 - 0x20u);
        wr32(sp0 - 0x80u, sp0 - 0x10u);
        wr32(sp0 - 0x7cu, sp0 - 0x10u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100cb681u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x6cu;
        wr32(sp0 - 0x84u, sp0 - 0x20u);
        wr32(sp0 - 0x80u, sp0 - 0x10u);
        wr32(sp0 - 0x7cu, sp0 - 0x10u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100cb683u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_50;
        uint32_t loc_58;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x100cb698u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_50;
        uint32_t loc_58;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x100cb69du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_50;
        uint32_t loc_58;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x100cb6beu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_50;
        uint32_t loc_58;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x100cb6c6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_50;
        uint32_t loc_58;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x100cb6cfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_50;
        uint32_t loc_58;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x100cb6e9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_50;
        uint32_t loc_58;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x100cb6f3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_50;
        uint32_t loc_58;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x100cb6fdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_50;
        uint32_t loc_58;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x100cb740u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_50;
        uint32_t loc_58;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x100cb7c2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_50;
        uint32_t loc_58;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x100cb7c4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_50;
        uint32_t loc_58;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x100cb7ccu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_50;
        uint32_t loc_58;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x100cb7ddu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_50;
        uint32_t loc_58;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x100cb7e3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_50;
        uint32_t loc_58;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x100cb7e8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_50;
        uint32_t loc_58;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x100cb7f1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_50;
        uint32_t loc_58;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x100cb806u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_50;
        uint32_t loc_58;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x100cb80au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_50;
        uint32_t loc_58;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x100cb817u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_50;
        uint32_t loc_58;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x100cb824u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_50;
        uint32_t loc_58;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x100cb82bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_50;
        uint32_t loc_58;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x100cb833u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_50;
        uint32_t loc_58;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x100cb842u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_50;
        uint32_t loc_58;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x100cb85cu:
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
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x100cb863u:
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
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x100cb869u:
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
        g->esp = sp0 - 0x7cu;
        (void)sp0;
        return 1;
    }
    case 0x100cb877u:
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
        g->esp = sp0 - 0x84u;
        (void)sp0;
        return 1;
    }
    case 0x100cb87cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_50;
        uint32_t loc_58;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x100cb883u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_50;
        uint32_t loc_58;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x100cb891u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_50;
        uint32_t loc_58;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x100cb8a1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_50;
        uint32_t loc_58;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x100cb8a5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_50;
        uint32_t loc_58;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x100cb8aeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_50;
        uint32_t loc_58;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x100cb8b3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_50;
        uint32_t loc_58;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x100cb8b5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_50;
        uint32_t loc_58;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x100cb8d1u:
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
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x100cb8eau:
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
        g->esp = sp0 - 0x6cu;
        wr32(sp0 - 0x70u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100cb8f0u:
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
        g->esp = sp0 - 0x6cu;
        wr32(sp0 - 0x70u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100cb8f6u:
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
        g->esp = sp0 - 0x6cu;
        wr32(sp0 - 0x70u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100cb8fcu:
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
        g->esp = sp0 - 0x6cu;
        wr32(sp0 - 0x70u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100cb901u:
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
        g->esp = sp0 - 0x6cu;
        wr32(sp0 - 0x70u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100cb911u:
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
        g->esp = sp0 - 0x6cu;
        wr32(sp0 - 0x70u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100cb91du:
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
        g->esp = sp0 - 0x6cu;
        wr32(sp0 - 0x70u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100cb927u:
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
        g->esp = sp0 - 0x6cu;
        wr32(sp0 - 0x70u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100cb939u:
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
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x100cb943u:
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
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x100cb95fu:
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
        g->esp = sp0 - 0x6cu;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100cb96au:
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
        g->esp = sp0 - 0x6cu;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100cb96eu:
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
        g->esp = sp0 - 0x6cu;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100cb978u:
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
        g->esp = sp0 - 0x6cu;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100cb981u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x6cu;
        g->ecx = 0x200u;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100cb989u:
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
        g->esp = sp0 - 0x6cu;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100cb996u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x6cu;
        g->ecx = 0x200u;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100cb9a5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x6cu;
        g->ecx = 0x200u;
        g->esi = 0x42200000u;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100cb9b6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x6cu;
        g->ecx = 0x200u;
        g->esi = 0x42200000u;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100cb9c2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x6cu;
        g->ecx = 0x200u;
        g->esi = 0x42200000u;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100cb9ceu:
    {
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
        g->esp = sp0 - 0x6cu;
        g->esi = 0x42200000u;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100cb9e3u:
    {
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
        g->esp = sp0 - 0x6cu;
        g->esi = 0x42200000u;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100cb9f1u:
    {
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
        g->esp = sp0 - 0x6cu;
        g->esi = 0x42200000u;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100cb9f7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x6cu;
        g->esi = 0x42200000u;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100cba60u:
    {
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
        g->esp = sp0 - 0x74u;
        g->esi = 0x42200000u;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100cba7au:
    {
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
        g->esp = sp0 - 0x74u;
        g->esi = 0x42200000u;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100cba8eu:
    {
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
        g->esp = sp0 - 0x6cu;
        g->esi = 0x42200000u;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100cba96u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x6cu;
        g->esi = 0x42200000u;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100cbaa7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x6cu;
        g->esi = 0x42200000u;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100cbaafu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x6cu;
        g->esi = 0x42200000u;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100cbac0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_40;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x6cu;
        g->esi = 0x42200000u;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100cbac8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_40;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x6cu;
        g->esi = 0x42200000u;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100cbadbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_40;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x6cu;
        g->esi = 0x42200000u;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100cbae3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_40;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x6cu;
        g->esi = 0x42200000u;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100cbaf6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_40;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x6cu;
        g->esi = 0x42200000u;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100cbafeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_40;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x6cu;
        g->esi = 0x42200000u;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100cbb0du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_40;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x6cu;
        g->esi = 0x42200000u;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100cbb15u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_40;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x6cu;
        g->esi = 0x42200000u;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100cbb1au:
    {
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
        g->esp = sp0 - 0x6cu;
        g->esi = 0x42200000u;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100cbb28u:
    {
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
        g->esp = sp0 - 0x6cu;
        g->esi = 0x42200000u;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100cbb36u:
    {
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
        g->esp = sp0 - 0x6cu;
        g->esi = 0x42200000u;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100cbb9eu:
    {
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
        g->esp = sp0 - 0x74u;
        g->esi = 0x42200000u;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100cbbb2u:
    {
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
        g->esp = sp0 - 0x6cu;
        g->esi = 0x42200000u;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100cbbbau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x6cu;
        g->esi = 0x42200000u;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100cbbcbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x6cu;
        g->esi = 0x42200000u;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100cbbd3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x6cu;
        g->esi = 0x42200000u;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100cbbe4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x6cu;
        g->esi = 0x42200000u;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100cbbecu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x6cu;
        g->esi = 0x42200000u;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100cbbffu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x6cu;
        g->esi = 0x42200000u;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100cbc07u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x6cu;
        g->esi = 0x42200000u;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100cbc1au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x6cu;
        g->esi = 0x42200000u;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100cbc22u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x6cu;
        g->esi = 0x42200000u;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100cbc35u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x6cu;
        g->esi = 0x42200000u;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100cbc3du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x6cu;
        g->esi = 0x42200000u;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100cbc46u:
    {
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
        g->esp = sp0 - 0x6cu;
        g->esi = 0x42200000u;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100cbc54u:
    {
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
        g->esp = sp0 - 0x6cu;
        g->esi = 0x42200000u;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100cbc62u:
    {
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
        g->esp = sp0 - 0x6cu;
        g->esi = 0x42200000u;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100cbc6du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x6cu;
        g->esi = 0x42200000u;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100cbc86u:
    {
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
        g->esp = sp0 - 0x6cu;
        g->esi = 0x42200000u;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100cbcb0u:
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
        g->esp = sp0 - 0x6cu;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100cbcbfu:
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
        g->esp = sp0 - 0x6cu;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100cbcc7u:
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
        g->esp = sp0 - 0x6cu;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        wr32(sp0 - 0x78u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100cbce6u:
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
        g->esp = sp0 - 0x6cu;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        (void)sp0;
        return 1;
    }
    case 0x100cbcfeu:
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
        g->esp = sp0 - 0x6cu;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        (void)sp0;
        return 1;
    }
    case 0x100cbd16u:
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
        g->esp = sp0 - 0x6cu;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        (void)sp0;
        return 1;
    }
    case 0x100cbd22u:
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
        g->esp = sp0 - 0x6cu;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        wr32(sp0 - 0x70u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100cbd2cu:
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
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        wr32(sp0 - 0x70u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100cbd32u:
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
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        wr32(sp0 - 0x70u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100cbd38u:
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
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        wr32(sp0 - 0x70u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100cbd3du:
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
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        wr32(sp0 - 0x70u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100cbd4du:
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
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x80u, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x44u);
        wr32(sp0 - 0x70u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100cb4e0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_100cb4e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
