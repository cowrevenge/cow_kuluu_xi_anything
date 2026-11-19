/* f_0x10039a80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10039a80(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t loc_50;
    uint32_t loc_58;
    uint32_t loc_5c;
    uint32_t loc_60;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 104u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10039abcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_10039abc;
    case 0x10039ac2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_10039ac2;
    case 0x10039acau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_10039aca;
    case 0x10039ad0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_10039ad0;
    case 0x10039ad8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_10039ad8;
    case 0x10039adcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_10039adc;
    case 0x10039ae4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_10039ae4;
    case 0x10039ae8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_10039ae8;
    case 0x10039af0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_10039af0;
    case 0x10039afdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_10039afd;
    case 0x10039b05u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_10039b05;
    case 0x10039b0du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_10039b0d;
    case 0x10039b15u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_10039b15;
    case 0x10039b17u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_10039b17;
    case 0x10039b1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_10039b1c;
    case 0x10039b22u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_10039b22;
    case 0x10039b28u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_10039b28;
    case 0x10039b2bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_10039b2b;
    case 0x10039b32u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_10039b32;
    case 0x10039b39u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_10039b39;
    case 0x10039b43u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_10039b43;
    case 0x10039b57u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_10039b57;
    case 0x10039b67u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_10039b67;
    case 0x10039b6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_10039b6f;
    case 0x10039b78u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_10039b78;
    case 0x10039b82u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_10039b82;
    case 0x10039b8du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_10039b8d;
    case 0x10039b95u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_10039b95;
    case 0x10039b9du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_10039b9d;
    case 0x10039ba7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_10039ba7;
    case 0x10039bc7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); goto E_10039bc7;
    case 0x10039bccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_10039bcc;
    case 0x10039bd0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_10039bd0;
    case 0x10039bddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_10039bdd;
    case 0x10039be7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_10039be7;
    case 0x10039bf0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_10039bf0;
    case 0x10039bf9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_10039bf9;
    case 0x10039bfeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_10039bfe;
    case 0x10039c03u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_10039c03;
    case 0x10039c0au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_10039c0a;
    case 0x10039c0cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_10039c0c;
    case 0x10039c17u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_10039c17;
    case 0x10039c20u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_10039c20;
    case 0x10039c26u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_10039c26;
    case 0x10039c45u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); goto E_10039c45;
    case 0x10039c4au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_10039c4a;
    case 0x10039c95u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); goto E_10039c95;
    case 0x10039c9du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); goto E_10039c9d;
    case 0x10039cc7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_10039cc7;
    case 0x10039ccdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_10039ccd;
    case 0x10039cdbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_10039cdb;
    case 0x10039d26u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); goto E_10039d26;
    case 0x10039d2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); goto E_10039d2e;
    case 0x10039d55u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_10039d55;
    case 0x10039d5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_10039d5f;
    case 0x10039d73u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_10039d73;
    case 0x10039d85u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); goto E_10039d85;
    case 0x10039d87u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_10039d87;
    case 0x10039d91u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_10039d91;
    case 0x10039d97u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_10039d97;
    case 0x10039d9fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_10039d9f;
    case 0x10039db6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); goto E_10039db6;
    case 0x10039db8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_10039db8;
    case 0x10039dc0u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_10039dc0;
    case 0x10039dcdu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebp = rd32(sp0 - 0x3cu); in_ebx = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_10039dcd;
    case 0x10039dd2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_10039dd2;
    case 0x10039dd8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); goto E_10039dd8;
    case 0x10039ddcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_10039ddc;
    case 0x10039de3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10039de3;
    case 0x10039de7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_50 = rd32(sp0 - 0x50u); loc_28 = rd32(sp0 - 0x28u); goto E_10039de7;
    case 0x10039df1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10039df1;
    case 0x10039df9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10039df9;
    case 0x10039e08u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10039e08;
    case 0x10039e15u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10039e15;
    case 0x10039e1du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10039e1d;
    case 0x10039e28u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10039e28;
    case 0x10039e32u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10039e32;
    case 0x10039e44u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_10039e44;
    default: break;
    }
#endif

    COW_AT(10039a80)
    wr32(sp0 - 0x38u, in_ebx);
    wr32(sp0 - 0x3cu, in_ebp);
    wr32(sp0 - 0x40u, in_esi);
    wr32(sp0 - 0x44u, in_edi);
    t1 = rd16(self + 0x26u);
    wr8(sp0 - 0x33u, 0u);
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x2cu, 0u);
    t2 = (self & 0xffff0000u) | t1;
    t3 = rd16(self + 0x24u);
    wr32(sp0 - 0x28u, 0xcu);
    eax = t3;
    ecx = t2;
    edx = 2u;
    ebp = (uint16_t)t2;
    edi = (uint16_t)t3;
    loc_30 = 0u;
    loc_2c = 0u;
    loc_28 = 0xcu;
L_10039abc: ;
    COW_AT(10039abc)
    if ((uint16_t)eax == 1u)
    {
    COW_AT(10039ac2)
        wr32(sp0 - 0x30u, 1u);
        loc_30 = 1u;
    }
    COW_AT(10039aca)
    if ((uint16_t)ecx == 1u)
    {
    COW_AT(10039ad0)
        wr32(sp0 - 0x2cu, 1u);
        loc_2c = 1u;
    }
    COW_AT(10039ad8)
    if (edi == edx)
    {
    COW_AT(10039adc)
        wr32(sp0 - 0x30u, 1u);
        loc_30 = 1u;
    }
    COW_AT(10039ae4)
    if (ebp == edx)
    {
    COW_AT(10039ae8)
        wr32(sp0 - 0x2cu, 1u);
        loc_2c = 1u;
    }
    COW_AT(10039af0)
    wr32(sp0 - 0x28u, loc_28 - 1u);
    if (loc_28 != 1u)
    {
        edx = edx * 2u;
        loc_28 = loc_28 - 1u;
        goto L_10039abc;
    }
    loc_28 = loc_28 - 1u;
    COW_AT(10039afd)
    if (loc_30 == 0u)
    {
        edx = loc_30;
        goto L_10039b0d;
    }
    COW_AT(10039b05)
    if (loc_2c != 0u)
    {
        edx = loc_2c;
        goto L_10039b15;
    }
    edx = loc_2c;
L_10039b0d: ;
    COW_AT(10039b0d)
    wr8(sp0 - 0x33u, 1u);
    edx = (edx & 0xffffff00u) | 1u;
L_10039b17: ;
    COW_AT(10039b17)
    if (rd8(self + 0x2au) > (uint8_t)edx)
    {
    COW_AT(10039b1c)
        if ((uint16_t)eax < 0x20u) goto L_10039b28;
    COW_AT(10039b22)
        if ((uint16_t)ecx >= 0x20u) goto L_10039b2b;
L_10039b28: ;
    COW_AT(10039b28)
        wr8(self + 0x2au, (uint8_t)edx);
    }
L_10039b2b: ;
    COW_AT(10039b2b)
    if (rd32(self + 0x20u) != 0u)
    {
        ebx = rd32(self + 0x20u);
        goto L_10039b43;
    }
    COW_AT(10039b32)
    if (rd32(self + 0x1cu) != 0u)
    {
        ebx = rd32(self + 0x1cu);
        goto L_10039b43;
    }
    COW_AT(10039b39)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return (eax & 0xffffff00u) | (uint8_t)edx;
L_10039b15: ;
    COW_AT(10039b15)
    edx = (edx & 0xffffff00u) | 1u;
    goto L_10039b17;
L_10039b43: ;
    COW_AT(10039b43)
    t4 = rd32(self + 0x2cu);
    wr8(sp0 - 0x32u, t4 >> 4u & 0xfu);
    if ((t4 >> 4u & 0xfu) == 9u)
    {
        edx = t4 >> 4u;
        ebx = (ebx & 0xffffff00u) | (t4 >> 4u & 0xfu);
        goto L_10039b82;
    }
    edx = t4 >> 4u;
    ebx = (ebx & 0xffffff00u) | (t4 >> 4u & 0xfu);
    COW_AT(10039b57)
    t5 = rd8(self + 0x29u);
    wr8(sp0 - 0x28u, (uint8_t)t5);
    wr8(sp0 - 0x31u, t5 & 0x80u);
    if ((t5 & 0x80u) == 0u)
    {
        ebx = ((ebx | t5) & 0xffffff00u) | (t5 & 0x80u);
        goto L_10039b6f;
    }
    COW_AT(10039b67)
    if (rd32(rd32(self + 0x20u)) != 0u)
    {
        ebx = rd32(self + 0x20u);
        goto L_10039bdd;
    }
    ebx = rd32(self + 0x20u);
L_10039b6f: ;
    COW_AT(10039b6f)
    if (rd8(sp0 - 0x32u) != 0xau)
    {
        ebx = (ebx & 0xffffff00u) | rd8(sp0 - 0x32u);
        goto L_10039bcc;
    }
    ebx = (ebx & 0xffffff00u) | rd8(sp0 - 0x32u);
    COW_AT(10039b78)
    if (rd32(COW_IMG(0x10456ab0u)) == 0u)
    {
        edx = rd32(COW_IMG(0x10456ab0u));
        goto L_10039bdd;
    }
    edx = rd32(COW_IMG(0x10456ab0u));
L_10039b82: ;
    COW_AT(10039b82)
    if (rd8(self + 0x29u) == 0x10u) goto L_10039d91;
    eax = (eax & 0xffffff00u) | rd8(self + 0x29u);
    COW_AT(10039b8d)
    if ((uint8_t)eax == 0x18u) goto L_10039d5f;
    COW_AT(10039b95)
    if ((uint8_t)eax != 0x20u)
    {
        loc_38 = in_ebx;
        loc_3c = in_ebp;
        loc_40 = in_esi;
        loc_44 = in_edi;
        goto L_10039ddc;
    }
    COW_AT(10039b9d)
    if ((rd8(self + 0x2cu) & 7u) == 0u) goto L_10039d55;
    COW_AT(10039ba7)
    wr32(sp0 - 0x48u, self + 0x44u);
    wr32(sp0 - 0x4cu, 1u);
    wr32(sp0 - 0x50u, 0x15u);
    wr32(sp0 - 0x54u, 0u);
    t24 = rd8(self + 0x2au);
    wr32(sp0 - 0x58u, t24);
    wr32(sp0 - 0x5cu, edi);
    t25 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x60u, t25);
    g->eax = t25;
    g->edx = t24;
    g->esp = sp0 - 0x44u;
    t26 = cow_stdcall(g, COW_IMG(0x102d303fu), 7, t25, edi, t24, 0u, 0x15u, 1u, self + 0x44u);
    t27 = g->edx;
    eax = t26;
    edx = t27;
    COW_AT(10039bc7)
L_10039dd8: ;
    COW_AT(10039dd8)
    if ((int32_t)eax < 0) goto L_10039de7;
    loc_38 = rd32(sp0 - 0x38u);
    loc_3c = rd32(sp0 - 0x3cu);
    loc_40 = rd32(sp0 - 0x40u);
    loc_44 = rd32(sp0 - 0x44u);
L_10039ddc: ;
    COW_AT(10039ddc)
    g->ebx = ebx;
    g->esp = sp0 - 0x44u;
    t35 = cow_call_regs(g, COW_IMG(0x10039e50u), eax, self, edx, 1, 0);
    t36 = g->edx;
    eax = t35;
    edx = t36;
    COW_AT(10039de3)
    if ((uint8_t)eax != 0u) goto L_10039df1;
L_10039de7: ;
    COW_AT(10039de7)
    g->ebx = rd32(sp0 - 0x38u);
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    g->ebp = rd32(sp0 - 0x3cu);
    g->edx = edx;
    return eax & 0xffffff00u;
L_10039bcc: ;
    COW_AT(10039bcc)
    if ((uint8_t)ebx == 0u) goto L_10039bdd;
    COW_AT(10039bd0)
    if ((int32_t)(edx & 0xfu) <= (int32_t)rd32(COW_IMG(0x10456ad0u)))
    {
        edx = edx & 0xfu;
        ebx = rd32(COW_IMG(0x10456ad0u));
        goto L_10039b82;
    }
    edx = edx & 0xfu;
    ebx = rd32(COW_IMG(0x10456ad0u));
L_10039bdd: ;
    COW_AT(10039bdd)
    if (rd8(sp0 - 0x31u) == 0u)
    {
        edx = (edx & 0xffffff00u) | rd8(sp0 - 0x31u);
    COW_AT(10039bf0)
        if (rd8(sp0 - 0x28u) == 0x10u)
        {
    COW_AT(10039c0a)
            ebp = 0u;
        }
        else
        {
            edx = (edx & 0xffffff00u) | rd8(sp0 - 0x28u);
    COW_AT(10039bf9)
            if ((uint8_t)edx == 0x18u) goto L_10039c03;
    COW_AT(10039bfe)
            if ((uint8_t)edx != 0x20u)
            {
                ebp = 0u;
                goto L_10039c0c;
            }
L_10039c03: ;
    COW_AT(10039c03)
            ebp = 2u;
        }
    }
    else
    {
    COW_AT(10039be7)
        ebp = rd32(sp0 - 0x28u) & 0x7fu;
    }
L_10039c0c: ;
    COW_AT(10039c0c)
    if (ebp == 0u) goto L_10039cc7;
    edx = ebp;
    COW_AT(10039c17)
    if (edx != 2u)
    {
        edx = edx - 2u;
        loc_38 = in_ebx;
        loc_3c = in_ebp;
        loc_40 = in_esi;
        loc_44 = in_edi;
        goto L_10039ddc;
    }
    COW_AT(10039c20)
    if ((rd8(self + 0x2cu) & 7u) == 0u) goto L_10039c4a;
    COW_AT(10039c26)
    wr32(sp0 - 0x48u, self + 0x44u);
    wr32(sp0 - 0x4cu, 1u);
    wr32(sp0 - 0x50u, 0x15u);
    wr32(sp0 - 0x54u, 0u);
    t6 = rd8(self + 0x2au);
    wr32(sp0 - 0x58u, t6);
    wr32(sp0 - 0x5cu, edi);
    t7 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x60u, t7);
    g->eax = t7;
    g->edx = t6;
    g->esp = sp0 - 0x44u;
    t8 = cow_stdcall(g, COW_IMG(0x102d303fu), 7, t7, edi, t6, 0u, 0x15u, 1u, self + 0x44u);
    t9 = g->edx;
    eax = t8;
    edx = t9;
    COW_AT(10039c45)
    goto L_10039dd8;
L_10039c4a: ;
    COW_AT(10039c4a)
    wr32(sp0 - 0x24u, (uint16_t)eax);
    wr32(sp0 - 0x30u, (uint16_t)ecx);
    wr32(sp0 - 0x28u, 0x33545844u);
    t10 = rd8(self + 0x2au);
    wr32(sp0 - 0x2cu, t10);
    wr32(sp0 - 0x48u, 1u);
    wr32(sp0 - 0x4cu, sp0 - 0x28u);
    wr32(sp0 - 0x50u, 0u);
    wr32(sp0 - 0x54u, sp0 - 0x2cu);
    wr32(sp0 - 0x58u, sp0 - 0x30u);
    wr32(sp0 - 0x5cu, sp0 - 0x24u);
    t11 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x60u, t11);
    g->eax = t11;
    g->edx = sp0 - 0x30u;
    g->esp = sp0 - 0x44u;
    t12 = cow_stdcall(g, COW_IMG(0x102d2f60u), 7, t11, sp0 - 0x24u, sp0 - 0x30u, sp0 - 0x2cu, 0u, sp0 - 0x28u, 1u);
    t13 = g->edx;
    eax = t12;
    edx = t13;
    COW_AT(10039c95)
    if ((int32_t)eax < 0) goto L_10039de7;
    COW_AT(10039c9d)
    wr32(sp0 - 0x48u, self + 0x40u);
    wr32(sp0 - 0x4cu, 1u);
    wr32(sp0 - 0x50u, 0x33545844u);
    wr32(sp0 - 0x54u, 0u);
    t14 = rd32(sp0 - 0x2cu);
    wr32(sp0 - 0x58u, t14);
    t15 = rd32(sp0 - 0x30u);
    wr32(sp0 - 0x5cu, t15);
    t16 = rd32(sp0 - 0x24u);
    wr32(sp0 - 0x60u, t16);
    eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    ecx = t16;
    edx = t15;
    loc_50 = 0x33545844u;
    loc_58 = t14;
    loc_5c = t15;
    loc_60 = t16;
    loc_38 = rd32(sp0 - 0x38u);
    loc_3c = rd32(sp0 - 0x3cu);
    loc_40 = rd32(sp0 - 0x40u);
    loc_44 = rd32(sp0 - 0x44u);
L_10039dd2: ;
    COW_AT(10039dd2)
    wr32(sp0 - 0x64u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t33 = cow_stdcall(g, COW_IMG(0x102d2fd9u), 8, eax, loc_60, loc_5c, loc_58, 0u, loc_50, 1u, self + 0x40u);
    t34 = g->edx;
    eax = t33;
    edx = t34;
    goto L_10039dd8;
L_10039cc7: ;
    COW_AT(10039cc7)
    if ((rd8(self + 0x2cu) & 7u) == 0u) goto L_10039cdb;
    COW_AT(10039ccd)
    eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
L_10039d9f: ;
    COW_AT(10039d9f)
    wr32(sp0 - 0x48u, self + 0x44u);
    wr32(sp0 - 0x4cu, 1u);
    wr32(sp0 - 0x50u, 0x19u);
    wr32(sp0 - 0x54u, 0u);
    t30 = rd8(self + 0x2au);
    wr32(sp0 - 0x58u, t30);
    wr32(sp0 - 0x5cu, edi);
    wr32(sp0 - 0x60u, eax);
    g->eax = eax;
    g->edx = t30;
    g->esp = sp0 - 0x44u;
    t31 = cow_stdcall(g, COW_IMG(0x102d303fu), 7, eax, edi, t30, 0u, 0x19u, 1u, self + 0x44u);
    t32 = g->edx;
    eax = t31;
    edx = t32;
    COW_AT(10039db6)
    goto L_10039dd8;
L_10039cdb: ;
    COW_AT(10039cdb)
    wr32(sp0 - 0x30u, (uint16_t)eax);
    wr32(sp0 - 0x2cu, (uint16_t)ecx);
    wr32(sp0 - 0x24u, 0x31545844u);
    t17 = rd8(self + 0x2au);
    wr32(sp0 - 0x28u, t17);
    wr32(sp0 - 0x48u, 1u);
    wr32(sp0 - 0x4cu, sp0 - 0x24u);
    wr32(sp0 - 0x50u, 0u);
    wr32(sp0 - 0x54u, sp0 - 0x28u);
    wr32(sp0 - 0x58u, sp0 - 0x2cu);
    wr32(sp0 - 0x5cu, sp0 - 0x30u);
    t18 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x60u, t18);
    g->eax = t18;
    g->edx = sp0 - 0x2cu;
    g->esp = sp0 - 0x44u;
    t19 = cow_stdcall(g, COW_IMG(0x102d2f60u), 7, t18, sp0 - 0x30u, sp0 - 0x2cu, sp0 - 0x28u, 0u, sp0 - 0x24u, 1u);
    t20 = g->edx;
    eax = t19;
    edx = t20;
    COW_AT(10039d26)
    if ((int32_t)eax < 0) goto L_10039de7;
    COW_AT(10039d2e)
    wr32(sp0 - 0x48u, self + 0x40u);
    wr32(sp0 - 0x4cu, 1u);
    wr32(sp0 - 0x50u, 0x31545844u);
    wr32(sp0 - 0x54u, 0u);
    t21 = rd32(sp0 - 0x28u);
    wr32(sp0 - 0x58u, t21);
    t22 = rd32(sp0 - 0x2cu);
    wr32(sp0 - 0x5cu, t22);
    t23 = rd32(sp0 - 0x30u);
    wr32(sp0 - 0x60u, t23);
    eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    ecx = t23;
    edx = t22;
    loc_50 = 0x31545844u;
    loc_58 = t21;
    loc_5c = t22;
    loc_60 = t23;
    loc_38 = rd32(sp0 - 0x38u);
    loc_3c = rd32(sp0 - 0x3cu);
    loc_40 = rd32(sp0 - 0x40u);
    loc_44 = rd32(sp0 - 0x44u);
    goto L_10039dd2;
L_10039d55: ;
    COW_AT(10039d55)
    wr32(sp0 - 0x48u, self + 0x40u);
    wr32(sp0 - 0x4cu, 1u);
    wr32(sp0 - 0x50u, 0x15u);
    loc_50 = 0x15u;
L_10039dc0: ;
    COW_AT(10039dc0)
    eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    edx = rd8(self + 0x2au);
L_10039dcd: ;
    COW_AT(10039dcd)
    wr32(sp0 - 0x54u, 0u);
    wr32(sp0 - 0x58u, edx);
    wr32(sp0 - 0x5cu, ebp);
    wr32(sp0 - 0x60u, edi);
    ecx = self + 0x40u;
    loc_58 = edx;
    loc_5c = ebp;
    loc_60 = edi;
    loc_38 = in_ebx;
    loc_3c = in_ebp;
    loc_40 = in_esi;
    loc_44 = in_edi;
    goto L_10039dd2;
L_10039d5f: ;
    COW_AT(10039d5f)
    if ((rd8(self + 0x2cu) & 7u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        edx = rd8(self + 0x2au);
        goto L_10039d87;
    }
    eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    edx = rd8(self + 0x2au);
    COW_AT(10039d73)
    wr32(sp0 - 0x48u, self + 0x44u);
    wr32(sp0 - 0x4cu, 1u);
    wr32(sp0 - 0x50u, 0x15u);
    wr32(sp0 - 0x54u, 0u);
    wr32(sp0 - 0x58u, edx);
    wr32(sp0 - 0x5cu, edi);
    wr32(sp0 - 0x60u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t28 = cow_stdcall(g, COW_IMG(0x102d303fu), 7, eax, edi, edx, 0u, 0x15u, 1u, self + 0x44u);
    t29 = g->edx;
    eax = t28;
    edx = t29;
    COW_AT(10039d85)
    goto L_10039dd8;
L_10039d87: ;
    COW_AT(10039d87)
    wr32(sp0 - 0x48u, self + 0x40u);
    wr32(sp0 - 0x4cu, 1u);
    wr32(sp0 - 0x50u, 0x15u);
    loc_50 = 0x15u;
    goto L_10039dcd;
L_10039d91: ;
    COW_AT(10039d91)
    if ((rd8(self + 0x2cu) & 7u) == 0u) goto L_10039db8;
    COW_AT(10039d97)
    eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    goto L_10039d9f;
L_10039db8: ;
    COW_AT(10039db8)
    wr32(sp0 - 0x48u, self + 0x40u);
    wr32(sp0 - 0x4cu, 1u);
    wr32(sp0 - 0x50u, 0x19u);
    loc_50 = 0x19u;
    goto L_10039dc0;
L_10039df1: ;
    COW_AT(10039df1)
    if (rd8(sp0 - 0x33u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x33u);
    }
    else
    {
    COW_AT(10039df9)
        wr32(sp0 - 0x2cu, 0u);
        if (rd32(self + 0x40u) == 0u)
        {
            eax = rd32(self + 0x40u);
        }
        else
        {
            eax = rd32(self + 0x40u);
    COW_AT(10039e08)
            wr32(sp0 - 0x48u, sp0 - 0x2cu);
            wr32(sp0 - 0x4cu, 0u);
            wr32(sp0 - 0x50u, eax);
            g->edx = sp0 - 0x2cu;
            g->esp = sp0 - 0x44u;
            cow_thiscall(g, rd32(rd32(eax) + 0x3cu), rd32(eax), 3, eax, 0u, sp0 - 0x2cu);
            t37 = g->edx;
            edx = t37;
    COW_AT(10039e15)
            if (rd32(sp0 - 0x2cu) == 0u)
            {
                eax = rd32(sp0 - 0x2cu);
            }
            else
            {
                eax = rd32(sp0 - 0x2cu);
    COW_AT(10039e1d)
                wr32(sp0 - 0x48u, sp0 - 0x20u);
                wr32(sp0 - 0x4cu, eax);
                g->edx = sp0 - 0x20u;
                g->esp = sp0 - 0x44u;
                cow_thiscall(g, rd32(rd32(eax) + 0x20u), rd32(eax), 2, eax, sp0 - 0x20u);
                t38 = g->edx;
                edx = t38;
    COW_AT(10039e28)
                t39 = rd32(sp0 - 0x2cu);
                wr32(sp0 - 0x48u, t39);
                g->eax = t39;
                g->edx = edx;
                g->esp = sp0 - 0x44u;
                t40 = cow_thiscall(g, rd32(rd32(t39) + 8u), rd32(t39), 1, t39);
                t41 = g->edx;
                eax = t40;
                edx = t41;
    COW_AT(10039e32)
                t42 = rd16(sp0 - 4u);
                t43 = rd16(sp0 - 8u);
                wr16(self + 0x24u, (uint16_t)t43);
                wr16(self + 0x26u, (uint16_t)t42);
                eax = (eax & 0xffff0000u) | t42;
                edx = (edx & 0xffff0000u) | t43;
            }
        }
    }
    COW_AT(10039e44)
    g->ebx = rd32(sp0 - 0x38u);
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    g->ebp = rd32(sp0 - 0x3cu);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10039a80(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10039abcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039ac2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039acau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039ad0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039ad8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039adcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039ae4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039ae8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039af0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039afdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039b05u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039b0du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039b15u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039b17u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039b1cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039b22u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039b28u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039b2bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039b32u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039b39u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039b43u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039b57u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039b67u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039b6fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039b78u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039b82u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039b8du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039b95u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039b9du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039ba7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039bc7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039bccu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039bd0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039bddu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039be7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039bf0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x44u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10039bf9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x44u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10039bfeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x44u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10039c03u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039c0au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039c0cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039c17u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039c20u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039c26u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039c45u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039c4au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039c95u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x5cu, sp0 - 0x24u);
        wr32(sp0 - 0x58u, sp0 - 0x30u);
        wr32(sp0 - 0x54u, sp0 - 0x2cu);
        wr32(sp0 - 0x4cu, sp0 - 0x28u);
        wr32(sp0 - 0x28u, 0x33545844u);
        (void)sp0;
        return 1;
    }
    case 0x10039c9du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x5cu, sp0 - 0x24u);
        wr32(sp0 - 0x58u, sp0 - 0x30u);
        wr32(sp0 - 0x54u, sp0 - 0x2cu);
        wr32(sp0 - 0x4cu, sp0 - 0x28u);
        wr32(sp0 - 0x28u, 0x33545844u);
        (void)sp0;
        return 1;
    }
    case 0x10039cc7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039ccdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039cdbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039d26u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x5cu, sp0 - 0x30u);
        wr32(sp0 - 0x58u, sp0 - 0x2cu);
        wr32(sp0 - 0x54u, sp0 - 0x28u);
        wr32(sp0 - 0x4cu, sp0 - 0x24u);
        wr32(sp0 - 0x24u, 0x31545844u);
        (void)sp0;
        return 1;
    }
    case 0x10039d2eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x5cu, sp0 - 0x30u);
        wr32(sp0 - 0x58u, sp0 - 0x2cu);
        wr32(sp0 - 0x54u, sp0 - 0x28u);
        wr32(sp0 - 0x4cu, sp0 - 0x24u);
        wr32(sp0 - 0x24u, 0x31545844u);
        (void)sp0;
        return 1;
    }
    case 0x10039d55u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039d5fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039d73u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039d85u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039d87u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039d91u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039d97u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039d9fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039db6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039db8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039dc0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_50;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x50u;
        g->ecx = self + 0x40u;
        wr32(sp0 - 0x4cu, 1u);
        wr32(sp0 - 0x48u, self + 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10039dcdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_50;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebp = rd32(sp0 - 0x3cu);
        in_ebx = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x50u;
        g->ecx = self + 0x40u;
        wr32(sp0 - 0x4cu, 1u);
        wr32(sp0 - 0x48u, self + 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10039dd2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_50;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x60u;
        wr32(sp0 - 0x54u, 0u);
        wr32(sp0 - 0x4cu, 1u);
        wr32(sp0 - 0x48u, self + 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10039dd8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039ddcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039de3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039de7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_28;
        uint32_t loc_50;
        uint32_t loc_58;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039df1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039df9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039e08u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x2cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10039e15u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x48u, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x10039e1du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x48u, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x10039e28u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x48u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10039e32u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x10039e44u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10039a80(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10039a80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
