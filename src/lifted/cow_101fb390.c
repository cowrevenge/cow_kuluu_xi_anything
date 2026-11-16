/* f_0x101fb390 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=2 */
uint32_t cow_fn_101fb390(Guest* g)
{
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int16_t)rd16(self + 0x70u) >= 0)
    {
        esi = (in_esi & 0xffff0000u) | rd16(self + 0x70u);
        goto L_101fb3a0;
    }
    return (in_eax & 0xffffff00u) | 1u;
L_101fb3a0: ;
    t1 = (uint32_t)(int16_t)((uint16_t)arg2 - rd16(self + 0x6eu));
    t2 = (uint32_t)(int16_t)((uint16_t)arg1 - rd16(self + 0x6cu));
    return ((uint32_t)(int16_t)esi & 0xffffff00u) | (int32_t)(t1 * t1 + t2 * t2) < (int16_t)esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fb390(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101fb390(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
