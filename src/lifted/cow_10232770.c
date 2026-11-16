/* f_0x10232770 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10232770(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_1c;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 72u);

    wr32(sp0 - 0x20u, in_ebx);
    wr32(sp0 - 0x24u, in_esi);
    wr32(sp0 - 0x28u, in_edi);
    wr32(sp0 - 0x14u, self);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x28u;
    t1 = cow_call_regs(g, COW_IMG(0x10232760u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        ecx = t2;
        edx = t3;
        if (rd32(ecx + 0x68u) != 2u)
        {
            eax = rd32(ecx + 0x68u);
            loc_1c = rd32(sp0 - 0x1cu) & 0xffffff00u;
            goto L_10232805;
        }
        eax = rd32(ecx + 0x68u);
        loc_1c = rd32(sp0 - 0x1cu) & 0xffffff00u;
        wr32(sp0 - 0x2cu, arg1);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        t4 = cow_call_regs(g, COW_IMG(0x10230930u), eax, g->ecx, g->edx, 1, 1, arg1);
        t5 = g->ecx;
        t6 = g->edx;
        if ((uint8_t)t4 == 0u)
        {
            ecx = t5;
            edx = t6;
            goto L_102327c1;
        }
        eax = t4;
        ecx = t5;
        edx = t6;
        wr32(sp0 - 0x2cu, 0x75u);
        wr32(sp0 - 0x30u, 0xcu);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        t7 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x75u);
        t8 = g->edx;
        eax = t7;
        edx = t8;
        edi = COW_IMG(0x10232ae0u);
        loc_1c = (rd32(sp0 - 0x1cu) & 0xffffff00u) | 1u;
L_102328d9: ;
        wr32(sp0 - 0x2cu, 0u);
        wr32(sp0 - 0x30u, 1u);
        wr32(sp0 - 0x34u, 0u);
        wr32(sp0 - 0x38u, loc_1c);
        wr32(sp0 - 0x3cu, eax);
        wr32(sp0 - 0x40u, arg1 - 0xe000u);
        wr32(sp0 - 0x44u, edi);
        g->ebx = 0u;
        g->esp = sp0 - 0x28u;
        cow_thiscall(g, COW_IMG(0x10210e30u), rd32(COW_IMG(0x10664520u)), 7, edi, arg1 - 0xe000u, eax, loc_1c, 0u, 1u, 0u);
        wr32(sp0 - 0x2cu, sp0 - 8u);
        t44 = rd32(sp0 - 0x14u);
        t45 = cow_call_regs(g, COW_IMG(0x10118f70u), t44, rd32(t44 + 8u), g->edx, 0, 1, sp0 - 8u);
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        g->edx = rd32(COW_IMG(0x10664520u));
        t46 = rd32(COW_IMG(0x10664520u));
        cow_call_regs(g, COW_IMG(0x10118f70u), t45, rd32(t46 + 8u), g->edx, 0, 1, sp0 - 0x10u);
        t47 = g->edx;
        wr32(sp0 - 0x2cu, 2u);
        wr32(sp0 - 0x30u, 0u);
        cow_call_regs(g, COW_IMG(0x10119110u), rd32(COW_IMG(0x10664520u)), rd32(rd32(COW_IMG(0x10664520u)) + 8u), g->edx, 0, 2, 0u, 2u);
    }
L_1023295e: ;
    g->ebx = in_ebx;
    return;
L_102327c1: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t9 = cow_stdcall(g, COW_IMG(0x100990c0u), 0);
    t10 = g->ecx;
    t11 = g->edx;
    if (arg1 == (uint16_t)t9 + 0xe000u) goto L_1023295e;
    ecx = t10;
    edx = t11;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t12 = cow_stdcall(g, COW_IMG(0x100990d0u), 0);
    t13 = g->ecx;
    t14 = g->edx;
    if (arg1 == (uint16_t)t12 + 0xe000u) goto L_1023295e;
    eax = (uint16_t)t12 + 0xe000u;
    ecx = t13;
    edx = t14;
    wr32(sp0 - 0x2cu, 0x73u);
    wr32(sp0 - 0x30u, 0xcu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t15 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x73u);
    t16 = g->edx;
    eax = t15;
    edx = t16;
    edi = COW_IMG(0x10232970u);
    goto L_102328d9;
L_10232805: ;
    if (eax != 3u) goto L_10232874;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t17 = cow_stdcall(g, COW_IMG(0x100990c0u), 0);
    t18 = g->ecx;
    t19 = g->edx;
    if (arg1 == (uint16_t)t17 + 0xe000u) goto L_1023295e;
    ecx = t18;
    edx = t19;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t20 = cow_stdcall(g, COW_IMG(0x100990d0u), 0);
    t21 = g->ecx;
    t22 = g->edx;
    if (arg1 == (uint16_t)t20 + 0xe000u) goto L_1023295e;
    eax = (uint16_t)t20 + 0xe000u;
    ecx = t21;
    edx = t22;
    wr32(sp0 - 0x2cu, 0x6fu);
    wr32(sp0 - 0x30u, 0xcu);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t23 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x6fu);
    t24 = g->ecx;
    t25 = g->edx;
    wr32(sp0 - 0x34u, arg1);
    wr32(sp0 - 0x18u, t23);
    g->ecx = t24;
    g->edx = t25;
    t26 = rd32(sp0 - 0x1cu);
    g->esp = sp0 - 0x30u;
    t27 = cow_cdecl(g, COW_IMG(0x102308a0u), 1, arg1);
    t28 = g->ecx;
    t29 = g->edx;
    if ((uint8_t)t27 != 0u) goto L_1023295e;
    ecx = t28;
    edx = t29;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t30 = cow_stdcall(g, COW_IMG(0x10230ad0u), 0);
    t31 = g->edx;
    if ((int32_t)t30 >= 30) goto L_1023295e;
    edx = t31;
    edi = COW_IMG(0x10232ab0u);
L_102328af: ;
    wr32(sp0 - 0x2cu, arg1);
    g->edx = edx;
    t38 = rd32(COW_IMG(0x10621808u));
    g->esp = sp0 - 0x28u;
    t39 = cow_thiscall(g, COW_IMG(0x1015b9e0u), t38, 1, arg1);
    t40 = g->ecx;
    t41 = g->edx;
    if (t39 == 0u) goto L_1023295e;
    eax = t39;
    ecx = t40;
    edx = t41;
    wr32(sp0 - 0x2cu, eax);
    wr32(sp0 - 0x30u, arg1);
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t42 = cow_cdecl(g, COW_IMG(0x102309d0u), 4, arg1, eax, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
    t43 = g->edx;
    if ((uint8_t)t42 != 0u) goto L_1023295e;
    edx = t43;
    eax = rd32(sp0 - 0x18u);
    goto L_102328d9;
L_10232874: ;
    if (eax != 4u) goto L_1023295e;
    wr32(sp0 - 0x2cu, 0x73u);
    wr32(sp0 - 0x30u, 0xcu);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t32 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x73u);
    t33 = g->ecx;
    t34 = g->edx;
    wr32(sp0 - 0x18u, t32);
    wr32(sp0 - 0x34u, arg1 + 0x2000u);
    g->edx = t34;
    t35 = rd32(sp0 - 0x1cu);
    g->esp = sp0 - 0x30u;
    t36 = cow_cdecl(g, COW_IMG(0x10230ba0u), 1, arg1 + 0x2000u);
    t37 = g->edx;
    if ((uint8_t)t36 == 0u) goto L_1023295e;
    edx = t37;
    edi = COW_IMG(0x10232970u);
    goto L_102328af;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10232770(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10232770(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
