/* f_0x10002cd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10002cd0(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 28u);

    if (rd32(COW_IMG(0x1045666cu)) != 0u)
    {
        eax = rd32(COW_IMG(0x1045666cu));
        wr32(sp0 - 0x10u, sp0 - 0xcu);
        wr32(sp0 - 0x14u, sp0 - 8u);
        wr32(sp0 - 0x18u, sp0 - 4u);
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, COW_IMG(0x100170d0u), eax + 0x1f4u, 3, sp0 - 4u, sp0 - 8u, sp0 - 0xcu);
        wr32(sp0 - 0xcu, arg1);
        wr32(sp0 - 0x10u, arg1);
        t1 = rd32(sp0 - 8u);
        wr32(sp0 - 0x14u, t1);
        t2 = rd32(sp0 - 4u);
        wr32(sp0 - 0x18u, t2);
        cow_cdecl(g, COW_IMG(0x10002c00u), 3, t2, t1, arg1);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10002cd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10002cd0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
