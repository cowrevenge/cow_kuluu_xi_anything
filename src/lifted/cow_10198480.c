/* f_0x10198480 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10198480(Guest* g)
{
    uint32_t ecx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(self + 0x30u);
    t2 = rd8(COW_IMG(0x10379b08u) + arg1 * 4u);
    g->ecx = t2;
    g->esp = sp0 - 8u;
    t3 = cow_cdecl(g, COW_IMG(0x10193960u), 2, t2, t1);
    t4 = g->ecx;
    if ((uint8_t)t3 == 0u) goto L_101984c2;
    ecx = t4;
    t5 = rd32(self + 0x30u);
    t6 = rd8(COW_IMG(0x10379b08u) + arg1 * 4u);
    g->edx = t5;
    g->esp = sp0 - 8u;
    t7 = cow_cdecl(g, COW_IMG(0x10193980u), 3, t6, t5, 0u);
    t8 = g->edx;
    wr32(self + 0x30u, t7);
    g->edx = t8;
    return t7;
L_101984c2: ;
    t9 = rd32(self + 0x30u);
    t10 = rd8(COW_IMG(0x10379b08u) + arg1 * 4u);
    g->edx = t10;
    g->esp = sp0 - 8u;
    t11 = cow_cdecl(g, COW_IMG(0x10193980u), 3, t10, t9, 1u);
    t12 = g->edx;
    wr32(self + 0x30u, t11);
    g->edx = t12;
    return t11;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10198480(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10198480(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
