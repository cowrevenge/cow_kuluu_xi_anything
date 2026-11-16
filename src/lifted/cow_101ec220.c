/* f_0x101ec220 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_101ec220(Guest* g)
{
    uint32_t eax;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    wr32(self + 0x18u, arg2);
    wr16(self + 0x24u, 0u);
    wr32(self + 0x14u, arg1);
    wr8(self + 0x40u, (uint8_t)arg4);
    wr8(self + 0x44u, 0u);
    g->edx = (in_edx & 0xffffff00u) | (uint8_t)arg4;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x101ec3c0u), arg1, self, g->edx, 1, 0);
    t1 = g->edx;
    t2 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10382054u), 1u, 0u);
    if (rd32(self + 8u) == 0u)
    {
        eax = t2;
    }
    else
    {
        eax = t2;
        esi = rd32(self + 8u);
        wr16(esi + 0x38u, (uint16_t)arg3);
        eax = (eax & 0xffff0000u) | (uint16_t)arg3;
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ec220(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ec220(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
