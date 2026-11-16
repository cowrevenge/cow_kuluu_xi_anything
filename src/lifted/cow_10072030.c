/* f_0x10072030 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10072030(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 20u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    if (rd32(self + 0x24u) >> 0x1bu & 1u)
    {
        eax = rd32(self + 0x24u) >> 0x1bu;
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x24u) >> 0x1bu;
        wr32(sp0 - 0xcu, self);
        wr32(sp0 - 0x10u, sp0 - 4u);
        g->esp = sp0 - 8u;
        cow_thiscall(g, COW_IMG(0x10074140u), rd32(COW_IMG(0x1047d128u)), 2, sp0 - 4u, self);
        if ((int32_t)(rd32(self + 0x24u) & 0x7fu) < 97)
        {
            edx = rd32(self + 0x24u) & 0x7fu;
        }
        else
        {
            edx = 4u;
        }
        if (rd32(COW_IMG(0x1047cf80u) + edx * 4u) != 0u)
        {
            eax = rd32(COW_IMG(0x1047cf80u) + edx * 4u);
            wr32(sp0 - 0xcu, self);
            g->edx = edx;
            g->esp = sp0 - 8u;
            cow_thiscall(g, COW_IMG(0x10071200u), rd32(eax) + 4u, 1, self);
            t1 = g->edx;
            edx = t1;
        }
        t2 = rd32(COW_IMG(0x1047cf80u) + edx * 4u);
        wr32(self + 0x10u, t2);
        t3 = rd32(self + 0x14u);
        wr32(COW_IMG(0x1047cf80u) + edx * 4u, t3);
        wr32(self + 0x2cu, rd32(COW_IMG(0x1047d124u)));
        t4 = rd32(self + 0x14u);
        wr32(COW_IMG(0x1047d124u), t4);
        t5 = rd32(self + 0x24u) | 0x8000000u;
        wr32(self + 0x24u, t5);
        eax = t5;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10072030(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10072030(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
