/* f_0x102b3cd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102b3cd0(Guest* g)
{
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int32_t)(rd32(arg1 + 0x14u) - arg2 - 1u) <= 0)
    {
        edx = in_edx;
    }
    else
    {
        ecx = rd32(arg1 + 0x14u) - arg2 - 1u;
        t1 = rd32(arg1 + 0x20u);
        t2 = t1 * arg2 + rd32(arg1 + 0x24u);
        t3 = rd32(arg1 + 0x24u) + (arg2 - 1u) * t1;
        g->edx = rd32(arg1 + 0x24u);
        t4 = rd32(arg1 + 0x24u);
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x10314a10u), 5, t3, t2, t1 * ecx, in_ebx, in_edi);
        t5 = g->edx;
        edx = t5;
    }
    t6 = rd32(arg1 + 0x14u) - 1u;
    wr32(arg1 + 0x14u, t6);
    g->edx = edx;
    return t6;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b3cd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102b3cd0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
