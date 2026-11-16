/* f_0x100dbeb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100dbeb0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;

    cow_stdcall(g, COW_IMG(0x100dbf20u), 0);
    t1 = rd32(rd32(COW_IMG(0x10492e10u)) + 0x10u);
    t2 = rd32(rd32(COW_IMG(0x10492e10u)) + 4u);
    t3 = rd32(COW_IMG(0x10492e10u));
    t4 = cow_cdecl(g, COW_IMG(0x100dbf00u), 3, 0x3e8u, t2, t1);
    t5 = rd32(COW_IMG(0x10492e10u));
    wr32(t5 + 8u, t4);
    t6 = rd32(rd32(COW_IMG(0x10492e10u)) + 0x10u);
    wr32(rd32(COW_IMG(0x10492e10u)) + 4u, t6);
    t7 = rd32(COW_IMG(0x10492e10u));
    wr32(t7 + 0x54u, 1u);
    g->eax = t7;
    t8 = cow_stdcall(g, COW_IMG(0x100dc210u), 0);
    return (t8 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100dbeb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100dbeb0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
