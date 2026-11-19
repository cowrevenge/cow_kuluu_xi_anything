/* f_0x1016b1d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=3 */
uint32_t cow_fn_1016b1d0(Guest* g)
{
    double d11;
    double d12;
    double d13;
    double d14;
    double d15;
    double d16;
    double d17;
    double d18;
    double d19;
    double d2;
    double d20;
    double d21;
    double d22;
    double d23;
    double d28;
    double d30;
    double d32;
    double d33;
    double d34;
    double d35;
    double d36;
    double d37;
    double d39;
    double d40;
    double d41;
    double d42;
    double d43;
    double d44;
    double d45;
    double d46;
    double d47;
    double d48;
    double d49;
    double d50;
    double d6;
    double d63;
    double d65;
    double d67;
    double d68;
    double d69;
    double d70;
    double d71;
    double d72;
    double d74;
    double d75;
    double d76;
    double d77;
    double d78;
    double d79;
    double d8;
    double d80;
    double d81;
    double d82;
    double d83;
    double d84;
    double d85;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t loc_48;
    double loc_58_f;
    double loc_5c_f;
    double loc_60_f;
    uint32_t loc_88;
    double loc_8c_f;
    double loc_90_f;
    double loc_94_f;
    uint32_t loc_98;
    uint32_t loc_9c;
    double loc_a0_f;
    double loc_a4_f;
    double loc_a8_f;
    uint32_t loc_ac;
    double loc_b0_f;
    double loc_b4_f;
    double loc_b8_f;
    uint32_t loc_bc;
    double loc_cc_f;
    uint32_t loc_d4;
    uint32_t loc_d8;
    uint32_t loc_dc;
    uint32_t loc_e0;
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
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t29;
    uint32_t t3;
    uint32_t t31;
    uint32_t t38;
    uint32_t t4;
    uint32_t t5;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t64;
    uint32_t t66;
    uint32_t t7;
    uint32_t t73;
    uint32_t t86;
    uint32_t t87;
    uint32_t t88;
    uint32_t t89;
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
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 256u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1016b1f1u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0xe0u); in_esi = rd32(sp0 - 0xdcu); in_ebp = rd32(sp0 - 0xd8u); in_ebx = rd32(sp0 - 0xd4u); g->ebp = rd32(sp0 - 0xd8u); g->ebx = rd32(sp0 - 0xd4u); g->edi = rd32(sp0 - 0xe0u); g->esi = rd32(sp0 - 0xdcu); goto E_1016b1f1;
    case 0x1016b208u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1016b208;
    case 0x1016b212u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1016b212;
    case 0x1016b21du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1016b21d;
    case 0x1016b22eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1016b22e;
    case 0x1016b236u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1016b236;
    case 0x1016b241u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1016b241;
    case 0x1016b248u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1016b248;
    case 0x1016b255u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1016b255;
    case 0x1016b263u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_48 = rd32(sp0 - 0x48u); goto E_1016b263;
    case 0x1016b26au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_48 = rd32(sp0 - 0x48u); goto E_1016b26a;
    case 0x1016b271u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_48 = rd32(sp0 - 0x48u); goto E_1016b271;
    case 0x1016b27bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_48 = rd32(sp0 - 0x48u); goto E_1016b27b;
    case 0x1016b286u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_98 = rd32(sp0 - 0x98u); loc_48 = rd32(sp0 - 0x48u); goto E_1016b286;
    case 0x1016b28au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_98 = rd32(sp0 - 0x98u); loc_48 = rd32(sp0 - 0x48u); goto E_1016b28a;
    case 0x1016b291u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_98 = rd32(sp0 - 0x98u); loc_48 = rd32(sp0 - 0x48u); goto E_1016b291;
    case 0x1016b295u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_98 = rd32(sp0 - 0x98u); loc_48 = rd32(sp0 - 0x48u); goto E_1016b295;
    case 0x1016b29cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_98 = rd32(sp0 - 0x98u); loc_48 = rd32(sp0 - 0x48u); goto E_1016b29c;
    case 0x1016b29eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_98 = rd32(sp0 - 0x98u); loc_48 = rd32(sp0 - 0x48u); goto E_1016b29e;
    case 0x1016b2a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_98 = rd32(sp0 - 0x98u); loc_48 = rd32(sp0 - 0x48u); goto E_1016b2a5;
    case 0x1016b2afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_98 = rd32(sp0 - 0x98u); loc_48 = rd32(sp0 - 0x48u); goto E_1016b2af;
    case 0x1016b2bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_48 = rd32(sp0 - 0x48u); goto E_1016b2ba;
    case 0x1016b2beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_48 = rd32(sp0 - 0x48u); goto E_1016b2be;
    case 0x1016b2d9u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_48 = rd32(sp0 - 0x48u); goto E_1016b2d9;
    case 0x1016b2e1u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_48 = rd32(sp0 - 0x48u); goto E_1016b2e1;
    case 0x1016b2e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_48 = rd32(sp0 - 0x48u); goto E_1016b2e7;
    case 0x1016b317u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_cc_f = rdf32(sp0 - 0xccu); loc_bc = rd32(sp0 - 0xbcu); loc_b8_f = rdf32(sp0 - 0xb8u); loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0_f = rdf32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_60_f = rdf32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); goto E_1016b317;
    case 0x1016b333u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_cc_f = rdf32(sp0 - 0xccu); loc_bc = rd32(sp0 - 0xbcu); loc_b8_f = rdf32(sp0 - 0xb8u); loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0_f = rdf32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_60_f = rdf32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); goto E_1016b333;
    case 0x1016b349u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_cc_f = rdf32(sp0 - 0xccu); loc_bc = rd32(sp0 - 0xbcu); loc_b8_f = rdf32(sp0 - 0xb8u); loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0_f = rdf32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_60_f = rdf32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); goto E_1016b349;
    case 0x1016b361u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_cc_f = rdf32(sp0 - 0xccu); loc_bc = rd32(sp0 - 0xbcu); loc_b8_f = rdf32(sp0 - 0xb8u); loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0_f = rdf32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_60_f = rdf32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); goto E_1016b361;
    case 0x1016b369u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_cc_f = rdf32(sp0 - 0xccu); loc_bc = rd32(sp0 - 0xbcu); loc_b8_f = rdf32(sp0 - 0xb8u); loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0_f = rdf32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_60_f = rdf32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); goto E_1016b369;
    case 0x1016b371u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_cc_f = rdf32(sp0 - 0xccu); loc_bc = rd32(sp0 - 0xbcu); loc_b8_f = rdf32(sp0 - 0xb8u); loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0_f = rdf32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_60_f = rdf32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); goto E_1016b371;
    case 0x1016b378u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_cc_f = rdf32(sp0 - 0xccu); loc_bc = rd32(sp0 - 0xbcu); loc_b8_f = rdf32(sp0 - 0xb8u); loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0_f = rdf32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_60_f = rdf32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); goto E_1016b378;
    case 0x1016b387u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_cc_f = rdf32(sp0 - 0xccu); loc_bc = rd32(sp0 - 0xbcu); loc_b8_f = rdf32(sp0 - 0xb8u); loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0_f = rdf32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_60_f = rdf32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); goto E_1016b387;
    case 0x1016b3a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_cc_f = rdf32(sp0 - 0xccu); loc_bc = rd32(sp0 - 0xbcu); loc_b8_f = rdf32(sp0 - 0xb8u); loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0_f = rdf32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_60_f = rdf32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); goto E_1016b3a6;
    case 0x1016b3beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_cc_f = rdf32(sp0 - 0xccu); loc_bc = rd32(sp0 - 0xbcu); loc_b8_f = rdf32(sp0 - 0xb8u); loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0_f = rdf32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_60_f = rdf32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); goto E_1016b3be;
    case 0x1016b3cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_cc_f = rdf32(sp0 - 0xccu); loc_bc = rd32(sp0 - 0xbcu); loc_b8_f = rdf32(sp0 - 0xb8u); loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0_f = rdf32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_60_f = rdf32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); goto E_1016b3cf;
    case 0x1016b4aau: ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_cc_f = rdf32(sp0 - 0xccu); loc_bc = rd32(sp0 - 0xbcu); loc_b8_f = rdf32(sp0 - 0xb8u); loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0_f = rdf32(sp0 - 0xb0u); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_60_f = rdf32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); goto E_1016b4aa;
    case 0x1016b4b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_cc_f = rdf32(sp0 - 0xccu); loc_bc = rd32(sp0 - 0xbcu); loc_b8_f = rdf32(sp0 - 0xb8u); loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0_f = rdf32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_60_f = rdf32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); goto E_1016b4b4;
    case 0x1016b596u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_cc_f = rdf32(sp0 - 0xccu); loc_bc = rd32(sp0 - 0xbcu); loc_b8_f = rdf32(sp0 - 0xb8u); loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0_f = rdf32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_60_f = rdf32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1016b596;
    case 0x1016b603u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_cc_f = rdf32(sp0 - 0xccu); loc_bc = rd32(sp0 - 0xbcu); loc_b8_f = rdf32(sp0 - 0xb8u); loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0_f = rdf32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_60_f = rdf32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); goto E_1016b603;
    case 0x1016b61au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_cc_f = rdf32(sp0 - 0xccu); loc_bc = rd32(sp0 - 0xbcu); loc_b8_f = rdf32(sp0 - 0xb8u); loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0_f = rdf32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_60_f = rdf32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); goto E_1016b61a;
    case 0x1016b65bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1016b65b;
    case 0x1016b663u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1016b663;
    case 0x1016b704u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_b8_f = rdf32(sp0 - 0xb8u); loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0_f = rdf32(sp0 - 0xb0u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1016b704;
    case 0x1016b882u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_b8_f = rdf32(sp0 - 0xb8u); loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0_f = rdf32(sp0 - 0xb0u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1016b882;
    case 0x1016b884u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_b8_f = rdf32(sp0 - 0xb8u); loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0_f = rdf32(sp0 - 0xb0u); goto E_1016b884;
    case 0x1016b88au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_cc_f = rdf32(sp0 - 0xccu); loc_bc = rd32(sp0 - 0xbcu); loc_b8_f = rdf32(sp0 - 0xb8u); loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0_f = rdf32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_60_f = rdf32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1016b88a;
    case 0x1016b88cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_cc_f = rdf32(sp0 - 0xccu); loc_b8_f = rdf32(sp0 - 0xb8u); loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0_f = rdf32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_60_f = rdf32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); goto E_1016b88c;
    case 0x1016b8a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_cc_f = rdf32(sp0 - 0xccu); loc_b8_f = rdf32(sp0 - 0xb8u); loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0_f = rdf32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_60_f = rdf32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); goto E_1016b8a4;
    case 0x1016b8b0u: ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_cc_f = rdf32(sp0 - 0xccu); loc_bc = rd32(sp0 - 0xbcu); loc_b8_f = rdf32(sp0 - 0xb8u); loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0_f = rdf32(sp0 - 0xb0u); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_60_f = rdf32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); goto E_1016b8b0;
    case 0x1016b8bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_cc_f = rdf32(sp0 - 0xccu); loc_bc = rd32(sp0 - 0xbcu); loc_b8_f = rdf32(sp0 - 0xb8u); loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0_f = rdf32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_60_f = rdf32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); goto E_1016b8ba;
    case 0x1016b8c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_cc_f = rdf32(sp0 - 0xccu); loc_bc = rd32(sp0 - 0xbcu); loc_b8_f = rdf32(sp0 - 0xb8u); loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0_f = rdf32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_60_f = rdf32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); goto E_1016b8c4;
    case 0x1016b9a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_cc_f = rdf32(sp0 - 0xccu); loc_bc = rd32(sp0 - 0xbcu); loc_b8_f = rdf32(sp0 - 0xb8u); loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0_f = rdf32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_60_f = rdf32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1016b9a6;
    case 0x1016ba13u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_cc_f = rdf32(sp0 - 0xccu); loc_bc = rd32(sp0 - 0xbcu); loc_b8_f = rdf32(sp0 - 0xb8u); loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0_f = rdf32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_60_f = rdf32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); goto E_1016ba13;
    case 0x1016ba2au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_cc_f = rdf32(sp0 - 0xccu); loc_bc = rd32(sp0 - 0xbcu); loc_b8_f = rdf32(sp0 - 0xb8u); loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0_f = rdf32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_60_f = rdf32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); goto E_1016ba2a;
    case 0x1016ba6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1016ba6b;
    case 0x1016ba73u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1016ba73;
    case 0x1016bb14u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_b8_f = rdf32(sp0 - 0xb8u); loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0_f = rdf32(sp0 - 0xb0u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1016bb14;
    case 0x1016bc92u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_b8_f = rdf32(sp0 - 0xb8u); loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0_f = rdf32(sp0 - 0xb0u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1016bc92;
    case 0x1016bc94u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_b8_f = rdf32(sp0 - 0xb8u); loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0_f = rdf32(sp0 - 0xb0u); goto E_1016bc94;
    case 0x1016bc9au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_cc_f = rdf32(sp0 - 0xccu); loc_bc = rd32(sp0 - 0xbcu); loc_b8_f = rdf32(sp0 - 0xb8u); loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0_f = rdf32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_60_f = rdf32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1016bc9a;
    case 0x1016bc9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_cc_f = rdf32(sp0 - 0xccu); loc_b8_f = rdf32(sp0 - 0xb8u); loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0_f = rdf32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_60_f = rdf32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); goto E_1016bc9c;
    case 0x1016bca3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_cc_f = rdf32(sp0 - 0xccu); loc_bc = rd32(sp0 - 0xbcu); loc_b8_f = rdf32(sp0 - 0xb8u); loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0_f = rdf32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_60_f = rdf32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); goto E_1016bca3;
    case 0x1016bcbbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_cc_f = rdf32(sp0 - 0xccu); loc_bc = rd32(sp0 - 0xbcu); loc_b8_f = rdf32(sp0 - 0xb8u); loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0_f = rdf32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_60_f = rdf32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); goto E_1016bcbb;
    case 0x1016bce1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_cc_f = rdf32(sp0 - 0xccu); loc_bc = rd32(sp0 - 0xbcu); loc_b8_f = rdf32(sp0 - 0xb8u); loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0_f = rdf32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_60_f = rdf32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); goto E_1016bce1;
    case 0x1016bcebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_cc_f = rdf32(sp0 - 0xccu); loc_bc = rd32(sp0 - 0xbcu); loc_b8_f = rdf32(sp0 - 0xb8u); loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0_f = rdf32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_60_f = rdf32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); goto E_1016bceb;
    case 0x1016bcf9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_cc_f = rdf32(sp0 - 0xccu); loc_bc = rd32(sp0 - 0xbcu); loc_b8_f = rdf32(sp0 - 0xb8u); loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0_f = rdf32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_60_f = rdf32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); goto E_1016bcf9;
    case 0x1016bd0du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_cc_f = rdf32(sp0 - 0xccu); loc_bc = rd32(sp0 - 0xbcu); loc_b8_f = rdf32(sp0 - 0xb8u); loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0_f = rdf32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_60_f = rdf32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); goto E_1016bd0d;
    case 0x1016bd21u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_cc_f = rdf32(sp0 - 0xccu); loc_bc = rd32(sp0 - 0xbcu); loc_b8_f = rdf32(sp0 - 0xb8u); loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0_f = rdf32(sp0 - 0xb0u); loc_ac = rd32(sp0 - 0xacu); loc_a8_f = rdf32(sp0 - 0xa8u); loc_a4_f = rdf32(sp0 - 0xa4u); loc_a0_f = rdf32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94_f = rdf32(sp0 - 0x94u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_60_f = rdf32(sp0 - 0x60u); loc_5c_f = rdf32(sp0 - 0x5cu); loc_58_f = rdf32(sp0 - 0x58u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); goto E_1016bd21;
    case 0x1016bd28u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1016bd28;
    case 0x1016bd33u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1016bd33;
    case 0x1016bd41u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1016bd41;
    case 0x1016bd46u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1016bd46;
    case 0x1016bd4au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1016bd4a;
    case 0x1016bd4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1016bd4f;
    case 0x1016bd55u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1016bd55;
    case 0x1016bd61u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1016bd61;
    case 0x1016bd65u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1016bd65;
    case 0x1016bd69u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1016bd69;
    case 0x1016bd80u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1016bd80;
    case 0x1016bd84u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1016bd84;
    case 0x1016bdb2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1016bdb2;
    case 0x1016bdb6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1016bdb6;
    case 0x1016bdbbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1016bdbb;
    case 0x1016bdc2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1016bdc2;
    case 0x1016bdc8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1016bdc8;
    case 0x1016bdd9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_e0 = rd32(sp0 - 0xe0u); loc_dc = rd32(sp0 - 0xdcu); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); goto E_1016bdd9;
    default: break;
    }
