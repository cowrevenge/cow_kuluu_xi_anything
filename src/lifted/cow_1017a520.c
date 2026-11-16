/* f_0x1017a520 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1017a520(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 20u);

    wr32(sp0 - 4u, in_esi);
    wr32(sp0 - 8u, in_edi);
    wr32(arg1 + 0x160u, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x101880b0u), rd32(COW_IMG(0x1065cb04u)), 0);
    t2 = g->edx;
    wr32(sp0 - 0xcu, t1);
    wr32(sp0 - 0x10u, sp0 + 4u);
    g->eax = sp0 + 4u;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x101674c0u), self + 0x34428u, 2, sp0 + 4u, t1);
    t4 = g->edx;
    wr32(arg1 + 0x160u, rd32(t3));
    g->edx = t4;
    return t3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1017a520(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1017a520(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
