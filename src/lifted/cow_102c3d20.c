/* f_0x102c3d20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102c3d20(Guest* g)
{
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 == 0u) goto L_102c3d5b;
    if (rd32(arg1 + 0x1cu) == 0u) goto L_102c3d5b;
    ecx = rd32(arg1 + 0x1cu);
    wr32(arg1 + 0x14u, 0u);
    wr32(arg1 + 8u, 0u);
    wr32(arg1 + 0x18u, 0u);
    t1 = -(rd32(ecx + 0xcu) != 0u) & 7u;
    wr32(ecx, t1);
    t2 = rd32(rd32(arg1 + 0x1cu) + 0x14u);
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x102c70f0u), g->eax, ecx, 0u, 1, 3, t2, arg1, 0u);
    return 0u;
L_102c3d5b: ;
    return 0xfffffffeu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c3d20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102c3d20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
