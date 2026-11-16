/* f_0x100b7140 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b7140(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 0xcu, in_esi);
    if (rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 1u) == 0u)
    {
        wr32(sp0 - 0x10u, sp0 - 8u);
        wr32(sp0 - 0x14u, sp0 - 4u);
        wr32(sp0 - 0x18u, 2u);
        g->edx = sp0 - 8u;
        g->esp = sp0 - 0x14u;
        t1 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 2u);
        t2 = g->edx;
        wr32(sp0 - 0x18u, t1);
        g->esp = sp0 - 0xcu;
        t3 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t2, 3, t1, sp0 - 4u, sp0 - 8u);
        if ((uint8_t)t3 == 1u)
        {
            wr32(sp0 - 0x10u, in_edi);
            if (rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 8u) * 4u) != 0u)
            {
                eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 8u) * 4u);
                edi = COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 8u) * 4u;
                if (rd32(eax + 0x120u) >> 9u & 1u)
                {
                    edx = rd32(eax + 0x120u) >> 9u;
                    wr32(sp0 - 0x14u, COW_IMG(0x10330ebcu));
                    t4 = rd32(eax + 0xa0u);
                    g->esp = sp0 - 0x10u;
                    t5 = cow_fastcall(g, COW_IMG(0x1002c8f0u), t4, edx, 1, COW_IMG(0x10330ebcu));
                    t6 = g->edx;
                    if ((uint8_t)t5 != 0u)
                    {
                        edx = t6;
                        g->esp = sp0 - 0x10u;
                        cow_thiscall(g, COW_IMG(0x100ce070u), rd32(rd32(edi) + 0xa0u), 0);
                    }
                }
            }
            wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 6u));
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b7140(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b7140(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
