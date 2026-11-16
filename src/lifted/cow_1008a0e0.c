/* f_0x1008a0e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1008a0e0(Guest* g)
{
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 272u);

    if (arg1 != rd32(COW_IMG(0x1035b5e8u)))
    {
        wr32(sp0 - 0x104u, arg1);
        wr32(sp0 - 0x108u, COW_IMG(0x1035baf4u));
        t1 = rd32(COW_IMG(0x104568fcu));
        wr32(COW_IMG(0x1035b5e8u), arg1);
        wr32(sp0 - 0x10cu, sp0 - 0x100u);
        wr32(t1 + 0x30u, arg1);
        g->esp = sp0 - 0xf8u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x1035baf4u), arg1, rd32(sp0 - 0x100u), rd32(sp0 - 0xfcu));
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1008a0e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1008a0e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
