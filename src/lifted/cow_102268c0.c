/* f_0x102268c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_102268c0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t in_edx = g->edx;

    g->eax = rd32(COW_IMG(0x105781f8u));
    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x105781f8u));
    t2 = cow_thiscall(g, COW_IMG(0x102211b0u), t1 + 0x20u, 1, 2u);
    t3 = g->edx;
    t4 = cow_thiscall(g, COW_IMG(0x10150d40u), rd32(COW_IMG(0x1057847cu)), 1, 2u);
    t5 = rd32(rd32(COW_IMG(0x10578474u)) + 8u);
    g->edx = t5;
    t6 = cow_call_regs(g, COW_IMG(0x1015e790u), t4, COW_IMG(0x10621838u), g->edx, 0, 2, t5, 1u);
    t7 = g->edx;
    g->edx = t7;
    t8 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x103861d0u));
    t9 = g->edx;
    g->edx = t9;
    return t8;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102268c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102268c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
