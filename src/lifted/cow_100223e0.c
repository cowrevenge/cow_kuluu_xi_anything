/* f_0x100223e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_100223e0(Guest* g)
{
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = (rd32(self + 0x36u) - self - 0x30u) >> 1u;
    t2 = rd32(self + 0x3cu);
    wr32(self + 0x36u, t1);
    t3 = (t2 - self - 0x30u) >> 1u;
    t4 = rd32(self + 0x42u);
    wr32(self + 0x3cu, t3);
    t5 = (t4 - self - 0x30u) >> 1u;
    t6 = rd32(self + 0x48u);
    wr32(self + 0x42u, t5);
    t7 = (t6 - self - 0x30u) >> 1u;
    t8 = rd32(self + 0x4eu);
    wr32(self + 0x48u, t7);
    t9 = (t8 - self - 0x30u) >> 1u;
    t10 = rd32(self + 0x54u);
    wr32(self + 0x4eu, t9);
    t11 = (t10 - self - 0x30u) >> 1u;
    t12 = rd32(self + 0x5eu);
    wr32(self + 0x54u, t11);
    t13 = (t12 - self - 0x30u) >> 1u;
    t14 = rd32(self + 0x7cu);
    wr32(self + 0x5eu, t13);
    t15 = (t14 - self - 0x30u) >> 1u;
    wr32(self + 0x7cu, t15);
    wr32(rd32(self + 0x14u), arg1);
    g->edx = t15;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100223e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100223e0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
