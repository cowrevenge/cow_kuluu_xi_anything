/* f_0x100da440 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=8 */
uint32_t cow_fn_100da440(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 1088u);

    wr32(sp0 - 0x40cu, in_esi);
    wr32(sp0 - 0x408u, (uint16_t)arg1);
    wr32(sp0 - 0x410u, arg7);
    wr32(sp0 - 0x414u, arg2);
    wr32(sp0 - 0x418u, COW_IMG(0x1036023cu));
    wr32(sp0 - 0x41cu, 0x400u);
    wr32(sp0 - 0x420u, sp0 - 0x400u);
    wr32(sp0 - 0x404u, arg2);
    g->esp = sp0 - 0x408u;
    t1 = cow_cdecl(g, COW_IMG(0x10313507u), 6, sp0 - 0x400u, 0x400u, COW_IMG(0x1036023cu), arg2, arg7, in_esi);
    wr32(sp0 - 0x424u, arg8);
    wr32(sp0 - 0x428u, sp0 - 0x400u);
    wr32(sp0 - 0x42cu, arg6);
    wr32(sp0 - 0x430u, arg5);
    wr32(sp0 - 0x434u, arg4);
    wr32(sp0 - 0x438u, arg3);
    wr32(sp0 - 0x43cu, sp0 - 0x408u);
    g->edx = arg3;
    g->esp = sp0 - 0x420u;
    cow_cdecl(g, COW_IMG(0x10004020u), 7, sp0 - 0x408u, arg3, arg4, arg5, arg6, sp0 - 0x400u, arg8);
    t2 = g->edx;
    g->edx = t2;
    return t1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100da440(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100da440(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
