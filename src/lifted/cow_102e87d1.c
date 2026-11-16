/* f_0x102e87d1 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102e87d1(Guest* g)
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
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(arg1 + 0x20u) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        eax = rd32(arg1 + 0x20u);
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
        t1 = g->edx;
        wr32(arg1 + 0x20u, 0u);
        edx = t1;
    }
    if (rd32(arg1 + 0x24u) != 0u)
    {
        eax = rd32(arg1 + 0x24u);
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
        t2 = g->edx;
        wr32(arg1 + 0x24u, 0u);
        edx = t2;
    }
    if (rd32(arg1 + 0x28u) != 0u)
    {
        eax = rd32(arg1 + 0x28u);
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
        t3 = g->edx;
        wr32(arg1 + 0x28u, 0u);
        edx = t3;
    }
    if (rd32(arg1 + 0x2cu) != 0u)
    {
        eax = rd32(arg1 + 0x2cu);
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
        t4 = g->edx;
        wr32(arg1 + 0x2cu, 0u);
        edx = t4;
    }
    if (rd32(arg1 + 0x30u) != 0u)
    {
        eax = rd32(arg1 + 0x30u);
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
        wr32(arg1 + 0x30u, 0u);
    }
    if (rd32(arg1 + 0x38u) != 0u)
    {
        ecx = rd32(arg1 + 0x38u);
        t5 = rd32(arg1 + 8u);
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(rd32(rd32(arg1 + 8u)) + 0xe0u), ecx, 2, t5, ecx);
        wr32(arg1 + 0x38u, 0u);
    }
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e87d1(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102e87d1(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
