/* f_0x10233dc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_10233dc0(Guest* g)
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
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x10220cf0u), 2, 0u, 0x23u);
    t2 = g->edx;
    g->edx = t2;
    cow_thiscall(g, COW_IMG(0x101170f0u), arg2, 3, 4u, 5u, t1);
    t3 = g->edx;
    g->eax = arg3 + 0xf620u;
    g->edx = t3;
    t4 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, arg3 + 0xf620u);
    t5 = g->edx;
    if (t4 == 0u)
    {
        eax = t4;
        edx = t5;
    }
    else
    {
        eax = t4;
        edx = t5;
        if (rd32(eax + 0x14c8u) == 0u)
        {
            eax = rd32(eax + 0x14c8u);
        }
        else
        {
            eax = rd32(eax + 0x14c8u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t6 = cow_thiscall(g, COW_IMG(0x101171b0u), arg2, 4, 0x10u, 0u, eax, arg4);
            t7 = g->edx;
            eax = t6;
            edx = t7;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10233dc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10233dc0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
