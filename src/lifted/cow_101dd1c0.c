/* f_0x101dd1c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101dd1c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
        if ((int8_t)rd8(self + 0x14u) < 0)
        {
            eax = (in_eax & 0xffffff00u) | rd8(self + 0x14u);
            edx = in_edx;
        }
        else
        {
            eax = (in_eax & 0xffffff00u) | rd8(self + 0x14u);
            if ((int8_t)eax >= 3)
            {
                edx = in_edx;
            }
            else
            {
                g->esp = sp0 - 8u;
                t1 = cow_call_regs(g, COW_IMG(0x101c5e50u), eax, rd32(self + 0x378u), g->edx, 0, 1, 0u);
                t2 = self + (uint32_t)(int8_t)rd8(self + 0x14u) * 0x29u + (uint32_t)(int8_t)rd8(self + 0x16u) * 0x7bu + 0x1au;
                g->esp = sp0 - 4u;
                cow_call_regs(g, COW_IMG(0x10312090u), self + (uint32_t)(int8_t)rd8(self + 0x14u) + (uint32_t)(int8_t)rd8(self + 0x16u) * 3u, g->ecx, g->edx, 1, 3, t2, t1, 0x28u);
                wr8(self + (uint32_t)(int8_t)rd8(self + 0x14u) * 0x29u + (uint32_t)(int8_t)rd8(self + 0x16u) * 0x7bu + 0x42u, 0u);
                t3 = self + (uint32_t)(int8_t)rd8(self + 0x14u) * 0x29u + (uint32_t)(int8_t)rd8(self + 0x16u) * 0x7bu + 0x1au;
                g->esp = sp0 - 0x10u;
                cow_thiscall_cdecl(g, COW_IMG(0x1018fb30u), (uint32_t)(int8_t)rd8(self + 0x14u), 2, t3, t3);
                t4 = self + (uint32_t)(int8_t)rd8(self + 0x14u) * 0x29u + (uint32_t)(int8_t)rd8(self + 0x16u) * 0x7bu + 0x1au;
                g->eax = self + (uint32_t)(int8_t)rd8(self + 0x14u) + (uint32_t)(int8_t)rd8(self + 0x16u) * 3u;
                g->edx = (uint32_t)(int8_t)rd8(self + 0x14u) * 5u + (uint32_t)(int8_t)rd8(self + 0x16u) * 0xfu;
                t5 = rd8(self + 0x14u);
                t6 = rd8(self + 0x16u);
                g->esp = sp0 - 0x18u;
                t7 = cow_thiscall_cdecl(g, COW_IMG(0x1018fcd0u), t4, 1, t4);
                t8 = g->edx;
                eax = t7;
                edx = t8;
            }
        }
    }
    if (rd32(self + 0x378u) != 0u)
    {
        ecx = rd32(self + 0x378u);
        g->eax = eax;
        g->edx = rd32(ecx);
        t9 = rd32(ecx);
        g->esp = sp0 - 4u;
        t10 = cow_thiscall(g, rd32(t9 + 0xcu), ecx, 1, 1u);
        t11 = g->edx;
        wr32(self + 0x378u, 0u);
        eax = t10;
        edx = t11;
    }
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x101c6870u), rd32(COW_IMG(0x10662da0u)), 1, 0u);
    t12 = rd32(self + 8u);
    wr8(self + 0x14u, 0xffu);
    if (t12 != 0u)
    {
        eax = t12;
        wr8(eax + 0x61u, 1u);
        wr8(rd32(self + 8u) + 0x62u, 1u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101dd1c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101dd1c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
