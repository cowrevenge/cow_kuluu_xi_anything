/* f_0x10182700 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_10182700(Guest* g)
{
    double d1;
    double d2;
    double d21;
    double d22;
    double d26;
    double d36;
    double d37;
    double d44;
    double d46;
    double d47;
    double d48;
    double d5;
    double d50;
    double d53;
    double d55;
    double d56;
    double d57;
    double d59;
    double d6;
    double d62;
    double d64;
    double d65;
    double d66;
    double d8;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_44;
    uint32_t loc_48;
    uint32_t loc_60;
    uint32_t loc_64;
    uint32_t loc_68;
    uint32_t loc_6c;
    uint32_t loc_70;
    uint32_t loc_74;
    uint32_t loc_78;
    uint32_t loc_7c;
    uint32_t loc_80;
    uint32_t loc_84;
    uint32_t loc_88;
    uint32_t loc_c8;
    double loc_c8_f;
    uint32_t loc_cc;
    uint32_t loc_d0;
    uint32_t loc_e0;
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
    uint32_t t20;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
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
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t45;
    uint32_t t49;
    uint32_t t51;
    uint32_t t52;
    uint32_t t54;
    uint32_t t58;
    uint32_t t60;
    uint32_t t61;
    uint32_t t63;
    uint32_t t7;
    uint32_t t9;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 260u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1018271cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0xdcu); in_esi = rd32(sp0 - 0xd8u); in_ebx = rd32(sp0 - 0xd4u); g->ebx = rd32(sp0 - 0xd4u); g->edi = rd32(sp0 - 0xdcu); g->esi = rd32(sp0 - 0xd8u); goto E_1018271c;
    case 0x10182737u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0xdcu); in_esi = rd32(sp0 - 0xd8u); in_ebx = rd32(sp0 - 0xd4u); g->ebx = rd32(sp0 - 0xd4u); g->edi = rd32(sp0 - 0xdcu); g->esi = rd32(sp0 - 0xd8u); goto E_10182737;
    case 0x1018274bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0xdcu); in_esi = rd32(sp0 - 0xd8u); in_ebx = rd32(sp0 - 0xd4u); g->ebx = rd32(sp0 - 0xd4u); g->edi = rd32(sp0 - 0xdcu); g->esi = rd32(sp0 - 0xd8u); goto E_1018274b;
    case 0x10182a83u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->edi; loc_60 = rd32(sp0 - 0x60u); goto E_10182a83;
    case 0x10182abau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10182aba;
    case 0x10182ac4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10182ac4;
    case 0x10182ad0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; loc_7c = rd32(sp0 - 0x7cu); goto E_10182ad0;
    case 0x10182ad4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; loc_7c = rd32(sp0 - 0x7cu); goto E_10182ad4;
    case 0x10182adbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; loc_7c = rd32(sp0 - 0x7cu); goto E_10182adb;
    case 0x10182ae5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; loc_7c = rd32(sp0 - 0x7cu); goto E_10182ae5;
    case 0x10182af1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; loc_cc = rd32(sp0 - 0xccu); loc_7c = rd32(sp0 - 0x7cu); goto E_10182af1;
    case 0x10182af5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; loc_cc = rd32(sp0 - 0xccu); loc_7c = rd32(sp0 - 0x7cu); goto E_10182af5;
    case 0x10182afcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; loc_cc = rd32(sp0 - 0xccu); loc_7c = rd32(sp0 - 0x7cu); goto E_10182afc;
    case 0x10182b00u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; loc_cc = rd32(sp0 - 0xccu); loc_7c = rd32(sp0 - 0x7cu); goto E_10182b00;
    case 0x10182b08u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; loc_cc = rd32(sp0 - 0xccu); loc_7c = rd32(sp0 - 0x7cu); goto E_10182b08;
    case 0x10182b0au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; loc_cc = rd32(sp0 - 0xccu); loc_7c = rd32(sp0 - 0x7cu); goto E_10182b0a;
    case 0x10182b0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; loc_cc = rd32(sp0 - 0xccu); loc_7c = rd32(sp0 - 0x7cu); goto E_10182b0f;
    case 0x10182b19u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; loc_cc = rd32(sp0 - 0xccu); loc_7c = rd32(sp0 - 0x7cu); goto E_10182b19;
    case 0x10182b25u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_7c = rd32(sp0 - 0x7cu); goto E_10182b25;
    case 0x10182b29u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_7c = rd32(sp0 - 0x7cu); goto E_10182b29;
    case 0x10182b3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_7c = rd32(sp0 - 0x7cu); loc_70 = rd32(sp0 - 0x70u); goto E_10182b3b;
    case 0x10182b3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_e0 = rd32(sp0 - 0xe0u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8_f = rdf32(sp0 - 0xc8u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); goto E_10182b3c;
    case 0x10182b50u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_e0 = rd32(sp0 - 0xe0u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8_f = rdf32(sp0 - 0xc8u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); goto E_10182b50;
    case 0x10182b66u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_e0 = rd32(sp0 - 0xe0u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8_f = rdf32(sp0 - 0xc8u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); goto E_10182b66;
    case 0x10182b7au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_e0 = rd32(sp0 - 0xe0u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8_f = rdf32(sp0 - 0xc8u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); goto E_10182b7a;
    case 0x10182b7eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_e0 = rd32(sp0 - 0xe0u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8_f = rdf32(sp0 - 0xc8u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); goto E_10182b7e;
    case 0x10182b9fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_e0 = rd32(sp0 - 0xe0u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8_f = rdf32(sp0 - 0xc8u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); goto E_10182b9f;
    case 0x10182baau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_e0 = rd32(sp0 - 0xe0u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8_f = rdf32(sp0 - 0xc8u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); goto E_10182baa;
    case 0x10182bf2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_c8_f = rdf32(sp0 - 0xc8u); loc_88 = rd32(sp0 - 0x88u); loc_74 = rd32(sp0 - 0x74u); loc_6c = rd32(sp0 - 0x6cu); loc_64 = rd32(sp0 - 0x64u); loc_48 = rd32(sp0 - 0x48u); goto E_10182bf2;
    case 0x10182bf9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_c8_f = rdf32(sp0 - 0xc8u); loc_88 = rd32(sp0 - 0x88u); loc_74 = rd32(sp0 - 0x74u); loc_6c = rd32(sp0 - 0x6cu); loc_64 = rd32(sp0 - 0x64u); loc_48 = rd32(sp0 - 0x48u); goto E_10182bf9;
    case 0x10182c14u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_88 = rd32(sp0 - 0x88u); loc_74 = rd32(sp0 - 0x74u); loc_6c = rd32(sp0 - 0x6cu); loc_64 = rd32(sp0 - 0x64u); loc_48 = rd32(sp0 - 0x48u); goto E_10182c14;
    case 0x10182c2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_88 = rd32(sp0 - 0x88u); loc_74 = rd32(sp0 - 0x74u); loc_6c = rd32(sp0 - 0x6cu); loc_64 = rd32(sp0 - 0x64u); loc_48 = rd32(sp0 - 0x48u); x0 = ST(0); goto E_10182c2e;
    case 0x10182c3du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_c8 = rd32(sp0 - 0xc8u); loc_88 = rd32(sp0 - 0x88u); loc_74 = rd32(sp0 - 0x74u); loc_6c = rd32(sp0 - 0x6cu); loc_64 = rd32(sp0 - 0x64u); loc_48 = rd32(sp0 - 0x48u); x0 = ST(0); goto E_10182c3d;
    case 0x10182c59u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_88 = rd32(sp0 - 0x88u); loc_74 = rd32(sp0 - 0x74u); loc_6c = rd32(sp0 - 0x6cu); loc_64 = rd32(sp0 - 0x64u); loc_48 = rd32(sp0 - 0x48u); goto E_10182c59;
    case 0x10182c66u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_c8_f = rdf32(sp0 - 0xc8u); loc_88 = rd32(sp0 - 0x88u); loc_74 = rd32(sp0 - 0x74u); loc_6c = rd32(sp0 - 0x6cu); loc_64 = rd32(sp0 - 0x64u); loc_48 = rd32(sp0 - 0x48u); goto E_10182c66;
    case 0x10182c79u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c8_f = rdf32(sp0 - 0xc8u); loc_88 = rd32(sp0 - 0x88u); loc_80 = rd32(sp0 - 0x80u); loc_74 = rd32(sp0 - 0x74u); loc_6c = rd32(sp0 - 0x6cu); loc_64 = rd32(sp0 - 0x64u); loc_48 = rd32(sp0 - 0x48u); goto E_10182c79;
    case 0x10182cbcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c8_f = rdf32(sp0 - 0xc8u); loc_88 = rd32(sp0 - 0x88u); loc_80 = rd32(sp0 - 0x80u); loc_74 = rd32(sp0 - 0x74u); loc_6c = rd32(sp0 - 0x6cu); loc_64 = rd32(sp0 - 0x64u); loc_48 = rd32(sp0 - 0x48u); goto E_10182cbc;
    case 0x10182e6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c8_f = rdf32(sp0 - 0xc8u); loc_88 = rd32(sp0 - 0x88u); loc_80 = rd32(sp0 - 0x80u); loc_74 = rd32(sp0 - 0x74u); loc_6c = rd32(sp0 - 0x6cu); loc_64 = rd32(sp0 - 0x64u); loc_48 = rd32(sp0 - 0x48u); goto E_10182e6e;
    case 0x10182e73u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c8_f = rdf32(sp0 - 0xc8u); loc_88 = rd32(sp0 - 0x88u); loc_80 = rd32(sp0 - 0x80u); loc_74 = rd32(sp0 - 0x74u); loc_6c = rd32(sp0 - 0x6cu); loc_64 = rd32(sp0 - 0x64u); loc_48 = rd32(sp0 - 0x48u); goto E_10182e73;
    case 0x10182e83u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c8_f = rdf32(sp0 - 0xc8u); loc_88 = rd32(sp0 - 0x88u); loc_80 = rd32(sp0 - 0x80u); loc_74 = rd32(sp0 - 0x74u); loc_6c = rd32(sp0 - 0x6cu); loc_64 = rd32(sp0 - 0x64u); loc_48 = rd32(sp0 - 0x48u); goto E_10182e83;
    case 0x10182e87u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c8_f = rdf32(sp0 - 0xc8u); loc_88 = rd32(sp0 - 0x88u); loc_80 = rd32(sp0 - 0x80u); loc_74 = rd32(sp0 - 0x74u); loc_6c = rd32(sp0 - 0x6cu); loc_64 = rd32(sp0 - 0x64u); loc_48 = rd32(sp0 - 0x48u); goto E_10182e87;
    case 0x10182e8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c8_f = rdf32(sp0 - 0xc8u); loc_88 = rd32(sp0 - 0x88u); loc_80 = rd32(sp0 - 0x80u); loc_74 = rd32(sp0 - 0x74u); loc_6c = rd32(sp0 - 0x6cu); loc_64 = rd32(sp0 - 0x64u); loc_48 = rd32(sp0 - 0x48u); goto E_10182e8b;
    case 0x10182ea0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c8_f = rdf32(sp0 - 0xc8u); loc_88 = rd32(sp0 - 0x88u); loc_80 = rd32(sp0 - 0x80u); loc_74 = rd32(sp0 - 0x74u); loc_6c = rd32(sp0 - 0x6cu); loc_64 = rd32(sp0 - 0x64u); loc_48 = rd32(sp0 - 0x48u); goto E_10182ea0;
    case 0x10182ea4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_e0 = rd32(sp0 - 0xe0u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8_f = rdf32(sp0 - 0xc8u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); goto E_10182ea4;
    case 0x10182ebau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_e0 = rd32(sp0 - 0xe0u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8_f = rdf32(sp0 - 0xc8u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); goto E_10182eba;
    case 0x10182ec1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_e0 = rd32(sp0 - 0xe0u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8_f = rdf32(sp0 - 0xc8u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); goto E_10182ec1;
    case 0x10182ecbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_e0 = rd32(sp0 - 0xe0u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8_f = rdf32(sp0 - 0xc8u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); goto E_10182ecb;
    case 0x10182ed3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_e0 = rd32(sp0 - 0xe0u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8_f = rdf32(sp0 - 0xc8u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); goto E_10182ed3;
    case 0x10182ee4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_e0 = rd32(sp0 - 0xe0u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8_f = rdf32(sp0 - 0xc8u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); goto E_10182ee4;
    case 0x10182ef5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_e0 = rd32(sp0 - 0xe0u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_c8_f = rdf32(sp0 - 0xc8u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); goto E_10182ef5;
    case 0x10182ef6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_e0 = rd32(sp0 - 0xe0u); loc_d0 = rd32(sp0 - 0xd0u); loc_cc = rd32(sp0 - 0xccu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); goto E_10182ef6;
    default: break;
    }
#endif

    COW_AT(10182700)
    d1 = (double)rdf32(sp0 + 0x10u);
    wr32(sp0 - 0xd4u, in_ebx);
    wr32(sp0 - 0xd8u, in_esi);
    wr32(sp0 - 0xdcu, in_edi);
    if (d1 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
    COW_AT(10182737)
        wr32(COW_IMG(0x1037734cu), 0x3f800000u);
        wr32(COW_IMG(0x10377344u), 0x3f800000u);
    }
    else
    {
    COW_AT(1018271c)
        d2 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(sp0 + 0x10u));
        wrf32(COW_IMG(0x1037734cu), (float)d2);
        wrf32(COW_IMG(0x10377344u), (float)d2);
    }
    COW_AT(1018274b)
    wr32(sp0 - 0xe0u, arg3);
    wr32(sp0 - 0xe4u, 0u);
    t3 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xe8u, t3);
    g->edx = arg3;
    g->esp = sp0 - 0xdcu;
    cow_thiscall(g, rd32(rd32(t3) + 0xf4u), rd32(t3), 3, t3, 0u, arg3);
    t4 = g->edx;
    wr32(sp0 - 0xe0u, 3u);
    wr32(sp0 - 0xe4u, 0xdu);
    d5 = (double)(float)-(double)rdf32(arg1);
    wrf32(sp0 - 0x58u, (float)d5);
    wr32(sp0 - 0xe8u, 0u);
    d6 = (double)(float)-(double)rdf32(arg1 + 4u);
    wrf32(sp0 - 0x54u, (float)d6);
    t7 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xecu, t7);
    d8 = (double)(float)-(double)rdf32(arg1 + 8u);
    wrf32(sp0 - 0x50u, (float)d8);
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xfcu), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 4, t7, 0u, 0xdu, 3u);
    wr32(sp0 - 0xe0u, 3u);
    wr32(sp0 - 0xe4u, 0xeu);
    wr32(sp0 - 0xe8u, 0u);
    t9 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xecu, t9);
    cow_thiscall(g, rd32(rd32(t9) + 0xfcu), rd32(t9), 4, t9, 0u, 0xeu, 3u);
    wr32(sp0 - 0xe0u, 0x142u);
    t10 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xe4u, t10);
    cow_thiscall(g, rd32(rd32(t10) + 0x130u), rd32(t10), 2, t10, 0x142u);
    t11 = rd32(sp0 - 0x58u);
    wr32(sp0 - 0x98u, t11);
    t12 = rd32(sp0 - 0x54u);
    wr32(sp0 - 0x94u, t12);
    t13 = rd32(sp0 - 0x50u);
    wr32(sp0 - 0x90u, t13);
    wr32(sp0 - 0xe0u, sp0 - 0xc8u);
    wr32(sp0 - 0xe4u, sp0 - 0x40u);
    wr32(sp0 - 0x40u, 0x3f800000u);
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x2cu, 0x3f800000u);
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x18u, 0x3f800000u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 4u, 0x3f800000u);
    wr32(sp0 - 0xc8u, 0x3f800000u);
    wr32(sp0 - 0xc4u, 0u);
    wr32(sp0 - 0xc0u, 0u);
    wr32(sp0 - 0xbcu, 0u);
    wr32(sp0 - 0xb8u, 0u);
    wr32(sp0 - 0xb4u, 0x3f800000u);
    wr32(sp0 - 0xb0u, 0u);
    wr32(sp0 - 0xacu, 0u);
    wr32(sp0 - 0xa8u, 0u);
    wr32(sp0 - 0xa4u, 0u);
    wr32(sp0 - 0xa0u, 0x3f800000u);
    wr32(sp0 - 0x9cu, 0u);
    wr32(sp0 - 0x8cu, 0x3f800000u);
    wr32(sp0 - 0xe8u, sp0 - 0x40u);
    cow_cdecl(g, COW_IMG(0x1016c060u), 3, sp0 - 0x40u, sp0 - 0x40u, sp0 - 0xc8u);
    wr32(sp0 - 0xc8u, rd32(COW_IMG(0x10377344u)));
    wr32(sp0 - 0xb4u, rd32(COW_IMG(0x10377348u)));
    wr32(sp0 - 0xa0u, rd32(COW_IMG(0x1037734cu)));
    wr32(sp0 - 0xecu, sp0 - 0xc8u);
    wr32(sp0 - 0xf0u, sp0 - 0x40u);
    wr32(sp0 - 0xf4u, sp0 - 0x40u);
    wr32(sp0 - 0xc4u, 0u);
    wr32(sp0 - 0xc0u, 0u);
    wr32(sp0 - 0xbcu, 0u);
    wr32(sp0 - 0xb8u, 0u);
    wr32(sp0 - 0xb0u, 0u);
    wr32(sp0 - 0xacu, 0u);
    wr32(sp0 - 0xa8u, 0u);
    wr32(sp0 - 0xa4u, 0u);
    wr32(sp0 - 0x9cu, 0u);
    wr32(sp0 - 0x98u, 0u);
    wr32(sp0 - 0x94u, 0u);
    wr32(sp0 - 0x90u, 0u);
    wr32(sp0 - 0x8cu, 0x3f800000u);
    g->esp = sp0 - 0xe8u;
    cow_cdecl(g, COW_IMG(0x1016c060u), 3, sp0 - 0x40u, sp0 - 0x40u, sp0 - 0xc8u);
    wr32(sp0 - 0x98u, rd32(COW_IMG(0x10377338u)));
    wr32(sp0 - 0x94u, rd32(COW_IMG(0x1037733cu)));
    wr32(sp0 - 0x90u, rd32(COW_IMG(0x10377340u)));
    wr32(sp0 - 0xf8u, sp0 - 0xc8u);
    wr32(sp0 - 0xfcu, sp0 - 0x40u);
    wr32(sp0 - 0x100u, sp0 - 0x40u);
    wr32(sp0 - 0xc8u, 0x3f800000u);
    wr32(sp0 - 0xc4u, 0u);
    wr32(sp0 - 0xc0u, 0u);
    wr32(sp0 - 0xbcu, 0u);
    wr32(sp0 - 0xb8u, 0u);
    wr32(sp0 - 0xb4u, 0x3f800000u);
    wr32(sp0 - 0xb0u, 0u);
    wr32(sp0 - 0xacu, 0u);
    wr32(sp0 - 0xa8u, 0u);
    wr32(sp0 - 0xa4u, 0u);
    wr32(sp0 - 0xa0u, 0x3f800000u);
    wr32(sp0 - 0x9cu, 0u);
    wr32(sp0 - 0x8cu, 0x3f800000u);
    g->eax = sp0 - 0x40u;
    g->edx = sp0 - 0xc8u;
    t14 = rd32(COW_IMG(0x10377338u));
    t15 = rd32(COW_IMG(0x10377340u));
    g->esp = sp0 - 0xf4u;
    t16 = cow_cdecl(g, COW_IMG(0x1016c060u), 3, sp0 - 0x40u, sp0 - 0x40u, sp0 - 0xc8u);
    t17 = g->edx;
    g->esp = sp0 - 0xdcu;
    t18 = cow_thiscall(g, COW_IMG(0x10167940u), self + 0x178u, 0);
    t19 = g->ecx;
    wr32(sp0 - 0x60u, t18);
    if (t18 == 0u)
    {
        ebp = in_ebp;
    }
    else
    {
        eax = t18;
        ecx = t19;
        ebx = t18;
        loc_60 = t18;
    COW_AT(10182a83)
        t20 = rd32(self + 0x17cu);
        d21 = fr(g, (double)rdf32(ebx + 0x38u) + (double)rdf32(arg1));
        wr32(sp0 - 0x5cu, t20);
        g->ecx = ecx;
        g->edx = t20;
        d22 = fr(g, d21 * (double)rdf32(COW_IMG(0x10329ce4u)));
        fpush(g, d22);
        g->esp = sp0 - 0xdcu;
        t23 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        t24 = g->ecx;
        t25 = g->edx;
        d26 = fr(g, fr(g, (double)rdf32(ebx + 0x3cu) + (double)rdf32(arg1 + 8u)) * (double)rdf32(COW_IMG(0x10329ce4u)));
        fpush(g, d26);
        t27 = cow_call_regs(g, COW_IMG(0x10311c6cu), t23, g->ecx, g->edx, 1, 0);
        if ((int32_t)(t23 - 1u) >= 0)
        {
            eax = t27;
            ecx = t23 - 1u;
            edi = t23;
    COW_AT(10182ac4)
            t28 = rd32(ebx + 0x40u) - 1u;
            wr32(sp0 - 0x7cu, t28);
            if ((int32_t)ecx > (int32_t)(rd32(ebx + 0x40u) - 1u))
            {
                loc_7c = t28;
            }
            else
            {
    COW_AT(10182ad0)
                wr32(sp0 - 0x7cu, ecx);
                loc_7c = ecx;
            }
        }
        else
        {
            eax = t27;
            edi = t23;
    COW_AT(10182aba)
            wr32(sp0 - 0x7cu, 0u);
            loc_7c = 0u;
        }
    COW_AT(10182ad4)
        if ((int32_t)(edi + 1u) >= 0)
        {
            ecx = edi + 1u;
    COW_AT(10182ae5)
            t29 = rd32(ebx + 0x40u) - 1u;
            wr32(sp0 - 0xccu, t29);
            if ((int32_t)ecx > (int32_t)(rd32(ebx + 0x40u) - 1u))
            {
                loc_cc = t29;
            }
            else
            {
    COW_AT(10182af1)
                wr32(sp0 - 0xccu, ecx);
                loc_cc = ecx;
            }
        }
        else
        {
    COW_AT(10182adb)
            wr32(sp0 - 0xccu, 0u);
            loc_cc = 0u;
        }
    COW_AT(10182af5)
        if ((int32_t)(eax - 1u) >= 0)
        {
            ecx = eax - 1u;
    COW_AT(10182b00)
            if ((int32_t)ecx > (int32_t)(rd32(ebx + 0x44u) - 1u))
            {
                edx = rd32(ebx + 0x44u) - 1u;
    COW_AT(10182b08)
                ecx = edx;
            }
        }
        else
        {
    COW_AT(10182afc)
            ecx = 0u;
        }
    COW_AT(10182b0a)
        if ((int32_t)(eax + 1u) >= 0)
        {
            eax = eax + 1u;
    COW_AT(10182b19)
            t30 = rd32(ebx + 0x44u) - 1u;
            wr32(sp0 - 0xd0u, t30);
            if ((int32_t)eax > (int32_t)(rd32(ebx + 0x44u) - 1u))
            {
                loc_d0 = t30;
            }
            else
            {
    COW_AT(10182b25)
                wr32(sp0 - 0xd0u, eax);
                loc_d0 = eax;
            }
        }
        else
        {
    COW_AT(10182b0f)
            wr32(sp0 - 0xd0u, 0u);
            loc_d0 = 0u;
        }
    COW_AT(10182b29)
        wr32(sp0 - 0x70u, ecx);
        if ((int32_t)ecx > (int32_t)loc_d0)
        {
            ebp = in_ebp;
        }
        else
        {
            edx = ecx;
            loc_70 = ecx;
    COW_AT(10182b3b)
            wr32(sp0 - 0xe0u, in_ebp);
            loc_e0 = in_ebp;
            loc_c8_f = (double)rdf32(sp0 - 0xc8u);
L_10182b3c: ;
    COW_AT(10182b3c)
            wr32(sp0 - 0x78u, loc_7c);
            if ((int32_t)loc_7c > (int32_t)loc_cc) goto L_10182ee4;
            eax = loc_7c;
            loc_78 = loc_7c;
L_10182b50: ;
    COW_AT(10182b50)
            if (rd32(eax * 4u + rd32(ebx + 0x58u) + rd32(ebx + 0x40u) * edx * 4u) == 0u) goto L_10182ed3;
            ecx = rd32(eax * 4u + rd32(ebx + 0x58u) + rd32(ebx + 0x40u) * edx * 4u);
L_10182b66: ;
    COW_AT(10182b66)
            wr32(sp0 - 0x84u, ecx + 4u);
            if ((int32_t)(rd32(ecx) & 0x7ffu) <= 0)
            {
                ecx = ecx + 4u;
            }
            else
            {
                eax = rd32(ecx) & 0x7ffu;
                loc_84 = ecx + 4u;
                ecx = ecx + 4u;
    COW_AT(10182b7a)
                wr32(sp0 - 0x68u, eax);
                loc_68 = eax;
L_10182b7e: ;
    COW_AT(10182b7e)
                t31 = rd32(ecx + 4u);
                wr32(sp0 - 0x44u, t31);
                if (rd32(sp0 - 0x5cu) != rd32(rd32(ecx) + 0xbcu))
                {
                    eax = t31;
                    edx = rd32(sp0 - 0x5cu);
                    ebp = rd32(ecx);
                    loc_44 = t31;
    COW_AT(10182b9f)
                    if (rd16(eax + 0xeu) == 0u)
                    {
    COW_AT(10182baa)
                        wr32(sp0 - 0xe4u, ebp);
                        wr32(sp0 - 0xe8u, 0x100u);
                        t32 = rd32(eax + 4u);
                        wr32(sp0 - 0x4cu, t32);
                        wr32(sp0 - 0x80u, 0u);
                        t33 = rd32(eax);
                        t34 = rd32(eax + 8u);
                        g->esp = sp0 - 0xe0u;
                        cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(COW_IMG(0x1045666cu)), 2, 0x100u, ebp);
                        wr32(sp0 - 0x6cu, 4u);
                        t35 = ebp - (sp0 - 0xc8u);
                        wr32(sp0 - 0x48u, t35);
                        eax = sp0 - 0xc8u;
                        ebx = t33;
                        ebp = t35;
                        edi = t34;
                        loc_6c = 4u;
                        loc_48 = t35;
                        loc_c8_f = (double)rdf32(sp0 - 0xc8u);
L_10182bf9: ;
    COW_AT(10182bf9)
                        wr32(sp0 - 0x64u, eax + ebp);
                        wr32(sp0 - 0x88u, sp0 - 0x40u);
                        wr32(sp0 - 0x74u, 4u);
                        loc_64 = eax + ebp;
                        ebp = eax;
                        loc_88 = sp0 - 0x40u;
                        loc_74 = 4u;
L_10182c14: ;
    COW_AT(10182c14)
                        d36 = (double)rdf32(COW_IMG(0x103295d8u));
                        wr32(ebp, 0u);
                        eax = loc_88;
                        ecx = loc_64;
                        edx = 4u;
                        x0 = d36;
L_10182c2e: ;
    COW_AT(10182c2e)
                        if (edx != 1u)
                        {
                            edx = edx - 1u;
                            x0 = fr(g, x0 + fr(g, (double)rdf32(ecx) * (double)rdf32(eax)));
                            eax = eax + 0x10u;
                            ecx = ecx + 4u;
                            goto L_10182c2e;
                        }
                        loc_c8 = rd32(sp0 - 0xc8u);
                        x0 = fr(g, x0 + fr(g, (double)rdf32(ecx) * (double)rdf32(eax)));
    COW_AT(10182c3d)
                        wrf32(ebp, (float)x0);
                        wr32(sp0 - 0x88u, loc_88 + 4u);
                        wr32(sp0 - 0x74u, loc_74 - 1u);
                        if (loc_74 != 1u)
                        {
                            ebp = ebp + 4u;
                            loc_88 = loc_88 + 4u;
                            loc_74 = loc_74 - 1u;
                            goto L_10182c14;
                        }
                        ebp = ebp + 4u;
    COW_AT(10182c59)
                        wr32(sp0 - 0x6cu, loc_6c - 1u);
                        if (loc_6c != 1u)
                        {
                            eax = ebp;
                            loc_6c = loc_6c - 1u;
                            loc_c8_f = (double)rdf32(sp0 - 0xc8u);
                            goto L_10182bf2;
                        }
                        eax = ebp;
                        loc_c8_f = (double)rdf32(sp0 - 0xc8u);
    COW_AT(10182c66)
                        if ((int16_t)rd16(rd32(sp0 - 0x44u) + 0xcu) <= 0) goto L_10182ea0;
                        edx = 0u;
                        ebp = rd32(sp0 - 0x44u);
                        esi = COW_IMG(0x10639088u);
                        loc_80 = 0u;
L_10182c79: ;
    COW_AT(10182c79)
                        d37 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0xa4u) * (double)rdf32(rd32(sp0 - 0x4cu) + (rd16(edi + 6u) & 0x7fffu) * 0xcu + 8u)) + fr(g, (double)rdf32(sp0 - 0xb4u) * (double)rdf32(rd32(sp0 - 0x4cu) + (rd16(edi + 6u) & 0x7fffu) * 0xcu + 4u))) + fr(g, (double)rdf32(sp0 - 0xc4u) * (double)rdf32(rd32(sp0 - 0x4cu) + (rd16(edi + 6u) & 0x7fffu) * 0xcu)));
                        if ((cow_fsw(g, d37, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) == 0u) goto L_10182e73;
                        eax = cow_fsw(g, d37, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
    COW_AT(10182cbc)
                        t38 = rd32(ebx + (rd16(edi) & 0x7fffu) * 0xcu);
                        t39 = rd16(edi);
                        wr32(esi, t38);
                        t40 = rd32(ebx + (rd16(edi) & 0x7fffu) * 0xcu + 4u);
                        t41 = rd16(edi);
                        wr32(esi + 4u, t40);
                        t42 = rd32(ebx + (rd16(edi) & 0x7fffu) * 0xcu + 8u);
                        t43 = rd16(edi);
                        wr32(esi + 8u, t42);
                        wr32(esi + 0xcu, 0xff808080u);
                        d44 = fr(g, fr(g, fr(g, loc_c8_f * (double)rdf32(ebx + (rd16(edi) & 0x7fffu) * 0xcu)) + fr(g, (double)rdf32(sp0 - 0xa8u) * (double)rdf32(ebx + (rd16(edi) & 0x7fffu) * 0xcu + 8u))) + fr(g, (double)rdf32(sp0 - 0xb8u) * (double)rdf32(ebx + (rd16(edi) & 0x7fffu) * 0xcu + 4u)));
                        t45 = rd16(edi);
                        d46 = fr(g, d44 + (double)rdf32(sp0 - 0x98u));
                        wrf32(esi + 0x10u, (float)d46);
                        d47 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0xc0u) * (double)rdf32(ebx + (t45 & 0x7fffu) * 0xcu)) + fr(g, (double)rdf32(sp0 - 0xa0u) * (double)rdf32(ebx + (t45 & 0x7fffu) * 0xcu + 8u))) + fr(g, (double)rdf32(sp0 - 0xb0u) * (double)rdf32(ebx + (t45 & 0x7fffu) * 0xcu + 4u)));
                        d48 = fr(g, d47 + (double)rdf32(sp0 - 0x90u));
                        wrf32(esi + 0x14u, (float)d48);
                        t49 = rd32(ebx + (rd16(edi + 2u) & 0x3fffu) * 0xcu);
                        d50 = (double)rdf32(sp0 - 0xa8u);
                        wr32(esi + 0x18u, t49);
                        t51 = rd32(ebx + (rd16(edi + 2u) & 0x3fffu) * 0xcu + 4u);
                        wr32(esi + 0x1cu, t51);
                        t52 = rd32(ebx + (rd16(edi + 2u) & 0x3fffu) * 0xcu + 8u);
                        wr32(esi + 0x24u, 0xff808080u);
                        wr32(esi + 0x20u, t52);
                        d53 = fr(g, fr(g, fr(g, d50 * (double)rdf32(ebx + (rd16(edi + 2u) & 0x3fffu) * 0xcu + 8u)) + fr(g, (double)rdf32(sp0 - 0xb8u) * (double)rdf32(ebx + (rd16(edi + 2u) & 0x3fffu) * 0xcu + 4u))) + fr(g, loc_c8_f * (double)rdf32(ebx + (rd16(edi + 2u) & 0x3fffu) * 0xcu)));
                        t54 = rd16(edi + 2u);
                        d55 = fr(g, d53 + (double)rdf32(sp0 - 0x98u));
                        wrf32(esi + 0x28u, (float)d55);
                        d56 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0xa0u) * (double)rdf32(ebx + (t54 & 0x3fffu) * 0xcu + 8u)) + fr(g, (double)rdf32(sp0 - 0xb0u) * (double)rdf32(ebx + (t54 & 0x3fffu) * 0xcu + 4u))) + fr(g, (double)rdf32(sp0 - 0xc0u) * (double)rdf32(ebx + (t54 & 0x3fffu) * 0xcu)));
                        d57 = fr(g, d56 + (double)rdf32(sp0 - 0x90u));
                        wrf32(esi + 0x2cu, (float)d57);
                        t58 = rd32(ebx + (rd16(edi + 4u) & 0x3fffu) * 0xcu);
                        d59 = (double)rdf32(sp0 - 0xa8u);
                        wr32(esi + 0x30u, t58);
                        t60 = rd32(ebx + (rd16(edi + 4u) & 0x3fffu) * 0xcu + 4u);
                        wr32(esi + 0x34u, t60);
                        t61 = rd32(ebx + (rd16(edi + 4u) & 0x3fffu) * 0xcu + 8u);
                        wr32(esi + 0x3cu, 0xff808080u);
                        wr32(esi + 0x38u, t61);
                        d62 = fr(g, fr(g, fr(g, d59 * (double)rdf32(ebx + (rd16(edi + 4u) & 0x3fffu) * 0xcu + 8u)) + fr(g, (double)rdf32(sp0 - 0xb8u) * (double)rdf32(ebx + (rd16(edi + 4u) & 0x3fffu) * 0xcu + 4u))) + fr(g, loc_c8_f * (double)rdf32(ebx + (rd16(edi + 4u) & 0x3fffu) * 0xcu)));
                        t63 = rd16(edi + 4u);
                        d64 = fr(g, d62 + (double)rdf32(sp0 - 0x98u));
                        wrf32(esi + 0x40u, (float)d64);
                        d65 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0xa0u) * (double)rdf32(ebx + (t63 & 0x3fffu) * 0xcu + 8u)) + fr(g, (double)rdf32(sp0 - 0xb0u) * (double)rdf32(ebx + (t63 & 0x3fffu) * 0xcu + 4u))) + fr(g, (double)rdf32(sp0 - 0xc0u) * (double)rdf32(ebx + (t63 & 0x3fffu) * 0xcu)));
                        d66 = fr(g, d65 + (double)rdf32(sp0 - 0x90u));
                        wrf32(esi + 0x44u, (float)d66);
                        if ((int32_t)loc_80 > 1500)
                        {
                            eax = loc_80;
                            goto L_10182e87;
                        }
                        eax = loc_80;
                        esi = esi + 0x48u;
    COW_AT(10182e6e)
                        wr32(sp0 - 0x80u, eax + 1u);
                        loc_80 = eax + 1u;
L_10182e73: ;
    COW_AT(10182e73)
                        if ((int32_t)(edx + 1u) < (int16_t)rd16(ebp + 0xcu))
                        {
                            eax = (uint32_t)(int16_t)rd16(ebp + 0xcu);
                            edx = edx + 1u;
                            edi = edi + 8u;
                            goto L_10182c79;
                        }
                        edx = edx + 1u;
    COW_AT(10182e83)
                        eax = loc_80;
L_10182e87: ;
    COW_AT(10182e87)
                        if (eax != 0u)
                        {
    COW_AT(10182e8b)
                            wr32(sp0 - 0xe4u, 0x18u);
                            wr32(sp0 - 0xe8u, COW_IMG(0x10639088u));
                            wr32(sp0 - 0xecu, eax);
                            wr32(sp0 - 0xf0u, 4u);
                            g->ebx = ebx;
                            g->esp = sp0 - 0xe0u;
                            cow_thiscall(g, COW_IMG(0x1000cd00u), rd32(COW_IMG(0x1045666cu)), 4, 4u, eax, COW_IMG(0x10639088u), 0x18u);
                            loc_c8_f = (double)rdf32(sp0 - 0xc8u);
                        }
L_10182ea0: ;
    COW_AT(10182ea0)
                        ecx = rd32(sp0 - 0x84u);
                        loc_e0 = rd32(sp0 - 0xe0u);
                        loc_7c = rd32(sp0 - 0x7cu);
                        loc_cc = rd32(sp0 - 0xccu);
                        loc_d0 = rd32(sp0 - 0xd0u);
                        loc_70 = rd32(sp0 - 0x70u);
                        loc_78 = rd32(sp0 - 0x78u);
                        loc_68 = rd32(sp0 - 0x68u);
                    }
                }
    COW_AT(10182ea4)
                wr32(sp0 - 0x84u, ecx + 8u);
                wr32(sp0 - 0x68u, loc_68 - 1u);
                if (loc_68 != 1u)
                {
                    loc_84 = ecx + 8u;
                    ecx = ecx + 8u;
                    loc_68 = loc_68 - 1u;
                    goto L_10182b7e;
                }
                ecx = ecx + 8u;
    COW_AT(10182eba)
                ebx = rd32(sp0 - 0x60u);
            }
    COW_AT(10182ec1)
            if (rd32(ecx) != 0u)
            {
                ecx = rd32(ecx);
                goto L_10182b66;
            }
    COW_AT(10182ecb)
            eax = loc_78;
            edx = loc_70;
L_10182ed3: ;
    COW_AT(10182ed3)
            wr32(sp0 - 0x78u, eax + 1u);
            if ((int32_t)(eax + 1u) <= (int32_t)loc_cc)
            {
                loc_78 = eax + 1u;
                eax = eax + 1u;
                goto L_10182b50;
            }
L_10182ee4: ;
    COW_AT(10182ee4)
            wr32(sp0 - 0x70u, edx + 1u);
            if ((int32_t)(edx + 1u) <= (int32_t)loc_d0)
            {
                loc_70 = edx + 1u;
                edx = edx + 1u;
                goto L_10182b3c;
            }
    COW_AT(10182ef5)
            ebp = loc_e0;
        }
    }
    COW_AT(10182ef6)
    g->ebx = rd32(sp0 - 0xd4u);
    g->esi = rd32(sp0 - 0xd8u);
    g->edi = rd32(sp0 - 0xdcu);
    g->ebp = ebp;
    return;
L_10182bf2: ;
    COW_AT(10182bf2)
    ebp = loc_48;
    goto L_10182bf9;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10182700(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1018271cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
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
        in_ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0xdcu);
        in_esi = rd32(sp0 - 0xd8u);
        in_ebx = rd32(sp0 - 0xd4u);
        g->esp = sp0 - 0xdcu;
        (void)sp0;
        return 1;
    }
    case 0x10182737u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
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
        in_ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0xdcu);
        in_esi = rd32(sp0 - 0xd8u);
        in_ebx = rd32(sp0 - 0xd4u);
        g->esp = sp0 - 0xdcu;
        (void)sp0;
        return 1;
    }
    case 0x1018274bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
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
        in_ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0xdcu);
        in_esi = rd32(sp0 - 0xd8u);
        in_ebx = rd32(sp0 - 0xd4u);
        g->esp = sp0 - 0xdcu;
        (void)sp0;
        return 1;
    }
    case 0x10182a83u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        g->esp = sp0 - 0xdcu;
        g->esi = arg1;
        wr32(sp0 - 0x100u, sp0 - 0x40u);
        wr32(sp0 - 0xfcu, sp0 - 0x40u);
        wr32(sp0 - 0xf8u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0x40u);
        wr32(sp0 - 0xf0u, sp0 - 0x40u);
        wr32(sp0 - 0xecu, sp0 - 0xc8u);
        wr32(sp0 - 0xe8u, sp0 - 0x40u);
        wr32(sp0 - 0xe4u, sp0 - 0x40u);
        wr32(sp0 - 0xe0u, sp0 - 0xc8u);
        wr32(sp0 - 0xc8u, 0x3f800000u);
        wr32(sp0 - 0xc4u, 0u);
        wr32(sp0 - 0xc0u, 0u);
        wr32(sp0 - 0xb8u, 0u);
        wr32(sp0 - 0xb4u, 0x3f800000u);
        wr32(sp0 - 0xb0u, 0u);
        wr32(sp0 - 0xa8u, 0u);
        wr32(sp0 - 0xa4u, 0u);
        wr32(sp0 - 0xa0u, 0x3f800000u);
        (void)sp0;
        return 1;
    }
    case 0x10182abau:
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
        g->esp = sp0 - 0xdcu;
        wr32(sp0 - 0x100u, sp0 - 0x40u);
        wr32(sp0 - 0xfcu, sp0 - 0x40u);
        wr32(sp0 - 0xf8u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0x40u);
        wr32(sp0 - 0xf0u, sp0 - 0x40u);
        wr32(sp0 - 0xecu, sp0 - 0xc8u);
        wr32(sp0 - 0xe8u, sp0 - 0x40u);
        wr32(sp0 - 0xe4u, sp0 - 0x40u);
        wr32(sp0 - 0xe0u, sp0 - 0xc8u);
        (void)sp0;
        return 1;
    }
    case 0x10182ac4u:
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
        g->esp = sp0 - 0xdcu;
        wr32(sp0 - 0x100u, sp0 - 0x40u);
        wr32(sp0 - 0xfcu, sp0 - 0x40u);
        wr32(sp0 - 0xf8u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0x40u);
        wr32(sp0 - 0xf0u, sp0 - 0x40u);
        wr32(sp0 - 0xecu, sp0 - 0xc8u);
        wr32(sp0 - 0xe8u, sp0 - 0x40u);
        wr32(sp0 - 0xe4u, sp0 - 0x40u);
        wr32(sp0 - 0xe0u, sp0 - 0xc8u);
        (void)sp0;
        return 1;
    }
    case 0x10182ad0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_7c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_7c = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0xdcu;
        wr32(sp0 - 0x100u, sp0 - 0x40u);
        wr32(sp0 - 0xfcu, sp0 - 0x40u);
        wr32(sp0 - 0xf8u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0x40u);
        wr32(sp0 - 0xf0u, sp0 - 0x40u);
        wr32(sp0 - 0xecu, sp0 - 0xc8u);
        wr32(sp0 - 0xe8u, sp0 - 0x40u);
        wr32(sp0 - 0xe4u, sp0 - 0x40u);
        wr32(sp0 - 0xe0u, sp0 - 0xc8u);
        (void)sp0;
        return 1;
    }
    case 0x10182ad4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_7c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_7c = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0xdcu;
        wr32(sp0 - 0x100u, sp0 - 0x40u);
        wr32(sp0 - 0xfcu, sp0 - 0x40u);
        wr32(sp0 - 0xf8u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0x40u);
        wr32(sp0 - 0xf0u, sp0 - 0x40u);
        wr32(sp0 - 0xecu, sp0 - 0xc8u);
        wr32(sp0 - 0xe8u, sp0 - 0x40u);
        wr32(sp0 - 0xe4u, sp0 - 0x40u);
        wr32(sp0 - 0xe0u, sp0 - 0xc8u);
        (void)sp0;
        return 1;
    }
    case 0x10182adbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_7c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_7c = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0xdcu;
        wr32(sp0 - 0x100u, sp0 - 0x40u);
        wr32(sp0 - 0xfcu, sp0 - 0x40u);
        wr32(sp0 - 0xf8u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0x40u);
        wr32(sp0 - 0xf0u, sp0 - 0x40u);
        wr32(sp0 - 0xecu, sp0 - 0xc8u);
        wr32(sp0 - 0xe8u, sp0 - 0x40u);
        wr32(sp0 - 0xe4u, sp0 - 0x40u);
        wr32(sp0 - 0xe0u, sp0 - 0xc8u);
        (void)sp0;
        return 1;
    }
    case 0x10182ae5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_7c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_7c = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0xdcu;
        wr32(sp0 - 0x100u, sp0 - 0x40u);
        wr32(sp0 - 0xfcu, sp0 - 0x40u);
        wr32(sp0 - 0xf8u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0x40u);
        wr32(sp0 - 0xf0u, sp0 - 0x40u);
        wr32(sp0 - 0xecu, sp0 - 0xc8u);
        wr32(sp0 - 0xe8u, sp0 - 0x40u);
        wr32(sp0 - 0xe4u, sp0 - 0x40u);
        wr32(sp0 - 0xe0u, sp0 - 0xc8u);
        (void)sp0;
        return 1;
    }
    case 0x10182af1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_7c;
        uint32_t loc_cc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_cc = rd32(sp0 - 0xccu);
        loc_7c = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0xdcu;
        wr32(sp0 - 0x100u, sp0 - 0x40u);
        wr32(sp0 - 0xfcu, sp0 - 0x40u);
        wr32(sp0 - 0xf8u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0x40u);
        wr32(sp0 - 0xf0u, sp0 - 0x40u);
        wr32(sp0 - 0xecu, sp0 - 0xc8u);
        wr32(sp0 - 0xe8u, sp0 - 0x40u);
        wr32(sp0 - 0xe4u, sp0 - 0x40u);
        wr32(sp0 - 0xe0u, sp0 - 0xc8u);
        (void)sp0;
        return 1;
    }
    case 0x10182af5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_7c;
        uint32_t loc_cc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_cc = rd32(sp0 - 0xccu);
        loc_7c = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0xdcu;
        wr32(sp0 - 0x100u, sp0 - 0x40u);
        wr32(sp0 - 0xfcu, sp0 - 0x40u);
        wr32(sp0 - 0xf8u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0x40u);
        wr32(sp0 - 0xf0u, sp0 - 0x40u);
        wr32(sp0 - 0xecu, sp0 - 0xc8u);
        wr32(sp0 - 0xe8u, sp0 - 0x40u);
        wr32(sp0 - 0xe4u, sp0 - 0x40u);
        wr32(sp0 - 0xe0u, sp0 - 0xc8u);
        (void)sp0;
        return 1;
    }
    case 0x10182afcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_7c;
        uint32_t loc_cc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_cc = rd32(sp0 - 0xccu);
        loc_7c = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0xdcu;
        wr32(sp0 - 0x100u, sp0 - 0x40u);
        wr32(sp0 - 0xfcu, sp0 - 0x40u);
        wr32(sp0 - 0xf8u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0x40u);
        wr32(sp0 - 0xf0u, sp0 - 0x40u);
        wr32(sp0 - 0xecu, sp0 - 0xc8u);
        wr32(sp0 - 0xe8u, sp0 - 0x40u);
        wr32(sp0 - 0xe4u, sp0 - 0x40u);
        wr32(sp0 - 0xe0u, sp0 - 0xc8u);
        (void)sp0;
        return 1;
    }
    case 0x10182b00u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_7c;
        uint32_t loc_cc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_cc = rd32(sp0 - 0xccu);
        loc_7c = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0xdcu;
        wr32(sp0 - 0x100u, sp0 - 0x40u);
        wr32(sp0 - 0xfcu, sp0 - 0x40u);
        wr32(sp0 - 0xf8u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0x40u);
        wr32(sp0 - 0xf0u, sp0 - 0x40u);
        wr32(sp0 - 0xecu, sp0 - 0xc8u);
        wr32(sp0 - 0xe8u, sp0 - 0x40u);
        wr32(sp0 - 0xe4u, sp0 - 0x40u);
        wr32(sp0 - 0xe0u, sp0 - 0xc8u);
        (void)sp0;
        return 1;
    }
    case 0x10182b08u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_7c;
        uint32_t loc_cc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_cc = rd32(sp0 - 0xccu);
        loc_7c = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0xdcu;
        wr32(sp0 - 0x100u, sp0 - 0x40u);
        wr32(sp0 - 0xfcu, sp0 - 0x40u);
        wr32(sp0 - 0xf8u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0x40u);
        wr32(sp0 - 0xf0u, sp0 - 0x40u);
        wr32(sp0 - 0xecu, sp0 - 0xc8u);
        wr32(sp0 - 0xe8u, sp0 - 0x40u);
        wr32(sp0 - 0xe4u, sp0 - 0x40u);
        wr32(sp0 - 0xe0u, sp0 - 0xc8u);
        (void)sp0;
        return 1;
    }
    case 0x10182b0au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_7c;
        uint32_t loc_cc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_cc = rd32(sp0 - 0xccu);
        loc_7c = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0xdcu;
        wr32(sp0 - 0x100u, sp0 - 0x40u);
        wr32(sp0 - 0xfcu, sp0 - 0x40u);
        wr32(sp0 - 0xf8u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0x40u);
        wr32(sp0 - 0xf0u, sp0 - 0x40u);
        wr32(sp0 - 0xecu, sp0 - 0xc8u);
        wr32(sp0 - 0xe8u, sp0 - 0x40u);
        wr32(sp0 - 0xe4u, sp0 - 0x40u);
        wr32(sp0 - 0xe0u, sp0 - 0xc8u);
        (void)sp0;
        return 1;
    }
    case 0x10182b0fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_7c;
        uint32_t loc_cc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_cc = rd32(sp0 - 0xccu);
        loc_7c = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0xdcu;
        wr32(sp0 - 0x100u, sp0 - 0x40u);
        wr32(sp0 - 0xfcu, sp0 - 0x40u);
        wr32(sp0 - 0xf8u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0x40u);
        wr32(sp0 - 0xf0u, sp0 - 0x40u);
        wr32(sp0 - 0xecu, sp0 - 0xc8u);
        wr32(sp0 - 0xe8u, sp0 - 0x40u);
        wr32(sp0 - 0xe4u, sp0 - 0x40u);
        wr32(sp0 - 0xe0u, sp0 - 0xc8u);
        (void)sp0;
        return 1;
    }
    case 0x10182b19u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_7c;
        uint32_t loc_cc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_cc = rd32(sp0 - 0xccu);
        loc_7c = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0xdcu;
        wr32(sp0 - 0x100u, sp0 - 0x40u);
        wr32(sp0 - 0xfcu, sp0 - 0x40u);
        wr32(sp0 - 0xf8u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0x40u);
        wr32(sp0 - 0xf0u, sp0 - 0x40u);
        wr32(sp0 - 0xecu, sp0 - 0xc8u);
        wr32(sp0 - 0xe8u, sp0 - 0x40u);
        wr32(sp0 - 0xe4u, sp0 - 0x40u);
        wr32(sp0 - 0xe0u, sp0 - 0xc8u);
        (void)sp0;
        return 1;
    }
    case 0x10182b25u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_7c;
        uint32_t loc_cc;
        uint32_t loc_d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_7c = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0xdcu;
        wr32(sp0 - 0x100u, sp0 - 0x40u);
        wr32(sp0 - 0xfcu, sp0 - 0x40u);
        wr32(sp0 - 0xf8u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0x40u);
        wr32(sp0 - 0xf0u, sp0 - 0x40u);
        wr32(sp0 - 0xecu, sp0 - 0xc8u);
        wr32(sp0 - 0xe8u, sp0 - 0x40u);
        wr32(sp0 - 0xe4u, sp0 - 0x40u);
        wr32(sp0 - 0xe0u, sp0 - 0xc8u);
        (void)sp0;
        return 1;
    }
    case 0x10182b29u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_7c;
        uint32_t loc_cc;
        uint32_t loc_d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_7c = rd32(sp0 - 0x7cu);
        g->esp = sp0 - 0xdcu;
        wr32(sp0 - 0x100u, sp0 - 0x40u);
        wr32(sp0 - 0xfcu, sp0 - 0x40u);
        wr32(sp0 - 0xf8u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0x40u);
        wr32(sp0 - 0xf0u, sp0 - 0x40u);
        wr32(sp0 - 0xecu, sp0 - 0xc8u);
        wr32(sp0 - 0xe8u, sp0 - 0x40u);
        wr32(sp0 - 0xe4u, sp0 - 0x40u);
        wr32(sp0 - 0xe0u, sp0 - 0xc8u);
        (void)sp0;
        return 1;
    }
    case 0x10182b3bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_70;
        uint32_t loc_7c;
        uint32_t loc_cc;
        uint32_t loc_d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0xdcu;
        wr32(sp0 - 0x100u, sp0 - 0x40u);
        wr32(sp0 - 0xfcu, sp0 - 0x40u);
        wr32(sp0 - 0xf8u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0x40u);
        wr32(sp0 - 0xf0u, sp0 - 0x40u);
        wr32(sp0 - 0xecu, sp0 - 0xc8u);
        wr32(sp0 - 0xe8u, sp0 - 0x40u);
        wr32(sp0 - 0xe4u, sp0 - 0x40u);
        wr32(sp0 - 0xe0u, sp0 - 0xc8u);
        (void)sp0;
        return 1;
    }
    case 0x10182b3cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_78;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        double loc_c8_f;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_e0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_e0 = rd32(sp0 - 0xe0u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8_f = rdf32(sp0 - 0xc8u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0xe0u;
        wr32(sp0 - 0x100u, sp0 - 0x40u);
        wr32(sp0 - 0xfcu, sp0 - 0x40u);
        wr32(sp0 - 0xf8u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10182b50u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_78;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        double loc_c8_f;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_e0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_e0 = rd32(sp0 - 0xe0u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8_f = rdf32(sp0 - 0xc8u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0xe0u;
        wr32(sp0 - 0x100u, sp0 - 0x40u);
        wr32(sp0 - 0xfcu, sp0 - 0x40u);
        wr32(sp0 - 0xf8u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10182b66u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_78;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        double loc_c8_f;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_e0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_e0 = rd32(sp0 - 0xe0u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8_f = rdf32(sp0 - 0xc8u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0xe0u;
        wr32(sp0 - 0x100u, sp0 - 0x40u);
        wr32(sp0 - 0xfcu, sp0 - 0x40u);
        wr32(sp0 - 0xf8u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10182b7au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_78;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        double loc_c8_f;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_e0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_e0 = rd32(sp0 - 0xe0u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8_f = rdf32(sp0 - 0xc8u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0xe0u;
        wr32(sp0 - 0x100u, sp0 - 0x40u);
        wr32(sp0 - 0xfcu, sp0 - 0x40u);
        wr32(sp0 - 0xf8u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10182b7eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_78;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        double loc_c8_f;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_e0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_e0 = rd32(sp0 - 0xe0u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8_f = rdf32(sp0 - 0xc8u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0xe0u;
        wr32(sp0 - 0x100u, sp0 - 0x40u);
        wr32(sp0 - 0xfcu, sp0 - 0x40u);
        wr32(sp0 - 0xf8u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10182b9fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_78;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        double loc_c8_f;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_e0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_e0 = rd32(sp0 - 0xe0u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8_f = rdf32(sp0 - 0xc8u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0xe0u;
        wr32(sp0 - 0x100u, sp0 - 0x40u);
        wr32(sp0 - 0xfcu, sp0 - 0x40u);
        wr32(sp0 - 0xf8u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10182baau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_78;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        double loc_c8_f;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_e0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_e0 = rd32(sp0 - 0xe0u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8_f = rdf32(sp0 - 0xc8u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0xe0u;
        wr32(sp0 - 0x100u, sp0 - 0x40u);
        wr32(sp0 - 0xfcu, sp0 - 0x40u);
        wr32(sp0 - 0xf8u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10182bf2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_48;
        uint32_t loc_64;
        uint32_t loc_6c;
        uint32_t loc_74;
        uint32_t loc_88;
        double loc_c8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_c8_f = rdf32(sp0 - 0xc8u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_64 = rd32(sp0 - 0x64u);
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0xe0u;
        g->esi = COW_IMG(0x10639088u);
        wr32(sp0 - 0x100u, sp0 - 0x40u);
        wr32(sp0 - 0xfcu, sp0 - 0x40u);
        wr32(sp0 - 0xf8u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0x40u);
        wr32(sp0 - 0x80u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10182bf9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_48;
        uint32_t loc_64;
        uint32_t loc_6c;
        uint32_t loc_74;
        uint32_t loc_88;
        double loc_c8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_c8_f = rdf32(sp0 - 0xc8u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_64 = rd32(sp0 - 0x64u);
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0xe0u;
        g->esi = COW_IMG(0x10639088u);
        wr32(sp0 - 0x100u, sp0 - 0x40u);
        wr32(sp0 - 0xfcu, sp0 - 0x40u);
        wr32(sp0 - 0xf8u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0x40u);
        wr32(sp0 - 0x80u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10182c14u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_48;
        uint32_t loc_64;
        uint32_t loc_6c;
        uint32_t loc_74;
        uint32_t loc_88;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_88 = rd32(sp0 - 0x88u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_64 = rd32(sp0 - 0x64u);
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0xe0u;
        g->esi = COW_IMG(0x10639088u);
        wr32(sp0 - 0x100u, sp0 - 0x40u);
        wr32(sp0 - 0xfcu, sp0 - 0x40u);
        wr32(sp0 - 0xf8u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0x40u);
        wr32(sp0 - 0x80u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10182c2eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_48;
        uint32_t loc_64;
        uint32_t loc_6c;
        uint32_t loc_74;
        uint32_t loc_88;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_88 = rd32(sp0 - 0x88u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_64 = rd32(sp0 - 0x64u);
        loc_48 = rd32(sp0 - 0x48u);
        x0 = ST(0);
        g->esp = sp0 - 0xe0u;
        g->esi = COW_IMG(0x10639088u);
        wr32(sp0 - 0x100u, sp0 - 0x40u);
        wr32(sp0 - 0xfcu, sp0 - 0x40u);
        wr32(sp0 - 0xf8u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0x40u);
        wr32(sp0 - 0x80u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10182c3du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_48;
        uint32_t loc_64;
        uint32_t loc_6c;
        uint32_t loc_74;
        uint32_t loc_88;
        uint32_t loc_c8;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_64 = rd32(sp0 - 0x64u);
        loc_48 = rd32(sp0 - 0x48u);
        x0 = ST(0);
        g->esp = sp0 - 0xe0u;
        g->esi = COW_IMG(0x10639088u);
        wr32(sp0 - 0x100u, sp0 - 0x40u);
        wr32(sp0 - 0xfcu, sp0 - 0x40u);
        wr32(sp0 - 0xf8u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0x40u);
        wr32(sp0 - 0x80u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10182c59u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_48;
        uint32_t loc_64;
        uint32_t loc_6c;
        uint32_t loc_74;
        uint32_t loc_88;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_88 = rd32(sp0 - 0x88u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_64 = rd32(sp0 - 0x64u);
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0xe0u;
        g->esi = COW_IMG(0x10639088u);
        wr32(sp0 - 0x100u, sp0 - 0x40u);
        wr32(sp0 - 0xfcu, sp0 - 0x40u);
        wr32(sp0 - 0xf8u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0x40u);
        wr32(sp0 - 0x80u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10182c66u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_48;
        uint32_t loc_64;
        uint32_t loc_6c;
        uint32_t loc_74;
        uint32_t loc_88;
        double loc_c8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_c8_f = rdf32(sp0 - 0xc8u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_64 = rd32(sp0 - 0x64u);
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0xe0u;
        g->esi = COW_IMG(0x10639088u);
        wr32(sp0 - 0x100u, sp0 - 0x40u);
        wr32(sp0 - 0xfcu, sp0 - 0x40u);
        wr32(sp0 - 0xf8u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0x40u);
        wr32(sp0 - 0x80u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10182c79u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_48;
        uint32_t loc_64;
        uint32_t loc_6c;
        uint32_t loc_74;
        uint32_t loc_80;
        uint32_t loc_88;
        double loc_c8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c8_f = rdf32(sp0 - 0xc8u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_64 = rd32(sp0 - 0x64u);
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0xe0u;
        wr32(sp0 - 0x100u, sp0 - 0x40u);
        wr32(sp0 - 0xfcu, sp0 - 0x40u);
        wr32(sp0 - 0xf8u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10182cbcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_48;
        uint32_t loc_64;
        uint32_t loc_6c;
        uint32_t loc_74;
        uint32_t loc_80;
        uint32_t loc_88;
        double loc_c8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c8_f = rdf32(sp0 - 0xc8u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_64 = rd32(sp0 - 0x64u);
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0xe0u;
        wr32(sp0 - 0x100u, sp0 - 0x40u);
        wr32(sp0 - 0xfcu, sp0 - 0x40u);
        wr32(sp0 - 0xf8u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10182e6eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_48;
        uint32_t loc_64;
        uint32_t loc_6c;
        uint32_t loc_74;
        uint32_t loc_80;
        uint32_t loc_88;
        double loc_c8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c8_f = rdf32(sp0 - 0xc8u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_64 = rd32(sp0 - 0x64u);
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0xe0u;
        wr32(sp0 - 0x100u, sp0 - 0x40u);
        wr32(sp0 - 0xfcu, sp0 - 0x40u);
        wr32(sp0 - 0xf8u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10182e73u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_48;
        uint32_t loc_64;
        uint32_t loc_6c;
        uint32_t loc_74;
        uint32_t loc_80;
        uint32_t loc_88;
        double loc_c8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c8_f = rdf32(sp0 - 0xc8u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_64 = rd32(sp0 - 0x64u);
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0xe0u;
        wr32(sp0 - 0x100u, sp0 - 0x40u);
        wr32(sp0 - 0xfcu, sp0 - 0x40u);
        wr32(sp0 - 0xf8u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10182e83u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_48;
        uint32_t loc_64;
        uint32_t loc_6c;
        uint32_t loc_74;
        uint32_t loc_80;
        uint32_t loc_88;
        double loc_c8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c8_f = rdf32(sp0 - 0xc8u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_64 = rd32(sp0 - 0x64u);
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0xe0u;
        wr32(sp0 - 0x100u, sp0 - 0x40u);
        wr32(sp0 - 0xfcu, sp0 - 0x40u);
        wr32(sp0 - 0xf8u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10182e87u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_48;
        uint32_t loc_64;
        uint32_t loc_6c;
        uint32_t loc_74;
        uint32_t loc_80;
        uint32_t loc_88;
        double loc_c8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c8_f = rdf32(sp0 - 0xc8u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_64 = rd32(sp0 - 0x64u);
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0xe0u;
        wr32(sp0 - 0x100u, sp0 - 0x40u);
        wr32(sp0 - 0xfcu, sp0 - 0x40u);
        wr32(sp0 - 0xf8u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10182e8bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_48;
        uint32_t loc_64;
        uint32_t loc_6c;
        uint32_t loc_74;
        uint32_t loc_80;
        uint32_t loc_88;
        double loc_c8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c8_f = rdf32(sp0 - 0xc8u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_64 = rd32(sp0 - 0x64u);
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0xe0u;
        wr32(sp0 - 0x100u, sp0 - 0x40u);
        wr32(sp0 - 0xfcu, sp0 - 0x40u);
        wr32(sp0 - 0xf8u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10182ea0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_48;
        uint32_t loc_64;
        uint32_t loc_6c;
        uint32_t loc_74;
        uint32_t loc_80;
        uint32_t loc_88;
        double loc_c8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c8_f = rdf32(sp0 - 0xc8u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_64 = rd32(sp0 - 0x64u);
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0xe0u;
        wr32(sp0 - 0x100u, sp0 - 0x40u);
        wr32(sp0 - 0xfcu, sp0 - 0x40u);
        wr32(sp0 - 0xf8u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10182ea4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_78;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        double loc_c8_f;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_e0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_e0 = rd32(sp0 - 0xe0u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8_f = rdf32(sp0 - 0xc8u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0xe0u;
        wr32(sp0 - 0x100u, sp0 - 0x40u);
        wr32(sp0 - 0xfcu, sp0 - 0x40u);
        wr32(sp0 - 0xf8u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10182ebau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_78;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        double loc_c8_f;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_e0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_e0 = rd32(sp0 - 0xe0u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8_f = rdf32(sp0 - 0xc8u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0xe0u;
        wr32(sp0 - 0x100u, sp0 - 0x40u);
        wr32(sp0 - 0xfcu, sp0 - 0x40u);
        wr32(sp0 - 0xf8u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10182ec1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_78;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        double loc_c8_f;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_e0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_e0 = rd32(sp0 - 0xe0u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8_f = rdf32(sp0 - 0xc8u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0xe0u;
        wr32(sp0 - 0x100u, sp0 - 0x40u);
        wr32(sp0 - 0xfcu, sp0 - 0x40u);
        wr32(sp0 - 0xf8u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10182ecbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_78;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        double loc_c8_f;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_e0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_e0 = rd32(sp0 - 0xe0u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8_f = rdf32(sp0 - 0xc8u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0xe0u;
        wr32(sp0 - 0x100u, sp0 - 0x40u);
        wr32(sp0 - 0xfcu, sp0 - 0x40u);
        wr32(sp0 - 0xf8u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10182ed3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_78;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        double loc_c8_f;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_e0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_e0 = rd32(sp0 - 0xe0u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8_f = rdf32(sp0 - 0xc8u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0xe0u;
        wr32(sp0 - 0x100u, sp0 - 0x40u);
        wr32(sp0 - 0xfcu, sp0 - 0x40u);
        wr32(sp0 - 0xf8u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10182ee4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_78;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        double loc_c8_f;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_e0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_e0 = rd32(sp0 - 0xe0u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8_f = rdf32(sp0 - 0xc8u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0xe0u;
        wr32(sp0 - 0x100u, sp0 - 0x40u);
        wr32(sp0 - 0xfcu, sp0 - 0x40u);
        wr32(sp0 - 0xf8u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10182ef5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_78;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        double loc_c8_f;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_e0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_e0 = rd32(sp0 - 0xe0u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8_f = rdf32(sp0 - 0xc8u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0xe0u;
        wr32(sp0 - 0x100u, sp0 - 0x40u);
        wr32(sp0 - 0xfcu, sp0 - 0x40u);
        wr32(sp0 - 0xf8u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10182ef6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_78;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_cc;
        uint32_t loc_d0;
        uint32_t loc_e0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_e0 = rd32(sp0 - 0xe0u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_cc = rd32(sp0 - 0xccu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0xdcu;
        wr32(sp0 - 0x100u, sp0 - 0x40u);
        wr32(sp0 - 0xfcu, sp0 - 0x40u);
        wr32(sp0 - 0xf8u, sp0 - 0xc8u);
        wr32(sp0 - 0xf4u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10182700(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10182700(g);
    g->esp = sp0;
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
