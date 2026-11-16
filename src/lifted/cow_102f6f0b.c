/* f_0x102f6f0b - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_102f6f0b(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd8(arg1 + 0x4au) == 0u)
    {
        eax = arg1;
        edx = in_edx;
        esi = rd32(arg1 + 0x17cu);
    }
    else
    {
        esi = rd32(arg1 + 0x17cu);
        g->eax = arg1;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t1 = cow_thiscall_cdecl(g, rd32(rd32(arg1 + 0x1a4u) + 8u), rd32(arg1 + 0x1a4u), 1, arg1);
        t2 = g->edx;
        eax = t1;
        edx = t2;
    }
    wr32(esi + 0xcu, rd32(esi + 0xcu) + 1u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f6f0b(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102f6f0b(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
