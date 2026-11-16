/* f_0x10171030 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10171030(Guest* g)
{
    uint32_t eax;
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int32_t)arg1 >= 4)
    {
        eax = self;
    }
    else
    {
        if (((uint8_t)(1u << (arg1 & 0x1fu)) & rd8(self + 0x1a8u)) == 0u)
        {
            eax = arg1 * 0x40u + self + 0x98u;
        }
        else
        {
            eax = rd32(arg1 * 4u + self + 0x198u) + 0x40u;
        }
        wr32(arg2, rd32(eax));
        t1 = rd32(eax + 4u);
        wr32(arg2 + 4u, t1);
        t2 = rd32(eax + 8u);
        wr32(arg2 + 8u, t2);
        t3 = rd32(eax + 0xcu);
        wr32(arg2 + 0xcu, t3);
        t4 = rd32(eax + 0x10u);
        wr32(arg2 + 0x10u, t4);
        t5 = rd32(eax + 0x14u);
        wr32(arg2 + 0x14u, t5);
        t6 = rd32(eax + 0x18u);
        wr32(arg2 + 0x18u, t6);
        t7 = rd32(eax + 0x1cu);
        wr32(arg2 + 0x1cu, t7);
        t8 = rd32(eax + 0x20u);
        wr32(arg2 + 0x20u, t8);
        t9 = rd32(eax + 0x24u);
        wr32(arg2 + 0x24u, t9);
        t10 = rd32(eax + 0x28u);
        wr32(arg2 + 0x28u, t10);
        t11 = rd32(eax + 0x2cu);
        wr32(arg2 + 0x2cu, t11);
        t12 = rd32(eax + 0x30u);
        wr32(arg2 + 0x30u, t12);
        t13 = rd32(eax + 0x34u);
        wr32(arg2 + 0x34u, t13);
        t14 = rd32(eax + 0x38u);
        wr32(arg2 + 0x38u, t14);
        t15 = rd32(eax + 0x3cu);
        wr32(arg2 + 0x3cu, t15);
        eax = t15;
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10171030(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10171030(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
