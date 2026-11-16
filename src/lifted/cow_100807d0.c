/* f_0x100807d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100807d0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 0x10u, 2u);
    wr32(sp0 - 0x14u, sp0 - 8u);
    wr32(sp0 - 0x18u, sp0 - 0xcu);
    wr32(sp0 - 0x1cu, sp0 - 4u);
    g->eax = sp0 - 8u;
    g->edx = sp0 - 4u;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), sp0 - 0xcu, 4, sp0 - 4u, sp0 - 0xcu, sp0 - 8u, 2u);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        edx = t2;
        goto L_10080805;
    }
    eax = t1;
    edx = t2;
    wr32(sp0 - 0x10u, 0x71u);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x71u);
    t3 = g->edx;
    g->edx = t3;
    return arg3;
L_10080805: ;
    if (rd32(COW_IMG(0x1047d490u)) == 1u)
    {
        wr32(sp0 - 0x10u, 0u);
        t4 = rd32(sp0 - 0xcu);
        wr32(sp0 - 0x14u, t4);
        t5 = rd32(sp0 - 8u);
        wr32(sp0 - 0x18u, t5);
        wr32(sp0 - 0x1cu, 2u);
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x100eaab0u), 5, 2u, t5, t4, 0u, rd32(sp0 - 0xcu));
        t6 = g->edx;
        edx = t6;
    }
    g->edx = edx;
    return arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100807d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100807d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
