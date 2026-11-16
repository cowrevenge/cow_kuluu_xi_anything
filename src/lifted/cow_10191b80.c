/* f_0x10191b80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10191b80(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 0x14u, in_esi);
    if (rd32(COW_IMG(0x106626a0u)) == 0u)
    {
        eax = 0u;
        edx = in_edx;
    }
    else
    {
        ecx = rd32(COW_IMG(0x106626a0u));
        if (rd32(ecx + 8u) == 0u)
        {
            eax = 0u;
            edx = rd32(ecx + 8u);
        }
        else
        {
            edx = rd32(ecx + 8u);
            wr16(sp0 - 8u, 0u);
            wr16(sp0 - 6u, 0u);
            wr16(sp0 - 4u, 0u);
            wr16(sp0 - 2u, 0u);
            wr16(sp0 - 0x10u, 0u);
            wr16(sp0 - 0xeu, 0u);
            wr16(sp0 - 0xcu, 0u);
            wr16(sp0 - 0xau, 0u);
            wr32(sp0 - 0x18u, sp0 - 0x10u);
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t1 = cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 0x10u, edx, g->edx, 0, 1, sp0 - 0x10u);
            t2 = g->edx;
            wr32(sp0 - 0x18u, sp0 - 8u);
            g->edx = t2;
            t3 = rd32(self + 8u);
            t4 = cow_call_regs(g, COW_IMG(0x10118f70u), t1, t3, g->edx, 0, 1, sp0 - 8u);
            t5 = g->ecx;
            t6 = g->edx;
            if (rd16(sp0 - 6u) == rd16(sp0 - 0xeu))
            {
                eax = t4;
                edx = t6;
            }
            else
            {
                ecx = (t5 & 0xffff0000u) | rd16(sp0 - 0xeu);
                edx = t6;
                wr32(sp0 - 0x18u, (uint32_t)(int16_t)ecx);
                t7 = (uint32_t)(int16_t)rd16(sp0 - 0xcu) + 2u;
                wr32(sp0 - 0x1cu, t7);
                g->edx = edx;
                g->esp = sp0 - 0x14u;
                t8 = cow_call_regs(g, COW_IMG(0x10119110u), t7, rd32(self + 8u), g->edx, 0, 2, t7, (uint32_t)(int16_t)ecx);
                t9 = g->edx;
                eax = t8;
                edx = t9;
            }
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10191b80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10191b80(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
