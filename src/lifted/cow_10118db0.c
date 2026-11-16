/* f_0x10118db0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10118db0(Guest* g)
{
    double d12;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
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
        wr32(sp0 - 0x14u, eax);
        g->edi = edi;
        g->edx = in_edx;
        g->esp = sp0 - 0x10u;
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
                wr32(sp0 - 0x14u, 0u);
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                cow_stdcall(g, COW_IMG(0x10119970u), 1, 0u);
                t4 = g->edx;
                edx = t4;
            }
        }
        wr32(sp0 - 0x14u, edi);
        g->edi = edi;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
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
                wr32(sp0 - 0x14u, 3u);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t8 = cow_stdcall(g, COW_IMG(0x10119970u), 1, 3u);
                t9 = g->edx;
                eax = t8;
                edx = t9;
            }
            wr32(sp0 - 0x14u, edi);
            wr16(self + 0x4cu, (uint16_t)edi);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t10 = cow_thiscall(g, COW_IMG(0x10118170u), self, 1, edi);
            t11 = g->edx;
            d12 = (double)rdf32(rd32(COW_IMG(0x104e1d4cu)) + 0x48u);
            if ((cow_fsw(g, d12, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) == 0u)
            {
                eax = cow_fsw(g, d12, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
                edx = t11;
            }
            else
            {
                eax = cow_fsw(g, d12, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
                ecx = rd32(COW_IMG(0x104e1d4cu));
                edx = t11;
                if (rd8(ecx + 0x4eu) == 0u)
                {
                    eax = (eax & 0xffffff00u) | rd8(ecx + 0x4eu);
                }
                else
                {
                    eax = (eax & 0xffffff00u) | rd8(ecx + 0x4eu);
                    wr32(sp0 - 0x14u, 9u);
                    g->edi = edi;
                    g->edx = edx;
                    g->esp = sp0 - 0x10u;
                    t13 = cow_call_regs(g, COW_IMG(0x10118260u), eax, self, g->edx, 0, 1, 9u);
                    t14 = g->edx;
                    eax = t13;
                    edx = t14;
                }
            }
        }
        if ((uint8_t)arg2 == 0u)
        {
            eax = (eax & 0xffffff00u) | (uint8_t)arg2;
        }
        else
        {
            wr32(sp0 - 0x14u, sp0 - 8u);
            g->edi = edi;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t15 = cow_thiscall(g, COW_IMG(0x1011abf0u), self, 1, sp0 - 8u);
            t16 = g->edx;
            if ((uint8_t)t15 == 0u)
            {
                eax = t15;
                edx = t16;
            }
            else
            {
                eax = t15;
                edx = t16;
                wr32(sp0 - 0x14u, 0x41900000u);
                wr32(sp0 - 0x18u, sp0 - 8u);
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t17 = cow_call_regs(g, COW_IMG(0x10124700u), eax, rd32(COW_IMG(0x104e1d4cu)), g->edx, 0, 2, sp0 - 8u, 0x41900000u);
                t18 = g->edx;
                eax = t17;
                edx = t18;
            }
        }
    }
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t19 = cow_thiscall(g, COW_IMG(0x101186a0u), self, 0);
    g->edi = in_edi;
    return t19;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10118db0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10118db0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