#endif

    COW_AT(1016b1d0)
    wr32(sp0 - 0xd4u, in_ebx);
    wr32(sp0 - 0xd8u, in_ebp);
    wr32(sp0 - 0xdcu, in_esi);
    wr32(sp0 - 0xe0u, in_edi);
    t1 = rd32(self + 0x60u);
    wr32(self + 0x1807cu, 0u);
    if (t1 == 0u)
    {
        eax = t1;
        loc_d4 = in_ebx;
        loc_d8 = in_ebp;
        loc_dc = in_esi;
        loc_e0 = in_edi;
        goto L_1016bdd9;
    }
    eax = t1;
    COW_AT(1016b1f1)
    g->ecx = self;
    g->edx = in_edx;
    d2 = fr(g, fr(g, (double)rdf32(self + 0x40u) + (double)rdf32(arg1)) * (double)rdf32(COW_IMG(0x10329ce4u)));
    fpush(g, d2);
    g->esp = sp0 - 0xe0u;
    t3 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t4 = g->ecx;
    t5 = g->edx;
    eax = t3;
    ecx = t4;
    edx = t5;
    COW_AT(1016b208)
    if ((int32_t)eax < 0)
    {
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_dc = rd32(sp0 - 0xdcu);
        loc_e0 = rd32(sp0 - 0xe0u);
        goto L_1016bdd9;
    }
    esi = eax;
    COW_AT(1016b212)
    if ((int32_t)esi >= (int32_t)rd32(self + 0x48u))
    {
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_dc = rd32(sp0 - 0xdcu);
        loc_e0 = rd32(sp0 - 0xe0u);
        goto L_1016bdd9;
    }
    ebp = rd32(self + 0x48u);
    COW_AT(1016b21d)
    d6 = fr(g, fr(g, (double)rdf32(self + 0x44u) + (double)rdf32(arg1 + 8u)) * (double)rdf32(COW_IMG(0x10329ce4u)));
    fpush(g, d6);
    g->esp = sp0 - 0xe0u;
    t7 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    eax = t7;
    COW_AT(1016b22e)
    if ((int32_t)eax < 0)
    {
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_dc = rd32(sp0 - 0xdcu);
        loc_e0 = rd32(sp0 - 0xe0u);
        goto L_1016bdd9;
    }
    COW_AT(1016b236)
    if ((int32_t)eax >= (int32_t)rd32(self + 0x4cu))
    {
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_dc = rd32(sp0 - 0xdcu);
        loc_e0 = rd32(sp0 - 0xe0u);
        goto L_1016bdd9;
    }
    ebx = rd32(self + 0x4cu);
    COW_AT(1016b241)
    if ((int32_t)(esi - 2u) >= 0)
    {
        ecx = esi - 2u;
    COW_AT(1016b255)
        wr32(sp0 - 0x48u, ebp - 1u);
        if ((int32_t)ecx > (int32_t)(ebp - 1u))
        {
            loc_48 = ebp - 1u;
        }
        else
        {
    COW_AT(1016b263)
            wr32(sp0 - 0x48u, ecx);
            loc_48 = ecx;
        }
    }
    else
    {
    COW_AT(1016b248)
        wr32(sp0 - 0x48u, 0u);
        loc_48 = 0u;
    }
    COW_AT(1016b26a)
    if ((int32_t)(esi + 2u) >= 0)
    {
        ecx = esi + 2u;
    COW_AT(1016b27b)
        wr32(sp0 - 0x98u, ebp - 1u);
        if ((int32_t)ecx > (int32_t)(ebp - 1u))
        {
            loc_98 = ebp - 1u;
        }
        else
        {
    COW_AT(1016b286)
            wr32(sp0 - 0x98u, ecx);
            loc_98 = ecx;
        }
    }
    else
    {
    COW_AT(1016b271)
        wr32(sp0 - 0x98u, 0u);
        loc_98 = 0u;
    }
    COW_AT(1016b28a)
    if ((int32_t)(eax - 2u) >= 0)
    {
        ecx = eax - 2u;
    COW_AT(1016b295)
        if ((int32_t)ecx > (int32_t)(ebx - 1u))
        {
            edx = ebx - 1u;
    COW_AT(1016b29c)
            ecx = edx;
        }
    }
    else
    {
    COW_AT(1016b291)
        ecx = 0u;
    }
    COW_AT(1016b29e)
    if ((int32_t)(eax + 2u) >= 0)
    {
        eax = eax + 2u;
    COW_AT(1016b2af)
        wr32(sp0 - 0x9cu, ebx - 1u);
        if ((int32_t)eax > (int32_t)(ebx - 1u))
        {
            loc_9c = ebx - 1u;
        }
        else
        {
    COW_AT(1016b2ba)
            wr32(sp0 - 0x9cu, eax);
            loc_9c = eax;
        }
    }
    else
    {
        eax = eax + 2u;
    COW_AT(1016b2a5)
        wr32(sp0 - 0x9cu, 0u);
        loc_9c = 0u;
    }
    COW_AT(1016b2be)
    d8 = (double)rdf32(arg1 + 4u);
    d9 = (double)rdf32(arg2 + 4u);
    if (!(d8 < d9))
    {
    COW_AT(1016b2e1)
        eax = rd32(arg2 + 4u);
        edx = rd32(arg1 + 4u);
    }
    else
    {
    COW_AT(1016b2d9)
        eax = rd32(arg1 + 4u);
        edx = rd32(arg2 + 4u);
    }
    COW_AT(1016b2e7)
    wr32(sp0 - 0x38u, eax);
    wr32(sp0 - 0x30u, edx);
    wr32(sp0 - 0xbcu, 0x49742400u);
    wr8(sp0 - 0xcdu, 0u);
    wr32(sp0 - 0x34u, ecx);
    if ((int32_t)ecx > (int32_t)loc_9c)
    {
        eax = loc_9c;
        edx = ecx;
        goto L_1016bd21;
    }
    loc_38 = eax;
    loc_30 = edx;
    edx = ecx;
    loc_bc = 0x49742400u;
    loc_34 = ecx;
