/* f_0x102dd629 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_102dd629(Guest* g)
{
    double d1;
    double d10;
    double d11;
    double d12;
    double d13;
    double d17;
    double d2;
    double d21;
    double d22;
    double d23;
    double d24;
    double d26;
    double d27;
    double d28;
    double d29;
    double d3;
    double d30;
    double d31;
    double d32;
    double d4;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    double loc_14_f;
    double loc_18_f;
    uint32_t loc_1c;
    double loc_20_f;
    double loc_24_f;
    uint32_t loc_28;
    double loc_2c_f;
    double loc_30_f;
    double loc_34_f;
    double loc_38_f;
    uint32_t loc_3c;
    uint32_t loc_4;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t loc_48;
    uint32_t loc_4c;
    double loc_8_f;
    double loc_c_f;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t18;
    uint32_t t19;
    uint32_t t20;
    uint32_t t25;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    double x1;
    double x2;
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
    cow_frame(g, sp0, 88u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102dd63fu: eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebx = rd32(sp0 - 0x44u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x4cu); g->esi = rd32(sp0 - 0x48u); goto E_102dd63f;
    case 0x102dd64au: self = g->ecx; in_edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebx = rd32(sp0 - 0x44u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x4cu); g->esi = rd32(sp0 - 0x48u); goto E_102dd64a;
    case 0x102dd654u: eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebx = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 4u); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x4cu); g->esi = rd32(sp0 - 0x48u); goto E_102dd654;
    case 0x102dd65au: eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebx = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x4cu); g->esi = rd32(sp0 - 0x48u); goto E_102dd65a;
    case 0x102dd667u: eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebx = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_20_f = rdf32(sp0 - 0x20u); in_ebp = rd32(sp0 - 4u); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x4cu); g->esi = rd32(sp0 - 0x48u); goto E_102dd667;
    case 0x102dd66du: eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebx = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_20_f = rdf32(sp0 - 0x20u); in_ebp = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x4cu); g->esi = rd32(sp0 - 0x48u); goto E_102dd66d;
    case 0x102dd694u: self = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebx = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_38_f = rdf32(sp0 - 0x38u); loc_34_f = rdf32(sp0 - 0x34u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_20_f = rdf32(sp0 - 0x20u); in_ebp = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x4cu); g->esi = rd32(sp0 - 0x48u); goto E_102dd694;
    case 0x102dd69eu: self = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebx = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_38_f = rdf32(sp0 - 0x38u); loc_34_f = rdf32(sp0 - 0x34u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_20_f = rdf32(sp0 - 0x20u); in_ebp = rd32(sp0 - 4u); x0 = ST(1); g->top = (g->top + 2u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x4cu); g->esi = rd32(sp0 - 0x48u); goto E_102dd69e;
    case 0x102dd6a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_38_f = rdf32(sp0 - 0x38u); loc_34_f = rdf32(sp0 - 0x34u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_20_f = rdf32(sp0 - 0x20u); loc_4 = rd32(sp0 - 4u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_102dd6a4;
    case 0x102dd6aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_38_f = rdf32(sp0 - 0x38u); loc_34_f = rdf32(sp0 - 0x34u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_20_f = rdf32(sp0 - 0x20u); loc_4 = rd32(sp0 - 4u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_102dd6ae;
    case 0x102dd6b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_38_f = rdf32(sp0 - 0x38u); loc_34_f = rdf32(sp0 - 0x34u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_20_f = rdf32(sp0 - 0x20u); loc_4 = rd32(sp0 - 4u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_102dd6b4;
    case 0x102dd6cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_102dd6cf;
    case 0x102dd6ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_102dd6dd;
    case 0x102dd6dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_38_f = rdf32(sp0 - 0x38u); loc_34_f = rdf32(sp0 - 0x34u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_20_f = rdf32(sp0 - 0x20u); loc_4 = rd32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102dd6df;
    case 0x102dd6e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102dd6e7;
    case 0x102dd6f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102dd6f2;
    case 0x102dd708u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_1c = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); goto E_102dd708;
    case 0x102dd722u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_28 = rd32(sp0 - 0x28u); loc_1c = rd32(sp0 - 0x1cu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102dd722;
    case 0x102dd728u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_28 = rd32(sp0 - 0x28u); loc_1c = rd32(sp0 - 0x1cu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102dd728;
    case 0x102dd72bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_30_f = rdf32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_1c = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); loc_8_f = rdf32(sp0 - 8u); goto E_102dd72b;
    case 0x102dd735u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_30_f = rdf32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_1c = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); loc_8_f = rdf32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102dd735;
    case 0x102dd73bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_30_f = rdf32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_1c = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); loc_8_f = rdf32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102dd73b;
    case 0x102dd75bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_30_f = rdf32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_24_f = rdf32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); loc_14_f = rdf32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102dd75b;
    case 0x102dd768u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_30_f = rdf32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_24_f = rdf32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); loc_14_f = rdf32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102dd768;
    case 0x102dd76fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_30_f = rdf32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_24_f = rdf32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); loc_14_f = rdf32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102dd76f;
    case 0x102dd77cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_30_f = rdf32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_24_f = rdf32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); loc_14_f = rdf32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102dd77c;
    case 0x102dd782u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_30_f = rdf32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_24_f = rdf32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); loc_14_f = rdf32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8_f = rdf32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102dd782;
    case 0x102dd78cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102dd78c;
    case 0x102dd793u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102dd793;
    case 0x102dd7a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102dd7a9;
    case 0x102dd7b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_8_f = rdf32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102dd7b3;
    case 0x102dd7b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_8_f = rdf32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102dd7b6;
    case 0x102dd7c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_18_f = rdf32(sp0 - 0x18u); loc_8_f = rdf32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102dd7c5;
    case 0x102dd7cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_18_f = rdf32(sp0 - 0x18u); loc_8_f = rdf32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102dd7cd;
    case 0x102dd7d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_18_f = rdf32(sp0 - 0x18u); loc_8_f = rdf32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102dd7d2;
    case 0x102dd7d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_18_f = rdf32(sp0 - 0x18u); loc_8_f = rdf32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102dd7d4;
    case 0x102dd7d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_18_f = rdf32(sp0 - 0x18u); loc_8_f = rdf32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102dd7d8;
    case 0x102dd7e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_18_f = rdf32(sp0 - 0x18u); loc_8_f = rdf32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102dd7e8;
    case 0x102dd7f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_18_f = rdf32(sp0 - 0x18u); loc_8_f = rdf32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102dd7f6;
    case 0x102dd7fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_18_f = rdf32(sp0 - 0x18u); loc_8_f = rdf32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102dd7fd;
    case 0x102dd807u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_18_f = rdf32(sp0 - 0x18u); loc_8_f = rdf32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102dd807;
    case 0x102dd80cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_18_f = rdf32(sp0 - 0x18u); loc_8_f = rdf32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102dd80c;
    case 0x102dd819u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_18_f = rdf32(sp0 - 0x18u); loc_8_f = rdf32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102dd819;
    case 0x102dd81fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_8_f = rdf32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102dd81f;
    case 0x102dd825u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_8_f = rdf32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102dd825;
    case 0x102dd835u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_8_f = rdf32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102dd835;
    case 0x102dd839u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_8_f = rdf32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102dd839;
    case 0x102dd84cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_8_f = rdf32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102dd84c;
    case 0x102dd850u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_8_f = rdf32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102dd850;
    case 0x102dd85bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_8_f = rdf32(sp0 - 8u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_102dd85b;
    case 0x102dd861u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_8_f = rdf32(sp0 - 8u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_102dd861;
    case 0x102dd865u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_8_f = rdf32(sp0 - 8u); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_102dd865;
    case 0x102dd88eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_8_f = rdf32(sp0 - 8u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102dd88e;
    case 0x102dd89du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_10 = rd32(sp0 - 0x10u); loc_8_f = rdf32(sp0 - 8u); goto E_102dd89d;
    case 0x102dd8adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_10 = rd32(sp0 - 0x10u); loc_8_f = rdf32(sp0 - 8u); goto E_102dd8ad;
    case 0x102dd8bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_10 = rd32(sp0 - 0x10u); loc_8_f = rdf32(sp0 - 8u); goto E_102dd8bb;
    case 0x102dd8d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_1c = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); loc_8_f = rdf32(sp0 - 8u); goto E_102dd8d9;
    case 0x102dd8dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_4 = rd32(sp0 - 4u); goto E_102dd8df;
    case 0x102dd8e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_28 = rd32(sp0 - 0x28u); loc_1c = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); loc_8_f = rdf32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102dd8e1;
    default: break;
    }
#endif

    COW_AT(102dd629)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x44u, in_ebx);
    wr32(sp0 - 0x48u, in_esi);
    wr32(sp0 - 0x4cu, in_edi);
    if (arg1 == 0u)
    {
        edx = in_edx;
        loc_4 = in_ebp;
        loc_44 = in_ebx;
        loc_48 = in_esi;
        loc_4c = in_edi;
        goto L_102dd8df;
    }
    COW_AT(102dd63f)
    if (arg2 == 0u)
    {
        edx = in_edx;
        loc_4 = in_ebp;
        loc_44 = in_ebx;
        loc_48 = in_esi;
        loc_4c = in_edi;
        goto L_102dd8df;
    }
    COW_AT(102dd64a)
    wr32(sp0 - 0x40u, arg2);
    if ((int32_t)arg2 >= 0)
    {
        x0 = (double)(int32_t)arg2;
    }
    else
    {
    COW_AT(102dd654)
        x0 = fr(g, (double)(int32_t)arg2 + (double)rdf32(COW_IMG(0x10345da4u)));
    }
    COW_AT(102dd65a)
    wrf32(sp0 - 0x20u, (float)(double)(float)x0);
    wr32(sp0 - 0x40u, arg1);
    if ((int32_t)arg1 >= 0)
    {
        loc_20_f = (double)(float)x0;
        x0 = (double)(int32_t)arg1;
    }
    else
    {
        loc_20_f = (double)(float)x0;
    COW_AT(102dd667)
        x0 = fr(g, (double)(int32_t)arg1 + (double)rdf32(COW_IMG(0x10345da4u)));
    }
    COW_AT(102dd66d)
    wrf32(sp0 - 0x34u, (float)(double)(float)x0);
    wr32(sp0 - 0x50u, 0x10u);
    d1 = (double)(float)fr(g, loc_20_f / x0);
    wrf32(sp0 - 0x2cu, (float)d1);
    d2 = fr(g, (double)rdf32(COW_IMG(0x10329a08u)) / fr(g, loc_20_f / x0));
    wrf32(sp0 - 0x38u, (float)(double)(float)d2);
    if (arg1 == 0u)
    {
        eax = arg3 != 0u;
        ecx = self;
        edx = in_edx;
        esi = 0x10u;
        loc_4 = in_ebp;
        loc_44 = in_ebx;
        loc_48 = in_esi;
        loc_4c = in_edi;
        loc_34_f = (double)(float)x0;
        loc_2c_f = d1;
        loc_38_f = (double)(float)d2;
        x0 = fr(g, loc_20_f / x0);
    }
    else
    {
        loc_34_f = (double)(float)x0;
        loc_2c_f = d1;
        loc_38_f = (double)(float)d2;
        x0 = fr(g, loc_20_f / x0);
    COW_AT(102dd694)
        wr32(sp0 - 0x40u, arg3 != 0u);
        if ((int32_t)(arg3 != 0u) >= 0)
        {
            eax = arg3 != 0u;
            ecx = self;
            edx = in_edx;
            esi = 0x10u;
            edi = 0u;
            loc_4 = in_ebp;
            loc_44 = in_ebx;
            loc_48 = in_esi;
            loc_4c = in_edi;
            x1 = (double)(int32_t)(arg3 != 0u);
        }
        else
        {
    COW_AT(102dd69e)
            eax = arg3 != 0u;
            ecx = self;
            edx = in_edx;
            esi = 0x10u;
            edi = 0u;
            loc_4 = in_ebp;
            loc_44 = in_ebx;
            loc_48 = in_esi;
            loc_4c = in_edi;
            x1 = fr(g, (double)(int32_t)(arg3 != 0u) + (double)rdf32(COW_IMG(0x10345da4u)));
        }
L_102dd6a4: ;
    COW_AT(102dd6a4)
        wr32(sp0 - 0x40u, edi);
        if ((int32_t)edi >= 0)
        {
            x2 = (double)(int32_t)edi;
        }
        else
        {
            x2 = (double)(int32_t)edi;
    COW_AT(102dd6ae)
            x2 = fr(g, x2 + (double)rdf32(COW_IMG(0x10345da4u)));
        }
    COW_AT(102dd6b4)
        d3 = fr(g, fr(g, x2 - (double)rdf32(COW_IMG(0x10329a08u))) * x0);
        g->ecx = ecx;
        g->edx = edx;
        d4 = fr(g, fr(g, fr(g, fr(g, d3 + x0) - d3) + x1) + (double)rdf32(COW_IMG(0x1032961cu)));
        fpush(g, d4);
        g->esp = sp0 - 0x4cu;
        t5 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        t6 = g->ecx;
        t7 = g->edx;
        eax = t5;
        ecx = t6;
        edx = t7;
        x2 = d3;
    COW_AT(102dd6cf)
        if (edi + 1u < arg1)
        {
            esi = eax * 0x10u + esi + 0xcu;
            eax = eax << 4u;
            edi = edi + 1u;
            loc_4 = rd32(sp0 - 4u);
            loc_44 = rd32(sp0 - 0x44u);
            loc_48 = rd32(sp0 - 0x48u);
            loc_4c = rd32(sp0 - 0x4cu);
            loc_20_f = (double)rdf32(sp0 - 0x20u);
            loc_34_f = (double)rdf32(sp0 - 0x34u);
            loc_2c_f = (double)rdf32(sp0 - 0x2cu);
            loc_38_f = (double)rdf32(sp0 - 0x38u);
            goto L_102dd6a4;
        }
        esi = eax * 0x10u + esi + 0xcu;
        eax = eax << 4u;
    COW_AT(102dd6dd)
        loc_4 = rd32(sp0 - 4u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_20_f = (double)rdf32(sp0 - 0x20u);
        loc_34_f = (double)rdf32(sp0 - 0x34u);
        loc_2c_f = (double)rdf32(sp0 - 0x2cu);
        loc_38_f = (double)rdf32(sp0 - 0x38u);
    }
    COW_AT(102dd6df)
    wr32(sp0 - 0x50u, esi);
    g->eax = eax;
    g->esp = sp0 - 0x44u;
    t8 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, esi, loc_4c, loc_48);
    t9 = g->edx;
    eax = t8;
    edx = t9;
    COW_AT(102dd6e7)
    if (eax == 0u)
    {
        loc_4 = rd32(sp0 - 4u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_4c = rd32(sp0 - 0x4cu);
        goto L_102dd8df;
    }
    ecx = rd32(sp0 - 0x50u);
    edi = eax;
    COW_AT(102dd6f2)
    wr32(sp0 - 0x1cu, 0u);
    wrf32(sp0 - 8u, (float)(double)(float)0.0);
    wr32(sp0 - 0x50u, 4u);
    if (arg1 == 0u)
    {
        esi = 4u;
        goto L_102dd8d9;
    }
    ebx = 0u;
    esi = 4u;
    loc_1c = 0u;
    loc_10 = rd32(sp0 - 0x10u);
L_102dd708: ;
    COW_AT(102dd708)
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x40u, edi + esi);
    wr32(sp0 - 0x3cu, esi);
    if ((int32_t)loc_1c >= 0)
    {
        loc_40 = edi + esi;
        loc_3c = esi;
        esi = esi + 4u;
        x0 = (double)(int32_t)loc_1c;
    }
    else
    {
        loc_40 = edi + esi;
        loc_3c = esi;
        esi = esi + 4u;
        x0 = (double)(int32_t)loc_1c;
    COW_AT(102dd722)
        x0 = fr(g, x0 + (double)rdf32(COW_IMG(0x10345da4u)));
    }
    COW_AT(102dd728)
    wrf32(sp0 - 0x30u, (float)(double)(float)x0);
    loc_8_f = (double)(float)0.0;
    loc_10 = 0u;
    loc_30_f = (double)(float)x0;
L_102dd72b: ;
    COW_AT(102dd72b)
    if ((int32_t)loc_10 >= 0)
    {
        eax = loc_10;
        x0 = (double)(int32_t)loc_10;
    }
    else
    {
        eax = loc_10;
        x0 = (double)(int32_t)loc_10;
    COW_AT(102dd735)
        x0 = fr(g, x0 + (double)rdf32(COW_IMG(0x10345da4u)));
    }
    COW_AT(102dd73b)
    d10 = fr(g, fr(g, x0 + loc_30_f) - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0x14u, (float)(double)(float)d10);
    d11 = fr(g, d10 * (double)rdf32(sp0 - 0x2cu));
    wrf32(sp0 - 0x24u, (float)(double)(float)d11);
    d12 = fr(g, (double)rdf32(sp0 - 0x2cu) + d11);
    wrf32(sp0 - 0xcu, (float)(double)(float)d12);
    if (arg3 != 0u)
    {
        loc_14_f = (double)(float)d10;
        loc_24_f = (double)(float)d11;
        x0 = d11;
    }
    else
    {
        loc_14_f = (double)(float)d10;
        loc_24_f = (double)(float)d11;
        loc_c_f = (double)(float)d12;
        x0 = d11;
    COW_AT(102dd75b)
        if (!(x0 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
    COW_AT(102dd768)
            wrf32(sp0 - 0x24u, (float)(double)(float)0.0);
            loc_24_f = (double)(float)0.0;
            x0 = 0.0;
        }
    COW_AT(102dd76f)
        d13 = (double)rdf32(sp0 - 0x20u);
        if ((cow_fsw(g, loc_c_f, d13, 1u) >> 8u & 0x41u) != 0u)
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_c_f, d13, 1u);
        }
        else
        {
    COW_AT(102dd77c)
            t14 = rd32(sp0 - 0x20u);
            wr32(sp0 - 0xcu, t14);
            eax = t14;
        }
    }
    COW_AT(102dd782)
    wr32(sp0 - 0x50u, ecx);
    wr32(sp0 - 0x54u, ecx);
    wrf64(sp0 - 0x54u, x0);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x50u;
    t15 = cow_thiscall_cdecl(g, COW_IMG(0x10316efbu), ecx, 1, cow_dlo(x0));
    t16 = g->edx;
    d17 = cow_take_float(g);
    eax = t15;
    edx = t16;
    x0 = d17;
    COW_AT(102dd78c)
    g->ecx = rd32(sp0 - 0x50u);
    t18 = rd32(sp0 - 0x50u);
    fpush(g, x0);
    g->esp = sp0 - 0x4cu;
    t19 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t20 = g->ecx;
    eax = t19;
    ecx = t20;
    COW_AT(102dd793)
    wr32(sp0 - 0x18u, eax);
    d21 = (double)rdf32(sp0 - 0xcu);
    if (!((double)(int32_t)eax < d21))
    {
        edx = eax;
        loc_8_f = (double)rdf32(sp0 - 8u);
        x0 = (double)(int32_t)eax;
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)(int32_t)eax, d21, 1u);
    }
    else
    {
        edx = eax;
        x0 = (double)(int32_t)eax;
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)(int32_t)eax, d21, 1u);
    COW_AT(102dd7a9)
        wr32(sp0 - 0x28u, edx - arg2);
        ecx = edx - arg2;
        loc_28 = edx - arg2;
        loc_8_f = (double)rdf32(sp0 - 8u);
L_102dd7b6: ;
    COW_AT(102dd7b6)
        d22 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) + x0);
        wrf32(sp0 - 0x18u, (float)(double)(float)d22);
        if ((int32_t)edx >= 0)
        {
            loc_18_f = (double)(float)d22;
    COW_AT(102dd7cd)
            if ((int32_t)edx < (int32_t)arg2)
            {
    COW_AT(102dd7d2)
                ecx = edx;
            }
        }
        else
        {
            loc_18_f = (double)(float)d22;
    COW_AT(102dd7c5)
            eax = arg2;
            ecx = arg2 + edx;
        }
    COW_AT(102dd7d4)
        if (ecx != ebx)
        {
    COW_AT(102dd7d8)
            if ((cow_fsw(g, loc_8_f, (double)rdf32(COW_IMG(0x1032c140u)), 1u) >> 8u & 0x41u) != 0u)
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_8_f, (double)rdf32(COW_IMG(0x1032c140u)), 1u);
            }
            else
            {
    COW_AT(102dd7e8)
                wr32(edi + esi, ebx);
                wr32(edi + esi + 4u, cow_f2bits(loc_8_f));
                eax = edi + esi;
                esi = esi + 8u;
            }
    COW_AT(102dd7f6)
            wrf32(sp0 - 8u, (float)(double)(float)0.0);
            ebx = ecx;
            loc_8_f = (double)(float)0.0;
        }
    COW_AT(102dd7fd)
        d23 = (double)rdf32(sp0 - 0x24u);
        if (!(x0 < d23))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, d23, 1u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, d23, 1u);
    COW_AT(102dd807)
            x0 = (double)rdf32(sp0 - 0x24u);
        }
    COW_AT(102dd80c)
        d24 = (double)rdf32(sp0 - 0xcu);
        if ((cow_fsw(g, loc_18_f, d24, 1u) >> 8u & 0x41u) != 0u)
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_18_f, d24, 1u);
        }
        else
        {
    COW_AT(102dd819)
            t25 = rd32(sp0 - 0xcu);
            wr32(sp0 - 0x18u, t25);
            eax = t25;
        }
    COW_AT(102dd81f)
        if (arg3 != 0u) goto L_102dd850;
    COW_AT(102dd825)
        d26 = (double)rdf32(sp0 - 0x14u);
        if (!(d26 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d26, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
            goto L_102dd839;
        }
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d26, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
    COW_AT(102dd835)
        x1 = 1.0;
L_102dd85b: ;
    COW_AT(102dd85b)
        if (rd32(sp0 - 0x10u) != 0u)
        {
    COW_AT(102dd861)
            x1 = fr(g, 1.0 - x1);
        }
    COW_AT(102dd865)
        d29 = fr(g, (double)rdf32(sp0 - 0x18u) - x0);
        wr32(sp0 - 0x28u, loc_28 + 1u);
        wr32(sp0 - 0x18u, edx + 1u);
        d30 = (double)(float)fr(g, fr(g, d29 * x1) + loc_8_f);
        wrf32(sp0 - 8u, (float)d30);
        d31 = (double)(int32_t)(edx + 1u);
        d32 = (double)rdf32(sp0 - 0xcu);
        if (d31 < d32)
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d31, d32, 1u);
            edx = edx + 1u;
            loc_28 = loc_28 + 1u;
            loc_8_f = d30;
            x0 = d31;
            goto L_102dd7b3;
        }
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d31, d32, 1u);
        edx = edx + 1u;
        loc_8_f = d30;
        x0 = d31;
    }
    COW_AT(102dd88e)
    t33 = rd32(sp0 - 0x10u) + 1u;
    wr32(sp0 - 0x10u, t33);
    if (t33 < 2u)
    {
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10 = t33;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30_f = (double)rdf32(sp0 - 0x30u);
        goto L_102dd72b;
    }
    loc_10 = t33;
    COW_AT(102dd89d)
    if ((cow_fsw(g, loc_8_f, (double)rdf32(COW_IMG(0x1032c140u)), 0u) >> 8u & 0x41u) == 0u)
    {
    COW_AT(102dd8ad)
        wr32(edi + esi, ebx);
        wr32(edi + esi + 4u, cow_f2bits(loc_8_f));
        esi = esi + 8u;
    }
    COW_AT(102dd8bb)
    wrf32(sp0 - 8u, (float)(double)(float)0.0);
    t34 = rd32(sp0 - 0x1cu) + 1u;
    wr32(sp0 - 0x1cu, t34);
    t35 = esi - rd32(sp0 - 0x3cu);
    t36 = rd32(sp0 - 0x40u);
    wr32(t36, t35);
    if (t34 < arg1)
    {
        ecx = t36;
        loc_1c = t34;
        goto L_102dd708;
    }
L_102dd8d9: ;
    COW_AT(102dd8d9)
    wr32(edi, esi);
    eax = edi;
    loc_4 = rd32(sp0 - 4u);
    loc_44 = rd32(sp0 - 0x44u);
    loc_48 = rd32(sp0 - 0x48u);
    loc_4c = rd32(sp0 - 0x4cu);
L_102dd8e1: ;
    COW_AT(102dd8e1)
    g->ebx = loc_44;
    g->esi = loc_48;
    g->edi = loc_4c;
    g->ebp = loc_4;
    g->edx = edx;
    return eax;
L_102dd7b3: ;
    COW_AT(102dd7b3)
    ecx = loc_28;
    goto L_102dd7b6;
L_102dd839: ;
    COW_AT(102dd839)
    d27 = fr(g, (double)rdf32(sp0 - 0x14u) + (double)rdf32(COW_IMG(0x1032961cu)));
    d28 = (double)rdf32(sp0 - 0x34u);
    if (cow_fsw(g, d27, d28, 1u) >> 8u & 1u)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d27, d28, 1u);
        goto L_102dd850;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d27, d28, 1u);
    COW_AT(102dd84c)
    x1 = 0.0;
    goto L_102dd85b;
L_102dd850: ;
    COW_AT(102dd850)
    x1 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x18u) + x0) * (double)rdf32(sp0 - 0x38u)) - (double)rdf32(sp0 - 0x14u));
    goto L_102dd85b;
L_102dd8df: ;
    COW_AT(102dd8df)
    eax = 0u;
    goto L_102dd8e1;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102dd629(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102dd63fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
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
        esi = g->esi;
        in_edi = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebx = rd32(sp0 - 0x44u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x4cu;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102dd64au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebx = rd32(sp0 - 0x44u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x4cu;
        g->eax = arg2;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102dd654u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_40;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebx = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 4u);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        ST(0) = (double)(int32_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x102dd65au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_40;
        double x0;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebx = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102dd667u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        double loc_20_f;
        uint32_t loc_40;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebx = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_20_f = rdf32(sp0 - 0x20u);
        in_ebp = rd32(sp0 - 4u);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        ST(0) = (double)(int32_t)arg1;
        (void)sp0;
        return 1;
    }
    case 0x102dd66du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        double loc_20_f;
        uint32_t loc_40;
        double x0;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebx = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_20_f = rdf32(sp0 - 0x20u);
        in_ebp = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102dd694u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        double loc_20_f;
        double loc_2c_f;
        double loc_34_f;
        double loc_38_f;
        uint32_t loc_40;
        double x0;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebx = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_20_f = rdf32(sp0 - 0x20u);
        in_ebp = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->eax = arg3 != 0u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = 0x10u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102dd69eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        double loc_20_f;
        double loc_2c_f;
        double loc_34_f;
        double loc_38_f;
        uint32_t loc_40;
        double x0;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebx = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_20_f = rdf32(sp0 - 0x20u);
        in_ebp = rd32(sp0 - 4u);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->eax = arg3 != 0u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = 0x10u;
        g->edi = 0u;
        ST(0) = (double)(int32_t)(arg3 != 0u);
        (void)sp0;
        return 1;
    }
    case 0x102dd6a4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_20_f;
        double loc_2c_f;
        double loc_34_f;
        double loc_38_f;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_4 = rd32(sp0 - 4u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dd6aeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_20_f;
        double loc_2c_f;
        double loc_34_f;
        double loc_38_f;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_4 = rd32(sp0 - 4u);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dd6b4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_20_f;
        double loc_2c_f;
        double loc_34_f;
        double loc_38_f;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_4 = rd32(sp0 - 4u);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dd6cfu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dd6ddu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dd6dfu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_20_f;
        double loc_2c_f;
        double loc_34_f;
        double loc_38_f;
        uint32_t loc_4;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_4 = rd32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dd6e7u:
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
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dd6f2u:
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
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dd708u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_1c;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        wrf32(sp0 - 8u, (double)(float)0.0);
        (void)sp0;
        return 1;
    }
    case 0x102dd722u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_28;
        uint32_t loc_3c;
        uint32_t loc_40;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_1c = rd32(sp0 - 0x1cu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x10u, 0u);
        wrf32(sp0 - 8u, (double)(float)0.0);
        (void)sp0;
        return 1;
    }
    case 0x102dd728u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_28;
        uint32_t loc_3c;
        uint32_t loc_40;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_1c = rd32(sp0 - 0x1cu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x10u, 0u);
        wrf32(sp0 - 8u, (double)(float)0.0);
        (void)sp0;
        return 1;
    }
    case 0x102dd72bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_1c;
        uint32_t loc_28;
        double loc_30_f;
        uint32_t loc_3c;
        uint32_t loc_40;
        double loc_8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8_f = rdf32(sp0 - 8u);
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dd735u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_1c;
        uint32_t loc_28;
        double loc_30_f;
        uint32_t loc_3c;
        uint32_t loc_40;
        double loc_8_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8_f = rdf32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dd73bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_1c;
        uint32_t loc_28;
        double loc_30_f;
        uint32_t loc_3c;
        uint32_t loc_40;
        double loc_8_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8_f = rdf32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dd75bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        double loc_14_f;
        uint32_t loc_1c;
        double loc_24_f;
        uint32_t loc_28;
        double loc_30_f;
        uint32_t loc_3c;
        uint32_t loc_40;
        double loc_8_f;
        double loc_c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dd768u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        double loc_14_f;
        uint32_t loc_1c;
        double loc_24_f;
        uint32_t loc_28;
        double loc_30_f;
        uint32_t loc_3c;
        uint32_t loc_40;
        double loc_8_f;
        double loc_c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dd76fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        double loc_14_f;
        uint32_t loc_1c;
        double loc_24_f;
        uint32_t loc_28;
        double loc_30_f;
        uint32_t loc_3c;
        uint32_t loc_40;
        double loc_8_f;
        double loc_c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dd77cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        double loc_14_f;
        uint32_t loc_1c;
        double loc_24_f;
        uint32_t loc_28;
        double loc_30_f;
        uint32_t loc_3c;
        uint32_t loc_40;
        double loc_8_f;
        double loc_c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dd782u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        double loc_14_f;
        uint32_t loc_1c;
        double loc_24_f;
        uint32_t loc_28;
        double loc_30_f;
        uint32_t loc_3c;
        uint32_t loc_40;
        double loc_8_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14_f = rdf32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8_f = rdf32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dd78cu:
    {
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x54u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dd793u:
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
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dd7a9u:
    {
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dd7b3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        double loc_8_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_8_f = rdf32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dd7b6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        double loc_8_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_8_f = rdf32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dd7c5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_18_f;
        uint32_t loc_28;
        double loc_8_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_8_f = rdf32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dd7cdu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_18_f;
        uint32_t loc_28;
        double loc_8_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_8_f = rdf32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dd7d2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_18_f;
        uint32_t loc_28;
        double loc_8_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_8_f = rdf32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dd7d4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_18_f;
        uint32_t loc_28;
        double loc_8_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_8_f = rdf32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dd7d8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_18_f;
        uint32_t loc_28;
        double loc_8_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_8_f = rdf32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dd7e8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_18_f;
        uint32_t loc_28;
        double loc_8_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_8_f = rdf32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dd7f6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_18_f;
        uint32_t loc_28;
        double loc_8_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_8_f = rdf32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dd7fdu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_18_f;
        uint32_t loc_28;
        double loc_8_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_8_f = rdf32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dd807u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_18_f;
        uint32_t loc_28;
        double loc_8_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_8_f = rdf32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dd80cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_18_f;
        uint32_t loc_28;
        double loc_8_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_8_f = rdf32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dd819u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_18_f;
        uint32_t loc_28;
        double loc_8_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_8_f = rdf32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dd81fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        double loc_8_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_8_f = rdf32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dd825u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        double loc_8_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_8_f = rdf32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dd835u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        double loc_8_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_8_f = rdf32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dd839u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        double loc_8_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_8_f = rdf32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dd84cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        double loc_8_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_8_f = rdf32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dd850u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        double loc_8_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_8_f = rdf32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dd85bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        double loc_8_f;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_8_f = rdf32(sp0 - 8u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dd861u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        double loc_8_f;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_8_f = rdf32(sp0 - 8u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dd865u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        double loc_8_f;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_8_f = rdf32(sp0 - 8u);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dd88eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        double loc_8_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_8_f = rdf32(sp0 - 8u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dd89du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_28;
        double loc_8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8_f = rdf32(sp0 - 8u);
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dd8adu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_28;
        double loc_8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8_f = rdf32(sp0 - 8u);
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dd8bbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_28;
        double loc_8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8_f = rdf32(sp0 - 8u);
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dd8d9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_1c;
        uint32_t loc_28;
        double loc_8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8_f = rdf32(sp0 - 8u);
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dd8dfu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dd8e1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_1c;
        uint32_t loc_28;
        uint32_t loc_4;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        double loc_8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x4cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102dd629(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102dd629(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
