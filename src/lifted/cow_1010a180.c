/* f_0x1010a180 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1010a180(Guest* g)
{
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 20u);

    wr32(sp0 - 4u, in_esi);
    wr32(sp0 - 8u, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x101094d0u), in_eax, arg1, g->edx, 0, 1, 0u);
    t1 = g->edx;
    wr32(sp0 - 8u, 0x7ffu);
    g->edx = t1;
    t2 = cow_thiscall(g, COW_IMG(0x101091d0u), arg1, 1, 0x7ffu);
    t3 = g->edx;
    if (t2 == 0u)
    {
        edx = t3;
    }
    else
    {
        wr32(sp0 - 8u, sp0 + 0xcu);
        wr32(sp0 - 0xcu, arg2);
        t4 = rd32(rd32(arg1 + 4u) + 4u);
        wr32(sp0 - 0x10u, t4);
        g->edx = arg2;
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x10314982u), 3, t4, arg2, sp0 + 0xcu);
        t5 = g->edx;
        edx = t5;
    }
    g->edx = edx;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010a180(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1010a180(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
