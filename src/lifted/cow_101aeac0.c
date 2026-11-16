/* f_0x101aeac0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101aeac0(Guest* g)
{
    uint32_t eax;
    uint32_t loc_8;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(rd32(COW_IMG(0x10456a28u)) + 8u) != 0u)
    {
        loc_8 = COW_IMG(0x1037a81cu);
    }
    else
    {
        loc_8 = COW_IMG(0x1037a808u);
    }
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x10120450u), COW_IMG(0x104e1bf8u), 1, loc_8);
    wr32(self + 0x18u, t1);
    if (t1 != 0u) goto L_101aeaf3;
    eax = t1;
    return 0xffffffffu;
L_101aeaf3: ;
    wr32(self + 0x14u, 0u);
    wr32(self + 0x1cu, arg1);
    wr32(self + 0x24u, 0u);
    wr8(self + 0x28u, 0u);
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101aeac0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101aeac0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
