/* f_0x101f7020 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_101f7020(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    wr32(self + 0x38u, arg1);
    wr16(self + 0x20u, (uint16_t)arg2);
    t1 = rd16(self + 0x18u);
    wr16(self + 0x22u, (uint16_t)((uint16_t)arg2 - t1));
    if ((int16_t)((uint16_t)arg2 - t1) >= 0)
    {
        eax = (arg1 & 0xffff0000u) | (uint16_t)((uint16_t)arg2 - t1);
    }
    else
    {
        eax = (arg1 & 0xffff0000u) | (uint16_t)((uint16_t)arg2 - t1);
        wr16(self + 0x22u, 0u);
    }
    if ((int16_t)rd16(self + 0x1eu) <= (int16_t)rd16(self + 0x22u))
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x22u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x22u);
        wr16(self + 0x1eu, (uint16_t)eax);
    }
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x101f66b0u), eax, self, in_edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (rd32(t2 + 8u) == 0u)
    {
        eax = rd32(t2 + 8u);
        ecx = t2;
        edx = t3;
    }
    else
    {
        eax = rd32(t2 + 8u);
        ecx = t2;
        edx = t3;
        t4 = rd16(eax + 0x4cu);
        wr16(ecx + 0x24u, (uint16_t)t4);
        edx = (edx & 0xffff0000u) | t4;
    }
    if ((uint8_t)arg3 == 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg3;
    }
    else
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg3;
        t5 = (eax & 0xffffff00u) | (uint16_t)arg2 == 0u;
        g->eax = t5;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t6 = cow_thiscall(g, COW_IMG(0x101f6720u), ecx, 1, t5);
        t7 = g->edx;
        eax = t6;
        edx = t7;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f7020(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101f7020(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
