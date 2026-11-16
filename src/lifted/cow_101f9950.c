/* f_0x101f9950 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
void cow_fn_101f9950(Guest* g)
{
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 4u, in_esi);
    wr32(sp0 - 8u, arg3);
    wr32(sp0 - 0xcu, arg2);
    wr32(sp0 - 0x10u, sp0 + 0xcu);
    wr32(sp0 - 0x14u, sp0 + 8u);
    t1 = rd32(self + 0xfcu);
    wr32(sp0 - 0x18u, t1);
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x101f7570u), 3, t1, sp0 + 8u, sp0 + 0xcu);
    wr32(sp0 - 8u, arg6);
    wr32(sp0 - 0xcu, arg5);
    wr32(sp0 - 0x10u, arg4);
    wr32(sp0 - 0x14u, arg3);
    wr32(sp0 - 0x18u, arg2);
    wr32(sp0 - 0x1cu, arg1);
    g->esi = self;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x101f99a0u), self, 6, arg1, arg2, arg3, arg4, arg5, arg6);
    g->esi = in_esi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f9950(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101f9950(g);
    g->esp = sp0;
    rt_return(g, g->eax, 24u);
}
/* COW_ADAPTER END */
