/* f_0x1014e0f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1014e0f0(Guest* g)
{
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = rd32(self + 8u);
    t2 = rd32(self + 0x24u);
    t3 = rd16(rd32(self + 8u) + 0x4cu);
    wr16(self + 0x30u, (uint16_t)arg1);
    if ((int16_t)arg1 >= 0)
    {
        ecx = t1;
        esi = t2;
        edi = (uint32_t)(int16_t)t3;
    }
    else
    {
        ecx = t1;
        esi = t2;
        edi = (uint32_t)(int16_t)t3;
        wr16(self + 0x30u, 0u);
    }
    if ((int16_t)rd16(self + 0x30u) < (int32_t)esi)
    {
        edx = (uint32_t)(int16_t)rd16(self + 0x30u);
    }
    else
    {
        wr16(self + 0x30u, (uint16_t)(esi - 1u));
        edx = esi - 1u;
    }
    if ((uint8_t)arg2 == 0u)
    {
        edx = (edx & 0xffff0000u) | rd16(self + 0x30u);
        goto L_1014e16c;
    }
    edx = (edx & 0xffff0000u) | rd16(self + 0x30u);
    wr16(self + 0x32u, (uint16_t)(edx - edi + 1u));
    if ((int32_t)((uint32_t)(int16_t)(edx - edi + 1u) + 3u) >= (int32_t)esi)
    {
        wr16(self + 0x32u, (uint16_t)(esi - 3u));
    }
    if ((int16_t)rd16(self + 0x32u) >= 0) goto L_1014e1a0;
    wr16(self + 0x32u, 0u);
    t4 = ((edx & 0xffff0000u) | (uint16_t)((uint16_t)edx - rd16(self + 0x32u))) + 1u;
    g->esp = sp0 - 8u;
    t5 = cow_call_regs(g, COW_IMG(0x10118db0u), self, ecx, g->edx, 0, 2, t4, 0u);
    return (t5 & 0xffffff00u) | 1u;
L_1014e16c: ;
    if ((int16_t)edx >= (int16_t)rd16(self + 0x32u))
    {
        esi = (esi & 0xffff0000u) | rd16(self + 0x32u);
        goto L_1014e18c;
    }
    wr16(self + 0x32u, (uint16_t)edx);
    t6 = (edx & 0xffff0000u) + 1u;
    g->esp = sp0 - 8u;
    t7 = cow_call_regs(g, COW_IMG(0x10118db0u), self, ecx, g->edx, 0, 2, t6, 0u);
    return (t7 & 0xffffff00u) | 1u;
L_1014e18c: ;
    if ((int32_t)((uint32_t)(int16_t)edx - (uint32_t)(int16_t)esi) >= 3)
    {
        wr16(self + 0x32u, (uint16_t)(edx - 2u));
    }
L_1014e1a0: ;
    t8 = ((edx & 0xffff0000u) | (uint16_t)((uint16_t)edx - rd16(self + 0x32u))) + 1u;
    g->esp = sp0 - 8u;
    t9 = cow_call_regs(g, COW_IMG(0x10118db0u), self, ecx, g->edx, 0, 2, t8, 0u);
    return (t9 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014e0f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1014e0f0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
