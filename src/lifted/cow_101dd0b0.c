/* f_0x101dd0b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101dd0b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 60u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_ebp);
    wr32(sp0 - 0x14u, in_esi);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    if ((int32_t)arg1 < 0)
    {
        edi = in_edi;
    }
    else
    {
        if ((int32_t)arg1 >= 3)
        {
            edi = in_edi;
        }
        else
        {
            wr32(sp0 - 0x18u, in_edi);
            wr32(sp0 - 0x1cu, sp0 - 8u);
            g->esp = sp0 - 0x18u;
            cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 8u, rd32(self + 8u), g->edx, 0, 1, sp0 - 8u);
            t1 = arg1 * 0x29u + self + (uint32_t)(int8_t)rd8(self + 0x16u) * 0x7bu + 0x1au;
            wr32(sp0 - 0x1cu, t1);
            g->edx = arg1 * 5u + (uint32_t)(int8_t)rd8(self + 0x16u) * 0xfu;
            t2 = rd8(self + 0x16u);
            t3 = rd32(sp0 - 6u);
            cow_thiscall_cdecl(g, COW_IMG(0x1018fcd0u), t1, 1, t1);
            t4 = g->ecx;
            t5 = g->edx;
            if (rd32(self + 0x378u) != 0u)
            {
                eax = rd32(self + 0x378u);
                edx = t5;
            }
            else
            {
                eax = rd32(self + 0x378u);
                ecx = t4;
                edx = t5;
                edi = arg1 * 0x10u + t3;
                wr32(sp0 - 0x1cu, 0x6b4u);
                g->eax = eax;
                g->esp = sp0 - 0x10u;
                t6 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x6b4u, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
                t7 = g->edx;
                if (t6 == 0u)
                {
                    edx = t7;
                    eax = 0u;
                }
                else
                {
                    eax = t6;
                    t8 = (uint32_t)(int16_t)edi - 0x88u;
                    wr32(sp0 - 0x1cu, t8);
                    wr32(sp0 - 0x20u, 0xfu);
                    t9 = (uint32_t)(int16_t)rd16(sp0 - 4u) - (uint32_t)(int16_t)rd16(sp0 - 8u) - 8u;
                    wr32(sp0 - 0x24u, t9);
                    t10 = arg1 * 0x29u + self + (uint32_t)(int8_t)rd8(self + 0x16u) * 0x7bu + 0x1au;
                    wr32(sp0 - 0x28u, t10);
                    wr32(sp0 - 0x2cu, COW_IMG(0x101dd080u));
                    wr32(sp0 - 0x30u, self);
                    wr32(sp0 - 0x34u, 0x28u);
                    wr32(sp0 - 0x38u, 9u);
                    g->eax = eax;
                    g->edx = arg1 + self + (uint32_t)(int8_t)rd8(self + 0x16u) * 3u;
                    t11 = rd8(self + 0x16u);
                    g->esp = sp0 - 0x18u;
                    t12 = cow_thiscall(g, COW_IMG(0x101c5be0u), eax, 8, 9u, 0x28u, self, COW_IMG(0x101dd080u), t10, t9, 0xfu, t8);
                    t13 = g->edx;
                    eax = t12;
                    edx = t13;
                }
                wr32(self + 0x378u, eax);
            }
            g->esp = sp0 - 0x18u;
            t14 = cow_call_regs(g, COW_IMG(0x101c68a0u), eax, rd32(COW_IMG(0x10662da0u)), edx, 1, 0);
            t15 = rd32(self + 0x378u);
            wr32(sp0 - 0x1cu, t15);
            cow_thiscall(g, COW_IMG(0x101c6870u), rd32(COW_IMG(0x10662da0u)), 1, t15);
            t16 = rd32(self + 8u);
            wr8(self + 0x14u, (uint8_t)arg1);
            t17 = rd32(sp0 - 0x18u);
            wr8(t16 + 0x61u, 0u);
            wr8(rd32(self + 8u) + 0x62u, 0u);
            edi = t17;
        }
    }
    g->edi = edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101dd0b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101dd0b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
