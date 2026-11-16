/* f_0x1013f3c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1013f3c0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, 0u);
    t1 = rd32(self + 0x18u);
    wr32(sp0 - 4u, t1);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, sp0 - 8u);
    t2 = rd32(self + 0x14u);
    wr32(sp0 - 8u, t2);
    g->edx = sp0 - 8u;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x101602f0u), COW_IMG(0x10621838u), 3, sp0 - 8u, 0u, 0u);
    t3 = g->edx;
    t4 = rd32(sp0 - 4u);
    wr32(sp0 - 0x10u, t4);
    t5 = rd32(sp0 - 8u);
    wr32(sp0 - 0x14u, t5);
    g->edx = t3;
    t6 = cow_call_regs(g, COW_IMG(0x10119110u), t4, rd32(self + 8u), g->edx, 0, 2, t5, t4);
    t7 = g->edx;
    if (rd16(self + 0x20u) == 0u)
    {
        eax = (t6 & 0xffff0000u) | rd16(self + 0x20u);
        edx = t7;
    }
    else
    {
        eax = (t6 & 0xffff0000u) | rd16(self + 0x20u);
        edx = t7;
        if ((uint16_t)eax != 0xffffu)
        {
            wr32(sp0 - 0x10u, 1u);
            wr32(sp0 - 0x14u, 5u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t8 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 1u);
            t9 = g->edx;
            eax = t8;
            edx = t9;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013f3c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1013f3c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
