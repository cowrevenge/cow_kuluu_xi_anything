/* f_0x10118e90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10118e90(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t2;
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
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int16_t)arg1 > 0)
    {
        edi = arg1;
    }
    else
    {
        edi = 1u;
    }
    if ((int16_t)edi <= (int16_t)rd16(self + 0x58u))
    {
        eax = (in_eax & 0xffff0000u) | rd16(self + 0x58u);
    }
    else
    {
        eax = (in_eax & 0xffff0000u) | rd16(self + 0x58u);
        edi = eax;
    }
    if (rd16(self + 0x4cu) == (uint16_t)edi)
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x4cu);
        edx = in_edx;
    }
    else
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x4cu);
        g->edi = edi;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t1 = cow_thiscall(g, COW_IMG(0x101181d0u), self, 1, eax);
        t2 = g->edx;
        if (t1 == 0u)
        {
            edx = t2;
        }
        else
        {
            eax = t1;
            edx = t2;
            t3 = rd32(eax + 0x10u);
            wr8(eax + 0x24u, 0u);
            if (t3 != 5u)
            {
                g->edx = edx;
                g->esp = sp0 - 8u;
                cow_stdcall(g, COW_IMG(0x10119970u), 1, 0u);
                t4 = g->edx;
                edx = t4;
            }
        }
        g->edi = edi;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t5 = cow_thiscall(g, COW_IMG(0x101181d0u), self, 1, edi);
        t6 = g->edx;
        if (t5 == 0u)
        {
            eax = t5;
            edx = t6;
        }
        else
        {
            eax = t5;
            edx = t6;
            t7 = rd32(eax + 0x10u);
            wr8(eax + 0x24u, 1u);
            if (t7 != 5u)
            {
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 8u;
                t8 = cow_stdcall(g, COW_IMG(0x10119970u), 1, 3u);
                t9 = g->edx;
                eax = t8;
                edx = t9;
            }
            wr16(self + 0x4cu, (uint16_t)edi);
            g->edi = edi;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t10 = cow_thiscall(g, COW_IMG(0x10118170u), self, 1, edi);
            t11 = g->edx;
            eax = t10;
            edx = t11;
        }
    }
    g->edi = edi;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t12 = cow_thiscall(g, COW_IMG(0x101186a0u), self, 0);
    t13 = g->edx;
    g->edi = in_edi;
    g->edx = t13;
    return t12;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10118e90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10118e90(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