L_1016b317: ;
    COW_AT(1016b317)
    wr32(sp0 - 0x40u, loc_48);
    if ((int32_t)loc_48 > (int32_t)loc_98)
    {
        ecx = loc_48;
        goto L_1016bd0d;
    }
    ecx = loc_48;
    loc_40 = loc_48;
L_1016b333: ;
    COW_AT(1016b333)
    if (rd32(ecx * 4u + rd32(self + 0x60u) + rd32(self + 0x48u) * edx * 4u) == 0u) goto L_1016bcf9;
    eax = rd32(ecx * 4u + rd32(self + 0x60u) + rd32(self + 0x48u) * edx * 4u);
L_1016b349: ;
    COW_AT(1016b349)
    wr32(sp0 - 0x44u, eax + 4u);
    if ((rd32(eax) >> 8u & 0x20u) == 0u)
    {
        edx = eax + 4u;
        loc_44 = eax + 4u;
        eax = rd32(eax) & 0x7ffu;
    COW_AT(1016b369)
        if ((int32_t)eax > 0)
        {
    COW_AT(1016b371)
            wr32(sp0 - 0x3cu, eax);
            loc_3c = eax;
L_1016b378: ;
    COW_AT(1016b378)
            t10 = rd32(edx + 4u);
            wr32(sp0 - 0x88u, t10);
            if (rd32(edx + 4u) != 0u)
            {
                ecx = t10;
                loc_88 = t10;
    COW_AT(1016b387)
                d11 = (double)rdf32(rd32(edx) + 0xb4u);
                if ((cow_fsw(g, d11, cow_bits2f(loc_30), 0u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, d11, cow_bits2f(loc_30), 0u) & 0x4100u;
                    ebp = rd32(ecx + 8u);
                    esi = rd32(edx);
    COW_AT(1016b3a6)
                    d12 = (double)rdf32(esi + 0xb8u);
                    if (!(d12 < cow_bits2f(loc_38)))
                    {
    COW_AT(1016b3be)
                        if (rd32(self + 4u) != rd32(esi + 0xbcu))
                        {
    COW_AT(1016b3cf)
                            d13 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(esi + 0x60u) * (double)rdf32(arg1 + 8u)) + fr(g, (double)rdf32(esi + 0x50u) * (double)rdf32(arg1 + 4u))) + fr(g, (double)rdf32(arg1) * (double)rdf32(esi + 0x40u))) + (double)rdf32(esi + 0x70u));
                            wrf32(sp0 - 0xa8u, (float)(double)(float)d13);
                            d14 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(esi + 0x64u) * (double)rdf32(arg1 + 8u)) + fr(g, (double)rdf32(esi + 0x54u) * (double)rdf32(arg1 + 4u))) + fr(g, (double)rdf32(esi + 0x44u) * (double)rdf32(arg1))) + (double)rdf32(esi + 0x74u));
                            wrf32(sp0 - 0xa4u, (float)(double)(float)d14);
                            d15 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(esi + 0x68u) * (double)rdf32(arg1 + 8u)) + fr(g, (double)rdf32(esi + 0x58u) * (double)rdf32(arg1 + 4u))) + fr(g, (double)rdf32(esi + 0x48u) * (double)rdf32(arg1))) + (double)rdf32(esi + 0x78u));
                            wrf32(sp0 - 0xa0u, (float)(double)(float)d15);
                            d16 = fr(g, (double)rdf32(esi + 0x58u) * (double)rdf32(arg2 + 4u));
                            d17 = fr(g, fr(g, (double)rdf32(esi + 0x48u) * (double)rdf32(arg2)) + fr(g, (double)rdf32(esi + 0x68u) * (double)rdf32(arg2 + 8u)));
                            d18 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(esi + 0x44u) * (double)rdf32(arg2)) + fr(g, (double)rdf32(esi + 0x64u) * (double)rdf32(arg2 + 8u))) + fr(g, (double)rdf32(esi + 0x54u) * (double)rdf32(arg2 + 4u))) + (double)rdf32(esi + 0x74u));
                            d19 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(esi + 0x60u) * (double)rdf32(arg2 + 8u)) + fr(g, (double)rdf32(esi + 0x50u) * (double)rdf32(arg2 + 4u))) + fr(g, (double)rdf32(esi + 0x40u) * (double)rdf32(arg2))) + (double)rdf32(esi + 0x70u));
                            wr32(sp0 - 0xacu, 0u);
                            d20 = fr(g, fr(g, d17 + d16) + (double)rdf32(esi + 0x78u));
                            wrf32(sp0 - 0x24u, (float)(double)(float)d20);
                            d21 = (double)(float)fr(g, d19 - (double)(float)d13);
                            wrf32(sp0 - 0x94u, (float)d21);
                            d22 = (double)(float)fr(g, d18 - (double)(float)d14);
                            wrf32(sp0 - 0x90u, (float)d22);
                            d23 = (double)(float)fr(g, (double)(float)d20 - (double)(float)d15);
                            wrf32(sp0 - 0x8cu, (float)d23);
                            if (rd16(ecx + 0xeu) != 0u)
                            {
                                loc_a8_f = (double)(float)d13;
                                loc_a4_f = (double)(float)d14;
                                loc_a0_f = (double)(float)d15;
                                loc_94_f = d21;
                                loc_90_f = d22;
                                loc_8c_f = d23;
    COW_AT(1016b8b0)
                                if ((int16_t)rd16(ecx + 0xcu) <= 0) goto L_1016bcbb;
                                eax = 0u;
                                loc_ac = 0u;
L_1016b8ba: ;
    COW_AT(1016b8ba)
                                if ((rd8(ebp + 5u) & 0x40u) == 0u)
                                {
    COW_AT(1016b8c4)
                                    t59 = rd32(rd32(ecx + 4u) + (rd16(ebp + 6u) & 0x7fffu) * 0xcu);
                                    wr32(sp0 - 0x60u, t59);
                                    t60 = rd32(rd32(ecx + 4u) + (rd16(ebp + 6u) & 0x7fffu) * 0xcu + 4u);
                                    wr32(sp0 - 0x5cu, t60);
                                    t61 = rd32(rd32(ecx + 4u) + (rd16(ebp + 6u) & 0x7fffu) * 0xcu + 8u);
                                    wr32(sp0 - 0x58u, t61);
                                    t62 = rd32(ecx) + (rd16(ebp) & 0x7fffu) * 0xcu;
                                    d63 = fr(g, cow_bits2f(t59) * (double)rdf32(COW_IMG(0x1032a3f0u)));
                                    wr32(sp0 - 0x54u, t62);
                                    t64 = rd32(ecx) + (rd16(ebp + 2u) & 0x3fffu) * 0xcu;
                                    wr32(sp0 - 0x50u, t64);
                                    wrf32(sp0 - 0x60u, (float)(double)(float)d63);
                                    d65 = fr(g, cow_bits2f(t60) * (double)rdf32(COW_IMG(0x1032a3f0u)));
                                    wrf32(sp0 - 0x5cu, (float)(double)(float)d65);
                                    t66 = rd32(ecx) + (rd16(ebp + 4u) & 0x3fffu) * 0xcu;
                                    d67 = fr(g, cow_bits2f(t61) * (double)rdf32(COW_IMG(0x1032a3f0u)));
                                    wr32(sp0 - 0x4cu, t66);
                                    wrf32(sp0 - 0x58u, (float)(double)(float)d67);
                                    d68 = fr(g, fr(g, fr(g, d67 * loc_8c_f) + fr(g, (double)(float)d65 * loc_90_f)) + fr(g, (double)(float)d63 * loc_94_f));
                                    if (d68 == (double)rdf32(COW_IMG(0x103295d8u)))
                                    {
                                        x0 = d68;
    COW_AT(1016bc9a)
                                    }
                                    else
                                    {
                                        eax = (t66 & 0xffff0000u) | (uint16_t)cow_fsw(g, d68, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                                        edx = t62;
                                        loc_60_f = (double)(float)d63;
                                        loc_5c_f = (double)(float)d65;
                                        loc_58_f = (double)(float)d67;
                                        x0 = d68;
    COW_AT(1016b9a6)
                                        d69 = fr(g, fr(g, fr(g, fr(g, fr(g, loc_58_f * loc_a0_f) + fr(g, loc_5c_f * loc_a4_f)) + fr(g, loc_60_f * loc_a8_f)) - fr(g, fr(g, fr(g, loc_58_f * (double)rdf32(edx + 8u)) + fr(g, loc_5c_f * (double)rdf32(edx + 4u))) + fr(g, loc_60_f * (double)rdf32(edx)))) * fr(g, (double)rdf32(COW_IMG(0x1032a3f0u)) / x0));
                                        wrf32(sp0 - 0xccu, (float)(double)(float)d69);
                                        if (!((double)(float)d69 < (double)rdf32(COW_IMG(0x103295d8u))))
                                        {
                                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)(float)d69, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                                            loc_cc_f = (double)(float)d69;
    COW_AT(1016ba13)
                                            if ((cow_fsw(g, loc_cc_f, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x100u) != 0u)
                                            {
                                                eax = cow_fsw(g, loc_cc_f, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x100u;
    COW_AT(1016ba2a)
                                                wr32(sp0 - 0xe4u, sp0 - 0x84u);
                                                wr32(sp0 - 0xe8u, sp0 - 0xc8u);
                                                d70 = (double)(float)fr(g, fr(g, loc_cc_f * loc_94_f) + loc_a8_f);
                                                wrf32(sp0 - 0xc8u, (float)d70);
                                                d71 = (double)(float)fr(g, fr(g, loc_cc_f * loc_90_f) + loc_a4_f);
                                                wrf32(sp0 - 0xc4u, (float)d71);
                                                d72 = (double)(float)fr(g, fr(g, loc_cc_f * loc_8c_f) + loc_a0_f);
                                                wrf32(sp0 - 0xc0u, (float)d72);
                                                g->esp = sp0 - 0xe0u;
                                                t73 = cow_call_regs(g, COW_IMG(0x1016c390u), eax, g->ecx, g->edx, 0, 2, sp0 - 0xc8u, sp0 - 0x84u);
                                                eax = t73;
    COW_AT(1016ba6b)
                                                if ((uint8_t)eax == 0u) goto L_1016bc94;
    COW_AT(1016ba73)
                                                d74 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0xc0u) * (double)rdf32(esi + 0x20u)) + fr(g, (double)rdf32(sp0 - 0xc4u) * (double)rdf32(esi + 0x10u))) + fr(g, (double)rdf32(sp0 - 0xc8u) * (double)rdf32(esi))) + (double)rdf32(esi + 0x30u));
                                                wrf32(sp0 - 0xb8u, (float)(double)(float)d74);
                                                d75 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0xc0u) * (double)rdf32(esi + 0x24u)) + fr(g, (double)rdf32(sp0 - 0xc4u) * (double)rdf32(esi + 0x14u))) + fr(g, (double)rdf32(sp0 - 0xc8u) * (double)rdf32(esi + 4u))) + (double)rdf32(esi + 0x34u));
                                                wrf32(sp0 - 0xb4u, (float)(double)(float)d75);
                                                d76 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0xc0u) * (double)rdf32(esi + 0x28u)) + fr(g, (double)rdf32(sp0 - 0xc4u) * (double)rdf32(esi + 0x18u))) + fr(g, (double)rdf32(sp0 - 0xc8u) * (double)rdf32(esi + 8u))) + (double)rdf32(esi + 0x38u));
                                                wrf32(sp0 - 0xb0u, (float)(double)(float)d76);
                                                d77 = fr(g, (double)rdf32(arg1 + 8u) - (double)(float)d76);
                                                d78 = fr(g, (double)rdf32(arg1 + 4u) - (double)(float)d75);
                                                d79 = fr(g, (double)rdf32(arg1) - (double)(float)d74);
                                                d80 = (double)rdf32(sp0 - 0xbcu);
                                                d81 = fr(g, fr(g, fr(g, d77 * d77) + fr(g, d78 * d78)) + fr(g, d79 * d79));
                                                if (d80 <= d81)
                                                {
                                                    x0 = fr(g, fr(g, fr(g, d77 * d77) + fr(g, d78 * d78)) + fr(g, d79 * d79));
                                                    goto L_1016bc92;
                                                }
                                                loc_b8_f = (double)(float)d74;
                                                loc_b4_f = (double)(float)d75;
                                                loc_b0_f = (double)(float)d76;
                                                x0 = fr(g, fr(g, fr(g, d77 * d77) + fr(g, d78 * d78)) + fr(g, d79 * d79));
    COW_AT(1016bb14)
                                                wrf32(sp0 - 0xbcu, (float)(double)(float)x0);
                                                d82 = (double)rdf32(sp0 - 0x58u);
                                                wr32(arg3, cow_f2bits(loc_b8_f));
                                                wr32(arg3 + 4u, cow_f2bits(loc_b4_f));
                                                wr32(arg3 + 8u, cow_f2bits(loc_b0_f));
                                                d83 = fr(g, fr(g, fr(g, d82 * (double)rdf32(esi + 0x98u)) + fr(g, (double)rdf32(sp0 - 0x5cu) * (double)rdf32(esi + 0x8cu))) + fr(g, (double)rdf32(sp0 - 0x60u) * (double)rdf32(esi + 0x80u)));
                                                wrf32(self + 0x3413cu, (float)d83);
                                                d84 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x58u) * (double)rdf32(esi + 0x9cu)) + fr(g, (double)rdf32(sp0 - 0x5cu) * (double)rdf32(esi + 0x90u))) + fr(g, (double)rdf32(sp0 - 0x60u) * (double)rdf32(esi + 0x84u)));
                                                wrf32(self + 0x34140u, (float)d84);
                                                d85 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x58u) * (double)rdf32(esi + 0xa0u)) + fr(g, (double)rdf32(sp0 - 0x5cu) * (double)rdf32(esi + 0x94u))) + fr(g, (double)rdf32(sp0 - 0x60u) * (double)rdf32(esi + 0x88u)));
                                                wrf32(self + 0x34144u, (float)d85);
                                                t86 = (((rd16(ebp + 6u) >> 0xfu) * 2u | rd16(ebp + 4u) >> 0xfu) * 2u | rd16(ebp + 2u) >> 0xfu) * 2u | rd16(ebp) >> 0xfu;
                                                wr32(self + 0x34148u, t86);
                                                t87 = (uint32_t)((int32_t)(rd32(esi + 0xa4u) << 6u) >> 0xcu);
                                                wr32(self + 0x3414cu, t87);
                                                t88 = rd32(esi + 0xa4u) >> 2u & 1u;
                                                wr32(self + 0x34150u, t88);
                                                t89 = rd32(esi + 0xa4u);
                                                t90 = (t89 >> 0x1au & 3u) << 3u | (t89 >> 3u & 7u);
                                                wr32(self + 0x34154u, t90);
                                                t91 = rd32(esi + 0xb0u);
                                                wr32(self + 0x34158u, t91);
                                                t92 = rd8(esi + 0xacu);
                                                wr8(self + 0x3415cu, (uint8_t)t92);
                                                wr8(self + 0x3415du, rd8(esi + 0xadu));
                                                wr8(self + 0x3415eu, rd8(esi + 0xaeu));
                                                wr8(self + 0x3415fu, rd8(esi + 0xafu));
                                                t93 = rd32(esi + 0xa8u);
                                                wr8(sp0 - 0xcdu, 1u);
                                                wr32(self + 0x1807cu, t93);
                                                ecx = rd32(sp0 - 0x88u);
                                                loc_48 = rd32(sp0 - 0x48u);
                                                loc_98 = rd32(sp0 - 0x98u);
                                                loc_9c = rd32(sp0 - 0x9cu);
                                                loc_38 = rd32(sp0 - 0x38u);
                                                loc_30 = rd32(sp0 - 0x30u);
                                                loc_34 = rd32(sp0 - 0x34u);
                                                loc_40 = rd32(sp0 - 0x40u);
                                                loc_44 = rd32(sp0 - 0x44u);
                                                loc_3c = rd32(sp0 - 0x3cu);
                                                loc_88 = rd32(sp0 - 0x88u);
                                                loc_a8_f = (double)rdf32(sp0 - 0xa8u);
                                                loc_a4_f = (double)rdf32(sp0 - 0xa4u);
                                                loc_a0_f = (double)rdf32(sp0 - 0xa0u);
                                                loc_ac = rd32(sp0 - 0xacu);
                                                loc_94_f = (double)rdf32(sp0 - 0x94u);
                                                loc_90_f = (double)rdf32(sp0 - 0x90u);
                                                loc_8c_f = (double)rdf32(sp0 - 0x8cu);
                                            }
                                        }
                                    }
