/* f_0x101f8b20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101f8b20(Guest* g)
{
    double d4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    t1 = rd32(COW_IMG(0x104e1d4cu));
    wr8(t1 + 0x87u, 1u);
    t2 = (uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u)));
    t3 = rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u));
    d4 = (double)(float)fr(g, fr(g, (double)(int32_t)t2 * (double)rdf32(COW_IMG(0x1032ac88u))) * (double)rdf32(COW_IMG(0x1032a3a0u)));
    g->edx = t2;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x101f8a00u), t1, self, g->edx, 0, 2, cow_f2bits(d4), 0xbf800000u);
    t5 = g->edx;
    wr16(self + 0x16u, 1u);
    t6 = rd32(rd32(COW_IMG(0x10663888u)) + 8u);
    cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t5, 2, t6, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f8b20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101f8b20(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
