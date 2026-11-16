/* f_0x100b2d20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b2d20(Guest* g)
{
    double d4;
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    double x0;
    double x1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, sp0 - 8u);
    wr32(sp0 - 0x14u, sp0 - 4u);
    wr32(sp0 - 0x18u, 1u);
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 1u);
    t2 = g->edx;
    wr32(sp0 - 0x18u, t1);
    g->esp = sp0 - 0xcu;
    t3 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t2, 3, t1, sp0 - 4u, sp0 - 8u);
    if ((uint8_t)t3 == 1u)
    {
        if (rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 8u) * 4u) != 0u)
        {
            eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 8u) * 4u);
            edx = (uint16_t)rd32(sp0 - 8u);
            if (!(rd32(eax + 0x120u) >> 7u & 1u))
            {
                x1 = (double)rdf32(eax + 0xcu);
                x0 = (double)rdf32(eax + 4u);
            }
            else
            {
                edx = rd32(eax + 0xd4u);
                x1 = (double)rdf32(rd32(rd32(eax + 0xd4u) + 0x260u) + 0x148u);
                x0 = (double)rdf32(rd32(rd32(eax + 0xd4u) + 0x260u) + 0x140u);
            }
            wr32(sp0 - 0x10u, 6u);
            wr32(sp0 - 0x14u, 1u);
            d4 = fr(g, atan2(-fr(g, x1 - (double)rdf32(rd32(self + 0x260u) + 0x148u)), fr(g, x0 - (double)rdf32(rd32(self + 0x260u) + 0x140u))));
            wrf32(rd32(self + 0x260u) + 0x154u, (float)d4);
            g->edx = edx;
            t5 = rd32(self + 0x260u);
            g->esp = sp0 - 0x10u;
            t6 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 1u);
            t7 = g->edx;
            wr32(sp0 - 0x14u, t6);
            t8 = rd32(self + 8u);
            wr32(sp0 - 0x18u, t8);
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, COW_IMG(0x100b8810u), self, 3, t8, t6, 6u);
        }
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 5u));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b2d20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b2d20(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
