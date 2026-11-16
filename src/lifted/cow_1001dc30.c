/* f_0x1001dc30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1001dc30(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, self + 0x31u);
    g->esp = sp0 - 0x14u;
    cow_fastcall(g, COW_IMG(0x10039810u), sp0 - 0x10u, in_edx, 1, self + 0x31u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, arg1);
    wr32(sp0 - 0x20u, sp0 - 0x10u);
    g->edx = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x1003aea0u), rd32(COW_IMG(0x1047b970u)), 3, sp0 - 0x10u, arg1, 0u);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
    }
    else
    {
        eax = t1;
        edx = t2;
        wr32(sp0 - 0x18u, eax);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t3 = cow_thiscall(g, COW_IMG(0x1001d8e0u), self, 1, eax);
        t4 = g->edx;
        eax = t3;
        edx = t4;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1001dc30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1001dc30(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
