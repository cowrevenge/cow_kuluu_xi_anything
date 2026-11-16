/* f_0x101f0b30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_101f0b30(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
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
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((uint32_t)(int16_t)rd16(sp0 + 4u) == 5u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 5u;
        goto L_101f0bb4;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 5u;
    if (eax != 1u)
    {
        eax = eax - 1u;
        edx = in_edx;
        goto L_101f0cf6;
    }
    eax = eax - 1u;
    if (rd8(self + 4u) == 0u) goto L_101f0b6d;
    eax = (eax & 0xffffff00u) | rd8(self + 4u);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 5u);
    t2 = g->edx;
    g->edx = t2;
    g->esp = sp0 - 4u;
    t3 = cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, t1, 2u);
    t4 = g->edx;
    wr8(self + 4u, 0u);
    g->edx = t4;
    return t3;
L_101f0b6d: ;
    t5 = rd32(COW_IMG(0x10663740u));
    wr8(t5 + 0x91u, 1u);
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x101f23a0u), rd32(COW_IMG(0x10663740u)), 1, rd32(COW_IMG(0x10663754u)));
    t6 = rd32(rd32(COW_IMG(0x1066374cu)) + 8u);
    g->eax = t6;
    t7 = rd32(COW_IMG(0x1066374cu));
    t8 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t7, 2, t6, 0u);
    t9 = g->edx;
    g->edx = t9;
    t10 = cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, 0u, 2u);
    t11 = g->edx;
    g->edx = t11;
    return t10;
L_101f0bb4: ;
    if (rd8(self + 4u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 4u);
        goto L_101f0cc2;
    }
    t12 = (uint32_t)(int16_t)rd16(rd32(COW_IMG(0x10663740u)) + 0x54u);
    t13 = rd32(rd32(COW_IMG(0x10663740u)) + 0x60u);
    t14 = rd32(COW_IMG(0x10663740u));
    t15 = rd32(rd32(COW_IMG(0x10663740u)) + 0x64u);
    wr32(sp0 + 0x10u, t12);
    t16 = rd8(self + 5u);
    wr32(sp0 + 4u, t13);
    g->edx = t16;
    g->esp = sp0 - 0x10u;
    t17 = cow_call_regs(g, COW_IMG(0x101f1160u), t13, t14, g->edx, 0, 1, t16);
    t18 = g->edx;
    g->edx = t18;
    t19 = rd32(COW_IMG(0x10663740u));
    t20 = cow_call_regs(g, COW_IMG(0x101f1160u), (uint8_t)arg3, t19, g->edx, 0, 1, (uint8_t)arg3);
    t21 = g->ecx;
    t22 = g->edx;
    if ((uint8_t)arg3 == rd8(self + 5u))
    {
        ecx = t21;
        edx = t22;
        ebp = t15;
        edi = t17;
        if (rd32(edi + 4u) <= 1u)
        {
            eax = rd32(edi + 4u);
        }
        else
        {
            g->edx = rd16(edi);
            t36 = rd32(COW_IMG(0x10621808u));
            t37 = rd16(edi);
            g->esp = sp0 - 0x10u;
            t38 = cow_thiscall(g, COW_IMG(0x1015b9e0u), t36, 1, t37);
            t39 = g->ecx;
            t40 = g->edx;
            if (t38 == 0u)
            {
                eax = t38;
                ecx = t39;
                edx = t40;
            }
            else
            {
                eax = t38;
                ecx = t39;
                edx = t40;
                if (rd32(eax + 0x14c0u) == 0u)
                {
                    eax = rd32(eax + 0x14c0u);
                }
                else
                {
                    eax = rd32(eax + 0x14c0u);
                    if (rd16(eax) <= 1u)
                    {
                        eax = (eax & 0xffffff00u) | rd16(eax) > 1u;
                    }
                    else
                    {
                        t41 = rd8(edi + 2u);
                        g->edx = edx;
                        g->esp = sp0 - 0x10u;
                        t42 = cow_cdecl(g, COW_IMG(0x100eb710u), 5, ebp, t41, ebp, 0x52u, 1u);
                        t43 = g->edx;
                        t44 = rd32(sp0 + 4u);
                        wr8(t44 + 6u, 1u);
                        eax = t42;
                        ecx = t44;
                        edx = t43;
                    }
                }
            }
        }
    }
    else
    {
        eax = t20;
        ecx = t21;
        edx = t22;
        ebp = t15;
        edi = t17;
        if (edi != 0u)
        {
            if (eax != 0u)
            {
                if (rd16(edi) != rd16(eax))
                {
                    ecx = (ecx & 0xffff0000u) | rd16(edi);
                }
                else
                {
                    t23 = rd32(edi + 4u);
                    t24 = rd8(eax + 2u);
                    t25 = rd8(edi + 2u);
                    g->ecx = t24;
                    g->edx = t25;
                    g->esp = sp0 - 0x10u;
                    t26 = cow_cdecl(g, COW_IMG(0x100eb710u), 5, ebp, t25, ebp, t24, t23);
                    t27 = g->ecx;
                    t28 = g->edx;
                    eax = t26;
                    ecx = t27;
                    edx = t28;
                }
            }
        }
        t29 = (arg3 & 0xffffff00u) | (uint8_t)((uint8_t)((uint8_t)arg3 - rd8(sp0 + 0x10u)) + 1u);
        t30 = (ecx & 0xffffff00u) | (uint8_t)((uint8_t)(rd8(self + 5u) - rd8(sp0 + 0x10u)) + 1u);
        g->ebx = t29;
        g->edx = edx;
        t31 = rd8(sp0 + 0x10u);
        t32 = rd32(sp0 + 4u);
        g->esp = sp0 - 0x10u;
        t33 = cow_thiscall(g, COW_IMG(0x1021cac0u), t32, 2, t30, t29);
        t34 = g->ecx;
        t35 = g->edx;
        eax = t33;
        ecx = t34;
        edx = t35;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t45 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 5u);
    t46 = g->edx;
    g->edx = t46;
    t47 = rd32(COW_IMG(0x105781f8u));
    g->esp = sp0 - 0x10u;
    t48 = cow_thiscall(g, COW_IMG(0x1013a320u), t47, 2, t45, 2u);
    t49 = g->ecx;
    t50 = g->edx;
    wr8(self + 4u, 0u);
    g->edx = t50;
    g->esp = sp0 - 4u;
    t51 = cow_thiscall(g, COW_IMG(0x10037b90u), t49, 0);
    t52 = g->edx;
    g->ebx = in_ebx;
    g->edx = t52;
    return t51;
L_101f0cc2: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t53 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 6u);
    t54 = g->edx;
    g->edx = t54;
    t55 = rd32(COW_IMG(0x105781f8u));
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x1013a320u), t55, 2, t53, 2u);
    t56 = g->ecx;
    t57 = g->edx;
    t58 = rd32(sp0 + 0x10u);
    wr8(self + 4u, 1u);
    wr8(self + 5u, (uint8_t)arg3);
    t59 = rd8(t58 + 2u);
    wr8(self + 6u, (uint8_t)t59);
    g->eax = t58;
    g->edx = (t57 & 0xffffff00u) | (uint8_t)arg3;
    t60 = cow_thiscall(g, COW_IMG(0x10037b90u), (t56 & 0xffffff00u) | t59, 0);
    t61 = g->edx;
    eax = t60;
    edx = t61;
L_101f0cf6: ;
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f0b30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101f0b30(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
