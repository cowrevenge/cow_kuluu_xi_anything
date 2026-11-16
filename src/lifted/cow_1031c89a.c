/* f_0x1031c89a - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1031c89a(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(arg1 + 0x10u);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, rd32(COW_IMG(0x1032922cu)), self, 3, t1, 0u, 0x8000u);
    t3 = g->edx;
    if (rd32(COW_IMG(0x103d29d8u)) != arg1)
    {
        eax = t2;
        edx = t3;
    }
    else
    {
        edx = t3;
        t4 = rd32(arg1 + 4u);
        wr32(COW_IMG(0x103d29d8u), t4);
        eax = t4;
    }
    if (arg1 == COW_IMG(0x103d09b8u)) goto L_1031c8e7;
    wr32(rd32(arg1 + 4u), rd32(arg1));
    t5 = rd32(arg1 + 4u);
    t6 = rd32(arg1);
    wr32(t6 + 4u, t5);
    g->eax = t6;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t7 = cow_thiscall(g, rd32(COW_IMG(0x10329260u)), t5, 3, rd32(COW_IMG(0x109f8404u)), 0u, arg1);
    t8 = g->edx;
    g->edx = t8;
    return t7;
L_1031c8e7: ;
    wr32(COW_IMG(0x103d09c8u), 0xffffffffu);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031c89a(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1031c89a(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
