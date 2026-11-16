/* f_0x10087ae0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10087ae0(Guest* g)
{
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    wr8(COW_IMG(0x10480980u), rd8(COW_IMG(0x10480980u)) | 1u);
    esi = arg1;
    edi = COW_IMG(0x10480900u);
    ecx = 0x20u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr8(COW_IMG(0x10480984u), rd8(COW_IMG(0x10480984u)) | 2u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10087ae0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10087ae0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
