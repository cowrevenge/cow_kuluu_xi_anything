/* f_0x101fb7d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101fb7d0(Guest* g)
{
    double d12;
    double d17;
    double d22;
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
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
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

    if (rd8(self + 0x66u) != 0u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t1 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
        t2 = g->ecx;
        t3 = g->edx;
        if (t1 == 0u)
        {
            ecx = t2;
            edx = t3;
        }
        else
        {
            ecx = t2;
            edx = t3;
            edi = t1;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t4 = cow_stdcall(g, COW_IMG(0x100f9360u), 0);
            t5 = g->ecx;
            t6 = g->edx;
            if ((uint8_t)t4 == 0u)
            {
                ecx = t5;
                edx = t6;
            }
            else
            {
                edx = t6;
                if (rd32(COW_IMG(0x105781f8u)) != 0u)
                {
                    eax = rd32(COW_IMG(0x105781f8u));
                    g->edx = edx;
                    g->esp = sp0 - 8u;
                    cow_thiscall(g, COW_IMG(0x10221270u), eax + 0x20u, 1, 0x80u);
                    t7 = g->edx;
                    edx = t7;
                }
                wr8(self + 0x65u, 1u);
                wr16(self + 0x62u, 0x708u);
                g->eax = rd32(edi);
                g->edx = edx;
                t8 = rd32(edi);
                g->esp = sp0 - 8u;
                t9 = cow_thiscall(g, rd32(t8 + 0x1bcu), edi, 0);
                t10 = g->ecx;
                t11 = g->edx;
                d12 = (double)rdf32(t9);
                fpush(g, d12);
                t13 = cow_call_regs(g, COW_IMG(0x10311c6cu), t9, g->ecx, g->edx, 1, 0);
                wr16(self + 0x68u, (uint16_t)t13);
                g->edx = rd32(edi);
                t14 = rd32(edi);
                t15 = cow_thiscall(g, rd32(t14 + 0x1bcu), edi, 0);
                t16 = g->edx;
                d17 = (double)rdf32(t15 + 4u);
                wrf32(self + 0x74u, (float)d17);
                g->eax = rd32(edi);
                g->edx = t16;
                t18 = rd32(edi);
                t19 = cow_thiscall(g, rd32(t18 + 0x1bcu), edi, 0);
                t20 = g->ecx;
                t21 = g->edx;
                g->ecx = t20;
                g->edx = t21;
                d22 = (double)rdf32(t19 + 8u);
                fpush(g, d22);
                t23 = cow_call_regs(g, COW_IMG(0x10311c6cu), t19, g->ecx, g->edx, 1, 0);
                t24 = g->ecx;
                t25 = g->edx;
                wr16(self + 0x6au, (uint16_t)t23);
                ecx = t24;
                edx = t25;
            }
        }
        wr16(self + 0x70u, 0xffffu);
        wr8(self + 0x64u, 1u);
    }
    wr8(self + 0x64u, 1u);
    if (rd32(COW_IMG(0x10663888u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10663888u));
    }
    else
    {
        eax = rd32(COW_IMG(0x10663888u));
        if (rd8(eax + 0x10au) == 0u)
        {
            wr8(rd32(self + 8u) + 0x30u, rd8(rd32(self + 8u) + 0x30u) & 0xfbu);
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fb7d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101fb7d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
