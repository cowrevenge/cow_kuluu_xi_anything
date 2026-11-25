/* f_0x100a7b80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_100a7b80(Guest* g)
{
    double d12;
    double d16;
    double d20;
    double d23;
    double d27;
    double d28;
    double d3;
    double d35;
    double d36;
    double d49;
    double d56;
    double d57;
    double d60;
    double d64;
    double d65;
    double d66;
    double d68;
    double d69;
    double d72;
    double d73;
    double d74;
    double d75;
    double d84;
    double d85;
    double d86;
    double d87;
    double d88;
    double d89;
    double d90;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    double loc_74_f;
    double loc_78_f;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t101;
    uint32_t t102;
    uint32_t t103;
    uint32_t t104;
    uint32_t t105;
    uint32_t t106;
    uint32_t t107;
    uint32_t t108;
    uint32_t t109;
    uint32_t t11;
    uint32_t t110;
    uint32_t t111;
    uint32_t t112;
    uint32_t t113;
    uint32_t t114;
    uint32_t t115;
    uint32_t t116;
    uint32_t t117;
    uint32_t t118;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t21;
    uint32_t t22;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t29;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
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
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t67;
    uint32_t t7;
    uint32_t t70;
    uint32_t t71;
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
    uint32_t t80;
    uint32_t t81;
    uint32_t t82;
    uint32_t t83;
    uint32_t t9;
    uint32_t t91;
    uint32_t t92;
    uint32_t t93;
    uint32_t t94;
    uint32_t t95;
    uint32_t t96;
    uint32_t t97;
    uint32_t t98;
    uint32_t t99;
    double x0;
    double x1;
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
    cow_frame(g, sp0, 180u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100a7b8fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x90u); in_esi = rd32(sp0 - 0x8cu); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->edi = rd32(sp0 - 0x90u); g->esi = rd32(sp0 - 0x8cu); goto E_100a7b8f;
    case 0x100a7b9eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100a7b9e;
    case 0x100a7ba4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100a7ba4;
    case 0x100a7baeu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100a7bae;
    case 0x100a7bb8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100a7bb8;
    case 0x100a7bcau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100a7bca;
    case 0x100a7bdcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100a7bdc;
    case 0x100a7bf3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100a7bf3;
    case 0x100a7c08u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a7c08;
    case 0x100a7c14u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a7c14;
    case 0x100a7c29u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; loc_74_f = rdf32(sp0 - 0x74u); goto E_100a7c29;
    case 0x100a7c3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; loc_74_f = rdf32(sp0 - 0x74u); goto E_100a7c3c;
    case 0x100a7c53u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; loc_74_f = rdf32(sp0 - 0x74u); goto E_100a7c53;
    case 0x100a7c58u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100a7c58;
    case 0x100a7c5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100a7c5f;
    case 0x100a7c84u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; loc_78_f = rdf32(sp0 - 0x78u); goto E_100a7c84;
    case 0x100a7c94u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; loc_78_f = rdf32(sp0 - 0x78u); goto E_100a7c94;
    case 0x100a7c9du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100a7c9d;
    case 0x100a7ca6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100a7ca6;
    case 0x100a7cb4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100a7cb4;
    case 0x100a7cc3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100a7cc3;
    case 0x100a7cd2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100a7cd2;
    case 0x100a7ce1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100a7ce1;
    case 0x100a7cf0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a7cf0;
    case 0x100a7d00u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100a7d00;
    case 0x100a7d09u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100a7d09;
    case 0x100a7d12u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; loc_78_f = rdf32(sp0 - 0x78u); goto E_100a7d12;
    case 0x100a7d21u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a7d21;
    case 0x100a7d36u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100a7d36;
    case 0x100a7d51u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100a7d51;
    case 0x100a7d79u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a7d79;
    case 0x100a7d86u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100a7d86;
    case 0x100a7d8eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a7d8e;
    case 0x100a7da1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100a7da1;
    case 0x100a7dbau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100a7dba;
    case 0x100a7dc2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100a7dc2;
    case 0x100a7dcdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100a7dcd;
    case 0x100a7dd5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; loc_74_f = rdf32(sp0 - 0x74u); goto E_100a7dd5;
    case 0x100a7df6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; loc_74_f = rdf32(sp0 - 0x74u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a7df6;
    case 0x100a7dfeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; loc_74_f = rdf32(sp0 - 0x74u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100a7dfe;
    case 0x100a7e1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100a7e1b;
    case 0x100a7e24u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100a7e24;
    case 0x100a7e32u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100a7e32;
    case 0x100a7e40u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100a7e40;
    case 0x100a7e4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100a7e4f;
    case 0x100a7e71u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100a7e71;
    case 0x100a7e83u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100a7e83;
    case 0x100a7eb0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100a7eb0;
    case 0x100a7ebau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100a7eba;
    case 0x100a7ec5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100a7ec5;
    case 0x100a7ed1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100a7ed1;
    case 0x100a7eddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100a7edd;
    case 0x100a7eedu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100a7eed;
    case 0x100a7ef6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100a7ef6;
    case 0x100a7f01u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100a7f01;
    case 0x100a7f06u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100a7f06;
    case 0x100a7f0bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100a7f0b;
    case 0x100a7f0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100a7f0e;
    case 0x100a7f10u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100a7f10;
    case 0x100a7f17u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100a7f17;
    case 0x100a7f21u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100a7f21;
    case 0x100a7f33u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100a7f33;
    case 0x100a7f58u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100a7f58;
    case 0x100a7f60u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100a7f60;
    case 0x100a7f64u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100a7f64;
    case 0x100a7f6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100a7f6b;
    case 0x100a7f73u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100a7f73;
    case 0x100a7f77u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100a7f77;
    case 0x100a7f85u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100a7f85;
    case 0x100a7f90u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100a7f90;
    case 0x100a7f95u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100a7f95;
    case 0x100a7fa3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; goto E_100a7fa3;
    case 0x100a7fa9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; zf = g->zf; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_100a7fa9;
    case 0x100a7fd9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; zf = g->zf; goto E_100a7fd9;
    case 0x100a7fe6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100a7fe6;
    case 0x100a7ff2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100a7ff2;
    default: break;
    }
#endif

    COW_AT(100a7b80)
    wr32(sp0 - 0x8cu, in_esi);
    wr32(sp0 - 0x90u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x90u;
    t1 = cow_call_regs(g, COW_IMG(0x10014cf0u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->edx;
    d3 = cow_take_float(g);
    eax = t1;
    edx = t2;
    x0 = d3;
    COW_AT(100a7b8f)
    wrf32(sp0 - 0x70u, (float)(double)(float)x0);
    g->edx = edx;
    g->esp = sp0 - 0x90u;
    t4 = cow_call_regs(g, COW_IMG(0x10157cf0u), eax, rd32(COW_IMG(0x1057876cu)), g->edx, 1, 0);
    t5 = g->edx;
    eax = t4;
    edx = t5;
    COW_AT(100a7b9e)
    if (eax != 0u)
    {
        edi = eax;
        goto L_100a7bb8;
    }
    COW_AT(100a7ba4)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x90u;
    t6 = cow_thiscall(g, COW_IMG(0x10081600u), COW_IMG(0x10487f58u), 0);
    t7 = g->edx;
    eax = t6;
    edx = t7;
    COW_AT(100a7bae)
    if (eax == 0u) goto L_100a7fe6;
    edi = eax;
L_100a7bb8: ;
    COW_AT(100a7bb8)
    wr32(sp0 - 0x94u, in_ebx);
    wr32(sp0 - 0x98u, in_ebp);
    g->eax = rd32(edi);
    t10 = rd32(edi);
    g->esp = sp0 - 0x98u;
    t11 = cow_thiscall(g, rd32(t10 + 0x1bcu), edi, 0);
    eax = t11;
    COW_AT(100a7bca)
    d12 = fr(g, (double)rdf32(self + 0xd4u) - (double)rdf32(eax));
    wrf32(sp0 - 0x88u, (float)(double)(float)d12);
    g->eax = eax;
    g->edx = rd32(edi);
    t13 = rd32(edi);
    g->esp = sp0 - 0x98u;
    t14 = cow_thiscall(g, rd32(t13 + 0x1bcu), edi, 0);
    t15 = g->edx;
    eax = t14;
    edx = t15;
    COW_AT(100a7bdc)
    d16 = fr(g, (double)rdf32(self + 0xd8u) - (double)rdf32(eax + 4u));
    wrf32(sp0 - 0x84u, (float)(double)(float)d16);
    g->eax = rd32(edi);
    g->edx = edx;
    t17 = rd32(edi);
    g->esp = sp0 - 0x98u;
    t18 = cow_thiscall(g, rd32(t17 + 0x1bcu), edi, 0);
    t19 = g->edx;
    eax = t18;
    edx = t19;
    COW_AT(100a7bf3)
    d20 = fr(g, (double)rdf32(self + 0xdcu) - (double)rdf32(eax + 8u));
    wr32(sp0 - 0x9cu, edi);
    wrf32(sp0 - 0x80u, (float)(double)(float)d20);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    t21 = cow_stdcall(g, COW_IMG(0x100aaef0u), 1, edi);
    t22 = g->edx;
    d23 = cow_take_float(g);
    eax = t21;
    edx = t22;
    x0 = d23;
    COW_AT(100a7c08)
    wrf32(sp0 - 0x74u, (float)(double)(float)x0);
    wr32(sp0 - 0x9cu, self);
    g->eax = eax;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    t24 = cow_stdcall(g, COW_IMG(0x100aaef0u), 1, self);
    t25 = g->ecx;
    t26 = g->edx;
    d27 = cow_take_float(g);
    eax = t24;
    ecx = t25;
    edx = t26;
    x0 = d27;
    COW_AT(100a7c14)
    d28 = fr(g, x0 + (double)rdf32(sp0 - 0x74u));
    wrf32(sp0 - 0x74u, (float)(double)(float)d28);
    if (rd8(COW_IMG(0x10487f81u)) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10487f81u));
        loc_74_f = (double)(float)d28;
        goto L_100a7dd5;
    }
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10487f81u));
    loc_74_f = (double)(float)d28;
    COW_AT(100a7c29)
    if ((double)rdf32(COW_IMG(0x10487f64u)) != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x10487f64u)), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_100a7c53;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x10487f64u)), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100a7c3c)
    if ((double)rdf32(COW_IMG(0x10487f6cu)) == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x10487f6cu)), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_100a7dd5;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x10487f6cu)), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
L_100a7c53: ;
    COW_AT(100a7c53)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    t29 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t30 = g->ecx;
    t31 = g->edx;
    eax = t29;
    ecx = t30;
    edx = t31;
    COW_AT(100a7c58)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    t32 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t33 = g->ecx;
    t34 = g->edx;
    ecx = t33;
    edx = t34;
    ebx = eax;
    eax = t32;
    COW_AT(100a7c5f)
    d35 = fr(g, atan2(-(double)rdf32(eax + 0x2cu), (double)rdf32(ebx + 0x24u)));
    wrf32(sp0 - 0x78u, (float)(double)(float)d35);
    if ((double)rdf32(arg1) != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(arg1), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        loc_78_f = (double)(float)d35;
        goto L_100a7c94;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(arg1), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    loc_78_f = (double)(float)d35;
    COW_AT(100a7c84)
    d36 = (double)rdf32(arg1 + 8u);
    if (d36 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d36, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_100a7d12;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d36, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
L_100a7c94: ;
    COW_AT(100a7c94)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    t37 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t38 = g->edx;
    eax = t37;
    edx = t38;
    COW_AT(100a7c9d)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    t39 = cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x40u, 0);
    t40 = g->edx;
    eax = t39;
    edx = t40;
    COW_AT(100a7ca6)
    t41 = rd32(sp0 - 0x78u);
    wr32(sp0 - 0x9cu, t41);
    g->eax = eax;
    g->esp = sp0 - 0x98u;
    t42 = cow_thiscall(g, COW_IMG(0x10027bd0u), sp0 - 0x40u, 1, t41);
    eax = t42;
    COW_AT(100a7cb4)
    wr32(sp0 - 0x9cu, arg1);
    wr32(sp0 - 0xa0u, sp0 - 0x4cu);
    g->edx = sp0 - 0x4cu;
    g->esp = sp0 - 0x98u;
    cow_thiscall(g, COW_IMG(0x10028230u), sp0 - 0x40u, 2, sp0 - 0x4cu, arg1);
    t43 = g->edx;
    edx = t43;
    COW_AT(100a7cc3)
    wr32(sp0 - 0x9cu, sp0 - 0x4cu);
    wr32(sp0 - 0xa0u, sp0 - 0x4cu);
    g->eax = sp0 - 0x4cu;
    g->ecx = sp0 - 0x4cu;
    g->esp = sp0 - 0x94u;
    t44 = cow_cdecl(g, COW_IMG(0x10027510u), 3, sp0 - 0x4cu, sp0 - 0x4cu, rd32(sp0 - 0x98u));
    t45 = g->ecx;
    eax = t44;
    ecx = t45;
    COW_AT(100a7cd2)
    wr32(sp0 - 0xa4u, COW_IMG(0x10487f64u));
    wr32(sp0 - 0xa8u, sp0 - 0x5cu);
    g->edx = sp0 - 0x5cu;
    g->esp = sp0 - 0x9cu;
    cow_cdecl(g, COW_IMG(0x10027510u), 3, sp0 - 0x5cu, COW_IMG(0x10487f64u), sp0 - 0x4cu);
    t46 = g->edx;
    edx = t46;
    COW_AT(100a7ce1)
    wr32(sp0 - 0xacu, sp0 - 0x5cu);
    wr32(sp0 - 0xb0u, sp0 - 0x4cu);
    g->eax = sp0 - 0x5cu;
    g->edx = edx;
    g->esp = sp0 - 0xa8u;
    t47 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x4cu, sp0 - 0x5cu);
    t48 = g->edx;
    d49 = cow_take_float(g);
    eax = t47;
    edx = t48;
    x0 = d49;
    COW_AT(100a7cf0)
    if (!(x0 < (double)rdf32(COW_IMG(0x1032b15cu))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032b15cu)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032b15cu)), 0u);
    COW_AT(100a7d00)
        wr32(sp0 - 0x9cu, 0u);
        g->ebx = ebx;
        g->edx = edx;
        g->esp = sp0 - 0x98u;
        t50 = cow_call_regs(g, COW_IMG(0x100a6070u), eax, g->ecx, g->edx, 0, 1, 0u);
        t51 = g->edx;
        eax = t50;
        edx = t51;
    }
    COW_AT(100a7d09)
    g->eax = eax;
    g->ecx = sp0 - 0x40u;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    t52 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t53 = g->ecx;
    t54 = g->edx;
    eax = t52;
    ecx = t53;
    edx = t54;
L_100a7d12: ;
    COW_AT(100a7d12)
    wr32(sp0 - 0x9cu, COW_IMG(0x10487f64u));
    wr32(sp0 - 0xa0u, COW_IMG(0x10487f64u));
    g->ecx = ecx;
    g->esp = sp0 - 0x98u;
    cow_cdecl(g, COW_IMG(0x10027530u), 2, COW_IMG(0x10487f64u), COW_IMG(0x10487f64u));
    t55 = g->ecx;
    d56 = cow_take_float(g);
    ecx = t55;
    x0 = d56;
    COW_AT(100a7d21)
    wr32(sp0 - 0xa4u, sp0 - 0x88u);
    wr32(sp0 - 0xa8u, sp0 - 0x6cu);
    d57 = (double)(float)fr(g, sqrt(x0));
    wrf32(sp0 - 0x78u, (float)d57);
    g->eax = sp0 - 0x6cu;
    g->edx = sp0 - 0x88u;
    g->esp = sp0 - 0x9cu;
    t58 = cow_cdecl(g, COW_IMG(0x10027510u), 3, sp0 - 0x6cu, sp0 - 0x88u, COW_IMG(0x10487f64u));
    t59 = g->edx;
    eax = t58;
    edx = t59;
    COW_AT(100a7d36)
    d60 = (double)(float)-(double)rdf32(sp0 - 0x78u);
    wrf32(sp0 - 0x9cu, (float)d60);
    wr32(sp0 - 0xa0u, sp0 - 0x6cu);
    wr32(sp0 - 0xa4u, COW_IMG(0x10487f64u));
    g->eax = eax;
    g->ecx = sp0 - 0x6cu;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    t61 = cow_cdecl(g, COW_IMG(0x100272e0u), 3, COW_IMG(0x10487f64u), sp0 - 0x6cu, cow_f2bits(d60));
    t62 = g->ecx;
    t63 = g->edx;
    eax = t61;
    ecx = t62;
    edx = t63;
    COW_AT(100a7d51)
    d64 = (double)rdf32(sp0 - 0x80u);
    d65 = (double)rdf32(sp0 - 0x88u);
    d66 = fr(g, fr(g, sqrt(fr(g, fr(g, d64 * d64) + fr(g, d65 * d65)))) - (double)rdf32(sp0 - 0x74u));
    if (!(d66 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d66, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = d66;
    COW_AT(100a7d8e)
        d68 = fr(g, (double)rdf32(sp0 - 0x78u) * (double)rdf32(sp0 - 0x70u));
        if (!(x0 < d68))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, d68, 0u);
    COW_AT(100a7dc2)
            wr32(sp0 - 0x9cu, COW_IMG(0x10487f64u));
            wr32(sp0 - 0xa0u, arg1);
            g->eax = eax;
            g->esp = sp0 - 0x98u;
            t71 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, arg1, COW_IMG(0x10487f64u));
            eax = t71;
    COW_AT(100a7dcd)
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, d68, 0u);
    COW_AT(100a7da1)
            d69 = fr(g, (double)rdf32(sp0 - 0x78u) * (double)rdf32(COW_IMG(0x1032dfa4u)));
            wr32(sp0 - 0x9cu, ecx);
            wrf32(sp0 - 0x9cu, (float)(double)(float)d69);
            wr32(sp0 - 0xa0u, sp0 - 0x6cu);
            wr32(sp0 - 0xa4u, arg1);
            g->eax = eax;
            g->esp = sp0 - 0x98u;
            t70 = cow_cdecl(g, COW_IMG(0x100272e0u), 3, arg1, sp0 - 0x6cu, cow_f2bits((double)(float)d69));
            eax = t70;
    COW_AT(100a7dba)
        }
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d66, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = d66;
    COW_AT(100a7d79)
        wr32(sp0 - 0x9cu, COW_IMG(0x10487f98u));
        wr32(sp0 - 0xa0u, arg1);
        g->eax = eax;
        g->esp = sp0 - 0x98u;
        t67 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, arg1, COW_IMG(0x10487f98u));
        eax = t67;
    COW_AT(100a7d86)
    }
L_100a7edd: ;
    COW_AT(100a7edd)
    g->eax = eax;
    g->edx = rd32(edi);
    t100 = rd32(edi);
    t101 = rd32(self + 0x598u);
    g->esp = sp0 - 0x98u;
    t102 = cow_thiscall(g, rd32(t100 + 0x1bcu), edi, 0);
    t103 = g->edx;
    eax = t102;
    edx = t103;
    ebx = t101;
    COW_AT(100a7eed)
    wr32(sp0 - 0x9cu, eax);
    wr32(sp0 - 0xa0u, arg1);
    g->eax = eax;
    g->esp = sp0 - 0x98u;
    t104 = cow_thiscall(g, COW_IMG(0x100a80d0u), self, 2, arg1, eax);
    eax = t104;
    COW_AT(100a7ef6)
    wr32(self + 0x598u, eax);
    if (ebx != 2u) goto L_100a7f06;
    COW_AT(100a7f01)
    zf = eax == 4u;
L_100a7f0e: ;
    COW_AT(100a7f0e)
    if (zf)
    {
    COW_AT(100a7f10)
        wr8(self + 0x5b1u, 2u);
    }
L_100a7f17: ;
    COW_AT(100a7f17)
    if ((int8_t)rd8(self + 0x5b1u) > 0)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x5b1u);
    COW_AT(100a7f21)
        wr32(self + 0x598u, 1u);
        wr8(self + 0x5b1u, (uint8_t)((uint8_t)eax - 1u));
    }
    COW_AT(100a7f33)
    t105 = rd32(self + 0xecu);
    wr32(sp0 - 0x54u, t105);
    t106 = rd32(self + 0xe4u);
    wr32(sp0 - 0x5cu, t106);
    t107 = rd32(self + 0xf0u);
    wr32(sp0 - 0x50u, t107);
    g->eax = t106;
    g->edx = t107;
    g->esp = sp0 - 0x98u;
    t108 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t109 = g->edx;
    eax = t108;
    edx = t109;
    COW_AT(100a7f58)
    wr32(sp0 - 0x9cu, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    t110 = cow_thiscall(g, COW_IMG(0x10084350u), self, 1, eax);
    t111 = g->edx;
    eax = t110;
    edx = t111;
    COW_AT(100a7f60)
    if ((uint8_t)eax != 0u) goto L_100a7f85;
    COW_AT(100a7f64)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    t112 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t113 = g->edx;
    eax = t112;
    edx = t113;
    COW_AT(100a7f6b)
    wr32(sp0 - 0x9cu, eax);
    g->eax = eax;
    g->esp = sp0 - 0x98u;
    t114 = cow_thiscall(g, COW_IMG(0x10084370u), self, 1, eax);
    eax = t114;
    COW_AT(100a7f73)
    if ((uint8_t)eax != 0u) goto L_100a7f85;
    COW_AT(100a7f77)
    x1 = -(double)rdf32(sp0 - 0x6cu);
    x0 = -(double)rdf32(sp0 - 0x64u);
L_100a7fa9: ;
    COW_AT(100a7fa9)
    t115 = rd32(sp0 - 0x54u);
    t116 = rd32(sp0 - 0x5cu);
    t117 = rd32(sp0 - 0x50u);
    wr32(self + 0xecu, t115);
    wr32(sp0 - 0x9cu, arg1);
    wr32(self + 0xe4u, t116);
    wr32(self + 0xf0u, t117);
    wrf32(self + 0xe8u, (float)-fr(g, atan2(x0, x1)));
    g->eax = t116;
    g->esp = sp0 - 0x98u;
    t118 = cow_thiscall(g, COW_IMG(0x100a8000u), self, 1, rd32(sp0 - 0x9cu));
    eax = t118;
    COW_AT(100a7fd9)
    g->ebx = rd32(sp0 - 0x94u);
    g->esi = rd32(sp0 - 0x8cu);
    g->edi = rd32(sp0 - 0x90u);
    g->ebp = rd32(sp0 - 0x98u);
    return eax;
L_100a7dd5: ;
    COW_AT(100a7dd5)
    d72 = (double)rdf32(sp0 - 0x80u);
    d73 = (double)rdf32(sp0 - 0x88u);
    d74 = fr(g, sqrt(fr(g, fr(g, d72 * d72) + fr(g, d73 * d73))));
    if (!(d74 < (double)rdf32(COW_IMG(0x1032a378u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d74, (double)rdf32(COW_IMG(0x1032a378u)), 1u);
        x0 = d74;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d74, (double)rdf32(COW_IMG(0x1032a378u)), 1u);
        x0 = d74;
    COW_AT(100a7df6)
        x0 = (double)rdf32(COW_IMG(0x1032a378u));
    }
    COW_AT(100a7dfe)
    d75 = fr(g, (double)rdf32(arg1 + 8u) / x0);
    wrf32(sp0 - 0x70u, (float)(double)(float)-d75);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    t76 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t77 = g->edx;
    eax = t76;
    edx = t77;
    COW_AT(100a7e1b)
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x40u, 0);
    t78 = g->edx;
    edx = t78;
    COW_AT(100a7e24)
    t79 = rd32(sp0 - 0x70u);
    wr32(sp0 - 0x9cu, t79);
    g->eax = t79;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    t80 = cow_thiscall(g, COW_IMG(0x10027bd0u), sp0 - 0x40u, 1, t79);
    t81 = g->edx;
    eax = t80;
    edx = t81;
    COW_AT(100a7e32)
    wr32(sp0 - 0x9cu, sp0 - 0x88u);
    g->esp = sp0 - 0x98u;
    cow_thiscall(g, COW_IMG(0x10028200u), sp0 - 0x40u, 1, sp0 - 0x88u);
    t82 = g->ecx;
    ecx = t82;
    COW_AT(100a7e40)
    wr32(sp0 - 0x9cu, sp0 - 0x88u);
    wr32(sp0 - 0xa0u, sp0 - 0x6cu);
    g->eax = sp0 - 0x6cu;
    g->esp = sp0 - 0x94u;
    t83 = cow_cdecl(g, COW_IMG(0x10027510u), 3, sp0 - 0x6cu, sp0 - 0x88u, rd32(sp0 - 0x98u));
    eax = t83;
    COW_AT(100a7e4f)
    d84 = (double)rdf32(sp0 - 0x80u);
    d85 = (double)rdf32(sp0 - 0x88u);
    d86 = fr(g, sqrt(fr(g, fr(g, d84 * d84) + fr(g, d85 * d85))));
    d87 = (double)rdf32(sp0 - 0x74u);
    if (!(d86 < d87))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d86, d87, 0u);
        goto L_100a7e83;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d86, d87, 0u);
    COW_AT(100a7e71)
    if ((cow_fsw(g, (double)rdf32(arg1), (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, (double)rdf32(arg1), (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
        goto L_100a7eb0;
    }
    eax = cow_fsw(g, (double)rdf32(arg1), (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
L_100a7e83: ;
    COW_AT(100a7e83)
    d88 = fr(g, fr(g, (double)rdf32(sp0 - 0x6cu) * (double)rdf32(arg1)) + (double)rdf32(sp0 - 0x88u));
    wrf32(sp0 - 0x88u, (float)(double)(float)d88);
    d89 = fr(g, fr(g, (double)rdf32(sp0 - 0x68u) * (double)rdf32(arg1)) + (double)rdf32(sp0 - 0x84u));
    wrf32(sp0 - 0x84u, (float)(double)(float)d89);
    d90 = fr(g, fr(g, (double)rdf32(sp0 - 0x64u) * (double)rdf32(arg1)) + (double)rdf32(sp0 - 0x80u));
    wrf32(sp0 - 0x80u, (float)(double)(float)d90);
L_100a7eb0: ;
    COW_AT(100a7eb0)
    g->eax = eax;
    g->edx = rd32(edi);
    t91 = rd32(edi);
    g->esp = sp0 - 0x98u;
    t92 = cow_thiscall(g, rd32(t91 + 0x1bcu), edi, 0);
    t93 = g->ecx;
    t94 = g->edx;
    eax = t92;
    ecx = t93;
    edx = t94;
    COW_AT(100a7eba)
    wr32(sp0 - 0x9cu, eax);
    wr32(sp0 - 0xa0u, sp0 - 0x88u);
    g->eax = sp0 - 0x88u;
    g->edx = edx;
    g->esp = sp0 - 0x98u;
    t95 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, sp0 - 0x88u, eax);
    t96 = g->edx;
    eax = t95;
    edx = t96;
    COW_AT(100a7ec5)
    wr32(sp0 - 0xa4u, self + 0xd4u);
    wr32(sp0 - 0xa8u, sp0 - 0x88u);
    wr32(sp0 - 0xacu, arg1);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xa0u;
    t97 = cow_cdecl(g, COW_IMG(0x10027120u), 3, arg1, sp0 - 0x88u, self + 0xd4u);
    t98 = g->edx;
    eax = t97;
    edx = t98;
    COW_AT(100a7ed1)
    g->eax = eax;
    g->esp = sp0 - 0x98u;
    t99 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    eax = t99;
    goto L_100a7edd;
L_100a7f06: ;
    COW_AT(100a7f06)
    if (ebx != 4u) goto L_100a7f17;
    COW_AT(100a7f0b)
    zf = eax == 2u;
    goto L_100a7f0e;
L_100a7f85: ;
    COW_AT(100a7f85)
    if (rd32(self + 0x598u) == 4u) goto L_100a7fa3;
    eax = rd32(self + 0x598u);
    COW_AT(100a7f90)
    if (eax == 2u) goto L_100a7fa3;
    COW_AT(100a7f95)
    x1 = -(double)rdf32(sp0 - 0x6cu);
    x0 = -(double)rdf32(sp0 - 0x64u);
    goto L_100a7fa9;
L_100a7fa3: ;
    COW_AT(100a7fa3)
    x1 = (double)rdf32(arg1);
    x0 = (double)rdf32(arg1 + 8u);
    goto L_100a7fa9;
L_100a7fe6: ;
    COW_AT(100a7fe6)
    wr32(sp0 - 0x94u, 1u);
    g->eax = rd32(self);
    t8 = rd32(self);
    g->esp = sp0 - 0x90u;
    t9 = cow_thiscall(g, rd32(t8 + 0x334u), self, 1, 1u);
    eax = t9;
    COW_AT(100a7ff2)
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0x8cu);
    g->edi = rd32(sp0 - 0x90u);
    g->ebp = in_ebp;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100a7b80(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100a7b8fu:
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
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x90u);
        in_esi = rd32(sp0 - 0x8cu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x90u;
        (void)sp0;
        return 1;
    }
    case 0x100a7b9eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x90u;
        (void)sp0;
        return 1;
    }
    case 0x100a7ba4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x90u;
        (void)sp0;
        return 1;
    }
    case 0x100a7baeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x90u;
        (void)sp0;
        return 1;
    }
    case 0x100a7bb8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x90u;
        (void)sp0;
        return 1;
    }
    case 0x100a7bcau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebx = self + 0xd4u;
        (void)sp0;
        return 1;
    }
    case 0x100a7bdcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebx = self + 0xd4u;
        (void)sp0;
        return 1;
    }
    case 0x100a7bf3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebx = self + 0xd4u;
        (void)sp0;
        return 1;
    }
    case 0x100a7c08u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x98u;
        g->ebx = self + 0xd4u;
        (void)sp0;
        return 1;
    }
    case 0x100a7c14u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x98u;
        g->ebx = self + 0xd4u;
        (void)sp0;
        return 1;
    }
    case 0x100a7c29u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_74_f;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_74_f = rdf32(sp0 - 0x74u);
        g->esp = sp0 - 0x98u;
        g->ebx = self + 0xd4u;
        (void)sp0;
        return 1;
    }
    case 0x100a7c3cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_74_f;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_74_f = rdf32(sp0 - 0x74u);
        g->esp = sp0 - 0x98u;
        g->ebx = self + 0xd4u;
        (void)sp0;
        return 1;
    }
    case 0x100a7c53u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_74_f;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_74_f = rdf32(sp0 - 0x74u);
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x100a7c58u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x100a7c5fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x100a7c84u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_78_f;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_78_f = rdf32(sp0 - 0x78u);
        g->esp = sp0 - 0x98u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100a7c94u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_78_f;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_78_f = rdf32(sp0 - 0x78u);
        g->esp = sp0 - 0x98u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100a7c9du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100a7ca6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100a7cb4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100a7cc3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = arg1;
        wr32(sp0 - 0xa0u, sp0 - 0x4cu);
        (void)sp0;
        return 1;
    }
    case 0x100a7cd2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa0u;
        g->ebp = arg1;
        wr32(sp0 - 0xa0u, sp0 - 0x4cu);
        wr32(sp0 - 0x9cu, sp0 - 0x4cu);
        (void)sp0;
        return 1;
    }
    case 0x100a7ce1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa8u;
        g->ebp = arg1;
        wr32(sp0 - 0xa8u, sp0 - 0x5cu);
        wr32(sp0 - 0xa0u, sp0 - 0x4cu);
        wr32(sp0 - 0x9cu, sp0 - 0x4cu);
        (void)sp0;
        return 1;
    }
    case 0x100a7cf0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xb0u;
        g->ebp = arg1;
        wr32(sp0 - 0xb0u, sp0 - 0x4cu);
        wr32(sp0 - 0xacu, sp0 - 0x5cu);
        wr32(sp0 - 0xa8u, sp0 - 0x5cu);
        wr32(sp0 - 0xa0u, sp0 - 0x4cu);
        wr32(sp0 - 0x9cu, sp0 - 0x4cu);
        (void)sp0;
        return 1;
    }
    case 0x100a7d00u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = arg1;
        wr32(sp0 - 0xb0u, sp0 - 0x4cu);
        wr32(sp0 - 0xacu, sp0 - 0x5cu);
        wr32(sp0 - 0xa8u, sp0 - 0x5cu);
        wr32(sp0 - 0xa0u, sp0 - 0x4cu);
        wr32(sp0 - 0x9cu, sp0 - 0x4cu);
        (void)sp0;
        return 1;
    }
    case 0x100a7d09u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = arg1;
        wr32(sp0 - 0xb0u, sp0 - 0x4cu);
        wr32(sp0 - 0xacu, sp0 - 0x5cu);
        wr32(sp0 - 0xa8u, sp0 - 0x5cu);
        wr32(sp0 - 0xa0u, sp0 - 0x4cu);
        (void)sp0;
        return 1;
    }
    case 0x100a7d12u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_78_f;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_78_f = rdf32(sp0 - 0x78u);
        g->esp = sp0 - 0x98u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100a7d21u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xa0u;
        g->ebp = arg1;
        wr32(sp0 - 0xa0u, COW_IMG(0x10487f64u));
        (void)sp0;
        return 1;
    }
    case 0x100a7d36u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa8u;
        g->ebp = arg1;
        wr32(sp0 - 0xa8u, sp0 - 0x6cu);
        wr32(sp0 - 0xa4u, sp0 - 0x88u);
        (void)sp0;
        return 1;
    }
    case 0x100a7d51u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        g->ebp = arg1;
        wr32(sp0 - 0xa8u, sp0 - 0x6cu);
        wr32(sp0 - 0xa0u, sp0 - 0x6cu);
        (void)sp0;
        return 1;
    }
    case 0x100a7d79u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x98u;
        g->ebp = arg1;
        wr32(sp0 - 0xa8u, sp0 - 0x6cu);
        wr32(sp0 - 0xa0u, sp0 - 0x6cu);
        (void)sp0;
        return 1;
    }
    case 0x100a7d86u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa0u;
        g->ebp = arg1;
        wr32(sp0 - 0xa8u, sp0 - 0x6cu);
        (void)sp0;
        return 1;
    }
    case 0x100a7d8eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x98u;
        g->ebp = arg1;
        wr32(sp0 - 0xa8u, sp0 - 0x6cu);
        wr32(sp0 - 0xa0u, sp0 - 0x6cu);
        (void)sp0;
        return 1;
    }
    case 0x100a7da1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = arg1;
        wr32(sp0 - 0xa8u, sp0 - 0x6cu);
        wr32(sp0 - 0xa0u, sp0 - 0x6cu);
        (void)sp0;
        return 1;
    }
    case 0x100a7dbau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa4u;
        g->ebp = arg1;
        wr32(sp0 - 0xa8u, sp0 - 0x6cu);
        wr32(sp0 - 0xa0u, sp0 - 0x6cu);
        (void)sp0;
        return 1;
    }
    case 0x100a7dc2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = arg1;
        wr32(sp0 - 0xa8u, sp0 - 0x6cu);
        wr32(sp0 - 0xa0u, sp0 - 0x6cu);
        (void)sp0;
        return 1;
    }
    case 0x100a7dcdu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa0u;
        g->ebp = arg1;
        wr32(sp0 - 0xa8u, sp0 - 0x6cu);
        (void)sp0;
        return 1;
    }
    case 0x100a7dd5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_74_f;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_74_f = rdf32(sp0 - 0x74u);
        g->esp = sp0 - 0x98u;
        g->ebx = self + 0xd4u;
        (void)sp0;
        return 1;
    }
    case 0x100a7df6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_74_f;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_74_f = rdf32(sp0 - 0x74u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x98u;
        g->ebx = self + 0xd4u;
        (void)sp0;
        return 1;
    }
    case 0x100a7dfeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_74_f;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_74_f = rdf32(sp0 - 0x74u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x98u;
        g->ebx = self + 0xd4u;
        (void)sp0;
        return 1;
    }
    case 0x100a7e1bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebx = self + 0xd4u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100a7e24u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebx = self + 0xd4u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100a7e32u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebx = self + 0xd4u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100a7e40u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebx = self + 0xd4u;
        g->ebp = arg1;
        wr32(sp0 - 0x9cu, sp0 - 0x88u);
        (void)sp0;
        return 1;
    }
    case 0x100a7e4fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa0u;
        g->ebx = self + 0xd4u;
        g->ebp = arg1;
        wr32(sp0 - 0xa0u, sp0 - 0x6cu);
        wr32(sp0 - 0x9cu, sp0 - 0x88u);
        (void)sp0;
        return 1;
    }
    case 0x100a7e71u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebx = self + 0xd4u;
        g->ebp = arg1;
        wr32(sp0 - 0xa0u, sp0 - 0x6cu);
        wr32(sp0 - 0x9cu, sp0 - 0x88u);
        (void)sp0;
        return 1;
    }
    case 0x100a7e83u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebx = self + 0xd4u;
        g->ebp = arg1;
        wr32(sp0 - 0xa0u, sp0 - 0x6cu);
        wr32(sp0 - 0x9cu, sp0 - 0x88u);
        (void)sp0;
        return 1;
    }
    case 0x100a7eb0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebx = self + 0xd4u;
        g->ebp = arg1;
        wr32(sp0 - 0xa0u, sp0 - 0x6cu);
        wr32(sp0 - 0x9cu, sp0 - 0x88u);
        (void)sp0;
        return 1;
    }
    case 0x100a7ebau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebx = self + 0xd4u;
        g->ebp = arg1;
        wr32(sp0 - 0xa0u, sp0 - 0x6cu);
        wr32(sp0 - 0x9cu, sp0 - 0x88u);
        (void)sp0;
        return 1;
    }
    case 0x100a7ec5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xa0u;
        g->ebx = self + 0xd4u;
        g->ebp = arg1;
        wr32(sp0 - 0xa0u, sp0 - 0x88u);
        (void)sp0;
        return 1;
    }
    case 0x100a7ed1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0xacu;
        g->ebp = arg1;
        wr32(sp0 - 0xa8u, sp0 - 0x88u);
        wr32(sp0 - 0xa0u, sp0 - 0x88u);
        (void)sp0;
        return 1;
    }
    case 0x100a7eddu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100a7eedu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100a7ef6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100a7f01u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100a7f06u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100a7f0bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100a7f0eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100a7f10u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100a7f17u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100a7f21u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100a7f33u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100a7f58u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100a7f60u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100a7f64u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100a7f6bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100a7f73u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100a7f77u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100a7f85u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100a7f90u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100a7f95u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100a7fa3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100a7fa9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        double x1;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x98u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100a7fd9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x100a7fe6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x90u;
        (void)sp0;
        return 1;
    }
    case 0x100a7ff2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x90u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100a7b80(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100a7b80(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
