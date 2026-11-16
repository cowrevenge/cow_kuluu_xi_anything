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
    double d11;
    double d12;
    double d13;
    double d14;
    double d4;
    double d5;
    double d6;
    double d7;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    cow_frame(g, sp0, 16u);

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x1011ba40u), rd32(COW_IMG(0x1062193cu)), 0);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        edx = t2;
        goto L_101b8529;
    }
    edx = t2;
    wr32(sp0 - 0xcu, sp0 - 8u);
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 8u, rd32(rd32(COW_IMG(0x1062193cu)) + 8u), g->edx, 0, 1, sp0 - 8u);
    t3 = g->edx;
    d4 = cow_take_float(g);
    d5 = cow_take_float(g);
    d6 = cow_take_float(g);
    d7 = cow_take_float(g);
    g->edx = t3;
    fpush(g, d4);
    fpush(g, d5);
    fpush(g, d6);
    fpush(g, d7);
    return 0xffffff63u;
L_101b8529: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t8 = cow_thiscall(g, COW_IMG(0x1011ba40u), rd32(COW_IMG(0x105781e0u)), 0);
    t9 = g->edx;
    if ((uint8_t)t8 == 0u)
    {
        edx = t9;
        goto L_101b8558;
    }
    wr32(sp0 - 0xcu, sp0 - 8u);
    g->edx = sp0 - 8u;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x10118f70u), rd32(COW_IMG(0x105781e0u)), rd32(rd32(COW_IMG(0x105781e0u)) + 8u), g->edx, 0, 1, sp0 - 8u);
    t10 = g->edx;
    d11 = cow_take_float(g);
    d12 = cow_take_float(g);
    d13 = cow_take_float(g);
    d14 = cow_take_float(g);
    g->edx = t10;
    fpush(g, d11);
    fpush(g, d12);
    fpush(g, d13);
    fpush(g, d14);
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
