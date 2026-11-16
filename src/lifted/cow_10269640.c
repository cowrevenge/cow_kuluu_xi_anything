/* f_0x10269640 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10269640(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10328058u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x10u, self);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 0x1cu, self + 8u);
    wr32(sp0 - 0x10u, self + 8u);
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, rd32(COW_IMG(0x1032918cu)), self, 1, self + 8u);
    t2 = g->edx;
    wr32(self + 0x6cu, arg2);
    wr32(self + 0x68u, arg1);
    wr32(sp0 - 4u, 0u);
    wr32(self + 0x64u, 1u);
    g->eax = arg1;
    t3 = cow_fastcall(g, COW_IMG(0x10269570u), self, t2, 0);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(sp0 - 0x1cu, self + 8u);
    g->edx = t5;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), t4, 1, self + 8u);
    t6 = g->edx;
    t7 = rd32(sp0 - 0xcu);
    wr32(g->fs_base, t7);
    g->edx = t6;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10269640(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10269640(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
