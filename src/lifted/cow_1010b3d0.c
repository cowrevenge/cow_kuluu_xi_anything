/* f_0x1010b3d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_1010b3d0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 16u);

    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, arg1);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1010c700u), sp0 + 4u, 1, arg1);
    wr32(sp0 - 0xcu, sp0 + 4u);
    g->eax = sp0 + 4u;
    g->edx = rd32(self);
    t1 = rd32(self);
    t2 = cow_thiscall(g, rd32(t1 + 0xcu), self, 1, sp0 + 4u);
    t3 = g->edx;
    t4 = cow_fastcall(g, COW_IMG(0x1010c6e0u), sp0 + 4u, t3, 0);
    t5 = g->edx;
    g->edx = t5;
    return (t4 & 0xffffff00u) | (uint8_t)t2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010b3d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1010b3d0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
