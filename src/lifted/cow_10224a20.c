/* f_0x10224a20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10224a20(Guest* g)
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 60u);

    wr32(sp0 - 0x1cu, 0x4du);
    wr32(sp0 - 0x20u, 9u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    t1 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x4du);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x24u, 0x4eu);
    wr32(sp0 - 0x28u, 9u);
    wr32(sp0 - 0x18u, t1);
    wr32(sp0 - 0x14u, 0xau);
    wr32(sp0 - 0x10u, 0x14u);
    g->esp = sp0 - 0x20u;
    t4 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x4eu);
    wr32(sp0 - 0xcu, t4);
    wr32(sp0 - 0x2cu, 2u);
    wr32(sp0 - 0x30u, arg2);
    wr32(sp0 - 0x34u, arg1);
    wr32(sp0 - 0x38u, sp0 - 0x18u);
    wr32(sp0 - 8u, 0xau);
    wr32(sp0 - 4u, 0x28u);
    g->eax = arg2;
    g->edx = sp0 - 0x18u;
    t5 = cow_cdecl(g, COW_IMG(0x10220d90u), 6, sp0 - 0x18u, arg1, arg2, 2u, 9u, 0x4eu);
    t6 = g->edx;
    g->edx = t6;
    return t5;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10224a20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10224a20(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
