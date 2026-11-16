/* f_0x1031cf81 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1031cf81(Guest* g)
{
    uint32_t t1;
    uint32_t t10;
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

    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x10329184u));
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, t1, self, 1, rd32(COW_IMG(0x103d2a24u)));
    t3 = g->ecx;
    t4 = g->edx;
    g->edx = t4;
    t5 = cow_thiscall(g, t1, t3, 1, rd32(COW_IMG(0x103d2a14u)));
    t6 = g->ecx;
    t7 = g->edx;
    g->edx = t7;
    t8 = cow_thiscall(g, t1, t6, 1, rd32(COW_IMG(0x103d2a04u)));
    t9 = g->ecx;
    t10 = g->edx;
    cow_thiscall(g, t1, t9, 1, rd32(COW_IMG(0x103d29e4u)));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031cf81(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1031cf81(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
