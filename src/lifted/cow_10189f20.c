/* f_0x10189f20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10189f20(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_40;
    uint32_t loc_50;
    uint32_t loc_54;
    uint32_t loc_58;
    uint32_t loc_5c;
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
    uint32_t t5;
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
    cow_frame(g, sp0, 112u);

    wr32(sp0 - 0x50u, in_ebx);
    wr32(sp0 - 0x54u, in_ebp);
    wr32(sp0 - 0x58u, in_esi);
    wr32(sp0 - 0x5cu, in_edi);
    wr32(sp0 - 0x60u, sp0 - 0x4cu);
    wr32(sp0 - 0x3cu, self);
    g->edx = in_edx;
    g->esp = sp0 - 0x5cu;
    cow_thiscall(g, COW_IMG(0x10189c60u), self, 1, sp0 - 0x4cu);
    t1 = g->edx;
    wr32(sp0 - 0x60u, 0x6f3c9000u);
    g->edx = t1;
    cow_thiscall(g, COW_IMG(0x1018bbc0u), sp0 - 0x44u, 1, 0x6f3c9000u);
    t2 = g->edx;
    wr32(sp0 - 0x60u, 0x6f3c9000u);
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x1018bbc0u), sp0 - 0x48u, 1, 0x6f3c9000u);
    t4 = g->edx;
    wr32(sp0 - 0x40u, 0u);
    if (rd32(self + 0xcu) == 0u)
    {
        edi = 0u;
        goto L_1018a0c3;
    }
    eax = t3;
    edx = t4;
    esi = rd32(self + 0xcu);
    wr32(sp0 - 0x60u, 0x6f646e69u);
    wr32(sp0 - 0x64u, 1u);
    wr32(sp0 - 0x68u, sp0 - 0x34u);
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t5 = cow_call_regs(g, COW_IMG(0x100724c0u), eax, esi, g->edx, 0, 3, sp0 - 0x34u, 1u, 0x6f646e69u);
    t6 = g->edx;
    if (rd32(t5) == 0u)
    {
        eax = rd32(t5);
        edx = t6;
        ebx = 0u;
    }
    else
    {
        eax = rd32(t5);
        edx = t6;
        ebx = rd32(eax);
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t7 = cow_thiscall(g, COW_IMG(0x100742a0u), sp0 - 0x1cu, 0);
    t8 = g->edx;
    wr32(sp0 - 0x60u, 0xffffffffu);
    wr32(sp0 - 0x64u, 0u);
    wr32(sp0 - 0x68u, 0x3du);
    wr32(sp0 - 0x6cu, esi);
    g->edx = t8;
    cow_thiscall(g, COW_IMG(0x100742b0u), sp0 - 0x1cu, 4, esi, 0x3du, 0u, 0xffffffffu);
    t9 = g->edx;
    wr32(sp0 - 0x60u, 0u);
    g->edx = t9;
    t10 = cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x1cu, 1, 0u);
    t11 = g->edx;
    if (t10 == 0u)
    {
        edi = 0u;
        goto L_1018a0c3;
    }
    edx = t11;
    esi = t10;
    ebp = self;
    edi = 0u;
L_10189fb5: ;
    if (rd32(esi + 0x28u) == 0u)
    {
        eax = rd32(esi + 0x28u);
        ecx = 0u;
    }
    else
    {
        eax = rd32(esi + 0x28u);
        ecx = rd32(eax);
    }
    if (ecx != ebx)
    {
        ecx = rd32(COW_IMG(0x1065cb04u));
        goto L_10189fda;
    }
    ecx = rd32(COW_IMG(0x1065cb04u));
    if (rd32(ecx + 0x1bcu) == 0u)
    {
        edx = rd32(ecx + 0x1bcu);
        goto L_1018a0a6;
    }
    edx = rd32(ecx + 0x1bcu);
L_10189fda: ;
    if (ebx == 0u) goto L_10189ffa;
    if (eax == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(eax);
    }
    if (eax == ebx) goto L_10189ffa;
    if (rd32(ecx + 0x1bcu) != 0u) goto L_1018a0a6;
    eax = rd32(ecx + 0x1bcu);
L_10189ffa: ;
    wr32(sp0 - 0x60u, esi);
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t12 = cow_call_regs(g, COW_IMG(0x10189bd0u), eax, g->ecx, g->edx, 0, 1, esi);
    t13 = g->edx;
    if ((uint8_t)t12 == 0u)
    {
        edx = t13;
    }
    else
    {
        eax = t12;
        wr32(sp0 - 0x60u, sp0 - 0x30u);
        g->eax = eax;
        g->edx = sp0 - 0x30u;
        t14 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x5cu;
        t15 = cow_thiscall(g, COW_IMG(0x10072180u), esi, 1, sp0 - 0x30u);
        t16 = g->edx;
        if ((int32_t)rd32(t15) >= (int32_t)t14)
        {
            eax = t15;
            edx = t16;
        }
        else
        {
            edx = t16;
            wr32(sp0 - 0x60u, sp0 - 0x2cu);
            g->eax = sp0 - 0x2cu;
            g->edx = edx;
            g->esp = sp0 - 0x5cu;
            t17 = cow_thiscall(g, COW_IMG(0x10072180u), esi, 1, sp0 - 0x2cu);
            t18 = g->edx;
            wr32(sp0 - 0x60u, rd32(t17));
            g->eax = rd32(t17);
            g->edx = t18;
            t19 = rd32(t17);
            t20 = cow_thiscall(g, COW_IMG(0x1018bc40u), sp0 - 0x48u, 1, t19);
            t21 = g->edx;
            eax = t20;
            edx = t21;
        }
        wr32(sp0 - 0x60u, sp0 - 0x28u);
        g->eax = eax;
        g->edx = edx;
        t22 = rd32(sp0 - 0x4cu);
        g->esp = sp0 - 0x5cu;
        t23 = cow_thiscall(g, COW_IMG(0x10072180u), esi, 1, sp0 - 0x28u);
        t24 = g->edx;
        if ((int32_t)rd32(t23) <= (int32_t)t22)
        {
            edx = t24;
        }
        else
        {
            eax = t23;
            wr32(sp0 - 0x60u, sp0 - 0x24u);
            g->eax = eax;
            g->esp = sp0 - 0x5cu;
            t25 = cow_thiscall(g, COW_IMG(0x10072180u), esi, 1, sp0 - 0x24u);
            t26 = rd32(t25) - rd32(sp0 - 0x4cu);
            wr32(sp0 - 0x60u, t26);
            g->edx = rd32(sp0 - 0x4cu);
            t27 = rd32(sp0 - 0x4cu);
            cow_thiscall(g, COW_IMG(0x1018bbc0u), sp0 - 0x38u, 1, t26);
            t28 = g->edx;
            if ((int32_t)rd32(sp0 - 0x38u) >= (int32_t)rd32(sp0 - 0x44u))
            {
                edx = t28;
            }
            else
            {
                eax = rd32(sp0 - 0x44u);
                wr32(sp0 - 0x60u, sp0 - 0x20u);
                g->eax = eax;
                g->edx = sp0 - 0x20u;
                t29 = rd32(sp0 - 0x4cu);
                g->esp = sp0 - 0x5cu;
                t30 = cow_thiscall(g, COW_IMG(0x10072180u), esi, 1, sp0 - 0x20u);
                t31 = g->edx;
                t32 = rd32(t30) - t29;
                wr32(sp0 - 0x60u, t32);
                g->edx = t31;
                t33 = cow_thiscall(g, COW_IMG(0x1018bbc0u), sp0 - 0x34u, 1, t32);
                t34 = g->edx;
                t35 = rd32(sp0 - 0x34u);
                wr32(sp0 - 0x60u, t35);
                g->edx = t34;
                cow_thiscall(g, COW_IMG(0x1018bc40u), sp0 - 0x44u, 1, t35);
                t36 = g->edx;
                wr32(sp0 - 0x40u, esi);
                edx = t36;
                loc_40 = esi;
            }
        }
        edi = esi;
    }
L_1018a0a6: ;
    wr32(sp0 - 0x60u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t37 = cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x1cu, 1, 0u);
    t38 = g->edx;
    if (t37 != 0u)
    {
        edx = t38;
        esi = t37;
        goto L_10189fb1;
    }
    if (rd32(sp0 - 0x40u) != 0u)
    {
        eax = rd32(sp0 - 0x40u);
        goto L_1018a0d9;
    }
L_1018a0c3: ;
    if (edi != 0u)
    {
        eax = edi;
        loc_50 = in_ebx;
        loc_54 = in_ebp;
        loc_58 = in_esi;
        loc_5c = in_edi;
        goto L_1018a0d9;
    }
    wr32(arg1, edi);
    return;
L_10189fb1: ;
    ebp = rd32(sp0 - 0x3cu);
    goto L_10189fb5;
L_1018a0d9: ;
    t39 = rd32(eax + 0x14u);
    wr32(arg1, t39);
    g->ebx = loc_50;
    g->esi = loc_58;
    g->edi = loc_5c;
    g->ebp = loc_54;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10189f20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10189f20(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
