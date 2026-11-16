/* f_0x100f7130 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=9 */
uint32_t cow_fn_100f7130(Guest* g)
{
    uint32_t ecx;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg9 = rd32(g->esp + 0x24u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 40u);

    if (rd32(COW_IMG(0x104df908u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x104df908u));
        goto L_100f7140;
    }
    return 2u;
L_100f7140: ;
    wr32(sp0 - 4u, arg9);
    wr32(sp0 - 8u, arg8);
    wr32(sp0 - 0xcu, arg7);
    wr32(sp0 - 0x10u, arg6);
    wr32(sp0 - 0x14u, arg5);
    wr32(sp0 - 0x18u, arg4);
    wr32(sp0 - 0x1cu, 3u);
    wr32(sp0 - 0x20u, arg3);
    wr32(sp0 - 0x24u, sp0 + 4u);
    g->esp = sp0;
    t1 = cow_thiscall(g, COW_IMG(0x100f2310u), ecx, 9, sp0 + 4u, arg3, 3u, arg4, arg5, arg6, arg7, arg8, arg9);
    return t1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f7130(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f7130(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
