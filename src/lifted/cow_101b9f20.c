/* f_0x101b9f20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=8 */
void cow_fn_101b9f20(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 324u);

    wr32(sp0 - 0x124u, in_esi);
    wr32(sp0 - 0x128u, arg8);
    wr32(sp0 - 0x12cu, arg7);
    wr32(sp0 - 0x130u, arg6);
    wr32(sp0 - 0x134u, arg5);
    wr32(sp0 - 0x138u, arg4);
    wr32(sp0 - 0x13cu, arg3);
    wr32(sp0 - 0x140u, arg1);
    g->eax = arg1;
    g->edx = arg3;
    g->esp = sp0 - 0x124u;
    t1 = cow_thiscall(g, COW_IMG(0x101b9880u), sp0 - 0x120u, 7, arg1, arg3, arg4, arg5, arg6, arg7, arg8);
    t2 = g->edx;
    wr32(sp0 - 0x128u, sp0 - 0x120u);
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x101b9ec0u), self, 1, sp0 - 0x120u);
    t4 = g->edx;
    cow_thiscall(g, COW_IMG(0x101b9a00u), sp0 - 0x120u, 0);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b9f20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101b9f20(g);
    g->esp = sp0;
    rt_return(g, g->eax, 32u);
}
/* COW_ADAPTER END */
