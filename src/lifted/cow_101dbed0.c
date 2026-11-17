/* f_0x101dbed0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_101dbed0(Guest* g)
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
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t69;
    uint32_t t7;
    uint32_t t70;
    uint32_t t71;
    uint32_t t72;
    uint32_t t73;
    uint32_t t74;
    uint32_t t75;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((uint32_t)(int16_t)rd16(sp0 + 4u) == 5u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 5u;
        goto L_101dbf8d;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 5u;
    if (eax != 1u)
    {
        eax = eax - 1u;
        edx = in_edx;
        goto L_101dc101;
    }
    eax = eax - 1u;
    if (rd8(self + 4u) == 0u) goto L_101dbf11;
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
L_101dbf11: ;
    if (rd32(self + 0x10u) != 0u)
    {
        eax = rd32(self + 0x10u);
        wr8(rd32(COW_IMG(0x10663740u)) + 0x91u, 1u);
        t10 = rd32(self + 8u);
        g->eax = eax;
        g->edx = t10;
        g->esp = sp0 - 4u;
        t11 = cow_thiscall(g, COW_IMG(0x101f23a0u), rd32(COW_IMG(0x10663740u)), 1, t10);
        t12 = g->edx;
        eax = t11;
        edx = t12;
    }
    else
    {
        g->eax = rd32(rd32(self + 8u));
        g->edx = in_edx;
        t5 = rd32(rd32(self + 8u));
        g->esp = sp0 - 8u;
        t6 = cow_thiscall(g, rd32(t5 + 0x54u), rd32(self + 8u), 0);
        t7 = g->edx;
        g->esp = sp0 - 4u;
        t8 = cow_fastcall(g, COW_IMG(0x101dc880u), rd32(COW_IMG(0x10663468u)), t7, 2, t6, 0u);
        t9 = g->edx;
        eax = t8;
        edx = t9;
    }
    g->eax = eax;
    g->esp = sp0 - 4u;
    t13 = cow_thiscall(g, COW_IMG(0x101dc110u), self, 0);
    wr32(rd32(COW_IMG(0x10663748u)) + 0x14u, t13);
    t14 = rd32(COW_IMG(0x10663748u));
    wr32(t14 + 0x18u, self);
    t15 = rd32(rd32(COW_IMG(0x10663748u)) + 8u);
    g->eax = rd32(COW_IMG(0x10663748u));
    t16 = rd32(COW_IMG(0x10663748u));
    t17 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t14, 2, t15, 0u);
    t18 = g->edx;
    g->edx = t18;
    t19 = cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, 0u, 2u);
    t20 = g->edx;
    g->edx = t20;
    return t19;
L_101dbf8d: ;
    if (rd8(self + 4u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 4u);
        goto L_101dc0cd;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 4u);
    g->eax = eax;
    g->edx = rd32(self);
    t21 = rd32(self);
    g->esp = sp0 - 0x10u;
    t22 = cow_thiscall(g, rd32(t21 + 0x54u), self, 0);
    t23 = g->edx;
    g->edx = t23;
    t24 = cow_thiscall(g, COW_IMG(0x101dc110u), self, 0);
    t25 = g->edx;
    wr32(sp0 + 4u, t24);
    if (rd32(self + 0x10u) != 0u)
    {
        eax = rd32(self + 0x10u);
        ebp = t22;
        t33 = rd8(self + 5u);
        g->edx = t33;
        g->esp = sp0 - 0x10u;
        t34 = cow_call_regs(g, COW_IMG(0x101f1160u), eax, rd32(COW_IMG(0x10663740u)), g->edx, 0, 1, t33);
        t35 = g->edx;
        g->edx = t35;
        t36 = rd32(COW_IMG(0x10663740u));
        t37 = cow_call_regs(g, COW_IMG(0x101f1160u), (uint8_t)arg3, t36, g->edx, 0, 1, (uint8_t)arg3);
        t38 = g->ecx;
        t39 = g->edx;
        eax = t37;
        ecx = t38;
        edx = t39;
        edi = t34;
    }
    else
    {
        edx = t25;
        ebp = t22;
        t26 = rd8(self + 5u);
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t27 = cow_call_regs(g, COW_IMG(0x101dc230u), t26, rd32(COW_IMG(0x10663468u)), g->edx, 0, 1, t26);
        t28 = g->edx;
        g->edx = t28;
        t29 = rd32(COW_IMG(0x10663468u));
        t30 = cow_call_regs(g, COW_IMG(0x101dc230u), t27, t29, g->edx, 0, 1, (uint8_t)arg3);
        t31 = g->ecx;
        t32 = g->edx;
        eax = t30;
        ecx = t31;
        edx = t32;
        edi = t27;
    }
    if ((uint8_t)arg3 == rd8(self + 5u))
    {
        if (rd32(edi + 4u) <= 1u)
        {
            eax = rd32(edi + 4u);
        }
        else
        {
            eax = rd32(edi + 4u);
            g->eax = eax;
            g->edx = edx;
            t51 = rd32(COW_IMG(0x10621808u));
            g->esp = sp0 - 0x10u;
            t52 = cow_thiscall(g, COW_IMG(0x1015b9e0u), t51, 1, rd16(edi));
            t53 = g->ecx;
            t54 = g->edx;
            if (t52 == 0u)
            {
                eax = t52;
                ecx = t53;
                edx = t54;
            }
            else
            {
                eax = t52;
                ecx = t53;
                edx = t54;
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
                        eax = (eax & 0xffffff00u) | rd16(eax) > 1u;
                        t55 = rd8(edi + 2u);
                        g->eax = eax;
                        g->ecx = ecx;
                        g->edx = t55;
                        g->esp = sp0 - 0x10u;
                        t56 = cow_cdecl(g, COW_IMG(0x100eb710u), 5, ebp, t55, ebp, 0x52u, 1u);
                        t57 = g->ecx;
                        t58 = g->edx;
                        if (ebp != 0u)
                        {
                            eax = t56;
                            ecx = t57;
                            edx = t58;
                        }
                        else
                        {
                            ecx = t57;
                            edx = t58;
                            t59 = rd32(sp0 + 4u);
                            wr8(t59 + 6u, 1u);
                            eax = t59;
                        }
                    }
                }
            }
        }
    }
    else
    {
        if (edi != 0u)
        {
            if (eax != 0u)
            {
                if (rd16(edi) == rd16(eax))
                {
                    t40 = rd32(edi + 4u);
                    t41 = rd8(eax + 2u);
                    t42 = rd8(edi + 2u);
                    g->eax = eax;
                    g->edx = t42;
                    g->esp = sp0 - 0x10u;
                    t43 = cow_cdecl(g, COW_IMG(0x100eb710u), 5, ebp, t42, ebp, t41, t40);
                    t44 = g->edx;
                    eax = t43;
                    edx = t44;
                }
            }
        }
        t45 = (arg3 & 0xffffff00u) | (uint8_t)((uint8_t)arg3 + 1u);
        t46 = (eax & 0xffffff00u) | (uint8_t)(rd8(self + 5u) + 1u);
        g->ebx = t45;
        g->eax = t46;
        g->edx = edx;
        t47 = rd32(sp0 + 4u);
        g->esp = sp0 - 0x10u;
        t48 = cow_thiscall(g, COW_IMG(0x1021cac0u), t47, 2, t46, t45);
        t49 = g->ecx;
        t50 = g->edx;
        eax = t48;
        ecx = t49;
        edx = t50;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t60 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 5u);
    t61 = g->edx;
    g->edx = t61;
    t62 = rd32(COW_IMG(0x105781f8u));
    g->esp = sp0 - 0x10u;
    t63 = cow_thiscall(g, COW_IMG(0x1013a320u), t62, 2, t60, 2u);
    t64 = g->ecx;
    t65 = g->edx;
    wr8(self + 4u, 0u);
    g->edx = t65;
    g->esp = sp0 - 4u;
    t66 = cow_thiscall(g, COW_IMG(0x10037b90u), t64, 0);
    t67 = g->edx;
    g->ebx = in_ebx;
    g->edx = t67;
    return t66;
L_101dc0cd: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t68 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 6u);
    t69 = g->edx;
    t70 = rd32(COW_IMG(0x105781f8u));
    g->esp = sp0 - 4u;
    t71 = cow_thiscall(g, COW_IMG(0x1013a320u), t70, 2, t68, 2u);
    t72 = g->ecx;
    wr8(self + 4u, 1u);
    wr8(self + 5u, (uint8_t)arg3);
    t73 = rd8(arg4 + 2u);
    wr8(self + 6u, (uint8_t)t73);
    g->eax = (t71 & 0xffffff00u) | t73;
    g->edx = arg4;
    t74 = cow_thiscall(g, COW_IMG(0x10037b90u), (t72 & 0xffffff00u) | (uint8_t)arg3, 0);
    t75 = g->edx;
    eax = t74;
    edx = t75;
L_101dc101: ;
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101dbed0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101dbed0(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
