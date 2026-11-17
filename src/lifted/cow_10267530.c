/* f_0x10267530 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_10267530(Guest* g)
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
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 4u, sp0 + 4u);
    g->eax = sp0 + 4u;
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_thiscall(g, COW_IMG(0x10267300u), arg1, 1, sp0 + 4u);
    t2 = g->edx;
    if ((int32_t)t1 < 0)
    {
        eax = t1;
        edx = t2;
    }
    else
    {
        wr32(sp0 - 4u, in_esi);
        wr32(sp0 - 8u, in_edi);
        wr32(sp0 - 0xcu, arg6);
        wr32(sp0 - 0x10u, arg5);
        wr32(sp0 - 0x14u, arg4);
        wr32(sp0 - 0x18u, arg3);
        wr32(sp0 - 0x1cu, arg2);
        wr32(sp0 - 0x20u, arg1);
        g->eax = arg3;
        g->edx = arg2;
        t3 = rd32(arg1);
        g->esp = sp0 - 8u;
        t4 = cow_thiscall(g, rd32(t3 + 0x34u), t3, 6, arg1, arg2, arg3, arg4, arg5, arg6);
        t5 = g->ecx;
        t6 = g->edx;
        wr32(sp0 - 0xcu, arg1);
        g->edx = t6;
        cow_thiscall(g, rd32(rd32(arg1) + 8u), t5, 1, arg1);
        t7 = g->edx;
        eax = t4;
        edx = t7;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10267530(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10267530(g);
    g->esp = sp0;
    rt_return(g, r, 24u);
}
/* COW_ADAPTER END */
