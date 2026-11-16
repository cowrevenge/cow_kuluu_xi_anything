/* f_0x102314a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102314a0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 72u);

    t1 = rd8(COW_IMG(0x103d3c84u));
    wr32(sp0 - 0xfu, 0u);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0xbu, 0u);
    wr32(sp0 - 7u, 0u);
    wr8(sp0 - 0x10u, (uint8_t)t1);
    wr16(sp0 - 3u, 0u);
    wr8(sp0 - 1u, 0u);
    t2 = rd32(arg1 + 0x1578u);
    wr16(sp0 - 0x18u, 0u);
    wr16(sp0 - 0x16u, 0u);
    wr16(sp0 - 0x14u, 0u);
    wr16(sp0 - 0x12u, 0u);
    if (t2 == 0u)
    {
        eax = 0u;
        edx = in_edx;
    }
    else
    {
        wr32(sp0 - 0x20u, sp0 - 0x18u);
        g->esp = sp0 - 0x1cu;
        cow_thiscall(g, COW_IMG(0x10117020u), arg2, 1, sp0 - 0x18u);
        t3 = rd16(rd32(arg1 + 0x1578u));
        wr32(sp0 - 0x20u, t3);
        wr32(sp0 - 0x24u, COW_IMG(0x1036fe18u));
        wr32(sp0 - 0x28u, sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x10u, COW_IMG(0x1036fe18u), t3, in_esi, rd32(sp0 - 0x18u));
        wr32(sp0 - 0x2cu, 0x3f800000u);
        wr32(sp0 - 0x30u, 0x3f800000u);
        wr32(sp0 - 0x34u, 1u);
        wr32(sp0 - 0x38u, arg3);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        t4 = rd32(sp0 - 0x16u) + 3u;
        wr32(sp0 - 0x40u, t4);
        t5 = rd32(sp0 - 0x18u) + 0x138u;
        wr32(sp0 - 0x44u, t5);
        g->eax = t5;
        g->edx = t4;
        g->esp = sp0 - 0x28u;
        t6 = cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), sp0 - 0x10u, 7, t5, t4, sp0 - 0x10u, arg3, 1u, 0x3f800000u, 0x3f800000u);
        t7 = g->edx;
        eax = t6;
        edx = t7;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102314a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102314a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
