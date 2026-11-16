/* f_0x100d64d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100d64d0(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    if (rd8(self + 0x9e8u) == 0u)
    {
        g->eax = rd32(self);
        g->edx = in_edx;
        t1 = rd32(self);
        g->esp = sp0 - 0xcu;
        t2 = cow_thiscall(g, rd32(t1 + 0x1e4u), self, 0);
        t3 = g->edx;
        if ((uint8_t)t2 != 0u)
        {
            edx = t3;
            t4 = rd32(self + 0x800u);
            wr8(self + 0x9e8u, 1u);
            if (t4 != 0u)
            {
                eax = t4;
                wr32(sp0 - 0x10u, 0x30303969u);
                wr32(sp0 - 0x14u, 5u);
                wr32(sp0 - 0x18u, sp0 - 4u);
                g->edx = edx;
                g->esp = sp0 - 0xcu;
                cow_call_regs(g, COW_IMG(0x100724c0u), eax, rd32(eax), g->edx, 0, 3, sp0 - 4u, 5u, 0x30303969u);
                t5 = g->edx;
                if (rd32(sp0 - 4u) != 0u)
                {
                    eax = rd32(sp0 - 4u);
                    edx = t5;
                    wr32(sp0 - 0x10u, 1u);
                    wr32(sp0 - 0x14u, self);
                    wr32(sp0 - 0x18u, self);
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0xcu;
                    t6 = cow_thiscall(g, COW_IMG(0x100536c0u), rd32(eax), 3, self, self, 1u);
                    t7 = g->edx;
                    if (t6 != 0u)
                    {
                        eax = t6;
                        edx = t7;
                        edi = t6;
                        wr32(edi + 0x64u, self);
                        g->edx = edx;
                        g->esp = sp0 - 0xcu;
                        t8 = cow_call_regs(g, COW_IMG(0x10071e90u), eax, edi, g->edx, 1, 0);
                        t9 = g->edx;
                        wr32(edi + 0xccu, 0u);
                        cow_thiscall(g, COW_IMG(0x100531d0u), edi, 0);
                        t10 = rd32(edi + 0x14u);
                        wr32(self + 0x808u, t10);
                    }
                }
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d64d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100d64d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
