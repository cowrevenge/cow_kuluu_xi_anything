/* f_0x10203920 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10203920(Guest* g)
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

    if (rd8(self + 0x40u) != 0u) goto L_10203a29;
    if (rd32(COW_IMG(0x106643e4u)) != 0u) goto L_10203a29;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x101598b0u), rd32(COW_IMG(0x1057876cu)), 0);
    t2 = g->edx;
    if (t1 == 0u) goto L_10203a23;
    eax = t1;
    edx = t2;
    t3 = rd32(eax + 0x78u);
    g->ebx = 0u;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t4 = cow_call_regs(g, COW_IMG(0x102031f0u), t3, g->ecx, g->edx, 0, 3, t3, 0u, 1u);
    t5 = g->ecx;
    t6 = g->edx;
    if ((uint8_t)t4 == 0u) goto L_10203a23;
    eax = t4;
    ecx = t5;
    edx = t6;
    if (rd32(COW_IMG(0x104dfd98u)) == 0u) goto L_10203a23;
    g->ebx = 0u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t7 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3bu, 0x27u, 0u, 0xffffffffu);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 == 0u)
    {
        eax = t7;
        ecx = t8;
        edx = t9;
    }
    else
    {
        edx = t9;
        t10 = rd32(COW_IMG(0x106643dcu)) - 1u;
        t11 = rd32(COW_IMG(0x106643dcu));
        wr32(COW_IMG(0x106643dcu), t10);
        if ((int32_t)(t11 - 1u) >= 0)
        {
            eax = t10;
        }
        else
        {
            eax = t10;
            wr32(COW_IMG(0x106643dcu), 0x11u);
        }
        g->eax = eax;
        g->ecx = self;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t12 = cow_stdcall(g, COW_IMG(0x102034e0u), 1, 0u);
        t13 = g->ecx;
        t14 = g->edx;
        if (t12 != 0u)
        {
            eax = t12;
            ecx = t13;
            edx = t14;
            goto L_102039c9;
        }
        edx = t14;
L_102039a6: ;
        t15 = rd32(COW_IMG(0x106643dcu)) - 1u;
        t16 = rd32(COW_IMG(0x106643dcu));
        wr32(COW_IMG(0x106643dcu), t15);
        if ((int32_t)(t16 - 1u) >= 0)
        {
            eax = t15;
        }
        else
        {
            eax = t15;
            wr32(COW_IMG(0x106643dcu), 0x11u);
        }
        g->eax = eax;
        g->ecx = self;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t17 = cow_stdcall(g, COW_IMG(0x102034e0u), 1, 0u);
        t18 = g->ecx;
        t19 = g->edx;
        if (t17 == 0u)
        {
            edx = t19;
            goto L_102039a6;
        }
        eax = t17;
        ecx = t18;
        edx = t19;
    }
L_102039c9: ;
    g->ebx = 0u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t20 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3bu, 0x28u, 0u, 0xffffffffu);
    t21 = g->edx;
    if ((uint8_t)t20 == 0u) goto L_10203a29;
    edx = t21;
    t22 = rd32(COW_IMG(0x106643dcu)) + 1u;
    t23 = rd32(COW_IMG(0x106643dcu));
    wr32(COW_IMG(0x106643dcu), t22);
    if ((int32_t)(t23 + 1u) < 18)
    {
        eax = t22;
    }
    else
    {
        eax = t22;
        wr32(COW_IMG(0x106643dcu), 0u);
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t24 = cow_stdcall(g, COW_IMG(0x102034e0u), 1, 0u);
    t25 = g->edx;
    if (t24 != 0u) goto L_10203a29;
    edx = t25;
L_102039fe: ;
    t26 = rd32(COW_IMG(0x106643dcu)) + 1u;
    t27 = rd32(COW_IMG(0x106643dcu));
    wr32(COW_IMG(0x106643dcu), t26);
    if ((int32_t)(t27 + 1u) < 18)
    {
        eax = t26;
    }
    else
    {
        eax = t26;
        wr32(COW_IMG(0x106643dcu), 0u);
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t28 = cow_stdcall(g, COW_IMG(0x102034e0u), 1, 0u);
    t29 = g->edx;
    if (t28 == 0u)
    {
        edx = t29;
        goto L_102039fe;
    }
    g->ebx = in_ebx;
    return;
L_10203a23: ;
    wr32(COW_IMG(0x106643dcu), 0u);
L_10203a29: ;
    g->ebx = in_ebx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10203920(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10203920(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