L_1016bc9c: ;
    COW_AT(1016bc9c)
                                    loc_bc = rd32(sp0 - 0xbcu);
                                }
    COW_AT(1016bca3)
                                wr32(sp0 - 0xacu, loc_ac + 1u);
                                if ((int32_t)(loc_ac + 1u) < (int16_t)rd16(ecx + 0xcu))
                                {
                                    eax = loc_ac + 1u;
                                    ebp = ebp + 8u;
                                    loc_ac = loc_ac + 1u;
                                    goto L_1016b8ba;
                                }
                            }
                            else
                            {
                                loc_a8_f = (double)(float)d13;
                                loc_a4_f = (double)(float)d14;
                                loc_a0_f = (double)(float)d15;
                                loc_94_f = d21;
                                loc_90_f = d22;
                                loc_8c_f = d23;
    COW_AT(1016b4aa)
                                if ((int16_t)rd16(ecx + 0xcu) <= 0) goto L_1016bcbb;
                                eax = 0u;
                                loc_ac = 0u;
L_1016b4b4: ;
    COW_AT(1016b4b4)
                                t24 = rd32(rd32(ecx + 4u) + (rd16(ebp + 6u) & 0x7fffu) * 0xcu);
                                wr32(sp0 - 0x60u, t24);
                                t25 = rd32(rd32(ecx + 4u) + (rd16(ebp + 6u) & 0x7fffu) * 0xcu + 4u);
                                wr32(sp0 - 0x5cu, t25);
                                t26 = rd32(rd32(ecx + 4u) + (rd16(ebp + 6u) & 0x7fffu) * 0xcu + 8u);
                                wr32(sp0 - 0x58u, t26);
                                t27 = rd32(ecx) + (rd16(ebp) & 0x7fffu) * 0xcu;
                                d28 = fr(g, cow_bits2f(t24) * (double)rdf32(COW_IMG(0x1032a3f0u)));
                                wr32(sp0 - 0x54u, t27);
                                t29 = rd32(ecx) + (rd16(ebp + 2u) & 0x3fffu) * 0xcu;
                                wr32(sp0 - 0x50u, t29);
                                wrf32(sp0 - 0x60u, (float)(double)(float)d28);
                                d30 = fr(g, cow_bits2f(t25) * (double)rdf32(COW_IMG(0x1032a3f0u)));
                                wrf32(sp0 - 0x5cu, (float)(double)(float)d30);
                                t31 = rd32(ecx) + (rd16(ebp + 4u) & 0x3fffu) * 0xcu;
                                d32 = fr(g, cow_bits2f(t26) * (double)rdf32(COW_IMG(0x1032a3f0u)));
                                wr32(sp0 - 0x4cu, t31);
                                wrf32(sp0 - 0x58u, (float)(double)(float)d32);
                                d33 = fr(g, fr(g, fr(g, d32 * loc_8c_f) + fr(g, (double)(float)d30 * loc_90_f)) + fr(g, (double)(float)d28 * loc_94_f));
                                if (d33 == (double)rdf32(COW_IMG(0x103295d8u)))
                                {
                                    x0 = d33;
    COW_AT(1016b88a)
                                }
                                else
                                {
                                    eax = (t31 & 0xffff0000u) | (uint16_t)cow_fsw(g, d33, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                                    edx = t27;
                                    loc_60_f = (double)(float)d28;
                                    loc_5c_f = (double)(float)d30;
                                    loc_58_f = (double)(float)d32;
                                    x0 = d33;
    COW_AT(1016b596)
                                    d34 = fr(g, fr(g, fr(g, fr(g, fr(g, loc_58_f * loc_a0_f) + fr(g, loc_5c_f * loc_a4_f)) + fr(g, loc_60_f * loc_a8_f)) - fr(g, fr(g, fr(g, loc_58_f * (double)rdf32(edx + 8u)) + fr(g, loc_5c_f * (double)rdf32(edx + 4u))) + fr(g, loc_60_f * (double)rdf32(edx)))) * fr(g, (double)rdf32(COW_IMG(0x1032a3f0u)) / x0));
                                    wrf32(sp0 - 0xccu, (float)(double)(float)d34);
                                    if (!((double)(float)d34 < (double)rdf32(COW_IMG(0x103295d8u))))
                                    {
                                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)(float)d34, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                                        loc_cc_f = (double)(float)d34;
    COW_AT(1016b603)
                                        if ((cow_fsw(g, loc_cc_f, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x100u) != 0u)
                                        {
                                            eax = cow_fsw(g, loc_cc_f, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x100u;
    COW_AT(1016b61a)
                                            wr32(sp0 - 0xe4u, sp0 - 0x84u);
                                            wr32(sp0 - 0xe8u, sp0 - 0xc8u);
                                            d35 = (double)(float)fr(g, fr(g, loc_cc_f * loc_94_f) + loc_a8_f);
                                            wrf32(sp0 - 0xc8u, (float)d35);
                                            d36 = (double)(float)fr(g, fr(g, loc_cc_f * loc_90_f) + loc_a4_f);
                                            wrf32(sp0 - 0xc4u, (float)d36);
                                            d37 = (double)(float)fr(g, fr(g, loc_cc_f * loc_8c_f) + loc_a0_f);
                                            wrf32(sp0 - 0xc0u, (float)d37);
                                            g->esp = sp0 - 0xe0u;
                                            t38 = cow_call_regs(g, COW_IMG(0x1016c390u), eax, g->ecx, g->edx, 0, 2, sp0 - 0xc8u, sp0 - 0x84u);
                                            eax = t38;
    COW_AT(1016b65b)
                                            if ((uint8_t)eax == 0u) goto L_1016b884;
    COW_AT(1016b663)
                                            d39 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0xc0u) * (double)rdf32(esi + 0x20u)) + fr(g, (double)rdf32(sp0 - 0xc4u) * (double)rdf32(esi + 0x10u))) + fr(g, (double)rdf32(sp0 - 0xc8u) * (double)rdf32(esi))) + (double)rdf32(esi + 0x30u));
                                            wrf32(sp0 - 0xb8u, (float)(double)(float)d39);
                                            d40 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0xc0u) * (double)rdf32(esi + 0x24u)) + fr(g, (double)rdf32(sp0 - 0xc4u) * (double)rdf32(esi + 0x14u))) + fr(g, (double)rdf32(sp0 - 0xc8u) * (double)rdf32(esi + 4u))) + (double)rdf32(esi + 0x34u));
                                            wrf32(sp0 - 0xb4u, (float)(double)(float)d40);
                                            d41 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0xc0u) * (double)rdf32(esi + 0x28u)) + fr(g, (double)rdf32(sp0 - 0xc4u) * (double)rdf32(esi + 0x18u))) + fr(g, (double)rdf32(sp0 - 0xc8u) * (double)rdf32(esi + 8u))) + (double)rdf32(esi + 0x38u));
                                            wrf32(sp0 - 0xb0u, (float)(double)(float)d41);
                                            d42 = fr(g, (double)rdf32(arg1 + 8u) - (double)(float)d41);
                                            d43 = fr(g, (double)rdf32(arg1 + 4u) - (double)(float)d40);
                                            d44 = fr(g, (double)rdf32(arg1) - (double)(float)d39);
                                            d45 = (double)rdf32(sp0 - 0xbcu);
                                            d46 = fr(g, fr(g, fr(g, d42 * d42) + fr(g, d43 * d43)) + fr(g, d44 * d44));
                                            if (d45 <= d46)
                                            {
                                                x0 = fr(g, fr(g, fr(g, d42 * d42) + fr(g, d43 * d43)) + fr(g, d44 * d44));
                                                goto L_1016b882;
                                            }
                                            loc_b8_f = (double)(float)d39;
                                            loc_b4_f = (double)(float)d40;
                                            loc_b0_f = (double)(float)d41;
                                            x0 = fr(g, fr(g, fr(g, d42 * d42) + fr(g, d43 * d43)) + fr(g, d44 * d44));
    COW_AT(1016b704)
                                            wrf32(sp0 - 0xbcu, (float)(double)(float)x0);
                                            d47 = (double)rdf32(sp0 - 0x58u);
                                            wr32(arg3, cow_f2bits(loc_b8_f));
                                            wr32(arg3 + 4u, cow_f2bits(loc_b4_f));
                                            wr32(arg3 + 8u, cow_f2bits(loc_b0_f));
                                            d48 = fr(g, fr(g, fr(g, d47 * (double)rdf32(esi + 0x98u)) + fr(g, (double)rdf32(sp0 - 0x5cu) * (double)rdf32(esi + 0x8cu))) + fr(g, (double)rdf32(sp0 - 0x60u) * (double)rdf32(esi + 0x80u)));
                                            wrf32(self + 0x3413cu, (float)d48);
                                            d49 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x58u) * (double)rdf32(esi + 0x9cu)) + fr(g, (double)rdf32(sp0 - 0x5cu) * (double)rdf32(esi + 0x90u))) + fr(g, (double)rdf32(sp0 - 0x60u) * (double)rdf32(esi + 0x84u)));
                                            wrf32(self + 0x34140u, (float)d49);
                                            d50 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x58u) * (double)rdf32(esi + 0xa0u)) + fr(g, (double)rdf32(sp0 - 0x5cu) * (double)rdf32(esi + 0x94u))) + fr(g, (double)rdf32(sp0 - 0x60u) * (double)rdf32(esi + 0x88u)));
                                            wrf32(self + 0x34144u, (float)d50);
                                            t51 = (((rd16(ebp + 6u) >> 0xfu) * 2u | rd16(ebp + 4u) >> 0xfu) * 2u | rd16(ebp + 2u) >> 0xfu) * 2u | rd16(ebp) >> 0xfu;
                                            wr32(self + 0x34148u, t51);
                                            t52 = (uint32_t)((int32_t)(rd32(esi + 0xa4u) << 6u) >> 0xcu);
                                            wr32(self + 0x3414cu, t52);
                                            t53 = rd32(esi + 0xa4u) >> 2u & 1u;
                                            wr32(self + 0x34150u, t53);
                                            t54 = rd32(esi + 0xa4u);
                                            t55 = (t54 >> 0x1au & 3u) << 3u | (t54 >> 3u & 7u);
                                            wr32(self + 0x34154u, t55);
                                            t56 = rd32(esi + 0xb0u);
                                            wr32(self + 0x34158u, t56);
                                            t57 = rd8(esi + 0xacu);
                                            wr8(self + 0x3415cu, (uint8_t)t57);
                                            wr8(self + 0x3415du, rd8(esi + 0xadu));
                                            wr8(self + 0x3415eu, rd8(esi + 0xaeu));
                                            wr8(self + 0x3415fu, rd8(esi + 0xafu));
                                            t58 = rd32(esi + 0xa8u);
                                            wr8(sp0 - 0xcdu, 1u);
                                            wr32(self + 0x1807cu, t58);
                                            ecx = rd32(sp0 - 0x88u);
                                            loc_48 = rd32(sp0 - 0x48u);
                                            loc_98 = rd32(sp0 - 0x98u);
                                            loc_9c = rd32(sp0 - 0x9cu);
                                            loc_38 = rd32(sp0 - 0x38u);
                                            loc_30 = rd32(sp0 - 0x30u);
                                            loc_34 = rd32(sp0 - 0x34u);
                                            loc_40 = rd32(sp0 - 0x40u);
                                            loc_44 = rd32(sp0 - 0x44u);
                                            loc_3c = rd32(sp0 - 0x3cu);
                                            loc_88 = rd32(sp0 - 0x88u);
                                            loc_a8_f = (double)rdf32(sp0 - 0xa8u);
                                            loc_a4_f = (double)rdf32(sp0 - 0xa4u);
                                            loc_a0_f = (double)rdf32(sp0 - 0xa0u);
                                            loc_ac = rd32(sp0 - 0xacu);
                                            loc_94_f = (double)rdf32(sp0 - 0x94u);
                                            loc_90_f = (double)rdf32(sp0 - 0x90u);
                                            loc_8c_f = (double)rdf32(sp0 - 0x8cu);
                                        }
                                    }
                                }
