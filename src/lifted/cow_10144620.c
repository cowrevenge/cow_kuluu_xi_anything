/* f_0x10144620 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10144620(Guest* g)
{
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
    const uint32_t in_edx = g->edx;

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_stdcall(g, COW_IMG(0x10141c40u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    t4 = (t1 & 0xffff0000u) | rd8(COW_IMG(0x10485641u));
    g->ecx = t2;
    g->edx = t3;
    t5 = cow_cdecl(g, COW_IMG(0x100fda60u), 2, t4, t1);
    t6 = g->ecx;
    t7 = g->edx;
    t8 = cow_stdcall(g, COW_IMG(0x101444b0u), 0);
    t9 = (uint16_t)t5 + rd16(COW_IMG(0x105782aeu)) - t8;
    return t9;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10144620(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10144620(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
