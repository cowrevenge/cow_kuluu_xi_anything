/* f_0x1013ad50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1013ad50(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 60u);

    wr32(sp0 - 0x24u, in_ebx);
    wr32(sp0 - 0x28u, in_edi);
    if (rd32(COW_IMG(0x10578204u)) == 0u)
    {
        ebp = in_ebp;
        esi = in_esi;
    }
    else
    {
        eax = rd32(COW_IMG(0x10578204u));
        if (rd32(eax + 8u) == 0u)
        {
            ebp = in_ebp;
            esi = in_esi;
        }
        else
        {
            wr32(sp0 - 0x2cu, in_ebp);
            wr32(sp0 - 0x30u, in_esi);
            wr32(sp0 - 0x34u, sp0 - 0x18u);
            t1 = rd32(self + 8u);
            wr16(sp0 - 0x18u, 0u);
            wr16(sp0 - 0x16u, 0u);
            wr16(sp0 - 0x14u, 0u);
            wr16(sp0 - 0x12u, 0u);
            wr16(sp0 - 0x20u, 0u);
            wr16(sp0 - 0x1eu, 0u);
            wr16(sp0 - 0x1cu, 0u);
            wr16(sp0 - 0x1au, 0u);
            wr16(sp0 - 0xcu, 0u);
            wr16(sp0 - 0xau, 0u);
            wr16(sp0 - 8u, 0u);
            wr16(sp0 - 6u, 0u);
            g->esp = sp0 - 0x30u;
            t2 = cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 0x18u, t1, g->edx, 0, 1, sp0 - 0x18u);
            wr32(sp0 - 0x34u, sp0 - 0x20u);
            cow_call_regs(g, COW_IMG(0x10118f70u), t2, rd32(rd32(COW_IMG(0x10578204u)) + 8u), g->edx, 0, 1, sp0 - 0x20u);
            if (rd32(COW_IMG(0x1057820cu)) == 0u)
            {
                edx = rd32(sp0 - 0x1eu);
                ebp = (in_ebp & 0xffff0000u) | rd16(sp0 - 0x20u);
                esi = rd32(sp0 - 0x16u) + rd32(sp0 - 0x1eu) - rd32(sp0 - 0x12u);
            }
            else
            {
                eax = rd32(COW_IMG(0x1057820cu));
                edx = rd32(sp0 - 0x1eu);
                ebp = (in_ebp & 0xffff0000u) | rd16(sp0 - 0x20u);
                esi = rd32(sp0 - 0x16u) + rd32(sp0 - 0x1eu) - rd32(sp0 - 0x12u);
                if (rd32(eax + 8u) != 0u)
                {
                    ecx = rd32(eax + 8u);
                    wr32(sp0 - 0x34u, sp0 - 0xcu);
                    g->esp = sp0 - 0x30u;
                    cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 0xcu, ecx, g->edx, 0, 1, sp0 - 0xcu);
                    edx = rd32(sp0 - 6u);
                    esi = (esi & 0xffff0000u) | (uint16_t)((uint16_t)esi + (uint16_t)(rd32(sp0 - 0xau) - rd32(sp0 - 6u)));
                }
            }
            wr32(sp0 - 0x34u, (uint32_t)(int16_t)esi);
            wr32(sp0 - 0x38u, (uint32_t)(int16_t)ebp);
            g->esp = sp0 - 0x30u;
            cow_call_regs(g, COW_IMG(0x10119110u), (uint32_t)(int16_t)ebp, rd32(self + 8u), g->edx, 0, 2, (uint32_t)(int16_t)ebp, (uint32_t)(int16_t)esi);
            ebp = rd32(sp0 - 0x2cu);
            esi = rd32(sp0 - 0x30u);
        }
    }
    g->esi = esi;
    g->ebp = ebp;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013ad50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1013ad50(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
