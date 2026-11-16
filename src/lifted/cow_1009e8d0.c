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
    uint32_t t47;
    uint32_t t48;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 68u);

    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_ebp);
    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x24u, in_edi);
    t1 = rd16(arg3 + 0x14u);
    wr32(sp0 - 0x28u, t1);
    g->ecx = t1;
    g->edx = in_edx;
    t2 = rd32(sp0 - 0x14u);
    g->esp = sp0 - 0x24u;
    t3 = cow_call_regs(g, COW_IMG(0x10086fc0u), in_eax, g->ecx, g->edx, 1, 1, t1);
    t4 = g->ecx;
    t5 = g->edx;
    if ((uint8_t)t3 != 0u)
    {
        eax = t3;
        ecx = t4;
        goto L_1009e904;
    }
    eax = t3;
    edx = t5;
    g->edx = edx;
    return eax;
L_1009e904: ;
    t6 = rd16(arg3 + 0x16u);
    wr32(sp0 - 0x28u, t6);
    g->ecx = ecx;
    g->edx = t6;
    g->esp = sp0 - 0x24u;
    t7 = cow_call_regs(g, COW_IMG(0x10086fc0u), eax, g->ecx, g->edx, 1, 1, t6);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 != 0u)
    {
        eax = t7;
        ecx = t8;
        edx = t9;
        goto L_1009e91f;
    }
    eax = t7;
    edx = t9;
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x24u);
    g->ebp = rd32(sp0 - 0x1cu);
    g->edx = edx;
    return eax;
