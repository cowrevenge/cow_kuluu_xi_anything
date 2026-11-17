/* f_0x1024c330 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1024c330(Guest* g)
{
    double d19;
    double d23;
    double d4;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_10;
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
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t24;
    uint32_t t25;
    uint32_t t3;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0x10u, in_esi);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_call_regs(g, COW_IMG(0x10014cf0u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    d4 = cow_take_float(g);
    g->edx = t3;
    fpush(g, d4);
    t5 = cow_call_regs(g, COW_IMG(0x10311c6cu), t1, g->ecx, g->edx, 1, 0);
    t6 = g->edx;
    t7 = rd32(self + 0x14u) - t5;
    t8 = rd32(self + 0x14u);
    wr32(self + 0x14u, t7);
    if ((int32_t)(t8 - t5) >= 0)
    {
        ecx = t7;
        edx = t6;
    }
    else
    {
        t9 = rd32(self + 0x24u);
        t10 = rd32(self + 0x28u);
        wr32(self + 0x14u, 3u);
        wr32(self + 0x28u, t10 + 1u);
        if ((int32_t)(t10 + 1u) < (int32_t)t9)
        {
            ecx = t9;
            edx = t10 + 1u;
        }
        else
        {
            ecx = t9;
            edx = t10 + 1u;
            wr32(self + 0x28u, 0u);
        }
    }
    if (rd32(COW_IMG(0x10669134u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10669134u));
        loc_10 = in_esi;
    }
    else
    {
        eax = rd32(COW_IMG(0x10669134u));
        wr32(sp0 - 0x14u, 0xffffffffu);
        wr32(sp0 - 0x18u, 1u);
        wr32(sp0 - 0x1cu, 0x30u);
        wr32(sp0 - 0x20u, 0x3fu);
        g->edx = edx;
        g->esp = sp0 - 4u;
        t11 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3fu, 0x30u, 1u, 0xffffffffu, in_esi, rd32(sp0 - 0xcu), rd32(sp0 - 8u));
        t12 = g->edx;
        if ((uint8_t)t11 != 0u)
        {
            edx = t12;
            if (rd32(self + 0x20u) == 0u)
            {
                ecx = rd32(COW_IMG(0x106693fcu));
                t13 = rd32(self + 0x18u);
                wr32(sp0 - 0x14u, t13);
                g->esp = sp0 - 0x10u;
                cow_fastcall(g, COW_IMG(0x102518b0u), ecx, edx, 1, t13);
                wr32(self + 0x20u, 1u);
            }
            else
            {
                eax = rd32(self + 0x20u);
                ecx = rd32(COW_IMG(0x106693fcu));
                wr32(sp0 - 0x14u, 0u);
                g->esp = sp0 - 0x10u;
                cow_fastcall(g, COW_IMG(0x102518b0u), ecx, edx, 1, 0u);
                wr32(self + 0x20u, 0u);
            }
        }
        wr32(sp0 - 0x14u, sp0 - 8u);
        wr32(sp0 - 0x18u, sp0 - 0xcu);
        t14 = rd32(self + 0x18u);
        wr32(sp0 - 0x1cu, t14);
        wr32(sp0 - 0x20u, 0u);
        g->esi = self;
        g->edx = sp0 - 0xcu;
        t15 = rd32(COW_IMG(0x106693fcu));
        g->esp = sp0 - 0x10u;
        t16 = cow_call_regs(g, COW_IMG(0x102519c0u), t14, t15, g->edx, 0, 4, 0u, t14, sp0 - 0xcu, sp0 - 8u);
        t17 = g->ecx;
        t18 = g->edx;
        if (t16 != 0u)
        {
            eax = t16;
            edx = t18;
            loc_10 = rd32(sp0 - 0x10u);
        }
        else
        {
            eax = t16;
            ecx = t17;
            edx = t18;
            g->ecx = ecx;
            g->edx = edx;
            d19 = (double)rdf32(sp0 - 8u);
            fpush(g, d19);
            g->esp = sp0 - 0x10u;
            t20 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
            t21 = g->ecx;
            t22 = g->edx;
            d23 = (double)rdf32(sp0 - 4u);
            wr32(self + 0x2cu, t20);
            g->edx = t22;
            fpush(g, d23);
            t24 = cow_call_regs(g, COW_IMG(0x10311c6cu), t20, g->ecx, g->edx, 1, 0);
            t25 = g->edx;
            wr32(self + 0x30u, t24);
            eax = t24;
            edx = t25;
            loc_10 = rd32(sp0 - 0x10u);
        }
    }
    g->esi = loc_10;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1024c330(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1024c330(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