L_1016b88c: ;
    COW_AT(1016b88c)
                                wr32(sp0 - 0xacu, loc_ac + 1u);
                                if ((int32_t)(loc_ac + 1u) < (int16_t)rd16(ecx + 0xcu))
                                {
                                    eax = loc_ac + 1u;
                                    ebp = ebp + 8u;
                                    loc_bc = rd32(sp0 - 0xbcu);
                                    loc_ac = loc_ac + 1u;
                                    goto L_1016b4b4;
                                }
    COW_AT(1016b8a4)
                                loc_bc = rd32(sp0 - 0xbcu);
                            }
                        }
                    }
                }
            }
L_1016bcbb: ;
    COW_AT(1016bcbb)
            wr32(sp0 - 0x44u, loc_44 + 8u);
            wr32(sp0 - 0x3cu, loc_3c - 1u);
            if (loc_3c != 1u)
            {
                eax = loc_3c - 1u;
                edx = loc_44 + 8u;
                loc_44 = loc_44 + 8u;
                loc_3c = loc_3c - 1u;
                goto L_1016b378;
            }
            edx = loc_44 + 8u;
        }
    }
    else
    {
        edx = eax + 4u;
        eax = rd32(eax) & 0x7ffu;
    COW_AT(1016b361)
        edx = eax * 8u + edx;
    }
    COW_AT(1016bce1)
    if (rd32(edx) != 0u)
    {
        eax = rd32(edx);
        goto L_1016b349;
    }
    COW_AT(1016bceb)
    ecx = loc_40;
    edx = loc_34;
L_1016bcf9: ;
    COW_AT(1016bcf9)
    wr32(sp0 - 0x40u, ecx + 1u);
    if ((int32_t)(ecx + 1u) <= (int32_t)loc_98)
    {
        loc_40 = ecx + 1u;
        ecx = ecx + 1u;
        goto L_1016b333;
    }
    ecx = ecx + 1u;
L_1016bd0d: ;
    COW_AT(1016bd0d)
    wr32(sp0 - 0x34u, edx + 1u);
    if ((int32_t)(edx + 1u) <= (int32_t)loc_9c)
    {
        loc_34 = edx + 1u;
        edx = edx + 1u;
        goto L_1016b317;
    }
    eax = loc_9c;
    edx = edx + 1u;
