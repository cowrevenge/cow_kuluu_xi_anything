/* f_0x100a9a30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_100a9a30(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 16u);

    wr32(sp0 - 4u, in_esi);
    t1 = rd32(sp0 + 8u);
    wr32(sp0 + 8u, t1);
    wr32(sp0 - 8u, sp0 + 8u);
    wr32(sp0 - 0xcu, 1u);
    g->eax = sp0 + 8u;
    g->edx = rd32(self);
    t2 = rd32(self);
    g->esp = sp0 - 4u;
    t3 = cow_thiscall(g, rd32(t2 + 0x3e4u), self, 2, 1u, sp0 + 8u);
    t4 = g->edx;
    if (t3 == 0u)
    {
        eax = t3;
        edx = t4;
    }
    else
    {
        eax = t3;
        t5 = rd32(eax + 0xcu);
        wr32(eax + 4u, arg3);
        wr32(sp0 - 8u, eax);
        wr32(t5 + 0xcu, 3u);
        wr16(rd32(rd32(eax + 0xcu) + 0x20u) + 0xeu, (uint16_t)arg1);
        wr8(eax + 3u, 0u);
        g->eax = eax;
        g->edx = rd32(self);
        t6 = rd32(self);
        g->esp = sp0 - 4u;
        t7 = cow_thiscall(g, rd32(t6 + 0x2c0u), self, 1, eax);
        t8 = g->edx;
        eax = t7;
        edx = t8;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a9a30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a9a30(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
