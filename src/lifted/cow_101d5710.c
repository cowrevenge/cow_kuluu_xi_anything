/* f_0x101d5710 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101d5710(Guest* g)
{
    double d22;
    double d24;
    double d25;
    double d26;
    double d27;
    double d31;
    double d32;
    double d35;
    double d36;
    double d4;
    double d48;
    double d51;
    double d60;
    double d62;
    double d63;
    double d64;
    double d65;
    double d66;
    double d67;
    double d68;
    double d69;
    double d70;
    double d71;
    double d72;
    double d73;
    double d74;
    double d75;
    double d76;
    double d77;
    double d78;
    double d79;
    double d80;
    double d81;
    double d82;
    double d83;
    double d84;
    double d85;
    double d86;
    double d87;
    double d91;
    double d92;
    double d94;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    double loc_34_f;
    double loc_3c_f;
    double loc_40_f;
    double loc_44_f;
    uint32_t loc_48;
    uint32_t loc_4c;
    uint32_t loc_50;
    uint32_t loc_54;
    uint32_t loc_58;
    uint32_t loc_8;
    uint32_t loc_c;
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
    uint32_t t23;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t33;
    uint32_t t34;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t61;
    uint32_t t7;
    uint32_t t8;
    uint32_t t88;
    uint32_t t89;
    uint32_t t9;
    uint32_t t90;
    uint32_t t93;
    double x0;
    double x1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 96u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101d575eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x58u); in_esi = rd32(sp0 - 0x54u); in_ebp = rd32(sp0 - 0x50u); in_ebx = rd32(sp0 - 0x4cu); g->ebp = rd32(sp0 - 0x50u); g->ebx = rd32(sp0 - 0x4cu); g->edi = rd32(sp0 - 0x58u); g->esi = rd32(sp0 - 0x54u); goto E_101d575e;
    case 0x101d5770u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x58u); in_esi = rd32(sp0 - 0x54u); in_ebp = rd32(sp0 - 0x50u); in_ebx = rd32(sp0 - 0x4cu); loc_24 = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x50u); g->ebx = rd32(sp0 - 0x4cu); g->edi = rd32(sp0 - 0x58u); g->esi = rd32(sp0 - 0x54u); goto E_101d5770;
    case 0x101d577cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x58u); in_esi = rd32(sp0 - 0x54u); in_ebp = rd32(sp0 - 0x50u); in_ebx = rd32(sp0 - 0x4cu); loc_24 = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x50u); g->ebx = rd32(sp0 - 0x4cu); g->edi = rd32(sp0 - 0x58u); g->esi = rd32(sp0 - 0x54u); goto E_101d577c;
    case 0x101d5784u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x58u); in_esi = rd32(sp0 - 0x54u); in_ebp = rd32(sp0 - 0x50u); in_ebx = rd32(sp0 - 0x4cu); loc_24 = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x50u); g->ebx = rd32(sp0 - 0x4cu); g->edi = rd32(sp0 - 0x58u); g->esi = rd32(sp0 - 0x54u); goto E_101d5784;
    case 0x101d578fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x58u); in_esi = rd32(sp0 - 0x54u); in_ebp = rd32(sp0 - 0x50u); in_ebx = rd32(sp0 - 0x4cu); loc_24 = rd32(sp0 - 0x24u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x50u); g->ebx = rd32(sp0 - 0x4cu); g->edi = rd32(sp0 - 0x58u); g->esi = rd32(sp0 - 0x54u); goto E_101d578f;
    case 0x101d57a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x58u); in_esi = rd32(sp0 - 0x54u); in_ebp = rd32(sp0 - 0x50u); in_ebx = rd32(sp0 - 0x4cu); loc_24 = rd32(sp0 - 0x24u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x50u); g->ebx = rd32(sp0 - 0x4cu); g->edi = rd32(sp0 - 0x58u); g->esi = rd32(sp0 - 0x54u); goto E_101d57a9;
    case 0x101d57b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x58u); in_esi = rd32(sp0 - 0x54u); in_ebp = rd32(sp0 - 0x50u); in_ebx = rd32(sp0 - 0x4cu); loc_34_f = rdf32(sp0 - 0x34u); loc_24 = rd32(sp0 - 0x24u); loc_8 = rd32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 0x50u); g->ebx = rd32(sp0 - 0x4cu); g->edi = rd32(sp0 - 0x58u); g->esi = rd32(sp0 - 0x54u); goto E_101d57b5;
    case 0x101d57c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101d57c3;
    case 0x101d57d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101d57d3;
    case 0x101d57e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101d57e2;
    case 0x101d57ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101d57ec;
    case 0x101d57f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101d57f3;
    case 0x101d57feu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101d57fe;
    case 0x101d5806u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101d5806;
    case 0x101d5812u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101d5812;
    case 0x101d581cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101d581c;
    case 0x101d5832u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101d5832;
    case 0x101d5839u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101d5839;
    case 0x101d5845u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_40_f = rdf32(sp0 - 0x40u); goto E_101d5845;
    case 0x101d5871u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101d5871;
    case 0x101d58a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101d58a6;
    case 0x101d58b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101d58b4;
    case 0x101d58c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101d58c2;
    case 0x101d58d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_101d58d0;
    case 0x101d58e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_101d58e1;
    case 0x101d58ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_44_f = rdf32(sp0 - 0x44u); goto E_101d58eb;
    case 0x101d5904u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_48 = rd32(sp0 - 0x48u); loc_40_f = rdf32(sp0 - 0x40u); loc_3c_f = rdf32(sp0 - 0x3cu); loc_2c = rd32(sp0 - 0x2cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_101d5904;
    case 0x101d5916u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_48 = rd32(sp0 - 0x48u); loc_40_f = rdf32(sp0 - 0x40u); loc_3c_f = rdf32(sp0 - 0x3cu); loc_2c = rd32(sp0 - 0x2cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_101d5916;
    case 0x101d591eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_48 = rd32(sp0 - 0x48u); loc_40_f = rdf32(sp0 - 0x40u); loc_3c_f = rdf32(sp0 - 0x3cu); loc_2c = rd32(sp0 - 0x2cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_101d591e;
    case 0x101d5928u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_48 = rd32(sp0 - 0x48u); loc_40_f = rdf32(sp0 - 0x40u); loc_3c_f = rdf32(sp0 - 0x3cu); loc_2c = rd32(sp0 - 0x2cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_101d5928;
    case 0x101d592du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101d592d;
    case 0x101d5937u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101d5937;
    case 0x101d593cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101d593c;
    case 0x101d5944u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101d5944;
    case 0x101d5948u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101d5948;
    case 0x101d594fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101d594f;
    case 0x101d5953u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101d5953;
    case 0x101d5958u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101d5958;
    case 0x101d5960u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101d5960;
    case 0x101d596au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101d596a;
    case 0x101d597eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101d597e;
    case 0x101d5991u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101d5991;
    case 0x101d5997u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101d5997;
    case 0x101d599eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101d599e;
    case 0x101d59a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101d59a2;
    case 0x101d59aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101d59ae;
    case 0x101d59b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101d59b8;
    case 0x101d59cau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); goto E_101d59ca;
    case 0x101d59d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); goto E_101d59d1;
    case 0x101d59dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); goto E_101d59df;
    case 0x101d59edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); goto E_101d59ed;
    case 0x101d59f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); goto E_101d59f7;
    case 0x101d59ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_101d59ff;
    case 0x101d5a03u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); goto E_101d5a03;
    case 0x101d5a0bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); goto E_101d5a0b;
    case 0x101d5a20u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_101d5a20;
    case 0x101d5a22u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_101d5a22;
    case 0x101d5a37u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_101d5a37;
    case 0x101d5a39u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_101d5a39;
    case 0x101d5a4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); goto E_101d5a4e;
    case 0x101d5a63u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); goto E_101d5a63;
    case 0x101d5a67u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); goto E_101d5a67;
    case 0x101d5a7eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); goto E_101d5a7e;
    case 0x101d5a84u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); goto E_101d5a84;
    case 0x101d5a99u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); goto E_101d5a99;
    case 0x101d5aaau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); goto E_101d5aaa;
    case 0x101d5ab0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); goto E_101d5ab0;
    case 0x101d5ab6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); goto E_101d5ab6;
    case 0x101d5ac9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); goto E_101d5ac9;
    case 0x101d5ad1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_101d5ad1;
    case 0x101d5ad9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_101d5ad9;
    case 0x101d5ae8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); goto E_101d5ae8;
    case 0x101d5afdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_101d5afd;
    case 0x101d5affu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_101d5aff;
    case 0x101d5b14u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_101d5b14;
    case 0x101d5b16u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_101d5b16;
    case 0x101d5b25u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); goto E_101d5b25;
    case 0x101d5b36u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); goto E_101d5b36;
    case 0x101d5b3au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); goto E_101d5b3a;
    case 0x101d5b51u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); goto E_101d5b51;
    case 0x101d5b53u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); goto E_101d5b53;
    case 0x101d5b5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); goto E_101d5b5f;
    case 0x101d5b72u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); goto E_101d5b72;
    case 0x101d5b7au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_101d5b7a;
    case 0x101d5b82u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_101d5b82;
    case 0x101d5b91u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); goto E_101d5b91;
    case 0x101d5ba6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_101d5ba6;
    case 0x101d5ba8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_101d5ba8;
    case 0x101d5bbdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_101d5bbd;
    case 0x101d5bbfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_101d5bbf;
    case 0x101d5bccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); goto E_101d5bcc;
    case 0x101d5bedu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); goto E_101d5bed;
    case 0x101d5bf9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); loc_28 = rd32(sp0 - 0x28u); loc_8 = rd32(sp0 - 8u); goto E_101d5bf9;
    case 0x101d5c00u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101d5c00;
    case 0x101d5c04u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101d5c04;
    case 0x101d5c13u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101d5c13;
    case 0x101d5c1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_48 = rd32(sp0 - 0x48u); loc_40_f = rdf32(sp0 - 0x40u); loc_3c_f = rdf32(sp0 - 0x3cu); loc_2c = rd32(sp0 - 0x2cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_101d5c1f;
    case 0x101d5c34u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_48 = rd32(sp0 - 0x48u); loc_40_f = rdf32(sp0 - 0x40u); loc_3c_f = rdf32(sp0 - 0x3cu); loc_2c = rd32(sp0 - 0x2cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_101d5c34;
    case 0x101d5c54u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_48 = rd32(sp0 - 0x48u); loc_40_f = rdf32(sp0 - 0x40u); loc_3c_f = rdf32(sp0 - 0x3cu); loc_2c = rd32(sp0 - 0x2cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_101d5c54;
    case 0x101d5c69u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_48 = rd32(sp0 - 0x48u); loc_40_f = rdf32(sp0 - 0x40u); loc_3c_f = rdf32(sp0 - 0x3cu); loc_2c = rd32(sp0 - 0x2cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_101d5c69;
    case 0x101d5c6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_48 = rd32(sp0 - 0x48u); loc_40_f = rdf32(sp0 - 0x40u); loc_3c_f = rdf32(sp0 - 0x3cu); loc_2c = rd32(sp0 - 0x2cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_101d5c6b;
    case 0x101d5c78u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_48 = rd32(sp0 - 0x48u); loc_40_f = rdf32(sp0 - 0x40u); loc_3c_f = rdf32(sp0 - 0x3cu); loc_2c = rd32(sp0 - 0x2cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_101d5c78;
    case 0x101d5c80u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_48 = rd32(sp0 - 0x48u); loc_40_f = rdf32(sp0 - 0x40u); loc_3c_f = rdf32(sp0 - 0x3cu); loc_2c = rd32(sp0 - 0x2cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_101d5c80;
    case 0x101d5c84u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_48 = rd32(sp0 - 0x48u); loc_40_f = rdf32(sp0 - 0x40u); loc_3c_f = rdf32(sp0 - 0x3cu); loc_2c = rd32(sp0 - 0x2cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_101d5c84;
    case 0x101d5c88u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_48 = rd32(sp0 - 0x48u); loc_40_f = rdf32(sp0 - 0x40u); loc_3c_f = rdf32(sp0 - 0x3cu); loc_2c = rd32(sp0 - 0x2cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_101d5c88;
    case 0x101d5c8fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_48 = rd32(sp0 - 0x48u); loc_40_f = rdf32(sp0 - 0x40u); loc_3c_f = rdf32(sp0 - 0x3cu); loc_2c = rd32(sp0 - 0x2cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_101d5c8f;
    case 0x101d5c9du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_48 = rd32(sp0 - 0x48u); loc_40_f = rdf32(sp0 - 0x40u); loc_3c_f = rdf32(sp0 - 0x3cu); loc_2c = rd32(sp0 - 0x2cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_101d5c9d;
    case 0x101d5ca0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_40_f = rdf32(sp0 - 0x40u); loc_3c_f = rdf32(sp0 - 0x3cu); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_101d5ca0;
    default: break;
    }
#endif

    COW_AT(101d5710)
    wr32(sp0 - 0x4cu, in_ebx);
    wr32(sp0 - 0x50u, in_ebp);
    t1 = rd32(sp0 + 4u);
    wr32(sp0 - 0x54u, in_esi);
    wr32(sp0 - 0x58u, in_edi);
    wr32(sp0 - 0x20u, self);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x28u, 0x4e6e6b28u);
    wr32(sp0 - 0x2cu, 0x4e6e6b28u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x44u, 0u);
    if (rd32(COW_IMG(0x10480af0u) + (uint16_t)t1 * 4u) == 0u)
    {
        eax = t1;
        loc_4c = in_ebx;
        loc_50 = in_ebp;
        loc_54 = in_esi;
        loc_58 = in_edi;
        goto L_101d5ca0;
    }
    eax = t1;
    ecx = rd32(COW_IMG(0x10480af0u) + (uint16_t)t1 * 4u);
    COW_AT(101d575e)
    t2 = rd32(ecx + 0xa0u);
    wr32(sp0 - 0x24u, t2);
    if (rd32(ecx + 0xa0u) == 0u)
    {
        loc_4c = in_ebx;
        loc_50 = in_ebp;
        loc_54 = in_esi;
        loc_58 = in_edi;
        goto L_101d5ca0;
    }
    edi = t2;
    loc_24 = t2;
    COW_AT(101d5770)
    if (rd32(sp0 + 8u) != 0u)
    {
        ecx = rd32(sp0 + 8u);
        edx = rd32(sp0 + 0xcu);
        goto L_101d5784;
    }
    ecx = rd32(sp0 + 8u);
    edx = rd32(sp0 + 0xcu);
    COW_AT(101d577c)
    if (edx == 0u)
    {
        loc_4c = in_ebx;
        loc_50 = in_ebp;
        loc_54 = in_esi;
        loc_58 = in_edi;
        goto L_101d5ca0;
    }
L_101d5784: ;
    COW_AT(101d5784)
    wr32(sp0 - 8u, edi);
    if (rd8(self + 0x24u) != 2u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x24u);
        loc_8 = edi;
    COW_AT(101d57a9)
        d4 = (double)(float)(double)(int32_t)rd32(sp0 + 8u);
        wrf32(sp0 - 0x34u, (float)d4);
        loc_34_f = d4;
        x0 = (double)(int32_t)rd32(sp0 + 0xcu);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x24u);
        loc_8 = edi;
    COW_AT(101d578f)
        wr32(sp0 + 8u, -ecx);
        t3 = rd32(sp0 + 8u);
        wr32(sp0 + 8u, -edx);
        wrf32(sp0 - 0x34u, (float)(double)(float)(double)(int32_t)t3);
        loc_34_f = (double)(float)(double)(int32_t)t3;
        x0 = (double)(int32_t)rd32(sp0 + 8u);
    }
    COW_AT(101d57b5)
    wrf32(sp0 - 0x30u, (float)(double)(float)x0);
    g->eax = eax;
    g->esp = sp0 - 0x58u;
    t5 = cow_thiscall(g, rd32(rd32(edi) + 0x1bcu), edi, 0);
    eax = t5;
    COW_AT(101d57c3)
    t6 = rd32(eax);
    t7 = rd32(edi);
    wr32(sp0 + 4u, t6);
    g->eax = t6;
    g->edx = t7;
    g->esp = sp0 - 0x58u;
    t8 = cow_thiscall(g, rd32(t7 + 0x1bcu), edi, 0);
    t9 = g->edx;
    eax = t8;
    edx = t9;
    COW_AT(101d57d3)
    wr32(sp0 - 0x5cu, edi);
    t10 = rd32(eax + 8u);
    wr32(sp0 - 0x40u, t10);
    g->eax = t10;
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    t11 = cow_thiscall(g, COW_IMG(0x101d3ef0u), self, 1, edi);
    t12 = g->edx;
    eax = t11;
    edx = t12;
    COW_AT(101d57e2)
    if (eax == 0u)
    {
        loc_44_f = (double)rdf32(sp0 - 0x44u);
        goto L_101d58eb;
    }
    esi = eax;
    COW_AT(101d57ec)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    t13 = cow_thiscall(g, COW_IMG(0x101cead0u), esi, 0);
    t14 = g->edx;
    eax = t13;
    edx = t14;
    COW_AT(101d57f3)
    wr32(sp0 - 0x1cu, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    t15 = cow_thiscall(g, COW_IMG(0x101cebe0u), esi, 0);
    t16 = g->edx;
    eax = t15;
    edx = t16;
    COW_AT(101d57fe)
    if ((uint8_t)eax == 0u) goto L_101d58c2;
    COW_AT(101d5806)
    wr32(sp0 - 0x5cu, sp0 + 0xcu);
    g->eax = eax;
    g->esp = sp0 - 0x58u;
    t17 = cow_thiscall(g, COW_IMG(0x101ce0e0u), esi, 1, sp0 + 0xcu);
    eax = t17;
    COW_AT(101d5812)
    g->eax = eax;
    g->edx = rd32(edi);
    t18 = rd32(edi);
    g->esp = sp0 - 0x58u;
    t19 = cow_thiscall(g, rd32(t18 + 0x1bcu), edi, 0);
    t20 = g->edx;
    eax = t19;
    edx = t20;
    COW_AT(101d581c)
    t21 = rd32(sp0 + 0xcu);
    d22 = (double)rdf32(eax + 4u);
    wrf32(sp0 + 8u, (float)-d22);
    if (t21 > 3u)
    {
        eax = t21;
        loc_44_f = (double)rdf32(sp0 - 0x44u);
        goto L_101d58eb;
    }
    eax = t21;
    COW_AT(101d5832)
    t23 = rd32(COW_IMG(0x101d5cacu) + eax * 4u);
    switch (t23 - RD)
    {
    case 0x101d5839u: goto L_101d5839;
    case 0x101d5871u: goto L_101d5871;
    case 0x101d58a6u: goto L_101d58a6;
    case 0x101d58b4u: goto L_101d58b4;
    default: rt_fatal(g, COW_IMG(0x101d5832u), "switch");
    }
    return 0;
L_101d5839: ;
    COW_AT(101d5839)
    d27 = fr(g, (double)rdf32(sp0 + 8u) + (double)rdf32(sp0 - 0x40u));
    wrf32(sp0 - 0x40u, (float)(double)(float)d27);
    loc_40_f = (double)(float)d27;
L_101d5845: ;
    COW_AT(101d5845)
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x44u, 0u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x10u, self + 0x4cu);
    wr32(sp0 - 0x18u, 0u);
    ebx = self + 0x4cu;
    ebp = self;
    loc_48 = 0u;
    loc_14 = 0u;
    loc_10 = self + 0x4cu;
    loc_18 = 0u;
    loc_c = rd32(sp0 - 0xcu);
    loc_2c = rd32(sp0 - 0x2cu);
L_101d591e: ;
    COW_AT(101d591e)
    if (rd32(ebx) == 0u) goto L_101d5c1f;
    ecx = rd32(ebx);
    COW_AT(101d5928)
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    t37 = cow_call_regs(g, COW_IMG(0x101cd9a0u), eax, ecx, g->edx, 1, 0);
    t38 = g->ecx;
    t39 = g->edx;
    eax = t37;
    ecx = t38;
    edx = t39;
    COW_AT(101d592d)
    if (eax == 0u)
    {
        loc_48 = rd32(sp0 - 0x48u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_40_f = (double)rdf32(sp0 - 0x40u);
        loc_c = rd32(sp0 - 0xcu);
        loc_2c = rd32(sp0 - 0x2cu);
        goto L_101d5c1f;
    }
    esi = eax;
    COW_AT(101d5937)
    g->eax = eax;
    g->esp = sp0 - 0x58u;
    t40 = cow_call_regs(g, COW_IMG(0x10085240u), g->eax, g->ecx, edx, 1, 0);
    t41 = g->edx;
    eax = t40;
    edx = t41;
    COW_AT(101d593c)
    if (eax == 0u)
    {
        loc_48 = rd32(sp0 - 0x48u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_40_f = (double)rdf32(sp0 - 0x40u);
        loc_c = rd32(sp0 - 0xcu);
        loc_2c = rd32(sp0 - 0x2cu);
        goto L_101d5c1f;
    }
L_101d5944: ;
    COW_AT(101d5944)
    if (eax == esi) goto L_101d5958;
    COW_AT(101d5948)
    g->eax = eax;
    g->esp = sp0 - 0x58u;
    t42 = cow_fastcall(g, COW_IMG(0x10085270u), eax, edx, 0);
    t43 = g->edx;
    eax = t42;
    edx = t43;
    COW_AT(101d594f)
    if (eax != 0u) goto L_101d5944;
    COW_AT(101d5953)
    loc_48 = rd32(sp0 - 0x48u);
    loc_14 = rd32(sp0 - 0x14u);
    loc_10 = rd32(sp0 - 0x10u);
    loc_18 = rd32(sp0 - 0x18u);
    loc_40_f = (double)rdf32(sp0 - 0x40u);
    loc_c = rd32(sp0 - 0xcu);
    loc_2c = rd32(sp0 - 0x2cu);
L_101d5c1f: ;
    COW_AT(101d5c1f)
    wr32(sp0 - 0x18u, loc_18 + 1u);
    if ((int32_t)(loc_18 + 1u) < 81)
    {
        eax = loc_18 + 1u;
        ebx = ebx + 4u;
        loc_18 = loc_18 + 1u;
        goto L_101d5916;
    }
    COW_AT(101d5c34)
    wr32(sp0 - 0x14u, loc_14 + 1u);
    wr32(sp0 - 0x10u, loc_10 + 0x144u);
    if ((int32_t)(loc_14 + 1u) < 2)
    {
        eax = loc_14 + 1u;
        ebx = loc_10 + 0x144u;
        loc_14 = loc_14 + 1u;
        loc_10 = loc_10 + 0x144u;
        goto L_101d5904;
    }
    eax = loc_14 + 1u;
    COW_AT(101d5c54)
    d94 = fr(g, cow_bits2f(loc_2c) - (double)rdf32(sp0 - 0x28u));
    if (!(d94 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d94, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = d94;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d94, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = d94;
    COW_AT(101d5c69)
        x0 = -x0;
    }
    COW_AT(101d5c6b)
    if (!(x0 < (double)rdf32(COW_IMG(0x1032a378u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a378u)), 0u);
        goto L_101d5c80;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a378u)), 0u);
    COW_AT(101d5c78)
    if (loc_c != 0u)
    {
        esi = loc_c;
        goto L_101d5c88;
    }
L_101d5c80: ;
    COW_AT(101d5c80)
    esi = rd32(sp0 - 8u);
L_101d5c84: ;
    COW_AT(101d5c84)
    if (esi == 0u) goto L_101d5c9d;
L_101d5c88: ;
    COW_AT(101d5c88)
    if (rd32(esi + 0x70u) == 0u)
    {
        eax = rd32(esi + 0x70u);
        goto L_101d5c9d;
    }
    eax = rd32(esi + 0x70u);
    COW_AT(101d5c8f)
    g->ebx = rd32(sp0 - 0x4cu);
    g->esi = rd32(sp0 - 0x54u);
    g->edi = rd32(sp0 - 0x58u);
    g->ebp = rd32(sp0 - 0x50u);
    return (eax & 0xffff0000u) | rd16(eax + 0x74u);
L_101d5871: ;
    COW_AT(101d5871)
    d26 = fr(g, (double)rdf32(sp0 - 0x40u) - (double)rdf32(sp0 + 8u));
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x44u, 0u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x10u, self + 0x4cu);
    wr32(sp0 - 0x18u, 0u);
    wrf32(sp0 - 0x40u, (float)(double)(float)d26);
    ebx = self + 0x4cu;
    ebp = self;
    loc_48 = 0u;
    loc_14 = 0u;
    loc_10 = self + 0x4cu;
    loc_18 = 0u;
    loc_40_f = (double)(float)d26;
    loc_c = rd32(sp0 - 0xcu);
    loc_2c = rd32(sp0 - 0x2cu);
    goto L_101d591e;
L_101d58a6: ;
    COW_AT(101d58a6)
    d25 = fr(g, (double)rdf32(sp0 + 8u) + (double)rdf32(sp0 + 4u));
    wrf32(sp0 + 4u, (float)d25);
    loc_40_f = (double)rdf32(sp0 - 0x40u);
    goto L_101d5845;
L_101d58b4: ;
    COW_AT(101d58b4)
    d24 = fr(g, (double)rdf32(sp0 + 4u) - (double)rdf32(sp0 + 8u));
    wrf32(sp0 + 4u, (float)d24);
    loc_40_f = (double)rdf32(sp0 - 0x40u);
    goto L_101d5845;
L_101d58c2: ;
    COW_AT(101d58c2)
    t28 = rd32(esi + 0x6cu);
    wr32(sp0 - 0x38u, t28);
    g->eax = t28;
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    t29 = cow_thiscall(g, COW_IMG(0x101ceb90u), esi, 0);
    t30 = g->edx;
    d31 = cow_take_float(g);
    eax = t29;
    edx = t30;
    x0 = d31;
    COW_AT(101d58d0)
    d32 = fr(g, x0 * (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0x48u, (float)(double)(float)d32);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    t33 = cow_thiscall(g, COW_IMG(0x101cebb0u), esi, 0);
    t34 = g->edx;
    d35 = cow_take_float(g);
    eax = t33;
    edx = t34;
    x0 = d35;
    COW_AT(101d58e1)
    d36 = fr(g, x0 * (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0x44u, (float)(double)(float)d36);
    loc_44_f = (double)(float)d36;
L_101d58eb: ;
    COW_AT(101d58eb)
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x10u, self + 0x4cu);
    wr32(sp0 - 0x18u, 0u);
    ebx = self + 0x4cu;
    ebp = self;
    loc_48 = rd32(sp0 - 0x48u);
    loc_14 = 0u;
    loc_10 = self + 0x4cu;
    loc_18 = 0u;
    loc_40_f = (double)rdf32(sp0 - 0x40u);
    loc_c = rd32(sp0 - 0xcu);
    loc_2c = rd32(sp0 - 0x2cu);
    goto L_101d591e;
L_101d5904: ;
    COW_AT(101d5904)
    wr32(sp0 - 0x18u, 0u);
    ebp = rd32(sp0 - 0x20u);
    edi = rd32(sp0 - 0x24u);
    loc_18 = 0u;
    goto L_101d591e;
L_101d5916: ;
    COW_AT(101d5916)
    ebp = rd32(sp0 - 0x20u);
    edi = rd32(sp0 - 0x24u);
    goto L_101d591e;
L_101d5958: ;
    COW_AT(101d5958)
    if (esi == edi)
    {
        loc_48 = rd32(sp0 - 0x48u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_40_f = (double)rdf32(sp0 - 0x40u);
        loc_c = rd32(sp0 - 0xcu);
        loc_2c = rd32(sp0 - 0x2cu);
        goto L_101d5c1f;
    }
    COW_AT(101d5960)
    g->eax = eax;
    g->edx = rd32(esi);
    t44 = rd32(esi);
    g->esp = sp0 - 0x58u;
    t45 = cow_thiscall(g, rd32(t44 + 0x1bcu), esi, 0);
    t46 = g->edx;
    eax = t45;
    edx = t46;
    COW_AT(101d596a)
    t47 = rd32(esi);
    d48 = fr(g, (double)rdf32(eax) - (double)rdf32(sp0 + 4u));
    wrf32(sp0 + 0xcu, (float)d48);
    g->eax = t47;
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    t49 = cow_thiscall(g, rd32(t47 + 0x1bcu), esi, 0);
    t50 = g->edx;
    eax = t49;
    edx = t50;
    COW_AT(101d597e)
    d51 = fr(g, (double)rdf32(eax + 8u) - (double)rdf32(sp0 - 0x40u));
    wr32(sp0 - 0x5cu, esi);
    wrf32(sp0 + 8u, (float)d51);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    t52 = cow_thiscall(g, COW_IMG(0x101d3ef0u), ebp, 1, esi);
    t53 = g->edx;
    eax = t52;
    edx = t53;
    COW_AT(101d5991)
    if (eax == 0u) goto L_101d5a03;
    edi = eax;
    COW_AT(101d5997)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    t54 = cow_thiscall(g, COW_IMG(0x101cebe0u), edi, 0);
    t55 = g->edx;
    eax = t54;
    edx = t55;
    COW_AT(101d599e)
    if ((uint8_t)eax == 0u) goto L_101d5a03;
    COW_AT(101d59a2)
    wr32(sp0 - 0x5cu, sp0 - 4u);
    g->eax = eax;
    g->esp = sp0 - 0x58u;
    t56 = cow_thiscall(g, COW_IMG(0x101ce0e0u), edi, 1, sp0 - 4u);
    eax = t56;
    COW_AT(101d59ae)
    g->eax = eax;
    g->edx = rd32(esi);
    t57 = rd32(esi);
    g->esp = sp0 - 0x58u;
    t58 = cow_thiscall(g, rd32(t57 + 0x1bcu), esi, 0);
    t59 = g->edx;
    eax = t58;
    edx = t59;
    COW_AT(101d59b8)
    d60 = (double)(float)-(double)rdf32(eax + 4u);
    wrf32(sp0 - 0x3cu, (float)d60);
    if (rd32(sp0 - 4u) > 3u) goto L_101d5a03;
    eax = rd32(sp0 - 4u);
    loc_3c_f = d60;
    COW_AT(101d59ca)
    t61 = rd32(COW_IMG(0x101d5cbcu) + eax * 4u);
    switch (t61 - RD)
    {
    case 0x101d59d1u: goto L_101d59d1;
    case 0x101d59dfu: goto L_101d59df;
    case 0x101d59edu: goto L_101d59ed;
    case 0x101d59f7u: goto L_101d59f7;
    default: rt_fatal(g, COW_IMG(0x101d59cau), "switch");
    }
    return 0;
L_101d59d1: ;
    COW_AT(101d59d1)
    d63 = fr(g, loc_3c_f + (double)rdf32(sp0 + 8u));
    wrf32(sp0 + 8u, (float)d63);
L_101d5a03: ;
    COW_AT(101d5a03)
    if (rd32(sp0 - 0x1cu) != 0u)
    {
        eax = rd32(sp0 - 0x1cu);
        goto L_101d5a4e;
    }
    eax = rd32(sp0 - 0x1cu);
    COW_AT(101d5a0b)
    d64 = (double)rdf32(sp0 + 0xcu);
    if (!(d64 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d64, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = (double)rdf32(sp0 + 0xcu);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d64, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = (double)rdf32(sp0 + 0xcu);
    COW_AT(101d5a20)
        x0 = -x0;
    }
    COW_AT(101d5a22)
    d65 = (double)rdf32(sp0 + 8u);
    if (!(d65 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d65, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        x1 = (double)rdf32(sp0 + 8u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d65, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        x1 = (double)rdf32(sp0 + 8u);
    COW_AT(101d5a37)
        x1 = -x1;
    }
    COW_AT(101d5a39)
    d66 = fr(g, x1 + x0);
    if (d66 < (double)rdf32(COW_IMG(0x1032a378u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d66, (double)rdf32(COW_IMG(0x1032a378u)), 1u);
        goto L_101d5c84;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d66, (double)rdf32(COW_IMG(0x1032a378u)), 1u);
L_101d5a4e: ;
    COW_AT(101d5a4e)
    d67 = (double)rdf32(sp0 - 0x34u);
    if (!(d67 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d67, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        ecx = rd32(sp0 - 0x38u);
        goto L_101d5ab6;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d67, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    ecx = rd32(sp0 - 0x38u);
    COW_AT(101d5a63)
    if (ecx == 0u) goto L_101d5a84;
    COW_AT(101d5a67)
    d68 = (double)rdf32(sp0 + 0xcu);
    if ((cow_fsw(g, d68, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u) == 0u)
    {
        loc_48 = rd32(sp0 - 0x48u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_40_f = (double)rdf32(sp0 - 0x40u);
        loc_c = rd32(sp0 - 0xcu);
        loc_2c = rd32(sp0 - 0x2cu);
        goto L_101d5c1f;
    }
    eax = cow_fsw(g, d68, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
    COW_AT(101d5a7e)
    x0 = (double)rdf32(sp0 + 0xcu);
L_101d5afd: ;
    COW_AT(101d5afd)
    x0 = -x0;
L_101d5aff: ;
    COW_AT(101d5aff)
    d75 = (double)rdf32(sp0 + 8u);
    if (!(d75 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d75, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        x1 = (double)rdf32(sp0 + 8u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d75, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        x1 = (double)rdf32(sp0 + 8u);
    COW_AT(101d5b14)
        x1 = -x1;
    }
    COW_AT(101d5b16)
    if (x0 < x1)
    {
        loc_48 = rd32(sp0 - 0x48u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_40_f = (double)rdf32(sp0 - 0x40u);
        loc_c = rd32(sp0 - 0xcu);
        loc_2c = rd32(sp0 - 0x2cu);
        goto L_101d5c1f;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, x1, 0u);
L_101d5b25: ;
    COW_AT(101d5b25)
    d76 = (double)rdf32(sp0 - 0x30u);
    if (!(d76 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d76, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_101d5b5f;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d76, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(101d5b36)
    if (ecx == 0u) goto L_101d5b53;
    COW_AT(101d5b3a)
    d77 = (double)rdf32(sp0 + 8u);
    if ((cow_fsw(g, d77, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u) == 0u)
    {
        loc_48 = rd32(sp0 - 0x48u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_40_f = (double)rdf32(sp0 - 0x40u);
        loc_c = rd32(sp0 - 0xcu);
        loc_2c = rd32(sp0 - 0x2cu);
        goto L_101d5c1f;
    }
    eax = cow_fsw(g, d77, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
    COW_AT(101d5b51)
L_101d5b91: ;
    COW_AT(101d5b91)
    d82 = (double)rdf32(sp0 + 0xcu);
    if (!(d82 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d82, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = (double)rdf32(sp0 + 0xcu);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d82, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = (double)rdf32(sp0 + 0xcu);
    COW_AT(101d5ba6)
        x0 = -x0;
    }
    COW_AT(101d5ba8)
    d83 = (double)rdf32(sp0 + 8u);
    if (!(d83 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d83, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        x1 = (double)rdf32(sp0 + 8u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d83, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        x1 = (double)rdf32(sp0 + 8u);
    COW_AT(101d5bbd)
        x1 = -x1;
    }
    COW_AT(101d5bbf)
    if ((cow_fsw(g, x0, x1, 0u) & 0x4100u) == 0u)
    {
        loc_48 = rd32(sp0 - 0x48u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_40_f = (double)rdf32(sp0 - 0x40u);
        loc_c = rd32(sp0 - 0xcu);
        loc_2c = rd32(sp0 - 0x2cu);
        goto L_101d5c1f;
    }
    eax = cow_fsw(g, x0, x1, 0u) & 0x4100u;
L_101d5bcc: ;
    COW_AT(101d5bcc)
    d84 = (double)rdf32(sp0 + 8u);
    d85 = (double)rdf32(sp0 + 0xcu);
    wrf32(sp0 + 8u, (float)fr(g, fr(g, d84 * d84) + fr(g, d85 * d85)));
    d86 = fr(g, fr(g, d84 * d84) + fr(g, d85 * d85));
    d87 = (double)rdf32(sp0 - 0x28u);
    if (!(d86 < d87))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d86, d87, 0u);
        loc_8 = rd32(sp0 - 8u);
        loc_28 = rd32(sp0 - 0x28u);
    }
    else
    {
    COW_AT(101d5bed)
        wr32(sp0 - 8u, esi);
        t88 = rd32(sp0 + 8u);
        wr32(sp0 - 0x28u, t88);
        eax = t88;
        loc_8 = esi;
        loc_28 = t88;
    }
    COW_AT(101d5bf9)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    t89 = cow_thiscall(g, COW_IMG(0x101cead0u), rd32(ebx), 0);
    t90 = g->edx;
    eax = t89;
    edx = t90;
    COW_AT(101d5c00)
    if (eax != 0u)
    {
        loc_48 = rd32(sp0 - 0x48u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_40_f = (double)rdf32(sp0 - 0x40u);
        loc_c = rd32(sp0 - 0xcu);
        loc_2c = rd32(sp0 - 0x2cu);
    }
    else
    {
    COW_AT(101d5c04)
        d91 = (double)rdf32(sp0 + 8u);
        d92 = (double)rdf32(sp0 - 0x2cu);
        if (!(d91 < d92))
        {
            loc_48 = rd32(sp0 - 0x48u);
            loc_14 = rd32(sp0 - 0x14u);
            loc_10 = rd32(sp0 - 0x10u);
            loc_18 = rd32(sp0 - 0x18u);
            loc_40_f = (double)rdf32(sp0 - 0x40u);
            loc_c = rd32(sp0 - 0xcu);
            loc_2c = rd32(sp0 - 0x2cu);
        }
        else
        {
    COW_AT(101d5c13)
            wr32(sp0 - 0xcu, esi);
            t93 = rd32(sp0 + 8u);
            wr32(sp0 - 0x2cu, t93);
            loc_48 = rd32(sp0 - 0x48u);
            loc_14 = rd32(sp0 - 0x14u);
            loc_10 = rd32(sp0 - 0x10u);
            loc_18 = rd32(sp0 - 0x18u);
            loc_40_f = (double)rdf32(sp0 - 0x40u);
            loc_c = esi;
            loc_2c = t93;
        }
    }
    goto L_101d5c1f;
L_101d59df: ;
    COW_AT(101d59df)
    d62 = fr(g, (double)rdf32(sp0 + 8u) - loc_3c_f);
    wrf32(sp0 + 8u, (float)d62);
    goto L_101d5a03;
L_101d59ed: ;
    COW_AT(101d59ed)
    x0 = fr(g, loc_3c_f + (double)rdf32(sp0 + 0xcu));
L_101d59ff: ;
    COW_AT(101d59ff)
    wrf32(sp0 + 0xcu, (float)x0);
    goto L_101d5a03;
L_101d59f7: ;
    COW_AT(101d59f7)
    x0 = fr(g, (double)rdf32(sp0 + 0xcu) - loc_3c_f);
    goto L_101d59ff;
L_101d5a84: ;
    COW_AT(101d5a84)
    d69 = -(double)rdf32(sp0 - 0x48u);
    d70 = (double)rdf32(sp0 + 0xcu);
    if (d69 <= d70)
    {
        loc_48 = rd32(sp0 - 0x48u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_40_f = (double)rdf32(sp0 - 0x40u);
        loc_c = rd32(sp0 - 0xcu);
        loc_2c = rd32(sp0 - 0x2cu);
        goto L_101d5c1f;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d69, d70, 0u);
    COW_AT(101d5a99)
    d71 = (double)rdf32(sp0 + 0xcu);
    if (!(d71 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d71, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_101d5ab0;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d71, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(101d5aaa)
    x0 = (double)rdf32(sp0 + 0xcu);
    goto L_101d5afd;
L_101d5ab0: ;
    COW_AT(101d5ab0)
    x0 = (double)rdf32(sp0 + 0xcu);
    goto L_101d5aff;
L_101d5ab6: ;
    COW_AT(101d5ab6)
    d72 = (double)rdf32(sp0 - 0x34u);
    if ((cow_fsw(g, d72, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d72, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
        goto L_101d5b25;
    }
    eax = cow_fsw(g, d72, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
    COW_AT(101d5ac9)
    if (ecx == 0u)
    {
        x0 = (double)rdf32(sp0 + 0xcu);
        goto L_101d5ad9;
    }
    x0 = (double)rdf32(sp0 + 0xcu);
    COW_AT(101d5ad1)
    if (x0 <= (double)rdf32(COW_IMG(0x103295d8u)))
    {
        loc_48 = rd32(sp0 - 0x48u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_40_f = (double)rdf32(sp0 - 0x40u);
        loc_c = rd32(sp0 - 0xcu);
        loc_2c = rd32(sp0 - 0x2cu);
        goto L_101d5c1f;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
L_101d5ae8: ;
    COW_AT(101d5ae8)
    d74 = (double)rdf32(sp0 + 0xcu);
    if (!(d74 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d74, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = (double)rdf32(sp0 + 0xcu);
        goto L_101d5aff;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d74, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
    x0 = (double)rdf32(sp0 + 0xcu);
    goto L_101d5afd;
L_101d5ad9: ;
    COW_AT(101d5ad9)
    d73 = (double)rdf32(sp0 - 0x48u);
    if (x0 <= d73)
    {
        loc_48 = rd32(sp0 - 0x48u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_40_f = (double)rdf32(sp0 - 0x40u);
        loc_c = rd32(sp0 - 0xcu);
        loc_2c = rd32(sp0 - 0x2cu);
        goto L_101d5c1f;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, d73, 0u);
    goto L_101d5ae8;
L_101d5b53: ;
    COW_AT(101d5b53)
    d78 = -(double)rdf32(sp0 - 0x44u);
    d79 = (double)rdf32(sp0 + 8u);
    if (d78 <= d79)
    {
        loc_48 = rd32(sp0 - 0x48u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_40_f = (double)rdf32(sp0 - 0x40u);
        loc_c = rd32(sp0 - 0xcu);
        loc_2c = rd32(sp0 - 0x2cu);
        goto L_101d5c1f;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d78, d79, 0u);
    goto L_101d5b91;
L_101d5b5f: ;
    COW_AT(101d5b5f)
    d80 = (double)rdf32(sp0 - 0x30u);
    if ((cow_fsw(g, d80, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d80, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
        goto L_101d5bcc;
    }
    eax = cow_fsw(g, d80, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
    COW_AT(101d5b72)
    if (ecx == 0u)
    {
        x0 = (double)rdf32(sp0 + 8u);
        goto L_101d5b82;
    }
    x0 = (double)rdf32(sp0 + 8u);
    COW_AT(101d5b7a)
    if (x0 <= (double)rdf32(COW_IMG(0x103295d8u)))
    {
        loc_48 = rd32(sp0 - 0x48u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_40_f = (double)rdf32(sp0 - 0x40u);
        loc_c = rd32(sp0 - 0xcu);
        loc_2c = rd32(sp0 - 0x2cu);
        goto L_101d5c1f;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    goto L_101d5b91;
L_101d5b82: ;
    COW_AT(101d5b82)
    d81 = (double)rdf32(sp0 - 0x44u);
    if (x0 <= d81)
    {
        loc_48 = rd32(sp0 - 0x48u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_40_f = (double)rdf32(sp0 - 0x40u);
        loc_c = rd32(sp0 - 0xcu);
        loc_2c = rd32(sp0 - 0x2cu);
        goto L_101d5c1f;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, d81, 0u);
    goto L_101d5b91;
L_101d5c9d: ;
    COW_AT(101d5c9d)
    eax = eax & 0xffff0000u;
    loc_4c = rd32(sp0 - 0x4cu);
    loc_50 = rd32(sp0 - 0x50u);
    loc_54 = rd32(sp0 - 0x54u);
    loc_58 = rd32(sp0 - 0x58u);
L_101d5ca0: ;
    COW_AT(101d5ca0)
    g->ebx = loc_4c;
    g->esi = loc_54;
    g->edi = loc_58;
    g->ebp = loc_50;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101d5710(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101d575eu:
    {
        uint32_t eax;
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
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x58u);
        in_esi = rd32(sp0 - 0x54u);
        in_ebp = rd32(sp0 - 0x50u);
        in_ebx = rd32(sp0 - 0x4cu);
        g->esp = sp0 - 0x58u;
        g->ebx = 0u;
        wr32(sp0 - 0x48u, 0u);
        wr32(sp0 - 0x44u, 0u);
        wr32(sp0 - 0x38u, 0u);
        wr32(sp0 - 0x2cu, 0x4e6e6b28u);
        wr32(sp0 - 0x28u, 0x4e6e6b28u);
        wr32(sp0 - 0x20u, self);
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0xcu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101d5770u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x58u);
        in_esi = rd32(sp0 - 0x54u);
        in_ebp = rd32(sp0 - 0x50u);
        in_ebx = rd32(sp0 - 0x4cu);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x58u;
        g->ebx = 0u;
        wr32(sp0 - 0x48u, 0u);
        wr32(sp0 - 0x44u, 0u);
        wr32(sp0 - 0x38u, 0u);
        wr32(sp0 - 0x2cu, 0x4e6e6b28u);
        wr32(sp0 - 0x28u, 0x4e6e6b28u);
        wr32(sp0 - 0x20u, self);
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0xcu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101d577cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x58u);
        in_esi = rd32(sp0 - 0x54u);
        in_ebp = rd32(sp0 - 0x50u);
        in_ebx = rd32(sp0 - 0x4cu);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x58u;
        g->ebx = 0u;
        wr32(sp0 - 0x48u, 0u);
        wr32(sp0 - 0x44u, 0u);
        wr32(sp0 - 0x38u, 0u);
        wr32(sp0 - 0x2cu, 0x4e6e6b28u);
        wr32(sp0 - 0x28u, 0x4e6e6b28u);
        wr32(sp0 - 0x20u, self);
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0xcu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101d5784u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x58u);
        in_esi = rd32(sp0 - 0x54u);
        in_ebp = rd32(sp0 - 0x50u);
        in_ebx = rd32(sp0 - 0x4cu);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x58u;
        g->ebx = 0u;
        wr32(sp0 - 0x48u, 0u);
        wr32(sp0 - 0x44u, 0u);
        wr32(sp0 - 0x38u, 0u);
        wr32(sp0 - 0x2cu, 0x4e6e6b28u);
        wr32(sp0 - 0x28u, 0x4e6e6b28u);
        wr32(sp0 - 0x20u, self);
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0xcu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101d578fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_24;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x58u);
        in_esi = rd32(sp0 - 0x54u);
        in_ebp = rd32(sp0 - 0x50u);
        in_ebx = rd32(sp0 - 0x4cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x58u;
        g->ebx = 0u;
        wr32(sp0 - 0x48u, 0u);
        wr32(sp0 - 0x44u, 0u);
        wr32(sp0 - 0x38u, 0u);
        wr32(sp0 - 0x2cu, 0x4e6e6b28u);
        wr32(sp0 - 0x28u, 0x4e6e6b28u);
        wr32(sp0 - 0x20u, self);
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0xcu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101d57a9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_24;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x58u);
        in_esi = rd32(sp0 - 0x54u);
        in_ebp = rd32(sp0 - 0x50u);
        in_ebx = rd32(sp0 - 0x4cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x58u;
        g->ebx = 0u;
        wr32(sp0 - 0x48u, 0u);
        wr32(sp0 - 0x44u, 0u);
        wr32(sp0 - 0x38u, 0u);
        wr32(sp0 - 0x2cu, 0x4e6e6b28u);
        wr32(sp0 - 0x28u, 0x4e6e6b28u);
        wr32(sp0 - 0x20u, self);
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0xcu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101d57b5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_24;
        double loc_34_f;
        uint32_t loc_8;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x58u);
        in_esi = rd32(sp0 - 0x54u);
        in_ebp = rd32(sp0 - 0x50u);
        in_ebx = rd32(sp0 - 0x4cu);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_8 = rd32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x58u;
        g->ebx = 0u;
        wr32(sp0 - 0x48u, 0u);
        wr32(sp0 - 0x44u, 0u);
        wr32(sp0 - 0x38u, 0u);
        wr32(sp0 - 0x2cu, 0x4e6e6b28u);
        wr32(sp0 - 0x28u, 0x4e6e6b28u);
        wr32(sp0 - 0x20u, self);
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0xcu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101d57c3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101d57d3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101d57e2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101d57ecu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d57f3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d57feu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5806u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5812u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x5cu, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x101d581cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x5cu, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x101d5832u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x5cu, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x101d5839u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x5cu, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x101d5845u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_40_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_40_f = rdf32(sp0 - 0x40u);
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x5cu, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x101d5871u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x5cu, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x101d58a6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x5cu, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x101d58b4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x5cu, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x101d58c2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d58d0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d58e1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d58ebu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_44_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_44_f = rdf32(sp0 - 0x44u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5904u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_2c;
        double loc_3c_f;
        double loc_40_f;
        uint32_t loc_48;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_3c_f = rdf32(sp0 - 0x3cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5916u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_2c;
        double loc_3c_f;
        double loc_40_f;
        uint32_t loc_48;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_3c_f = rdf32(sp0 - 0x3cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d591eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_2c;
        double loc_3c_f;
        double loc_40_f;
        uint32_t loc_48;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_3c_f = rdf32(sp0 - 0x3cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5928u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_2c;
        double loc_3c_f;
        double loc_40_f;
        uint32_t loc_48;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_3c_f = rdf32(sp0 - 0x3cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d592du:
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
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5937u:
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
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d593cu:
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
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5944u:
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
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5948u:
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
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d594fu:
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
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5953u:
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
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5958u:
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
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5960u:
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
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d596au:
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
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d597eu:
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
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5991u:
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
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5997u:
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
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d599eu:
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
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d59a2u:
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
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d59aeu:
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
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x5cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x101d59b8u:
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
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x5cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x101d59cau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_3c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x5cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x101d59d1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_3c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x5cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x101d59dfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_3c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x5cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x101d59edu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_3c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x5cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x101d59f7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_3c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x5cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x101d59ffu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_3c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x5cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x101d5a03u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_3c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5a0bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_3c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5a20u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_3c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5a22u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_3c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5a37u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_3c_f;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5a39u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_3c_f;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5a4eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_3c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5a63u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_3c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5a67u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_3c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5a7eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_3c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5a84u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_3c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5a99u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_3c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5aaau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_3c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5ab0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_3c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5ab6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_3c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5ac9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_3c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5ad1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_3c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5ad9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_3c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5ae8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_3c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5afdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_3c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5affu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_3c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5b14u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_3c_f;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5b16u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_3c_f;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5b25u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_3c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5b36u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_3c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5b3au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_3c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5b51u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_3c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5b53u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_3c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5b5fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_3c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5b72u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_3c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5b7au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_3c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5b82u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_3c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5b91u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_3c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5ba6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_3c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5ba8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_3c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5bbdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_3c_f;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5bbfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_3c_f;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5bccu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_3c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5bedu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_3c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5bf9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        double loc_3c_f;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5c00u:
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
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5c04u:
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
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5c13u:
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
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5c1fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_2c;
        double loc_3c_f;
        double loc_40_f;
        uint32_t loc_48;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_3c_f = rdf32(sp0 - 0x3cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5c34u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_2c;
        double loc_3c_f;
        double loc_40_f;
        uint32_t loc_48;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_3c_f = rdf32(sp0 - 0x3cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5c54u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_2c;
        double loc_3c_f;
        double loc_40_f;
        uint32_t loc_48;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_3c_f = rdf32(sp0 - 0x3cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5c69u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_2c;
        double loc_3c_f;
        double loc_40_f;
        uint32_t loc_48;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_3c_f = rdf32(sp0 - 0x3cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5c6bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_2c;
        double loc_3c_f;
        double loc_40_f;
        uint32_t loc_48;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_3c_f = rdf32(sp0 - 0x3cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5c78u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_2c;
        double loc_3c_f;
        double loc_40_f;
        uint32_t loc_48;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_3c_f = rdf32(sp0 - 0x3cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5c80u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_2c;
        double loc_3c_f;
        double loc_40_f;
        uint32_t loc_48;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_3c_f = rdf32(sp0 - 0x3cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5c84u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_2c;
        double loc_3c_f;
        double loc_40_f;
        uint32_t loc_48;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_3c_f = rdf32(sp0 - 0x3cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5c88u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_2c;
        double loc_3c_f;
        double loc_40_f;
        uint32_t loc_48;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_3c_f = rdf32(sp0 - 0x3cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5c8fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_2c;
        double loc_3c_f;
        double loc_40_f;
        uint32_t loc_48;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_3c_f = rdf32(sp0 - 0x3cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5c9du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_2c;
        double loc_3c_f;
        double loc_40_f;
        uint32_t loc_48;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_3c_f = rdf32(sp0 - 0x3cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x101d5ca0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        double loc_3c_f;
        double loc_40_f;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_3c_f = rdf32(sp0 - 0x3cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101d5710(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101d5710(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
