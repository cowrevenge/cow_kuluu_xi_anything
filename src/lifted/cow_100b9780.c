/* f_0x100b9780 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b9780(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
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
    const uint32_t in_ebp = g->ebp;

    t1 = (rd32(self + 0x20u) & 0xffffff00u) | rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 1u);
    if ((uint8_t)t1 != 1u)
    {
        eax = (uint8_t)t1 - 1u;
        ecx = t1;
        ebx = (in_ebx & 0xffffff00u) | 1u;
    }
    else
    {
        eax = (uint8_t)t1 - 1u;
        ecx = t1;
        ebx = in_ebx & 0xffffff00u;
    }
    if ((uint8_t)ecx <= 1u)
    {
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 0x10u;
        t2 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
        t3 = g->edx;
        g->edx = t3;
        t4 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 4u);
        t5 = g->ecx;
        t6 = g->edx;
        if (rd32(COW_IMG(0x10663888u)) != 0u)
        {
            eax = rd32(COW_IMG(0x10663888u));
            ecx = t5;
            edx = t6;
            ebp = t4;
            edi = t2;
            if ((uint8_t)ebx != 0u)
            {
                g->eax = eax;
                g->edx = (uint32_t)(int16_t)edi;
                g->esp = sp0 - 0x10u;
                t7 = cow_cdecl(g, COW_IMG(0x100b2570u), 5, 4u, (uint32_t)(int16_t)edi, 0xffffffffu, 0u, 0u);
                t8 = g->edx;
                eax = t7;
                edx = t8;
            }
            g->ebx = ebx;
            g->edi = (uint32_t)(int16_t)ebp;
            g->ebp = ebp;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t9 = cow_thiscall(g, COW_IMG(0x101f8da0u), rd32(COW_IMG(0x10663888u)), 2, 1u, (uint32_t)(int16_t)ebp);
            t10 = g->edx;
            g->edx = t10;
            t11 = rd32(COW_IMG(0x10663888u));
            t12 = cow_thiscall(g, COW_IMG(0x101f8e30u), t11, 3, 1u, (uint32_t)(int16_t)ebp, COW_IMG(0x103d3c84u));
            t13 = g->ecx;
            t14 = g->edx;
            if ((uint8_t)ebx != 0u)
            {
                eax = t12;
                ecx = t13;
                edx = t14;
                g->esp = sp0 - 0x10u;
                cow_call_regs(g, COW_IMG(0x100b2a60u), eax, g->ecx, edx, 1, 0);
            }
        }
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 6u));
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b9780(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b9780(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
