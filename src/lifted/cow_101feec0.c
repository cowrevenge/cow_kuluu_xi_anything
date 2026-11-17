/* f_0x101feec0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101feec0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint8_t)arg1 == 0u)
    {
        eax = (in_eax & 0xffffff00u) | (uint8_t)arg1;
        edx = in_edx;
    }
    else
    {
        g->edx = in_edx;
        t1 = rd32(self + 0x1cu);
        g->esp = sp0 - 8u;
        t2 = cow_call_regs(g, COW_IMG(0x101c5e50u), (in_eax & 0xffffff00u) | (uint8_t)arg1, t1, g->edx, 0, 1, 1u);
        t3 = g->ecx;
        t4 = g->edx;
        g->edx = t4;
        g->esp = sp0 - 4u;
        t5 = cow_call_regs(g, COW_IMG(0x10312090u), self + 0x53u, g->ecx, g->edx, 1, 3, self + 0x53u, t2, 0x12cu);
        t6 = g->edx;
        wr8(self + 0x17eu, 0u);
        eax = t5;
        edx = t6;
    }
    if (rd32(self + 0x1cu) != 0u)
    {
        ecx = rd32(self + 0x1cu);
        g->eax = eax;
        g->edx = rd32(ecx);
        t7 = rd32(ecx);
        g->esp = sp0 - 4u;
        t8 = cow_thiscall(g, rd32(t7 + 0xcu), ecx, 1, 1u);
        t9 = g->edx;
        wr32(self + 0x1cu, 0u);
        eax = t8;
        edx = t9;
    }
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x101c6870u), rd32(COW_IMG(0x10662da0u)), 1, 0u);
    if (rd32(self + 8u) != 0u)
    {
        esi = rd32(self + 8u);
        wr8(esi + 0x62u, 1u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101feec0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101feec0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
