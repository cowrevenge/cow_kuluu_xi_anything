/* f_0x1009eb10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1009eb10(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_20;
    uint32_t loc_4;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    t1 = rd16(arg3 + 0xcu);
    wr8(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x18u, t1);
    wr8(sp0 - 0xbu, 0u);
    wr8(sp0 - 0xau, 0u);
    g->ecx = t1;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t2 = cow_call_regs(g, COW_IMG(0x10086fc0u), in_eax, g->ecx, g->edx, 1, 1, t1);
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        eax = t2;
        edx = t4;
        loc_10 = in_esi;
        loc_14 = in_edi;
        goto L_1009ecb6;
    }
    ecx = t3;
    edx = t4;
    t5 = rd16(arg3 + 0xeu);
    wr32(sp0 - 0x18u, t5);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t6 = cow_call_regs(g, COW_IMG(0x10086fc0u), t5, g->ecx, g->edx, 1, 1, t5);
    t7 = g->ecx;
    t8 = g->edx;
    if ((uint8_t)t6 == 0u)
    {
        eax = t6;
        edx = t8;
        loc_10 = in_esi;
        loc_14 = in_edi;
        goto L_1009ecb6;
    }
    eax = t6;
    ecx = t7;
    edx = t8;
    if (rd32(COW_IMG(0x10480af0u) + ecx * 4u) == 0u)
    {
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        goto L_1009ecb6;
    }
    ecx = rd32(COW_IMG(0x10480af0u) + ecx * 4u);
    t9 = rd32(ecx + 0x74u);
    wr32(sp0 - 8u, t9);
    t10 = rd32(ecx + 0x78u);
    wr32(sp0 - 4u, t10);
    if (rd32(ecx + 0x78u) != rd32(arg3 + 4u))
    {
        eax = rd32(arg3 + 4u);
        edx = t9;
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        goto L_1009ecb6;
    }
    eax = rd32(arg3 + 4u);
    ecx = t10;
    edx = t9;
    loc_4 = t10;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t11 = cow_call_regs(g, COW_IMG(0x101cc4f0u), eax, g->ecx, g->edx, 1, 0);
    t12 = g->edx;
    t13 = (in_edi & 0xffff0000u) | rd16(arg3 + 0xcu);
    t14 = rd32(COW_IMG(0x10480af0u) + (uint16_t)t13 * 4u);
    wr32(sp0 - 0x18u, t14);
    wr32(sp0 - 0x1cu, t14);
    wr32(sp0 - 0x20u, t11);
    t15 = cow_call_regs(g, COW_IMG(0x1009e370u), g->eax, g->ecx, t12, 1, 3, t11, t14, t14);
    t16 = g->edx;
    if ((uint8_t)t15 != 0u)
    {
        eax = t15;
        edx = t16;
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        goto L_1009ecb6;
    }
    eax = t15;
    edi = t13;
    wr16(COW_IMG(0x10482f40u), (uint16_t)edi);
    t17 = rd16(arg3 + 0xeu);
    wr16(COW_IMG(0x104855aau), (uint16_t)t17);
    t18 = rd32(arg3 + 0x10u);
    wr32(COW_IMG(0x10487020u), t18);
    t19 = rd32(arg3 + 0x14u);
    wr32(COW_IMG(0x10487024u), t19);
    t20 = rd16(arg3 + 0x18u);
    wr32(sp0 - 0x18u, t20);
    t21 = (eax & 0xffff0000u) | t17;
    wr32(sp0 - 0x1cu, t21);
    wr32(sp0 - 0x20u, edi);
    g->eax = t21;
    g->ecx = t19;
    g->edx = t20;
    g->esp = sp0 - 0x14u;
    t22 = cow_cdecl(g, COW_IMG(0x1009e700u), 3, edi, t21, t20);
    t23 = g->ecx;
    t24 = g->edx;
    wr8(sp0 - 0xcu, (uint8_t)t22);
    if ((uint8_t)t22 != 0xc8u)
    {
        eax = t22;
        ecx = t23;
        edx = t24;
        goto L_1009ebed;
    }
    eax = t22;
    edx = t24;
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_1009ebed: ;
    t25 = (eax & 0xffff0000u) | rd16(arg3 + 0x18u);
    wr32(sp0 - 0x18u, t25);
    wr32(sp0 - 0x1cu, 5u);
    g->eax = t25;
    g->esp = sp0 - 0x14u;
    t26 = cow_call_regs(g, COW_IMG(0x100964a0u), g->eax, g->ecx, edx, 1, 2, 5u, t25);
    t27 = g->edx;
    if (t26 == 0u)
    {
        eax = t26;
        edx = t27;
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        goto L_1009ecb6;
    }
    edx = t27;
    edi = t26;
    wr32(sp0 - 0x18u, sp0 + 0xcu);
    wr32(sp0 - 0x1cu, 0u);
    t28 = (edx & 0xffff0000u) | rd16(arg3 + 0x18u);
    wr32(sp0 - 0x20u, t28);
    wr32(sp0 - 0x24u, sp0 - 8u);
    wr32(sp0 - 0x28u, sp0 - 8u);
    g->eax = sp0 - 8u;
    g->ecx = sp0 - 8u;
    g->edx = t28;
    g->esp = sp0 - 0x14u;
    t29 = cow_cdecl(g, COW_IMG(0x100ad950u), 5, sp0 - 8u, sp0 - 8u, t28, 0u, sp0 + 0xcu);
    t30 = g->ecx;
    t31 = g->edx;
    if ((uint8_t)t29 == 0u)
    {
        ecx = t30;
        edx = t31;
        goto L_1009ec30;
    }
    eax = t29;
    edx = t31;
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_1009ec30: ;
    wr32(sp0 - 0x18u, 1u);
    t32 = (edx & 0xffff0000u) | rd16(arg3 + 0x18u);
    wr32(sp0 - 0x1cu, t32);
    t33 = rd32(sp0 - 4u);
    wr32(sp0 - 0x20u, t33);
    g->eax = t33;
    g->edx = t32;
    g->esp = sp0 - 0x1cu;
    t34 = cow_thiscall_cdecl(g, COW_IMG(0x100a1770u), ecx, 1, t33);
    t35 = g->ecx;
    t36 = g->edx;
    wr32(sp0 - 0x20u, t34);
    g->ecx = t35;
    g->edx = t36;
    g->esp = sp0 - 0x14u;
    t37 = cow_call_regs(g, COW_IMG(0x100a1a00u), t34, g->ecx, g->edx, 1, 3, t34, rd32(sp0 - 0x1cu), 1u);
    t38 = g->ecx;
    t39 = g->edx;
    if ((uint8_t)t37 == 0u)
    {
        eax = t37;
        ecx = t38;
        edx = t39;
        goto L_1009ec59;
    }
    eax = t37;
    edx = t39;
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_1009ec59: ;
    if (rd16(arg3 + 0x18u) == 9u)
    {
        eax = (eax & 0xffff0000u) | rd16(arg3 + 0x18u);
        goto L_1009ec97;
    }
    eax = (eax & 0xffff0000u) | rd16(arg3 + 0x18u);
    if ((uint16_t)eax == 0xbu) goto L_1009ec97;
    if ((uint16_t)eax == 0x32u) goto L_1009ec97;
    if ((uint16_t)eax == 0x2cfu) goto L_1009ec97;
    if ((uint16_t)eax == 0x2du) goto L_1009ec97;
    if ((uint16_t)eax == 0x32bu) goto L_1009ec97;
    if ((uint16_t)eax == 0x32du) goto L_1009ec97;
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0u);
    t40 = (uint32_t)(int8_t)rd8(arg3 + 0x1au);
    wr32(sp0 - 0x20u, t40);
    wr32(sp0 - 0x24u, sp0 - 0xcu);
    ecx = t40;
    edx = sp0 - 0xcu;
    loc_20 = t40;
L_1009eca6: ;
    wr32(sp0 - 0x28u, 1u);
    wr32(sp0 - 0x2cu, edi);
    wr32(sp0 - 0x30u, COW_IMG(0x10487f05u));
    g->esp = sp0 - 0x14u;
    t41 = cow_call_regs(g, COW_IMG(0x100ad660u), eax, ecx, edx, 1, 7, COW_IMG(0x10487f05u), edi, 1u, sp0 - 0xcu, loc_20, 0u, 0u);
    t42 = g->edx;
    eax = t41;
    edx = t42;
    loc_10 = rd32(sp0 - 0x10u);
    loc_14 = rd32(sp0 - 0x14u);
L_1009ecb6: ;
    g->esi = loc_10;
    g->edi = loc_14;
    g->edx = edx;
    return eax & 0xffffff00u;
L_1009ec97: ;
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, (uint16_t)eax);
    wr32(sp0 - 0x24u, sp0 - 0xcu);
    loc_20 = (uint16_t)eax;
    eax = sp0 - 0xcu;
    goto L_1009eca6;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1009eb10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1009eb10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
