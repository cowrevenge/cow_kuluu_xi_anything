/* f_0x101febf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101febf0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint32_t)(int16_t)arg2 == 5u) goto L_101fec38;
    if ((uint32_t)(int16_t)arg2 == 6u) goto L_101fec0f;
    return (uint32_t)(int16_t)arg2 - 6u & 0xffffff00u;
L_101fec0f: ;
    if ((uint32_t)(int8_t)rd8(self + 0x10u) == 1u)
    {
        eax = (uint32_t)(int8_t)rd8(self + 0x10u) - 1u;
        goto L_101fec29;
    }
    eax = (uint32_t)(int8_t)rd8(self + 0x10u) - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_call_regs(g, COW_IMG(0x101fcfb0u), eax, rd32(COW_IMG(0x10663aacu)), g->edx, 1, 0);
    t2 = g->edx;
    g->edx = t2;
    return (t1 & 0xffffff00u) | 1u;
L_101fec29: ;
    wr8(self + 0x10u, 0u);
    wr8(self + 0x12u, 1u);
    return (eax & 0xffffff00u) | 1u;
L_101fec38: ;
    if (rd8(rd32(COW_IMG(0x10663aacu)) + 0x16u) == 0u)
    {
        eax = rd32(COW_IMG(0x10663aacu));
        edx = in_edx;
        goto L_101fedbe;
    }
    eax = rd32(COW_IMG(0x10663aacu));
    if (rd8(self + 0x10u) != 2u) goto L_101fec92;
    if (rd32(COW_IMG(0x105781ccu)) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        ecx = rd32(COW_IMG(0x105781ccu));
        if (rd32(ecx + 8u) == 0u)
        {
            eax = rd32(ecx + 8u);
            edx = in_edx;
        }
        else
        {
            eax = rd32(ecx + 8u);
            g->eax = eax;
            g->edx = rd32(ecx);
            t3 = rd32(ecx);
            g->esp = sp0 - 0xcu;
            t4 = cow_thiscall(g, rd32(t3 + 0x18u), ecx, 2, 5u, 0xffffffffu);
            t5 = g->edx;
            eax = t4;
            edx = t5;
        }
    }
    if (rd32(COW_IMG(0x105781d0u)) == 0u) goto L_101fedbe;
    ecx = rd32(COW_IMG(0x105781d0u));
    if (rd32(ecx + 8u) == 0u)
    {
        eax = rd32(ecx + 8u);
        goto L_101fedbe;
    }
    g->eax = rd32(ecx);
    g->edx = edx;
    t6 = rd32(ecx);
    g->esp = sp0 - 0xcu;
    t7 = cow_thiscall(g, rd32(t6 + 0x18u), ecx, 2, 5u, 0xffffffffu);
    t8 = g->edx;
    g->edx = t8;
    return (t7 & 0xffffff00u) | 1u;
L_101fec92: ;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t9 = cow_thiscall(g, COW_IMG(0x101f7100u), arg1, 0);
    if (rd32(arg1 + 0x38u) == 0u)
    {
        eax = t9;
        edx = rd32(arg1 + 0x38u);
        goto L_101fedbe;
    }
    eax = t9;
    edx = rd32(arg1 + 0x38u);
    if ((int32_t)eax >= (int16_t)rd16(arg1 + 0x20u)) goto L_101fedbe;
    if (eax * 0x54u + edx == 0u)
    {
        eax = eax * 0x15u;
        goto L_101fedbe;
    }
    ecx = eax * 8u - eax;
    edi = eax * 0x54u + edx;
    if (rd32(edi + 0x48u) != 0u)
    {
        eax = rd32(edi + 0x48u);
        goto L_101fecf5;
    }
    eax = rd32(edi + 0x48u);
    wr8(self + 0x11u, 0xffu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t10 = cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t11 = g->edx;
    g->ebx = 1u;
    g->edx = t11;
    t12 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1038515cu), 1u, 0u);
    t13 = g->edx;
    g->ebx = in_ebx;
    g->edx = t13;
    return (t12 & 0xffffff00u) | 1u;
L_101fecf5: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t14 = cow_thiscall(g, COW_IMG(0x101f4b60u), edi, 1, 1u);
    t15 = g->ecx;
    t16 = g->edx;
    if (t14 != 0x80404040u)
    {
        edx = t16;
        goto L_101fed11;
    }
    eax = t14;
    ecx = t15;
    edx = t16;
L_101fed04: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t28 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t29 = g->edx;
    g->ebx = in_ebx;
    g->edx = t29;
    return (t28 & 0xffffff00u) | 1u;
L_101fed11: ;
    if ((uint32_t)(int8_t)rd8(self + 0x10u) == 0u)
    {
        eax = (uint32_t)(int8_t)rd8(self + 0x10u);
        goto L_101fed59;
    }
    eax = (uint32_t)(int8_t)rd8(self + 0x10u);
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_101fedbe;
    }
    eax = eax - 1u;
    t17 = rd32(edi + 0x48u);
    g->eax = eax;
    g->edx = edx;
    t18 = rd32(COW_IMG(0x10663aacu));
    g->esp = sp0 - 0xcu;
    t19 = cow_thiscall(g, COW_IMG(0x101fd220u), t18, 2, t17, 2u);
    t20 = g->ecx;
    t21 = g->edx;
    if ((uint8_t)t19 == 0u)
    {
        eax = t19;
        ecx = t20;
        edx = t21;
        goto L_101fed04;
    }
    eax = t19;
    t22 = rd32(rd32(COW_IMG(0x10663aacu)) + 8u);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t23 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t22, 2, t22, 0u);
    t24 = g->ecx;
    t25 = g->edx;
    g->edx = t25;
    t26 = cow_thiscall(g, COW_IMG(0x10037b90u), t24, 0);
    t27 = g->edx;
    g->ebx = in_ebx;
    g->edx = t27;
    return (t26 & 0xffffff00u) | 1u;
L_101fed59: ;
    if (rd16(rd32(COW_IMG(0x10663aacu)) + 0x30u) == 0u)
    {
        eax = (eax & 0xffff0000u) | rd16(rd32(COW_IMG(0x10663aacu)) + 0x30u);
        ecx = rd32(COW_IMG(0x10663aacu));
        goto L_101feda8;
    }
    eax = (eax & 0xffff0000u) | rd16(rd32(COW_IMG(0x10663aacu)) + 0x30u);
    ecx = rd32(COW_IMG(0x10663aacu));
    if ((uint16_t)eax == (uint16_t)rd32(edi + 0x48u))
    {
        edi = rd32(edi + 0x48u);
        goto L_101feda5;
    }
    edi = rd32(edi + 0x48u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t30 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0xf6u);
    t31 = g->edx;
    g->ebx = 1u;
    g->edx = t31;
    t32 = rd32(COW_IMG(0x10664520u));
    g->esp = sp0 - 0xcu;
    t33 = cow_thiscall(g, COW_IMG(0x10210e30u), t32, 7, COW_IMG(0x101febb0u), edi, t30, 0u, 0u, 1u, 0u);
    t34 = g->ecx;
    t35 = g->edx;
    g->edx = t35;
    t36 = cow_thiscall(g, COW_IMG(0x10037b90u), t34, 0);
    t37 = g->edx;
    g->ebx = in_ebx;
    g->edx = t37;
    return (t36 & 0xffffff00u) | 1u;
L_101feda5: ;
    loc_10 = 0u;
    loc_14 = edi;
L_101fedae: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t39 = cow_call_regs(g, COW_IMG(0x101fd1f0u), eax, ecx, g->edx, 0, 2, loc_14, loc_10);
    t40 = g->ecx;
    t41 = g->edx;
    wr8(self + 0x10u, 1u);
    wr8(self + 0x12u, 1u);
    g->edx = t41;
    t42 = cow_thiscall(g, COW_IMG(0x10037b90u), t40, 0);
    t43 = g->edx;
    eax = t42;
    edx = t43;
L_101fedbe: ;
    g->ebx = in_ebx;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_101feda8: ;
    t38 = (eax & 0xffff0000u) | rd16(edi + 0x48u);
    eax = t38;
    loc_10 = 1u;
    loc_14 = t38;
    goto L_101fedae;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101febf0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101febf0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
