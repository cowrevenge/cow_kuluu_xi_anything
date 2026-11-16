/* f_0x1021bb20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_1021bb20(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = (in_eax & 0xffffff00u) | rd8(self + 0xfu);
    t2 = (in_edx & 0xffffff00u) | rd8(self + 0xeu);
    t3 = ((t1 & 0xffff0000u) | (uint8_t)arg4) * 0xeu;
    cow_thiscall(g, COW_IMG(0x1021b3f0u), self, 6, arg1, arg2, arg3, t3, t2, t1);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1021bb20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1021bb20(g);
    g->esp = sp0;
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
