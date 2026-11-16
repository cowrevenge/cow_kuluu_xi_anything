/* f_0x101035f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101035f0(Guest* g)
{
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 4u, 0u);
    if (rd32(COW_IMG(0x104e0af4u)) != 0u) goto L_10103615;
    return 0u;
L_10103615: ;
    wr32(sp0 - 0x14u, sp0 - 4u);
    wr32(sp0 - 0x18u, sp0 - 8u);
    wr32(sp0 - 0x1cu, sp0 - 0xcu);
    wr32(sp0 - 0x20u, sp0 - 0x10u);
    wr32(sp0 - 0x24u, COW_IMG(0x103647f0u));
    wr32(sp0 - 0x28u, arg1);
    g->esp = sp0 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x10313683u), 3, arg1, COW_IMG(0x103647f0u), sp0 - 0x10u);
    t1 = rd32(COW_IMG(0x104e0af4u));
    wr32(t1 + 0x438u, 0u);
    g->edx = 0u;
    return (t1 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101035f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101035f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
