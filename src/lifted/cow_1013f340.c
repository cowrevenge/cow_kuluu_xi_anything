/* f_0x1013f340 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1013f340(Guest* g)
{
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x1013f130u), rd32(COW_IMG(0x10578214u)), 0);
    t1 = g->edx;
    t2 = rd16(sp0 + 4u);
    t3 = rd32(sp0 + 0xcu);
    wr32(sp0 + 0xcu, 0u);
    esi = t3;
    edi = self + 0x1cu;
    ecx = 8u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t4 = rd16(sp0 + 8u);
    wr32(self + 0x14u, (uint32_t)(int16_t)t2);
    wr32(self + 0x18u, (uint32_t)(int16_t)t4);
    wr32(sp0 + 8u, 1u);
    wr32(sp0 + 4u, COW_IMG(0x1036ff54u));
    g->esp = sp0;
    g->edx = t1;
    cow_tailcall(g, COW_IMG(0x1015e350u), (uint32_t)(int16_t)t2, COW_IMG(0x10621838u), t1);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013f340(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1013f340(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
