/* f_0x102dc58d - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102dc58d(Guest* g)
{
    double d110;
    double d111;
    double d112;
    double d113;
    double d117;
    double d47;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_15c;
    uint32_t loc_160;
    uint32_t loc_164;
    uint32_t loc_18;
    uint32_t loc_20;
    uint32_t loc_4;
    double loc_50_d;
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
    uint32_t t114;
    uint32_t t115;
    uint32_t t116;
    uint32_t t118;
    uint32_t t119;
    uint32_t t12;
    uint32_t t120;
    uint32_t t121;
    uint32_t t122;
    uint32_t t123;
    uint32_t t124;
    uint32_t t125;
    uint32_t t126;
    uint32_t t127;
    uint32_t t128;
    uint32_t t129;
    uint32_t t13;
    uint32_t t130;
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
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 416u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102dc5beu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = g->edi; zf = g->zf; in_esi = rd32(sp0 - 0x160u); self = rd32(sp0 - 0x38u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x160u); goto E_102dc5be;
    case 0x102dc5e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = g->edi; zf = g->zf; loc_8 = rd32(sp0 - 8u); goto E_102dc5e1;
    case 0x102dc5f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = g->edi; zf = g->zf; loc_c = rd32(sp0 - 0xcu); goto E_102dc5f3;
    case 0x102dc606u: eax = g->eax; edx = g->edx; edi = g->edi; zf = g->zf; goto E_102dc606;
    case 0x102dc659u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102dc659;
    case 0x102dc65du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102dc65d;
    case 0x102dc660u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102dc660;
    case 0x102dc663u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102dc663;
    case 0x102dc667u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102dc667;
    case 0x102dc66fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102dc66f;
    case 0x102dc677u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102dc677;
    case 0x102dc67fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102dc67f;
    case 0x102dc687u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102dc687;
    case 0x102dc68du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102dc68d;
    case 0x102dc69du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102dc69d;
    case 0x102dc6adu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102dc6ad;
    case 0x102dc6b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102dc6b0;
    case 0x102dc6b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102dc6b5;
    case 0x102dc6b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; loc_164 = rd32(sp0 - 0x164u); loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); loc_20 = rd32(sp0 - 0x20u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102dc6b8;
    case 0x102dc6c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102dc6c2;
    case 0x102dc6c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102dc6c6;
    case 0x102dc6ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102dc6ce;
    case 0x102dc6d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102dc6d6;
    case 0x102dc6d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102dc6d8;
    case 0x102dc6deu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102dc6de;
    case 0x102dc6e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102dc6e7;
    case 0x102dc6edu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102dc6ed;
    case 0x102dc6f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102dc6f3;
    case 0x102dc6fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102dc6fc;
    case 0x102dc712u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102dc712;
    case 0x102dc725u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102dc725;
    case 0x102dc73bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102dc73b;
    case 0x102dc759u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102dc759;
    case 0x102dc75eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102dc75e;
    case 0x102dc772u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102dc772;
    case 0x102dc782u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102dc782;
    case 0x102dc787u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102dc787;
    case 0x102dc78eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102dc78e;
    case 0x102dc792u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102dc792;
    case 0x102dc79au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102dc79a;
    case 0x102dc79eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102dc79e;
    case 0x102dc7a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102dc7a6;
    case 0x102dc7acu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102dc7ac;
    case 0x102dc7b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102dc7b3;
    case 0x102dc7b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102dc7b7;
    case 0x102dc7bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102dc7bc;
    case 0x102dc7c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102dc7c3;
    case 0x102dc7ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102dc7cc;
    case 0x102dc7d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102dc7d4;
    case 0x102dc7ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102dc7eb;
    case 0x102dc805u: eax = g->eax; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102dc805;
    case 0x102dc807u: eax = g->eax; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102dc807;
    case 0x102dc80cu: eax = g->eax; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102dc80c;
    case 0x102dc80fu: eax = g->eax; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102dc80f;
    case 0x102dc812u: eax = g->eax; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102dc812;
    case 0x102dc817u: eax = g->eax; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102dc817;
    case 0x102dc81cu: eax = g->eax; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102dc81c;
    case 0x102dc81fu: eax = g->eax; esi = g->esi; edi = g->edi; zf = g->zf; loc_10 = rd32(sp0 - 0x10u); goto E_102dc81f;
    case 0x102dc834u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102dc834;
    case 0x102dc83eu: eax = g->eax; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102dc83e;
    case 0x102dc845u: eax = g->eax; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102dc845;
    case 0x102dc84au: eax = g->eax; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102dc84a;
    case 0x102dc851u: eax = g->eax; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102dc851;
    case 0x102dc856u: eax = g->eax; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102dc856;
    case 0x102dc85bu: eax = g->eax; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102dc85b;
    case 0x102dc860u: eax = g->eax; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102dc860;
    case 0x102dc869u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102dc869;
    case 0x102dc896u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102dc896;
    case 0x102dc8acu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102dc8ac;
    case 0x102dc8c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; loc_20 = rd32(sp0 - 0x20u); goto E_102dc8c7;
    case 0x102dc8ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; loc_20 = rd32(sp0 - 0x20u); goto E_102dc8ce;
    case 0x102dc8e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; loc_20 = rd32(sp0 - 0x20u); goto E_102dc8e3;
    case 0x102dc8f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102dc8f9;
    case 0x102dc913u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102dc913;
    case 0x102dc929u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102dc929;
    case 0x102dc93du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102dc93d;
    case 0x102dc954u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102dc954;
    case 0x102dc96au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102dc96a;
    case 0x102dc97fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102dc97f;
    case 0x102dc993u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; loc_50_d = rdf64(sp0 - 0x50u); loc_18 = rd32(sp0 - 0x18u); goto E_102dc993;
    case 0x102dc9cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); goto E_102dc9cb;
    case 0x102dc9cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102dc9cd;
    case 0x102dc9cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102dc9cf;
    case 0x102dc9deu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); goto E_102dc9de;
    case 0x102dc9f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; loc_20 = rd32(sp0 - 0x20u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102dc9f0;
    case 0x102dc9fau: eax = g->eax; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102dc9fa;
    case 0x102dca04u: ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102dca04;
    case 0x102dca06u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102dca06;
    case 0x102dca61u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102dca61;
    case 0x102dca66u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102dca66;
    case 0x102dca69u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102dca69;
    case 0x102dcabfu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102dcabf;
    case 0x102dcac6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102dcac6;
    case 0x102dcac9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102dcac9;
    case 0x102dcaf2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102dcaf2;
    case 0x102dcaf4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; loc_20 = rd32(sp0 - 0x20u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102dcaf4;
    case 0x102dcafbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; loc_20 = rd32(sp0 - 0x20u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102dcafb;
    case 0x102dcb0cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; loc_20 = rd32(sp0 - 0x20u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102dcb0c;
    case 0x102dcb11u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; loc_20 = rd32(sp0 - 0x20u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102dcb11;
    case 0x102dcb1au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; loc_20 = rd32(sp0 - 0x20u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102dcb1a;
    case 0x102dcb1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; loc_164 = rd32(sp0 - 0x164u); loc_160 = rd32(sp0 - 0x160u); loc_15c = rd32(sp0 - 0x15cu); loc_20 = rd32(sp0 - 0x20u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102dcb1c;
    default: break;
    }
#endif

    COW_AT(102dc58d)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x15cu, in_ebx);
    wr32(sp0 - 0x160u, in_esi);
    wr32(sp0 - 0x164u, in_edi);
    wr32(sp0 - 0x168u, arg2);
    wr32(sp0 - 0x16cu, 0u);
    wr32(sp0 - 0x170u, arg1);
    wr32(sp0 - 0x38u, self);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x20u, 0u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x164u;
    t1 = cow_cdecl(g, COW_IMG(0x102f2029u), 3, arg1, 0u, arg2);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        edx = t3;
        loc_4 = in_ebp;
        loc_15c = in_ebx;
        loc_160 = in_esi;
        loc_164 = in_edi;
        goto L_102dc6b8;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(102dc5be)
    wr32(sp0 - 0x168u, COW_IMG(0x102dc58cu));
    wr32(sp0 - 0x16cu, COW_IMG(0x102dc580u));
    wr32(sp0 - 0x170u, 0u);
    wr32(sp0 - 0x174u, COW_IMG(0x10346138u));
    g->esi = 0u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x164u;
    t4 = cow_thiscall_cdecl(g, COW_IMG(0x102ef2b1u), ecx, 4, COW_IMG(0x10346138u), 0u, COW_IMG(0x102dc580u), COW_IMG(0x102dc58cu));
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 8u, t4);
    if (t4 == 0u)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        loc_8 = t4;
        loc_20 = 0u;
        goto L_102dc9f0;
    }
    eax = t4;
    ecx = t5;
    edx = t6;
    loc_8 = t4;
    COW_AT(102dc5e1)
    wr32(sp0 - 0x168u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x164u;
    t7 = cow_cdecl(g, COW_IMG(0x102f2163u), 1, eax);
    t8 = g->edx;
    wr32(sp0 - 0xcu, t7);
    if (t7 == 0u)
    {
        eax = t7;
        ecx = rd32(sp0 - 0x168u);
        edx = t8;
        loc_8 = rd32(sp0 - 8u);
        loc_20 = rd32(sp0 - 0x20u);
        goto L_102dc9f0;
    }
    eax = t7;
    ecx = rd32(sp0 - 0x168u);
    edx = t8;
    loc_c = t7;
    COW_AT(102dc5f3)
    wr32(sp0 - 0x168u, 0u);
    t9 = rd32(sp0 - 8u);
    wr32(sp0 - 0x16cu, t9);
    g->esi = 0u;
    g->ebp = sp0 - 4u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x168u;
    t10 = cow_cdecl(g, COW_IMG(0x10316224u), 1, t9);
    t11 = g->edx;
    if (t10 != 0u)
    {
        eax = t10;
        ecx = 0u;
        edx = t11;
        goto L_102dc834;
    }
    edx = t11;
    COW_AT(102dc606)
    wr32(sp0 - 0x48u, arg1);
    wr32(sp0 - 0x44u, arg2);
    wr32(sp0 - 0x168u, COW_IMG(0x102dc53du));
    wr32(sp0 - 0x16cu, sp0 - 0x48u);
    t12 = rd32(sp0 - 8u);
    wr32(sp0 - 0x170u, t12);
    g->eax = sp0 - 0x48u;
    g->ecx = 0u;
    g->esp = sp0 - 0x15cu;
    t13 = cow_call_regs(g, COW_IMG(0x102f1fb7u), g->eax, g->ecx, edx, 1, 5, t12, sp0 - 0x48u, COW_IMG(0x102dc53du), rd32(sp0 - 0x164u), rd32(sp0 - 0x160u));
    t14 = g->ecx;
    t15 = g->edx;
    t16 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x174u, t16);
    t17 = rd32(sp0 - 8u);
    wr32(sp0 - 0x178u, t17);
    g->ecx = t14;
    g->esp = sp0 - 0x16cu;
    cow_call_regs(g, COW_IMG(0x102ef474u), t13, g->ecx, t15, 1, 3, t17, t16, rd32(sp0 - 0x170u));
    t18 = g->ecx;
    t19 = g->edx;
    wr32(sp0 - 0x17cu, 0u);
    wr32(sp0 - 0x180u, 0u);
    wr32(sp0 - 0x184u, 0u);
    wr32(sp0 - 0x188u, sp0 - 0x30u);
    wr32(sp0 - 0x18cu, sp0 - 0x28u);
    wr32(sp0 - 0x190u, sp0 - 0x1cu);
    wr32(sp0 - 0x194u, sp0 - 0x34u);
    t20 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x198u, t20);
    t21 = rd32(sp0 - 8u);
    wr32(sp0 - 0x19cu, t21);
    g->ecx = t18;
    g->edx = t19;
    g->esp = sp0 - 0x178u;
    cow_cdecl(g, COW_IMG(0x102efdeau), 9, t21, t20, sp0 - 0x34u, sp0 - 0x1cu, sp0 - 0x28u, sp0 - 0x30u, 0u, 0u, 0u);
    t22 = g->ecx;
    t23 = g->edx;
    if (rd32(sp0 - 0x30u) == 0u)
    {
        eax = rd32(sp0 - 0x30u);
        ecx = t22;
        edx = t23;
        esi = rd32(sp0 - 0x38u);
    COW_AT(102dc687)
        wr32(esi, 0x32u);
    }
    else
    {
        eax = rd32(sp0 - 0x30u);
        ecx = t22;
        edx = t23;
        esi = rd32(sp0 - 0x38u);
    COW_AT(102dc659)
        if (eax == 2u)
        {
            eax = eax - 2u;
    COW_AT(102dc67f)
            wr32(esi, 0x14u);
        }
        else
        {
            eax = eax - 2u;
    COW_AT(102dc65d)
            if (eax == 1u)
            {
                eax = eax - 1u;
    COW_AT(102dc677)
                wr32(esi, 0x29u);
            }
            else
            {
                eax = eax - 1u;
    COW_AT(102dc660)
                if (eax == 1u)
                {
                    eax = eax - 1u;
    COW_AT(102dc66f)
                    wr32(esi, 0x33u);
                }
                else
                {
                    eax = eax - 1u;
    COW_AT(102dc663)
                    if (eax != 2u)
                    {
                        eax = eax - 2u;
                    }
                    else
                    {
                        eax = eax - 2u;
    COW_AT(102dc667)
                        wr32(esi, 0x15u);
                    }
                }
            }
        }
    }
    COW_AT(102dc68d)
    if (rd32(sp0 - 0x28u) != 0x10u) goto L_102dc6d8;
    COW_AT(102dc69d)
    t24 = rd32(sp0 - 8u);
    wr32(sp0 - 0x168u, t24);
    g->edx = edx;
    g->esp = sp0 - 0x164u;
    cow_cdecl(g, COW_IMG(0x102eff5eu), 1, t24);
    t25 = g->edx;
    if (rd32(esi) == 0x14u)
    {
        eax = rd32(esi) - 0x14u;
        ecx = rd32(sp0 - 0x168u);
        edx = t25;
        goto L_102dc6d6;
    }
    eax = rd32(esi) - 0x14u;
    ecx = rd32(sp0 - 0x168u);
    edx = t25;
    COW_AT(102dc6ad)
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_102dc6ce;
    }
    eax = eax - 1u;
    COW_AT(102dc6b0)
    if (eax == 0x1du)
    {
        eax = eax - 0x1du;
        goto L_102dc6c6;
    }
    eax = eax - 0x1du;
    COW_AT(102dc6b5)
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_102dc6c2;
    }
    loc_4 = rd32(sp0 - 4u);
    loc_15c = rd32(sp0 - 0x15cu);
    loc_160 = rd32(sp0 - 0x160u);
    loc_164 = rd32(sp0 - 0x164u);
L_102dc6b8: ;
    COW_AT(102dc6b8)
    eax = 0x80004005u;
L_102dcb1c: ;
    COW_AT(102dcb1c)
    g->ebx = loc_15c;
    g->esi = loc_160;
    g->edi = loc_164;
    g->ebp = loc_4;
    g->edx = edx;
    return eax;
L_102dc6c2: ;
    COW_AT(102dc6c2)
    wr32(esi, 0x36314c41u);
L_102dc6d8: ;
    COW_AT(102dc6d8)
    if ((int32_t)rd32(sp0 - 0x28u) < 8)
    {
    COW_AT(102dc6de)
        t26 = rd32(sp0 - 8u);
        wr32(sp0 - 0x168u, t26);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x164u;
        t27 = cow_cdecl(g, COW_IMG(0x102eff70u), 1, t26);
        t28 = g->edx;
        eax = t27;
        ecx = rd32(sp0 - 0x168u);
        edx = t28;
    }
    COW_AT(102dc6e7)
    if (rd32(sp0 - 0x30u) == 0u)
    {
    COW_AT(102dc6ed)
        if ((int32_t)rd32(sp0 - 0x28u) < 8)
        {
    COW_AT(102dc6f3)
            t29 = rd32(sp0 - 8u);
            wr32(sp0 - 0x168u, t29);
            g->edx = edx;
            g->esp = sp0 - 0x164u;
            cow_cdecl(g, COW_IMG(0x102f0817u), 1, t29);
            t30 = g->edx;
            ecx = rd32(sp0 - 0x168u);
            edx = t30;
        }
    }
    COW_AT(102dc6fc)
    wr32(sp0 - 0x168u, sp0 - 0x3cu);
    t31 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x16cu, t31);
    t32 = rd32(sp0 - 8u);
    wr32(sp0 - 0x170u, t32);
    g->eax = sp0 - 0x3cu;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x164u;
    t33 = cow_cdecl(g, COW_IMG(0x102efdbfu), 3, t32, t31, sp0 - 0x3cu);
    t34 = g->ecx;
    t35 = g->edx;
    if (t33 == 0u)
    {
        ecx = t34;
        edx = t35;
    COW_AT(102dc725)
        wr32(sp0 - 0x168u, sp0 - 0x58u);
        t42 = rd32(sp0 - 0xcu);
        wr32(sp0 - 0x16cu, t42);
        t43 = rd32(sp0 - 8u);
        wr32(sp0 - 0x170u, t43);
        g->eax = sp0 - 0x58u;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x164u;
        t44 = cow_cdecl(g, COW_IMG(0x102efd96u), 3, t43, t42, sp0 - 0x58u);
        t45 = g->ecx;
        t46 = g->edx;
        if (t44 == 0u)
        {
            eax = t44;
            ecx = t45;
            edx = t46;
        }
        else
        {
            eax = t44;
            ecx = t45;
            edx = t46;
    COW_AT(102dc73b)
            d47 = rdf64(sp0 - 0x58u);
            wrf64(sp0 - 0x16cu, d47);
            wrf64(sp0 - 0x174u, rdf64(COW_IMG(0x10346130u)));
            t48 = rd32(sp0 - 8u);
            wr32(sp0 - 0x178u, t48);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x168u;
            t49 = cow_call_regs(g, COW_IMG(0x102f07cfu), eax, g->ecx, g->edx, 1, 4, t48, cow_dlo(rdf64(COW_IMG(0x10346130u))), cow_dhi(rdf64(COW_IMG(0x10346130u))), cow_dlo(d47));
            t50 = g->ecx;
            t51 = g->edx;
            eax = t49;
            ecx = t50;
            edx = t51;
        }
    }
    else
    {
        eax = t33;
        ecx = t34;
        edx = t35;
    COW_AT(102dc712)
        t36 = rd32(sp0 - 0x3cu);
        wr32(sp0 - 0x168u, t36);
        t37 = rd32(sp0 - 0xcu);
        wr32(sp0 - 0x16cu, t37);
        t38 = rd32(sp0 - 8u);
        wr32(sp0 - 0x170u, t38);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x164u;
        t39 = cow_thiscall_cdecl(g, COW_IMG(0x102f1ee1u), ecx, 3, t38, t37, t36);
        t40 = g->ecx;
        t41 = g->edx;
        eax = t39;
        ecx = t40;
        edx = t41;
    }
    COW_AT(102dc759)
    if (rd32(esi) != 0x29u)
    {
    COW_AT(102dc75e)
        wr32(sp0 - 0x168u, 0x10u);
        t52 = rd32(sp0 - 0xcu);
        wr32(sp0 - 0x16cu, t52);
        t53 = rd32(sp0 - 8u);
        wr32(sp0 - 0x170u, t53);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x164u;
        t54 = cow_cdecl(g, COW_IMG(0x102efd3au), 3, t53, t52, 0x10u);
        t55 = g->ecx;
        t56 = g->edx;
        if (t54 == 0u)
        {
            ecx = t55;
            edx = t56;
        }
        else
        {
            eax = t54;
            ecx = t55;
            edx = t56;
    COW_AT(102dc772)
            t57 = rd32(sp0 - 8u);
            wr32(sp0 - 0x168u, t57);
            g->edx = edx;
            g->esp = sp0 - 0x164u;
            cow_cdecl(g, COW_IMG(0x102f0820u), 1, t57);
            t58 = g->edx;
            if (rd32(esi) == 0x14u)
            {
                ecx = rd32(sp0 - 0x168u);
                edx = t58;
    COW_AT(102dc7a6)
                wr32(esi, 0x15u);
            }
            else
            {
                eax = rd32(esi);
                ecx = rd32(sp0 - 0x168u);
                edx = t58;
    COW_AT(102dc782)
                if (eax == 0x32u)
                {
    COW_AT(102dc79e)
                    wr32(esi, 0x33u);
                }
                else
                {
    COW_AT(102dc787)
                    if (eax == 0x36314c20u)
                    {
    COW_AT(102dc79a)
                        wr32(esi, 0x36314c41u);
                    }
                    else
                    {
    COW_AT(102dc78e)
                        if (eax == 0x36315220u)
                        {
    COW_AT(102dc792)
                            wr32(esi, 0x36315241u);
                        }
                    }
                }
            }
        }
    }
    COW_AT(102dc7ac)
    if (rd32(esi) == 0x14u)
    {
        eax = rd32(esi);
        goto L_102dc7c3;
    }
    eax = rd32(esi);
    COW_AT(102dc7b3)
    if (eax == 0x36315220u) goto L_102dc7c3;
    COW_AT(102dc7b7)
    if (eax == 0x15u) goto L_102dc7c3;
    COW_AT(102dc7bc)
    if (eax != 0x36315241u) goto L_102dc7cc;
L_102dc7c3: ;
    COW_AT(102dc7c3)
    t59 = rd32(sp0 - 8u);
    wr32(sp0 - 0x168u, t59);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x164u;
    t60 = cow_cdecl(g, COW_IMG(0x102eff55u), 1, t59);
    t61 = g->edx;
    eax = t60;
    ecx = rd32(sp0 - 0x168u);
    edx = t61;
L_102dc7cc: ;
    COW_AT(102dc7cc)
    if (rd32(esi) == 0x14u)
    {
    COW_AT(102dc7d4)
        wr32(sp0 - 0x168u, 1u);
        wr32(sp0 - 0x16cu, 0xffu);
        t62 = rd32(sp0 - 8u);
        wr32(sp0 - 0x170u, t62);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x164u;
        t63 = cow_thiscall_cdecl(g, COW_IMG(0x102effbbu), ecx, 3, t62, 0xffu, 1u);
        t64 = g->ecx;
        t65 = g->edx;
        wr32(esi, 0x16u);
        eax = t63;
        ecx = t64;
        edx = t65;
    }
    COW_AT(102dc7eb)
    t66 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x168u, t66);
    t67 = rd32(sp0 - 8u);
    wr32(sp0 - 0x16cu, t67);
    g->esp = sp0 - 0x160u;
    cow_call_regs(g, COW_IMG(0x102ef5e7u), g->eax, ecx, edx, 1, 3, t67, t66, rd32(sp0 - 0x164u));
    wr32(sp0 - 0x168u, 4u);
    wr32(sp0 - 0x168u, 3u);
    if ((int32_t)rd32(esi) > 51)
    {
        eax = rd32(esi);
        goto L_102dc83e;
    }
    eax = rd32(esi);
    zf = rd32(esi) == 0x33u;
    COW_AT(102dc805)
    if (zf) goto L_102dc860;
    COW_AT(102dc807)
    if (eax == 0x14u)
    {
        eax = eax - 0x14u;
        goto L_102dc85b;
    }
    eax = eax - 0x14u;
    COW_AT(102dc80c)
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_102dc856;
    }
    eax = eax - 1u;
    COW_AT(102dc80f)
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_102dc856;
    }
    eax = eax - 1u;
    COW_AT(102dc812)
    if (eax == 0x13u)
    {
        eax = eax - 0x13u;
        goto L_102dc81c;
    }
    eax = eax - 0x13u;
    COW_AT(102dc817)
    if (eax != 9u)
    {
        eax = eax - 9u;
        loc_10 = rd32(sp0 - 0x10u);
        goto L_102dc81f;
    }
    eax = eax - 9u;
L_102dc81c: ;
    COW_AT(102dc81c)
    wr32(sp0 - 0x10u, 1u);
    loc_10 = 1u;
L_102dc81f: ;
    COW_AT(102dc81f)
    t68 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x168u, t68);
    t69 = rd32(sp0 - 8u);
    wr32(sp0 - 0x16cu, t69);
    g->eax = eax;
    g->edx = 4u;
    g->esp = sp0 - 0x164u;
    t70 = cow_cdecl(g, COW_IMG(0x102efd6au), 2, t69, t68);
    t71 = g->edx;
    if (rd32(sp0 - 0x10u) == (uint8_t)t70)
    {
        ecx = rd32(sp0 - 0x168u);
        edx = t71;
        goto L_102dc869;
    }
    eax = (uint8_t)t70;
    ecx = rd32(sp0 - 0x168u);
    edx = t71;
L_102dc834: ;
    COW_AT(102dc834)
    esi = 0x80004005u;
    loc_8 = rd32(sp0 - 8u);
    loc_20 = rd32(sp0 - 0x20u);
L_102dcaf4: ;
    COW_AT(102dcaf4)
    if (loc_8 != 0u)
    {
    COW_AT(102dcafb)
        wr32(sp0 - 0x168u, 0u);
        wr32(sp0 - 0x16cu, sp0 - 0xcu);
        wr32(sp0 - 0x170u, sp0 - 8u);
        g->eax = sp0 - 8u;
        g->esp = sp0 - 0x164u;
        t127 = cow_call_regs(g, COW_IMG(0x102efcb9u), g->eax, ecx, edx, 1, 3, sp0 - 8u, sp0 - 0xcu, 0u);
        t128 = g->ecx;
        t129 = g->edx;
        eax = t127;
        ecx = t128;
        edx = t129;
        loc_20 = rd32(sp0 - 0x20u);
    }
    COW_AT(102dcb0c)
    if (loc_20 != 0u)
    {
    COW_AT(102dcb11)
        wr32(sp0 - 0x168u, loc_20);
        g->esp = sp0 - 0x164u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, loc_20);
        t130 = g->edx;
        edx = t130;
    }
    COW_AT(102dcb1a)
    eax = esi;
    loc_4 = rd32(sp0 - 4u);
    loc_15c = rd32(sp0 - 0x15cu);
    loc_160 = rd32(sp0 - 0x160u);
    loc_164 = rd32(sp0 - 0x164u);
    goto L_102dcb1c;
L_102dc6c6: ;
    COW_AT(102dc6c6)
    wr32(esi, 0x36314c20u);
    goto L_102dc6d8;
L_102dc6ce: ;
    COW_AT(102dc6ce)
    wr32(esi, 0x36315241u);
    goto L_102dc6d8;
L_102dc6d6: ;
    COW_AT(102dc6d6)
    wr32(esi, 0x36315220u);
    goto L_102dc6d8;
L_102dc83e: ;
    COW_AT(102dc83e)
    if (eax == 0x36314c20u)
    {
        eax = eax - 0x36314c20u;
        goto L_102dc81c;
    }
    eax = eax - 0x36314c20u;
    COW_AT(102dc845)
    if (eax == 0x21u)
    {
        eax = eax - 0x21u;
        goto L_102dc860;
    }
    eax = eax - 0x21u;
    COW_AT(102dc84a)
    if (eax == 0x5dfu)
    {
        eax = eax - 0x5dfu;
        goto L_102dc85b;
    }
    eax = eax - 0x5dfu;
    COW_AT(102dc851)
    if (eax != 0x21u)
    {
        eax = eax - 0x21u;
        loc_10 = rd32(sp0 - 0x10u);
        goto L_102dc81f;
    }
    eax = eax - 0x21u;
L_102dc856: ;
    COW_AT(102dc856)
    wr32(sp0 - 0x10u, 4u);
    loc_10 = 4u;
    goto L_102dc81f;
L_102dc85b: ;
    COW_AT(102dc85b)
    wr32(sp0 - 0x10u, 3u);
    loc_10 = 3u;
    goto L_102dc81f;
L_102dc860: ;
    COW_AT(102dc860)
    wr32(sp0 - 0x10u, 2u);
    loc_10 = 2u;
    goto L_102dc81f;
L_102dc869: ;
    COW_AT(102dc869)
    t72 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x168u, t72);
    t73 = rd32(sp0 - 0x34u);
    wr32(esi + 0xcu, t73);
    t74 = rd32(sp0 - 8u);
    wr32(sp0 - 0x16cu, t74);
    t75 = rd32(sp0 - 0x1cu);
    wr32(esi + 0x10u, t75);
    wr32(esi + 0x14u, 1u);
    g->eax = t75;
    g->edx = edx;
    g->esp = sp0 - 0x164u;
    t76 = cow_cdecl(g, COW_IMG(0x102efd54u), 2, t74, t72);
    t77 = g->edx;
    t78 = rd32(sp0 - 0x168u);
    t79 = rd32(esi + 0x40u);
    wr32(esi + 0x30u, t76);
    wr32(esi + 0x34u, 0u);
    if (t79 == 0u)
    {
        eax = t76;
        ecx = t78;
        edx = t77;
        goto L_102dcaf2;
    }
    eax = t76;
    ecx = t78;
    edx = t77;
    COW_AT(102dc896)
    t80 = eax * rd32(sp0 - 0x1cu);
    wr32(sp0 - 0x168u, t80);
    g->eax = t80;
    g->esp = sp0 - 0x15cu;
    t81 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, t80, rd32(sp0 - 0x164u), rd32(sp0 - 0x160u));
    t82 = g->edx;
    t83 = rd32(sp0 - 0x168u);
    wr32(esi + 4u, t81);
    if (t81 == 0u)
    {
        eax = t81;
        ecx = t83;
        edx = t82;
        loc_8 = rd32(sp0 - 8u);
        loc_20 = rd32(sp0 - 0x20u);
        goto L_102dc9f0;
    }
    ecx = t83;
    edx = t82;
    COW_AT(102dc8ac)
    t84 = rd32(sp0 - 0x1cu) << 2u;
    wr32(sp0 - 0x168u, t84);
    wr32(esi + 0x38u, 1u);
    g->eax = t84;
    g->esp = sp0 - 0x15cu;
    t85 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, t84, rd32(sp0 - 0x164u), rd32(sp0 - 0x160u));
    t86 = g->edx;
    wr32(sp0 - 0x20u, t85);
    if (t85 == 0u)
    {
        eax = t85;
        ecx = rd32(sp0 - 0x168u);
        edx = t86;
        loc_8 = rd32(sp0 - 8u);
        loc_20 = t85;
        goto L_102dc9f0;
    }
    ecx = rd32(sp0 - 0x168u);
    edx = t86;
    loc_20 = t85;
    COW_AT(102dc8c7)
    if (rd32(sp0 - 0x1cu) == 0u)
    {
        eax = 0u;
        goto L_102dc8e3;
    }
    eax = 0u;
L_102dc8ce: ;
    COW_AT(102dc8ce)
    t87 = rd32(esi + 4u) + rd32(esi + 0x30u) * eax;
    wr32(eax * 4u + loc_20, t87);
    if (eax + 1u < rd32(sp0 - 0x1cu))
    {
        eax = eax + 1u;
        goto L_102dc8ce;
    }
    eax = eax + 1u;
    ecx = t87;
    edx = loc_20;
L_102dc8e3: ;
    COW_AT(102dc8e3)
    wr32(sp0 - 0x168u, loc_20);
    t88 = rd32(sp0 - 8u);
    wr32(sp0 - 0x16cu, t88);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x160u;
    t89 = cow_thiscall_cdecl(g, COW_IMG(0x102efa3au), ecx, 3, t88, loc_20, rd32(sp0 - 0x164u));
    t90 = g->edx;
    if (rd32(esi) != 0x29u)
    {
        eax = t89;
        ecx = rd32(sp0 - 0x168u);
        edx = t90;
        goto L_102dcaf2;
    }
    eax = t89;
    ecx = rd32(sp0 - 0x168u);
    edx = t90;
    COW_AT(102dc8f9)
    wr32(sp0 - 0x168u, 8u);
    t91 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x16cu, t91);
    wr32(sp0 - 0x2cu, 0u);
    t92 = rd32(sp0 - 8u);
    wr32(sp0 - 0x170u, t92);
    wr32(sp0 - 0x24u, 0u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x164u;
    t93 = cow_cdecl(g, COW_IMG(0x102efd3au), 3, t92, t91, 8u);
    t94 = g->ecx;
    t95 = g->edx;
    if (t93 == 0u)
    {
        eax = t93;
        ecx = t94;
        edx = t95;
    }
    else
    {
        ecx = t94;
        edx = t95;
    COW_AT(102dc913)
        wr32(sp0 - 0x168u, sp0 - 0x24u);
        wr32(sp0 - 0x16cu, sp0 - 0x14u);
        t96 = rd32(sp0 - 0xcu);
        wr32(sp0 - 0x170u, t96);
        t97 = rd32(sp0 - 8u);
        wr32(sp0 - 0x174u, t97);
        g->eax = sp0 - 0x14u;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x164u;
        t98 = cow_cdecl(g, COW_IMG(0x102efebbu), 4, t97, t96, sp0 - 0x14u, sp0 - 0x24u);
        t99 = g->ecx;
        t100 = g->edx;
        eax = t98;
        ecx = t99;
        edx = t100;
    }
    COW_AT(102dc929)
    wr32(sp0 - 0x168u, 0x10u);
    t101 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x16cu, t101);
    t102 = rd32(sp0 - 8u);
    wr32(sp0 - 0x170u, t102);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x164u;
    t103 = cow_cdecl(g, COW_IMG(0x102efd3au), 3, t102, t101, 0x10u);
    t104 = g->ecx;
    t105 = g->edx;
    if (t103 == 0u)
    {
        eax = t103;
        ecx = t104;
    }
    else
    {
        ecx = t104;
        edx = t105;
    COW_AT(102dc93d)
        wr32(sp0 - 0x168u, 0u);
        wr32(sp0 - 0x16cu, sp0 - 0x2cu);
        wr32(sp0 - 0x170u, sp0 - 0x40u);
        t106 = rd32(sp0 - 0xcu);
        wr32(sp0 - 0x174u, t106);
        t107 = rd32(sp0 - 8u);
        wr32(sp0 - 0x178u, t107);
        g->eax = sp0 - 0x40u;
        g->ecx = ecx;
        g->esp = sp0 - 0x164u;
        t108 = cow_cdecl(g, COW_IMG(0x102efeeeu), 5, t107, t106, sp0 - 0x40u, sp0 - 0x2cu, 0u);
        t109 = g->ecx;
        eax = t108;
        ecx = t109;
    }
    COW_AT(102dc954)
    d110 = (double)rdf32(rd32(sp0 - 8u) + 0x130u);
    if ((cow_fsw(g, d110, rdf64(COW_IMG(0x10340b18u)), 0u) >> 8u & 0x41u) != 0u)
    {
        edx = rd32(sp0 - 8u);
        goto L_102dc9cd;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d110, rdf64(COW_IMG(0x10340b18u)), 0u);
    edx = rd32(sp0 - 8u);
    COW_AT(102dc96a)
    d111 = (double)rdf32(edx + 0x134u);
    if ((cow_fsw(g, d111, rdf64(COW_IMG(0x10340b18u)), 0u) >> 8u & 0x41u) != 0u)
    {
        ecx = edx + 0x134u;
        goto L_102dc9cd;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d111, rdf64(COW_IMG(0x10340b18u)), 0u);
    ecx = edx + 0x134u;
    COW_AT(102dc97f)
    wr32(sp0 - 0x18u, 0u);
    d112 = fr(g, rdf64(COW_IMG(0x1032a100u)) / fr(g, (double)rdf32(ecx) * (double)rdf32(edx + 0x130u)));
    wrf64(sp0 - 0x50u, d112);
    loc_18 = 0u;
    loc_50_d = d112;
L_102dc993: ;
    COW_AT(102dc993)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    d113 = fr(g, (double)(int32_t)loc_18 * rdf64(COW_IMG(0x1033cd88u)));
    fpush(g, loc_50_d);
    g->esp = sp0 - 0x148u;
    t114 = cow_cdecl(g, COW_IMG(0x10312cd0u), 7, rd32(sp0 - 0x164u), rd32(sp0 - 0x160u), rd32(sp0 - 0x15cu), rd32(sp0 - 0x158u), rd32(sp0 - 0x154u), rd32(sp0 - 0x150u), rd32(sp0 - 0x14cu));
    t115 = g->ecx;
    t116 = g->edx;
    g->edx = t116;
    d117 = fr(g, fr(g, d113 * rdf64(COW_IMG(0x10342dc8u))) + rdf64(COW_IMG(0x1032ab90u)));
    fpush(g, d117);
    g->esp = sp0 - 0x164u;
    t118 = cow_call_regs(g, COW_IMG(0x10311c6cu), t114, g->ecx, g->edx, 1, 0);
    t119 = g->edx;
    t120 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x18u, t120 + 1u);
    wr8(sp0 + t120 - 0x158u, (uint8_t)t118);
    if ((int32_t)(t120 + 1u) < 256)
    {
        eax = t118;
        ecx = t120;
        edx = t119;
        loc_18 = t120 + 1u;
        loc_50_d = rdf64(sp0 - 0x50u);
        goto L_102dc993;
    }
    eax = t118;
    ecx = t120;
    edx = t119;
    COW_AT(102dc9cb)
L_102dc9de: ;
    COW_AT(102dc9de)
    wr32(sp0 - 0x168u, 0x400u);
    g->eax = eax;
    g->esp = sp0 - 0x15cu;
    t121 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x400u, rd32(sp0 - 0x164u), rd32(sp0 - 0x160u));
    t122 = g->edx;
    wr32(esi + 8u, t121);
    if (t121 != 0u)
    {
        edx = t122;
        goto L_102dc9fa;
    }
    eax = t121;
    ecx = 0x400u;
    edx = t122;
    loc_8 = rd32(sp0 - 8u);
    loc_20 = rd32(sp0 - 0x20u);
L_102dc9f0: ;
    COW_AT(102dc9f0)
    esi = 0x8007000eu;
    goto L_102dcaf4;
L_102dc9cd: ;
    COW_AT(102dc9cd)
    eax = 0u;
L_102dc9cf: ;
    COW_AT(102dc9cf)
    wr8(eax + sp0 - 0x158u, (uint8_t)eax);
    if ((int32_t)(eax + 1u) < 256)
    {
        eax = eax + 1u;
        goto L_102dc9cf;
    }
    eax = eax + 1u;
    goto L_102dc9de;
L_102dc9fa: ;
    COW_AT(102dc9fa)
    t123 = rd32(sp0 - 0x2cu);
    wr32(esi + 0x3cu, 1u);
    if ((int32_t)t123 <= 0)
    {
        eax = 0u;
        ecx = 0x400u;
    }
    else
    {
    COW_AT(102dca04)
        eax = 0u;
        edi = 0u;
L_102dca06: ;
    COW_AT(102dca06)
        wr8(eax * 4u + rd32(esi + 8u), rd8(sp0 + rd8(edi + rd32(sp0 - 0x14u)) - 0x158u));
        wr8(eax * 4u + rd32(esi + 8u) + 1u, rd8(sp0 + rd8(edi + rd32(sp0 - 0x14u) + 1u) - 0x158u));
        wr8(eax * 4u + rd32(esi + 8u) + 2u, rd8(sp0 + rd8(edi + rd32(sp0 - 0x14u) + 2u) - 0x158u));
        t124 = rd32(esi + 8u);
        wr8(eax * 4u + t124 + 3u, rd8(eax + rd32(sp0 - 0x40u)));
        if ((int32_t)(eax + 1u) < (int32_t)rd32(sp0 - 0x2cu))
        {
            eax = eax + 1u;
            edi = edi + 3u;
            goto L_102dca06;
        }
        ecx = eax << 2u;
        eax = eax + 1u;
        edx = t124;
    }
    COW_AT(102dca61)
    if ((int32_t)eax < (int32_t)rd32(sp0 - 0x24u))
    {
    COW_AT(102dca66)
        edi = eax * 3u;
L_102dca69: ;
    COW_AT(102dca69)
        wr8(eax * 4u + rd32(esi + 8u), rd8(sp0 + rd8(edi + rd32(sp0 - 0x14u)) - 0x158u));
        wr8(eax * 4u + rd32(esi + 8u) + 1u, rd8(sp0 + rd8(edi + rd32(sp0 - 0x14u) + 1u) - 0x158u));
        wr8(eax * 4u + rd32(esi + 8u) + 2u, rd8(sp0 + rd8(edi + rd32(sp0 - 0x14u) + 2u) - 0x158u));
        t125 = rd32(esi + 8u);
        wr8(eax * 4u + t125 + 3u, rd8(eax * 4u + t125 + 3u) | 0xffu);
        if ((int32_t)(eax + 1u) < (int32_t)rd32(sp0 - 0x24u))
        {
            eax = eax + 1u;
            edi = edi + 3u;
            goto L_102dca69;
        }
        ecx = eax << 2u;
        eax = eax + 1u;
        edx = t125;
    }
    COW_AT(102dcabf)
    if ((int32_t)eax < 256)
    {
    COW_AT(102dcac6)
        eax = eax << 2u;
L_102dcac9: ;
    COW_AT(102dcac9)
        wr8(eax + rd32(esi + 8u), rd8(eax + rd32(esi + 8u)) | 0xffu);
        wr8(eax + rd32(esi + 8u) + 1u, rd8(eax + rd32(esi + 8u) + 1u) | 0xffu);
        wr8(eax + rd32(esi + 8u) + 2u, rd8(eax + rd32(esi + 8u) + 2u) | 0xffu);
        t126 = rd32(esi + 8u);
        wr8(eax + t126 + 3u, rd8(eax + t126 + 3u) | 0xffu);
        if ((int32_t)(eax + 4u) < 1024)
        {
            eax = eax + 4u;
            goto L_102dcac9;
        }
        eax = eax + 4u;
        ecx = t126;
    }
L_102dcaf2: ;
    COW_AT(102dcaf2)
    esi = 0u;
    loc_8 = rd32(sp0 - 8u);
    loc_20 = rd32(sp0 - 0x20u);
    goto L_102dcaf4;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102dc58d(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102dc5beu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = g->edi;
        zf = g->zf;
        in_esi = rd32(sp0 - 0x160u);
        self = rd32(sp0 - 0x38u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x164u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        wr32(sp0 - 0x164u, in_edi);
        wr32(sp0 - 0x15cu, in_ebx);
        wr32(sp0 - 0x20u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102dc5e1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = g->edi;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x164u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102dc5f3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = g->edi;
        zf = g->zf;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x164u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102dc606u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x164u;
        g->ecx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102dc659u:
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
        g->esp = sp0 - 0x164u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        wr32(sp0 - 0x16cu, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x102dc65du:
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
        g->esp = sp0 - 0x164u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        wr32(sp0 - 0x16cu, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x102dc660u:
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
        g->esp = sp0 - 0x164u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        wr32(sp0 - 0x16cu, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x102dc663u:
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
        g->esp = sp0 - 0x164u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        wr32(sp0 - 0x16cu, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x102dc667u:
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
        g->esp = sp0 - 0x164u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        wr32(sp0 - 0x16cu, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x102dc66fu:
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
        g->esp = sp0 - 0x164u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        wr32(sp0 - 0x16cu, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x102dc677u:
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
        g->esp = sp0 - 0x164u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        wr32(sp0 - 0x16cu, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x102dc67fu:
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
        g->esp = sp0 - 0x164u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        wr32(sp0 - 0x16cu, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x102dc687u:
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
        g->esp = sp0 - 0x164u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        wr32(sp0 - 0x16cu, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x102dc68du:
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
        g->esp = sp0 - 0x164u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        wr32(sp0 - 0x16cu, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x102dc69du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x164u;
        g->ebx = 0x36314c41u;
        g->ebp = sp0 - 4u;
        g->edi = 0x36315220u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        wr32(sp0 - 0x16cu, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x102dc6adu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x164u;
        g->ebx = 0x36314c41u;
        g->ebp = sp0 - 4u;
        g->edi = 0x36315220u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        wr32(sp0 - 0x16cu, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x102dc6b0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x164u;
        g->ebx = 0x36314c41u;
        g->ebp = sp0 - 4u;
        g->edi = 0x36315220u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        wr32(sp0 - 0x16cu, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x102dc6b5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x164u;
        g->ebx = 0x36314c41u;
        g->ebp = sp0 - 4u;
        g->edi = 0x36315220u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        wr32(sp0 - 0x16cu, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x102dc6b8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_15c;
        uint32_t loc_160;
        uint32_t loc_164;
        uint32_t loc_20;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_164 = rd32(sp0 - 0x164u);
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x164u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dc6c2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x164u;
        g->ebx = 0x36314c41u;
        g->ebp = sp0 - 4u;
        g->edi = 0x36315220u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        wr32(sp0 - 0x16cu, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x102dc6c6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x164u;
        g->ebx = 0x36314c41u;
        g->ebp = sp0 - 4u;
        g->edi = 0x36315220u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        wr32(sp0 - 0x16cu, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x102dc6ceu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x164u;
        g->ebx = 0x36314c41u;
        g->ebp = sp0 - 4u;
        g->edi = 0x36315220u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        wr32(sp0 - 0x16cu, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x102dc6d6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x164u;
        g->ebx = 0x36314c41u;
        g->ebp = sp0 - 4u;
        g->edi = 0x36315220u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        wr32(sp0 - 0x16cu, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x102dc6d8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x164u;
        g->ebx = 0x36314c41u;
        g->ebp = sp0 - 4u;
        g->edi = 0x36315220u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        wr32(sp0 - 0x16cu, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x102dc6deu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x164u;
        g->ebx = 0x36314c41u;
        g->ebp = sp0 - 4u;
        g->edi = 0x36315220u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        wr32(sp0 - 0x16cu, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x102dc6e7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x164u;
        g->ebx = 0x36314c41u;
        g->ebp = sp0 - 4u;
        g->edi = 0x36315220u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        wr32(sp0 - 0x16cu, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x102dc6edu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x164u;
        g->ebx = 0x36314c41u;
        g->ebp = sp0 - 4u;
        g->edi = 0x36315220u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        wr32(sp0 - 0x16cu, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x102dc6f3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x164u;
        g->ebx = 0x36314c41u;
        g->ebp = sp0 - 4u;
        g->edi = 0x36315220u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        wr32(sp0 - 0x16cu, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x102dc6fcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x164u;
        g->ebx = 0x36314c41u;
        g->ebp = sp0 - 4u;
        g->edi = 0x36315220u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        wr32(sp0 - 0x16cu, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x102dc712u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x164u;
        g->ebx = 0x36314c41u;
        g->ebp = sp0 - 4u;
        g->edi = 0x36315220u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        wr32(sp0 - 0x168u, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x102dc725u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x164u;
        g->ebx = 0x36314c41u;
        g->ebp = sp0 - 4u;
        g->edi = 0x36315220u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        wr32(sp0 - 0x168u, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x102dc73bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x164u;
        g->ebx = 0x36314c41u;
        g->ebp = sp0 - 4u;
        g->edi = 0x36315220u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        wr32(sp0 - 0x168u, sp0 - 0x58u);
        (void)sp0;
        return 1;
    }
    case 0x102dc759u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x164u;
        g->ebx = 0x36314c41u;
        g->ebp = sp0 - 4u;
        g->edi = 0x36315220u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dc75eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x164u;
        g->ebx = 0x36314c41u;
        g->ebp = sp0 - 4u;
        g->edi = 0x36315220u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dc772u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x164u;
        g->ebx = 0x36314c41u;
        g->ebp = sp0 - 4u;
        g->edi = 0x36315220u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dc782u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x164u;
        g->ebx = 0x36314c41u;
        g->ebp = sp0 - 4u;
        g->edi = 0x36315220u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dc787u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x164u;
        g->ebx = 0x36314c41u;
        g->ebp = sp0 - 4u;
        g->edi = 0x36315220u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dc78eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x164u;
        g->ebp = sp0 - 4u;
        g->edi = 0x36315220u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dc792u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x164u;
        g->ebp = sp0 - 4u;
        g->edi = 0x36315220u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dc79au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x164u;
        g->ebx = 0x36314c41u;
        g->ebp = sp0 - 4u;
        g->edi = 0x36315220u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dc79eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x164u;
        g->ebp = sp0 - 4u;
        g->edi = 0x36315220u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dc7a6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x164u;
        g->ebp = sp0 - 4u;
        g->edi = 0x36315220u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dc7acu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x164u;
        g->ebp = sp0 - 4u;
        g->edi = 0x36315220u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dc7b3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x164u;
        g->ebp = sp0 - 4u;
        g->edi = 0x36315220u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dc7b7u:
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
        g->esp = sp0 - 0x164u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dc7bcu:
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
        g->esp = sp0 - 0x164u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dc7c3u:
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
        g->esp = sp0 - 0x164u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dc7ccu:
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
        g->esp = sp0 - 0x164u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dc7d4u:
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
        g->esp = sp0 - 0x164u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dc7ebu:
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
        g->esp = sp0 - 0x164u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dc805u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x164u;
        g->ecx = 3u;
        g->edx = 4u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dc807u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x164u;
        g->ecx = 3u;
        g->edx = 4u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dc80cu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x164u;
        g->ecx = 3u;
        g->edx = 4u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dc80fu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x164u;
        g->ecx = 3u;
        g->edx = 4u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dc812u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x164u;
        g->ecx = 3u;
        g->edx = 4u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dc817u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x164u;
        g->ecx = 3u;
        g->edx = 4u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dc81cu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x164u;
        g->ecx = 3u;
        g->edx = 4u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dc81fu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t zf;
        eax = g->eax;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x164u;
        g->ecx = 3u;
        g->edx = 4u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dc834u:
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
        g->esp = sp0 - 0x164u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dc83eu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x164u;
        g->ecx = 3u;
        g->edx = 4u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dc845u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x164u;
        g->ecx = 3u;
        g->edx = 4u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dc84au:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x164u;
        g->ecx = 3u;
        g->edx = 4u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dc851u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x164u;
        g->ecx = 3u;
        g->edx = 4u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dc856u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x164u;
        g->ecx = 3u;
        g->edx = 4u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dc85bu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x164u;
        g->ecx = 3u;
        g->edx = 4u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dc860u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x164u;
        g->ecx = 3u;
        g->edx = 4u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dc869u:
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
        g->esp = sp0 - 0x164u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dc896u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x164u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dc8acu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x164u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dc8c7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x164u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dc8ceu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x164u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dc8e3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x164u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dc8f9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x164u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dc913u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x164u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dc929u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x164u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dc93du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x164u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dc954u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x164u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dc96au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x164u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dc97fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x164u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dc993u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        double loc_50_d;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        loc_50_d = rdf64(sp0 - 0x50u);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x164u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dc9cbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x164u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dc9cdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x164u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dc9cfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x164u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dc9deu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x164u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dc9f0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_20 = rd32(sp0 - 0x20u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x164u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dc9fau:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x164u;
        g->ecx = 0x400u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dca04u:
    {
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x164u;
        g->eax = 0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dca06u:
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
        g->esp = sp0 - 0x164u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dca61u:
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
        g->esp = sp0 - 0x164u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dca66u:
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
        g->esp = sp0 - 0x164u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dca69u:
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
        g->esp = sp0 - 0x164u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dcabfu:
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
        g->esp = sp0 - 0x164u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dcac6u:
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
        g->esp = sp0 - 0x164u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dcac9u:
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
        g->esp = sp0 - 0x164u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dcaf2u:
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
        g->esp = sp0 - 0x164u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x194u, sp0 - 0x34u);
        wr32(sp0 - 0x190u, sp0 - 0x1cu);
        wr32(sp0 - 0x18cu, sp0 - 0x28u);
        wr32(sp0 - 0x188u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102dcaf4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_20 = rd32(sp0 - 0x20u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x164u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dcafbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        loc_20 = rd32(sp0 - 0x20u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x164u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102dcb0cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        loc_20 = rd32(sp0 - 0x20u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x164u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102dcb11u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_20 = rd32(sp0 - 0x20u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x164u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dcb1au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_20 = rd32(sp0 - 0x20u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x164u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dcb1cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_15c;
        uint32_t loc_160;
        uint32_t loc_164;
        uint32_t loc_20;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_164 = rd32(sp0 - 0x164u);
        loc_160 = rd32(sp0 - 0x160u);
        loc_15c = rd32(sp0 - 0x15cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x164u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102dc58d(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102dc58d(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
