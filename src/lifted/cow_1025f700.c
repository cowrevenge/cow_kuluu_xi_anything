/* f_0x1025f700 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1025f700(Guest* g)
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
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 4u, in_esi);
    wr32(sp0 - 8u, in_edi);
    wr32(sp0 - 0xcu, sp0 + 4u);
    wr32(sp0 - 0x10u, COW_IMG(0x1033e7e8u));
    wr32(sp0 - 0x14u, arg1);
    g->eax = arg1;
    g->edx = sp0 + 4u;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, rd32(rd32(arg1)), rd32(arg1), 3, arg1, COW_IMG(0x1033e7e8u), sp0 + 4u);
    t2 = g->edx;
    if ((int32_t)t1 < 0)
    {
        eax = t1;
        edx = t2;
    }
    else
    {
        edx = t2;
        wr32(sp0 - 0xcu, 0u);
        wr32(sp0 - 0x10u, arg2);
        wr32(sp0 - 0x14u, 0x19u);
        wr32(sp0 - 0x18u, arg1);
        t3 = rd32(arg1);
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(t3 + 0xcu), t3, 4, arg1, 0x19u, arg2, 0u);
        t4 = g->ecx;
        wr32(sp0 - 0xcu, arg1);
        g->eax = arg1;
        g->edx = rd32(arg1);
        t5 = rd32(arg1);
        t6 = cow_thiscall(g, rd32(t5 + 8u), t4, 1, arg1);
        t7 = g->edx;
        eax = t6;
        edx = t7;
    }
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x10u, arg2);
    wr32(sp0 - 0x14u, 0x19u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t8 = cow_thiscall(g, COW_IMG(0x10261a00u), self, 3, 0x19u, arg2, 0u);
    t9 = g->edx;
    g->edx = t9;
    return t8;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025f700(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1025f700(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
