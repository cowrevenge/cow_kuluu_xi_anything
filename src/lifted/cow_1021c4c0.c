/* f_0x1021c4c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1021c4c0(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_edi = g->edi;

    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        loc_4 = self;
        goto L_1021c5a1;
    }
    eax = rd32(COW_IMG(0x104dfd98u));
    if (rd8(self + 4u) != 1u)
    {
        loc_4 = self;
        goto L_1021c5a1;
    }
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x1021c160u), self, 0);
    t2 = g->edx;
    if ((uint8_t)t1 != 1u)
    {
        eax = t1;
        loc_4 = self;
        goto L_1021c5a1;
    }
    edx = t2;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t3 = cow_thiscall(g, COW_IMG(0x1021c380u), self, 0);
    t4 = g->ecx;
    t5 = g->edx;
    if ((uint8_t)t3 == 1u)
    {
        ecx = t4;
        edx = t5;
        goto L_1021c4f8;
    }
    eax = t3;
    return eax & 0xffffff00u;
L_1021c4f8: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t6 = cow_cdecl(g, COW_IMG(0x1021c1b0u), 1, self);
    t7 = g->ecx;
    t8 = g->edx;
    if ((uint8_t)t6 == 0u)
    {
        edx = t8;
    }
    else
    {
        ecx = t7;
        edx = t8;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x100fc180u), 1, 0x400000u);
        t9 = g->edx;
        edx = t9;
    }
    ebx = in_ebx;
    loc_4 = self & 0xffffff00u;
L_1021c519: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t10 = cow_cdecl(g, COW_IMG(0x100eb490u), 2, rd32(self), loc_4);
    t11 = g->edx;
    if (t10 == 0u)
    {
        eax = t10;
        edx = t11;
    }
    else
    {
        eax = t10;
        ecx = t10;
        if (!(rd32(ecx + 0x28u) & 1u))
        {
            edx = rd32(ecx + 0x28u);
        }
        else
        {
            edx = rd32(ecx + 0x28u);
            t12 = (ecx + 0x10u & 0xffff0000u) | rd16(ecx);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            t13 = cow_call_regs(g, COW_IMG(0x1021bcb0u), t12, g->ecx, g->edx, 1, 0);
            t14 = g->ecx;
            t15 = g->edx;
            t16 = (((uint8_t)t13 == 0u ^ t15) & 1u) ^ t15;
            wr32(t14 + 0x28u, t16);
            eax = t13;
            edx = t15;
            ebx = t16;
        }
    }
    if ((uint8_t)((uint8_t)loc_4 + 1u) < 0x51u)
    {
        loc_4 = (loc_4 & 0xffffff00u) | (uint8_t)((uint8_t)loc_4 + 1u);
        goto L_1021c519;
    }
    eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)loc_4 + 1u);
    loc_4 = (loc_4 & 0xffffff00u) | (uint8_t)((uint8_t)loc_4 + 1u);
    g->ebx = ebx;
    g->esp = sp0 - 8u;
    t17 = cow_call_regs(g, COW_IMG(0x100eb8d0u), eax, rd32(self), g->edx, 1, 3, rd32(self), in_edi, in_ebx);
    if (rd8(self + 5u) == 0u)
    {
        eax = (t17 & 0xffffff00u) | rd8(self + 5u);
        edi = t17;
    }
    else
    {
        edi = t17;
        if (edi == rd32(self + 8u))
        {
            eax = rd32(self + 8u);
        }
        else
        {
            eax = rd32(self + 8u);
            cf = edi < rd32(self + 8u);
            if (cf)
            {
                if (rd8(self + 6u) != 0u)
                {
                    eax = (eax & 0xffffff00u) | rd8(self + 6u);
                }
                else
                {
                    eax = (eax & 0xffffff00u) | rd8(self + 6u);
                    g->esp = sp0 - 0x10u;
                    t18 = cow_call_regs(g, COW_IMG(0x1021c7c0u), eax, self, g->edx, 0, 3, 0u, 1u, rd32(self));
                    eax = t18;
                }
            }
            wr8(self + 6u, 0u);
        }
    }
    wr32(self + 8u, edi);
L_1021c5a1: ;
    g->ebx = in_ebx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1021c4c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1021c4c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
