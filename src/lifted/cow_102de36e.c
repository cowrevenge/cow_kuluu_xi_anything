/* f_0x102de36e - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102de36e(Guest* g)
{
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

    t1 = rd32(rd32(self + 4u) + 0x1050u);
    t2 = rd32(rd32(self) + 0x1050u);
    t3 = rd32(rd32(self) + 0x105cu);
    t4 = rd32(rd32(self) + 0x1058u);
    t5 = rd32(rd32(self) + 0x18u);
    t6 = rd32(rd32(self + 4u) + 0x18u);
    g->edx = rd32(self + 4u);
    t7 = rd32(self + 4u);
    g->esp = sp0 - 4u;
    cow_thiscall_cdecl(g, rd32(COW_IMG(0x103ccb4cu)), t5, 6, t6, t5, t4, t3, t2, t1);
    t8 = g->edx;
    g->edx = t8;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102de36e(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102de36e(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
