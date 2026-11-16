/* f_0x10326fa1 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10326fa1(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 8u, 0xffffffffu);
    wr32(sp0 - 0xcu, COW_IMG(0x103285e8u));
    wr32(sp0 - 0x10u, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0x10u);
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x14u, COW_IMG(0x10326fabu));
    wr32(sp0 - 0x14u, self);
    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    wr32(sp0 - 0x24u, arg1);
    wr32(sp0 - 0x14u, self);
    g->edx = in_edx;
    g->esp = sp0 - 0x20u;
    t2 = cow_thiscall(g, COW_IMG(0x103274a8u), self, 1, arg1);
    t3 = g->edx;
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0x24u, 0u);
    t4 = rd8(arg1 + 0xcu);
    wr8(self + 0xcu, (uint8_t)t4);
    cow_call_regs(g, COW_IMG(0x10255380u), (t2 & 0xffffff00u) | t4, self + 0xcu, t3, 0, 1, 0u);
    t5 = g->edx;
    wr32(sp0 - 0x24u, rd32(COW_IMG(0x1034b498u)));
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, arg1 + 0xcu);
    cow_fastcall(g, COW_IMG(0x1032717cu), self + 0xcu, t5, 3, arg1 + 0xcu, 0u, rd32(COW_IMG(0x1034b498u)));
    t6 = rd32(sp0 - 0x10u);
    wr32(self, COW_IMG(0x1034b48cu));
    wr32(g->fs_base, t6);
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10326fa1(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10326fa1(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
