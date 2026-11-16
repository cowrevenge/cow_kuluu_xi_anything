/* f_0x102e8719 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102e8719(Guest* g)
{
    uint32_t eax;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 56u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    if (rd32(arg1 + 0x30u) != 0u)
    {
        t1 = rd32(arg1 + 8u);
        wr32(sp0 - 0x20u, t1);
        g->edx = in_edx;
        g->esp = sp0 - 0x1cu;
        cow_thiscall(g, rd32(rd32(rd32(arg1 + 8u)) + 0x8cu), rd32(rd32(arg1 + 8u)), 1, t1);
        t2 = g->edx;
        if (rd32(arg1 + 0x34u) != 0u)
        {
            edx = t2;
        }
        else
        {
            t3 = rd32(arg1 + 0x3cu) + rd32(arg1 + 0x44u);
            wr32(sp0 - 0xcu, t3);
            wr32(sp0 - 0x20u, sp0 - 0x14u);
            t4 = rd32(arg1 + 0x30u);
            wr32(sp0 - 0x24u, t4);
            t5 = rd32(arg1 + 0x3cu);
            wr32(sp0 - 0x14u, t5);
            wr32(sp0 - 0x28u, 1u);
            wr32(sp0 - 0x2cu, sp0 - 0x14u);
            t6 = rd32(arg1 + 0x20u);
            wr32(sp0 - 0x30u, t6);
            t7 = rd32(arg1 + 0x40u) + rd32(arg1 + 0x48u);
            wr32(sp0 - 8u, t7);
            t8 = rd32(arg1 + 0x40u);
            wr32(sp0 - 0x10u, t8);
            t9 = rd32(arg1 + 8u);
            wr32(sp0 - 0x34u, t9);
            g->edx = sp0 - 0x14u;
            g->esp = sp0 - 0x1cu;
            cow_thiscall(g, rd32(rd32(rd32(arg1 + 8u)) + 0x70u), rd32(rd32(arg1 + 8u)), 6, t9, t6, sp0 - 0x14u, 1u, t4, sp0 - 0x14u);
            t10 = g->edx;
            edx = t10;
        }
        t11 = rd32(arg1 + 0x2cu);
        wr32(sp0 - 0x20u, t11);
        t12 = rd32(arg1 + 0x24u);
        wr32(sp0 - 0x24u, t12);
        t13 = rd32(arg1 + 8u);
        wr32(sp0 - 0x28u, t13);
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        cow_thiscall(g, rd32(rd32(rd32(arg1 + 8u)) + 0x7cu), rd32(rd32(arg1 + 8u)), 3, t13, t12, t11);
        t14 = g->edx;
        t15 = rd32(arg1 + 0x38u);
        wr32(sp0 - 0x20u, t15);
        t16 = rd32(arg1 + 8u);
        wr32(sp0 - 0x24u, t16);
        g->edx = t14;
        cow_thiscall(g, rd32(rd32(rd32(arg1 + 8u)) + 0xd8u), rd32(rd32(arg1 + 8u)), 2, t16, t15);
        t17 = g->edx;
        if (rd32(arg1 + 0x24u) == 0u)
        {
            edx = t17;
        }
        else
        {
            eax = rd32(arg1 + 0x24u);
            edx = t17;
            wr32(sp0 - 0x20u, eax);
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
            t18 = g->edx;
            wr32(arg1 + 0x24u, 0u);
            edx = t18;
        }
        if (rd32(arg1 + 0x2cu) != 0u)
        {
            eax = rd32(arg1 + 0x2cu);
            wr32(sp0 - 0x20u, eax);
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
            t19 = g->edx;
            wr32(arg1 + 0x2cu, 0u);
            edx = t19;
        }
        if (rd32(arg1 + 0x30u) != 0u)
        {
            eax = rd32(arg1 + 0x30u);
            wr32(sp0 - 0x20u, eax);
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
            t20 = g->edx;
            wr32(arg1 + 0x30u, 0u);
            edx = t20;
        }
        eax = 0u;
    }
    else
    {
        eax = 0x80004005u;
        edx = in_edx;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e8719(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102e8719(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
