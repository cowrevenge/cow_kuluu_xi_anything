/* f_0x100df8e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100df8e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0x4eu, 1u, 0u);
    if (t1 == 0u)
    {
        edx = t1;
    }
    else
    {
        eax = t1;
        edx = t1;
        wr8(edx + 4u, (uint8_t)arg1);
        wr8(edx + 5u, 0u);
        wr8(edx + 6u, 0u);
        wr8(edx + 7u, 0u);
        wr32(edx + 8u, 0u);
        wr32(edx + 0xcu, 0u);
        wr32(edx + 0x10u, 0u);
        edi = edx + 0x14u;
        eax = 0u;
        ecx = 0xau;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    }
    return edx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100df8e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100df8e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
