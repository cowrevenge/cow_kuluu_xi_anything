/* f_0x10110c30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10110c30(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 56u);

    wr32(sp0 - 0xcu, in_esi);
    if (rd8(self + 0x14u) != 0u)
    {
        eax = COW_IMG(0x1036bfa4u);
    }
    else
    {
        eax = COW_IMG(0x1036bf94u);
    }
    wr32(sp0 - 0x10u, eax);
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x10109140u), sp0 - 8u, 1, eax);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, self + 0xcu);
    wr32(sp0 - 0x18u, sp0 - 8u);
    t1 = rd32(self + 4u);
    wr32(sp0 - 0x1cu, t1);
    t2 = rd32(self + 8u);
    wr32(sp0 - 0x20u, t2);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, COW_IMG(0x1036bf9cu));
    wr32(sp0 - 0x2cu, 3u);
    wr32(sp0 - 0x30u, arg1);
    wr32(sp0 - 0x34u, self);
    g->eax = t2;
    g->edx = t1;
    t3 = cow_thiscall_cdecl(g, COW_IMG(0x10112a30u), arg1, 10, self, arg1, 3u, COW_IMG(0x1036bf9cu), 0u, t2, t1, sp0 - 8u, self + 0xcu, 0u);
    t4 = g->edx;
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 8u, 0);
    t6 = g->edx;
    g->edx = t6;
    return (t5 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10110c30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10110c30(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
