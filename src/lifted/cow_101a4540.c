/* f_0x101a4540 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101a4540(Guest* g)
{
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

    t1 = rd8(self + 0xcu);
    wr8(self + 0xeu, (uint8_t)arg1);
    wr8(self + 0xdu, (uint8_t)arg1);
    if ((uint8_t)t1 != 1u) goto L_101a4574;
    wr8(self + 0xcu, 2u);
    g->edx = 1u;
    g->esp = sp0;
    t2 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x103762ecu), 1u, 0u);
    t3 = g->ecx;
    t4 = g->edx;
    cow_thiscall(g, COW_IMG(0x10037b30u), t3, 0);
    return;
L_101a4574: ;
    wr8(self + 0xcu, 1u);
    g->edx = 1u;
    g->esp = sp0;
    t5 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10376314u), 1u, 0u);
    t6 = g->ecx;
    t7 = g->edx;
    cow_thiscall(g, COW_IMG(0x10037b30u), t6, 0);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a4540(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101a4540(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
