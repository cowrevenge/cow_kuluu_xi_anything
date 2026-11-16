/* f_0x101d3e10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_101d3e10(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)arg2 >= 0) goto L_101d3e3c;
    g->eax = arg1;
    g->edx = arg3;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x101d3c40u), self, 4, arg1, arg3, 1u, 1u);
    t2 = g->edx;
    g->edx = t2;
    return t1;
L_101d3e3c: ;
    if ((int32_t)arg2 >= 81)
    {
        eax = arg3 == 9u;
        edx = arg3;
    }
    else
    {
        t3 = rd32(arg2 * 4u + self + (arg3 == 9u) * 0x144u + 0x4cu);
        t4 = rd32(self + (uint8_t)arg1 * 4u + (arg3 == 9u) * 0x144u + 0x4cu);
        wr32(self + (uint8_t)arg1 * 4u + (arg3 == 9u) * 0x144u + 0x4cu, t3);
        wr32(arg2 * 4u + self + (arg3 == 9u) * 0x144u + 0x4cu, t4);
        wr8(t4 + 5u, (uint8_t)arg2);
        eax = arg2 * 4u + self + (arg3 == 9u) * 0x144u + 0x4cu;
        edx = self + (uint8_t)arg1 * 4u + (arg3 == 9u) * 0x144u + 0x4cu;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d3e10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101d3e10(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
