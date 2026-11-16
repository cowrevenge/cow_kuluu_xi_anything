/* f_0x1003ee70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1003ee70(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 0x20u, in_esi);
    if (rd32(self + 0x104u) == 0u)
    {
        eax = rd32(self + 0x104u);
        edx = in_edx;
    }
    else
    {
        g->edx = in_edx;
        g->esp = sp0 - 0x20u;
        t1 = cow_stdcall(g, COW_IMG(0x10054d70u), 0);
        t2 = g->edx;
        g->edx = t2;
        t3 = cow_thiscall(g, COW_IMG(0x1003eb30u), self, 0);
        t4 = g->edx;
        g->edx = t4;
        cow_thiscall(g, COW_IMG(0x10045d40u), self, 0);
        t5 = g->edx;
        t6 = rd32(self + 0xd0u);
        wr32(sp0 - 0xcu, t6);
        g->eax = t6;
        g->edx = t5;
        t7 = cow_thiscall(g, COW_IMG(0x10045d40u), self, 0);
        t8 = g->edx;
        t9 = rd32(self + 0xd4u);
        wr32(sp0 - 8u, t9);
        cow_thiscall(g, COW_IMG(0x10045d40u), self, 0);
        wr32(sp0 - 0x24u, sp0 - 0x18u);
        wr32(sp0 - 0x28u, sp0 - 0xcu);
        t10 = rd32(self + 0xd8u);
        wr32(sp0 - 4u, t10);
        wr32(sp0 - 0x10u, 0u);
        wr32(sp0 - 0x14u, 0u);
        wr32(sp0 - 0x18u, 0u);
        g->eax = sp0 - 0x18u;
        g->edx = t10;
        t11 = cow_stdcall(g, COW_IMG(0x10054f80u), 2, sp0 - 0xcu, sp0 - 0x18u);
        t12 = g->edx;
        eax = t11;
        edx = t12;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1003ee70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1003ee70(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
