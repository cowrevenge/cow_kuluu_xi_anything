/* f_0x1009e8d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1009e8d0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_30;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 68u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1009e8fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); in_ebp = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_1009e8fc;
    case 0x1009e904u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); in_ebp = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_1009e904;
    case 0x1009e917u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1009e917;
    case 0x1009e91fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1009e91f;
    case 0x1009e928u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1009e928;
    case 0x1009e932u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1009e932;
    case 0x1009e93bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1009e93b;
    case 0x1009e945u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1009e945;
    case 0x1009e94fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1009e94f;
    case 0x1009e959u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1009e959;
    case 0x1009e98bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1009e98b;
    case 0x1009e995u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1009e995;
    case 0x1009e9b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1009e9b8;
    case 0x1009e9c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1009e9c2;
    case 0x1009e9c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1009e9c7;
    case 0x1009e9d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1009e9d1;
    case 0x1009e9dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1009e9df;
    case 0x1009e9e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1009e9e9;
    case 0x1009e9f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1009e9f6;
    case 0x1009ea00u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1009ea00;
    case 0x1009ea52u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1009ea52;
    case 0x1009ea67u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1009ea67;
    case 0x1009ea71u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1009ea71;
    case 0x1009ea92u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1009ea92;
    case 0x1009eab3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1009eab3;
    case 0x1009eabdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1009eabd;
    case 0x1009eac3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1009eac3;
    case 0x1009eac9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1009eac9;
    case 0x1009eacfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1009eacf;
    case 0x1009ead5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1009ead5;
    case 0x1009eae3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1009eae3;
    case 0x1009eaf0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_1009eaf0;
    case 0x1009eb00u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1009eb00;
    default: break;
    }
#endif

    COW_AT(1009e8d0)
    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_ebp);
    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x24u, in_edi);
    t1 = rd16(arg3 + 0x14u);
    wr32(sp0 - 0x28u, t1);
    wr8(sp0 - 0x14u, 0u);
    wr8(sp0 - 0x13u, 0u);
    wr8(sp0 - 0x12u, 0u);
    g->ecx = t1;
    g->edx = in_edx;
    g->esp = sp0 - 0x24u;
    t2 = cow_call_regs(g, COW_IMG(0x10086fc0u), in_eax, g->ecx, g->edx, 1, 1, t1);
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint8_t)t2 != 0u)
    {
        eax = t2;
        ecx = t3;
        goto L_1009e904;
    }
    eax = t2;
    edx = t4;
    COW_AT(1009e8fc)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return eax;
L_1009e904: ;
    COW_AT(1009e904)
    t5 = rd16(arg3 + 0x16u);
    wr32(sp0 - 0x28u, t5);
    g->ecx = ecx;
    g->edx = t5;
    g->esp = sp0 - 0x24u;
    t6 = cow_call_regs(g, COW_IMG(0x10086fc0u), eax, g->ecx, g->edx, 1, 1, t5);
    t7 = g->ecx;
    t8 = g->edx;
    if ((uint8_t)t6 != 0u)
    {
        eax = t6;
        ecx = t7;
        edx = t8;
        goto L_1009e91f;
    }
    eax = t6;
    edx = t8;
    COW_AT(1009e917)
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x24u);
    g->ebp = rd32(sp0 - 0x1cu);
    g->edx = edx;
    return eax;
L_1009e91f: ;
    COW_AT(1009e91f)
    if (rd32(COW_IMG(0x10480af0u) + ecx * 4u) != 0u) goto L_1009e932;
    COW_AT(1009e928)
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x24u);
    g->ebp = rd32(sp0 - 0x1cu);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1009e932: ;
    COW_AT(1009e932)
    if (rd32(COW_IMG(0x10480af0u) + edx * 4u) != 0u) goto L_1009e945;
    COW_AT(1009e93b)
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x24u);
    g->ebp = rd32(sp0 - 0x1cu);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1009e945: ;
    COW_AT(1009e945)
    if (rd32(rd32(COW_IMG(0x10456a28u))) == 0x60u)
    {
        eax = rd32(COW_IMG(0x10456a28u));
        goto L_1009e959;
    }
    eax = rd32(COW_IMG(0x10456a28u));
    COW_AT(1009e94f)
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x24u);
    g->ebp = rd32(sp0 - 0x1cu);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1009e959: ;
    COW_AT(1009e959)
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t9 = cow_call_regs(g, COW_IMG(0x101cc4f0u), eax, g->ecx, g->edx, 1, 0);
    t10 = g->edx;
    t11 = rd32(COW_IMG(0x10480af0u) + rd16(arg3 + 0x16u) * 4u);
    wr32(sp0 - 0x28u, t11);
    t12 = rd32(COW_IMG(0x10480af0u) + rd16(arg3 + 0x14u) * 4u);
    wr32(sp0 - 0x2cu, t12);
    wr32(sp0 - 0x30u, t9);
    g->ebx = 0u;
    t13 = cow_call_regs(g, COW_IMG(0x1009e370u), g->eax, g->ecx, t10, 1, 3, t9, t12, t11);
    t14 = g->edx;
    if ((uint8_t)t13 == 0u)
    {
        ebp = t11;
        edi = t12;
        goto L_1009e995;
    }
    eax = t13;
    edx = t14;
    COW_AT(1009e98b)
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x24u);
    g->ebp = rd32(sp0 - 0x1cu);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1009e995: ;
    COW_AT(1009e995)
    t15 = rd32(edi + 0x74u);
    wr32(sp0 - 0x10u, t15);
    t16 = rd32(edi + 0x78u);
    wr32(sp0 - 0xcu, t16);
    t17 = rd32(ebp + 0x74u);
    wr32(sp0 - 8u, t17);
    t18 = rd32(ebp + 0x78u);
    wr32(sp0 - 4u, t18);
    if (t16 == rd32(arg3 + 4u))
    {
        eax = t16;
        ecx = t18;
        edx = rd32(arg3 + 4u);
        loc_10 = t15;
        loc_c = t16;
        loc_8 = t17;
        goto L_1009e9c2;
    }
    eax = t16;
    edx = rd32(arg3 + 4u);
    COW_AT(1009e9b8)
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x24u);
    g->ebp = rd32(sp0 - 0x1cu);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1009e9c2: ;
    COW_AT(1009e9c2)
    if (ecx == rd32(arg3 + 8u)) goto L_1009e9d1;
    COW_AT(1009e9c7)
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x24u);
    g->ebp = rd32(sp0 - 0x1cu);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1009e9d1: ;
    COW_AT(1009e9d1)
    if (rd32(edi + 0x120u) >> 9u & 1u)
    {
        edx = rd32(edi + 0x120u) >> 9u;
        goto L_1009e9e9;
    }
    edx = rd32(edi + 0x120u) >> 9u;
    COW_AT(1009e9df)
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x24u);
    g->ebp = rd32(sp0 - 0x1cu);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1009e9e9: ;
    COW_AT(1009e9e9)
    if (rd32(ebp + 0x120u) >> 9u & 1u)
    {
        eax = rd32(ebp + 0x120u) >> 9u;
        goto L_1009ea00;
    }
    eax = rd32(ebp + 0x120u) >> 9u;
    COW_AT(1009e9f6)
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x24u);
    g->ebp = rd32(sp0 - 0x1cu);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1009ea00: ;
    COW_AT(1009ea00)
    t19 = rd16(arg3 + 0x14u);
    wr16(COW_IMG(0x10482f40u), (uint16_t)t19);
    t20 = rd16(arg3 + 0x16u);
    wr16(COW_IMG(0x104855aau), (uint16_t)t20);
    t21 = rd32(arg3 + 0xcu);
    wr32(COW_IMG(0x10487020u), t21);
    t22 = rd32(arg3 + 0x10u);
    wr32(COW_IMG(0x10487024u), t22);
    t23 = rd16(arg3 + 0x18u);
    wr8(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x28u, t23);
    t24 = (ecx & 0xffff0000u) | t20;
    wr32(sp0 - 0x2cu, t24);
    t25 = (eax & 0xffff0000u) | t19;
    wr32(sp0 - 0x30u, t25);
    wr8(sp0 - 0x13u, 0u);
    wr8(sp0 - 0x12u, 0u);
    g->eax = t25;
    g->ecx = t24;
    g->edx = t23;
    g->esp = sp0 - 4u;
    t26 = cow_cdecl(g, COW_IMG(0x1009e700u), 11, t25, t24, t23, rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), loc_10, loc_c, loc_8);
    t27 = g->ecx;
    t28 = g->edx;
    wr8(sp0 - 0x14u, (uint8_t)t26);
    if ((uint8_t)t26 == 0xc8u)
    {
        eax = t26;
        edx = t28;
        goto L_1009eb00;
    }
    eax = t26;
    ecx = t27;
    edx = t28;
    COW_AT(1009ea52)
    t29 = (eax & 0xffff0000u) | rd16(arg3 + 0x18u);
    wr32(sp0 - 0x28u, t29);
    wr32(sp0 - 0x2cu, 5u);
    g->eax = t29;
    g->esp = sp0 - 0x24u;
    t30 = cow_call_regs(g, COW_IMG(0x100964a0u), g->eax, g->ecx, edx, 1, 2, 5u, t29);
    t31 = g->edx;
    if (t30 != 0u)
    {
        edx = t31;
        edi = t30;
        goto L_1009ea71;
    }
    eax = t30;
    edx = t31;
    COW_AT(1009ea67)
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x24u);
    g->ebp = rd32(sp0 - 0x1cu);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1009ea71: ;
    COW_AT(1009ea71)
    wr32(sp0 - 0x28u, sp0 + 0xcu);
    wr32(sp0 - 0x2cu, 0u);
    t32 = (edx & 0xffff0000u) | rd16(arg3 + 0x18u);
    wr32(sp0 - 0x30u, t32);
    wr32(sp0 - 0x34u, sp0 - 8u);
    wr32(sp0 - 0x38u, sp0 - 0x10u);
    g->eax = sp0 - 8u;
    g->ecx = sp0 - 0x10u;
    g->edx = t32;
    g->esp = sp0 - 0x24u;
    t33 = cow_cdecl(g, COW_IMG(0x100ad950u), 5, sp0 - 0x10u, sp0 - 8u, t32, 0u, sp0 + 0xcu);
    t34 = g->ecx;
    t35 = g->edx;
    if ((uint8_t)t33 != 0u)
    {
        eax = t33;
        edx = t35;
    }
    else
    {
        ecx = t34;
        edx = t35;
    COW_AT(1009ea92)
        wr32(sp0 - 0x28u, 1u);
        t36 = (edx & 0xffff0000u) | rd16(arg3 + 0x18u);
        wr32(sp0 - 0x2cu, t36);
        t37 = rd32(sp0 - 0xcu);
        wr32(sp0 - 0x30u, t37);
        g->eax = t37;
        g->edx = t36;
        g->esp = sp0 - 0x2cu;
        t38 = cow_thiscall_cdecl(g, COW_IMG(0x100a1770u), ecx, 1, t37);
        t39 = g->ecx;
        t40 = g->edx;
        wr32(sp0 - 0x30u, t38);
        g->ebx = 0u;
        g->ecx = t39;
        g->edx = t40;
        g->esp = sp0 - 0x24u;
        t41 = cow_call_regs(g, COW_IMG(0x100a1a00u), t38, g->ecx, g->edx, 1, 3, t38, rd32(sp0 - 0x2cu), 1u);
        t42 = g->ecx;
        t43 = g->edx;
        if ((uint8_t)t41 != 0u)
        {
            eax = t41;
            edx = t43;
        }
        else
        {
            eax = t41;
            ecx = t42;
            edx = t43;
    COW_AT(1009eab3)
            if (rd16(arg3 + 0x18u) == 9u)
            {
                eax = (eax & 0xffff0000u) | rd16(arg3 + 0x18u);
                goto L_1009eae3;
            }
            eax = (eax & 0xffff0000u) | rd16(arg3 + 0x18u);
    COW_AT(1009eabd)
            if ((uint16_t)eax == 0xbu) goto L_1009eae3;
    COW_AT(1009eac3)
            if ((uint16_t)eax == 0x32u) goto L_1009eae3;
    COW_AT(1009eac9)
            if ((uint16_t)eax == 0x2cfu) goto L_1009eae3;
    COW_AT(1009eacf)
            if ((uint16_t)eax == 0x2du) goto L_1009eae3;
    COW_AT(1009ead5)
            wr32(sp0 - 0x28u, 0u);
            wr32(sp0 - 0x2cu, 0u);
            t44 = (uint32_t)(int8_t)rd8(arg3 + 0x1au);
            wr32(sp0 - 0x30u, t44);
            wr32(sp0 - 0x34u, sp0 - 0x14u);
            ecx = t44;
            edx = sp0 - 0x14u;
            loc_30 = t44;
L_1009eaf0: ;
    COW_AT(1009eaf0)
            wr32(sp0 - 0x38u, 1u);
            wr32(sp0 - 0x3cu, edi);
            wr32(sp0 - 0x40u, COW_IMG(0x10487f04u));
            g->esp = sp0 - 0x24u;
            t45 = cow_call_regs(g, COW_IMG(0x100ad660u), eax, ecx, edx, 1, 7, COW_IMG(0x10487f04u), edi, 1u, sp0 - 0x14u, loc_30, 0u, 0u);
            t46 = g->edx;
            eax = t45;
            edx = t46;
        }
    }
L_1009eb00: ;
    COW_AT(1009eb00)
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x24u);
    g->ebp = rd32(sp0 - 0x1cu);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_1009eae3: ;
    COW_AT(1009eae3)
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, (uint16_t)eax);
    wr32(sp0 - 0x34u, sp0 - 0x14u);
    loc_30 = (uint16_t)eax;
    eax = sp0 - 0x14u;
    goto L_1009eaf0;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1009e8d0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1009e8fcu:
    {
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        in_ebp = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1009e904u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        in_ebp = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1009e917u:
    {
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
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1009e91fu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1009e928u:
    {
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
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1009e932u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1009e93bu:
    {
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
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1009e945u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1009e94fu:
    {
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
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1009e959u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1009e98bu:
    {
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
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1009e995u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x24u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1009e9b8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1009e9c2u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1009e9c7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1009e9d1u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1009e9dfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1009e9e9u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1009e9f6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1009ea00u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1009ea52u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1009ea67u:
    {
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
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1009ea71u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1009ea92u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        g->esi = arg3;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        wr32(sp0 - 0x34u, sp0 - 8u);
        wr32(sp0 - 0x28u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1009eab3u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        g->esi = arg3;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        wr32(sp0 - 0x34u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1009eabdu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        g->esi = arg3;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        wr32(sp0 - 0x34u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1009eac3u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        g->esi = arg3;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        wr32(sp0 - 0x34u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1009eac9u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        g->esi = arg3;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        wr32(sp0 - 0x34u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1009eacfu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        g->esi = arg3;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        wr32(sp0 - 0x34u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1009ead5u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        g->esi = arg3;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        wr32(sp0 - 0x34u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1009eae3u:
    {
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
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        wr32(sp0 - 0x34u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1009eaf0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        wr32(sp0 - 0x34u, sp0 - 0x14u);
        wr32(sp0 - 0x2cu, 0u);
        wr32(sp0 - 0x28u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1009eb00u:
    {
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
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1009e8d0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1009e8d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
