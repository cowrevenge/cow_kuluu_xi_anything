/* f_0x1016a2d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1016a2d0(Guest* g)
{
    double d10;
    double d16;
    double d17;
    double d18;
    double d19;
    double d2;
    double d20;
    double d21;
    double d22;
    double d23;
    double d24;
    double d25;
    double d26;
    double d27;
    double d28;
    double d29;
    double d3;
    double d30;
    double d35;
    double d38;
    double d39;
    double d40;
    double d41;
    double d42;
    double d43;
    double d44;
    double d46;
    double d47;
    double d48;
    double d49;
    double d50;
    double d51;
    double d52;
    double d53;
    double d57;
    double d6;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    double loc_28_f;
    double loc_2c_f;
    double loc_30_f;
    uint32_t loc_58;
    uint32_t loc_5c;
    double loc_5c_f;
    uint32_t loc_60;
    uint32_t loc_64;
    double loc_68_f;
    double loc_6c_f;
    double loc_70_f;
    uint32_t loc_74;
    uint32_t loc_78;
    uint32_t loc_7c;
    uint32_t loc_80;
    uint32_t loc_84;
    double loc_88_f;
    double loc_8c_f;
    double loc_90_f;
    uint32_t loc_a0;
    uint32_t loc_a4;
    uint32_t loc_a8;
    uint32_t loc_b0;
    double loc_b4_f;
    uint32_t loc_bc;
    uint32_t loc_c0;
    uint32_t loc_c4;
    uint32_t loc_c8;
    uint32_t t1;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t36;
    uint32_t t37;
    uint32_t t4;
    uint32_t t45;
    uint32_t t5;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t58;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
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
    cow_frame(g, sp0, 212u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1016a2f9u: ecx = g->ecx; in_edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xc8u); in_esi = rd32(sp0 - 0xc4u); in_ebp = rd32(sp0 - 0xc0u); in_ebx = rd32(sp0 - 0xbcu); g->ebp = rd32(sp0 - 0xc0u); g->ebx = rd32(sp0 - 0xbcu); g->edi = rd32(sp0 - 0xc8u); g->esi = rd32(sp0 - 0xc4u); goto E_1016a2f9;
    case 0x1016a317u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0xc8u); in_esi = rd32(sp0 - 0xc4u); in_ebp = rd32(sp0 - 0xc0u); in_ebx = rd32(sp0 - 0xbcu); g->ebp = rd32(sp0 - 0xc0u); g->ebx = rd32(sp0 - 0xbcu); g->edi = rd32(sp0 - 0xc8u); g->esi = rd32(sp0 - 0xc4u); goto E_1016a317;
    case 0x1016a324u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0xc8u); in_esi = rd32(sp0 - 0xc4u); in_ebp = rd32(sp0 - 0xc0u); in_ebx = rd32(sp0 - 0xbcu); g->ebp = rd32(sp0 - 0xc0u); g->ebx = rd32(sp0 - 0xbcu); g->edi = rd32(sp0 - 0xc8u); g->esi = rd32(sp0 - 0xc4u); goto E_1016a324;
    case 0x1016a32fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0xc8u); in_esi = rd32(sp0 - 0xc4u); in_ebp = rd32(sp0 - 0xc0u); in_ebx = rd32(sp0 - 0xbcu); loc_74 = rd32(sp0 - 0x74u); loc_64 = rd32(sp0 - 0x64u); g->ebp = rd32(sp0 - 0xc0u); g->ebx = rd32(sp0 - 0xbcu); g->edi = rd32(sp0 - 0xc8u); g->esi = rd32(sp0 - 0xc4u); goto E_1016a32f;
    case 0x1016a33fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; goto E_1016a33f;
    case 0x1016a349u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; goto E_1016a349;
    case 0x1016a354u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1016a354;
    case 0x1016a369u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1016a369;
    case 0x1016a373u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1016a373;
    case 0x1016a380u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1016a380;
    case 0x1016a38au: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1016a38a;
    case 0x1016a391u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1016a391;
    case 0x1016a397u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1016a397;
    case 0x1016a3a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_a4 = rd32(sp0 - 0xa4u); goto E_1016a3a2;
    case 0x1016a3a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_a4 = rd32(sp0 - 0xa4u); goto E_1016a3a6;
    case 0x1016a3adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_a4 = rd32(sp0 - 0xa4u); goto E_1016a3ad;
    case 0x1016a3b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_a4 = rd32(sp0 - 0xa4u); goto E_1016a3b7;
    case 0x1016a3c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); goto E_1016a3c2;
    case 0x1016a3c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); goto E_1016a3c6;
    case 0x1016a3cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); goto E_1016a3cd;
    case 0x1016a3d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); goto E_1016a3d4;
    case 0x1016a3dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); goto E_1016a3dc;
    case 0x1016a3deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); goto E_1016a3de;
    case 0x1016a3e3u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1016a3e3;
    case 0x1016a3eau: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1016a3ea;
    case 0x1016a3f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1016a3f0;
    case 0x1016a3fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_a4 = rd32(sp0 - 0xa4u); goto E_1016a3fb;
    case 0x1016a3ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_a4 = rd32(sp0 - 0xa4u); goto E_1016a3ff;
    case 0x1016a406u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_a4 = rd32(sp0 - 0xa4u); goto E_1016a406;
    case 0x1016a410u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_a4 = rd32(sp0 - 0xa4u); goto E_1016a410;
    case 0x1016a41bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); goto E_1016a41b;
    case 0x1016a41fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); goto E_1016a41f;
    case 0x1016a426u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); goto E_1016a426;
    case 0x1016a42au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); goto E_1016a42a;
    case 0x1016a432u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); goto E_1016a432;
    case 0x1016a434u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); goto E_1016a434;
    case 0x1016a435u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); goto E_1016a435;
    case 0x1016a439u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); goto E_1016a439;
    case 0x1016a443u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); goto E_1016a443;
    case 0x1016a44fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b0 = rd32(sp0 - 0xb0u); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); goto E_1016a44f;
    case 0x1016a453u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b0 = rd32(sp0 - 0xb0u); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); goto E_1016a453;
    case 0x1016a475u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b0 = rd32(sp0 - 0xb0u); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_7c = rd32(sp0 - 0x7cu); goto E_1016a475;
    case 0x1016a479u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); loc_70_f = rdf32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); goto E_1016a479;
    case 0x1016a48bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); loc_70_f = rdf32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); goto E_1016a48b;
    case 0x1016a4a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); loc_70_f = rdf32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); goto E_1016a4a1;
    case 0x1016a4c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); loc_70_f = rdf32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); goto E_1016a4c3;
    case 0x1016a4d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); loc_70_f = rdf32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); goto E_1016a4d1;
    case 0x1016a4d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); loc_70_f = rdf32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); goto E_1016a4d9;
    case 0x1016a4ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); loc_70_f = rdf32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); goto E_1016a4dd;
    case 0x1016a4e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); loc_70_f = rdf32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); goto E_1016a4e8;
    case 0x1016a504u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); loc_70_f = rdf32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); goto E_1016a504;
    case 0x1016a519u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); loc_70_f = rdf32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); goto E_1016a519;
    case 0x1016a52eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); loc_70_f = rdf32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); goto E_1016a52e;
    case 0x1016a60cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); loc_70_f = rdf32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); goto E_1016a60c;
    case 0x1016a6f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); loc_70_f = rdf32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1016a6f1;
    case 0x1016a75eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); loc_70_f = rdf32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); goto E_1016a75e;
    case 0x1016a775u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); loc_70_f = rdf32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); goto E_1016a775;
    case 0x1016a7b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1016a7b8;
    case 0x1016a7c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1016a7c0;
    case 0x1016a867u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b4_f = rdf32(sp0 - 0xb4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1016a867;
    case 0x1016a8b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b4_f = rdf32(sp0 - 0xb4u); loc_5c_f = rdf32(sp0 - 0x5cu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1016a8b7;
    case 0x1016a8bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b4_f = rdf32(sp0 - 0xb4u); loc_5c_f = rdf32(sp0 - 0x5cu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1016a8bf;
    case 0x1016a8ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b4_f = rdf32(sp0 - 0xb4u); loc_5c_f = rdf32(sp0 - 0x5cu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1016a8ce;
    case 0x1016a8ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b4_f = rdf32(sp0 - 0xb4u); loc_5c_f = rdf32(sp0 - 0x5cu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1016a8ec;
    case 0x1016a8eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b4_f = rdf32(sp0 - 0xb4u); loc_5c_f = rdf32(sp0 - 0x5cu); goto E_1016a8ee;
    case 0x1016a8f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); loc_70_f = rdf32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1016a8f7;
    case 0x1016a8f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); loc_70_f = rdf32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_60 = rd32(sp0 - 0x60u); loc_58 = rd32(sp0 - 0x58u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); goto E_1016a8f9;
    case 0x1016a911u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); loc_70_f = rdf32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); goto E_1016a911;
    case 0x1016a915u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); loc_70_f = rdf32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); goto E_1016a915;
    case 0x1016a92bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); loc_70_f = rdf32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); goto E_1016a92b;
    case 0x1016a935u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); loc_70_f = rdf32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); goto E_1016a935;
    case 0x1016a941u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); loc_70_f = rdf32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); goto E_1016a941;
    case 0x1016a952u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); loc_70_f = rdf32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); goto E_1016a952;
    case 0x1016a956u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); loc_70_f = rdf32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); goto E_1016a956;
    case 0x1016a967u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_b4_f = rdf32(sp0 - 0xb4u); loc_b0 = rd32(sp0 - 0xb0u); loc_a8 = rd32(sp0 - 0xa8u); loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_90_f = rdf32(sp0 - 0x90u); loc_8c_f = rdf32(sp0 - 0x8cu); loc_88_f = rdf32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); loc_70_f = rdf32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_68_f = rdf32(sp0 - 0x68u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); goto E_1016a967;
    case 0x1016a978u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); goto E_1016a978;
    default: break;
    }
#endif

    COW_AT(1016a2d0)
    wr32(sp0 - 0xbcu, in_ebx);
    wr32(sp0 - 0xc0u, in_ebp);
    wr32(sp0 - 0xc4u, in_esi);
    wr32(sp0 - 0xc8u, in_edi);
    wr32(sp0 - 0xacu, self);
    t1 = rd32(self + 0x60u);
    wr32(self + 0x1807cu, 0u);
    wr32(self + 0x34150u, 0u);
    if (t1 == 0u)
    {
        eax = 0u;
        loc_bc = in_ebx;
        loc_c0 = in_ebp;
        loc_c4 = in_esi;
        loc_c8 = in_edi;
        goto L_1016a978;
    }
    ecx = t1;
    COW_AT(1016a2f9)
    d2 = (double)rdf32(arg1 + 4u);
    d3 = (double)rdf32(arg2 + 4u);
    if (!(d2 < d3))
    {
        eax = rd32(arg1 + 4u);
    COW_AT(1016a324)
        wr32(sp0 - 0x74u, eax);
        t5 = rd32(arg2 + 4u);
        wr32(sp0 - 0x64u, t5);
        edx = t5;
        loc_64 = t5;
        loc_74 = eax;
    }
    else
    {
        eax = rd32(arg1 + 4u);
    COW_AT(1016a317)
        wr32(sp0 - 0x64u, eax);
        t4 = rd32(arg2 + 4u);
        wr32(sp0 - 0x74u, t4);
        ecx = t4;
        edx = in_edx;
        loc_64 = eax;
        loc_74 = t4;
    }
    COW_AT(1016a32f)
    g->edx = edx;
    d6 = fr(g, fr(g, (double)rdf32(self + 0x40u) + (double)rdf32(arg1)) * (double)rdf32(COW_IMG(0x10329ce4u)));
    fpush(g, d6);
    g->esp = sp0 - 0xc8u;
    t7 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t8 = g->edx;
    eax = t7;
    edx = t8;
    COW_AT(1016a33f)
    if ((int32_t)eax < 0)
    {
        loc_bc = rd32(sp0 - 0xbcu);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c8 = rd32(sp0 - 0xc8u);
        goto L_1016a978;
    }
    edi = eax;
    COW_AT(1016a349)
    if ((int32_t)edi >= (int32_t)rd32(self + 0x48u))
    {
        loc_bc = rd32(sp0 - 0xbcu);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c8 = rd32(sp0 - 0xc8u);
        goto L_1016a978;
    }
    ebp = rd32(self + 0x48u);
    COW_AT(1016a354)
    g->ecx = rd32(sp0 - 0xacu);
    t9 = rd32(sp0 - 0xacu);
    d10 = fr(g, fr(g, (double)rdf32(rd32(sp0 - 0xacu) + 0x44u) + (double)rdf32(arg1 + 8u)) * (double)rdf32(COW_IMG(0x10329ce4u)));
    fpush(g, d10);
    g->esp = sp0 - 0xc8u;
    t11 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t12 = g->ecx;
    eax = t11;
    ecx = t12;
    COW_AT(1016a369)
    if ((int32_t)eax < 0)
    {
        loc_bc = rd32(sp0 - 0xbcu);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c8 = rd32(sp0 - 0xc8u);
        goto L_1016a978;
    }
    COW_AT(1016a373)
    if ((int32_t)eax >= (int32_t)rd32(rd32(sp0 - 0xacu) + 0x4cu))
    {
        loc_bc = rd32(sp0 - 0xbcu);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c8 = rd32(sp0 - 0xc8u);
        goto L_1016a978;
    }
    esi = rd32(sp0 - 0xacu);
    COW_AT(1016a380)
    if (rd8(esi + 0x34139u) == 0u)
    {
    COW_AT(1016a3e3)
        if ((int32_t)(edi - 1u) >= 0)
        {
            ecx = edi - 1u;
    COW_AT(1016a3f0)
            wr32(sp0 - 0xa4u, ebp - 1u);
            if ((int32_t)ecx > (int32_t)(ebp - 1u))
            {
                loc_a4 = ebp - 1u;
            }
            else
            {
    COW_AT(1016a3fb)
                wr32(sp0 - 0xa4u, ecx);
                loc_a4 = ecx;
            }
        }
        else
        {
    COW_AT(1016a3ea)
            wr32(sp0 - 0xa4u, 0u);
            loc_a4 = 0u;
        }
    COW_AT(1016a3ff)
        if ((int32_t)(edi + 1u) >= 0)
        {
            ecx = edi + 1u;
    COW_AT(1016a410)
            wr32(sp0 - 0xa8u, ebp - 1u);
            if ((int32_t)ecx > (int32_t)(ebp - 1u))
            {
                loc_a8 = ebp - 1u;
            }
            else
            {
    COW_AT(1016a41b)
                wr32(sp0 - 0xa8u, ecx);
                loc_a8 = ecx;
            }
        }
        else
        {
    COW_AT(1016a406)
            wr32(sp0 - 0xa8u, 0u);
            loc_a8 = 0u;
        }
    COW_AT(1016a41f)
        if ((int32_t)(eax - 1u) >= 0)
        {
            ecx = eax - 1u;
    COW_AT(1016a42a)
            if ((int32_t)ecx > (int32_t)(rd32(esi + 0x4cu) - 1u))
            {
                edx = rd32(esi + 0x4cu) - 1u;
    COW_AT(1016a432)
                ecx = edx;
            }
        }
        else
        {
    COW_AT(1016a426)
            ecx = 0u;
        }
    COW_AT(1016a434)
        eax = eax + 1u;
    }
    else
    {
    COW_AT(1016a38a)
        if ((int32_t)(edi - 2u) >= 0)
        {
            ecx = edi - 2u;
    COW_AT(1016a397)
            wr32(sp0 - 0xa4u, ebp - 1u);
            if ((int32_t)ecx > (int32_t)(ebp - 1u))
            {
                loc_a4 = ebp - 1u;
            }
            else
            {
    COW_AT(1016a3a2)
                wr32(sp0 - 0xa4u, ecx);
                loc_a4 = ecx;
            }
        }
        else
        {
    COW_AT(1016a391)
            wr32(sp0 - 0xa4u, 0u);
            loc_a4 = 0u;
        }
    COW_AT(1016a3a6)
        if ((int32_t)(edi + 2u) >= 0)
        {
            ecx = edi + 2u;
    COW_AT(1016a3b7)
            wr32(sp0 - 0xa8u, ebp - 1u);
            if ((int32_t)ecx > (int32_t)(ebp - 1u))
            {
                loc_a8 = ebp - 1u;
            }
            else
            {
    COW_AT(1016a3c2)
                wr32(sp0 - 0xa8u, ecx);
                loc_a8 = ecx;
            }
        }
        else
        {
    COW_AT(1016a3ad)
            wr32(sp0 - 0xa8u, 0u);
            loc_a8 = 0u;
        }
    COW_AT(1016a3c6)
        if ((int32_t)(eax - 2u) >= 0)
        {
            ecx = eax - 2u;
    COW_AT(1016a3d4)
            if ((int32_t)ecx > (int32_t)(rd32(esi + 0x4cu) - 1u))
            {
                edx = rd32(esi + 0x4cu) - 1u;
    COW_AT(1016a3dc)
                ecx = edx;
            }
    COW_AT(1016a3de)
            eax = eax + 2u;
        }
        else
        {
    COW_AT(1016a3cd)
            eax = eax + 2u;
            ecx = 0u;
        }
    }
    COW_AT(1016a435)
    if ((int32_t)eax >= 0)
    {
    COW_AT(1016a443)
        t13 = rd32(esi + 0x4cu) - 1u;
        wr32(sp0 - 0xb0u, t13);
        if ((int32_t)eax > (int32_t)(rd32(esi + 0x4cu) - 1u))
        {
            loc_b0 = t13;
        }
        else
        {
    COW_AT(1016a44f)
            wr32(sp0 - 0xb0u, eax);
            loc_b0 = eax;
        }
    }
    else
    {
    COW_AT(1016a439)
        wr32(sp0 - 0xb0u, 0u);
        loc_b0 = 0u;
    }
    COW_AT(1016a453)
    wr32(sp0 - 0x5cu, 0x49742400u);
    wr32(sp0 - 0x84u, 0x49742400u);
    wr32(sp0 - 0x7cu, ecx);
    if ((int32_t)ecx > (int32_t)loc_b0)
    {
        eax = loc_b0;
    }
    else
    {
        edx = ecx;
        loc_7c = ecx;
    COW_AT(1016a475)
        eax = loc_a4;
        loc_5c = 0x49742400u;
        loc_84 = 0x49742400u;
L_1016a479: ;
    COW_AT(1016a479)
        wr32(sp0 - 0x80u, eax);
        if ((int32_t)eax > (int32_t)loc_a8) goto L_1016a956;
        ecx = eax;
        loc_80 = eax;
L_1016a48b: ;
    COW_AT(1016a48b)
        if (rd32(ecx * 4u + rd32(esi + 0x60u) + rd32(esi + 0x48u) * edx * 4u) == 0u) goto L_1016a941;
        eax = rd32(ecx * 4u + rd32(esi + 0x60u) + rd32(esi + 0x48u) * edx * 4u);
L_1016a4a1: ;
    COW_AT(1016a4a1)
        wr32(sp0 - 0xa0u, eax + 4u);
        t14 = rd32(eax) & 0x800u;
        wr32(sp0 - 0x58u, t14);
        if ((rd32(eax) >> 8u & 0x20u) == 0u)
        {
            ecx = rd32(eax) & 0x7ffu;
            esi = eax + 4u;
            loc_a0 = eax + 4u;
            eax = rd32(eax);
            loc_58 = t14;
    COW_AT(1016a4d1)
            if ((int32_t)ecx > 0)
            {
    COW_AT(1016a4d9)
                wr32(sp0 - 0x60u, ecx);
                loc_60 = ecx;
L_1016a4dd: ;
    COW_AT(1016a4dd)
                if (rd32(esi + 4u) != 0u)
                {
                    ebp = rd32(esi + 4u);
    COW_AT(1016a4e8)
                    d16 = (double)rdf32(rd32(esi) + 0xb4u);
                    d17 = (double)rdf32(sp0 - 0x74u);
                    if ((cow_fsw(g, d16, d17, 0u) & 0x4100u) != 0u)
                    {
                        eax = cow_fsw(g, d16, d17, 0u) & 0x4100u;
                        esi = rd32(esi);
                        edi = rd32(ebp + 8u);
    COW_AT(1016a504)
                        d18 = (double)rdf32(esi + 0xb8u);
                        d19 = (double)rdf32(sp0 - 0x64u);
                        if (!(d18 < d19))
                        {
    COW_AT(1016a519)
                            if (rd32(rd32(sp0 - 0xacu) + 4u) != rd32(esi + 0xbcu))
                            {
    COW_AT(1016a52e)
                                d20 = fr(g, (double)rdf32(esi + 0x50u) * (double)rdf32(arg1 + 4u));
                                d21 = fr(g, (double)rdf32(esi + 0x60u) * (double)rdf32(arg1 + 8u));
                                wr32(sp0 - 0x78u, 0u);
                                d22 = fr(g, fr(g, fr(g, d21 + d20) + fr(g, (double)rdf32(arg1) * (double)rdf32(esi + 0x40u))) + (double)rdf32(esi + 0x70u));
                                wrf32(sp0 - 0x90u, (float)(double)(float)d22);
                                d23 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(esi + 0x64u) * (double)rdf32(arg1 + 8u)) + fr(g, (double)rdf32(esi + 0x54u) * (double)rdf32(arg1 + 4u))) + fr(g, (double)rdf32(esi + 0x44u) * (double)rdf32(arg1))) + (double)rdf32(esi + 0x74u));
                                wrf32(sp0 - 0x8cu, (float)(double)(float)d23);
                                d24 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(esi + 0x68u) * (double)rdf32(arg1 + 8u)) + fr(g, (double)rdf32(esi + 0x58u) * (double)rdf32(arg1 + 4u))) + fr(g, (double)rdf32(esi + 0x48u) * (double)rdf32(arg1))) + (double)rdf32(esi + 0x78u));
                                wrf32(sp0 - 0x88u, (float)(double)(float)d24);
                                d25 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(esi + 0x48u) * (double)rdf32(arg2)) + fr(g, (double)rdf32(esi + 0x58u) * (double)rdf32(arg2 + 4u))) + fr(g, (double)rdf32(esi + 0x68u) * (double)rdf32(arg2 + 8u))) + (double)rdf32(esi + 0x78u));
                                d26 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(esi + 0x44u) * (double)rdf32(arg2)) + fr(g, (double)rdf32(esi + 0x54u) * (double)rdf32(arg2 + 4u))) + fr(g, (double)rdf32(esi + 0x64u) * (double)rdf32(arg2 + 8u))) + (double)rdf32(esi + 0x74u));
                                d27 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(esi + 0x50u) * (double)rdf32(arg2 + 4u)) + fr(g, (double)rdf32(esi + 0x60u) * (double)rdf32(arg2 + 8u))) + fr(g, (double)rdf32(arg2) * (double)rdf32(esi + 0x40u))) + (double)rdf32(esi + 0x70u));
                                wrf32(sp0 - 4u, (float)(double)(float)d25);
                                d28 = (double)(float)fr(g, d27 - (double)(float)d22);
                                wrf32(sp0 - 0x70u, (float)d28);
                                d29 = (double)(float)fr(g, d26 - (double)(float)d23);
                                wrf32(sp0 - 0x6cu, (float)d29);
                                d30 = (double)(float)fr(g, (double)(float)d25 - (double)(float)d24);
                                wrf32(sp0 - 0x68u, (float)d30);
                                if ((int16_t)rd16(ebp + 0xcu) <= 0) goto L_1016a911;
                                eax = arg1;
                                loc_78 = 0u;
                                loc_90_f = (double)(float)d22;
                                loc_8c_f = (double)(float)d23;
                                loc_88_f = (double)(float)d24;
                                loc_70_f = d28;
                                loc_6c_f = d29;
                                loc_68_f = d30;
L_1016a60c: ;
    COW_AT(1016a60c)
                                t31 = rd32(rd32(ebp + 4u) + (rd16(edi + 6u) & 0x7fffu) * 0xcu);
                                wr32(sp0 - 0x30u, t31);
                                t32 = rd32(rd32(ebp + 4u) + (rd16(edi + 6u) & 0x7fffu) * 0xcu + 4u);
                                wr32(sp0 - 0x2cu, t32);
                                t33 = rd32(rd32(ebp + 4u) + (rd16(edi + 6u) & 0x7fffu) * 0xcu + 8u);
                                wr32(sp0 - 0x28u, t33);
                                t34 = rd32(ebp) + (rd16(edi) & 0x7fffu) * 0xcu;
                                d35 = fr(g, cow_bits2f(t31) * (double)rdf32(COW_IMG(0x1032a3f0u)));
                                wr32(sp0 - 0x24u, t34);
                                t36 = rd32(ebp) + (rd16(edi + 2u) & 0x3fffu) * 0xcu;
                                wr32(sp0 - 0x20u, t36);
                                wrf32(sp0 - 0x30u, (float)(double)(float)d35);
                                t37 = rd32(ebp) + (rd16(edi + 4u) & 0x3fffu) * 0xcu;
                                d38 = fr(g, cow_bits2f(t32) * (double)rdf32(COW_IMG(0x1032a3f0u)));
                                wr32(sp0 - 0x1cu, t37);
                                wrf32(sp0 - 0x2cu, (float)(double)(float)d38);
                                d39 = fr(g, cow_bits2f(t33) * (double)rdf32(COW_IMG(0x1032a3f0u)));
                                wrf32(sp0 - 0x28u, (float)(double)(float)d39);
                                d40 = fr(g, fr(g, fr(g, d39 * loc_68_f) + fr(g, (double)(float)d38 * loc_6c_f)) + fr(g, (double)(float)d35 * loc_70_f));
                                if (d40 == (double)rdf32(COW_IMG(0x103295d8u)))
                                {
                                    x0 = d40;
    COW_AT(1016a8f7)
                                }
                                else
                                {
                                    eax = (rd32(ebp) & 0xffff0000u) | (uint16_t)cow_fsw(g, d40, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                                    ecx = t34;
                                    edx = t37;
                                    loc_30_f = (double)(float)d35;
                                    loc_2c_f = (double)(float)d38;
                                    loc_28_f = (double)(float)d39;
                                    x0 = d40;
    COW_AT(1016a6f1)
                                    d41 = fr(g, fr(g, fr(g, fr(g, fr(g, loc_28_f * loc_88_f) + fr(g, loc_2c_f * loc_8c_f)) + fr(g, loc_30_f * loc_90_f)) - fr(g, fr(g, fr(g, loc_28_f * (double)rdf32(ecx + 8u)) + fr(g, loc_2c_f * (double)rdf32(ecx + 4u))) + fr(g, loc_30_f * (double)rdf32(ecx)))) * fr(g, (double)rdf32(COW_IMG(0x1032a3f0u)) / x0));
                                    wrf32(sp0 - 0xb4u, (float)(double)(float)d41);
                                    if (!((double)(float)d41 < (double)rdf32(COW_IMG(0x103295d8u))))
                                    {
                                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)(float)d41, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                                        loc_b4_f = (double)(float)d41;
    COW_AT(1016a75e)
                                        if ((cow_fsw(g, loc_b4_f, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x100u) != 0u)
                                        {
    COW_AT(1016a775)
                                            wr32(sp0 - 0xccu, sp0 - 0x54u);
                                            wr32(sp0 - 0xd0u, sp0 - 0x9cu);
                                            d42 = (double)(float)fr(g, fr(g, loc_b4_f * loc_70_f) + loc_90_f);
                                            wrf32(sp0 - 0x9cu, (float)d42);
                                            d43 = (double)(float)fr(g, fr(g, loc_b4_f * loc_6c_f) + loc_8c_f);
                                            wrf32(sp0 - 0x98u, (float)d43);
                                            d44 = (double)(float)fr(g, fr(g, loc_b4_f * loc_68_f) + loc_88_f);
                                            wrf32(sp0 - 0x94u, (float)d44);
                                            g->esp = sp0 - 0xc8u;
                                            t45 = cow_call_regs(g, COW_IMG(0x1016c390u), sp0 - 0x54u, g->ecx, g->edx, 0, 2, sp0 - 0x9cu, sp0 - 0x54u);
                                            eax = t45;
    COW_AT(1016a7b8)
                                            if ((uint8_t)eax == 0u)
                                            {
                                                loc_5c_f = (double)rdf32(sp0 - 0x5cu);
                                                goto L_1016a8ee;
                                            }
    COW_AT(1016a7c0)
                                            d46 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x94u) * (double)rdf32(esi + 0x28u)) + fr(g, (double)rdf32(sp0 - 0x98u) * (double)rdf32(esi + 0x18u))) + fr(g, (double)rdf32(sp0 - 0x9cu) * (double)rdf32(esi + 8u))) + (double)rdf32(esi + 0x38u));
                                            d47 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x94u) * (double)rdf32(esi + 0x24u)) + fr(g, (double)rdf32(sp0 - 0x98u) * (double)rdf32(esi + 0x14u))) + fr(g, (double)rdf32(sp0 - 0x9cu) * (double)rdf32(esi + 4u))) + (double)rdf32(esi + 0x34u));
                                            d48 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x94u) * (double)rdf32(esi + 0x20u)) + fr(g, (double)rdf32(sp0 - 0x98u) * (double)rdf32(esi + 0x10u))) + fr(g, (double)rdf32(sp0 - 0x9cu) * (double)rdf32(esi))) + (double)rdf32(esi + 0x30u));
                                            wrf32(sp0 - 0x10u, (float)(double)(float)d46);
                                            d49 = fr(g, (double)rdf32(arg1) - d48);
                                            wrf32(sp0 - 0xb4u, (float)(double)(float)d49);
                                            d50 = fr(g, (double)rdf32(arg1 + 8u) - (double)(float)d46);
                                            d51 = fr(g, (double)rdf32(arg1 + 4u) - d47);
                                            d52 = (double)rdf32(sp0 - 0x5cu);
                                            d53 = fr(g, fr(g, fr(g, d50 * d50) + fr(g, d51 * d51)) + fr(g, (double)(float)d49 * (double)(float)d49));
                                            if ((cow_fsw(g, d52, d53, 1u) & 0x4100u) != 0u)
                                            {
                                                ecx = rd32(sp0 - 0xacu);
                                                loc_5c_f = (double)rdf32(sp0 - 0x5cu);
                                                x0 = fr(g, fr(g, fr(g, d50 * d50) + fr(g, d51 * d51)) + fr(g, (double)(float)d49 * (double)(float)d49));
                                            }
                                            else
                                            {
                                                ecx = rd32(sp0 - 0xacu);
                                                x0 = fr(g, fr(g, fr(g, d50 * d50) + fr(g, d51 * d51)) + fr(g, (double)(float)d49 * (double)(float)d49));
    COW_AT(1016a867)
                                                t54 = rd32(esi + 0xa4u);
                                                wr8(sp0 - 0xb5u, 1u);
                                                t55 = t54 >> 2u & 1u;
                                                wr32(ecx + 0x34150u, t55);
                                                wrf32(sp0 - 0x5cu, (float)(double)(float)x0);
                                                t56 = (((rd16(edi + 6u) >> 0xfu) * 2u | rd16(edi + 4u) >> 0xfu) * 2u | rd16(edi + 2u) >> 0xfu) * 2u | rd16(edi) >> 0xfu;
                                                wr32(ecx + 0x34148u, t56);
                                                loc_5c_f = (double)(float)x0;
                                            }
    COW_AT(1016a8b7)
                                            if (rd32(sp0 - 0x58u) != 0u) goto L_1016a8ec;
                                            eax = rd32(sp0 - 0x58u);
    COW_AT(1016a8bf)
                                            d57 = (double)rdf32(sp0 - 0x84u);
                                            if ((cow_fsw(g, d57, x0, 1u) & 0x4100u) != 0u) goto L_1016a8ec;
    COW_AT(1016a8ce)
                                            wrf32(sp0 - 0x84u, (float)(double)(float)x0);
                                            t58 = rd32(esi + 0xa8u);
                                            wr32(ecx + 0x1807cu, t58);
                                            wr8(sp0 - 0xb5u, 1u);
                                            loc_a4 = rd32(sp0 - 0xa4u);
                                            loc_a8 = rd32(sp0 - 0xa8u);
                                            loc_b0 = rd32(sp0 - 0xb0u);
                                            loc_7c = rd32(sp0 - 0x7cu);
                                            loc_80 = rd32(sp0 - 0x80u);
                                            loc_a0 = rd32(sp0 - 0xa0u);
                                            loc_58 = rd32(sp0 - 0x58u);
                                            loc_60 = rd32(sp0 - 0x60u);
                                            loc_78 = rd32(sp0 - 0x78u);
                                            loc_90_f = (double)rdf32(sp0 - 0x90u);
                                            loc_8c_f = (double)rdf32(sp0 - 0x8cu);
                                            loc_88_f = (double)rdf32(sp0 - 0x88u);
                                            loc_70_f = (double)rdf32(sp0 - 0x70u);
                                            loc_6c_f = (double)rdf32(sp0 - 0x6cu);
                                            loc_68_f = (double)rdf32(sp0 - 0x68u);
                                        }
                                    }
                                }
L_1016a8f9: ;
    COW_AT(1016a8f9)
                                wr32(sp0 - 0x78u, loc_78 + 1u);
                                if ((int32_t)(loc_78 + 1u) < (int16_t)rd16(ebp + 0xcu))
                                {
                                    eax = loc_78 + 1u;
                                    edi = edi + 8u;
                                    loc_5c = rd32(sp0 - 0x5cu);
                                    loc_84 = rd32(sp0 - 0x84u);
                                    loc_78 = loc_78 + 1u;
                                    goto L_1016a60c;
                                }
                                loc_5c = rd32(sp0 - 0x5cu);
                                loc_84 = rd32(sp0 - 0x84u);
                            }
                        }
                    }
L_1016a911: ;
    COW_AT(1016a911)
                    esi = loc_a0;
                }
    COW_AT(1016a915)
                wr32(sp0 - 0xa0u, esi + 8u);
                wr32(sp0 - 0x60u, loc_60 - 1u);
                if (loc_60 != 1u)
                {
                    eax = loc_60 - 1u;
                    loc_a0 = esi + 8u;
                    esi = esi + 8u;
                    loc_60 = loc_60 - 1u;
                    goto L_1016a4dd;
                }
                esi = esi + 8u;
            }
        }
        else
        {
            ecx = rd32(eax) & 0x7ffu;
            esi = eax + 4u;
    COW_AT(1016a4c3)
            t15 = ecx * 8u + esi;
            wr32(sp0 - 0xa0u, t15);
            esi = t15;
        }
    COW_AT(1016a92b)
        if (rd32(esi) != 0u)
        {
            eax = rd32(esi);
            goto L_1016a4a1;
        }
    COW_AT(1016a935)
        ecx = loc_80;
        edx = loc_7c;
        esi = rd32(sp0 - 0xacu);
L_1016a941: ;
    COW_AT(1016a941)
        wr32(sp0 - 0x80u, ecx + 1u);
        if ((int32_t)(ecx + 1u) <= (int32_t)loc_a8)
        {
            loc_80 = ecx + 1u;
            ecx = ecx + 1u;
            goto L_1016a48b;
        }
    COW_AT(1016a952)
        eax = loc_a4;
L_1016a956: ;
    COW_AT(1016a956)
        wr32(sp0 - 0x7cu, edx + 1u);
        if ((int32_t)(edx + 1u) <= (int32_t)loc_b0)
        {
            loc_7c = edx + 1u;
            edx = edx + 1u;
            goto L_1016a479;
        }
    }
    COW_AT(1016a967)
    g->ebx = rd32(sp0 - 0xbcu);
    g->esi = rd32(sp0 - 0xc4u);
    g->edi = rd32(sp0 - 0xc8u);
    g->ebp = rd32(sp0 - 0xc0u);
    return (eax & 0xffffff00u) | rd8(sp0 - 0xb5u);
L_1016a8ec: ;
    COW_AT(1016a8ec)
L_1016a8ee: ;
    COW_AT(1016a8ee)
    loc_a4 = rd32(sp0 - 0xa4u);
    loc_a8 = rd32(sp0 - 0xa8u);
    loc_b0 = rd32(sp0 - 0xb0u);
    loc_7c = rd32(sp0 - 0x7cu);
    loc_80 = rd32(sp0 - 0x80u);
    loc_a0 = rd32(sp0 - 0xa0u);
    loc_58 = rd32(sp0 - 0x58u);
    loc_60 = rd32(sp0 - 0x60u);
    loc_78 = rd32(sp0 - 0x78u);
    loc_90_f = (double)rdf32(sp0 - 0x90u);
    loc_8c_f = (double)rdf32(sp0 - 0x8cu);
    loc_88_f = (double)rdf32(sp0 - 0x88u);
    loc_70_f = (double)rdf32(sp0 - 0x70u);
    loc_6c_f = (double)rdf32(sp0 - 0x6cu);
    loc_68_f = (double)rdf32(sp0 - 0x68u);
    goto L_1016a8f9;
L_1016a978: ;
    COW_AT(1016a978)
    g->ebx = loc_bc;
    g->esi = loc_c4;
    g->edi = loc_c8;
    g->ebp = loc_c0;
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1016a2d0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1016a2f9u:
    {
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xc8u);
        in_esi = rd32(sp0 - 0xc4u);
        in_ebp = rd32(sp0 - 0xc0u);
        in_ebx = rd32(sp0 - 0xbcu);
        g->esp = sp0 - 0xc8u;
        g->eax = 0u;
        wr32(sp0 - 0xacu, self);
        (void)sp0;
        return 1;
    }
    case 0x1016a317u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xc8u);
        in_esi = rd32(sp0 - 0xc4u);
        in_ebp = rd32(sp0 - 0xc0u);
        in_ebx = rd32(sp0 - 0xbcu);
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        g->esi = arg1;
        wr32(sp0 - 0xacu, self);
        (void)sp0;
        return 1;
    }
    case 0x1016a324u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
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
        self = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xc8u);
        in_esi = rd32(sp0 - 0xc4u);
        in_ebp = rd32(sp0 - 0xc0u);
        in_ebx = rd32(sp0 - 0xbcu);
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        g->esi = arg1;
        wr32(sp0 - 0xacu, self);
        (void)sp0;
        return 1;
    }
    case 0x1016a32fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_64;
        uint32_t loc_74;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xc8u);
        in_esi = rd32(sp0 - 0xc4u);
        in_ebp = rd32(sp0 - 0xc0u);
        in_ebx = rd32(sp0 - 0xbcu);
        loc_74 = rd32(sp0 - 0x74u);
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        g->esi = arg1;
        wr32(sp0 - 0xacu, self);
        (void)sp0;
        return 1;
    }
    case 0x1016a33fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016a349u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016a354u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1016a369u:
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
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a373u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xc8u;
        g->edx = 0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a380u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xc8u;
        g->edx = 0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a38au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xc8u;
        g->edx = 0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a391u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xc8u;
        g->edx = 0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a397u:
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
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a3a2u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a3a6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a3adu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a3b7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a3c2u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a4;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a3c6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a4;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a3cdu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a4;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a3d4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a4;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a3dcu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a4;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a3deu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a4;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a3e3u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xc8u;
        g->edx = 0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a3eau:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xc8u;
        g->edx = 0u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a3f0u:
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
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a3fbu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a3ffu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a406u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a410u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a41bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a4;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a41fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a4;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a426u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a4;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a42au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a4;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a432u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a4;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a434u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a4;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a435u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a4;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a439u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a4;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a443u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a4;
        uint32_t loc_a8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a44fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_b0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a453u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_b0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a475u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_7c;
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_b0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_7c = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        wr32(sp0 - 0x84u, 0x49742400u);
        wr32(sp0 - 0x5cu, 0x49742400u);
        (void)sp0;
        return 1;
    }
    case 0x1016a479u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        double loc_68_f;
        double loc_6c_f;
        double loc_70_f;
        uint32_t loc_78;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        double loc_88_f;
        double loc_8c_f;
        double loc_90_f;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_b0;
        double loc_b4_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78 = rd32(sp0 - 0x78u);
        loc_70_f = rdf32(sp0 - 0x70u);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68_f = rdf32(sp0 - 0x68u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a48bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        double loc_68_f;
        double loc_6c_f;
        double loc_70_f;
        uint32_t loc_78;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        double loc_88_f;
        double loc_8c_f;
        double loc_90_f;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_b0;
        double loc_b4_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78 = rd32(sp0 - 0x78u);
        loc_70_f = rdf32(sp0 - 0x70u);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68_f = rdf32(sp0 - 0x68u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a4a1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        double loc_68_f;
        double loc_6c_f;
        double loc_70_f;
        uint32_t loc_78;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        double loc_88_f;
        double loc_8c_f;
        double loc_90_f;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_b0;
        double loc_b4_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78 = rd32(sp0 - 0x78u);
        loc_70_f = rdf32(sp0 - 0x70u);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68_f = rdf32(sp0 - 0x68u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a4c3u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        double loc_68_f;
        double loc_6c_f;
        double loc_70_f;
        uint32_t loc_78;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        double loc_88_f;
        double loc_8c_f;
        double loc_90_f;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_b0;
        double loc_b4_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78 = rd32(sp0 - 0x78u);
        loc_70_f = rdf32(sp0 - 0x70u);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68_f = rdf32(sp0 - 0x68u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a4d1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        double loc_68_f;
        double loc_6c_f;
        double loc_70_f;
        uint32_t loc_78;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        double loc_88_f;
        double loc_8c_f;
        double loc_90_f;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_b0;
        double loc_b4_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78 = rd32(sp0 - 0x78u);
        loc_70_f = rdf32(sp0 - 0x70u);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68_f = rdf32(sp0 - 0x68u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a4d9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        double loc_68_f;
        double loc_6c_f;
        double loc_70_f;
        uint32_t loc_78;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        double loc_88_f;
        double loc_8c_f;
        double loc_90_f;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_b0;
        double loc_b4_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78 = rd32(sp0 - 0x78u);
        loc_70_f = rdf32(sp0 - 0x70u);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68_f = rdf32(sp0 - 0x68u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a4ddu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        double loc_68_f;
        double loc_6c_f;
        double loc_70_f;
        uint32_t loc_78;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        double loc_88_f;
        double loc_8c_f;
        double loc_90_f;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_b0;
        double loc_b4_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78 = rd32(sp0 - 0x78u);
        loc_70_f = rdf32(sp0 - 0x70u);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68_f = rdf32(sp0 - 0x68u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a4e8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        double loc_68_f;
        double loc_6c_f;
        double loc_70_f;
        uint32_t loc_78;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        double loc_88_f;
        double loc_8c_f;
        double loc_90_f;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_b0;
        double loc_b4_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78 = rd32(sp0 - 0x78u);
        loc_70_f = rdf32(sp0 - 0x70u);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68_f = rdf32(sp0 - 0x68u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a504u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        double loc_68_f;
        double loc_6c_f;
        double loc_70_f;
        uint32_t loc_78;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        double loc_88_f;
        double loc_8c_f;
        double loc_90_f;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_b0;
        double loc_b4_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78 = rd32(sp0 - 0x78u);
        loc_70_f = rdf32(sp0 - 0x70u);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68_f = rdf32(sp0 - 0x68u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a519u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        double loc_68_f;
        double loc_6c_f;
        double loc_70_f;
        uint32_t loc_78;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        double loc_88_f;
        double loc_8c_f;
        double loc_90_f;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_b0;
        double loc_b4_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78 = rd32(sp0 - 0x78u);
        loc_70_f = rdf32(sp0 - 0x70u);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68_f = rdf32(sp0 - 0x68u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a52eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        double loc_68_f;
        double loc_6c_f;
        double loc_70_f;
        uint32_t loc_78;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        double loc_88_f;
        double loc_8c_f;
        double loc_90_f;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_b0;
        double loc_b4_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78 = rd32(sp0 - 0x78u);
        loc_70_f = rdf32(sp0 - 0x70u);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68_f = rdf32(sp0 - 0x68u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a60cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        double loc_68_f;
        double loc_6c_f;
        double loc_70_f;
        uint32_t loc_78;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        double loc_88_f;
        double loc_8c_f;
        double loc_90_f;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_b0;
        double loc_b4_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78 = rd32(sp0 - 0x78u);
        loc_70_f = rdf32(sp0 - 0x70u);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68_f = rdf32(sp0 - 0x68u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a6f1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        double loc_68_f;
        double loc_6c_f;
        double loc_70_f;
        uint32_t loc_78;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        double loc_88_f;
        double loc_8c_f;
        double loc_90_f;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_b0;
        double loc_b4_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78 = rd32(sp0 - 0x78u);
        loc_70_f = rdf32(sp0 - 0x70u);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68_f = rdf32(sp0 - 0x68u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a75eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        double loc_68_f;
        double loc_6c_f;
        double loc_70_f;
        uint32_t loc_78;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        double loc_88_f;
        double loc_8c_f;
        double loc_90_f;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_b0;
        double loc_b4_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78 = rd32(sp0 - 0x78u);
        loc_70_f = rdf32(sp0 - 0x70u);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68_f = rdf32(sp0 - 0x68u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a775u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        double loc_68_f;
        double loc_6c_f;
        double loc_70_f;
        uint32_t loc_78;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        double loc_88_f;
        double loc_8c_f;
        double loc_90_f;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_b0;
        double loc_b4_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78 = rd32(sp0 - 0x78u);
        loc_70_f = rdf32(sp0 - 0x70u);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68_f = rdf32(sp0 - 0x68u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        g->esp = sp0 - 0xc8u;
        (void)sp0;
        return 1;
    }
    case 0x1016a7b8u:
    {
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
        g->esp = sp0 - 0xc8u;
        wr32(sp0 - 0xd0u, sp0 - 0x9cu);
        wr32(sp0 - 0xccu, sp0 - 0x54u);
        (void)sp0;
        return 1;
    }
    case 0x1016a7c0u:
    {
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
        g->esp = sp0 - 0xc8u;
        wr32(sp0 - 0xd0u, sp0 - 0x9cu);
        wr32(sp0 - 0xccu, sp0 - 0x54u);
        (void)sp0;
        return 1;
    }
    case 0x1016a867u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_b4_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b4_f = rdf32(sp0 - 0xb4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xc8u;
        wr32(sp0 - 0xd0u, sp0 - 0x9cu);
        wr32(sp0 - 0xccu, sp0 - 0x54u);
        (void)sp0;
        return 1;
    }
    case 0x1016a8b7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_5c_f;
        double loc_b4_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xc8u;
        wr32(sp0 - 0xd0u, sp0 - 0x9cu);
        wr32(sp0 - 0xccu, sp0 - 0x54u);
        (void)sp0;
        return 1;
    }
    case 0x1016a8bfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_5c_f;
        double loc_b4_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xc8u;
        wr32(sp0 - 0xd0u, sp0 - 0x9cu);
        wr32(sp0 - 0xccu, sp0 - 0x54u);
        (void)sp0;
        return 1;
    }
    case 0x1016a8ceu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_5c_f;
        double loc_b4_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xc8u;
        wr32(sp0 - 0xd0u, sp0 - 0x9cu);
        wr32(sp0 - 0xccu, sp0 - 0x54u);
        (void)sp0;
        return 1;
    }
    case 0x1016a8ecu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_5c_f;
        double loc_b4_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xc8u;
        wr32(sp0 - 0xd0u, sp0 - 0x9cu);
        wr32(sp0 - 0xccu, sp0 - 0x54u);
        (void)sp0;
        return 1;
    }
    case 0x1016a8eeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_5c_f;
        double loc_b4_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_5c_f = rdf32(sp0 - 0x5cu);
        g->esp = sp0 - 0xc8u;
        wr32(sp0 - 0xd0u, sp0 - 0x9cu);
        wr32(sp0 - 0xccu, sp0 - 0x54u);
        (void)sp0;
        return 1;
    }
    case 0x1016a8f7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        double loc_68_f;
        double loc_6c_f;
        double loc_70_f;
        uint32_t loc_78;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        double loc_88_f;
        double loc_8c_f;
        double loc_90_f;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_b0;
        double loc_b4_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78 = rd32(sp0 - 0x78u);
        loc_70_f = rdf32(sp0 - 0x70u);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68_f = rdf32(sp0 - 0x68u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a8f9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        uint32_t loc_58;
        uint32_t loc_60;
        double loc_68_f;
        double loc_6c_f;
        double loc_70_f;
        uint32_t loc_78;
        uint32_t loc_7c;
        uint32_t loc_80;
        double loc_88_f;
        double loc_8c_f;
        double loc_90_f;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_b0;
        double loc_b4_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78 = rd32(sp0 - 0x78u);
        loc_70_f = rdf32(sp0 - 0x70u);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68_f = rdf32(sp0 - 0x68u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a911u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        double loc_68_f;
        double loc_6c_f;
        double loc_70_f;
        uint32_t loc_78;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        double loc_88_f;
        double loc_8c_f;
        double loc_90_f;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_b0;
        double loc_b4_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78 = rd32(sp0 - 0x78u);
        loc_70_f = rdf32(sp0 - 0x70u);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68_f = rdf32(sp0 - 0x68u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a915u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        double loc_68_f;
        double loc_6c_f;
        double loc_70_f;
        uint32_t loc_78;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        double loc_88_f;
        double loc_8c_f;
        double loc_90_f;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_b0;
        double loc_b4_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78 = rd32(sp0 - 0x78u);
        loc_70_f = rdf32(sp0 - 0x70u);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68_f = rdf32(sp0 - 0x68u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a92bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        double loc_68_f;
        double loc_6c_f;
        double loc_70_f;
        uint32_t loc_78;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        double loc_88_f;
        double loc_8c_f;
        double loc_90_f;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_b0;
        double loc_b4_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78 = rd32(sp0 - 0x78u);
        loc_70_f = rdf32(sp0 - 0x70u);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68_f = rdf32(sp0 - 0x68u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a935u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        double loc_68_f;
        double loc_6c_f;
        double loc_70_f;
        uint32_t loc_78;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        double loc_88_f;
        double loc_8c_f;
        double loc_90_f;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_b0;
        double loc_b4_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78 = rd32(sp0 - 0x78u);
        loc_70_f = rdf32(sp0 - 0x70u);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68_f = rdf32(sp0 - 0x68u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a941u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        double loc_68_f;
        double loc_6c_f;
        double loc_70_f;
        uint32_t loc_78;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        double loc_88_f;
        double loc_8c_f;
        double loc_90_f;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_b0;
        double loc_b4_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78 = rd32(sp0 - 0x78u);
        loc_70_f = rdf32(sp0 - 0x70u);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68_f = rdf32(sp0 - 0x68u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a952u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        double loc_68_f;
        double loc_6c_f;
        double loc_70_f;
        uint32_t loc_78;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        double loc_88_f;
        double loc_8c_f;
        double loc_90_f;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_b0;
        double loc_b4_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78 = rd32(sp0 - 0x78u);
        loc_70_f = rdf32(sp0 - 0x70u);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68_f = rdf32(sp0 - 0x68u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a956u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        double loc_68_f;
        double loc_6c_f;
        double loc_70_f;
        uint32_t loc_78;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        double loc_88_f;
        double loc_8c_f;
        double loc_90_f;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_b0;
        double loc_b4_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78 = rd32(sp0 - 0x78u);
        loc_70_f = rdf32(sp0 - 0x70u);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68_f = rdf32(sp0 - 0x68u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        g->esp = sp0 - 0xc8u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016a967u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        double loc_68_f;
        double loc_6c_f;
        double loc_70_f;
        uint32_t loc_78;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        double loc_88_f;
        double loc_8c_f;
        double loc_90_f;
        uint32_t loc_a0;
        uint32_t loc_a4;
        uint32_t loc_a8;
        uint32_t loc_b0;
        double loc_b4_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_b4_f = rdf32(sp0 - 0xb4u);
        loc_b0 = rd32(sp0 - 0xb0u);
        loc_a8 = rd32(sp0 - 0xa8u);
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_90_f = rdf32(sp0 - 0x90u);
        loc_8c_f = rdf32(sp0 - 0x8cu);
        loc_88_f = rdf32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78 = rd32(sp0 - 0x78u);
        loc_70_f = rdf32(sp0 - 0x70u);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68_f = rdf32(sp0 - 0x68u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        g->esp = sp0 - 0xc8u;
        (void)sp0;
        return 1;
    }
    case 0x1016a978u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        g->esp = sp0 - 0xc8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1016a2d0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1016a2d0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
