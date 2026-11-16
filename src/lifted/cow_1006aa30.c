/* f_0x1006aa30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1006aa30(Guest* g)
{
    uint32_t ebp;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 0x18u) == 0u)
    {
        edx = in_edx;
        ebp = 0u;
        loc_4 = 0u;
    }
    else
    {
        if ((int32_t)rd32(self + 0xcu) <= 0)
        {
            edx = in_edx;
            ebp = 0u;
            loc_4 = 0u;
            goto L_1006aab8;
        }
        edi = 0u;
        loc_4 = 0u;
L_1006aa51: ;
        t1 = rd32(self + 0x20u);
        t2 = rd32(arg1 + 0xebcu);
        t3 = rd32(t2);
        g->esp = sp0 - 0x14u;
        cow_thiscall(g, rd32(t3 + 0x130u), t3, 2, t2, t1);
        t4 = g->ecx;
        t5 = rd32(self + 0x20u);
        g->edx = rd32(arg1 + 0xebcu);
        t6 = rd32(arg1 + 0xebcu);
        t7 = rd32(rd32(arg1 + 0xebcu));
        t8 = cow_cdecl(g, COW_IMG(0x1006a560u), 1, t5);
        t9 = g->edx;
        t10 = rd32(self + 4u);
        cow_thiscall(g, rd32(t7 + 0x14cu), t10, 4, t9, 0u, t10, t8);
        t11 = (uint32_t)(int16_t)rd16(edi * 2u + rd32(self + 0x18u)) - 2u;
        cow_thiscall(g, COW_IMG(0x1000cb20u), rd32(arg1 + 0xdc8u), 3, 5u, loc_4, t11);
        t12 = loc_4 + (uint32_t)(int16_t)rd16(edi * 2u + rd32(self + 0x18u));
        if ((int32_t)(edi + 1u) < (int32_t)rd32(self + 0xcu))
        {
            edi = edi + 1u;
            loc_4 = t12;
            goto L_1006aa51;
        }
        edx = (uint32_t)(int16_t)rd16(edi * 2u + rd32(self + 0x18u));
        ebp = t12;
        loc_4 = t12;
    }
L_1006aab8: ;
    if (rd32(self + 8u) != 0u)
    {
        t13 = rd32(self + 0x20u);
        t14 = rd32(arg1 + 0xebcu);
        t15 = rd32(t14);
        g->esp = sp0 - 0x14u;
        cow_thiscall(g, rd32(t15 + 0x130u), t15, 2, t14, t13);
        t16 = g->ecx;
        t17 = rd32(self + 0x20u);
        g->edx = rd32(arg1 + 0xebcu);
        t18 = rd32(arg1 + 0xebcu);
        t19 = rd32(rd32(arg1 + 0xebcu));
        t20 = cow_cdecl(g, COW_IMG(0x1006a560u), 1, t17);
        t21 = g->edx;
        t22 = rd32(self + 8u);
        cow_thiscall(g, rd32(t19 + 0x14cu), t22, 4, t21, 0u, t22, t20);
        t23 = rd32(self + 0x14u);
        g->edx = t23;
        cow_thiscall(g, COW_IMG(0x1000cb20u), rd32(arg1 + 0xdc8u), 3, 4u, 0u, t23);
        t24 = g->edx;
        edx = t24;
    }
    g->edx = edx;
    return ebp + rd32(self + 0x14u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006aa30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1006aa30(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
