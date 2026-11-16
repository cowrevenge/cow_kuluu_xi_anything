/* f_0x10150c50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10150c50(Guest* g)
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 8u) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        ecx = rd32(self + 8u);
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x10118f70u), in_eax, ecx, g->edx, 0, 1, self + 0x14u);
        t1 = g->edx;
        t2 = (uint32_t)(int16_t)rd16(self + 0x14u) + 4u;
        t3 = rd16(self + 0x16u);
        wr32(self + 0x9cu, t2);
        t4 = (uint32_t)(int16_t)t3 + 8u;
        wr32(self + 0xa0u, t4);
        wr32(self + 0xfcu, t2);
        wr32(self + 0x100u, t4);
        t5 = (uint32_t)(int16_t)rd16(self + 0x18u) - (uint32_t)(int16_t)rd16(self + 0x14u) - 8u;
        wr32(self + 0x104u, t5);
        eax = t5;
        edx = t1;
    }
    wr16(self + 0x448u, 0u);
    wr32(self + 0x44cu, 0xb4u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10150c50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10150c50(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
