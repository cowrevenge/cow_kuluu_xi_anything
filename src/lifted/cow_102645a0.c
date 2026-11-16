/* f_0x102645a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102645a0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    t1 = rd32(self + 0xbcu);
    g->eax = t1;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, rd32(COW_IMG(0x103291fcu)), self, 1, t1);
    t3 = g->edx;
    t4 = rd32(self + 0xc0u);
    t5 = cow_thiscall(g, rd32(COW_IMG(0x103291c4u)), t4, 1, t4);
    t6 = g->ecx;
    t7 = rd32(self + 0xc0u);
    cow_thiscall(g, rd32(COW_IMG(0x10329104u)), t6, 1, t7);
    wr32(self + 0xc4u, 2u);
    wr32(self + 0xc0u, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102645a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102645a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
