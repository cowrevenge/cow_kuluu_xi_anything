/* f_0x1001edf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1001edf0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, arg3);
    wr32(sp0 - 0x18u, arg2);
    wr32(sp0 - 0x1cu, arg1);
    wr32(sp0 - 0x20u, sp0 - 0xcu);
    g->eax = sp0 - 0xcu;
    g->edx = arg1;
    g->esp = sp0 - 0x10u;
    t1 = cow_cdecl(g, COW_IMG(0x10026e50u), 4, sp0 - 0xcu, arg1, arg2, arg3);
    t2 = g->edx;
    wr32(sp0 - 0x14u, sp0 - 0xcu);
    cow_thiscall(g, COW_IMG(0x1001ed40u), self, 1, sp0 - 0xcu);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1001edf0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1001edf0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
