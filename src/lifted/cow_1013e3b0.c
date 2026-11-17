/* f_0x1013e3b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_1013e3b0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    wr8(self + 0x27u, (uint8_t)arg1);
    wr8(self + 0x370u, (uint8_t)arg3);
    wr8(self + 0x371u, (uint8_t)arg4);
    if ((uint8_t)arg2 != 0u)
    {
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x1013bf40u), self, 0);
    }
    wr32(self + 0x378u, 0u);
    wr32(self + 0x37cu, 0u);
    g->eax = 0u;
    g->edx = rd32(self);
    t1 = rd32(self);
    g->esp = sp0 - 4u;
    t2 = cow_thiscall_cdecl(g, rd32(t1 + 0x44u), self, 2, 1u, 0u);
    t3 = g->edx;
    t4 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, t2, 1u, 0u);
    return t4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013e3b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1013e3b0(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
