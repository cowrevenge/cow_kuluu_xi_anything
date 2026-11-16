/* f_0x1009d9d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1009d9d0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd16(arg3 + 0xcu);
    g->ecx = t1;
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    t2 = cow_call_regs(g, COW_IMG(0x10086fc0u), in_eax, g->ecx, g->edx, 1, 1, t1);
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint8_t)t2 != 0u)
    {
        eax = t2;
        ecx = t3;
        goto L_1009d9f6;
    }
    eax = t2;
    edx = t4;
    g->edx = edx;
    return eax;
L_1009d9f6: ;
    t5 = rd16(arg3 + 0xeu);
    g->ecx = ecx;
    g->edx = t5;
    g->esp = sp0 - 0x18u;
    t6 = cow_call_regs(g, COW_IMG(0x10086fc0u), eax, g->ecx, g->edx, 1, 1, t5);
    t7 = g->ecx;
    t8 = g->edx;
    if ((uint8_t)t6 != 0u)
    {
        eax = t6;
        ecx = t7;
        edx = t8;
        goto L_1009da11;
    }
    eax = t6;
    edx = t8;
    g->edx = edx;
    return eax;
L_1009da11: ;
    if (rd32(COW_IMG(0x10480af0u) + ecx * 4u) != 0u)
    {
        ecx = rd32(COW_IMG(0x10480af0u) + ecx * 4u);
        goto L_1009da26;
    }
    g->edx = edx;
    return eax & 0xffffff00u;
L_1009da26: ;
    if (rd32(COW_IMG(0x10480af0u) + edx * 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + edx * 4u);
        goto L_1009da3b;
    }
    eax = rd32(COW_IMG(0x10480af0u) + edx * 4u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1009da3b: ;
    t9 = rd32(ecx + 0x74u);
    t10 = rd32(eax + 0x74u);
    if (rd32(ecx + 0x78u) == rd32(arg3 + 4u))
    {
        edx = rd32(ecx + 0x78u);
        edi = rd32(eax + 0x78u);
        goto L_1009da60;
    }
    edx = rd32(ecx + 0x78u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1009da60: ;
    if (edi == rd32(arg3 + 8u)) goto L_1009da6f;
    g->edx = edx;
    return eax & 0xffffff00u;
L_1009da6f: ;
    t11 = rd32(ecx + 0x120u);
    if (t11 >> 9u & 1u)
    {
        ebp = t11;
        goto L_1009da89;
    }
    edx = t11 >> 9u;
    g->edx = edx;
    return eax & 0xffffff00u;
L_1009da89: ;
    t12 = rd32(eax + 0x120u);
    if (t12 >> 9u & 1u)
    {
        edi = t12;
        goto L_1009daa3;
    }
    edx = t12 >> 9u;
    g->edx = edx;
    return eax & 0xffffff00u;
L_1009daa3: ;
    if (((rd32(COW_IMG(0x104808fcu)) | rd32(COW_IMG(0x1047fb40u))) >> 8u & 8u) == 0u)
    {
        edx = rd32(COW_IMG(0x104808fcu)) | rd32(COW_IMG(0x1047fb40u));
        goto L_1009daca;
    }
    edx = rd32(COW_IMG(0x104808fcu)) | rd32(COW_IMG(0x1047fb40u));
    ebx = rd32(COW_IMG(0x1047fb40u));
    if (rd8(COW_IMG(0x10487e48u)) == 0u) goto L_1009daca;
    g->edx = edx;
    return eax & 0xffffff00u;
L_1009daca: ;
    if ((edx & 0x20u) == 0u) goto L_1009daf7;
    if (!(ebp >> 7u & 1u)) goto L_1009dae3;
    edx = ebp >> 7u;
    g->edx = edx;
    return eax & 0xffffff00u;
L_1009dae3: ;
    if (!(edi >> 7u & 1u)) goto L_1009daf7;
    edx = edi >> 7u;
    g->edx = edx;
    return eax & 0xffffff00u;
L_1009daf7: ;
    if (rd32(ecx + 0x124u) >> 0x1fu == 0u) goto L_1009db0f;
    edx = rd32(ecx + 0x124u) >> 0x1fu;
    g->edx = edx;
    return eax & 0xffffff00u;
L_1009db0f: ;
    if (rd32(eax + 0x124u) >> 0x1fu == 0u) goto L_1009db27;
    edx = rd32(eax + 0x124u) >> 0x1fu;
    g->edx = edx;
    return eax & 0xffffff00u;
L_1009db27: ;
    if (rd8(arg3 + 0x12u) > 0xcu)
    {
        eax = rd32(eax + 0xa0u);
        edx = rd8(arg3 + 0x12u);
        goto L_1009dcd5;
    }
    eax = rd32(eax + 0xa0u);
    ecx = rd32(ecx + 0xa0u);
    edx = rd8(arg3 + 0x12u);
    t13 = rd32(COW_IMG(0x1009dce0u) + edx * 4u);
    switch (t13 - RD)
    {
    case 0x1009db48u: goto L_1009db48;
    case 0x1009db6bu: goto L_1009db6b;
    case 0x1009db8au: goto L_1009db8a;
    case 0x1009dba9u: goto L_1009dba9;
    case 0x1009dbc8u: goto L_1009dbc8;
    case 0x1009dbe7u: goto L_1009dbe7;
    case 0x1009dc06u: goto L_1009dc06;
    case 0x1009dc25u: goto L_1009dc25;
    case 0x1009dc44u: goto L_1009dc44;
    case 0x1009dc63u: goto L_1009dc63;
    case 0x1009dc82u: goto L_1009dc82;
    case 0x1009dca1u: goto L_1009dca1;
    case 0x1009dcc0u: goto L_1009dcc0;
    default: rt_fatal(g, COW_IMG(0x1009db41u), "switch");
    }
    return 0;
L_1009db48: ;
    t62 = rd16(arg3 + 0x10u);
    g->eax = t62;
    g->edx = rd32(ecx);
    t63 = rd32(ecx);
    g->esp = sp0 - 0x18u;
    t64 = cow_thiscall(g, rd32(t63 + 0x2c4u), ecx, 5, t62, eax, 0x6e69616du, 0u, 0u);
    t65 = g->edx;
    g->edx = t65;
    return (t64 & 0xffffff00u) | 1u;
L_1009db6b: ;
    t58 = rd16(arg3 + 0x10u);
    g->eax = t58;
    g->edx = rd32(ecx);
    t59 = rd32(ecx);
    g->esp = sp0 - 0x18u;
    t60 = cow_thiscall(g, rd32(t59 + 0x2d0u), ecx, 3, t58, eax, 0x6e69616du);
    t61 = g->edx;
    g->edx = t61;
    return (t60 & 0xffffff00u) | 1u;
L_1009db8a: ;
    t54 = rd16(arg3 + 0x10u);
    g->eax = t54;
    g->edx = rd32(ecx);
    t55 = rd32(ecx);
    g->esp = sp0 - 0x18u;
    t56 = cow_thiscall(g, rd32(t55 + 0x2ccu), ecx, 3, t54, eax, 0x6e69616du);
    t57 = g->edx;
    g->edx = t57;
    return (t56 & 0xffffff00u) | 1u;
L_1009dba9: ;
    t50 = rd16(arg3 + 0x10u);
    g->eax = t50;
    g->edx = rd32(ecx);
    t51 = rd32(ecx);
    g->esp = sp0 - 0x18u;
    t52 = cow_thiscall(g, rd32(t51 + 0x2d4u), ecx, 3, t50, eax, 0x6e69616du);
    t53 = g->edx;
    g->edx = t53;
    return (t52 & 0xffffff00u) | 1u;
L_1009dbc8: ;
    t46 = rd16(arg3 + 0x10u);
    g->eax = t46;
    g->edx = rd32(ecx);
    t47 = rd32(ecx);
    g->esp = sp0 - 0x18u;
    t48 = cow_thiscall(g, rd32(t47 + 0x2d8u), ecx, 3, t46, eax, 0x6e69616du);
    t49 = g->edx;
    g->edx = t49;
    return (t48 & 0xffffff00u) | 1u;
L_1009dbe7: ;
    t42 = rd16(arg3 + 0x10u);
    g->eax = t42;
    g->edx = rd32(ecx);
    t43 = rd32(ecx);
    g->esp = sp0 - 0x18u;
    t44 = cow_thiscall(g, rd32(t43 + 0x2dcu), ecx, 3, t42, eax, 0x6e69616du);
    t45 = g->edx;
    g->edx = t45;
    return (t44 & 0xffffff00u) | 1u;
L_1009dc06: ;
    t38 = rd16(arg3 + 0x10u);
    g->eax = t38;
    g->edx = rd32(ecx);
    t39 = rd32(ecx);
    g->esp = sp0 - 0x18u;
    t40 = cow_thiscall(g, rd32(t39 + 0x2f0u), ecx, 3, t38, eax, 0x6e69616du);
    t41 = g->edx;
    g->edx = t41;
    return (t40 & 0xffffff00u) | 1u;
L_1009dc25: ;
    t34 = rd16(arg3 + 0x10u);
    g->eax = t34;
    g->edx = rd32(ecx);
    t35 = rd32(ecx);
    g->esp = sp0 - 0x18u;
    t36 = cow_thiscall(g, rd32(t35 + 0x2f8u), ecx, 3, t34, eax, 0x6e69616du);
    t37 = g->edx;
    g->edx = t37;
    return (t36 & 0xffffff00u) | 1u;
L_1009dc44: ;
    t30 = rd16(arg3 + 0x10u);
    g->eax = t30;
    g->edx = rd32(ecx);
    t31 = rd32(ecx);
    g->esp = sp0 - 0x18u;
    t32 = cow_thiscall(g, rd32(t31 + 0x2e0u), ecx, 3, t30, eax, 0x6e69616du);
    t33 = g->edx;
    g->edx = t33;
    return (t32 & 0xffffff00u) | 1u;
L_1009dc63: ;
    t26 = rd16(arg3 + 0x10u);
    g->eax = t26;
    g->edx = rd32(ecx);
    t27 = rd32(ecx);
    g->esp = sp0 - 0x18u;
    t28 = cow_thiscall(g, rd32(t27 + 0x2f4u), ecx, 3, t26, eax, 0x6e69616du);
    t29 = g->edx;
    g->edx = t29;
    return (t28 & 0xffffff00u) | 1u;
L_1009dc82: ;
    t22 = rd16(arg3 + 0x10u);
    g->eax = t22;
    g->edx = rd32(ecx);
    t23 = rd32(ecx);
    g->esp = sp0 - 0x18u;
    t24 = cow_thiscall(g, rd32(t23 + 0x2e4u), ecx, 3, t22, eax, 0x6e69616du);
    t25 = g->edx;
    g->edx = t25;
    return (t24 & 0xffffff00u) | 1u;
L_1009dca1: ;
    t18 = rd16(arg3 + 0x10u);
    g->eax = t18;
    g->edx = rd32(ecx);
    t19 = rd32(ecx);
    g->esp = sp0 - 0x18u;
    t20 = cow_thiscall(g, rd32(t19 + 0x2e8u), ecx, 3, t18, eax, 0x6e69616du);
    t21 = g->edx;
    g->edx = t21;
    return (t20 & 0xffffff00u) | 1u;
L_1009dcc0: ;
    t14 = rd16(arg3 + 0x10u);
    g->eax = t14;
    g->edx = rd32(ecx);
    t15 = rd32(ecx);
    g->esp = sp0 - 0x18u;
    t16 = cow_thiscall(g, rd32(t15 + 0x2ecu), ecx, 3, t14, eax, 0x6e69616du);
    t17 = g->edx;
    eax = t16;
    edx = t17;
L_1009dcd5: ;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1009d9d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1009d9d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
