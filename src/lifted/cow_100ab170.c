/* f_0x100ab170 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_100ab170(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(arg1 + 0x70u) == 0u)
    {
        eax = arg1;
        edx = in_edx;
    }
    else
    {
        esi = rd32(arg1 + 0x70u);
        g->eax = arg1;
        g->edx = in_edx;
        t1 = rd16(esi + 0x74u);
        g->esp = sp0 - 8u;
        t2 = cow_thiscall(g, COW_IMG(0x1008a7b0u), esi, 0);
        t3 = g->ecx;
        t4 = g->edx;
        g->edx = t4;
        t5 = cow_cdecl(g, COW_IMG(0x1002c8b0u), 1, esi);
        t6 = g->edx;
        wr32(COW_IMG(0x10480af0u) + (uint16_t)t1 * 4u, 0u);
        eax = t5;
        edx = t6;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ab170(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100ab170(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
