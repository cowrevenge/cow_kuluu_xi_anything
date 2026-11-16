/* f_0x10110180 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10110180(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(self + 4u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10112810u), self, 5, arg1, 1u, COW_IMG(0x1036bf24u), COW_IMG(0x1036bf2cu), t1);
    if (rd32(self + 8u) != 1u)
    {
        eax = rd32(self + 8u);
        if (eax == 2u)
        {
            eax = COW_IMG(0x1036bf70u);
        }
        else
        {
            eax = COW_IMG(0x1036a198u);
        }
    }
    else
    {
        eax = COW_IMG(0x1036bf78u);
    }
    t2 = rd32(self + 0x14u);
    t3 = rd32(self + 0xcu);
    t4 = rd32(self + 0x10u);
    g->edx = t3;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10112880u), self, 6, arg1, 2u, eax, t4, t3, t2);
    t5 = g->edx;
    g->edx = t5;
    t6 = cow_thiscall(g, COW_IMG(0x10112780u), self, 4, arg1, 1u, COW_IMG(0x1036bf28u), COW_IMG(0x1036bf2cu));
    t7 = g->edx;
    g->edx = t7;
    return (t6 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10110180(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10110180(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
