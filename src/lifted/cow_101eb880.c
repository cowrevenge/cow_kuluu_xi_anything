/* f_0x101eb880 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101eb880(Guest* g)
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
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 76u);

    wr32(sp0 - 0x1cu, in_ebx);
    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x24u, in_edi);
    if (rd32(COW_IMG(0x10663684u)) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        ecx = rd32(COW_IMG(0x10663684u));
        g->eax = in_eax;
        g->edx = in_edx;
        g->esp = sp0 - 0x24u;
        t1 = cow_thiscall(g, COW_IMG(0x101eacf0u), ecx, 0);
        t2 = g->edx;
        if (t1 == 0u)
        {
            eax = t1;
            edx = t2;
        }
        else
        {
            edx = t2;
            edi = t1;
            wr32(sp0 - 0x28u, sp0 - 0x18u);
            t3 = rd32(self + 8u);
            wr16(sp0 - 0x18u, 0u);
            wr16(sp0 - 0x16u, 0u);
            wr16(sp0 - 0x14u, 0u);
            wr16(sp0 - 0x12u, 0u);
            g->edx = edx;
            g->esp = sp0 - 0x24u;
            cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 0x18u, t3, g->edx, 0, 1, sp0 - 0x18u);
            t4 = g->ecx;
            t5 = g->edx;
            t6 = rd16(sp0 - 0x16u);
            wr16(self + 0x5cu, rd16(sp0 - 0x18u));
            wr32(sp0 - 0x28u, edi + 0x10u);
            wr32(sp0 - 0x2cu, COW_IMG(0x1034f7e0u));
            wr32(sp0 - 0x30u, self + 0x14u);
            wr16(self + 0x5eu, (uint16_t)t6);
            g->ebx = 0u;
            g->esp = sp0 - 0x1cu;
            cow_cdecl(g, COW_IMG(0x10312031u), 5, self + 0x14u, COW_IMG(0x1034f7e0u), edi + 0x10u, rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
            t7 = rd32(edi + 0x2cu);
            wr32(sp0 - 0x34u, t7);
            t8 = rd32(edi + 0x28u);
            wr32(sp0 - 0x38u, t8);
            wr32(sp0 - 0x3cu, sp0 - 0x10u);
            g->ecx = sp0 - 0x10u;
            g->esp = sp0 - 0x30u;
            cow_cdecl(g, COW_IMG(0x10310981u), 3, sp0 - 0x10u, t8, t7);
            t9 = g->ecx;
            wr32(sp0 - 0x40u, sp0 - 0x10u);
            wr32(sp0 - 0x44u, COW_IMG(0x1034f7e0u));
            wr32(sp0 - 0x48u, self + 0x28u);
            g->ebx = 0u;
            g->eax = self + 0x28u;
            g->edx = sp0 - 0x10u;
            g->esp = sp0 - 0x34u;
            t10 = cow_cdecl(g, COW_IMG(0x10312031u), 5, self + 0x28u, COW_IMG(0x1034f7e0u), sp0 - 0x10u, sp0 - 0x10u, rd32(sp0 - 0x38u));
            t11 = g->edx;
            if (rd8(edi + 0x80u) != 0u)
            {
                eax = (t10 & 0xffffff00u) | rd8(edi + 0x80u);
                edx = t11;
            }
            else
            {
                eax = (t10 & 0xffffff00u) | rd8(edi + 0x80u);
                edx = t11;
                wr32(sp0 - 0x28u, 3u);
                wr32(sp0 - 0x2cu, 5u);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x24u;
                t12 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 3u);
                t13 = g->edx;
                eax = t12;
                edx = t13;
            }
            if (rd8(edi + 1u) != 0u)
            {
                wr32(sp0 - 0x28u, 2u);
                wr32(sp0 - 0x2cu, 5u);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x24u;
                t14 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 2u);
                t15 = g->edx;
                eax = t14;
                edx = t15;
            }
            if (rd8(edi) == 3u)
            {
                wr32(sp0 - 0x28u, 2u);
                wr32(sp0 - 0x2cu, 5u);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x24u;
                t16 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 2u);
                t17 = g->edx;
                eax = t16;
                edx = t17;
            }
            if (rd8(edi) != 5u)
            {
                wr32(sp0 - 0x28u, 1u);
                wr32(sp0 - 0x2cu, 5u);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x24u;
                t18 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 1u);
                t19 = g->edx;
                eax = t18;
                edx = t19;
            }
            if (rd8(edi) != 7u)
            {
                wr32(sp0 - 0x28u, 4u);
                wr32(sp0 - 0x2cu, 5u);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x24u;
                t20 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 4u);
                t21 = g->edx;
                eax = t20;
                edx = t21;
            }
        }
    }
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101eb880(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101eb880(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
