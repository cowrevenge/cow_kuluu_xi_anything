/* f_0x101306f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_101306f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_10;
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint32_t)(int16_t)arg1 == 5u) goto L_1013090e;
    if ((uint32_t)(int16_t)arg1 == 6u) goto L_10130821;
    if ((uint32_t)(int16_t)arg1 - 6u != 2u)
    {
        eax = (uint32_t)(int16_t)arg1 - 8u;
        edx = in_edx;
    }
    else
    {
        if (rd8(self + 4u) != 0u)
        {
            eax = ((uint32_t)(int16_t)arg1 - 8u & 0xffffff00u) | rd8(self + 4u);
            edx = in_edx;
        }
        else
        {
            if (rd32(rd32(COW_IMG(0x105781a8u)) + 0x1cu) != 1u)
            {
                eax = rd32(COW_IMG(0x105781a8u));
                edx = in_edx;
            }
            else
            {
                g->edx = in_edx;
                g->esp = sp0 - 8u;
                cow_thiscall(g, COW_IMG(0x1021c7e0u), rd32(COW_IMG(0x10666e2cu)), 4, 0xffffu, 2u, 0x12u, 0u);
                t1 = g->edx;
                g->edx = t1;
                cow_thiscall(g, COW_IMG(0x1021c7e0u), rd32(COW_IMG(0x10666e4cu)), 4, 0xffffu, 2u, 0x12u, 0u);
                t2 = g->edx;
                g->edx = t2;
                cow_thiscall(g, COW_IMG(0x1021c7e0u), rd32(COW_IMG(0x10666e50u)), 4, 0xffffu, 2u, 0x12u, 0u);
                t3 = g->edx;
                g->edx = t3;
                cow_thiscall(g, COW_IMG(0x1021c7e0u), rd32(COW_IMG(0x10666e54u)), 4, 0xffffu, 2u, 0x12u, 0u);
                t4 = g->edx;
                g->edx = t4;
                cow_thiscall(g, COW_IMG(0x1021c7e0u), rd32(COW_IMG(0x10666e58u)), 4, 0xffffu, 2u, 0x12u, 0u);
                t5 = g->edx;
                g->edx = t5;
                cow_thiscall(g, COW_IMG(0x1021c7e0u), rd32(COW_IMG(0x10666e5cu)), 4, 0xffffu, 2u, 0x12u, 0u);
                t6 = g->edx;
                g->edx = t6;
                cow_thiscall(g, COW_IMG(0x1021c7e0u), rd32(COW_IMG(0x10666e60u)), 4, 0xffffu, 2u, 0x12u, 0u);
                t7 = g->edx;
                g->edx = t7;
                cow_thiscall(g, COW_IMG(0x1021c7e0u), rd32(COW_IMG(0x10666e64u)), 4, 0xffffu, 2u, 0x12u, 0u);
                t8 = g->edx;
                cow_thiscall(g, COW_IMG(0x1021c7e0u), rd32(COW_IMG(0x10666e68u)), 4, 0xffffu, 2u, 0x12u, 0u);
                wr32(rd32(COW_IMG(0x105781a8u)) + 0x1cu, 2u);
                t9 = rd32(rd32(COW_IMG(0x105781a8u)) + 8u);
                g->eax = t9;
                t10 = rd32(COW_IMG(0x105781a8u));
                t11 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t10, 2, t9, 0u);
                t12 = g->ecx;
                t13 = g->edx;
                g->edx = t13;
                t14 = cow_thiscall(g, COW_IMG(0x10037e90u), t12, 0);
                t15 = g->edx;
                eax = t14;
                edx = t15;
            }
        }
    }
L_10130a62: ;
    if ((int16_t)arg1 > 0)
    {
        if ((int16_t)arg1 <= 6) goto L_10130a70;
        if ((uint32_t)(int16_t)arg1 != 0x1bu) goto L_10130a77;
L_10130a70: ;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t57 = cow_call_regs(g, COW_IMG(0x10130be0u), eax, self, g->edx, 1, 0);
        t58 = g->edx;
        eax = t57;
        edx = t58;
    }
L_10130a77: ;
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
L_10130821: ;
    if (rd32(rd32(COW_IMG(0x105781a8u)) + 0x1cu) != 1u) goto L_10130837;
    ecx = rd32(COW_IMG(0x105781a8u));
    g->ebx = (uint32_t)(int16_t)arg1;
    g->eax = (uint32_t)(int16_t)arg1 - 6u;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t16 = cow_thiscall(g, COW_IMG(0x101332d0u), ecx, 0);
    t17 = g->edx;
    eax = t16;
    edx = t17;
    goto L_10130a62;
L_10130837: ;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1021c7e0u), rd32(COW_IMG(0x10666e2cu)), 4, 0xffffu, 2u, 0x12u, 0u);
    t18 = g->edx;
    g->edx = t18;
    cow_thiscall(g, COW_IMG(0x1021c7e0u), rd32(COW_IMG(0x10666e4cu)), 4, 0xffffu, 2u, 0x12u, 0u);
    t19 = g->edx;
    g->edx = t19;
    cow_thiscall(g, COW_IMG(0x1021c7e0u), rd32(COW_IMG(0x10666e50u)), 4, 0xffffu, 2u, 0x12u, 0u);
    t20 = g->edx;
    g->edx = t20;
    cow_thiscall(g, COW_IMG(0x1021c7e0u), rd32(COW_IMG(0x10666e54u)), 4, 0xffffu, 2u, 0x12u, 0u);
    t21 = g->edx;
    g->edx = t21;
    cow_thiscall(g, COW_IMG(0x1021c7e0u), rd32(COW_IMG(0x10666e58u)), 4, 0xffffu, 2u, 0x12u, 0u);
    t22 = g->edx;
    g->edx = t22;
    cow_thiscall(g, COW_IMG(0x1021c7e0u), rd32(COW_IMG(0x10666e5cu)), 4, 0xffffu, 2u, 0x12u, 0u);
    t23 = g->edx;
    g->edx = t23;
    cow_thiscall(g, COW_IMG(0x1021c7e0u), rd32(COW_IMG(0x10666e60u)), 4, 0xffffu, 2u, 0x12u, 0u);
    t24 = g->edx;
    g->edx = t24;
    cow_thiscall(g, COW_IMG(0x1021c7e0u), rd32(COW_IMG(0x10666e64u)), 4, 0xffffu, 2u, 0x12u, 0u);
    t25 = g->edx;
    t26 = cow_thiscall(g, COW_IMG(0x1021c7e0u), rd32(COW_IMG(0x10666e68u)), 4, 0xffffu, 2u, 0x12u, 0u);
    t27 = rd32(rd32(COW_IMG(0x105781a8u)) + 8u);
    eax = t26;
    edx = t27;
    loc_10 = t27;
L_10130a58: ;
    g->eax = eax;
    g->esp = sp0 - 8u;
    t55 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), edx, 2, loc_10, 0u);
    t56 = g->edx;
    eax = t55;
    edx = t56;
    goto L_10130a62;
L_1013090e: ;
    if (rd32(rd32(COW_IMG(0x105781a8u)) + 0x1cu) != 1u)
    {
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        cow_thiscall(g, COW_IMG(0x1021c7e0u), rd32(COW_IMG(0x10666e2cu)), 4, 0xffffu, 2u, 0x12u, 0u);
        t40 = g->edx;
        g->edx = t40;
        cow_thiscall(g, COW_IMG(0x1021c7e0u), rd32(COW_IMG(0x10666e4cu)), 4, 0xffffu, 2u, 0x12u, 0u);
        t41 = g->edx;
        g->edx = t41;
        cow_thiscall(g, COW_IMG(0x1021c7e0u), rd32(COW_IMG(0x10666e50u)), 4, 0xffffu, 2u, 0x12u, 0u);
        t42 = g->edx;
        g->edx = t42;
        cow_thiscall(g, COW_IMG(0x1021c7e0u), rd32(COW_IMG(0x10666e54u)), 4, 0xffffu, 2u, 0x12u, 0u);
        t43 = g->edx;
        g->edx = t43;
        cow_thiscall(g, COW_IMG(0x1021c7e0u), rd32(COW_IMG(0x10666e58u)), 4, 0xffffu, 2u, 0x12u, 0u);
        t44 = g->edx;
        g->edx = t44;
        cow_thiscall(g, COW_IMG(0x1021c7e0u), rd32(COW_IMG(0x10666e5cu)), 4, 0xffffu, 2u, 0x12u, 0u);
        t45 = g->edx;
        g->edx = t45;
        cow_thiscall(g, COW_IMG(0x1021c7e0u), rd32(COW_IMG(0x10666e60u)), 4, 0xffffu, 2u, 0x12u, 0u);
        t46 = g->edx;
        g->edx = t46;
        cow_thiscall(g, COW_IMG(0x1021c7e0u), rd32(COW_IMG(0x10666e64u)), 4, 0xffffu, 2u, 0x12u, 0u);
        t47 = g->edx;
        cow_thiscall(g, COW_IMG(0x1021c7e0u), rd32(COW_IMG(0x10666e68u)), 4, 0xffffu, 2u, 0x12u, 0u);
        g->ebx = (uint32_t)(int16_t)arg1;
        g->edx = arg4;
        t48 = rd32(COW_IMG(0x105781a8u));
        t49 = cow_thiscall(g, COW_IMG(0x10132b90u), t48, 1, arg4);
        t50 = g->ecx;
        t51 = g->edx;
        if ((uint8_t)t49 != 0u)
        {
            eax = t49;
            ecx = t50;
            edx = t51;
            g->edx = edx;
            g->esp = sp0 - 8u;
            cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
            t53 = g->edx;
            edx = t53;
        }
        else
        {
            eax = t49;
            ecx = t50;
            edx = t51;
            g->edx = edx;
            g->esp = sp0 - 8u;
            cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
            t52 = g->edx;
            edx = t52;
        }
    }
    else
    {
        wr8(self + 4u, 1u);
        t28 = rd32(self);
        t29 = rd8(arg4 + 2u);
        wr8(self + 8u, (uint8_t)t29);
        wr32(self + 0xcu, arg4);
        g->eax = t28;
        g->edx = (in_edx & 0xffffff00u) | t29;
        g->esp = sp0 - 0xcu;
        t30 = cow_thiscall(g, rd32(t28 + 0x54u), self, 0);
        t31 = g->edx;
        g->edx = t31;
        g->esp = sp0 - 0x10u;
        t32 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, rd16(arg4));
        t33 = g->edx;
        g->ebx = (uint32_t)(int16_t)arg1;
        g->edx = t33;
        g->esp = sp0 - 0xcu;
        t34 = cow_thiscall(g, COW_IMG(0x101316a0u), rd32(COW_IMG(0x105781a8u)), 3, arg4, t32, t30);
        t35 = g->edx;
        g->edx = t35;
        t36 = cow_call_regs(g, COW_IMG(0x10130be0u), t34, self, g->edx, 1, 0);
        t37 = g->ecx;
        t38 = g->edx;
        g->edx = t38;
        cow_thiscall(g, COW_IMG(0x10037b90u), t37, 0);
        t39 = g->edx;
        edx = t39;
    }
    t54 = rd32(rd32(COW_IMG(0x105781a8u)) + 8u);
    eax = rd32(COW_IMG(0x105781a8u));
    loc_10 = t54;
    goto L_10130a58;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101306f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101306f0(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
