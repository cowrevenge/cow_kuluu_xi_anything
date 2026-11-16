/* f_0x100b7070 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b7070(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
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
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    wr32(sp0 - 0x18u, sp0 - 8u);
    wr32(sp0 - 0x1cu, sp0 - 4u);
    wr32(sp0 - 0x20u, 5u);
    g->edx = in_edx;
    g->esp = sp0 - 0x1cu;
    t1 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 5u);
    t2 = g->edx;
    wr32(sp0 - 0x20u, t1);
    g->esp = sp0 - 0x14u;
    t3 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t2, 3, t1, sp0 - 4u, sp0 - 8u);
    if ((uint8_t)t3 == 1u)
    {
        if (rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 8u) * 4u) != 0u)
        {
            ecx = rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 8u) * 4u);
            edx = (uint16_t)rd32(sp0 - 8u);
            esi = COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 8u) * 4u;
            if (rd32(ecx + 0x120u) >> 9u & 1u)
            {
                eax = rd32(ecx + 0x120u) >> 9u;
                g->edx = edx;
                g->esp = sp0 - 0x14u;
                cow_thiscall(g, COW_IMG(0x10087d40u), ecx, 0);
                t4 = g->edx;
                wr32(sp0 - 0x18u, 1u);
                g->edx = t4;
                t5 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 1u);
                t6 = g->edx;
                wr32(rd32(esi) + 0x1a4u, t5);
                cow_call_regs(g, COW_IMG(0x1008da00u), t5, rd32(esi), g->edx, 1, 0);
                wr32(sp0 - 0x18u, COW_IMG(0x10330ebcu));
                t7 = cow_fastcall(g, COW_IMG(0x1002c8f0u), rd32(rd32(esi) + 0xa0u), rd32(esi), 1, COW_IMG(0x10330ebcu));
                if ((uint8_t)t7 != 0u)
                {
                    edi = t5;
                    wr32(sp0 - 0x18u, 0u);
                    wr32(rd32(rd32(esi) + 0xa0u) + 0x7c8u, edi);
                    t8 = rd32(rd32(esi) + 0xa0u);
                    t9 = rd32(esi);
                    wr32(t8 + 0x7d8u, 0x20202020u);
                    g->ebx = self;
                    g->esp = sp0 - 0x14u;
                    cow_thiscall(g, COW_IMG(0x100d5430u), rd32(rd32(esi) + 0xa0u), 1, 0u);
                }
            }
        }
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 9u));
    g->ebx = in_ebx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b7070(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b7070(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
