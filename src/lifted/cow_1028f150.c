/* f_0x1028f150 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1028f150(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = rd32(arg1 + 0x34u) + 1u;
    t2 = rd32(arg1 + 0x40u);
    t3 = rd32(arg1 + 0x34u);
    wr32(arg1 + 0x34u, t1);
    g->eax = t1 * 0x30u;
    g->esp = sp0 - 8u;
    t4 = cow_thiscall_cdecl(g, COW_IMG(0x10275eb0u), t2, 4, t2, t1 * 0x30u, COW_IMG(0x103ba694u), 0x242u);
    wr32(arg1 + 0x40u, t4);
    wr32(t3 * 0x30u + t4, arg2);
    wr32(t3 * 0x30u + rd32(arg1 + 0x40u) + 4u, 0u);
    wr32(t3 * 0x30u + rd32(arg1 + 0x40u) + 8u, 0u);
    wr32(t3 * 0x30u + rd32(arg1 + 0x40u) + 0xcu, 0xffffffffu);
    wr32(t3 * 0x30u + rd32(arg1 + 0x40u) + 0x10u, 0u);
    wr32(t3 * 0x30u + rd32(arg1 + 0x40u) + 0x14u, 0u);
    wr8(t3 * 0x30u + rd32(arg1 + 0x40u) + 0x24u, 0u);
    wr32(t3 * 0x30u + rd32(arg1 + 0x40u) + 0x18u, 0x40000000u);
    wr32(t3 * 0x30u + rd32(arg1 + 0x40u) + 0x1cu, 0x3f4ccccdu);
    wr32(t3 * 0x30u + rd32(arg1 + 0x40u) + 0x28u, 0u);
    wr32(t3 * 0x30u + rd32(arg1 + 0x40u) + 0x20u, 0x100u);
    wr32(t3 * 0x30u + rd32(arg1 + 0x40u) + 0x2cu, 4u);
    return t3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1028f150(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1028f150(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
