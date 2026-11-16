/* f_0x1018a7a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1018a7a0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_48;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 108u);

    wr32(sp0 - 0x4cu, in_ebx);
    wr32(sp0 - 0x50u, in_ebp);
    wr32(sp0 - 0x54u, in_esi);
    wr32(sp0 - 0x58u, in_edi);
    wr32(self, COW_IMG(0x103299f0u));
    g->edx = in_edx;
    g->esp = sp0 - 0x58u;
    t1 = cow_thiscall(g, COW_IMG(0x1018bbb0u), self + 0x14u, 0);
    t2 = g->edx;
    g->edx = t2;
    cow_thiscall(g, COW_IMG(0x1018bbb0u), self + 0x18u, 0);
    t3 = g->edx;
    wr32(self, COW_IMG(0x10336814u));
    wr32(self + 4u, arg1);
    wr8(self + 0x34u, 0u);
    t4 = rd32(arg1 + 0x14u);
    t5 = rd32(arg1 + 0x14u);
    t6 = rd32(sp0 - 0x48u);
    wr32(self + 0xcu, t4);
    if (t5 == 0u) goto L_1018aa39;
    ecx = t4;
    edx = t3;
    loc_48 = t6 & 0xffffffu;
    wr32(sp0 - 0x5cu, 0x74616577u);
    wr32(sp0 - 0x60u, 1u);
    wr32(sp0 - 0x64u, sp0 + 4u);
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    t7 = cow_call_regs(g, COW_IMG(0x100724c0u), sp0 + 4u, ecx, g->edx, 0, 3, sp0 + 4u, 1u, 0x74616577u);
    t8 = g->edx;
    if (rd32(t7) == 0u)
    {
        eax = rd32(t7);
        edx = t8;
    }
    else
    {
        eax = rd32(t7);
        edx = t8;
        if (rd32(eax) == 0u)
        {
            eax = rd32(eax);
        }
        else
        {
            eax = rd32(eax);
            wr32(self + 0xcu, eax);
            loc_48 = (rd32(sp0 - 0x48u) & 0xffffffu) | 0x1000000u;
        }
    }
    t9 = rd32(sp0 + 8u);
    wr32(sp0 - 0x5cu, t9);
    wr32(sp0 - 0x60u, 1u);
    wr32(sp0 - 0x64u, sp0 + 4u);
    g->edx = edx;
    t10 = rd32(self + 0xcu);
    g->esp = sp0 - 0x58u;
    t11 = cow_call_regs(g, COW_IMG(0x100724c0u), eax, t10, g->edx, 0, 3, sp0 + 4u, 1u, t9);
    t12 = g->ecx;
    t13 = g->edx;
    if (rd32(t11) == 0u)
    {
        eax = rd32(t11);
        ecx = t12;
        edx = t13;
        ebp = t9;
        goto L_1018a828;
    }
    eax = rd32(t11);
    ecx = t12;
    edx = t13;
    ebp = t9;
    if (rd32(eax) != 0u)
    {
        eax = rd32(eax);
        goto L_1018a876;
    }
    eax = rd32(eax);
L_1018a828: ;
    if (rd8(sp0 - 0x45u) == 1u)
    {
        wr32(sp0 - 0x5cu, sp0 - 0x44u);
        wr32(sp0 - 0x60u, COW_IMG(0x10377ab0u));
        wr32(sp0 - 0x44u, ebp);
        g->edx = sp0 - 0x44u;
        t14 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x60u;
        cow_stdcall(g, COW_IMG(0x10017d20u), 0);
        t15 = g->edx;
        edx = t15;
    }
    wr32(sp0 - 0x5cu, 0x796e7573u);
    wr32(sp0 - 0x60u, 1u);
    wr32(sp0 - 0x64u, sp0 + 4u);
    t16 = rd32(self + 0xcu);
    wr32(sp0 + 8u, 0x796e7573u);
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    t17 = cow_call_regs(g, COW_IMG(0x100724c0u), sp0 + 4u, t16, g->edx, 0, 3, sp0 + 4u, 1u, 0x796e7573u);
    t18 = g->edx;
    if (rd32(t17) == 0u) goto L_1018a99d;
    eax = rd32(t17);
    edx = t18;
    if (rd32(eax) == 0u) goto L_1018a99d;
    eax = rd32(eax);
L_1018a876: ;
    t19 = rd32(self + 4u);
    wr32(self + 0xcu, eax);
    if (rd32(t19 + 0x14u) != 0u)
    {
        ecx = rd32(t19 + 0x14u);
        wr32(sp0 - 0x5cu, 0x74616577u);
        wr32(sp0 - 0x60u, 1u);
        wr32(sp0 - 0x64u, sp0 + 4u);
        g->edx = sp0 + 4u;
        g->esp = sp0 - 0x58u;
        t20 = cow_call_regs(g, COW_IMG(0x100724c0u), eax, ecx, g->edx, 0, 3, sp0 + 4u, 1u, 0x74616577u);
        t21 = g->edx;
        if (rd32(t20) == 0u)
        {
            eax = rd32(t20);
            edx = t21;
        }
        else
        {
            eax = rd32(t20);
            edx = t21;
            if (rd32(eax) != 0u)
            {
                edi = rd32(eax);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x58u;
                t22 = cow_thiscall(g, COW_IMG(0x100742a0u), sp0 - 0x1cu, 0);
                t23 = g->edx;
                wr32(sp0 - 0x5cu, 0xffffffffu);
                wr32(sp0 - 0x60u, 0u);
                wr32(sp0 - 0x64u, 7u);
                wr32(sp0 - 0x68u, edi);
                g->edx = t23;
                cow_thiscall(g, COW_IMG(0x100742b0u), sp0 - 0x1cu, 4, edi, 7u, 0u, 0xffffffffu);
                t24 = g->edx;
                wr32(sp0 - 0x5cu, 0u);
                g->edx = t24;
                t25 = cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x1cu, 1, 0u);
                t26 = g->edx;
                if (t25 == 0u)
                {
                    eax = t25;
                    edx = t26;
                    goto L_1018a8db;
                }
                eax = t25;
                edx = t26;
L_1018a8c6: ;
                g->edx = edx;
                g->esp = sp0 - 0x58u;
                cow_thiscall(g, COW_IMG(0x10056eb0u), eax, 0);
                t27 = g->edx;
                wr32(sp0 - 0x5cu, 0u);
                g->edx = t27;
                t28 = cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x1cu, 1, 0u);
                t29 = g->edx;
                if (t28 != 0u)
                {
                    eax = t28;
                    edx = t29;
                    goto L_1018a8c6;
                }
                eax = t28;
                edx = t29;
            }
        }
    }
L_1018a8db: ;
    if (rd32(self + 0xcu) != 0u)
    {
        g->edx = edx;
        g->esp = sp0 - 0x58u;
        cow_thiscall(g, COW_IMG(0x100742a0u), sp0 - 0x1cu, 0);
        t30 = g->edx;
        wr32(sp0 - 0x5cu, 0xffffffffu);
        wr32(sp0 - 0x60u, 0u);
        wr32(sp0 - 0x64u, 7u);
        t31 = rd32(self + 0xcu);
        wr32(sp0 - 0x68u, t31);
        g->edx = t30;
        cow_thiscall(g, COW_IMG(0x100742b0u), sp0 - 0x1cu, 4, t31, 7u, 0u, 0xffffffffu);
        t32 = g->edx;
        wr32(sp0 - 0x5cu, 0u);
        g->edx = t32;
        t33 = cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x1cu, 1, 0u);
        t34 = g->edx;
        if (t33 == 0u)
        {
            eax = t33;
            edx = t34;
            goto L_1018a92f;
        }
        edx = t34;
        edi = t33;
L_1018a90b: ;
        g->edx = edx;
        g->esp = sp0 - 0x58u;
        t35 = cow_thiscall(g, COW_IMG(0x10056e80u), edi, 0);
        t36 = g->edx;
        if ((uint8_t)t35 == 0u)
        {
            edx = t36;
        }
        else
        {
            edx = t36;
            wr32(sp0 - 0x5cu, 0u);
            wr32(sp0 - 0x60u, 0u);
            g->edx = edx;
            g->esp = sp0 - 0x58u;
            cow_thiscall(g, COW_IMG(0x10056b80u), edi, 2, 0u, 0u);
            t37 = g->edx;
            edx = t37;
        }
        wr32(sp0 - 0x5cu, 0u);
        g->edx = edx;
        g->esp = sp0 - 0x58u;
        t38 = cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x1cu, 1, 0u);
        t39 = g->edx;
        if (t38 != 0u)
        {
            edx = t39;
            edi = t38;
            goto L_1018a90b;
        }
        eax = t38;
        edx = t39;
    }
L_1018a92f: ;
    wr32(sp0 - 0x5cu, arg3);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    t40 = cow_thiscall(g, COW_IMG(0x1018bc40u), self + 0x18u, 1, arg3);
    t41 = g->edx;
    t42 = rd32(self + 0x18u);
    wr32(sp0 - 0x5cu, t42);
    g->edx = t41;
    cow_thiscall(g, COW_IMG(0x1018bc40u), self + 0x14u, 1, t42);
    t43 = g->edx;
    g->edx = t43;
    t44 = cow_thiscall(g, COW_IMG(0x1018ad70u), self, 0);
    t45 = g->edx;
    wr32(sp0 - 0x5cu, self);
    wr32(self + 8u, t44);
    t46 = cow_thiscall(g, COW_IMG(0x1018ad60u), self, 1, self);
    wr32(sp0 - 0x5cu, self);
    wr32(sp0 - 0x60u, COW_IMG(0x1018aa50u));
    wr32(sp0 - 0x64u, 0u);
    wr32(sp0 - 0x68u, 5u);
    t47 = rd32(sp0 + 8u);
    t48 = rd32(self + 0xcu);
    wr32(self + 0x10u, t47);
    wr8(self + 0x35u, 0u);
    wr32(self + 0x2cu, 0u);
    wr32(self + 0x30u, 0u);
    wr32(self + 0x20u, 0u);
    wr32(self + 0x24u, 0u);
    wr32(self + 0x28u, 0u);
    wr32(self + 0x36u, 0u);
    wr32(self + 0x3au, 0u);
    wr32(self + 0x3eu, 0u);
    wr32(self + 0x42u, 0u);
    cow_call_regs(g, COW_IMG(0x10072540u), t46, t48, g->edx, 0, 4, 5u, 0u, COW_IMG(0x1018aa50u), self);
    g->ebx = rd32(sp0 - 0x4cu);
    g->esi = rd32(sp0 - 0x54u);
    g->edi = rd32(sp0 - 0x58u);
    g->ebp = rd32(sp0 - 0x50u);
    return self;
L_1018a99d: ;
    wr32(sp0 - 0x3cu, 0x796e7573u);
    t49 = rd32(arg1 + 8u);
    wr32(sp0 - 0x44u, t49);
    t50 = rd32(rd32(self + 0xcu) + 0x20u);
    wr32(sp0 - 0x34u, t50);
    wr32(sp0 - 0x5cu, sp0 - 0x44u);
    wr32(sp0 - 0x60u, sp0 - 0x3cu);
    wr32(sp0 - 0x64u, sp0 - 0x34u);
    wr32(sp0 - 0x68u, COW_IMG(0x10377a58u));
    g->edx = sp0 - 0x34u;
    g->esp = sp0 - 0x68u;
    cow_stdcall(g, COW_IMG(0x10017d30u), 0);
    t51 = g->edx;
    wr32(sp0 - 0x5cu, 0x74616577u);
    wr32(sp0 - 0x60u, 1u);
    wr32(sp0 - 0x64u, sp0 + 8u);
    g->esp = sp0 - 0x58u;
    t52 = cow_stdcall(g, COW_IMG(0x10072290u), 3, sp0 + 8u, 1u, 0x74616577u);
    if (rd32(t52) == 0u) goto L_1018aa09;
    eax = rd32(t52);
    if (rd32(eax) == 0u) goto L_1018aa09;
    eax = rd32(eax);
    wr32(self + 0xcu, eax);
    g->ebx = rd32(sp0 - 0x4cu);
    g->esi = rd32(sp0 - 0x54u);
    g->edi = rd32(sp0 - 0x58u);
    g->ebp = rd32(sp0 - 0x50u);
    return self;
L_1018aa09: ;
    wr32(sp0 - 0x24u, 0x796e7573u);
    wr32(sp0 - 0x5cu, sp0 - 0x2cu);
    wr32(sp0 - 0x60u, sp0 - 0x24u);
    wr32(sp0 - 0x64u, COW_IMG(0x10377a08u));
    t53 = rd32(rd32(COW_IMG(0x1065cb04u)) + 8u);
    wr32(sp0 - 0x2cu, t53);
    g->esp = sp0 - 0x64u;
    cow_stdcall(g, COW_IMG(0x10017d20u), 0);
L_1018aa39: ;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018a7a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1018a7a0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
