/* f_0x102674b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102674b0(Guest* g)
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 20u);

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
        eax = t1;
        wr32(sp0 - 4u, in_esi);
        wr32(sp0 - 8u, in_edi);
        wr32(sp0 - 0xcu, arg2);
        wr32(sp0 - 0x10u, arg1);
        g->eax = eax;
        g->edx = arg2;
        t3 = rd32(arg1);
        g->esp = sp0 - 8u;
        t4 = cow_thiscall(g, rd32(t3 + 0x1cu), t3, 2, arg1, arg2);
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
void cow_adapter_102674b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102674b0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
