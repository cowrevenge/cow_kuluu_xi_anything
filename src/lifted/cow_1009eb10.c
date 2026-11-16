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
    uint32_t t43;
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
    wr32(sp0 - 0x18u, t1);
    g->ecx = t1;
    g->edx = in_edx;
    t2 = rd32(sp0 - 0xcu);
    g->esp = sp0 - 0x14u;
    t3 = cow_call_regs(g, COW_IMG(0x10086fc0u), in_eax, g->ecx, g->edx, 1, 1, t1);
    t4 = g->ecx;
    t5 = g->edx;
    if ((uint8_t)t3 == 0u)
    {
        eax = t3;
        edx = t5;
        goto L_1009ecb6;
    }
    ecx = t4;
    edx = t5;
    t6 = rd16(arg3 + 0xeu);
    wr32(sp0 - 0x18u, t6);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t7 = cow_call_regs(g, COW_IMG(0x10086fc0u), t6, g->ecx, g->edx, 1, 1, t6);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 == 0u)
    {
        eax = t7;
        edx = t9;
        goto L_1009ecb6;
    }
    eax = t7;
    ecx = t8;
    edx = t9;
    if (rd32(COW_IMG(0x10480af0u) + ecx * 4u) == 0u) goto L_1009ecb6;
    ecx = rd32(COW_IMG(0x10480af0u) + ecx * 4u);
    t10 = rd32(ecx + 0x74u);
    wr32(sp0 - 8u, t10);
    t11 = rd32(ecx + 0x78u);
    wr32(sp0 - 4u, t11);
    if (rd32(ecx + 0x78u) != rd32(arg3 + 4u))
    {
        eax = rd32(arg3 + 4u);
        edx = t10;
        goto L_1009ecb6;
    }
    eax = rd32(arg3 + 4u);
    ecx = t11;
    edx = t10;
    loc_4 = t11;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t12 = cow_call_regs(g, COW_IMG(0x101cc4f0u), eax, g->ecx, g->edx, 1, 0);
    t13 = g->edx;
    t14 = (in_edi & 0xffff0000u) | rd16(arg3 + 0xcu);
    t15 = rd32(COW_IMG(0x10480af0u) + (uint16_t)t14 * 4u);
    wr32(sp0 - 0x18u, t15);
    wr32(sp0 - 0x1cu, t15);
    wr32(sp0 - 0x20u, t12);
    t16 = cow_call_regs(g, COW_IMG(0x1009e370u), g->eax, g->ecx, t13, 1, 3, t12, t15, t15);
    t17 = g->edx;
    if ((uint8_t)t16 != 0u)
    {
        eax = t16;
        edx = t17;
        goto L_1009ecb6;
    }
    eax = t16;
    edi = t14;
    wr16(COW_IMG(0x10482f40u), (uint16_t)edi);
    t18 = rd16(arg3 + 0xeu);
    wr16(COW_IMG(0x104855aau), (uint16_t)t18);
    t19 = rd32(arg3 + 0x10u);
    wr32(COW_IMG(0x10487020u), t19);
    t20 = rd32(arg3 + 0x14u);
    wr32(COW_IMG(0x10487024u), t20);
    t21 = rd16(arg3 + 0x18u);
    wr32(sp0 - 0x18u, t21);
    t22 = (eax & 0xffff0000u) | t18;
    wr32(sp0 - 0x1cu, t22);
    wr32(sp0 - 0x20u, edi);
    g->ecx = t20;
    g->edx = t21;
    g->esp = sp0 - 0x14u;
    t23 = cow_cdecl(g, COW_IMG(0x1009e700u), 3, edi, t22, t21);
    t24 = g->ecx;
    t25 = g->edx;
    if ((uint8_t)t23 != 0xc8u)
    {
        eax = t23;
        ecx = t24;
        edx = t25;
        goto L_1009ebed;
    }
    eax = t23;
    edx = t25;
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_1009ebed: ;
    t26 = (eax & 0xffff0000u) | rd16(arg3 + 0x18u);
    wr32(sp0 - 0x18u, t26);
    wr32(sp0 - 0x1cu, 5u);
    g->esp = sp0 - 0x14u;
    t27 = cow_call_regs(g, COW_IMG(0x100964a0u), g->eax, g->ecx, edx, 1, 2, 5u, t26);
    t28 = g->edx;
    if (t27 == 0u)
    {
        eax = t27;
        edx = t28;
        goto L_1009ecb6;
    }
    edx = t28;
    edi = t27;
    wr32(sp0 - 0x18u, sp0 + 0xcu);
    wr32(sp0 - 0x1cu, 0u);
    t29 = (edx & 0xffff0000u) | rd16(arg3 + 0x18u);
    wr32(sp0 - 0x20u, t29);
    wr32(sp0 - 0x24u, sp0 - 8u);
    wr32(sp0 - 0x28u, sp0 - 8u);
    g->eax = sp0 - 8u;
    g->ecx = sp0 - 8u;
    g->edx = t29;
    g->esp = sp0 - 0x14u;
    t30 = cow_cdecl(g, COW_IMG(0x100ad950u), 5, sp0 - 8u, sp0 - 8u, t29, 0u, sp0 + 0xcu);
    t31 = g->ecx;
    t32 = g->edx;
    if ((uint8_t)t30 == 0u)
    {
        ecx = t31;
        edx = t32;
        goto L_1009ec30;
    }
    eax = t30;
    edx = t32;
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_1009ec30: ;
    wr32(sp0 - 0x18u, 1u);
    t33 = (edx & 0xffff0000u) | rd16(arg3 + 0x18u);
    wr32(sp0 - 0x1cu, t33);
    t34 = rd32(sp0 - 4u);
    wr32(sp0 - 0x20u, t34);
    g->edx = t33;
    g->esp = sp0 - 0x1cu;
    t35 = cow_thiscall_cdecl(g, COW_IMG(0x100a1770u), ecx, 1, t34);
    t36 = g->ecx;
    t37 = g->edx;
    wr32(sp0 - 0x20u, t35);
    g->ecx = t36;
    g->edx = t37;
    g->esp = sp0 - 0x14u;
    t38 = cow_call_regs(g, COW_IMG(0x100a1a00u), t35, g->ecx, g->edx, 1, 3, t35, rd32(sp0 - 0x1cu), 1u);
    t39 = g->ecx;
    t40 = g->edx;
    if ((uint8_t)t38 == 0u)
    {
        eax = t38;
        ecx = t39;
        edx = t40;
        goto L_1009ec59;
    }
    eax = t38;
    edx = t40;
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
    t41 = (uint32_t)(int8_t)rd8(arg3 + 0x1au);
    wr32(sp0 - 0x20u, t41);
    wr32(sp0 - 0x24u, sp0 - 0xcu);
    ecx = t41;
    edx = sp0 - 0xcu;
    loc_20 = t41;
L_1009eca6: ;
    wr32(sp0 - 0x28u, 1u);
    wr32(sp0 - 0x2cu, edi);
    wr32(sp0 - 0x30u, COW_IMG(0x10487f05u));
    g->esp = sp0 - 0x14u;
    t42 = cow_call_regs(g, COW_IMG(0x100ad660u), eax, ecx, edx, 1, 7, COW_IMG(0x10487f05u), edi, 1u, sp0 - 0xcu, loc_20, 0u, 0u);
    t43 = g->edx;
    eax = t42;
    edx = t43;
L_1009ecb6: ;
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
