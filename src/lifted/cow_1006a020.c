/* f_0x1006a020 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1006a020(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 4u, in_esi);
    wr32(sp0 - 8u, in_edi);
    wr32(sp0 - 0xcu, arg1);
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x1006a560u), 1, arg1);
    wr32(sp0 - 0xcu, sp0 + 4u);
    wr32(sp0 - 0x10u, 1u);
    wr32(sp0 - 0x14u, arg1);
    wr32(sp0 - 0x18u, 8u);
    wr32(sp0 - 0x1cu, t1 * arg2);
    t2 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    wr32(sp0 - 0x20u, t2);
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu)) + 0x5cu), t2, 6, t2, t1 * arg2, 8u, arg1, 1u, sp0 + 4u);
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006a020(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1006a020(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
