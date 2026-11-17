/* f_0x10267290 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10267290(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_edi);
    wr32(arg1, 0u);
    wr32(sp0 - 0xcu, sp0 + 4u);
    t1 = rd32(self + 0x18u);
    wr32(sp0 - 0x10u, t1);
    g->eax = t1;
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, rd32(rd32(t1) + 0x18u), rd32(t1), 2, t1, sp0 + 4u);
    if ((int32_t)t2 >= 0) goto L_102672b8;
    return 0x80004001u;
L_102672b8: ;
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, sp0 - 4u);
    wr32(sp0 - 0x14u, COW_IMG(0x1033eeb8u));
    wr32(sp0 - 0x18u, arg1);
    g->eax = arg1;
    g->edx = sp0 - 4u;
    g->esp = sp0 - 0xcu;
    t3 = cow_thiscall(g, rd32(rd32(arg1)), rd32(arg1), 3, arg1, COW_IMG(0x1033eeb8u), sp0 - 4u);
    t4 = g->edx;
    wr32(sp0 - 0x10u, arg1);
    cow_thiscall(g, rd32(rd32(arg1) + 8u), rd32(arg1), 1, arg1);
    if ((int32_t)t3 >= 0) goto L_102672e7;
    g->edi = rd32(sp0 - 8u);
    return 0x80004001u;
L_102672e7: ;
    t5 = rd32(sp0 - 4u);
    wr32(arg1, t5);
    g->edi = rd32(sp0 - 8u);
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10267290(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10267290(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
