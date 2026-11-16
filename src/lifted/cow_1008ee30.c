/* f_0x1008ee30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1008ee30(Guest* g)
{
    uint32_t eax;
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
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
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

    if ((int8_t)rd8(self + 0x120u) >= 0)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x120u);
    }
    else
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x120u);
        t1 = rd32(self + 0x124u) & 0xfffdffffu;
        wr32(self + 0x124u, t1);
        g->esp = sp0 - 8u;
        cow_thiscall(g, COW_IMG(0x1008a1a0u), self, 0);
        t2 = rd32(self + 0x124u) & 0x1fffffffu;
        t3 = rd32(self + 0xd4u);
        wr32(self + 0x124u, t2);
        if (t3 != 0u)
        {
            eax = t3;
            edx = t2;
            if ((int32_t)rd32(self + 0x138u) < 0)
            {
                t4 = rd32(rd32(eax + 0x260u) + 0x140u);
                t5 = rd32(eax + 0x260u);
                wr32(self + 4u, t4);
                t6 = rd32(t5 + 0x144u);
                wr32(self + 8u, t6);
                t7 = rd32(t5 + 0x148u);
                wr32(self + 0xcu, t7);
                t8 = rd32(t5 + 0x140u);
                wr32(self + 0x24u, t8);
                t9 = rd32(t5 + 0x144u);
                wr32(self + 0x28u, t9);
                t10 = rd32(t5 + 0x148u);
                wr32(self + 0x2cu, t10);
                t11 = rd32(t5 + 0x150u);
                wr32(self + 0x14u, t11);
                t12 = rd32(t5 + 0x154u);
                wr32(self + 0x18u, t12);
                t13 = rd32(t5 + 0x158u);
                wr32(self + 0x1cu, t13);
                t14 = rd32(t5 + 0x150u);
                wr32(self + 0x34u, t14);
                t15 = rd32(t5 + 0x154u);
                wr32(self + 0x38u, t15);
                t16 = rd32(t5 + 0x158u);
                wr32(self + 0x3cu, t16);
                t17 = rd32(self + 0x120u);
                t18 = ((t17 >> 0x11u << 0xeu ^ t17) & 0x4000u) ^ t17;
                wr32(self + 0x120u, t18);
                eax = t17;
                edx = t16;
            }
            if (rd32(self + 0xd4u) != 0u)
            {
                edi = rd32(self + 0xd4u);
                g->eax = eax;
                g->esp = sp0 - 8u;
                t19 = cow_fastcall(g, COW_IMG(0x100bd5f0u), edi, edx, 0);
                t20 = g->ecx;
                t21 = g->edx;
                cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t20, t21, 1, 1, edi);
            }
            wr32(self + 0xd4u, 0u);
        }
        t22 = rd32(self + 0x120u) & 0xfffffe7fu;
        wr32(self + 0x120u, t22);
        eax = t22;
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1008ee30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1008ee30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
