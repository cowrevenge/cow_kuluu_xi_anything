/* f_0x10189e30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10189e30(Guest* g)
{
    uint32_t eax;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 88u);

    wr32(sp0 - 0x3cu, in_ebx);
    wr32(sp0 - 0x40u, in_esi);
    wr32(sp0 - 0x44u, in_edi);
    wr32(sp0 - 0x48u, sp0 - 0x38u);
    g->edx = in_edx;
    g->esp = sp0 - 0x44u;
    cow_thiscall(g, COW_IMG(0x10189c60u), self, 1, sp0 - 0x38u);
    t1 = g->edx;
    wr32(sp0 - 0x48u, 0x6f3c9000u);
    g->edx = t1;
    t2 = cow_thiscall(g, COW_IMG(0x1018bbc0u), sp0 - 0x34u, 1, 0x6f3c9000u);
    t3 = g->edx;
    g->edx = t3;
    t4 = rd32(self + 0xcu);
    t5 = cow_thiscall(g, COW_IMG(0x100742a0u), sp0 - 0x1cu, 0);
    t6 = g->edx;
    wr32(sp0 - 0x48u, 0xffffffffu);
    wr32(sp0 - 0x4cu, 0u);
    wr32(sp0 - 0x50u, 0x2fu);
    wr32(sp0 - 0x54u, t4);
    g->edx = t6;
    cow_thiscall(g, COW_IMG(0x100742b0u), sp0 - 0x1cu, 4, t4, 0x2fu, 0u, 0xffffffffu);
    t7 = g->edx;
    wr32(sp0 - 0x48u, 0u);
    g->edx = t7;
    t8 = cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x1cu, 1, 0u);
    t9 = g->edx;
    if (t8 == 0u)
    {
        edi = 0u;
        goto L_10189f06;
    }
    eax = t8;
    edx = t9;
    ebx = 0u;
    esi = t8;
L_10189e83: ;
    wr32(sp0 - 0x48u, sp0 - 0x28u);
    g->eax = eax;
    g->edx = edx;
    t10 = rd32(sp0 - 0x38u);
    g->esp = sp0 - 0x44u;
    t11 = cow_thiscall(g, COW_IMG(0x10072180u), esi, 1, sp0 - 0x28u);
    t12 = g->edx;
    if ((int32_t)rd32(t11) > (int32_t)t10)
    {
        edx = t12;
    }
    else
    {
        eax = t11;
        wr32(sp0 - 0x48u, sp0 - 0x24u);
        g->eax = eax;
        g->edx = sp0 - 0x24u;
        g->esp = sp0 - 0x44u;
        t13 = cow_thiscall(g, COW_IMG(0x10072180u), esi, 1, sp0 - 0x24u);
        t14 = g->edx;
        t15 = rd32(sp0 - 0x38u) - rd32(t13);
        wr32(sp0 - 0x48u, t15);
        cow_thiscall(g, COW_IMG(0x1018bbc0u), sp0 - 0x30u, 1, t15);
        if ((int32_t)rd32(sp0 - 0x30u) >= (int32_t)rd32(sp0 - 0x34u))
        {
            edx = rd32(sp0 - 0x30u);
        }
        else
        {
            edx = rd32(sp0 - 0x30u);
            wr32(sp0 - 0x48u, sp0 - 0x20u);
            g->eax = sp0 - 0x20u;
            g->edx = edx;
            g->esp = sp0 - 0x44u;
            t16 = cow_thiscall(g, COW_IMG(0x10072180u), esi, 1, sp0 - 0x20u);
            t17 = g->edx;
            t18 = rd32(sp0 - 0x38u) - rd32(t16);
            wr32(sp0 - 0x48u, t18);
            t19 = rd32(t16);
            t20 = cow_thiscall(g, COW_IMG(0x1018bbc0u), sp0 - 0x2cu, 1, t18);
            t21 = rd32(sp0 - 0x2cu);
            wr32(sp0 - 0x48u, t21);
            g->edx = t21;
            cow_thiscall(g, COW_IMG(0x1018bc40u), sp0 - 0x34u, 1, t21);
            t22 = g->edx;
            edx = t22;
            ebx = esi;
        }
    }
    wr32(sp0 - 0x48u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t23 = cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x1cu, 1, 0u);
    t24 = g->edx;
    if (t23 != 0u)
    {
        eax = t23;
        edx = t24;
        esi = t23;
        goto L_10189e83;
    }
    edi = esi;
    if (ebx != 0u) goto L_10189f11;
L_10189f06: ;
    return edi;
L_10189f11: ;
    g->ebx = rd32(sp0 - 0x3cu);
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    return ebx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10189e30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10189e30(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
