/* f_0x101b84e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101b84e0(Guest* g)
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
    cow_frame(g, sp0, 16u);

    t1 = rd32(COW_IMG(0x1062193cu));
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    g->eax = 0u;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, COW_IMG(0x1011ba40u), t1, 0);
    t3 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        eax = t2;
        edx = t3;
        goto L_101b8529;
    }
    edx = t3;
    wr32(sp0 - 0xcu, sp0 - 8u);
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 8u, rd32(rd32(COW_IMG(0x1062193cu)) + 8u), g->edx, 0, 1, sp0 - 8u);
    t4 = g->edx;
    g->edx = t4;
    return (uint32_t)(int16_t)rd16(sp0 - 2u) - 0x9du;
L_101b8529: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t5 = cow_thiscall(g, COW_IMG(0x1011ba40u), rd32(COW_IMG(0x105781e0u)), 0);
    t6 = g->edx;
    if ((uint8_t)t5 == 0u)
    {
        edx = t6;
        goto L_101b8558;
    }
    wr32(sp0 - 0xcu, sp0 - 8u);
    g->edx = sp0 - 8u;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x10118f70u), rd32(COW_IMG(0x105781e0u)), rd32(rd32(COW_IMG(0x105781e0u)) + 8u), g->edx, 0, 1, sp0 - 8u);
    t7 = g->edx;
    g->edx = t7;
    return (uint32_t)(int16_t)rd16(sp0 - 2u) - 0x9du;
L_101b8558: ;
    g->edx = edx;
    return 0x114u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b84e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101b84e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
