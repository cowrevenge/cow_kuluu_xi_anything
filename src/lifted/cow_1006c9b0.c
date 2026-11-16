/* f_0x1006c9b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1006c9b0(Guest* g)
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
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 56u);

    wr32(sp0 - 0x28u, in_esi);
    if (rd32(rd32(COW_IMG(0x1047c004u)) + 0xcu) != 0u)
    {
        edx = in_edx;
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x1047c004u)) + 0xcu);
        ecx = rd32(COW_IMG(0x1047c004u));
        g->edx = in_edx;
        g->esp = sp0 - 0x28u;
        cow_thiscall(g, COW_IMG(0x1006c220u), ecx, 0);
        t1 = g->edx;
        edx = t1;
    }
    if (rd32(self + 4u) == 0u)
    {
        wr32(sp0 - 0x2cu, sp0 - 0x24u);
        wr32(sp0 - 0x30u, 0u);
        t2 = rd32(rd32(COW_IMG(0x1045666cu)) + 0x194u);
        wr32(sp0 - 0x34u, t2);
        g->esp = sp0 - 0x28u;
        cow_thiscall(g, rd32(rd32(t2) + 0x3cu), rd32(t2), 3, t2, 0u, sp0 - 0x24u);
        wr32(sp0 - 0x2cu, sp0 - 0x20u);
        t3 = rd32(sp0 - 0x24u);
        wr32(sp0 - 0x30u, t3);
        g->edx = sp0 - 0x20u;
        cow_thiscall(g, rd32(rd32(t3) + 0x20u), rd32(t3), 2, t3, sp0 - 0x20u);
        t4 = g->edx;
        t5 = rd32(sp0 - 0x24u);
        wr32(sp0 - 0x2cu, t5);
        cow_thiscall(g, rd32(rd32(t5) + 8u), rd32(t5), 1, t5);
        t6 = rd32(rd32(COW_IMG(0x1047c004u)) + 0x18u);
        t7 = rd32(COW_IMG(0x1047c004u));
        t8 = rd32(rd32(COW_IMG(0x1047c004u)) + 0x18u);
        wr32(self + 4u, t6);
        if (t8 == 0u)
        {
            edx = t7;
        }
        else
        {
            eax = t6;
            edx = t7;
            wr32(sp0 - 0x2cu, eax);
            g->edx = edx;
            g->esp = sp0 - 0x28u;
            cow_thiscall(g, rd32(rd32(eax) + 4u), rd32(eax), 1, eax);
            t9 = g->edx;
            edx = t9;
        }
        wr16(self, 0u);
    }
    g->edx = edx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006c9b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1006c9b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
