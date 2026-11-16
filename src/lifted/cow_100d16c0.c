/* f_0x100d16c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_100d16c0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_8;
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
    uint32_t t76;
    uint32_t t77;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 0xcu, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x10084400u), self, 0);
    t2 = g->edx;
    if (t1 == 2u)
    {
        eax = t1 - 2u;
        edx = t2;
        ebx = in_ebx;
        ebp = in_ebp;
        edi = in_edi;
        goto L_100d196a;
    }
    edx = t2;
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_edi);
    g->esp = sp0 - 0x18u;
    t3 = cow_fastcall(g, COW_IMG(0x10084420u), self, edx, 0);
    t4 = g->edx;
    if ((int32_t)t3 < 9)
    {
        edx = t4;
        ebp = t3;
    }
    else
    {
        edx = t4;
        ebp = 1u;
    }
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, ebp);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t5 = cow_thiscall(g, COW_IMG(0x100d2d70u), self, 3, ebp, 0u, 0u);
    t6 = g->edx;
    if ((int32_t)t5 <= 0)
    {
        edx = t6;
    }
    else
    {
        edx = t6;
        edi = t5;
        wr32(sp0 - 0x1cu, edi);
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t7 = cow_thiscall(g, COW_IMG(0x100d4520u), self, 1, edi);
        t8 = g->edx;
        if (t7 != 0u)
        {
            edx = t8;
        }
        else
        {
            edx = t8;
            wr32(sp0 - 0x1cu, edi);
            wr32(sp0 - 0x20u, sp0 - 4u);
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            t9 = cow_stdcall(g, COW_IMG(0x100730e0u), 2, sp0 - 4u, edi);
            t10 = g->edx;
            wr32(sp0 - 8u, rd32(t9));
            if (rd32(t9) == 0u)
            {
                edx = t10;
            }
            else
            {
                eax = rd32(t9);
                edx = t10;
                loc_8 = rd32(t9);
                wr32(sp0 - 0x1cu, 5u);
                wr32(sp0 - 0x20u, edi);
                wr32(sp0 - 0x24u, 2u);
                wr32(sp0 - 0x28u, eax);
                g->edx = edx;
                g->esp = sp0 - 0x18u;
                cow_thiscall(g, COW_IMG(0x100d4410u), self, 4, eax, 2u, edi, 5u);
                t11 = g->edx;
                g->edx = t11;
                t12 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 8u, 0);
                t13 = g->ecx;
                t14 = g->edx;
                if ((uint8_t)t12 == 0u)
                {
                    ecx = t13;
                    edx = t14;
                    wr32(sp0 - 0x1cu, 0x14u);
                    g->esp = sp0 - 0x10u;
                    t18 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
                    t19 = g->edx;
                    if (t18 == 0u)
                    {
                        eax = t18;
                        edx = t19;
                        edi = 0u;
                    }
                    else
                    {
                        eax = t18;
                        edx = t19;
                        edi = t18;
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x18u;
                        t20 = cow_thiscall(g, COW_IMG(0x100814a0u), edi + 4u, 0);
                        t21 = g->edx;
                        if (self == 0u)
                        {
                            eax = t20;
                            edx = t21;
                            ebx = edi + 4u;
                            wr32(sp0 - 0x1cu, self);
                            wr32(edi, rd32(COW_IMG(0x1048a34cu)));
                            g->eax = eax;
                            g->edx = edx;
                            g->esp = sp0 - 0x18u;
                            t25 = cow_thiscall(g, COW_IMG(0x100814f0u), ebx, 1, self);
                            t26 = g->edx;
                            wr32(edi + 0x10u, 2u);
                            eax = t25;
                            edx = t26;
                        }
                        else
                        {
                            edx = t21;
                            ebx = edi + 4u;
                            wr32(sp0 - 0x1cu, self);
                            t22 = rd32(self + 0x9ecu);
                            wr32(edi, t22);
                            g->eax = t22;
                            g->edx = edx;
                            g->esp = sp0 - 0x18u;
                            t23 = cow_thiscall(g, COW_IMG(0x100814f0u), ebx, 1, self);
                            t24 = g->edx;
                            wr32(edi + 0x10u, 2u);
                            eax = t23;
                            edx = t24;
                        }
                    }
                    wr32(sp0 - 0x1cu, 0u);
                    wr32(sp0 - 0x20u, self);
                    wr32(sp0 - 0x24u, edi);
                    wr32(sp0 - 0x28u, COW_IMG(0x100d1400u));
                    g->edx = edx;
                    g->esp = sp0 - 0x18u;
                    cow_thiscall(g, COW_IMG(0x100710f0u), sp0 - 8u, 4, COW_IMG(0x100d1400u), edi, self, 0u);
                    t27 = g->edx;
                    edx = t27;
                }
                else
                {
                    eax = t12;
                    t15 = rd32(self + 0x9ecu);
                    wr32(sp0 - 0x1cu, t15);
                    t16 = rd32(sp0 - 8u);
                    wr32(sp0 - 0x20u, t16);
                    g->edx = t16;
                    g->esp = sp0 - 0x18u;
                    cow_thiscall(g, COW_IMG(0x100d1450u), self, 2, t16, t15);
                    t17 = g->edx;
                    edx = t17;
                }
            }
        }
    }
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, ebp);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t28 = cow_thiscall(g, COW_IMG(0x100d2e30u), self, 2, ebp, 0u);
    t29 = g->edx;
    if ((int32_t)t28 < 0)
    {
        edx = t29;
    }
    else
    {
        edi = t28;
        wr32(sp0 - 0x1cu, edi);
        wr32(sp0 - 0x20u, sp0 - 4u);
        g->edx = sp0 - 4u;
        g->esp = sp0 - 0x18u;
        t30 = cow_stdcall(g, COW_IMG(0x100730e0u), 2, sp0 - 4u, edi);
        t31 = g->edx;
        wr32(sp0 - 8u, rd32(t30));
        if (rd32(t30) == 0u)
        {
            edx = t31;
        }
        else
        {
            eax = rd32(t30);
            edx = t31;
            loc_8 = rd32(t30);
            wr32(sp0 - 0x1cu, 1u);
            wr32(sp0 - 0x20u, edi);
            wr32(sp0 - 0x24u, 1u);
            wr32(sp0 - 0x28u, eax);
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            cow_thiscall(g, COW_IMG(0x100d4410u), self, 4, eax, 1u, edi, 1u);
            t32 = g->edx;
            g->edx = t32;
            t33 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 8u, 0);
            t34 = g->ecx;
            t35 = g->edx;
            if ((uint8_t)t33 == 0u)
            {
                ecx = t34;
                edx = t35;
                wr32(sp0 - 0x1cu, 0x14u);
                g->esp = sp0 - 0x10u;
                t39 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
                t40 = g->edx;
                if (t39 == 0u)
                {
                    eax = t39;
                    edx = t40;
                    edi = 0u;
                }
                else
                {
                    eax = t39;
                    edx = t40;
                    edi = t39;
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x18u;
                    t41 = cow_thiscall(g, COW_IMG(0x100814a0u), edi + 4u, 0);
                    t42 = g->edx;
                    if (self == 0u)
                    {
                        edx = t42;
                        ebx = edi + 4u;
                        wr32(sp0 - 0x1cu, self);
                        t46 = rd32(COW_IMG(0x1048a34cu));
                        wr32(edi, t46);
                        g->eax = t46;
                        g->edx = edx;
                        g->esp = sp0 - 0x18u;
                        t47 = cow_thiscall(g, COW_IMG(0x100814f0u), ebx, 1, self);
                        t48 = g->edx;
                        wr32(edi + 0x10u, 1u);
                        eax = t47;
                        edx = t48;
                    }
                    else
                    {
                        eax = t41;
                        ebx = edi + 4u;
                        wr32(sp0 - 0x1cu, self);
                        t43 = rd32(self + 0x9ecu);
                        wr32(edi, t43);
                        g->eax = eax;
                        g->edx = t43;
                        g->esp = sp0 - 0x18u;
                        t44 = cow_thiscall(g, COW_IMG(0x100814f0u), ebx, 1, self);
                        t45 = g->edx;
                        wr32(edi + 0x10u, 1u);
                        eax = t44;
                        edx = t45;
                    }
                }
                wr32(sp0 - 0x1cu, 0u);
                wr32(sp0 - 0x20u, self);
                wr32(sp0 - 0x24u, edi);
                wr32(sp0 - 0x28u, COW_IMG(0x100d1400u));
                g->edx = edx;
                g->esp = sp0 - 0x18u;
                cow_thiscall(g, COW_IMG(0x100710f0u), sp0 - 8u, 4, COW_IMG(0x100d1400u), edi, self, 0u);
                t49 = g->edx;
                edx = t49;
            }
            else
            {
                edx = t35;
                t36 = rd32(self + 0x9ecu);
                wr32(sp0 - 0x1cu, t36);
                t37 = rd32(sp0 - 8u);
                wr32(sp0 - 0x20u, t37);
                g->edx = edx;
                g->esp = sp0 - 0x18u;
                cow_thiscall(g, COW_IMG(0x100d1450u), self, 2, t37, t36);
                t38 = g->edx;
                edx = t38;
            }
        }
    }
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, ebp);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t50 = cow_thiscall(g, COW_IMG(0x100d2d70u), self, 3, ebp, 1u, 0u);
    t51 = g->edx;
    if ((int32_t)t50 <= 0)
    {
        eax = t50;
        edx = t51;
        goto L_100d195e;
    }
    edx = t51;
    edi = t50;
    wr32(sp0 - 0x1cu, edi);
    wr32(sp0 - 0x20u, sp0 - 4u);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t52 = cow_stdcall(g, COW_IMG(0x100730e0u), 2, sp0 - 4u, edi);
    t53 = g->edx;
    wr32(sp0 - 8u, rd32(t52));
    if (rd32(t52) == 0u)
    {
        eax = rd32(t52);
        edx = t53;
        goto L_100d195e;
    }
    eax = rd32(t52);
    edx = t53;
    loc_8 = rd32(t52);
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, edi);
    wr32(sp0 - 0x24u, 2u);
    wr32(sp0 - 0x28u, eax);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x100d4410u), self, 4, eax, 2u, edi, 1u);
    t54 = g->edx;
    g->edx = t54;
    t55 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 8u, 0);
    t56 = g->ecx;
    t57 = g->edx;
    if ((uint8_t)t55 == 0u)
    {
        ecx = t56;
        edx = t57;
        goto L_100d18fa;
    }
    t58 = rd32(self + 0x9ecu);
    wr32(sp0 - 0x1cu, t58);
    t59 = rd32(sp0 - 8u);
    wr32(sp0 - 0x20u, t59);
    g->eax = t59;
    g->edx = t58;
    g->esp = sp0 - 0x18u;
    t60 = cow_thiscall(g, COW_IMG(0x100d1450u), self, 2, t59, t58);
    t61 = g->edx;
    wr32(sp0 - 0x1cu, 0u);
    g->edx = t61;
    t62 = cow_thiscall(g, COW_IMG(0x100d44b0u), self, 1, 0u);
    t63 = g->edx;
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = rd32(sp0 - 0x14u);
    g->edx = t63;
    return t62;
L_100d18fa: ;
    wr32(sp0 - 0x1cu, 0x14u);
    g->esp = sp0 - 0x10u;
    t64 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t65 = g->edx;
    if (t64 == 0u)
    {
        eax = t64;
        edx = t65;
        edi = 0u;
    }
    else
    {
        eax = t64;
        edx = t65;
        edi = t64;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t66 = cow_thiscall(g, COW_IMG(0x100814a0u), edi + 4u, 0);
        t67 = g->edx;
        if (self == 0u)
        {
            eax = t66;
            ebx = edi + 4u;
            wr32(sp0 - 0x1cu, self);
            t71 = rd32(COW_IMG(0x1048a34cu));
            wr32(edi, t71);
            g->eax = eax;
            g->edx = t71;
            g->esp = sp0 - 0x18u;
            t72 = cow_thiscall(g, COW_IMG(0x100814f0u), ebx, 1, self);
            t73 = g->edx;
            wr32(edi + 0x10u, 2u);
            eax = t72;
            edx = t73;
        }
        else
        {
            eax = t66;
            edx = t67;
            ebx = edi + 4u;
            wr32(sp0 - 0x1cu, self);
            t68 = rd32(self + 0x9ecu);
            wr32(edi, t68);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            t69 = cow_thiscall(g, COW_IMG(0x100814f0u), ebx, 1, self);
            t70 = g->edx;
            wr32(edi + 0x10u, 2u);
            eax = t69;
            edx = t70;
        }
    }
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, self);
    wr32(sp0 - 0x24u, edi);
    wr32(sp0 - 0x28u, COW_IMG(0x100d1400u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t74 = cow_thiscall(g, COW_IMG(0x100710f0u), sp0 - 8u, 4, COW_IMG(0x100d1400u), edi, self, 0u);
    t75 = g->edx;
    eax = t74;
    edx = t75;
L_100d195e: ;
    wr32(sp0 - 0x1cu, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t76 = cow_thiscall(g, COW_IMG(0x100d44b0u), self, 1, 0u);
    t77 = g->edx;
    eax = t76;
    edx = t77;
    ebx = rd32(sp0 - 0x10u);
    ebp = rd32(sp0 - 0x14u);
    edi = rd32(sp0 - 0x18u);
L_100d196a: ;
    g->ebx = ebx;
    g->edi = edi;
    g->ebp = ebp;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d16c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100d16c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
