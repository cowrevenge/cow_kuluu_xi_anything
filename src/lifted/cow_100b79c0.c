/* f_0x100b79c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b79c0(Guest* g)
{
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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

    g->eax = rd32(COW_IMG(0x104e2150u));
    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x104e2150u));
    t2 = rd32(rd32(COW_IMG(0x104e2150u)) + 0x30u);
    g->esp = sp0 - 8u;
    t3 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 3u);
    t4 = g->edx;
    g->edx = t4;
    g->esp = sp0 - 0xcu;
    t5 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
    t6 = g->edx;
    g->edx = t6;
    g->esp = sp0 - 8u;
    t7 = cow_call_regs(g, COW_IMG(0x10136870u), t5, t2, g->edx, 0, 3, 1u, t5, t3);
    t8 = g->edx;
    g->edx = t8;
    t9 = rd32(rd32(COW_IMG(0x104e2154u)) + 0x30u);
    t10 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 3u);
    t11 = g->edx;
    g->edx = t11;
    g->esp = sp0 - 0xcu;
    t12 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
    t13 = g->edx;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x10136870u), t12, t9, g->edx, 0, 3, 1u, t12, t10);
    wr8(COW_IMG(0x10487fc9u), 1u);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 5u));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b79c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b79c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
