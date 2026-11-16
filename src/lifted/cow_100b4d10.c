/* f_0x100b4d10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b4d10(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    wr32(sp0 - 0x24u, sp0 - 0x14u);
    wr32(sp0 - 0x28u, sp0 - 8u);
    wr32(sp0 - 0x2cu, 1u);
    g->eax = sp0 - 0x14u;
    g->edx = in_edx;
    g->esp = sp0 - 0x28u;
    t1 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 1u);
    t2 = g->edx;
    wr32(sp0 - 0x2cu, t1);
    g->esp = sp0 - 0x20u;
    t3 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t2, 3, t1, sp0 - 8u, sp0 - 0x14u);
    if ((uint8_t)t3 == 1u)
    {
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        wr32(sp0 - 0x28u, sp0 - 4u);
        wr32(sp0 - 0x2cu, 5u);
        g->eax = sp0 - 4u;
        g->edx = sp0 - 0x10u;
        g->esp = sp0 - 0x28u;
        t4 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 5u);
        t5 = g->edx;
        wr32(sp0 - 0x2cu, t4);
        g->esp = sp0 - 0x20u;
        t6 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t5, 3, t4, sp0 - 4u, sp0 - 0x10u);
        if ((uint8_t)t6 == 1u)
        {
            if (rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0x14u) * 4u) != 0u)
            {
                ecx = rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0x14u) * 4u);
                if (rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0x10u) * 4u) != 0u)
                {
                    eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0x10u) * 4u);
                    t7 = rd32(ecx + 0x74u);
                    wr32(sp0 - 0x10u, t7);
                    t8 = rd32(eax + 0x74u);
                    wr32(sp0 - 0x10u, t8);
                    if (rd32(ecx + 0x78u) == rd32(sp0 - 8u))
                    {
                        esi = rd32(eax + 0x78u);
                        if (esi == rd32(sp0 - 4u))
                        {
                            if (rd32(ecx + 0x120u) >> 9u & 1u)
                            {
                                if (rd32(eax + 0x120u) >> 9u & 1u)
                                {
                                    edx = rd32(eax + 0x120u) >> 9u;
                                    t9 = rd32(eax + 0xa0u);
                                    wr32(sp0 - 0x24u, t9);
                                    wr32(sp0 - 0x28u, 9u);
                                    g->eax = t9;
                                    g->edx = edx;
                                    t10 = rd32(rd32(ecx + 0xa0u));
                                    t11 = rd32(ecx + 0xa0u);
                                    g->esp = sp0 - 0x24u;
                                    t12 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 9u);
                                    t13 = g->edx;
                                    wr32(sp0 - 0x28u, t12);
                                    g->esp = sp0 - 0x20u;
                                    cow_thiscall(g, rd32(t10 + 0x29cu), t11, 2, t12, rd32(sp0 - 0x24u));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 0xdu));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b4d10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b4d10(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
