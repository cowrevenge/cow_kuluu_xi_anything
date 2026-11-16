/* f_0x101e24f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_101e24f0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 392u);

    wr32(sp0 - 0x164u, in_ebx);
    wr32(sp0 - 0x168u, in_esi);
    wr32(sp0 - 0x16cu, arg1);
    wr32(sp0 - 0x170u, sp0 - 0x160u);
    wr32(self + 0x1cu, 1u);
    g->eax = arg1;
    g->esp = sp0 - 0x168u;
    t1 = cow_stdcall(g, COW_IMG(0x101e2880u), 2, sp0 - 0x160u, arg1);
    wr32(sp0 - 0x16cu, 1u);
    wr32(sp0 - 0x170u, self);
    wr32(sp0 - 0x174u, 0u);
    wr32(sp0 - 0x178u, 0x20u);
    wr32(sp0 - 0x17cu, self);
    wr32(sp0 - 0x180u, sp0 - 0x160u);
    wr32(sp0 - 0x184u, 1u);
    g->edx = sp0 - 0x160u;
    t2 = cow_thiscall(g, COW_IMG(0x101b9880u), sp0 - 0x120u, 7, 1u, sp0 - 0x160u, self, 0x20u, 0u, self, 1u);
    t3 = g->edx;
    g->edx = t3;
    t4 = cow_thiscall(g, COW_IMG(0x101b9a10u), sp0 - 0x120u, 0);
    t5 = g->edx;
    t6 = cow_thiscall(g, COW_IMG(0x101b9a00u), sp0 - 0x120u, 0);
    return (t6 & 0xffffff00u) | (uint8_t)t4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e24f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e24f0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
