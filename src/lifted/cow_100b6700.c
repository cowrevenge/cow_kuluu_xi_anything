/* f_0x100b6700 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b6700(Guest* g)
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    double x1;
    double x2;
    double x3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 56u);

    wr32(sp0 - 0x20u, in_ebx);
    wr32(sp0 - 0x24u, in_esi);
    wr32(sp0 - 0x28u, in_edi);
    wr32(sp0 - 0x2cu, sp0 - 0x1cu);
    wr32(sp0 - 0x30u, sp0 - 0x18u);
    wr32(sp0 - 0x34u, 1u);
    g->edx = in_edx;
    g->esp = sp0 - 0x30u;
    t1 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 1u);
    t2 = g->edx;
    wr32(sp0 - 0x34u, t1);
    g->esp = sp0 - 0x28u;
    t3 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t2, 3, t1, sp0 - 0x18u, sp0 - 0x1cu);
    if ((uint8_t)t3 == 1u)
    {
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        wr32(sp0 - 0x30u, sp0 - 0x14u);
        wr32(sp0 - 0x34u, 5u);
        g->edx = sp0 - 0x18u;
        g->esp = sp0 - 0x30u;
        t4 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 5u);
        t5 = g->edx;
        wr32(sp0 - 0x34u, t4);
        g->esp = sp0 - 0x28u;
        t6 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t5, 3, t4, sp0 - 0x14u, sp0 - 0x18u);
        if ((uint8_t)t6 == 1u)
        {
            if (rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0x1cu) * 4u) != 0u)
            {
                eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0x1cu) * 4u);
                if (rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0x18u) * 4u) != 0u)
                {
                    edi = rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0x18u) * 4u);
                    if (!(rd32(eax + 0x120u) >> 7u & 1u))
                    {
                        ecx = (rd32(eax + 0x120u) >> 7u & 0xffffff00u) | (rd32(eax + 0x120u) >> 7u & 1u);
                        x1 = (double)rdf32(eax + 0xcu);
                        x0 = (double)rdf32(eax + 4u);
                    }
                    else
                    {
                        ecx = (rd32(eax + 0x120u) >> 7u & 0xffffff00u) | (rd32(eax + 0x120u) >> 7u & 1u);
                        x1 = (double)rdf32(rd32(rd32(eax + 0xd4u) + 0x260u) + 0x148u);
                        x0 = (double)rdf32(rd32(rd32(eax + 0xd4u) + 0x260u) + 0x140u);
                    }
                    if (!(rd32(edi + 0x120u) >> 7u & 1u))
                    {
                        edx = rd32(edi + 0x120u) >> 7u;
                        x3 = (double)rdf32(edi + 0xcu);
                        x2 = (double)rdf32(edi + 4u);
                    }
                    else
                    {
                        edx = rd32(rd32(edi + 0xd4u) + 0x260u);
                        x3 = (double)rdf32(rd32(rd32(edi + 0xd4u) + 0x260u) + 0x148u);
                        x2 = (double)rdf32(rd32(rd32(edi + 0xd4u) + 0x260u) + 0x140u);
                    }
                    if ((uint8_t)ecx == 0u)
                    {
                        x0 = fr(g, atan2(-fr(g, x3 - x1), fr(g, x2 - x0)));
                        wrf32(eax + 0x18u, (float)x0);
                        wr32(eax + 0x14u, 0u);
                        wr32(eax + 0x1cu, 0u);
                    }
                    else
                    {
                        x0 = fr(g, atan2(-fr(g, x3 - x1), fr(g, x2 - x0)));
                        t7 = rd32(eax + 0xd4u);
                        wr32(rd32(t7 + 0x260u) + 0x150u, 0u);
                        wrf32(rd32(t7 + 0x260u) + 0x154u, (float)x0);
                        wr32(rd32(t7 + 0x260u) + 0x158u, 0u);
                        t8 = rd32(sp0 - 4u);
                        t9 = rd32(t7 + 0x260u);
                        wr32(t9 + 0x15cu, t8);
                        edx = t9;
                    }
                    wr32(sp0 - 0x2cu, 6u);
                    wr32(sp0 - 0x30u, 5u);
                    g->edx = edx;
                    g->esp = sp0 - 0x2cu;
                    t10 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 5u);
                    t11 = g->edx;
                    wr32(sp0 - 0x30u, t10);
                    wr32(sp0 - 0x34u, 1u);
                    g->edx = t11;
                    g->esp = sp0 - 0x30u;
                    t12 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 1u);
                    t13 = g->edx;
                    wr32(sp0 - 0x34u, t12);
                    g->esp = sp0 - 0x28u;
                    cow_thiscall(g, COW_IMG(0x100b8810u), self, 3, t12, rd32(sp0 - 0x30u), 6u);
                }
            }
        }
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 9u));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b6700(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b6700(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
