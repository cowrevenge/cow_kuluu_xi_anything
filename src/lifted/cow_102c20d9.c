/* f_0x102c20d9 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102c20d9(Guest* g)
{
    uint32_t cf;
    double d1;
    double d100;
    double d104;
    double d105;
    double d114;
    double d12;
    double d125;
    double d126;
    double d13;
    double d130;
    double d131;
    double d139;
    double d150;
    double d151;
    double d155;
    double d156;
    double d20;
    double d25;
    double d26;
    double d3;
    double d30;
    double d31;
    double d39;
    double d40;
    double d42;
    double d46;
    double d47;
    double d55;
    double d56;
    double d68;
    double d69;
    double d7;
    double d70;
    double d74;
    double d75;
    double d8;
    double d99;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_28;
    double loc_34_d;
    double loc_3c_d;
    uint32_t loc_4;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t loc_48;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
    uint32_t t10;
    uint32_t t101;
    uint32_t t102;
    uint32_t t103;
    uint32_t t106;
    uint32_t t107;
    uint32_t t108;
    uint32_t t109;
    uint32_t t11;
    uint32_t t110;
    uint32_t t111;
    uint32_t t112;
    uint32_t t113;
    uint32_t t115;
    uint32_t t116;
    uint32_t t117;
    uint32_t t118;
    uint32_t t119;
    uint32_t t120;
    uint32_t t121;
    uint32_t t122;
    uint32_t t123;
    uint32_t t124;
    uint32_t t127;
    uint32_t t128;
    uint32_t t129;
    uint32_t t132;
    uint32_t t133;
    uint32_t t134;
    uint32_t t135;
    uint32_t t136;
    uint32_t t137;
    uint32_t t138;
    uint32_t t14;
    uint32_t t140;
    uint32_t t141;
    uint32_t t142;
    uint32_t t143;
    uint32_t t144;
    uint32_t t145;
    uint32_t t146;
    uint32_t t147;
    uint32_t t148;
    uint32_t t149;
    uint32_t t15;
    uint32_t t152;
    uint32_t t153;
    uint32_t t154;
    uint32_t t157;
    uint32_t t158;
    uint32_t t159;
    uint32_t t16;
    uint32_t t160;
    uint32_t t161;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t4;
    uint32_t t41;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
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
    uint32_t t71;
    uint32_t t72;
    uint32_t t73;
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
    uint32_t t79;
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
    double x0;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 92u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102c20fcu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x48u); in_esi = rd32(sp0 - 0x44u); in_ebx = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x40u); g->edi = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x44u); goto E_102c20fc;
    case 0x102c210bu: eax = g->eax; in_edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x48u); in_esi = rd32(sp0 - 0x44u); in_ebx = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x40u); g->edi = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x44u); goto E_102c210b;
    case 0x102c211eu: eax = g->eax; in_edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x48u); in_esi = rd32(sp0 - 0x44u); in_ebx = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x40u); g->edi = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x44u); goto E_102c211e;
    case 0x102c2132u: eax = g->eax; in_edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x48u); in_esi = rd32(sp0 - 0x44u); in_ebx = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x40u); g->edi = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x44u); goto E_102c2132;
    case 0x102c2134u: eax = g->eax; in_edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x48u); in_esi = rd32(sp0 - 0x44u); in_ebx = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x40u); g->edi = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x44u); goto E_102c2134;
    case 0x102c2143u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102c2143;
    case 0x102c214fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102c214f;
    case 0x102c216au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102c216a;
    case 0x102c217eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102c217e;
    case 0x102c2192u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102c2192;
    case 0x102c219fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102c219f;
    case 0x102c21b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102c21b5;
    case 0x102c21c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102c21c1;
    case 0x102c21dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102c21dc;
    case 0x102c21f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102c21f0;
    case 0x102c2204u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102c2204;
    case 0x102c220bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102c220b;
    case 0x102c2226u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102c2226;
    case 0x102c2234u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102c2234;
    case 0x102c223au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102c223a;
    case 0x102c2241u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_34_d = rdf64(sp0 - 0x34u); goto E_102c2241;
    case 0x102c225cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102c225c;
    case 0x102c2270u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102c2270;
    case 0x102c2284u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102c2284;
    case 0x102c2289u: eax = g->eax; in_edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x48u); in_esi = rd32(sp0 - 0x44u); in_ebx = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x40u); g->edi = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x44u); goto E_102c2289;
    case 0x102c2292u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x48u); in_esi = rd32(sp0 - 0x44u); in_ebx = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x40u); g->edi = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x44u); goto E_102c2292;
    case 0x102c22a4u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x48u); in_esi = rd32(sp0 - 0x44u); in_ebx = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x40u); g->edi = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x44u); goto E_102c22a4;
    case 0x102c22a6u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x48u); in_esi = rd32(sp0 - 0x44u); in_ebx = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x40u); g->edi = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x44u); goto E_102c22a6;
    case 0x102c22b1u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x48u); in_esi = rd32(sp0 - 0x44u); in_ebx = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x40u); g->edi = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x44u); goto E_102c22b1;
    case 0x102c22b5u: eax = g->eax; in_edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x48u); in_esi = rd32(sp0 - 0x44u); in_ebx = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x40u); g->edi = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x44u); goto E_102c22b5;
    case 0x102c22bcu: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x48u); in_esi = rd32(sp0 - 0x44u); in_ebx = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x40u); g->edi = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x44u); goto E_102c22bc;
    case 0x102c22c2u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x48u); in_esi = rd32(sp0 - 0x44u); in_ebx = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x40u); g->edi = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x44u); goto E_102c22c2;
    case 0x102c22ccu: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x48u); in_esi = rd32(sp0 - 0x44u); in_ebx = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x40u); g->edi = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x44u); goto E_102c22cc;
    case 0x102c22cfu: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x48u); in_esi = rd32(sp0 - 0x44u); in_ebx = rd32(sp0 - 0x40u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x40u); g->edi = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x44u); goto E_102c22cf;
    case 0x102c22d5u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x48u); in_esi = rd32(sp0 - 0x44u); in_ebx = rd32(sp0 - 0x40u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x40u); g->edi = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x44u); goto E_102c22d5;
    case 0x102c22ddu: edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x48u); in_esi = rd32(sp0 - 0x44u); in_ebx = rd32(sp0 - 0x40u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x40u); g->edi = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x44u); goto E_102c22dd;
    case 0x102c22e0u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x48u); in_esi = rd32(sp0 - 0x44u); in_ebx = rd32(sp0 - 0x40u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x40u); g->edi = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x44u); goto E_102c22e0;
    case 0x102c22e5u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x48u); in_esi = rd32(sp0 - 0x44u); in_ebx = rd32(sp0 - 0x40u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x40u); g->edi = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x44u); goto E_102c22e5;
    case 0x102c22e8u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x48u); in_esi = rd32(sp0 - 0x44u); in_ebx = rd32(sp0 - 0x40u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x40u); g->edi = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x44u); goto E_102c22e8;
    case 0x102c22edu: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x48u); in_esi = rd32(sp0 - 0x44u); in_ebx = rd32(sp0 - 0x40u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x40u); g->edi = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x44u); goto E_102c22ed;
    case 0x102c22f0u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x48u); in_esi = rd32(sp0 - 0x44u); in_ebx = rd32(sp0 - 0x40u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x40u); g->edi = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x44u); goto E_102c22f0;
    case 0x102c231bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102c231b;
    case 0x102c232fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102c232f;
    case 0x102c2331u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102c2331;
    case 0x102c2340u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102c2340;
    case 0x102c235du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102c235d;
    case 0x102c2361u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102c2361;
    case 0x102c2368u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102c2368;
    case 0x102c237eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102c237e;
    case 0x102c23a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_3c_d = rdf64(sp0 - 0x3cu); loc_34_d = rdf64(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_1c = rd32(sp0 - 0x1cu); loc_c = rd32(sp0 - 0xcu); goto E_102c23a2;
    case 0x102c23c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102c23c3;
    case 0x102c23ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102c23ce;
    case 0x102c23d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_28 = rd32(sp0 - 0x28u); goto E_102c23d6;
    case 0x102c23eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_10 = rd32(sp0 - 0x10u); goto E_102c23ee;
    case 0x102c2418u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102c2418;
    case 0x102c241bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_28 = rd32(sp0 - 0x28u); goto E_102c241b;
    case 0x102c242bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_28 = rd32(sp0 - 0x28u); goto E_102c242b;
    case 0x102c2437u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_28 = rd32(sp0 - 0x28u); goto E_102c2437;
    case 0x102c2444u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_28 = rd32(sp0 - 0x28u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_102c2444;
    case 0x102c2469u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_c = rd32(sp0 - 0xcu); goto E_102c2469;
    case 0x102c2471u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102c2471;
    case 0x102c2479u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102c2479;
    case 0x102c2480u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102c2480;
    case 0x102c24a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_102c24a5;
    case 0x102c24cau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102c24ca;
    case 0x102c24deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102c24de;
    case 0x102c2501u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102c2501;
    case 0x102c250du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_28 = rd32(sp0 - 0x28u); loc_c = rd32(sp0 - 0xcu); goto E_102c250d;
    case 0x102c251au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_28 = rd32(sp0 - 0x28u); loc_c = rd32(sp0 - 0xcu); goto E_102c251a;
    case 0x102c2535u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102c2535;
    case 0x102c2549u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102c2549;
    case 0x102c2550u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102c2550;
    case 0x102c2575u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_102c2575;
    case 0x102c259au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102c259a;
    case 0x102c25aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102c25ae;
    case 0x102c25d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102c25d1;
    case 0x102c25ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102c25dd;
    case 0x102c25f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102c25f0;
    case 0x102c25feu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102c25fe;
    case 0x102c2604u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102c2604;
    case 0x102c2613u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102c2613;
    case 0x102c2627u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102c2627;
    case 0x102c2634u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_28 = rd32(sp0 - 0x28u); goto E_102c2634;
    case 0x102c263bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102c263b;
    case 0x102c2659u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_10 = rd32(sp0 - 0x10u); goto E_102c2659;
    case 0x102c267eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102c267e;
    case 0x102c2692u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102c2692;
    case 0x102c26afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_102c26af;
    case 0x102c26beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_28 = rd32(sp0 - 0x28u); loc_c = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); goto E_102c26be;
    default: break;
    }
#endif

    COW_AT(102c20d9)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x40u, in_ebx);
    wr32(sp0 - 0x44u, in_esi);
    wr32(sp0 - 0x48u, in_edi);
    d1 = (double)rdf32(rd32(sp0 + 4u) + 0x15cu);
    if (d1 == rdf64(COW_IMG(0x1032a108u)))
    {
        loc_4 = in_ebp;
        loc_40 = in_ebx;
        loc_44 = in_esi;
        loc_48 = in_edi;
    }
    else
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, rdf64(COW_IMG(0x1032a108u)), 0u);
        esi = rd32(sp0 + 4u);
    COW_AT(102c20fc)
        wr32(sp0 - 0x4cu, 8u);
        t2 = rd8(esi + 0x127u);
        if ((uint8_t)t2 > 8u)
        {
    COW_AT(102c2289)
            t53 = rd8(esi + 0x126u);
            if ((t53 & 2u) == 0u)
            {
    COW_AT(102c22b5)
                eax = rd8(esi + 0x17fu);
                edx = in_edx;
            }
            else
            {
    COW_AT(102c2292)
                if ((int32_t)rd8(esi + 0x17du) <= (int32_t)rd8(esi + 0x17cu))
                {
                    eax = rd8(esi + 0x17cu);
                }
                else
                {
                    edx = rd8(esi + 0x17du);
    COW_AT(102c22a4)
                    eax = edx;
                }
    COW_AT(102c22a6)
                if ((int32_t)rd8(esi + 0x17eu) <= (int32_t)eax)
                {
                    edx = rd8(esi + 0x17eu);
                }
                else
                {
                    edx = rd8(esi + 0x17eu);
    COW_AT(102c22b1)
                    eax = edx;
                }
            }
    COW_AT(102c22bc)
            if ((int32_t)eax <= 0)
            {
    COW_AT(102c22cc)
                wr32(sp0 - 8u, 0u);
                loc_8 = 0u;
            }
            else
            {
    COW_AT(102c22c2)
                wr32(sp0 - 0x4cu, 0x10u);
                wr32(sp0 - 8u, 0x10u - eax);
                edx = 0x10u - eax;
                loc_8 = 0x10u - eax;
            }
    COW_AT(102c22cf)
            t54 = rd8(esi + 0x71u);
            if ((t54 & 4u) != 0u)
            {
    COW_AT(102c22d5)
                wr32(sp0 - 0x4cu, 5u);
                if ((int32_t)loc_8 < 5)
                {
    COW_AT(102c22dd)
                    wr32(sp0 - 8u, 5u);
                    loc_8 = 5u;
                }
            }
    COW_AT(102c22e0)
            if ((int32_t)loc_8 > 8)
            {
    COW_AT(102c22e5)
                wr32(sp0 - 8u, 8u);
                loc_8 = 8u;
            }
    COW_AT(102c22e8)
            if ((int32_t)loc_8 < 0)
            {
    COW_AT(102c22ed)
                wr32(sp0 - 8u, 0u);
                loc_8 = 0u;
            }
    COW_AT(102c22f0)
            d55 = (double)rdf32(esi + 0x160u);
            d56 = rdf64(COW_IMG(0x10340b18u));
            wr32(esi + 0x158u, (uint8_t)loc_8);
            wr32(sp0 - 0x18u, 8u - loc_8);
            t57 = 1u << (8u - loc_8 & 0x1fu);
            wr32(sp0 - 0x14u, t57);
            if ((cow_fsw(g, d55, d56, 0u) >> 8u & 0x41u) != 0u)
            {
                ecx = 8u - loc_8;
                ebx = t57;
                loc_18 = 8u - loc_8;
                loc_14 = t57;
    COW_AT(102c232f)
                x0 = 1.0;
            }
            else
            {
                ecx = 8u - loc_8;
                ebx = t57;
                loc_18 = 8u - loc_8;
                loc_14 = t57;
    COW_AT(102c231b)
                x0 = fr(g, rdf64(COW_IMG(0x1032a100u)) / fr(g, (double)rdf32(esi + 0x160u) * (double)rdf32(esi + 0x15cu)));
            }
    COW_AT(102c2331)
            wrf64(sp0 - 0x34u, x0);
            wr32(sp0 - 0x4cu, ebx << 2u);
            wr32(sp0 - 0x50u, esi);
            g->eax = ebx << 2u;
            g->esp = sp0 - 0x48u;
            COW_RET(0x102c2340u);
            t58 = cow_call_regs(g, COW_IMG(0x102c43fcu), g->eax, ecx, edx, 1, 2, esi, ebx << 2u);
            t59 = g->edx;
            eax = t58;
            edx = t59;
    COW_AT(102c2340)
            t60 = rd32(sp0 + 4u);
            wr32(sp0 + 4u, 0u);
            t61 = rd16(esi + 0x70u);
            t62 = rd32(sp0 - 0x4cu);
            wr32(esi + 0x170u, eax);
            if ((t61 & 0x480u) == 0u)
            {
                ecx = t62;
    COW_AT(102c2471)
                if ((int32_t)ebx <= 0)
                {
                    loc_28 = rd32(sp0 - 0x28u);
                    goto L_102c250d;
                }
L_102c2479: ;
    COW_AT(102c2479)
                wr32(sp0 - 0x4cu, 0x200u);
                wr32(sp0 - 0x50u, esi);
                g->eax = eax;
                g->esp = sp0 - 0x48u;
                COW_RET(0x102c2480u);
                t93 = cow_call_regs(g, COW_IMG(0x102c43fcu), g->eax, ecx, edx, 1, 2, esi, 0x200u);
                eax = t93;
    COW_AT(102c2480)
                t94 = rd32(esi + 0x170u);
                t95 = rd32(sp0 + 4u);
                wr32(t94 + t95 * 4u, eax);
                t96 = rd32(sp0 - 0x10u);
                wr32(sp0 - 0x10u, 0u);
                t97 = rd32(COW_IMG(0x103c7f58u) + rd32(sp0 - 8u) * 4u) * t95 >> 4u;
                wr32(sp0 - 0xcu, t97);
                ecx = t94;
                edx = t95;
                loc_10 = 0u;
                loc_c = t97;
L_102c24a5: ;
    COW_AT(102c24a5)
                t98 = rd32(sp0 - 0x28u);
                wr32(sp0 - 0x28u, 0u);
                wr32(sp0 - 0x2cu, loc_c);
                d99 = rdf64(sp0 - 0x34u);
                wrf64(sp0 - 0x50u, d99);
                d100 = fr(g, (double)(int64_t)cow_i64(loc_c, 0u) * rdf64(COW_IMG(0x10342dd8u)));
                wrf64(sp0 - 0x58u, d100);
                g->eax = loc_c;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x48u;
                COW_RET(0x102c24cau);
                t101 = cow_cdecl(g, COW_IMG(0x10312ce9u), 4, cow_dlo(d100), cow_dhi(d100), cow_dlo(d99), cow_dhi(d99));
                t102 = g->ecx;
                t103 = g->edx;
                d104 = cow_take_float(g);
                eax = t101;
                ecx = t102;
                edx = t103;
                x0 = d104;
    COW_AT(102c24ca)
                d105 = fr(g, fr(g, x0 * rdf64(COW_IMG(0x10342dd0u))) + rdf64(COW_IMG(0x1032ab90u)));
                fpush(g, d105);
                g->esp = sp0 - 0x48u;
                COW_RET(0x102c24deu);
                t106 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                eax = t106;
    COW_AT(102c24de)
                t107 = rd32(sp0 - 0xcu);
                wr32(sp0 - 0xcu, t107 + 0x100u);
                t108 = rd32(sp0 - 0x10u);
                t109 = rd32(sp0 - 0x10u);
                wr32(sp0 - 0x10u, t108 + 2u);
                t110 = rd32(rd32(esi + 0x170u) + rd32(sp0 + 4u) * 4u);
                wr16(t109 + t110, (uint16_t)eax);
                if ((int32_t)(t108 + 2u) < 512)
                {
                    ecx = t110;
                    edx = t109;
                    loc_10 = rd32(sp0 - 0x10u);
                    loc_c = rd32(sp0 - 0xcu);
                    goto L_102c24a5;
                }
                ecx = t110;
                edx = t109;
    COW_AT(102c2501)
                t111 = rd32(sp0 + 4u);
                wr32(sp0 + 4u, t111 + 1u);
                t112 = rd32(sp0 + 4u);
                if ((int32_t)t112 < (int32_t)ebx) goto L_102c2479;
                loc_28 = rd32(sp0 - 0x28u);
            }
            else
            {
                ecx = t62;
    COW_AT(102c235d)
                if ((int32_t)ebx <= 0) goto L_102c237e;
L_102c2361: ;
    COW_AT(102c2361)
                wr32(sp0 - 0x4cu, 0x200u);
                wr32(sp0 - 0x50u, esi);
                g->eax = eax;
                g->esp = sp0 - 0x48u;
                COW_RET(0x102c2368u);
                t63 = cow_call_regs(g, COW_IMG(0x102c43fcu), g->eax, ecx, edx, 1, 2, esi, 0x200u);
                eax = t63;
    COW_AT(102c2368)
                t64 = rd32(sp0 + 4u);
                t65 = rd32(sp0 + 4u);
                wr32(sp0 + 4u, t64 + 1u);
                t66 = rd32(sp0 + 4u);
                t67 = rd32(esi + 0x170u);
                wr32(t65 * 4u + t67, eax);
                if ((int32_t)t66 < (int32_t)ebx)
                {
                    ecx = t67;
                    edx = t65;
                    goto L_102c2361;
                }
                edx = t65;
L_102c237e: ;
    COW_AT(102c237e)
                d68 = fr(g, 1.0 / rdf64(sp0 - 0x34u));
                wr32(sp0 - 0x2cu, ebx << 8u);
                wr32(sp0 - 0x28u, 0u);
                wr32(sp0 - 0xcu, 0u);
                wr32(sp0 + 4u, 0u);
                wr32(sp0 - 0x1cu, ebx << 8u);
                wrf64(sp0 - 0x34u, d68);
                d69 = (double)(int64_t)cow_i64(ebx << 8u, 0u);
                wrf64(sp0 - 0x3cu, d69);
                eax = ebx << 8u;
                ecx = 0u;
                loc_c = 0u;
                loc_1c = ebx << 8u;
                loc_34_d = d68;
                loc_3c_d = d69;
L_102c23a2: ;
    COW_AT(102c23a2)
                wrf64(sp0 - 0x50u, loc_34_d);
                d70 = fr(g, fr(g, (double)(int32_t)rd32(sp0 + 4u) + rdf64(COW_IMG(0x1032ab90u))) * rdf64(COW_IMG(0x10342de0u)));
                wrf64(sp0 - 0x58u, d70);
                g->eax = eax;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x48u;
                COW_RET(0x102c23c3u);
                t71 = cow_cdecl(g, COW_IMG(0x10312ce9u), 4, cow_dlo(d70), cow_dhi(d70), cow_dlo(loc_34_d), cow_dhi(loc_34_d));
                t72 = g->ecx;
                t73 = g->edx;
                d74 = cow_take_float(g);
                eax = t71;
                ecx = t72;
                edx = t73;
                x0 = d74;
    COW_AT(102c23c3)
                g->ecx = ecx;
                g->edx = edx;
                d75 = fr(g, x0 * rdf64(sp0 - 0x3cu));
                fpush(g, d75);
                g->esp = sp0 - 0x48u;
                COW_RET(0x102c23ceu);
                t76 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                t77 = g->ecx;
                t78 = g->edx;
                eax = t76;
                ecx = t77;
                edx = t78;
    COW_AT(102c23ce)
                t79 = rd32(sp0 - 0xcu);
                wr32(sp0 - 0x28u, eax);
                if (t79 > eax)
                {
                    loc_28 = eax;
                }
                else
                {
                    loc_28 = eax;
    COW_AT(102c23d6)
                    wr32(sp0 - 0x10u, 0xffu);
                    t80 = (uint32_t)((int32_t)0xffu >> ((rd32(sp0 - 8u) & 0x1fu) < 0x20u ? rd32(sp0 - 8u) & 0x1fu : 0x1fu));
                    wr32(sp0 - 0x10u, t80);
                    t81 = (uint32_t)rd8(sp0 + 4u) << 8u | rd32(sp0 + 4u);
                    wr32(sp0 - 0x20u, t81);
                    loc_10 = t80;
                    loc_20 = t81;
L_102c23ee: ;
    COW_AT(102c23ee)
                    t82 = rd32(sp0 - 0xcu);
                    t83 = rd32(sp0 - 0xcu);
                    wr32(sp0 - 0xcu, t82 + 1u);
                    t84 = rd32(sp0 - 0x18u);
                    t85 = rd32(esi + 0x170u);
                    wr16((t83 >> (t84 & 0x1fu)) * 2u + rd32(t85 + (loc_10 & t83) * 4u), (uint16_t)loc_20);
                    if (rd32(sp0 - 0xcu) <= rd32(sp0 - 0x28u))
                    {
                        loc_28 = rd32(sp0 - 0x28u);
                        loc_10 = rd32(sp0 - 0x10u);
                        loc_20 = rd32(sp0 - 0x20u);
                        goto L_102c23ee;
                    }
                    eax = rd32(sp0 - 0xcu);
                    ecx = (t84 & 0xffff0000u) | (uint16_t)loc_20;
                    edx = t85;
    COW_AT(102c2418)
                    ebx = rd32(sp0 - 0x14u);
                    loc_28 = rd32(sp0 - 0x28u);
                }
    COW_AT(102c241b)
                t86 = rd32(sp0 + 4u);
                wr32(sp0 + 4u, t86 + 1u);
                t87 = rd32(sp0 + 4u);
                if ((int32_t)t87 < 256)
                {
                    loc_c = rd32(sp0 - 0xcu);
                    loc_1c = rd32(sp0 - 0x1cu);
                    loc_34_d = rdf64(sp0 - 0x34u);
                    loc_3c_d = rdf64(sp0 - 0x3cu);
                    goto L_102c23a2;
                }
    COW_AT(102c242b)
                if (rd32(sp0 - 0xcu) < rd32(sp0 - 0x1cu))
                {
                    eax = rd32(sp0 - 0xcu);
                    cf = rd32(sp0 - 0xcu) < rd32(sp0 - 0x1cu);
                    pf = PARITY((uint8_t)(rd32(sp0 - 0xcu) - rd32(sp0 - 0x1cu)));
                    zf = rd32(sp0 - 0xcu) == rd32(sp0 - 0x1cu);
                    sf = (int32_t)(rd32(sp0 - 0xcu) - rd32(sp0 - 0x1cu)) < 0;
                    of = ((rd32(sp0 - 0xcu) ^ rd32(sp0 - 0x1cu)) & (rd32(sp0 - 0xcu) ^ rd32(sp0 - 0xcu) - rd32(sp0 - 0x1cu))) >> 0x1fu;
    COW_AT(102c2437)
                    wr32(sp0 - 0x10u, 0xffu);
                    t88 = (uint32_t)((int32_t)0xffu >> ((rd32(sp0 - 8u) & 0x1fu) < 0x20u ? rd32(sp0 - 8u) & 0x1fu : 0x1fu));
                    wr32(sp0 - 0x10u, t88);
                    loc_10 = t88;
                    loc_c = rd32(sp0 - 0xcu);
L_102c2444: ;
    COW_AT(102c2444)
                    t89 = rd16((eax >> (rd32(sp0 - 0x18u) & 0x1fu)) * 2u + rd32((loc_10 & eax) * 4u + rd32(esi + 0x170u)));
                    t90 = rd32((loc_10 & eax) * 4u + rd32(esi + 0x170u));
                    wr16((eax >> (rd32(sp0 - 0x18u) & 0x1fu)) * 2u + t90, (uint16_t)(t89 | 0xffffu));
                    t91 = rd32(sp0 - 0xcu) + 1u;
                    t92 = rd32(sp0 - 0xcu);
                    wr32(sp0 - 0xcu, t91);
                    if (t92 + 1u < rd32(sp0 - 0x1cu))
                    {
                        eax = t91;
                        loc_28 = rd32(sp0 - 0x28u);
                        loc_10 = rd32(sp0 - 0x10u);
                        loc_c = t91;
                        goto L_102c2444;
                    }
                    ecx = t90;
                    edx = loc_10 & eax;
    COW_AT(102c2469)
                    ebx = rd32(sp0 - 0x14u);
                    loc_28 = rd32(sp0 - 0x28u);
                }
            }
L_102c250d: ;
    COW_AT(102c250d)
            t113 = rd32(esi + 0x70u);
            if ((t113 & 0x600080u) == 0u)
            {
                loc_4 = rd32(sp0 - 4u);
                loc_40 = rd32(sp0 - 0x40u);
                loc_44 = rd32(sp0 - 0x44u);
                loc_48 = rd32(sp0 - 0x48u);
            }
            else
            {
    COW_AT(102c251a)
                d114 = fr(g, rdf64(COW_IMG(0x1032a100u)) / (double)rdf32(esi + 0x15cu));
                wr32(sp0 - 0x4cu, ebx << 2u);
                wr32(sp0 - 0x50u, esi);
                wrf64(sp0 - 0x34u, d114);
                g->eax = ebx << 2u;
                g->esp = sp0 - 0x48u;
                COW_RET(0x102c2535u);
                t115 = cow_call_regs(g, COW_IMG(0x102c43fcu), g->eax, ecx, edx, 1, 2, esi, ebx << 2u);
                t116 = g->edx;
                eax = t115;
                edx = t116;
    COW_AT(102c2535)
                t117 = rd32(sp0 + 4u);
                wr32(sp0 + 4u, 0u);
                t118 = rd32(sp0 - 0x4cu);
                wr32(esi + 0x178u, eax);
                if ((int32_t)ebx <= 0)
                {
                    ecx = t118;
                    goto L_102c25dd;
                }
                ecx = t118;
L_102c2549: ;
    COW_AT(102c2549)
                wr32(sp0 - 0x4cu, 0x200u);
                wr32(sp0 - 0x50u, esi);
                g->eax = eax;
                g->esp = sp0 - 0x48u;
                COW_RET(0x102c2550u);
                t119 = cow_call_regs(g, COW_IMG(0x102c43fcu), g->eax, ecx, edx, 1, 2, esi, 0x200u);
                eax = t119;
    COW_AT(102c2550)
                t120 = rd32(esi + 0x178u);
                t121 = rd32(sp0 + 4u);
                wr32(t120 + t121 * 4u, eax);
                t122 = rd32(sp0 - 0x10u);
                wr32(sp0 - 0x10u, 0u);
                t123 = rd32(COW_IMG(0x103c7f58u) + rd32(sp0 - 8u) * 4u) * t121 >> 4u;
                wr32(sp0 - 0xcu, t123);
                ecx = t120;
                edx = t121;
                loc_10 = 0u;
                loc_c = t123;
L_102c2575: ;
    COW_AT(102c2575)
                t124 = rd32(sp0 - 0x28u);
                wr32(sp0 - 0x28u, 0u);
                wr32(sp0 - 0x2cu, loc_c);
                d125 = rdf64(sp0 - 0x34u);
                wrf64(sp0 - 0x50u, d125);
                d126 = fr(g, (double)(int64_t)cow_i64(loc_c, 0u) * rdf64(COW_IMG(0x10342dd8u)));
                wrf64(sp0 - 0x58u, d126);
                g->eax = loc_c;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x48u;
                COW_RET(0x102c259au);
                t127 = cow_cdecl(g, COW_IMG(0x10312ce9u), 4, cow_dlo(d126), cow_dhi(d126), cow_dlo(d125), cow_dhi(d125));
                t128 = g->ecx;
                t129 = g->edx;
                d130 = cow_take_float(g);
                eax = t127;
                ecx = t128;
                edx = t129;
                x0 = d130;
    COW_AT(102c259a)
                d131 = fr(g, fr(g, x0 * rdf64(COW_IMG(0x10342dd0u))) + rdf64(COW_IMG(0x1032ab90u)));
                fpush(g, d131);
                g->esp = sp0 - 0x48u;
                COW_RET(0x102c25aeu);
                t132 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                eax = t132;
    COW_AT(102c25ae)
                t133 = rd32(sp0 - 0xcu);
                wr32(sp0 - 0xcu, t133 + 0x100u);
                t134 = rd32(sp0 - 0x10u);
                t135 = rd32(sp0 - 0x10u);
                wr32(sp0 - 0x10u, t134 + 2u);
                t136 = rd32(rd32(esi + 0x178u) + rd32(sp0 + 4u) * 4u);
                wr16(t135 + t136, (uint16_t)eax);
                if ((int32_t)(t134 + 2u) < 512)
                {
                    ecx = t136;
                    edx = t135;
                    loc_10 = rd32(sp0 - 0x10u);
                    loc_c = rd32(sp0 - 0xcu);
                    goto L_102c2575;
                }
                ecx = t136;
                edx = t135;
    COW_AT(102c25d1)
                t137 = rd32(sp0 + 4u);
                wr32(sp0 + 4u, t137 + 1u);
                t138 = rd32(sp0 + 4u);
                if ((int32_t)t138 < (int32_t)ebx) goto L_102c2549;
L_102c25dd: ;
    COW_AT(102c25dd)
                d139 = (double)rdf32(esi + 0x160u);
                if ((cow_fsw(g, d139, rdf64(COW_IMG(0x10340b18u)), 0u) >> 8u & 0x41u) != 0u)
                {
    COW_AT(102c25fe)
                    x0 = (double)rdf32(esi + 0x15cu);
                }
                else
                {
    COW_AT(102c25f0)
                    x0 = fr(g, rdf64(COW_IMG(0x1032a100u)) / (double)rdf32(esi + 0x160u));
                }
    COW_AT(102c2604)
                wrf64(sp0 - 0x34u, x0);
                wr32(sp0 - 0x4cu, ebx << 2u);
                wr32(sp0 - 0x50u, esi);
                g->eax = ebx << 2u;
                g->esp = sp0 - 0x48u;
                COW_RET(0x102c2613u);
                t140 = cow_call_regs(g, COW_IMG(0x102c43fcu), g->eax, ecx, edx, 1, 2, esi, ebx << 2u);
                t141 = g->edx;
                eax = t140;
                edx = t141;
    COW_AT(102c2613)
                t142 = rd32(sp0 + 4u);
                wr32(sp0 + 4u, 0u);
                t143 = rd32(sp0 - 0x4cu);
                wr32(esi + 0x174u, eax);
                if ((int32_t)ebx <= 0)
                {
                    loc_4 = rd32(sp0 - 4u);
                    loc_40 = rd32(sp0 - 0x40u);
                    loc_44 = rd32(sp0 - 0x44u);
                    loc_48 = rd32(sp0 - 0x48u);
                }
                else
                {
                    ecx = t143;
    COW_AT(102c2627)
                    t144 = COW_IMG(0x103c7f58u) + rd32(sp0 - 8u) * 4u;
                    wr32(sp0 - 0x28u, t144);
                    eax = t144;
                    loc_28 = t144;
L_102c2634: ;
    COW_AT(102c2634)
                    wr32(sp0 - 0x4cu, 0x200u);
                    wr32(sp0 - 0x50u, esi);
                    g->eax = eax;
                    g->esp = sp0 - 0x48u;
                    COW_RET(0x102c263bu);
                    t145 = cow_call_regs(g, COW_IMG(0x102c43fcu), g->eax, ecx, edx, 1, 2, esi, 0x200u);
                    eax = t145;
    COW_AT(102c263b)
                    t146 = rd32(sp0 + 4u);
                    t147 = rd32(esi + 0x174u);
                    wr32(t147 + t146 * 4u, eax);
                    t148 = rd32(rd32(sp0 - 0x28u)) * t146 >> 4u;
                    wr32(sp0 - 0x10u, t148);
                    ecx = t146;
                    edx = t147;
                    ebx = 0u;
                    loc_10 = t148;
L_102c2659: ;
    COW_AT(102c2659)
                    t149 = rd32(sp0 - 0x20u);
                    wr32(sp0 - 0x20u, 0u);
                    wr32(sp0 - 0x24u, loc_10);
                    d150 = rdf64(sp0 - 0x34u);
                    wrf64(sp0 - 0x50u, d150);
                    d151 = fr(g, (double)(int64_t)cow_i64(loc_10, 0u) * rdf64(COW_IMG(0x10342dd8u)));
                    wrf64(sp0 - 0x58u, d151);
                    g->eax = loc_10;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0x48u;
                    COW_RET(0x102c267eu);
                    t152 = cow_cdecl(g, COW_IMG(0x10312ce9u), 4, cow_dlo(d151), cow_dhi(d151), cow_dlo(d150), cow_dhi(d150));
                    t153 = g->ecx;
                    t154 = g->edx;
                    d155 = cow_take_float(g);
                    eax = t152;
                    ecx = t153;
                    edx = t154;
                    x0 = d155;
    COW_AT(102c267e)
                    d156 = fr(g, fr(g, x0 * rdf64(COW_IMG(0x10342dd0u))) + rdf64(COW_IMG(0x1032ab90u)));
                    fpush(g, d156);
                    g->esp = sp0 - 0x48u;
                    COW_RET(0x102c2692u);
                    t157 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                    eax = t157;
    COW_AT(102c2692)
                    t158 = rd32(sp0 - 0x10u);
                    wr32(sp0 - 0x10u, t158 + 0x100u);
                    t159 = rd32(rd32(esi + 0x174u) + rd32(sp0 + 4u) * 4u);
                    t160 = rd32(sp0 + 4u);
                    wr16(ebx + t159, (uint16_t)eax);
                    if ((int32_t)(ebx + 2u) < 512)
                    {
                        ecx = t159;
                        edx = t160;
                        ebx = ebx + 2u;
                        loc_10 = rd32(sp0 - 0x10u);
                        goto L_102c2659;
                    }
                    ecx = t159;
                    edx = t160;
    COW_AT(102c26af)
                    t161 = rd32(sp0 + 4u);
                    wr32(sp0 + 4u, t161 + 1u);
                    if ((int32_t)rd32(sp0 + 4u) < (int32_t)rd32(sp0 - 0x14u))
                    {
                        eax = rd32(sp0 + 4u);
                        loc_28 = rd32(sp0 - 0x28u);
                        goto L_102c2634;
                    }
                    loc_4 = rd32(sp0 - 4u);
                    loc_40 = rd32(sp0 - 0x40u);
                    loc_44 = rd32(sp0 - 0x44u);
                    loc_48 = rd32(sp0 - 0x48u);
                }
            }
        }
        else
        {
    COW_AT(102c210b)
            d3 = (double)rdf32(esi + 0x160u);
            if ((cow_fsw(g, d3, rdf64(COW_IMG(0x10340b18u)), 0u) >> 8u & 0x41u) != 0u)
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d3, rdf64(COW_IMG(0x10340b18u)), 0u);
    COW_AT(102c2132)
                x0 = 1.0;
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d3, rdf64(COW_IMG(0x10340b18u)), 0u);
    COW_AT(102c211e)
                x0 = fr(g, rdf64(COW_IMG(0x1032a100u)) / fr(g, (double)rdf32(esi + 0x160u) * (double)rdf32(esi + 0x15cu)));
            }
    COW_AT(102c2134)
            wrf64(sp0 - 0x34u, x0);
            wr32(sp0 - 0x4cu, 0x100u);
            wr32(sp0 - 0x50u, esi);
            g->eax = eax;
            g->esp = sp0 - 0x48u;
            COW_RET(0x102c2143u);
            t4 = cow_call_regs(g, COW_IMG(0x102c43fcu), g->eax, 8u, in_edx, 1, 2, esi, 0x100u);
            t5 = g->edx;
            eax = t4;
            edx = t5;
    COW_AT(102c2143)
            t6 = rd32(sp0 + 4u);
            wr32(sp0 + 4u, 0u);
            wr32(esi + 0x164u, eax);
            ecx = 0x100u;
L_102c214f: ;
    COW_AT(102c214f)
            d7 = rdf64(sp0 - 0x34u);
            wrf64(sp0 - 0x50u, d7);
            d8 = fr(g, (double)(int32_t)rd32(sp0 + 4u) * rdf64(COW_IMG(0x1033cd88u)));
            wrf64(sp0 - 0x58u, d8);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x48u;
            COW_RET(0x102c216au);
            t9 = cow_cdecl(g, COW_IMG(0x10312ce9u), 4, cow_dlo(d8), cow_dhi(d8), cow_dlo(d7), cow_dhi(d7));
            t10 = g->ecx;
            t11 = g->edx;
            d12 = cow_take_float(g);
            eax = t9;
            ecx = t10;
            edx = t11;
            x0 = d12;
    COW_AT(102c216a)
            d13 = fr(g, fr(g, x0 * rdf64(COW_IMG(0x10342dc8u))) + rdf64(COW_IMG(0x1032ab90u)));
            fpush(g, d13);
            g->esp = sp0 - 0x48u;
            COW_RET(0x102c217eu);
            t14 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
            eax = t14;
    COW_AT(102c217e)
            t15 = rd32(sp0 + 4u);
            t16 = rd32(esi + 0x164u);
            t17 = rd32(sp0 + 4u);
            wr32(sp0 + 4u, t15 + 1u);
            t18 = rd32(sp0 + 4u);
            wr8(t16 + t17, (uint8_t)eax);
            if ((int32_t)t18 < 256)
            {
                ecx = t16;
                edx = t17;
                goto L_102c214f;
            }
            ecx = t16;
            edx = t17;
    COW_AT(102c2192)
            t19 = rd32(esi + 0x70u);
            if ((t19 & 0x600080u) == 0u)
            {
                loc_4 = rd32(sp0 - 4u);
                loc_40 = rd32(sp0 - 0x40u);
                loc_44 = rd32(sp0 - 0x44u);
                loc_48 = rd32(sp0 - 0x48u);
            }
            else
            {
    COW_AT(102c219f)
                d20 = fr(g, rdf64(COW_IMG(0x1032a100u)) / (double)rdf32(esi + 0x15cu));
                wr32(sp0 - 0x4cu, 0x100u);
                wr32(sp0 - 0x50u, esi);
                wrf64(sp0 - 0x34u, d20);
                g->eax = eax;
                g->esp = sp0 - 0x48u;
                COW_RET(0x102c21b5u);
                t21 = cow_call_regs(g, COW_IMG(0x102c43fcu), g->eax, ecx, edx, 1, 2, esi, 0x100u);
                t22 = g->edx;
                eax = t21;
                edx = t22;
    COW_AT(102c21b5)
                t23 = rd32(sp0 + 4u);
                wr32(sp0 + 4u, 0u);
                t24 = rd32(sp0 - 0x4cu);
                wr32(esi + 0x16cu, eax);
                ecx = t24;
L_102c21c1: ;
    COW_AT(102c21c1)
                d25 = rdf64(sp0 - 0x34u);
                wrf64(sp0 - 0x50u, d25);
                d26 = fr(g, (double)(int32_t)rd32(sp0 + 4u) * rdf64(COW_IMG(0x1033cd88u)));
                wrf64(sp0 - 0x58u, d26);
                g->eax = eax;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x48u;
                COW_RET(0x102c21dcu);
                t27 = cow_cdecl(g, COW_IMG(0x10312ce9u), 4, cow_dlo(d26), cow_dhi(d26), cow_dlo(d25), cow_dhi(d25));
                t28 = g->ecx;
                t29 = g->edx;
                d30 = cow_take_float(g);
                eax = t27;
                ecx = t28;
                edx = t29;
                x0 = d30;
    COW_AT(102c21dc)
                d31 = fr(g, fr(g, x0 * rdf64(COW_IMG(0x10342dc8u))) + rdf64(COW_IMG(0x1032ab90u)));
                fpush(g, d31);
                g->esp = sp0 - 0x48u;
                COW_RET(0x102c21f0u);
                t32 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                eax = t32;
    COW_AT(102c21f0)
                t33 = rd32(sp0 + 4u);
                t34 = rd32(esi + 0x16cu);
                t35 = rd32(sp0 + 4u);
                wr32(sp0 + 4u, t33 + 1u);
                t36 = rd32(sp0 + 4u);
                wr8(t34 + t35, (uint8_t)eax);
                if ((int32_t)t36 < 256)
                {
                    ecx = t34;
                    edx = t35;
                    goto L_102c21c1;
                }
                ecx = t34;
                edx = t35;
    COW_AT(102c2204)
                wr32(sp0 - 0x4cu, 0x100u);
                wr32(sp0 - 0x50u, esi);
                g->eax = eax;
                g->esp = sp0 - 0x48u;
                COW_RET(0x102c220bu);
                t37 = cow_call_regs(g, COW_IMG(0x102c43fcu), g->eax, ecx, edx, 1, 2, esi, 0x100u);
                t38 = g->edx;
                eax = t37;
                edx = t38;
    COW_AT(102c220b)
                d39 = (double)rdf32(esi + 0x160u);
                d40 = rdf64(COW_IMG(0x10340b18u));
                wr32(esi + 0x168u, eax);
                if ((cow_fsw(g, d39, d40, 0u) >> 8u & 0x41u) != 0u)
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d39, d40, 0u);
                    ecx = rd32(sp0 - 0x4cu);
    COW_AT(102c2234)
                    x0 = (double)rdf32(esi + 0x15cu);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d39, d40, 0u);
                    ecx = rd32(sp0 - 0x4cu);
    COW_AT(102c2226)
                    x0 = fr(g, rdf64(COW_IMG(0x1032a100u)) / (double)rdf32(esi + 0x160u));
                }
    COW_AT(102c223a)
                wrf64(sp0 - 0x34u, x0);
                t41 = rd32(sp0 + 4u);
                wr32(sp0 + 4u, 0u);
                loc_34_d = x0;
L_102c2241: ;
    COW_AT(102c2241)
                wrf64(sp0 - 0x50u, loc_34_d);
                d42 = fr(g, (double)(int32_t)rd32(sp0 + 4u) * rdf64(COW_IMG(0x1033cd88u)));
                wrf64(sp0 - 0x58u, d42);
                g->eax = eax;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x48u;
                COW_RET(0x102c225cu);
                t43 = cow_cdecl(g, COW_IMG(0x10312ce9u), 4, cow_dlo(d42), cow_dhi(d42), cow_dlo(loc_34_d), cow_dhi(loc_34_d));
                t44 = g->ecx;
                t45 = g->edx;
                d46 = cow_take_float(g);
                eax = t43;
                ecx = t44;
                edx = t45;
                x0 = d46;
    COW_AT(102c225c)
                d47 = fr(g, fr(g, x0 * rdf64(COW_IMG(0x10342dc8u))) + rdf64(COW_IMG(0x1032ab90u)));
                fpush(g, d47);
                g->esp = sp0 - 0x48u;
                COW_RET(0x102c2270u);
                t48 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                eax = t48;
    COW_AT(102c2270)
                t49 = rd32(sp0 + 4u);
                t50 = rd32(esi + 0x168u);
                t51 = rd32(sp0 + 4u);
                wr32(sp0 + 4u, t49 + 1u);
                t52 = rd32(sp0 + 4u);
                wr8(t50 + t51, (uint8_t)eax);
                if ((int32_t)t52 < 256)
                {
                    ecx = t50;
                    edx = t51;
                    loc_34_d = rdf64(sp0 - 0x34u);
                    goto L_102c2241;
                }
    COW_AT(102c2284)
                loc_4 = rd32(sp0 - 4u);
                loc_40 = rd32(sp0 - 0x40u);
                loc_44 = rd32(sp0 - 0x44u);
                loc_48 = rd32(sp0 - 0x48u);
            }
        }
    }
    COW_AT(102c26be)
    g->ebx = loc_40;
    g->esi = loc_44;
    g->edi = loc_48;
    g->ebp = loc_4;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102c20d9(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102c20fcu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x48u);
        in_esi = rd32(sp0 - 0x44u);
        in_ebx = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c210bu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x48u);
        in_esi = rd32(sp0 - 0x44u);
        in_ebx = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x48u;
        g->ecx = 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c211eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x48u);
        in_esi = rd32(sp0 - 0x44u);
        in_ebx = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x48u;
        g->ecx = 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c2132u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x48u);
        in_esi = rd32(sp0 - 0x44u);
        in_ebx = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x48u;
        g->ecx = 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c2134u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x48u);
        in_esi = rd32(sp0 - 0x44u);
        in_ebx = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x48u;
        g->ecx = 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c2143u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        g->edi = 0x100u;
        wr32(sp0 - 0x4cu, 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x102c214fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        g->edi = 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x102c216au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x58u;
        g->ebp = sp0 - 4u;
        g->edi = 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x102c217eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        g->edi = 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x102c2192u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        g->edi = 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x102c219fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        g->edi = 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x102c21b5u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        g->edi = 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x102c21c1u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        g->edi = 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x102c21dcu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x58u;
        g->ebp = sp0 - 4u;
        g->edi = 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x102c21f0u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        g->edi = 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x102c2204u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        g->edi = 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x102c220bu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        g->edi = 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x102c2226u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        g->edi = 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x102c2234u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        g->edi = 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x102c223au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        g->edi = 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x102c2241u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_34_d;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_34_d = rdf64(sp0 - 0x34u);
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        g->edi = 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x102c225cu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x58u;
        g->ebp = sp0 - 4u;
        g->edi = 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x102c2270u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        g->edi = 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x102c2284u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c2289u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x48u);
        in_esi = rd32(sp0 - 0x44u);
        in_ebx = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x48u;
        g->ecx = 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c2292u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x48u);
        in_esi = rd32(sp0 - 0x44u);
        in_ebx = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x48u;
        g->ecx = 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c22a4u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x48u);
        in_esi = rd32(sp0 - 0x44u);
        in_ebx = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x48u;
        g->ecx = 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c22a6u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x48u);
        in_esi = rd32(sp0 - 0x44u);
        in_ebx = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x48u;
        g->ecx = 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c22b1u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x48u);
        in_esi = rd32(sp0 - 0x44u);
        in_ebx = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x48u;
        g->ecx = 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c22b5u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x48u);
        in_esi = rd32(sp0 - 0x44u);
        in_ebx = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x48u;
        g->ecx = 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c22bcu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x48u);
        in_esi = rd32(sp0 - 0x44u);
        in_ebx = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x48u;
        g->ecx = 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c22c2u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x48u);
        in_esi = rd32(sp0 - 0x44u);
        in_ebx = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x48u;
        g->ecx = 8u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102c22ccu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x48u);
        in_esi = rd32(sp0 - 0x44u);
        in_ebx = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x48u;
        g->ecx = 8u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102c22cfu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x48u);
        in_esi = rd32(sp0 - 0x44u);
        in_ebx = rd32(sp0 - 0x40u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x48u;
        g->ecx = 8u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102c22d5u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x48u);
        in_esi = rd32(sp0 - 0x44u);
        in_ebx = rd32(sp0 - 0x40u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x48u;
        g->ecx = 8u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102c22ddu:
    {
        uint32_t cf;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x48u);
        in_esi = rd32(sp0 - 0x44u);
        in_ebx = rd32(sp0 - 0x40u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x48u;
        g->eax = 5u;
        g->ecx = 8u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102c22e0u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x48u);
        in_esi = rd32(sp0 - 0x44u);
        in_ebx = rd32(sp0 - 0x40u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x48u;
        g->ecx = 8u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102c22e5u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x48u);
        in_esi = rd32(sp0 - 0x44u);
        in_ebx = rd32(sp0 - 0x40u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x48u;
        g->ecx = 8u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102c22e8u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x48u);
        in_esi = rd32(sp0 - 0x44u);
        in_ebx = rd32(sp0 - 0x40u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x48u;
        g->ecx = 8u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102c22edu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x48u);
        in_esi = rd32(sp0 - 0x44u);
        in_ebx = rd32(sp0 - 0x40u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x48u;
        g->ecx = 8u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102c22f0u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x48u);
        in_esi = rd32(sp0 - 0x44u);
        in_ebx = rd32(sp0 - 0x40u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x48u;
        g->ecx = 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c231bu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c232fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c2331u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c2340u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c235du:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x102c2361u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x102c2368u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x102c237eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x102c23a2u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_28;
        double loc_34_d;
        double loc_3c_d;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_3c_d = rdf64(sp0 - 0x3cu);
        loc_34_d = rdf64(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x102c23c3u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x58u;
        g->ebp = sp0 - 4u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x102c23ceu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x102c23d6u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x102c23eeu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x102c2418u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x102c241bu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x102c242bu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x102c2437u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x102c2444u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_28;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_28 = rd32(sp0 - 0x28u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x102c2469u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x102c2471u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x102c2479u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x102c2480u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x102c24a5u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x102c24cau:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x58u;
        g->ebp = sp0 - 4u;
        g->edi = 0x200u;
        wr32(sp0 - 0x28u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102c24deu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x102c2501u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x102c250du:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_28 = rd32(sp0 - 0x28u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x102c251au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_28 = rd32(sp0 - 0x28u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x102c2535u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x102c2549u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x102c2550u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x102c2575u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x102c259au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x58u;
        g->ebp = sp0 - 4u;
        g->edi = 0x200u;
        wr32(sp0 - 0x28u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102c25aeu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x102c25d1u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x102c25ddu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x102c25f0u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x102c25feu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x102c2604u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x102c2613u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x102c2627u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x102c2634u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x102c263bu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x102c2659u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x102c267eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x58u;
        g->ebp = sp0 - 4u;
        g->edi = 0x200u;
        wr32(sp0 - 0x20u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102c2692u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x102c26afu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        g->edi = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x102c26beu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102c20d9(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102c20d9(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
