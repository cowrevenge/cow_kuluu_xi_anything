/* f_0x100f54b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_100f54b0(Guest* g)
{
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 != 0u)
    {
        edx = in_edx;
    }
    else
    {
        g->eax = arg1 + 0xc48u;
        g->esp = sp0 - 8u;
        t1 = cow_cdecl(g, COW_IMG(0x1030ff10u), 4, 7u, arg1 + 0xc48u, 0x200u, 0u);
        t2 = rd32(arg1 + 0xa0u);
        g->edx = t2;
        g->esp = sp0 - 0x18u;
        cow_cdecl(g, COW_IMG(0x10310422u), 2, t2, arg1 + 0xe48u);
        t3 = g->edx;
        edx = t3;
    }
    g->edx = edx;
    g->esp = sp0 - 8u;
    t4 = cow_thiscall(g, COW_IMG(0x100f3f10u), arg1, 3, arg2, 1u, arg1 + 8u);
    t5 = g->edx;
    g->edx = t5;
    return t4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f54b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f54b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
