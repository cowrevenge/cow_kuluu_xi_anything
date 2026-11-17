/* f_0x100f74b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_100f74b0(Guest* g)
{
    uint32_t ecx;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 20u);

    if (rd32(COW_IMG(0x104df908u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x104df908u));
        goto L_100f74c0;
    }
    return 2u;
L_100f74c0: ;
    wr32(sp0 - 4u, arg5);
    wr32(sp0 - 8u, arg4);
    wr32(sp0 - 0xcu, arg3);
    wr32(sp0 - 0x10u, sp0 + 4u);
    g->eax = arg3;
    g->esp = sp0;
    t1 = cow_thiscall(g, COW_IMG(0x100f25f0u), ecx, 4, sp0 + 4u, arg3, arg4, arg5);
    return t1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f74b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f74b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
