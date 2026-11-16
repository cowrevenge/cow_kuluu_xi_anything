/* f_0x101fcec0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=9 */
uint32_t cow_fn_101fcec0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg9 = rd32(g->esp + 0x24u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    wr8(self + 0x14u, (uint8_t)arg1);
    wr8(self + 0x17u, (uint8_t)arg9);
    wr16(self + 0x18u, (uint16_t)arg2);
    wr32(self + 0x3cu, arg3);
    wr32(self + 0x40u, arg4);
    wr32(self + 0x44u, arg5);
    wr32(self + 0x48u, arg6);
    wr16(self + 0x30u, 0u);
    wr16(self + 0x32u, 0u);
    wr8(self + 0x34u, 0u);
    wr8(self + 0x35u, 0u);
    wr16(self + 0x1au, 0x60u);
    wr32(self + 0x4cu, arg7);
    wr32(self + 0x50u, arg8);
    wr8(self + 0x15u, 0u);
    wr8(self + 0x16u, 0u);
    g->ebx = 0u;
    g->eax = arg8;
    g->edx = arg7;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10385148u), 1u, 0u);
    t2 = g->edx;
    g->ebx = 0u;
    t3 = cow_fastcall(g, COW_IMG(0x101ec220u), rd32(COW_IMG(0x106636a0u)), t2, 4, 0x10u, 0xf0u, 8u, 0u);
    t4 = rd32(rd32(COW_IMG(0x1066369cu)) + 8u);
    t5 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t4, 2, t4, 0u);
    g->ebx = in_ebx;
    return t5;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fcec0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101fcec0(g);
    g->esp = sp0;
    rt_return(g, r, 36u);
}
/* COW_ADAPTER END */
