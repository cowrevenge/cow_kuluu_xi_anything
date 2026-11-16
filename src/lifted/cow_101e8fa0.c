/* f_0x101e8fa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101e8fa0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    if (rd32(self + 8u) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        ecx = rd32(self + 8u);
        wr32(sp0 - 0x14u, sp0 - 8u);
        g->esp = sp0 - 0x10u;
        t1 = cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 8u, ecx, g->edx, 0, 1, sp0 - 8u);
        if (rd8(self + 0x14u) == 0u)
        {
            eax = (t1 & 0xffff0000u) | rd16(self + 0x1cu);
            eax = (eax & 0xffff0000u) | (uint16_t)((uint16_t)eax - 0x1eu);
        }
        else
        {
            eax = (t1 & 0xffff0000u) | rd16(self + 0x1cu);
            eax = (eax & 0xffff0000u) | (uint16_t)((uint16_t)eax - 8u);
        }
        wr32(sp0 - 0x14u, 0u);
        wr32(sp0 - 0x18u, 1u);
        wr32(sp0 - 0x1cu, 1u);
        wr32(sp0 - 0x20u, eax);
        t2 = rd32(sp0 - 4u) - rd32(sp0 - 8u);
        wr32(sp0 - 0x24u, t2);
        t3 = rd32(sp0 - 6u);
        wr32(sp0 - 0x28u, t3);
        t4 = rd32(sp0 - 8u);
        wr32(sp0 - 0x2cu, t4);
        g->eax = t4;
        g->edx = t3;
        g->esp = sp0 - 0x10u;
        t5 = cow_thiscall(g, COW_IMG(0x1011a5a0u), rd32(self + 8u), 7, t4, t3, t2, eax, 1u, 1u, 0u);
        t6 = g->edx;
        eax = t5;
        edx = t6;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e8fa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e8fa0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
