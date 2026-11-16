/* f_0x1018a0f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1018a0f0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    cow_frame(g, sp0, 100u);

    wr32(sp0 - 0x48u, in_ebx);
    wr32(sp0 - 0x4cu, in_ebp);
    wr32(sp0 - 0x50u, in_esi);
    wr32(sp0 - 0x54u, sp0 - 0x44u);
    g->edx = in_edx;
    g->esp = sp0 - 0x50u;
    cow_thiscall(g, COW_IMG(0x10189c60u), self, 1, sp0 - 0x44u);
    t1 = g->edx;
    wr32(sp0 - 0x54u, 0x6f3c9000u);
    g->edx = t1;
    cow_thiscall(g, COW_IMG(0x1018bbc0u), sp0 - 0x3cu, 1, 0x6f3c9000u);
    t2 = g->edx;
    wr32(sp0 - 0x54u, 0x6f3c9000u);
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x1018bbc0u), sp0 - 0x40u, 1, 0x6f3c9000u);
    t4 = g->edx;
    g->edx = t4;
    t5 = rd32(self + 0xcu);
    t6 = cow_thiscall(g, COW_IMG(0x100742a0u), sp0 - 0x1cu, 0);
    t7 = g->edx;
    wr32(sp0 - 0x54u, 0xffffffffu);
    wr32(sp0 - 0x58u, 0u);
    wr32(sp0 - 0x5cu, 0x2fu);
    wr32(sp0 - 0x60u, t5);
    g->edx = t7;
    cow_thiscall(g, COW_IMG(0x100742b0u), sp0 - 0x1cu, 4, t5, 0x2fu, 0u, 0xffffffffu);
    t8 = g->edx;
    wr32(sp0 - 0x54u, 0u);
    g->edx = t8;
    t9 = cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x1cu, 1, 0u);
    t10 = g->edx;
    if (t9 == 0u)
    {
        ebp = 0u;
        edi = in_edi;
        goto L_1018a206;
    }
    eax = t9;
    edx = t10;
    esi = t9;
    wr32(sp0 - 0x54u, in_edi);
    ebx = 0u;
    ebp = 0u;
L_1018a152: ;
    wr32(sp0 - 0x58u, sp0 - 0x30u);
    g->eax = eax;
    g->edx = edx;
    t11 = rd32(sp0 - 0x40u);
    g->esp = sp0 - 0x54u;
    t12 = cow_thiscall(g, COW_IMG(0x10072180u), esi, 1, sp0 - 0x30u);
    t13 = g->edx;
    if ((int32_t)rd32(t12) >= (int32_t)t11)
    {
        edx = t13;
    }
    else
    {
        eax = t12;
        wr32(sp0 - 0x58u, sp0 - 0x2cu);
        g->eax = eax;
        g->edx = sp0 - 0x2cu;
        g->esp = sp0 - 0x54u;
        t14 = cow_thiscall(g, COW_IMG(0x10072180u), esi, 1, sp0 - 0x2cu);
        t15 = g->edx;
        wr32(sp0 - 0x58u, rd32(t14));
        g->edx = t15;
        cow_thiscall(g, COW_IMG(0x1018bc40u), sp0 - 0x40u, 1, rd32(t14));
        t16 = g->edx;
        edx = t16;
        ebp = esi;
    }
    wr32(sp0 - 0x58u, sp0 - 0x28u);
    g->eax = sp0 - 0x28u;
    g->edx = edx;
    t17 = rd32(sp0 - 0x44u);
    g->esp = sp0 - 0x54u;
    t18 = cow_thiscall(g, COW_IMG(0x10072180u), esi, 1, sp0 - 0x28u);
    t19 = g->edx;
    if ((int32_t)rd32(t18) <= (int32_t)t17)
    {
        edx = t19;
    }
    else
    {
        eax = t18;
        edx = t19;
        wr32(sp0 - 0x58u, sp0 - 0x24u);
        g->eax = eax;
        g->esp = sp0 - 0x54u;
        t20 = cow_thiscall(g, COW_IMG(0x10072180u), esi, 1, sp0 - 0x24u);
        t21 = rd32(t20) - rd32(sp0 - 0x44u);
        wr32(sp0 - 0x58u, t21);
        g->edx = t21;
        cow_thiscall(g, COW_IMG(0x1018bbc0u), sp0 - 0x38u, 1, t21);
        t22 = g->edx;
        if ((int32_t)rd32(sp0 - 0x38u) >= (int32_t)rd32(sp0 - 0x3cu))
        {
            edx = t22;
        }
        else
        {
            eax = rd32(sp0 - 0x38u);
            edx = t22;
            wr32(sp0 - 0x58u, sp0 - 0x20u);
            g->eax = eax;
            t23 = rd32(sp0 - 0x44u);
            g->esp = sp0 - 0x54u;
            t24 = cow_thiscall(g, COW_IMG(0x10072180u), esi, 1, sp0 - 0x20u);
            t25 = rd32(t24) - t23;
            wr32(sp0 - 0x58u, t25);
            g->edx = t25;
            cow_thiscall(g, COW_IMG(0x1018bbc0u), sp0 - 0x34u, 1, t25);
            t26 = g->edx;
            t27 = rd32(sp0 - 0x34u);
            wr32(sp0 - 0x58u, t27);
            g->edx = t26;
            cow_thiscall(g, COW_IMG(0x1018bc40u), sp0 - 0x3cu, 1, t27);
            t28 = g->edx;
            edx = t28;
            ebx = esi;
        }
    }
    wr32(sp0 - 0x58u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x54u;
    t29 = cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x1cu, 1, 0u);
    t30 = g->edx;
    if (t29 != 0u)
    {
        eax = t29;
        edx = t30;
        esi = t29;
        goto L_1018a152;
    }
    if (ebx != 0u)
    {
        edi = rd32(sp0 - 0x54u);
        goto L_1018a211;
    }
    edi = rd32(sp0 - 0x54u);
L_1018a206: ;
    g->edi = edi;
    return ebp;
L_1018a211: ;
    g->ebx = rd32(sp0 - 0x48u);
    g->esi = rd32(sp0 - 0x50u);
    g->edi = edi;
    g->ebp = rd32(sp0 - 0x4cu);
    return ebx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018a0f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1018a0f0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
