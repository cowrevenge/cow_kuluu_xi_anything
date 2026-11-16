/* f_0x102227d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_102227d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    if (rd32(self + 0x24u) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        wr32(sp0 - 0x14u, sp0 - 8u);
        t1 = rd32(self + 8u);
        wr16(sp0 - 8u, 0u);
        wr16(sp0 - 6u, 0u);
        wr16(sp0 - 4u, 0u);
        wr16(sp0 - 2u, 0u);
        g->esp = sp0 - 0x10u;
        cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 8u, t1, g->edx, 0, 1, sp0 - 8u);
        t2 = rd32(self + 0x24u) + (uint32_t)(int16_t)rd16(sp0 - 6u);
        wr32(sp0 - 0x14u, t2);
        t3 = (uint32_t)(int16_t)rd16(sp0 - 8u);
        wr32(sp0 - 0x18u, t3);
        g->edx = rd32(self + 0x24u);
        t4 = rd32(self + 0x24u);
        t5 = cow_call_regs(g, COW_IMG(0x10119110u), t2, rd32(self + 8u), g->edx, 0, 2, t3, t2);
        t6 = g->edx;
        eax = t5;
        edx = t6;
    }
    if (rd32(COW_IMG(0x1057847cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1057847cu));
        if (rd32(self + 0x20u) != 0u)
        {
            esi = rd32(self + 0x20u);
            wr32(sp0 - 0x14u, 2u);
            wr32(sp0 - 0x18u, esi);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t7 = cow_thiscall(g, COW_IMG(0x10150cc0u), ecx, 2, esi, 2u);
            t8 = g->edx;
            eax = t7;
            edx = t8;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102227d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102227d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
