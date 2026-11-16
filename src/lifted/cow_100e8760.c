/* f_0x100e8760 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100e8760(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 212u);

    wr32(sp0 - 0x9cu, in_esi);
    wr32(sp0 - 0xa0u, in_edi);
    t1 = rd16(arg3) >> 9u;
    wr32(sp0 - 0xa4u, t1);
    wr32(sp0 - 0xa8u, 6u);
    g->edx = in_edx;
    g->esp = sp0 - 0xa0u;
    t2 = cow_cdecl(g, COW_IMG(0x100dddb0u), 2, 6u, t1);
    t3 = g->edx;
    wr32(sp0 - 0xacu, t2);
    wr32(sp0 - 0xb0u, arg3 + 4u);
    wr32(sp0 - 0xb4u, sp0 - 0x98u);
    g->ecx = sp0 - 0x98u;
    g->esp = sp0 - 0xa8u;
    cow_call_regs(g, COW_IMG(0x10312090u), t2, g->ecx, g->edx, 1, 3, sp0 - 0x98u, arg3 + 4u, t2);
    t4 = g->ecx;
    wr8(sp0 + t2 - 0x98u, 0u);
    wr32(sp0 - 0xb8u, sp0 - 0x98u);
    wr32(sp0 - 0xbcu, COW_IMG(0x10361dc0u));
    wr32(sp0 - 0xc0u, 0u);
    wr32(sp0 - 0xc4u, 0u);
    wr32(sp0 - 0xc8u, 0u);
    wr32(sp0 - 0xccu, 1u);
    wr32(sp0 - 0xd0u, 0xau);
    g->edx = sp0 - 0x98u;
    g->esp = sp0 - 0xb4u;
    t5 = cow_cdecl(g, COW_IMG(0x100d9b20u), 7, 0xau, 1u, 0u, 0u, 0u, COW_IMG(0x10361dc0u), sp0 - 0x98u);
    t6 = g->edx;
    g->edx = t6;
    return (t5 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e8760(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e8760(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
