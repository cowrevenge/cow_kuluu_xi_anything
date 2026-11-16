/* f_0x101ce1e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101ce1e0(Guest* g)
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
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_esi);
    if ((int32_t)arg1 < 0) goto L_101ce346;
    if ((int32_t)arg1 >= 5) goto L_101ce346;
    if (rd8(self + 4u) != 4u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        if (rd16(self + 0xau) != 0xeu)
        {
            eax = in_eax;
            edx = in_edx;
        }
        else
        {
            g->edx = in_edx;
            g->esp = sp0 - 0x18u;
            t1 = cow_call_regs(g, COW_IMG(0x101cda30u), in_eax, self, g->edx, 1, 0);
            t2 = g->ecx;
            t3 = g->edx;
            if (t1 == 0u)
            {
                eax = t1;
                edx = t3;
            }
            else
            {
                eax = t1;
                ecx = t2;
                edx = t3;
                g->edx = edx;
                g->esp = sp0 - 0x18u;
                t4 = cow_call_regs(g, COW_IMG(0x101cd9a0u), eax, ecx, g->edx, 1, 0);
                t5 = g->ecx;
                t6 = g->edx;
                if (t4 == 0u)
                {
                    eax = t4;
                    edx = t6;
                }
                else
                {
                    eax = t4;
                    ecx = t5;
                    edx = t6;
                    g->edx = edx;
                    g->esp = sp0 - 0x18u;
                    t7 = cow_call_regs(g, COW_IMG(0x101cd9a0u), eax, ecx, g->edx, 1, 0);
                    t8 = g->ecx;
                    t9 = g->edx;
                    t10 = rd32(t7 + 0x34u);
                    wr32(sp0 - 0x10u, t10);
                    g->edx = t9;
                    t11 = cow_call_regs(g, COW_IMG(0x101cd9a0u), t10, t8, g->edx, 1, 0);
                    t12 = g->edx;
                    t13 = rd32(t11 + 0x38u);
                    wr32(sp0 - 0xcu, t13);
                    t14 = cow_call_regs(g, COW_IMG(0x101cd9a0u), t11, self, g->edx, 1, 0);
                    t15 = g->ecx;
                    wr32(sp0 - 0x1cu, sp0 - 0x10u);
                    t16 = rd32(t14 + 0x3cu);
                    wr32(sp0 - 8u, t16);
                    wr32(sp0 - 0xcu, 0xba83126fu);
                    g->edx = t16;
                    g->esp = sp0 - 0x1cu;
                    t17 = cow_call_regs(g, COW_IMG(0x101cda30u), sp0 - 0x10u, t15, g->edx, 1, 0);
                    t18 = g->edx;
                    g->edx = t18;
                    g->esp = sp0 - 0x18u;
                    t19 = cow_thiscall(g, COW_IMG(0x100ab830u), t17, 1, sp0 - 0x10u);
                    t20 = g->edx;
                    t21 = rd32(self + 0x20u);
                    wr32(sp0 - 0x1cu, t21);
                    g->edx = t20;
                    t22 = cow_thiscall(g, COW_IMG(0x101cdf50u), self, 1, t21);
                    t23 = g->edx;
                    eax = t22;
                    edx = t23;
                }
            }
        }
    }
    if (arg1 > 3u) goto L_101ce343;
    t24 = rd32(COW_IMG(0x101ce350u) + arg1 * 4u);
    switch (t24 - RD)
    {
    case 0x101ce275u: goto L_101ce275;
    case 0x101ce295u: goto L_101ce295;
    case 0x101ce2c3u: goto L_101ce2c3;
    case 0x101ce31fu: goto L_101ce31f;
    default: rt_fatal(g, COW_IMG(0x101ce26eu), "switch");
    }
    return;
L_101ce275: ;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t37 = cow_call_regs(g, COW_IMG(0x101cd9a0u), eax, self, g->edx, 1, 0);
    t38 = g->ecx;
    t39 = g->edx;
    if (t37 != 0u)
    {
        eax = t37;
        ecx = t38;
        edx = t39;
        g->esp = sp0 - 0x18u;
        t40 = cow_call_regs(g, COW_IMG(0x101cd9a0u), eax, ecx, g->edx, 1, 0);
        wr8(t40 + 0xc0u, 1u);
    }
L_101ce336: ;
    wr8(rd32(COW_IMG(0x106631d4u)) + 0x7e4u, 0u);
L_101ce343: ;
    wr8(self + 4u, (uint8_t)arg1);
L_101ce346: ;
    g->ebx = in_ebx;
    return;
L_101ce295: ;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t33 = cow_call_regs(g, COW_IMG(0x101cd9a0u), eax, self, g->edx, 1, 0);
    t34 = g->ecx;
    t35 = g->edx;
    if (t33 != 0u)
    {
        eax = t33;
        ecx = t34;
        edx = t35;
        g->esp = sp0 - 0x18u;
        t36 = cow_call_regs(g, COW_IMG(0x101cd9a0u), eax, ecx, g->edx, 1, 0);
        wr8(t36 + 0xc0u, 2u);
    }
    wr8(rd32(COW_IMG(0x106631d4u)) + 0x7e4u, 0u);
    wr8(self + 4u, (uint8_t)arg1);
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    return;
L_101ce2c3: ;
    wr32(sp0 - 0x1cu, in_ebp);
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t29 = cow_thiscall(g, COW_IMG(0x101cebf0u), self, 0);
    t30 = g->edx;
    if ((uint8_t)t29 == 0u)
    {
        eax = t29;
        edx = t30;
    }
    else
    {
        edx = t30;
        if ((int32_t)rd32(self + 0x6cu) <= 0)
        {
            eax = rd32(self + 0x6cu);
        }
        else
        {
            wr32(sp0 - 0x20u, in_edi);
            ebp = 0u;
            edi = self + 0x70u;
L_101ce2dc: ;
            if (rd32(edi) != 0u)
            {
                eax = rd32(edi);
                wr32(sp0 - 0x24u, eax);
                g->ebx = arg1;
                g->edx = edx;
                g->esp = sp0 - 0x20u;
                cow_thiscall(g, COW_IMG(0x101d5ea0u), rd32(COW_IMG(0x106631d4u)), 1, eax);
                t31 = g->edx;
                edx = t31;
            }
            if ((int32_t)(ebp + 1u) < (int32_t)rd32(self + 0x6cu))
            {
                ebp = ebp + 1u;
                edi = edi + 4u;
                goto L_101ce2dc;
            }
            eax = rd32(self + 0x6cu);
        }
    }
    wr32(sp0 - 0x20u, self);
    g->ebx = arg1;
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, COW_IMG(0x101d5ea0u), rd32(COW_IMG(0x106631d4u)), 1, self);
    t32 = rd32(sp0 - 0x1cu);
    wr8(rd32(COW_IMG(0x106631d4u)) + 0x7e4u, 1u);
    wr8(self + 4u, (uint8_t)arg1);
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->ebp = t32;
    return;
L_101ce31f: ;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t25 = cow_call_regs(g, COW_IMG(0x101cd9a0u), eax, self, g->edx, 1, 0);
    t26 = g->ecx;
    t27 = g->edx;
    if (t25 != 0u)
    {
        eax = t25;
        ecx = t26;
        edx = t27;
        g->esp = sp0 - 0x18u;
        t28 = cow_call_regs(g, COW_IMG(0x101cd9a0u), eax, ecx, g->edx, 1, 0);
        wr8(t28 + 0xc0u, 2u);
    }
    goto L_101ce336;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ce1e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101ce1e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
