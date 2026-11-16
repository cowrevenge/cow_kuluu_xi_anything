/* f_0x101d9850 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_101d9850(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_84;
    uint32_t loc_98;
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 168u);

    wr32(sp0 - 0x88u, in_ebx);
    wr32(sp0 - 0x8cu, in_ebp);
    wr32(sp0 - 0x90u, in_esi);
    wr32(sp0 - 0x94u, in_edi);
    if ((uint32_t)(int16_t)arg1 == 5u) goto L_101d9885;
    if ((uint32_t)(int16_t)arg1 != 6u)
    {
        eax = (uint32_t)(int16_t)arg1 - 6u;
        edx = in_edx;
        goto L_101d9a05;
    }
    g->eax = (uint32_t)(int16_t)arg1 - 6u;
    g->edx = in_edx;
    g->esp = sp0 - 0x94u;
    t1 = cow_thiscall(g, COW_IMG(0x101f2600u), rd32(COW_IMG(0x10663740u)), 0);
    t2 = g->edx;
    g->edx = t2;
    return t1;
L_101d9885: ;
    g->edx = in_edx;
    g->esp = sp0 - 0x94u;
    t3 = cow_call_regs(g, COW_IMG(0x1020a410u), (uint32_t)(int16_t)arg1 - 5u, g->ecx, g->edx, 1, 0);
    t4 = g->edx;
    if ((uint8_t)t3 != 0u)
    {
        eax = t3;
        edx = t4;
        goto L_101d9a05;
    }
    edx = t4;
    wr32(sp0 - 0x98u, rd16(arg4));
    g->edx = edx;
    t5 = rd16(arg4);
    t6 = rd32(COW_IMG(0x10621808u));
    g->esp = sp0 - 0x94u;
    t7 = cow_thiscall(g, COW_IMG(0x1015bc40u), t6, 1, t5);
    t8 = g->ecx;
    t9 = g->edx;
    t10 = rd16(t7 + 0xcu);
    t11 = rd8(t7 + 0x1b3u);
    wr8(t7 + 0x1b3u, (uint8_t)(t11 + 1u));
    if ((uint16_t)t10 <= 1u)
    {
        eax = (t7 & 0xffff0000u) | t10;
        ecx = (t8 & 0xffffff00u) | (uint8_t)(t11 + 1u);
        edx = t9;
        ebx = (in_ebx & 0xffffff00u) | (uint8_t)(t11 + 1u);
        esi = t7;
        goto L_101d98d6;
    }
    eax = (t7 & 0xffff0000u) | t10;
    ecx = (t8 & 0xffffff00u) | (uint8_t)(t11 + 1u);
    ebx = (in_ebx & 0xffffff00u) | (uint8_t)(t11 + 1u);
    esi = t7;
    if ((uint16_t)eax != rd32(arg4 + 4u))
    {
        eax = (uint16_t)eax;
        edx = rd32(arg4 + 4u);
        goto L_101d98d6;
    }
    eax = (uint16_t)eax;
    edx = rd32(arg4 + 4u);
    ebx = (ebx & 0xffffff00u) | 1u;
L_101d98d8: ;
    t12 = rd8(esi + 0x2du);
    t13 = rd32(sp0 - 0x84u);
    wr8(esi + 0x1b3u, (uint8_t)((uint8_t)ecx - 1u));
    if ((uint8_t)t12 == 0u)
    {
        eax = (eax & 0xffffff00u) | t12;
        ecx = (ecx & 0xffffff00u) | (uint8_t)((uint8_t)ecx - 1u);
        loc_84 = (t13 & 0xffffff00u) | (uint8_t)ebx;
        goto L_101d990a;
    }
    loc_84 = (t13 & 0xffffff00u) | (uint8_t)ebx;
    wr32(sp0 - 0x98u, arg4 + 0x10u);
    t14 = (edx & 0xffff0000u) | rd16(arg4);
    wr32(sp0 - 0x9cu, t14);
    g->ecx = arg4 + 0x10u;
    g->edx = t14;
    g->esp = sp0 - 0x94u;
    t15 = cow_cdecl(g, COW_IMG(0x100feb80u), 2, t14, arg4 + 0x10u);
    t16 = g->ecx;
    t17 = g->edx;
    if ((uint8_t)t15 != 0u)
    {
        eax = t15;
        ecx = t16;
        edx = t17;
        goto L_101d9906;
    }
    edx = t17;
    wr32(sp0 - 0x98u, 0xb0u);
    loc_98 = 0xb0u;
L_101d995e: ;
    g->ebx = ebx;
    g->edx = edx;
    t29 = rd32(COW_IMG(0x10578158u));
    g->esp = sp0 - 0x94u;
    t30 = cow_thiscall(g, COW_IMG(0x10129e30u), t29, 1, loc_98);
    t31 = g->ecx;
    t32 = g->edx;
    g->edx = t32;
    t33 = cow_thiscall(g, COW_IMG(0x10037c50u), t31, 0);
    t34 = g->edx;
    g->ebx = rd32(sp0 - 0x88u);
    g->esi = rd32(sp0 - 0x90u);
    g->edi = rd32(sp0 - 0x94u);
    g->ebp = rd32(sp0 - 0x8cu);
    g->edx = t34;
    return t33;
L_101d98d6: ;
    ebx = ebx & 0xffffff00u;
    goto L_101d98d8;
L_101d9906: ;
    ebx = (ebx & 0xffffff00u) | rd8(sp0 - 0x84u);
L_101d990a: ;
    if (rd16(esi + 0xcu) > 1u)
    {
        eax = (eax & 0xffff0000u) | rd16(esi + 0xcu);
        if (rd32(arg4 + 4u) != 1u)
        {
            if ((uint8_t)ebx == 0u)
            {
                wr32(sp0 - 0x98u, (uint16_t)eax);
                wr32(sp0 - 0x9cu, 0x1bu);
                wr32(sp0 - 0xa0u, 0xau);
                g->eax = (uint16_t)eax;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x98u;
                t18 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x1bu);
                t19 = g->ecx;
                t20 = g->edx;
                wr32(sp0 - 0x9cu, t18);
                wr32(sp0 - 0xa0u, sp0 - 0x80u);
                g->ebx = ebx;
                g->edx = t20;
                g->esp = sp0 - 0x8cu;
                t21 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x80u, t18, rd32(sp0 - 0x98u), rd32(sp0 - 0x94u), rd32(sp0 - 0x90u));
                t22 = g->edx;
                wr32(sp0 - 0x98u, sp0 - 0x80u);
                g->ebx = ebx;
                g->edx = t22;
                t23 = rd32(COW_IMG(0x10578158u));
                g->esp = sp0 - 0x94u;
                cow_thiscall(g, COW_IMG(0x10129eb0u), t23, 1, sp0 - 0x80u);
                t24 = g->ecx;
                t25 = g->edx;
                ecx = t24;
                edx = t25;
            }
        }
    }
    wr32(sp0 - 0x98u, 1u);
    g->ecx = ecx;
    g->esp = sp0 - 0x94u;
    t26 = cow_call_regs(g, COW_IMG(0x101d75d0u), g->eax, g->ecx, edx, 1, 1, 1u);
    t27 = g->ecx;
    t28 = g->edx;
    if ((int32_t)t26 >= 0)
    {
        ecx = t27;
        edx = t28;
        goto L_101d997b;
    }
    edx = t28;
    wr32(sp0 - 0x98u, 0x6du);
    loc_98 = 0x6du;
    goto L_101d995e;
L_101d997b: ;
    t35 = (edx & 0xffffff00u) | rd8(esi + 0xcu);
    wr32(sp0 - 0x98u, t35);
    t36 = rd32(sp0 - 0x84u);
    wr32(sp0 - 0x9cu, t36);
    t37 = (ecx & 0xffff0000u) | rd16(arg4);
    wr32(sp0 - 0xa0u, t37);
    g->ecx = self;
    g->esp = sp0 - 0x94u;
    cow_call_regs(g, COW_IMG(0x101d9770u), g->eax, g->ecx, t35, 0, 3, t37, t36, t35);
    t38 = g->ecx;
    t39 = g->edx;
    wr8(self + 4u, 1u);
    t40 = rd8(arg4 + 2u);
    wr8(self + 5u, (uint8_t)t40);
    if (rd32(COW_IMG(0x105781f8u)) == 0u)
    {
        edx = (t39 & 0xffffff00u) | t40;
    }
    else
    {
        eax = rd32(COW_IMG(0x105781f8u));
        ecx = t38;
        edx = (t39 & 0xffffff00u) | t40;
        wr32(sp0 - 0x98u, 2u);
        wr32(sp0 - 0x9cu, 0x37u);
        wr32(sp0 - 0xa0u, 0xeu);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x98u;
        t41 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x37u);
        t42 = g->edx;
        wr32(sp0 - 0x9cu, t41);
        g->edx = t42;
        g->esp = sp0 - 0x94u;
        cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, t41, 2u);
        t43 = g->edx;
        edx = t43;
    }
    wr32(sp0 - 0x98u, 0u);
    wr32(sp0 - 0x9cu, 1u);
    wr32(sp0 - 0xa0u, COW_IMG(0x1036f718u));
    g->edx = edx;
    g->esp = sp0 - 0x94u;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1036f718u), 1u, 0u);
    t44 = g->edx;
    wr32(sp0 - 0x98u, arg4);
    wr32(sp0 - 0x9cu, COW_IMG(0x101d9a20u));
    wr32(sp0 - 0xa0u, 0x3b9ac9ffu);
    wr32(sp0 - 0xa4u, 0u);
    t45 = (uint8_t)ebx == 0u;
    t46 = rd32(COW_IMG(0x1057824cu));
    wr32(COW_IMG(0x10663464u), t45);
    g->eax = t45;
    g->edx = t44;
    t47 = cow_thiscall(g, COW_IMG(0x10140d90u), t46, 4, 0u, 0x3b9ac9ffu, COW_IMG(0x101d9a20u), arg4);
    t48 = g->edx;
    t49 = rd32(COW_IMG(0x1057824cu));
    wr32(t49 + 0x34u, COW_IMG(0x101d97b0u));
    g->edx = t48;
    t50 = cow_thiscall(g, COW_IMG(0x10037b90u), t49, 0);
    t51 = g->edx;
    eax = t50;
    edx = t51;
L_101d9a05: ;
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d9850(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101d9850(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
