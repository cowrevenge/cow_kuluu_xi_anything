/* f_0x10138e60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10138e60(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0xcu, in_esi);
    if (rd8(self + 0x458u) == 0u)
    {
        eax = 0u;
        edx = (in_edx & 0xffffff00u) | rd8(self + 0x458u);
    }
    else
    {
        edx = (in_edx & 0xffffff00u) | rd8(self + 0x458u);
        t1 = rd32(self + 8u);
        wr16(sp0 - 8u, 0u);
        wr16(sp0 - 6u, 0u);
        wr16(sp0 - 4u, 0u);
        wr16(sp0 - 2u, 0u);
        wr32(sp0 - 0x10u, sp0 - 8u);
        g->esp = sp0 - 0xcu;
        t2 = cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 8u, t1, g->edx, 0, 1, sp0 - 8u);
        wr32(sp0 - 0x10u, 0x80808080u);
        wr32(sp0 - 0x14u, self + 0x458u);
        t3 = rd32(sp0 - 6u) + 6u;
        wr32(sp0 - 0x18u, t3);
        t4 = rd32(sp0 - 8u) + 4u;
        wr32(sp0 - 0x1cu, t4);
        wr32(sp0 - 0x20u, 0x64u);
        g->edx = t4;
        t5 = cow_cdecl(g, COW_IMG(0x101c9d50u), 5, 0x64u, t4, t3, self + 0x458u, 0x80808080u);
        t6 = g->edx;
        eax = t5;
        edx = t6;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10138e60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10138e60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
