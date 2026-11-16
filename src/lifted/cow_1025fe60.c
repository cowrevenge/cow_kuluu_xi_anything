/* f_0x1025fe60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1025fe60(Guest* g)
{
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    wr32(self + 0x138u, 0xfffffc18u);
    wr32(self + 0x13cu, 0xffffffffu);
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, rd32(COW_IMG(0x10329400u)), self, 0);
    wr32(self + 0x158u, t1);
    wr32(self + 0xf4u, 0u);
    wr32(self + 0x10cu, 0xffffffffu);
    wr32(self + 0x110u, 0u);
    wr32(self + 0xf8u, 0u);
    wr32(self + 0x108u, 0u);
    wr32(self + 0xfcu, 0u);
    wr32(self + 0x124u, 0u);
    wr32(self + 0x120u, 0u);
    wr32(self + 0x128u, 0u);
    wr32(self + 0x12cu, 0u);
    wr32(self + 0x130u, 0u);
    wr32(self + 0x134u, 0u);
    wr32(self + 0x140u, 0u);
    wr32(self + 0x144u, 0u);
    wr32(self + 0x154u, 0u);
    wr32(self + 0x150u, 0u);
    wr32(self + 0x148u, 0u);
    wr32(self + 0x14cu, 0u);
    wr32(self + 0xe8u, 0u);
    wr32(self + 0x100u, 0u);
    wr32(self + 0x104u, 0xfffb6c20u);
    wr32(self + 0xf0u, 0u);
    wr32(self + 0x118u, 0u);
    wr32(self + 0x11cu, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025fe60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1025fe60(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
