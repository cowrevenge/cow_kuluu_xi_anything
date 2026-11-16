/* f_0x10143380 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10143380(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint8_t)arg2 == 0u)
    {
        eax = (in_eax & 0xffffff00u) | (uint8_t)arg2;
        edx = in_edx;
    }
    else
    {
        g->edx = in_edx;
        g->esp = sp0;
        cow_stdcall(g, COW_IMG(0x10141e00u), 0);
        t1 = g->edx;
        t2 = rd32(COW_IMG(0x10578294u));
        wr16(COW_IMG(0x1037148cu), 0xffffu);
        wr16(COW_IMG(0x105782acu), 0u);
        wr16(COW_IMG(0x105782aeu), 0u);
        t3 = rd32(t2 + 8u);
        g->eax = t2;
        t4 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t1, 2, t3, 0u);
        t5 = g->edx;
        eax = t4;
        edx = t5;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10143380(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10143380(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
