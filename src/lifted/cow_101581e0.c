/* f_0x101581e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101581e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_c;
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x10123a70u), in_eax, self, g->edx, 1, 4, 0x3eu, 0x30u, 1u, 0xffffffffu);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 1u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
    }
    else
    {
        eax = t1;
        edx = t3;
        if ((rd8(self + 0x5cu) & 3u) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x5cu);
            loc_c = 1u;
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x5cu);
            loc_c = 0u;
        }
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t4 = cow_thiscall(g, COW_IMG(0x10157660u), self, 1, loc_c);
        t5 = g->ecx;
        t6 = g->edx;
        eax = t4;
        ecx = t5;
        edx = t6;
    }
    g->ebx = 0u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t7 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x45u, 1u, 0xffffffffu);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 != 1u)
    {
        eax = t7;
        edx = t9;
    }
    else
    {
        eax = t7;
        ecx = t8;
        edx = t9;
        if (rd8(self + 0x50u) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x50u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t12 = cow_cdecl(g, COW_IMG(0x10159420u), 2, 3u, 0u);
            t13 = g->edx;
            wr8(self + 0x50u, 0u);
            eax = t12;
            edx = t13;
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x50u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t10 = cow_cdecl(g, COW_IMG(0x10159420u), 2, 2u, 0u);
            t11 = g->edx;
            wr8(self + 0x50u, 1u);
            eax = t10;
            edx = t11;
        }
    }
    if (rd32(COW_IMG(0x1057876cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1057876cu));
        g->edx = edx;
        g->esp = sp0 - 8u;
        t14 = cow_call_regs(g, COW_IMG(0x101598a0u), eax, ecx, g->edx, 1, 0);
        t15 = g->edx;
        eax = t14;
        edx = t15;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t16 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    t17 = g->edx;
    if (t16 == 0u)
    {
        ecx = 0u;
        edx = t17;
    }
    else
    {
        eax = t16;
        edx = t17;
        ecx = rd32(eax + 0x70u);
    }
    if (rd32(self + 0xb8u) == 0u)
    {
        eax = rd32(self + 0xb8u);
    }
    else
    {
        eax = rd32(self + 0xb8u);
        if (rd32(COW_IMG(0x10480af0u) + eax * 4u) == 0u)
        {
            eax = rd32(COW_IMG(0x10480af0u) + eax * 4u);
        }
        else
        {
            eax = rd32(COW_IMG(0x10480af0u) + eax * 4u);
            if (rd32(eax + 0xa0u) == 0u)
            {
                wr8(self + 0x9cu, 0u);
                wr32(self + 0xb8u, 0u);
                wr32(self + 0xbcu, 0u);
                wr32(self + 0xc0u, 0u);
            }
        }
    }
    if (ecx != 0u)
    {
        if (rd32(ecx + 0x170u) == 1u)
        {
            if (rd32(rd32(COW_IMG(0x1057876cu)) + 0xc4u) == 0u)
            {
                ecx = rd32(COW_IMG(0x1057876cu));
            }
            else
            {
                ecx = rd32(COW_IMG(0x1057876cu));
                ecx = ecx + 0x28u;
            }
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t18 = cow_thiscall(g, COW_IMG(0x101598b0u), ecx, 0);
            t19 = g->edx;
            if (t18 == 0u)
            {
                eax = t18;
                edx = t19;
                g->eax = eax;
                g->esp = sp0 - 8u;
                t20 = cow_stdcall(g, COW_IMG(0x10157d60u), 0);
                if (t20 != 0u)
                {
                    eax = t20;
                    t21 = rd32(eax + 0x78u);
                    t22 = rd32(eax + 0x74u);
                    g->esp = sp0 - 8u;
                    cow_thiscall(g, COW_IMG(0x10157c60u), rd32(COW_IMG(0x1057876cu)), 4, t22, t21, 0u, 0u);
                }
            }
        }
    }
    g->ebx = in_ebx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101581e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101581e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
