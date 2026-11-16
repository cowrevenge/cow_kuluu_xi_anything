/* f_0x100b7a60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b7a60(Guest* g)
{
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

    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
    t2 = g->edx;
    if (rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 1u) == 0u)
    {
        eax = rd16(self + 0x256u);
        ecx = rd32(self + 0x20u);
        edx = (t2 & 0xffffff00u) | rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 1u);
        ebx = t1;
        loc_4 = 0x3f800000u;
    }
    else
    {
        eax = rd16(self + 0x256u);
        ecx = rd32(self + 0x20u);
        edx = (t2 & 0xffffff00u) | rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 1u);
        ebx = t1;
        loc_4 = 0u;
    }
    if (!(ebx & 1u))
    {
        edi = loc_4;
    }
    else
    {
        edi = loc_4;
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp0 - 0x10u;
        t3 = cow_call_regs(g, COW_IMG(0x10036020u), g->eax, g->ecx, edx, 1, 1, edi);
        t4 = g->ecx;
        t5 = g->edx;
        eax = t3;
        ecx = t4;
        edx = t5;
    }
    if ((ebx & 2u) != 0u)
    {
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp0 - 0x10u;
        t6 = cow_call_regs(g, COW_IMG(0x10036070u), g->eax, g->ecx, edx, 1, 1, edi);
        t7 = g->ecx;
        t8 = g->edx;
        eax = t6;
        ecx = t7;
        edx = t8;
    }
    if ((ebx & 4u) != 0u)
    {
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp0 - 0x10u;
        t9 = cow_call_regs(g, COW_IMG(0x10035f80u), g->eax, g->ecx, edx, 1, 1, edi);
        t10 = g->ecx;
        t11 = g->edx;
        eax = t9;
        ecx = t10;
        edx = t11;
    }
    if ((ebx & 8u) != 0u)
    {
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp0 - 0x10u;
        t12 = cow_call_regs(g, COW_IMG(0x10035f00u), g->eax, g->ecx, edx, 1, 1, edi);
        t13 = g->ecx;
        t14 = g->edx;
        eax = t12;
        ecx = t13;
        edx = t14;
    }
    if ((ebx & 0x10u) != 0u)
    {
        fpush(g, cow_bits2f(loc_4));
        g->esp = sp0 - 0x10u;
        t15 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        wr32(COW_IMG(0x10351710u), t15);
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 4u));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b7a60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b7a60(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
