/* f_0x1014c340 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1014c340(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
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
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 60u);

    t1 = rd8(COW_IMG(0x103d3c84u));
    t2 = rd32(self + 8u);
    wr32(sp0 - 0xfu, 0u);
    wr32(sp0 - 0xbu, 0u);
    wr8(sp0 - 0x10u, (uint8_t)t1);
    wr32(sp0 - 7u, 0u);
    wr32(sp0 - 0x1cu, in_esi);
    wr16(sp0 - 3u, 0u);
    wr32(sp0 - 0x20u, sp0 - 0x18u);
    wr8(sp0 - 1u, 0u);
    wr16(sp0 - 0x18u, 0u);
    wr16(sp0 - 0x16u, 0u);
    wr16(sp0 - 0x14u, 0u);
    wr16(sp0 - 0x12u, 0u);
    g->edx = 0u;
    g->esp = sp0 - 0x1cu;
    t3 = cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 0x18u, t2, g->edx, 0, 1, sp0 - 0x18u);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(sp0 - 0x20u, 0x1869fu);
    if (rd8(COW_IMG(0x10485824u)) & 1u)
    {
        ecx = t4;
        t6 = rd32(COW_IMG(0x1048568cu)) >> 0xau & 0x1ffffu;
        wr32(sp0 - 0x24u, t6);
        wr32(sp0 - 0x28u, COW_IMG(0x10357fbcu));
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        g->esp = sp0 - 0x18u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x10u, COW_IMG(0x10357fbcu), t6, 0x1869fu, in_esi);
    }
    else
    {
        eax = (t3 & 0xffffff00u) | rd8(COW_IMG(0x10485824u));
        edx = t5;
        wr32(sp0 - 0x24u, COW_IMG(0x103719d4u));
        wr32(sp0 - 0x28u, sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x10u, COW_IMG(0x103719d4u), 0x1869fu, in_esi, rd32(sp0 - 0x18u));
    }
    wr32(sp0 - 0x20u, 0x3f800000u);
    wr32(sp0 - 0x24u, 0x3f800000u);
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, 0x80808080u);
    wr32(sp0 - 0x30u, sp0 - 0x10u);
    t7 = rd32(sp0 - 0x16u) + 0x14u;
    wr32(sp0 - 0x34u, t7);
    t8 = rd32(sp0 - 0x18u) + 0x64u;
    wr32(sp0 - 0x38u, t8);
    g->eax = t8;
    g->edx = t7;
    g->esp = sp0 - 0x1cu;
    t9 = cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), sp0 - 0x10u, 7, t8, t7, sp0 - 0x10u, 0x80808080u, 0u, 0x3f800000u, 0x3f800000u);
    t10 = g->edx;
    g->esi = rd32(sp0 - 0x1cu);
    g->edx = t10;
    return t9;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014c340(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1014c340(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
