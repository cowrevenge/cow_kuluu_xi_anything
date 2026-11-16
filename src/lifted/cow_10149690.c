/* f_0x10149690 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10149690(Guest* g)
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

    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x104dfd98u));
    g->esp = sp0 - 8u;
    t2 = cow_cdecl(g, COW_IMG(0x100e4c60u), 1, t1);
    t3 = g->edx;
    if (rd32(self + 0x58u) == t2)
    {
        eax = rd32(self + 0x58u);
        edx = t3;
    }
    else
    {
        edx = t3;
        edi = t2;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t4 = cow_thiscall(g, COW_IMG(0x101f7100u), self, 0);
        t5 = g->edx;
        wr32(self + 0x58u, edi);
        wr8(self + 0x53u, (uint8_t)((uint8_t)t4 + 1u));
        eax = (t4 & 0xffffff00u) | (uint8_t)((uint8_t)t4 + 1u);
        edx = t5;
    }
    if (rd8(self + 0x53u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x53u);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x53u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t6 = cow_thiscall(g, COW_IMG(0x10149490u), self, 0);
        t7 = g->edx;
        eax = t6;
        edx = t7;
    }
    if (rd8(self + 0x50u) != 0u)
    {
        g->edx = edx;
        g->esp = sp0 - 8u;
        t10 = cow_thiscall(g, COW_IMG(0x10149070u), self, 0);
        t11 = g->edx;
        edx = t11;
        edi = t10;
    }
    else
    {
        g->edx = edx;
        g->esp = sp0 - 8u;
        t8 = cow_thiscall(g, COW_IMG(0x101f7100u), self, 0);
        t9 = g->edx;
        edx = t9;
        edi = t8 + 1u;
    }
    wr16(rd32(COW_IMG(0x106636a0u)) + 0x2au, 0xcu);
    g->edx = edx;
    g->esp = sp0 - 8u;
    t12 = cow_thiscall(g, COW_IMG(0x101610c0u), rd32(COW_IMG(0x106218fcu)), 1, edi);
    t13 = g->edx;
    g->edx = t13;
    cow_call_regs(g, COW_IMG(0x101ec330u), t12, rd32(COW_IMG(0x106636a0u)), g->edx, 0, 1, t12);
    t14 = g->edx;
    t15 = rd32(COW_IMG(0x106636a0u));
    wr32(t15 + 0x30u, COW_IMG(0x10149650u));
    wr32(t15 + 0x38u, edi);
    if (rd32(COW_IMG(0x1057841cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x1057841cu));
        edx = t14;
    }
    else
    {
        eax = rd32(COW_IMG(0x1057841cu));
        edx = t14;
        if (rd8(self + 0x50u) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x50u);
        }
        else
        {
            g->edx = edx;
            g->esp = sp0 - 8u;
            t16 = cow_thiscall(g, COW_IMG(0x10149070u), self, 0);
            t17 = g->edx;
            g->edx = t17;
            t18 = cow_thiscall(g, COW_IMG(0x101f7100u), self, 0);
            t19 = g->edx;
            t20 = rd32(COW_IMG(0x1057841cu));
            wr32(t20 + 0x14u, t18 + 1u);
            wr32(t20 + 0x18u, t16);
            eax = t18 + 1u;
            edx = t19;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10149690(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10149690(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
