/* f_0x101336d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101336d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_14;
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
    const uint32_t in_ebx = g->ebx;

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1036f854u));
    t2 = g->edx;
    wr32(COW_IMG(0x105781c4u), 0u);
    wr32(self + 0x74u, 0u);
    wr8(self + 0xd8u, 0u);
    wr8(self + 0xf0u, 0u);
    wr8(self + 0x120u, 0u);
    if (rd32(COW_IMG(0x1057847cu)) == 0u)
    {
        eax = t1;
        edx = t2;
    }
    else
    {
        eax = t1;
        ecx = rd32(COW_IMG(0x1057847cu));
        edx = t2;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t3 = cow_thiscall(g, COW_IMG(0x10150cc0u), ecx, 2, 0u, 2u);
        t4 = g->edx;
        eax = t3;
        edx = t4;
    }
    if (rd32(COW_IMG(0x105781f8u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x105781f8u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t5 = cow_thiscall(g, COW_IMG(0x1013a320u), ecx, 2, 0u, 2u);
        t6 = g->edx;
        eax = t5;
        edx = t6;
    }
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x101ddac0u), eax, rd32(COW_IMG(0x10663484u)), g->edx, 0, 1, 0u);
    t7 = g->edx;
    t8 = rd32(rd32(COW_IMG(0x10663484u)) + 8u);
    g->edx = t7;
    t9 = rd32(COW_IMG(0x10663484u));
    t10 = cow_call_regs(g, COW_IMG(0x1015e790u), t9, COW_IMG(0x10621838u), g->edx, 0, 2, t8, 1u);
    t11 = g->ecx;
    t12 = g->edx;
    if (rd8(self + 0x14eu) != 0u)
    {
        eax = t10;
        edx = t12;
    }
    else
    {
        ecx = t11;
        edx = t12;
        if (rd32(COW_IMG(0x10578170u)) == 0u)
        {
            eax = rd32(COW_IMG(0x10578170u));
        }
        else
        {
            eax = rd32(COW_IMG(0x10578170u));
            if (rd32(eax + 8u) == 0u) goto L_10133762;
            eax = rd32(eax + 8u);
            if (rd8(eax + 0x6eu) == 0u) goto L_10133784;
L_10133762: ;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t13 = cow_stdcall(g, COW_IMG(0x10097d50u), 0);
            t14 = g->edx;
            if ((uint8_t)t13 == 0u)
            {
                edx = t14;
                loc_14 = COW_IMG(0x1036f5b4u);
            }
            else
            {
                edx = t14;
                loc_14 = COW_IMG(0x1036f840u);
            }
            g->ebx = 0u;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t15 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, loc_14, 1u, 0u);
            t16 = g->edx;
            eax = t15;
            edx = t16;
        }
    }
L_10133784: ;
    if (rd8(self + 0x14fu) != 0xffu)
    {
        if (rd32(COW_IMG(0x106631d4u)) != 0u)
        {
            g->esp = sp0 - 8u;
            cow_thiscall(g, COW_IMG(0x1021c7a0u), rd32(COW_IMG(0x10666e34u)), 2, 0u, 1u);
            t17 = rd32(self + 0x150u);
            t18 = (uint32_t)(int8_t)rd8(self + 0x14fu);
            g->eax = t18;
            g->edx = t17;
            t19 = cow_thiscall(g, COW_IMG(0x101d3380u), rd32(COW_IMG(0x106631d4u)), 3, 1u, t18, t17);
            t20 = g->edx;
            eax = t19;
            edx = t20;
        }
    }
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101336d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101336d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
