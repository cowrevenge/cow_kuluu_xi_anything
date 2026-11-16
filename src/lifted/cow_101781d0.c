/* f_0x101781d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101781d0(Guest* g)
{
    const uint32_t self = g->ecx;

    wr32(COW_IMG(0x10632038u), 0u);
    wr32(COW_IMG(0x10631f18u), 8u);
    wr32(COW_IMG(0x1065c4d0u), 0xfu);
    wr32(COW_IMG(0x10631c88u), 0xfu);
    wr32(COW_IMG(0x10621c00u), 0u);
    wr32(self + 0x3954cu, 0x3f800000u);
    if (rd8(rd32(COW_IMG(0x1045666cu)) + 0x920u) != 0u)
    {
        wr32(COW_IMG(0x10632038u), 0u);
        wr32(COW_IMG(0x10631f18u), 1u);
        wr32(COW_IMG(0x1065c4d0u), 2u);
        wr32(COW_IMG(0x10631c88u), 2u);
        wr32(COW_IMG(0x10621c00u), 0u);
        wr32(self + 0x3954cu, 0x3f800000u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101781d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101781d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
