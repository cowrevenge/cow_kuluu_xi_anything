/* f_0x1009ade0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
void cow_fn_1009ade0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 != 0u)
    {
        t1 = rd32(self + 0x134u);
        if ((t1 >> 0x14u & 1u) == arg1)
        {
            eax = t1;
            if (arg2 != (eax >> 0x15u & 0xfu))
            {
                eax = eax >> 0x15u & 0xfu;
                if (arg3 != (uint8_t)rd32(self + 0x138u))
                {
                    edx = (uint8_t)rd32(self + 0x138u);
                    g->esp = sp0 - 0x10u;
                    cow_fastcall(g, COW_IMG(0x10092710u), self, edx, 0);
                }
            }
        }
    }
    t2 = rd32(self + 0x134u);
    wr8(self + 0x138u, (uint8_t)arg3);
    t3 = ((arg2 << 0x15u ^ t2) & 0x1e00000u) ^ ((arg1 << 0x14u ^ t2) & 0x100000u) ^ t2;
    t4 = rd32(self + 0x138u);
    wr32(self + 0x134u, t3);
    t5 = ((arg5 << 0xcu ^ t4) & 0x3ff000u) ^ ((arg4 << 8u ^ t4) & 0xf00u) ^ t4;
    wr32(self + 0x138u, t5);
    g->edx = arg6;
    t6 = rd32(self + 0x138u);
    g->esp = sp0 - 0x10u;
    t7 = cow_cdecl(g, COW_IMG(0x10086fe0u), 1, arg6);
    t8 = g->edx;
    wr16(self + 0x2a6u, (uint16_t)t7);
    t9 = cow_call_regs(g, COW_IMG(0x100983a0u), t7, self, t8, 1, 0);
    if (t9 == 0u)
    {
        wr32(self + 0x134u, rd32(self + 0x134u) & 0xffefffffu);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1009ade0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1009ade0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 24u);
}
/* COW_ADAPTER END */
