/* f_0x10210260 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10210260(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int32_t)arg1 <= 0) goto L_1021028d;
    t1 = rd32(COW_IMG(0x10664514u));
    wr32(COW_IMG(0x10664504u), arg1);
    g->edx = in_edx;
    g->esp = sp0;
    t2 = cow_thiscall(g, COW_IMG(0x10210e30u), t1, 7, COW_IMG(0x102102b0u), arg2, 0u, 0u, 0u, 1u, 0u);
    t3 = g->edx;
    g->edx = t3;
    return t2;
L_1021028d: ;
    t4 = rd32(COW_IMG(0x1066451cu));
    wr32(COW_IMG(0x10664504u), 0xffffffffu);
    wr8(t4 + 0x10u, 0u);
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10210260(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10210260(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
