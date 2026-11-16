/* f_0x1013a3e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1013a3e0(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 20u);

    wr32(sp0 - 0xcu, in_esi);
    t1 = rd32(self + 8u);
    wr32(self + 0x14u, 6u);
    wr32(self + 0x18u, 8u);
    if (t1 == 0u)
    {
        eax = 0u;
        edx = in_edx;
    }
    else
    {
        ecx = t1;
        wr16(sp0 - 8u, 0u);
        wr16(sp0 - 6u, 0u);
        wr16(sp0 - 4u, 0u);
        wr16(sp0 - 2u, 0u);
        wr32(sp0 - 0x10u, sp0 - 8u);
        g->esp = sp0 - 0xcu;
        cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 8u, ecx, g->edx, 0, 1, sp0 - 8u);
        t2 = (uint32_t)(int16_t)rd16(sp0 - 8u) + 6u;
        t3 = rd16(sp0 - 8u);
        t4 = rd16(sp0 - 6u);
        wr32(self + 0x14u, t2);
        t5 = (uint32_t)(int16_t)t4 + 8u;
        wr32(self + 0x18u, t5);
        wr32(self + 0x78u, t2);
        wr32(self + 0x7cu, t5);
        t6 = (uint32_t)(int16_t)rd16(sp0 - 4u) - (uint32_t)(int16_t)t3 - 0xcu;
        wr32(self + 0x80u, t6);
        eax = (uint32_t)(int16_t)t3;
        edx = t5;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013a3e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1013a3e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
