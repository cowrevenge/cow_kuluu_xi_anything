/* f_0x10211050 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10211050(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    wr32(sp0 - 0x14u, sp0 - 8u);
    t1 = rd32(self + 8u);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 8u, t1, g->edx, 0, 1, sp0 - 8u);
    t2 = g->edx;
    if (rd32(self + 0x1cu) == 0u)
    {
        eax = rd32(self + 0x1cu);
        edx = t2;
    }
    else
    {
        eax = rd32(self + 0x1cu);
        wr32(sp0 - 0x14u, 0x80808080u);
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x1cu, eax);
        t3 = (uint32_t)(int16_t)rd16(sp0 - 4u) - (uint32_t)(int16_t)rd16(sp0 - 8u) - 8u;
        wr32(sp0 - 0x20u, t3);
        t4 = (uint32_t)(int16_t)(rd32(sp0 - 6u) + 4u);
        wr32(sp0 - 0x24u, t4);
        t5 = (uint32_t)(int16_t)(rd32(sp0 - 8u) + 4u);
        wr32(sp0 - 0x28u, t5);
        g->eax = t5;
        g->edx = rd32(sp0 - 8u) + 4u;
        t6 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        t7 = cow_cdecl(g, COW_IMG(0x10156c30u), 6, t5, t4, t3, eax, 0u, 0x80808080u);
        t8 = g->edx;
        eax = t7;
        edx = t8;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10211050(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10211050(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
