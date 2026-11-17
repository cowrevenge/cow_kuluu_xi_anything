/* f_0x1021dd50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1021dd50(Guest* g)
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
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, self + 8u);
    t1 = rd32(self + 0x18u);
    wr32(sp0 - 0x18u, t1);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, rd32(rd32(t1) + 0x24u), rd32(t1), 2, t1, self + 8u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, sp0 - 8u);
    wr32(sp0 - 0x1cu, sp0 - 4u);
    wr32(sp0 - 0x20u, sp0 - 0xcu);
    t2 = rd32(self + 0x1cu);
    wr32(sp0 - 0x24u, t2);
    g->eax = t2;
    g->edx = sp0 - 0xcu;
    t3 = cow_thiscall(g, rd32(rd32(rd32(self + 0x1cu)) + 0x20u), rd32(rd32(self + 0x1cu)), 5, t2, sp0 - 0xcu, sp0 - 4u, sp0 - 8u, 0u);
    t4 = g->edx;
    if ((int32_t)t3 < 0)
    {
        eax = rd32(sp0 - 0xcu);
    }
    else
    {
        eax = rd32(sp0 - 0xcu);
        edx = t4;
        if (eax == 1u)
        {
            wr32(sp0 - 0x14u, 0u);
            wr32(sp0 - 0x18u, 0u);
            t5 = rd32(self + 0x18u);
            wr32(sp0 - 0x1cu, t5);
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, rd32(rd32(t5) + 0x20u), rd32(t5), 3, t5, 0u, 0u);
        }
        t6 = rd32(sp0 - 8u);
        wr32(sp0 - 0x14u, t6);
        t7 = rd32(sp0 - 4u);
        wr32(sp0 - 0x18u, t7);
        t8 = rd32(sp0 - 0xcu);
        wr32(sp0 - 0x1cu, t8);
        t9 = rd32(self + 0x1cu);
        wr32(sp0 - 0x20u, t9);
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, rd32(rd32(rd32(self + 0x1cu)) + 0x30u), t7, 4, t9, t8, t7, t6);
        eax = rd32(sp0 - 0xcu);
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1021dd50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1021dd50(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
