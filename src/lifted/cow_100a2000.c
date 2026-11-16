/* f_0x100a2000 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100a2000(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 92u);

    g->ecx = self;
    g->esp = sp0 - 0x54u;
    t1 = cow_call_regs(g, COW_IMG(0x101cc4f0u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = rd32(t1 + 0x78u);
    wr32(sp0 - 0x54u, t3);
    wr32(sp0 - 0x50u, t3);
    t4 = rd32(arg3 + 8u);
    t5 = rd32(arg3 + 4u);
    wr16(sp0 - 0x4cu, rd16(arg3 + 0xcu));
    wr32(sp0 - 0x44u, t4);
    wr32(sp0 - 0x58u, sp0 - 0x54u);
    wr32(sp0 - 0x48u, t5);
    wr8(sp0 - 4u, 0u);
    wr8(sp0 - 3u, 0u);
    g->eax = t4 & 0xffffff00u;
    g->edx = t5;
    g->esp = sp0 - 0x4cu;
    t6 = cow_cdecl(g, COW_IMG(0x100a1ab0u), 3, sp0 - 0x54u, t3, t3);
    t7 = g->edx;
    g->edx = t7;
    return (t6 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a2000(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a2000(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
