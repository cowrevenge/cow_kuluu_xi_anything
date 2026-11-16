/* f_0x1020c7a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1020c7a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, sp0 - 8u);
    t1 = rd32(self + 8u);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    g->edi = 0u;
    g->eax = sp0 - 8u;
    g->esp = sp0 - 0x10u;
    t2 = cow_thiscall(g, COW_IMG(0x10118900u), t1, 4, sp0 - 8u, 1u, 1u, 1u);
    if (rd16(rd32(self + 8u) + 0x4cu) != 1u)
    {
        wr32(sp0 - 0x14u, 0u);
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x1cu, 0x80808080u);
        t14 = (uint32_t)(int16_t)rd16(sp0 - 6u);
        wr32(sp0 - 0x20u, t14);
        t15 = (uint32_t)(int16_t)rd16(sp0 - 8u);
        wr32(sp0 - 0x24u, t15);
        g->eax = rd32(self + 0x14u);
        g->edx = t15;
        t16 = rd32(self + 0x14u);
        g->esp = sp0 - 0x10u;
        t17 = cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(self + t16 * 4u + 0x18u), 5, t15, t14, 0x80808080u, 0u, 0u);
        t18 = g->edx;
        eax = t17;
        edx = t18;
    }
    else
    {
        eax = t2;
        ecx = rd32(self + 8u);
        if ((int16_t)rd16(ecx + 0x5eu) <= 0)
        {
            wr32(sp0 - 0x14u, 0u);
            wr32(sp0 - 0x18u, 0u);
            wr32(sp0 - 0x1cu, 0u);
            wr32(sp0 - 0x20u, 0x80805020u);
            wr32(sp0 - 0x24u, 0x3f800000u);
            wr32(sp0 - 0x28u, 0x3f800000u);
            t9 = (uint32_t)(int16_t)rd16(sp0 - 6u);
            wr32(sp0 - 0x2cu, t9);
            t10 = (uint32_t)(int16_t)rd16(sp0 - 8u);
            wr32(sp0 - 0x30u, t10);
            g->eax = rd32(self + 0x14u);
            g->edx = t10;
            t11 = rd32(self + 0x14u);
            g->esp = sp0 - 0x10u;
            t12 = cow_thiscall(g, COW_IMG(0x1011fc80u), rd32(self + t11 * 4u + 0x18u), 8, t10, t9, 0x3f800000u, 0x3f800000u, 0x80805020u, 0u, 0u, 0u);
            t13 = g->edx;
            eax = t12;
            edx = t13;
        }
        else
        {
            eax = (eax & 0xffff0000u) | rd16(ecx + 0x5eu);
            wr32(sp0 - 0x14u, eax);
            wr32(sp0 - 0x18u, 0x1eu);
            t3 = rd32(sp0 - 6u);
            wr32(sp0 - 0x1cu, t3);
            t4 = rd32(sp0 - 8u);
            wr32(sp0 - 0x20u, t4);
            t5 = rd32(self + rd32(self + 0x14u) * 4u + 0x18u);
            wr32(sp0 - 0x24u, t5);
            g->eax = t5;
            g->edx = rd32(self + 0x14u);
            t6 = rd32(self + 0x14u);
            g->esp = sp0 - 0x10u;
            t7 = cow_thiscall(g, COW_IMG(0x10119f80u), ecx, 5, t5, t4, t3, 0x1eu, eax);
            t8 = g->edx;
            eax = t7;
            edx = t8;
        }
    }
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 4u);
    wr32(sp0 - 0x20u, sp0 - 8u);
    g->edi = 0u;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t19 = cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 8u, 4u, 1u, 1u);
    if (rd16(rd32(self + 8u) + 0x4cu) != 4u)
    {
        wr32(sp0 - 0x14u, 0u);
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x1cu, 0x80808080u);
        t31 = (uint32_t)(int16_t)rd16(sp0 - 6u);
        wr32(sp0 - 0x20u, t31);
        t32 = (uint32_t)(int16_t)rd16(sp0 - 8u);
        wr32(sp0 - 0x24u, t32);
        g->eax = rd32(self + 0x20u);
        g->edx = t32;
        t33 = rd32(self + 0x20u);
        g->esp = sp0 - 0x10u;
        t34 = cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(self + t33 * 4u + 0x24u), 5, t32, t31, 0x80808080u, 0u, 0u);
        t35 = g->edx;
        eax = t34;
        edx = t35;
    }
    else
    {
        eax = t19;
        ecx = rd32(self + 8u);
        if ((int16_t)rd16(ecx + 0x5eu) <= 0)
        {
            wr32(sp0 - 0x14u, 0u);
            wr32(sp0 - 0x18u, 0u);
            wr32(sp0 - 0x1cu, 0u);
            wr32(sp0 - 0x20u, 0x80805020u);
            wr32(sp0 - 0x24u, 0x3f800000u);
            wr32(sp0 - 0x28u, 0x3f800000u);
            t26 = (uint32_t)(int16_t)rd16(sp0 - 6u);
            wr32(sp0 - 0x2cu, t26);
            t27 = (uint32_t)(int16_t)rd16(sp0 - 8u);
            wr32(sp0 - 0x30u, t27);
            g->eax = rd32(self + 0x20u);
            g->edx = t27;
            t28 = rd32(self + 0x20u);
            g->esp = sp0 - 0x10u;
            t29 = cow_thiscall(g, COW_IMG(0x1011fc80u), rd32(self + t28 * 4u + 0x24u), 8, t27, t26, 0x3f800000u, 0x3f800000u, 0x80805020u, 0u, 0u, 0u);
            t30 = g->edx;
            eax = t29;
            edx = t30;
        }
        else
        {
            eax = (eax & 0xffff0000u) | rd16(ecx + 0x5eu);
            wr32(sp0 - 0x14u, eax);
            wr32(sp0 - 0x18u, 0x1eu);
            t20 = rd32(sp0 - 6u);
            wr32(sp0 - 0x1cu, t20);
            t21 = rd32(sp0 - 8u);
            wr32(sp0 - 0x20u, t21);
            t22 = rd32(self + rd32(self + 0x20u) * 4u + 0x24u);
            wr32(sp0 - 0x24u, t22);
            g->eax = t22;
            g->edx = rd32(self + 0x20u);
            t23 = rd32(self + 0x20u);
            g->esp = sp0 - 0x10u;
            t24 = cow_thiscall(g, COW_IMG(0x10119f80u), ecx, 5, t22, t21, t20, 0x1eu, eax);
            t25 = g->edx;
            eax = t24;
            edx = t25;
        }
    }
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 5u);
    wr32(sp0 - 0x20u, sp0 - 8u);
    g->edi = 0u;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t36 = cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 8u, 5u, 1u, 1u);
    if (rd16(rd32(self + 8u) + 0x4cu) != 5u) goto L_1020c94d;
    eax = t36;
    ecx = rd32(self + 8u);
    if ((int16_t)rd16(ecx + 0x5eu) <= 0) goto L_1020c91d;
    eax = (eax & 0xffff0000u) | rd16(ecx + 0x5eu);
    wr32(sp0 - 0x14u, eax);
    wr32(sp0 - 0x18u, 0x1eu);
    t37 = rd32(sp0 - 6u);
    wr32(sp0 - 0x1cu, t37);
    t38 = rd32(sp0 - 8u);
    wr32(sp0 - 0x20u, t38);
    t39 = rd32(self + rd32(self + 0x20u) * 4u + 0x2cu);
    wr32(sp0 - 0x24u, t39);
    g->eax = t39;
    g->edx = rd32(self + 0x20u);
    t40 = rd32(self + 0x20u);
    g->esp = sp0 - 0x10u;
    t41 = cow_thiscall(g, COW_IMG(0x10119f80u), ecx, 5, t39, t38, t37, 0x1eu, eax);
    t42 = g->edx;
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->edx = t42;
    return t41;
L_1020c91d: ;
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 0x80805020u);
    wr32(sp0 - 0x24u, 0x3f800000u);
    wr32(sp0 - 0x28u, 0x3f800000u);
    t43 = (uint32_t)(int16_t)rd16(sp0 - 6u);
    wr32(sp0 - 0x2cu, t43);
    t44 = (uint32_t)(int16_t)rd16(sp0 - 8u);
    wr32(sp0 - 0x30u, t44);
    g->eax = rd32(self + 0x20u);
    g->edx = t44;
    t45 = rd32(self + 0x20u);
    g->esp = sp0 - 0x10u;
    t46 = cow_thiscall(g, COW_IMG(0x1011fc80u), rd32(self + t45 * 4u + 0x2cu), 8, t44, t43, 0x3f800000u, 0x3f800000u, 0x80805020u, 0u, 0u, 0u);
    t47 = g->edx;
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->edx = t47;
    return t46;
L_1020c94d: ;
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0x80808080u);
    t48 = (uint32_t)(int16_t)rd16(sp0 - 6u);
    wr32(sp0 - 0x20u, t48);
    t49 = (uint32_t)(int16_t)rd16(sp0 - 8u);
    wr32(sp0 - 0x24u, t49);
    g->eax = rd32(self + 0x20u);
    g->edx = t49;
    t50 = rd32(self + 0x20u);
    g->esp = sp0 - 0x10u;
    t51 = cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(self + t50 * 4u + 0x2cu), 5, t49, t48, 0x80808080u, 0u, 0u);
    t52 = g->edx;
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->edx = t52;
    return t51;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1020c7a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1020c7a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
