/* f_0x1018f010 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1018f010(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 0xcu, in_esi);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    t1 = rd32(self + 8u);
    wr16(sp0 - 2u, 0u);
    wr32(sp0 - 0x10u, in_edi);
    wr32(sp0 - 0x14u, sp0 - 8u);
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 8u, t1, g->edx, 0, 1, sp0 - 8u);
    if ((int32_t)((uint32_t)(int16_t)rd16(self + 0x2220u) + (uint32_t)(int16_t)rd16(sp0 - 8u)) <= (int32_t)((uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u))) - 0x10u))
    {
        eax = (uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u)));
        edx = (uint32_t)(int16_t)rd16(self + 0x2220u) + (uint32_t)(int16_t)rd16(sp0 - 8u);
    }
    else
    {
        eax = (uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u)));
        ecx = (uint32_t)(int16_t)rd16(self + 0x2220u);
        edx = (uint32_t)(int16_t)rd16(self + 0x2220u) + (uint32_t)(int16_t)rd16(sp0 - 8u);
        t2 = (uint32_t)(int16_t)rd16(sp0 - 6u);
        wr32(sp0 - 0x14u, t2);
        t3 = eax - ecx - 0x10u;
        wr32(sp0 - 0x18u, t3);
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t4 = cow_call_regs(g, COW_IMG(0x10119110u), t3, rd32(self + 8u), g->edx, 0, 2, t3, t2);
        t5 = g->edx;
        eax = t4;
        edx = t5;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018f010(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1018f010(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
