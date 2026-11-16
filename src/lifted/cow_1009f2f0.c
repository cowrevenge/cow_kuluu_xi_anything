/* f_0x1009f2f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1009f2f0(Guest* g)
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    cow_frame(g, sp0, 24u);

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x1018bbb0u), sp0 - 4u, 0);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x1018bbb0u), sp0 - 8u, 0);
    t4 = g->ecx;
    t5 = g->edx;
    if (rd8(COW_IMG(0x104807f6u)) != 0u)
    {
        eax = (t3 & 0xffffff00u) | rd8(COW_IMG(0x104807f6u));
        ecx = t4;
        edx = t5;
        if (rd8(COW_IMG(0x10487e48u)) == 0u)
        {
            t6 = rd32(COW_IMG(0x104807f8u));
            t7 = rd16(COW_IMG(0x104807f0u));
            t8 = rd16(COW_IMG(0x1047faacu));
            wr32(COW_IMG(0x104855a4u), t6);
            wr16(COW_IMG(0x10485fe0u), (uint16_t)t7);
            wr16(COW_IMG(0x10482f24u), (uint16_t)t8);
            wr32(sp0 - 0xcu, t6 * 0x3cu);
            g->edx = (edx & 0xffff0000u) | t8;
            g->esp = sp0 - 8u;
            cow_thiscall(g, COW_IMG(0x1018bbe0u), sp0 - 4u, 1, t6 * 0x3cu);
            t9 = g->edx;
            t10 = (uint16_t)rd32(COW_IMG(0x10482f24u)) * 0xe10u;
            wr32(sp0 - 0xcu, t10);
            cow_thiscall(g, COW_IMG(0x1018bc40u), sp0 - 8u, 1, t10);
            t11 = rd32(sp0 - 8u);
            wr32(sp0 - 0xcu, t11);
            t12 = rd32(sp0 - 4u);
            wr32(sp0 - 0x10u, t12);
            t13 = (uint16_t)rd32(COW_IMG(0x104807f0u));
            wr32(sp0 - 0x14u, t13);
            g->edx = t11;
            g->esp = sp0 - 0x10u;
            t14 = cow_thiscall(g, COW_IMG(0x1018bb10u), rd32(COW_IMG(0x1065cb04u)), 1, t13);
            t15 = g->edx;
            wr32(sp0 - 0x14u, t14);
            g->esp = sp0 - 8u;
            cow_thiscall(g, COW_IMG(0x101874f0u), rd32(COW_IMG(0x1065cb04u)), 3, t14, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
            wr8(COW_IMG(0x104807f6u), 0u);
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1009f2f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1009f2f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
