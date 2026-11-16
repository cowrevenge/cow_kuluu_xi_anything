/* f_0x10143a60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_10143a60(Guest* g)
{
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 60u);

    t1 = rd32(self + 8u);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    if (t1 != 0u)
    {
        ecx = t1;
        wr32(sp0 - 0xcu, sp0 - 8u);
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 8u, ecx, g->edx, 0, 1, sp0 - 8u);
    }
    wr32(sp0 - 0xcu, 0x80808080u);
    wr32(sp0 - 0x10u, arg1);
    t2 = rd32(sp0 - 6u) + 0xau;
    wr32(sp0 - 0x14u, t2);
    t3 = rd32(sp0 - 8u) + 0x44u;
    wr32(sp0 - 0x18u, t3);
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x101c9780u), 4, t3, t2, arg1, 0x80808080u);
    wr32(sp0 - 0x1cu, 0x80808080u);
    wr32(sp0 - 0x20u, arg2);
    t4 = rd32(sp0 - 6u) + 0x16u;
    wr32(sp0 - 0x24u, t4);
    t5 = rd32(sp0 - 8u) + 0x44u;
    wr32(sp0 - 0x28u, t5);
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x101c9780u), 9, t5, t4, arg2, 0x80808080u, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), arg1, 0x80808080u, rd32(sp0 - 8u));
    wr32(sp0 - 0x2cu, 0x80808080u);
    wr32(sp0 - 0x30u, arg3);
    t6 = rd32(sp0 - 6u) + 0x21u;
    wr32(sp0 - 0x34u, t6);
    t7 = rd32(sp0 - 8u) + 0x44u;
    wr32(sp0 - 0x38u, t7);
    g->eax = t7;
    g->edx = t6;
    g->esp = sp0 - 0x14u;
    t8 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, t7, t6, arg3, 0x80808080u, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), arg2, 0x80808080u, rd32(sp0 - 0x18u));
    t9 = g->edx;
    g->edx = t9;
    return t8;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10143a60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10143a60(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
