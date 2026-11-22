/* f_0x102dd932 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102dd932(Guest* g)
{
    double d59;
    double d60;
    double d61;
    double d62;
    double d63;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t loc_48;
    uint32_t loc_4c;
    uint32_t loc_58;
    uint32_t loc_5c;
    uint32_t loc_60;
    uint32_t loc_8;
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
    uint32_t t6;
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
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 132u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102dd93cu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; loc_14 = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); goto E_102dd93c;
    case 0x102dd98eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_102dd98e;
    case 0x102dd99cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_48 = rd32(sp0 - 0x48u); loc_30 = rd32(sp0 - 0x30u); goto E_102dd99c;
    case 0x102dd9b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_102dd9b3;
    case 0x102dd9c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_102dd9c1;
    case 0x102dd9dau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_102dd9da;
    case 0x102dd9e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_102dd9e8;
    case 0x102dda1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_102dda1f;
    case 0x102dda2bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_58 = rd32(sp0 - 0x58u); goto E_102dda2b;
    case 0x102dda46u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_102dda46;
    case 0x102dda4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_58 = rd32(sp0 - 0x58u); goto E_102dda4e;
    case 0x102dda55u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_58 = rd32(sp0 - 0x58u); loc_18 = rd32(sp0 - 0x18u); loc_8 = rd32(sp0 - 8u); goto E_102dda55;
    case 0x102dda64u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_18 = rd32(sp0 - 0x18u); loc_8 = rd32(sp0 - 8u); goto E_102dda64;
    case 0x102dda77u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_102dda77;
    case 0x102dda82u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); goto E_102dda82;
    case 0x102dda90u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_102dda90;
    case 0x102dda98u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); goto E_102dda98;
    case 0x102dda9fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_20 = rd32(sp0 - 0x20u); loc_8 = rd32(sp0 - 8u); goto E_102dda9f;
    case 0x102ddaaeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_20 = rd32(sp0 - 0x20u); loc_8 = rd32(sp0 - 8u); goto E_102ddaae;
    case 0x102ddabbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_20 = rd32(sp0 - 0x20u); loc_8 = rd32(sp0 - 8u); goto E_102ddabb;
    case 0x102ddac4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_20 = rd32(sp0 - 0x20u); loc_8 = rd32(sp0 - 8u); goto E_102ddac4;
    case 0x102ddad5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_20 = rd32(sp0 - 0x20u); loc_8 = rd32(sp0 - 8u); goto E_102ddad5;
    case 0x102ddad9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_20 = rd32(sp0 - 0x20u); loc_8 = rd32(sp0 - 8u); goto E_102ddad9;
    case 0x102ddae0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_20 = rd32(sp0 - 0x20u); loc_8 = rd32(sp0 - 8u); goto E_102ddae0;
    case 0x102ddaefu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_58 = rd32(sp0 - 0x58u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); goto E_102ddaef;
    case 0x102ddb07u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_58 = rd32(sp0 - 0x58u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); goto E_102ddb07;
    case 0x102ddb1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_58 = rd32(sp0 - 0x58u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); goto E_102ddb1e;
    case 0x102ddb25u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_58 = rd32(sp0 - 0x58u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); goto E_102ddb25;
    case 0x102ddb34u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_58 = rd32(sp0 - 0x58u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); goto E_102ddb34;
    case 0x102ddb4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ddb4f;
    case 0x102ddb5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); goto E_102ddb5e;
    case 0x102ddb6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ddb6c;
    case 0x102ddb71u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); goto E_102ddb71;
    case 0x102ddb73u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_8 = rd32(sp0 - 8u); goto E_102ddb73;
    case 0x102ddb81u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ddb81;
    case 0x102ddb84u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_102ddb84;
    case 0x102ddba9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_58 = rd32(sp0 - 0x58u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); goto E_102ddba9;
    case 0x102ddbb6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_58 = rd32(sp0 - 0x58u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); goto E_102ddbb6;
    case 0x102ddbccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_58 = rd32(sp0 - 0x58u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); goto E_102ddbcc;
    case 0x102ddbe6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ddbe6;
    case 0x102ddbf8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_102ddbf8;
    case 0x102ddbfeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_14 = rd32(sp0 - 0x14u); goto E_102ddbfe;
    case 0x102ddc10u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_14 = rd32(sp0 - 0x14u); goto E_102ddc10;
    case 0x102ddc1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_14 = rd32(sp0 - 0x14u); goto E_102ddc1e;
    case 0x102ddc40u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_14 = rd32(sp0 - 0x14u); goto E_102ddc40;
    case 0x102ddc92u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_14 = rd32(sp0 - 0x14u); goto E_102ddc92;
    case 0x102ddc97u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_14 = rd32(sp0 - 0x14u); goto E_102ddc97;
    case 0x102ddca6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_14 = rd32(sp0 - 0x14u); goto E_102ddca6;
    case 0x102ddcacu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_14 = rd32(sp0 - 0x14u); goto E_102ddcac;
    case 0x102ddcafu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_14 = rd32(sp0 - 0x14u); goto E_102ddcaf;
    case 0x102ddcbbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_14 = rd32(sp0 - 0x14u); goto E_102ddcbb;
    case 0x102ddccau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_14 = rd32(sp0 - 0x14u); goto E_102ddcca;
    case 0x102ddcd9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_14 = rd32(sp0 - 0x14u); goto E_102ddcd9;
    case 0x102ddcdcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_58 = rd32(sp0 - 0x58u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); goto E_102ddcdc;
    case 0x102ddce1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_58 = rd32(sp0 - 0x58u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); goto E_102ddce1;
    case 0x102ddcf1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ddcf1;
    case 0x102ddd01u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102ddd01;
    case 0x102ddd1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_102ddd1b;
    case 0x102ddd2cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102ddd2c;
    case 0x102ddd2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102ddd2f;
    case 0x102ddd38u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_102ddd38;
    case 0x102ddd3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_58 = rd32(sp0 - 0x58u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); goto E_102ddd3b;
    case 0x102ddd3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_58 = rd32(sp0 - 0x58u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); goto E_102ddd3f;
    case 0x102ddd4du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_58 = rd32(sp0 - 0x58u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); goto E_102ddd4d;
    case 0x102ddd51u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_8 = rd32(sp0 - 8u); goto E_102ddd51;
    case 0x102ddd58u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_48 = rd32(sp0 - 0x48u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); goto E_102ddd58;
    case 0x102ddd5du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); goto E_102ddd5d;
    case 0x102ddd64u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); goto E_102ddd64;
    case 0x102ddd6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); goto E_102ddd6b;
    case 0x102ddd73u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102ddd73;
    case 0x102ddd7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102ddd7b;
    case 0x102ddd83u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102ddd83;
    case 0x102ddd8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102ddd8b;
    case 0x102ddd92u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102ddd92;
    default: break;
    }
#endif

    COW_AT(102dd932)
    wr32(sp0 - 8u, 0xffffffffu);
    wr32(sp0 - 0xcu, COW_IMG(0x103281a3u));
    wr32(sp0 - 0x10u, rd32(g->fs_base));
    wr32(g->fs_base, sp0 - 0x10u);
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x14u, COW_IMG(0x102dd93cu));
    COW_AT(102dd93c)
    wr32(sp0 - 0x64u, in_ebx);
    wr32(sp0 - 0x68u, in_esi);
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x5cu, 0u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x60u, 0u);
    wr32(sp0 - 0x6cu, in_edi);
    t1 = rd32(self + 8u);
    t2 = ~(t1 >> 0x12u) & 1u;
    wr32(sp0 - 0x58u, t2);
    t3 = ~(t1 >> 0x10u) & 1u;
    wr32(sp0 - 0x70u, t3);
    t4 = rd32(rd32(self + 4u) + 0x1058u);
    wr32(sp0 - 0x74u, t4);
    t5 = rd32(rd32(self) + 0x1058u);
    wr32(sp0 - 0x78u, t5);
    g->eax = rd32(self);
    g->ecx = t3;
    g->edx = in_edx;
    t6 = rd32(self);
    g->esp = sp0 - 0x6cu;
    t7 = cow_cdecl(g, COW_IMG(0x102dd629u), 3, t5, t4, t3);
    t8 = g->ecx;
    t9 = g->edx;
    eax = t7;
    ecx = t8;
    edx = t9;
    edi = ~(t1 >> 0x11u) & 1u;
    COW_AT(102dd98e)
    wr32(sp0 - 0x48u, eax);
    if (eax == 0u)
    {
        loc_30 = 0u;
        loc_2c = 0u;
        loc_5c = 0u;
        loc_60 = 0u;
        loc_48 = eax;
        goto L_102ddd58;
    }
    loc_48 = eax;
    COW_AT(102dd99c)
    wr32(sp0 - 0x70u, edi);
    t10 = rd32(rd32(self + 4u) + 0x105cu);
    wr32(sp0 - 0x74u, t10);
    t11 = rd32(rd32(self) + 0x105cu);
    wr32(sp0 - 0x78u, t11);
    g->eax = rd32(self);
    g->ecx = ecx;
    g->edx = edx;
    t12 = rd32(self);
    g->esp = sp0 - 0x6cu;
    t13 = cow_cdecl(g, COW_IMG(0x102dd629u), 3, t11, t10, edi);
    t14 = g->ecx;
    t15 = g->edx;
    eax = t13;
    ecx = t14;
    edx = t15;
    COW_AT(102dd9b3)
    wr32(sp0 - 0x30u, eax);
    if (eax == 0u)
    {
        loc_30 = eax;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_60 = rd32(sp0 - 0x60u);
        loc_48 = rd32(sp0 - 0x48u);
        goto L_102ddd58;
    }
    loc_30 = eax;
    COW_AT(102dd9c1)
    t16 = rd32(sp0 - 0x58u);
    wr32(sp0 - 0x70u, t16);
    t17 = rd32(rd32(self + 4u) + 0x1060u);
    wr32(sp0 - 0x74u, t17);
    t18 = rd32(rd32(self) + 0x1060u);
    wr32(sp0 - 0x78u, t18);
    g->eax = rd32(self);
    g->edx = edx;
    t19 = rd32(self);
    g->esp = sp0 - 0x6cu;
    t20 = cow_cdecl(g, COW_IMG(0x102dd629u), 3, t18, t17, t16);
    t21 = g->edx;
    eax = t20;
    edx = t21;
    COW_AT(102dd9da)
    wr32(sp0 - 0x2cu, eax);
    if (eax == 0u)
    {
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = eax;
        loc_5c = rd32(sp0 - 0x5cu);
        loc_60 = rd32(sp0 - 0x60u);
        loc_48 = rd32(sp0 - 0x48u);
        goto L_102ddd58;
    }
    loc_2c = eax;
    COW_AT(102dd9e8)
    t22 = rd32(sp0 - 0x48u) + rd32(rd32(sp0 - 0x48u));
    wr32(sp0 - 0x50u, t22);
    t23 = rd32(sp0 - 0x30u) + rd32(rd32(sp0 - 0x30u));
    wr32(sp0 - 0x54u, t23);
    t24 = loc_2c + rd32(loc_2c);
    wr32(sp0 - 0x28u, t24);
    t25 = rd32(rd32(self + 4u) + 0x1060u) * 0xcu + 4u;
    wr32(sp0 - 0x70u, t25);
    g->eax = t25;
    t26 = rd32(rd32(self + 4u) + 0x1060u);
    g->esp = sp0 - 0x64u;
    t27 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, loc_2c, edx, 1, 3, t25, rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u));
    t28 = g->edx;
    eax = t27;
    edx = t28;
    edi = t26;
    COW_AT(102dda1f)
    wr32(sp0 - 0x58u, eax);
    t29 = rd32(sp0 - 8u);
    wr32(sp0 - 8u, 0u);
    if (eax == 0u)
    {
        ecx = rd32(sp0 - 0x70u);
    COW_AT(102dda4e)
        t33 = rd32(sp0 - 0x18u);
        wr32(sp0 - 0x18u, 0u);
        eax = 0u;
        loc_18 = 0u;
        loc_8 = 0u;
    }
    else
    {
        ecx = rd32(sp0 - 0x70u);
    COW_AT(102dda2b)
        wr32(sp0 - 0x70u, COW_IMG(0x102dd620u));
        wr32(sp0 - 0x74u, COW_IMG(0x102dd613u));
        wr32(sp0 - 0x78u, edi);
        wr32(eax, edi);
        wr32(sp0 - 0x7cu, 0xcu);
        wr32(sp0 - 0x80u, eax + 4u);
        wr32(sp0 - 0x5cu, eax + 4u);
        g->esp = sp0 - 0x6cu;
        cow_fastcall(g, COW_IMG(0x10317843u), ecx, edx, 5, eax + 4u, 0xcu, rd32(sp0 - 0x78u), rd32(sp0 - 0x74u), rd32(sp0 - 0x70u));
        t30 = g->ecx;
        t31 = g->edx;
        ecx = t30;
        edx = t31;
    COW_AT(102dda46)
        t32 = rd32(sp0 - 0x5cu);
        wr32(sp0 - 0x18u, t32);
        eax = t32;
        loc_18 = t32;
        loc_8 = rd32(sp0 - 8u);
    }
    COW_AT(102dda55)
    wr32(sp0 - 8u, 0xffffffffu);
    wr32(sp0 - 0x5cu, eax);
    if (eax == 0u)
    {
        ebx = 1u;
        loc_5c = eax;
        loc_60 = rd32(sp0 - 0x60u);
        goto L_102ddd51;
    }
    loc_5c = eax;
    COW_AT(102dda64)
    t34 = rd32(rd32(self) + 0x1058u);
    wr32(sp0 - 0x70u, t34 << 4u);
    g->eax = t34 << 4u;
    g->esp = sp0 - 0x64u;
    t35 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, t34 << 4u, rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u));
    t36 = g->edx;
    eax = t35;
    edx = t36;
    edi = t34;
    COW_AT(102dda77)
    wr32(sp0 - 0x60u, eax);
    wr32(sp0 - 8u, 1u);
    if (eax == 0u)
    {
    COW_AT(102dda98)
        t39 = rd32(sp0 - 0x20u);
        wr32(sp0 - 0x20u, 0u);
        eax = 0u;
        loc_20 = 0u;
        loc_8 = 1u;
    }
    else
    {
        ecx = rd32(sp0 - 0x70u);
        loc_60 = eax;
    COW_AT(102dda82)
        wr32(sp0 - 0x70u, COW_IMG(0x102d2a17u));
        wr32(sp0 - 0x74u, edi);
        wr32(sp0 - 0x78u, 0x10u);
        wr32(sp0 - 0x7cu, eax);
        g->esp = sp0 - 0x6cu;
        cow_call_regs(g, COW_IMG(0x102d31edu), g->eax, g->ecx, edx, 0, 4, eax, 0x10u, edi, COW_IMG(0x102d2a17u));
        t37 = g->edx;
        edx = t37;
    COW_AT(102dda90)
        t38 = rd32(sp0 - 0x60u);
        wr32(sp0 - 0x20u, t38);
        eax = t38;
        loc_20 = t38;
        loc_8 = rd32(sp0 - 8u);
    }
    COW_AT(102dda9f)
    wr32(sp0 - 8u, 0xffffffffu);
    wr32(sp0 - 0x60u, eax);
    if (eax == 0u)
    {
        ebx = 1u;
        loc_5c = rd32(sp0 - 0x5cu);
        loc_60 = eax;
        goto L_102ddd51;
    }
    loc_60 = eax;
    COW_AT(102ddaae)
    t40 = rd32(sp0 - 0x2cu) + 4u;
    if (t40 >= rd32(sp0 - 0x28u))
    {
        ebx = 1u;
        edi = t40;
        goto L_102ddae0;
    }
    ecx = t40;
    ebx = 1u;
    edi = t40;
L_102ddabb: ;
    COW_AT(102ddabb)
    edx = ecx + rd32(ecx);
    ecx = ecx + 4u;
L_102ddad5: ;
    COW_AT(102ddad5)
    if (ecx < edx) goto L_102ddac4;
    COW_AT(102ddad9)
    if (edx < rd32(sp0 - 0x28u))
    {
        ecx = edx;
        goto L_102ddabb;
    }
L_102ddae0: ;
    COW_AT(102ddae0)
    t43 = rd32(sp0 - 0x44u);
    wr32(sp0 - 0x44u, 0u);
    if (edi >= rd32(sp0 - 0x28u))
    {
        eax = edi;
        goto L_102ddd4d;
    }
    eax = edi;
    loc_44 = 0u;
    loc_3c = rd32(sp0 - 0x3cu);
    loc_24 = rd32(sp0 - 0x24u);
L_102ddaef: ;
    COW_AT(102ddaef)
    t44 = eax + rd32(eax);
    wr32(sp0 - 0x1cu, t44);
    wr32(sp0 - 0x58u, eax + 4u);
    wr32(sp0 - 0x14u, eax + 4u);
    if (eax + 4u >= eax + rd32(eax))
    {
        edx = t44;
        loc_1c = t44;
        loc_58 = eax + 4u;
        loc_14 = eax + 4u;
        goto L_102ddbb6;
    }
    edx = t44;
    loc_1c = t44;
    loc_58 = eax + 4u;
    loc_14 = eax + 4u;
L_102ddb07: ;
    COW_AT(102ddb07)
    t45 = rd32(rd32(loc_14) * 0xcu + rd32(sp0 - 0x18u));
    if (t45 != 0u) goto L_102ddba9;
    ecx = rd32(sp0 - 0x18u);
    ebx = rd32(loc_14) * 0xcu + rd32(sp0 - 0x18u);
    COW_AT(102ddb1e)
    if (loc_24 == 0u) goto L_102ddb34;
    eax = loc_24;
    COW_AT(102ddb25)
    wr32(ebx, rd32(eax));
    t46 = rd32(eax);
    wr32(eax, 0u);
    t47 = rd32(eax + 4u);
    wr32(sp0 - 0x24u, t47);
    loc_24 = t47;
L_102ddb84: ;
    COW_AT(102ddb84)
    t52 = rd32(rd32(self + 4u) + 0x105cu) * rd32(rd32(self + 4u) + 0x1058u) * 0x10u;
    t53 = rd32(ebx);
    edi = t53;
    eax = 0u;
    ecx = t52 >> 2u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t52 & 3u;
    while (ecx) { wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    loc_20 = rd32(sp0 - 0x20u);
    loc_60 = rd32(sp0 - 0x60u);
    loc_44 = rd32(sp0 - 0x44u);
    loc_1c = rd32(sp0 - 0x1cu);
    loc_58 = rd32(sp0 - 0x58u);
    loc_14 = rd32(sp0 - 0x14u);
    loc_3c = rd32(sp0 - 0x3cu);
    loc_24 = rd32(sp0 - 0x24u);
L_102ddba9: ;
    COW_AT(102ddba9)
    wr32(sp0 - 0x14u, loc_14 + 8u);
    if (loc_14 + 8u < edx)
    {
        loc_14 = loc_14 + 8u;
        goto L_102ddb07;
    }
    loc_14 = loc_14 + 8u;
L_102ddbb6: ;
    COW_AT(102ddbb6)
    wr32(sp0 - 0x3cu, 0u);
    t54 = rd32(sp0 - 0x30u) + 4u;
    wr32(sp0 - 0x40u, t54);
    if (rd32(sp0 - 0x30u) + 4u >= rd32(sp0 - 0x54u))
    {
        loc_3c = 0u;
        goto L_102ddcdc;
    }
    loc_3c = 0u;
    loc_40 = t54;
L_102ddbcc: ;
    COW_AT(102ddbcc)
    wr32(sp0 - 0x70u, loc_20);
    wr32(sp0 - 0x74u, loc_44);
    wr32(sp0 - 0x78u, loc_3c);
    t55 = loc_40 + rd32(loc_40);
    wr32(sp0 - 0x4cu, t55);
    g->edx = edx;
    g->esp = sp0 - 0x6cu;
    cow_thiscall(g, rd32(rd32(rd32(self)) + 4u), rd32(self), 3, loc_3c, loc_44, loc_20);
    t56 = g->edx;
    edx = t56;
    edi = t55;
    COW_AT(102ddbe6)
    t57 = rd32(sp0 - 0x48u) + 4u;
    wr32(sp0 - 0x38u, t57);
    if (rd32(sp0 - 0x48u) + 4u >= rd32(sp0 - 0x50u))
    {
        loc_14 = rd32(sp0 - 0x14u);
    }
    else
    {
        loc_38 = t57;
    COW_AT(102ddbf8)
        edx = rd32(sp0 - 0x20u) + 8u;
L_102ddbfe: ;
    COW_AT(102ddbfe)
        t58 = loc_38 + rd32(loc_38);
        wr32(sp0 - 0x34u, t58);
        eax = t58;
        ecx = rd32(sp0 - 0x58u);
        loc_34 = t58;
L_102ddcaf: ;
    COW_AT(102ddcaf)
        wr32(sp0 - 0x14u, ecx);
        if (ecx < rd32(sp0 - 0x1cu))
        {
            loc_14 = ecx;
            goto L_102ddc10;
        }
        loc_14 = ecx;
    COW_AT(102ddcbb)
        wr32(sp0 - 0x38u, eax);
        if (eax < rd32(sp0 - 0x50u))
        {
            edx = edx + 0x10u;
            loc_38 = eax;
            goto L_102ddbfe;
        }
        edx = edx + 0x10u;
    }
    COW_AT(102ddcca)
    t64 = rd32(sp0 - 0x3cu);
    wr32(sp0 - 0x3cu, t64 + 1u);
    wr32(sp0 - 0x40u, edi);
    if (edi < rd32(sp0 - 0x54u))
    {
        loc_20 = rd32(sp0 - 0x20u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_3c = t64 + 1u;
        loc_40 = edi;
        loc_24 = rd32(sp0 - 0x24u);
        goto L_102ddbcc;
    }
    loc_3c = t64 + 1u;
    COW_AT(102ddcd9)
    edx = rd32(sp0 - 0x1cu);
    loc_20 = rd32(sp0 - 0x20u);
    loc_60 = rd32(sp0 - 0x60u);
    loc_44 = rd32(sp0 - 0x44u);
    loc_1c = rd32(sp0 - 0x1cu);
    loc_58 = rd32(sp0 - 0x58u);
    loc_24 = rd32(sp0 - 0x24u);
L_102ddcdc: ;
    COW_AT(102ddcdc)
    ebx = loc_58;
L_102ddd3b: ;
    COW_AT(102ddd3b)
    if (ebx < edx) goto L_102ddce1;
    COW_AT(102ddd3f)
    wr32(sp0 - 0x44u, loc_44 + 1u);
    if (edx < rd32(sp0 - 0x28u))
    {
        eax = edx;
        loc_44 = loc_44 + 1u;
        goto L_102ddaef;
    }
    eax = edx;
L_102ddd4d: ;
    COW_AT(102ddd4d)
    esi = 0u;
    loc_5c = rd32(sp0 - 0x5cu);
    loc_30 = rd32(sp0 - 0x30u);
    loc_2c = rd32(sp0 - 0x2cu);
    loc_48 = rd32(sp0 - 0x48u);
L_102ddd5d: ;
    COW_AT(102ddd5d)
    if (loc_5c == 0u)
    {
        ecx = loc_5c;
    }
    else
    {
        ecx = loc_5c;
    COW_AT(102ddd64)
        wr32(sp0 - 0x70u, 3u);
        g->ebx = ebx;
        g->eax = eax;
        g->esp = sp0 - 0x6cu;
        t73 = cow_fastcall(g, COW_IMG(0x102dd8e6u), ecx, edx, 1, 3u);
        t74 = g->ecx;
        t75 = g->edx;
        eax = t73;
        ecx = t74;
        edx = t75;
        loc_60 = rd32(sp0 - 0x60u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_48 = rd32(sp0 - 0x48u);
    }
    COW_AT(102ddd6b)
    wr32(sp0 - 0x70u, loc_2c);
    g->eax = eax;
    g->esp = sp0 - 0x6cu;
    t76 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, loc_2c);
    t77 = g->ecx;
    t78 = g->edx;
    eax = t76;
    ecx = t77;
    edx = t78;
    COW_AT(102ddd73)
    t79 = rd32(sp0 - 0x30u);
    wr32(sp0 - 0x74u, t79);
    g->eax = eax;
    g->esp = sp0 - 0x70u;
    t80 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, t79);
    t81 = g->ecx;
    t82 = g->edx;
    eax = t80;
    ecx = t81;
    edx = t82;
    COW_AT(102ddd7b)
    t83 = rd32(sp0 - 0x48u);
    wr32(sp0 - 0x78u, t83);
    g->eax = eax;
    g->esp = sp0 - 0x74u;
    t84 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, t83);
    t85 = g->ecx;
    t86 = g->edx;
    eax = t84;
    ecx = t85;
    edx = t86;
    COW_AT(102ddd83)
    t87 = rd32(sp0 - 0x60u);
    wr32(sp0 - 0x7cu, t87);
    g->eax = eax;
    g->esp = sp0 - 0x78u;
    t88 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, t87);
    t89 = g->ecx;
    t90 = g->edx;
    eax = t88;
    ecx = t89;
    edx = t90;
    COW_AT(102ddd8b)
    wr32(sp0 - 0x80u, 0u);
    g->esp = sp0 - 0x7cu;
    cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, 0u);
    t91 = g->edx;
    edx = t91;
    COW_AT(102ddd92)
    t92 = rd32(sp0 - 0x10u);
    t93 = rd32(sp0 - 0x64u);
    t94 = rd32(sp0 - 0x68u);
    t95 = rd32(sp0 - 0x6cu);
    wr32(g->fs_base, t92);
    g->ebx = t93;
    g->esi = t94;
    g->edi = t95;
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return esi;
L_102ddac4: ;
    COW_AT(102ddac4)
    t41 = rd32(rd32(ecx) * 0xcu + rd32(sp0 - 0x18u) + 8u);
    t42 = rd32(sp0 - 0x18u);
    wr32(rd32(ecx) * 0xcu + t42 + 8u, t41 + 1u);
    ecx = ecx + 8u;
    ebx = t42;
    loc_20 = rd32(sp0 - 0x20u);
    loc_60 = rd32(sp0 - 0x60u);
    goto L_102ddad5;
L_102ddb34: ;
    COW_AT(102ddb34)
    t48 = rd32(rd32(self + 4u) + 0x105cu) * rd32(rd32(self + 4u) + 0x1058u);
    wr32(sp0 - 0x70u, t48 << 4u);
    g->eax = t48 << 4u;
    g->esp = sp0 - 0x64u;
    t49 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, t48 << 4u, rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u));
    t50 = g->edx;
    eax = t49;
    edx = t50;
    edi = t48;
    COW_AT(102ddb4f)
    wr32(sp0 - 0x4cu, eax);
    wr32(sp0 - 8u, 2u);
    if (eax == 0u)
    {
    COW_AT(102ddb71)
        eax = 0u;
        loc_8 = 2u;
    }
    else
    {
        ecx = rd32(sp0 - 0x70u);
        loc_4c = eax;
    COW_AT(102ddb5e)
        wr32(sp0 - 0x70u, COW_IMG(0x102d2a17u));
        wr32(sp0 - 0x74u, edi);
        wr32(sp0 - 0x78u, 0x10u);
        wr32(sp0 - 0x7cu, eax);
        g->esp = sp0 - 0x6cu;
        cow_call_regs(g, COW_IMG(0x102d31edu), g->eax, g->ecx, edx, 0, 4, eax, 0x10u, edi, COW_IMG(0x102d2a17u));
        t51 = g->edx;
        edx = t51;
    COW_AT(102ddb6c)
        eax = rd32(sp0 - 0x4cu);
        loc_8 = rd32(sp0 - 8u);
    }
    COW_AT(102ddb73)
    wr32(sp0 - 8u, 0xffffffffu);
    wr32(ebx, eax);
    if (eax == 0u)
    {
        loc_5c = rd32(sp0 - 0x5cu);
        loc_60 = rd32(sp0 - 0x60u);
        goto L_102ddd51;
    }
    COW_AT(102ddb81)
    edx = rd32(sp0 - 0x1cu);
    loc_24 = rd32(sp0 - 0x24u);
    goto L_102ddb84;
L_102ddc10: ;
    COW_AT(102ddc10)
    if (rd32(sp0 - 0x40u) + 4u >= edi) goto L_102ddcac;
    ebx = rd32(sp0 - 0x40u) + 4u;
L_102ddc1e: ;
    COW_AT(102ddc1e)
    eax = rd32(rd32(self + 4u) + 0x1058u) * rd32(ebx) * 0x10u + rd32(rd32(ecx) * 0xcu + rd32(sp0 - 0x18u));
    ecx = loc_38 + 4u;
L_102ddc92: ;
    COW_AT(102ddc92)
    if (ecx < loc_34) goto L_102ddc40;
    COW_AT(102ddc97)
    if (ebx + 8u < rd32(sp0 - 0x4cu))
    {
        ecx = loc_14;
        ebx = ebx + 8u;
        goto L_102ddc1e;
    }
    ecx = loc_14;
    COW_AT(102ddca6)
    eax = loc_34;
    edi = rd32(sp0 - 0x4cu);
L_102ddcac: ;
    COW_AT(102ddcac)
    ecx = ecx + 8u;
    goto L_102ddcaf;
L_102ddc40: ;
    COW_AT(102ddc40)
    d59 = fr(g, fr(g, (double)rdf32(ecx + 4u) * (double)rdf32(ebx + 4u)) * (double)rdf32(loc_14 + 4u));
    d60 = fr(g, fr(g, d59 * (double)rdf32(edx - 8u)) + (double)rdf32(eax + rd32(ecx) * 0x10u));
    wrf32(eax + rd32(ecx) * 0x10u, (float)d60);
    d61 = fr(g, fr(g, d59 * (double)rdf32(edx - 4u)) + (double)rdf32(eax + rd32(ecx) * 0x10u + 4u));
    wrf32(eax + rd32(ecx) * 0x10u + 4u, (float)d61);
    d62 = fr(g, fr(g, d59 * (double)rdf32(edx)) + (double)rdf32(eax + rd32(ecx) * 0x10u + 8u));
    wrf32(eax + rd32(ecx) * 0x10u + 8u, (float)d62);
    d63 = fr(g, fr(g, d59 * (double)rdf32(edx + 4u)) + (double)rdf32(eax + rd32(ecx) * 0x10u + 0xcu));
    wrf32(eax + rd32(ecx) * 0x10u + 0xcu, (float)d63);
    ecx = ecx + 8u;
    loc_38 = rd32(sp0 - 0x38u);
    loc_34 = rd32(sp0 - 0x34u);
    loc_14 = rd32(sp0 - 0x14u);
    goto L_102ddc92;
L_102ddce1: ;
    COW_AT(102ddce1)
    t65 = rd32(rd32(ebx) * 0xcu + rd32(sp0 - 0x18u) + 8u);
    t66 = rd32(ebx);
    t67 = rd32(sp0 - 0x18u);
    wr32(t66 * 0xcu + t67 + 8u, t65 - 1u);
    if (t65 != 1u)
    {
        loc_24 = rd32(sp0 - 0x24u);
    }
    else
    {
        edi = t66 * 0xcu + t67;
    COW_AT(102ddcf1)
        t68 = rd32(sp0 - 0x14u);
        wr32(sp0 - 0x14u, 0u);
        t69 = rd32(rd32(self + 4u) + 0x105cu);
        if (t69 == 0u)
        {
            loc_14 = 0u;
            goto L_102ddd2f;
        }
        ecx = rd32(self + 4u);
        loc_14 = 0u;
L_102ddd01: ;
    COW_AT(102ddd01)
        t70 = rd32(edi) + rd32(ecx + 0x1058u) * loc_14 * 0x10u;
        wr32(sp0 - 0x70u, t70);
        wr32(sp0 - 0x74u, rd32(ebx));
        wr32(sp0 - 0x78u, loc_14);
        g->esp = sp0 - 0x6cu;
        cow_thiscall(g, rd32(rd32(ecx) + 8u), ecx, 3, loc_14, rd32(ebx), t70);
    COW_AT(102ddd1b)
        t71 = rd32(sp0 - 0x14u);
        wr32(sp0 - 0x14u, t71 + 1u);
        if (t71 + 1u < rd32(rd32(self + 4u) + 0x105cu))
        {
            ecx = rd32(self + 4u);
            loc_14 = t71 + 1u;
            goto L_102ddd01;
        }
        loc_14 = t71 + 1u;
    COW_AT(102ddd2c)
        edx = rd32(sp0 - 0x1cu);
L_102ddd2f: ;
    COW_AT(102ddd2f)
        t72 = rd32(sp0 - 0x24u);
        wr32(edi + 4u, t72);
        wr32(sp0 - 0x24u, edi);
        loc_24 = edi;
    }
    COW_AT(102ddd38)
    ebx = ebx + 8u;
    loc_20 = rd32(sp0 - 0x20u);
    loc_60 = rd32(sp0 - 0x60u);
    loc_44 = rd32(sp0 - 0x44u);
    loc_1c = rd32(sp0 - 0x1cu);
    loc_14 = rd32(sp0 - 0x14u);
    loc_3c = rd32(sp0 - 0x3cu);
    goto L_102ddd3b;
L_102ddd51: ;
    COW_AT(102ddd51)
    esi = 0x8007000eu;
    loc_30 = rd32(sp0 - 0x30u);
    loc_2c = rd32(sp0 - 0x2cu);
    loc_48 = rd32(sp0 - 0x48u);
    goto L_102ddd5d;
L_102ddd58: ;
    COW_AT(102ddd58)
    ebx = 1u;
    esi = 0x80004005u;
    goto L_102ddd5d;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102dd932(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102dd93cu:
    {
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dd98eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x78u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x60u, 0u);
        wr32(sp0 - 0x5cu, 0u);
        wr32(sp0 - 0x30u, 0u);
        wr32(sp0 - 0x2cu, 0u);
        wr32(sp0 - 0x24u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102dd99cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x6cu;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x60u, 0u);
        wr32(sp0 - 0x5cu, 0u);
        wr32(sp0 - 0x2cu, 0u);
        wr32(sp0 - 0x24u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102dd9b3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x78u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dd9c1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x6cu;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dd9dau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x78u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dd9e8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x6cu;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dda1fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x70u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dda2bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_58;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_58 = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x6cu;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102dda46u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x6cu;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dda4eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_58;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_58 = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x6cu;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102dda55u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_18;
        uint32_t loc_58;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_58 = rd32(sp0 - 0x58u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x6cu;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dda64u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_18;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x6cu;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dda77u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x70u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dda82u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        g->esp = sp0 - 0x6cu;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x102dda90u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x6cu;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dda98u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        g->esp = sp0 - 0x6cu;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x102dda9fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        uint32_t loc_60;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x6cu;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ddaaeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        uint32_t loc_60;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x6cu;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ddabbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        uint32_t loc_60;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x6cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ddac4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        uint32_t loc_60;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x6cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ddad5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        uint32_t loc_60;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x6cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ddad9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        uint32_t loc_60;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x6cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ddae0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        uint32_t loc_60;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x6cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ddaefu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_58;
        uint32_t loc_60;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x6cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ddb07u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_58;
        uint32_t loc_60;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x6cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ddb1eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_58;
        uint32_t loc_60;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x6cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ddb25u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_58;
        uint32_t loc_60;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x6cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ddb34u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_58;
        uint32_t loc_60;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x6cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ddb4fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x70u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ddb5eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        g->esp = sp0 - 0x6cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 2u);
        (void)sp0;
        return 1;
    }
    case 0x102ddb6cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x6cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ddb71u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        g->esp = sp0 - 0x6cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 2u);
        (void)sp0;
        return 1;
    }
    case 0x102ddb73u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_4c;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x6cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ddb81u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x6cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ddb84u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x6cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ddba9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_58;
        uint32_t loc_60;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x6cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ddbb6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_58;
        uint32_t loc_60;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x6cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ddbccu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_58;
        uint32_t loc_60;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x6cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ddbe6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x6cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ddbf8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x6cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ddbfeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x6cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ddc10u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x6cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ddc1eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x6cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ddc40u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x6cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ddc92u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x6cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ddc97u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x6cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ddca6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x6cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ddcacu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x6cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ddcafu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x6cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ddcbbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x6cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ddccau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x6cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ddcd9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x6cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ddcdcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_58;
        uint32_t loc_60;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x6cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ddce1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_58;
        uint32_t loc_60;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x6cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ddcf1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x6cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ddd01u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x6cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ddd1bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x6cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ddd2cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x6cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ddd2fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x6cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ddd38u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x6cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ddd3bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_58;
        uint32_t loc_60;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x6cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ddd3fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_58;
        uint32_t loc_60;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x6cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ddd4du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_58;
        uint32_t loc_60;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x6cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ddd51u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x6cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ddd58u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_48;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x6cu;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ddd5du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x6cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ddd64u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x6cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ddd6bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x6cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ddd73u:
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
        g->esp = sp0 - 0x70u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ddd7bu:
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
        g->esp = sp0 - 0x74u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ddd83u:
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
        g->esp = sp0 - 0x78u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ddd8bu:
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
        g->esp = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102ddd92u:
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
        g->esp = sp0 - 0x80u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102dd932(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102dd932(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
