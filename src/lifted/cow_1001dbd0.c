/* f_0x1001dbd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1001dbd0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, self + 0x31u);
    g->esp = sp0 - 0x14u;
    cow_fastcall(g, COW_IMG(0x10039810u), sp0 - 0x10u, in_edx, 1, self + 0x31u);
    t1 = g->edx;
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, self);
    wr32(sp0 - 0x20u, sp0 - 0x10u);
    g->edx = t1;
    t2 = cow_thiscall(g, COW_IMG(0x1003aea0u), rd32(COW_IMG(0x1047b970u)), 3, sp0 - 0x10u, self, 0u);
    t3 = g->edx;
    if (t2 == 0u)
    {
        eax = t2;
        edx = t3;
    }
    else
    {
        eax = t2;
        edx = t3;
        if (rd32(eax + 4u) != 0u)
        {
            ecx = rd32(eax + 4u);
            wr32(eax + 4u, ecx - 1u);
        }
        if (rd32(eax + 4u) == 0u)
        {
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t4 = cow_thiscall(g, COW_IMG(0x100399d0u), eax, 0);
            t5 = g->edx;
            eax = t4;
            edx = t5;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1001dbd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1001dbd0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
