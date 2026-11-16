/* f_0x1018ade0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1018ade0(Guest* g)
{
    double d21;
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

    if (rd32(self + 8u) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        ecx = rd32(self + 8u);
        g->esp = sp0 - 0x14u;
        cow_call_regs(g, COW_IMG(0x1018ade0u), in_eax, ecx, in_edx, 1, 0);
        t1 = g->edx;
        edx = t1;
    }
    if (rd32(self + 0x14u) == 0u)
    {
        eax = rd32(self + 0x14u);
        if (rd32(self + 8u) != 0u)
        {
            edi = rd32(self + 8u);
            g->ebx = self + 0x14u;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t6 = cow_thiscall(g, COW_IMG(0x1018abf0u), edi, 0);
            t7 = g->ecx;
            t8 = g->edx;
            g->edx = t8;
            t9 = cow_cdecl(g, COW_IMG(0x1002c8b0u), 1, edi);
            t10 = g->edx;
            wr32(self + 8u, 0u);
            eax = t9;
            edx = t10;
        }
    }
    else
    {
        eax = rd32(self + 0x14u);
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t2 = cow_call_regs(g, COW_IMG(0x1018c290u), eax, self + 0x14u, g->edx, 1, 0);
        t3 = g->edx;
        if ((uint8_t)t2 == 0u)
        {
            eax = t2;
            edx = t3;
        }
        else
        {
            eax = t2;
            edx = t3;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t4 = cow_thiscall(g, COW_IMG(0x1018bc40u), self + 0x14u, 1, 0u);
            t5 = g->edx;
            eax = t4;
            edx = t5;
        }
    }
    wr32(self + 0x1cu, 0x3f800000u);
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x1018a340u), self, 0);
    if (rd32(self + 8u) != 0u)
    {
        ecx = rd32(self + 8u);
        t11 = rd32(self + 0x18u);
        t12 = t11 - rd32(self + 0x14u);
        t13 = rd32(self + 0x14u);
        wrf32(self + 0x1cu, (float)fr(g, (double)(int32_t)t12 / (double)(int32_t)t11));
        if (rd32(ecx + 0x20u) != 0u)
        {
            eax = rd32(ecx + 0x20u);
            edx = t13;
            if (rd32(self + 0x20u) != 0u)
            {
                ecx = rd32(self + 0x20u);
                g->eax = eax;
                g->esp = sp0 - 0x14u;
                t14 = cow_stdcall(g, COW_IMG(0x1018aeb0u), 2, eax, ecx);
                t15 = rd32(self + 0x1cu);
                t16 = rd32(rd32(self + 8u) + 0x20u);
                t17 = rd32(self + 0x20u);
                g->eax = t17;
                g->edx = t16;
                t18 = cow_thiscall(g, COW_IMG(0x10189490u), t14, 3, t17, t16, t15);
                t19 = g->edx;
                cow_thiscall(g, COW_IMG(0x1018ada0u), self, 0);
                t20 = rd32(self + 8u);
                d21 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(self + 0x1cu));
                wr32(self + 0x20u, t14);
                wrf32(t20 + 0x1cu, (float)d21);
            }
        }
    }
    g->ebx = in_ebx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018ade0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1018ade0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
