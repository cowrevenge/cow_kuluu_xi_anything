/* f_0x1003ba20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
uint32_t cow_fn_1003ba20(Guest* g)
{
    double d35;
    double d36;
    double d37;
    double d38;
    double d39;
    double d40;
    double d44;
    double d45;
    double d50;
    double d52;
    double d54;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
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
    uint32_t t4;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t51;
    uint32_t t53;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    double x1;
    double x2;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 108u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1003ba32u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x58u); in_esi = rd32(sp0 - 0x54u); in_ebx = rd32(sp0 - 0x50u); g->ebx = rd32(sp0 - 0x50u); g->edi = rd32(sp0 - 0x58u); g->esi = rd32(sp0 - 0x54u); goto E_1003ba32;
    case 0x1003ba5du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1003ba5d;
    case 0x1003ba6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1003ba6b;
    case 0x1003ba7du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1003ba7d;
    case 0x1003ba99u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x58u); in_esi = rd32(sp0 - 0x54u); in_ebx = rd32(sp0 - 0x50u); g->ebx = rd32(sp0 - 0x50u); g->edi = rd32(sp0 - 0x58u); g->esi = rd32(sp0 - 0x54u); goto E_1003ba99;
    case 0x1003bab1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_1003bab1;
    case 0x1003bac9u: edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_1003bac9;
    case 0x1003bad0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_1003bad0;
    case 0x1003bad8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_1003bad8;
    case 0x1003baefu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_1003baef;
    case 0x1003baf7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_1003baf7;
    case 0x1003bb0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_1003bb0e;
    case 0x1003bb16u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_1003bb16;
    case 0x1003bb27u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1003bb27;
    case 0x1003bb75u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1003bb75;
    case 0x1003bb7du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1003bb7d;
    case 0x1003bb8eu: edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_1003bb8e;
    case 0x1003bb93u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1003bb93;
    case 0x1003bb9fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1003bb9f;
    case 0x1003bbabu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1003bbab;
    case 0x1003bbb7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1003bbb7;
    case 0x1003bbc0u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_1003bbc0;
    case 0x1003bbccu: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_1003bbcc;
    case 0x1003bbd6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; goto E_1003bbd6;
    case 0x1003bbe6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; goto E_1003bbe6;
    case 0x1003bbf7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; goto E_1003bbf7;
    case 0x1003bc08u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1003bc08;
    case 0x1003bc0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1003bc0f;
    case 0x1003bc1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1003bc1c;
    case 0x1003bc2cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1003bc2c;
    case 0x1003bc87u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1003bc87;
    case 0x1003bc92u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1003bc92;
    case 0x1003bcb0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1003bcb0;
    case 0x1003bcb2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1003bcb2;
    case 0x1003bcbcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1003bcbc;
    case 0x1003bccau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_1003bcca;
    case 0x1003bcd1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_1003bcd1;
    case 0x1003bcd8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_1003bcd8;
    case 0x1003bcdfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_1003bcdf;
    case 0x1003bce6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_1003bce6;
    case 0x1003bcedu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_1003bced;
    case 0x1003bcf4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_1003bcf4;
    case 0x1003bcf9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_1003bcf9;
    case 0x1003bcfdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_1003bcfd;
    case 0x1003bd11u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_1003bd11;
    case 0x1003bd21u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1003bd21;
    case 0x1003bd39u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_1003bd39;
    default: break;
    }
#endif

    COW_AT(1003ba20)
    wr32(sp0 - 0x50u, in_ebx);
    wr32(sp0 - 0x54u, in_esi);
    wr32(sp0 - 0x58u, in_edi);
    if (rd32(sp0 + 0x14u) == 0u)
    {
    COW_AT(1003ba99)
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0x20u, 0u);
        edx = in_edx;
        ebp = in_ebp;
        loc_50 = in_ebx;
        loc_54 = in_esi;
        loc_58 = in_edi;
        loc_18 = 0u;
        loc_1c = 0u;
        loc_20 = 0u;
    }
    else
    {
        ebx = rd32(sp0 + 0x14u);
    COW_AT(1003ba32)
        wr32(sp0 - 0x5cu, in_ebp);
        t1 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
        t2 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
        wr32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u, t1);
        g->eax = rd32(COW_IMG(0x1047cf7cu));
        g->edx = rd32(arg3);
        t3 = rd32(COW_IMG(0x1047cf7cu));
        t4 = rd32(arg3);
        t5 = rd32(rd32(COW_IMG(0x1047cf7cu)));
        g->esp = sp0 - 0x5cu;
        COW_RET(0x1003ba5du);
        t6 = cow_thiscall(g, rd32(t4 + 0x1c0u), arg3, 0);
        t7 = g->edx;
        eax = t6;
        edx = t7;
        ebp = t5;
        edi = t2;
    COW_AT(1003ba5d)
        t8 = rd32(eax + 4u);
        wr32(sp0 - 0x60u, t8);
        wr32(sp0 - 0x64u, edi);
        g->esp = sp0 - 0x5cu;
        COW_RET(0x1003ba6bu);
        cow_thiscall(g, rd32(ebp + 0x64u), rd32(COW_IMG(0x1047cf7cu)), 2, edi, t8);
    COW_AT(1003ba6b)
        wr32(sp0 - 0x60u, ebx);
        wr32(sp0 - 0x64u, edi);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        g->edx = rd32(rd32(COW_IMG(0x1047cf7cu)));
        t9 = rd32(rd32(COW_IMG(0x1047cf7cu)));
        g->esp = sp0 - 0x5cu;
        COW_RET(0x1003ba7du);
        cow_thiscall(g, rd32(t9 + 0x50u), rd32(COW_IMG(0x1047cf7cu)), 3, sp0 - 0x20u, edi, ebx);
        t10 = g->edx;
        edx = t10;
    COW_AT(1003ba7d)
        t11 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
        t12 = rd32(COW_IMG(0x1047cf7cu));
        t13 = rd32(sp0 - 0x5cu);
        wr32(t12 + 0xa90u, t11);
        wr32(t11 * 4u + t12 + 0xa10u, edi);
        ebp = t13;
        loc_50 = rd32(sp0 - 0x50u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
    }
    COW_AT(1003bab1)
    wr32(sp0 - 0x14u, 0x3f800000u);
    if (arg2 - 0x30u > 0xcu)
    {
        eax = arg2;
        goto L_1003bcf9;
    }
    COW_AT(1003bac9)
    t14 = rd32(COW_IMG(0x1003bd50u) + arg2 * 4u - 0xc0u);
    switch (t14 - RD)
    {
    case 0x1003bad0u: goto L_1003bad0;
    case 0x1003baefu: goto L_1003baef;
    case 0x1003bb0eu: goto L_1003bb0e;
    case 0x1003bb8eu: goto L_1003bb8e;
    case 0x1003bbc0u: goto L_1003bbc0;
    case 0x1003bccau: goto L_1003bcca;
    case 0x1003bcd1u: goto L_1003bcd1;
    case 0x1003bcd8u: goto L_1003bcd8;
    case 0x1003bcdfu: goto L_1003bcdf;
    case 0x1003bce6u: goto L_1003bce6;
    case 0x1003bcedu: goto L_1003bced;
    case 0x1003bcf4u: goto L_1003bcf4;
    default: rt_fatal(g, COW_IMG(0x1003bac9u), "switch");
    }
    return 0;
L_1003bad0: ;
    COW_AT(1003bad0)
    if (arg3 == 0u) goto L_1003bcfd;
    COW_AT(1003bad8)
    x2 = (double)rdf32(arg3 + 0x644u);
    x1 = (double)rdf32(arg3 + 0x640u);
    x0 = (double)rdf32(arg3 + 0x63cu);
L_1003bd39: ;
    COW_AT(1003bd39)
    wrf32(arg1, (float)x0);
    t59 = rd32(sp0 - 0x50u);
    t60 = rd32(sp0 - 0x54u);
    wrf32(arg1 + 4u, (float)x1);
    wrf32(arg1 + 8u, (float)x2);
    g->ebx = t59;
    g->esi = t60;
    g->edi = loc_58;
    g->ebp = ebp;
    g->edx = edx;
    return arg1;
L_1003baef: ;
    COW_AT(1003baef)
    if (arg3 == 0u) goto L_1003bcfd;
    COW_AT(1003baf7)
    x2 = (double)rdf32(arg3 + 0x654u);
    x1 = (double)rdf32(arg3 + 0x650u);
    x0 = (double)rdf32(arg3 + 0x64cu);
    goto L_1003bd39;
L_1003bb0e: ;
    COW_AT(1003bb0e)
    if (arg3 == 0u) goto L_1003bcfd;
    COW_AT(1003bb16)
    wr32(sp0 - 0x5cu, sp0 - 0x40u);
    wr32(sp0 - 0x60u, 0u);
    g->esp = sp0 - 0x58u;
    COW_RET(0x1003bb27u);
    cow_thiscall(g, rd32(rd32(arg3) + 0x1c4u), arg3, 2, 0u, sp0 - 0x40u);
    COW_AT(1003bb27)
    t49 = rd32(sp0 - 0x40u);
    d50 = fr(g, (double)rdf32(sp0 - 0x3cu) - (double)rdf32(COW_IMG(0x1032961cu)));
    wr32(sp0 - 0x10u, t49);
    t51 = rd32(sp0 - 0x38u);
    wr32(sp0 - 8u, t51);
    d52 = (double)rdf32(sp0 - 0x3cu);
    wrf32(sp0 - 0x3cu, (float)(double)(float)d50);
    t53 = rd32(sp0 - 0x34u);
    wr32(sp0 - 4u, t53);
    d54 = fr(g, d52 + (double)rdf32(COW_IMG(0x1032a3e8u)));
    wr32(sp0 - 0x5cu, sp0 - 0x30u);
    wr32(sp0 - 0x60u, sp0 - 0x10u);
    wr32(sp0 - 0x64u, sp0 - 0x40u);
    wrf32(sp0 - 0xcu, (float)(double)(float)d54);
    g->eax = sp0 - 0x40u;
    g->edx = sp0 - 0x10u;
    g->esp = sp0 - 0x58u;
    COW_RET(0x1003bb75u);
    t55 = cow_thiscall(g, COW_IMG(0x10181590u), rd32(COW_IMG(0x10631f24u)), 3, sp0 - 0x40u, sp0 - 0x10u, sp0 - 0x30u);
    t56 = g->edx;
    eax = t55;
    edx = t56;
    COW_AT(1003bb75)
    if ((uint8_t)eax == 0u)
    {
        loc_50 = rd32(sp0 - 0x50u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_58 = rd32(sp0 - 0x58u);
        goto L_1003bcfd;
    }
    COW_AT(1003bb7d)
    loc_50 = rd32(sp0 - 0x50u);
    loc_54 = rd32(sp0 - 0x54u);
    loc_58 = rd32(sp0 - 0x58u);
    x2 = (double)rdf32(sp0 - 0x28u);
    x1 = (double)rdf32(sp0 - 0x2cu);
    x0 = (double)rdf32(sp0 - 0x30u);
    goto L_1003bd39;
L_1003bb8e: ;
    COW_AT(1003bb8e)
    g->eax = arg2;
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    COW_RET(0x1003bb93u);
    t23 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t24 = g->edx;
    eax = t23;
    edx = t24;
    COW_AT(1003bb93)
    t25 = rd32(eax + 0x44u);
    wr32(sp0 - 0x40u, t25);
    g->eax = eax;
    g->ecx = t25;
    g->esp = sp0 - 0x58u;
    COW_RET(0x1003bb9fu);
    t26 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t27 = g->ecx;
    eax = t26;
    ecx = t27;
    COW_AT(1003bb9f)
    t28 = rd32(eax + 0x48u);
    wr32(sp0 - 0x3cu, t28);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t28;
    g->esp = sp0 - 0x58u;
    COW_RET(0x1003bbabu);
    t29 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t30 = g->ecx;
    t31 = g->edx;
    eax = t29;
    ecx = t30;
    edx = t31;
    COW_AT(1003bbab)
    t32 = rd32(eax + 0x4cu);
    wr32(sp0 - 0x38u, t32);
    g->eax = t32;
    g->esp = sp0 - 0x58u;
    COW_RET(0x1003bbb7u);
    t33 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    eax = t33;
    COW_AT(1003bbb7)
    t34 = rd32(eax + 0x50u);
    wr32(sp0 - 0x34u, t34);
L_1003bc0f: ;
    COW_AT(1003bc0f)
    wr32(sp0 + 0x14u, 0x4b7fffffu);
    edi = 0xdu;
    loc_10 = rd32(sp0 - 0x10u);
    loc_c = rd32(sp0 - 0xcu);
    loc_8 = rd32(sp0 - 8u);
L_1003bc1c: ;
    COW_AT(1003bc1c)
    wr32(sp0 - 0x5cu, sp0 - 0x30u);
    wr32(sp0 - 0x60u, edi);
    g->esp = sp0 - 0x58u;
    COW_RET(0x1003bc2cu);
    cow_thiscall(g, rd32(rd32(arg3) + 0x1c4u), arg3, 2, edi, sp0 - 0x30u);
    COW_AT(1003bc2c)
    d35 = fr(g, (double)rdf32(sp0 - 0x30u) + (double)rdf32(sp0 - 0x20u));
    wr32(sp0 - 0x5cu, sp0 - 0x4cu);
    wrf32(sp0 - 0x30u, (float)(double)(float)d35);
    d36 = fr(g, (double)rdf32(sp0 - 0x2cu) + (double)rdf32(sp0 - 0x1cu));
    wrf32(sp0 - 0x2cu, (float)(double)(float)d36);
    d37 = fr(g, (double)rdf32(sp0 - 0x28u) + (double)rdf32(sp0 - 0x18u));
    wrf32(sp0 - 0x28u, (float)(double)(float)d37);
    d38 = fr(g, (double)(float)d35 - (double)rdf32(sp0 - 0x40u));
    wrf32(sp0 - 0x4cu, (float)(double)(float)d38);
    d39 = fr(g, (double)(float)d36 - (double)rdf32(sp0 - 0x3cu));
    wrf32(sp0 - 0x48u, (float)(double)(float)d39);
    d40 = fr(g, (double)(float)d37 - (double)rdf32(sp0 - 0x38u));
    wrf32(sp0 - 0x44u, (float)(double)(float)d40);
    g->eax = sp0 - 0x4cu;
    g->edx = rd32(rd32(COW_IMG(0x1047cf7cu)));
    t41 = rd32(rd32(COW_IMG(0x1047cf7cu)));
    g->esp = sp0 - 0x58u;
    COW_RET(0x1003bc87u);
    t42 = cow_thiscall(g, rd32(t41 + 0x94u), rd32(COW_IMG(0x1047cf7cu)), 1, sp0 - 0x4cu);
    t43 = g->edx;
    d44 = cow_take_float(g);
    eax = t42;
    edx = t43;
    x0 = d44;
    COW_AT(1003bc87)
    d45 = (double)rdf32(sp0 + 0x14u);
    if (!(x0 < d45))
    {
    COW_AT(1003bcb0)
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
    }
    else
    {
    COW_AT(1003bc92)
        t46 = rd32(sp0 - 0x30u);
        wr32(sp0 - 0x10u, t46);
        t47 = rd32(sp0 - 0x28u);
        t48 = rd32(sp0 - 0x2cu);
        wrf32(sp0 + 0x14u, (float)x0);
        wr32(sp0 - 0xcu, t48);
        wr32(sp0 - 8u, t47);
        edx = t48;
        loc_10 = t46;
        loc_c = t48;
        loc_8 = t47;
    }
    COW_AT(1003bcb2)
    if ((int32_t)(edi + 1u) <= 20)
    {
        edi = edi + 1u;
        goto L_1003bc1c;
    }
    COW_AT(1003bcbc)
    loc_50 = rd32(sp0 - 0x50u);
    loc_54 = rd32(sp0 - 0x54u);
    loc_58 = rd32(sp0 - 0x58u);
    x2 = cow_bits2f(loc_8);
    x1 = cow_bits2f(loc_c);
    x0 = cow_bits2f(loc_10);
    goto L_1003bd39;
L_1003bbc0: ;
    COW_AT(1003bbc0)
    if (arg4 == 0u) goto L_1003bcfd;
    COW_AT(1003bbcc)
    g->eax = arg2;
    g->esp = sp0 - 0x58u;
    COW_RET(0x1003bbd6u);
    t15 = cow_thiscall(g, rd32(rd32(arg4) + 0x1bcu), arg4, 0);
    eax = t15;
    COW_AT(1003bbd6)
    wr32(sp0 - 0x40u, rd32(eax));
    g->eax = rd32(eax);
    t16 = rd32(eax);
    g->esp = sp0 - 0x58u;
    COW_RET(0x1003bbe6u);
    t17 = cow_thiscall(g, rd32(rd32(arg4) + 0x1bcu), arg4, 0);
    eax = t17;
    COW_AT(1003bbe6)
    t18 = rd32(eax + 4u);
    wr32(sp0 - 0x3cu, t18);
    g->eax = t18;
    g->esp = sp0 - 0x58u;
    COW_RET(0x1003bbf7u);
    t19 = cow_thiscall(g, rd32(rd32(arg4) + 0x1bcu), arg4, 0);
    eax = t19;
    COW_AT(1003bbf7)
    t20 = rd32(eax + 8u);
    wr32(sp0 - 0x38u, t20);
    g->eax = t20;
    g->esp = sp0 - 0x58u;
    COW_RET(0x1003bc08u);
    t21 = cow_thiscall(g, rd32(rd32(arg4) + 0x1bcu), arg4, 0);
    eax = t21;
    COW_AT(1003bc08)
    t22 = rd32(eax + 0xcu);
    wr32(sp0 - 0x34u, t22);
    goto L_1003bc0f;
L_1003bcca: ;
    COW_AT(1003bcca)
    eax = 0x7eu;
L_1003bcf9: ;
    COW_AT(1003bcf9)
    if (arg3 != 0u) goto L_1003bd11;
L_1003bcfd: ;
    COW_AT(1003bcfd)
    x2 = (double)rdf32(COW_IMG(0x103295d8u));
    x1 = (double)rdf32(COW_IMG(0x103295d8u));
    x0 = (double)rdf32(COW_IMG(0x103295d8u));
    goto L_1003bd39;
L_1003bcd1: ;
    COW_AT(1003bcd1)
    eax = 0x7fu;
    goto L_1003bcf9;
L_1003bcd8: ;
    COW_AT(1003bcd8)
    eax = 0x66u;
    goto L_1003bcf9;
L_1003bcdf: ;
    COW_AT(1003bcdf)
    eax = 0x67u;
    goto L_1003bcf9;
L_1003bce6: ;
    COW_AT(1003bce6)
    eax = 0x68u;
    goto L_1003bcf9;
L_1003bced: ;
    COW_AT(1003bced)
    eax = 0x69u;
    goto L_1003bcf9;
L_1003bcf4: ;
    COW_AT(1003bcf4)
    eax = 0x6au;
    goto L_1003bcf9;
L_1003bd11: ;
    COW_AT(1003bd11)
    wr32(sp0 - 0x5cu, sp0 - 0x40u);
    wr32(sp0 - 0x60u, eax);
    g->edx = rd32(arg3);
    t57 = rd32(arg3);
    g->esp = sp0 - 0x58u;
    COW_RET(0x1003bd21u);
    cow_thiscall(g, rd32(t57 + 0x1c4u), arg3, 2, eax, sp0 - 0x40u);
    t58 = g->edx;
    edx = t58;
    COW_AT(1003bd21)
    loc_50 = rd32(sp0 - 0x50u);
    loc_54 = rd32(sp0 - 0x54u);
    loc_58 = rd32(sp0 - 0x58u);
    x2 = fr(g, (double)rdf32(sp0 - 0x38u) + (double)rdf32(sp0 - 0x18u));
    x1 = fr(g, (double)rdf32(sp0 - 0x3cu) + (double)rdf32(sp0 - 0x1cu));
    x0 = fr(g, (double)rdf32(sp0 - 0x40u) + (double)rdf32(sp0 - 0x20u));
    goto L_1003bd39;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1003ba20(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1003ba32u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x58u);
        in_esi = rd32(sp0 - 0x54u);
        in_ebx = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x58u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1003ba5du:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1003ba6bu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1003ba7du:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        g->esi = arg3;
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1003ba99u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x58u);
        in_esi = rd32(sp0 - 0x54u);
        in_ebx = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x58u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1003bab1u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x58u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1003bac9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x58u;
        g->eax = arg2;
        g->ecx = arg2 - 0x30u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1003bad0u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x58u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1003bad8u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x58u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1003baefu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x58u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1003baf7u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x58u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1003bb0eu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x58u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1003bb16u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x58u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1003bb27u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x5cu, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1003bb75u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x64u, sp0 - 0x40u);
        wr32(sp0 - 0x60u, sp0 - 0x10u);
        wr32(sp0 - 0x5cu, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x1003bb7du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x64u, sp0 - 0x40u);
        wr32(sp0 - 0x60u, sp0 - 0x10u);
        wr32(sp0 - 0x5cu, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x1003bb8eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x58u;
        g->eax = arg2;
        g->ecx = arg2 - 0x30u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1003bb93u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1003bb9fu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1003bbabu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1003bbb7u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1003bbc0u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x58u;
        g->eax = arg2;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1003bbccu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x58u;
        g->eax = arg2;
        g->esi = arg3;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x1003bbd6u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0x58u;
        g->esi = arg3;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x1003bbe6u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0x58u;
        g->esi = arg3;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x1003bbf7u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0x58u;
        g->esi = arg3;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x1003bc08u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1003bc0fu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1003bc1cu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x58u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1003bc2cu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        g->esi = arg3;
        wr32(sp0 - 0x5cu, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x1003bc87u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x58u;
        g->esi = arg3;
        wr32(sp0 - 0x5cu, sp0 - 0x4cu);
        (void)sp0;
        return 1;
    }
    case 0x1003bc92u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x58u;
        g->esi = arg3;
        wr32(sp0 - 0x5cu, sp0 - 0x4cu);
        (void)sp0;
        return 1;
    }
    case 0x1003bcb0u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x58u;
        g->esi = arg3;
        wr32(sp0 - 0x5cu, sp0 - 0x4cu);
        (void)sp0;
        return 1;
    }
    case 0x1003bcb2u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x58u;
        g->esi = arg3;
        wr32(sp0 - 0x5cu, sp0 - 0x4cu);
        (void)sp0;
        return 1;
    }
    case 0x1003bcbcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x5cu, sp0 - 0x4cu);
        (void)sp0;
        return 1;
    }
    case 0x1003bccau:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x58u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1003bcd1u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x58u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1003bcd8u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x58u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1003bcdfu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x58u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1003bce6u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x58u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1003bcedu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x58u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1003bcf4u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x58u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1003bcf9u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x58u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1003bcfdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x1003bd11u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x58u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1003bd21u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x5cu, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1003bd39u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_8;
        uint32_t loc_c;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1003ba20(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1003ba20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