L_1009e91f: ;
    if (rd32(COW_IMG(0x10480af0u) + ecx * 4u) != 0u) goto L_1009e932;
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x24u);
    g->ebp = rd32(sp0 - 0x1cu);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1009e932: ;
    if (rd32(COW_IMG(0x10480af0u) + edx * 4u) != 0u) goto L_1009e945;
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x24u);
    g->ebp = rd32(sp0 - 0x1cu);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1009e945: ;
    if (rd32(rd32(COW_IMG(0x10456a28u))) == 0x60u)
    {
        eax = rd32(COW_IMG(0x10456a28u));
        goto L_1009e959;
    }
    eax = rd32(COW_IMG(0x10456a28u));
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x24u);
    g->ebp = rd32(sp0 - 0x1cu);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1009e959: ;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t10 = cow_call_regs(g, COW_IMG(0x101cc4f0u), eax, g->ecx, g->edx, 1, 0);
    t11 = g->edx;
    t12 = rd32(COW_IMG(0x10480af0u) + rd16(arg3 + 0x16u) * 4u);
    wr32(sp0 - 0x28u, t12);
    t13 = rd32(COW_IMG(0x10480af0u) + rd16(arg3 + 0x14u) * 4u);
    wr32(sp0 - 0x2cu, t13);
    wr32(sp0 - 0x30u, t10);
    g->ebx = 0u;
    t14 = cow_call_regs(g, COW_IMG(0x1009e370u), g->eax, g->ecx, t11, 1, 3, t10, t13, t12);
    t15 = g->edx;
    if ((uint8_t)t14 == 0u)
    {
        ebp = t12;
        edi = t13;
        goto L_1009e995;
    }
    eax = t14;
    edx = t15;
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x24u);
    g->ebp = rd32(sp0 - 0x1cu);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1009e995: ;
    t16 = rd32(edi + 0x74u);
    wr32(sp0 - 0x10u, t16);
    t17 = rd32(edi + 0x78u);
    wr32(sp0 - 0xcu, t17);
    t18 = rd32(ebp + 0x74u);
    wr32(sp0 - 8u, t18);
    t19 = rd32(ebp + 0x78u);
    wr32(sp0 - 4u, t19);
    if (t17 == rd32(arg3 + 4u))
    {
        eax = t17;
        ecx = t19;
        edx = rd32(arg3 + 4u);
        loc_10 = t16;
        loc_c = t17;
        loc_8 = t18;
        goto L_1009e9c2;
    }
    eax = t17;
    edx = rd32(arg3 + 4u);
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x24u);
    g->ebp = rd32(sp0 - 0x1cu);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1009e9c2: ;
    if (ecx == rd32(arg3 + 8u)) goto L_1009e9d1;
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x24u);
    g->ebp = rd32(sp0 - 0x1cu);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1009e9d1: ;
    if (rd32(edi + 0x120u) >> 9u & 1u)
    {
        edx = rd32(edi + 0x120u) >> 9u;
        goto L_1009e9e9;
    }
    edx = rd32(edi + 0x120u) >> 9u;
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x24u);
    g->ebp = rd32(sp0 - 0x1cu);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1009e9e9: ;
    if (rd32(ebp + 0x120u) >> 9u & 1u)
    {
        eax = rd32(ebp + 0x120u) >> 9u;
        goto L_1009ea00;
    }
    eax = rd32(ebp + 0x120u) >> 9u;
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x24u);
    g->ebp = rd32(sp0 - 0x1cu);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1009ea00: ;
    t20 = rd16(arg3 + 0x14u);
    wr16(COW_IMG(0x10482f40u), (uint16_t)t20);
    t21 = rd16(arg3 + 0x16u);
    wr16(COW_IMG(0x104855aau), (uint16_t)t21);
    t22 = rd32(arg3 + 0xcu);
    wr32(COW_IMG(0x10487020u), t22);
    t23 = rd32(arg3 + 0x10u);
    wr32(COW_IMG(0x10487024u), t23);
    t24 = rd16(arg3 + 0x18u);
    wr32(sp0 - 0x28u, t24);
    t25 = (ecx & 0xffff0000u) | t21;
    wr32(sp0 - 0x2cu, t25);
    t26 = (eax & 0xffff0000u) | t20;
    wr32(sp0 - 0x30u, t26);
    g->ecx = t25;
    g->edx = t24;
    t27 = rd32(sp0 - 0x14u);
    g->esp = sp0 - 4u;
    t28 = cow_cdecl(g, COW_IMG(0x1009e700u), 11, t26, t25, t24, rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), t27 & 0xff000000u, loc_10, loc_c, loc_8);
    t29 = g->ecx;
    t30 = g->edx;
    if ((uint8_t)t28 == 0xc8u)
    {
        eax = t28;
        edx = t30;
        goto L_1009eb00;
    }
    eax = t28;
    ecx = t29;
    edx = t30;
    t31 = (eax & 0xffff0000u) | rd16(arg3 + 0x18u);
    wr32(sp0 - 0x28u, t31);
    wr32(sp0 - 0x2cu, 5u);
    g->esp = sp0 - 0x24u;
    t32 = cow_call_regs(g, COW_IMG(0x100964a0u), g->eax, g->ecx, edx, 1, 2, 5u, t31);
    t33 = g->edx;
    if (t32 != 0u)
    {
        edx = t33;
        edi = t32;
        goto L_1009ea71;
    }
    eax = t32;
    edx = t33;
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x24u);
    g->ebp = rd32(sp0 - 0x1cu);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1009ea71: ;
    wr32(sp0 - 0x28u, sp0 + 0xcu);
    wr32(sp0 - 0x2cu, 0u);
    t34 = (edx & 0xffff0000u) | rd16(arg3 + 0x18u);
    wr32(sp0 - 0x30u, t34);
    wr32(sp0 - 0x34u, sp0 - 8u);
    wr32(sp0 - 0x38u, sp0 - 0x10u);
    g->eax = sp0 - 8u;
    g->ecx = sp0 - 0x10u;
    g->edx = t34;
    g->esp = sp0 - 0x24u;
    t35 = cow_cdecl(g, COW_IMG(0x100ad950u), 5, sp0 - 0x10u, sp0 - 8u, t34, 0u, sp0 + 0xcu);
    t36 = g->ecx;
    t37 = g->edx;
    if ((uint8_t)t35 != 0u)
    {
        eax = t35;
        edx = t37;
    }
    else
    {
        ecx = t36;
        edx = t37;
        wr32(sp0 - 0x28u, 1u);
        t38 = (edx & 0xffff0000u) | rd16(arg3 + 0x18u);
        wr32(sp0 - 0x2cu, t38);
        t39 = rd32(sp0 - 0xcu);
        wr32(sp0 - 0x30u, t39);
        g->edx = t38;
        g->esp = sp0 - 0x2cu;
        t40 = cow_thiscall_cdecl(g, COW_IMG(0x100a1770u), ecx, 1, t39);
        t41 = g->ecx;
        t42 = g->edx;
        wr32(sp0 - 0x30u, t40);
        g->ebx = 0u;
        g->ecx = t41;
        g->edx = t42;
        g->esp = sp0 - 0x24u;
        t43 = cow_call_regs(g, COW_IMG(0x100a1a00u), t40, g->ecx, g->edx, 1, 3, t40, rd32(sp0 - 0x2cu), 1u);
        t44 = g->ecx;
        t45 = g->edx;
        if ((uint8_t)t43 != 0u)
        {
            eax = t43;
            edx = t45;
        }
        else
        {
            eax = t43;
            ecx = t44;
            edx = t45;
            if (rd16(arg3 + 0x18u) == 9u)
            {
                eax = (eax & 0xffff0000u) | rd16(arg3 + 0x18u);
                goto L_1009eae3;
            }
            eax = (eax & 0xffff0000u) | rd16(arg3 + 0x18u);
            if ((uint16_t)eax == 0xbu) goto L_1009eae3;
            if ((uint16_t)eax == 0x32u) goto L_1009eae3;
            if ((uint16_t)eax == 0x2cfu) goto L_1009eae3;
            if ((uint16_t)eax == 0x2du) goto L_1009eae3;
            wr32(sp0 - 0x28u, 0u);
            wr32(sp0 - 0x2cu, 0u);
            t46 = (uint32_t)(int8_t)rd8(arg3 + 0x1au);
            wr32(sp0 - 0x30u, t46);
            wr32(sp0 - 0x34u, sp0 - 0x14u);
            ecx = t46;
            edx = sp0 - 0x14u;
            loc_30 = t46;
L_1009eaf0: ;
            wr32(sp0 - 0x38u, 1u);
            wr32(sp0 - 0x3cu, edi);
            wr32(sp0 - 0x40u, COW_IMG(0x10487f04u));
            g->esp = sp0 - 0x24u;
            t47 = cow_call_regs(g, COW_IMG(0x100ad660u), eax, ecx, edx, 1, 7, COW_IMG(0x10487f04u), edi, 1u, sp0 - 0x14u, loc_30, 0u, 0u);
            t48 = g->edx;
            eax = t47;
            edx = t48;
        }
    }
L_1009eb00: ;
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x24u);
    g->ebp = rd32(sp0 - 0x1cu);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_1009eae3: ;
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, (uint16_t)eax);
    wr32(sp0 - 0x34u, sp0 - 0x14u);
    loc_30 = (uint16_t)eax;
    eax = sp0 - 0x14u;
    goto L_1009eaf0;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1009e8d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1009e8d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
