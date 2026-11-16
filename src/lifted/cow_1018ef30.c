/* f_0x1018ef30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1018ef30(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 8u);
        wr8(eax + 0x85u, 0u);
        t1 = rd32(self + 8u);
        wr8(t1 + 0x69u, 0u);
        if (rd32(self + 0x2218u) == 0u)
        {
            eax = t1;
            g->eax = eax;
            g->edx = rd32(rd32(self + 0x221cu));
            t5 = rd32(rd32(self + 0x221cu));
            g->esp = sp0 - 0x14u;
            t6 = cow_thiscall(g, rd32(t5), rd32(self + 0x221cu), 0);
            t7 = g->edx;
            eax = t6;
            ecx = rd32(self + 0x221cu);
            edx = t7;
        }
        else
        {
            eax = t1;
            ecx = rd32(self + 0x2218u);
            g->eax = eax;
            g->edx = rd32(ecx);
            t2 = rd32(ecx);
            g->esp = sp0 - 0x14u;
            t3 = cow_thiscall(g, rd32(t2), ecx, 0);
            t4 = g->edx;
            eax = t3;
            ecx = rd32(self + 0x2218u);
            edx = t4;
        }
        wr32(self + 0x2208u, eax);
        g->eax = rd32(ecx);
        g->edx = edx;
        t8 = rd32(ecx);
        g->esp = sp0 - 0x14u;
        t9 = cow_thiscall(g, rd32(t8 + 4u), ecx, 0);
        t10 = g->edx;
        wr32(self + 0x220cu, t9);
        g->edx = t10;
        t11 = cow_thiscall(g, COW_IMG(0x1018fa00u), self, 0);
        t12 = g->edx;
        t13 = rd32(self + 0x2208u);
        wr32(self + 0x2204u, 0u);
        t14 = rd32(self + 0x220cu);
        wr32(sp0 - 0x18u, t14);
        wr32(sp0 - 0x1cu, t11 + t13);
        g->edx = t12;
        t15 = cow_call_regs(g, COW_IMG(0x10119110u), t11 + t13, rd32(self + 8u), g->edx, 0, 2, t11 + t13, t14);
        t16 = g->edx;
        wr32(sp0 - 0x18u, 1u);
        wr32(sp0 - 0x1cu, 2u);
        g->ebx = 0u;
        g->edx = t16;
        t17 = cow_call_regs(g, COW_IMG(0x10118db0u), t15, rd32(self + 8u), g->edx, 0, 2, 2u, 1u);
        t18 = g->edx;
        wr16(sp0 - 0xcu, 0u);
        wr32(sp0 - 0x18u, sp0 - 0xcu);
        t19 = rd32(self + 8u);
        wr16(sp0 - 0xau, 0u);
        wr16(sp0 - 8u, 0u);
        wr16(sp0 - 6u, 0u);
        cow_call_regs(g, COW_IMG(0x10118f70u), t17, t19, g->edx, 0, 1, sp0 - 0xcu);
        t20 = rd32(sp0 - 0xau);
        t21 = rd16(sp0 - 0xcu);
        t22 = rd32(sp0 - 6u);
        wr16(self + 0x2222u, (uint16_t)(t22 - t20));
        wr16(self + 0x2220u, (uint16_t)t21);
        eax = (t20 & 0xffff0000u) | t21;
        edx = t22 - t20;
    }
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018ef30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1018ef30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