L_1016bd21: ;
    COW_AT(1016bd21)
    wr32(sp0 - 0xe4u, 6u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xe0u;
    t94 = cow_cdecl(g, COW_IMG(0x10193890u), 1, 6u);
    t95 = g->edx;
    eax = t94;
    edx = t95;
    COW_AT(1016bd28)
    if ((uint8_t)eax == 0u)
    {
    COW_AT(1016bd33)
        if (rd32(COW_IMG(0x106631d4u)) != 0u)
        {
            ecx = rd32(COW_IMG(0x106631d4u));
    COW_AT(1016bd41)
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0xe0u;
            t96 = cow_stdcall(g, COW_IMG(0x101d5fe0u), 0);
            t97 = g->ecx;
            t98 = g->edx;
            eax = t96;
            ecx = t97;
            edx = t98;
    COW_AT(1016bd46)
            if ((uint8_t)eax == 0u)
            {
    COW_AT(1016bd4a)
                g->eax = eax;
                g->esp = sp0 - 0xe0u;
                t99 = cow_call_regs(g, COW_IMG(0x10085240u), g->eax, g->ecx, edx, 1, 0);
                t100 = g->edx;
                eax = t99;
                edx = t100;
    COW_AT(1016bd4f)
                if (eax == 0u) goto L_1016bdc8;
                esi = eax;
L_1016bd55: ;
    COW_AT(1016bd55)
                wr32(sp0 - 0xe4u, COW_IMG(0x10330684u));
                g->eax = eax;
                g->esp = sp0 - 0xe0u;
                t101 = cow_fastcall(g, COW_IMG(0x1002c8f0u), esi, edx, 1, COW_IMG(0x10330684u));
                t102 = g->edx;
                eax = t101;
                edx = t102;
    COW_AT(1016bd61)
                if ((uint8_t)eax != 0u)
                {
    COW_AT(1016bd65)
                    if (esi != 0u)
                    {
    COW_AT(1016bd69)
                        wr32(sp0 - 0xe4u, sp0 - 0x10u);
                        wr32(sp0 - 0xe8u, sp0 - 0x20u);
                        g->eax = sp0 - 0x10u;
                        g->edx = edx;
                        g->esp = sp0 - 0xe0u;
                        t103 = cow_thiscall(g, COW_IMG(0x100c4bc0u), esi, 2, sp0 - 0x20u, sp0 - 0x10u);
                        t104 = g->edx;
                        eax = t103;
                        edx = t104;
    COW_AT(1016bd80)
                        if (eax != 0u)
                        {
    COW_AT(1016bd84)
                            wr32(sp0 - 0xe4u, arg3);
                            wr32(sp0 - 0xe8u, arg2);
                            wr32(sp0 - 0xecu, arg1);
                            wr32(sp0 - 0xf0u, sp0 - 0x10u);
                            wr32(sp0 - 0xf4u, sp0 - 0x20u);
                            wr32(sp0 - 0xf8u, eax);
                            wr32(sp0 - 0xfcu, sp0 - 0xbcu);
                            g->eax = eax;
                            g->edx = sp0 - 0xbcu;
                            g->esp = sp0 - 0xe0u;
                            t105 = cow_thiscall(g, COW_IMG(0x1016c5d0u), self, 7, sp0 - 0xbcu, eax, sp0 - 0x20u, sp0 - 0x10u, arg1, arg2, arg3);
                            t106 = g->edx;
                            eax = t105;
                            edx = t106;
    COW_AT(1016bdb2)
                            if ((uint8_t)eax != 0u)
                            {
    COW_AT(1016bdb6)
                                wr8(sp0 - 0xcdu, 1u);
                            }
                        }
                    }
                }
    COW_AT(1016bdbb)
                g->eax = eax;
                g->esp = sp0 - 0xe0u;
                t107 = cow_fastcall(g, COW_IMG(0x10085270u), esi, edx, 0);
                t108 = g->edx;
                eax = t107;
                edx = t108;
    COW_AT(1016bdc2)
                if (eax != 0u)
                {
                    esi = eax;
                    goto L_1016bd55;
                }
            }
        }
    }
L_1016bdc8: ;
    COW_AT(1016bdc8)
    g->ebx = rd32(sp0 - 0xd4u);
    g->esi = rd32(sp0 - 0xdcu);
    g->edi = rd32(sp0 - 0xe0u);
    g->ebp = rd32(sp0 - 0xd8u);
    return (eax & 0xffffff00u) | rd8(sp0 - 0xcdu);
L_1016b882: ;
    COW_AT(1016b882)
L_1016b884: ;
    COW_AT(1016b884)
    ecx = rd32(sp0 - 0x88u);
    loc_48 = rd32(sp0 - 0x48u);
    loc_98 = rd32(sp0 - 0x98u);
    loc_9c = rd32(sp0 - 0x9cu);
    loc_38 = rd32(sp0 - 0x38u);
    loc_30 = rd32(sp0 - 0x30u);
    loc_34 = rd32(sp0 - 0x34u);
    loc_40 = rd32(sp0 - 0x40u);
    loc_44 = rd32(sp0 - 0x44u);
    loc_3c = rd32(sp0 - 0x3cu);
    loc_88 = rd32(sp0 - 0x88u);
    loc_a8_f = (double)rdf32(sp0 - 0xa8u);
    loc_a4_f = (double)rdf32(sp0 - 0xa4u);
    loc_a0_f = (double)rdf32(sp0 - 0xa0u);
    loc_ac = rd32(sp0 - 0xacu);
    loc_94_f = (double)rdf32(sp0 - 0x94u);
    loc_90_f = (double)rdf32(sp0 - 0x90u);
    loc_8c_f = (double)rdf32(sp0 - 0x8cu);
    goto L_1016b88c;
L_1016bc92: ;
    COW_AT(1016bc92)
L_1016bc94: ;
    COW_AT(1016bc94)
    ecx = rd32(sp0 - 0x88u);
    loc_48 = rd32(sp0 - 0x48u);
    loc_98 = rd32(sp0 - 0x98u);
    loc_9c = rd32(sp0 - 0x9cu);
    loc_38 = rd32(sp0 - 0x38u);
    loc_30 = rd32(sp0 - 0x30u);
    loc_34 = rd32(sp0 - 0x34u);
    loc_40 = rd32(sp0 - 0x40u);
    loc_44 = rd32(sp0 - 0x44u);
    loc_3c = rd32(sp0 - 0x3cu);
    loc_88 = rd32(sp0 - 0x88u);
    loc_a8_f = (double)rdf32(sp0 - 0xa8u);
    loc_a4_f = (double)rdf32(sp0 - 0xa4u);
    loc_a0_f = (double)rdf32(sp0 - 0xa0u);
    loc_ac = rd32(sp0 - 0xacu);
    loc_94_f = (double)rdf32(sp0 - 0x94u);
    loc_90_f = (double)rdf32(sp0 - 0x90u);
    loc_8c_f = (double)rdf32(sp0 - 0x8cu);
    goto L_1016bc9c;
L_1016bdd9: ;
    COW_AT(1016bdd9)
    g->ebx = loc_d4;
    g->esi = loc_dc;
    g->edi = loc_e0;
    g->ebp = loc_d8;
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1016b1d0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1016b1f1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0xe0u);
        in_esi = rd32(sp0 - 0xdcu);
        in_ebp = rd32(sp0 - 0xd8u);
        in_ebx = rd32(sp0 - 0xd4u);
        g->esp = sp0 - 0xe0u;
        g->edi = self;
        (void)sp0;
        return 1;
    }
    case 0x1016b208u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0xe0u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016b212u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0xe0u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016b21du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0xe0u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016b22eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0xe0u;
        (void)sp0;
        return 1;
    }
    case 0x1016b236u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0xe0u;
        (void)sp0;
        return 1;
    }
    case 0x1016b241u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0xe0u;
        (void)sp0;
        return 1;
    }
    case 0x1016b248u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0xe0u;
        (void)sp0;
        return 1;
    }
    case 0x1016b255u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0xe0u;
        (void)sp0;
        return 1;
    }
    case 0x1016b263u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0xe0u;
        (void)sp0;
        return 1;
    }
    case 0x1016b26au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0xe0u;
        (void)sp0;
        return 1;
    }
    case 0x1016b271u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0xe0u;
        (void)sp0;
        return 1;
    }
    case 0x1016b27bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0xe0u;
        (void)sp0;
        return 1;
    }
    case 0x1016b286u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_48;
        uint32_t loc_98;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_98 = rd32(sp0 - 0x98u);
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0xe0u;
        (void)sp0;
        return 1;
    }
    case 0x1016b28au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_48;
        uint32_t loc_98;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_98 = rd32(sp0 - 0x98u);
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0xe0u;
        (void)sp0;
        return 1;
    }
    case 0x1016b291u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_48;
        uint32_t loc_98;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_98 = rd32(sp0 - 0x98u);
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0xe0u;
        (void)sp0;
        return 1;
    }
    case 0x1016b295u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_48;
        uint32_t loc_98;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_98 = rd32(sp0 - 0x98u);
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0xe0u;
        (void)sp0;
        return 1;
    }
    case 0x1016b29cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_48;
        uint32_t loc_98;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_98 = rd32(sp0 - 0x98u);
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0xe0u;
        (void)sp0;
        return 1;
    }
    case 0x1016b29eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_48;
        uint32_t loc_98;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_98 = rd32(sp0 - 0x98u);
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0xe0u;
        (void)sp0;
        return 1;
    }
    case 0x1016b2a5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_48;
        uint32_t loc_98;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_98 = rd32(sp0 - 0x98u);
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0xe0u;
        (void)sp0;
        return 1;
    }
    case 0x1016b2afu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_48;
        uint32_t loc_98;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_98 = rd32(sp0 - 0x98u);
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0xe0u;
        (void)sp0;
        return 1;
    }
    case 0x1016b2bau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_48;
        uint32_t loc_98;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0xe0u;
        (void)sp0;
        return 1;
    }
    case 0x1016b2beu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_48;
        uint32_t loc_98;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0xe0u;
        (void)sp0;
        return 1;
    }
    case 0x1016b2d9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_48;
        uint32_t loc_98;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0xe0u;
        g->edx = arg2;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016b2e1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_48;
        uint32_t loc_98;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0xe0u;
        g->edx = arg2;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016b2e7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_48;
        uint32_t loc_98;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0xe0u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016b317u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        double loc_58_f;
        double loc_5c_f;
        double loc_60_f;
        uint32_t loc_88;
        double loc_8c_f;
        double loc_90_f;
        double loc_94_f;
        uint32_t loc_98;
        uint32_t loc_9c;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        uint32_t loc_ac;
        double loc_b0_f;
        double loc_b4_f;
        double loc_b8_f;
        uint32_t loc_bc;
        double loc_cc_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_cc_f = rdf32(sp0 - 0xccu);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8_f = rdf32(sp0 - 0xb8u);
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0_f = rdf32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_60_f = rdf32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0xe0u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016b333u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        double loc_58_f;
        double loc_5c_f;
        double loc_60_f;
        uint32_t loc_88;
        double loc_8c_f;
        double loc_90_f;
        double loc_94_f;
        uint32_t loc_98;
        uint32_t loc_9c;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        uint32_t loc_ac;
        double loc_b0_f;
        double loc_b4_f;
        double loc_b8_f;
        uint32_t loc_bc;
        double loc_cc_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_cc_f = rdf32(sp0 - 0xccu);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8_f = rdf32(sp0 - 0xb8u);
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0_f = rdf32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_60_f = rdf32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0xe0u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016b349u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        double loc_58_f;
        double loc_5c_f;
        double loc_60_f;
        uint32_t loc_88;
        double loc_8c_f;
        double loc_90_f;
        double loc_94_f;
        uint32_t loc_98;
        uint32_t loc_9c;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        uint32_t loc_ac;
        double loc_b0_f;
        double loc_b4_f;
        double loc_b8_f;
        uint32_t loc_bc;
        double loc_cc_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_cc_f = rdf32(sp0 - 0xccu);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8_f = rdf32(sp0 - 0xb8u);
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0_f = rdf32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_60_f = rdf32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0xe0u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016b361u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        double loc_58_f;
        double loc_5c_f;
        double loc_60_f;
        uint32_t loc_88;
        double loc_8c_f;
        double loc_90_f;
        double loc_94_f;
        uint32_t loc_98;
        uint32_t loc_9c;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        uint32_t loc_ac;
        double loc_b0_f;
        double loc_b4_f;
        double loc_b8_f;
        uint32_t loc_bc;
        double loc_cc_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_cc_f = rdf32(sp0 - 0xccu);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8_f = rdf32(sp0 - 0xb8u);
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0_f = rdf32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_60_f = rdf32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0xe0u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016b369u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        double loc_58_f;
        double loc_5c_f;
        double loc_60_f;
        uint32_t loc_88;
        double loc_8c_f;
        double loc_90_f;
        double loc_94_f;
        uint32_t loc_98;
        uint32_t loc_9c;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        uint32_t loc_ac;
        double loc_b0_f;
        double loc_b4_f;
        double loc_b8_f;
        uint32_t loc_bc;
        double loc_cc_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_cc_f = rdf32(sp0 - 0xccu);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8_f = rdf32(sp0 - 0xb8u);
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0_f = rdf32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_60_f = rdf32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0xe0u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016b371u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        double loc_58_f;
        double loc_5c_f;
        double loc_60_f;
        uint32_t loc_88;
        double loc_8c_f;
        double loc_90_f;
        double loc_94_f;
        uint32_t loc_98;
        uint32_t loc_9c;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        uint32_t loc_ac;
        double loc_b0_f;
        double loc_b4_f;
        double loc_b8_f;
        uint32_t loc_bc;
        double loc_cc_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_cc_f = rdf32(sp0 - 0xccu);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8_f = rdf32(sp0 - 0xb8u);
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0_f = rdf32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_60_f = rdf32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0xe0u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016b378u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        double loc_58_f;
        double loc_5c_f;
        double loc_60_f;
        uint32_t loc_88;
        double loc_8c_f;
        double loc_90_f;
        double loc_94_f;
        uint32_t loc_98;
        uint32_t loc_9c;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        uint32_t loc_ac;
        double loc_b0_f;
        double loc_b4_f;
        double loc_b8_f;
        uint32_t loc_bc;
        double loc_cc_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_cc_f = rdf32(sp0 - 0xccu);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8_f = rdf32(sp0 - 0xb8u);
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0_f = rdf32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_60_f = rdf32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0xe0u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016b387u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        double loc_58_f;
        double loc_5c_f;
        double loc_60_f;
        uint32_t loc_88;
        double loc_8c_f;
        double loc_90_f;
        double loc_94_f;
        uint32_t loc_98;
        uint32_t loc_9c;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        uint32_t loc_ac;
        double loc_b0_f;
        double loc_b4_f;
        double loc_b8_f;
        uint32_t loc_bc;
        double loc_cc_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_cc_f = rdf32(sp0 - 0xccu);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8_f = rdf32(sp0 - 0xb8u);
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0_f = rdf32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_60_f = rdf32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0xe0u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016b3a6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        double loc_58_f;
        double loc_5c_f;
        double loc_60_f;
        uint32_t loc_88;
        double loc_8c_f;
        double loc_90_f;
        double loc_94_f;
        uint32_t loc_98;
        uint32_t loc_9c;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        uint32_t loc_ac;
        double loc_b0_f;
        double loc_b4_f;
        double loc_b8_f;
        uint32_t loc_bc;
        double loc_cc_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_cc_f = rdf32(sp0 - 0xccu);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8_f = rdf32(sp0 - 0xb8u);
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0_f = rdf32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_60_f = rdf32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0xe0u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016b3beu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        double loc_58_f;
        double loc_5c_f;
        double loc_60_f;
        uint32_t loc_88;
        double loc_8c_f;
        double loc_90_f;
        double loc_94_f;
        uint32_t loc_98;
        uint32_t loc_9c;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        uint32_t loc_ac;
        double loc_b0_f;
        double loc_b4_f;
        double loc_b8_f;
        uint32_t loc_bc;
        double loc_cc_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_cc_f = rdf32(sp0 - 0xccu);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8_f = rdf32(sp0 - 0xb8u);
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0_f = rdf32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_60_f = rdf32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0xe0u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016b3cfu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        double loc_58_f;
        double loc_5c_f;
        double loc_60_f;
        uint32_t loc_88;
        double loc_8c_f;
        double loc_90_f;
        double loc_94_f;
        uint32_t loc_98;
        uint32_t loc_9c;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        uint32_t loc_ac;
        double loc_b0_f;
        double loc_b4_f;
        double loc_b8_f;
        uint32_t loc_bc;
        double loc_cc_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_cc_f = rdf32(sp0 - 0xccu);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8_f = rdf32(sp0 - 0xb8u);
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0_f = rdf32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_60_f = rdf32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0xe0u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016b4aau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        double loc_58_f;
        double loc_5c_f;
        double loc_60_f;
        uint32_t loc_88;
        double loc_8c_f;
        double loc_90_f;
        double loc_94_f;
        uint32_t loc_98;
        uint32_t loc_9c;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        double loc_b0_f;
        double loc_b4_f;
        double loc_b8_f;
        uint32_t loc_bc;
        double loc_cc_f;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_cc_f = rdf32(sp0 - 0xccu);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8_f = rdf32(sp0 - 0xb8u);
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0_f = rdf32(sp0 - 0xb0u);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_60_f = rdf32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0xe0u;
        g->eax = 0u;
        g->ebx = arg1;
        wr32(sp0 - 0xacu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1016b4b4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        double loc_58_f;
        double loc_5c_f;
        double loc_60_f;
        uint32_t loc_88;
        double loc_8c_f;
        double loc_90_f;
        double loc_94_f;
        uint32_t loc_98;
        uint32_t loc_9c;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        uint32_t loc_ac;
        double loc_b0_f;
        double loc_b4_f;
        double loc_b8_f;
        uint32_t loc_bc;
        double loc_cc_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_cc_f = rdf32(sp0 - 0xccu);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8_f = rdf32(sp0 - 0xb8u);
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0_f = rdf32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_60_f = rdf32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0xe0u;
        (void)sp0;
        return 1;
    }
    case 0x1016b596u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        double loc_58_f;
        double loc_5c_f;
        double loc_60_f;
        uint32_t loc_88;
        double loc_8c_f;
        double loc_90_f;
        double loc_94_f;
        uint32_t loc_98;
        uint32_t loc_9c;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        uint32_t loc_ac;
        double loc_b0_f;
        double loc_b4_f;
        double loc_b8_f;
        uint32_t loc_bc;
        double loc_cc_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_cc_f = rdf32(sp0 - 0xccu);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8_f = rdf32(sp0 - 0xb8u);
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0_f = rdf32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_60_f = rdf32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xe0u;
        (void)sp0;
        return 1;
    }
    case 0x1016b603u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        double loc_58_f;
        double loc_5c_f;
        double loc_60_f;
        uint32_t loc_88;
        double loc_8c_f;
        double loc_90_f;
        double loc_94_f;
        uint32_t loc_98;
        uint32_t loc_9c;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        uint32_t loc_ac;
        double loc_b0_f;
        double loc_b4_f;
        double loc_b8_f;
        uint32_t loc_bc;
        double loc_cc_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_cc_f = rdf32(sp0 - 0xccu);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8_f = rdf32(sp0 - 0xb8u);
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0_f = rdf32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_60_f = rdf32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0xe0u;
        (void)sp0;
        return 1;
    }
    case 0x1016b61au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        double loc_58_f;
        double loc_5c_f;
        double loc_60_f;
        uint32_t loc_88;
        double loc_8c_f;
        double loc_90_f;
        double loc_94_f;
        uint32_t loc_98;
        uint32_t loc_9c;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        uint32_t loc_ac;
        double loc_b0_f;
        double loc_b4_f;
        double loc_b8_f;
        uint32_t loc_bc;
        double loc_cc_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_cc_f = rdf32(sp0 - 0xccu);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8_f = rdf32(sp0 - 0xb8u);
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0_f = rdf32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_60_f = rdf32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0xe0u;
        (void)sp0;
        return 1;
    }
    case 0x1016b65bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0xe0u;
        wr32(sp0 - 0xe8u, sp0 - 0xc8u);
        wr32(sp0 - 0xe4u, sp0 - 0x84u);
        (void)sp0;
        return 1;
    }
    case 0x1016b663u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0xe0u;
        wr32(sp0 - 0xe8u, sp0 - 0xc8u);
        wr32(sp0 - 0xe4u, sp0 - 0x84u);
        (void)sp0;
        return 1;
    }
    case 0x1016b704u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_b0_f;
        double loc_b4_f;
        double loc_b8_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_b8_f = rdf32(sp0 - 0xb8u);
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0_f = rdf32(sp0 - 0xb0u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xe0u;
        wr32(sp0 - 0xe8u, sp0 - 0xc8u);
        wr32(sp0 - 0xe4u, sp0 - 0x84u);
        (void)sp0;
        return 1;
    }
    case 0x1016b882u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_b0_f;
        double loc_b4_f;
        double loc_b8_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_b8_f = rdf32(sp0 - 0xb8u);
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0_f = rdf32(sp0 - 0xb0u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xe0u;
        wr32(sp0 - 0xe8u, sp0 - 0xc8u);
        wr32(sp0 - 0xe4u, sp0 - 0x84u);
        (void)sp0;
        return 1;
    }
    case 0x1016b884u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_b0_f;
        double loc_b4_f;
        double loc_b8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_b8_f = rdf32(sp0 - 0xb8u);
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0_f = rdf32(sp0 - 0xb0u);
        g->esp = sp0 - 0xe0u;
        wr32(sp0 - 0xe8u, sp0 - 0xc8u);
        wr32(sp0 - 0xe4u, sp0 - 0x84u);
        (void)sp0;
        return 1;
    }
    case 0x1016b88au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        double loc_58_f;
        double loc_5c_f;
        double loc_60_f;
        uint32_t loc_88;
        double loc_8c_f;
        double loc_90_f;
        double loc_94_f;
        uint32_t loc_98;
        uint32_t loc_9c;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        uint32_t loc_ac;
        double loc_b0_f;
        double loc_b4_f;
        double loc_b8_f;
        uint32_t loc_bc;
        double loc_cc_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_cc_f = rdf32(sp0 - 0xccu);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8_f = rdf32(sp0 - 0xb8u);
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0_f = rdf32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_60_f = rdf32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xe0u;
        (void)sp0;
        return 1;
    }
    case 0x1016b88cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        double loc_58_f;
        double loc_5c_f;
        double loc_60_f;
        uint32_t loc_88;
        double loc_8c_f;
        double loc_90_f;
        double loc_94_f;
        uint32_t loc_98;
        uint32_t loc_9c;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        uint32_t loc_ac;
        double loc_b0_f;
        double loc_b4_f;
        double loc_b8_f;
        double loc_cc_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_cc_f = rdf32(sp0 - 0xccu);
        loc_b8_f = rdf32(sp0 - 0xb8u);
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0_f = rdf32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_60_f = rdf32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0xe0u;
        (void)sp0;
        return 1;
    }
    case 0x1016b8a4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        double loc_58_f;
        double loc_5c_f;
        double loc_60_f;
        uint32_t loc_88;
        double loc_8c_f;
        double loc_90_f;
        double loc_94_f;
        uint32_t loc_98;
        uint32_t loc_9c;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        uint32_t loc_ac;
        double loc_b0_f;
        double loc_b4_f;
        double loc_b8_f;
        double loc_cc_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_cc_f = rdf32(sp0 - 0xccu);
        loc_b8_f = rdf32(sp0 - 0xb8u);
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0_f = rdf32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_60_f = rdf32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0xe0u;
        (void)sp0;
        return 1;
    }
    case 0x1016b8b0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        double loc_58_f;
        double loc_5c_f;
        double loc_60_f;
        uint32_t loc_88;
        double loc_8c_f;
        double loc_90_f;
        double loc_94_f;
        uint32_t loc_98;
        uint32_t loc_9c;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        double loc_b0_f;
        double loc_b4_f;
        double loc_b8_f;
        uint32_t loc_bc;
        double loc_cc_f;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_cc_f = rdf32(sp0 - 0xccu);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8_f = rdf32(sp0 - 0xb8u);
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0_f = rdf32(sp0 - 0xb0u);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_60_f = rdf32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0xe0u;
        g->eax = 0u;
        g->ebx = arg1;
        wr32(sp0 - 0xacu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1016b8bau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        double loc_58_f;
        double loc_5c_f;
        double loc_60_f;
        uint32_t loc_88;
        double loc_8c_f;
        double loc_90_f;
        double loc_94_f;
        uint32_t loc_98;
        uint32_t loc_9c;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        uint32_t loc_ac;
        double loc_b0_f;
        double loc_b4_f;
        double loc_b8_f;
        uint32_t loc_bc;
        double loc_cc_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_cc_f = rdf32(sp0 - 0xccu);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8_f = rdf32(sp0 - 0xb8u);
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0_f = rdf32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_60_f = rdf32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0xe0u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016b8c4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        double loc_58_f;
        double loc_5c_f;
        double loc_60_f;
        uint32_t loc_88;
        double loc_8c_f;
        double loc_90_f;
        double loc_94_f;
        uint32_t loc_98;
        uint32_t loc_9c;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        uint32_t loc_ac;
        double loc_b0_f;
        double loc_b4_f;
        double loc_b8_f;
        uint32_t loc_bc;
        double loc_cc_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_cc_f = rdf32(sp0 - 0xccu);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8_f = rdf32(sp0 - 0xb8u);
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0_f = rdf32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_60_f = rdf32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0xe0u;
        (void)sp0;
        return 1;
    }
    case 0x1016b9a6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        double loc_58_f;
        double loc_5c_f;
        double loc_60_f;
        uint32_t loc_88;
        double loc_8c_f;
        double loc_90_f;
        double loc_94_f;
        uint32_t loc_98;
        uint32_t loc_9c;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        uint32_t loc_ac;
        double loc_b0_f;
        double loc_b4_f;
        double loc_b8_f;
        uint32_t loc_bc;
        double loc_cc_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_cc_f = rdf32(sp0 - 0xccu);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8_f = rdf32(sp0 - 0xb8u);
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0_f = rdf32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_60_f = rdf32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xe0u;
        (void)sp0;
        return 1;
    }
    case 0x1016ba13u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        double loc_58_f;
        double loc_5c_f;
        double loc_60_f;
        uint32_t loc_88;
        double loc_8c_f;
        double loc_90_f;
        double loc_94_f;
        uint32_t loc_98;
        uint32_t loc_9c;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        uint32_t loc_ac;
        double loc_b0_f;
        double loc_b4_f;
        double loc_b8_f;
        uint32_t loc_bc;
        double loc_cc_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_cc_f = rdf32(sp0 - 0xccu);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8_f = rdf32(sp0 - 0xb8u);
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0_f = rdf32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_60_f = rdf32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0xe0u;
        (void)sp0;
        return 1;
    }
    case 0x1016ba2au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        double loc_58_f;
        double loc_5c_f;
        double loc_60_f;
        uint32_t loc_88;
        double loc_8c_f;
        double loc_90_f;
        double loc_94_f;
        uint32_t loc_98;
        uint32_t loc_9c;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        uint32_t loc_ac;
        double loc_b0_f;
        double loc_b4_f;
        double loc_b8_f;
        uint32_t loc_bc;
        double loc_cc_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_cc_f = rdf32(sp0 - 0xccu);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8_f = rdf32(sp0 - 0xb8u);
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0_f = rdf32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_60_f = rdf32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0xe0u;
        (void)sp0;
        return 1;
    }
    case 0x1016ba6bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0xe0u;
        wr32(sp0 - 0xe8u, sp0 - 0xc8u);
        wr32(sp0 - 0xe4u, sp0 - 0x84u);
        (void)sp0;
        return 1;
    }
    case 0x1016ba73u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0xe0u;
        wr32(sp0 - 0xe8u, sp0 - 0xc8u);
        wr32(sp0 - 0xe4u, sp0 - 0x84u);
        (void)sp0;
        return 1;
    }
    case 0x1016bb14u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_b0_f;
        double loc_b4_f;
        double loc_b8_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_b8_f = rdf32(sp0 - 0xb8u);
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0_f = rdf32(sp0 - 0xb0u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xe0u;
        wr32(sp0 - 0xe8u, sp0 - 0xc8u);
        wr32(sp0 - 0xe4u, sp0 - 0x84u);
        (void)sp0;
        return 1;
    }
    case 0x1016bc92u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_b0_f;
        double loc_b4_f;
        double loc_b8_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_b8_f = rdf32(sp0 - 0xb8u);
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0_f = rdf32(sp0 - 0xb0u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xe0u;
        wr32(sp0 - 0xe8u, sp0 - 0xc8u);
        wr32(sp0 - 0xe4u, sp0 - 0x84u);
        (void)sp0;
        return 1;
    }
    case 0x1016bc94u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_b0_f;
        double loc_b4_f;
        double loc_b8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_b8_f = rdf32(sp0 - 0xb8u);
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0_f = rdf32(sp0 - 0xb0u);
        g->esp = sp0 - 0xe0u;
        wr32(sp0 - 0xe8u, sp0 - 0xc8u);
        wr32(sp0 - 0xe4u, sp0 - 0x84u);
        (void)sp0;
        return 1;
    }
    case 0x1016bc9au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        double loc_58_f;
        double loc_5c_f;
        double loc_60_f;
        uint32_t loc_88;
        double loc_8c_f;
        double loc_90_f;
        double loc_94_f;
        uint32_t loc_98;
        uint32_t loc_9c;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        uint32_t loc_ac;
        double loc_b0_f;
        double loc_b4_f;
        double loc_b8_f;
        uint32_t loc_bc;
        double loc_cc_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_cc_f = rdf32(sp0 - 0xccu);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8_f = rdf32(sp0 - 0xb8u);
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0_f = rdf32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_60_f = rdf32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xe0u;
        (void)sp0;
        return 1;
    }
    case 0x1016bc9cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        double loc_58_f;
        double loc_5c_f;
        double loc_60_f;
        uint32_t loc_88;
        double loc_8c_f;
        double loc_90_f;
        double loc_94_f;
        uint32_t loc_98;
        uint32_t loc_9c;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        uint32_t loc_ac;
        double loc_b0_f;
        double loc_b4_f;
        double loc_b8_f;
        double loc_cc_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_cc_f = rdf32(sp0 - 0xccu);
        loc_b8_f = rdf32(sp0 - 0xb8u);
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0_f = rdf32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_60_f = rdf32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0xe0u;
        (void)sp0;
        return 1;
    }
    case 0x1016bca3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        double loc_58_f;
        double loc_5c_f;
        double loc_60_f;
        uint32_t loc_88;
        double loc_8c_f;
        double loc_90_f;
        double loc_94_f;
        uint32_t loc_98;
        uint32_t loc_9c;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        uint32_t loc_ac;
        double loc_b0_f;
        double loc_b4_f;
        double loc_b8_f;
        uint32_t loc_bc;
        double loc_cc_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_cc_f = rdf32(sp0 - 0xccu);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8_f = rdf32(sp0 - 0xb8u);
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0_f = rdf32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_60_f = rdf32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0xe0u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016bcbbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        double loc_58_f;
        double loc_5c_f;
        double loc_60_f;
        uint32_t loc_88;
        double loc_8c_f;
        double loc_90_f;
        double loc_94_f;
        uint32_t loc_98;
        uint32_t loc_9c;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        uint32_t loc_ac;
        double loc_b0_f;
        double loc_b4_f;
        double loc_b8_f;
        uint32_t loc_bc;
        double loc_cc_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_cc_f = rdf32(sp0 - 0xccu);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8_f = rdf32(sp0 - 0xb8u);
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0_f = rdf32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_60_f = rdf32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0xe0u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016bce1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        double loc_58_f;
        double loc_5c_f;
        double loc_60_f;
        uint32_t loc_88;
        double loc_8c_f;
        double loc_90_f;
        double loc_94_f;
        uint32_t loc_98;
        uint32_t loc_9c;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        uint32_t loc_ac;
        double loc_b0_f;
        double loc_b4_f;
        double loc_b8_f;
        uint32_t loc_bc;
        double loc_cc_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_cc_f = rdf32(sp0 - 0xccu);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8_f = rdf32(sp0 - 0xb8u);
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0_f = rdf32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_60_f = rdf32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0xe0u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016bcebu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        double loc_58_f;
        double loc_5c_f;
        double loc_60_f;
        uint32_t loc_88;
        double loc_8c_f;
        double loc_90_f;
        double loc_94_f;
        uint32_t loc_98;
        uint32_t loc_9c;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        uint32_t loc_ac;
        double loc_b0_f;
        double loc_b4_f;
        double loc_b8_f;
        uint32_t loc_bc;
        double loc_cc_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_cc_f = rdf32(sp0 - 0xccu);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8_f = rdf32(sp0 - 0xb8u);
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0_f = rdf32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_60_f = rdf32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0xe0u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016bcf9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        double loc_58_f;
        double loc_5c_f;
        double loc_60_f;
        uint32_t loc_88;
        double loc_8c_f;
        double loc_90_f;
        double loc_94_f;
        uint32_t loc_98;
        uint32_t loc_9c;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        uint32_t loc_ac;
        double loc_b0_f;
        double loc_b4_f;
        double loc_b8_f;
        uint32_t loc_bc;
        double loc_cc_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_cc_f = rdf32(sp0 - 0xccu);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8_f = rdf32(sp0 - 0xb8u);
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0_f = rdf32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_60_f = rdf32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0xe0u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016bd0du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        double loc_58_f;
        double loc_5c_f;
        double loc_60_f;
        uint32_t loc_88;
        double loc_8c_f;
        double loc_90_f;
        double loc_94_f;
        uint32_t loc_98;
        uint32_t loc_9c;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        uint32_t loc_ac;
        double loc_b0_f;
        double loc_b4_f;
        double loc_b8_f;
        uint32_t loc_bc;
        double loc_cc_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_cc_f = rdf32(sp0 - 0xccu);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8_f = rdf32(sp0 - 0xb8u);
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0_f = rdf32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_60_f = rdf32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0xe0u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016bd21u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        double loc_58_f;
        double loc_5c_f;
        double loc_60_f;
        uint32_t loc_88;
        double loc_8c_f;
        double loc_90_f;
        double loc_94_f;
        uint32_t loc_98;
        uint32_t loc_9c;
        double loc_a0_f;
        double loc_a4_f;
        double loc_a8_f;
        uint32_t loc_ac;
        double loc_b0_f;
        double loc_b4_f;
        double loc_b8_f;
        uint32_t loc_bc;
        double loc_cc_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_cc_f = rdf32(sp0 - 0xccu);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b8_f = rdf32(sp0 - 0xb8u);
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0_f = rdf32(sp0 - 0xb0u);
        loc_ac = rd32(sp0 - 0xacu);
        loc_a8_f = rdf32(sp0 - 0xa8u);
        loc_a4_f = rdf32(sp0 - 0xa4u);
        loc_a0_f = rdf32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94_f = rdf32(sp0 - 0x94u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_60_f = rdf32(sp0 - 0x60u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        loc_58_f = rdf32(sp0 - 0x58u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0xe0u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016bd28u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0xe4u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016bd33u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0xe0u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016bd41u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0xe0u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016bd46u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0xe0u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016bd4au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0xe0u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016bd4fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0xe0u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016bd55u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0xe0u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016bd61u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0xe0u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016bd65u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0xe0u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016bd69u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0xe0u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016bd80u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0xe0u;
        g->ebx = arg1;
        wr32(sp0 - 0xe8u, sp0 - 0x20u);
        wr32(sp0 - 0xe4u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1016bd84u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0xe0u;
        g->ebx = arg1;
        wr32(sp0 - 0xe8u, sp0 - 0x20u);
        wr32(sp0 - 0xe4u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1016bdb2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0xe0u;
        g->ebx = arg1;
        wr32(sp0 - 0xfcu, sp0 - 0xbcu);
        wr32(sp0 - 0xf4u, sp0 - 0x20u);
        wr32(sp0 - 0xf0u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1016bdb6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0xe0u;
        g->ebx = arg1;
        wr32(sp0 - 0xfcu, sp0 - 0xbcu);
        wr32(sp0 - 0xf4u, sp0 - 0x20u);
        wr32(sp0 - 0xf0u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1016bdbbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0xe0u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016bdc2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0xe0u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016bdc8u:
    {
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
        g->esp = sp0 - 0xe0u;
        (void)sp0;
        return 1;
    }
    case 0x1016bdd9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_d4;
        uint32_t loc_d8;
        uint32_t loc_dc;
        uint32_t loc_e0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_e0 = rd32(sp0 - 0xe0u);
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        g->esp = sp0 - 0xe0u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1016b1d0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1016b1d0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
