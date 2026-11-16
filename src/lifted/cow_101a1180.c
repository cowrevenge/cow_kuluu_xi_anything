/* f_0x101a1180 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101a1180(Guest* g)
{
    uint32_t edx;
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
    const uint32_t in_edx = g->edx;

    g->esp = sp0 - 4u;
    cow_fastcall(g, COW_IMG(0x101b9550u), rd32(self + 0x1cu), in_edx, 1, 0xffffffffu);
    t1 = g->edx;
    if ((int32_t)rd32(self + 0xcu) <= 0)
    {
        edx = t1;
        goto L_101a1201;
    }
    edx = t1;
    if (rd8(self + 0x18u) == 0u) goto L_101a1201;
    t2 = rd32(self + 0x10u);
    wr8(self + 0x18u, 0u);
    t3 = rd32(self + 4u);
    wr32(t2 * 0x124u + t3 + 4u, 0u);
    wr32(t2 * 0x124u + t3 + 0x108u, 0u);
    wr32(t2 * 0x124u + t3 + 0x10cu, 0u);
    wr32(t2 * 0x124u + t3 + 0x110u, 0u);
    wr32(t2 * 0x124u + t3 + 0x114u, 0u);
    wr32(t2 * 0x124u + t3 + 0x118u, 0u);
    wr32(t2 * 0x124u + t3 + 0x11cu, 0u);
    wr32(t2 * 0x124u + t3 + 0x120u, 0u);
    t4 = rd32(self + 0x10u) + 1u;
    t5 = rd32(self + 8u);
    t6 = rd32(self + 0x10u);
    wr32(self + 0x10u, t4);
    if ((int32_t)(t6 + 1u) < (int32_t)t5)
    {
        edx = t5;
    }
    else
    {
        edx = t5;
        wr32(self + 0x10u, 0u);
    }
    t7 = rd32(self + 0xcu) - 1u;
    t8 = rd32(self + 0x1cu);
    wr32(self + 0xcu, t7);
    g->esp = sp0 - 4u;
    cow_fastcall(g, COW_IMG(0x101b9530u), t8, edx, 0);
    return 1u;
L_101a1201: ;
    g->esp = sp0 - 4u;
    t9 = cow_fastcall(g, COW_IMG(0x101b9530u), rd32(self + 0x1cu), edx, 0);
    return 0xffffffffu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a1180(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a1180(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
