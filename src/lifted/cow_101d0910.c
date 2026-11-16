/* f_0x101d0910 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101d0910(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 == 0u)
    {
        eax = arg1;
    }
    else
    {
        t1 = rd8(self + 4u);
        wr8(self + 5u, (uint8_t)(rd8(self + 5u) | t1));
        eax = (arg1 & 0xffffff00u) | t1;
    }
    t2 = rd8(self + 4u);
    wr8(self + 4u, (uint8_t)(t2 >> 1u));
    if ((uint8_t)(t2 >> 1u) == 0u)
    {
        if ((int32_t)rd32(self + 0xcu) < (int32_t)rd32(self + 0x10u))
        {
            eax = rd32(self + 0xcu);
            t3 = rd32(self + 8u);
            wr8(eax + t3, rd8(self + 5u));
            t4 = rd32(self + 0xcu) + 1u;
            t5 = rd8(self + 5u);
            wr32(self + 0xcu, t4);
            if ((uint8_t)t5 == 0xffu)
            {
                eax = t4;
                wr8(eax + rd32(self + 8u), 0u);
                t6 = rd32(self + 0xcu) + 1u;
                wr32(self + 0xcu, t6);
            }
            wr8(self + 4u, 0x80u);
            wr8(self + 5u, 0u);
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d0910(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101d0910(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
