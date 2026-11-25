/* f_0x102a7880 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102a7880(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_2c;
    uint32_t loc_34;
    uint32_t loc_8;
    uint32_t loc_c;
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
    cow_frame(g, sp0, 80u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102a789au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_102a789a;
    case 0x102a78a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a78a9;
    case 0x102a78b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a78b8;
    case 0x102a78e1u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a78e1;
    case 0x102a78eau: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102a78ea;
    case 0x102a78f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a78f1;
    case 0x102a78f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a78f5;
    case 0x102a78fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a78fa;
    case 0x102a7909u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a7909;
    case 0x102a7919u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a7919;
    case 0x102a792du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a792d;
    case 0x102a793eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a793e;
    case 0x102a7952u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a7952;
    case 0x102a795cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a795c;
    case 0x102a795fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a795f;
    case 0x102a7981u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a7981;
    case 0x102a7990u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a7990;
    case 0x102a79a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a79a2;
    case 0x102a79b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a79b4;
    case 0x102a79c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a79c6;
    case 0x102a79d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a79d8;
    case 0x102a79eau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a79ea;
    case 0x102a79fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a79fc;
    case 0x102a7a0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a7a0e;
    case 0x102a7a20u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a7a20;
    case 0x102a7a32u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a7a32;
    case 0x102a7a44u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a7a44;
    case 0x102a7a56u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a7a56;
    case 0x102a7a65u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a7a65;
    case 0x102a7a8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_102a7a8b;
    case 0x102a7a90u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_102a7a90;
    case 0x102a7a99u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_102a7a99;
    case 0x102a7aa1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_102a7aa1;
    case 0x102a7aa8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_102a7aa8;
    case 0x102a7ab8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a7ab8;
    case 0x102a7abeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a7abe;
    case 0x102a7acfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_102a7acf;
    case 0x102a7adfu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_102a7adf;
    case 0x102a7ae3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102a7ae3;
    case 0x102a7af6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a7af6;
    case 0x102a7b20u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a7b20;
    case 0x102a7b22u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_102a7b22;
    case 0x102a7b26u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102a7b26;
    case 0x102a7b3au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a7b3a;
    case 0x102a7b5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a7b5e;
    case 0x102a7b62u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102a7b62;
    case 0x102a7b74u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a7b74;
    case 0x102a7b89u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102a7b89;
    case 0x102a7b8du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a7b8d;
    case 0x102a7ba1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a7ba1;
    case 0x102a7bb7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a7bb7;
    case 0x102a7bcdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a7bcd;
    case 0x102a7be3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a7be3;
    case 0x102a7bf5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102a7bf5;
    case 0x102a7bf9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a7bf9;
    case 0x102a7c0bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a7c0b;
    case 0x102a7c1du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a7c1d;
    case 0x102a7c30u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a7c30;
    case 0x102a7c45u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a7c45;
    case 0x102a7c56u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); goto E_102a7c56;
    case 0x102a7c5bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a7c5b;
    case 0x102a7c7du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_102a7c7d;
    case 0x102a7ca0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a7ca0;
    case 0x102a7cb3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a7cb3;
    case 0x102a7cceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a7cce;
    case 0x102a7ceeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_102a7cee;
    case 0x102a7d05u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_102a7d05;
    case 0x102a7d19u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a7d19;
    case 0x102a7d29u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a7d29;
    case 0x102a7d3au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a7d3a;
    case 0x102a7d55u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a7d55;
    case 0x102a7d75u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_102a7d75;
    case 0x102a7d88u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_102a7d88;
    case 0x102a7d9du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102a7d9d;
    case 0x102a7dadu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_8 = rd32(sp0 - 8u); goto E_102a7dad;
    case 0x102a7db6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_8 = rd32(sp0 - 8u); goto E_102a7db6;
    default: break;
    }
#endif

    COW_AT(102a7880)
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    wr32(sp0 - 0x20u, sp0 - 0xcu);
    wr32(sp0 - 0x24u, 3u);
    wr32(sp0 - 0x28u, 2u);
    t1 = rd32(sp0 + 4u);
    wr32(sp0 - 0x2cu, t1);
    g->eax = sp0 - 0xcu;
    g->esp = sp0 - 0x10u;
    t2 = cow_call_regs(g, COW_IMG(0x102a7750u), g->eax, g->ecx, in_edx, 1, 7, t1, 2u, 3u, sp0 - 0xcu, in_edi, in_esi, in_ebp);
    t3 = g->edx;
    eax = t2;
    edx = t3;
    esi = t1;
    loc_2c = rd32(sp0 - 0x2cu);
    COW_AT(102a789a)
    wr32(sp0 - 0x30u, sp0 + 4u);
    wr32(sp0 - 0x34u, 3u);
    wr32(sp0 - 0x38u, 2u);
    wr32(sp0 - 0x3cu, esi);
    g->eax = eax;
    g->ecx = sp0 + 4u;
    g->esp = sp0 - 0x20u;
    t4 = cow_call_regs(g, COW_IMG(0x102a7750u), g->eax, g->ecx, edx, 1, 7, esi, 2u, 3u, sp0 + 4u, loc_2c, 2u, 3u);
    t5 = g->ecx;
    eax = t4;
    ecx = t5;
    COW_AT(102a78a9)
    wr32(sp0 - 0x40u, sp0 - 8u);
    wr32(sp0 - 0x44u, 4u);
    wr32(sp0 - 0x48u, 4u);
    wr32(sp0 - 0x4cu, esi);
    g->esp = sp0 - 0x30u;
    cow_call_regs(g, COW_IMG(0x102a7750u), g->eax, g->ecx, sp0 - 8u, 1, 7, esi, 4u, 4u, sp0 - 8u, rd32(sp0 - 0x3cu), 2u, 3u);
    COW_AT(102a78b8)
    if (rd32(COW_IMG(0x103be2dcu) + (uint32_t)(int16_t)rd16(sp0 + 4u) * 0xcu) * rd32(sp0 - 8u) > 4u)
    {
        ecx = (uint32_t)(int16_t)rd16(sp0 + 4u);
        ebp = (in_ebp & 0xffff0000u) | rd16(sp0 + 4u);
        edi = rd32(sp0 - 8u);
        goto L_102a7a56;
    }
    ecx = (uint32_t)(int16_t)rd16(sp0 + 4u);
    ebx = (uint32_t)(int16_t)rd16(sp0 + 4u) * 0xcu;
    edi = rd32(sp0 - 8u);
    COW_AT(102a78e1)
    if (edi == 0u)
    {
        eax = 0u;
        ebp = 4u;
        goto L_102a795f;
    }
    COW_AT(102a78ea)
    wr32(sp0 + 4u, ecx - 1u);
    eax = 0u;
    ecx = ecx - 1u;
    ebp = 4u;
L_102a78f5: ;
    COW_AT(102a78f5)
    if (ecx > 8u) goto L_102a795c;
    COW_AT(102a78fa)
    t6 = rd32(COW_IMG(0x102a7dc0u) + rd8(COW_IMG(0x102a7dd0u) + ecx) * 4u);
    switch (t6 - RD)
    {
    case 0x102a7909u: goto L_102a7909;
    case 0x102a7919u: edx = rd8(COW_IMG(0x102a7dd0u) + ecx); goto L_102a7919;
    case 0x102a793eu: goto L_102a793e;
    case 0x102a795cu: goto L_102a795c;
    default: rt_fatal(g, COW_IMG(0x102a7902u), "switch");
    }
    return;
L_102a78f1: ;
    COW_AT(102a78f1)
    ecx = rd32(sp0 + 4u);
    goto L_102a78f5;
L_102a7909: ;
    COW_AT(102a7909)
    t9 = rd32(COW_IMG(0x109a286cu)) + 1u;
    wr32(COW_IMG(0x109a286cu), t9);
    ebp = ebp - 1u;
L_102a795c: ;
    COW_AT(102a795c)
    if (edi != 1u)
    {
        edi = edi - 1u;
        goto L_102a78f1;
    }
L_102a795f: ;
    COW_AT(102a795f)
    t10 = ebp + rd32(COW_IMG(0x109a286cu));
    t11 = rd16(sp0 - 0xcu);
    wr32(COW_IMG(0x109a286cu), t10);
    if ((uint32_t)(int16_t)t11 - 0x100u > 0x3du) goto L_102a7db6;
    ecx = (uint32_t)(int16_t)t11 - 0x100u;
    COW_AT(102a7981)
    t12 = rd32(COW_IMG(0x102a7ddcu) + rd8(COW_IMG(0x102a7e0cu) + ecx) * 4u);
    switch (t12 - RD)
    {
    case 0x102a7990u: goto L_102a7990;
    case 0x102a79a2u: goto L_102a79a2;
    case 0x102a79b4u: goto L_102a79b4;
    case 0x102a79c6u: goto L_102a79c6;
    case 0x102a79d8u: goto L_102a79d8;
    case 0x102a79eau: goto L_102a79ea;
    case 0x102a79fcu: goto L_102a79fc;
    case 0x102a7a0eu: goto L_102a7a0e;
    case 0x102a7a20u: goto L_102a7a20;
    case 0x102a7a32u: goto L_102a7a32;
    case 0x102a7a44u: goto L_102a7a44;
    case 0x102a7db6u: goto L_102a7db6;
    default: rt_fatal(g, COW_IMG(0x102a7989u), "switch");
    }
    return;
L_102a7919: ;
    COW_AT(102a7919)
    wr32(sp0 - 0x20u, sp0 - 8u);
    t8 = rd32(COW_IMG(0x103be2d8u) + ebx);
    wr32(sp0 - 0x24u, t8);
    wr32(sp0 - 0x28u, 2u);
    wr32(sp0 - 0x2cu, esi);
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x102a7750u), g->eax, g->ecx, edx, 1, 7, esi, 2u, t8, sp0 - 8u, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    COW_AT(102a792d)
    eax = (uint16_t)rd32(sp0 - 8u);
    ebp = ebp - 2u;
    goto L_102a795c;
L_102a793e: ;
    COW_AT(102a793e)
    wr32(sp0 - 0x20u, sp0 - 4u);
    t7 = rd32(COW_IMG(0x103be2d8u) + ebx);
    wr32(sp0 - 0x24u, t7);
    wr32(sp0 - 0x28u, 4u);
    wr32(sp0 - 0x2cu, esi);
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x102a7750u), g->eax, g->ecx, sp0 - 4u, 1, 7, esi, 4u, t7, sp0 - 4u, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    COW_AT(102a7952)
    eax = rd32(sp0 - 4u);
    ebp = ebp - 4u;
    goto L_102a795c;
L_102a7990: ;
    COW_AT(102a7990)
    t43 = rd32(sp0 - 0x14u);
    t44 = rd32(sp0 - 0x18u);
    t45 = rd32(sp0 - 0x1cu);
    wr32(rd32(sp0 + 8u) + 0x624u, eax);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = t44;
    g->edi = t45;
    g->ebp = t43;
    return;
L_102a79a2: ;
    COW_AT(102a79a2)
    t40 = rd32(sp0 - 0x14u);
    t41 = rd32(sp0 - 0x18u);
    t42 = rd32(sp0 - 0x1cu);
    wr32(rd32(sp0 + 8u) + 0x628u, eax);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = t41;
    g->edi = t42;
    g->ebp = t40;
    return;
L_102a79b4: ;
    COW_AT(102a79b4)
    t37 = rd32(sp0 - 0x14u);
    t38 = rd32(sp0 - 0x18u);
    t39 = rd32(sp0 - 0x1cu);
    wr32(rd32(sp0 + 8u) + 0x614u, eax);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = t38;
    g->edi = t39;
    g->ebp = t37;
    return;
L_102a79c6: ;
    COW_AT(102a79c6)
    t34 = rd32(sp0 - 0x14u);
    t35 = rd32(sp0 - 0x18u);
    t36 = rd32(sp0 - 0x1cu);
    wr32(rd32(sp0 + 8u) + 0x60cu, eax);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = t35;
    g->edi = t36;
    g->ebp = t34;
    return;
L_102a79d8: ;
    COW_AT(102a79d8)
    t31 = rd32(sp0 - 0x14u);
    t32 = rd32(sp0 - 0x18u);
    t33 = rd32(sp0 - 0x1cu);
    wr32(rd32(sp0 + 8u) + 0x610u, eax);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = t32;
    g->edi = t33;
    g->ebp = t31;
    return;
L_102a79ea: ;
    COW_AT(102a79ea)
    t28 = rd32(sp0 - 0x14u);
    t29 = rd32(sp0 - 0x18u);
    t30 = rd32(sp0 - 0x1cu);
    wr32(rd32(sp0 + 8u) + 0x61cu, eax);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = t29;
    g->edi = t30;
    g->ebp = t28;
    return;
L_102a79fc: ;
    COW_AT(102a79fc)
    t25 = rd32(sp0 - 0x14u);
    t26 = rd32(sp0 - 0x18u);
    t27 = rd32(sp0 - 0x1cu);
    wr32(rd32(sp0 + 8u) + 0x620u, eax);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = t26;
    g->edi = t27;
    g->ebp = t25;
    return;
L_102a7a0e: ;
    COW_AT(102a7a0e)
    t22 = rd32(sp0 - 0x14u);
    t23 = rd32(sp0 - 0x18u);
    t24 = rd32(sp0 - 0x1cu);
    wr32(rd32(sp0 + 8u) + 0x618u, eax);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = t23;
    g->edi = t24;
    g->ebp = t22;
    return;
L_102a7a20: ;
    COW_AT(102a7a20)
    t19 = rd32(sp0 - 0x14u);
    t20 = rd32(sp0 - 0x18u);
    t21 = rd32(sp0 - 0x1cu);
    wr32(rd32(sp0 + 8u) + 0x630u, eax);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = t20;
    g->edi = t21;
    g->ebp = t19;
    return;
L_102a7a32: ;
    COW_AT(102a7a32)
    t16 = rd32(sp0 - 0x14u);
    t17 = rd32(sp0 - 0x18u);
    t18 = rd32(sp0 - 0x1cu);
    wr32(rd32(sp0 + 8u) + 0x634u, eax);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = t17;
    g->edi = t18;
    g->ebp = t16;
    return;
L_102a7a44: ;
    COW_AT(102a7a44)
    t13 = rd32(sp0 - 0x14u);
    t14 = rd32(sp0 - 0x18u);
    t15 = rd32(sp0 - 0x1cu);
    wr32(rd32(sp0 + 8u) + 0x638u, eax);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = t14;
    g->edi = t15;
    g->ebp = t13;
    return;
L_102a7a56: ;
    COW_AT(102a7a56)
    wr32(sp0 - 0x20u, sp0 - 4u);
    wr32(sp0 - 0x24u, 4u);
    wr32(sp0 - 0x28u, 4u);
    wr32(sp0 - 0x2cu, esi);
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x102a7750u), g->eax, g->ecx, sp0 - 4u, 1, 7, esi, 4u, 4u, sp0 - 4u, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t46 = g->edx;
    edx = t46;
    COW_AT(102a7a65)
    wr32(sp0 - 8u, rd32(COW_IMG(0x109a286cu)));
    t47 = rd32(sp0 - 4u);
    t48 = rd16(sp0 - 0xcu);
    t49 = rd32(COW_IMG(0x109a286cu));
    wr32(COW_IMG(0x109a286cu), t47);
    if ((uint32_t)(int16_t)t48 == 0x111u)
    {
        eax = (uint32_t)(int16_t)t48 - 0x111u;
        ecx = t47;
        loc_8 = t49;
        goto L_102a7c7d;
    }
    eax = (uint32_t)(int16_t)t48 - 0x111u;
    ecx = t47;
    loc_8 = t49;
    COW_AT(102a7a8b)
    if (eax == 6u)
    {
        eax = eax - 6u;
        goto L_102a7acf;
    }
    eax = eax - 6u;
    COW_AT(102a7a90)
    if (eax != 0x29u) goto L_102a7dad;
    COW_AT(102a7a99)
    if (edi == 0u) goto L_102a7dad;
    COW_AT(102a7aa1)
    edx = rd32(sp0 + 8u);
    ebx = rd32(sp0 + 8u) + 4u;
L_102a7aa8: ;
    COW_AT(102a7aa8)
    wr32(sp0 - 0x20u, ebx);
    wr32(sp0 - 0x24u, 3u);
    wr32(sp0 - 0x28u, 2u);
    wr32(sp0 - 0x2cu, esi);
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x102a7750u), g->eax, g->ecx, edx, 1, 7, esi, 2u, 3u, ebx, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t50 = g->ecx;
    t51 = g->edx;
    ecx = t50;
    edx = t51;
    ebx = ebx + 2u;
    COW_AT(102a7ab8)
    if (edi != 1u)
    {
        edi = edi - 1u;
        loc_8 = rd32(sp0 - 8u);
        goto L_102a7aa8;
    }
    COW_AT(102a7abe)
    t52 = rd32(sp0 - 8u);
    t53 = rd32(sp0 - 0x14u);
    t54 = rd32(sp0 - 0x18u);
    t55 = rd32(sp0 - 0x1cu);
    wr32(COW_IMG(0x109a286cu), t52);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = t54;
    g->edi = t55;
    g->ebp = t53;
    return;
L_102a7acf: ;
    COW_AT(102a7acf)
    t56 = rd16(sp0 + 4u);
    wr32(sp0 - 0xcu, 0u);
    if ((uint16_t)t56 != 3u) goto L_102a7b22;
    COW_AT(102a7adf)
    if (edi == 0u)
    {
        ebp = 0u;
        loc_c = 0u;
        goto L_102a7b62;
    }
    ebx = 0u;
    ebp = 0u;
L_102a7ae3: ;
    COW_AT(102a7ae3)
    t57 = ebx * 2u + rd32(COW_IMG(0x109a2884u));
    wr32(sp0 - 0x20u, t57);
    wr32(sp0 - 0x24u, 3u);
    wr32(sp0 - 0x28u, 2u);
    wr32(sp0 - 0x2cu, esi);
    g->eax = rd32(COW_IMG(0x109a2884u));
    t58 = rd32(COW_IMG(0x109a2884u));
    g->esp = sp0 - 0x10u;
    t59 = cow_call_regs(g, COW_IMG(0x102a7750u), g->eax, g->ecx, edx, 1, 7, esi, 2u, 3u, t57, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    eax = t59;
    COW_AT(102a7af6)
    t60 = (eax & 0xffff0000u) | rd16(ebx * 2u + rd32(COW_IMG(0x109a2884u)));
    t61 = rd32(rd32(sp0 + 8u) + 0x608u);
    t62 = rd32(sp0 + 8u);
    wr16(ebx * 2u + t61, (uint16_t)t60);
    if (ebx + 1u < edi)
    {
        edx = t62;
        ebx = ebx + 1u;
        ebp = ebp + (uint16_t)t60;
        loc_8 = rd32(sp0 - 8u);
        goto L_102a7ae3;
    }
    eax = t60;
    ecx = t61;
    edx = t62;
    ebp = ebp + (uint16_t)t60;
    COW_AT(102a7b20)
L_102a7b5e: ;
    COW_AT(102a7b5e)
    wr32(sp0 - 0xcu, ebp);
    loc_8 = rd32(sp0 - 8u);
    loc_c = ebp;
L_102a7b62: ;
    COW_AT(102a7b62)
    wr32(sp0 - 0x20u, 0x2a2u);
    wr32(sp0 - 0x24u, COW_IMG(0x103be434u));
    wr32(sp0 - 0x28u, 1u);
    wr32(sp0 - 0x2cu, ebp);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t69 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, ebp, 1u, COW_IMG(0x103be434u), 0x2a2u, rd32(sp0 - 0x1cu));
    t70 = g->edx;
    eax = t69;
    edx = t70;
    COW_AT(102a7b74)
    t71 = rd16(sp0 + 4u);
    t72 = rd32(sp0 + 8u);
    wr32(t72, eax);
    if ((uint16_t)t71 != 3u)
    {
        ecx = t72;
        ebx = eax;
    COW_AT(102a7bf5)
        if (edi == 0u) goto L_102a7c30;
        ebp = 0u;
L_102a7bf9: ;
    COW_AT(102a7bf9)
        wr32(sp0 - 0x20u, 0u);
        t80 = rd32(ebp * 4u + rd32(COW_IMG(0x109a2874u)));
        wr32(sp0 - 0x24u, t80);
        wr32(sp0 - 0x28u, esi);
        g->esp = sp0 - 0x1cu;
        cow_call_regs(g, COW_IMG(0x10313d30u), g->eax, g->ecx, t80, 1, 3, esi, t80, 0u);
        t81 = g->edx;
        edx = t81;
    COW_AT(102a7c0b)
        wr32(sp0 - 0x2cu, esi);
        wr32(sp0 - 0x30u, 1u);
        t82 = rd32(ebp * 4u + rd32(COW_IMG(0x109aa8a4u)));
        wr32(sp0 - 0x34u, t82);
        wr32(sp0 - 0x38u, ebx);
        g->ecx = t82;
        g->esp = sp0 - 0x20u;
        cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, edx, 1, 6, ebx, t82, 1u, esi, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
        t83 = g->ecx;
        ecx = t83;
    COW_AT(102a7c1d)
        if (ebp + 1u < edi)
        {
            eax = rd32(ebp * 4u + rd32(COW_IMG(0x109aa8a4u)));
            ebx = ebx + rd32(ebp * 4u + rd32(COW_IMG(0x109aa8a4u)));
            ebp = ebp + 1u;
            goto L_102a7bf9;
        }
        edx = rd32(COW_IMG(0x109aa8a4u));
L_102a7c30: ;
    COW_AT(102a7c30)
        wr32(sp0 - 0x20u, 0x2b2u);
        wr32(sp0 - 0x24u, COW_IMG(0x103be434u));
        wr32(sp0 - 0x28u, rd32(COW_IMG(0x109a2874u)));
        g->eax = rd32(COW_IMG(0x109a2874u));
        g->edx = edx;
        t84 = rd32(COW_IMG(0x109a2874u));
        g->esp = sp0 - 0x1cu;
        t85 = cow_cdecl(g, COW_IMG(0x10276110u), 3, t84, COW_IMG(0x103be434u), 0x2b2u);
        t86 = g->edx;
        eax = t85;
        edx = t86;
    COW_AT(102a7c45)
        wr32(sp0 - 0x2cu, 0x2b3u);
        wr32(sp0 - 0x30u, COW_IMG(0x103be434u));
        wr32(sp0 - 0x34u, rd32(COW_IMG(0x109aa8a4u)));
        ecx = rd32(COW_IMG(0x109aa8a4u));
        loc_2c = 0x2b3u;
        loc_34 = rd32(COW_IMG(0x109aa8a4u));
    }
    else
    {
        ecx = t72;
        ebx = eax;
    COW_AT(102a7b89)
        if (edi == 0u) goto L_102a7bcd;
        ebp = 0u;
L_102a7b8d: ;
    COW_AT(102a7b8d)
        wr32(sp0 - 0x20u, 0u);
        t73 = rd16(ebp * 2u + rd32(COW_IMG(0x109aa898u)));
        wr32(sp0 - 0x24u, t73);
        wr32(sp0 - 0x28u, esi);
        g->eax = rd32(COW_IMG(0x109aa898u));
        t74 = rd32(COW_IMG(0x109aa898u));
        g->esp = sp0 - 0x1cu;
        t75 = cow_call_regs(g, COW_IMG(0x10313d30u), g->eax, g->ecx, t73, 1, 3, esi, t73, 0u);
        eax = t75;
    COW_AT(102a7ba1)
        wr32(sp0 - 0x2cu, esi);
        wr32(sp0 - 0x30u, 1u);
        t76 = rd16(ebp * 2u + rd32(COW_IMG(0x109a2884u)));
        wr32(sp0 - 0x34u, t76);
        wr32(sp0 - 0x38u, ebx);
        g->esp = sp0 - 0x20u;
        cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, rd32(COW_IMG(0x109a2884u)), 1, 6, ebx, t76, 1u, esi, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
    COW_AT(102a7bb7)
        if (ebp + 1u < edi)
        {
            ecx = rd32(COW_IMG(0x109a2884u));
            ebx = ebx + rd16(ebp * 2u + rd32(COW_IMG(0x109a2884u)));
            ebp = ebp + 1u;
            goto L_102a7b8d;
        }
        eax = rd16(ebp * 2u + rd32(COW_IMG(0x109a2884u)));
        ecx = rd32(COW_IMG(0x109a2884u));
L_102a7bcd: ;
    COW_AT(102a7bcd)
        wr32(sp0 - 0x20u, 0x2aau);
        wr32(sp0 - 0x24u, COW_IMG(0x103be434u));
        wr32(sp0 - 0x28u, rd32(COW_IMG(0x109aa898u)));
        g->ecx = ecx;
        g->edx = rd32(COW_IMG(0x109aa898u));
        t77 = rd32(COW_IMG(0x109aa898u));
        g->esp = sp0 - 0x1cu;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, t77, COW_IMG(0x103be434u), 0x2aau);
        t78 = g->ecx;
        t79 = g->edx;
        ecx = t78;
        edx = t79;
    COW_AT(102a7be3)
        wr32(sp0 - 0x2cu, 0x2abu);
        wr32(sp0 - 0x30u, COW_IMG(0x103be434u));
        wr32(sp0 - 0x34u, rd32(COW_IMG(0x109a2884u)));
        eax = rd32(COW_IMG(0x109a2884u));
        loc_2c = 0x2abu;
        loc_34 = rd32(COW_IMG(0x109a2884u));
    }
    COW_AT(102a7c56)
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, loc_34, COW_IMG(0x103be434u), loc_2c);
    COW_AT(102a7c5b)
    t87 = rd32(sp0 - 0xcu);
    wr32(rd32(sp0 + 8u) + 0x630u, t87);
    t88 = rd32(sp0 - 8u);
    t89 = rd32(sp0 - 0x14u);
    t90 = rd32(sp0 - 0x18u);
    t91 = rd32(sp0 - 0x1cu);
    wr32(COW_IMG(0x109a286cu), t88);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = t90;
    g->edi = t91;
    g->ebp = t89;
    return;
L_102a7b22: ;
    COW_AT(102a7b22)
    if (edi == 0u)
    {
        ebp = 0u;
        loc_c = 0u;
        goto L_102a7b62;
    }
    ebx = 0u;
    ebp = 0u;
L_102a7b26: ;
    COW_AT(102a7b26)
    t63 = ebx * 4u + rd32(COW_IMG(0x109aa8a4u));
    wr32(sp0 - 0x20u, t63);
    wr32(sp0 - 0x24u, 4u);
    wr32(sp0 - 0x28u, 4u);
    wr32(sp0 - 0x2cu, esi);
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x102a7750u), g->eax, g->ecx, rd32(COW_IMG(0x109aa8a4u)), 1, 7, esi, 4u, 4u, t63, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    COW_AT(102a7b3a)
    t64 = rd32(COW_IMG(0x109aa8a4u));
    t65 = rd16(ebx * 4u + rd32(COW_IMG(0x109aa8a4u)));
    t66 = rd32(sp0 + 8u);
    t67 = rd32(rd32(sp0 + 8u) + 0x608u);
    t68 = rd32(ebx * 4u + rd32(COW_IMG(0x109aa8a4u)));
    wr16(ebx * 2u + t67, (uint16_t)t65);
    if (ebx + 1u < edi)
    {
        ecx = t66;
        ebx = ebx + 1u;
        ebp = ebp + t68;
        loc_8 = rd32(sp0 - 8u);
        goto L_102a7b26;
    }
    eax = (t64 & 0xffff0000u) | t65;
    ecx = t66;
    edx = t67;
    ebp = ebp + t68;
    goto L_102a7b5e;
L_102a7c7d: ;
    COW_AT(102a7c7d)
    wr32(sp0 - 0x20u, 0x287u);
    wr32(sp0 - 0x24u, COW_IMG(0x103be434u));
    wr32(sp0 - 0x28u, 2u);
    t92 = rd32(sp0 + 8u);
    wr16(t92 + 0x604u, (uint16_t)edi);
    wr32(sp0 - 0x2cu, (uint16_t)edi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t93 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, (uint16_t)edi, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t94 = g->ecx;
    t95 = g->edx;
    eax = t93;
    ecx = t94;
    edx = t95;
    ebx = t92;
    COW_AT(102a7ca0)
    wr32(ebx + 0x608u, eax);
    if ((uint16_t)ebp != 3u) goto L_102a7d3a;
    COW_AT(102a7cb3)
    wr32(sp0 - 0x20u, 0x289u);
    wr32(sp0 - 0x24u, COW_IMG(0x103be434u));
    wr32(sp0 - 0x28u, 2u);
    t96 = rd16(ebx + 0x604u);
    wr32(sp0 - 0x2cu, t96);
    g->eax = eax;
    g->ecx = t96;
    g->esp = sp0 - 0x18u;
    t97 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t96, 2u, COW_IMG(0x103be434u), 0x289u, rd32(sp0 - 0x1cu));
    t98 = g->ecx;
    eax = t97;
    ecx = t98;
    COW_AT(102a7cce)
    wr32(COW_IMG(0x109aa898u), eax);
    wr32(sp0 - 0x30u, 0x28au);
    wr32(sp0 - 0x34u, COW_IMG(0x103be434u));
    wr32(sp0 - 0x38u, 2u);
    t99 = rd16(ebx + 0x604u);
    wr32(sp0 - 0x3cu, t99);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t99;
    g->esp = sp0 - 0x28u;
    t100 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t99, 2u, COW_IMG(0x103be434u), 0x28au, rd32(sp0 - 0x2cu));
    t101 = g->ecx;
    t102 = g->edx;
    eax = t100;
    ecx = t101;
    edx = t102;
    COW_AT(102a7cee)
    wr32(COW_IMG(0x109a2884u), eax);
    t103 = rd16(ebx + 0x604u);
    if ((uint16_t)t103 == 0u)
    {
        loc_8 = rd32(sp0 - 8u);
        goto L_102a7dad;
    }
    edi = 0u;
L_102a7d05: ;
    COW_AT(102a7d05)
    t104 = edi * 2u + rd32(COW_IMG(0x109aa898u));
    wr32(sp0 - 0x20u, t104);
    wr32(sp0 - 0x24u, 3u);
    wr32(sp0 - 0x28u, 2u);
    wr32(sp0 - 0x2cu, esi);
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x102a7750u), g->eax, g->ecx, edx, 1, 7, esi, 2u, 3u, t104, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t105 = g->edx;
    edx = t105;
    edi = edi + 1u;
    COW_AT(102a7d19)
    if (edi < rd16(ebx + 0x604u))
    {
        ecx = rd16(ebx + 0x604u);
        goto L_102a7d05;
    }
    COW_AT(102a7d29)
    t106 = rd32(sp0 - 8u);
    t107 = rd32(sp0 - 0x14u);
    t108 = rd32(sp0 - 0x18u);
    t109 = rd32(sp0 - 0x1cu);
    wr32(COW_IMG(0x109a286cu), t106);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = t108;
    g->edi = t109;
    g->ebp = t107;
    return;
L_102a7d3a: ;
    COW_AT(102a7d3a)
    wr32(sp0 - 0x20u, 0x28du);
    wr32(sp0 - 0x24u, COW_IMG(0x103be434u));
    wr32(sp0 - 0x28u, 4u);
    t110 = rd16(ebx + 0x604u);
    wr32(sp0 - 0x2cu, t110);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t110;
    g->esp = sp0 - 0x18u;
    t111 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t110, 4u, COW_IMG(0x103be434u), 0x28du, rd32(sp0 - 0x1cu));
    t112 = g->ecx;
    t113 = g->edx;
    eax = t111;
    ecx = t112;
    edx = t113;
    COW_AT(102a7d55)
    wr32(COW_IMG(0x109a2874u), eax);
    wr32(sp0 - 0x30u, 0x28eu);
    wr32(sp0 - 0x34u, COW_IMG(0x103be434u));
    wr32(sp0 - 0x38u, 4u);
    t114 = rd16(ebx + 0x604u);
    wr32(sp0 - 0x3cu, t114);
    g->eax = t114;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t115 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t114, 4u, COW_IMG(0x103be434u), 0x28eu, rd32(sp0 - 0x2cu));
    t116 = g->edx;
    eax = t115;
    edx = t116;
    COW_AT(102a7d75)
    wr32(COW_IMG(0x109aa8a4u), eax);
    t117 = rd16(ebx + 0x604u);
    if ((uint16_t)t117 == 0u)
    {
        loc_8 = rd32(sp0 - 8u);
        goto L_102a7dad;
    }
    edi = 0u;
L_102a7d88: ;
    COW_AT(102a7d88)
    t118 = edi * 4u + rd32(COW_IMG(0x109a2874u));
    wr32(sp0 - 0x20u, t118);
    wr32(sp0 - 0x24u, 4u);
    wr32(sp0 - 0x28u, 4u);
    wr32(sp0 - 0x2cu, esi);
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x102a7750u), g->eax, g->ecx, edx, 1, 7, esi, 4u, 4u, t118, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    edi = edi + 1u;
    COW_AT(102a7d9d)
    if (edi < rd16(ebx + 0x604u))
    {
        edx = rd16(ebx + 0x604u);
        goto L_102a7d88;
    }
    loc_8 = rd32(sp0 - 8u);
L_102a7dad: ;
    COW_AT(102a7dad)
    wr32(COW_IMG(0x109a286cu), loc_8);
L_102a7db6: ;
    COW_AT(102a7db6)
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = rd32(sp0 - 0x14u);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102a7880(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102a789au:
    {
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
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x28u, 2u);
        wr32(sp0 - 0x24u, 3u);
        wr32(sp0 - 0x20u, sp0 - 0xcu);
        wr32(sp0 - 0x14u, in_ebp);
        (void)sp0;
        return 1;
    }
    case 0x102a78a9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x38u, 2u);
        wr32(sp0 - 0x34u, 3u);
        wr32(sp0 - 0x30u, sp0 + 4u);
        wr32(sp0 - 0x20u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x102a78b8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x30u, sp0 + 4u);
        wr32(sp0 - 0x20u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x102a78e1u:
    {
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        g->eax = 0u;
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x30u, sp0 + 4u);
        wr32(sp0 - 0x20u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x102a78eau:
    {
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        g->eax = 0u;
        g->ebp = 4u;
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x30u, sp0 + 4u);
        wr32(sp0 - 0x20u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x102a78f1u:
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
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x30u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102a78f5u:
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
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x30u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102a78fau:
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
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x30u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102a7909u:
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
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x30u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102a7919u:
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
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x30u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102a792du:
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
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x30u, sp0 + 4u);
        wr32(sp0 - 0x20u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102a793eu:
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
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x30u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102a7952u:
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
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x30u, sp0 + 4u);
        wr32(sp0 - 0x20u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x102a795cu:
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
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x30u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102a795fu:
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
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x30u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102a7981u:
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
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x30u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102a7990u:
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
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x30u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102a79a2u:
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
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x30u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102a79b4u:
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
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x30u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102a79c6u:
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
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x30u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102a79d8u:
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
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x30u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102a79eau:
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
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x30u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102a79fcu:
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
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x30u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102a7a0eu:
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
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x30u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102a7a20u:
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
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x30u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102a7a32u:
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
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x30u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102a7a44u:
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
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x30u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102a7a56u:
    {
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        g->eax = 0u;
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x30u, sp0 + 4u);
        wr32(sp0 - 0x20u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x102a7a65u:
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
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x30u, sp0 + 4u);
        wr32(sp0 - 0x20u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x102a7a8bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x30u, sp0 + 4u);
        wr32(sp0 - 0x20u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x102a7a90u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x30u, sp0 + 4u);
        wr32(sp0 - 0x20u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x102a7a99u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x30u, sp0 + 4u);
        wr32(sp0 - 0x20u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x102a7aa1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x30u, sp0 + 4u);
        wr32(sp0 - 0x20u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x102a7aa8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x30u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102a7ab8u:
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
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x30u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102a7abeu:
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
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x30u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102a7acfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x30u, sp0 + 4u);
        wr32(sp0 - 0x20u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x102a7adfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = 0u;
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x30u, sp0 + 4u);
        wr32(sp0 - 0x20u, sp0 - 4u);
        wr32(sp0 - 0xcu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102a7ae3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x102a7af6u:
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
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x102a7b20u:
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x102a7b22u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        g->ebp = 0u;
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x30u, sp0 + 4u);
        wr32(sp0 - 0x20u, sp0 - 4u);
        wr32(sp0 - 0xcu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102a7b26u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x102a7b3au:
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
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x102a7b5eu:
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x102a7b62u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x102a7b74u:
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
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x102a7b89u:
    {
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
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102a7b8du:
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x102a7ba1u:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x102a7bb7u:
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
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x102a7bcdu:
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x102a7be3u:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x102a7bf5u:
    {
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
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102a7bf9u:
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x102a7c0bu:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x102a7c1du:
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
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x102a7c30u:
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x102a7c45u:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x102a7c56u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2c;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x30u, COW_IMG(0x103be434u));
        (void)sp0;
        return 1;
    }
    case 0x102a7c5bu:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x102a7c7du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x30u, sp0 + 4u);
        wr32(sp0 - 0x20u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x102a7ca0u:
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
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x102a7cb3u:
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x102a7cceu:
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
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x102a7ceeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x102a7d05u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x102a7d19u:
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
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x102a7d29u:
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x102a7d3au:
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x102a7d55u:
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
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x102a7d75u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x102a7d88u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x102a7d9du:
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
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x102a7dadu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_34;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x102a7db6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_34;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102a7880(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102a7880(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
