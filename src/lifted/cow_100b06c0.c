/* f_0x100b06c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b06c0(Guest* g)
{
    double d6;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 5u);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 3u);
    t4 = g->ecx;
    t5 = g->edx;
    g->edx = t5;
    d6 = fr(g, fr(g, fr(g, atan2((double)(int32_t)-t3, (double)(float)(double)(int32_t)t1)) * (double)rdf32(COW_IMG(0x1032d3d8u))) * (double)rdf32(COW_IMG(0x1032b170u)));
    fpush(g, d6);
    t7 = cow_call_regs(g, COW_IMG(0x10311c6cu), -t3, g->ecx, g->edx, 1, 0);
    t8 = g->edx;
    cow_thiscall(g, COW_IMG(0x100af310u), self, 2, 1u, t7);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 7u));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b06c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b06c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
