/* f_0x1001e410 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
uint32_t cow_fn_1001e410(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 0x10u, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
    }
    else
    {
        esi = t1;
        wr32(sp0 - 0xcu, arg1);
        wr32(sp0 - 8u, arg2);
        wr32(sp0 - 0x14u, sp0 - 0xcu);
        wr32(sp0 - 4u, arg3);
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, COW_IMG(0x1001e760u), esi, 1, sp0 - 0xcu);
        wr32(sp0 - 0xcu, arg4);
        wr32(sp0 - 8u, arg5);
        wr32(sp0 - 0x14u, sp0 - 0xcu);
        wr32(sp0 - 4u, arg6);
        g->eax = arg6;
        g->edx = arg5;
        t3 = cow_thiscall(g, COW_IMG(0x1001e780u), esi, 1, sp0 - 0xcu);
        t4 = g->edx;
        eax = t3;
        edx = t4;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1001e410(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1001e410(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
