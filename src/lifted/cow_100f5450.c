/* f_0x100f5450 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_100f5450(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
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
        t1 = cow_cdecl(g, COW_IMG(0x1030ff10u), 4, 8u, arg1 + 0xc48u, 0x200u, 0u);
        t2 = rd32(arg1 + 0xa0u);
        g->edx = t2;
        g->esp = sp0 - 0x18u;
        cow_cdecl(g, COW_IMG(0x10310422u), 2, t2, arg1 + 0xe48u);
        t3 = g->edx;
        edx = t3;
    }
    g->edx = edx;
    g->esp = sp0 - 8u;
    t4 = cow_thiscall(g, COW_IMG(0x100f3e20u), arg1, 2, arg2, arg1 + 8u);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 != 0x17u)
    {
        eax = t4;
        edx = t6;
    }
    else
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        wr8(arg1 + 0xc7u, rd8(arg1 + 0xc5u));
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f5450(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f5450(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
