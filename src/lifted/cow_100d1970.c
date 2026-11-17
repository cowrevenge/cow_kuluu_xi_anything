/* f_0x100d1970 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_100d1970(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_8;
    uint32_t loc_c;
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
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    g->esp = sp0 - 0x1cu;
    t1 = cow_fastcall(g, COW_IMG(0x10084420u), self, in_edx, 0);
    t2 = g->edx;
    wr32(sp0 - 8u, t1);
    if ((int32_t)t1 < 9)
    {
        edx = t2;
        loc_8 = t1;
    }
    else
    {
        edx = t2;
        wr32(sp0 - 8u, 1u);
        loc_8 = 1u;
    }
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, loc_8);
    g->eax = loc_8;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t3 = cow_thiscall(g, COW_IMG(0x100d2d70u), self, 3, loc_8, 0u, 0u);
    t4 = g->edx;
    if ((int32_t)t3 <= 0)
    {
        edx = t4;
    }
    else
    {
        eax = t3;
        edx = t4;
        edi = t3;
        wr32(sp0 - 0x20u, edi);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t5 = cow_thiscall(g, COW_IMG(0x100d4520u), self, 1, edi);
        t6 = g->edx;
        if (t5 != 0u)
        {
            edx = t6;
        }
        else
        {
            eax = t5;
            edx = t6;
            wr32(sp0 - 0x20u, edi);
            wr32(sp0 - 0x24u, sp0 - 4u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            t7 = cow_stdcall(g, COW_IMG(0x100730e0u), 2, sp0 - 4u, edi);
            t8 = g->edx;
            wr32(sp0 - 0xcu, rd32(t7));
            if (rd32(t7) == 0u)
            {
                edx = t8;
            }
            else
            {
                eax = rd32(t7);
                edx = t8;
                loc_c = rd32(t7);
                wr32(sp0 - 0x20u, 5u);
                wr32(sp0 - 0x24u, edi);
                wr32(sp0 - 0x28u, 2u);
                wr32(sp0 - 0x2cu, eax);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x1cu;
                t9 = cow_thiscall(g, COW_IMG(0x100d4410u), self, 4, eax, 2u, edi, 5u);
                t10 = g->edx;
                g->edx = t10;
                t11 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 0xcu, 0);
                t12 = g->ecx;
                t13 = g->edx;
                if ((uint8_t)t11 == 0u)
                {
                    eax = t11;
                    ecx = t12;
                    edx = t13;
                    wr32(sp0 - 0x20u, 0x14u);
                    g->eax = eax;
                    g->esp = sp0 - 0x14u;
                    t17 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
                    t18 = g->edx;
                    if (t17 == 0u)
                    {
                        eax = t17;
                        edx = t18;
                        edi = 0u;
                    }
                    else
                    {
                        eax = t17;
                        edx = t18;
                        edi = t17;
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x1cu;
                        t19 = cow_thiscall(g, COW_IMG(0x100814a0u), edi + 4u, 0);
                        t20 = g->edx;
                        if (self == 0u)
                        {
                            eax = t19;
                            ebx = edi + 4u;
                            wr32(sp0 - 0x20u, self);
                            t24 = rd32(COW_IMG(0x1048a34cu));
                            wr32(edi, t24);
                            g->eax = eax;
                            g->edx = t24;
                            g->esp = sp0 - 0x1cu;
                            t25 = cow_thiscall(g, COW_IMG(0x100814f0u), ebx, 1, self);
                            t26 = g->edx;
                            wr32(edi + 0x10u, 2u);
                            eax = t25;
                            edx = t26;
                        }
                        else
                        {
                            eax = t19;
                            edx = t20;
                            ebx = edi + 4u;
                            wr32(sp0 - 0x20u, self);
                            t21 = rd32(self + 0x9ecu);
                            wr32(edi, t21);
                            g->eax = eax;
                            g->edx = edx;
                            g->esp = sp0 - 0x1cu;
                            t22 = cow_thiscall(g, COW_IMG(0x100814f0u), ebx, 1, self);
                            t23 = g->edx;
                            wr32(edi + 0x10u, 2u);
                            eax = t22;
                            edx = t23;
                        }
                    }
                    wr32(sp0 - 0x20u, 0u);
                    wr32(sp0 - 0x24u, self);
                    wr32(sp0 - 0x28u, edi);
                    wr32(sp0 - 0x2cu, COW_IMG(0x100d1400u));
                    g->edx = edx;
                    g->esp = sp0 - 0x1cu;
                    cow_thiscall(g, COW_IMG(0x100710f0u), sp0 - 0xcu, 4, COW_IMG(0x100d1400u), edi, self, 0u);
                    t27 = g->edx;
                    edx = t27;
                }
                else
                {
                    t14 = rd32(self + 0x9ecu);
                    wr32(sp0 - 0x20u, t14);
                    t15 = rd32(sp0 - 0xcu);
                    wr32(sp0 - 0x24u, t15);
                    g->edx = t14;
                    g->esp = sp0 - 0x1cu;
                    cow_thiscall(g, COW_IMG(0x100d1450u), self, 2, t15, t14);
                    t16 = g->edx;
                    edx = t16;
                }
            }
        }
    }
    ebp = 1u;
L_100d1a70: ;
    wr32(sp0 - 0x20u, ebp);
    t28 = rd32(sp0 - 8u);
    wr32(sp0 - 0x24u, t28);
    g->eax = t28;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t29 = cow_thiscall(g, COW_IMG(0x100d2e30u), self, 2, t28, ebp);
    t30 = g->edx;
    if ((int32_t)t29 < 0)
    {
        edx = t30;
    }
    else
    {
        eax = t29;
        edx = t30;
        edi = t29;
        wr32(sp0 - 0x20u, edi);
        wr32(sp0 - 0x24u, sp0 - 4u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t31 = cow_stdcall(g, COW_IMG(0x100730e0u), 2, sp0 - 4u, edi);
        t32 = g->edx;
        wr32(sp0 - 0xcu, rd32(t31));
        if (rd32(t31) == 0u)
        {
            edx = t32;
        }
        else
        {
            eax = rd32(t31);
            edx = t32;
            loc_c = rd32(t31);
            wr32(sp0 - 0x20u, 1u);
            wr32(sp0 - 0x24u, edi);
            wr32(sp0 - 0x28u, 1u);
            wr32(sp0 - 0x2cu, eax);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            t33 = cow_thiscall(g, COW_IMG(0x100d4410u), self, 4, eax, 1u, edi, 1u);
            t34 = g->edx;
            g->edx = t34;
            t35 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 0xcu, 0);
            t36 = g->ecx;
            t37 = g->edx;
            if ((uint8_t)t35 == 0u)
            {
                eax = t35;
                ecx = t36;
                edx = t37;
                wr32(sp0 - 0x20u, 0x14u);
                g->eax = eax;
                g->esp = sp0 - 0x14u;
                t41 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
                t42 = g->edx;
                if (t41 == 0u)
                {
                    eax = t41;
                    edx = t42;
                    edi = 0u;
                }
                else
                {
                    eax = t41;
                    edx = t42;
                    edi = t41;
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x1cu;
                    t43 = cow_thiscall(g, COW_IMG(0x100814a0u), edi + 4u, 0);
                    t44 = g->edx;
                    if (self == 0u)
                    {
                        eax = t43;
                        ebx = edi + 4u;
                        wr32(sp0 - 0x20u, self);
                        t48 = rd32(COW_IMG(0x1048a34cu));
                        wr32(edi, t48);
                        g->eax = eax;
                        g->edx = t48;
                        g->esp = sp0 - 0x1cu;
                        t49 = cow_thiscall(g, COW_IMG(0x100814f0u), ebx, 1, self);
                        t50 = g->edx;
                        wr32(edi + 0x10u, 1u);
                        eax = t49;
                        edx = t50;
                    }
                    else
                    {
                        eax = t43;
                        edx = t44;
                        ebx = edi + 4u;
                        wr32(sp0 - 0x20u, self);
                        t45 = rd32(self + 0x9ecu);
                        wr32(edi, t45);
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x1cu;
                        t46 = cow_thiscall(g, COW_IMG(0x100814f0u), ebx, 1, self);
                        t47 = g->edx;
                        wr32(edi + 0x10u, 1u);
                        eax = t46;
                        edx = t47;
                    }
                }
                wr32(sp0 - 0x20u, 0u);
                wr32(sp0 - 0x24u, self);
                wr32(sp0 - 0x28u, edi);
                wr32(sp0 - 0x2cu, COW_IMG(0x100d1400u));
                g->edx = edx;
                g->esp = sp0 - 0x1cu;
                cow_thiscall(g, COW_IMG(0x100710f0u), sp0 - 0xcu, 4, COW_IMG(0x100d1400u), edi, self, 0u);
                t51 = g->edx;
                edx = t51;
            }
            else
            {
                t38 = rd32(self + 0x9ecu);
                wr32(sp0 - 0x20u, t38);
                t39 = rd32(sp0 - 0xcu);
                wr32(sp0 - 0x24u, t39);
                g->edx = t38;
                g->esp = sp0 - 0x1cu;
                cow_thiscall(g, COW_IMG(0x100d1450u), self, 2, t39, t38);
                t40 = g->edx;
                edx = t40;
            }
        }
    }
    if ((int32_t)(ebp + 1u) < 3)
    {
        ebp = ebp + 1u;
        goto L_100d1a70;
    }
    ebp = 1u;
L_100d1b48: ;
    wr32(sp0 - 0x20u, ebp);
    wr32(sp0 - 0x24u, 1u);
    t52 = rd32(sp0 - 8u);
    wr32(sp0 - 0x28u, t52);
    g->eax = t52;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t53 = cow_thiscall(g, COW_IMG(0x100d2d70u), self, 3, t52, 1u, ebp);
    t54 = g->edx;
    if ((int32_t)t53 <= 0)
    {
        eax = t53;
        edx = t54;
    }
    else
    {
        eax = t53;
        edx = t54;
        edi = t53;
        wr32(sp0 - 0x20u, edi);
        wr32(sp0 - 0x24u, sp0 - 4u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t55 = cow_stdcall(g, COW_IMG(0x100730e0u), 2, sp0 - 4u, edi);
        t56 = g->edx;
        wr32(sp0 - 0xcu, rd32(t55));
        if (rd32(t55) == 0u)
        {
            eax = rd32(t55);
            edx = t56;
        }
        else
        {
            eax = rd32(t55);
            edx = t56;
            loc_c = rd32(t55);
            wr32(sp0 - 0x20u, 1u);
            wr32(sp0 - 0x24u, edi);
            wr32(sp0 - 0x28u, 2u);
            wr32(sp0 - 0x2cu, eax);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            t57 = cow_thiscall(g, COW_IMG(0x100d4410u), self, 4, eax, 2u, edi, 1u);
            t58 = g->edx;
            g->edx = t58;
            t59 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 0xcu, 0);
            t60 = g->ecx;
            t61 = g->edx;
            if ((uint8_t)t59 == 0u)
            {
                eax = t59;
                ecx = t60;
                edx = t61;
                wr32(sp0 - 0x20u, 0x14u);
                g->eax = eax;
                g->esp = sp0 - 0x14u;
                t66 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
                t67 = g->edx;
                if (t66 == 0u)
                {
                    eax = t66;
                    edx = t67;
                    edi = 0u;
                }
                else
                {
                    eax = t66;
                    edx = t67;
                    edi = t66;
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x1cu;
                    t68 = cow_thiscall(g, COW_IMG(0x100814a0u), edi + 4u, 0);
                    t69 = g->edx;
                    if (self == 0u)
                    {
                        eax = t68;
                        ebx = edi + 4u;
                        wr32(sp0 - 0x20u, self);
                        t73 = rd32(COW_IMG(0x1048a34cu));
                        wr32(edi, t73);
                        g->eax = eax;
                        g->edx = t73;
                        g->esp = sp0 - 0x1cu;
                        t74 = cow_thiscall(g, COW_IMG(0x100814f0u), ebx, 1, self);
                        t75 = g->edx;
                        wr32(edi + 0x10u, 2u);
                        eax = t74;
                        edx = t75;
                    }
                    else
                    {
                        eax = t68;
                        edx = t69;
                        ebx = edi + 4u;
                        wr32(sp0 - 0x20u, self);
                        t70 = rd32(self + 0x9ecu);
                        wr32(edi, t70);
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x1cu;
                        t71 = cow_thiscall(g, COW_IMG(0x100814f0u), ebx, 1, self);
                        t72 = g->edx;
                        wr32(edi + 0x10u, 2u);
                        eax = t71;
                        edx = t72;
                    }
                }
                wr32(sp0 - 0x20u, 0u);
                wr32(sp0 - 0x24u, self);
                wr32(sp0 - 0x28u, edi);
                wr32(sp0 - 0x2cu, COW_IMG(0x100d1400u));
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x1cu;
                t76 = cow_thiscall(g, COW_IMG(0x100710f0u), sp0 - 0xcu, 4, COW_IMG(0x100d1400u), edi, self, 0u);
                t77 = g->edx;
                eax = t76;
                edx = t77;
            }
            else
            {
                t62 = rd32(self + 0x9ecu);
                wr32(sp0 - 0x20u, t62);
                t63 = rd32(sp0 - 0xcu);
                wr32(sp0 - 0x24u, t63);
                g->eax = t63;
                g->edx = t62;
                g->esp = sp0 - 0x1cu;
                t64 = cow_thiscall(g, COW_IMG(0x100d1450u), self, 2, t63, t62);
                t65 = g->edx;
                eax = t64;
                edx = t65;
            }
        }
    }
    if ((int32_t)(ebp + 1u) < 3)
    {
        ebp = ebp + 1u;
        goto L_100d1b48;
    }
    wr32(sp0 - 0x20u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t78 = cow_thiscall(g, COW_IMG(0x100d44b0u), self, 1, 0u);
    t79 = g->edx;
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = rd32(sp0 - 0x14u);
    g->edx = t79;
    return t78;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d1970(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100d1970(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
