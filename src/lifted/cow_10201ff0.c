/* f_0x10201ff0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_10201ff0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(COW_IMG(0x10664394u) + arg1 * 4u) != rd32(arg4 + 0x18u))
    {
        eax = rd32(arg4 + 0x18u);
        ecx = rd32(COW_IMG(0x10664394u) + arg1 * 4u);
        ebp = 0u;
    }
    else
    {
        eax = rd32(arg4 + 0x18u);
        ecx = rd32(COW_IMG(0x10664394u) + arg1 * 4u);
        ebp = 1u;
    }
    if (rd32(COW_IMG(0x10664390u)) == eax)
    {
        ebp = ebp + 1u;
    }
    if (ecx != eax)
    {
        esi = arg2;
    }
    else
    {
        if (ebp != 2u)
        {
            esi = arg2;
        }
        else
        {
            esi = arg2 + 6u;
        }
        t1 = (uint32_t)(int16_t)arg3 + 0xau;
        t2 = (uint32_t)(int16_t)esi - 3u;
        t3 = rd32(self + 0x24u);
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, COW_IMG(0x1011fb60u), t3, 5, t2, t1, 0x80808080u, 0u, 0u);
        t4 = g->ecx;
        ecx = t4;
    }
    if (rd32(COW_IMG(0x10664390u)) != rd32(arg4 + 0x18u))
    {
        eax = arg4;
        edx = rd32(COW_IMG(0x10664390u));
    }
    else
    {
        if (ebp == 2u)
        {
            esi = esi - 6u;
        }
        t5 = (uint32_t)(int16_t)arg3 + 0xau;
        t6 = (uint32_t)(int16_t)esi - 3u;
        g->eax = arg4;
        g->edx = t6;
        t7 = rd32(self + 0x28u);
        g->esp = sp0 - 0x10u;
        t8 = cow_thiscall(g, COW_IMG(0x1011fb60u), t7, 5, t6, t5, 0x80808080u, 0u, 0u);
        t9 = g->ecx;
        t10 = g->edx;
        eax = t8;
        ecx = t9;
        edx = t10;
    }
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t11 = cow_call_regs(g, COW_IMG(0x101cc330u), eax, g->ecx, g->edx, 1, 0);
    t12 = g->edx;
    if ((uint8_t)t11 != 0u)
    {
        edx = t12;
        esi = esi + 0x63u;
        edi = arg3 + 3u;
    }
    else
    {
        edx = t12;
        esi = esi + 0x63u;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t13 = cow_thiscall(g, COW_IMG(0x10203130u), self, 0);
        t14 = g->edx;
        if (t13 == 0u)
        {
            edx = t14;
            edi = arg3 + 3u;
        }
        else
        {
            eax = t13;
            edx = t14;
            if (rd32(eax + 0x14u) != rd32(arg4 + 0x18u))
            {
                edi = arg3 + 3u;
            }
            else
            {
                t15 = (uint32_t)(int16_t)(arg3 + 3u);
                g->edx = t15;
                g->esp = sp0 - 0x10u;
                cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(self + 0x2cu), 5, (uint32_t)(int16_t)esi, t15, 0x80808080u, 0u, 0u);
                t16 = g->edx;
                edx = t16;
                esi = esi + 4u;
                edi = arg3 + 7u;
            }
        }
    }
    g->esp = sp0 - 0x10u;
    t17 = cow_thiscall(g, COW_IMG(0x10203190u), self, 0);
    if (t17 != 0u)
    {
        eax = t17;
        if (rd32(eax + 0x14u) == rd32(arg4 + 0x18u))
        {
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(self + 0x30u), 5, (uint32_t)(int16_t)esi, (uint32_t)(int16_t)edi, 0x80808080u, 0u, 0u);
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10201ff0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10201ff0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
