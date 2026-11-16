/* f_0x101e7e90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101e7e90(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    if (rd32(rd32(COW_IMG(0x10578244u)) + 8u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x10578244u)) + 8u);
        t1 = rd32(rd32(COW_IMG(0x1057823cu)) + 8u);
        edx = t1;
        loc_4 = t1;
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x10578244u)) + 8u);
        edx = in_edx;
        loc_4 = eax;
    }
    g->edx = edx;
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x1015e530u), eax, COW_IMG(0x10621838u), g->edx, 0, 1, loc_4);
    t2 = g->edx;
    t3 = rd32(rd32(COW_IMG(0x10578468u)) + 8u);
    g->edx = t2;
    t4 = rd32(COW_IMG(0x10578468u));
    t5 = cow_call_regs(g, COW_IMG(0x1015e530u), t4, COW_IMG(0x10621838u), g->edx, 0, 1, t3);
    t6 = g->edx;
    g->edx = t6;
    return t5;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e7e90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e7e90(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
