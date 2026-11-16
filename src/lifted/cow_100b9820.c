/* f_0x100b9820 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b9820(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
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
        loc_4 = (self & 0xffffffu) | 0x1000000u;
    }
    else
    {
        eax = (uint8_t)t1 - 1u;
        ecx = t1;
        loc_4 = self & 0xffffffu;
    }
    if ((uint8_t)ecx <= 1u)
    {
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 0x14u;
        t2 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
        t3 = g->edx;
        g->edx = t3;
        t4 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 4u);
        t5 = g->edx;
        g->edx = t5;
        t6 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
        t7 = g->ecx;
        t8 = g->edx;
        if (rd32(COW_IMG(0x10663888u)) != 0u)
        {
            eax = rd32(COW_IMG(0x10663888u));
            ecx = t7;
            edx = t8;
            ebx = t6;
            ebp = t4;
            edi = t2;
            if (loc_4 >> 0x18u == 0u)
            {
                eax = (eax & 0xffffff00u) | loc_4 >> 0x18u;
            }
            else
            {
                g->eax = (uint32_t)(int16_t)edi;
                g->edx = (uint32_t)(int16_t)ebp;
                g->esp = sp0 - 0x14u;
                t9 = cow_cdecl(g, COW_IMG(0x100b2570u), 5, 4u, (uint32_t)(int16_t)edi, (uint32_t)(int16_t)ebp, 0u, 0u);
                t10 = g->edx;
                eax = t9;
                edx = t10;
            }
            g->ebx = ebx;
            g->edi = (uint32_t)(int16_t)ebx;
            g->ebp = ebp;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t11 = cow_thiscall(g, COW_IMG(0x101f8da0u), rd32(COW_IMG(0x10663888u)), 2, 1u, (uint32_t)(int16_t)ebx);
            t12 = g->edx;
            g->edx = t12;
            t13 = rd32(COW_IMG(0x10663888u));
            t14 = cow_thiscall(g, COW_IMG(0x101f8e30u), t13, 3, 1u, (uint32_t)(int16_t)ebx, COW_IMG(0x103d3c84u));
            t15 = g->ecx;
            t16 = g->edx;
            if (loc_4 >> 0x18u != 0u)
            {
                eax = (t14 & 0xffffff00u) | loc_4 >> 0x18u;
                ecx = t15;
                edx = t16;
                g->esp = sp0 - 0x14u;
                cow_call_regs(g, COW_IMG(0x100b2a60u), eax, g->ecx, edx, 1, 0);
            }
        }
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 8u));
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b9820(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b9820(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
